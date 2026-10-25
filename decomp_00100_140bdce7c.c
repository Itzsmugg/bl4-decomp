// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140bdce7c FUN_140bdce7c body=54 status=ok
// SIG undefined FUN_140bdce7c(void)

void FUN_140bdce7c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140115352();
  }
  FUN_140d5168f(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bdceb2 FUN_140bdceb2 body=476 status=ok
// SIG undefined FUN_140bdceb2(void)

void FUN_140bdceb2(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_98 [44];
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x1990) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1990) + 0x1a00);
  }
  bVar11 = true;
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar7 = FUN_1448abda6(param_1);
    bVar11 = lVar7 != 0;
  }
  if ((lVar10 == 0) || (!bVar11)) goto LAB_140bdcfdd;
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if (lVar7 == 0) {
    lVar7 = FUN_1448abda6();
    if (lVar7 != 0) goto LAB_140bdcf35;
    fVar12 = 0.0;
    uVar9 = 0;
  }
  else {
LAB_140bdcf35:
    fVar12 = (float)*(double *)(lVar7 + 0x6d0);
    local_58 = *(undefined8 *)(param_1 + 0x870);
    local_68 = *(undefined4 *)(param_1 + 0x860);
    uStack_64 = *(undefined4 *)(param_1 + 0x864);
    uStack_60 = *(undefined4 *)(param_1 + 0x868);
    uStack_5c = *(undefined4 *)(param_1 + 0x86c);
    uVar9 = *(undefined1 *)(param_1 + 0x975);
  }
  plVar1 = (longlong *)(param_1 + 0x1d80);
  iVar4 = *(int *)(lVar10 + 0x1720);
  iVar5 = *(int *)(param_1 + 0x1d88);
  if (iVar5 < iVar4) {
    *(int *)(param_1 + 0x1d88) = iVar4;
    if ((uint)(*(int *)(param_1 + 0x1d8c) - iVar5) < (uint)(iVar4 - iVar5)) {
      FUN_145782776(plVar1,iVar5);
    }
    FUN_140bdd08f((longlong)iVar5 * 0x28 + *plVar1,iVar4 - iVar5);
  }
  else {
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar4 < iVar5) {
      *(int *)(param_1 + 0x1d88) = iVar4;
      FUN_148f05752();
    }
  }
  *(undefined8 *)(param_1 + 0x1d90) = 0;
  if (0 < *(int *)(lVar10 + 0x1720)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar6 = *plVar1;
      *(float *)(lVar6 + lVar7) = fVar12;
      puVar2 = (undefined4 *)(lVar6 + 4 + lVar7);
      *puVar2 = uStack_6c;
      puVar2[1] = local_68;
      puVar2[2] = uStack_64;
      puVar2[3] = uStack_60;
      puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar7);
      *puVar3 = CONCAT44(uStack_5c,uStack_60);
      puVar3[1] = local_58;
      *(undefined1 *)(lVar6 + 0x20 + lVar7) = uVar9;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x28;
    } while (lVar8 < *(int *)(lVar10 + 0x1720));
  }
LAB_140bdcfdd:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bdd08f FUN_140bdd08f body=45 status=ok
// SIG undefined FUN_140bdd08f(void)

void FUN_140bdd08f(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    uVar1 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 2) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined8 *)(param_1 + 6) = DAT_14c8464f0;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 140bdd0bc FUN_140bdd0bc body=2250 status=ok
// SIG undefined FUN_140bdd0bc(void)

/* WARNING: Type propagation algorithm not settling */

char FUN_140bdd0bc(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *******pppppppuVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_1b8 [39];
  char local_191;
  longlong local_190;
  wchar_t *local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  longlong local_148;
  longlong lStack_140;
  undefined1 local_138;
  undefined8 local_130;
  longlong lStack_128;
  undefined1 local_120;
  undefined8 *******local_118 [3];
  ushort local_100;
  byte local_f8;
  longlong local_f0 [7];
  undefined1 local_b8;
  undefined7 uStack_b7;
  longlong local_b0;
  longlong lStack_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  undefined8 *******local_90 [3];
  ushort local_78;
  byte local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = param_1 + 0x28;
  iVar7 = *(int *)(param_1 + 0x34);
  FUN_14028f404(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((iVar7 < 0) && (*(int *)(param_1 + 0x34) != 0)) {
    FUN_1487bfb9e(local_190,0);
  }
  local_191 = FUN_140d4c998(*(undefined8 *)(param_1 + 0x10),DAT_14cb71050,&DAT_14cb71058);
  if (local_191 != '\0') {
    lVar9 = *(longlong *)(param_1 + 0x10);
    local_148 = 0;
    lStack_140 = 0;
    local_138 = 2;
    local_130 = 0;
    lStack_128 = 0;
    local_120 = 2;
    if (lVar9 != 0) {
      FUN_140d4cc24(lVar9,1);
      lStack_140 = *(longlong *)(lVar9 + 0x68);
      local_148 = lVar9;
      if (lStack_140 == 0) {
        lStack_128 = 0;
      }
      else {
        lStack_128 = *(longlong *)(lStack_140 + 0x48);
      }
    }
    local_130 = 0;
    local_138 = 2;
    plVar8 = (longlong *)FUN_140bddbca(&local_148,&DAT_14cb70de8,0);
    if (plVar8 != (longlong *)0x0) {
      do {
        lVar9 = (**(code **)(*plVar8 + 8))(plVar8);
        lVar10 = FUN_140c1c194();
        if (((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
            lVar10 + 0x30)) break;
        plVar11 = (longlong *)FUN_140950d40(local_190);
        if (plVar11[1] == 0) {
          uVar12 = FUN_140c1c194();
          lVar9 = FUN_14477b664(uVar12);
          plVar11[1] = lVar9;
        }
        lVar9 = FUN_140c1c194();
        uVar12 = FUN_140c1c194();
        FUN_1402d1bfa(&local_b8,uVar12,plVar8);
        if (*plVar11 != CONCAT71(uStack_b7,local_b8)) {
          plVar11[2] = 0;
        }
        *plVar11 = CONCAT71(uStack_b7,local_b8);
        lVar10 = FUN_140c1c194();
        if (lVar9 == 0) {
LAB_140bdd28b:
          lVar10 = lVar9;
        }
        else if (lVar10 == 0) {
          lVar10 = 0;
        }
        else if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                 == lVar10 + 0x30)) goto LAB_140bdd28b;
        if (plVar11[1] != lVar10) {
          plVar11[2] = 0;
        }
        uVar12 = FUN_14477b664(lVar10);
        lVar9 = FUN_14477b664(uVar12);
        plVar11[1] = lVar9;
        if ((lVar9 != 0) && (*plVar11 != 0)) {
          plVar11[2] = (longlong)plVar8;
        }
        local_168 = 2;
        local_160 = 0;
        local_150 = 2;
        if ((lStack_128 != 0) && (*(longlong *)(lStack_128 + 0x58) != 0)) {
          local_170 = lStack_128;
          local_158 = *(undefined8 *)(lStack_128 + 0x48);
          plVar15 = plVar11 + 3;
          local_178 = *(longlong *)(lStack_128 + 0x58);
          do {
            lVar10 = local_170;
            local_188 = (wchar_t *)0x0;
            uStack_180 = 0;
            FUN_140bddd88(local_170,&local_188,0);
            lVar9 = plVar11[4];
            if ((int)uStack_180 < 2) {
LAB_140bdd371:
              cVar6 = (**(code **)(*plVar8 + 0x30))(plVar8,(int)lVar9);
              if (cVar6 == '\x01') {
                if (1 < (int)uStack_180) {
                  FUN_1400b22c2(&local_b8,&DAT_14a179944);
                  uVar5 = uStack_b7;
                  uVar4 = local_b8;
                  if ((int)uStack_180 == (int)local_b0) {
                    bVar16 = true;
                    if (1 < (int)uStack_180) {
                      iVar7 = wcscmp(local_188,(wchar_t *)CONCAT71(uStack_b7,local_b8));
                      bVar16 = iVar7 == 0;
                    }
                  }
                  else {
                    bVar16 = (int)local_b0 + (int)uStack_180 == 1;
                  }
                  if (CONCAT71(uVar5,uVar4) != 0) {
                    FUN_1400020a8(CONCAT71(uVar5,uVar4));
                  }
                  if (bVar16) {
                    local_b8 = 1;
                    local_78 = 0;
                    local_70 = 0;
                    local_68 = 0;
                    local_a0 = (longlong *)0x0;
                    uStack_98 = 0;
                    local_b0 = 0;
                    lStack_a8 = 0;
                    iVar7 = (int)plVar11[4];
                    *(uint *)(plVar11 + 4) = iVar7 + 1U;
                    if (*(uint *)((longlong)plVar11 + 0x24) < iVar7 + 1U) {
                      FUN_14095139e(plVar15,iVar7);
                    }
                    lVar9 = *plVar15;
                    lVar10 = (longlong)iVar7 * 0x58;
                    puVar1 = (undefined1 *)(lVar9 + lVar10);
                    *puVar1 = local_b8;
                    goto LAB_140bdd91b;
                  }
                }
                plVar13 = (longlong *)FUN_140bddbca(&local_178,&DAT_14cb70de8);
                if (plVar13 != (longlong *)0x0) {
                  lVar9 = (**(code **)(*plVar13 + 8))(plVar13);
                  lVar10 = FUN_140c1c194();
                  if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
                     (*(longlong *)
                       (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                      lVar10 + 0x30)) {
                    local_b8 = 1;
                    local_b0 = 0;
                    lStack_a8 = 0;
                    local_a0 = (longlong *)0x0;
                    uVar12 = FUN_140c1c194();
                    lStack_a8 = FUN_14477b664(uVar12);
                    lVar9 = FUN_140c1c194();
                    uVar12 = FUN_140c1c194();
                    FUN_1402d1bfa(local_f0,uVar12);
                    if (local_b0 != local_f0[0]) {
                      local_a0 = (longlong *)0x0;
                    }
                    local_b0 = local_f0[0];
                    lVar10 = FUN_140c1c194();
                    if (lVar9 == 0) {
LAB_140bdd4d3:
                      lVar10 = lVar9;
                    }
                    else if (lVar10 == 0) {
                      lVar10 = 0;
                    }
                    else if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                            (*(longlong *)
                              (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                             == lVar10 + 0x30)) goto LAB_140bdd4d3;
                    if (lStack_a8 != lVar10) {
                      local_a0 = (longlong *)0x0;
                    }
                    uVar12 = FUN_14477b664(lVar10);
                    lStack_a8 = FUN_14477b664(uVar12);
                    if ((lStack_a8 != 0) && (local_b0 != 0)) {
                      local_a0 = plVar13;
                    }
                    uStack_98 = 0;
                    local_78 = 0;
                    local_70 = 0;
                    local_68 = 0;
                    iVar7 = (int)plVar11[4];
                    *(uint *)(plVar11 + 4) = iVar7 + 1U;
                    if (*(uint *)((longlong)plVar11 + 0x24) < iVar7 + 1U) {
                      FUN_14095139e(plVar15,iVar7);
                    }
                    puVar1 = (undefined1 *)(*plVar15 + (longlong)iVar7 * 0x58);
                    *puVar1 = local_b8;
                    *(undefined8 *)(puVar1 + 8) = 0;
                    *(undefined8 *)(puVar1 + 0x10) = 0;
                    *(undefined8 *)(puVar1 + 0x18) = 0;
                    *(longlong *)(puVar1 + 8) = local_b0;
                    uVar12 = FUN_14477b664(lStack_a8);
                    uVar12 = FUN_14477b664(uVar12);
                    *(undefined8 *)(puVar1 + 0x10) = uVar12;
                    *(longlong **)(puVar1 + 0x18) = local_a0;
                    FUN_140382e86(puVar1 + 0x20,&uStack_98);
                    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)local_70 * 0x120));
                    pppppppuVar14 = local_90[0];
                    uVar3 = local_78;
                    if (pcVar2 != (code *)0x0) {
                      pppppppuVar14 = local_90;
                      if (0x18 < local_78) {
                        pppppppuVar14 = local_90[0];
                      }
                      (*pcVar2)(pppppppuVar14);
                      pppppppuVar14 = local_90[0];
                      uVar3 = local_78;
                    }
                    goto joined_r0x000140bdd872;
                  }
                }
              }
              else if (cVar6 == '\x02') {
                (**(code **)(*plVar8 + 0x60))(plVar8,local_118,(int)lVar9,lVar10);
                FUN_140cc7bf8(local_f0,local_118);
                local_b8 = 2;
                local_b0 = 0;
                lStack_a8 = 0;
                local_a0 = (longlong *)0x0;
                FUN_14034cca6(&uStack_98,local_f0);
                iVar7 = (int)plVar11[4];
                *(uint *)(plVar11 + 4) = iVar7 + 1U;
                if (*(uint *)((longlong)plVar11 + 0x24) < iVar7 + 1U) {
                  FUN_14095139e(plVar15,iVar7);
                }
                lVar9 = *plVar15;
                puVar1 = (undefined1 *)(lVar9 + (longlong)iVar7 * 0x58);
                *puVar1 = local_b8;
                FUN_145d1462c(puVar1 + 8,&local_b0);
                FUN_140382e86(lVar9 + (longlong)iVar7 * 0x58 + 0x20,&uStack_98);
                FUN_144a2da94(&uStack_98);
                FUN_144a2da94(local_f0);
                pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
                pppppppuVar14 = local_118[0];
                uVar3 = local_100;
                if (pcVar2 != (code *)0x0) {
                  pppppppuVar14 = local_118;
                  if (0x18 < local_100) {
                    pppppppuVar14 = local_118[0];
                  }
                  (*pcVar2)(pppppppuVar14);
                  pppppppuVar14 = local_118[0];
                  uVar3 = local_100;
                }
joined_r0x000140bdd872:
                if (0x18 < uVar3) {
                  FUN_1400020a8(pppppppuVar14);
                }
              }
            }
            else {
              FUN_1400b22c2(&local_b8,&DAT_14a157a11);
              uVar5 = uStack_b7;
              uVar4 = local_b8;
              if ((int)uStack_180 == (int)local_b0) {
                bVar16 = true;
                if (1 < (int)uStack_180) {
                  iVar7 = wcscmp(local_188,(wchar_t *)CONCAT71(uStack_b7,local_b8));
                  bVar16 = iVar7 == 0;
                }
              }
              else {
                bVar16 = (int)local_b0 + (int)uStack_180 == 1;
              }
              if (CONCAT71(uVar5,uVar4) != 0) {
                FUN_1400020a8(CONCAT71(uVar5,uVar4));
              }
              if (!bVar16) goto LAB_140bdd371;
              local_b8 = 0;
              local_78 = 0;
              local_70 = 0;
              local_68 = 0;
              local_a0 = (longlong *)0x0;
              uStack_98 = 0;
              local_b0 = 0;
              lStack_a8 = 0;
              iVar7 = (int)plVar11[4];
              *(uint *)(plVar11 + 4) = iVar7 + 1U;
              if (*(uint *)((longlong)plVar11 + 0x24) < iVar7 + 1U) {
                FUN_14095139e(plVar15,iVar7);
              }
              lVar9 = *plVar15;
              lVar10 = (longlong)iVar7 * 0x58;
              puVar1 = (undefined1 *)(lVar9 + lVar10);
              *puVar1 = local_b8;
LAB_140bdd91b:
              FUN_145d1462c(puVar1 + 8,&local_b0);
              FUN_140382e86(lVar9 + lVar10 + 0x20,&uStack_98);
              FUN_144a2da94(&uStack_98);
            }
            FUN_140bdd98c(&local_178);
            if (local_188 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          } while (local_170 != 0);
        }
        FUN_140bdd98c(&local_148);
        plVar8 = (longlong *)FUN_140bddbca(&local_148,&DAT_14cb70de8,0);
      } while (plVar8 != (longlong *)0x0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_191;
}



// FUNCTION 140bdd98c FUN_140bdd98c body=57 status=ok
// SIG undefined FUN_140bdd98c(void)

bool FUN_140bdd98c(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x40);
  }
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_140bdd9c6(param_1,*(undefined1 *)(param_1 + 0x28),1);
  return *(longlong *)(param_1 + 8) != 0;
}



// FUNCTION 140bdd9c6 FUN_140bdd9c6 body=218 status=ok
// SIG undefined FUN_140bdd9c6(void)

void FUN_140bdd9c6(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_3 == '\0') && (*(char *)(param_1 + 0x10) == param_2)) goto LAB_140bdda0c;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_140bdda94:
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
    *(longlong *)(param_1 + 0x20) = lVar1;
    if (lVar1 != 0) {
      if (param_2 == '\0') {
        uStack_40 = 0;
        local_38 = 1;
        local_30 = 0xf;
        local_48 = 0x5f;
        cVar2 = FUN_140bddaa2(lVar1,0,&local_48);
        FUN_1401d9a90(&local_48);
        if (cVar2 != '\0') {
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x48);
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x40);
        }
      }
      else if (param_2 == '\x01') {
        *(longlong *)(param_1 + 0x18) = lVar1;
        goto LAB_140bdda94;
      }
    }
  }
  *(char *)(param_1 + 0x10) = param_2;
LAB_140bdda0c:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bddaa2 FUN_140bddaa2 body=140 status=ok
// SIG undefined FUN_140bddaa2(void)

bool FUN_140bddaa2(longlong param_1,short param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_58 [46];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (-1 < param_2) {
    local_2a = 0;
    cVar1 = FUN_140bddb30(param_1,&local_2a,0);
    bVar3 = local_2a == param_2;
    if (cVar1 != '\0') goto LAB_140bddaed;
  }
  if (*(longlong *)(param_3 + 0x10) == 0) {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_1470ab644(param_1 + 8,param_3);
    bVar3 = iVar2 == 0;
  }
LAB_140bddaed:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bddb30 FUN_140bddb30 body=153 status=ok
// SIG undefined FUN_140bddb30(void)

undefined8 FUN_140bddb30(longlong param_1,undefined2 *param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x30))) {
    if (0xffffffef <
        *(int *)(*(longlong *)(param_1 + 0x28) + 0x18 + (ulonglong)param_3 * 0x20) - 0x11U) {
      lVar2 = *(longlong *)(param_1 + 0x28) + (ulonglong)param_3 * 0x20;
      *param_2 = 0;
      local_1c = 0;
      local_28 = *(undefined4 *)(lVar2 + 0x18);
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x10);
      }
      FUN_14493566c(&local_1c,0,lVar2,0);
      *param_2 = (undefined2)local_1c;
      uVar1 = CONCAT71((uint7)(byte)((uint)local_1c >> 8),1);
      goto LAB_140bddba8;
    }
  }
  uVar1 = 0;
LAB_140bddba8:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bddbca FUN_140bddbca body=445 status=ok
// SIG undefined FUN_140bddbca(void)

longlong FUN_140bddbca(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  int local_b8;
  ulonglong local_a8 [2];
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = 0;
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1447715ec(&local_78,&DAT_14c9485f0);
    local_50[0] = 0xffffffff;
    lVar5 = *(longlong *)(param_1 + 8);
    if ((longlong)*(int *)(lVar5 + 0x30) < 1) {
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        plVar3 = (longlong *)(lVar5 + 8);
        if (0xf < *(ulonglong *)(lVar5 + 0x20)) {
          plVar3 = (longlong *)*plVar3;
        }
        local_a8[0] = 0;
        local_a8[1] = 0;
        local_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        FUN_1446ddda2(local_a8,plVar3,0);
        FUN_1404e49fa(&local_78,local_a8);
        if (local_90 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      lVar7 = *(longlong *)(lVar5 + 0x28);
      lVar6 = (longlong)*(int *)(lVar5 + 0x30) << 5;
      lVar5 = 0;
      bVar2 = 0;
      do {
        lVar6 = lVar6 + -0x20;
        if (*(int *)(lVar7 + 0x18) - 1U < 0x10) {
          local_a8[0] = local_a8[0] & 0xffffffff00000000;
          lVar4 = *(longlong *)(lVar7 + 0x10);
          if (*(longlong *)(lVar7 + 0x10) == 0) {
            lVar4 = lVar7;
          }
          local_b8 = *(int *)(lVar7 + 0x18);
          FUN_14493566c(local_a8,0,lVar4,0);
          *(undefined2 *)((longlong)local_50 + lVar5 * 2) = (undefined2)local_a8[0];
        }
        lVar7 = lVar7 + 0x20;
        lVar5 = 1;
        bVar1 = (bool)(bVar2 | lVar6 == 0);
        bVar2 = 1;
      } while (!bVar1);
    }
    lVar5 = (**(code **)(*param_2 + 0x30))(param_2,&local_78);
    if (param_3 != 0 && lVar5 == 0) {
      FUN_1447715ec(param_3,&local_78);
      *(undefined4 *)(param_3 + 0x28) = local_50[0];
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 140bddd88 FUN_140bddd88 body=427 status=ok
// SIG undefined FUN_140bddd88(void)

undefined8 FUN_140bddd88(longlong param_1,undefined8 param_2,char param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  char *_Str;
  undefined8 ****ppppuVar7;
  undefined1 auStack_188 [32];
  undefined8 ***local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong local_150;
  undefined1 local_148 [256];
  undefined1 *local_48;
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (param_3 == '\0') {
      uVar2 = 0;
      goto LAB_140bdde47;
    }
    local_168 = (undefined8 ****)0x0;
    uStack_160 = 0;
    local_158 = 0;
    local_150 = 0xf;
    FUN_140eff8d8(0,&local_168);
    ppppuVar7 = &local_168;
    if (0xf < local_150) {
      ppppuVar7 = (undefined8 ****)local_168;
    }
    FUN_144a81018(local_148,ppppuVar7);
    FUN_14020fad6(param_2,local_40);
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401d9a90(&local_168);
  }
  else {
    _Str = (char *)(param_1 + 8);
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      _Str = *(char **)_Str;
    }
    local_48 = (undefined1 *)0x0;
    if (_Str == (char *)0x0) {
      local_40 = (undefined1 *)0x0;
      local_38 = 0;
    }
    else {
      sVar1 = strlen(_Str);
      iVar5 = (int)sVar1;
      uVar6 = iVar5 + 1;
      local_38 = iVar5;
      if (uVar6 < 0x81) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        FUN_1446efa72(&local_48,0,uVar6,2);
        puVar4 = local_48;
      }
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = local_148;
      }
      local_40 = puVar4;
      if (-1 < iVar5) {
        uVar3 = 0;
        do {
          *(short *)(puVar4 + uVar3 * 2) = (short)_Str[uVar3];
          uVar3 = uVar3 + 1;
        } while (uVar6 != uVar3);
      }
    }
    FUN_14020fad6(param_2,local_40);
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar2 = 1;
LAB_140bdde47:
  if ((local_30 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140bddf34 FUN_140bddf34 body=189 status=ok
// SIG undefined FUN_140bddf34(void)

longlong * FUN_140bddf34(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar2 = param_1[0x16];
    local_20 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    uVar4 = FUN_140bddff2(lVar2 + 0x18,&local_20);
  }
  local_20 = CONCAT44(local_20._4_4_,uVar4);
  puVar3 = (ulonglong *)param_1[1];
  if (puVar3[1] < *puVar3 + 4) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_20);
    }
  }
  else {
    *puVar3 = *puVar3 + 4;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bddff2 FUN_140bddff2 body=174 status=ok
// SIG undefined FUN_140bddff2(void)

ulonglong FUN_140bddff2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 3;
    uVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5 * 8) == lVar3) {
        if ((int)uVar5 != -1) goto LAB_140bde072;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_140845902(param_1,uVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_140bde072:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140bde0a0 FUN_140bde0a0 body=152 status=ok
// SIG undefined FUN_140bde0a0(void)

void FUN_140bde0a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68;
  undefined1 local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  FUN_140bde1fc(param_1,local_54);
  local_88 = param_1 + 0x2c;
  local_80 = param_1 + 0x38;
  local_78 = param_1 + 0x44;
  local_70 = param_1 + 0x14;
  local_68 = uVar1;
  FUN_140bde13a(param_3,*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x28),local_54);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bde13a FUN_140bde13a body=193 status=ok
// SIG undefined FUN_140bde13a(void)

void FUN_140bde13a(longlong param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8,
                  undefined1 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  
  lVar5 = FUN_1403a0554(param_1,param_4,param_5,param_6,param_7,param_3,1,param_2);
  if (lVar5 != 0) {
    cVar4 = FUN_1403218c0((undefined4 *)(lVar5 + 0x38),param_8);
    if (cVar4 == '\0') {
      uVar1 = param_8[1];
      uVar2 = param_8[2];
      uVar3 = param_8[3];
      *(undefined4 *)(lVar5 + 0x38) = *param_8;
      *(undefined4 *)(lVar5 + 0x3c) = uVar1;
      *(undefined4 *)(lVar5 + 0x40) = uVar2;
      *(undefined4 *)(lVar5 + 0x44) = uVar3;
      *(undefined8 *)(lVar5 + 0x58) = 0;
      FUN_140bde2c8(*(undefined8 *)(lVar5 + 0x30),lVar5,
                    CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_9) & 0xffffffff);
    }
    if (*(char *)(param_1 + 0x154) == '\0') {
      FUN_140bdeb5a(param_1,lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140bde1fc FUN_140bde1fc body=203 status=ok
// SIG undefined FUN_140bde1fc(void)

undefined8 * FUN_140bde1fc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *(undefined8 *)(param_1 + 0x2c);
  local_50 = *(undefined4 *)(param_1 + 0x34);
  FUN_1448075d0(local_48);
  lVar1 = FUN_14060eaf6(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar2 = DAT_14c948618;
  }
  else {
    if ((*(longlong *)(lVar1 + 0x4d8) == 0 & *(byte *)(lVar1 + 0x750)) != 1) {
      local_48[0] = *(longlong *)(lVar1 + 0x4d8);
      FUN_1401533ba(param_2,local_48,1);
      goto LAB_140bde278;
    }
    *(undefined4 *)(param_2 + 1) = DAT_14cb88800;
    uVar2 = DAT_14cb887f8;
  }
  *param_2 = uVar2;
LAB_140bde278:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bde2c8 FUN_140bde2c8 body=1459 status=ok
// SIG undefined FUN_140bde2c8(void)

void FUN_140bde2c8(longlong param_1,ulonglong param_2,byte param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  ulonglong *puVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  plVar14 = (longlong *)(param_1 + 0x220);
  uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  iVar20 = *(int *)(param_1 + 0x228);
  iVar15 = *(int *)(param_1 + 0x254);
  if (iVar20 != iVar15) {
    lVar8 = param_1 + 600;
    if (*(longlong *)(param_1 + 0x260) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x260);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x268) - 1U & uVar6) * 4);
    if (iVar7 != -1) {
      do {
        puVar17 = (ulonglong *)(*plVar14 + (longlong)iVar7 * 0x18);
        if (*puVar17 == param_2) {
          if (puVar17 != (ulonglong *)0x0) goto LAB_140bde550;
          break;
        }
        iVar7 = (int)puVar17[2];
      } while (iVar7 != -1);
    }
  }
  if (iVar15 == 0) {
    *(int *)(param_1 + 0x228) = iVar20 + 1;
    if (*(int *)(param_1 + 0x22c) == iVar20) {
      FUN_14482b872(plVar14,iVar20);
    }
    iVar15 = *(int *)(param_1 + 0x248);
    if (iVar15 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar7 = iVar15 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    lVar18 = param_1 + 0x230;
    iVar10 = iVar15 + 1;
    iVar16 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar16 = iVar15;
    }
    if (iVar16 >> 5 == iVar7) {
      *(int *)(param_1 + 0x248) = iVar10;
    }
    else {
      if (*(int *)(param_1 + 0x24c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar7 = iVar15;
        }
        else {
          uVar19 = iVar15 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x24c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar19) {
              uVar11 = uVar19;
            }
          }
          else {
            uVar11 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar11 << 2,0);
          iVar7 = (int)(uVar12 >> 2);
          iVar10 = -0x20;
          if ((int)uVar19 <= iVar7) {
            iVar10 = iVar7 << 5;
          }
          iVar7 = *(int *)(param_1 + 0x248);
        }
        *(int *)(param_1 + 0x24c) = iVar10;
        FUN_1446efbd8(lVar18,iVar7);
        iVar10 = *(int *)(param_1 + 0x248) + 1;
      }
      iVar7 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar7 = iVar10;
      }
      *(int *)(param_1 + 0x248) = iVar10;
      if (iVar10 % 0x20 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x240);
        if (*(longlong *)(param_1 + 0x240) == 0) {
          lVar8 = lVar18;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)(lVar8 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar8 + (longlong)(iVar7 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar20;
    if (*(longlong *)(param_1 + 0x240) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x240);
    }
    bVar9 = (byte)iVar15 & 0x1f;
    puVar2 = (uint *)(lVar18 + (longlong)(iVar16 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar20 = *(int *)(param_1 + 0x250);
    lVar8 = (longlong)iVar20;
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x220) + 4 + lVar8 * 0x18);
    *(int *)(param_1 + 0x250) = iVar7;
    *(int *)(param_1 + 0x254) = iVar15 + -1;
    if (iVar15 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x220) + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  iVar15 = 1;
  lVar18 = param_1 + 0x230;
  if (*(longlong *)(param_1 + 0x240) != 0) {
    lVar18 = *(longlong *)(param_1 + 0x240);
  }
  iVar7 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar7 = iVar20;
  }
  puVar2 = (uint *)(lVar18 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar20 & 0x1f);
  puVar17 = (ulonglong *)(*(longlong *)(param_1 + 0x220) + lVar8 * 0x18);
  *puVar17 = param_2;
  *(undefined1 *)(puVar17 + 1) = 0;
  *(undefined4 *)(puVar17 + 2) = 0xffffffff;
  uVar19 = *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x254);
  if (1 < uVar19) {
    lVar8 = param_1 + 600;
    if (*(longlong *)(param_1 + 0x260) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x260);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x268) - 1U & uVar6) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (ulonglong *)(*plVar14 + (longlong)iVar7 * 0x18);
        if (*puVar1 == param_2) {
          uVar3 = *(undefined4 *)((longlong)puVar17 + 4);
          uVar12 = puVar17[1];
          uVar4 = *(undefined4 *)((longlong)puVar17 + 0xc);
          *(int *)puVar1 = (int)*puVar17;
          *(undefined4 *)((longlong)puVar1 + 4) = uVar3;
          *(int *)(puVar1 + 1) = (int)uVar12;
          *(undefined4 *)((longlong)puVar1 + 0xc) = uVar4;
          FUN_14884ce5a(plVar14,iVar20);
          goto LAB_140bde53e;
        }
        iVar7 = (int)puVar1[2];
      } while (iVar7 != -1);
    }
  }
  if (3 < uVar19) {
    uVar12 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar15 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar19 < 1) || (iVar15 <= *(int *)(param_1 + 0x268))) {
    uVar6 = *(int *)(param_1 + 0x268) - 1U & uVar6;
    *(uint *)((longlong)puVar17 + 0x14) = uVar6;
    lVar8 = *(longlong *)(param_1 + 0x260);
    if (*(longlong *)(param_1 + 0x260) == 0) {
      lVar8 = param_1 + 600;
    }
    *(undefined4 *)(puVar17 + 2) =
         *(undefined4 *)
          (lVar8 + ((longlong)*(int *)(param_1 + 0x268) - 1U & (longlong)(int)uVar6) * 4);
    lVar8 = *(longlong *)(param_1 + 0x260);
    if (*(longlong *)(param_1 + 0x260) == 0) {
      lVar8 = param_1 + 600;
    }
    *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x268) - 1U & (longlong)(int)uVar6) * 4) = iVar20
    ;
  }
  else {
    *(int *)(param_1 + 0x268) = iVar15;
    FUN_140bdf548(plVar14);
  }
LAB_140bde53e:
  puVar17 = (ulonglong *)(*plVar14 + (longlong)iVar20 * 0x18);
LAB_140bde550:
  puVar17 = puVar17 + 1;
  if (((*(char *)(param_1 + 0x154) == '\0') && (*(char *)(param_1 + 0x155) == '\0')) &&
     (*(char *)(param_1 + 0x359) == '\0')) {
    param_3 = param_3 ^ 1;
  }
  else {
    param_3 = 0;
  }
  *(byte *)puVar17 = param_3;
  FUN_140bded0c(param_1,param_2);
  lVar8 = *(longlong *)(param_2 + 0x10);
  if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x1c0) != 0)) {
    lVar18 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x1b8) + 8 + lVar18) != 0) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x1b8) + lVar18) != 0)) {
        FUN_140bdf372(param_1 + 0x270,lVar8 + 0x10);
        break;
      }
      lVar18 = lVar18 + 0x10;
    } while ((longlong)*(int *)(lVar8 + 0x1c0) * 0x10 != lVar18);
  }
  if ((((*(byte *)(param_2 + 0x60) & 1) == 0) ||
      (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x158))
                         (*(longlong **)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x10)),
      cVar5 == '\0')) || (*(char *)(param_1 + 0x151) != '\x01')) {
    return;
  }
  uVar12 = *puVar17;
  cVar5 = FUN_140bde87c(param_1);
  if (param_2 == 0 || cVar5 != '\x01') {
    return;
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    uVar6 = *(uint *)(param_1 + 0x140);
    uVar13 = 0;
    if (((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) goto LAB_140bde666;
    plVar14 = (longlong *)
              ((ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
    if ((((plVar14 != (longlong *)0x0) &&
         (((int)plVar14[2] == *(int *)(param_1 + 0x144) &&
          ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))) && (*plVar14 != 0)) &&
       (lVar8 = *(longlong *)(*plVar14 + 0x30), lVar8 != 0)) {
      uVar13 = *(undefined8 *)(lVar8 + 0x360);
      goto LAB_140bde666;
    }
  }
  uVar13 = 0;
LAB_140bde666:
  FUN_140bde906(uVar13,param_2,(uint)CONCAT71((int7)((ulonglong)puVar17 >> 8),(char)uVar12) ^ 1);
  FUN_140bdeb5a(param_1,param_2);
  return;
}



// FUNCTION 140bde87c FUN_140bde87c body=137 status=ok
// SIG undefined FUN_140bde87c(void)

bool FUN_140bde87c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x144) != 0) {
    uVar1 = *(uint *)(param_1 + 0x140);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x144))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar3;
      }
      else {
        lVar4 = 0;
      }
      if (*(longlong *)(lVar4 + 0x30) == 0) {
        return true;
      }
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x360) == 0) {
        return true;
      }
      iVar2 = FUN_14490d72a();
      return iVar2 != 3;
    }
  }
  return false;
}



// FUNCTION 140bde906 FUN_140bde906 body=166 status=ok
// SIG undefined FUN_140bde906(void)

void FUN_140bde906(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  plVar5 = (longlong *)FUN_140bde9ac();
  if ((plVar5 != (longlong *)0x0) && (lVar4 = plVar5[1], (longlong)(int)lVar4 != 0)) {
    lVar3 = *plVar5;
    lVar8 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 4 + lVar8);
      if ((((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar8), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((puVar7 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == iVar1)) &&
          ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
          uVar6 = *puVar7;
        }
        else {
          uVar6 = 0;
        }
        FUN_1403d3c5e(uVar6,param_2,param_3);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar8);
  }
  return;
}



// FUNCTION 140bde9ac FUN_140bde9ac body=429 status=ok
// SIG undefined FUN_140bde9ac(void)

longlong FUN_140bde9ac(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  undefined4 *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  iVar2 = DAT_14cb7c5f0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 != 0) {
      local_4c = 1;
      if (DAT_14cb7c5f0 == 0) {
        local_38 = 0;
        local_50 = 0;
        local_3c = 0;
      }
      else {
        puVar4 = &DAT_14cb7c5d8;
        if (DAT_14cb7c5e8 != (uint *)0x0) {
          puVar4 = DAT_14cb7c5e8;
        }
        uVar6 = *puVar4;
        if (uVar6 == 0) {
          iVar7 = DAT_14cb7c5f0 + 0x1e;
          if (-1 < DAT_14cb7c5f0 + -1) {
            iVar7 = DAT_14cb7c5f0 + -1;
          }
          uVar9 = 0;
          uVar8 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar8 = uVar9;
          }
          local_50 = (int)uVar8 + 1;
          local_38 = (int)uVar8 * 0x20 + 0x20;
          iVar7 = 0;
          do {
            local_3c = DAT_14cb7c5f0;
            if (uVar8 == uVar9) goto LAB_140bde9f0;
            iVar7 = iVar7 + 0x20;
            uVar6 = puVar4[uVar9 + 1];
            uVar9 = uVar9 + 1;
          } while (uVar6 == 0);
          local_50 = (int)uVar9;
          local_38 = iVar7;
        }
        else {
          local_38 = 0;
          local_50 = 0;
        }
        local_4c = -uVar6 & uVar6;
        uVar8 = (ulonglong)local_4c * 2 + 1;
        lVar5 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_3c = (local_38 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (DAT_14cb7c5f0 <= local_3c) {
          local_3c = DAT_14cb7c5f0;
        }
      }
LAB_140bde9f0:
      local_58 = &DAT_14cb7c5c8;
      local_48 = &DAT_14cb7c5d8;
      local_40 = 0xffffffff;
      if (local_3c != DAT_14cb7c5f0) {
        do {
          lVar5 = (longlong)local_3c * 0x20 + *local_58;
          cVar3 = FUN_1405f6df2(lVar5,lVar1);
          if (cVar3 != '\0') {
            lVar5 = lVar5 + 8;
            break;
          }
          local_40 = local_40 & ~local_4c;
          FUN_1449c0562(&local_50);
        } while (((local_3c != iVar2) || (local_48 != &DAT_14cb7c5d8)) ||
                (lVar5 = 0, local_58 != &DAT_14cb7c5c8));
        goto LAB_140bdea28;
      }
    }
  }
  lVar5 = 0;
LAB_140bdea28:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 140bdeb5a FUN_140bdeb5a body=433 status=ok
// SIG undefined FUN_140bdeb5a(void)

void FUN_140bdeb5a(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((((((*(char *)(param_1 + 0x153) == '\0') && (*(char *)(param_1 + 0x151) == '\x01')) &&
        (param_2 != 0)) &&
       ((*(char *)(param_1 + 0x156) == '\0' && (*(longlong *)(param_2 + 0x10) != 0)))) &&
      (((cVar6 = FUN_14049edd8(), cVar6 != '\0' &&
        (((*(byte *)(param_2 + 0x60) & 1) != 0 &&
         (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x158))
                            (*(longlong **)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x10)),
         cVar6 != '\0')))) && (cVar6 = FUN_1403d4024(param_2), cVar6 != '\0')))) &&
     ((((*(int *)(param_1 + 0x144) != 0 && (uVar1 = *(uint *)(param_1 + 0x140), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      (((plVar8 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x144))) &&
       (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
        (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))))))) {
    if (*(code **)(*plVar8 + 0x498) == (code *)&LAB_14015c36e) {
      cVar6 = (char)plVar8[0x42];
    }
    else {
      cVar6 = (**(code **)(*plVar8 + 0x498))();
    }
    if (cVar6 == '\b') {
      lVar7 = *(longlong *)(param_2 + 0x10);
      iVar2 = *(int *)(lVar7 + 0x10);
      if (iVar2 != 0) {
        uVar3 = *(undefined4 *)(lVar7 + 0x14);
        iVar4 = *(int *)(lVar7 + 0x18);
        lVar7 = *(longlong *)(param_1 + 0x290);
        iVar5 = *(int *)(param_1 + 0x298);
        lVar10 = (longlong)iVar5;
        if (lVar10 != 0) {
          lVar9 = 0;
          do {
            if ((*(int *)(lVar7 + lVar9) == iVar2) && (*(int *)(lVar7 + 8 + lVar9) == iVar4)) {
              return;
            }
            lVar9 = lVar9 + 0xc;
          } while (lVar10 * 0xc != lVar9);
        }
        *(uint *)(param_1 + 0x298) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x29c) < iVar5 + 1U) {
          FUN_1446dd912((longlong *)(param_1 + 0x290),iVar5);
          lVar7 = *(longlong *)(param_1 + 0x290);
        }
        *(int *)(lVar7 + lVar10 * 0xc) = iVar2;
        *(undefined4 *)(lVar7 + 4 + lVar10 * 0xc) = uVar3;
        *(int *)(lVar7 + 8 + lVar10 * 0xc) = iVar4;
      }
    }
  }
  return;
}



// FUNCTION 140bded0c FUN_140bded0c body=816 status=ok
// SIG undefined FUN_140bded0c(void)

void FUN_140bded0c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar4 = *(byte *)(param_2 + 0x60);
  if ((bVar4 & 4) != 0) {
    local_38 = local_38 & 0xffffff00;
    uStack_34 = 0;
    uStack_30 = 0;
    local_2c = 0;
    FUN_144976b9c(&local_38,DAT_14cb88930);
    cVar5 = FUN_1403218c0(param_2 + 0x38,&local_38);
    lVar3 = *(longlong *)(param_2 + 0x10);
    lVar9 = *(longlong *)(lVar3 + 0x88);
    iVar2 = *(int *)(lVar3 + 0x90);
    lVar8 = (longlong)iVar2;
    if (cVar5 == '\0') {
      if (iVar2 != 0) {
        lVar8 = lVar8 * 8;
        lVar7 = 0;
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar9 + lVar7 * 8) == *(longlong *)(param_2 + 0x18)) {
            if ((uint)lVar7 != 0xffffffff) {
              memmove((void *)(lVar9 + (lVar10 >> 0x20) * 8),
                      (void *)(lVar9 + (lVar10 >> 0x20) * 8 + 8),
                      (longlong)(int)(~(uint)lVar7 + iVar2) << 3);
              *(int *)(lVar3 + 0x90) = *(int *)(lVar3 + 0x90) + -1;
            }
            break;
          }
          lVar10 = lVar10 + 0x100000000;
          lVar7 = lVar7 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      if (iVar2 != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(lVar9 + lVar7) == *(longlong *)(param_2 + 0x18)) goto LAB_140bdef8b;
          lVar7 = lVar7 + 8;
        } while (lVar8 * 8 - lVar7 != 0);
      }
      *(uint *)(lVar3 + 0x90) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0x94) < iVar2 + 1U) {
        FUN_140a631ae((longlong *)(lVar3 + 0x88),iVar2);
        lVar9 = *(longlong *)(lVar3 + 0x88);
      }
      *(undefined8 *)(lVar9 + lVar8 * 8) = *(undefined8 *)(param_2 + 0x18);
    }
LAB_140bdef8b:
    bVar4 = *(byte *)(param_2 + 0x60);
  }
  if (((bVar4 & 2) != 0) && (lVar8 = *(longlong *)(param_2 + 0x10), lVar8 != 0)) {
    local_40 = *(undefined4 *)(lVar8 + 0x18);
    local_48 = *(undefined8 *)(lVar8 + 0x10);
    param_2 = param_2 + 0x38;
    local_38 = local_38 & 0xffffff00;
    uStack_34 = 0;
    uStack_30 = 0;
    local_2c = 0;
    FUN_144976b9c(&local_38,DAT_14cb888c0);
    uVar6 = FUN_1403218c0(param_2,&local_38);
    local_58 = local_48;
    local_50 = local_40;
    FUN_140bdf04e(param_1,&local_58,uVar6);
    local_38 = local_38 & 0xffffff00;
    uStack_34 = 0;
    uStack_30 = 0;
    local_2c = 0;
    FUN_144976b9c(&local_38,DAT_14cb88928);
    cVar5 = FUN_1403218c0(param_2,&local_38);
    if (cVar5 == '\0') {
      local_38 = local_38 & 0xffffff00;
      uStack_34 = 0;
      uStack_30 = 0;
      local_2c = 0;
      FUN_144976b9c(&local_38,DAT_14cb888c8);
      uVar6 = FUN_1403218c0(param_2,&local_38);
    }
    else {
      uVar6 = 1;
    }
    local_60 = local_40;
    local_68 = local_48;
    FUN_140bdf15a(param_1,&local_68,uVar6);
    local_38 = local_38 & 0xffffff00;
    uStack_34 = 0;
    uStack_30 = 0;
    local_2c = 0;
    FUN_144976b9c(&local_38,DAT_14cb88920);
    uVar6 = FUN_1403218c0(param_2,&local_38);
    local_38 = (uint)local_48;
    uStack_34 = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_30 = local_40;
    FUN_140bdf266(param_1,&local_38,uVar6);
  }
  if ((((*(int *)(param_1 + 0x144) != 0) && (uVar1 = *(uint *)(param_1 + 0x140), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     (((lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 != 0 &&
       (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x144))) &&
      ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bdf04e FUN_140bdf04e body=267 status=ok
// SIG undefined FUN_140bdf04e(void)

void FUN_140bdf04e(longlong param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  int *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x2b8);
  lVar3 = *(longlong *)(param_1 + 0x2b8);
  iVar2 = *(int *)(param_1 + 0x2c0);
  lVar5 = (longlong)iVar2;
  if (param_3 == '\0') {
    if (iVar2 != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(lVar3 + lVar4) == *param_2) && (*(int *)(lVar3 + 8 + lVar4) == param_2[2])) {
          local_30 = param_2;
          FUN_140bdf3fa(plVar1);
          goto LAB_140bdf122;
        }
        lVar4 = lVar4 + 0xc;
      } while (lVar5 * 0xc != lVar4);
    }
  }
  else {
    if (iVar2 != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(lVar3 + lVar4) == *param_2) && (*(int *)(lVar3 + 8 + lVar4) == param_2[2]))
        goto LAB_140bdf129;
        lVar4 = lVar4 + 0xc;
      } while (lVar5 * 0xc != lVar4);
    }
    *(uint *)(param_1 + 0x2c0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x2c4) < iVar2 + 1U) {
      FUN_1446dd912(plVar1,iVar2);
      lVar3 = *plVar1;
    }
    *(int *)(lVar3 + 8 + lVar5 * 0xc) = param_2[2];
    *(undefined8 *)(lVar3 + lVar5 * 0xc) = *(undefined8 *)param_2;
LAB_140bdf122:
    *(undefined1 *)(param_1 + 0x2b0) = 1;
  }
LAB_140bdf129:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bdf15a FUN_140bdf15a body=267 status=ok
// SIG undefined FUN_140bdf15a(void)

void FUN_140bdf15a(longlong param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  int *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x2e8);
  lVar3 = *(longlong *)(param_1 + 0x2e8);
  iVar2 = *(int *)(param_1 + 0x2f0);
  lVar5 = (longlong)iVar2;
  if (param_3 == '\0') {
    if (iVar2 != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(lVar3 + lVar4) == *param_2) && (*(int *)(lVar3 + 8 + lVar4) == param_2[2])) {
          local_30 = param_2;
          FUN_140bdf3fa(plVar1);
          goto LAB_140bdf22e;
        }
        lVar4 = lVar4 + 0xc;
      } while (lVar5 * 0xc != lVar4);
    }
  }
  else {
    if (iVar2 != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(lVar3 + lVar4) == *param_2) && (*(int *)(lVar3 + 8 + lVar4) == param_2[2]))
        goto LAB_140bdf235;
        lVar4 = lVar4 + 0xc;
      } while (lVar5 * 0xc != lVar4);
    }
    *(uint *)(param_1 + 0x2f0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x2f4) < iVar2 + 1U) {
      FUN_1446dd912(plVar1,iVar2);
      lVar3 = *plVar1;
    }
    *(int *)(lVar3 + 8 + lVar5 * 0xc) = param_2[2];
    *(undefined8 *)(lVar3 + lVar5 * 0xc) = *(undefined8 *)param_2;
LAB_140bdf22e:
    *(undefined1 *)(param_1 + 0x2e0) = 1;
  }
LAB_140bdf235:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bdf266 FUN_140bdf266 body=267 status=ok
// SIG undefined FUN_140bdf266(void)

void FUN_140bdf266(longlong param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  int *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x2d0);
  lVar3 = *(longlong *)(param_1 + 0x2d0);
  iVar2 = *(int *)(param_1 + 0x2d8);
  lVar5 = (longlong)iVar2;
  if (param_3 == '\0') {
    if (iVar2 != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(lVar3 + lVar4) == *param_2) && (*(int *)(lVar3 + 8 + lVar4) == param_2[2])) {
          local_30 = param_2;
          FUN_140bdf3fa(plVar1);
          goto LAB_140bdf33a;
        }
        lVar4 = lVar4 + 0xc;
      } while (lVar5 * 0xc != lVar4);
    }
  }
  else {
    if (iVar2 != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(lVar3 + lVar4) == *param_2) && (*(int *)(lVar3 + 8 + lVar4) == param_2[2]))
        goto LAB_140bdf341;
        lVar4 = lVar4 + 0xc;
      } while (lVar5 * 0xc != lVar4);
    }
    *(uint *)(param_1 + 0x2d8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x2dc) < iVar2 + 1U) {
      FUN_1446dd912(plVar1,iVar2);
      lVar3 = *plVar1;
    }
    *(int *)(lVar3 + 8 + lVar5 * 0xc) = param_2[2];
    *(undefined8 *)(lVar3 + lVar5 * 0xc) = *(undefined8 *)param_2;
LAB_140bdf33a:
    *(undefined1 *)(param_1 + 0x2c8) = 1;
  }
LAB_140bdf341:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bdf372 FUN_140bdf372 body=135 status=ok
// SIG undefined FUN_140bdf372(void)

int FUN_140bdf372(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar3 = 0;
    do {
      if ((*(int *)(lVar4 + uVar3) == *param_2) && (*(int *)(lVar4 + 8 + uVar3) == param_2[2])) {
        iVar2 = (int)(uVar3 >> 2) * -0x55555555;
        if (iVar2 != -1) {
          return iVar2;
        }
        break;
      }
      uVar3 = uVar3 + 0xc;
    } while (lVar5 * 0xc != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446dd912(param_1,iVar1);
    lVar4 = *param_1;
  }
  *(int *)(lVar4 + 8 + lVar5 * 0xc) = param_2[2];
  *(undefined8 *)(lVar4 + lVar5 * 0xc) = *(undefined8 *)param_2;
  return iVar1;
}



// FUNCTION 140bdf3fa FUN_140bdf3fa body=334 status=ok
// SIG undefined FUN_140bdf3fa(void)

int FUN_140bdf3fa(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  
  iVar7 = *(int *)(param_1 + 1);
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    piVar1 = (int *)*param_1;
    iVar6 = 0;
    bVar14 = false;
    if (*piVar1 == *(int *)*param_2) {
      bVar14 = piVar1[2] == ((int *)*param_2)[2];
    }
    iVar3 = 0;
    do {
      lVar4 = (longlong)iVar3;
      iVar5 = iVar3 + 1;
      iVar2 = iVar5;
      if (iVar5 < iVar7) {
        iVar2 = iVar7;
      }
      if (lVar4 + 1 < lVar8) {
        piVar11 = piVar1 + lVar4 * 3 + 5;
        bVar9 = true;
        lVar10 = lVar4 + 2;
        do {
          iVar12 = iVar5;
          if (piVar11[-2] == *(int *)*param_2) {
            if ((*piVar11 == ((int *)*param_2)[2]) != bVar14) break;
          }
          else if (bVar14) break;
          bVar9 = lVar10 < lVar8;
          iVar5 = iVar5 + 1;
          piVar11 = piVar11 + 3;
          bVar13 = lVar10 != lVar8;
          lVar10 = lVar10 + 1;
          iVar12 = iVar2;
        } while (bVar13);
      }
      else {
        bVar9 = false;
        iVar12 = iVar2;
      }
      if (bVar14 == false) {
        if (iVar6 != iVar3) {
          memmove(piVar1 + (longlong)iVar6 * 3,piVar1 + lVar4 * 3,(longlong)(iVar12 - iVar3) * 0xc);
        }
        iVar6 = iVar6 + (iVar12 - iVar3);
      }
      bVar14 = (bool)(bVar14 ^ 1);
      iVar3 = iVar12;
    } while (bVar9);
    *(int *)(param_1 + 1) = iVar6;
    iVar7 = iVar7 - iVar6;
  }
  return iVar7;
}



// FUNCTION 140bdf548 FUN_140bdf548 body=679 status=ok
// SIG undefined FUN_140bdf548(void)

void FUN_140bdf548(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140bdf5ac;
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
LAB_140bdf5ac:
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



// FUNCTION 140bdf7f0 FUN_140bdf7f0 body=202 status=ok
// SIG undefined FUN_140bdf7f0(void)

void FUN_140bdf7f0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140bdf8d6();
  if (*(char *)(param_1 + 0x422c) == '\x01') {
    FUN_140bdf954(param_1,param_2);
    FUN_140bdfb26(param_1,&local_48,param_1 + 0x128,param_2);
    *(undefined8 *)(param_1 + 0x138) = local_38;
    *(undefined4 *)(param_1 + 0x128) = local_48;
    *(undefined4 *)(param_1 + 300) = uStack_44;
    *(undefined4 *)(param_1 + 0x130) = uStack_40;
    *(undefined4 *)(param_1 + 0x134) = uStack_3c;
  }
  lVar1 = *(longlong *)(param_1 + 0x4208);
  if (lVar1 != 0) {
    uVar3 = (**(code **)(*(longlong *)(lVar1 + 0x3b38) + 0x18))(lVar1 + 0x3b38);
    cVar2 = FUN_14025887a(uVar3);
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bdf8d6 FUN_140bdf8d6 body=126 status=ok
// SIG undefined FUN_140bdf8d6(void)

void FUN_140bdf8d6(longlong param_1,float param_2)

{
  float *pfVar1;
  
  FUN_140bdfefe();
  if (*(char *)(param_1 + 0x2ca8) == '\x01') {
    param_2 = param_2 + *(float *)(param_1 + 0x2cac);
    *(float *)(param_1 + 0x2cac) = param_2;
    if (((*(longlong *)(param_1 + 0x1cf0) != 0) &&
        (pfVar1 = (float *)(*(longlong *)(param_1 + 0x1cf0) + 0x44),
        *pfVar1 <= param_2 && param_2 != *pfVar1)) &&
       (*(undefined1 *)(param_1 + 0x2ca8) = 0, *(char *)(param_1 + 0x2cb0) != '\0')) {
      *(undefined1 *)(param_1 + 0x2cb0) = 0;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0xc);
      return;
    }
  }
  return;
}



// FUNCTION 140bdf954 FUN_140bdf954 body=179 status=ok
// SIG undefined FUN_140bdf954(void)

void FUN_140bdf954(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_1 + 0x42b4);
  if (bVar3 == 1) {
    cVar1 = FUN_144729dda(param_1 + 0x42a8);
    bVar3 = *(byte *)(param_1 + 0x42b4);
    if ((cVar1 == '\0') && ((bVar3 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x42b4) = 0;
      goto LAB_140bdf97c;
    }
  }
  if (((bVar3 & 1) != 0) && (cVar1 = FUN_144729dda(param_1 + 0x42a8), cVar1 != '\0')) {
    *(float *)(param_1 + 0x42b0) = param_2 + *(float *)(param_1 + 0x42b0);
    cVar1 = FUN_148cfe13a(param_1);
    if (cVar1 == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x42b4) != '\x01') {
      return;
    }
    *(undefined1 *)(param_1 + 0x42b4) = 0;
    return;
  }
LAB_140bdf97c:
  lVar2 = FUN_140bdfa08(param_1,1);
  if (lVar2 == 0) {
    return;
  }
  FUN_148cfde92(param_1,lVar2);
  return;
}



// FUNCTION 140bdfa08 FUN_140bdfa08 body=284 status=ok
// SIG undefined FUN_140bdfa08(void)

longlong FUN_140bdfa08(longlong param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x42a0);
  if ((iVar2 < 1) || (iVar5 = 0, *(longlong *)(param_1 + 0x4208) == 0)) {
    lVar3 = 0;
  }
  else {
    iVar4 = -1;
    do {
      lVar3 = FUN_14479d2ce((longlong)(iVar2 + iVar4) * 0xc + *(longlong *)(param_1 + 0x4298));
      if (lVar3 != 0) {
        bVar1 = *(int *)(lVar3 + 0x120) == 0;
        if (param_2 != '\0') {
          bVar1 = *(int *)(lVar3 + 0x120) != 2;
        }
        if ((!bVar1) &&
           (FUN_148d02518(lVar3,&local_50,*(undefined8 *)(param_1 + 0x4208)),
           (double)*(float *)(lVar3 + 0x278) <
           SQRT(local_40 * local_40 + local_50 * local_50 + local_48 * local_48))) break;
      }
      iVar5 = iVar5 + 1;
      iVar2 = *(int *)(param_1 + 0x42a0);
      iVar4 = iVar4 + -1;
      lVar3 = 0;
    } while (iVar5 < iVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 140bdfb26 FUN_140bdfb26 body=639 status=ok
// SIG undefined FUN_140bdfb26(void)

double * FUN_140bdfb26(longlong param_1,double *param_2,double *param_3,float param_4)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  undefined1 auStack_c8 [40];
  double *local_a0;
  float *local_98;
  longlong local_90;
  float local_84;
  double local_80;
  double local_78;
  double local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_84 = param_4;
  if ((*(longlong *)(param_1 + 0x4210) == 0) || (*(char *)(param_1 + 0x422c) == '\0')) {
    param_2[2] = param_3[2];
    dVar5 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = dVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
  }
  local_98 = &local_84;
  local_a0 = param_3;
  local_90 = param_1;
  if (*(char *)(param_1 + 0x42b4) == '\x01') {
    lVar4 = param_1 + 0x42a8;
    cVar2 = FUN_144729dda(lVar4);
    if ((cVar2 == '\0') || (*(longlong *)(param_1 + 0x4208) == 0)) goto LAB_140bdfba2;
    FUN_14479d2ce(lVar4);
    uVar3 = FUN_14479d2ce(lVar4);
    FUN_148d02518(uVar3,&local_80,*(undefined8 *)(param_1 + 0x4208));
  }
  else {
LAB_140bdfba2:
    FUN_140bdfda8(param_1,&local_80);
    if ((local_68 != '\x01') ||
       (((ABS(local_80) <= 9.999999747378752e-05 && (ABS(local_78) <= 9.999999747378752e-05)) &&
        (ABS(local_70) <= 9.999999747378752e-05)))) {
      dVar5 = *param_3;
      dVar6 = param_3[1];
      fVar7 = (float)SQRT(dVar5 * dVar5 + dVar6 * dVar6);
      dVar1 = param_3[2];
      if (fVar7 <= 0.0) {
        dVar8 = 0.0;
      }
      else {
        fVar11 = *(float *)(param_1 + 0x45d8);
        fVar9 = fVar11 - fVar7;
        if (1e-08 <= fVar9 * fVar9) {
          lVar4 = param_1 + 0x45ec;
          if (fVar11 <= fVar7) {
            lVar4 = param_1 + 0x45f8;
          }
          fVar11 = local_84 * *(float *)(lVar4 + 4);
          if (fVar11 <= fVar9) {
            fVar9 = fVar11;
          }
          if (fVar9 <= -fVar11) {
            fVar9 = -fVar11;
          }
          fVar11 = fVar9 + fVar7;
        }
        dVar10 = (double)(fVar11 / fVar7);
        dVar8 = dVar10 * 0.0;
        dVar6 = dVar6 * dVar10;
        dVar5 = dVar5 * dVar10;
      }
      *param_2 = dVar5 + 0.0;
      param_2[1] = dVar6 + 0.0;
      param_2[2] = dVar1 + dVar8;
      goto LAB_140bdfc8c;
    }
  }
  FUN_1440e82cc(&local_a0,param_2,&local_80);
LAB_140bdfc8c:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140bdfda8 FUN_140bdfda8 body=341 status=ok
// SIG undefined FUN_140bdfda8(void)

double * FUN_140bdfda8(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((longlong)*(int *)(param_1 + 0x42a0) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    lVar8 = *(longlong *)(param_1 + 0x4298);
    lVar9 = (longlong)*(int *)(param_1 + 0x42a0) * 0xc;
    dVar1 = DAT_14c8464f0;
    dVar2 = DAT_14c8464e8;
    dVar3 = DAT_14c8464e0;
    do {
      cVar5 = FUN_144729dda(lVar8);
      if (cVar5 != '\0') {
        lVar6 = FUN_14479d2ce(lVar8);
        if (*(int *)(lVar6 + 0x120) == 1) {
          uVar7 = FUN_14479d2ce(lVar8);
          FUN_148d02518(uVar7,&local_78,*(undefined8 *)(param_1 + 0xa8));
          dVar3 = dVar3 + local_78;
          dVar2 = dVar2 + local_70;
          dVar1 = dVar1 + local_68;
        }
      }
      lVar8 = lVar8 + 0xc;
      lVar9 = lVar9 + -0xc;
    } while (lVar9 != 0);
    if (((9.999999747378752e-05 < ABS(dVar3)) || (9.999999747378752e-05 < ABS(dVar2))) ||
       (9.999999747378752e-05 < ABS(dVar1))) {
      *param_2 = dVar3;
      param_2[1] = dVar2;
      param_2[2] = dVar1;
      uVar4 = 1;
      goto LAB_140bdfde6;
    }
  }
  uVar4 = 0;
LAB_140bdfde6:
  *(undefined1 *)(param_2 + 3) = uVar4;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bdfefe FUN_140bdfefe body=9959 status=ok
// SIG undefined FUN_140bdfefe(void)

void FUN_140bdfefe(longlong *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  float fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar27;
  double dVar26;
  undefined4 uVar28;
  undefined1 in_XMM1 [16];
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined1 auStack_4e8 [32];
  double *local_4c8;
  double *local_4c0;
  char local_4b1;
  double local_4b0;
  double local_4a8;
  float local_49c;
  double local_498;
  undefined4 local_48c;
  float local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  double local_478;
  double local_470;
  longlong *local_468;
  double *local_460;
  double local_458;
  undefined8 uStack_450;
  double local_448;
  double dStack_440;
  double local_430;
  double dStack_428;
  double local_420;
  double local_418;
  double dStack_410;
  double local_408;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  uint local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined4 local_304;
  undefined4 local_2d8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  undefined8 local_258;
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1b4;
  byte local_1ab;
  undefined4 local_188;
  uint local_180;
  int local_17c;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  fVar42 = in_XMM1._0_4_;
  if (1e-06 <= fVar42) {
    uVar27 = in_XMM1._4_4_;
    uVar28 = in_XMM1._8_4_;
    uVar29 = in_XMM1._12_4_;
    (**(code **)(*param_1 + 0x778))(param_1,&local_3b8,in_XMM1._0_8_);
    dVar26 = local_3a8 * (double)param_1[0x48] +
             (double)CONCAT44(uStack_3b4,local_3b8) * (double)param_1[0x46] +
             (double)param_1[0x47] * (double)CONCAT44(uStack_3ac,uStack_3b0);
    local_f8 = local_3a8 - (double)param_1[0x48] * dVar26;
    dStack_100 = (double)CONCAT44(uStack_3ac,uStack_3b0) - (double)param_1[0x47] * dVar26;
    local_108 = (double)CONCAT44(uStack_3b4,local_3b8) - dVar26 * (double)param_1[0x46];
    cVar12 = (**(code **)(*param_1 + 0x780))(param_1);
    if (1e-06 <= fVar42) {
      pdVar2 = (double *)(param_1 + 0x25);
      pdVar3 = (double *)(param_1 + 0x71);
      local_460 = (double *)(param_1 + 0xef);
      local_468 = param_1 + 0x2f;
      do {
        if (*(int *)((longlong)param_1 + 0x444) <= param_3) break;
        iVar18 = param_3 + 1;
        fVar44 = *(float *)(param_1 + 0x88);
        fVar22 = fVar42;
        if ((iVar18 < *(int *)((longlong)param_1 + 0x444)) &&
           (fVar22 = fVar44, fVar42 * 0.5 <= fVar44)) {
          fVar22 = fVar42 * 0.5;
        }
        fVar22 = (float)(~-(uint)(fVar44 < fVar42) & (uint)fVar42 |
                        (uint)fVar22 & -(uint)(fVar44 < fVar42));
        fVar44 = 1e-06;
        if (1e-06 <= fVar22) {
          fVar44 = fVar22;
        }
        lVar16 = param_1[0x22];
        local_448 = *(double *)(lVar16 + 0x260);
        dStack_440 = *(double *)(lVar16 + 0x268);
        local_458 = *(double *)(lVar16 + 0x270);
        uStack_450 = *(undefined8 *)(lVar16 + 0x278);
        local_128 = *(undefined8 *)(lVar16 + 0x240);
        uStack_120 = *(undefined8 *)(lVar16 + 0x248);
        local_118 = *(undefined8 *)(lVar16 + 0x250);
        uStack_110 = *(undefined8 *)(lVar16 + 600);
        *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
        local_498 = (double)param_1[0x25];
        local_4a8 = (double)param_1[0x26];
        dVar26 = (double)param_1[0x27];
        (**(code **)(*param_1 + 0xb80))(param_1);
        local_4b0 = (double)param_1[0x25];
        local_478 = (double)param_1[0x26];
        dVar5 = (double)param_1[0x27];
        local_48c = (**(code **)(*param_1 + 0x718))(param_1);
        if (((char)param_1[0x1f0] == '\0') && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) {
          local_3a8 = (double)param_1[0x73];
          local_3b8 = SUB84(*pdVar3,0);
          uStack_3b4 = (undefined4)((ulonglong)*pdVar3 >> 0x20);
          uStack_3b0 = (undefined4)param_1[0x72];
          uStack_3ac = (undefined4)((ulonglong)param_1[0x72] >> 0x20);
          param_1[0x73] = (longlong)local_f8;
          *pdVar3 = local_108;
          param_1[0x72] = (longlong)dStack_100;
          if ((char)param_1[0x52] == '\x01') {
            dVar23 = (double)param_1[0x27] * (double)param_1[0x48] +
                     (double)param_1[0x25] * (double)param_1[0x46] +
                     (double)param_1[0x47] * (double)param_1[0x26];
            dVar38 = (double)param_1[0x27] - (double)param_1[0x48] * dVar23;
            dVar33 = (double)param_1[0x26] - (double)param_1[0x47] * dVar23;
            dVar23 = (double)param_1[0x25] - dVar23 * (double)param_1[0x46];
            param_1[0x25] = (longlong)dVar23;
            param_1[0x26] = (longlong)dVar33;
            param_1[0x27] = (longlong)dVar38;
            dVar33 = local_478 - dVar33;
            dVar23 = local_4b0 - dVar23;
            local_4c8 = (double *)CONCAT44(local_4c8._4_4_,local_48c);
            (**(code **)(*param_1 + 0x6f0))(param_1);
            param_1[0x25] = (longlong)(dVar23 + (double)param_1[0x25]);
            param_1[0x26] = (longlong)(dVar33 + (double)param_1[0x26]);
            dVar23 = (dVar5 - dVar38) + (double)param_1[0x27];
          }
          else {
            param_1[0x27] = 0;
            local_4c8 = (double *)CONCAT44(local_4c8._4_4_,local_48c);
            (**(code **)(*param_1 + 0x6f0))(param_1);
            dVar23 = dVar5;
          }
          param_1[0x27] = (longlong)dVar23;
          param_1[0x73] = (longlong)local_3a8;
          *pdVar3 = (double)CONCAT44(uStack_3b4,local_3b8);
          param_1[0x72] = CONCAT44(uStack_3ac,uStack_3b0);
        }
        dVar23 = (double)param_1[0x48];
        dVar33 = (double)param_1[0x47];
        dVar38 = (double)param_1[0x46];
        fVar22 = (float)(**(code **)(*param_1 + 0x478))(param_1);
        local_140 = (double)fVar22;
        local_130 = -dVar23 * local_140;
        local_138 = -dVar33 * local_140;
        local_140 = -dVar38 * local_140;
        fVar22 = *(float *)(param_1[0x3e] + 0x558);
        fVar43 = fVar44;
        if (fVar22 <= 0.0) {
          bVar7 = false;
        }
        else {
          fVar8 = fVar22;
          if (fVar44 <= fVar22) {
            fVar8 = fVar44;
          }
          if ((*(byte *)(param_1 + 0x69) & 4) == 0) {
            fVar43 = 0.0;
            if (0.0 <= fVar44 - fVar8) {
              fVar43 = fVar44 - fVar8;
            }
          }
          *(float *)(param_1[0x3e] + 0x558) = fVar22 - fVar8;
          if (*(float *)((longlong *)param_1[0x3e] + 0xab) <= 0.0) {
            (**(code **)(*(longlong *)param_1[0x3e] + 0x808))();
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
        }
        local_4c8 = (double *)CONCAT44(local_4c8._4_4_,fVar43);
        (**(code **)(*param_1 + 0x6e0))(param_1,&local_3b8,pdVar2,&local_140);
        param_1[0x27] = (longlong)local_3a8;
        *pdVar2 = (double)CONCAT44(uStack_3b4,local_3b8);
        param_1[0x26] = CONCAT44(uStack_3ac,uStack_3b0);
        (**(code **)(*param_1 + 0xb88))(param_1);
        if (DAT_14c7613e8 == '\x01') {
          fVar22 = *(float *)(param_1 + 0xb7);
          if ((fVar22 == 0.0) && (!NAN(fVar22))) goto LAB_140be0503;
          if (0.0 < fVar22) {
            auVar24._0_4_ = -fVar44;
            auVar24._4_4_ = 0x80000000;
            auVar24._8_4_ = 0x80000000;
            auVar24._12_4_ = 0x80000000;
            auVar25._4_12_ = auVar24._4_12_;
            auVar25._0_4_ = auVar24._0_4_ / fVar22;
            fVar22 = (float)exp2f(auVar25._0_8_);
            dVar23 = (double)fVar22;
            param_1[0xef] = (longlong)((double)param_1[0xef] * dVar23);
            param_1[0xf0] = (longlong)((double)param_1[0xf0] * dVar23);
            param_1[0xf1] = (longlong)(dVar23 * (double)param_1[0xf1]);
          }
        }
        else {
LAB_140be0503:
          local_460[2] = DAT_14c8464f0;
          dVar23 = DAT_14c8464e8;
          *local_460 = DAT_14c8464e0;
          local_460[1] = dVar23;
        }
        fVar42 = fVar42 - fVar44;
        dVar23 = (double)param_1[0x27];
        dVar33 = (double)param_1[0x25];
        dVar38 = (double)param_1[0x26];
        fVar22 = fVar44;
        local_470 = dVar5;
        if (DAT_14c7613f8 == 0) {
          uVar45 = 0;
          param_3 = iVar18;
        }
        else {
          dVar5 = (double)param_1[0x46];
          dVar31 = (double)param_1[0x47];
          dVar37 = (double)param_1[0x48];
          dVar34 = -dVar5;
          dVar30 = (local_498 * dVar34 - local_4a8 * dVar31) - dVar26 * dVar37;
          if (dVar30 <= 0.0) {
            uVar45 = 0;
            param_3 = iVar18;
          }
          else {
            local_49c = fVar43;
            if ((dVar23 * -dVar37 + dVar33 * dVar34 + dVar38 * -dVar31 <= 0.0) &&
               (*(int *)((longlong)param_1 + 0x43c) < (int)param_1[0x89])) {
              dVar36 = 1.0 / (double)fVar44;
              dVar6 = (dVar23 - dVar26) * dVar36;
              dVar35 = (dVar38 - local_4a8) * dVar36;
              dVar36 = dVar36 * (dVar33 - local_498);
              dVar34 = -dVar37 * dVar6 + dVar34 * dVar36 + -dVar31 * dVar35;
              local_488 = fVar42;
              uStack_484 = uVar27;
              uStack_480 = uVar28;
              uStack_47c = uVar29;
              if (1e-08 < ABS(dVar34)) {
                dVar34 = -dVar30 / dVar34;
                uVar45 = (undefined4)((ulonglong)dVar34 >> 0x20);
                fVar22 = (float)dVar34;
                if ((0.0001 <= fVar22) && (fVar22 < fVar44)) {
                  dVar30 = (double)fVar22;
                  dVar38 = dVar35 * dVar30 + local_4a8;
                  dVar33 = dVar36 * dVar30 + local_498;
                  dVar23 = 0.0;
                  if ((char)param_1[0x52] == '\x01') {
                    dVar23 = dVar6 * dVar30 + dVar26;
                    dVar30 = dVar23 * dVar37 + dVar33 * dVar5 + dVar31 * dVar38;
                    dVar23 = dVar23 - dVar37 * dVar30;
                    dVar38 = dVar38 - dVar31 * dVar30;
                    dVar33 = dVar33 - dVar30 * dVar5;
                  }
                  param_1[0x25] = (longlong)dVar33;
                  param_1[0x26] = (longlong)dVar38;
                  param_1[0x27] = (longlong)dVar23;
                  fVar42 = fVar42 + (fVar44 - fVar22);
                  *(int *)((longlong)param_1 + 0x43c) = *(int *)((longlong)param_1 + 0x43c) + 1;
                  local_4b1 = cVar12;
                  if ((longlong)(int)param_1[0x1b3] != 0) {
                    puVar17 = (undefined8 *)param_1[0x1b2];
                    puVar21 = puVar17 + (longlong)(int)param_1[0x1b3] * 2;
                    do {
                      plVar20 = (longlong *)*puVar17;
                      plVar19 = (longlong *)puVar17[1];
                      if (plVar19 == (longlong *)0x0) {
                        (**(code **)(*plVar20 + 0x38))();
                      }
                      else {
                        LOCK();
                        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                        UNLOCK();
                        (**(code **)(*plVar20 + 0x38))();
                        LOCK();
                        plVar20 = plVar19 + 1;
                        *(int *)plVar20 = (int)*plVar20 + -1;
                        UNLOCK();
                        if ((int)*plVar20 == 0) {
                          (**(code **)*plVar19)(plVar19);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar19 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar19 + 0x10))(plVar19);
                          }
                        }
                      }
                      puVar17 = puVar17 + 2;
                    } while (puVar17 != puVar21);
                    dVar23 = (double)param_1[0x27];
                    dVar33 = (double)param_1[0x25];
                    dVar38 = (double)param_1[0x26];
                    cVar12 = local_4b1;
                  }
                  goto LAB_140be086b;
                }
              }
            }
            uVar45 = 0;
            fVar22 = fVar44;
            param_3 = iVar18;
          }
        }
LAB_140be086b:
        puVar17 = &local_3a8;
        if (((*(byte *)((longlong)param_1 + 0x5b5) & 8) != 0) &&
           ((-(double)param_1[0x46] * dVar33 - (double)param_1[0x47] * dVar38) -
            (double)param_1[0x48] * dVar23 < 0.0)) {
          *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) & 0xf7;
          (**(code **)(*param_1 + 0x6d8))(param_1);
          dVar23 = (double)param_1[0x27];
          dVar33 = (double)param_1[0x25];
          dVar38 = (double)param_1[0x26];
        }
        dVar31 = (dVar23 + dVar26) * 0.5;
        dVar38 = (dVar38 + local_4a8) * 0.5;
        dVar23 = (dVar33 + local_498) * 0.5;
        dVar5 = (double)fVar22;
        local_148 = dVar31 * dVar5;
        local_150 = dVar38 * dVar5;
        local_158 = dVar23 * dVar5;
        if ((bVar7) && ((*(byte *)(param_1 + 0x69) & 4) == 0)) {
          fVar44 = 0.0;
          if (0.0 <= fVar22 - fVar43) {
            fVar44 = fVar22 - fVar43;
          }
          dVar33 = (double)fVar44;
          dVar37 = (double)fVar43;
          local_148 = dVar31 * dVar37 + dVar26 * dVar33;
          local_150 = dVar38 * dVar37 + local_4a8 * dVar33;
          local_158 = dVar23 * dVar37 + local_498 * dVar33;
        }
        memset(&local_258,0,0x100);
        local_188 = 0xffffffff;
        local_1b4 = 0xffffffff;
        local_258._4_4_ = 1.0;
        local_4c0 = (double *)((ulonglong)local_4c0 & 0xffffffffffffff00);
        local_4c8 = (double *)&local_258;
        FUN_1402eda10(param_1,&local_158,&local_128);
        cVar13 = (**(code **)(*param_1 + 0x600))(param_1);
        if (cVar13 == '\0') break;
        fVar44 = (1.0 - local_258._4_4_) * fVar22;
        cVar13 = (**(code **)(*local_468 + 0xe8))();
        if (cVar13 != '\0') {
          local_270 = local_4b0;
          local_268 = local_478;
          local_260 = local_470;
          local_288 = local_448;
          dStack_280 = dStack_440;
          local_278 = local_458;
          local_4c0 = (double *)CONCAT44(local_4c0._4_4_,param_3);
          local_4c8 = (double *)CONCAT44(local_4c8._4_4_,fVar42 + fVar44);
          (**(code **)(*param_1 + 0x768))(param_1,&local_288,&local_270,fVar22);
          break;
        }
        if ((local_1ab & 1) != 0) {
          lVar16 = param_1[0x22];
          local_3b8 = (uint)*(undefined8 *)(lVar16 + 0x260);
          uStack_3b4 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x260) >> 0x20);
          uStack_3b0 = (undefined4)*(undefined8 *)(lVar16 + 0x268);
          uStack_3ac = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x268) >> 0x20);
          local_3a8 = *(double *)(lVar16 + 0x270);
          cVar13 = (**(code **)(*param_1 + 0x928))(param_1,&local_3b8,&local_258);
          if (cVar13 != '\0') {
            lVar16 = *param_1;
            puVar17 = &local_258;
LAB_140be25a4:
            uVar32 = CONCAT44(uVar27,fVar42 + fVar44);
LAB_140be25d8:
            (**(code **)(lVar16 + 0x7a8))(param_1,puVar17,uVar32,param_3);
            break;
          }
          local_148 = (double)param_1[0x27] * dVar5;
          local_150 = (double)param_1[0x26] * dVar5;
          local_158 = (double)param_1[0x25] * dVar5;
          if (((local_1ab & 2) == 0) &&
             (cVar13 = (**(code **)(*param_1 + 0x930))(param_1), cVar13 != '\0')) {
            lVar16 = param_1[0x22];
            local_2a8 = *(double *)(lVar16 + 0x260);
            dStack_2a0 = *(double *)(lVar16 + 0x268);
            local_298 = *(double *)(lVar16 + 0x270);
            local_3b8 = 0;
            uStack_3b4 = 0;
            uStack_3b0 = 0;
            memset(puVar17,0,0x100);
            local_2d8 = 0xffffffff;
            local_304 = 0xffffffff;
            local_3a8 = (double)CONCAT44(0x3f800000,(undefined4)local_3a8);
            local_4c8 = (double *)0x0;
            (**(code **)(*param_1 + 0x900))(param_1,&local_2a8,&local_3b8,0);
            if (((local_3b8 & 7) == 3) &&
               (cVar13 = (**(code **)(*param_1 + 0x928))(param_1,&local_2a8,puVar17), cVar13 != '\0'
               )) {
              lVar16 = *param_1;
              goto LAB_140be25a4;
            }
          }
          (**(code **)(*param_1 + 0x4c8))(param_1,&local_258,CONCAT44(uVar45,fVar22));
          cVar13 = (**(code **)(*param_1 + 0x600))(param_1);
          if ((cVar13 == '\0') ||
             (cVar13 = (**(code **)(*local_468 + 0xd8))(), dVar26 = DAT_14c8464e8, cVar13 == '\0'))
          break;
          local_3b8 = SUB84(local_4b0,0);
          uStack_3b4 = (undefined4)((ulonglong)local_4b0 >> 0x20);
          uStack_3b0 = SUB84(local_478,0);
          uStack_3ac = (undefined4)((ulonglong)local_478 >> 0x20);
          local_3a8 = local_470;
          local_298 = (double)param_1[0x73];
          local_2a8 = *pdVar3;
          dStack_2a0 = (double)param_1[0x72];
          if (cVar12 != '\0') {
            local_3c8 = (double)param_1[0x73];
            local_3d8 = *pdVar3;
            dStack_3d0 = (double)param_1[0x72];
            *pdVar3 = DAT_14c8464e0;
            param_1[0x72] = (longlong)dVar26;
            param_1[0x73] = (longlong)DAT_14c8464f0;
            local_3e8 = (double)param_1[0x27];
            local_3f8 = *pdVar2;
            dStack_3f0 = (double)param_1[0x26];
            param_1[0x25] = (longlong)local_4b0;
            param_1[0x26] = (longlong)local_478;
            if ((char)param_1[0x52] == '\x01') {
              dVar26 = local_470 * (double)param_1[0x48] +
                       local_4b0 * (double)param_1[0x46] + local_478 * (double)param_1[0x47];
              dVar33 = local_470 - (double)param_1[0x48] * dVar26;
              dVar23 = local_478 - (double)param_1[0x47] * dVar26;
              dVar26 = local_4b0 - dVar26 * (double)param_1[0x46];
              param_1[0x25] = (longlong)dVar26;
              param_1[0x26] = (longlong)dVar23;
              param_1[0x27] = (longlong)dVar33;
              dVar33 = local_470 - dVar33;
              local_478 = local_478 - dVar23;
              local_4b0 = local_4b0 - dVar26;
              local_4c8 = (double *)CONCAT44(local_4c8._4_4_,local_48c);
              (**(code **)(*param_1 + 0x6f0))(param_1);
              dVar23 = local_478 + (double)param_1[0x26];
              dVar26 = local_4b0 + (double)param_1[0x25];
              local_3a8 = dVar33 + (double)param_1[0x27];
            }
            else {
              param_1[0x27] = 0;
              local_4c8 = (double *)CONCAT44(local_4c8._4_4_,local_48c);
              (**(code **)(*param_1 + 0x6f0))(param_1);
              dVar26 = (double)param_1[0x25];
              dVar23 = (double)param_1[0x26];
              local_3a8 = local_470;
            }
            local_3b8 = SUB84(dVar26,0);
            uStack_3b4 = (undefined4)((ulonglong)dVar26 >> 0x20);
            uStack_3b0 = SUB84(dVar23,0);
            uStack_3ac = (undefined4)((ulonglong)dVar23 >> 0x20);
            local_4c8 = (double *)CONCAT44(local_4c8._4_4_,fVar43);
            (**(code **)(*param_1 + 0x6e0))(param_1,&local_418,&local_3b8,&local_140);
            local_3a8 = local_408;
            local_3b8 = SUB84(local_418,0);
            uStack_3b4 = (undefined4)((ulonglong)local_418 >> 0x20);
            uStack_3b0 = SUB84(dStack_410,0);
            uStack_3ac = (undefined4)((ulonglong)dStack_410 >> 0x20);
            param_1[0x27] = (longlong)local_3e8;
            *pdVar2 = local_3f8;
            param_1[0x26] = (longlong)dStack_3f0;
            param_1[0x73] = (longlong)local_3c8;
            *pdVar3 = local_3d8;
            param_1[0x72] = (longlong)dStack_3d0;
            local_2a8 = 1.0 / dVar5;
            local_298 = ((double)param_1[0x27] - local_408) * local_2a8;
            dStack_2a0 = ((double)param_1[0x26] - dStack_410) * local_2a8;
            local_2a8 = local_2a8 * ((double)param_1[0x25] - local_418);
            local_4c0 = (double *)((ulonglong)local_4c0 & 0xffffffffffffff00);
            local_4c8 = (double *)&local_258;
            (**(code **)(*param_1 + 0x7a0))(param_1,&local_3d8,CONCAT44(uVar45,fVar22));
            local_148 = (local_3c8 * dVar5 + local_3a8) * dVar5;
            local_150 = (dStack_3d0 * dVar5 + (double)CONCAT44(uStack_3ac,uStack_3b0)) * dVar5;
            local_158 = (local_3d8 * dVar5 + (double)CONCAT44(uStack_3b4,local_3b8)) * dVar5;
          }
          dVar23 = local_1f0;
          dVar26 = local_1f8;
          local_3c8 = local_208;
          local_3d8 = local_218;
          dStack_3d0 = dStack_210;
          local_498 = local_200;
          uVar45 = SUB84(local_1f8,0);
          uVar39 = (undefined4)((ulonglong)local_1f8 >> 0x20);
          uVar40 = SUB84(local_1f0,0);
          uVar41 = (undefined4)((ulonglong)local_1f0 >> 0x20);
          local_4c8 = &local_3d8;
          local_4c0 = (double *)&local_258;
          (**(code **)(*param_1 + 0x500))(param_1,&local_3f8,&local_158,1.0 - local_258._4_4_);
          if (local_17c == 0) {
            plVar20 = (longlong *)0x0;
          }
          else if ((int)local_180 < 0) {
LAB_140be1ff1:
            plVar20 = (longlong *)0x0;
          }
          else {
            plVar20 = (longlong *)0x0;
            if ((int)local_180 < DAT_14c9647dc) {
              puVar17 = (undefined8 *)
                        ((ulonglong)((local_180 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_180 >> 0x10) * 8));
              if (((puVar17 == (undefined8 *)0x0) || (*(int *)(puVar17 + 2) != local_17c)) ||
                 ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_140be1ff1;
              plVar20 = (longlong *)*puVar17;
            }
          }
          if ((DAT_14c7613e0 == 0) ||
             ((((ABS(*pdVar2) <= 9.999999747378752e-05 &&
                (ABS((double)param_1[0x26]) <= 9.999999747378752e-05)) &&
               (ABS((double)param_1[0x27]) <= 9.999999747378752e-05)) ||
              (plVar19 = plVar20, plVar20 == (longlong *)0x0)))) {
LAB_140be116c:
            if ((0.0001 < fVar44) && ((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0)) {
              dVar31 = 1.0 / (double)fVar44;
              dVar33 = local_3e8 * dVar31;
              dVar38 = dStack_3f0 * dVar31;
              dVar31 = dVar31 * local_3f8;
              if (((char)param_1[0x1f0] != '\0') || ((*(byte *)(param_1 + 0x1b6) & 4) != 0)) {
                dVar37 = (double)param_1[0x46];
                dVar30 = (double)param_1[0x47];
                dVar34 = (double)param_1[0x48];
                local_4b0 = dVar26;
                local_4a8 = dVar23;
                dVar26 = (double)param_1[0x27] * dVar34 +
                         (double)param_1[0x25] * dVar37 + dVar30 * (double)param_1[0x26];
                dVar23 = dVar33 * dVar34 + dVar31 * dVar37 + dVar38 * dVar30;
                dVar33 = dVar34 * dVar23 + ((double)param_1[0x27] - dVar34 * dVar26);
                dVar38 = dVar30 * dVar23 + ((double)param_1[0x26] - dVar30 * dVar26);
                dVar31 = dVar23 * dVar37 + ((double)param_1[0x25] - dVar26 * dVar37);
                local_488 = fVar42;
                uStack_484 = uVar27;
                uStack_480 = uVar28;
                uStack_47c = uVar29;
              }
              goto LAB_140be12d9;
            }
          }
          else {
            do {
              bVar14 = (**(code **)(*plVar19 + 0x480))(plVar19,0);
              plVar4 = plVar19 + 0x24;
              plVar19 = (longlong *)*plVar4;
            } while ((~bVar14 & (longlong *)*plVar4 != (longlong *)0x0) != 0);
            if (bVar14 == 0) goto LAB_140be116c;
            local_4b0 = dVar26;
            local_4a8 = dVar23;
            local_488 = fVar42;
            uStack_484 = uVar27;
            uStack_480 = uVar28;
            uStack_47c = uVar29;
            FUN_1457c3e40(&local_418,plVar20,0);
            FUN_140ee4549(&local_430,plVar20,0);
            dVar26 = (double)param_1[0x27];
            dVar23 = (double)param_1[0x25];
            dVar37 = (double)param_1[0x26];
            dVar31 = (dVar26 - (local_408 + local_420)) * local_1f0 +
                     (dVar23 - (local_418 + local_430)) * local_200 +
                     (dVar37 - (dStack_410 + dStack_428)) * local_1f8;
            dVar33 = dVar26 - local_1f0 * dVar31;
            dVar38 = dVar37 - local_1f8 * dVar31;
            dVar31 = dVar23 - dVar31 * local_200;
            if (((char)param_1[0x1f0] != '\0') || ((*(byte *)(param_1 + 0x1b6) & 4) != 0)) {
              dVar30 = (double)param_1[0x46];
              dVar34 = (double)param_1[0x47];
              dVar35 = (double)param_1[0x48];
              dVar36 = dVar26 * dVar35 + dVar23 * dVar30 + dVar37 * dVar34;
              dVar31 = dVar33 * dVar35 + dVar31 * dVar30 + dVar38 * dVar34;
              dVar33 = dVar35 * dVar31 + (dVar26 - dVar35 * dVar36);
              dVar38 = dVar34 * dVar31 + (dVar37 - dVar34 * dVar36);
              dVar31 = dVar31 * dVar30 + (dVar23 - dVar36 * dVar30);
            }
            uVar40 = SUB84(local_4a8,0);
            uVar41 = (undefined4)((ulonglong)local_4a8 >> 0x20);
            uVar45 = SUB84(local_4b0,0);
            uVar39 = (undefined4)((ulonglong)local_4b0 >> 0x20);
            fVar42 = local_488;
            uVar27 = uStack_484;
            uVar28 = uStack_480;
            uVar29 = uStack_47c;
LAB_140be12d9:
            param_1[0x25] = (longlong)dVar31;
            param_1[0x26] = (longlong)dVar38;
            param_1[0x27] = (longlong)dVar33;
          }
          if ((0.0001 < fVar44) &&
             (0.0 < local_3e8 * local_148 + local_3f8 * local_158 + dStack_3f0 * local_150)) {
            local_4c0 = (double *)((ulonglong)local_4c0 & 0xffffffffffffff00);
            local_4c8 = (double *)&local_258;
            FUN_1402eda10(param_1,&local_3f8,&local_128);
            if ((local_1ab & 1) != 0) {
              fVar43 = (1.0 - local_258._4_4_) * fVar44;
              lVar16 = param_1[0x22];
              local_418 = *(double *)(lVar16 + 0x260);
              dStack_410 = *(double *)(lVar16 + 0x268);
              local_408 = *(double *)(lVar16 + 0x270);
              local_488 = fVar42;
              uStack_484 = uVar27;
              uStack_480 = uVar28;
              uStack_47c = uVar29;
              cVar13 = (**(code **)(*param_1 + 0x928))(param_1,&local_418,&local_258);
              if (cVar13 == '\0') {
                (**(code **)(*param_1 + 0x4c8))(param_1,&local_258,fVar44,&local_3f8);
                cVar13 = (**(code **)(*param_1 + 0x600))(param_1);
                if ((cVar13 == '\0') ||
                   (cVar13 = (**(code **)(*local_468 + 0xd8))(), cVar13 == '\0')) break;
                if (cVar12 == '\0') {
                  (**(code **)(*param_1 + 0x510))(param_1,&local_3f8,&local_258,&local_3d8);
                }
                else {
                  if (0.0010000000474974513 <
                      (-(double)param_1[0x46] * local_218 - dStack_210 * (double)param_1[0x47]) -
                      local_208 * (double)param_1[0x48]) {
                    local_418 = (double)fVar44;
                    local_408 = local_3a8 * local_418;
                    dStack_410 = (double)CONCAT44(uStack_3ac,uStack_3b0) * local_418;
                    local_418 = local_418 * (double)CONCAT44(uStack_3b4,local_3b8);
                    local_4c8 = &local_3d8;
                    local_4c0 = (double *)&local_258;
                    (**(code **)(*param_1 + 0x500))(param_1,&local_430,&local_418,0x3f800000);
                    local_3e8 = local_420;
                    local_3f8 = local_430;
                    dStack_3f0 = dStack_428;
                  }
                  (**(code **)(*param_1 + 0x510))(param_1,&local_3f8,&local_258,&local_3d8);
                  local_4c0 = (double *)((ulonglong)local_4c0 & 0xffffffffffffff00);
                  local_4c8 = (double *)&local_258;
                  (**(code **)(*param_1 + 0x7a0))(param_1,&local_418,fVar43,&local_2a8);
                  dVar26 = (double)fVar43;
                  if (0.0 < local_3c8 * local_408 * dVar26 +
                            local_3d8 * local_418 * dVar26 + dStack_3d0 * dStack_410 * dVar26) {
                    local_3f8 = local_418 * dVar26 * dVar26 + local_3f8;
                    dStack_3f0 = dStack_410 * dVar26 * dVar26 + dStack_3f0;
                    local_3e8 = local_408 * dVar26 * dVar26 + local_3e8;
                  }
                }
                uVar29 = uStack_47c;
                uVar28 = uStack_480;
                uVar27 = uStack_484;
                fVar42 = local_488;
                if ((0.0001 < fVar43) && ((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0)) {
                  dVar23 = 1.0 / (double)fVar43;
                  dVar26 = local_3e8 * dVar23;
                  dVar33 = dStack_3f0 * dVar23;
                  dVar23 = dVar23 * local_3f8;
                  if (((char)param_1[0x1f0] != '\0') || ((*(byte *)(param_1 + 0x1b6) & 4) != 0)) {
                    dVar38 = (double)param_1[0x46];
                    dVar31 = (double)param_1[0x47];
                    dVar37 = (double)param_1[0x48];
                    local_4b0 = (double)CONCAT44(uVar39,uVar45);
                    local_4a8 = (double)CONCAT44(uVar41,uVar40);
                    dVar30 = (double)param_1[0x27] * dVar37 +
                             (double)param_1[0x25] * dVar38 + dVar31 * (double)param_1[0x26];
                    dVar23 = dVar26 * dVar37 + dVar23 * dVar38 + dVar33 * dVar31;
                    dVar26 = dVar37 * dVar23 + ((double)param_1[0x27] - dVar37 * dVar30);
                    dVar33 = dVar31 * dVar23 + ((double)param_1[0x26] - dVar31 * dVar30);
                    dVar23 = dVar23 * dVar38 + ((double)param_1[0x25] - dVar30 * dVar38);
                  }
                  param_1[0x25] = (longlong)dVar23;
                  param_1[0x26] = (longlong)dVar33;
                  param_1[0x27] = (longlong)dVar26;
                }
                dVar26 = -(double)param_1[0x46];
                if ((local_498 * dVar26 - (double)CONCAT44(uVar39,uVar45) * (double)param_1[0x47]) -
                    (double)CONCAT44(uVar41,uVar40) * (double)param_1[0x48] <= 0.0) {
                  bVar7 = false;
                }
                else {
                  dVar23 = -(double)param_1[0x48];
                  dVar33 = -(double)param_1[0x47];
                  if (local_1f0 * dVar23 + local_200 * dVar26 + local_1f8 * dVar33 <= 0.0) {
                    bVar7 = false;
                  }
                  else if (ABS(dVar23 * local_3e8 + dVar26 * local_3f8 + dVar33 * dStack_3f0) <=
                           9.999999747378752e-05) {
                    bVar7 = local_1f0 * (double)CONCAT44(uVar41,uVar40) +
                            local_200 * local_498 + local_1f8 * (double)CONCAT44(uVar39,uVar45) <
                            0.0;
                  }
                  else {
                    bVar7 = false;
                  }
                }
                local_4c0 = (double *)((ulonglong)local_4c0 & 0xffffffffffffff00);
                local_4c8 = (double *)&local_258;
                FUN_1402eda10(param_1,&local_3f8,&local_128);
                uVar11 = uStack_47c;
                uVar10 = uStack_480;
                uVar9 = uStack_484;
                fVar44 = local_488;
                if ((local_258._4_4_ == 0.0) && (!NAN(local_258._4_4_))) {
                  local_4b0 = (double)CONCAT44(uVar39,uVar45);
                  local_4a8 = (double)CONCAT44(uVar41,uVar40);
                  dVar26 = (local_1f0 + local_3c8) * (double)param_1[0x48] +
                           (local_200 + local_3d8) * (double)param_1[0x46] +
                           (local_1f8 + dStack_3d0) * (double)param_1[0x47];
                  local_408 = (local_1f0 + local_3c8) - (double)param_1[0x48] * dVar26;
                  dStack_410 = (local_1f8 + dStack_3d0) - (double)param_1[0x47] * dVar26;
                  local_418 = (local_200 + local_3d8) - dVar26 * (double)param_1[0x46];
                  dVar26 = local_408 * local_408 + local_418 * local_418 + dStack_410 * dStack_410;
                  if ((dVar26 != 1.0) || (NAN(dVar26))) {
                    if (9.99999993922529e-09 <= dVar26) {
                      dVar26 = 1.0 / SQRT(dVar26);
                      local_408 = local_408 * dVar26;
                      dStack_410 = dStack_410 * dVar26;
                      local_418 = local_418 * dVar26;
                    }
                    else {
                      dStack_410 = DAT_14c8464e8;
                      local_408 = DAT_14c8464f0;
                      local_418 = DAT_14c8464e0;
                    }
                  }
                  if (((ABS(local_418) <= 9.999999747378752e-05) &&
                      (ABS(dStack_410) <= 9.999999747378752e-05)) &&
                     (ABS(local_408) <= 9.999999747378752e-05)) {
                    if ((char)param_1[0x52] == '\x01') {
                      dVar26 = (double)param_1[0x50];
                      dVar23 = (double)param_1[0x4f];
                      dVar33 = (double)param_1[0x4e];
                      dVar30 = dVar33 * dStack_3d0 - local_3d8 * dVar23;
                      dVar37 = dVar26 * local_3d8 - local_3c8 * dVar33;
                      dVar37 = dVar37 + dVar37;
                      dVar38 = dVar23 * local_3c8 - dStack_3d0 * dVar26;
                      dVar30 = dVar30 + dVar30;
                      dVar38 = dVar38 + dVar38;
                      dVar31 = (dVar38 * dVar26 - dVar33 * dVar30) +
                               (double)param_1[0x51] * dVar37 + dStack_3d0;
                      dVar35 = (dVar30 * dVar23 - dVar37 * dVar26) +
                               (double)param_1[0x51] * dVar38 + local_3d8;
                      dVar26 = (double)param_1[0x4c];
                      dVar23 = (double)param_1[0x4a];
                      dVar37 = dVar26 * dVar31 + dVar23 * -0.0;
                      dVar37 = dVar37 + dVar37;
                      dVar33 = (double)param_1[0x4d];
                      dVar38 = (double)param_1[0x4b];
                      dVar30 = dVar38 * 0.0 + dVar26 * dVar35;
                      dVar30 = dVar30 + dVar30;
                      dVar36 = -dVar35 * dVar23 - dVar31 * dVar38;
                      dVar36 = dVar36 + dVar36;
                      dVar34 = (dVar23 * dVar37 - dVar30 * dVar38) + dVar33 * dVar36 + 0.0;
                      dVar35 = (dVar26 * dVar30 - dVar36 * dVar23) + (dVar33 * dVar37 - dVar35);
                      dVar23 = (dVar38 * dVar36 - dVar37 * dVar26) + dVar33 * dVar30 + dVar31;
                      dVar26 = dVar34 * dVar34 + dVar23 * dVar23 + dVar35 * dVar35;
                      if (((dVar26 != 1.0) ||
                          (local_418 = dVar23, dStack_410 = dVar35, local_408 = dVar34, NAN(dVar26))
                          ) && (local_418 = DAT_14c8464e0, dStack_410 = DAT_14c8464e8,
                               local_408 = DAT_14c8464f0, 9.99999993922529e-09 <= dVar26)) {
                        local_418 = 1.0 / SQRT(dVar26);
                        local_408 = dVar34 * local_418;
                        dStack_410 = dVar35 * local_418;
                        local_418 = dVar23 * local_418;
                      }
                    }
                    else {
                      dVar26 = dStack_3d0 * dStack_3d0 + local_3d8 * local_3d8;
                      if ((dVar26 != 1.0) || (NAN(dVar26))) {
                        local_418 = DAT_14c8464e0;
                        dStack_410 = DAT_14c8464e8;
                        local_408 = DAT_14c8464f0;
                        if (9.99999993922529e-09 <= dVar26) {
                          dVar26 = 1.0 / SQRT(dVar26);
                          local_418 = dStack_3d0 * dVar26;
                          dStack_410 = -local_3d8 * dVar26;
                          local_408 = dVar26 * 0.0;
                        }
                      }
                      else {
                        local_418 = dStack_3d0;
                        dStack_410 = -local_3d8;
                        local_408 = 0.0;
                      }
                    }
                  }
                  local_4c0 = (double *)((ulonglong)local_4c0 & 0xffffffffffffff00);
                  local_4c8 = (double *)&local_258;
                  FUN_1402eda10(param_1,&local_418,&local_128);
                  fVar42 = fVar44;
                  uVar27 = uVar9;
                  uVar28 = uVar10;
                  uVar29 = uVar11;
                }
                if (!bVar7) {
                  lVar16 = param_1[0x22];
                  local_418 = *(double *)(lVar16 + 0x260);
                  dStack_410 = *(double *)(lVar16 + 0x268);
                  local_408 = *(double *)(lVar16 + 0x270);
                  cVar13 = (**(code **)(*param_1 + 0x928))(param_1,&local_418,&local_258);
                  if (cVar13 == '\0') {
                    uVar32 = 0;
                    if ((local_258._4_4_ != 0.0) || (NAN(local_258._4_4_))) {
                      if ((local_258._4_4_ == 1.0) && (!NAN(local_258._4_4_))) {
                        fVar44 = 0.0;
                        if (0.0 <= *(float *)(param_1 + 0x65)) {
                          fVar44 = *(float *)(param_1 + 0x65);
                        }
                        if (0.0 < fVar44) {
                          dVar26 = (double)param_1[0x46];
                          dVar23 = (double)param_1[0x47];
                          dVar33 = (double)param_1[0x48];
                          if ((double)*(float *)(param_1 + 0x45) <=
                              (local_498 * -dVar26 - (double)CONCAT44(uVar39,uVar45) * dVar23) -
                              (double)CONCAT44(uVar41,uVar40) * dVar33) {
                            lVar16 = param_1[0x22];
                            dVar38 = *(double *)(lVar16 + 0x270) - local_458;
                            dVar31 = *(double *)(lVar16 + 0x260) - local_448;
                            dVar37 = *(double *)(lVar16 + 0x268) - dStack_440;
                            if ((ABS((float)(-dVar33 * dVar38 + -dVar26 * dVar31 + -dVar23 * dVar37)
                                    ) <= fVar22 * 0.2) &&
                               (dVar30 = dVar38 * dVar33 + dVar31 * dVar26 + dVar23 * dVar37,
                               dVar38 = dVar38 - dVar33 * dVar30, dVar31 = dVar31 - dVar26 * dVar30,
                               dVar37 = dVar37 - dVar30 * dVar23,
                               (float)SQRT(dVar38 * dVar38 + dVar31 * dVar31 + dVar37 * dVar37) <=
                               fVar22 * 4.0)) {
                              dVar26 = (double)param_1[0x25];
                              dVar23 = (double)param_1[0x26];
                              dVar33 = (double)param_1[0x50];
                              dVar38 = (double)param_1[0x4f];
                              dVar31 = (double)param_1[0x4e];
                              dVar30 = dVar33 * dVar26 - (double)param_1[0x27] * dVar31;
                              dVar30 = dVar30 + dVar30;
                              dVar37 = (double)param_1[0x51];
                              dVar34 = dVar38 * (double)param_1[0x27] - dVar23 * dVar33;
                              dVar34 = dVar34 + dVar34;
                              dVar35 = dVar31 * dVar23 - dVar26 * dVar38;
                              dVar35 = dVar35 + dVar35;
                              fVar42 = (float)(**(code **)(*param_1 + 0x480))(param_1);
                              uVar15 = *(int *)((longlong)param_1 + 0x824) * 0xbb38435 + 0x3619636b;
                              *(uint *)((longlong)param_1 + 0x824) = uVar15;
                              dVar26 = (double)(((float)(uVar15 >> 9 | 0x3f800000) + -1.0 + -0.5) *
                                               fVar42 * 0.25) +
                                       (dVar35 * dVar38 - dVar30 * dVar33) +
                                       dVar37 * dVar34 + dVar26;
                              fVar44 = (float)(**(code **)(*param_1 + 0x480))(param_1);
                              uVar29 = uStack_47c;
                              uVar28 = uStack_480;
                              uVar27 = uStack_484;
                              fVar42 = local_488;
                              uVar15 = *(int *)((longlong)param_1 + 0x824) * 0xbb38435 + 0x3619636b;
                              *(uint *)((longlong)param_1 + 0x824) = uVar15;
                              dVar23 = (double)(((float)(uVar15 >> 9 | 0x3f800000) + -1.0 + -0.5) *
                                               fVar44 * 0.25) +
                                       (dVar34 * dVar33 - dVar31 * dVar35) +
                                       dVar37 * dVar30 + dVar23;
                              fVar44 = *(float *)(param_1 + 0x40) * 0.25;
                              if (fVar44 <= 1.0) {
                                fVar44 = 1.0;
                              }
                              dVar34 = (double)fVar44;
                              dVar33 = (double)param_1[0x4c];
                              dVar38 = (double)param_1[0x4a];
                              dVar31 = (double)param_1[0x4b];
                              dVar30 = dVar38 * dVar23 - dVar26 * dVar31;
                              dVar36 = dVar33 * dVar26 - dVar38 * dVar34;
                              dVar36 = dVar36 + dVar36;
                              dVar37 = (double)param_1[0x4d];
                              dVar35 = dVar31 * dVar34 - dVar23 * dVar33;
                              dVar30 = dVar30 + dVar30;
                              dVar35 = dVar35 + dVar35;
                              local_3e8 = (dVar38 * dVar36 - dVar35 * dVar31) +
                                          dVar37 * dVar30 + dVar34;
                              dStack_3f0 = (dVar33 * dVar35 - dVar30 * dVar38) +
                                           dVar37 * dVar36 + dVar23;
                              local_3f8 = (dVar31 * dVar30 - dVar36 * dVar33) +
                                          dVar37 * dVar35 + dVar26;
                              param_1[0x25] = (longlong)local_3f8;
                              param_1[0x26] = (longlong)dStack_3f0;
                              param_1[0x27] = (longlong)local_3e8;
                              local_3e8 = local_3e8 * dVar5;
                              dStack_3f0 = dStack_3f0 * dVar5;
                              local_3f8 = local_3f8 * dVar5;
                              local_4c0 = (double *)((ulonglong)local_4c0 & 0xffffffffffffff00);
                              local_4c8 = (double *)&local_258;
                              FUN_1402eda10(param_1,&local_3f8,&local_128);
                            }
                          }
                        }
                      }
                      goto LAB_140be1373;
                    }
                    goto LAB_140be25ca;
                  }
                }
                uVar32 = 0;
              }
              else {
                uVar32 = CONCAT44(uStack_484,local_488 + fVar43);
              }
LAB_140be25ca:
              lVar16 = *param_1;
              puVar17 = &local_258;
              goto LAB_140be25d8;
            }
          }
        }
LAB_140be1373:
        dVar26 = (double)param_1[0x27] * (double)param_1[0x48] +
                 (double)param_1[0x25] * (double)param_1[0x46] +
                 (double)param_1[0x47] * (double)param_1[0x26];
        dVar23 = (double)param_1[0x48] * dVar26;
        dVar33 = (double)param_1[0x47] * dVar26;
        dVar26 = dVar26 * (double)param_1[0x46];
        dVar5 = (double)param_1[0x27] - dVar23;
        dVar31 = (double)param_1[0x26] - dVar33;
        dVar38 = (double)param_1[0x25] - dVar26;
        if (dVar5 * dVar5 + dVar38 * dVar38 + dVar31 * dVar31 <= 0.0009999999310821295) {
          param_1[0x25] = (longlong)dVar26;
          param_1[0x26] = (longlong)dVar33;
          param_1[0x27] = (longlong)dVar23;
        }
      } while (1e-06 <= fVar42);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140be2fd0 FUN_140be2fd0 body=1595 status=ok
// SIG undefined FUN_140be2fd0(void)

bool FUN_140be2fd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  size_t sVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong lVar11;
  wchar_t *_Str;
  undefined2 *puVar12;
  bool bVar13;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  int local_f0;
  undefined2 *local_e8;
  int local_e0;
  wchar_t *local_d8;
  undefined8 uStack_d0;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined2 local_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined7 uStack_67;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar5 = (longlong *)FUN_14001cc68(0x120,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b3e6280;
  FUN_140be3cb8(plVar5 + 2,&DAT_14cb70b50);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0x10;
    plVar9 = *(longlong **)(param_1 + 0x18);
    if (plVar9 == (longlong *)0x0) goto LAB_140be3076;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_140be3597:
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
    if (plVar5 == (longlong *)0x0) goto LAB_140be3076;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x10) = plVar5 + 2;
    plVar9 = *(longlong **)(param_1 + 0x18);
    if (plVar5 == plVar9) {
      LOCK();
      plVar9 = plVar5 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x18) = plVar5;
      if (plVar9 != (longlong *)0x0) goto LAB_140be3597;
    }
  }
  LOCK();
  plVar9 = plVar5 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_140be3076:
  lVar6 = *(longlong *)(param_1 + 0x10);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (lVar6 != 0) {
    uStack_70 = *(undefined8 *)(lVar6 + 0x68);
    local_78 = lVar6;
  }
  lVar6 = FUN_140be360c(&local_78);
  if (lVar6 != 0) {
    local_98 = *(undefined2 *)(param_1 + 0x5c);
    FUN_1407e1732(lVar6,&local_98,0);
  }
  lVar6 = FUN_140be360c(&local_78);
  if (lVar6 != 0) {
    FUN_1407e14ea(lVar6,param_1 + 0x28,0);
  }
  if ((2 < *(ushort *)(param_1 + 0x5c)) && (lVar6 = FUN_140be360c(&local_78), lVar6 != 0)) {
    FUN_1407e14ea(lVar6,param_1 + 0x38,0);
  }
  lVar6 = FUN_140be360c(&local_78);
  if (lVar6 != 0) {
    FUN_1407e14ea(lVar6,param_1 + 0x48,0);
  }
  lVar6 = FUN_140be360c(&local_78);
  if (lVar6 != 0) {
    local_98 = (undefined2)*(undefined4 *)(param_1 + 0x58);
    uStack_96 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x58) >> 0x10);
    FUN_140be3de8(lVar6,&local_98,0);
  }
  lVar6 = FUN_140be360c(&local_78);
  if (lVar6 != 0) {
    FUN_1400b22c2(&local_98,&DAT_14b3e530b);
    FUN_1407e14ea(lVar6,&local_98,0);
    if (CONCAT44(uStack_94,CONCAT22(uStack_96,local_98)) != 0) {
      FUN_1400020a8();
    }
  }
  local_98 = (undefined2)local_78;
  uStack_96 = (undefined2)((ulonglong)local_78 >> 0x10);
  uStack_94 = local_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  _local_88 = CONCAT71(uStack_67,1);
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x60);
    lVar11 = (longlong)*(int *)(param_1 + 0x68) * 0x38;
    do {
      lVar7 = FUN_140be360c(&local_98);
      if (lVar7 != 0) {
        FUN_140b126e4(lVar6,&local_b8);
        FUN_1407e14ea(lVar7,&local_b8,0);
        if (CONCAT44(uStack_b4,local_b8) != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 0x38;
      lVar11 = lVar11 + -0x38;
    } while (lVar11 != 0);
  }
  lVar6 = FUN_140be360c(&local_78);
  if (lVar6 != 0) {
    FUN_1400b22c2(&local_b8,&DAT_14b3e5310);
    FUN_1407e14ea(lVar6,&local_b8,0);
    if (CONCAT44(uStack_b4,local_b8) != 0) {
      FUN_1400020a8();
    }
  }
  iVar3 = *(int *)(param_1 + 0x78);
  lVar6 = (longlong)iVar3;
  if (lVar6 < 100) {
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    _local_a8 = CONCAT71(uStack_67,1);
    local_108 = lVar6;
    if (iVar3 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x70);
      lVar6 = lVar6 * 0x48;
      do {
        lVar7 = FUN_140be360c(&local_b8);
        if (lVar7 != 0) {
          FUN_1408226d0(lVar11,&local_c8,1);
          FUN_1407e14ea(lVar7,&local_c8,0);
          if (local_c8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar7 = FUN_140be360c(&local_b8);
        if (lVar7 != 0) {
          local_c8 = (wchar_t *)CONCAT62(local_c8._2_6_,(ushort)*(byte *)(lVar11 + 0x30));
          FUN_1407e1732(lVar7,&local_c8,0);
        }
        lVar7 = FUN_140be360c(&local_b8);
        if (lVar7 != 0) {
          local_c8 = (wchar_t *)0x0;
          uStack_c0 = 0;
          if (*(byte *)(lVar11 + 0x30) - 0x1f < 2) {
LAB_140be337a:
            FUN_140be3a58((undefined8 *)(lVar11 + 0x10),&local_d8);
            if (local_c8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            local_c8 = local_d8;
            uStack_c0 = uStack_d0;
          }
          else {
            uVar4 = (uint)*(byte *)(lVar11 + 0x30);
            if (uVar4 < 0x1e) {
              if (uVar4 == 0x1d) {
                if (*(longlong *)(lVar11 + 0x18) != 0) {
                  local_d8 = *(wchar_t **)(*(longlong *)(lVar11 + 0x18) + 0x18);
                  FUN_1400021e4(&local_d8,&local_e8);
                  puVar12 = &DAT_149dfb77a;
                  if (local_e0 != 0) {
                    puVar12 = local_e8;
                  }
                  local_100 = *(undefined8 *)(lVar11 + 0x10);
                  FUN_1400021e4(&local_100,&local_f8);
                  puVar10 = &DAT_149dfb77a;
                  if (local_f0 != 0) {
                    puVar10 = local_f8;
                  }
                  FUN_140002266(&local_d8,L"%s|%s",puVar10,puVar12);
                  if (local_c8 != (wchar_t *)0x0) {
                    FUN_1400020a8();
                  }
                  local_c8 = local_d8;
                  uStack_c0 = uStack_d0;
                  local_d8 = (wchar_t *)0x0;
                  uStack_d0 = 0;
                  if (local_f8 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_e8 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                }
              }
              else if ((0x24010fU >> (uVar4 & 0x1f) & 1) != 0) goto LAB_140be337a;
            }
          }
          FUN_1400b22c2(&local_d8,&DAT_149eb5f2c);
          _Str = local_d8;
          if ((int)uStack_d0 == 0) {
            _Str = L"";
          }
          if (_Str == (wchar_t *)0x0) {
            bVar13 = false;
          }
          else {
            sVar8 = wcslen(_Str);
            local_110 = 0xffffffff;
            local_118 = 0;
            iVar3 = FUN_1447ee042(&local_c8,_Str,sVar8 & 0xffffffff,1);
            bVar13 = iVar3 != -1;
          }
          if (local_d8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (!bVar13) {
            FUN_1407e14ea(lVar7,&local_c8);
          }
          if (local_c8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar11 = lVar11 + 0x48;
        lVar6 = lVar6 + -0x48;
      } while (lVar6 != 0);
    }
    iVar3 = (int)local_108;
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3 < 100;
}



// FUNCTION 140be360c FUN_140be360c body=155 status=ok
// SIG undefined FUN_140be360c(void)

longlong FUN_140be360c(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = param_1[1];
  cVar2 = (char)param_1[2];
  if (lVar4 == 0) {
    if (cVar2 != '\0') {
      return 0;
    }
LAB_140be362e:
    lVar3 = FUN_140be36a8();
    param_1[1] = lVar3;
    return lVar3;
  }
  if (cVar2 == '\0') goto LAB_140be362e;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      uVar5 = 1;
      goto LAB_140be364c;
    }
    if (cVar2 != '\x03') {
      return 0;
    }
    lVar1 = *(longlong *)(lVar4 + 0x48);
    if (lVar1 == 0) {
LAB_140be3673:
      lVar4 = FUN_1407e15d4(lVar3,lVar4,1);
      FUN_1407e1ade(lVar4);
    }
    else {
      cVar2 = FUN_14895dea2(lVar1);
      lVar4 = lVar1;
      if (cVar2 == '\0') {
        lVar3 = *param_1;
        lVar4 = param_1[1];
        goto LAB_140be3673;
      }
    }
    lVar3 = *param_1;
  }
  uVar5 = 0;
LAB_140be364c:
  lVar3 = FUN_1407e15d4(lVar3,lVar4,uVar5);
  param_1[1] = lVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  return lVar3;
}



// FUNCTION 140be36a8 FUN_140be36a8 body=590 status=ok
// SIG undefined FUN_140be36a8(void)

undefined8 * FUN_140be36a8(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (0x80 < *(uint *)(param_1 + 0xe4)) {
      *(undefined4 *)(param_1 + 0xe4) = 0x80;
      FUN_1446efbd8(param_1 + 200,0);
    }
    puVar2 = (undefined8 *)(param_1 + 0xe8);
    if (0xf < *(ulonglong *)(param_1 + 0x100)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)puVar2 = 0;
    param_2 = *(longlong *)(param_1 + 0x68);
  }
  else {
    if (*(longlong *)(param_2 + 0x58) != param_1) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (0x80 < *(uint *)(param_1 + 0xe4)) {
      *(undefined4 *)(param_1 + 0xe4) = 0x80;
      FUN_1446efbd8(param_1 + 200,0);
    }
    puVar2 = (undefined8 *)(param_1 + 0xe8);
    if (0xf < *(ulonglong *)(param_1 + 0x100)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)puVar2 = 0;
  }
  do {
    lVar3 = param_2;
    if (lVar3 == 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x68,0x10);
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0xf;
      puVar2[5] = 0;
      puVar2[6] = 0;
      *puVar2 = &PTR_FUN_14b4257d8;
      *(undefined1 *)(puVar2 + 7) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x3a) = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = param_1;
      *(undefined2 *)(puVar2 + 0xc) = 0;
      iVar1 = *(int *)(param_1 + 0xc0);
      *(uint *)(param_1 + 0xc0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xc4) < iVar1 + 1U) {
        FUN_140be38f6(param_1 + 0xb8,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar1 * 8) = puVar2;
      *(undefined8 **)(param_1 + 0x68) = puVar2;
      return puVar2;
    }
    param_2 = *(longlong *)(lVar3 + 0x40);
  } while (*(longlong *)(lVar3 + 0x40) != 0);
  puVar2 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xf;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *puVar2 = &PTR_FUN_14b4257d8;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined2 *)((longlong)puVar2 + 0x3a) = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = param_1;
  *(undefined2 *)(puVar2 + 0xc) = 0;
  iVar1 = *(int *)(param_1 + 0xc0);
  *(uint *)(param_1 + 0xc0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xc4) < iVar1 + 1U) {
    FUN_140be38f6((longlong *)(param_1 + 0xb8),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar1 * 8) = puVar2;
  *(undefined8 **)(lVar3 + 0x40) = puVar2;
  *(undefined2 *)((longlong)puVar2 + 0x3a) = *(undefined2 *)(lVar3 + 0x3a);
  puVar2[10] = *(undefined8 *)(lVar3 + 0x50);
  return puVar2;
}



// FUNCTION 140be38f6 FUN_140be38f6 body=353 status=ok
// SIG undefined FUN_140be38f6(void)

void FUN_140be38f6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140be397b;
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
LAB_140be397b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140be3a58 FUN_140be3a58 body=608 status=ok
// SIG undefined FUN_140be3a58(void)

undefined8 * FUN_140be3a58(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong in_stack_ffffffffffffffc8;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120);
  if ((((*(int *)((longlong)&DAT_14c9a853c + uVar3) == 0) ||
       (uVar2 = *(uint *)((longlong)&DAT_14c9a8538 + uVar3), (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)((longlong)&DAT_14c9a853c + uVar3)))
      || (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 ||
          (plVar1 = (longlong *)((longlong)&DAT_14c9a8540 + uVar3), *plVar5 == 0)))))) {
    *(undefined8 *)((longlong)&DAT_14c9a8540 + uVar3) = 0;
    return param_2;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    in_stack_ffffffffffffffc8 = FUN_140342cba();
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,in_stack_ffffffffffffffc8,
                  FUN_1468c7f1e);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  plVar5 = (longlong *)*plVar1;
  if (((((plVar5 == (longlong *)0x0) || (*(int *)((longlong)&DAT_14c9a854c + uVar3) == 0)) ||
       (uVar2 = *(uint *)((longlong)&DAT_14c9a8548 + uVar3), (int)uVar2 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar2 ||
       (lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 == 0)))) ||
     ((*(int *)(lVar6 + 0x10) != *(int *)((longlong)&DAT_14c9a854c + uVar3) ||
      ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))) {
    if (*(int *)((longlong)&DAT_14c9a8558 + uVar3) != 0) {
      plVar5 = (longlong *)FUN_14007daa4(plVar1,0,0);
      if (plVar5 == (longlong *)0x0) {
LAB_140be3c16:
        if (*plVar1 == 0) {
          return param_2;
        }
        *plVar1 = 0;
        *(undefined8 *)((longlong)&DAT_14c9a8548 + uVar3) = 0;
        return param_2;
      }
      puVar4 = (undefined *)plVar5[1];
      if (DAT_14c951a40 == 0) {
        bVar7 = puVar4 != (undefined *)0x0;
        if (puVar4 != &DAT_14c951a38 && bVar7) {
          do {
            puVar4 = *(undefined **)(puVar4 + 0x30);
            bVar7 = puVar4 != (undefined *)0x0;
            if (puVar4 == &DAT_14c951a38) break;
          } while (puVar4 != (undefined *)0x0);
        }
        if (!bVar7) goto LAB_140be3c16;
      }
      else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c951a40) == 0) goto LAB_140be3c16;
      *plVar1 = (longlong)plVar5;
    }
    if (plVar5 == (longlong *)0x0) {
      return param_2;
    }
  }
  if (0x18 < *(ushort *)(param_1 + 3)) {
    param_1 = (undefined8 *)*param_1;
  }
  (**(code **)(*plVar5 + 0xf0))
            (0,param_2,param_1,0,0,0,in_stack_ffffffffffffffc8 & 0xffffffff00000000,0);
  return param_2;
}



// FUNCTION 140be3cb8 FUN_140be3cb8 body=303 status=ok
// SIG undefined FUN_140be3cb8(void)

undefined8 * FUN_140be3cb8(undefined8 *param_1,undefined2 *param_2)

{
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0xf;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b4257d8;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x79) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0xffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x8000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xf;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0xb] = param_1;
  if (param_2 != (undefined2 *)0x0) {
    FUN_1407e191a(param_1);
    FUN_1401d7e14(param_1 + 1,param_2 + 4);
    local_2a = *param_2;
    FUN_1407e1732(param_1,&local_2a,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140be3de8 FUN_140be3de8 body=458 status=ok
// SIG undefined FUN_140be3de8(void)

void FUN_140be3de8(longlong *param_1,uint *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  
  uVar4 = (ulonglong)*param_2 * 2 + 1;
  lVar7 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  (**(code **)(*param_1 + 8))();
  plVar1 = param_1 + 5;
  if ((param_3 < 0) || ((int)param_1[6] <= param_3)) {
    FUN_1407e198a(plVar1,param_3 + 1);
  }
  uVar9 = 1;
  if (1 < (ushort)lVar7) {
    uVar9 = (ushort)lVar7;
  }
  lVar7 = *plVar1;
  lVar13 = (longlong)param_3 * 0x20;
  *(undefined4 *)(lVar7 + 0x18 + lVar13) = 0;
  if (*(int *)(lVar7 + 0x1c + lVar13) - 0x81U < 0xffffff9f) {
    *(undefined4 *)(lVar7 + lVar13 + 0x1c) = 0x80;
    FUN_1446efbd8(lVar7 + lVar13,0);
  }
  uVar14 = (uint)uVar9;
  iVar2 = *(int *)(*plVar1 + 0x18 + lVar13);
  if (iVar2 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar3 = iVar2 + -1;
    }
    iVar3 = iVar3 >> 5;
  }
  lVar13 = *plVar1 + lVar13;
  iVar12 = iVar2 + uVar14;
  iVar5 = iVar2 + uVar14 + -1;
  iVar8 = iVar2 + uVar14 + 0x1e;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  if (iVar8 >> 5 == iVar3) {
    *(int *)(lVar13 + 0x18) = iVar12;
  }
  else {
    if (*(int *)(lVar13 + 0x1c) < iVar12) {
      if (iVar12 + 0x1fU < 0xa0) {
        iVar12 = 0x80;
        iVar3 = iVar2;
      }
      else {
        uVar11 = iVar12 + 0x1fU >> 5;
        if (*(int *)(lVar13 + 0x1c) + 0x1fU < 0xa0) {
          uVar6 = 4;
          if (4 < uVar11) {
            uVar6 = uVar11;
          }
        }
        else {
          uVar6 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
        }
        uVar4 = FUN_144a3809e(uVar6 << 2,0);
        iVar3 = (int)(uVar4 >> 2);
        iVar12 = -0x20;
        if ((int)uVar11 <= iVar3) {
          iVar12 = iVar3 << 5;
        }
        iVar3 = *(int *)(lVar13 + 0x18);
      }
      *(int *)(lVar13 + 0x1c) = iVar12;
      FUN_1446efbd8(lVar13,iVar3);
      iVar12 = *(int *)(lVar13 + 0x18) + uVar14;
    }
    iVar3 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar3 = iVar12;
    }
    *(int *)(lVar13 + 0x18) = iVar12;
    if (iVar12 % 0x20 != 0) {
      lVar7 = *(longlong *)(lVar13 + 0x10);
      if (*(longlong *)(lVar13 + 0x10) == 0) {
        lVar7 = lVar13;
      }
      bVar10 = -(char)(iVar12 % 0x20);
      *(uint *)(lVar7 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)(lVar7 + (longlong)(iVar3 >> 5) * 4) << (bVar10 & 0x1f)) >>
           (bVar10 & 0x1f);
    }
  }
  lVar7 = *(longlong *)(lVar13 + 0x10);
  if (*(longlong *)(lVar13 + 0x10) == 0) {
    lVar7 = lVar13;
  }
  FUN_14493566c(lVar7,iVar2,param_2,0,uVar14);
  return;
}



// FUNCTION 140be3fb2 FUN_140be3fb2 body=705 status=ok
// SIG undefined FUN_140be3fb2(void)

void FUN_140be3fb2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  iVar6 = (*(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x154)) + *(int *)(param_1 + 0x118);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
    FUN_140be42dc(param_3);
  }
  if ((longlong *)(param_1 + 0x110) != param_3) {
    FUN_140be4274(*param_3,(int)param_3[1]);
    iVar6 = *(int *)(param_1 + 0x118);
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    *(int *)(param_3 + 1) = iVar6;
    if (iVar6 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      FUN_140be43b0(param_3,iVar6);
      FUN_140be42ac(*param_3,uVar3,iVar6);
    }
  }
  iVar6 = *(int *)(param_1 + 0x148);
  if (iVar6 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar4 = 0;
    iVar8 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x140);
    if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x130);
    }
    uVar15 = *puVar5;
    if (uVar15 == 0) {
      iVar4 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar4 = iVar6 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar8 = 0;
      do {
        if (uVar14 == uVar13) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar15 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar13 = 0;
      iVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar4 = (iVar8 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar4) {
      iVar4 = iVar6;
    }
  }
  if (iVar4 != iVar6) {
    uVar15 = 0xffffffff;
    do {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar4 * 0x18);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 8 + (longlong)iVar4 * 0x18);
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
        UNLOCK();
      }
      iVar4 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
        FUN_14060ef9e(param_3,iVar4);
      }
      lVar10 = *param_3;
      *(undefined8 *)(lVar10 + (longlong)iVar4 * 0x10) = uVar3;
      *(longlong *)(lVar10 + 8 + (longlong)iVar4 * 0x10) = lVar9;
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0x140);
      if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x130);
      }
      iVar2 = *(int *)(param_1 + 0x148);
      iVar4 = (int)uVar13;
      lVar9 = (longlong)iVar4;
      uVar7 = puVar5[lVar9] & uVar15;
      if (uVar7 == 0) {
        iVar11 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar11 = iVar2 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar4) {
          iVar12 = iVar4;
        }
        if (iVar4 < iVar11) {
          lVar10 = 0;
          do {
            uVar7 = puVar5[lVar9 + lVar10 + 1];
            if (uVar7 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar10 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140be41b3;
            }
            iVar8 = iVar8 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar12 - lVar9 != lVar10);
          uVar15 = 0xffffffff;
          iVar4 = iVar12;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar2;
      }
      else {
LAB_140be41b3:
        uVar14 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar14 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar4 = (iVar8 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar4) {
          iVar4 = iVar2;
        }
      }
    } while (iVar4 != iVar6);
  }
  return;
}



// FUNCTION 140be4274 FUN_140be4274 body=56 status=ok
// SIG undefined FUN_140be4274(void)

void FUN_140be4274(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140be42ac FUN_140be42ac body=47 status=ok
// SIG undefined FUN_140be42ac(void)

void FUN_140be42ac(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140be42dc FUN_140be42dc body=212 status=ok
// SIG undefined FUN_140be42dc(void)

void FUN_140be42dc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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



// FUNCTION 140be43b0 FUN_140be43b0 body=238 status=ok
// SIG undefined FUN_140be43b0(void)

void FUN_140be43b0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140be449e FUN_140be449e body=204 status=ok
// SIG undefined FUN_140be449e(void)

undefined8 * FUN_140be449e(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14ac90810;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x40a0000000000000;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0x202;
  *(undefined1 *)((longlong)param_1 + 0x62) = 2;
  *(undefined8 *)((longlong)param_1 + 100) = 0x40a0000042480000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f80000000000000;
  param_1[0xf] = 0x4234000042340000;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 1;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x40a0000042480000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 1;
  *(undefined4 *)(param_1 + 0x13) = 0x42340000;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 140be4578 FUN_140be4578 body=123 status=ok
// SIG undefined FUN_140be4578(void)

undefined8 * FUN_140be4578(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1a78e0;
  plVar1 = param_1 + 4;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 7)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 7)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140be45fa FUN_140be45fa body=57 status=ok
// SIG undefined FUN_140be45fa(void)

void FUN_140be45fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb228b8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb228b8 = FUN_140002ddd(FUN_146439c06,uVar1,L"GpsGenerator_Active");
  }
  return;
}



// FUNCTION 140be4634 FUN_140be4634 body=1194 status=ok
// SIG undefined FUN_140be4634(void)

void FUN_140be4634(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong *param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined8 local_260;
  undefined *local_258;
  code *local_250;
  undefined8 local_240;
  undefined1 local_238 [8];
  int local_230;
  undefined1 local_22c;
  undefined8 local_228;
  undefined1 local_220 [8];
  undefined4 local_218;
  undefined1 local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f0 [424];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x180))
                    (*(longlong **)(param_1 + 0x78),param_4,1);
  if (cVar4 == '\0') goto LAB_140be467f;
  bVar1 = *(byte *)(param_1 + 0x70);
  uVar8 = 10;
  if ((bVar1 & 1) == 0) {
    uVar8 = 4;
  }
  local_208 = 0;
  uStack_200 = 0;
  FUN_14000e9de(local_1f0,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x34));
  lVar7 = *(longlong *)(param_1 + 0x78);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952478) {
    FUN_144b3d300(&DAT_14c952478);
    if (DAT_14c952478 == -1) {
      FUN_1446f4b16();
      local_250 = FUN_1403a5f94;
      local_258 = &DAT_14c951c78;
      local_260 = 0;
      local_268 = (longlong *)0x4018001;
      FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
      atexit(FUN_1428170e8);
      _Init_thread_footer(&DAT_14c952478);
    }
  }
  puVar6 = *(undefined **)(lVar7 + 8);
  if (DAT_14c952430 == 0) {
    bVar9 = puVar6 != (undefined *)0x0;
    if (puVar6 != &DAT_14c952428 && bVar9) {
      do {
        puVar6 = *(undefined **)(puVar6 + 0x30);
        bVar9 = puVar6 != (undefined *)0x0;
        if (puVar6 == &DAT_14c952428) break;
      } while (puVar6 != (undefined *)0x0);
    }
    if (!bVar9) goto LAB_140be484b;
LAB_140be472d:
    uVar8 = 9;
    if ((bVar1 & 1) == 0) {
      uVar8 = 3;
    }
  }
  else {
    if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952430) != 0) goto LAB_140be472d;
LAB_140be484b:
    lVar7 = *(longlong *)(param_1 + 0x78);
    lVar5 = FUN_140be4ae0();
    lVar7 = *(longlong *)(lVar7 + 8);
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar7 != 0;
      if (lVar7 != lVar5 && bVar9) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar9 = lVar7 != 0;
          if (lVar7 == lVar5) break;
        } while (lVar7 != 0);
      }
      if (bVar9) goto LAB_140be4a12;
LAB_140be4878:
      lVar7 = *(longlong *)(param_1 + 0x78);
      FUN_140be4b84();
      puVar6 = *(undefined **)(lVar7 + 8);
      if (DAT_14c9497b0 == 0) {
        bVar9 = puVar6 != (undefined *)0x0;
        if (puVar6 != &DAT_14c9497a8 && bVar9) {
          do {
            puVar6 = *(undefined **)(puVar6 + 0x30);
            bVar9 = puVar6 != (undefined *)0x0;
            if (puVar6 == &DAT_14c9497a8) break;
          } while (puVar6 != (undefined *)0x0);
        }
        if (bVar9) goto LAB_140be4aa5;
LAB_140be48a0:
        lVar7 = *(longlong *)(param_1 + 0x78);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c947f70) {
          FUN_144b3d300(&DAT_14c947f70);
          if (DAT_14c947f70 == -1) {
            local_258 = (undefined *)FUN_1446ddbd2();
            local_250 = FUN_141710108;
            local_260 = 0x1000000000000000;
            local_268 = (longlong *)0x8001;
            FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
            atexit(FUN_1427b4857);
            _Init_thread_footer(&DAT_14c947f70);
          }
        }
        puVar6 = *(undefined **)(lVar7 + 8);
        if (DAT_14c947f28 == 0) {
          bVar9 = puVar6 != (undefined *)0x0;
          if ((puVar6 != &DAT_14c947f20) && (puVar6 != (undefined *)0x0)) {
            do {
              puVar6 = *(undefined **)(puVar6 + 0x30);
              bVar9 = puVar6 != (undefined *)0x0;
            } while (puVar6 != &DAT_14c947f20 && bVar9);
          }
          if (bVar9) {
LAB_140be4ab7:
            uVar8 = 0x11;
            goto LAB_140be473e;
          }
        }
        else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c947f28) != 0) goto LAB_140be4ab7;
        uVar3 = *(undefined8 *)(param_1 + 0x78);
        iVar2 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
          FUN_14000e500(param_5,iVar2);
        }
        *(undefined8 *)(*param_5 + (longlong)iVar2 * 8) = uVar3;
        local_268 = param_5;
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x188))
                  (*(longlong **)(param_1 + 0x78),local_1f0,0,param_4);
        goto LAB_140be4955;
      }
      if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c9497b0) == 0) goto LAB_140be48a0;
LAB_140be4aa5:
      uVar8 = 8;
    }
    else {
      if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_140be4878;
LAB_140be4a12:
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      iVar2 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
        FUN_14000e500(param_5,iVar2);
      }
      *(undefined8 *)(*param_5 + (longlong)iVar2 * 8) = uVar3;
      FUN_14000e6f0(local_220,2);
      local_218 = 0;
      local_214 = 2;
      local_210 = 0;
      FUN_14000e760(local_1f0,local_220);
LAB_140be4955:
      *(int *)(param_5 + 1) = (int)param_5[1] + -1;
      FUN_14000e472(param_5);
    }
  }
LAB_140be473e:
  FUN_1446f07d6(local_1f0,&local_240,0);
  iVar2 = *(int *)(param_1 + 0x44);
  FUN_14000e6f0(local_238,uVar8);
  local_228 = local_240;
  local_230 = param_3 + iVar2;
  local_22c = uVar8;
  FUN_14000e760(param_2,local_238);
  FUN_14000eb08(local_1f0);
LAB_140be467f:
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140be4ae0 FUN_140be4ae0 body=164 status=ok
// SIG undefined FUN_140be4ae0(void)

undefined * FUN_140be4ae0(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951e80) {
    FUN_144b3d300(&DAT_14c951e80);
    if (DAT_14c951e80 == -1) {
      uVar1 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951e30,L"FInterfaceProperty",0x1000,0,0x9001,0,uVar1,FUN_14171969a);
      atexit(FUN_14281529b);
      _Init_thread_footer(&DAT_14c951e80);
    }
  }
  return &DAT_14c951e30;
}



// FUNCTION 140be4b84 FUN_140be4b84 body=174 status=ok
// SIG undefined FUN_140be4b84(void)

undefined * FUN_140be4b84(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9497f8) {
    FUN_144b3d300(&DAT_14c9497f8);
    if (DAT_14c9497f8 == -1) {
      uVar1 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c9497a8,L"FFieldPathProperty",0x10000000000000,0,0x10000000008001,0,uVar1
                    ,FUN_14689b750);
      atexit(FUN_1427e1c87);
      _Init_thread_footer(&DAT_14c9497f8);
    }
  }
  return &DAT_14c9497a8;
}



// FUNCTION 140be4c32 FUN_140be4c32 body=9 status=ok
// SIG undefined FUN_140be4c32(void)

void FUN_140be4c32(longlong param_1)

{
  FUN_140be4c3c(param_1 + 0x10);
  return;
}



// FUNCTION 140be4c3c FUN_140be4c3c body=109 status=ok
// SIG undefined FUN_140be4c3c(void)

void FUN_140be4c3c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar3 = 0;
    do {
      FUN_1400020a8(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1447ab16c((longlong *)(param_1 + 0x18),0);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140be4cb8 FUN_140be4cb8 body=104 status=ok
// SIG undefined FUN_140be4cb8(void)

undefined8 * FUN_140be4cb8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3596f0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b3593b0;
  FUN_14029e95e(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140be4d20 FUN_140be4d20 body=192 status=ok
// SIG undefined FUN_140be4d20(void)

void FUN_140be4d20(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte bVar9;
  
  FUN_140be4de0();
  lVar7 = FUN_1405faa04(param_1 + 0x30);
  if (lVar7 != 0) {
    uVar3 = *param_2;
    uVar8 = FUN_140082ff6();
    cVar6 = FUN_1448093f4(uVar3,uVar8);
    if (cVar6 != '\0') {
      uVar3 = *param_2;
      plVar4 = (longlong *)param_2[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (*(byte *)(param_1 + 0x48) != 0) {
        cVar6 = '\0';
        bVar9 = *(byte *)(param_1 + 0x48);
        do {
          if ((bVar9 & 1) != 0) {
            uVar8 = FUN_1405faa04(param_1 + 0x30);
            FUN_14083c3be(uVar3,uVar8,cVar6,1);
          }
          cVar6 = cVar6 + '\x01';
          bVar5 = 1 < bVar9;
          bVar9 = bVar9 >> 1;
        } while (bVar5);
      }
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
                    /* WARNING: Could not recover jumptable at 0x000140be4ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x10))(plVar4);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140be4de0 FUN_140be4de0 body=70 status=ok
// SIG undefined FUN_140be4de0(void)

void FUN_140be4de0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1405faa04(param_1 + 0x30);
  if (lVar2 != 0) {
    plVar1 = (longlong *)*param_2;
    uVar3 = FUN_1405faa04(param_1 + 0x30);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000140be4e1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,uVar3,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 140be4e26 FUN_140be4e26 body=649 status=ok
// SIG undefined FUN_140be4e26(void)

void FUN_140be4e26(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)(param_1 + 0x50);
  if (param_2 == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x68),0);
    }
    puVar3 = *(undefined2 **)(param_1 + 0x68);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_58,param_2);
    *(undefined4 *)(param_1 + 0x58) = local_58;
    *(undefined4 *)(param_1 + 0x5c) = uStack_54;
    *(undefined4 *)(param_1 + 0x60) = uStack_50;
    *(undefined4 *)(param_1 + 100) = uStack_4c;
    if ((undefined4 *)(param_1 + 0x58) == &local_58) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x68) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x70) = local_40;
      *(undefined4 *)(param_1 + 0x74) = local_3c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(param_2 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(param_1 + 0x50) = 0;
        goto LAB_140be4eef;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
    *(int *)(param_1 + 0x54) = iVar5;
  }
LAB_140be4eef:
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    iVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x78) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 0x7c) = iVar5;
  FUN_140be50b0(param_1,*(longlong *)(param_2 + 0x30) + 0x58);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140be50b0 FUN_140be50b0 body=1126 status=ok
// SIG undefined FUN_140be50b0(void)

void FUN_140be50b0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  
  if (((((*(int *)((longlong)param_1 + 0x7c) == 0) ||
        (uVar15 = *(uint *)(param_1 + 0xf), (int)uVar15 < 0)) || (DAT_14c9647dc <= (int)uVar15)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)((longlong)param_1 + 0x7c))))) ||
     (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar4 = *plVar10, lVar4 == 0)))) {
    lVar4 = FUN_140be5516(param_1 + 10);
  }
  lVar3 = FUN_140be5516(param_1 + 10);
  uVar21 = 0;
  if (lVar3 == 0) {
    plVar10 = (longlong *)0x0;
    goto LAB_140be519b;
  }
  if (*(int *)((longlong)param_1 + 0x7c) == 0) {
LAB_140be51e1:
    uVar11 = 0;
  }
  else {
    uVar15 = *(uint *)(param_1 + 0xf);
    uVar11 = 0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)((longlong)param_1 + 0x7c) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_140be51e1;
      uVar11 = *puVar12;
    }
  }
  plVar10 = (longlong *)
            (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x68))(*(longlong **)(lVar3 + 0x30),uVar11)
  ;
LAB_140be519b:
  iVar2 = (int)param_1[5];
  uVar20 = 1;
  iVar22 = 0;
  iVar14 = 0;
  if (iVar2 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar9;
    if (uVar15 == 0) {
      iVar14 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar14 = iVar2 + -1;
      }
      uVar21 = 0;
      uVar20 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar20 = uVar21;
      }
      do {
        if (uVar20 == uVar21) {
          return;
        }
        iVar22 = iVar22 + 0x20;
        uVar15 = puVar9[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar21 = 0;
    }
    uVar20 = (ulonglong)(-uVar15 & uVar15);
    uVar5 = uVar20 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar14 = (iVar22 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar14) {
      iVar14 = iVar2;
    }
  }
  if (iVar2 <= iVar14) {
    return;
  }
  uVar15 = 0xffffffff;
LAB_140be51eb:
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    plVar19 = (longlong *)*param_2;
    lVar3 = *(longlong *)(*param_1 + (longlong)iVar14 * 0x48);
    lVar16 = (longlong)*(int *)(param_2 + 1) * 0x58;
    do {
      if (plVar19[7] == lVar3) {
        if (plVar19 != (longlong *)0x0) {
          if (plVar10 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
            goto LAB_140be5264;
          }
          if ((int)plVar10[1] == *(int *)((longlong)plVar10 + 0x34)) {
            plVar17 = (longlong *)0x0;
            goto LAB_140be5259;
          }
          uVar6 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar18 = (uint)lVar3 & 0xffff;
          plVar13 = plVar10 + 7;
          if ((longlong *)plVar10[8] != (longlong *)0x0) {
            plVar13 = (longlong *)plVar10[8];
          }
          iVar2 = *(int *)((longlong)plVar13 +
                          (ulonglong)
                          ((int)plVar10[9] - 1U &
                          (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar18) +
                          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar18 >> 4)) * 4);
          if (iVar2 == -1) {
            plVar17 = (longlong *)0x0;
            goto LAB_140be5259;
          }
          goto LAB_140be53e6;
        }
        break;
      }
      plVar19 = plVar19 + 0xb;
      lVar16 = lVar16 + -0x58;
    } while (lVar16 != 0);
  }
  goto LAB_140be54b7;
  while( true ) {
    iVar2 = (int)plVar17[8];
    plVar17 = (longlong *)0x0;
    if (iVar2 == -1) break;
LAB_140be53e6:
    plVar17 = (longlong *)(*plVar10 + (longlong)iVar2 * 0x48);
    if (*plVar17 == lVar3) break;
  }
LAB_140be5259:
  plVar13 = plVar17 + 1;
  if (plVar17 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
LAB_140be5264:
  if (plVar13 != (longlong *)0x0) {
    plVar19 = plVar13;
  }
  lVar3 = *param_1 + (longlong)iVar14 * 0x48;
  if ((char)plVar19[6] != *(char *)(lVar3 + 0x38)) {
    FUN_145781132(lVar3 + 8,CONCAT71((int7)((ulonglong)plVar13 >> 8),(char)plVar19[6]),lVar4);
  }
  if (*(byte *)(lVar3 + 0x30) == *(byte *)(plVar19 + 5)) {
    if (*(ushort *)(plVar19 + 4) < 0x19) {
      plVar19 = plVar19 + 1;
    }
    else {
      plVar19 = (longlong *)plVar19[1];
    }
    puVar12 = (undefined8 *)(lVar3 + 0x10);
    if (0x18 < *(ushort *)(lVar3 + 0x28)) {
      puVar12 = (undefined8 *)*puVar12;
    }
    uVar5 = (ulonglong)((uint)*(byte *)(lVar3 + 0x30) * 0x120);
    if (*(code **)(&DAT_14c9a85e0 + uVar5) == (code *)0x0) {
      iVar2 = memcmp(puVar12,plVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      if (iVar2 != 0) goto LAB_140be52e0;
    }
    else {
      cVar1 = (**(code **)(&DAT_14c9a85e0 + uVar5))(puVar12,plVar19);
      if (cVar1 == '\0') goto LAB_140be52e0;
    }
LAB_140be54b7:
    FUN_1470e8580(param_1,iVar14);
  }
LAB_140be52e0:
  uVar15 = uVar15 & ~(uint)uVar20;
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = (uint *)(param_1 + 2);
  }
  iVar2 = (int)param_1[5];
  iVar14 = (int)uVar21;
  lVar3 = (longlong)iVar14;
  uVar6 = puVar9[lVar3] & uVar15;
  if (uVar6 == 0) {
    iVar7 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar7 = iVar2 + -1;
    }
    iVar7 = iVar7 >> 5;
    iVar8 = iVar7;
    if (iVar7 < iVar14) {
      iVar8 = iVar14;
    }
    if (iVar7 <= iVar14) {
      return;
    }
    lVar16 = 0;
    while( true ) {
      iVar22 = iVar22 + 0x20;
      uVar6 = puVar9[lVar3 + lVar16 + 1];
      if (uVar6 != 0) break;
      lVar16 = lVar16 + 1;
      if (iVar8 - lVar3 == lVar16) {
        return;
      }
    }
    uVar21 = (ulonglong)(iVar14 + (int)lVar16 + 1);
    uVar15 = 0xffffffff;
  }
  uVar20 = (ulonglong)(-uVar6 & uVar6);
  uVar5 = uVar20 * 2 + 1;
  lVar3 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar14 = (iVar22 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar14) {
    return;
  }
  goto LAB_140be51eb;
}



// FUNCTION 140be5516 FUN_140be5516 body=484 status=ok
// SIG undefined FUN_140be5516(void)

longlong FUN_140be5516(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  code *local_38;
  code *local_30;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar3 = *plVar5, lVar3 == 0)))) {
    if (*(longlong *)(param_1 + 2) != 0) {
      lVar3 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar3 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(param_1,lVar3);
        if (lVar3 == 0) goto LAB_140be565d;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_1,lVar3);
        }
      }
      if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_140be5586;
    }
  }
  else {
LAB_140be5586:
    if (DAT_14c9a53e8 == 0) {
      local_40 = &local_20;
      local_20 = &LAB_141741c86;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1470cc1e5;
      local_50 = FUN_1462ad312;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000001;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxGraphAsset",&DAT_14c9a53e8,&DAT_1470cc1e4);
    }
    if ((*(int *)(DAT_14c9a53e8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c9a53e8 + 0x38) * 8) == DAT_14c9a53e8 + 0x30)) goto LAB_140be55b9;
  }
LAB_140be565d:
  lVar3 = 0;
LAB_140be55b9:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 140be56fc FUN_140be56fc body=43 status=ok
// SIG undefined FUN_140be56fc(void)

void FUN_140be56fc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 140be5727 FUN_140be5727 body=193 status=ok
// SIG undefined FUN_140be5727(void)

undefined8
FUN_140be5727(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_14c9a7d48 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c9a7d48 + 0x250));
    uVar1 = FUN_140be5900(DAT_14c9a7d48,param_1);
    lVar2 = FUN_140be57e8(uVar1,param_2);
    lVar3 = *(longlong *)(lVar2 + 0x18);
    if (lVar3 == 0) {
      lVar3 = FUN_141447c1b(0x240,0x40);
      FUN_145782a14(lVar3,lVar2);
      *(longlong *)(lVar2 + 0x18) = lVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_14c9a7d48 + 0x250));
    uVar1 = FUN_140be586a(lVar3,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140be57e8 FUN_140be57e8 body=129 status=ok
// SIG undefined FUN_140be57e8(void)

undefined8 * FUN_140be57e8(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + (longlong)param_2 * 8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    uVar2 = FUN_14479d2ce(param_1 + 0x48);
    FUN_1409e1656(puVar1);
    *puVar1 = &PTR_FUN_14a1c9ca0;
    puVar1[1] = 0;
    FUN_14485c47a(puVar1 + 1,uVar2);
    *(int *)(puVar1 + 2) = param_2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined8 **)(param_1 + (longlong)param_2 * 8) = puVar1;
  }
  return puVar1;
}



// FUNCTION 140be586a FUN_140be586a body=149 status=ok
// SIG undefined FUN_140be586a(void)

undefined8 FUN_140be586a(longlong param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  
  if ((*param_3 != 0) && (cVar4 = FUN_140be5dbc(), cVar4 == '\0')) {
    return 0;
  }
  puVar5 = (undefined8 *)FUN_140be59fe(&DAT_14c9a8040);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &DAT_149dfb77a;
  FUN_14487d8d8(puVar5,param_4);
  puVar5[2] = DAT_14c872be0;
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  lVar3 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(int *)(puVar5 + 3) = (int)*param_3;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar1;
  *(int *)(puVar5 + 4) = (int)lVar3;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar2;
  FUN_140be5b5e(param_1 + (ulonglong)((param_2 & 0xff) << 7) + 0x40,puVar5);
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  return 1;
}



// FUNCTION 140be5900 FUN_140be5900 body=253 status=ok
// SIG undefined FUN_140be5900(void)

undefined8 * FUN_140be5900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 == 0) {
    puVar5 = (undefined8 *)(param_1 + 400);
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x1e0);
    if ((longlong)*(int *)(param_1 + 0x1e8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1e0);
      lVar8 = (longlong)*(int *)(param_1 + 0x1e8) << 3;
      lVar7 = 0;
      do {
        cVar4 = FUN_1447ffd82(*(longlong *)(lVar3 + lVar7 * 8) + 0x48,param_2);
        if (cVar4 != '\0') {
          uVar6 = (uint)lVar7;
          if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x1e8))) {
            return *(undefined8 **)(*plVar1 + (ulonglong)(uVar6 & 0x7fffffff) * 8);
          }
          break;
        }
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar5[9] = 0;
    FUN_14485c47a(puVar5 + 9,param_2);
    puVar5[8] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    iVar2 = *(int *)(param_1 + 0x1e8);
    *(uint *)(param_1 + 0x1e8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x1ec) < iVar2 + 1U) {
      FUN_145782990(plVar1,iVar2);
    }
    *(undefined8 **)(*plVar1 + (longlong)iVar2 * 8) = puVar5;
  }
  return puVar5;
}



// FUNCTION 140be59fe FUN_140be59fe body=351 status=ok
// SIG undefined FUN_140be59fe(void)

longlong FUN_140be59fe(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_1;
  uVar6 = (uint)uVar2;
  do {
    if ((uVar2 & 0x3ffffff) == 0) {
LAB_140be5b34:
      lVar4 = FUN_14001cc68(0x28,0);
      return lVar4;
    }
    uVar3 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar3 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar5 = (ulonglong)((uVar6 & 0x3ffffff) >> 0xe);
    uVar7 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar4 = *(longlong *)(&DAT_14c833b00 + uVar5 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar3 | *(uint *)(lVar4 + 0x10 + uVar7 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      *(undefined4 *)(lVar4 + uVar7 * 0x18 + 0x10) = 0;
      lVar4 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar6 & 0x3ffffff);
      if (lVar4 != 0) {
        return lVar4;
      }
      goto LAB_140be5b34;
    }
    uVar2 = *param_1;
    uVar6 = (uint)uVar2;
  } while( true );
}



// FUNCTION 140be5b5e FUN_140be5b5e body=605 status=ok
// SIG undefined FUN_140be5b5e(void)

ulonglong FUN_140be5b5e(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  
  uVar3 = FUN_14493c560();
  if (uVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (ulonglong)((uVar3 & 0x3fff) * 0x18) +
            *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar3 >> 0xe) * 8);
  }
  *(undefined8 *)(lVar6 + 8) = param_2;
  do {
    while( true ) {
      do {
        uVar2 = *(ulonglong *)(param_1 + 0x40);
        if ((uVar2 & 0x3ffffff) == 0) {
          puVar7 = (ulonglong *)0x0;
        }
        else {
          puVar7 = (ulonglong *)
                   ((ulonglong)(((uint)uVar2 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)(((uint)uVar2 & 0x3ffffff) >> 0xe) * 8)
                   );
        }
        uVar5 = *puVar7;
      } while (*(ulonglong *)(param_1 + 0x40) != uVar2);
      if ((uVar5 & 0x3ffffff) == 0) break;
      uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
      if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      LOCK();
      if (uVar2 == *(ulonglong *)(param_1 + 0x40)) {
        *(ulonglong *)(param_1 + 0x40) = uVar4 | (uint)uVar5 & 0x3ffffff;
      }
      UNLOCK();
    }
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    LOCK();
    uVar1 = *puVar7;
    if (uVar5 == uVar1) {
      *puVar7 = uVar4 | uVar3;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  uVar5 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
  if (uVar5 >> 0x1a < uVar2 >> 0x1a) {
    FUN_14000f986(0x3a83126f);
  }
  LOCK();
  uVar4 = *(ulonglong *)(param_1 + 0x40);
  if (uVar2 == uVar4) {
    *(ulonglong *)(param_1 + 0x40) = uVar5 | uVar3;
    uVar4 = uVar2;
  }
  UNLOCK();
  return uVar4;
}



// FUNCTION 140be5dbc FUN_140be5dbc body=51 status=ok
// SIG undefined FUN_140be5dbc(void)

undefined8 FUN_140be5dbc(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x14) != *(uint *)(param_1 + 0x18)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar1 = (ulonglong)*(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x18);
    }
    else {
      uVar1 = (ulonglong)*(uint *)(param_1 + 0x14);
    }
  }
  if (((int)uVar1 < 0) ||
     (uVar1 = (ulonglong)*(uint *)(param_1 + 0x10),
     (int)*(uint *)(param_1 + 0x10) < *(int *)(param_1 + 0x14))) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    UNLOCK();
    uVar2 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140be5df0 FUN_140be5df0 body=140 status=ok
// SIG undefined FUN_140be5df0(void)

undefined8 * FUN_140be5df0(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14ab72e70;
  param_1[5] = &PTR_FUN_14ab738a0;
  param_1[6] = &PTR_LAB_14ab738e0;
  param_1[0x55] = &PTR_FUN_14ab73930;
  param_1[0x56] = &PTR_FUN_14ab739b0;
  param_1[0x57] = &PTR_FUN_14ab739c0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  FUN_140a18afe(param_1,0);
  return param_1;
}



// FUNCTION 140be5e7c FUN_140be5e7c body=349 status=ok
// SIG undefined FUN_140be5e7c(void)

void FUN_140be5e7c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_140be5fda();
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0xb20) * 0x60,
               (longlong)*(int *)(param_1 + 0xb24) * 0x60);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0xd58) * 2,
               (longlong)*(int *)(param_1 + 0xd5c) * 2);
  }
  if (((int)param_2[8] < 0x19a) && (*(char *)(param_1 + 0xc70) < '\0')) {
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0xc90);
  }
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    *(byte *)(param_1 + 0xc61) = *(byte *)(param_1 + 0xc61) | 0x20;
  }
  bVar1 = *(byte *)(param_2 + 5) & 1;
  if ((bVar1 == 0) || (0x1ec < (int)param_2[8])) {
LAB_140be5ec1:
    if (bVar1 == 0) goto LAB_140be5ee6;
    bVar1 = 1;
    if (*(longlong *)(param_1 + 0xad8) != 0) {
      *(undefined8 *)(param_1 + 0xad8) = 0;
      bVar1 = *(byte *)(param_2 + 5) & 1;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xad8);
    if (lVar2 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0xad8);
      }
      *(longlong *)(param_1 + 0xae0) = lVar2;
      bVar1 = *(byte *)(param_2 + 5) & 1;
      goto LAB_140be5ec1;
    }
    bVar1 = 1;
  }
  if ((bVar1 != 0) && ((int)param_2[8] < 0x189)) {
    *(byte *)(param_1 + 0x418) = *(byte *)(param_1 + 0x418) & 0xef;
  }
LAB_140be5ee6:
                    /* WARNING: Could not recover jumptable at 0x000140be5f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbe8);
  return;
}



// FUNCTION 140be5fda FUN_140be5fda body=1040 status=ok
// SIG undefined FUN_140be5fda(void)

void FUN_140be5fda(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448284b2();
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x6d8) * 0x60,
               (longlong)*(int *)(param_1 + 0x6dc) * 0x60);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x6e8) * 0x60,
               (longlong)*(int *)(param_1 + 0x6ec) * 0x60);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x748) << 2,
               (longlong)*(int *)(param_1 + 0x74c) << 2);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a876580);
  iVar5 = FUN_1448332aa(param_2,&DAT_14a876580);
  if (0 < iVar5) {
    local_34 = *(uint *)(param_1 + 0xa60);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      local_34 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    uVar4 = local_34;
    puVar2 = (ulonglong *)(param_1 + 0xa58);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      iVar5 = *(int *)(param_1 + 0xa60);
      *(uint *)(param_1 + 0xa60) = iVar5 + local_34;
      if ((uint)(*(int *)(param_1 + 0xa64) - iVar5) < local_34) {
        FUN_140d0f110(puVar2);
      }
      uVar7 = *puVar2;
      if ((uVar7 & 1) != 0) {
        uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar2;
      }
      memset((void *)(uVar7 + (longlong)iVar5 * 0x14),0,(longlong)(int)uVar4 * 0x14);
    }
    if (0 < (int)local_34) {
      lVar8 = 0x10;
      lVar9 = 0;
      do {
        uVar7 = *puVar2;
        if ((uVar7 & 1) != 0) {
          uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar2;
        }
        puVar6 = (undefined4 *)(uVar7 + lVar8 + -0x10);
        puVar3 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_2);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        uVar7 = *puVar2;
        if ((uVar7 & 1) != 0) {
          uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar2;
        }
        puVar6 = (undefined4 *)(uVar7 + lVar8 + -0xc);
        puVar3 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_2);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        uVar7 = *puVar2;
        if ((uVar7 & 1) != 0) {
          uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar2;
        }
        puVar6 = (undefined4 *)(uVar7 + lVar8 + -8);
        puVar3 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_2);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        uVar7 = *puVar2;
        if ((uVar7 & 1) != 0) {
          uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar2;
        }
        puVar6 = (undefined4 *)(uVar7 + lVar8 + -4);
        puVar3 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_2);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        uVar7 = *puVar2;
        if ((uVar7 & 1) != 0) {
          uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar2;
        }
        puVar3 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(uVar7 + lVar8),4);
          }
          else {
            thunk_FUN_14572512c(param_2);
          }
        }
        else {
          *(undefined4 *)(uVar7 + lVar8) = *puVar3;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x14;
      } while (lVar9 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140be63f4 FUN_140be63f4 body=235 status=ok
// SIG undefined FUN_140be63f4(void)

undefined8 FUN_140be63f4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  if (*(char *)((longlong)param_1 + 0x119) == '\0') {
    local_48 = (undefined4)param_1[0x25];
    uStack_44 = *(undefined4 *)((longlong)param_1 + 300);
    uStack_40 = (undefined4)param_1[0x26];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x134);
    FUN_140ba791a(&local_48,&local_38);
    iVar4 = local_30 + -1;
    if (local_30 == 0) {
      iVar4 = 0;
    }
    FUN_1446f82e2(&local_28,iVar4,local_38,1);
    *(undefined8 *)((longlong)param_1 + 0x1fc) = local_28;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  lVar2 = FUN_1401f6e4a(param_1 + 3);
  if (lVar2 == 0) {
    plVar3 = param_1 + 0x23;
  }
  else {
    lVar2 = FUN_1401f6e4a(param_1 + 3);
    plVar3 = (longlong *)(lVar2 + 0x204);
  }
  *(char *)((longlong)param_1 + 0x204) = (char)*plVar3;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140be64e0 FUN_140be64e0 body=563 status=ok
// SIG undefined FUN_140be64e0(void)

undefined4 FUN_140be64e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_24c;
  int local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  int local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  int local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  int local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar2 = 0;
  local_258 = 0;
  local_250 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_24c = 0xffffffff00000080;
  local_244 = 0;
  local_238 = 0;
  local_230 = 0;
  local_208 = 0;
  local_200 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_1fc = 0xffffffff00000080;
  local_1f4 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1ac = 0xffffffff00000080;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = 0;
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 0x1d0))(0,param_2,&local_278);
  if (((int)uStack_270 + (int)uStack_220 + (int)uStack_180 + (int)uStack_e0) -
      (local_244 + local_1f4 + local_154 + local_b4) != local_64 - (int)uStack_90) {
    cVar1 = FUN_140be6714(&local_278);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1,&local_278,param_3,param_4);
    }
  }
  FUN_140be6d8c(&local_278);
  if ((local_30 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140be6714 FUN_140be6714 body=469 status=ok
// SIG undefined FUN_140be6714(void)

ulonglong FUN_140be6714(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = (int)*plVar3;
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == 0) goto LAB_140be68e3;
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    plVar3 = param_1 + 0x11;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x12];
    }
    iVar2 = (int)*plVar3;
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(param_1[10] + (longlong)iVar2 * 0x10) == 0) goto LAB_140be68e3;
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + param_1[10] + 8);
      } while (iVar2 != -1);
    }
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  iVar2 = FUN_1403af82c(param_1 + 0x1e,0xb64a1c4f);
  if (iVar2 == -1) {
    if ((int)param_1[0x33] != *(int *)((longlong)param_1 + 0x1c4)) {
      plVar3 = param_1 + 0x39;
      if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[0x3a];
      }
      iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[0x3b] - 1U & 0x9e3779b9) * 4);
      if (iVar2 != -1) {
        lVar1 = param_1[0x32];
        do {
          lVar4 = (longlong)iVar2;
          if (*(longlong *)(lVar1 + 8 + lVar4 * 0x18) == 0 &&
              *(longlong *)(lVar1 + lVar4 * 0x18) == 0) goto LAB_140be6888;
          iVar2 = *(int *)(lVar1 + lVar4 * 0x18 + 0x10);
        } while (iVar2 != -1);
      }
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((int)param_1[0x3d] != *(int *)((longlong)param_1 + 0x214)) {
      plVar3 = param_1 + 0x43;
      if ((longlong *)param_1[0x44] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[0x44];
      }
      iVar2 = (int)*plVar3;
      if (iVar2 != -1) {
        do {
          bVar6 = *(longlong *)(param_1[0x3c] + (longlong)iVar2 * 0x20) == 0;
          uVar5 = CONCAT71((int7)(uVar5 >> 8),!bVar6);
          if (bVar6) break;
          iVar2 = *(int *)((longlong)iVar2 * 0x20 + param_1[0x3c] + 0x18);
        } while (iVar2 != -1);
      }
    }
  }
  else {
LAB_140be6888:
    uVar5 = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
LAB_140be6825:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
LAB_140be68e3:
  uVar5 = 0;
  goto LAB_140be6825;
}



// FUNCTION 140be68ea FUN_140be68ea body=486 status=ok
// SIG undefined FUN_140be68ea(void)

void FUN_140be68ea(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined2 local_118;
  longlong local_110;
  PSRWLOCK local_108;
  int local_100;
  char local_f8;
  char local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffffffffffff;
  local_40 = 1;
  local_110 = param_1 + 0xe40;
  local_f8 = '\0';
  local_f0 = '\x01';
  local_ec = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  FUN_140be6ad2(&local_108,local_110,&local_ec);
  if (local_f0 == '\x01') {
    LOCK();
    *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + -1;
    UNLOCK();
  }
  if (*(char *)(param_2 + 0x141) == '\x01') {
    FUN_145782bfa(param_1 + -0x28,&local_110,&local_128,&local_e8);
  }
  FUN_140be70e2(param_1 + 8,&local_128,param_2,param_3);
  if (local_f8 == '\x01') {
    if (local_100 == 0) {
      ReleaseSRWLockShared(local_108);
    }
    else {
      ReleaseSRWLockExclusive(local_108);
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140cb527e(&local_98);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(&local_e8);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140be6ad2 FUN_140be6ad2 body=91 status=ok
// SIG undefined FUN_140be6ad2(void)

undefined8 * FUN_140be6ad2(undefined8 *param_1,PSRWLOCK param_2,int *param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    if (*(int *)(param_1 + 1) == 0) {
      ReleaseSRWLockShared((PSRWLOCK)*param_1);
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)*param_1);
    }
  }
  iVar1 = *param_3;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    AcquireSRWLockShared(param_2);
  }
  else {
    AcquireSRWLockExclusive(param_2);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 140be6b2e FUN_140be6b2e body=601 status=ok
// SIG undefined FUN_140be6b2e(void)

undefined8 FUN_140be6b2e(longlong param_1,code *param_2,code *param_3,byte param_4)

{
  ulonglong uVar1;
  undefined1 auStack_118 [32];
  int local_f8;
  code *local_e8;
  code *local_e0;
  code **local_d8;
  undefined1 local_c9;
  code *local_c8;
  code **local_c0;
  longlong local_b8;
  longlong local_b0;
  code *local_a8;
  code **local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (param_2[0x238] == (code)0x0) {
    local_d8 = &local_e8;
    local_e0 = FUN_142addd70;
    local_e8 = param_3;
    (**(code **)(*DAT_14c9485b8 + 0x440))();
    local_a0 = &local_c8;
    local_a8 = FUN_142ade05a;
    local_f8 = CONCAT31(local_f8._1_3_,param_4);
    local_c8 = param_2;
    local_c0 = &local_e0;
    local_b8 = param_1 + 0xe40;
    local_b0 = param_1 + 8;
    FUN_140be772a(param_2,&local_98,&local_c9);
    (**(code **)(*DAT_14c9485b8 + 0x448))();
  }
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_a8 = param_3;
  FUN_144731a98(&local_98,param_1 + 0x770);
  local_c8 = FUN_142adddb0;
  local_f8 = (uint)(param_4 ^ 1) << 2;
  local_c0 = &local_a8;
  FUN_140be894c(param_1 + 8,param_2,&local_98);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar1 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_14472eb64(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140be6d8c FUN_140be6d8c body=853 status=ok
// SIG undefined FUN_140be6d8c(void)

void FUN_140be6d8c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_1401958b4(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1403950f6(param_1 + 0x32);
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (*(int *)((longlong)param_1 + 0x14c) != 0) {
    FUN_14472eb64(param_1 + 0x28,0);
  }
  param_1[0x2e] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x16c)) {
    *(undefined4 *)((longlong)param_1 + 0x16c) = 0x80;
    FUN_1446efbd8(param_1 + 0x2a,0);
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_144a1c8ac(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) != 0) {
    FUN_14472eb64(param_1 + 0x14,0);
  }
  param_1[0x1a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xcc)) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
    FUN_1446efbd8(param_1 + 0x16,0);
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_14472eb64(param_1 + 10,0);
  }
  param_1[0x10] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x7c)) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
    FUN_1446efbd8(param_1 + 0xc,0);
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140be70e2 FUN_140be70e2 body=1606 status=ok
// SIG undefined FUN_140be70e2(void)

void FUN_140be70e2(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  undefined4 local_130;
  undefined8 local_128;
  wchar_t *local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  longlong local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0 [2];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68;
  undefined1 local_60 [8];
  code *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1408d9e0e(param_4,0);
  lVar1 = param_4 + 0x50;
  FUN_1408d9e0e(lVar1,0);
  lVar2 = param_4 + 0xf0;
  FUN_14124560e(lVar2,0);
  local_e0 = param_4 + 400;
  FUN_141245296(local_e0,0);
  lVar9 = param_4 + 0x1e0;
  FUN_141245452(lVar9,0);
  *(undefined1 *)(param_4 + 0x238) = 0;
  *(undefined8 *)(param_4 + 0x230) = 0;
  local_78 = *param_3;
  local_70 = *(undefined4 *)(param_3 + 1);
  FUN_140ce09a0(param_4);
  uVar8 = *(uint *)(param_3 + 3);
  if ((uint)(*(int *)(param_4 + 0x58) - *(int *)(param_4 + 0x84)) < uVar8) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_144732142(lVar1,uVar8);
    iVar5 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_4 + 0x98) == 0) || (*(int *)(param_4 + 0x98) < iVar5)) {
      *(int *)(param_4 + 0x98) = iVar5;
      FUN_144869b4a(lVar1);
    }
  }
  iVar5 = *(int *)(param_3 + 3);
  local_d8 = param_3;
  local_d0 = param_2;
  local_c8 = lVar9;
  local_c0 = param_1;
  local_b8 = lVar2;
  if ((longlong)iVar5 != 0) {
    lVar2 = param_3[2];
    lVar9 = 0;
    do {
      FUN_140e3e292(&local_58,*(undefined8 *)(lVar2 + lVar9));
      FUN_144869592(lVar1,local_a0,&local_58,0);
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar5 * 8 != lVar9);
  }
  puVar7 = local_d8;
  local_88 = local_d8[4];
  local_80 = *(undefined4 *)(local_d8 + 5);
  FUN_142ad1c38(local_b8);
  uVar8 = *(uint *)(puVar7 + 7);
  if ((longlong)(int)uVar8 != 0) {
    if ((uint)(*(int *)(param_4 + 0x198) - *(int *)(param_4 + 0x1c4)) < uVar8) {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar8);
      }
      FUN_1412c825c(local_e0,uVar8);
      iVar5 = 1;
      if (3 < uVar8) {
        uVar8 = (uVar8 | 1) + 0xe;
        iVar5 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 1 << ((byte)iVar5 & 0x1f);
      }
      if ((*(int *)(param_4 + 0x1d8) == 0) || (*(int *)(param_4 + 0x1d8) < iVar5)) {
        *(int *)(param_4 + 0x1d8) = iVar5;
        FUN_144972968(local_e0);
      }
    }
    iVar5 = *(int *)(puVar7 + 7);
    if ((longlong)iVar5 != 0) {
      lVar2 = puVar7[6];
      lVar9 = 0;
      do {
        local_90 = *(longlong *)(lVar2 + lVar9);
        if (local_90 != 0) {
          FUN_1400021e4(&local_90,local_a0);
          if (DAT_14c948f88 == 0) {
            local_68 = (code *)&DAT_1427db2a2;
            lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c948f88 = lVar10;
            FUN_1446f470e(local_60,L"Struct",1);
            local_100 = &local_68;
            local_108 = &LAB_146891313;
            local_110 = FUN_146272f63;
            local_120 = L"Engine";
            local_118 = (wchar_t *)CONCAT44(local_118._4_4_,199);
            local_128 = 8;
            local_130 = 0x10000020;
            local_138._0_4_ = 8;
            FUN_14574b4b2(lVar10);
            DAT_14c948f88 = lVar10;
            if (DAT_14c927740 == 0) {
              local_58 = FUN_1449e2820;
              local_f0 = FUN_14081d0ea;
              local_f8 = FUN_14081d0ea;
              local_100 = &local_58;
              local_108 = &LAB_146856450;
              local_110 = FUN_1427b121c;
              local_118 = L"Engine";
              local_120 = (wchar_t *)0x0;
              local_128 = CONCAT44(local_128._4_4_,0x10000021);
              local_130 = 8;
              local_138._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            }
            lVar4 = DAT_14c948f88;
            lVar10 = DAT_14c927740;
            uVar6 = FUN_1400163b0();
            local_138 = L"Struct";
            FUN_14574b446(uVar6,lVar4,lVar10,L"/Script/CoreUObject");
            puVar7 = local_d8;
          }
          local_138 = L"Compiling Asset Registry Filter";
          FUN_146891db8(&local_58,DAT_14c948f88,local_a0,3);
          if (local_a0[0] != 0) {
            FUN_1400020a8();
          }
          if (local_58 != (code *)0x0) {
            FUN_144972254(local_e0,local_a0,&local_58,0);
          }
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar5 * 8 != lVar9);
    }
  }
  local_b0 = puVar7[8];
  local_a8 = *(undefined4 *)(puVar7 + 9);
  FUN_1412c8198(local_e0);
  FUN_141283630(local_c8,puVar7 + 10);
  *(undefined1 *)(param_4 + 0x238) = *(undefined1 *)((longlong)puVar7 + 0x142);
  *(undefined4 *)(param_4 + 0x230) = *(undefined4 *)((longlong)puVar7 + 0x144);
  *(undefined4 *)(param_4 + 0x234) = *(undefined4 *)(puVar7 + 0x29);
  if ((*(char *)(puVar7 + 0x28) == '\x01') && (iVar5 = *(int *)(local_d8 + 3), (longlong)iVar5 != 0)
     ) {
    lVar2 = local_d8[2];
    lVar9 = local_c0 + 0x8d0;
    lVar10 = 0;
    do {
      local_58 = FUN_142aebfee;
      local_a0[0] = lVar1;
      plStack_50 = local_a0;
      FUN_140e3dee2(lVar9,*(undefined8 *)(lVar2 + lVar10),&local_58,1);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar5 * 8 != lVar10);
  }
  uVar3 = DAT_14c9480b8;
  uVar6 = DAT_14c948098;
  if (*(char *)((longlong)local_d8 + 0x141) == '\x01') {
    puVar7 = local_d8 + 0x1e;
    if ((*(int *)((longlong)local_d8 + 0x124) < *(int *)(local_d8 + 0x1f)) &&
       (*(int *)(local_d8 + 9) == 0)) {
      local_58 = (code *)0x0;
      plStack_50 = (longlong *)&DAT_00000001;
      FUN_1401d5364(&local_58,0);
      *(undefined8 *)local_58 = uVar6;
      *(undefined8 *)(local_58 + 8) = uVar3;
      FUN_14624a5f4(local_d0,&local_58,puVar7,local_e0);
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_14624a5f4(local_d0,local_d8 + 8,puVar7,local_e0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140be772a FUN_140be772a body=2133 status=ok
// SIG undefined FUN_140be772a(void)

void FUN_140be772a(longlong *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  wchar_t *local_1b0;
  undefined4 local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  code **local_190;
  longlong local_180;
  longlong local_178;
  undefined1 *local_170;
  longlong *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  longlong *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  code *local_120;
  undefined8 *local_118;
  code *local_110;
  longlong **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined1 local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *param_3 = 0;
  local_e0 = *(undefined4 *)((longlong)param_1 + 0x234);
  local_e4 = *(uint *)(param_1 + 0x46) | 0x20;
  local_e8 = param_5;
  local_100 = param_4;
  local_f8 = param_2;
  local_f0 = param_1;
  if ((*(int *)((longlong)param_1 + 0x1c4) < (int)param_1[0x33]) ||
     (*(int *)((longlong)param_1 + 0x34) < (int)param_1[1])) {
    local_58 = (longlong *)0x0;
    local_50 = 0xa00000000;
    local_170 = param_3;
    if ((int)param_1[0x33] == *(int *)((longlong)param_1 + 0x1c4)) {
      plVar11 = param_1 + 2;
      local_d8 = (longlong *)&DAT_100000000;
      local_c8 = 0xffffffff;
      uStack_c0 = 0;
      uStack_d0 = plVar11;
      if ((int)param_1[5] == 0) {
        iVar13 = 0;
      }
      else {
        FUN_1449c0562(&local_d8);
        iVar13 = (int)param_1[5];
      }
      uStack_160 = (undefined4)local_d8;
      uStack_15c = local_d8._4_4_;
      local_148 = CONCAT44(uStack_bc,uStack_c0);
      uStack_150 = local_c8;
      uVar7 = uStack_150;
      local_158 = uStack_d0;
      uStack_150._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      iVar4 = uStack_150._4_4_;
      local_168 = param_1;
      if ((uStack_150._4_4_ != iVar13) || (uStack_d0 != plVar11)) {
        do {
          uStack_150 = uVar7;
          uVar7 = *(undefined8 *)(*local_168 + (longlong)iVar4 * 0x10);
          uVar8 = FUN_144a7a812();
          local_1c0 = 0;
          local_1c8 = (wchar_t *)((ulonglong)local_1c8 & 0xffffffff00000000);
          lVar6 = FUN_140be85e0(uVar8,0,uVar7,0);
          if (lVar6 != 0) {
            local_d8 = &local_a8;
            local_118 = &local_d8;
            local_120 = FUN_142added2;
            local_1c8 = (wchar_t *)((ulonglong)local_1c8 & 0xffffffff00000000);
            FUN_144a56f9f(lVar6,&local_120,CONCAT71((int7)((ulonglong)local_118 >> 8),1));
          }
          uStack_150 = CONCAT44(uStack_150._4_4_,(uint)uStack_150 & ~uStack_15c);
          FUN_1449c0562(&uStack_160);
          iVar4 = uStack_150._4_4_;
          uVar7 = uStack_150;
        } while (local_168 != param_1 || (local_158 != plVar11 || uStack_150._4_4_ != iVar13));
      }
    }
    else {
      iVar13 = (int)param_1[0x37];
      if (iVar13 == 0) {
        uVar14 = 1;
        uVar15 = 0;
        iVar4 = 0;
        iVar16 = 0;
      }
      else {
        puVar5 = (uint *)param_1[0x36];
        if ((uint *)param_1[0x36] == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 0x34);
        }
        uVar18 = *puVar5;
        if (uVar18 == 0) {
          iVar4 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar4 = iVar13 + -1;
          }
          uVar15 = 0;
          uVar14 = (ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            uVar14 = uVar15;
          }
          iVar16 = 0;
          do {
            if (uVar14 == uVar15) goto LAB_140be7997;
            iVar16 = iVar16 + 0x20;
            uVar18 = puVar5[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar15 = 0;
          iVar16 = 0;
        }
        uVar14 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar14 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar4 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar4) {
          iVar4 = iVar13;
        }
      }
      if (iVar4 != iVar13) {
        uVar18 = 0xffffffff;
        do {
          plVar11 = (longlong *)(param_1[0x32] + (longlong)iVar4 * 0x18);
          local_168 = (longlong *)*plVar11;
          uStack_160 = (undefined4)plVar11[1];
          uStack_15c = *(uint *)((longlong)plVar11 + 0xc);
          if (DAT_14c949118 == 0) {
            local_b0 = FUN_140631fbe;
            DAT_14c949118 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            local_180 = DAT_14c949118;
            FUN_1446f470e(&local_d8,L"Class",1);
            local_190 = &local_b0;
            local_198 = &LAB_146891e90;
            local_1a0 = &LAB_146273097;
            local_1b0 = L"Engine";
            local_1a8 = 199;
            local_1b8 = 0x20;
            local_1c0 = 0x10000000;
            local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,8);
            FUN_14574b4b2(local_180);
            DAT_14c949118 = local_180;
            local_180 = FUN_144a7a812();
            local_178 = DAT_14c949118;
            uVar7 = FUN_1449e2fb2();
            local_1c8 = L"Class";
            FUN_14574b446(uVar7,local_178,local_180,L"/Script/CoreUObject");
          }
          lVar6 = FUN_140be8491(DAT_14c949118,&local_168,0);
          if (lVar6 != 0) {
            local_168 = &local_a8;
            local_110 = FUN_142adde94;
            local_1c8 = (wchar_t *)((ulonglong)local_1c8 & 0xffffffff00000000);
            local_108 = &local_168;
            FUN_140245161(lVar6,&local_110,0,0);
          }
          uVar18 = uVar18 & ~(uint)uVar14;
          puVar5 = (uint *)param_1[0x36];
          if ((uint *)param_1[0x36] == (uint *)0x0) {
            puVar5 = (uint *)(param_1 + 0x34);
          }
          iVar2 = (int)param_1[0x37];
          iVar4 = (int)uVar15;
          lVar6 = (longlong)iVar4;
          uVar12 = puVar5[lVar6] & uVar18;
          if (uVar12 == 0) {
            iVar9 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar9 = iVar2 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar16 = iVar16 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar4) {
              iVar10 = iVar4;
            }
            if (iVar4 < iVar9) {
              lVar17 = 0;
              do {
                uVar12 = puVar5[lVar6 + lVar17 + 1];
                if (uVar12 != 0) {
                  uVar15 = (ulonglong)(iVar4 + (int)lVar17 + 1);
                  uVar18 = 0xffffffff;
                  goto LAB_140be796a;
                }
                iVar16 = iVar16 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar6 != lVar17);
              uVar18 = 0xffffffff;
              iVar4 = iVar10;
            }
            uVar15 = (ulonglong)(iVar4 + 1);
            iVar4 = iVar2;
          }
          else {
LAB_140be796a:
            uVar14 = (ulonglong)(-uVar12 & uVar12);
            uVar1 = uVar14 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar4 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar4) {
              iVar4 = iVar2;
            }
          }
        } while (iVar4 != iVar13);
      }
    }
LAB_140be7997:
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = (undefined8 *)0x0;
    uStack_150 = 0;
    plVar11 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar11 = &local_a8;
    }
    lVar6 = (longlong)(int)local_50;
    if (lVar6 != 0) {
      lVar17 = 0;
      do {
        cVar3 = FUN_140be7f80(&local_f0,*(undefined8 *)((longlong)plVar11 + lVar17),&local_168);
        if (cVar3 != '\0') {
          local_d8 = (longlong *)CONCAT71(local_d8._1_7_,1);
          FUN_140be86d4(&local_100,&local_168,&local_d8);
          if ((char)local_d8 == '\0') {
            *local_170 = 1;
            break;
          }
        }
        lVar17 = lVar17 + 8;
      } while (lVar6 * 8 != lVar17);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
    }
    plVar11 = local_58;
    if (local_158 != (undefined8 *)0x0) {
      FUN_1400020a8();
      plVar11 = local_58;
    }
  }
  else {
    local_d8 = (longlong *)0x0;
    uStack_d0 = (longlong *)0x0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uVar7 = FUN_1446f8646();
    local_1c8 = (wchar_t *)((ulonglong)local_1c8 & 0xffffffff00000000);
    FUN_146123bc0(&local_168,uVar7,0,0);
    if (local_158 != (undefined8 *)0x0) {
      do {
        cVar3 = FUN_140be7f80(&local_f0,*local_158,&local_a8);
        plVar11 = uStack_d0;
        if (cVar3 != '\0') {
          lVar6 = (longlong)(int)uStack_d0;
          uVar18 = (int)uStack_d0 + 1;
          uStack_d0 = (longlong *)CONCAT44(uStack_d0._4_4_,uVar18);
          if (uStack_d0._4_4_ < uVar18) {
            FUN_142addf62(&local_d8,(ulonglong)plVar11 & 0xffffffff);
          }
          local_d8[lVar6 * 8] = local_a8;
          (local_d8 + lVar6 * 8)[1] = lStack_a0;
          local_d8[lVar6 * 8 + 2] = 0;
          local_d8[lVar6 * 8 + 2] = local_98;
          local_98 = 0;
          *(undefined4 *)(local_d8 + lVar6 * 8 + 3) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)local_d8 + lVar6 * 0x40 + 0x1c) = uStack_90._4_4_;
          uStack_90 = 0;
          plVar11 = local_d8 + lVar6 * 8 + 4;
          *(undefined4 *)plVar11 = (undefined4)local_88;
          *(undefined4 *)((longlong)plVar11 + 4) = local_88._4_4_;
          *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_80._4_4_;
          local_d8[lVar6 * 8 + 6] = 0;
          local_d8[lVar6 * 8 + 6] = local_78;
          local_78 = 0;
          *(undefined4 *)(local_d8 + lVar6 * 8 + 7) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)local_d8 + lVar6 * 0x40 + 0x3c) = uStack_70._4_4_;
          uStack_70 = 0;
        }
        FUN_1427b9a5c(&local_168);
      } while (local_158 != (undefined8 *)0x0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_168 + 6));
    if ((longlong)(int)uStack_d0 != 0) {
      lVar6 = (longlong)(int)uStack_d0 << 6;
      plVar11 = local_d8;
      do {
        local_168 = (longlong *)CONCAT71(local_168._1_7_,1);
        FUN_140be86d4(&local_100,plVar11,&local_168);
        if ((char)local_168 == '\0') {
          *param_3 = 1;
          break;
        }
        plVar11 = plVar11 + 8;
        lVar6 = lVar6 + -0x40;
      } while (lVar6 != 0);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_142addf24(local_d8,(ulonglong)uStack_d0 & 0xffffffff);
    plVar11 = local_d8;
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140be7f80 FUN_140be7f80 body=1296 status=ok
// SIG undefined FUN_140be7f80(void)

undefined8 FUN_140be7f80(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  int iStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = (**(code **)(*param_2 + 0x1c0))(param_2);
  if ((cVar4 != '\0') && (plVar8 = param_2, (*(uint *)(param_2 + 1) >> 10 & 1) == 0)) {
LAB_140be7fcc:
    plVar11 = plVar8;
    plVar8 = plVar11;
    if ((longlong *)plVar11[4] != (longlong *)0x0) goto code_r0x000140be7fdb;
    goto LAB_140be7fed;
  }
LAB_140be8460:
  uVar9 = 0;
LAB_140be8462:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
code_r0x000140be7fdb:
  plVar8 = (longlong *)plVar11[4];
  if ((*(uint *)(plVar11 + 1) >> 0x1c & 1) == 0) goto LAB_140be7fcc;
  plVar8 = (longlong *)FUN_142840154(plVar11);
LAB_140be7fed:
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)plVar11[4];
    goto LAB_140be7fcc;
  }
  param_3[1] = plVar8;
  if (((*(uint *)((longlong)param_1 + 0xc) & *(uint *)((longlong)plVar8 + 0x2c)) == 0) &&
     ((*(uint *)(param_1 + 2) & ~*(uint *)((longlong)plVar8 + 0x2c)) == 0)) {
    if ((char)param_1[1] == '\x01') {
      cVar4 = FUN_1427b4e5e(param_2);
      if (cVar4 != '\0') goto LAB_140be8460;
      plVar8 = (longlong *)param_3[1];
    }
    local_50 = plVar8[3];
    plVar8 = (longlong *)*param_1;
    if ((int)plVar8[1] == *(int *)((longlong)plVar8 + 0x34)) {
LAB_140be8041:
      FUN_1400bbfc4(&local_70,param_2);
      puVar1 = param_3 + 4;
      *(undefined4 *)(param_3 + 4) = (undefined4)local_70;
      *(undefined4 *)((longlong)param_3 + 0x24) = local_70._4_4_;
      *(int *)(param_3 + 5) = iStack_68;
      *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_64;
      if (puVar1 == &local_70) {
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_3[6] != 0) {
          FUN_1400020a8();
        }
        param_3[6] = local_60;
        local_60 = 0;
        *(undefined4 *)(param_3 + 7) = local_58;
        *(undefined4 *)((longlong)param_3 + 0x3c) = local_54;
      }
      lVar2 = *param_1;
      if (*(int *)(lVar2 + 0x124) < *(int *)(lVar2 + 0xf8)) {
        uVar9 = param_3[4];
        uVar3 = param_3[5];
        uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar15 = (uint)uVar3 & 0xffff;
        uVar10 = (uint)((ulonglong)uVar9 >> 0x10);
        uVar14 = (uint)uVar9 & 0xffff;
        uVar10 = ((uint)uVar9 << 0x10 | uVar14) + (int)((ulonglong)uVar9 >> 0x20) +
                 (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar14 >> 4);
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 +
                 ((uint)uVar3 << 0x10 | uVar15) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4) + uVar10 * 0x40 ^ uVar10;
        uVar14 = uVar10 >> 0xd ^ -uVar10;
        uVar5 = uVar14 << 8 ^ (-0x61c88647 - uVar10) - uVar14;
        uVar10 = uVar5 >> 0xd ^ (uVar10 - uVar14) - uVar5;
        uVar14 = uVar10 >> 0xc ^ (uVar14 - uVar5) - uVar10;
        uVar5 = uVar14 << 0x10 ^ (uVar5 - uVar10) - uVar14;
        uVar10 = uVar5 >> 5 ^ (uVar10 - uVar14) - uVar5;
        uVar15 = uVar10 >> 3 ^ (uVar14 - uVar5) - uVar10;
        uVar14 = uVar15 << 10 ^ (uVar5 - uVar10) - uVar15;
        iVar7 = *(int *)(param_3 + 7);
        uVar13 = 0;
        uVar5 = iVar7 - 1;
        if (iVar7 == 0) {
          uVar5 = uVar13;
        }
        if (0 < (int)uVar5) {
          if (iVar7 == 0) {
            puVar12 = &DAT_149dfb77a;
          }
          else {
            puVar12 = (undefined2 *)param_3[6];
          }
          lVar16 = 0;
          uVar13 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar12[lVar16] +
                    (uint)(0x19 < (ushort)puVar12[lVar16] - 0x61) * 0x20) - 0x20;
            uVar13 = uVar13 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar13 ^ uVar6) & 0xff) * 4);
            uVar13 = uVar13 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
            lVar16 = lVar16 + 1;
          } while (uVar5 != (uint)lVar16);
        }
        uVar5 = uVar13 >> 0xd ^ (uVar14 >> 0xf ^ uVar10 - (uVar15 + uVar14)) - uVar13;
        uVar10 = uVar5 << 8 ^ (-0x61c88647 - uVar13) - uVar5;
        uVar15 = uVar10 >> 0xd ^ (uVar13 - uVar5) - uVar10;
        uVar14 = uVar15 >> 0xc ^ (uVar5 - uVar10) - uVar15;
        uVar5 = uVar14 << 0x10 ^ (uVar10 - uVar15) - uVar14;
        uVar15 = uVar5 >> 5 ^ (uVar15 - uVar14) - uVar5;
        uVar10 = uVar15 >> 3 ^ (uVar14 - uVar5) - uVar15;
        uVar5 = uVar10 << 10 ^ (uVar5 - uVar15) - uVar10;
        local_80 = puVar1;
        iVar7 = FUN_1403af82c(lVar2 + 0xf0,uVar5 >> 0xf ^ uVar15 - (uVar10 + uVar5),puVar1);
        if (iVar7 == -1) goto LAB_140be8460;
      }
      FUN_1400348e2(&local_50,param_3 + 2);
      if (*(int *)(*param_1 + 0x58) <= *(int *)(*param_1 + 0x84)) {
LAB_140be848a:
        *param_3 = param_2;
        uVar9 = 1;
        goto LAB_140be8462;
      }
      FUN_140d2be42(&local_70,param_3 + 2);
      if (iStack_68 == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      else {
        puVar12 = (undefined2 *)CONCAT44(local_70._4_4_,(undefined4)local_70);
      }
      FUN_1446f470e(&local_78,puVar12,1);
      if (CONCAT44(local_70._4_4_,(undefined4)local_70) != 0) {
        FUN_1400020a8();
      }
      lVar2 = *param_1;
      if (*(int *)(lVar2 + 0x58) != *(int *)(lVar2 + 0x84)) {
        uVar5 = (uint)((ulonglong)local_78 >> 0x10);
        uVar10 = (uint)local_78 & 0xffff;
        lVar16 = lVar2 + 0x88;
        if (*(longlong *)(lVar2 + 0x90) != 0) {
          lVar16 = *(longlong *)(lVar2 + 0x90);
        }
        iVar7 = *(int *)(lVar16 + (ulonglong)
                                  (*(int *)(lVar2 + 0x98) - 1U &
                                  (int)((ulonglong)local_78 >> 0x20) +
                                  ((uint)local_78 << 0x10 | uVar10) +
                                  (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x50) + (longlong)iVar7 * 0x10) == local_78)
            goto LAB_140be848a;
            iVar7 = *(int *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar2 + 0x50) + 8);
          } while (iVar7 != -1);
        }
      }
    }
    else {
      uVar5 = (uint)((ulonglong)local_50 >> 0x10);
      uVar10 = (uint)local_50 & 0xffff;
      plVar11 = plVar8 + 7;
      if ((longlong *)plVar8[8] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar8[8];
      }
      iVar7 = *(int *)((longlong)plVar11 +
                      (ulonglong)
                      ((int)plVar8[9] - 1U &
                      (int)((ulonglong)local_50 >> 0x20) + ((uint)local_50 << 0x10 | uVar10) +
                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)(*plVar8 + (longlong)iVar7 * 0x10) == local_50) goto LAB_140be8041;
          iVar7 = *(int *)((longlong)iVar7 * 0x10 + *plVar8 + 8);
        } while (iVar7 != -1);
      }
    }
  }
  goto LAB_140be8460;
}



// FUNCTION 140be8491 FUN_140be8491 body=329 status=ok
// SIG undefined FUN_140be8491(void)

undefined8 FUN_140be8491(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14c951858 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1468c5283;
      local_60 = FUN_142809da0;
      local_68 = L"Engine";
      local_70 = 0x400000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    local_80 = 0;
    local_88 = 0;
    lVar1 = FUN_140be85e0(DAT_14c951858,0,lVar1,0);
    if (lVar1 != 0) {
      local_80 = 0;
      local_88 = 0;
      FUN_140be85e0(param_1,lVar1,param_2[1],param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140be85e0 FUN_140be85e0 body=244 status=ok
// SIG undefined FUN_140be85e0(void)

void FUN_140be85e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,uint param_6)

{
  uint uVar1;
  
  if ((DAT_14c949800 & 1) != 0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x1c7,
                  L"Illegal call to StaticFindObjectFast() while garbage collecting!");
  }
  uVar1 = FUN_14482ca40();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964670) {
    FUN_144b3d300(&DAT_14c964670);
    if (DAT_14c964670 == -1) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
  }
  FUN_140163a0e(&DAT_14c964408,param_1,param_2,param_3,param_4,0,param_5,uVar1 | param_6);
  return;
}



// FUNCTION 140be86d4 FUN_140be86d4 body=414 status=ok
// SIG undefined FUN_140be86d4(void)

void FUN_140be86d4(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined4 local_120;
  undefined1 *local_110;
  longlong local_108 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8 [8];
  undefined1 local_78 [16];
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_b8[0] = *(undefined8 *)(param_2[1] + 0x18);
  local_110 = param_3;
  FUN_144869592(param_1[1],local_108,local_b8,0);
  uVar3 = *(undefined4 *)(param_2[1] + 0x2c);
  puVar6 = (undefined8 *)FUN_146271494();
  uVar4 = DAT_14c89603c;
  local_c8 = *puVar6;
  local_c0 = *(undefined4 *)(puVar6 + 1);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_f0 = *(undefined8 *)(*(longlong *)(*param_2 + 0x10) + 0x18);
  local_f8 = *(undefined8 *)(*(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x20) + 0x18);
  FUN_14475cc44(param_2 + 4,local_108);
  local_138 = uVar4;
  local_130 = &local_e8;
  local_128 = &local_c8;
  local_120 = uVar3;
  FUN_1406ddcc2(local_b8,param_2 + 2,local_108,&local_f8);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  local_108[0] = *param_2;
  uVar5 = (**(code **)*param_1)(((undefined8 *)*param_1)[1],local_108,local_b8);
  *local_110 = uVar5;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  FUN_1400b4210(local_78);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140be8873 FUN_140be8873 body=108 status=ok
// SIG undefined FUN_140be8873(void)

undefined8 FUN_140be8873(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964670) {
    FUN_144b3d300(&DAT_14c964670);
    if (DAT_14c964670 == -1) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
  }
  return DAT_14c9645c8;
}



// FUNCTION 140be88df FUN_140be88df body=108 status=ok
// SIG undefined FUN_140be88df(void)

undefined8 FUN_140be88df(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964670) {
    FUN_144b3d300(&DAT_14c964670);
    if (DAT_14c964670 == -1) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
  }
  return DAT_14c9645c0;
}



// FUNCTION 140be894c FUN_140be894c body=12606 status=ok
// SIG undefined FUN_140be894c(void)

undefined8 FUN_140be894c(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong ****pppplVar13;
  undefined8 uVar14;
  longlong ****pppplVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong ***ppplVar20;
  uint *puVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint uVar25;
  int iVar26;
  longlong ***ppplVar27;
  longlong lVar28;
  int iVar29;
  longlong ****pppplVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  uint uVar33;
  longlong lVar34;
  ulonglong uVar35;
  int iVar36;
  longlong lVar37;
  uint uVar38;
  uint uVar39;
  longlong ***ppplVar40;
  longlong *plVar41;
  longlong ***ppplVar42;
  longlong lVar43;
  uint *puVar44;
  ulonglong uVar45;
  bool bVar46;
  undefined1 auStack_2c8 [40];
  longlong *local_2a0;
  longlong ***local_298;
  longlong *local_290;
  longlong ***local_288;
  longlong ***local_280;
  longlong ***local_278;
  uint local_270;
  uint local_26c;
  longlong ***local_268;
  ulonglong local_260;
  uint *local_258;
  longlong ***local_250;
  longlong *local_248;
  undefined8 *local_240;
  uint local_238;
  uint local_234;
  longlong local_230;
  longlong *local_228;
  undefined8 uStack_220;
  longlong ***local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  longlong ***local_1c8;
  undefined8 uStack_1c0;
  longlong ***local_1b8;
  undefined8 local_1b0;
  longlong ***ppplStack_1a8;
  int local_1a0;
  uint local_19c;
  uint uStack_198;
  int local_194;
  undefined1 local_190 [8];
  undefined1 *local_188;
  uint local_180;
  longlong ***local_128;
  undefined8 local_120;
  longlong **local_110 [10];
  longlong ***local_c0;
  undefined8 local_b8;
  longlong ***local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (((int)param_2[1] + (int)param_2[0xb] + (int)param_2[0x1f] + (int)param_2[0x33]) -
      (*(int *)((longlong)param_2 + 0x34) + *(int *)((longlong)param_2 + 0x84) +
       *(int *)((longlong)param_2 + 0x124) + *(int *)((longlong)param_2 + 0x1c4)) ==
      *(int *)((longlong)param_2 + 0x214) - (int)param_2[0x3d]) {
    uVar14 = 0;
    goto LAB_140bea215;
  }
  local_290 = param_1;
  cVar9 = FUN_140be6714(param_2);
  uVar14 = 0;
  if (cVar9 == '\0') goto LAB_140bea215;
  local_26c = *(uint *)(param_2 + 0x46);
  local_270 = *(uint *)((longlong)param_2 + 0x234);
  local_228 = (longlong *)0x0;
  uStack_220 = 0;
  uVar39 = (int)param_2[0x1f] - *(int *)((longlong)param_2 + 0x124);
  local_2a0 = param_2;
  local_240 = param_4;
  uStack_220._0_4_ = 0;
  if (uVar39 == 0 || (int)param_2[0x1f] < *(int *)((longlong)param_2 + 0x124)) {
LAB_140be8a24:
    plVar32 = local_2a0;
    uVar25 = (int)local_2a0[1] - *(int *)((longlong)local_2a0 + 0x34);
    puVar31 = local_240;
    uVar17 = local_26c;
    uVar39 = local_270;
    iVar29 = (int)uStack_220;
    if (uVar25 != 0 && *(int *)((longlong)local_2a0 + 0x34) <= (int)local_2a0[1]) {
      local_70 = (longlong ***)0x0;
      local_68 = 0xa00000000;
      local_278 = (longlong ***)CONCAT44(local_278._4_4_,uVar25);
      if (10 < uVar25) {
        FUN_145782dc6(local_110,uVar25);
      }
      ppplVar27 = (longlong ***)0x0;
      ppplStack_1a8 = (longlong ***)0x0;
      local_1a0 = 0;
      local_1c8 = (longlong ***)0x0;
      uStack_1c0 = (longlong ****)0x0;
      local_19c = 0x80;
      uStack_198 = 0xffffffff;
      local_194 = 0;
      local_188 = (undefined1 *)0x0;
      local_180 = 0;
      uVar39 = *(uint *)(plVar32 + 5);
      if (uVar39 == 0) {
        uVar12 = 1;
        iVar29 = 0;
        uVar17 = 0;
        ppplVar40 = (longlong ***)0x0;
      }
      else {
        puVar44 = (uint *)plVar32[4];
        if ((uint *)plVar32[4] == (uint *)0x0) {
          puVar44 = (uint *)(plVar32 + 2);
        }
        uVar17 = *puVar44;
        if (uVar17 == 0) {
          iVar29 = uVar39 + 0x1e;
          if (-1 < (int)(uVar39 - 1)) {
            iVar29 = uVar39 - 1;
          }
          ppplVar40 = (longlong ***)0x0;
          ppplVar20 = (longlong ***)(ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            ppplVar20 = ppplVar40;
          }
          iVar29 = 0;
          do {
            if (ppplVar20 == ppplVar40) {
              ppplVar27 = (longlong ***)0x0;
              goto LAB_140be8d0d;
            }
            iVar29 = iVar29 + 0x20;
            uVar17 = puVar44[(longlong)((longlong)ppplVar40 + 1)];
            ppplVar40 = (longlong ***)((longlong)ppplVar40 + 1);
          } while (uVar17 == 0);
        }
        else {
          iVar29 = 0;
          ppplVar40 = (longlong ***)0x0;
        }
        uVar12 = (ulonglong)(-uVar17 & uVar17);
        uVar45 = uVar12 * 2 + 1;
        lVar34 = 0x3f;
        if (uVar45 != 0) {
          for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        uVar17 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
        if ((int)uVar39 <= (int)uVar17) {
          uVar17 = uVar39;
        }
      }
      if (uVar17 != uVar39) {
        local_268 = (longlong ***)(local_290 + 0x11);
        uVar25 = 0xffffffff;
        ppplVar27 = (longlong ***)0x0;
        local_288 = (longlong ***)(ulonglong)uVar39;
        local_258 = (uint *)(plVar32 + 2);
        do {
          uVar45 = local_68;
          local_280 = (longlong ***)CONCAT44(local_280._4_4_,uVar25);
          local_298 = ppplVar40;
          if ((int)local_290[0xb] != *(int *)((longlong)local_290 + 0x84)) {
            lVar34 = *(longlong *)(*plVar32 + (longlong)(int)uVar17 * 0x10);
            uVar17 = (uint)((ulonglong)lVar34 >> 0x10);
            uVar25 = (uint)lVar34 & 0xffff;
            ppplVar40 = (longlong ***)local_290[0x12];
            if ((longlong ***)local_290[0x12] == (longlong ***)0x0) {
              ppplVar40 = local_268;
            }
            uVar17 = *(uint *)((longlong)ppplVar40 +
                              (ulonglong)
                              ((int)local_290[0x13] - 1U &
                              (int)((ulonglong)lVar34 >> 0x20) + ((uint)lVar34 << 0x10 | uVar25) +
                              (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar25 >> 4)) * 4);
            if (uVar17 != 0xffffffff) {
              do {
                plVar24 = (longlong *)(local_290[10] + (longlong)(int)uVar17 * 0x28);
                if (*plVar24 == lVar34) {
                  if ((plVar24 != (longlong *)0x0) &&
                     ((longlong ***)(plVar24 + 1) != (longlong ***)0x0)) {
                    ppplVar40 = (longlong ***)(plVar24 + 1);
                    if ((longlong ***)plVar24[2] != (longlong ***)0x0) {
                      ppplVar40 = (longlong ***)plVar24[2];
                    }
                    lVar34 = plVar24[3];
                    lVar28 = (longlong)(int)(uint)local_68;
                    uVar39 = (uint)local_68 + 1;
                    local_68 = CONCAT44(local_68._4_4_,uVar39);
                    if (local_68._4_4_ < uVar39) {
                      local_250 = ppplVar27;
                      FUN_14701d252(local_110,uVar45 & 0xffffffff);
                      ppplVar27 = local_250;
                    }
                    pppplVar13 = (longlong ****)local_70;
                    if ((longlong ****)local_70 == (longlong ****)0x0) {
                      pppplVar13 = (longlong ****)local_110;
                    }
                    pppplVar13[lVar28 * 2] = ppplVar40;
                    *(int *)(pppplVar13 + lVar28 * 2 + 1) = (int)lVar34;
                    ppplVar27 = (longlong ***)(ulonglong)(uint)((int)ppplVar27 + (int)plVar24[3]);
                    uVar39 = *(uint *)(plVar32 + 5);
                  }
                  break;
                }
                uVar17 = *(uint *)(plVar24 + 4);
              } while (uVar17 != 0xffffffff);
            }
          }
          uVar25 = (uint)local_280 & ~(uint)uVar12;
          puVar44 = (uint *)plVar32[4];
          if ((uint *)plVar32[4] == (uint *)0x0) {
            puVar44 = local_258;
          }
          iVar36 = (int)local_298;
          lVar34 = (longlong)iVar36;
          uVar17 = puVar44[lVar34] & uVar25;
          ppplVar40 = local_298;
          if (uVar17 == 0) {
            iVar18 = uVar39 + 0x1e;
            if (-1 < (int)(uVar39 - 1)) {
              iVar18 = uVar39 - 1;
            }
            iVar18 = iVar18 >> 5;
            iVar29 = iVar29 + 0x20;
            iVar19 = iVar18;
            if (iVar18 < iVar36) {
              iVar19 = iVar36;
            }
            if (iVar36 < iVar18) {
              lVar28 = 0;
              do {
                uVar17 = puVar44[lVar34 + lVar28 + 1];
                if (uVar17 != 0) {
                  ppplVar40 = (longlong ***)(ulonglong)(iVar36 + (int)lVar28 + 1);
                  uVar25 = 0xffffffff;
                  goto LAB_140be8cdb;
                }
                iVar29 = iVar29 + 0x20;
                lVar28 = lVar28 + 1;
              } while (iVar19 - lVar34 != lVar28);
              uVar25 = 0xffffffff;
              lVar34 = (longlong)iVar19;
            }
            ppplVar40 = (longlong ***)(lVar34 + 1U & 0xffffffff);
            plVar32 = local_2a0;
            uVar17 = uVar39;
          }
          else {
LAB_140be8cdb:
            uVar12 = (ulonglong)(-uVar17 & uVar17);
            uVar45 = uVar12 * 2 + 1;
            lVar34 = 0x3f;
            if (uVar45 != 0) {
              for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
              }
            }
            uVar17 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
            if ((int)uVar39 <= (int)uVar17) {
              uVar17 = uVar39;
            }
          }
        } while (uVar17 != (uint)local_288);
      }
LAB_140be8d0d:
      uVar12 = (ulonglong)(int)uStack_220;
      iVar29 = (int)ppplVar27;
      if (uVar12 == 0) {
        if (iVar29 < 0) goto LAB_140bea6ea;
        if (uStack_220._4_4_ < iVar29) {
          FUN_140bebac2(&local_228,ppplVar27);
        }
        pppplVar13 = (longlong ****)local_70;
        if ((longlong ****)local_70 == (longlong ****)0x0) {
          pppplVar13 = (longlong ****)local_110;
        }
        if ((longlong)(int)(uint)local_68 != 0) {
          pppplVar30 = pppplVar13 + (longlong)(int)(uint)local_68 * 2;
          do {
            uVar12 = uStack_220;
            uVar39 = *(uint *)(pppplVar13 + 1);
            if ((longlong)(int)uVar39 != 0) {
              ppplVar27 = *pppplVar13;
              iVar29 = (int)uStack_220;
              lVar34 = (longlong)(int)uStack_220;
              uStack_220 = CONCAT44(uStack_220._4_4_,uVar39 + (int)uStack_220);
              if ((uint)(uStack_220._4_4_ - iVar29) < uVar39) {
                FUN_14701ada4(&local_228,uVar12 & 0xffffffff);
              }
              memcpy(local_228 + lVar34,ppplVar27,(longlong)(int)uVar39 << 3);
            }
            pppplVar13 = pppplVar13 + 2;
          } while (pppplVar13 != pppplVar30);
        }
      }
      else {
        iVar36 = iVar29;
        if (iVar29 < (int)uStack_220) {
          iVar36 = (int)uStack_220;
        }
        if ((int)uStack_220 < iVar29) {
          iVar29 = (int)uStack_220;
        }
        if (((ulonglong)local_278 & 0xffffffff) * uVar12 <
            (ulonglong)((longlong)iVar29 * 3 + (longlong)iVar36)) {
          plVar32 = local_2a0;
          if (0 < (int)uStack_220) {
            plVar32 = local_2a0 + 7;
            lVar34 = 0;
            bVar46 = false;
LAB_140bea82e:
            do {
              iVar29 = (int)uVar12;
              if ((int)local_2a0[1] != *(int *)((longlong)local_2a0 + 0x34)) {
                lVar28 = *(longlong *)local_228[lVar34];
                uVar39 = (uint)((ulonglong)lVar28 >> 0x10);
                uVar17 = (uint)lVar28 & 0xffff;
                plVar24 = (longlong *)local_2a0[8];
                if ((longlong *)local_2a0[8] == (longlong *)0x0) {
                  plVar24 = plVar32;
                }
                iVar36 = *(int *)((longlong)plVar24 +
                                 (ulonglong)
                                 ((int)local_2a0[9] - 1U &
                                 (int)((ulonglong)lVar28 >> 0x20) + ((uint)lVar28 << 0x10 | uVar17)
                                 + (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar17 >> 4)) * 4);
                if (iVar36 != -1) {
                  do {
                    if (*(longlong *)(*local_2a0 + (longlong)iVar36 * 0x10) == lVar28) {
                      lVar34 = lVar34 + 1;
                      if (lVar34 < iVar29) goto LAB_140bea82e;
                      plVar32 = local_2a0;
                      if (!bVar46) goto LAB_140be8dc5;
                      goto LAB_140bea93d;
                    }
                    iVar36 = *(int *)((longlong)iVar36 * 0x10 + *local_2a0 + 8);
                  } while (iVar36 != -1);
                }
              }
              iVar36 = iVar29 + ~(uint)lVar34;
              if (iVar36 != 0) {
                if (0 < iVar36) {
                  iVar36 = 1;
                }
                memmove(local_228 + lVar34,local_228 + (iVar29 - iVar36),(longlong)iVar36 << 3);
                iVar29 = (int)uStack_220;
              }
              uVar39 = iVar29 - 1;
              uVar12 = (ulonglong)uVar39;
              uStack_220 = CONCAT44(uStack_220._4_4_,uVar39);
              bVar46 = true;
            } while (lVar34 < (int)uVar39);
LAB_140bea93d:
            plVar32 = local_2a0;
            FUN_145782e1a(&local_228);
          }
        }
        else {
          local_218 = local_70;
          if ((longlong ****)local_70 == (longlong ****)0x0) {
            local_218 = local_110;
          }
          uStack_210 = (longlong ***)CONCAT44(uStack_210._4_4_,(uint)local_68);
          FUN_14701058a(&local_228);
          plVar32 = local_2a0;
        }
      }
LAB_140be8dc5:
      local_180 = 0;
      if (local_188 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140beba8c(&local_1c8);
      puVar31 = local_240;
      uVar17 = local_26c;
      uVar39 = local_270;
      if ((longlong ****)local_70 != (longlong ****)0x0) {
        FUN_1400020a8();
      }
      iVar29 = (int)uStack_220;
      if ((int)uStack_220 == 0) goto LAB_140bea206;
    }
    uVar25 = (int)plVar32[0xb] - *(int *)((longlong)plVar32 + 0x84);
    if (uVar25 != 0 && *(int *)((longlong)plVar32 + 0x84) <= (int)plVar32[0xb]) {
      local_70 = (longlong ***)0x0;
      local_68 = 0xa00000000;
      if (10 < uVar25) {
        FUN_145782dc6(local_110,uVar25);
      }
      plVar24 = local_290;
      local_250 = (longlong ***)CONCAT44(local_250._4_4_,uVar25);
      ppplVar40 = (longlong ***)0x0;
      ppplStack_1a8 = (longlong ***)0x0;
      local_1a0 = 0;
      local_1c8 = (longlong ***)0x0;
      uStack_1c0 = (longlong ****)0x0;
      local_19c = 0x80;
      uStack_198 = 0xffffffff;
      local_194 = 0;
      local_188 = (undefined1 *)0x0;
      local_180 = 0;
      ppplVar27 = (longlong ***)(plVar32 + 0xc);
      local_218 = (longlong ***)&DAT_100000000;
      local_208 = (longlong ***)&DAT_ffffffff;
      uStack_200 = (longlong ****)((ulonglong)uStack_200 & 0xffffffff00000000);
      uStack_210 = ppplVar27;
      if ((int)plVar32[0xf] == 0) {
        uVar12 = 1;
        uVar45 = 0xffffffff;
        iVar29 = 0;
        uVar39 = 0;
        ppplVar20 = (longlong ***)0x0;
      }
      else {
        FUN_1449c0562(&local_218);
        ppplVar20 = (longlong ***)((ulonglong)local_218 & 0xffffffff);
        uVar12 = (ulonglong)local_218 >> 0x20;
        uVar45 = (ulonglong)local_208 & 0xffffffff;
        ppplVar40 = (longlong ***)(ulonglong)*(uint *)(plVar32 + 0xf);
        uVar39 = local_208._4_4_;
        iVar29 = (uint)uStack_200;
      }
      if (uVar39 == (uint)ppplVar40 && uStack_210 == ppplVar27) {
        ppplVar27 = (longlong ***)0x0;
        if ((int)uStack_220 == 0) goto LAB_140bea0f7;
LAB_140beb7f9:
        iVar29 = (int)ppplVar27;
        iVar36 = iVar29;
        if (iVar29 < (int)uStack_220) {
          iVar36 = (int)uStack_220;
        }
        if ((int)uStack_220 < iVar29) {
          iVar29 = (int)uStack_220;
        }
        if ((longlong)(int)uStack_220 * ((ulonglong)local_250 & 0xffffffff) <
            (ulonglong)((longlong)iVar29 * 3 + (longlong)iVar36)) {
          plVar32 = local_2a0;
          if (0 < (int)uStack_220) {
            plVar32 = local_2a0 + 0x11;
            lVar34 = 0;
            bVar46 = false;
            iVar29 = (int)uStack_220;
LAB_140beb845:
            do {
              if ((int)local_2a0[0xb] != *(int *)((longlong)local_2a0 + 0x84)) {
                lVar28 = *(longlong *)(local_228[lVar34] + 8);
                uVar39 = (uint)((ulonglong)lVar28 >> 0x10);
                uVar17 = (uint)lVar28 & 0xffff;
                plVar24 = (longlong *)local_2a0[0x12];
                if ((longlong *)local_2a0[0x12] == (longlong *)0x0) {
                  plVar24 = plVar32;
                }
                iVar36 = *(int *)((longlong)plVar24 +
                                 (ulonglong)
                                 ((int)local_2a0[0x13] - 1U &
                                 (int)((ulonglong)lVar28 >> 0x20) + ((uint)lVar28 << 0x10 | uVar17)
                                 + (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar17 >> 4)) * 4);
                if (iVar36 != -1) {
                  do {
                    if (*(longlong *)(local_2a0[10] + (longlong)iVar36 * 0x10) == lVar28) {
                      lVar34 = lVar34 + 1;
                      if (lVar34 < iVar29) goto LAB_140beb845;
                      plVar32 = local_2a0;
                      if (!bVar46) goto LAB_140bea18f;
                      goto LAB_140beb95f;
                    }
                    iVar36 = *(int *)((longlong)iVar36 * 0x10 + local_2a0[10] + 8);
                  } while (iVar36 != -1);
                }
              }
              iVar36 = iVar29 + ~(uint)lVar34;
              if (iVar36 != 0) {
                if (0 < iVar36) {
                  iVar36 = 1;
                }
                memmove(local_228 + lVar34,local_228 + (iVar29 - iVar36),(longlong)iVar36 << 3);
                iVar29 = (int)uStack_220;
              }
              iVar29 = iVar29 + -1;
              uStack_220 = CONCAT44(uStack_220._4_4_,iVar29);
              bVar46 = true;
            } while (lVar34 < iVar29);
LAB_140beb95f:
            plVar32 = local_2a0;
            FUN_145782e1a(&local_228);
          }
        }
        else {
          local_218 = local_70;
          if ((longlong ****)local_70 == (longlong ****)0x0) {
            local_218 = local_110;
          }
          uStack_210 = (longlong ***)CONCAT44(uStack_210._4_4_,(uint)local_68);
          FUN_14701058a(&local_228,&local_218,ppplVar27);
          plVar32 = local_2a0;
        }
      }
      else {
        local_258 = (uint *)(plVar24 + 0x1b);
        local_288 = (longlong ***)0x0;
        ppplVar42 = uStack_210;
        local_298 = ppplVar20;
        local_280 = ppplVar40;
        local_278 = uStack_210;
        local_268 = ppplVar27;
        do {
          uVar35 = local_68;
          uVar17 = (uint)uVar45;
          if ((int)plVar24[0x15] != *(int *)((longlong)plVar24 + 0xd4)) {
            lVar34 = *(longlong *)(plVar32[10] + (longlong)(int)uVar39 * 0x10);
            uVar39 = (uint)((ulonglong)lVar34 >> 0x10);
            uVar25 = (uint)lVar34 & 0xffff;
            puVar44 = (uint *)plVar24[0x1c];
            if ((uint *)plVar24[0x1c] == (uint *)0x0) {
              puVar44 = local_258;
            }
            uVar39 = puVar44[(int)plVar24[0x1d] - 1U &
                             (int)((ulonglong)lVar34 >> 0x20) + ((uint)lVar34 << 0x10 | uVar25) +
                             (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar25 >> 4)];
            if (uVar39 != 0xffffffff) {
              do {
                lVar28 = plVar24[0x14] + (longlong)(int)uVar39 * 0x20;
                if (*(longlong *)(plVar24[0x14] + (longlong)(int)uVar39 * 0x20) == lVar34) {
                  if ((lVar28 + 8U & 0xfffffffffffffff7) != 0) {
                    ppplVar27 = *(longlong ****)(lVar28 + 8);
                    uVar10 = *(undefined4 *)(lVar28 + 0x10);
                    lVar34 = (longlong)(int)(uint)local_68;
                    uVar39 = (uint)local_68 + 1;
                    local_68 = CONCAT44(local_68._4_4_,uVar39);
                    if (local_68._4_4_ < uVar39) {
                      local_248 = (longlong *)CONCAT44(local_248._4_4_,iVar29);
                      local_260 = CONCAT44(local_260._4_4_,uVar17);
                      FUN_14701d252(local_110,uVar35 & 0xffffffff);
                      iVar29 = (int)local_248;
                      uVar17 = (uint)local_260;
                    }
                    pppplVar13 = (longlong ****)local_70;
                    if ((longlong ****)local_70 == (longlong ****)0x0) {
                      pppplVar13 = (longlong ****)local_110;
                    }
                    pppplVar13[lVar34 * 2] = ppplVar27;
                    *(undefined4 *)(pppplVar13 + lVar34 * 2 + 1) = uVar10;
                    local_288 = (longlong ***)
                                (ulonglong)(uint)((int)local_288 + *(int *)(lVar28 + 0x10));
                    ppplVar42 = local_278;
                    ppplVar27 = local_268;
                  }
                  break;
                }
                uVar39 = *(uint *)(lVar28 + 0x18);
              } while (uVar39 != 0xffffffff);
            }
          }
          uVar17 = uVar17 & ~(uint)uVar12;
          ppplVar40 = (longlong ***)ppplVar42[2];
          if ((longlong ***)ppplVar42[2] == (longlong ***)0x0) {
            ppplVar40 = ppplVar42;
          }
          uVar25 = *(uint *)(ppplVar42 + 3);
          iVar36 = (int)local_298;
          lVar34 = (longlong)iVar36;
          uVar39 = *(uint *)((longlong)ppplVar40 + lVar34 * 4) & uVar17;
          if (uVar39 == 0) {
            iVar18 = uVar25 + 0x1e;
            if (-1 < (int)(uVar25 - 1)) {
              iVar18 = uVar25 - 1;
            }
            iVar18 = iVar18 >> 5;
            iVar29 = iVar29 + 0x20;
            iVar19 = iVar18;
            if (iVar18 < iVar36) {
              iVar19 = iVar36;
            }
            if (iVar36 < iVar18) {
              lVar28 = 0;
              do {
                uVar39 = *(uint *)((longlong)ppplVar40 + (lVar34 + lVar28 + 1) * 4);
                if (uVar39 != 0) {
                  local_298 = (longlong ***)(ulonglong)(iVar36 + (int)lVar28 + 1);
                  uVar45 = 0xffffffff;
                  goto LAB_140bea025;
                }
                iVar29 = iVar29 + 0x20;
                lVar28 = lVar28 + 1;
              } while (iVar19 - lVar34 != lVar28);
              uVar17 = 0xffffffff;
              lVar34 = (longlong)iVar19;
            }
            local_298 = (longlong ***)(lVar34 + 1);
            uVar45 = (ulonglong)uVar17;
            plVar32 = local_2a0;
            ppplVar27 = local_268;
            ppplVar42 = local_278;
            plVar24 = local_290;
            uVar39 = uVar25;
          }
          else {
            uVar45 = (ulonglong)uVar17;
LAB_140bea025:
            uVar12 = (ulonglong)(-uVar39 & uVar39);
            uVar35 = uVar12 * 2 + 1;
            lVar34 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar34 == 0; lVar34 = lVar34 + -1) {
              }
            }
            uVar39 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
            if ((int)uVar25 <= (int)uVar39) {
              uVar39 = uVar25;
            }
          }
        } while (uVar39 != (uint)local_280 || ppplVar42 != ppplVar27);
        ppplVar27 = local_288;
        if ((int)uStack_220 != 0) goto LAB_140beb7f9;
        if ((int)local_288 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_288);
        }
LAB_140bea0f7:
        if (uStack_220._4_4_ < (int)ppplVar27) {
          FUN_140bebac2(&local_228);
        }
        pppplVar13 = (longlong ****)local_70;
        if ((longlong ****)local_70 == (longlong ****)0x0) {
          pppplVar13 = (longlong ****)local_110;
        }
        if ((longlong)(int)(uint)local_68 != 0) {
          pppplVar30 = pppplVar13 + (longlong)(int)(uint)local_68 * 2;
          do {
            uVar12 = uStack_220;
            uVar39 = *(uint *)(pppplVar13 + 1);
            if ((longlong)(int)uVar39 != 0) {
              ppplVar27 = *pppplVar13;
              iVar29 = (int)uStack_220;
              lVar34 = (longlong)(int)uStack_220;
              uStack_220 = CONCAT44(uStack_220._4_4_,uVar39 + (int)uStack_220);
              if ((uint)(uStack_220._4_4_ - iVar29) < uVar39) {
                FUN_14701ada4(&local_228,uVar12 & 0xffffffff);
              }
              memcpy(local_228 + lVar34,ppplVar27,(longlong)(int)uVar39 << 3);
            }
            pppplVar13 = pppplVar13 + 2;
          } while (pppplVar13 != pppplVar30);
        }
      }
LAB_140bea18f:
      local_180 = 0;
      if (local_188 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140beba8c(&local_1c8);
      puVar31 = local_240;
      uVar17 = local_26c;
      uVar39 = local_270;
      if ((longlong ****)local_70 != (longlong ****)0x0) {
        FUN_1400020a8();
      }
      iVar29 = (int)uStack_220;
      if ((int)uStack_220 == 0) goto LAB_140bea206;
    }
    uVar25 = (int)plVar32[0x3d] - *(int *)((longlong)plVar32 + 0x214);
    if (uVar25 != 0 && *(int *)((longlong)plVar32 + 0x214) <= (int)plVar32[0x3d]) {
      local_70 = (longlong ***)0x0;
      local_68 = 0xa00000000;
      if (10 < uVar25) {
        FUN_14701d3de(local_110,uVar25);
      }
      local_280 = (longlong ***)(local_2a0 + 0x3c);
      local_298 = (longlong ***)(local_2a0 + 0x3e);
      local_218 = (longlong ***)&DAT_100000000;
      local_208 = (longlong ***)&DAT_ffffffff;
      uStack_200 = (longlong ****)((ulonglong)uStack_200 & 0xffffffff00000000);
      local_268 = (longlong ***)((ulonglong)local_268 & 0xffffffff00000000);
      uStack_210 = local_298;
      if ((int)local_2a0[0x41] != 0) {
        FUN_1449c0562(&local_218);
        local_268 = (longlong ***)CONCAT44(local_268._4_4_,(int)local_2a0[0x41]);
      }
      local_1b0 = local_208;
      ppplVar27 = local_1b0;
      ppplStack_1a8 = (longlong ***)uStack_200;
      uStack_1c0 = (longlong ****)local_218;
      local_1b8 = uStack_210;
      local_1c8 = local_280;
      local_1b0._4_4_ = (int)((ulonglong)local_208 >> 0x20);
      local_1b0 = ppplVar27;
      if ((local_1b0._4_4_ == (uint)local_268) && (uStack_210 == local_298)) {
        iVar36 = 0;
        if ((int)uStack_220 != 0) goto LAB_140beafdd;
LAB_140beaee2:
        if (uStack_220._4_4_ < iVar36) {
          FUN_140bebac2(&local_228,iVar36);
        }
        pppplVar13 = (longlong ****)local_70;
        if ((longlong ****)local_70 == (longlong ****)0x0) {
          pppplVar13 = (longlong ****)local_110;
        }
        lVar34 = (longlong)(int)(uint)local_68;
        if (lVar34 != 0) {
          lVar28 = 0;
          do {
            uVar12 = uStack_220;
            uVar39 = *(uint *)((longlong)pppplVar13 + lVar28 + 8);
            if ((longlong)(int)uVar39 != 0) {
              iVar29 = (int)uStack_220;
              lVar43 = (longlong)(int)uStack_220;
              uStack_220 = CONCAT44(uStack_220._4_4_,uVar39 + (int)uStack_220);
              if ((uint)(uStack_220._4_4_ - iVar29) < uVar39) {
                FUN_14701ada4(&local_228,uVar12 & 0xffffffff);
              }
              memcpy(local_228 + lVar43,*(void **)((longlong)pppplVar13 + lVar28),
                     (longlong)(int)uVar39 << 3);
            }
            lVar28 = lVar28 + 0x10;
          } while (lVar34 * 0x10 != lVar28);
        }
        FUN_14701d538(local_228,uStack_220 & 0xffffffff);
        uVar12 = (ulonglong)(int)uStack_220;
        if (1 < (longlong)uVar12) {
          lVar34 = uVar12 * 8 + -8;
          plVar32 = local_228;
          plVar24 = local_228;
          do {
            plVar23 = plVar32;
            if ((*plVar32 != plVar24[1]) && (plVar23 = plVar32 + 1, plVar24 != plVar32)) {
              *plVar23 = plVar24[1];
            }
            plVar24 = plVar24 + 1;
            lVar34 = lVar34 + -8;
            plVar32 = plVar23;
          } while (lVar34 != 0);
          uVar12 = (ulonglong)((longlong)plVar23 + (8 - (longlong)local_228)) >> 3;
        }
        FUN_14701d328(&local_228,uVar12);
      }
      else {
        local_248 = local_290 + 0x2f;
        local_250 = (longlong ***)(local_290 + 0x25);
        iVar36 = 0;
        iVar29 = local_1b0._4_4_;
        do {
          uVar12 = local_68;
          pplVar2 = *local_1c8;
          lVar34 = (longlong)(int)(uint)local_68;
          uVar39 = (uint)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar39);
          if (local_68._4_4_ < uVar39) {
            FUN_14701d4c0(local_110,uVar12 & 0xffffffff);
          }
          pppplVar13 = (longlong ****)local_70;
          if ((longlong ****)local_70 == (longlong ****)0x0) {
            pppplVar13 = (longlong ****)local_110;
          }
          pppplVar30 = pppplVar13 + lVar34 * 2;
          pppplVar13[lVar34 * 2] = (longlong ***)0x0;
          (pppplVar13 + lVar34 * 2)[1] = (longlong ***)0x0;
          if ((int)local_290[0x29] != *(int *)((longlong)local_290 + 0x174)) {
            plVar32 = pplVar2[(longlong)iVar29 * 4];
            uVar39 = (uint)((ulonglong)plVar32 >> 0x10);
            uVar17 = (uint)plVar32 & 0xffff;
            plVar24 = (longlong *)local_290[0x30];
            if ((longlong *)local_290[0x30] == (longlong *)0x0) {
              plVar24 = local_248;
            }
            iVar18 = *(int *)((longlong)plVar24 +
                             (ulonglong)
                             ((int)local_290[0x31] - 1U &
                             (int)((ulonglong)plVar32 >> 0x20) + ((uint)plVar32 << 0x10 | uVar17) +
                             (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar17 >> 4)) * 4);
            if (iVar18 != -1) {
              do {
                lVar34 = local_290[0x28] + (longlong)iVar18 * 0x60;
                if (*(longlong **)(local_290[0x28] + (longlong)iVar18 * 0x60) == plVar32) {
                  local_278 = (longlong ***)(lVar34 + 8);
                  if (local_278 != (longlong ***)0x0 && lVar34 != 0) {
                    local_288 = (longlong ***)(lVar34 + 0x18);
                    local_1e8 = (longlong ****)&DAT_100000000;
                    local_1d8 = (longlong ****)&DAT_ffffffff;
                    local_1d0 = 0;
                    uStack_1e0 = local_288;
                    if (*(int *)(lVar34 + 0x30) != 0) {
                      FUN_1449c0562(&local_1e8);
                    }
                    uStack_200 = local_1d8;
                    local_1f8 = local_1d0;
                    local_1f4 = local_1cc;
                    uStack_210 = (longlong ***)local_1e8;
                    local_208 = uStack_1e0;
                    local_218 = local_278;
                    uVar39 = *(uint *)(lVar34 + 0x30);
                    local_1e8 = (longlong ****)CONCAT44(1 << ((byte)uVar39 & 0x1f),(int)uVar39 >> 5)
                    ;
                    uStack_1e0 = local_288;
                    local_1d8 = (longlong ****)CONCAT44(uVar39,-1 << ((byte)uVar39 & 0x1f));
                    local_1d0 = uVar39 & 0xffffffe0;
                    local_258 = (uint *)CONCAT44(local_258._4_4_,uVar39);
                    if (*(uint *)(lVar34 + 0x30) != uVar39) {
                      FUN_1449c0562(&local_1e8);
                      local_258 = (uint *)CONCAT44(local_258._4_4_,local_1d8._4_4_);
                    }
                    local_288 = uStack_1e0;
                    while (((uStack_200._4_4_ != (int)local_258 || (local_208 != local_288)) ||
                           (local_218 != local_278))) {
                      if ((int)local_290[0x1f] != *(int *)((longlong)local_290 + 0x124)) {
                        plVar32 = (*local_218)[(longlong)uStack_200._4_4_ * 3];
                        plVar24 = (*local_218)[(longlong)uStack_200._4_4_ * 3 + 1];
                        uVar17 = (uint)((ulonglong)plVar32 >> 0x10);
                        uVar38 = (uint)plVar32 & 0xffff;
                        uVar39 = (uint)((ulonglong)plVar24 >> 0x10);
                        uVar33 = (uint)plVar24 & 0xffff;
                        uVar17 = (int)((ulonglong)plVar32 >> 0x20) +
                                 ((uint)plVar32 << 0x10 | uVar38) +
                                 (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar38 >> 4);
                        ppplVar27 = (longlong ***)local_290[0x26];
                        if ((longlong ***)local_290[0x26] == (longlong ***)0x0) {
                          ppplVar27 = local_250;
                        }
                        uVar39 = *(uint *)((longlong)ppplVar27 +
                                          (ulonglong)
                                          ((int)local_290[0x27] - 1U &
                                          ((uVar17 >> 2) +
                                           ((uint)plVar24 << 0x10 | uVar33) +
                                           (int)((ulonglong)plVar24 >> 0x20) +
                                           (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar33 >> 4) +
                                           uVar17 * 0x40 + 0x9e3779b9 ^ uVar17)) * 4);
                        if (uVar39 != 0xffffffff) {
                          lVar34 = local_290[0x1e];
                          do {
                            lVar43 = (longlong)(int)uVar39 * 0x68;
                            lVar28 = lVar34 + lVar43;
                            if ((*(longlong **)(lVar34 + lVar43) == plVar32) &&
                               (*(longlong **)(lVar34 + 8 + lVar43) == plVar24)) {
                              if (lVar28 + 0x10 != 0 && lVar28 != 0) {
                                FUN_144a62710(lVar28 + 0x10,&local_1e8);
                                lVar34 = (longlong)(int)(uint)uStack_1e0;
                                if (lVar34 != 0) {
                                  iVar18 = *(int *)(pppplVar30 + 1);
                                  *(uint *)(pppplVar30 + 1) = (uint)uStack_1e0 + iVar18;
                                  if ((uint)(*(int *)((longlong)pppplVar30 + 0xc) - iVar18) <
                                      (uint)uStack_1e0) {
                                    FUN_14701ada4(pppplVar30,iVar18);
                                  }
                                  memmove(*pppplVar30 + iVar18,local_1e8,lVar34 << 3);
                                  uStack_1e0 = (longlong ***)
                                               ((ulonglong)uStack_1e0 & 0xffffffff00000000);
                                }
                                if (local_1e8 != (longlong ****)0x0) {
                                  FUN_1400020a8();
                                }
                              }
                              break;
                            }
                            uVar39 = *(uint *)(lVar28 + 0x60);
                          } while (uVar39 != 0xffffffff);
                        }
                      }
                      uStack_200 = (longlong ****)
                                   CONCAT44(uStack_200._4_4_,(uint)uStack_200 & ~uStack_210._4_4_);
                      FUN_1449c0562(&uStack_210);
                    }
                  }
                  break;
                }
                iVar18 = *(int *)(lVar34 + 0x58);
              } while (iVar18 != -1);
            }
          }
          uStack_210 = (longlong ***)((ulonglong)uStack_210 & 0xffffffff00000000);
          uVar12 = 0;
          local_218 = (longlong ***)pppplVar30;
          do {
            if (*(int *)(local_218 + 1) <= (int)uVar12) break;
            cVar9 = FUN_147010a90((*local_218)[uVar12],pplVar2 + (longlong)iVar29 * 4);
            iVar18 = (int)uVar12;
            if (cVar9 == '\0') {
              FUN_14701d2ca(&local_218);
              iVar18 = (int)uStack_210;
            }
            uStack_210 = (longlong ***)CONCAT44(uStack_210._4_4_,iVar18 + 1U);
            uVar12 = (ulonglong)(iVar18 + 1U);
          } while (-2 < iVar18);
          iVar36 = iVar36 + *(int *)(pppplVar30 + 1);
          local_1b0 = (longlong ***)CONCAT44(local_1b0._4_4_,(uint)local_1b0 & ~uStack_1c0._4_4_);
          FUN_1449c0562(&uStack_1c0);
          iVar29 = local_1b0._4_4_;
        } while (local_1c8 != local_280 ||
                 (local_1b8 != local_298 || local_1b0._4_4_ != (uint)local_268));
        if ((int)uStack_220 == 0) {
          if (iVar36 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar36);
          }
          goto LAB_140beaee2;
        }
LAB_140beafdd:
        iVar29 = iVar36;
        if (iVar36 < (int)uStack_220) {
          iVar29 = (int)uStack_220;
        }
        iVar18 = iVar36;
        if ((int)uStack_220 < iVar36) {
          iVar18 = (int)uStack_220;
        }
        if ((longlong)(int)uStack_220 * (ulonglong)uVar25 <
            (ulonglong)((longlong)iVar18 * 3 + (longlong)iVar29)) {
          if (0 < (int)uStack_220) {
            lVar34 = 0;
            bVar46 = false;
LAB_140beb01f:
            do {
              lVar28 = local_228[lVar34];
              local_218 = (longlong ***)&DAT_100000000;
              uStack_210 = local_298;
              local_208 = (longlong ***)&DAT_ffffffff;
              uStack_200 = (longlong ****)((ulonglong)uStack_200 & 0xffffffff00000000);
              if ((int)local_2a0[0x41] == 0) {
                iVar29 = 0;
              }
              else {
                FUN_1449c0562(&local_218);
                iVar29 = (int)local_2a0[0x41];
              }
              local_1b0 = local_208;
              ppplVar27 = local_1b0;
              ppplStack_1a8 = (longlong ***)uStack_200;
              uStack_1c0 = (longlong ****)local_218;
              local_1b8 = uStack_210;
              local_1c8 = local_280;
              local_1b0._4_4_ = (int)((ulonglong)local_208 >> 0x20);
              iVar36 = local_1b0._4_4_;
              if ((local_1b0._4_4_ != iVar29) || (local_1b0 = ppplVar27, uStack_210 != local_298)) {
                do {
                  local_1b0 = ppplVar27;
                  cVar9 = FUN_147010a90(lVar28,*local_1c8 + (longlong)iVar36 * 4);
                  if (cVar9 != '\0') {
                    lVar34 = lVar34 + 1;
                    if (lVar34 < (int)uStack_220) goto LAB_140beb01f;
                    if (!bVar46) goto LAB_140beaf92;
                    goto LAB_140beb1c9;
                  }
                  local_1b0 = (longlong ***)
                              CONCAT44(local_1b0._4_4_,(uint)local_1b0 & ~uStack_1c0._4_4_);
                  FUN_1449c0562(&uStack_1c0);
                  iVar36 = local_1b0._4_4_;
                  ppplVar27 = local_1b0;
                } while (local_1c8 != local_280 ||
                         (local_1b8 != local_298 || local_1b0._4_4_ != iVar29));
              }
              iVar29 = (int)uStack_220 + ~(uint)lVar34;
              if (iVar29 != 0) {
                if (0 < iVar29) {
                  iVar29 = 1;
                }
                memmove(local_228 + lVar34,local_228 + ((int)uStack_220 - iVar29),
                        (longlong)iVar29 << 3);
              }
              iVar29 = (int)uStack_220 + -1;
              uStack_220 = CONCAT44(uStack_220._4_4_,iVar29);
              bVar46 = true;
            } while (lVar34 < iVar29);
LAB_140beb1c9:
            FUN_145782e1a(&local_228);
          }
        }
        else {
          local_128 = (longlong ***)0x0;
          local_120 = 0xa00000000;
          if ((int)(uint)local_68 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(local_68 & 0xffffffff);
          }
          if (10 < (uint)local_68) {
            FUN_145782dc6(&local_1c8);
          }
          pppplVar13 = (longlong ****)local_70;
          if ((longlong ****)local_70 == (longlong ****)0x0) {
            pppplVar13 = (longlong ****)local_110;
          }
          if ((uint)local_68 != 0) {
            pppplVar30 = pppplVar13 + (longlong)(int)(uint)local_68 * 2;
            do {
              uVar12 = local_120;
              lVar34 = (longlong)(int)local_120;
              uVar39 = (int)local_120 + 1;
              local_120 = CONCAT44(local_120._4_4_,uVar39);
              if (local_120._4_4_ < uVar39) {
                FUN_14701d252(&local_1c8,uVar12 & 0xffffffff);
              }
              pppplVar15 = (longlong ****)local_128;
              if ((longlong ****)local_128 == (longlong ****)0x0) {
                pppplVar15 = &local_1c8;
              }
              pppplVar15[lVar34 * 2] = *pppplVar13;
              *(undefined4 *)(pppplVar15 + lVar34 * 2 + 1) = *(undefined4 *)(pppplVar13 + 1);
              pppplVar13 = pppplVar13 + 2;
            } while (pppplVar13 != pppplVar30);
          }
          local_218 = local_128;
          if ((longlong ****)local_128 == (longlong ****)0x0) {
            local_218 = (longlong ***)&local_1c8;
          }
          uStack_210 = (longlong ***)CONCAT44(uStack_210._4_4_,(int)local_120);
          FUN_14701058a(&local_228,&local_218,iVar36);
          if ((longlong ****)local_128 != (longlong ****)0x0) {
            FUN_1400020a8();
          }
        }
      }
LAB_140beaf92:
      FUN_14701d3a0(local_110);
      plVar32 = local_2a0;
      puVar31 = local_240;
      uVar17 = local_26c;
      uVar39 = local_270;
      iVar29 = (int)uStack_220;
      if ((int)uStack_220 == 0) goto LAB_140bea206;
    }
    uVar25 = (int)plVar32[0x33] - *(int *)((longlong)plVar32 + 0x1c4);
    if (uVar25 == 0 || (int)plVar32[0x33] < *(int *)((longlong)plVar32 + 0x1c4)) {
      if (iVar29 != 0) {
        lVar34 = (longlong)iVar29;
LAB_140be9c60:
        plVar32 = local_228 + lVar34;
        plVar24 = local_228;
        do {
          if ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34)) {
LAB_140be9d1e:
            bVar46 = false;
          }
          else {
            lVar34 = *(longlong *)*plVar24;
            uVar25 = (uint)((ulonglong)lVar34 >> 0x10);
            uVar33 = (uint)lVar34 & 0xffff;
            plVar23 = (longlong *)param_3[8];
            if ((longlong *)param_3[8] == (longlong *)0x0) {
              plVar23 = param_3 + 7;
            }
            iVar29 = *(int *)((longlong)plVar23 +
                             (ulonglong)
                             ((int)param_3[9] - 1U &
                             (int)((ulonglong)lVar34 >> 0x20) + ((uint)lVar34 << 0x10 | uVar33) +
                             (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar33 >> 4)) * 4);
            if (iVar29 == -1) goto LAB_140be9d1e;
            do {
              bVar46 = *(longlong *)(*param_3 + (longlong)iVar29 * 0x10) == lVar34;
              if (bVar46) break;
              iVar29 = *(int *)((longlong)iVar29 * 0x10 + *param_3 + 8);
            } while (iVar29 != -1);
          }
          uVar25 = *(uint *)(*plVar24 + 0x3c);
        } while ((((((uVar39 & ~uVar25) != 0) || (bVar46)) || ((uVar25 & uVar17) != 0)) ||
                 (cVar9 = (*(code *)*puVar31)(), cVar9 != '\0')) &&
                (plVar24 = plVar24 + 1, plVar24 != plVar32));
      }
    }
    else {
      local_70 = (longlong ***)0x0;
      local_68 = 0xa00000000;
      local_238 = uVar25;
      if (10 < uVar25) {
        FUN_145782dc6(local_110,uVar25);
      }
      ppplVar27 = (longlong ***)0x0;
      ppplStack_1a8 = (longlong ***)0x0;
      local_1a0 = 0;
      local_1c8 = (longlong ***)0x0;
      uStack_1c0 = (longlong ****)0x0;
      local_19c = 0x80;
      uStack_198 = 0xffffffff;
      local_194 = 0;
      local_188 = (undefined1 *)0x0;
      local_180 = 0;
      uVar39 = *(uint *)(plVar32 + 0x37);
      if (uVar39 == 0) {
        ppplVar40 = (longlong ***)&DAT_00000001;
        puVar44 = (uint *)0x0;
        uVar17 = 0;
        iVar29 = 0;
      }
      else {
        ppplVar40 = (longlong ***)plVar32[0x36];
        if ((longlong ***)plVar32[0x36] == (longlong ***)0x0) {
          ppplVar40 = (longlong ***)(plVar32 + 0x34);
        }
        uVar17 = *(uint *)ppplVar40;
        if (uVar17 == 0) {
          iVar29 = uVar39 + 0x1e;
          if (-1 < (int)(uVar39 - 1)) {
            iVar29 = uVar39 - 1;
          }
          puVar44 = (uint *)0x0;
          puVar21 = (uint *)(ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            puVar21 = (uint *)0x0;
          }
          iVar29 = 0;
          do {
            if (puVar21 == puVar44) {
              ppplVar27 = (longlong ***)0x0;
              goto LAB_140be97c1;
            }
            iVar29 = iVar29 + 0x20;
            uVar17 = *(uint *)((longlong)ppplVar40 + ((longlong)puVar44 + 1) * 4);
            puVar44 = (uint *)((longlong)puVar44 + 1);
          } while (uVar17 == 0);
        }
        else {
          puVar44 = (uint *)0x0;
          iVar29 = 0;
        }
        ppplVar40 = (longlong ***)(ulonglong)(-uVar17 & uVar17);
        uVar12 = (longlong)ppplVar40 * 2 + 1;
        lVar34 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        uVar17 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
        if ((int)uVar39 <= (int)uVar17) {
          uVar17 = uVar39;
        }
      }
      if (uVar17 != uVar39) {
        local_248 = local_290 + 0x25;
        uVar25 = 0xffffffff;
        ppplVar27 = (longlong ***)0x0;
        plVar24 = local_290;
        local_278 = (longlong ***)(plVar32 + 0x34);
        local_250 = (longlong ***)(ulonglong)uVar39;
LAB_140be8f87:
        local_268 = (longlong ***)CONCAT44(local_268._4_4_,uVar25);
        local_280 = (longlong ***)CONCAT44(local_280._4_4_,iVar29);
        local_298 = ppplVar27;
        local_288 = ppplVar40;
        local_258 = puVar44;
        if ((int)plVar24[0x1f] != *(int *)((longlong)plVar24 + 0x124)) {
          plVar41 = (longlong *)((longlong)(int)uVar17 * 0x18 + plVar32[0x32]);
          lVar34 = *plVar41;
          lVar28 = plVar41[1];
          uVar25 = (uint)((ulonglong)lVar34 >> 0x10);
          uVar38 = (uint)lVar34 & 0xffff;
          uVar17 = (uint)((ulonglong)lVar28 >> 0x10);
          uVar33 = (uint)lVar28 & 0xffff;
          uVar25 = (int)((ulonglong)lVar34 >> 0x20) + ((uint)lVar34 << 0x10 | uVar38) +
                   (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar38 >> 4);
          plVar23 = (longlong *)plVar24[0x26];
          if ((longlong *)plVar24[0x26] == (longlong *)0x0) {
            plVar23 = local_248;
          }
          iVar29 = *(int *)((longlong)plVar23 +
                           (ulonglong)
                           ((int)plVar24[0x27] - 1U &
                           ((uVar25 >> 2) +
                            ((uint)lVar28 << 0x10 | uVar33) + (int)((ulonglong)lVar28 >> 0x20) +
                            (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar33 >> 4) + uVar25 * 0x40 +
                            0x9e3779b9 ^ uVar25)) * 4);
          if (iVar29 != -1) {
            lVar43 = plVar24[0x1e];
            do {
              lVar37 = (longlong)iVar29 * 0x68;
              lVar1 = lVar43 + lVar37;
              if ((*(longlong *)(lVar43 + lVar37) == lVar34) &&
                 (*(longlong *)(lVar43 + 8 + lVar37) == lVar28)) {
                if (lVar1 + 0x10 != 0 && lVar1 != 0) {
                  local_230 = lVar1;
                  FUN_144a62710(lVar1 + 0x10,&local_218);
                  pppplVar13 = uStack_1c0;
                  if (local_194 == 0) {
                    iVar29 = (int)uStack_1c0;
                    uVar12 = (ulonglong)uStack_1c0 & 0xffffffff;
                    uStack_1c0 = (longlong ****)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0 + 1);
                    if (uStack_1c0._4_4_ == iVar29) {
                      FUN_140549c28(&local_1c8,(ulonglong)pppplVar13 & 0xffffffff);
                    }
                    iVar29 = local_1a0;
                    if (local_1a0 == 0) {
                      iVar36 = -1;
                    }
                    else {
                      iVar36 = local_1a0 + 0x1e;
                      if (-1 < local_1a0 + -1) {
                        iVar36 = local_1a0 + -1;
                      }
                      iVar36 = iVar36 >> 5;
                    }
                    iVar18 = local_1a0 + 1;
                    iVar19 = local_1a0 + 0x1f;
                    if (-1 < local_1a0) {
                      iVar19 = local_1a0;
                    }
                    local_260 = uVar12;
                    if (iVar19 >> 5 == iVar36) {
                      local_1a0 = iVar18;
                    }
                    else {
                      if ((int)local_19c <= local_1a0) {
                        if (local_1a0 + 0x20U < 0xa0) {
                          local_19c = 0x80;
                        }
                        else {
                          uVar39 = local_1a0 + 0x20U >> 5;
                          if (local_19c + 0x1f < 0xa0) {
                            uVar17 = 4;
                            if (4 < uVar39) {
                              uVar17 = uVar39;
                            }
                          }
                          else {
                            uVar17 = (uVar39 * 3 >> 3) + uVar39 + 0x10;
                          }
                          uVar12 = FUN_144a3809e(uVar17 << 2,0);
                          iVar36 = (int)(uVar12 >> 2);
                          local_19c = 0xffffffe0;
                          if ((int)uVar39 <= iVar36) {
                            local_19c = iVar36 << 5;
                          }
                        }
                        FUN_1446efbd8(&local_1b8,local_1a0);
                        iVar18 = local_1a0 + 1;
                      }
                      iVar36 = iVar18 + 0x1f;
                      if (-1 < iVar18) {
                        iVar36 = iVar18;
                      }
                      local_1a0 = iVar18;
                      if (iVar18 % 0x20 != 0) {
                        pppplVar13 = (longlong ****)ppplStack_1a8;
                        if ((longlong ****)ppplStack_1a8 == (longlong ****)0x0) {
                          pppplVar13 = &local_1b8;
                        }
                        bVar16 = -(char)(iVar18 % 0x20);
                        *(uint *)((longlong)pppplVar13 + (longlong)(iVar36 >> 5) * 4) =
                             (uint)(*(int *)((longlong)pppplVar13 + (longlong)(iVar36 >> 5) * 4) <<
                                   (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
                      }
                    }
                    lVar34 = (longlong)(int)local_260;
                    pppplVar13 = (longlong ****)ppplStack_1a8;
                    if ((longlong ****)ppplStack_1a8 == (longlong ****)0x0) {
                      pppplVar13 = &local_1b8;
                    }
                    bVar16 = (byte)iVar29 & 0x1f;
                    puVar44 = (uint *)((longlong)pppplVar13 + (longlong)(iVar19 >> 5) * 4);
                    *puVar44 = *puVar44 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
                  }
                  else {
                    local_260 = (ulonglong)uStack_198;
                    lVar34 = (longlong)(int)uStack_198;
                    uStack_198 = *(uint *)((longlong)local_1c8 + lVar34 * 0x28 + 4);
                    local_194 = local_194 + -1;
                    plVar32 = local_2a0;
                    plVar24 = local_290;
                    if (local_194 != 0) {
                      *(undefined4 *)(local_1c8 + (longlong)(int)uStack_198 * 5) = 0xffffffff;
                    }
                  }
                  iVar29 = (int)local_260;
                  pppplVar13 = (longlong ****)ppplStack_1a8;
                  if ((longlong ****)ppplStack_1a8 == (longlong ****)0x0) {
                    pppplVar13 = &local_1b8;
                  }
                  iVar36 = iVar29 + 0x1f;
                  if (-1 < iVar29) {
                    iVar36 = iVar29;
                  }
                  puVar44 = (uint *)((longlong)pppplVar13 + (longlong)(iVar36 >> 5) * 4);
                  *puVar44 = *puVar44 | 1 << ((byte)local_260 & 0x1f);
                  ppplVar27 = local_1c8 + lVar34 * 5;
                  uVar10 = *(undefined4 *)((longlong)plVar41 + 4);
                  lVar34 = plVar41[1];
                  uVar11 = *(undefined4 *)((longlong)plVar41 + 0xc);
                  *(int *)ppplVar27 = (int)*plVar41;
                  *(undefined4 *)((longlong)ppplVar27 + 4) = uVar10;
                  *(int *)(ppplVar27 + 1) = (int)lVar34;
                  *(undefined4 *)((longlong)ppplVar27 + 0xc) = uVar11;
                  ppplVar27[2] = (longlong **)local_218;
                  local_218 = (longlong ***)0x0;
                  *(int *)(ppplVar27 + 3) = (int)uStack_210;
                  *(uint *)((longlong)ppplVar27 + 0x1c) = uStack_210._4_4_;
                  uStack_210 = (longlong ***)0x0;
                  *(undefined4 *)(ppplVar27 + 4) = 0xffffffff;
                  pplVar2 = *ppplVar27;
                  pplVar3 = ppplVar27[1];
                  uVar39 = (uint)((ulonglong)pplVar3 >> 0x10);
                  uVar17 = (uint)((ulonglong)pplVar2 >> 0x10);
                  uVar25 = (uint)pplVar2 & 0xffff;
                  uVar33 = (uint)pplVar3 & 0xffff;
                  uVar17 = ((uint)pplVar2 << 0x10 | uVar25) + (int)((ulonglong)pplVar2 >> 0x20) +
                           (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar25 >> 4);
                  uVar17 = (uVar17 >> 2) +
                           ((uint)pplVar3 << 0x10 | uVar33) + (int)((ulonglong)pplVar3 >> 0x20) +
                           (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar33 >> 4) + uVar17 * 0x40 +
                           0x9e3779b9 ^ uVar17;
                  uVar39 = (int)uStack_1c0 - local_194;
                  if (uVar39 < 2) goto LAB_140be9326;
                  puVar22 = local_188;
                  if (local_188 == (undefined1 *)0x0) {
                    puVar22 = local_190;
                  }
                  iVar36 = *(int *)(puVar22 + (ulonglong)(local_180 - 1 & uVar17) * 4);
                  goto joined_r0x000140be92f7;
                }
                break;
              }
              iVar29 = *(int *)(lVar1 + 0x60);
            } while (iVar29 != -1);
          }
        }
        goto LAB_140be970d;
      }
LAB_140be97c1:
      uVar12 = (ulonglong)(int)uStack_220;
      iVar29 = (int)ppplVar27;
      if (uVar12 == 0) {
        if (iVar29 < 0) {
LAB_140bea6ea:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(ppplVar27);
        }
        if (uStack_220._4_4_ < iVar29) {
          FUN_140bebac2(&local_228,ppplVar27);
        }
        pppplVar13 = (longlong ****)local_70;
        if ((longlong ****)local_70 == (longlong ****)0x0) {
          pppplVar13 = (longlong ****)local_110;
        }
        if ((longlong)(int)(uint)local_68 != 0) {
          pppplVar30 = pppplVar13 + (longlong)(int)(uint)local_68 * 2;
          do {
            uVar12 = uStack_220;
            uVar39 = *(uint *)(pppplVar13 + 1);
            if ((longlong)(int)uVar39 != 0) {
              ppplVar27 = *pppplVar13;
              iVar29 = (int)uStack_220;
              lVar34 = (longlong)(int)uStack_220;
              uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_220 + uVar39);
              if ((uint)(uStack_220._4_4_ - iVar29) < uVar39) {
                FUN_14701ada4(&local_228,uVar12 & 0xffffffff);
              }
              memcpy(local_228 + lVar34,ppplVar27,(longlong)(int)uVar39 << 3);
            }
            pppplVar13 = pppplVar13 + 2;
          } while (pppplVar13 != pppplVar30);
        }
      }
      else {
        iVar36 = iVar29;
        if (iVar29 < (int)uStack_220) {
          iVar36 = (int)uStack_220;
        }
        if ((int)uStack_220 < iVar29) {
          iVar29 = (int)uStack_220;
        }
        ppplVar40 = (longlong ***)((longlong)iVar29 * 3 + (longlong)iVar36);
        if ((longlong ***)(local_238 * uVar12) < ppplVar40) {
          if (0 < (int)uStack_220) {
            local_298 = (longlong ***)(plVar32 + 0x39);
            lVar34 = 0;
            local_280 = (longlong ***)0x0;
LAB_140be9822:
            do {
              iVar29 = (int)uVar12;
              if ((int)plVar32[0x33] != *(int *)((longlong)plVar32 + 0x1c4)) {
                lVar28 = local_228[lVar34];
                lVar43 = *(longlong *)(lVar28 + 0x20);
                lVar28 = *(longlong *)(lVar28 + 0x28);
                uVar39 = (uint)((ulonglong)lVar43 >> 0x10);
                uVar25 = (uint)lVar43 & 0xffff;
                uVar17 = (uint)((ulonglong)lVar28 >> 0x10);
                uVar33 = (uint)lVar28 & 0xffff;
                uVar39 = (int)((ulonglong)lVar43 >> 0x20) + ((uint)lVar43 << 0x10 | uVar25) +
                         (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar25 >> 4);
                uVar39 = (uVar39 >> 2) +
                         ((uint)lVar28 << 0x10 | uVar33) + (int)((ulonglong)lVar28 >> 0x20) +
                         (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar33 >> 4) + uVar39 * 0x40 +
                         0x9e3779b9 ^ uVar39;
                ppplVar40 = (longlong ***)(ulonglong)uVar39;
                ppplVar27 = (longlong ***)local_2a0[0x3a];
                if ((longlong ***)local_2a0[0x3a] == (longlong ***)0x0) {
                  ppplVar27 = local_298;
                }
                uVar39 = *(uint *)((longlong)ppplVar27 +
                                  (ulonglong)((int)local_2a0[0x3b] - 1U & uVar39) * 4);
                plVar32 = local_2a0;
                if (uVar39 != 0xffffffff) {
                  lVar1 = local_2a0[0x32];
                  do {
                    ppplVar40 = (longlong ***)(longlong)(int)uVar39;
                    if ((*(longlong *)(lVar1 + (longlong)ppplVar40 * 0x18) == lVar43) &&
                       (*(longlong *)(lVar1 + 8 + (longlong)ppplVar40 * 0x18) == lVar28)) {
                      lVar34 = lVar34 + 1;
                      if (lVar34 < iVar29) goto LAB_140be9822;
                      bVar46 = (char)local_280 == '\0';
                      if (bVar46) goto LAB_140be9a4b;
                      goto LAB_140be9995;
                    }
                    ppplVar40 = (longlong ***)(lVar1 + (longlong)ppplVar40 * 0x18);
                    uVar39 = *(uint *)(ppplVar40 + 2);
                  } while (uVar39 != 0xffffffff);
                }
              }
              iVar36 = ~(uint)lVar34 + iVar29;
              if (iVar36 != 0) {
                if (0 < iVar36) {
                  iVar36 = 1;
                }
                ppplVar40 = (longlong ***)(local_228 + (iVar29 - iVar36));
                memmove(local_228 + lVar34,ppplVar40,(longlong)iVar36 << 3);
                iVar29 = (int)uStack_220;
              }
              uVar39 = iVar29 - 1;
              uVar12 = (ulonglong)uVar39;
              uStack_220 = CONCAT44(uStack_220._4_4_,uVar39);
              ppplVar40 = (longlong ***)CONCAT71((int7)((ulonglong)ppplVar40 >> 8),1);
              local_280 = ppplVar40;
            } while (lVar34 < (int)uVar39);
LAB_140be9995:
            FUN_145782e1a(&local_228);
          }
        }
        else {
          local_218 = local_70;
          if ((longlong ****)local_70 == (longlong ****)0x0) {
            local_218 = local_110;
          }
          uStack_210 = (longlong ***)CONCAT44(uStack_210._4_4_,(uint)local_68);
          FUN_14701058a(&local_228,&local_218,ppplVar27);
        }
      }
LAB_140be9a4b:
      local_180 = 0;
      if (local_188 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_1a0 == 0) {
        uVar45 = 0;
        uVar12 = 1;
        iVar29 = 0;
        iVar36 = 0;
      }
      else {
        pppplVar13 = (longlong ****)ppplStack_1a8;
        if ((longlong ****)ppplStack_1a8 == (longlong ****)0x0) {
          pppplVar13 = &local_1b8;
        }
        uVar39 = *(uint *)pppplVar13;
        if (uVar39 == 0) {
          iVar29 = local_1a0 + 0x1e;
          if (-1 < local_1a0 + -1) {
            iVar29 = local_1a0 + -1;
          }
          uVar45 = 0;
          uVar12 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar12 = uVar45;
          }
          iVar36 = 0;
          do {
            if (uVar12 == uVar45) goto LAB_140be9bb3;
            iVar36 = iVar36 + 0x20;
            uVar39 = *(uint *)((longlong)pppplVar13 + (uVar45 + 1) * 4);
            uVar45 = uVar45 + 1;
          } while (uVar39 == 0);
        }
        else {
          uVar45 = 0;
          iVar36 = 0;
        }
        uVar12 = (ulonglong)(-uVar39 & uVar39);
        uVar35 = uVar12 * 2 + 1;
        lVar34 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        iVar29 = (iVar36 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
        if (local_1a0 <= iVar29) {
          iVar29 = local_1a0;
        }
      }
      if (iVar29 < local_1a0) {
        uVar39 = 0xffffffff;
        iVar18 = local_1a0;
        do {
          if (local_1c8[(longlong)iVar29 * 5 + 2] != (longlong **)0x0) {
            FUN_1400020a8();
            iVar18 = local_1a0;
          }
          uVar39 = uVar39 & ~(uint)uVar12;
          pppplVar13 = (longlong ****)ppplStack_1a8;
          if ((longlong ****)ppplStack_1a8 == (longlong ****)0x0) {
            pppplVar13 = &local_1b8;
          }
          iVar29 = (int)uVar45;
          lVar34 = (longlong)iVar29;
          uVar17 = *(uint *)((longlong)pppplVar13 + lVar34 * 4) & uVar39;
          if (uVar17 == 0) {
            iVar19 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar19 = iVar18 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar26 = iVar19;
            if (iVar19 < iVar29) {
              iVar26 = iVar29;
            }
            if (iVar19 <= iVar29) break;
            lVar28 = 0;
            while( true ) {
              iVar36 = iVar36 + 0x20;
              uVar17 = *(uint *)((longlong)pppplVar13 + (lVar34 + lVar28 + 1) * 4);
              if (uVar17 != 0) break;
              lVar28 = lVar28 + 1;
              if (iVar26 - lVar34 == lVar28) goto LAB_140be9bb3;
            }
            uVar45 = (ulonglong)(iVar29 + (int)lVar28 + 1);
            uVar39 = 0xffffffff;
          }
          uVar12 = (ulonglong)(-uVar17 & uVar17);
          uVar35 = uVar12 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          iVar29 = (iVar36 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
        } while (iVar29 < iVar18);
      }
LAB_140be9bb3:
      uVar12 = (ulonglong)uStack_1c0 >> 0x20;
      uStack_1c0 = (longlong ****)((ulonglong)uStack_1c0 & 0xffffffff00000000);
      if ((int)uVar12 != 0) {
        FUN_140549ad6(&local_1c8,0);
      }
      puVar31 = local_240;
      uVar17 = local_26c;
      uVar39 = local_270;
      uStack_198 = 0xffffffff;
      local_194 = 0;
      local_1a0 = 0;
      if (0x80 < local_19c) {
        local_19c = 0x80;
        FUN_1446efbd8(&local_1b8,0);
      }
      if ((longlong ****)ppplStack_1a8 != (longlong ****)0x0) {
        FUN_1400020a8();
      }
      if (local_1c8 != (longlong ***)0x0) {
        FUN_1400020a8();
      }
      if ((longlong ****)local_70 != (longlong ****)0x0) {
        FUN_1400020a8();
      }
      lVar34 = (longlong)(int)uStack_220;
      if (lVar34 != 0) goto LAB_140be9c60;
    }
  }
  else {
    local_c0 = (longlong ***)0x0;
    local_b8 = 0xa00000000;
    if (10 < uVar39) {
      FUN_14701d0b2(local_110,uVar39);
    }
    ppplVar27 = (longlong ***)(local_2a0 + 0x1e);
    local_298 = (longlong ***)(local_2a0 + 0x20);
    local_218 = (longlong ***)&DAT_100000000;
    local_208 = (longlong ***)&DAT_ffffffff;
    uStack_200 = (longlong ****)((ulonglong)uStack_200 & 0xffffffff00000000);
    uStack_210 = local_298;
    if ((int)local_2a0[0x23] == 0) {
      iVar29 = 0;
    }
    else {
      FUN_1449c0562(&local_218);
      iVar29 = (int)local_2a0[0x23];
    }
    local_1b0 = local_208;
    ppplVar40 = local_1b0;
    ppplStack_1a8 = (longlong ***)uStack_200;
    uStack_1c0 = (longlong ****)local_218;
    local_1b8 = uStack_210;
    local_1b0._4_4_ = (int)((ulonglong)local_208 >> 0x20);
    iVar36 = local_1b0._4_4_;
    local_1c8 = ppplVar27;
    if ((local_1b0._4_4_ != iVar29) || (local_1b0 = ppplVar40, uStack_210 != local_298)) {
      do {
        local_1b0 = ppplVar40;
        FUN_1400e7e08(&local_1e8,*local_1c8 + (longlong)iVar36 * 5);
        plVar32 = local_290;
        local_218 = (longlong ***)local_1e8;
        uStack_210 = uStack_1e0;
        uVar17 = (uint)((ulonglong)uStack_1e0 >> 0x10);
        uVar38 = (uint)uStack_1e0 & 0xffff;
        uVar25 = (uint)((ulonglong)local_1e8 >> 0x10);
        uVar33 = (uint)local_1e8 & 0xffff;
        uVar25 = ((uint)local_1e8 << 0x10 | uVar33) + local_1e8._4_4_ +
                 (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar33 >> 4);
        iVar36 = FUN_1447fff98(local_290,
                               (uVar25 >> 2) +
                               ((uint)uStack_1e0 << 0x10 | uVar38) + uStack_1e0._4_4_ +
                               (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar38 >> 4) + uVar25 * 0x40 +
                               0x9e3779b9 ^ uVar25);
        uVar12 = local_b8;
        plVar32 = (longlong *)((longlong)iVar36 * 0x10 + *plVar32);
        if (plVar32 != (longlong *)0x0 && iVar36 != -1) {
          lVar34 = (longlong)(int)local_b8;
          uVar17 = (int)local_b8 + 1;
          local_b8 = CONCAT44(local_b8._4_4_,uVar17);
          if (local_b8._4_4_ < uVar17) {
            FUN_14701d180(local_110,uVar12 & 0xffffffff);
          }
          ppplVar40 = local_c0;
          if (local_c0 == (longlong ***)0x0) {
            ppplVar40 = local_110;
          }
          ppplVar40[lVar34] = (longlong **)*plVar32;
        }
        local_1b0 = (longlong ***)CONCAT44(local_1b0._4_4_,(uint)local_1b0 & ~uStack_1c0._4_4_);
        FUN_1449c0562(&uStack_1c0);
        iVar36 = local_1b0._4_4_;
        ppplVar40 = local_1b0;
      } while (local_1c8 != ppplVar27 || (local_1b8 != local_298 || local_1b0._4_4_ != iVar29));
    }
    if ((longlong)(int)uStack_220 == 0) {
      FUN_14701d056(&local_228,local_110);
    }
    else {
      iVar29 = (int)local_b8;
      if ((int)local_b8 < (int)uStack_220) {
        iVar29 = (int)uStack_220;
      }
      iVar36 = (int)local_b8;
      if ((int)uStack_220 < (int)local_b8) {
        iVar36 = (int)uStack_220;
      }
      if ((ulonglong)uVar39 * (longlong)(int)uStack_220 <
          (ulonglong)((longlong)iVar36 * 3 + (longlong)iVar29)) {
        if (0 < (int)uStack_220) {
          lVar34 = 0;
          bVar46 = false;
          do {
            while( true ) {
              FUN_1468fc08c(&local_1c8,*(undefined8 *)local_228[lVar34],
                            ((undefined8 *)local_228[lVar34])[2]);
              uVar39 = (uint)((ulonglong)uStack_1c0 >> 0x10);
              uVar33 = (uint)uStack_1c0 & 0xffff;
              uVar17 = (uint)((ulonglong)local_1c8 >> 0x10);
              uVar25 = (uint)local_1c8 & 0xffff;
              uVar17 = ((uint)local_1c8 << 0x10 | uVar25) + (int)((ulonglong)local_1c8 >> 0x20) +
                       (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar25 >> 4);
              uVar10 = FUN_144a78877(0,(uVar17 >> 2) +
                                       ((uint)uStack_1c0 << 0x10 | uVar33) +
                                       (int)((ulonglong)uStack_1c0 >> 0x20) +
                                       (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar33 >> 4) +
                                       uVar17 * 0x40 + 0x9e3779b9 ^ uVar17);
              ppplVar40 = (longlong ***)&DAT_149dfb77a;
              if ((uint)local_1b0 != 0) {
                ppplVar40 = local_1b8;
              }
              iVar29 = (uint)local_1b0 + -1;
              if ((uint)local_1b0 == 0) {
                iVar29 = 0;
              }
              uVar11 = FUN_144a49b4a(iVar29,ppplVar40);
              uVar10 = FUN_144a78877(uVar10,uVar11);
              iVar29 = FUN_1403af82c(ppplVar27,uVar10);
              if (local_1b8 != (longlong ***)0x0) {
                FUN_1400020a8();
              }
              if (iVar29 != -1) break;
              iVar29 = (int)uStack_220 + ~(uint)lVar34;
              if (iVar29 != 0) {
                if (0 < iVar29) {
                  iVar29 = 1;
                }
                memmove(local_228 + lVar34,local_228 + ((int)uStack_220 - iVar29),
                        (longlong)iVar29 << 3);
              }
              iVar29 = (int)uStack_220 + -1;
              uStack_220 = CONCAT44(uStack_220._4_4_,iVar29);
              bVar46 = true;
              if (iVar29 <= lVar34) goto LAB_140beb536;
            }
            lVar34 = lVar34 + 1;
          } while (lVar34 < (int)uStack_220);
          if (bVar46) {
LAB_140beb536:
            FUN_145782e1a(&local_228);
          }
        }
      }
      else {
        local_1c8 = local_c0;
        if (local_c0 == (longlong ***)0x0) {
          local_1c8 = local_110;
        }
        local_218 = (longlong ***)&local_1c8;
        uStack_1c0 = (longlong ****)CONCAT44(uStack_1c0._4_4_,(int)local_b8);
        uStack_210 = (longlong ***)CONCAT44(uStack_210._4_4_,1);
        FUN_14701058a(&local_228);
      }
    }
    if (local_c0 != (longlong ***)0x0) {
      FUN_1400020a8();
    }
    if ((int)uStack_220 != 0) goto LAB_140be8a24;
  }
LAB_140bea206:
  if (local_228 != (longlong *)0x0) {
    FUN_1400020a8(local_228);
  }
  uVar14 = 1;
LAB_140bea215:
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
joined_r0x000140be92f7:
  if (iVar36 == -1) goto LAB_140be9326;
  ppplVar40 = local_1c8 + (longlong)iVar36 * 5;
  if ((*ppplVar40 == pplVar2) && (local_1c8[(longlong)iVar36 * 5 + 1] == pplVar3)) {
    if (ppplVar40[2] != (longlong **)0x0) {
      FUN_1400020a8();
    }
    uVar10 = *(undefined4 *)ppplVar27;
    uVar11 = *(undefined4 *)((longlong)ppplVar27 + 4);
    uVar4 = *(undefined4 *)(ppplVar27 + 1);
    uVar5 = *(undefined4 *)((longlong)ppplVar27 + 0xc);
    uVar6 = *(undefined4 *)((longlong)ppplVar27 + 0x14);
    uVar7 = *(undefined4 *)(ppplVar27 + 3);
    uVar8 = *(undefined4 *)((longlong)ppplVar27 + 0x1c);
    *(undefined4 *)(ppplVar40 + 2) = *(undefined4 *)(ppplVar27 + 2);
    *(undefined4 *)((longlong)ppplVar40 + 0x14) = uVar6;
    *(undefined4 *)(ppplVar40 + 3) = uVar7;
    *(undefined4 *)((longlong)ppplVar40 + 0x1c) = uVar8;
    *(undefined4 *)ppplVar40 = uVar10;
    *(undefined4 *)((longlong)ppplVar40 + 4) = uVar11;
    *(undefined4 *)(ppplVar40 + 1) = uVar4;
    *(undefined4 *)((longlong)ppplVar40 + 0xc) = uVar5;
    FUN_14701d8b4(&local_1c8,local_260);
    plVar32 = local_2a0;
    plVar24 = local_290;
    iVar29 = iVar36;
    goto LAB_140be967f;
  }
  iVar36 = *(int *)(ppplVar40 + 4);
  goto joined_r0x000140be92f7;
LAB_140be9326:
  uVar25 = 1;
  if (3 < uVar39) {
    uVar12 = (ulonglong)(uVar39 & 0xfffffffe) + 0xf;
    lVar34 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    uVar25 = 1 << ((byte)lVar34 & 0x1f);
  }
  if (((int)uVar39 < 1) || ((int)uVar25 <= (int)local_180)) {
    uVar17 = local_180 - 1 & uVar17;
    *(uint *)((longlong)ppplVar27 + 0x24) = uVar17;
    puVar22 = local_188;
    if (local_188 == (undefined1 *)0x0) {
      puVar22 = local_190;
    }
    *(undefined4 *)(ppplVar27 + 4) =
         *(undefined4 *)(puVar22 + ((longlong)(int)local_180 - 1U & (longlong)(int)uVar17) * 4);
    puVar22 = local_188;
    if (local_188 == (undefined1 *)0x0) {
      puVar22 = local_190;
    }
    *(int *)(puVar22 + ((longlong)(int)local_180 - 1U & (longlong)(int)uVar17) * 4) = iVar29;
    goto LAB_140be967f;
  }
  local_180 = uVar25;
  if (local_188 != (undefined1 *)0x0) {
    FUN_1446efa72(&local_188,0,0,4);
  }
  uVar39 = local_180;
  if (local_180 == 1) {
    if (local_188 != (undefined1 *)0x0) {
      FUN_1446efa72(&local_188,0,0,4);
    }
LAB_140be9384:
    uVar17 = 0;
    do {
      puVar22 = local_188;
      if (local_188 == (undefined1 *)0x0) {
        puVar22 = local_190;
      }
      *(undefined4 *)(puVar22 + (ulonglong)(local_180 + 0x7fffffff & uVar17) * 4) = 0xffffffff;
      uVar17 = uVar17 + 1;
    } while (uVar39 != uVar17);
  }
  else {
    if (local_180 == 0) goto LAB_140be967f;
    FUN_1446efa72(&local_188,0,local_180,4);
    if (0 < (int)uVar39) goto LAB_140be9384;
  }
  if (local_1a0 == 0) {
    uVar12 = 0;
    uVar45 = 1;
    iVar36 = 0;
    iVar18 = 0;
  }
  else {
    pppplVar13 = (longlong ****)ppplStack_1a8;
    if ((longlong ****)ppplStack_1a8 == (longlong ****)0x0) {
      pppplVar13 = &local_1b8;
    }
    uVar39 = *(uint *)pppplVar13;
    if (uVar39 == 0) {
      iVar36 = local_1a0 + 0x1e;
      if (-1 < local_1a0 + -1) {
        iVar36 = local_1a0 + -1;
      }
      uVar12 = 0;
      uVar45 = (ulonglong)(uint)(iVar36 >> 5);
      if (iVar36 >> 5 < 1) {
        uVar45 = uVar12;
      }
      iVar18 = 0;
      do {
        if (uVar45 == uVar12) goto LAB_140be967f;
        iVar18 = iVar18 + 0x20;
        uVar39 = *(uint *)((longlong)pppplVar13 + (uVar12 + 1) * 4);
        uVar12 = uVar12 + 1;
      } while (uVar39 == 0);
    }
    else {
      uVar12 = 0;
      iVar18 = 0;
    }
    uVar45 = (ulonglong)(-uVar39 & uVar39);
    uVar35 = uVar45 * 2 + 1;
    lVar34 = 0x3f;
    if (uVar35 != 0) {
      for (; uVar35 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    iVar36 = (iVar18 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
    if (local_1a0 <= iVar36) {
      iVar36 = local_1a0;
    }
  }
  if (iVar36 < local_1a0) {
    uVar39 = 0xffffffff;
    do {
      local_234 = uVar39;
      lVar34 = (longlong)iVar36;
      pplVar2 = local_1c8[lVar34 * 5];
      pplVar3 = local_1c8[lVar34 * 5 + 1];
      uVar39 = (uint)((ulonglong)pplVar3 >> 0x10);
      uVar17 = (uint)((ulonglong)pplVar2 >> 0x10);
      uVar25 = (uint)pplVar2 & 0xffff;
      uVar25 = ((uint)pplVar2 << 0x10 | uVar25) + (int)((ulonglong)pplVar2 >> 0x20) +
               (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar25 >> 4);
      uVar17 = (uint)pplVar3 & 0xffff;
      uVar35 = (longlong)
               (int)((uVar25 >> 2) +
                     ((uint)pplVar3 << 0x10 | uVar17) + (int)((ulonglong)pplVar3 >> 0x20) +
                     (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar17 >> 4) + uVar25 * 0x40 + 0x9e3779b9
                    ^ uVar25) & (longlong)(int)local_180 - 1U;
      iVar29 = (int)uVar35;
      *(int *)((longlong)local_1c8 + lVar34 * 0x28 + 0x24) = iVar29;
      puVar22 = local_188;
      if (local_188 == (undefined1 *)0x0) {
        puVar22 = local_190;
      }
      *(undefined4 *)(local_1c8 + lVar34 * 5 + 4) =
           *(undefined4 *)(puVar22 + ((longlong)(int)local_180 - 1U & uVar35) * 4);
      puVar22 = local_188;
      if (local_188 == (undefined1 *)0x0) {
        puVar22 = local_190;
      }
      *(int *)(puVar22 + ((longlong)iVar29 & (longlong)(int)local_180 - 1U) * 4) = iVar36;
      uVar39 = ~(uint)uVar45 & local_234;
      pppplVar13 = (longlong ****)ppplStack_1a8;
      if ((longlong ****)ppplStack_1a8 == (longlong ****)0x0) {
        pppplVar13 = &local_1b8;
      }
      iVar36 = (int)uVar12;
      lVar34 = (longlong)iVar36;
      uVar17 = *(uint *)((longlong)pppplVar13 + lVar34 * 4) & uVar39;
      iVar29 = (int)local_260;
      plVar24 = local_290;
      if (uVar17 == 0) {
        iVar19 = local_1a0 + 0x1e;
        if (-1 < local_1a0 + -1) {
          iVar19 = local_1a0 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar26 = iVar19;
        if (iVar19 < iVar36) {
          iVar26 = iVar36;
        }
        if (iVar19 <= iVar36) break;
        lVar28 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar17 = *(uint *)((longlong)pppplVar13 + (lVar34 + lVar28 + 1) * 4);
          if (uVar17 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar26 - lVar34 == lVar28) goto LAB_140be967f;
        }
        uVar12 = (ulonglong)(iVar36 + (int)lVar28 + 1);
        uVar39 = 0xffffffff;
      }
      uVar45 = (ulonglong)(-uVar17 & uVar17);
      uVar35 = uVar45 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      iVar36 = (iVar18 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
    } while (iVar36 < local_1a0);
  }
LAB_140be967f:
  ppplVar27 = local_1c8;
  if ((longlong ****)local_218 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  uVar12 = local_68;
  ppplVar40 = (longlong ***)ppplVar27[(longlong)iVar29 * 5 + 2];
  uVar10 = *(undefined4 *)(ppplVar27 + (longlong)iVar29 * 5 + 3);
  lVar34 = (longlong)(int)(uint)local_68;
  uVar39 = (uint)local_68 + 1;
  local_68 = CONCAT44(local_68._4_4_,uVar39);
  if (local_68._4_4_ < uVar39) {
    FUN_14701d252(local_110,uVar12 & 0xffffffff);
  }
  pppplVar13 = (longlong ****)local_70;
  if ((longlong ****)local_70 == (longlong ****)0x0) {
    pppplVar13 = (longlong ****)local_110;
  }
  pppplVar13[lVar34 * 2] = ppplVar40;
  *(undefined4 *)(pppplVar13 + lVar34 * 2 + 1) = uVar10;
  ppplVar27 = (longlong ***)
              (ulonglong)
              (uint)(((int)local_298 + *(int *)(local_230 + 0x18)) - *(int *)(local_230 + 0x44));
  uVar39 = *(uint *)(plVar32 + 0x37);
LAB_140be970d:
  uVar25 = (uint)local_268 & ~(uint)local_288;
  ppplVar40 = (longlong ***)plVar32[0x36];
  if ((longlong ***)plVar32[0x36] == (longlong ***)0x0) {
    ppplVar40 = local_278;
  }
  iVar36 = (int)local_258;
  lVar34 = (longlong)iVar36;
  uVar17 = *(uint *)((longlong)ppplVar40 + lVar34 * 4) & uVar25;
  puVar44 = local_258;
  iVar29 = (uint)local_280;
  if (uVar17 == 0) {
    iVar18 = uVar39 + 0x1e;
    if (-1 < (int)(uVar39 - 1)) {
      iVar18 = uVar39 - 1;
    }
    iVar18 = iVar18 >> 5;
    iVar29 = (uint)local_280 + 0x20;
    iVar19 = iVar18;
    if (iVar18 < iVar36) {
      iVar19 = iVar36;
    }
    if (iVar36 < iVar18) {
      lVar28 = 0;
      do {
        uVar17 = *(uint *)((longlong)ppplVar40 + (lVar34 + lVar28 + 1) * 4);
        if (uVar17 != 0) {
          puVar44 = (uint *)(ulonglong)(iVar36 + (int)lVar28 + 1);
          uVar25 = 0xffffffff;
          goto LAB_140be978f;
        }
        iVar29 = iVar29 + 0x20;
        lVar28 = lVar28 + 1;
      } while (iVar19 - lVar34 != lVar28);
      uVar25 = 0xffffffff;
      iVar36 = iVar19;
    }
    puVar44 = (uint *)(ulonglong)(iVar36 + 1);
    plVar32 = local_2a0;
    ppplVar40 = local_288;
    plVar24 = local_290;
    uVar17 = uVar39;
  }
  else {
LAB_140be978f:
    ppplVar40 = (longlong ***)(ulonglong)(-uVar17 & uVar17);
    uVar12 = (longlong)ppplVar40 * 2 + 1;
    lVar34 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    uVar17 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
    if ((int)uVar39 <= (int)uVar17) {
      uVar17 = uVar39;
    }
  }
  if (uVar17 == (uint)local_250) goto LAB_140be97c1;
  goto LAB_140be8f87;
}



// FUNCTION 140beba8c FUN_140beba8c body=53 status=ok
// SIG undefined FUN_140beba8c(void)

void FUN_140beba8c(longlong *param_1)

{
  FUN_140bebc02();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bebac2 FUN_140bebac2 body=320 status=ok
// SIG undefined FUN_140bebac2(void)

void FUN_140bebac2(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140bebb2b;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140bebb2b:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 140bebc02 FUN_140bebc02 body=448 status=ok
// SIG undefined FUN_140bebc02(void)

void FUN_140bebc02(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._4_4_ = 0;
    uVar11 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
    uVar11 = (uint)local_50;
    iVar14 = (int)local_60;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_140bebd1e;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_140bebd1e:
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bebdd4 FUN_140bebdd4 body=1949 status=ok
// SIG undefined FUN_140bebdd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bebdd4(char *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  byte bVar5;
  ushort uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  int iVar23;
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  int iVar24;
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  longlong lVar26;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_138 [36];
  uint local_114 [3];
  undefined1 local_108 [8];
  longlong local_100;
  uint *local_f8;
  uint *puStack_f0;
  uint local_e8;
  int *local_e0;
  int local_d8;
  uint *local_d0;
  uint local_c8;
  uint local_c4;
  undefined4 *local_c0;
  uint local_b8;
  undefined4 local_b4;
  uint *local_b0;
  uint local_a8 [2];
  undefined1 auStack_a0 [8];
  longlong lStack_98;
  undefined4 uStack_90;
  undefined1 auStack_8c [12];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1447eef60(local_108,param_1);
  if (*param_1 == '\x01') {
    iVar11 = *(int *)(param_1 + 0x30);
    local_e8 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11);
    *(int *)(param_1 + 0x30) = iVar11 + 1;
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 8);
    piVar12 = (int *)(param_1 + 0x44);
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar6 & 0x7fff;
    local_e8 = (uint)(uVar6 >> 0xf);
    lVar9 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar6 < 0) {
      lVar16 = (ulonglong)(uVar10 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70);
    }
    else {
      iVar11 = **(int **)(lVar9 + 0x20);
      lVar16 = 0;
      if (iVar11 <= (int)uVar10) {
        do {
          uVar10 = uVar10 - iVar11;
          iVar11 = (*(int **)(lVar9 + 0x20))[lVar16 + 1];
          lVar16 = lVar16 + 1;
        } while (iVar11 <= (int)uVar10);
      }
      lVar16 = (longlong)(int)uVar10 + *(longlong *)(*(longlong *)(lVar9 + 0x18) + lVar16 * 8);
    }
    piVar12 = (int *)(lVar9 + 0x4c);
  }
  local_f8 = (uint *)(lVar16 + (ulonglong)local_e8 * (longlong)*piVar12 * 4);
  puStack_f0 = local_f8;
  FUN_140126e42(&local_e0,param_1);
  if (*param_1 == '\x01') {
    iVar11 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11);
    local_c8 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar11 + 1;
    local_d0 = (uint *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar6 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_d0 = &local_c4;
      local_c8 = 0;
    }
    else {
      lVar16 = *(longlong *)(param_1 + 0x80);
      local_c8 = 1;
      local_d0 = (uint *)((ulonglong)(uVar10 * *(int *)(lVar16 + 0x80)) +
                          *(longlong *)(lVar16 + 0x70) + (longlong)*(int *)(lVar16 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar11 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11);
    local_b8 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar11 + 1;
    local_c0 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar6 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_c0 = &local_b4;
      local_b8 = 0;
    }
    else {
      lVar16 = *(longlong *)(param_1 + 0x80);
      local_b8 = 1;
      local_c0 = (undefined4 *)
                 ((ulonglong)(uVar10 * *(int *)(lVar16 + 0x80)) + *(longlong *)(lVar16 + 0x70) +
                 (longlong)*(int *)(lVar16 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar11 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11);
    local_a8[0] = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar11 + 1;
    local_b0 = (uint *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar6 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_b0 = local_a8 + 1;
      local_a8[0] = 0;
    }
    else {
      lVar16 = *(longlong *)(param_1 + 0x80);
      local_a8[0] = 1;
      local_b0 = (uint *)((ulonglong)(uVar10 * *(int *)(lVar16 + 0x80)) +
                          *(longlong *)(lVar16 + 0x70) + (longlong)*(int *)(lVar16 + 0x4c) * 4);
    }
  }
  lVar16 = *(longlong *)(local_100 + 8);
  if (lVar16 != 0) {
    lVar9 = *(longlong *)(lVar16 + 0x10);
    if (((*(longlong *)(lVar9 + 0x78) != 0) &&
        (iVar11 = *(int *)(*(longlong *)(lVar9 + 0x78) + 0x120), iVar11 != 0)) &&
       (*(longlong *)(lVar16 + 0x18) == 0)) {
      local_114[0]._0_1_ = 1;
      local_114[1] = 0xffffffff;
      FUN_140bec572(local_114,*(undefined8 *)(lVar9 + 8),param_2);
      bVar5 = (byte)local_114[0];
      lVar16 = *(longlong *)(lVar9 + 0x78);
      stack0xffffffffffffff64 = SUB1612((undefined1  [16])0x0,0);
      uStack_90 = 0;
      auStack_8c = SUB1612((undefined1  [16])0x0,4);
      if ((local_114[1] != -1) && (lVar16 != 0)) {
        uVar7 = *(undefined4 *)(lVar16 + 0x128 + (ulonglong)((byte)local_114[0] ^ 1) * 8);
        lVar9 = *(longlong *)(lVar16 + 0x18 + (ulonglong)((byte)local_114[0] ^ 1) * 0x20);
        auVar21._4_4_ = uVar7;
        auVar21._0_4_ = uVar7;
        auVar21._8_8_ = 0;
        auVar22 = pmovsxbd(in_XMM2,0x100);
        auVar25 = pmovsxbq(in_XMM3,0x100);
        lVar17 = 2;
        auVar27 = pmovsxbq(unaff_XMM6,0x202);
        auVar28 = pmovsxbd(unaff_XMM7,0x2020202);
        do {
          auVar29._0_4_ = local_114[1] + auVar22._0_4_;
          iVar23 = auVar22._4_4_;
          auVar29._4_4_ = local_114[1] + iVar23;
          iVar15 = auVar22._8_4_;
          auVar29._8_4_ = iVar15;
          iVar24 = auVar22._12_4_;
          auVar29._12_4_ = iVar24;
          auVar29 = pmulld(auVar29,auVar21);
          auVar29 = pmovzxdq(auVar29,auVar29);
          if (SUB168(auVar25 ^ _DAT_149931e80,0) < -0x7ffffffffffffffd) {
            *(longlong *)(local_a8 + lVar17 * 2) = auVar29._0_8_ + lVar9;
          }
          if (SUB168(auVar25 ^ _DAT_149931e80,8) < -0x7ffffffffffffffd) {
            *(longlong *)(auStack_a0 + lVar17 * 8) = auVar29._8_8_ + lVar9;
          }
          lVar26 = auVar25._8_8_;
          auVar25._0_8_ = auVar25._0_8_ + auVar27._0_8_;
          auVar25._8_8_ = lVar26 + auVar27._8_8_;
          auVar22._0_4_ = auVar22._0_4_ + auVar28._0_4_;
          auVar22._4_4_ = iVar23 + auVar28._4_4_;
          auVar22._8_4_ = iVar15 + auVar28._8_4_;
          auVar22._12_4_ = iVar24 + auVar28._12_4_;
          lVar17 = lVar17 + 2;
        } while (lVar17 != 6);
        piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar12 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar12) {
          iVar23 = *(int *)(lVar16 + 0x120);
          iVar15 = 0;
          do {
            puVar1 = local_f8 + (int)local_e8;
            uVar10 = *local_f8;
            if ((int)uVar10 < iVar11 && -1 < (int)uVar10) {
              if ((int)uVar10 < iVar23) {
                lVar16 = 0;
                if (bVar5 == 0) {
                  do {
                    uVar6 = *(ushort *)((&lStack_98)[lVar16] + (ulonglong)uVar10 * 2);
                    uVar13 = (uint)uVar6 << 0xd;
                    if ((uVar13 & 0xf800000) == 0xf800000) {
                      fVar14 = (float)(uVar13 | 0x70000000);
                    }
                    else if ((uVar13 & 0xf800000) == 0) {
                      fVar14 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar14 = (float)((uVar13 & 0xfffe000) + 0x38000000);
                    }
                    local_114[lVar16] = (int)(short)uVar6 & 0x80000000U | (uint)fVar14;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 != 3);
                }
                else {
                  do {
                    local_114[lVar16] = *(uint *)((&lStack_98)[lVar16] + (ulonglong)uVar10 * 4);
                    lVar16 = lVar16 + 1;
                  } while (lVar16 != 3);
                }
              }
              else {
                local_114[0] = 0;
                local_114[1] = 0;
                local_114[2] = 0;
              }
              uVar13 = local_114[0];
              uVar20 = local_114[1];
              uVar19 = local_114[2];
            }
            else {
              uVar13 = 0;
              uVar20 = 0;
              uVar19 = 0;
            }
            piVar12 = local_e0 + local_d8;
            *local_e0 = -(uint)((int)uVar10 < iVar11 && -1 < (int)uVar10);
            puVar2 = local_d0 + (int)local_c8;
            *local_d0 = uVar13;
            puVar3 = local_c0 + (int)local_b8;
            *local_c0 = uVar20;
            puVar4 = local_b0 + (int)local_a8[0];
            *local_b0 = uVar19;
            iVar15 = iVar15 + 1;
            piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar18 = (int *)(param_1 + 0x3c);
            }
            local_e0 = piVar12;
            local_d0 = puVar2;
            local_c0 = puVar3;
            local_b0 = puVar4;
            local_f8 = puVar1;
          } while (iVar15 < *piVar18);
        }
        goto LAB_140bec3c3;
      }
    }
  }
  piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar12 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar12) {
    iVar11 = 0;
    do {
      piVar12 = local_e0 + local_d8;
      *local_e0 = 0;
      puVar1 = local_d0 + (int)local_c8;
      *local_d0 = 0;
      puVar3 = local_c0 + (int)local_b8;
      *local_c0 = 0;
      puVar2 = local_b0 + (int)local_a8[0];
      *local_b0 = 0;
      iVar11 = iVar11 + 1;
      piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar18 = (int *)(param_1 + 0x3c);
      }
      local_e0 = piVar12;
      local_d0 = puVar1;
      local_c0 = puVar3;
      local_b0 = puVar2;
    } while (iVar11 < *piVar18);
  }
LAB_140bec3c3:
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bec572 FUN_140bec572 body=451 status=ok
// SIG undefined FUN_140bec572(void)

void FUN_140bec572(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50 [2];
  longlong local_48;
  int local_40 [2];
  longlong local_38;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  local_38 = param_3;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb42130);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_38) && (*(int *)(lVar2 + 8 + lVar5) == local_30[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) goto LAB_140bec6b8;
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  local_48 = param_3;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42140);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_48) && (*(int *)(lVar2 + 8 + lVar5) == local_40[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) goto LAB_140bec6b8;
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  local_58 = param_3;
  local_50[0] = FUN_144830b78(local_50,&DAT_14cb42150);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_58) && (*(int *)(lVar2 + 8 + lVar5) == local_50[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 0;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2] + 4);
          goto LAB_140bec6c5;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
LAB_140bec6cb:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140bec6b8:
  *param_1 = 1;
  puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2]);
LAB_140bec6c5:
  *(uint *)(param_1 + 4) = (uint)*puVar4;
  goto LAB_140bec6cb;
}



// FUNCTION 140bec736 FUN_140bec736 body=84 status=ok
// SIG undefined FUN_140bec736(void)

undefined8 * FUN_140bec736(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140bec78a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140bec78a FUN_140bec78a body=306 status=ok
// SIG undefined FUN_140bec78a(void)

void FUN_140bec78a(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (longlong)(int)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar7 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140bec7f4;
              lVar1 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar1 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = DAT_14c841df8;
          }
          uVar3 = -uVar6 & ((int)(uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,1);
      }
    }
LAB_140bec7f4:
    uVar6 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar6 = uVar3;
    }
  }
  if ((int)param_3 < (int)uVar6) {
    FUN_1446f8d3c(param_1,0,uVar6,1,1);
    param_3 = uVar6;
  }
  *(uint *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140bec8bc FUN_140bec8bc body=835 status=ok
// SIG undefined FUN_140bec8bc(void)

void FUN_140bec8bc(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  int local_c0;
  longlong local_b8 [2];
  undefined4 local_a8 [4];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  switchD_143c3d4dc::caseD_1d();
  if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x1a0);
    local_e8 = (longlong)*(int *)(param_1 + 0x1a8) * 0x78 + lVar7;
    do {
      local_98 = 0;
      local_90 = 0;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_e0 = lVar7;
      FUN_145783008(local_b8,lVar7 + 0x28);
      local_d8 = 0x100000000;
      local_d0 = local_a8;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      if (local_90 == 0) {
        uVar17 = 1;
        local_c8._0_4_ = 0xffffffff;
        iVar12 = 0;
        local_c8._4_4_ = 0;
        uVar10 = 0;
      }
      else {
        FUN_1449c0562(&local_d8);
        uVar10 = local_d8 & 0xffffffff;
        uVar17 = local_d8 >> 0x20;
        iVar12 = local_90;
      }
      puVar4 = local_d0;
      uVar16 = (uint)local_c8;
      iVar5 = local_c8._4_4_;
      iVar11 = local_c0;
      if (local_c8._4_4_ != iVar12 || local_d0 != local_a8) {
        do {
          iVar9 = (int)uVar10;
          uVar3 = *(ulonglong *)(local_b8[0] + (longlong)iVar5 * 0x10);
          if (uVar3 != 0) {
            *(undefined8 *)(uVar3 + 0x2e8) = 0;
            local_d8 = uVar3;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c();
            }
            FUN_140192ad0(lVar7 + 0x28,&local_d8);
          }
          uVar16 = uVar16 & ~(uint)uVar17;
          puVar15 = *(undefined4 **)(puVar4 + 4);
          if (*(undefined4 **)(puVar4 + 4) == (undefined4 *)0x0) {
            puVar15 = puVar4;
          }
          iVar1 = puVar4[6];
          lVar13 = (longlong)iVar9;
          uVar8 = puVar15[lVar13] & uVar16;
          if (uVar8 == 0) {
            iVar5 = iVar1 + 0x1e;
            if (-1 < iVar1 + -1) {
              iVar5 = iVar1 + -1;
            }
            iVar5 = iVar5 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar6 = iVar5;
            if (iVar5 < iVar9) {
              iVar6 = iVar9;
            }
            if (iVar9 < iVar5) {
              lVar14 = 0;
              do {
                uVar8 = puVar15[lVar13 + lVar14 + 1];
                if (uVar8 != 0) {
                  uVar10 = (ulonglong)(iVar9 + (int)lVar14 + 1);
                  uVar16 = 0xffffffff;
                  goto LAB_140becafa;
                }
                iVar11 = iVar11 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar6 - lVar13 != lVar14);
              uVar16 = 0xffffffff;
              iVar9 = iVar6;
            }
            uVar10 = (ulonglong)(iVar9 + 1);
            iVar5 = iVar1;
          }
          else {
LAB_140becafa:
            uVar17 = (ulonglong)(-uVar8 & uVar8);
            uVar3 = uVar17 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar5 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (iVar1 <= iVar5) {
              iVar5 = iVar1;
            }
          }
        } while (iVar5 != iVar12 || puVar4 != local_a8);
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_140194d98(local_b8);
      lVar7 = local_e0 + 0x78;
    } while (lVar7 != local_e8);
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_145782fea();
  }
  plVar2 = *(longlong **)(param_1 + 0x218);
  if (plVar2 != (longlong *)0x0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
    (**(code **)(*plVar2 + 0x430))(plVar2,local_b8);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8[0] = 0xffffffff;
  FUN_140becc00(param_1,local_b8);
  FUN_14051bf10(local_b8);
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140becc00 FUN_140becc00 body=481 status=ok
// SIG undefined FUN_140becc00(void)

void FUN_140becc00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  _RTL_CRITICAL_SECTION local_70;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x1e0)) {
    lVar2 = FUN_145ef8526();
    if (lVar2 == 0) {
      FUN_1457944f0(param_1 + 0x1d0);
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_14340d04c(lVar2,param_1,*(undefined4 *)(param_2 + 0x10));
      }
      uVar1 = *(undefined4 *)(param_1 + 0x1e0);
      lVar3 = *(longlong *)(param_1 + 0x1d8);
      FUN_147973aee(param_1 + 0x1d0,param_2);
      if (lVar3 != 0) {
        FUN_14340d14e(lVar2,param_1,uVar1);
      }
    }
    if (*(longlong *)(param_1 + 0x1d8) == 0) {
      if (*(longlong *)(param_1 + 0x1e8) != 0) {
        FUN_141092d32(&DAT_14cacedd0);
        *(undefined8 *)(param_1 + 0x1e8) = 0;
      }
    }
    else if (*(longlong *)(param_1 + 0x1e8) == 0) {
      InitializeCriticalSection(&local_70);
      SetCriticalSectionSpinCount(&local_70,4000);
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      EnterCriticalSection(&local_70);
      if (local_40 != 2) {
        FUN_1446efa72(&local_48,0,2,0x10);
        local_40 = 2;
      }
      *local_48 = &PTR_LAB_14a57d310;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_48[2] = lVar3;
      *local_48 = &PTR_FUN_14ab099f0;
      local_48[3] = param_1;
      LeaveCriticalSection(&local_70);
      FUN_145ca0b8c(&DAT_14cacedd0,&local_78,&local_70);
      FUN_1401cb1ee(&local_70);
      *(undefined8 *)(param_1 + 0x1e8) = local_78;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140becde2 FUN_140becde2 body=241 status=ok
// SIG undefined FUN_140becde2(void)

longlong * FUN_140becde2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140194dd0(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar2 + 8 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 140beced4 FUN_140beced4 body=490 status=ok
// SIG undefined FUN_140beced4(void)

void FUN_140beced4(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_3 = -1.0;
  *param_4 = *(float *)(param_2 + 0x200);
  if (DAT_14caf84d0 == 0) {
    local_50 = &local_30;
    local_30 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_145a62952;
    local_58 = &LAB_147c8cd45;
    local_60 = &LAB_1461468ae;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000006;
    local_80 = 8;
    local_88 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  lVar3 = DAT_14caf84d0;
  lVar4 = *(longlong *)(DAT_14caf84d0 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(DAT_14caf84d0);
    lVar4 = *(longlong *)(lVar3 + 0x110);
  }
  fVar1 = *(float *)(lVar4 + 0x38);
  if (0.0 <= fVar1) goto LAB_140becf91;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) goto LAB_140becf91;
    fVar5 = *(float *)(param_1 + 0x1c);
LAB_140becfc1:
    if (fVar5 <= 0.0) goto LAB_140becf91;
    fVar5 = fVar1 * -2.0 * fVar5;
    if (fVar5 < 0.0) {
      fVar6 = sqrtf(fVar5);
    }
    else {
      fVar6 = SQRT(fVar5);
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x18);
    if ((uVar2 & 2) == 0) {
      if (fVar6 <= 0.0) goto LAB_140becf91;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x1c);
      if ((fVar6 <= 0.0) || (fVar5 <= 0.0)) {
        if (fVar6 <= 0.0) goto LAB_140becfc1;
      }
      else {
        *param_3 = ((-fVar6 * fVar6) / (fVar5 + fVar5)) / fVar1;
        fVar6 = *(float *)(param_1 + 0x18);
      }
    }
  }
  *param_4 = fVar6;
LAB_140becf91:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bed0c8 FUN_140bed0c8 body=250 status=ok
// SIG undefined FUN_140bed0c8(void)

undefined8 FUN_140bed0c8(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  byte *local_40;
  undefined1 local_38 [8];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) goto LAB_140bed19d;
  if ((int)param_1[1] != -1) {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 0x6b) != 1)) goto LAB_140bed19d;
  FUN_1400b22c2(&local_30,*(undefined8 *)(pbVar1 + 8));
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(local_38,puVar3,1);
  local_40 = (byte *)0x0;
  FUN_1405593a8(*param_1,&local_40,local_38);
  if ((local_40 != (byte *)0x0) && (lVar2 = *(longlong *)(local_40 + 0x10), lVar2 != 0)) {
    if (*param_1 == 0) {
      *param_1 = lVar2;
    }
    else if (lVar2 != *param_1) goto LAB_140bed18e;
    if (*(uint *)(param_1 + 1) != (uint)*(ushort *)(local_40 + 8)) {
      *(uint *)(param_1 + 1) = (uint)*(ushort *)(local_40 + 8);
    }
  }
LAB_140bed18e:
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140bed19d:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140bed1c4 FUN_140bed1c4 body=594 status=ok
// SIG undefined FUN_140bed1c4(void)

/* WARNING: Removing unreachable block (ram,0x000140bed40d) */

void FUN_140bed1c4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,longlong *param_6)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  undefined8 local_280;
  undefined2 local_278 [112];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 local_160;
  uint local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [8];
  undefined8 auStack_c8 [12];
  undefined4 auStack_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if ((*(byte *)(*param_4 + 0x29) & 4) != 0) {
    memset(local_d0,0,0x98);
    FUN_140bed418();
    auStack_c8[DAT_14ca3a848] = &DAT_14ca3a800;
    auStack_68[DAT_14ca3a848] = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    lStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    cVar3 = FUN_14007744c(param_3,local_d0,*param_4);
    if ((cVar3 != '\0') && (lStack_110 != 0)) {
      local_168 = 0;
      local_160 = 0x300000000;
      local_158 = 0x7fffffff;
      uStack_150 = 0;
      local_278[0] = 0x101;
      local_288 = lStack_110;
      local_280 = local_148;
      FUN_140700dd8(local_278);
      local_158 = local_158 & 0x80000000 | *(uint *)(param_1 + 8) & 0x7fffffff;
      uStack_150 = *param_4;
      iVar1 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar1 + 1U) {
        FUN_14069191a(param_6,iVar1);
      }
      lVar2 = *param_6;
      _Dst = (void *)(lVar2 + (longlong)iVar1 * 0x130);
      memcpy(_Dst,local_278,0xe0);
      *(undefined8 *)(lVar2 + 0x110 + (longlong)iVar1 * 0x130) = 0;
      if (local_168 == 0) {
        *(undefined8 *)((longlong)_Dst + 0x100) = local_178;
        *(undefined8 *)((longlong)_Dst + 0x108) = uStack_170;
        *(undefined8 *)((longlong)_Dst + 0xf0) = local_188;
        *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_180;
        *(undefined8 *)((longlong)_Dst + 0xe0) = local_198;
        *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_190;
      }
      *(longlong *)((longlong)_Dst + 0x110) = local_168;
      local_168 = 0;
      *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_160;
      *(undefined4 *)((longlong)_Dst + 0x11c) = local_160._4_4_;
      local_160 = 0x300000000;
      *(uint *)((longlong)_Dst + 0x120) = local_158;
      *(undefined4 *)((longlong)_Dst + 0x124) = uStack_154;
      *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_150;
      *(undefined4 *)((longlong)_Dst + 300) = uStack_150._4_4_;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bed418 FUN_140bed418 body=284 status=ok
// SIG undefined FUN_140bed418(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140bed418(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3a8a8) {
    FUN_144b3d300(&DAT_14ca3a8a8);
    if (DAT_14ca3a8a8 == -1) {
      FUN_145783080();
      FUN_140db5666(&DAT_14ca3a800,2,&DAT_14ca3a798,L"FRayTracingDynamicGeometryConverterCS",
                    L"/Engine/Private/RayTracing/RayTracingDynamicMesh.usf",
                    L"RayTracingDynamicGeometryConverterCS",5,1,FUN_1472b4714,FUN_1472b46ec,
                    &LAB_142f66ca0,&LAB_1472b46e8,&LAB_14712ac0c,&LAB_14712ac08,0x140,0);
      _DAT_14ca3a800 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f66ce8);
      _Init_thread_footer(&DAT_14ca3a8a8);
    }
  }
  return &DAT_14ca3a800;
}



// FUNCTION 140bed534 FUN_140bed534 body=149 status=ok
// SIG undefined FUN_140bed534(void)

void FUN_140bed534(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 == 0) {
    uVar3 = FUN_140bed5ca();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x118) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x110));
    }
    *(undefined8 *)(param_1 + 0x120) = uVar3;
    return;
  }
  return;
}



// FUNCTION 140bed5ca FUN_140bed5ca body=57 status=ok
// SIG undefined FUN_140bed5ca(void)

void FUN_140bed5ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c3a0 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c3a0 = FUN_140002ddd(FUN_1464200e5,uVar1,L"GbxStanceBaseDef");
  }
  return;
}



// FUNCTION 140bed61e FUN_140bed61e body=151 status=ok
// SIG undefined FUN_140bed61e(void)

void FUN_140bed61e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((((*(byte *)(param_1 + 0x60) & 0x10) == 0) && (*(char *)(param_1 + 0x1a4) == '\x01')) &&
     (*(longlong *)(param_1 + 0x1c8) != 0)) {
    lVar4 = FUN_144a3a302();
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (((lVar1 != 0) && (lVar4 != 0)) &&
       ((lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0 &&
        ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)))))) {
      lVar4 = FUN_1447210f0(param_1);
      if ((lVar4 != 0) &&
         ((*(longlong *)(lVar4 + 0x260) != 0 &&
          (plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0x260) + 0x210), plVar3 != (longlong *)0x0)
          ))) {
                    /* WARNING: Could not recover jumptable at 0x000140bed6b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bed6b6 FUN_140bed6b6 body=81 status=ok
// SIG undefined FUN_140bed6b6(void)

undefined8 FUN_140bed6b6(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 < 1) || (param_2 <= *(int *)(param_1 + 0x2c))) {
    return 0;
  }
  if (iVar1 == 1) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    plVar5 = *(longlong **)(param_1 + 0x18);
    do {
      uVar4 = uVar3;
      if (param_2 <= *(int *)(*plVar5 + 8)) break;
      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 3;
      uVar4 = (ulonglong)(iVar1 - 1);
    } while (iVar1 - 1 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000140bed6fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)(*(longlong **)(param_1 + 0x18))[uVar4 * 3] + 0x10))();
  return uVar2;
}



// FUNCTION 140bed708 FUN_140bed708 body=93 status=ok
// SIG undefined FUN_140bed708(void)

ulonglong FUN_140bed708(longlong param_1,int param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 0x28);
  dVar2 = pow((double)param_2 * *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x18),
              *(double *)(param_1 + 0x30));
  dVar3 = (dVar2 + *(double *)(param_1 + 0x38)) * dVar3;
  uVar1 = (ulonglong)dVar3;
  return (longlong)(dVar3 - 9.223372036854776e+18) & (longlong)uVar1 >> 0x3f | uVar1;
}



// FUNCTION 140bed774 FUN_140bed774 body=36 status=ok
// SIG undefined FUN_140bed774(void)

undefined8 FUN_140bed774(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140bed798 FUN_140bed798 body=104 status=ok
// SIG undefined FUN_140bed798(void)

undefined8 * FUN_140bed798(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_LAB_14b9dd360;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xffffffff;
  puVar2[5] = 0;
  FUN_140bed800(puVar2 + 2,0,1);
  *puVar2 = &PTR_FUN_14b9dd220;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 140bed800 FUN_140bed800 body=233 status=ok
// SIG undefined FUN_140bed800(void)

void FUN_140bed800(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar4 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar4) {
      FUN_140bed8ea(param_1,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x70 + *param_1);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar3[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar3 + 2) = 0xffffffff;
      *(undefined2 *)((longlong)puVar3 + 0x14) = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x25) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x2d) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x35) = 1;
      *(undefined8 *)((longlong)puVar3 + 0x36) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x3c) = 0;
      *puVar3 = &PTR_FUN_14b8fbe20;
      puVar3[9] = 0;
      *(undefined4 *)((longlong)puVar3 + 0x4f) = 0;
      uVar2 = DAT_14c8464e8;
      puVar3[0xb] = DAT_14c8464e0;
      puVar3[0xc] = uVar2;
      puVar3[0xd] = DAT_14c8464f0;
      puVar3 = puVar3 + 0xe;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_148f04afc(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_148f04b58(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140bed8ea FUN_140bed8ea body=268 status=ok
// SIG undefined FUN_140bed8ea(void)

void FUN_140bed8ea(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
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
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140bed9f6 FUN_140bed9f6 body=336 status=ok
// SIG undefined FUN_140bed9f6(void)

undefined8 FUN_140bed9f6(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    *(undefined8 *)((longlong)param_2 + 0xc) = 0;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_2 + 7) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0x44) = uVar3;
    param_2[9] = DAT_14c8464f0;
    param_2[10] = 0x3f800000;
    *(undefined1 *)(param_2 + 0xb) = 0;
    *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
    *(undefined8 *)((longlong)param_2 + 100) = 0;
    *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
    puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4[4] = 0;
    puVar4[6] = 0;
    param_2[0xf] = puVar4;
    param_2[0xe] = puVar4;
    *(undefined4 *)(param_2 + 0x10) = 0;
    param_2[0x15] = 0;
    *(undefined4 *)(param_2 + 0x16) = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    *(undefined8 *)((longlong)param_2 + 0xb4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
    param_2[0x19] = 0;
    *(undefined4 *)(param_2 + 0x1a) = 0;
    *(undefined1 *)(param_2 + 0x1b) = 0;
    *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x20] = 0;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    *(undefined4 *)(param_2 + 0x23) = 10;
    param_2[0x24] = 0;
    param_2[0x25] = 0xffffffffffffffff;
    param_2[0x26] = 0;
    *(undefined4 *)((longlong)param_2 + 0x137) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140bedb32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0x440))(param_1,param_2,param_3);
    return uVar5;
  }
  return 0;
}



// FUNCTION 140bedb46 FUN_140bedb46 body=333 status=ok
// SIG undefined FUN_140bedb46(void)

ulonglong FUN_140bedb46(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((param_3 == 0 || param_2 == 0) || (cVar2 = FUN_141908cfc(param_1), cVar2 == '\0')) {
    uVar7 = 0;
  }
  else {
    iVar5 = 0x20;
    if (*(int *)(param_1 + 0xb8) < 0x20) {
      iVar5 = *(int *)(param_1 + 0xb8);
    }
    *(int *)(param_2 + 0x118) = iVar5;
    *(undefined1 *)(param_2 + 0x138) = *(undefined1 *)(param_1 + 0xbc);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
      plVar6 = *(longlong **)(param_1 + 0xa8);
      lVar8 = (longlong)*(int *)(param_1 + 0xb0) * 0x18;
      do {
        lVar4 = plVar6[1];
        if (lVar4 == 0) {
          uVar3 = FUN_1407f787c();
          lVar4 = FUN_14477b664(uVar3);
          plVar6[1] = lVar4;
        }
        lVar9 = plVar6[2];
        if (lVar9 == 0) {
          if (lVar4 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            if (*plVar6 != 0) {
              plVar1 = *(longlong **)(lVar4 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                lVar9 = 0;
              }
              else {
                uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar9 = FUN_144aff482(uVar3,plVar6);
              }
              plVar6[2] = lVar9;
            }
          }
        }
        iVar5 = *(int *)(param_2 + 0x110);
        *(uint *)(param_2 + 0x110) = iVar5 + 1U;
        if (*(uint *)(param_2 + 0x114) < iVar5 + 1U) {
          FUN_14190a5ae((longlong *)(param_2 + 0x108),iVar5);
        }
        *(longlong *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar5 * 8) = lVar9;
        plVar6 = plVar6 + 3;
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != 0);
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140bedc94 FUN_140bedc94 body=152 status=ok
// SIG undefined FUN_140bedc94(void)

undefined8 FUN_140bedc94(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((uint)lVar2 << 0x10 | uVar5) + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == lVar2) {
          FUN_140bedd2c();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140bedd2c FUN_140bedd2c body=95 status=ok
// SIG undefined FUN_140bedd2c(void)

void FUN_140bedd2c(longlong *param_1,int param_2)

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
  FUN_140bedd8c(param_1,param_2,1);
  return;
}



// FUNCTION 140bedd8c FUN_140bedd8c body=119 status=ok
// SIG undefined FUN_140bedd8c(void)

void FUN_140bedd8c(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 0x10);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_14086c0d2(param_1,param_2,param_3);
  return;
}



// FUNCTION 140bede04 FUN_140bede04 body=78 status=ok
// SIG undefined FUN_140bede04(void)

undefined8 * FUN_140bede04(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2f8))();
  if (cVar1 == '\x01') {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = &PTR_FUN_14adfeaf0;
    puVar2[1] = param_1 + 0x5c;
    puVar2[2] = param_1 + 0x5e;
  }
  return puVar2;
}



// FUNCTION 140bede60 FUN_140bede60 body=57 status=ok
// SIG undefined FUN_140bede60(void)

void FUN_140bede60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb691f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb691f0 = FUN_140002ddd(FUN_14651f4c8,uVar1,L"GpsGenerator_Perches");
  }
  return;
}



// FUNCTION 140bede9a FUN_140bede9a body=102 status=ok
// SIG undefined FUN_140bede9a(void)

void FUN_140bede9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140bedf02();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bedf02 FUN_140bedf02 body=228 status=ok
// SIG undefined FUN_140bedf02(void)

longlong FUN_140bedf02(void)

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
  if (DAT_14cb612a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464f234c;
    local_38 = &LAB_1486d8e3b;
    local_40 = &LAB_1459dca06;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x900;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxMovingPlatformComponent",&DAT_14cb612a0,FUN_1464f2324);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb612a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bedfe8 FUN_140bedfe8 body=2192 status=ok
// SIG undefined FUN_140bedfe8(void)

void FUN_140bedfe8(longlong *param_1)

{
  undefined2 **ppuVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *_Src;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  undefined *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90 [2];
  longlong local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined4 local_60;
  void *local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)((longlong)param_1 + 0x184) != '\x01') goto LAB_140bee415;
  if (*param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c866f58);
    lVar13 = param_1[0x1d];
    if (param_1[0x1d] == 0) {
      if ((int)param_1[0xd] == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      else {
        puVar11 = (undefined2 *)param_1[0xc];
      }
      FUN_1446f470e(&local_80,puVar11,1);
      lVar13 = local_80;
    }
    local_80 = lVar13;
    if (DAT_14c866f88 != DAT_14c866fb4) {
      uVar12 = (uint)((ulonglong)local_80 >> 0x10);
      uVar9 = (uint)local_80 & 0xffff;
      puVar10 = &DAT_14c866fb8;
      if (DAT_14c866fc0 != (undefined *)0x0) {
        puVar10 = DAT_14c866fc0;
      }
      iVar7 = *(int *)(puVar10 +
                      (ulonglong)
                      (DAT_14c866fc8 - 1U &
                      (int)((ulonglong)local_80 >> 0x20) + ((uint)local_80 << 0x10 | uVar9) +
                      (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar9 >> 4)) * 4);
      while (iVar7 != -1) {
        plVar2 = (longlong *)(DAT_14c866f80 + (longlong)iVar7 * 0x18);
        if (*plVar2 == local_80) {
          if ((plVar2 != (longlong *)0x0) &&
             (puVar3 = (undefined8 *)plVar2[1], puVar3 != (undefined8 *)0x0)) {
            *(undefined1 *)((longlong)param_1 + 0x187) = 1;
            iVar7 = *(int *)(puVar3 + 1) + -1;
            if (*(int *)(puVar3 + 1) == 0) {
              iVar7 = 0;
            }
            FUN_1402980a2(param_1 + 0x18,*puVar3,iVar7);
            FUN_140bee9ec(param_1 + 0x1a,puVar3 + 2);
          }
          break;
        }
        iVar7 = (int)plVar2[2];
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c866f58);
  }
  FUN_140bee914(local_90,param_1 + 0x10);
  FUN_140beea4a(&local_78,local_90);
  ppuVar1 = (undefined2 **)(param_1 + 0x12);
  if (ppuVar1 == &local_78) {
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x12] != 0) {
      FUN_1400020a8();
    }
    param_1[0x12] = (longlong)local_78;
    local_78 = (undefined2 *)0x0;
    *(int *)(param_1 + 0x13) = (int)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_70._4_4_;
    uStack_70 = 0;
  }
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  uVar12 = (int)param_1[0x15] - 2;
  if (uVar12 < 0x7fffffff) {
    FUN_140bee914(local_90,param_1 + 0x14);
    FUN_140beea4a(&local_78,local_90);
  }
  else {
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
  }
  if ((undefined2 **)(param_1 + 0x16) == &local_78) {
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x16] != 0) {
      FUN_1400020a8();
    }
    param_1[0x16] = (longlong)local_78;
    local_78 = (undefined2 *)0x0;
    *(int *)(param_1 + 0x17) = (int)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uStack_70._4_4_;
    uStack_70 = 0;
  }
  if ((uVar12 < 0x7fffffff) && (local_90[0] != 0)) {
    FUN_1400020a8();
  }
  cVar6 = FUN_140807eae(param_1 + 0x16,ppuVar1);
  if (cVar6 == '\0') {
    local_78 = (undefined2 *)param_1[0x16];
    iVar7 = (int)param_1[0x17] + -1;
    if ((int)param_1[0x17] == 0) {
      iVar7 = 0;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar7);
    local_68 = L"Restricted/NotForLicensees";
    local_60 = 0x1a;
    FUN_140bee87a(&local_a0,&local_78,2);
    if ((void **)(param_1 + 0x20) == &local_a0) {
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x20] != 0) {
        FUN_1400020a8();
      }
      param_1[0x20] = (longlong)local_a0;
      local_a0 = (void *)0x0;
      *(int *)(param_1 + 0x21) = local_98;
      *(undefined4 *)((longlong)param_1 + 0x10c) = local_94;
    }
    local_78 = (undefined2 *)param_1[0x16];
    iVar7 = (int)param_1[0x17] + -1;
    if ((int)param_1[0x17] == 0) {
      iVar7 = 0;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar7);
    local_68 = L"Restricted/NoRedist";
    local_60 = 0x13;
    FUN_140bee87a(&local_a0,&local_78,2);
    if ((void **)(param_1 + 0x22) == &local_a0) {
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x22] != 0) {
        FUN_1400020a8();
      }
      param_1[0x22] = (longlong)local_a0;
      local_a0 = (void *)0x0;
      *(int *)(param_1 + 0x23) = local_98;
      *(undefined4 *)((longlong)param_1 + 0x11c) = local_94;
    }
    local_78 = (undefined2 *)param_1[0x16];
    iVar7 = (int)param_1[0x17] + -1;
    if ((int)param_1[0x17] == 0) {
      iVar7 = 0;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar7);
    local_68 = L"Restricted/LimitedAccess";
    local_60 = 0x18;
    FUN_140bee87a(&local_a0,&local_78,2);
    if ((void **)(param_1 + 0x1e) == &local_a0) goto LAB_140bee813;
    if (param_1[0x1e] != 0) {
      FUN_1400020a8();
    }
    param_1[0x1e] = (longlong)local_a0;
    local_a0 = (void *)0x0;
    *(int *)(param_1 + 0x1f) = local_98;
    *(undefined4 *)((longlong)param_1 + 0xfc) = local_94;
  }
  else {
    local_a0 = (void *)0x0;
    local_98 = (int)param_1[0x17];
    lVar13 = (longlong)local_98;
    _Src = (void *)param_1[0x16];
    if (lVar13 == 0) {
      local_94 = 0;
    }
    else {
      FUN_1446dd670(&local_a0,local_98,0);
      memcpy(local_a0,_Src,lVar13 * 2);
    }
    FUN_1449b8608(&local_78,ppuVar1,&DAT_149e065c6);
    puVar11 = local_78;
    if ((int)uStack_70 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    FUN_14107002a(&local_a0,puVar11);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_78 = (undefined2 *)param_1[0x12];
    iVar7 = (int)param_1[0x13] + -1;
    if ((int)param_1[0x13] == 0) {
      iVar7 = 0;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar7);
    local_68 = L"Restricted/NotForLicensees";
    local_60 = 0x1a;
    local_58 = local_a0;
    local_50 = local_98 + -1;
    if (local_98 == 0) {
      local_50 = 0;
    }
    FUN_140bee87a(&local_b0,&local_78,3);
    if (param_1 + 0x20 == &local_b0) {
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x20] != 0) {
        FUN_1400020a8();
      }
      param_1[0x20] = local_b0;
      local_b0 = 0;
      *(undefined4 *)(param_1 + 0x21) = local_a8;
      *(undefined4 *)((longlong)param_1 + 0x10c) = local_a4;
    }
    local_78 = (undefined2 *)param_1[0x12];
    iVar7 = (int)param_1[0x13] + -1;
    if ((int)param_1[0x13] == 0) {
      iVar7 = 0;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar7);
    local_68 = L"Restricted/NoRedist";
    local_60 = 0x13;
    local_58 = local_a0;
    local_50 = local_98 + -1;
    if (local_98 == 0) {
      local_50 = 0;
    }
    FUN_140bee87a(&local_b0,&local_78,3);
    if (param_1 + 0x22 == &local_b0) {
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x22] != 0) {
        FUN_1400020a8();
      }
      param_1[0x22] = local_b0;
      local_b0 = 0;
      *(undefined4 *)(param_1 + 0x23) = local_a8;
      *(undefined4 *)((longlong)param_1 + 0x11c) = local_a4;
    }
    local_78 = (undefined2 *)param_1[0x12];
    iVar7 = (int)param_1[0x13] + -1;
    if ((int)param_1[0x13] == 0) {
      iVar7 = 0;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar7);
    local_68 = L"Restricted/LimitedAccess";
    local_60 = 0x18;
    local_58 = local_a0;
    local_50 = local_98 + -1;
    if (local_98 == 0) {
      local_50 = 0;
    }
    FUN_140bee87a(&local_b0,&local_78,3);
    if (param_1 + 0x1e == &local_b0) {
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x1e] != 0) {
        FUN_1400020a8();
      }
      param_1[0x1e] = local_b0;
      local_b0 = 0;
      *(undefined4 *)(param_1 + 0x1f) = local_a8;
      *(undefined4 *)((longlong)param_1 + 0xfc) = local_a4;
    }
LAB_140bee813:
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(uint *)(param_1 + 0x15) < 2) && ((int)param_1[0x2f] == 0)) {
    lVar13 = 8;
    do {
      pwVar8 = wcsstr(*(wchar_t **)(&DAT_149e2b750 + lVar13),L"{PROJECT}");
      if (pwVar8 == (wchar_t *)0x0) {
        iVar7 = (int)param_1[0x2f];
        *(uint *)(param_1 + 0x2f) = iVar7 + 1U;
        if (*(uint *)((longlong)param_1 + 0x17c) < iVar7 + 1U) {
          FUN_146813a5c(param_1 + 0x2e,iVar7);
        }
        lVar4 = param_1[0x2e];
        *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar7 * 0x18) =
             *(undefined8 *)((longlong)&PTR_u__ENGINE__Config_Base_ini_149e2b758 + lVar13);
        uVar5 = *(undefined8 *)(&DAT_149e2b750 + lVar13);
        puVar3 = (undefined8 *)(lVar4 + (longlong)iVar7 * 0x18);
        *puVar3 = *(undefined8 *)(&UNK_149e2b748 + lVar13);
        puVar3[1] = uVar5;
      }
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0x140);
  }
LAB_140bee415:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bee87a FUN_140bee87a body=154 status=ok
// SIG undefined FUN_140bee87a(void)

undefined8 * FUN_140bee87a(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((int)param_3 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = 0;
    iVar3 = 0;
    do {
      iVar2 = iVar3 + *(int *)((longlong)param_2 + lVar1 + 8);
      iVar3 = iVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while ((ulonglong)param_3 << 4 != lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    if (0 < iVar3) {
      FUN_1446f8c06(param_1,iVar2 + 2);
    }
  }
  FUN_1400020e8(param_1,*param_2,*(undefined4 *)(param_2 + 1));
  if (1 < (int)param_3) {
    lVar1 = 0;
    do {
      FUN_1401aebe8(param_1,*(undefined8 *)((longlong)param_2 + lVar1 + 0x10),
                    *(undefined4 *)((longlong)param_2 + lVar1 + 0x18));
      lVar1 = lVar1 + 0x10;
    } while ((ulonglong)param_3 * 0x10 + -0x10 != lVar1);
  }
  return param_1;
}



// FUNCTION 140bee914 FUN_140bee914 body=213 status=ok
// SIG undefined FUN_140bee914(void)

undefined8 * FUN_140bee914(undefined8 *param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar6 = *(int *)(param_2 + 1);
  iVar2 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  puVar5 = (undefined2 *)*param_2;
  uVar4 = (longlong)iVar2 * 2;
  do {
    if (uVar4 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    sVar1 = *(short *)((longlong)puVar5 + (uVar4 - 2));
    uVar4 = uVar4 - 2;
  } while ((sVar1 != 0x2f) && (sVar1 != 0x5c));
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = (int)(uVar4 >> 1);
  if (iVar3 != -1) {
    if (iVar6 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    iVar6 = 0;
    if (0 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14006620a(&local_28,puVar5,iVar6);
    if ((undefined8 *)&local_28 == param_1) {
      if (CONCAT44(uStack_24,local_28) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)param_1 = local_28;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_24;
      *(undefined4 *)(param_1 + 1) = uStack_20;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bee9ec FUN_140bee9ec body=93 status=ok
// SIG undefined FUN_140bee9ec(void)

undefined8 * FUN_140bee9ec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1447a1747(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b856de(param_1,iVar1);
      FUN_140b8566a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140beea4a FUN_140beea4a body=210 status=ok
// SIG undefined FUN_140beea4a(void)

longlong * FUN_140beea4a(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  short sVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  
  iVar4 = (int)param_2[1];
  iVar8 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar8 = 0;
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar8 << 0x20;
  uVar7 = (longlong)iVar8 * 2;
  do {
    if (uVar7 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
    sVar1 = *(short *)(lVar3 + -2 + uVar7);
    lVar5 = lVar5 + -0x100000000;
    uVar7 = uVar7 - 2;
  } while ((sVar1 != 0x2f) && (sVar1 != 0x5c));
  *param_1 = 0;
  param_1[1] = 0;
  iVar6 = (int)(uVar7 >> 1);
  if (iVar6 != -1) {
    uVar9 = iVar8 - iVar6;
    if (0 < (int)uVar9) {
      iVar8 = iVar4 - (iVar6 + uVar9);
      if (iVar8 != 0) {
        _Dst = (void *)(lVar3 + (lVar5 >> 0x20) * 2);
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar9 * 2),(longlong)iVar8 * 2);
        iVar4 = (int)param_2[1];
      }
      iVar4 = iVar4 - uVar9;
      *(int *)(param_2 + 1) = iVar4;
    }
    if (param_1 != param_2) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      *param_1 = *param_2;
      *param_2 = 0;
      *(int *)(param_1 + 1) = iVar4;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      param_2[1] = 0;
    }
  }
  return param_1;
}



// FUNCTION 140beeb2c FUN_140beeb2c body=44 status=ok
// SIG undefined FUN_140beeb2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140beeb2c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7d424 = _DAT_14cb7d424 + -1;
  *param_1 = DAT_14cb7d418;
  DAT_14cb7d418 = param_1;
  return;
}



// FUNCTION 140beeb58 FUN_140beeb58 body=40 status=ok
// SIG undefined FUN_140beeb58(void)

undefined8 FUN_140beeb58(undefined8 param_1,int param_2)

{
  FUN_140beeb80();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140beeb80 FUN_140beeb80 body=148 status=ok
// SIG undefined FUN_140beeb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140beeb80(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b401600;
  FUN_14051f497(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140beec06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140beec14 FUN_140beec14 body=45 status=ok
// SIG undefined FUN_140beec14(void)

void FUN_140beec14(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_140beec42(param_1);
      param_1 = param_1 + 0x88;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140beec42 FUN_140beec42 body=183 status=ok
// SIG undefined FUN_140beec42(void)

void FUN_140beec42(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1d7d10;
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_140beed42(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140beecf9(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140beed8d(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140beeccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140beecf9 FUN_140beecf9 body=73 status=ok
// SIG undefined FUN_140beecf9(void)

void FUN_140beecf9(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140beed42 FUN_140beed42 body=75 status=ok
// SIG undefined FUN_140beed42(void)

void FUN_140beed42(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140beed8d FUN_140beed8d body=75 status=ok
// SIG undefined FUN_140beed8d(void)

void FUN_140beed8d(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140beedee FUN_140beedee body=54 status=ok
// SIG undefined FUN_140beedee(void)

void FUN_140beedee(longlong param_1)

{
  FUN_140316e34(param_1,1);
  FUN_140d53d1a(param_1,param_1 + 0x148,1);
  FUN_140d53872(param_1);
  return;
}



// FUNCTION 140beee24 FUN_140beee24 body=144 status=ok
// SIG undefined FUN_140beee24(void)

void FUN_140beee24(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x110);
  uVar1 = 0;
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x118) * 0x38;
    do {
      FUN_140beef22(lVar3);
      lVar3 = lVar3 + 0x38;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
    uVar1 = *(undefined4 *)(param_1 + 0x118);
    lVar3 = *(longlong *)(param_1 + 0x110);
  }
  FUN_14099adc2(lVar3,uVar1);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_140beeeb4(param_1 + 0x110,0);
  }
  FUN_1407058ce(param_1);
  FUN_140705914(param_1);
  *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
  return;
}



// FUNCTION 140beeeb4 FUN_140beeeb4 body=109 status=ok
// SIG undefined FUN_140beeeb4(void)

void FUN_140beeeb4(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 140beef22 FUN_140beef22 body=172 status=ok
// SIG undefined FUN_140beef22(void)

void FUN_140beef22(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x80) != 0) {
      puVar1 = *(undefined8 **)(lVar2 + 0x78);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72((longlong *)(lVar2 + 0x78),0,0,0x10);
        *(undefined4 *)(lVar2 + 0x80) = 0;
        lVar2 = *(longlong *)(param_1 + 0x20);
      }
    }
    if (*(int *)(lVar2 + 0x90) != 0) {
      puVar1 = *(undefined8 **)(lVar2 + 0x88);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72((longlong *)(lVar2 + 0x88),0,0,0x10);
        *(undefined4 *)(lVar2 + 0x90) = 0;
        lVar2 = *(longlong *)(param_1 + 0x20);
      }
    }
    FUN_140bef00e(lVar2);
    return;
  }
  return;
}



// FUNCTION 140beefce FUN_140beefce body=31 status=ok
// SIG undefined FUN_140beefce(void)

undefined8 FUN_140beefce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140beefee FUN_140beefee body=31 status=ok
// SIG undefined FUN_140beefee(void)

undefined8 FUN_140beefee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bef00e FUN_140bef00e body=309 status=ok
// SIG undefined FUN_140bef00e(void)

void FUN_140bef00e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if ((*(byte *)(param_1 + 0xf1) & 4) == 0) {
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
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
    FUN_140bef143(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_140bef55c(param_1 + 0x48);
    }
    FUN_140bef190(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_140bef52c(param_1 + 0x68);
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0x78);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72((longlong *)(param_1 + 0x78),0,0,0x10);
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0x88);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72((longlong *)(param_1 + 0x88),0,0,0x10);
        *(undefined4 *)(param_1 + 0x90) = 0;
      }
    }
    FUN_1448a8284(param_1 + 0x98);
    *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) | 4;
  }
  return;
}



// FUNCTION 140bef143 FUN_140bef143 body=77 status=ok
// SIG undefined FUN_140bef143(void)

void FUN_140bef143(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bef190 FUN_140bef190 body=75 status=ok
// SIG undefined FUN_140bef190(void)

void FUN_140bef190(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bef1dc FUN_140bef1dc body=9 status=ok
// SIG undefined FUN_140bef1dc(void)

void FUN_140bef1dc(longlong param_1)

{
  FUN_140bf0348(param_1 + 0x10);
  return;
}



// FUNCTION 140bef1e6 FUN_140bef1e6 body=56 status=ok
// SIG undefined FUN_140bef1e6(void)

void FUN_140bef1e6(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b430ab0;
  FUN_140bef21e(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bef21e FUN_140bef21e body=75 status=ok
// SIG undefined FUN_140bef21e(void)

void FUN_140bef21e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bef26a FUN_140bef26a body=9 status=ok
// SIG undefined FUN_140bef26a(void)

void FUN_140bef26a(longlong param_1)

{
  FUN_140bef274(param_1 + 0x10);
  return;
}



// FUNCTION 140bef274 FUN_140bef274 body=201 status=ok
// SIG undefined FUN_140bef274(void)

void FUN_140bef274(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b42f890;
  plVar3 = (longlong *)param_1[0xd];
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
  FUN_140bef33d(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140bef494(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[4];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140bef319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140bef33d FUN_140bef33d body=73 status=ok
// SIG undefined FUN_140bef33d(void)

void FUN_140bef33d(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bef386 FUN_140bef386 body=9 status=ok
// SIG undefined FUN_140bef386(void)

void FUN_140bef386(longlong param_1)

{
  FUN_140bef390(param_1 + 0x10);
  return;
}



// FUNCTION 140bef390 FUN_140bef390 body=131 status=ok
// SIG undefined FUN_140bef390(void)

void FUN_140bef390(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b3ef590;
  plVar3 = (longlong *)param_1[6];
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
  plVar3 = (longlong *)param_1[4];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140bef407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140bef414 FUN_140bef414 body=39 status=ok
// SIG undefined FUN_140bef414(void)

void FUN_140bef414(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4305e0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  FUN_140bef390(param_1 + 0x10);
  return;
}



// FUNCTION 140bef43c FUN_140bef43c body=88 status=ok
// SIG undefined FUN_140bef43c(void)

void FUN_140bef43c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x58) = &PTR_LAB_14b430d60;
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x68);
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
  FUN_140bef390(param_1 + 0x10);
  return;
}



// FUNCTION 140bef494 FUN_140bef494 body=141 status=ok
// SIG undefined FUN_140bef494(void)

void FUN_140bef494(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x38);
    do {
      FUN_140bef956(*(undefined8 *)(puVar4 + -2),*puVar4);
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_140bef9a1(*(undefined8 *)(puVar4 + -6),puVar4[-4]);
      if (*(longlong *)(puVar4 + -6) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(puVar4 + -8);
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
      if (*(char *)(puVar4 + -0xd) == '\x01') {
        *(undefined1 *)(puVar4 + -0xd) = 0;
      }
      puVar4 = puVar4 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bef522 FUN_140bef522 body=9 status=ok
// SIG undefined FUN_140bef522(void)

void FUN_140bef522(longlong param_1)

{
  FUN_140bef274(param_1 + 0x10);
  return;
}



// FUNCTION 140bef52c FUN_140bef52c body=48 status=ok
// SIG undefined FUN_140bef52c(void)

void FUN_140bef52c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 140bef55c FUN_140bef55c body=48 status=ok
// SIG undefined FUN_140bef55c(void)

void FUN_140bef55c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 140bef58c FUN_140bef58c body=265 status=ok
// SIG undefined FUN_140bef58c(void)

void FUN_140bef58c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar6 = *(longlong **)(param_1 + 8);
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x10) * 2;
    do {
      plVar1 = (longlong *)*plVar6;
      if ((*(byte *)(plVar1 + 0xf) & 2) == 0) {
        lVar8 = plVar1[9];
        lVar3 = plVar1[10];
        if ((longlong)(int)lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          lVar5 = 0;
          do {
            plVar2 = *(longlong **)(lVar8 + lVar5);
            if ((*(byte *)(plVar2 + 7) & 4) == 0) {
              (**(code **)(*plVar2 + 0x28))(plVar2);
              *(byte *)(plVar2 + 7) = *(byte *)(plVar2 + 7) | 4;
            }
            lVar5 = lVar5 + 0x10;
          } while ((longlong)(int)lVar3 * 0x10 != lVar5);
          uVar4 = (undefined4)plVar1[10];
          lVar8 = plVar1[9];
        }
        FUN_140bef33d(lVar8,uVar4);
        *(undefined4 *)(plVar1 + 10) = 0;
        if (*(int *)((longlong)plVar1 + 0x54) != 0) {
          FUN_140bef69e(plVar1 + 9);
        }
        *(byte *)(plVar1 + 0xf) = *(byte *)(plVar1 + 0xf) & 0xf7;
        FUN_140434fde(plVar1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
        *(byte *)(plVar1 + 0xf) = *(byte *)(plVar1 + 0xf) | 2;
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar7);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    plVar6 = *(longlong **)(param_1 + 8);
  }
  FUN_140bef21e(plVar6,uVar4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_140bef926(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 140bef69e FUN_140bef69e body=48 status=ok
// SIG undefined FUN_140bef69e(void)

void FUN_140bef69e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 140bef6ce FUN_140bef6ce body=61 status=ok
// SIG undefined FUN_140bef6ce(void)

void FUN_140bef6ce(longlong param_1)

{
  longlong lVar1;
  
  FUN_140bef9ec(*(undefined8 *)(param_1 + 0x50),param_1 + 0x48);
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14480f766(lVar1 + 0xd8);
  }
  FUN_140bef70c(lVar1);
  return;
}



// FUNCTION 140bef70c FUN_140bef70c body=63 status=ok
// SIG undefined FUN_140bef70c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bef70c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong lStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  
  if ((longlong)*(int *)(param_1 + 0xe0) == 0) {
    if ((*(byte *)(param_1 + 0x108) & 1) != 0) {
      iVar2 = *(int *)(param_1 + 0x44);
      lStack_50 = 0x140bf07d6;
      FUN_140bf0483(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = 0;
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
        lStack_50 = 0x140bf0917;
        FUN_140d244fa(param_1 + 0x38,0);
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb8c958) {
        lStack_50 = 0x140bf08ce;
        FUN_144b3d300(&DAT_14cb8c958);
        if (DAT_14cb8c958 == -1) {
          DAT_14cb8c948 = 0;
          _DAT_14cb8c950 = 0;
          lStack_50 = 0x140bf08f1;
          atexit((_func_5014 *)&LAB_143e491a2);
          lStack_50 = 0x140bf08fd;
          _Init_thread_footer(&DAT_14cb8c958);
        }
      }
      bVar8 = (longlong)_DAT_14cb8c950 < 0;
      _DAT_14cb8c950 = _DAT_14cb8c950 & 0xffffffff00000000;
      if (bVar8) {
        lStack_50 = 0x140bf092a;
        FUN_140373bdc(&DAT_14cb8c948,0);
      }
      lStack_50 = 0x140bf0834;
      FUN_140bf093e(&DAT_14cb8c948,param_1 + 0x58);
      lVar6 = DAT_14cb8c948;
      lVar5 = (longlong)DAT_14cb8c950;
      if (lVar5 != 0) {
        lVar7 = 0;
        do {
          iVar2 = *(int *)(lVar6 + 4 + lVar7);
          if (((iVar2 != 0) && (uVar1 = *(uint *)(lVar6 + lVar7), -1 < (int)uVar1)) &&
             ((int)uVar1 < DAT_14c9647dc)) {
            plVar4 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == iVar2)) &&
               (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
              lStack_50 = 0x140bf08a0;
              FUN_140bf0996(param_1);
            }
          }
          lVar7 = lVar7 + 8;
        } while (lVar5 * 8 != lVar7);
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (*(int *)(param_1 + 100) < 0) {
        lStack_50 = 0x140bf0939;
        FUN_140373bdc(param_1 + 0x58,0);
      }
      *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) & 0xfe;
    }
    return;
  }
  lVar6 = 0;
  while ((*(int *)(*(longlong *)(param_1 + 0xd8) + 8 + lVar6) == 0 ||
         (*(longlong *)(*(longlong *)(param_1 + 0xd8) + lVar6) == 0))) {
    lVar6 = lVar6 + 0x10;
    if ((longlong)*(int *)(param_1 + 0xe0) * 0x10 == lVar6) {
      FUN_140bf07a4();
      return;
    }
  }
  uVar3 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(byte *)(param_1 + 0x108) & 1) == 0) &&
     ((((*(longlong **)(param_1 + 0x28) != (longlong *)0x0 && (*(int *)(param_1 + 0x24) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x24))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
      if (lVar6 != 0) {
        uStack_68 = FUN_140bfe17c(param_1 + 0x30,lVar6);
        lStack_60 = 0;
        uStack_58 = 0;
        lStack_50 = 0;
        uStack_48 = 0;
        lStack_40 = 0;
        uStack_38 = 0;
        lStack_30 = 0;
        lStack_70 = lVar6;
        FUN_140bfe920(&lStack_70);
        FUN_140d23f24(param_1,&lStack_70);
        *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 1;
        if (lStack_30 != 0) {
          FUN_1400020a8();
        }
        if (lStack_40 != 0) {
          FUN_1400020a8();
        }
        if (lStack_50 != 0) {
          FUN_1400020a8();
        }
        if (lStack_60 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((uVar3 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bef74c FUN_140bef74c body=46 status=ok
// SIG undefined FUN_140bef74c(void)

void FUN_140bef74c(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144904448(param_1 + 0x48);
  if (cVar1 == '\0') {
    return;
  }
  FUN_14072d42a(param_1 + 0x48,0);
  return;
}



// FUNCTION 140bef77a FUN_140bef77a body=104 status=ok
// SIG undefined FUN_140bef77a(void)

void FUN_140bef77a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x4c))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && ((longlong *)*plVar2 != (longlong *)0x0)))) {
      (**(code **)(*(longlong *)*plVar2 + 0xa68))();
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 140bef7e2 FUN_140bef7e2 body=322 status=ok
// SIG undefined FUN_140bef7e2(void)

void FUN_140bef7e2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((*(byte *)(param_1 + 0x108) & 1) == 0) &&
       (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) &&
       ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24) &&
        ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
      if (lVar2 != 0) {
        local_68 = FUN_140bfe17c(param_1 + 0x30,lVar2);
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        uStack_28 = 0;
        local_70 = lVar2;
        FUN_140bfe920(&local_70);
        FUN_140d23f24(param_1,&local_70);
        *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 1;
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if (local_60 != 0) {
          FUN_1400020a8();
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



// FUNCTION 140bef926 FUN_140bef926 body=48 status=ok
// SIG undefined FUN_140bef926(void)

void FUN_140bef926(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 140bef956 FUN_140bef956 body=75 status=ok
// SIG undefined FUN_140bef956(void)

void FUN_140bef956(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bef9a1 FUN_140bef9a1 body=75 status=ok
// SIG undefined FUN_140bef9a1(void)

void FUN_140bef9a1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bef9ec FUN_140bef9ec body=1890 status=ok
// SIG undefined FUN_140bef9ec(void)

ulonglong FUN_140bef9ec(longlong param_1,longlong *param_2)

{
  int *piVar1;
  void *_Dst;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  uint *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_2 + 8))(param_2,&local_58);
  iVar21 = *(int *)(param_1 + 0x70);
  lVar12 = (longlong)iVar21;
  uVar9 = 0;
  if (lVar12 != 0) {
    plVar6 = *(longlong **)(param_1 + 0x68);
    local_90 = plVar6 + 2;
    bVar23 = *plVar6 == local_58;
    iVar18 = 0;
    local_88 = param_2;
    do {
      lVar16 = (longlong)iVar18;
      iVar10 = iVar18 + 1;
      if (iVar18 + 1 < iVar21) {
        iVar10 = iVar21;
      }
      plVar15 = local_90 + lVar16 * 2;
      iVar19 = iVar18;
      lVar17 = lVar16;
      do {
        lVar17 = lVar17 + 1;
        iVar20 = iVar10;
        if (lVar12 <= lVar17) break;
        lVar5 = *plVar15;
        iVar19 = iVar19 + 1;
        plVar15 = plVar15 + 2;
        iVar20 = iVar19;
      } while (bVar23 == (lVar5 == local_58));
      iVar10 = iVar20 - iVar18;
      if (bVar23 == false) {
        iVar19 = (int)uVar9;
        if (iVar19 != iVar18) {
          memmove(plVar6 + (longlong)iVar19 * 2,plVar6 + lVar16 * 2,(longlong)iVar10 << 4);
        }
        uVar9 = (ulonglong)(uint)(iVar19 + iVar10);
      }
      else {
        FUN_140bf01e1(plVar6 + lVar16 * 2,iVar10);
      }
      plVar15 = local_88;
      bVar23 = (bool)(bVar23 ^ 1);
      iVar18 = iVar20;
    } while (lVar17 < lVar12);
    *(int *)(param_1 + 0x70) = (int)uVar9;
    if ((int)uVar9 < iVar21) {
      uVar3 = (**(code **)(*local_88 + 0x18))(local_88);
      FUN_140548388(param_1,&local_68,uVar3);
      plVar6 = plStack_60;
      bVar23 = local_68 != 0;
      bVar24 = local_68 == local_58;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar13 = plStack_60 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (bVar24 && bVar23) {
        plVar6 = &local_68;
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        uVar3 = (**(code **)(*plVar15 + 0x18))(plVar15);
        FUN_14054a0ae(param_1,uVar3,plVar6);
        *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 2;
      }
      if (((int)plVar15[3] != -1) && (*(int *)((longlong)plVar15 + 0x1c) != -1)) {
        iVar21 = *(int *)(param_1 + 0x50);
        if ((longlong)iVar21 != 0) {
          plVar13 = (longlong *)(param_1 + 0x48);
          lVar12 = 0;
          plVar6 = (longlong *)0x0;
          do {
            if (*(int *)(*(longlong *)(param_1 + 0x48) + 0xc + lVar12) == (int)plVar15[3]) {
              uVar8 = (uint)plVar6;
              if ((-1 < (int)uVar8) && ((int)uVar8 < iVar21)) {
                lVar16 = (ulonglong)(uVar8 & 0x7fffffff) * 0x40;
                piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 0x10 + lVar16);
                *piVar1 = *piVar1 + -1;
                lVar12 = *plVar13;
                local_90 = (longlong *)(lVar12 + lVar16);
                if (*(int *)(lVar12 + 0x10 + lVar16) < 1) {
                  if ((int)uVar8 < *(int *)(param_1 + 0x50)) {
                    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
                      puVar11 = *(uint **)(param_1 + 0x38);
                      local_70 = puVar11 + (longlong)*(int *)(param_1 + 0x40) * 6;
                      local_80 = plVar6;
                      local_78 = plVar13;
                      do {
                        uVar9 = (ulonglong)(int)puVar11[4];
                        if (0 < (longlong)uVar9) {
                          iVar21 = -puVar11[4];
                          lVar12 = uVar9 << 4;
                          do {
                            lVar17 = *(longlong *)(puVar11 + 2);
                            if (*(int *)(lVar17 + -0x10 + lVar12) ==
                                *(int *)((longlong)local_90 + 0xc)) {
                              if ((((puVar11[1] != 0) && (uVar8 = *puVar11, -1 < (int)uVar8)) &&
                                  ((int)uVar8 < DAT_14c9647dc)) &&
                                 (((puVar4 = (undefined8 *)
                                             ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                                   puVar4 != (undefined8 *)0x0 &&
                                   (*(uint *)(puVar4 + 2) == puVar11[1])) &&
                                  ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
                                cVar2 = (char)local_90[1];
                                if (cVar2 == '\x03') {
                                  if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
                                    plVar6 = (longlong *)*puVar4;
                                  }
                                  else {
                                    plVar6 = (longlong *)0x0;
                                  }
                                  lVar5 = plVar6[0xc6];
                                  if (lVar5 == 0) {
                                    if (*(code **)(*plVar6 + 0xa68) == (code *)&LAB_14470a070) {
                                      lVar5 = 0;
                                    }
                                    else {
                                      lVar5 = (**(code **)(*plVar6 + 0xa68))();
                                    }
                                  }
                                  if (*(longlong *)(lVar17 + -8 + lVar12) == lVar5) {
                                    if ((puVar11[1] == 0) || (uVar8 = *puVar11, (int)uVar8 < 0)) {
LAB_140bf00cc:
                                      uVar7 = 0;
                                    }
                                    else {
                                      uVar7 = 0;
                                      if ((int)uVar8 < DAT_14c9647dc) {
                                        puVar4 = (undefined8 *)
                                                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                                 *(longlong *)
                                                  (DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                                        if (((puVar4 == (undefined8 *)0x0) ||
                                            (*(uint *)(puVar4 + 2) != puVar11[1])) ||
                                           ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))
                                        goto LAB_140bf00cc;
                                        uVar7 = *puVar4;
                                      }
                                    }
                                    FUN_14054853a(uVar7,0);
                                  }
                                }
                                else if (cVar2 == '\x01') {
                                  if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
                                    plVar6 = (longlong *)*puVar4;
                                  }
                                  else {
                                    plVar6 = (longlong *)0x0;
                                  }
                                  lVar5 = (**(code **)(*plVar6 + 0x658))();
                                  if (*(longlong *)(lVar17 + -8 + lVar12) == lVar5) {
                                    if ((puVar11[1] == 0) || (uVar8 = *puVar11, (int)uVar8 < 0)) {
LAB_140bf00c5:
                                      plVar6 = (longlong *)0x0;
                                    }
                                    else {
                                      plVar6 = (longlong *)0x0;
                                      if ((int)uVar8 < DAT_14c9647dc) {
                                        puVar4 = (undefined8 *)
                                                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                                 *(longlong *)
                                                  (DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                                        if (((puVar4 == (undefined8 *)0x0) ||
                                            (*(uint *)(puVar4 + 2) != puVar11[1])) ||
                                           ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))
                                        goto LAB_140bf00c5;
                                        plVar6 = (longlong *)*puVar4;
                                      }
                                    }
                                    (**(code **)(*plVar6 + 0x660))(plVar6,0);
                                  }
                                }
                                else if (cVar2 == '\x02') {
                                  if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
                                    plVar6 = (longlong *)*puVar4;
                                  }
                                  else {
                                    plVar6 = (longlong *)0x0;
                                  }
                                  lVar5 = (**(code **)(*plVar6 + 0x648))();
                                  if (*(longlong *)(lVar17 + -8 + lVar12) == lVar5) {
                                    if ((puVar11[1] == 0) || (uVar8 = *puVar11, (int)uVar8 < 0)) {
LAB_140bf00da:
                                      plVar6 = (longlong *)0x0;
                                    }
                                    else {
                                      plVar6 = (longlong *)0x0;
                                      if ((int)uVar8 < DAT_14c9647dc) {
                                        puVar4 = (undefined8 *)
                                                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                                 *(longlong *)
                                                  (DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                                        if (((puVar4 == (undefined8 *)0x0) ||
                                            (*(uint *)(puVar4 + 2) != puVar11[1])) ||
                                           ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))
                                        goto LAB_140bf00da;
                                        plVar6 = (longlong *)*puVar4;
                                      }
                                    }
                                    (**(code **)(*plVar6 + 0x650))(plVar6,0);
                                  }
                                }
                              }
                              uVar8 = puVar11[4];
                              if (uVar9 != uVar8) {
                                memmove((void *)(*(longlong *)(puVar11 + 2) + lVar12 + -0x10),
                                        (void *)(*(longlong *)(puVar11 + 2) + lVar12),
                                        (longlong)(int)(uVar8 + iVar21) << 4);
                                uVar8 = puVar11[4];
                              }
                              puVar11[4] = uVar8 - 1;
                              FUN_140bf022c(puVar11 + 2);
                            }
                            iVar21 = iVar21 + 1;
                            lVar12 = lVar12 + -0x10;
                            bVar23 = 1 < uVar9;
                            uVar9 = uVar9 - 1;
                          } while (bVar23);
                        }
                        puVar11 = puVar11 + 6;
                      } while (puVar11 != local_70);
                      lVar12 = *local_78;
                      plVar6 = local_80;
                      plVar13 = local_78;
                      plVar15 = local_88;
                    }
                    _Dst = (void *)(lVar12 + lVar16);
                    if (*(longlong *)(lVar12 + 0x28 + lVar16) != 0) {
                      FUN_1400020a8();
                    }
                    if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
                      FUN_1400020a8();
                    }
                    iVar21 = *(int *)(param_1 + 0x50);
                    if (iVar21 + -1 != (int)plVar6) {
                      memmove(_Dst,(void *)((longlong)_Dst + 0x40),
                              (longlong)((iVar21 + -1) - (int)plVar6) << 6);
                      iVar21 = *(int *)(param_1 + 0x50);
                    }
                    *(int *)(param_1 + 0x50) = iVar21 + -1;
                    FUN_140bf02ba(plVar13);
                  }
                }
                else {
                  iVar21 = (int)local_90[4];
                  lVar12 = (longlong)iVar21;
                  if (lVar12 != 0) {
                    plVar6 = (longlong *)local_90[3];
                    iVar10 = 0;
                    bVar23 = (int)*plVar6 == *(int *)((longlong)plVar15 + 0x1c);
                    iVar18 = 0;
                    do {
                      lVar17 = (longlong)iVar18;
                      iVar20 = iVar18;
                      lVar16 = lVar17;
                      iVar19 = iVar18 + 1;
                      if (iVar18 + 1 < iVar21) {
                        iVar19 = iVar21;
                      }
                      do {
                        lVar16 = lVar16 + 1;
                        iVar22 = iVar19;
                        if (lVar12 <= lVar16) break;
                        iVar22 = iVar20 + 1;
                        iVar20 = iVar22;
                      } while (bVar23 == (*(int *)((longlong)plVar6 + lVar16 * 4) ==
                                         *(int *)((longlong)local_88 + 0x1c)));
                      if (bVar23 == false) {
                        if (iVar10 != iVar18) {
                          memmove((int *)((longlong)plVar6 + (longlong)iVar10 * 4),
                                  (int *)((longlong)plVar6 + lVar17 * 4),
                                  (longlong)(iVar22 - iVar18) << 2);
                        }
                        iVar10 = iVar10 + (iVar22 - iVar18);
                      }
                      bVar23 = (bool)(bVar23 ^ 1);
                      iVar18 = iVar22;
                    } while (lVar16 < lVar12);
                    *(int *)(local_90 + 4) = iVar10;
                    plVar15 = local_88;
                  }
                }
              }
              break;
            }
            plVar6 = (longlong *)((longlong)plVar6 + 1);
            lVar12 = lVar12 + 0x40;
          } while ((longlong)iVar21 << 6 != lVar12);
        }
        plVar15[3] = -1;
      }
      uVar14 = (ulonglong)*(int *)(param_1 + 0xd0);
      uVar9 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      if (0 < (longlong)uVar14) {
        plVar6 = (longlong *)(param_1 + 200);
        lVar12 = uVar14 * 0x18 + -0x10;
        do {
          if ((*(longlong *)(*plVar6 + lVar12) != 0) &&
             (*(longlong *)(*plVar6 + lVar12) == local_58)) {
            FUN_140549f0c(plVar6,(int)uVar14 + -1);
            FUN_14054a010(plVar6);
          }
          lVar12 = lVar12 + -0x18;
          bVar23 = 1 < uVar14;
          uVar14 = uVar14 - 1;
        } while (bVar23);
      }
    }
    else {
      uVar9 = 0;
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 140bf0150 FUN_140bf0150 body=145 status=ok
// SIG undefined FUN_140bf0150(void)

longlong * FUN_140bf0150(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + -0x38);
  if (plVar3 == (longlong *)0x0) {
LAB_140bf01a7:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140bf01a7;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + -0x40);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar7 = lVar4 + 0x48;
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    *param_2 = lVar7;
    param_2[1] = (longlong)plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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



// FUNCTION 140bf01e1 FUN_140bf01e1 body=75 status=ok
// SIG undefined FUN_140bf01e1(void)

void FUN_140bf01e1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bf022c FUN_140bf022c body=142 status=ok
// SIG undefined FUN_140bf022c(void)

void FUN_140bf022c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 140bf02ba FUN_140bf02ba body=142 status=ok
// SIG undefined FUN_140bf02ba(void)

void FUN_140bf02ba(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 6,8);
      uVar3 = uVar3 >> 6;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x40,8);
    }
  }
  return;
}



// FUNCTION 140bf0348 FUN_140bf0348 body=315 status=ok
// SIG undefined FUN_140bf0348(void)

void FUN_140bf0348(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b430d40;
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140bf052a(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140bf04b4(param_1 + 0xf);
  FUN_140bf01e1(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140bf04eb(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140bf0483(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140bf047f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140bf0483 FUN_140bf0483 body=49 status=ok
// SIG undefined FUN_140bf0483(void)

void FUN_140bf0483(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bf04b4 FUN_140bf04b4 body=55 status=ok
// SIG undefined FUN_140bf04b4(void)

void FUN_140bf04b4(longlong *param_1)

{
  FUN_140bf0578(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bf04eb FUN_140bf04eb body=63 status=ok
// SIG undefined FUN_140bf04eb(void)

void FUN_140bf04eb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bf052a FUN_140bf052a body=77 status=ok
// SIG undefined FUN_140bf052a(void)

void FUN_140bf052a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bf0578 FUN_140bf0578 body=554 status=ok
// SIG undefined FUN_140bf0578(void)

void FUN_140bf0578(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar7 = 0;
    iVar13 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar7 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_140bf06c1;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar4 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar7 < iVar5) {
    uVar16 = 0xffffffff;
    do {
      plVar6 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar7 * 0x20);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = (int)param_1[5];
      iVar7 = (int)uVar17;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar11[lVar14] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar11[lVar14 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar14 == lVar12) goto LAB_140bf06c1;
        }
        uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_140bf06c1:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar8 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar8 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar8;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140bf07a4 FUN_140bf07a4 body=410 status=ok
// SIG undefined FUN_140bf07a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bf07a4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((*(byte *)(param_1 + 0x108) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    FUN_140bf0483(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
      FUN_140d244fa(param_1 + 0x38,0);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb8c958) {
      FUN_144b3d300(&DAT_14cb8c958);
      if (DAT_14cb8c958 == -1) {
        DAT_14cb8c948 = 0;
        _DAT_14cb8c950 = 0;
        atexit((_func_5014 *)&LAB_143e491a2);
        _Init_thread_footer(&DAT_14cb8c958);
      }
    }
    bVar7 = (longlong)_DAT_14cb8c950 < 0;
    _DAT_14cb8c950 = _DAT_14cb8c950 & 0xffffffff00000000;
    if (bVar7) {
      FUN_140373bdc(&DAT_14cb8c948,0);
    }
    FUN_140bf093e(&DAT_14cb8c948,param_1 + 0x58);
    lVar3 = DAT_14cb8c948;
    lVar5 = (longlong)DAT_14cb8c950;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        iVar1 = *(int *)(lVar3 + 4 + lVar6);
        if (((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar6), -1 < (int)uVar2)) &&
           ((int)uVar2 < DAT_14c9647dc)) {
          plVar4 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == iVar1)) &&
             (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
            FUN_140bf0996(param_1);
          }
        }
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) < 0) {
      FUN_140373bdc(param_1 + 0x58,0);
    }
    *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) & 0xfe;
  }
  return;
}



// FUNCTION 140bf093e FUN_140bf093e body=88 status=ok
// SIG undefined FUN_140bf093e(void)

undefined8 * FUN_140bf093e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140bf0c0e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140bf0996 FUN_140bf0996 body=334 status=ok
// SIG undefined FUN_140bf0996(void)

void FUN_140bf0996(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x58);
    lVar5 = (longlong)*(int *)(param_1 + 0x60) << 3;
    do {
      cVar1 = FUN_14069eaf4(lVar4,param_2);
      if (cVar1 != '\0') {
        local_44 = 0;
        if (param_2 == 0) {
          local_48 = 0;
          iVar2 = 0;
        }
        else {
          local_48 = *(uint *)(param_2 + 0xc);
          if ((int)local_48 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
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
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar3);
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
        local_40 = &local_48;
        local_44 = iVar2;
        FUN_140bf0ae6(param_1 + 0x58);
        FUN_140457ffc(param_2 + 0x300,param_1);
        FUN_140457ffc(param_2 + 0x318,param_1);
        break;
      }
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bf0ae6 FUN_140bf0ae6 body=296 status=ok
// SIG undefined FUN_140bf0ae6(void)

int FUN_140bf0ae6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar4 = FUN_140383372(lVar1,*param_2);
    iVar10 = 0;
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar2 = iVar11 + 1;
      if (iVar11 + 1 < iVar7) {
        iVar2 = iVar7;
      }
      lVar13 = lVar1 + 8 + lVar9 * 8;
      lVar6 = lVar9;
      iVar12 = iVar11;
      do {
        lVar6 = lVar6 + 1;
        iVar3 = iVar2;
        if (lVar8 <= lVar6) break;
        bVar5 = FUN_140383372(lVar13,*param_2);
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 8;
        iVar3 = iVar12;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar10 != iVar11) {
          memmove((void *)(lVar1 + (longlong)iVar10 * 8),(void *)(lVar1 + lVar9 * 8),
                  (longlong)(iVar3 - iVar11) << 3);
        }
        iVar10 = iVar10 + (iVar3 - iVar11);
      }
      iVar11 = iVar3;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar8);
    *(int *)(param_1 + 1) = iVar10;
    iVar7 = iVar7 - iVar10;
  }
  return iVar7;
}



// FUNCTION 140bf0c0e FUN_140bf0c0e body=319 status=ok
// SIG undefined FUN_140bf0c0e(void)

void FUN_140bf0c0e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bf0c7c;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140bf0c7c:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140bf0d4e FUN_140bf0d4e body=135 status=ok
// SIG undefined FUN_140bf0d4e(void)

void FUN_140bf0d4e(longlong param_1,undefined2 param_2,undefined1 param_3)

{
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined1 local_48 [2];
  undefined1 local_46;
  undefined8 local_44;
  undefined8 local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,local_48);
  local_44 = 0;
  local_38 = 0;
  local_50 = &PTR_FUN_149eda6b0;
  local_46 = param_3;
  local_30 = param_2;
  FUN_140bf0dd6(param_1 + -0x148,&local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf0dd6 FUN_140bf0dd6 body=1374 status=ok
// SIG undefined FUN_140bf0dd6(void)

ulonglong FUN_140bf0dd6(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined4 local_350;
  longlong local_340;
  longlong *local_338;
  longlong local_330;
  longlong *local_328;
  undefined **local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined2 local_300;
  char local_2f8 [8];
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 local_2d8;
  undefined1 local_2d0 [136];
  undefined4 local_248;
  undefined1 local_244;
  undefined1 local_240 [8];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_220;
  undefined1 local_218 [136];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 local_168;
  undefined1 local_160 [136];
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  *(int *)(param_1 + 0x638) = *(int *)(param_1 + 0x638) + 1;
  local_240[0] = 0;
  local_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_340 = param_1;
  memset(local_218,0,0x88);
  local_190 = 0x20702;
  iVar3 = *(int *)(param_2 + 0xc);
  if (((longlong)iVar3 < 0) || (*(int *)(local_340 + 0x318) <= iVar3)) {
LAB_140bf12fa:
    FUN_141370954(local_340,&local_330,iVar3,0);
  }
  else {
    lVar5 = (longlong)iVar3 * 0x10;
    lVar10 = *(longlong *)(*(longlong *)(local_340 + 0x310) + lVar5);
    plVar4 = *(longlong **)(*(longlong *)(local_340 + 0x310) + 8 + lVar5);
    if (plVar4 == (longlong *)0x0) {
      if (lVar10 == 0) goto LAB_140bf12fa;
      local_328 = (longlong *)0x0;
      local_330 = lVar10;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar10 != 0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_330 = lVar10;
        local_328 = plVar4;
      }
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (lVar10 == 0) goto LAB_140bf12fa;
    }
  }
  lVar5 = local_330;
  lVar10 = *(longlong *)(local_330 + 0x90);
  if (lVar10 != 0) goto LAB_140bf0fa5;
  local_358 = CONCAT71(local_358._1_7_,DAT_14c96b238);
  FUN_1402c4e4c(local_330 + 0x70,&local_188,0,0);
  plVar4 = uStack_180;
  if (uStack_180 == (longlong *)0x0) {
    *(ulonglong *)(lVar5 + 0x90) = local_188;
    plVar8 = *(longlong **)(lVar5 + 0x98);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(lVar5 + 0x98) = 0;
LAB_140bf0f3c:
      LOCK();
      plVar4 = plVar8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000140bf0f69:
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(uStack_180 + 1) = (int)uStack_180[1] + 1;
    UNLOCK();
    *(ulonglong *)(lVar5 + 0x90) = local_188;
    plVar8 = *(longlong **)(lVar5 + 0x98);
    if (uStack_180 == plVar8) {
      LOCK();
      plVar8 = uStack_180 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*uStack_180)(uStack_180);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar8 = plVar4;
        goto joined_r0x000140bf0f69;
      }
    }
    else {
      *(longlong **)(lVar5 + 0x98) = uStack_180;
      if (plVar8 != (longlong *)0x0) goto LAB_140bf0f3c;
    }
  }
  plVar4 = uStack_180;
  if (uStack_180 != (longlong *)0x0) {
    LOCK();
    plVar8 = uStack_180 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*uStack_180)(uStack_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  lVar10 = *(longlong *)(lVar5 + 0x90);
LAB_140bf0fa5:
  local_338 = *(longlong **)(lVar5 + 0x98);
  if (local_338 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_338 + 1) = (int)local_338[1] + 1;
    UNLOCK();
  }
  local_318 = *(undefined8 *)(param_2 + 8);
  uStack_310 = *(undefined8 *)(param_2 + 0x10);
  local_300 = *(undefined2 *)(param_2 + 0x20);
  uVar9 = (ulonglong)*(int *)(lVar10 + 0x130);
  local_320 = &PTR_FUN_149eda6b0;
  local_2f8[0] = '\0';
  local_2d8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  memset(local_2d0,0,0x88);
  local_248 = 0x20702;
  local_244 = 0;
  local_308 = lVar10;
  if (0 < (longlong)uVar9) {
    lVar5 = uVar9 * 0x48 + -8;
    lVar7 = uVar9 * 0x14 + -4;
    do {
      local_70 = *(char *)(*(longlong *)(lVar10 + 0x150) + lVar7);
      if (local_70 == '\x01') {
        lVar6 = *(longlong *)(lVar10 + 0x150) + lVar7;
        local_188 = *(ulonglong *)(lVar6 + -0x10);
        uStack_180 = *(longlong **)(lVar6 + -8);
      }
      lVar6 = *(longlong *)(lVar10 + 0x128);
      if (*(longlong *)(lVar10 + 0x128) == 0) {
        lVar6 = lVar10 + 8;
      }
      local_98 = *(undefined8 *)(lVar6 + -0x10 + lVar5);
      puVar2 = (undefined4 *)(lVar6 + -0x40 + lVar5);
      local_c8 = *puVar2;
      uStack_c4 = puVar2[1];
      uStack_c0 = puVar2[2];
      uStack_bc = puVar2[3];
      puVar2 = (undefined4 *)(lVar6 + -0x30 + lVar5);
      local_b8 = *puVar2;
      uStack_b4 = puVar2[1];
      uStack_b0 = puVar2[2];
      uStack_ac = puVar2[3];
      puVar2 = (undefined4 *)(lVar6 + -0x20 + lVar5);
      local_a8 = *puVar2;
      uStack_a4 = puVar2[1];
      uStack_a0 = puVar2[2];
      uStack_9c = puVar2[3];
      local_90 = *(longlong **)(lVar6 + -8 + lVar5);
      local_88 = *(longlong **)(lVar6 + lVar5);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      if (local_70 != '\0') {
        local_80 = (undefined4)local_188;
        uStack_7c = local_188._4_4_;
        uStack_78 = (undefined4)uStack_180;
        uStack_74 = uStack_180._4_4_;
      }
      if (*(char *)((longlong)local_90 + 0x3a) == '\x01') {
        (**(code **)(*local_90 + 0x30))(local_90,&local_188,&local_c8,&local_320);
      }
      else {
        local_188 = local_188 & 0xffffffffffffff00;
        local_168 = 0;
        uStack_180 = (longlong *)0x0;
        uStack_178 = 0;
        memset(local_160,0,0x88);
        local_d8 = 0x20702;
        local_d4 = 0;
      }
      FUN_1402c173a(&local_188,&local_90);
      FUN_1402c17c2(local_2f8,&local_188);
      FUN_14493db24(&local_188);
      local_350 = local_318._4_4_;
      local_358 = 0;
      FUN_1402c1d72(local_340,lVar10,local_2f8,lVar10);
      plVar4 = local_88;
      if (local_70 == '\x01') {
        local_70 = '\0';
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_88 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (uVar9 < 2) break;
      lVar5 = lVar5 + -0x48;
      lVar7 = lVar7 + -0x14;
      uVar9 = uVar9 - 1;
    } while (local_2f8[0] == '\0');
  }
  FUN_1403d4924(local_240,local_2f8);
  FUN_14493db24(local_2f8);
  plVar4 = local_338;
  uVar9 = CONCAT71((int7)((ulonglong)local_2f8 >> 8),local_240[0]);
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_338 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_328;
  if (local_328 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_328 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_328)(local_328);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_14493db24(local_240);
  *(int *)(local_340 + 0x638) = *(int *)(local_340 + 0x638) + -1;
  if ((local_60 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf1336 FUN_140bf1336 body=38 status=ok
// SIG undefined FUN_140bf1336(void)

undefined8 FUN_140bf1336(undefined8 param_1,int param_2)

{
  FUN_140bf135c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bf135c FUN_140bf135c body=75 status=ok
// SIG undefined FUN_140bf135c(void)

void FUN_140bf135c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f56360;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bf13a7 FUN_140bf13a7 body=2777 status=ok
// SIG undefined FUN_140bf13a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bf13a7(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_3b8 [32];
  ulonglong local_398;
  int local_38c;
  ulonglong *local_388;
  longlong local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  ulonglong local_368;
  undefined8 uStack_360;
  undefined8 local_350;
  ulonglong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad22c8);
  lVar6 = (**(code **)(*param_1 + 0x3d0))(param_1);
  if ((lVar6 != 0) && (DAT_14cad2280 != DAT_14cad22ac)) {
    local_368 = 0;
    uStack_360 = 0;
    uVar13 = *(uint *)(lVar6 + 0xc);
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar26 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar26 = 0;
    }
    uVar5 = *(uint *)(lVar26 + 0x10);
    if (*(uint *)(lVar26 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar29 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar29) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar5 = *(uint *)(lVar26 + 0x10);
      bVar29 = uVar5 == 0;
      if (bVar29) {
        *(uint *)(lVar26 + 0x10) = uVar4;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar29) {
        uVar5 = uVar4;
      }
    }
    if (DAT_14cad22c0 != 0) {
      puVar9 = &DAT_14cad22b0;
      if (DAT_14cad22b8 != (undefined *)0x0) {
        puVar9 = DAT_14cad22b8;
      }
      iVar17 = *(int *)(puVar9 + (longlong)(int)(DAT_14cad22c0 - 1U & (uVar13 ^ uVar5)) * 4);
      while (iVar15 = iVar17, iVar15 != -1) {
        iVar17 = *(int *)(DAT_14cad2278 + 0x10 + (longlong)iVar15 * 0x18);
        local_348 = *(ulonglong *)(DAT_14cad2278 + (longlong)iVar15 * 0x18);
        local_350 = CONCAT44(uVar5,uVar13);
        cVar3 = FUN_140bf1e82(&local_348);
        if (cVar3 != '\0') {
          do {
            lVar26 = DAT_14cad2278;
            lVar27 = (longlong)(int)uStack_360;
            uVar4 = (int)uStack_360 + 1;
            uStack_360 = CONCAT44(uStack_360._4_4_,uVar4);
            if (uStack_360._4_4_ < uVar4) {
              FUN_140bf20ee(&local_368);
            }
            *(undefined8 *)(local_368 + lVar27 * 8) =
                 *(undefined8 *)(lVar26 + (longlong)iVar15 * 0x18 + 8);
            do {
              iVar15 = iVar17;
              if (iVar15 == -1) goto LAB_140bf154d;
              iVar17 = *(int *)(DAT_14cad2278 + 0x10 + (longlong)iVar15 * 0x18);
              local_348 = *(ulonglong *)(DAT_14cad2278 + (longlong)iVar15 * 0x18);
              local_350 = CONCAT44(uVar5,uVar13);
              cVar3 = FUN_140bf1e82();
            } while (cVar3 == '\0');
          } while( true );
        }
      }
    }
LAB_140bf154d:
    if ((longlong)(int)param_2[1] == 0) {
      local_380 = 0;
    }
    else {
      lVar26 = 0;
      do {
        local_380 = *(longlong *)(*param_2 + lVar26);
        if (*(char *)(local_380 + 0xd2) == '\x01') break;
        lVar26 = lVar26 + 8;
        local_380 = 0;
      } while ((longlong)(int)param_2[1] * 8 != lVar26);
    }
    if (0 < (int)uStack_360) {
      uVar13 = 0;
      do {
        uVar12 = (ulonglong)uVar13;
        iVar17 = *(int *)(local_368 + 4 + uVar12 * 8);
        iVar15 = 1;
        if ((((iVar17 != 0) && (uVar5 = *(uint *)(local_368 + uVar12 * 8), -1 < (int)uVar5)) &&
            ((int)uVar5 < DAT_14c9647dc)) &&
           (((plVar11 = (longlong *)
                        ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
             plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar17)) &&
            (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
             (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar26 = *plVar11, lVar26 != 0))))))))
        {
          lVar27 = FUN_140bf2008();
          if ((*(int *)(lVar27 + 0x38) <= *(int *)(*(longlong *)(lVar26 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar27 + 0x38) * 8) == lVar27 + 0x30)) {
            bVar29 = true;
            if ((*(byte *)(lVar26 + 0xd54) & 0x1c) == 0) {
              if ((*(char *)(lVar26 + 0xd50) != '\x01') || ((*(byte *)(lVar26 + 0x2a9) & 0xfc) != 4)
                 ) goto LAB_140bf162e;
              if ((*(longlong *)(lVar26 + 0xd60) == 0) && (*(longlong *)(lVar26 + 0xd68) == 0)) {
                bVar29 = *(longlong *)(lVar26 + 0xd70) != 0;
              }
            }
            if ((local_380 == 0) && (bVar29)) {
              iVar17 = ~uVar13 + (int)uStack_360;
              if (iVar17 != 0) {
                iVar15 = 1;
                if (iVar17 < 1) {
                  iVar15 = iVar17;
                }
                memmove((void *)(local_368 + uVar12 * 8),
                        (void *)(local_368 + (longlong)((int)uStack_360 - iVar15) * 8),
                        (longlong)iVar15 << 3);
              }
              uStack_360 = CONCAT44(uStack_360._4_4_,(int)uStack_360 + -1);
              FUN_147a1430c();
              iVar15 = 0;
            }
          }
        }
LAB_140bf162e:
        uVar12 = local_368;
        uVar13 = uVar13 + iVar15;
        iVar17 = (int)uStack_360;
        uVar20 = uStack_360 & 0xffffffff;
      } while ((int)uVar13 < (int)uStack_360);
      if (1 < (int)uStack_360) {
        memset(local_338,0,0x2f0);
        local_348 = uVar12;
        local_340 = uVar12 + uVar20 * 8 + -8;
        fVar30 = logf((float)iVar17);
        local_338[0] = (undefined4)(longlong)(fVar30 + fVar30);
        local_388 = &local_348;
        do {
          puVar14 = (undefined8 *)*local_388;
          puVar7 = (undefined8 *)local_388[1];
          local_38c = (int)local_388[2];
          iVar17 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar14) >> 3);
          local_398 = (ulonglong)(iVar17 + 1);
          puVar19 = puVar14;
          puVar21 = puVar7;
          if (local_38c != 0) {
LAB_140bf1a38:
            local_370 = puVar21;
            local_378 = puVar19;
            puVar19 = puVar14;
            if (8 < (int)local_398) {
              uVar1 = puVar19[local_398 >> 1];
              puVar19[local_398 >> 1] = *puVar19;
              *puVar19 = uVar1;
              puVar28 = puVar7 + 1;
              puVar14 = puVar19;
              do {
                puVar21 = puVar14 + 1;
                puVar2 = puVar14 + 1;
                do {
                  puVar14 = puVar2;
                  puVar10 = puVar21;
                  if (puVar7 < puVar14) break;
                  cVar3 = FUN_143496a2a(puVar19,puVar14);
                  puVar21 = puVar10 + 1;
                  puVar2 = puVar14 + 1;
                } while (cVar3 == '\0');
                puVar2 = puVar28 + -2;
                do {
                  puVar16 = puVar28;
                  puVar21 = puVar2;
                  puVar28 = puVar16 + -1;
                  if (puVar28 <= puVar19) break;
                  cVar3 = FUN_143496a2a(puVar28,puVar19);
                  puVar2 = puVar21 + -1;
                } while (cVar3 == '\0');
                if (puVar28 < puVar14) goto LAB_140bf1acc;
                uVar1 = *puVar14;
                *puVar14 = *puVar28;
                *puVar28 = uVar1;
              } while( true );
            }
            for (; puVar21 = puVar19, puVar14 = puVar19, puVar19 < puVar7; puVar7 = puVar7 + -1) {
              while (puVar28 = puVar21, puVar14 = puVar14 + 1, puVar14 <= puVar7) {
                cVar3 = FUN_143496a2a(puVar28,puVar14);
                puVar21 = puVar14;
                if (cVar3 == '\0') {
                  puVar21 = puVar28;
                }
              }
              uVar1 = *puVar28;
              *puVar28 = *puVar7;
              *puVar7 = uVar1;
            }
            goto LAB_140bf1d43;
          }
LAB_140bf1b8b:
          if ((int)local_398 != 0) {
            iVar17 = (iVar17 - (iVar17 + -1 >> 0x1f)) + -1 >> 1;
            do {
              iVar15 = iVar17 * 2 + 1;
              iVar24 = iVar17;
              if (iVar15 < (int)local_398) {
                do {
                  iVar22 = iVar24 * 2 + 2;
                  iVar23 = iVar15;
                  if ((iVar22 < (int)local_398) &&
                     (cVar3 = FUN_143496a2a(puVar14 + iVar22,puVar14 + iVar15), cVar3 == '\0')) {
                    iVar23 = iVar22;
                  }
                  puVar7 = puVar14 + iVar24;
                  puVar19 = puVar14 + iVar23;
                  cVar3 = FUN_143496a2a(puVar7,puVar19);
                  if (cVar3 == '\0') break;
                  uVar1 = *puVar7;
                  *puVar7 = *puVar19;
                  *puVar19 = uVar1;
                  iVar15 = iVar23 * 2 + 1;
                  iVar24 = iVar23;
                } while (iVar15 < (int)local_398);
              }
              bVar29 = iVar17 != 0;
              iVar17 = iVar17 + -1;
            } while (bVar29);
            if (1 < (int)local_398) {
              uVar12 = local_398 & 0xffffffff;
              uVar1 = *puVar14;
              *puVar14 = puVar14[uVar12 - 1];
              puVar14[uVar12 - 1] = uVar1;
              if ((int)local_398 != 2) {
                do {
                  uVar20 = uVar12 - 1;
                  iVar15 = 0;
                  iVar24 = 1;
                  iVar17 = 0;
                  do {
                    iVar15 = iVar15 + 2;
                    iVar23 = iVar24;
                    if (((longlong)iVar15 < (longlong)uVar20) &&
                       (cVar3 = FUN_143496a2a(puVar14 + iVar15,puVar14 + iVar24), cVar3 == '\0')) {
                      iVar23 = iVar15;
                    }
                    puVar7 = puVar14 + iVar17;
                    puVar19 = puVar14 + iVar23;
                    cVar3 = FUN_143496a2a(puVar7,puVar19);
                    if (cVar3 == '\0') break;
                    uVar1 = *puVar7;
                    *puVar7 = *puVar19;
                    *puVar19 = uVar1;
                    iVar15 = iVar23 * 2;
                    iVar24 = iVar23 * 2 + 1;
                    iVar17 = iVar23;
                  } while ((longlong)iVar24 < (longlong)uVar20);
                  uVar1 = *puVar14;
                  *puVar14 = puVar14[uVar12 - 2];
                  puVar14[uVar12 - 2] = uVar1;
                  uVar12 = uVar20;
                } while (2 < uVar20);
              }
            }
          }
LAB_140bf1d43:
          local_388 = local_388 + -3;
        } while (&local_348 <= local_388);
      }
    }
    if ((int)uStack_360 != 0) {
      lVar26 = (longlong)(int)uStack_360;
      lVar27 = 0;
      uVar12 = local_368;
      do {
        uVar20 = *(ulonglong *)(uVar12 + lVar27);
        if (((uVar20 >> 0x20 != 0) && (uVar13 = (uint)uVar20, -1 < (int)uVar13)) &&
           ((int)uVar13 < DAT_14c9647dc)) {
          uVar5 = uVar13 & 0xffff;
          uVar18 = (ulonglong)((uint)(uVar20 >> 0x10) & 0x7fff);
          puVar7 = (undefined8 *)
                   ((ulonglong)(uVar5 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar18 * 8));
          if (((puVar7 != (undefined8 *)0x0) &&
              (iVar17 = (int)(uVar20 >> 0x20), *(int *)(puVar7 + 2) == iVar17)) &&
             ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
              plVar11 = (longlong *)*puVar7;
            }
            else {
              plVar11 = (longlong *)0x0;
            }
            local_398 = uVar12;
            cVar3 = (**(code **)(*plVar11 + 0x5e0))();
            iVar15 = DAT_14c9647dc;
            if ((int)uVar13 < DAT_14c9647dc) {
              puVar7 = (undefined8 *)
                       ((ulonglong)(uVar5 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar18 * 8));
              if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != iVar17)) ||
                 ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) {
                plVar11 = (longlong *)0x0;
              }
              else {
                plVar11 = (longlong *)*puVar7;
              }
              if (cVar3 == '\0') {
LAB_140bf1e6b:
                (**(code **)(*plVar11 + 0x5f0))(plVar11,param_1);
                uVar12 = local_398;
                goto LAB_140bf17d6;
              }
              plVar11[0x1b3] = local_380;
              if ((((iVar15 <= (int)uVar13) ||
                   (puVar7 = (undefined8 *)
                             ((ulonglong)(uVar5 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar18 * 8))
                   , puVar7 == (undefined8 *)0x0)) || (*(int *)(puVar7 + 2) != iVar17)) ||
                 ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_140bf1d7e;
              plVar11 = (longlong *)*puVar7;
            }
            else {
              if (cVar3 == '\0') {
                plVar11 = (longlong *)0x0;
                goto LAB_140bf1e6b;
              }
              _DAT_00000d98 = local_380;
LAB_140bf1d7e:
              plVar11 = (longlong *)0x0;
            }
            (**(code **)(*plVar11 + 0x5f0))(plVar11,param_1);
            if ((int)uVar13 < DAT_14c9647dc) {
              plVar11 = (longlong *)
                        ((ulonglong)(uVar5 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar18 * 8));
              if (((plVar11 == (longlong *)0x0) || ((int)plVar11[2] != iVar17)) ||
                 ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) {
                lVar8 = 0;
              }
              else {
                lVar8 = *plVar11;
              }
            }
            else {
              lVar8 = 0;
            }
            *(undefined8 *)(lVar8 + 0xd98) = 0;
            uVar12 = local_398;
          }
        }
LAB_140bf17d6:
        lVar27 = lVar27 + 8;
      } while (lVar26 * 8 != lVar27);
    }
    uVar13 = *(uint *)(lVar6 + 0xc);
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar5 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar29 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar29) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar5 = *(uint *)(lVar6 + 0x10);
      bVar29 = uVar5 == 0;
      if (bVar29) {
        *(uint *)(lVar6 + 0x10) = uVar4;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar29) {
        uVar5 = uVar4;
      }
    }
    if (DAT_14cad2280 != DAT_14cad22ac) {
      puVar9 = &DAT_14cad22b0;
      if (DAT_14cad22b8 != (undefined *)0x0) {
        puVar9 = DAT_14cad22b8;
      }
      uVar12 = (longlong)(int)(uVar5 ^ uVar13) & (longlong)DAT_14cad22c0 - 1U;
      iVar17 = *(int *)(puVar9 + uVar12 * 4);
      if (iVar17 != -1) {
        piVar25 = (int *)(puVar9 + uVar12 * 4);
        do {
          lVar6 = DAT_14cad2278;
          local_348 = *(ulonglong *)(DAT_14cad2278 + (longlong)iVar17 * 0x18);
          local_350 = CONCAT44(uVar5,uVar13);
          cVar3 = FUN_140bf1e82(&local_348,&local_350);
          if (cVar3 == '\0') {
            piVar25 = (int *)(lVar6 + (longlong)iVar17 * 0x18 + 0x10);
          }
          else {
            FUN_140bf1f26(*piVar25);
          }
          iVar17 = *piVar25;
        } while (iVar17 != -1);
      }
    }
    if (local_368 != 0) {
      FUN_1400020a8();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad22c8);
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140bf1acc:
  uVar1 = *puVar19;
  *puVar19 = *puVar28;
  *puVar28 = uVar1;
  local_38c = local_38c + -1;
  puVar16 = puVar16 + -2;
  if ((longlong)puVar21 - (longlong)local_378 < (longlong)local_370 - (longlong)puVar10) {
    if (puVar14 < puVar7) {
      *local_388 = (ulonglong)puVar14;
      local_388[1] = (ulonglong)puVar7;
      *(int *)(local_388 + 2) = local_38c;
      local_388 = local_388 + 3;
    }
    puVar14 = puVar19;
    if (puVar28 <= puVar19 + 1) goto LAB_140bf1d43;
  }
  else {
    if (puVar19 + 1 < puVar28) {
      *local_388 = (ulonglong)puVar19;
      local_388[1] = (ulonglong)puVar16;
      *(int *)(local_388 + 2) = local_38c;
      local_388 = local_388 + 3;
    }
    puVar16 = puVar7;
    puVar19 = puVar10;
    puVar21 = puVar7;
    if (puVar7 <= puVar14) goto LAB_140bf1d43;
  }
  iVar17 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar19) >> 3);
  local_398 = (ulonglong)(iVar17 + 1);
  puVar7 = puVar16;
  local_378 = puVar19;
  local_370 = puVar21;
  if (local_38c == 0) goto LAB_140bf1b8b;
  goto LAB_140bf1a38;
}



// FUNCTION 140bf1e82 FUN_140bf1e82 body=164 status=ok
// SIG undefined FUN_140bf1e82(void)

bool FUN_140bf1e82(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  bVar5 = true;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      if ((param_2[1] != 0) &&
         (((-1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 140bf1f26 FUN_140bf1f26 body=225 status=ok
// SIG undefined FUN_140bf1f26(void)

void FUN_140bf1f26(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  
  puVar4 = &DAT_14cad22b0;
  if (DAT_14cad22b8 != (undefined *)0x0) {
    puVar4 = DAT_14cad22b8;
  }
  lVar1 = DAT_14cad2278 + (longlong)param_1 * 0x18;
  lVar7 = (longlong)*(int *)(lVar1 + 0x14);
  iVar5 = *(int *)(puVar4 + lVar7 * 4);
  if (iVar5 == param_1) {
    piVar6 = (int *)(puVar4 + lVar7 * 4);
  }
  else {
    do {
      piVar6 = (int *)(DAT_14cad2278 + (longlong)iVar5 * 0x18 + 0x10);
      iVar5 = *piVar6;
    } while (iVar5 != param_1);
  }
  *piVar6 = *(int *)(lVar1 + 0x10);
  lVar1 = DAT_14cad2278;
  if (DAT_14cad22ac != 0) {
    *(int *)(DAT_14cad2278 + (longlong)DAT_14cad22a8 * 0x18) = param_1;
  }
  puVar2 = (undefined4 *)(lVar1 + (longlong)param_1 * 0x18);
  *puVar2 = 0xffffffff;
  iVar5 = -1;
  if (0 < DAT_14cad22ac) {
    iVar5 = DAT_14cad22a8;
  }
  puVar2[1] = iVar5;
  DAT_14cad22ac = DAT_14cad22ac + 1;
  puVar4 = &DAT_14cad2288;
  if (DAT_14cad2298 != (undefined *)0x0) {
    puVar4 = DAT_14cad2298;
  }
  iVar5 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar5 = param_1;
  }
  bVar3 = (byte)param_1 & 0x1f;
  DAT_14cad22a8 = param_1;
  *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140bf2008 FUN_140bf2008 body=228 status=ok
// SIG undefined FUN_140bf2008(void)

longlong FUN_140bf2008(void)

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
  if (DAT_14cac73c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417bf14c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14638d560;
    local_38 = &LAB_14789bea2;
    local_40 = &LAB_146392965;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xdb0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneCaptureComponent2D",&DAT_14cac73c8,FUN_14639293e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac73c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf20ee FUN_140bf20ee body=353 status=ok
// SIG undefined FUN_140bf20ee(void)

void FUN_140bf20ee(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bf2173;
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
LAB_140bf2173:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140bf2256 FUN_140bf2256 body=57 status=ok
// SIG undefined FUN_140bf2256(void)

void FUN_140bf2256(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22b08 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22b08 = FUN_140002ddd(FUN_14643ad88,uVar1,L"GpsGenerator_Random");
  }
  return;
}



// FUNCTION 140bf229a FUN_140bf229a body=305 status=ok
// SIG undefined FUN_140bf229a(void)

longlong * FUN_140bf229a(longlong *param_1)

{
  FUN_14480568a();
  *param_1 = (longlong)&PTR_FUN_14a3c03a0;
  param_1[5] = (longlong)&PTR_FUN_14a3c0db0;
  param_1[6] = (longlong)&PTR_LAB_14a3c0df0;
  param_1[0x55] = (longlong)&PTR_FUN_14a3c0e40;
  param_1[0x56] = (longlong)&PTR_FUN_14a3c0ec0;
  param_1[0x57] = (longlong)&PTR_FUN_14a3c0ed0;
  *(undefined1 *)((longlong)param_1 + 0x644) = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0x8000000000;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  FUN_1400ea934(param_1,DAT_14cad0ef8,1);
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7;
    (**(code **)(*param_1 + 0x958))(param_1);
  }
  *(byte *)((longlong)param_1 + 0x2d6) = *(byte *)((longlong)param_1 + 0x2d6) & 0xfd;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) | 0x10;
  *(byte *)((longlong)param_1 + 0x2d4) = *(byte *)((longlong)param_1 + 0x2d4) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 0x80;
  *(undefined1 *)((longlong)param_1 + 0x2e9) = 1;
  param_1[0xdc] = -1;
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) | 0x20;
  return param_1;
}



// FUNCTION 140bf23cc FUN_140bf23cc body=95 status=ok
// SIG undefined FUN_140bf23cc(void)

void FUN_140bf23cc(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402160b8(&local_20);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = local_20;
  *(undefined1 *)(param_1 + 0x28) = 5;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf242c FUN_140bf242c body=1 status=ok
// SIG undefined FUN_140bf242c(void)

void FUN_140bf242c(void)

{
  return;
}



// FUNCTION 140bf242e FUN_140bf242e body=189 status=ok
// SIG undefined FUN_140bf242e(void)

undefined8 FUN_140bf242e(longlong *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    uVar10 = uVar2;
    do {
      uVar1 = (uVar10 >> 1) + iVar8;
      lVar11 = (ulonglong)uVar1 * 0x30;
      lVar9 = lVar4 + lVar11;
      uVar3 = *(uint *)(lVar4 + lVar11);
      if ((uVar3 < *param_2) ||
         ((uVar3 <= *param_2 &&
          ((*(uint *)(lVar9 + 4) < param_2[1] ||
           ((*(uint *)(lVar9 + 4) == param_2[1] &&
            ((*(uint *)(lVar9 + 8) < param_2[2] ||
             ((*(uint *)(lVar9 + 8) == param_2[2] && (*(uint *)(lVar9 + 0xc) < param_2[3])))))))))))
         ) {
        iVar8 = uVar1 + (uVar10 & 1);
      }
      bVar5 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar5);
  }
  uVar10 = iVar8 + param_3;
  uVar7 = 0;
  if ((-1 < (int)uVar10) && ((int)uVar10 < (int)uVar2)) {
    lVar9 = (ulonglong)uVar10 * 0x30;
    uVar6 = 0;
    uVar7 = 0;
    if ((*(uint *)(lVar4 + lVar9) == *param_2) &&
       (((uVar7 = uVar6, *(uint *)(lVar4 + 4 + lVar9) == param_2[1] &&
         (*(uint *)(lVar4 + 8 + lVar9) == param_2[2])) &&
        (*(uint *)(lVar4 + 0xc + lVar9) == param_2[3])))) {
      uVar7 = *(undefined8 *)(lVar4 + lVar9 + 0x28);
    }
  }
  return uVar7;
}



// FUNCTION 140bf24ec FUN_140bf24ec body=40 status=ok
// SIG undefined FUN_140bf24ec(void)

undefined8 FUN_140bf24ec(undefined8 param_1,int param_2)

{
  FUN_140bf2514();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bf2514 FUN_140bf2514 body=88 status=ok
// SIG undefined FUN_140bf2514(void)

void FUN_140bf2514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b701580;
  param_1[0xad] = &PTR_FUN_14b701928;
  param_1[0xc6] = &PTR_FUN_14b701940;
  if (param_1[0x2fa] != 0) {
    FUN_1400020a8();
  }
  FUN_14403c2b4(param_1 + 0xee);
  FUN_143c4cfc8(param_1);
  return;
}



// FUNCTION 140bf257a FUN_140bf257a body=31 status=ok
// SIG undefined FUN_140bf257a(void)

undefined8 FUN_140bf257a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bf259a FUN_140bf259a body=215 status=ok
// SIG undefined FUN_140bf259a(void)

undefined8 FUN_140bf259a(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140bf2672(&local_34);
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  lVar7 = (longlong)iVar2;
  if (lVar7 != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(lVar3 + 8 + lVar5) == iStack_2c) && (*(int *)(lVar3 + 0xc + lVar5) == iStack_28)
         ) {
        iVar6 = (int)(lVar5 >> 2) * -0x33333333;
        if (iVar6 != -1) {
          uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),
                           '\x02' - (*(int *)(lVar3 + 0x10 + (longlong)iVar6 * 0x14) == param_3));
          goto LAB_140bf261c;
        }
        break;
      }
      lVar5 = lVar5 + 0x14;
    } while (lVar7 * 0x14 != lVar5);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140bf27c2(param_1,iVar2);
    lVar3 = *param_1;
  }
  *(undefined4 *)(lVar3 + 0x10 + lVar7 * 0x14) = local_24;
  puVar1 = (undefined4 *)(lVar3 + lVar7 * 0x14);
  *puVar1 = local_34;
  puVar1[1] = uStack_30;
  puVar1[2] = iStack_2c;
  puVar1[3] = iStack_28;
  uVar4 = 0;
LAB_140bf261c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf2672 FUN_140bf2672 body=335 status=ok
// SIG undefined FUN_140bf2672(void)

uint * FUN_140bf2672(uint *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar2 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar5 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar5 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar4;
      }
    }
    param_1[1] = uVar2;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar4 = *(uint *)(lVar5 + 0x10);
      bVar6 = uVar4 == 0;
      if (bVar6) {
        *(uint *)(lVar5 + 0x10) = uVar3;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar4 = uVar3;
      }
    }
    param_1[2] = uVar2;
    param_1[3] = uVar4;
  }
  param_1[4] = param_3;
  return param_1;
}



// FUNCTION 140bf27c2 FUN_140bf27c2 body=373 status=ok
// SIG undefined FUN_140bf27c2(void)

void FUN_140bf27c2(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x14;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bf284b;
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
LAB_140bf284b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 140bf2938 FUN_140bf2938 body=76 status=ok
// SIG undefined FUN_140bf2938(void)

void FUN_140bf2938(undefined8 param_1,undefined8 *param_2)

{
  FUN_140bf2984(param_2);
  *param_2 = &PTR_FUN_14b0ac4c0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined2 *)(param_2 + 0x26) = 0x201;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  *(undefined8 *)((longlong)param_2 + 0x145) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  return;
}



// FUNCTION 140bf2984 FUN_140bf2984 body=261 status=ok
// SIG undefined FUN_140bf2984(void)

undefined8 * FUN_140bf2984(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14a425490;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined1 **)((longlong)param_1 + 0x8c) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x9a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  FUN_1404163bc(param_1 + 0x16);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = &DAT_3f8000003f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x412000003f800000;
  *(undefined4 *)(param_1 + 0x22) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  return param_1;
}



// FUNCTION 140bf2a8a FUN_140bf2a8a body=66 status=ok
// SIG undefined FUN_140bf2a8a(void)

void FUN_140bf2a8a(undefined8 param_1,longlong param_2)

{
  FUN_140907f04();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc1a00,0);
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc19f8,1);
  return;
}



// FUNCTION 140bf2acc FUN_140bf2acc body=527 status=ok
// SIG undefined FUN_140bf2acc(void)

undefined8 FUN_140bf2acc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong alStack_c0 [3];
  uint local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  ulonglong uStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  alStack_c0[1] = 0;
  alStack_c0[2] = 0;
  local_c8 = 0;
  alStack_c0[0] = 0;
  local_a8 = 0xffffffff;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_a0 = *param_2;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  uStack_4f = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_98 = *(undefined4 *)(param_2 + 1);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_90 = *(undefined4 *)(param_2 + 2);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x14);
  if (&local_88 != (void **)(param_2 + 3)) {
    uVar2 = *(uint *)(param_2 + 4);
    _Src = (void *)param_2[3];
    uStack_80 = (ulonglong)uVar2;
    if ((longlong)(int)uVar2 != 0) {
      FUN_1446dd670(&local_88,uVar2,0);
      memcpy(local_88,_Src,(longlong)(int)uVar2 * 2);
    }
  }
  if (local_78 != param_2[5]) {
    local_68 = 0;
  }
  if (lStack_70 != param_2[6]) {
    local_68 = 0;
  }
  local_78 = param_2[5];
  uVar5 = FUN_14477b664();
  lStack_70 = FUN_14477b664(uVar5);
  local_68 = param_2[7];
  uStack_60 = param_2[8];
  plVar3 = (longlong *)param_2[9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      lVar4 = *local_58;
      local_58 = plVar3;
      (**(code **)(lVar4 + 0x10))();
      plVar3 = local_58;
    }
  }
  local_58 = plVar3;
  local_c8 = *param_3;
  uStack_40 = 1;
  FUN_1406fa324(alStack_c0,&DAT_14c9a6308);
  local_a8 = param_4 & 0xff;
  alStack_c0[2] = *(undefined8 *)(DAT_14c9a6308 + (ulonglong)local_a8 * 8);
  uVar5 = FUN_140ab6af6(param_1,&local_c8);
  FUN_14072ffb2(CONCAT71(uStack_4f,local_50),uStack_48);
  if (CONCAT71(uStack_4f,local_50) != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (alStack_c0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf2cdc FUN_140bf2cdc body=208 status=ok
// SIG undefined FUN_140bf2cdc(void)

void FUN_140bf2cdc(longlong *param_1)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  FUN_140bf2dac();
  if (0 < (longlong)(int)param_1[0x12]) {
    uVar4 = (longlong)(int)param_1[0x12] + 1;
    do {
      plVar2 = *(longlong **)(param_1[0x11] + -0x10 + uVar4 * 8);
      if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) &&
         ((*(float *)(plVar2 + 0x2e) != 0.0 || (NAN(*(float *)(plVar2 + 0x2e)))))) {
        if (param_1 == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          cVar3 = FUN_144966fca(param_1[4]);
          if (cVar3 != '\0') {
            FUN_14036294a(param_1[4],1,1);
          }
          lVar5 = param_1[0x7c];
          if (lVar5 == 0) {
            lVar5 = (**(code **)(*param_1 + 0x350))(param_1);
            param_1[0x7c] = lVar5;
          }
        }
        fVar1 = *(float *)(plVar2 + 0x29);
        if ((*(float *)(lVar5 + 0x984) != fVar1) || (NAN(*(float *)(lVar5 + 0x984)) || NAN(fVar1)))
        {
          *(undefined4 *)(lVar5 + 0x994) = 0xfffffffe;
          *(undefined4 *)(lVar5 + 0x99c) = 0xfffffffe;
        }
        *(float *)(lVar5 + 0x984) = fVar1;
        return;
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  return;
}



// FUNCTION 140bf2dac FUN_140bf2dac body=515 status=ok
// SIG undefined FUN_140bf2dac(void)

void FUN_140bf2dac(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) | 1;
  iVar3 = *(int *)(param_1 + 0x90);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar5 * 8);
      if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
        bVar1 = *(byte *)(param_1 + 0x30);
        bVar6 = bVar1 == 2;
        if (*(int *)((longlong)plVar2 + 0x1b4) < 1) {
          if ((bVar1 & 0xfd) != 0) {
            bVar6 = plVar2 == *(longlong **)(param_1 + 0x358);
          }
        }
        else {
          bVar6 = false;
        }
        local_118[0] = 0;
        local_114 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        uStack_ec = 0x3ff00000;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_c8 = 0x3ff0000000000000;
        uStack_c0 = 0x3ff0000000000000;
        local_b8 = 0x3ff0000000000000;
        uStack_b0 = 0;
        puVar4 = local_118;
        if (bVar1 != 1) {
          puVar4 = (undefined1 *)(param_1 + 0x370);
        }
        if (!bVar6) {
          puVar4 = (undefined1 *)0x0;
        }
        if ((plVar2[0x39] != 0) &&
           (*(int *)(plVar2[0x39] + 0x1d0) != (int)DAT_14c872be0 + (int)(DAT_14c872be0 / 0xffffffff)
           )) {
          FUN_147905562(plVar2);
        }
        FUN_1433dae98(plVar2,param_2,puVar4,bVar1 == 2);
        if ((*(int *)(param_1 + 0x90) <= lVar5) ||
           (*(longlong **)(*(longlong *)(param_1 + 0x88) + lVar5 * 8) != plVar2)) break;
        FUN_147905644(plVar2);
        iVar3 = *(int *)(param_1 + 0x90);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if ((local_a0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bf2fb0 FUN_140bf2fb0 body=9 status=ok
// SIG undefined FUN_140bf2fb0(void)

void FUN_140bf2fb0(longlong param_1)

{
  FUN_140bf2fba(param_1 + 0x10);
  return;
}



// FUNCTION 140bf2fba FUN_140bf2fba body=151 status=ok
// SIG undefined FUN_140bf2fba(void)

void FUN_140bf2fba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac72de0;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  FUN_14076ba36(param_1 + 0x19);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  return;
}



// FUNCTION 140bf3052 FUN_140bf3052 body=284 status=ok
// SIG undefined FUN_140bf3052(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140bf3052(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b02f0) {
    FUN_144b3d300(&DAT_14c9b02f0);
    if (DAT_14c9b02f0 == -1) {
      FUN_145783804();
      FUN_140db5666(&DAT_14c9b0248,2,&DAT_14c9b01e0,L"TBasePassCSFNoLightMapPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712d39a,
                    FUN_14712d372,FUN_14174f4b0,&LAB_14712d36e,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b0248 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c47b);
      _Init_thread_footer(&DAT_14c9b02f0);
    }
  }
  return &DAT_14c9b0248;
}



// FUNCTION 140bf316e FUN_140bf316e body=1292 status=ok
// SIG undefined FUN_140bf316e(void)

void FUN_140bf316e(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  byte *pbVar2;
  ushort uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_188 [40];
  longlong local_160;
  longlong local_158;
  char *local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong local_130;
  undefined1 local_124 [8];
  int local_11c;
  longlong local_118;
  undefined8 local_110;
  int local_108;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar3 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  if (uVar3 != 0) {
    lVar1 = param_1 + -0xd8;
    local_138 = *param_6;
    local_148 = param_6[1];
    local_158 = param_6[2];
    local_130 = param_1 + -0x10;
    local_140 = (longlong *)(param_1 + -0xc0);
    puVar17 = (undefined8 *)(param_5 + 8);
    uVar13 = 0;
    local_160 = param_4;
    local_150 = param_2;
    do {
      local_118 = *(longlong *)(param_4 + uVar13 * 4);
      if (local_118 != 0) {
        if (**(int **)(param_1 + -0x28) == 0) {
          local_c8 = 0;
          uVar6 = *(uint *)(local_118 + 0xc);
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          uVar12 = *(uint *)(lVar8 + 0x10);
          if (*(uint *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            uVar9 = DAT_14c964868 + 1;
            bVar19 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar19) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
            }
            LOCK();
            uVar12 = *(uint *)(lVar8 + 0x10);
            bVar19 = uVar12 == 0;
            if (bVar19) {
              *(uint *)(lVar8 + 0x10) = uVar9;
              uVar12 = 0;
            }
            UNLOCK();
            if (bVar19) {
              uVar12 = uVar9;
            }
          }
          local_c8 = CONCAT44(uVar12,uVar6);
          uVar4 = *puVar17;
          uStack_c0 = uVar4;
          FUN_1407336f2(local_130,&local_110,local_118);
          uVar6 = uVar12 >> 0xd ^ uVar6 - uVar12;
          uVar9 = uVar6 << 8 ^ (-0x61c88647 - uVar12) - uVar6;
          uVar12 = uVar9 >> 0xd ^ (uVar12 - uVar6) - uVar9;
          uVar6 = uVar12 >> 0xc ^ (uVar6 - uVar9) - uVar12;
          uVar16 = uVar6 << 0x10 ^ (uVar9 - uVar12) - uVar6;
          uVar12 = uVar16 >> 5 ^ (uVar12 - uVar6) - uVar16;
          uVar9 = uVar12 >> 3 ^ (uVar6 - uVar16) - uVar12;
          uVar6 = uVar9 << 10 ^ (uVar16 - uVar12) - uVar9;
          uVar12 = uVar6 >> 0xf ^ uVar12 - (uVar9 + uVar6);
          uVar6 = (uint)((ulonglong)uVar4 >> 0x10);
          uVar9 = (uint)uVar4 & 0xffff;
          iVar7 = FUN_140bf3c50(local_140,
                                (uVar12 >> 2) + 0x9e3779b9 +
                                ((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                                (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar9 >> 4) + uVar12 * 0x40 ^
                                uVar12,&local_c8);
          param_2 = local_150;
          param_4 = local_160;
          if ((iVar7 != -1) && (lVar8 = (longlong)iVar7 * 0x1c + *local_140, lVar8 != 0)) {
            local_108 = *(int *)(lVar8 + 0x10);
            local_110._4_4_ = *(undefined4 *)(param_1 + -0x18);
            if ((local_108 != -1) &&
               (lVar8 = FUN_1400e4054(*(undefined8 *)(param_1 + -0x28),&local_110), lVar8 != 0))
            goto LAB_140bf323b;
          }
        }
        else {
LAB_140bf323b:
          FUN_140bf371a(lVar1,local_124,&local_118,puVar17);
          piVar10 = *(int **)(param_1 + -0x28);
          if (*piVar10 != 0) {
            FUN_140adeba6(piVar10,local_124);
            piVar10 = *(int **)(param_1 + -0x28);
          }
          lVar8 = FUN_1400e4054(piVar10,local_124);
          if (lVar8 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = CONCAT71((int7)((ulonglong)local_124 >> 8),
                              '\x02' - (*(short *)(lVar8 + 0xe) == 0));
          }
          cVar5 = FUN_140bf367c(lVar1,local_11c,uVar18 & 0xffffffff);
          if (cVar5 == '\0') {
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
            if (local_148 == 0) {
              if (local_138 == 0) {
                if (local_158 != 0) {
                  uStack_80 = *(ulonglong *)(local_158 + uVar13 * 8);
                  local_78 = *(longlong *)(local_158 + 8 + uVar13 * 8);
                  uVar11 = uStack_80;
                  if (local_78 != 0) {
                    LOCK();
                    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
                    UNLOCK();
                    uVar11 = *(ulonglong *)(local_158 + uVar13 * 8);
                  }
                  uStack_70 = 2;
                  puVar14 = &local_110;
                  FUN_1476463b4(uVar11,puVar14,*(undefined8 *)(local_160 + uVar13 * 4),&local_c8);
                  goto LAB_140bf35db;
                }
              }
              else {
                lVar8 = (longlong)*(int *)(param_1 + 0x24) *
                        (ulonglong)*(ushort *)(local_138 + uVar13);
                uStack_80 = *(longlong *)(param_1 + 0x18) + lVar8;
                (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar8))
                          (&local_110,*(undefined8 *)(param_4 + uVar13 * 4));
                puVar14 = &local_110;
                puVar15 = &local_c8;
                for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
              }
            }
            else {
              uStack_80 = (ulonglong)*(ushort *)(local_148 + uVar13);
              uStack_70 = 1;
              puVar14 = (undefined8 *)
                        ((ulonglong)*(ushort *)(local_148 + uVar13) +
                        *(longlong *)(param_4 + uVar13 * 4));
LAB_140bf35db:
              puVar15 = &local_c8;
              for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
                *puVar15 = *puVar14;
                puVar14 = puVar14 + 1;
                puVar15 = puVar15 + 1;
              }
            }
            FUN_140bf4144(lVar1,local_11c,uVar18 & 0xffffffff,&local_c8);
            (*(code *)(&PTR_LAB_14a4c7e10)[uStack_70 & 0xff])(&uStack_80);
            param_4 = local_160;
            param_2 = local_150;
          }
          if (*param_2 == '\x01') {
            pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x70 + (longlong)local_11c * 0x78);
            *pbVar2 = *pbVar2 | 2;
          }
        }
      }
      uVar13 = uVar13 + 2;
      puVar17 = (undefined8 *)((longlong)puVar17 + 0x14);
    } while ((uint)uVar3 * 2 != uVar13);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bf367c FUN_140bf367c body=158 status=ok
// SIG undefined FUN_140bf367c(void)

ulonglong FUN_140bf367c(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int7 iVar6;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar7 = (longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x70));
  }
  else {
    uVar5 = CONCAT71(iVar6,1);
    if ((param_3 == '\x02') && (bVar2 = *(byte *)(lVar7 + 0x70), ((bVar2 & 2) == 0 & bVar2) == 0)) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      if (0 < (int)uVar3) {
        uVar9 = 0;
        uVar8 = uVar3;
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x68) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x68) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x68;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 140bf371a FUN_140bf371a body=315 status=ok
// SIG undefined FUN_140bf371a(void)

longlong FUN_140bf371a(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  if (*param_3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(*param_3 + 0xc);
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
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
    local_50 = CONCAT44(iVar2,uVar1);
    lVar4 = *param_3;
  }
  local_48 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar4);
  FUN_140bf3856(param_1,&local_54,&local_50);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = local_54;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140bf3856 FUN_140bf3856 body=1016 status=ok
// SIG undefined FUN_140bf3856(void)

int * FUN_140bf3856(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined1 local_bc [4];
  int *local_b8;
  int *piStack_b0;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar13 = param_3[1];
  uVar10 = uVar13 >> 0xd ^ *param_3 - uVar13;
  uVar15 = uVar10 << 8 ^ (-0x61c88647 - uVar13) - uVar10;
  uVar17 = uVar15 >> 0xd ^ (uVar13 - uVar10) - uVar15;
  uVar13 = uVar17 >> 0xc ^ (uVar10 - uVar15) - uVar17;
  uVar18 = uVar13 << 0x10 ^ (uVar15 - uVar17) - uVar13;
  uVar10 = uVar18 >> 5 ^ (uVar17 - uVar13) - uVar18;
  uVar15 = uVar10 >> 3 ^ (uVar13 - uVar18) - uVar10;
  uVar13 = uVar15 << 10 ^ (uVar18 - uVar10) - uVar15;
  uVar10 = uVar13 >> 0xf ^ uVar10 - (uVar15 + uVar13);
  uVar4 = *(undefined8 *)(param_3 + 2);
  uVar13 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar15 = (uint)uVar4 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar10 >> 2) + 0x9e3779b9 +
                               ((uint)uVar4 << 0x10 | uVar15) + (int)((ulonglong)uVar4 >> 0x20) +
                               (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar15 >> 4) + uVar10 * 0x40 ^
                               uVar10,param_3);
  if (((iVar5 == -1) || (lVar7 = (longlong)iVar5 * 0x1c + *plVar1, lVar7 == 0)) ||
     (iVar5 = *(int *)(lVar7 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_b8 = *(int **)param_3;
    piStack_b0 = *(int **)(param_3 + 2);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    if (*(int *)(param_1 + 0x9c) == 0) {
      iVar5 = *(int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = iVar5 + 1;
      if (*(int *)(param_1 + 0x74) == iVar5) {
        FUN_1410fd1ac(param_1 + 0x68,iVar5);
      }
      iVar16 = *(int *)(param_1 + 0x90);
      if (iVar16 == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar6 = iVar16 + -1;
        }
        iVar6 = iVar6 >> 5;
      }
      lVar12 = param_1 + 0x78;
      iVar11 = iVar16 + 1;
      iVar14 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar14 = iVar16;
      }
      if (iVar14 >> 5 == iVar6) {
        *(int *)(param_1 + 0x90) = iVar11;
      }
      else {
        if (*(int *)(param_1 + 0x94) <= iVar16) {
          uVar13 = iVar16 + 0x20;
          local_c8 = (ulonglong)uVar13;
          if (uVar13 < 0xa0) {
            iVar11 = 0x80;
            iVar6 = iVar16;
          }
          else {
            uVar13 = uVar13 >> 5;
            local_c8 = (ulonglong)uVar13;
            if (*(int *)(param_1 + 0x94) + 0x1fU < 0xa0) {
              uVar10 = 4;
              if (4 < uVar13) {
                uVar10 = uVar13;
              }
            }
            else {
              uVar10 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
            }
            uVar8 = FUN_144a3809e(uVar10 << 2,0);
            iVar6 = (int)(uVar8 >> 2);
            iVar11 = -0x20;
            if ((int)local_c8 <= iVar6) {
              iVar11 = iVar6 << 5;
            }
            iVar6 = *(int *)(param_1 + 0x90);
          }
          *(int *)(param_1 + 0x94) = iVar11;
          FUN_1446efbd8(lVar12,iVar6);
          iVar11 = *(int *)(param_1 + 0x90) + 1;
        }
        iVar6 = iVar11 + 0x1f;
        if (-1 < iVar11) {
          iVar6 = iVar11;
        }
        *(int *)(param_1 + 0x90) = iVar11;
        if (iVar11 % 0x20 != 0) {
          lVar7 = *(longlong *)(param_1 + 0x88);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            lVar7 = lVar12;
          }
          bVar9 = -(char)(iVar11 % 0x20);
          *(uint *)(lVar7 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(lVar7 + (longlong)(iVar6 >> 5) * 4) << (bVar9 & 0x1f)) >>
               (bVar9 & 0x1f);
        }
      }
      lVar7 = (longlong)iVar5;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x88);
      }
      bVar9 = (byte)iVar16 & 0x1f;
      puVar3 = (uint *)(lVar12 + (longlong)(iVar14 >> 5) * 4);
      *puVar3 = *puVar3 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x98);
      lVar7 = (longlong)iVar5;
      iVar16 = *(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar7 * 0x78);
      *(int *)(param_1 + 0x98) = iVar16;
      iVar6 = *(int *)(param_1 + 0x9c) + -1;
      *(int *)(param_1 + 0x9c) = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar16 * 0x78) = 0xffffffff;
      }
    }
    lVar12 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x88);
    }
    iVar16 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar16 = iVar5;
    }
    puVar3 = (uint *)(lVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)iVar5 & 0x1f);
    lVar12 = *(longlong *)(param_1 + 0x68);
    lVar7 = lVar7 * 0x78;
    *(undefined8 *)(lVar12 + lVar7) = local_b8;
    ((undefined8 *)(lVar12 + lVar7))[1] = piStack_b0;
    *(undefined1 *)(lVar12 + 0x68 + lVar7) = 0;
    *(undefined1 *)(lVar12 + 0x70 + lVar7) = 0;
    puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar12 + 0x20 + lVar7);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar12 + 0x30 + lVar7);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar12 + 0x40 + lVar7);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar12 + 0x50 + lVar7);
    *puVar2 = 0;
    puVar2[1] = 0;
    *param_2 = iVar5;
    local_b8 = param_3;
    piStack_b0 = param_2;
    FUN_140bf3cbe(plVar1,local_bc,&local_b8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf3c50 FUN_140bf3c50 body=109 status=ok
// SIG undefined FUN_140bf3c50(void)

int FUN_140bf3c50(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if (((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
           && (*(longlong *)(lVar2 + lVar3 + 8) == *(longlong *)(param_3 + 2))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x14 + lVar3);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140bf3cbe FUN_140bf3cbe body=527 status=ok
// SIG undefined FUN_140bf3cbe(void)

undefined4 *
FUN_140bf3cbe(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140bf3f4a(param_1,local_50);
  piVar1 = (int *)*param_3;
  piVar2 = (int *)param_3[1];
  iVar11 = piVar1[1];
  iVar4 = piVar1[2];
  iVar5 = piVar1[3];
  *local_48 = *piVar1;
  local_48[1] = iVar11;
  local_48[2] = iVar4;
  local_48[3] = iVar5;
  local_48[4] = *piVar2;
  local_48[5] = -1;
  local_54 = local_50[0];
  uVar9 = local_48[1];
  uVar8 = uVar9 >> 0xd ^ *local_48 - uVar9;
  uVar10 = uVar8 << 8 ^ (-0x61c88647 - uVar9) - uVar8;
  uVar13 = uVar10 >> 0xd ^ (uVar9 - uVar8) - uVar10;
  uVar9 = uVar13 >> 0xc ^ (uVar8 - uVar10) - uVar13;
  uVar14 = uVar9 << 0x10 ^ (uVar10 - uVar13) - uVar9;
  uVar8 = uVar14 >> 5 ^ (uVar13 - uVar9) - uVar14;
  uVar10 = uVar8 >> 3 ^ (uVar9 - uVar14) - uVar8;
  uVar9 = uVar10 << 10 ^ (uVar14 - uVar8) - uVar10;
  uVar8 = uVar9 >> 0xf ^ uVar8 - (uVar10 + uVar9);
  uVar3 = *(undefined8 *)(local_48 + 2);
  uVar9 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar10 = (uint)uVar3 & 0xffff;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 +
          ((uint)uVar3 << 0x10 | uVar10) + (int)((ulonglong)uVar3 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar10 >> 4) + uVar8 * 0x40 ^ uVar8;
  local_68 = param_4;
  cVar6 = FUN_140bf3ece(param_1,uVar8,local_48);
  if (cVar6 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar9 < 4) {
      iVar11 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      local_48[6] = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      local_48[5] = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_140bf42c0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf3ece FUN_140bf3ece body=123 status=ok
// SIG undefined FUN_140bf3ece(void)

void FUN_140bf3ece(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_140bf3c50();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar8 * 0x1c) = param_3[4];
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar8 * 0x1c);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1410d7722(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_140bf3efd;
    }
  }
  uVar7 = 0;
LAB_140bf3efd:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 140bf3f4a FUN_140bf3f4a body=506 status=ok
// SIG undefined FUN_140bf3f4a(void)

int * FUN_140bf3f4a(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x1c);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 140bf4144 FUN_140bf4144 body=369 status=ok
// SIG undefined FUN_140bf4144(void)

void FUN_140bf4144(longlong param_1,int param_2,char param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = (longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x01') {
    puVar9 = param_4;
    puVar10 = (undefined8 *)(lVar8 + 0x10);
    for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    if ((undefined8 *)(lVar8 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xb));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xb)])
                (&local_58,param_4 + 9);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar8 + 0x68);
      uVar2 = *(undefined4 *)(lVar8 + 0x58);
      uVar3 = *(undefined4 *)(lVar8 + 0x5c);
      uVar4 = *(undefined4 *)(lVar8 + 0x60);
      uVar5 = *(undefined4 *)(lVar8 + 100);
      *(undefined4 *)(lVar8 + 0x58) = local_58;
      *(undefined4 *)(lVar8 + 0x5c) = uStack_54;
      *(undefined4 *)(lVar8 + 0x60) = uStack_50;
      *(undefined4 *)(lVar8 + 100) = uStack_4c;
      *(ulonglong *)(lVar8 + 0x68) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar8 + 0x70) = *(byte *)(lVar8 + 0x70) | 3;
  }
  else if (param_3 == '\x02') {
    bVar7 = *(byte *)(lVar8 + 0x70);
    if ((bVar7 & 1) == 0) {
      puVar9 = param_4;
      puVar10 = (undefined8 *)(lVar8 + 0x10);
      for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      if ((undefined8 *)(lVar8 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xb));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xb)])
                  (&local_58,param_4 + 9);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar8 + 0x68);
        uVar2 = *(undefined4 *)(lVar8 + 0x58);
        uVar3 = *(undefined4 *)(lVar8 + 0x5c);
        uVar4 = *(undefined4 *)(lVar8 + 0x60);
        uVar5 = *(undefined4 *)(lVar8 + 100);
        *(undefined4 *)(lVar8 + 0x58) = local_58;
        *(undefined4 *)(lVar8 + 0x5c) = uStack_54;
        *(undefined4 *)(lVar8 + 0x60) = uStack_50;
        *(undefined4 *)(lVar8 + 100) = uStack_4c;
        *(ulonglong *)(lVar8 + 0x68) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar7 = *(byte *)(lVar8 + 0x70);
      }
      *(byte *)(lVar8 + 0x70) = bVar7 | 1;
    }
    else {
      FUN_1476036b4(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf42b8 caseD_0 body=7 status=ok
// SIG undefined caseD_0(void)

void switchD_14763af66::caseD_0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// FUNCTION 140bf42c0 FUN_140bf42c0 body=791 status=ok
// SIG undefined FUN_140bf42c0(void)

void FUN_140bf42c0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar11 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar9 = *param_1;
        lVar14 = (longlong)iVar12 * 0x1c;
        uVar4 = *(uint *)(lVar9 + 4 + lVar14);
        uVar15 = uVar4 >> 0xd ^ *(int *)(lVar9 + lVar14) - uVar4;
        uVar17 = uVar15 << 8 ^ (-0x61c88647 - uVar4) - uVar15;
        uVar16 = uVar17 >> 0xd ^ (uVar4 - uVar15) - uVar17;
        uVar18 = uVar16 >> 0xc ^ (uVar15 - uVar17) - uVar16;
        uVar4 = uVar18 << 0x10 ^ (uVar17 - uVar16) - uVar18;
        uVar15 = uVar4 >> 5 ^ (uVar16 - uVar18) - uVar4;
        uVar16 = uVar15 >> 3 ^ (uVar18 - uVar4) - uVar15;
        uVar4 = uVar16 << 10 ^ (uVar4 - uVar15) - uVar16;
        uVar16 = uVar4 >> 0xf ^ uVar15 - (uVar16 + uVar4);
        uVar2 = *(undefined8 *)(lVar9 + 8 + lVar14);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar8 = (longlong)
                (int)((uVar16 >> 2) + 0x9e3779b9 +
                      ((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4) + uVar16 * 0x40 ^ uVar16) &
                (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar9 + 0x18 + lVar14) = iVar6;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x14 + lVar14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        uVar11 = ~(uint)uVar13 & uVar11;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar6 = (int)local_60[3];
        lVar9 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar7 + lVar9 * 4) & uVar11;
        if (uVar4 == 0) {
          iVar12 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar12 = iVar6 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar3 = iVar12;
          if (iVar12 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar12 <= iVar5) break;
          lVar14 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = *(uint *)((longlong)plVar7 + lVar14 * 4 + lVar9 * 4 + 4);
            if (uVar4 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar3 - lVar9 == lVar14) goto LAB_140bf458d;
          }
          iVar5 = iVar5 + (int)lVar14 + 1;
          uVar11 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar8 = uVar13 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar12 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar6);
    }
  }
LAB_140bf458d:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf45e8 FUN_140bf45e8 body=44 status=ok
// SIG undefined FUN_140bf45e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bf45e8(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb702d4 = _DAT_14cb702d4 + -1;
  *param_1 = DAT_14cb702c8;
  DAT_14cb702c8 = param_1;
  return;
}



// FUNCTION 140bf4614 FUN_140bf4614 body=43 status=ok
// SIG undefined FUN_140bf4614(void)

void FUN_140bf4614(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_140bf4640(param_1);
  FUN_1400fb146(param_1 + 0x558,0);
  return;
}



// FUNCTION 140bf4640 FUN_140bf4640 body=767 status=ok
// SIG undefined FUN_140bf4640(void)

void FUN_140bf4640(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStack_a8 [44];
  int local_7c;
  ulonglong local_78;
  ulonglong local_70;
  uint local_64;
  longlong local_60;
  longlong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_1;
  if (DAT_14cb44478 == 0) {
    uVar10 = 1;
    uVar15 = 0;
    iVar9 = 0;
    uVar3 = 0;
  }
  else {
    puVar13 = &DAT_14cb44460;
    if (DAT_14cb44470 != (uint *)0x0) {
      puVar13 = DAT_14cb44470;
    }
    uVar3 = *puVar13;
    if (uVar3 == 0) {
      iVar9 = DAT_14cb44478 + 0x1e;
      if (-1 < (int)(DAT_14cb44478 - 1)) {
        iVar9 = DAT_14cb44478 - 1;
      }
      uVar15 = 0;
      uVar10 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar10 = uVar15;
      }
      iVar9 = 0;
      do {
        if (uVar10 == uVar15) goto LAB_140bf46f4;
        iVar9 = iVar9 + 0x20;
        uVar3 = puVar13[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar15 = 0;
      iVar9 = 0;
    }
    uVar10 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar10 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar3 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)DAT_14cb44478 <= (int)uVar3) {
      uVar3 = DAT_14cb44478;
    }
  }
  if (uVar3 != DAT_14cb44478) {
    uVar5 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    local_64 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    local_64 = local_64 >> 0x10 ^ local_64;
    uVar5 = 0xffffffff;
    local_70 = (ulonglong)DAT_14cb44478;
    do {
      lVar2 = *(longlong *)(DAT_14cb44450 + 8 + (longlong)(int)uVar3 * 0x18);
      lVar11 = lVar2 + 0x3f0;
      lVar12 = lVar2 + 0x400;
      lVar8 = 0;
      local_7c = iVar9;
      do {
        lVar17 = lVar8 * 0x50;
        if (*(int *)(lVar2 + 0x1c8 + lVar17) != *(int *)(lVar2 + 500 + lVar17)) {
          plVar18 = (longlong *)(lVar17 + lVar2 + 0x1c0);
          plVar4 = plVar18 + 7;
          if ((longlong *)plVar18[8] != (longlong *)0x0) {
            plVar4 = (longlong *)plVar18[8];
          }
          iVar9 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar18[9] - 1U & local_64) * 4);
          if (iVar9 != -1) {
            do {
              lVar17 = *plVar18 + (longlong)iVar9 * 0x20;
              if (*(ulonglong *)(*plVar18 + (longlong)iVar9 * 0x20) == local_78) {
                if ((lVar17 != 0) &&
                   (puVar16 = (undefined8 *)(lVar17 + 8), puVar16 != (undefined8 *)0x0)) {
                  local_60 = lVar12;
                  local_58 = lVar11;
                  local_50 = puVar16;
                  FUN_14183bcba(lVar11,&local_50);
                  local_50 = puVar16;
                  FUN_14183bcba(local_60,&local_50);
                  FUN_14032ed88(*puVar16);
                  FUN_145942098(plVar18,local_78);
                  lVar11 = local_58;
                  lVar12 = local_60;
                }
                break;
              }
              iVar9 = *(int *)(lVar17 + 0x18);
            } while (iVar9 != -1);
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 7);
      FUN_140a011ec(*(undefined8 *)(lVar2 + 0x1b30),local_78);
      uVar5 = uVar5 & ~(uint)uVar10;
      puVar13 = DAT_14cb44470;
      if (DAT_14cb44470 == (uint *)0x0) {
        puVar13 = &DAT_14cb44460;
      }
      iVar14 = (int)uVar15;
      lVar11 = (longlong)iVar14;
      uVar3 = puVar13[lVar11] & uVar5;
      iVar9 = local_7c;
      if (uVar3 == 0) {
        iVar6 = DAT_14cb44478 + 0x1e;
        if (-1 < (int)(DAT_14cb44478 - 1)) {
          iVar6 = DAT_14cb44478 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = local_7c + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar14) {
          iVar7 = iVar14;
        }
        if (iVar14 < iVar6) {
          lVar12 = 0;
          do {
            uVar3 = puVar13[lVar11 + lVar12 + 1];
            if (uVar3 != 0) {
              uVar15 = (ulonglong)(iVar14 + (int)lVar12 + 1);
              uVar5 = 0xffffffff;
              goto LAB_140bf48ea;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar11 != lVar12);
          uVar5 = 0xffffffff;
          iVar14 = iVar7;
        }
        uVar15 = (ulonglong)(iVar14 + 1);
        uVar3 = DAT_14cb44478;
      }
      else {
LAB_140bf48ea:
        uVar10 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar10 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar3 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)DAT_14cb44478 <= (int)uVar3) {
          uVar3 = DAT_14cb44478;
        }
      }
    } while (uVar3 != (uint)local_70);
  }
LAB_140bf46f4:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bf4940 FUN_140bf4940 body=74 status=ok
// SIG undefined FUN_140bf4940(void)

undefined8 * FUN_140bf4940(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba4d40;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_144b45d40(param_1);
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 140bf4998 FUN_140bf4998 body=85 status=ok
// SIG undefined FUN_140bf4998(void)

undefined8 * FUN_140bf4998(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b25f800;
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 140bf49ee FUN_140bf49ee body=2018 status=ok
// SIG undefined FUN_140bf49ee(void)

void FUN_140bf49ee(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined1 auStack_128 [40];
  longlong local_100;
  uint local_f8;
  int local_f4;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  uint *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  longlong *plStack_78;
  ulonglong local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uStack_a0 = (longlong *)(param_1 + 0xf0);
  local_a8 = (longlong *)&DAT_100000000;
  local_98 = (longlong *)&DAT_ffffffff;
  local_90 = local_90 & 0xffffffff00000000;
  if (*(int *)(param_1 + 0x108) == 0) {
    uVar14 = 1;
    uVar16 = 0xffffffff;
    iVar17 = 0;
    iVar9 = 0;
    uVar21 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    uVar21 = (ulonglong)local_a8 & 0xffffffff;
    uVar14 = (ulonglong)local_a8 >> 0x20;
    uVar16 = (uint)local_98;
    iVar9 = local_98._4_4_;
    iVar17 = (uint)local_90;
  }
  iVar18 = (int)uStack_a0[3];
  plVar22 = uStack_a0;
  plVar13 = uStack_a0;
  lVar20 = param_1;
  if (iVar9 < iVar18) {
    do {
      local_e8 = lVar20;
      local_f0 = plVar13;
      plVar13 = DAT_14cb78ff0;
      lVar20 = *(longlong *)(param_1 + 0xe0);
      lVar12 = (longlong)iVar9 * 0x38;
      if (*(char *)(lVar20 + 0x29 + lVar12) == '\x01') {
        if (DAT_14cb78ff0 != (longlong *)0x0) {
          plVar19 = (longlong *)(lVar20 + lVar12);
          local_100 = lVar12;
          local_f8 = uVar16;
          local_f4 = iVar17;
          local_d8 = uVar14;
          local_d0 = uVar21;
          if ((char)plVar19[5] == '\0') {
            plVar22 = plVar19 + 1;
            iVar17 = *(int *)((longlong)plVar19 + 0x14);
            *(undefined4 *)(plVar19 + 2) = 0;
            if (iVar17 < 0) {
              FUN_148838dda(plVar22);
              iVar17 = *(int *)((longlong)plVar19 + 0x14);
            }
            local_b0 = *(undefined8 *)(*plVar19 + 0x50);
            *(undefined4 *)(plVar19 + 2) = 0;
            if (iVar17 != 0) {
              FUN_148838dda(plVar22);
            }
            local_c0 = &local_b0;
            local_b8 = plVar22;
            cVar5 = (**(code **)(*plVar13 + 0x300))(plVar13);
            local_e0 = plVar19;
            if (cVar5 == '\0') {
              plVar22 = plVar13 + 0x51;
              local_80 = (longlong *)&DAT_100000000;
              local_70 = 0xffffffff;
              uStack_68 = 0;
              plStack_78 = plVar22;
              if ((int)plVar13[0x54] == 0) {
                iVar17 = 0;
              }
              else {
                FUN_1449c0562(&local_80);
                iVar17 = (int)plVar13[0x54];
              }
              plVar19 = plVar13 + 0x4f;
              uStack_88 = CONCAT44(uStack_64,uStack_68);
              local_90 = local_70;
              uVar14 = local_90;
              uStack_a0 = local_80;
              local_98 = plStack_78;
              local_90._4_4_ = (int)(local_70 >> 0x20);
              iVar9 = local_90._4_4_;
              local_a8 = plVar19;
              if ((local_90._4_4_ != iVar17) || (local_90 = local_70, plStack_78 != plVar22)) {
                do {
                  local_90 = uVar14;
                  lVar20 = *(longlong *)(*local_a8 + 0x10 + (longlong)iVar9 * 0x20);
                  if ((lVar20 != 0) &&
                     (((*(byte **)(lVar20 + 0x48) != (byte *)0x0 &&
                       ((**(byte **)(lVar20 + 0x48) & 0x6b) == 3)) &&
                      (plVar4 = *(longlong **)(lVar20 + 0x30), plVar4 != (longlong *)0x0)))) {
                    lVar20 = (**(code **)(*plVar4 + 8))(plVar4);
                    lVar12 = FUN_1405bb4b8();
                    if (((lVar12 != 0) && (*(int *)(lVar12 + 0x38) <= *(int *)(lVar20 + 0x38))) &&
                       (*(longlong *)
                         (*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
                        lVar12 + 0x30)) {
                      FUN_140bf51d2(&local_c0,plVar4);
                    }
                  }
                  local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_a0._4_4_);
                  FUN_1449c0562(&uStack_a0);
                  iVar9 = local_90._4_4_;
                  uVar14 = local_90;
                } while (local_a8 != plVar19 || (local_98 != plVar22 || local_90._4_4_ != iVar17));
              }
            }
            else {
              local_c8 = (uint *)(plVar13 + 0x3b);
              iVar17 = (int)plVar13[0x3e];
              if (iVar17 == 0) {
                uVar21 = 1;
                uVar14 = 0;
                iVar9 = 0;
                iVar18 = 0;
              }
              else {
                puVar6 = (uint *)plVar13[0x3d];
                if ((uint *)plVar13[0x3d] == (uint *)0x0) {
                  puVar6 = local_c8;
                }
                uVar16 = *puVar6;
                if (uVar16 == 0) {
                  iVar9 = iVar17 + 0x1e;
                  if (-1 < iVar17 + -1) {
                    iVar9 = iVar17 + -1;
                  }
                  uVar14 = 0;
                  uVar21 = (ulonglong)(uint)(iVar9 >> 5);
                  if (iVar9 >> 5 < 1) {
                    uVar21 = uVar14;
                  }
                  iVar18 = 0;
                  do {
                    if (uVar21 == uVar14) goto LAB_140bf4d62;
                    iVar18 = iVar18 + 0x20;
                    uVar16 = puVar6[uVar14 + 1];
                    uVar14 = uVar14 + 1;
                  } while (uVar16 == 0);
                }
                else {
                  uVar14 = 0;
                  iVar18 = 0;
                }
                uVar21 = (ulonglong)(-uVar16 & uVar16);
                uVar2 = uVar21 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                iVar9 = (iVar18 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                if (iVar17 <= iVar9) {
                  iVar9 = iVar17;
                }
              }
              if (iVar9 != iVar17) {
                uVar16 = 0xffffffff;
                do {
                  plVar22 = *(longlong **)(plVar13[0x39] + 0x10 + (longlong)iVar9 * 0x20);
                  if (plVar22 != (longlong *)0x0) {
                    lVar20 = (**(code **)(*plVar22 + 8))(plVar22);
                    lVar12 = FUN_1405bb4b8();
                    if (((lVar12 != 0) && (*(int *)(lVar12 + 0x38) <= *(int *)(lVar20 + 0x38))) &&
                       (*(longlong *)
                         (*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
                        lVar12 + 0x30)) {
                      FUN_140bf51d2(&local_c0,plVar22);
                    }
                  }
                  uVar16 = uVar16 & ~(uint)uVar21;
                  puVar6 = (uint *)plVar13[0x3d];
                  if ((uint *)plVar13[0x3d] == (uint *)0x0) {
                    puVar6 = local_c8;
                  }
                  iVar8 = (int)plVar13[0x3e];
                  iVar9 = (int)uVar14;
                  lVar20 = (longlong)iVar9;
                  uVar7 = puVar6[lVar20] & uVar16;
                  if (uVar7 == 0) {
                    iVar10 = iVar8 + 0x1e;
                    if (-1 < iVar8 + -1) {
                      iVar10 = iVar8 + -1;
                    }
                    iVar10 = iVar10 >> 5;
                    iVar18 = iVar18 + 0x20;
                    iVar11 = iVar10;
                    if (iVar10 < iVar9) {
                      iVar11 = iVar9;
                    }
                    if (iVar9 < iVar10) {
                      lVar12 = 0;
                      do {
                        uVar7 = puVar6[lVar20 + lVar12 + 1];
                        if (uVar7 != 0) {
                          uVar14 = (ulonglong)(iVar9 + (int)lVar12 + 1);
                          uVar16 = 0xffffffff;
                          goto LAB_140bf4d34;
                        }
                        iVar18 = iVar18 + 0x20;
                        lVar12 = lVar12 + 1;
                      } while (iVar11 - lVar20 != lVar12);
                      uVar16 = 0xffffffff;
                      iVar9 = iVar11;
                    }
                    uVar14 = (ulonglong)(iVar9 + 1);
                    iVar9 = iVar8;
                  }
                  else {
LAB_140bf4d34:
                    uVar21 = (ulonglong)(-uVar7 & uVar7);
                    uVar2 = uVar21 * 2 + 1;
                    lVar20 = 0x3f;
                    if (uVar2 != 0) {
                      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    iVar9 = (iVar18 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                    if (iVar8 <= iVar9) {
                      iVar9 = iVar8;
                    }
                  }
                } while (iVar9 != iVar17);
              }
            }
LAB_140bf4d62:
            *(undefined1 *)(local_e0 + 5) = 1;
            plVar19 = local_e0;
            param_1 = local_e8;
            plVar22 = local_f0;
          }
          plVar19[3] = 0;
          plVar4 = (longlong *)plVar19[4];
          if (plVar4 != (longlong *)0x0) {
            plVar19[4] = 0;
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          *(undefined1 *)((longlong)plVar19 + 0x29) = 1;
          local_c0 = (undefined8 *)CONCAT44(DAT_14c7638f4,(int)DAT_14cb78c68);
          if (((int)plVar19[2] == 0) ||
             (local_80 = (longlong *)plVar13[3], DAT_14c9a1b08 == (undefined8 *)0x0)) {
            local_a8 = (longlong *)0x0;
            uStack_a0 = (longlong *)0x0;
            DAT_14c7638f4 = DAT_14c7638f4 + 1;
          }
          else {
            DAT_14c7638f4 = DAT_14c7638f4 + 1;
            (**(code **)*DAT_14c9a1b08)(DAT_14c9a1b08,&local_a8,&local_80,&local_c0);
            if (local_a8 != (longlong *)0x0) {
              FUN_14050f264(local_a8,plVar13[0x29]);
              lVar20 = plVar19[2];
              if ((longlong)(int)lVar20 != 0) {
                lVar12 = plVar19[1];
                lVar15 = 0;
                do {
                  FUN_140bf525c(plVar13,local_a8,*(undefined8 *)(lVar12 + lVar15),0);
                  lVar15 = lVar15 + 8;
                } while ((longlong)(int)lVar20 * 8 != lVar15);
              }
              FUN_140bf5976(local_a8,0);
              FUN_1407d0516(local_a8,4,100);
            }
          }
          plVar13 = uStack_a0;
          if ((longlong **)(plVar19 + 3) != &local_a8) {
            plVar19[3] = (longlong)local_a8;
            local_a8 = (longlong *)0x0;
            plVar4 = (longlong *)plVar19[4];
            if (uStack_a0 != plVar4) {
              uStack_a0 = (longlong *)0x0;
              plVar19[4] = (longlong)plVar13;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar13 = plVar4 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)*plVar13 == 0) {
                  (**(code **)*plVar4)(plVar4);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar4 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
            }
          }
          plVar13 = uStack_a0;
          uVar21 = local_d0;
          uVar14 = local_d8;
          iVar17 = local_f4;
          uVar16 = local_f8;
          if (uStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar19 = uStack_a0 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*uStack_a0)(uStack_a0);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          lVar20 = *(longlong *)(param_1 + 0xe0);
          lVar12 = local_100;
        }
        *(undefined1 *)(lVar20 + 0x29 + lVar12) = 0;
        iVar18 = (int)plVar22[3];
      }
      uVar16 = uVar16 & ~(uint)uVar14;
      plVar13 = (longlong *)plVar22[2];
      if ((longlong *)plVar22[2] == (longlong *)0x0) {
        plVar13 = plVar22;
      }
      iVar9 = (int)uVar21;
      lVar20 = (longlong)iVar9;
      uVar7 = *(uint *)((longlong)plVar13 + lVar20 * 4) & uVar16;
      if (uVar7 == 0) {
        iVar8 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar8 = iVar18 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar8;
        if (iVar8 < iVar9) {
          iVar10 = iVar9;
        }
        if (iVar8 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar7 = *(uint *)((longlong)plVar13 + lVar12 * 4 + lVar20 * 4 + 4);
          if (uVar7 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar20 == lVar12) goto LAB_140bf4f41;
        }
        uVar21 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar14 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar9 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      plVar13 = local_f0;
      lVar20 = local_e8;
    } while (iVar9 < iVar18);
  }
LAB_140bf4f41:
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf51d2 FUN_140bf51d2 body=138 status=ok
// SIG undefined FUN_140bf51d2(void)

void FUN_140bf51d2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_2;
  if (*(char *)(param_2 + 0x119) == '\x01') {
    for (lVar4 = FUN_1401f6e4a(param_2 + 0x18);
        (lVar3 = param_2, lVar4 != 0 && (lVar3 = lVar4, *(char *)(lVar4 + 0x119) == '\x01'));
        lVar4 = FUN_1401f6e4a(lVar4 + 0x18)) {
    }
  }
  if (*(longlong *)(lVar3 + 0x1fc) == *(longlong *)*param_1) {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_141881ae6(plVar2,iVar1);
    }
    *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 140bf525c FUN_140bf525c body=1787 status=ok
// SIG undefined FUN_140bf525c(void)

void FUN_140bf525c(longlong *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int *piVar1;
  short sVar2;
  byte *pbVar3;
  char cVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined1 auStack_e8 [47];
  char local_b9;
  undefined8 local_b8;
  longlong *local_b0;
  byte *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_80;
  uint local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar5 = *(uint **)(param_3 + 8);
  if (puVar5 == (uint *)0x0) {
    puVar5 = &DAT_14c9485f0;
  }
  local_b9 = param_4;
  if (((*(byte *)((longlong)param_1 + 0x391) & 1) == 0) &&
     ((int)param_1[0x76] != *(int *)((longlong)param_1 + 0x3dc))) {
    plVar7 = param_1 + 0x7c;
    if ((longlong *)param_1[0x7d] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0x7d];
    }
    iVar12 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[0x7e] - 1U & *puVar5) * 4);
    if (iVar12 != -1) {
      do {
        lVar15 = param_1[0x75] + (longlong)iVar12 * 0x38;
        if (*(uint *)(param_1[0x75] + (longlong)iVar12 * 0x38) == *puVar5) {
          if ((lVar15 != 0) && ((short *)(lVar15 + 0x28) != (short *)0x0)) {
            sVar2 = *(short *)(lVar15 + 0x28);
            if ((-1 < sVar2) && ((int)sVar2 < (int)param_1[0x74])) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
            }
            goto LAB_140bf5646;
          }
          break;
        }
        iVar12 = *(int *)(lVar15 + 0x30);
      } while (iVar12 != -1);
    }
  }
  local_a8 = (byte *)0x0;
  plStack_a0 = (longlong *)0x0;
  puVar14 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
    puVar14 = *(undefined4 **)(param_3 + 8);
  }
  cVar4 = (**(code **)(*param_1 + 0x360))(param_1,&local_a8,puVar14);
  if (cVar4 != '\0') {
    if (*(longlong *)(param_3 + 0x148) != 0) {
      local_90 = (longlong *)CONCAT44(local_90._4_4_,DAT_14cb78f80);
      local_98 = DAT_14cb78f78;
      FUN_1448075d0(local_70);
      if (local_a8 != (byte *)0x0) {
        if ((*local_a8 & 2) == 0) {
          plVar7 = &DAT_14c9a1288;
        }
        else {
          plVar7 = (longlong *)(*(longlong *)(local_a8 + 8) + 0x18);
        }
        if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
          plVar9 = plVar7 + 8;
          if ((longlong *)plVar7[9] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar7[9];
          }
          iVar12 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar7[10] - 1U & local_70[0]) * 4);
          if (iVar12 != -1) {
            do {
              lVar15 = *plVar7 + (longlong)iVar12 * 0x40;
              if (*(uint *)(*plVar7 + (longlong)iVar12 * 0x40) == local_70[0]) {
                if ((((lVar15 != 0) &&
                     (puVar8 = (undefined8 *)(lVar15 + 0x28), puVar8 != (undefined8 *)0x0)) &&
                    ((byte *)*puVar8 != (byte *)0x0)) && ((*(byte *)*puVar8 & 0x40) == 0))
                goto LAB_140bf537e;
                break;
              }
              iVar12 = *(int *)(lVar15 + 0x38);
            } while (iVar12 != -1);
          }
        }
      }
      puVar8 = &DAT_14c9a1308;
LAB_140bf537e:
      local_98 = *puVar8;
      local_90 = (longlong *)puVar8[1];
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14475b384(param_1,param_2,&local_98,&DAT_14c9a1640);
      plVar7 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_90 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_90)(local_90);
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
    if (*(longlong *)(param_3 + 0x160) != 0) {
      local_90 = (longlong *)CONCAT44(local_90._4_4_,DAT_14cb78f98);
      local_98 = DAT_14cb78f90;
      FUN_1448075d0(local_70);
      if (local_a8 != (byte *)0x0) {
        if ((*local_a8 & 2) == 0) {
          plVar7 = &DAT_14c9a1288;
        }
        else {
          plVar7 = (longlong *)(*(longlong *)(local_a8 + 8) + 0x18);
        }
        if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
          plVar9 = plVar7 + 8;
          if ((longlong *)plVar7[9] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar7[9];
          }
          iVar12 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar7[10] - 1U & local_70[0]) * 4);
          if (iVar12 != -1) {
            do {
              lVar15 = *plVar7 + (longlong)iVar12 * 0x40;
              if (*(uint *)(*plVar7 + (longlong)iVar12 * 0x40) == local_70[0]) {
                if (((lVar15 != 0) &&
                    (puVar8 = (undefined8 *)(lVar15 + 0x28), puVar8 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar8 != (byte *)0x0 && ((*(byte *)*puVar8 & 0x40) == 0))))
                goto LAB_140bf5806;
                break;
              }
              iVar12 = *(int *)(lVar15 + 0x38);
            } while (iVar12 != -1);
          }
        }
      }
      puVar8 = &DAT_14c9a1308;
LAB_140bf5806:
      local_98 = *puVar8;
      local_90 = (longlong *)puVar8[1];
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14475b384(param_1,param_2,&local_98,&DAT_14c9a1640);
      plVar7 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_90 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_90)(local_90);
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
    if ((longlong)*(int *)(param_3 + 0x180) != 0) {
      lVar15 = *(longlong *)(param_3 + 0x178);
      lVar11 = (longlong)*(int *)(param_3 + 0x180) * 0x40 + lVar15;
      iVar12 = 0;
      do {
        if ((((local_b9 != '\0') || ((char)param_1[0x72] != '\0')) ||
            (lVar6 = FUN_1401f2ad8(lVar15), lVar6 != 0)) && (*(longlong *)(lVar15 + 0x28) != 0)) {
          local_90 = (longlong *)CONCAT44(local_90._4_4_,DAT_14cb78fb0);
          local_98 = DAT_14cb78fa8;
          FUN_1448075d0(local_70,&local_98);
          plVar7 = &DAT_14c9a1308;
          if (local_a8 != (byte *)0x0) {
            plVar9 = &DAT_14c9a1288;
            if ((*local_a8 & 2) != 0) {
              plVar9 = (longlong *)(*(longlong *)(local_a8 + 8) + 0x18);
            }
            plVar7 = &DAT_14c9a1308;
            if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
              plVar7 = plVar9 + 8;
              if ((longlong *)plVar9[9] != (longlong *)0x0) {
                plVar7 = (longlong *)plVar9[9];
              }
              iVar13 = *(int *)((longlong)plVar7 +
                               (ulonglong)((int)plVar9[10] - 1U & local_70[0]) * 4);
              plVar7 = &DAT_14c9a1308;
              if (iVar13 != -1) {
                do {
                  lVar6 = *plVar9 + (longlong)iVar13 * 0x40;
                  if (*(uint *)(*plVar9 + (longlong)iVar13 * 0x40) == local_70[0]) {
                    plVar7 = &DAT_14c9a1308;
                    if (lVar6 == 0) goto LAB_140bf54e8;
                    plVar9 = (longlong *)(lVar6 + 0x28);
                    plVar7 = &DAT_14c9a1308;
                    if ((plVar9 == (longlong *)0x0) ||
                       (((byte *)*plVar9 != (byte *)0x0 &&
                        (plVar7 = plVar9, (*(byte *)*plVar9 & 0x40) == 0)))) goto LAB_140bf54e8;
                    break;
                  }
                  iVar13 = *(int *)(lVar6 + 0x38);
                } while (iVar13 != -1);
                plVar7 = &DAT_14c9a1308;
              }
            }
          }
LAB_140bf54e8:
          puVar8 = &DAT_14c9a1308;
          if (*plVar7 != 0) {
            puVar8 = (undefined8 *)FUN_14071eafe(*plVar7,iVar12);
          }
          local_b0 = (longlong *)CONCAT44(local_b0._4_4_,DAT_14cb78fc8);
          local_b8 = DAT_14cb78fc0;
          FUN_1448075d0(&local_98,&local_b8);
          pbVar3 = (byte *)*puVar8;
          puVar8 = &DAT_14c9a1308;
          if (pbVar3 != (byte *)0x0) {
            plVar7 = &DAT_14c9a1288;
            if ((*pbVar3 & 2) != 0) {
              plVar7 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
            }
            puVar8 = &DAT_14c9a1308;
            if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
              plVar9 = plVar7 + 8;
              if ((longlong *)plVar7[9] != (longlong *)0x0) {
                plVar9 = (longlong *)plVar7[9];
              }
              iVar13 = *(int *)((longlong)plVar9 +
                               (ulonglong)((int)plVar7[10] - 1U & (uint)local_98) * 4);
              puVar8 = &DAT_14c9a1308;
              if (iVar13 != -1) {
                do {
                  lVar6 = *plVar7 + (longlong)iVar13 * 0x40;
                  if (*(uint *)(*plVar7 + (longlong)iVar13 * 0x40) == (uint)local_98) {
                    puVar8 = &DAT_14c9a1308;
                    if (lVar6 == 0) goto LAB_140bf55be;
                    puVar10 = (undefined8 *)(lVar6 + 0x28);
                    puVar8 = &DAT_14c9a1308;
                    if ((puVar10 == (undefined8 *)0x0) ||
                       (((byte *)*puVar10 != (byte *)0x0 &&
                        (puVar8 = puVar10, (*(byte *)*puVar10 & 0x40) == 0)))) goto LAB_140bf55be;
                    break;
                  }
                  iVar13 = *(int *)(lVar6 + 0x38);
                } while (iVar13 != -1);
                puVar8 = &DAT_14c9a1308;
              }
            }
          }
LAB_140bf55be:
          local_b8 = *puVar8;
          local_b0 = (longlong *)puVar8[1];
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
            UNLOCK();
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_14475b384(param_1,param_2,&local_b8,&DAT_14c9a1640);
          plVar7 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_b0 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_b0)(local_b0);
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
        iVar12 = iVar12 + 1;
        lVar15 = lVar15 + 0x40;
      } while (lVar15 != lVar11);
    }
  }
  plVar7 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_a0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_140bf5646:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bf5976 FUN_140bf5976 body=259 status=ok
// SIG undefined FUN_140bf5976(void)

void FUN_140bf5976(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)FUN_14050fd64();
  plStack_30 = *(longlong **)(param_1 + 0x10);
  if (plStack_30 == (longlong *)0x0) {
LAB_140bf5a20:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    bVar7 = true;
  }
  else {
    iVar5 = (int)plStack_30[1];
    do {
      if (iVar5 == 0) goto LAB_140bf5a20;
      LOCK();
      iVar4 = (int)plStack_30[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plStack_30 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    local_38 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    bVar7 = false;
  }
  plVar3 = plStack_30;
  (**(code **)(*plVar6 + 0x578))(plVar6,&local_38,param_2);
  plVar6 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (!bVar7) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bf5a7a FUN_140bf5a7a body=49 status=ok
// SIG undefined FUN_140bf5a7a(void)

longlong FUN_140bf5a7a(void)

{
  if (DAT_14cb4d988 == 0) {
    FUN_140f50038(&DAT_14cb4d988,&PTR_s__Script_GeometryScriptingCore_14af1a710);
  }
  return DAT_14cb4d988;
}



// FUNCTION 140bf5aac FUN_140bf5aac body=1091 status=ok
// SIG undefined FUN_140bf5aac(void)

void FUN_140bf5aac(longlong param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_1 + 0x158;
  FUN_140dbc30e();
  if (0 < *(int *)(param_1 + 0x50)) {
    local_98 = **(longlong **)(param_1 + 0x1b8);
    plVar4 = (longlong *)(param_1 + 0x48);
    local_78 = param_1 + 0x58;
    local_88 = param_1 + 0xb8;
    uVar14 = 0;
    bVar10 = false;
    local_a0 = plVar4;
    do {
      uVar13 = (uint)uVar14;
      uVar11 = 1 << ((byte)uVar14 & 0x1f);
      lVar6 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar6 = local_78;
      }
      uVar7 = uVar14 >> 5 & 0x7ffffff;
      if ((*(uint *)(lVar6 + uVar7 * 4) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar6 = *plVar4 + uVar14 * 0x60;
        sVar1 = *(short *)(*plVar4 + 0x4a + uVar14 * 0x60);
        if (sVar1 != -1) {
          lVar9 = *(longlong *)(param_1 + 0x28);
          lVar12 = *(longlong *)(param_1 + 0x1b8);
          cVar2 = FUN_140bbead8(lVar9 + 0x28,sVar1,*(undefined2 *)(lVar12 + 0x11c));
          if (cVar2 != '\0') {
            local_90 = lVar6;
            if (*(int *)(param_1 + 200) != 0) {
              lVar6 = *(longlong *)(param_1 + 0xc0);
              if (*(longlong *)(param_1 + 0xc0) == 0) {
                lVar6 = local_88;
              }
              iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 200) + 0x7fffffffU & uVar13) *
                                       4);
              do {
                iVar3 = iVar8;
                if (iVar3 == -1) goto LAB_140bf5bc3;
                lVar6 = *(longlong *)(param_1 + 0x80);
                iVar8 = *(int *)(lVar6 + 8 + (longlong)iVar3 * 0x10);
              } while (uVar14 != *(uint *)(lVar6 + (longlong)iVar3 * 0x10));
LAB_140bf5c89:
              lVar5 = (longlong)iVar3;
              FUN_1405e0ab4(lVar9 + 0x28,*(undefined2 *)(lVar6 + 4 + lVar5 * 0x10),
                            *(undefined2 *)(lVar12 + 0x11a));
              lVar9 = local_98;
              lVar6 = *(longlong *)(param_1 + 0x80);
LAB_140bf5cb0:
              iVar3 = iVar8;
              if (iVar3 != -1) goto code_r0x000140bf5cb5;
              sVar1 = *(short *)(lVar6 + 4 + lVar5 * 0x10);
              if (sVar1 != -1) {
                lVar6 = (longlong)*(int *)(local_90 + 0x50) * 0x58;
                local_50 = 0x10000000000;
                FUN_140dba9e6(local_70,*(undefined2 *)(local_98 + 0x16 + lVar6));
                FUN_140dba9e6(local_70,*(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0x120));
                lVar9 = (longlong)*(int *)(lVar9 + 0x20 + lVar6);
                if (lVar9 != 0) {
                  lVar6 = *(longlong *)(local_98 + 0x18 + lVar6);
                  lVar12 = 0;
                  do {
                    FUN_140dba9e6(local_70,*(undefined2 *)(lVar6 + lVar12));
                    lVar12 = lVar12 + 2;
                  } while (lVar9 * 2 != lVar12);
                }
                lVar6 = local_90;
                FUN_140dbd3cc(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(local_90 + 0x4a),
                              sVar1,local_70);
                *(short *)(lVar6 + 0x4a) = sVar1;
                plVar4 = local_a0;
                goto LAB_140bf5c07;
              }
            }
LAB_140bf5bc3:
            FUN_140bf5ef0(param_1,uVar14 & 0xffffffff);
            bVar10 = true;
            plVar4 = local_a0;
            if ((longlong)uVar14 < (longlong)*(int *)(param_1 + 0x170)) {
              lVar6 = *(longlong *)(param_1 + 0x168);
              if (*(longlong *)(param_1 + 0x168) == 0) {
                lVar6 = local_80;
              }
              uVar13 = *(uint *)(lVar6 + uVar7 * 4);
              if ((uVar13 & uVar11) != 0) {
                *(uint *)(lVar6 + uVar7 * 4) = uVar13 & ~uVar11;
              }
            }
            goto LAB_140bf5c07;
          }
        }
        plVar4 = local_a0;
        if (*(short *)(lVar6 + 0x48) != -1) {
          lVar9 = *(longlong *)(param_1 + 0x28);
          lVar12 = *(longlong *)(param_1 + 0x1b8);
          cVar2 = FUN_140bbead8(lVar9 + 0x28,*(short *)(lVar6 + 0x48),
                                *(undefined2 *)(lVar12 + 0x11c));
          plVar4 = local_a0;
          if (cVar2 != '\0') {
            if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
              lVar6 = *(longlong *)(param_1 + 0xc0);
              if (*(longlong *)(param_1 + 0xc0) == 0) {
                lVar6 = local_88;
              }
              iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 200) + 0x7fffffffU & uVar13) *
                                       4);
              if (iVar8 != -1) {
                lVar6 = *(longlong *)(param_1 + 0x80);
                iVar3 = iVar8;
                do {
                  if (uVar14 == *(uint *)(lVar6 + (longlong)iVar3 * 0x10)) {
                    if (*(int *)(param_1 + 200) != 0) {
                      while (iVar3 = iVar8, iVar3 != -1) {
                        iVar8 = *(int *)(lVar6 + 8 + (longlong)iVar3 * 0x10);
                        if (uVar14 == *(uint *)(lVar6 + (longlong)iVar3 * 0x10)) {
                          do {
                            FUN_1405e0ab4(lVar9 + 0x28,
                                          *(undefined2 *)(lVar6 + 4 + (longlong)iVar3 * 0x10),
                                          *(undefined2 *)(lVar12 + 0x11a));
                            FUN_140dbca1e((longlong *)(param_1 + 0x80),iVar3);
                            do {
                              iVar3 = iVar8;
                              if (iVar3 == -1) goto LAB_140bf5dc5;
                              lVar6 = *(longlong *)(param_1 + 0x80);
                              iVar8 = *(int *)(lVar6 + 8 + (longlong)iVar3 * 0x10);
                            } while (uVar14 != *(uint *)(lVar6 + (longlong)iVar3 * 0x10));
                            lVar9 = *(longlong *)(param_1 + 0x28);
                            lVar12 = *(longlong *)(param_1 + 0x1b8);
                          } while( true );
                        }
                      }
                    }
                    break;
                  }
                  iVar3 = *(int *)((longlong)iVar3 * 0x10 + lVar6 + 8);
                } while (iVar3 != -1);
              }
            }
LAB_140bf5dc5:
            FUN_140bf5ef0(param_1,uVar14 & 0xffffffff);
            bVar10 = true;
            plVar4 = local_a0;
            if ((longlong)uVar14 < (longlong)*(int *)(param_1 + 0x170)) {
              lVar6 = *(longlong *)(param_1 + 0x168);
              if (*(longlong *)(param_1 + 0x168) == 0) {
                lVar6 = local_80;
              }
              uVar13 = *(uint *)(lVar6 + uVar7 * 4);
              if ((uVar13 & uVar11) != 0) {
                *(uint *)(lVar6 + uVar7 * 4) = uVar13 & ~uVar11;
              }
            }
          }
        }
      }
LAB_140bf5c07:
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)*(int *)(param_1 + 0x50));
    if (bVar10) {
      FUN_140bf6072(plVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140bf5cb5:
  iVar8 = *(int *)(lVar6 + 8 + (longlong)iVar3 * 0x10);
  if (uVar14 == *(uint *)(lVar6 + (longlong)iVar3 * 0x10)) goto code_r0x000140bf5ccb;
  goto LAB_140bf5cb0;
code_r0x000140bf5ccb:
  lVar9 = *(longlong *)(param_1 + 0x28);
  lVar12 = *(longlong *)(param_1 + 0x1b8);
  goto LAB_140bf5c89;
}



// FUNCTION 140bf5ef0 FUN_140bf5ef0 body=384 status=ok
// SIG undefined FUN_140bf5ef0(void)

void FUN_140bf5ef0(longlong param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [39];
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = (longlong)param_2 * 0x60;
  lVar4 = *(longlong *)(param_1 + 0x48) + lVar8;
  if (*(short *)(*(longlong *)(param_1 + 0x48) + 0x4c + lVar8) != -1) {
    lVar5 = FUN_14479d2ce(lVar4 + 0x18);
    if (lVar5 != 0) {
      iVar7 = *(int *)(lVar4 + 0x4c);
      FUN_147546104(lVar5,&local_41);
      FUN_14754610e(lVar5,iVar7 << 0x10 | (uint)local_41);
    }
    FUN_14055c88e(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(lVar4 + 0x48),
                  *(longlong *)(param_1 + 0x1b8) + 0x144);
  }
  if ((*(byte *)(lVar4 + 0x5e) & 0x10) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x120) + 4 + (longlong)*(int *)(lVar4 + 0x50) * 8);
    *piVar1 = *piVar1 + -1;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(lVar4 + 0x50) * 8);
  *piVar1 = *piVar1 + -1;
  lVar4 = *(longlong *)(param_1 + 0x48) + lVar8;
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x58 + lVar8) == '\x01') {
    *(undefined1 *)(lVar4 + 0x58) = 0;
  }
  (*(code *)(&PTR_FUN_14a4c7e50)[*(byte *)(lVar4 + 0x10)])();
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x78) * 0x60) = param_2;
  }
  *(undefined4 *)(lVar4 + lVar8) = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x7c)) {
    uVar6 = *(undefined4 *)(param_1 + 0x78);
  }
  *(undefined4 *)(lVar4 + lVar8 + 4) = uVar6;
  *(int *)(param_1 + 0x78) = param_2;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  lVar4 = param_1 + 0x58;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x68);
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf6072 FUN_140bf6072 body=349 status=ok
// SIG undefined FUN_140bf6072(void)

void FUN_140bf6072(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  
  iVar1 = (int)param_1[5];
  if (iVar1 == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = -1;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    uVar11 = (ulonglong)(iVar1 + 0x1fU >> 5);
    iVar10 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
    uVar6 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
    do {
      bVar12 = uVar11 == 0;
      uVar11 = uVar11 - 1;
      if (bVar12) goto LAB_140bf60e3;
      iVar10 = iVar10 + 0x20;
      uVar7 = uVar6 & *(uint *)((longlong)plVar9 + uVar11 * 4);
      uVar6 = 0xffffffff;
    } while (uVar7 == 0);
    uVar11 = (ulonglong)uVar7 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = -(((uint)lVar3 ^ 0x3f) + iVar10);
  }
LAB_140bf60e3:
  iVar1 = iVar5 + 1;
  iVar10 = (int)param_1[1];
  if (iVar1 < iVar10) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar11 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar3 = *param_1;
      do {
        lVar8 = (longlong)(int)uVar11 * 0x60;
        if (iVar5 < (int)uVar11) {
          iVar10 = *(int *)(lVar3 + lVar8);
          iVar2 = *(int *)(lVar3 + 4 + lVar8);
          uVar11 = (ulonglong)iVar2;
          if (uVar11 != 0xffffffffffffffff) {
            *(int *)(lVar3 + uVar11 * 0x60) = iVar10;
          }
          if (iVar10 == -1) {
            *(int *)(param_1 + 6) = iVar2;
          }
          else {
            *(int *)(lVar3 + 4 + (longlong)iVar10 * 0x60) = iVar2;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar11 = (ulonglong)*(uint *)(lVar3 + 4 + lVar8);
        }
      } while ((int)uVar11 != -1);
      iVar10 = (int)param_1[1];
    }
    if (iVar10 != iVar1) {
      *(int *)(param_1 + 1) = iVar1;
    }
    *(int *)(param_1 + 5) = iVar1;
    iVar5 = iVar5 + 0x20;
    if (-1 < iVar1) {
      iVar5 = iVar1;
    }
    iVar10 = iVar1;
    if (iVar1 % 0x20 != 0) {
      plVar9 = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar9 = (longlong *)param_1[4];
      }
      bVar4 = -(char)(iVar1 % 0x20);
      *(uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
      iVar10 = (int)param_1[1];
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar10) {
    return;
  }
  FUN_1448fc38a(param_1);
  return;
}



// FUNCTION 140bf61d0 FUN_140bf61d0 body=1003 status=ok
// SIG undefined FUN_140bf61d0(void)

ulonglong FUN_140bf61d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  LARGE_INTEGER *pLVar9;
  LARGE_INTEGER *pLVar10;
  code *pcVar11;
  longlong lVar12;
  undefined1 auStack_2e8 [32];
  byte *local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  byte *local_2a8;
  longlong local_2a0;
  int *local_298;
  byte local_28d;
  int local_28c;
  LARGE_INTEGER local_288;
  LARGE_INTEGER local_280 [64];
  LARGE_INTEGER *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  pcVar11 = QueryPerformanceCounter_exref;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) != 0) {
    local_298 = &local_28c;
    local_28c = 0;
    local_2c8 = &local_28d;
    local_28d = 0;
    local_2b0 = &local_2a0;
    local_2c0 = &local_2b8;
    local_2b8 = param_1;
    local_2a8 = local_2c8;
    local_2a0 = param_1;
    do {
      plVar6 = (longlong *)FUN_140bf6712(param_1 + 0x40);
      if (plVar6 == (longlong *)0x0) break;
      if (((int)plVar6[1] != 0) && ((longlong *)*plVar6 != (longlong *)0x0)) {
        (**(code **)(*(longlong *)*plVar6 + 0x60))();
      }
      plVar2 = local_2b0;
      if (plVar6[3] != 0) {
        LOCK();
        piVar1 = (int *)(plVar6[3] + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      FUN_140bf6920(plVar6);
      *(int *)plVar2[1] = *(int *)plVar2[1] + 1;
      if ((DAT_14c9a8020 <= 0.0) ||
         (QueryPerformanceCounter(local_280),
         (double)local_280[0].QuadPart * DAT_14c83f420 + 16777216.0 <= DAT_14c9a8020)) {
        bVar3 = 0;
      }
      else {
        DAT_14c9a8028 = DAT_14c9a8029 ^ 1;
        bVar3 = 1;
      }
      *local_2a8 = *local_2a8 | bVar3;
    } while (local_28d == 0);
    FUN_140bf65bc(&local_2c8,param_1 + 0xc0,param_1 + 0x40);
    FUN_140bf65bc(&local_2c8,param_1 + 0x140,param_1 + 0xc0);
    local_80 = (LARGE_INTEGER *)0x0;
    local_78 = 0x4000000000;
    lVar7 = FUN_140bf6712();
    if (lVar7 == 0) {
      pLVar9 = (LARGE_INTEGER *)0x0;
      iVar4 = 0;
    }
    else {
      do {
        uVar8 = local_78;
        lVar12 = (longlong)(int)local_78;
        uVar5 = (int)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,uVar5);
        if (local_78._4_4_ < uVar5) {
          FUN_1470e81d8(local_280,uVar8 & 0xffffffff);
        }
        pLVar9 = local_80;
        if (local_80 == (LARGE_INTEGER *)0x0) {
          pLVar9 = local_280;
        }
        pLVar9[lVar12].QuadPart = lVar7;
        lVar7 = FUN_140bf6712(param_1 + 0x1c0);
      } while (lVar7 != 0);
      pLVar9 = local_80;
      iVar4 = (int)local_78;
    }
    pLVar10 = local_280;
    if (pLVar9 != (LARGE_INTEGER *)0x0) {
      pLVar10 = pLVar9;
    }
    if (iVar4 != 0) {
      uVar8 = DAT_14c872be0 - DAT_14c75f7bc;
      lVar7 = 0;
      do {
        plVar6 = *(longlong **)((longlong)pLVar10 + lVar7);
        if ((ulonglong)plVar6[2] < uVar8) {
          if (plVar6[3] != 0) {
            LOCK();
            piVar1 = (int *)(plVar6[3] + 0x10);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
          }
          FUN_140bf6920(plVar6);
          *local_298 = *local_298 + 1;
        }
        else {
          if ((DAT_14c9a8020 <= 0.0) ||
             ((*pcVar11)(&local_288),
             (double)local_288.QuadPart * DAT_14c83f420 + 16777216.0 <= DAT_14c9a8020)) {
            bVar3 = 0;
          }
          else {
            DAT_14c9a8028 = DAT_14c9a8029 ^ 1;
            bVar3 = 1;
          }
          local_28d = local_28d | bVar3;
          if (local_28d == 0) {
            if (((int)plVar6[1] != 0) && ((longlong *)*plVar6 != (longlong *)0x0)) {
              (**(code **)(*(longlong *)*plVar6 + 0x60))();
            }
            plVar2 = local_2b0;
            if (plVar6[3] != 0) {
              LOCK();
              piVar1 = (int *)(plVar6[3] + 0x10);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
            }
            FUN_140bf6920(plVar6);
            *(int *)plVar2[1] = *(int *)plVar2[1] + 1;
            pcVar11 = QueryPerformanceCounter_exref;
            if (DAT_14c9a8020 <= 0.0) {
              bVar3 = 0;
            }
            else {
              QueryPerformanceCounter(&local_288);
              if (DAT_14c9a8020 < (double)local_288.QuadPart * DAT_14c83f420 + 16777216.0) {
                DAT_14c9a8028 = DAT_14c9a8029 ^ 1;
                bVar3 = 1;
              }
              else {
                bVar3 = 0;
              }
            }
            *local_2a8 = *local_2a8 | bVar3;
          }
          else {
            FUN_140be5b5e(param_1 + 0x1c0,plVar6);
          }
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar4 * 8 != lVar7);
    }
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - local_28c;
    UNLOCK();
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x10);
    if (local_80 != (LARGE_INTEGER *)0x0) {
      uVar8 = FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140bf65bc FUN_140bf65bc body=340 status=ok
// SIG undefined FUN_140bf65bc(void)

void FUN_140bf65bc(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  do {
    plVar7 = (longlong *)FUN_140bf6712(param_2);
    if (plVar7 == (longlong *)0x0) break;
    if ((param_3 == 0) || (*(char *)*param_1 == '\0')) {
      lVar2 = param_1[1];
      if (((int)plVar7[1] != 0) && ((longlong *)*plVar7 != (longlong *)0x0)) {
        (**(code **)(*(longlong *)*plVar7 + 0x60))();
      }
      lVar3 = *(longlong *)(lVar2 + 8);
      if (plVar7[3] != 0) {
        LOCK();
        piVar1 = (int *)(plVar7[3] + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      FUN_140bf6920(plVar7);
      piVar1 = *(int **)(lVar3 + 8);
      *piVar1 = *piVar1 + 1;
      if (DAT_14c9a8020 <= 0.0) {
LAB_140bf6699:
        bVar5 = 0;
      }
      else {
        QueryPerformanceCounter(&local_78);
        if ((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0 <= DAT_14c9a8020)
        goto LAB_140bf6699;
        DAT_14c9a8028 = DAT_14c9a8029 ^ 1;
        bVar5 = 1;
      }
      pbVar4 = *(byte **)(lVar2 + 0x10);
      *pbVar4 = *pbVar4 | bVar5;
      cVar6 = *(char *)*param_1;
    }
    else {
      FUN_140be5b5e(param_3,plVar7);
      cVar6 = '\x02';
    }
  } while (cVar6 != '\x01');
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf6712 FUN_140bf6712 body=526 status=ok
// SIG undefined FUN_140bf6712(void)

undefined8 FUN_140bf6712(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  
  do {
    while( true ) {
      do {
        uVar5 = *param_1;
        uVar4 = param_1[8];
        uVar6 = (uint)uVar5;
        puVar8 = (ulonglong *)0x0;
        if ((uVar5 & 0x3ffffff) != 0) {
          puVar8 = (ulonglong *)
                   ((ulonglong)((uVar6 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar6 & 0x3ffffff) >> 0xe) * 8));
        }
        uVar1 = *puVar8;
      } while (uVar5 != *param_1);
      uVar7 = (uint)uVar1;
      if ((((uint)uVar4 ^ uVar6) & 0x3ffffff) != 0) break;
      if ((uVar1 & 0x3ffffff) == 0) {
        return 0;
      }
      uVar5 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
      if (uVar5 >> 0x1a < uVar4 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      LOCK();
      if (uVar4 == param_1[8]) {
        param_1[8] = uVar5 | uVar7 & 0x3ffffff;
      }
      UNLOCK();
    }
    if ((uVar1 & 0x3ffffff) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulonglong)((uVar7 & 0x3fff) * 0x18) +
              *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar7 & 0x3ffffff) >> 0xe) * 8);
    }
    uVar2 = *(undefined8 *)(lVar3 + 8);
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar5 == uVar1) {
      *param_1 = uVar4 | uVar7 & 0x3ffffff;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  FUN_1447d080c(uVar6 & 0x3ffffff);
  return uVar2;
}



// FUNCTION 140bf6920 FUN_140bf6920 body=379 status=ok
// SIG undefined FUN_140bf6920(void)

ulonglong FUN_140bf6920(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_140bf6948;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
LAB_140bf6948:
  uVar2 = FUN_14493c560();
  if (uVar2 == 0) {
    uVar3 = 0;
    uVar7 = 0;
    lVar6 = 0;
  }
  else {
    uVar7 = (ulonglong)(uVar2 >> 0xe);
    uVar3 = uVar2 & 0x3fff;
    lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
  }
  *(longlong **)(lVar6 + 8) = param_1;
  do {
    uVar5 = DAT_14c9a8040;
    uVar4 = (DAT_14c9a8040 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < DAT_14c9a8040 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
    }
    *(uint *)(lVar6 + 0x10) = (uint)uVar5 & 0x3ffffff;
    LOCK();
    bVar8 = uVar5 != DAT_14c9a8040;
    uVar4 = uVar4 | uVar2;
    if (bVar8) {
      uVar5 = DAT_14c9a8040;
      uVar4 = DAT_14c9a8040;
    }
    DAT_14c9a8040 = uVar4;
    UNLOCK();
  } while (bVar8);
  return uVar5;
}



// FUNCTION 140bf6aa4 FUN_140bf6aa4 body=553 status=ok
// SIG undefined FUN_140bf6aa4(void)

undefined8 * FUN_140bf6aa4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140bf6cce(param_1,uVar1);
  *param_1 = &PTR_FUN_14b1f2470;
  param_1[5] = &PTR_FUN_14b1f2aa0;
  param_1[6] = &PTR_LAB_14b1f2ae0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 2;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x69] = 2;
  *(undefined4 *)(param_1 + 0x6d) = 0x3f800000;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0x7f7fffff;
  param_1[0x7a] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x78] = DAT_14c8464e0;
  param_1[0x79] = uVar1;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(byte *)(param_1 + 0x7d) = *(byte *)(param_1 + 0x7d) & 0xc0 | 4;
  *(undefined4 *)((longlong)param_1 + 0x41f) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  uVar1 = DAT_14c8463e8;
  param_1[0x88] = DAT_14c8463e0;
  param_1[0x89] = uVar1;
  uVar1 = DAT_14c8463d8;
  param_1[0x86] = DAT_14c8463d0;
  param_1[0x87] = uVar1;
  param_1[0x8d] = 0xbf800000bf800000;
  uVar1 = DAT_14c8463f8;
  param_1[0x8e] = DAT_14c8463f0;
  param_1[0x8f] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0x90] = DAT_14c8463f0;
  param_1[0x91] = uVar1;
  *(undefined4 *)(param_1 + 0x92) = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0x93] = DAT_14c8463f0;
  param_1[0x94] = uVar1;
  param_1[0x99] = 0;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4d6) = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bd) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x4fc71eb4;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0x800000;
  param_1[0x9f] = 0;
  uVar1 = DAT_14c8463e8;
  param_1[0xa2] = DAT_14c8463e0;
  param_1[0xa3] = uVar1;
  uVar1 = DAT_14c8463d8;
  param_1[0xa0] = DAT_14c8463d0;
  param_1[0xa1] = uVar1;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfe;
  *(byte *)(param_1 + 0x6b) = (*(byte *)(param_1 + 0x6b) & 0xfc) + 1;
  *(byte *)((longlong)param_1 + 0x36c) = *(byte *)((longlong)param_1 + 0x36c) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x4d5) = 0;
  param_1[0x6e] = 0x405e000000000000;
  param_1[0x6f] = 0xc066800000000000;
  param_1[0x70] = 0;
  return param_1;
}



// FUNCTION 140bf6cce FUN_140bf6cce body=323 status=ok
// SIG undefined FUN_140bf6cce(void)

undefined8 * FUN_140bf6cce(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140bf6e12();
  *param_1 = &PTR_FUN_14a863c70;
  param_1[5] = &PTR_FUN_14a864280;
  param_1[6] = &PTR_LAB_14a8642c0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x4c] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0x87 | 0x68;
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xfc | 2;
  param_1[0x3f] = 0x3d4ccccd3dcccccd;
  param_1[0x40] = 0x43fa000043960000;
  param_1[0x41] = 0x3f8000003e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x42] = 0x200000001;
  param_1[0x25] = 0x3ff0000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  param_1[0x36] = 0x3e4ccccd3f19999a;
  param_1[0x37] = &DAT_40a00000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(byte *)(param_1 + 0x2e) = *(byte *)(param_1 + 0x2e) & 0x7e;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x43d4ccccd;
  *(undefined4 *)((longlong)param_1 + 500) = 1;
  *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) & 0xc0 | 0x20;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  uVar1 = DAT_14c8462c8;
  param_1[0x32] = DAT_14c8462c0;
  param_1[0x33] = uVar1;
  param_1[0x34] = DAT_14c8462d0;
  return param_1;
}



// FUNCTION 140bf6e12 FUN_140bf6e12 body=147 status=ok
// SIG undefined FUN_140bf6e12(void)

undefined8 * FUN_140bf6e12(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144805d84();
  *param_1 = &PTR_FUN_14a856d40;
  param_1[5] = &PTR_FUN_14a8572c0;
  param_1[6] = &PTR_LAB_14a857300;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x28] = DAT_14c8464e0;
  param_1[0x29] = uVar1;
  param_1[0x2a] = DAT_14c8464f0;
  *(undefined1 *)((longlong)param_1 + 0x173) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0x4e;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(undefined2 *)((longlong)param_1 + 0x171) = 0;
  return param_1;
}



// FUNCTION 140bf6ea6 FUN_140bf6ea6 body=21 status=ok
// SIG undefined FUN_140bf6ea6(void)

undefined8 FUN_140bf6ea6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140bf6ebc FUN_140bf6ebc body=507 status=ok
// SIG undefined FUN_140bf6ebc(void)

void FUN_140bf6ebc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined1 auStack_78 [32];
  uint local_58;
  int local_54;
  longlong *local_50;
  int local_48;
  byte local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == *(longlong *)(param_1 + 0x340)) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) < 0) {
      FUN_147f61d1c(param_1 + 0x98,0);
    }
    lVar13 = *param_2;
    lVar11 = lVar13 + 0x4f8;
    if (*(longlong *)(lVar13 + 0x878) != 0) {
      lVar11 = *(longlong *)(lVar13 + 0x878);
    }
    if ((longlong)*(int *)(lVar13 + 0x880) != 0) {
      lVar13 = (longlong)*(int *)(lVar13 + 0x880) * 0x38;
      do {
        if ((*(byte *)(lVar11 + 0x34) & 1) == 0) {
          FUN_1405b7b14(lVar11,&local_58);
          if ((((local_50 != (longlong *)0x0) && (local_54 != 0)) && (-1 < (int)local_58)) &&
             ((int)local_58 < DAT_14c9647dc)) {
            lVar12 = (ulonglong)((local_58 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
            if (((lVar12 != 0) && (*(int *)(lVar12 + 0x10) == local_54)) &&
               ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)) {
              lVar12 = (**(code **)(*local_50 + 0x30))();
              if (((-1 < (longlong)local_48) &&
                  (lVar10 = (ulonglong)local_44 * 0x10 + 0x78,
                  local_48 < *(int *)(lVar12 + 8 + lVar10))) &&
                 (puVar14 = (undefined4 *)
                            ((longlong)local_48 * 0x30 + *(longlong *)(lVar12 + lVar10)),
                 puVar14 != (undefined4 *)0x0)) {
                iVar2 = *(int *)(param_1 + 0xa0);
                *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
                if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
                  FUN_1403cac46(param_1 + 0x98,iVar2);
                }
                lVar12 = *(longlong *)(param_1 + 0x98);
                lVar10 = (longlong)iVar2 * 0x30;
                uVar3 = *puVar14;
                uVar4 = puVar14[1];
                uVar5 = puVar14[2];
                uVar6 = puVar14[3];
                uVar7 = *(undefined8 *)(puVar14 + 4);
                uVar8 = *(undefined8 *)(puVar14 + 6);
                uVar9 = *(undefined8 *)(puVar14 + 10);
                puVar1 = (undefined8 *)(lVar12 + 0x20 + lVar10);
                *puVar1 = *(undefined8 *)(puVar14 + 8);
                puVar1[1] = uVar9;
                puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar10);
                *puVar1 = uVar7;
                puVar1[1] = uVar8;
                puVar14 = (undefined4 *)(lVar12 + lVar10);
                *puVar14 = uVar3;
                puVar14[1] = uVar4;
                puVar14[2] = uVar5;
                puVar14[3] = uVar6;
                *(int *)(*(longlong *)(param_1 + 0x98) +
                        (longlong)(*(int *)(param_1 + 0xa0) + -1) * 0x30) = iVar2;
              }
            }
          }
        }
        lVar11 = lVar11 + 0x38;
        lVar13 = lVar13 + -0x38;
      } while (lVar13 != 0);
    }
    FUN_140bf70b8(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf70b8 FUN_140bf70b8 body=6051 status=ok
// SIG undefined FUN_140bf70b8(void)

void FUN_140bf70b8(longlong param_1)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  char cVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint *puVar17;
  longlong *plVar18;
  longlong **pplVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined8 *puVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  longlong *plVar29;
  longlong *plVar30;
  ulonglong uVar31;
  longlong *plVar32;
  ulonglong uVar33;
  longlong *plVar34;
  uint *puVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong *plVar38;
  longlong *plVar39;
  bool bVar40;
  float fVar41;
  uint uVar42;
  undefined1 auStack_3d8 [32];
  uint *local_3b8;
  int *local_3b0;
  int *local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  longlong *local_390;
  undefined4 local_388 [188];
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (((((((*(int *)(param_1 + 100) == 0) || (uVar42 = *(uint *)(param_1 + 0x60), (int)uVar42 < 0))
         || (DAT_14c9647dc <= (int)uVar42)) ||
        ((plVar32 = (longlong *)
                    ((ulonglong)((uVar42 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8)),
         plVar32 == (longlong *)0x0 || ((int)plVar32[2] != *(int *)(param_1 + 100))))) ||
       ((*(uint *)(plVar32 + 1) & 0x10200000) != 0)) ||
      ((*plVar32 == 0 || (*(longlong *)(param_1 + 0x70) == 0)))) || (*(int *)(param_1 + 0x6c) == 0))
  goto LAB_140bf73d0;
  puVar35 = (uint *)(param_1 + 0x68);
  uVar42 = *puVar35;
  if (((((int)uVar42 < 0) || (DAT_14c9647dc <= (int)uVar42)) ||
      (lVar21 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8), lVar21 == 0)) ||
     ((*(int *)(lVar21 + 0x10) != *(int *)(param_1 + 0x6c) ||
      ((*(uint *)(lVar21 + 8) & 0x10200000) != 0)))) goto LAB_140bf73d0;
  if ((*(char *)(param_1 + 0x350) == '\0') && (*(char *)(param_1 + 0x378) == '\0')) {
    iVar27 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xc0) = iVar27;
    plVar32 = (longlong *)(param_1 + 0x78);
    _Src = *(void **)(param_1 + 0x98);
    *(int *)(param_1 + 0x80) = iVar27;
    if (*(int *)(param_1 + 0x84) == 0 && iVar27 == 0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    else {
      FUN_140bf885c();
      if (iVar27 != 0) {
        memcpy((void *)*plVar32,_Src,(longlong)iVar27 * 0x30);
      }
    }
    if (*(int *)(param_1 + 0xac) == 0) {
LAB_140bf725a:
      plVar18 = (longlong *)0x0;
    }
    else {
      uVar42 = *(uint *)(param_1 + 0xa8);
      plVar18 = (longlong *)0x0;
      if ((-1 < (int)uVar42) && ((int)uVar42 < DAT_14c9647dc)) {
        lVar21 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8);
        if ((lVar21 == 0) ||
           ((*(int *)(lVar21 + 0x10) != *(int *)(param_1 + 0xac) ||
            ((*(uint *)(lVar21 + 8) & 0x10200000) != 0)))) goto LAB_140bf725a;
        plVar18 = (longlong *)FUN_14479d2ce();
      }
    }
    if (((((*(longlong *)(param_1 + 0x70) == 0) || (*(int *)(param_1 + 0x6c) == 0)) ||
         (uVar42 = *puVar35, (int)uVar42 < 0)) ||
        (((DAT_14c9647dc <= (int)uVar42 ||
          (lVar21 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8), lVar21 == 0)) ||
         ((*(int *)(lVar21 + 0x10) != *(int *)(param_1 + 0x6c) ||
          ((plVar18 == (longlong *)0x0 || ((*(uint *)(lVar21 + 8) & 0x10200000) != 0)))))))) ||
       ((lVar21 = FUN_14069ce20(), lVar21 != 0 &&
        ((*(char *)(lVar21 + 0x18) == '\x01' && (*(char *)(lVar21 + 0x40) != '\0')))))) {
LAB_140bf72ac:
      uVar42 = *(uint *)(param_1 + 0x80);
      if (1 < (longlong)(int)uVar42) {
        plVar18 = (longlong *)*plVar32;
        memset(local_388,0,0x2f0);
        local_390 = plVar18 + (longlong)(int)uVar42 * 6 + -6;
        local_398 = plVar18;
        fVar41 = logf((float)(int)uVar42);
        local_388[0] = (int)(longlong)(fVar41 + fVar41);
        pplVar19 = &local_398;
        do {
          plVar23 = *pplVar19;
          plVar16 = pplVar19[1];
          iVar27 = *(int *)(pplVar19 + 2);
          iVar13 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar23) >> 4) * -0x55555555;
          uVar42 = iVar13 + 1;
          plVar30 = plVar23;
          plVar18 = plVar16;
          plVar38 = plVar23;
          if (iVar27 != 0) {
LAB_140bf755a:
            if (8 < (int)uVar42) {
              uVar31 = (ulonglong)(uVar42 >> 1);
              lVar21 = plVar30[uVar31 * 6];
              lVar22 = (plVar30 + uVar31 * 6)[1];
              lVar37 = plVar30[uVar31 * 6 + 2];
              lVar24 = (plVar30 + uVar31 * 6 + 2)[1];
              lVar3 = plVar30[uVar31 * 6 + 4];
              lVar4 = (plVar30 + uVar31 * 6 + 4)[1];
              lVar5 = *plVar30;
              lVar6 = plVar30[1];
              lVar7 = plVar30[2];
              lVar8 = plVar30[3];
              lVar9 = plVar30[5];
              plVar30[uVar31 * 6 + 4] = plVar30[4];
              (plVar30 + uVar31 * 6 + 4)[1] = lVar9;
              plVar30[uVar31 * 6 + 2] = lVar7;
              (plVar30 + uVar31 * 6 + 2)[1] = lVar8;
              plVar30[uVar31 * 6] = lVar5;
              (plVar30 + uVar31 * 6)[1] = lVar6;
              plVar30[4] = lVar3;
              plVar30[5] = lVar4;
              plVar30[2] = lVar37;
              plVar30[3] = lVar24;
              *plVar30 = lVar21;
              plVar30[1] = lVar22;
              plVar34 = plVar18 + 6;
              plVar23 = plVar30;
              do {
                plVar10 = plVar23 + 6;
                plVar11 = plVar23 + 6;
                do {
                  plVar23 = plVar11;
                  plVar39 = plVar10;
                  if (plVar18 < plVar23) break;
                  plVar10 = plVar39 + 6;
                  plVar11 = plVar23 + 6;
                } while ((int)*plVar23 <= (int)*plVar30);
                plVar10 = plVar34 + -0xc;
                do {
                  plVar11 = plVar34;
                  plVar29 = plVar10;
                  plVar34 = plVar11 + -6;
                  if (plVar34 <= plVar30) break;
                  plVar10 = plVar29 + -6;
                } while ((int)*plVar30 <= (int)*plVar34);
                if (plVar34 < plVar23) goto code_r0x000140bf763d;
                lVar21 = *plVar23;
                lVar22 = plVar23[1];
                lVar37 = plVar23[2];
                lVar24 = plVar23[3];
                lVar3 = plVar23[4];
                lVar4 = plVar23[5];
                lVar5 = *plVar34;
                lVar6 = plVar11[-5];
                lVar7 = plVar11[-4];
                lVar8 = plVar11[-3];
                lVar9 = plVar11[-1];
                plVar23[4] = plVar11[-2];
                plVar23[5] = lVar9;
                plVar23[2] = lVar7;
                plVar23[3] = lVar8;
                *plVar23 = lVar5;
                plVar23[1] = lVar6;
                plVar11[-2] = lVar3;
                plVar11[-1] = lVar4;
                plVar11[-4] = lVar37;
                plVar11[-3] = lVar24;
                *plVar34 = lVar21;
                plVar11[-5] = lVar22;
              } while( true );
            }
            if (plVar30 < plVar18) {
              do {
                plVar23 = plVar30;
                if (plVar30 + 6 <= plVar18) {
                  plVar16 = plVar30 + 6;
                  iVar27 = (int)*plVar30;
                  do {
                    iVar13 = (int)*plVar16;
                    iVar28 = iVar27;
                    if (iVar27 <= iVar13) {
                      iVar28 = iVar13;
                    }
                    if (iVar27 < iVar13) {
                      plVar23 = plVar16;
                    }
                    plVar16 = plVar16 + 6;
                    iVar27 = iVar28;
                  } while (plVar16 <= plVar18);
                }
                local_98 = *plVar23;
                plStack_90 = (longlong *)plVar23[1];
                local_88 = plVar23[2];
                lStack_80 = plVar23[3];
                local_78 = plVar23[4];
                lStack_70 = plVar23[5];
                lVar21 = *plVar18;
                lVar22 = plVar18[1];
                lVar37 = plVar18[2];
                lVar24 = plVar18[3];
                lVar3 = plVar18[5];
                plVar23[4] = plVar18[4];
                plVar23[5] = lVar3;
                plVar23[2] = lVar37;
                plVar23[3] = lVar24;
                *plVar23 = lVar21;
                plVar23[1] = lVar22;
                plVar18[4] = local_78;
                plVar18[5] = lStack_70;
                plVar18[2] = local_88;
                plVar18[3] = lStack_80;
                *plVar18 = local_98;
                plVar18[1] = (longlong)plStack_90;
                plVar18 = plVar18 + -6;
              } while (plVar30 < plVar18);
            }
            goto LAB_140bf77c4;
          }
LAB_140bf834b:
          if (uVar42 != 0) {
            iVar27 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
            iVar13 = iVar27;
joined_r0x000140bf8372:
            do {
              iVar28 = iVar27 * 2 + 1;
              if (iVar28 < (int)uVar42) {
                iVar26 = iVar27 * 2 + 2;
                if ((iVar26 < (int)uVar42) &&
                   ((int)plVar23[(longlong)iVar28 * 6] <= (int)plVar23[(longlong)iVar26 * 6])) {
                  iVar28 = iVar26;
                }
                if ((int)plVar23[(longlong)iVar27 * 6] < (int)plVar23[(longlong)iVar28 * 6]) {
                  plVar18 = plVar23 + (longlong)iVar27 * 6;
                  plVar16 = plVar23 + (longlong)iVar28 * 6;
                  local_98 = *plVar18;
                  plStack_90 = (longlong *)plVar18[1];
                  local_88 = plVar18[2];
                  lStack_80 = plVar18[3];
                  local_78 = plVar18[4];
                  lStack_70 = plVar18[5];
                  lVar21 = *plVar16;
                  lVar22 = plVar16[1];
                  lVar37 = plVar16[2];
                  lVar24 = plVar16[3];
                  lVar3 = plVar16[5];
                  plVar18[4] = plVar16[4];
                  plVar18[5] = lVar3;
                  plVar18[2] = lVar37;
                  plVar18[3] = lVar24;
                  *plVar18 = lVar21;
                  plVar18[1] = lVar22;
                  plVar16[4] = local_78;
                  plVar16[5] = lStack_70;
                  plVar16[2] = local_88;
                  plVar16[3] = lStack_80;
                  *plVar16 = local_98;
                  plVar16[1] = (longlong)plStack_90;
                  iVar27 = iVar28;
                  goto joined_r0x000140bf8372;
                }
              }
              bVar40 = iVar13 != 0;
              iVar27 = iVar13 + -1;
              iVar13 = iVar27;
            } while (bVar40);
            if (1 < (int)uVar42) {
              uVar31 = (ulonglong)uVar42 - 1;
              local_98 = *plVar23;
              plStack_90 = (longlong *)plVar23[1];
              local_88 = plVar23[2];
              lStack_80 = plVar23[3];
              local_78 = plVar23[4];
              lStack_70 = plVar23[5];
              lVar21 = plVar23[uVar31 * 6];
              lVar22 = (plVar23 + uVar31 * 6)[1];
              lVar37 = plVar23[uVar31 * 6 + 2];
              lVar24 = (plVar23 + uVar31 * 6 + 2)[1];
              lVar3 = (plVar23 + uVar31 * 6 + 4)[1];
              plVar23[4] = plVar23[uVar31 * 6 + 4];
              plVar23[5] = lVar3;
              plVar23[2] = lVar37;
              plVar23[3] = lVar24;
              *plVar23 = lVar21;
              plVar23[1] = lVar22;
              plVar23[uVar31 * 6 + 4] = local_78;
              (plVar23 + uVar31 * 6 + 4)[1] = lStack_70;
              plVar23[uVar31 * 6 + 2] = local_88;
              (plVar23 + uVar31 * 6 + 2)[1] = lStack_80;
              plVar23[uVar31 * 6] = local_98;
              (plVar23 + uVar31 * 6)[1] = (longlong)plStack_90;
              if (uVar42 != 2) {
                do {
                  iVar27 = 0;
                  iVar28 = 1;
                  iVar13 = 0;
                  do {
                    iVar27 = iVar27 + 2;
                    iVar26 = iVar28;
                    if (((longlong)iVar27 < (longlong)uVar31) &&
                       ((int)plVar23[(longlong)iVar28 * 6] <= (int)plVar23[(longlong)iVar27 * 6])) {
                      iVar26 = iVar27;
                    }
                    if ((int)plVar23[(longlong)iVar26 * 6] <= (int)plVar23[(longlong)iVar13 * 6])
                    break;
                    plVar16 = plVar23 + (longlong)iVar13 * 6;
                    plVar18 = plVar23 + (longlong)iVar26 * 6;
                    lVar21 = *plVar16;
                    lVar22 = plVar16[1];
                    lVar37 = plVar16[2];
                    lVar24 = plVar16[3];
                    lVar3 = plVar16[4];
                    lVar4 = plVar16[5];
                    lVar5 = *plVar18;
                    lVar6 = plVar18[1];
                    lVar7 = plVar18[2];
                    lVar8 = plVar18[3];
                    lVar9 = plVar18[5];
                    plVar16[4] = plVar18[4];
                    plVar16[5] = lVar9;
                    plVar16[2] = lVar7;
                    plVar16[3] = lVar8;
                    *plVar16 = lVar5;
                    plVar16[1] = lVar6;
                    plVar18[4] = lVar3;
                    plVar18[5] = lVar4;
                    plVar18[2] = lVar37;
                    plVar18[3] = lVar24;
                    *plVar18 = lVar21;
                    plVar18[1] = lVar22;
                    iVar27 = iVar26 * 2;
                    iVar28 = iVar26 * 2 + 1;
                    iVar13 = iVar26;
                  } while ((longlong)iVar28 < (longlong)uVar31);
                  uVar33 = uVar31 - 1;
                  local_98 = *plVar23;
                  plStack_90 = (longlong *)plVar23[1];
                  local_88 = plVar23[2];
                  lStack_80 = plVar23[3];
                  local_78 = plVar23[4];
                  lStack_70 = plVar23[5];
                  lVar21 = plVar23[uVar33 * 6];
                  lVar22 = (plVar23 + uVar33 * 6)[1];
                  lVar37 = plVar23[uVar33 * 6 + 2];
                  lVar24 = (plVar23 + uVar33 * 6 + 2)[1];
                  lVar3 = (plVar23 + uVar33 * 6 + 4)[1];
                  plVar23[4] = plVar23[uVar33 * 6 + 4];
                  plVar23[5] = lVar3;
                  plVar23[2] = lVar37;
                  plVar23[3] = lVar24;
                  *plVar23 = lVar21;
                  plVar23[1] = lVar22;
                  plVar23[uVar33 * 6 + 4] = local_78;
                  (plVar23 + uVar33 * 6 + 4)[1] = lStack_70;
                  plVar23[uVar33 * 6 + 2] = local_88;
                  (plVar23 + uVar33 * 6 + 2)[1] = lStack_80;
                  plVar23[uVar33 * 6] = local_98;
                  (plVar23 + uVar33 * 6)[1] = (longlong)plStack_90;
                  bVar40 = 2 < uVar31;
                  uVar31 = uVar33;
                } while (bVar40);
              }
            }
          }
LAB_140bf77c4:
          pplVar19 = pplVar19 + -3;
        } while (&local_398 <= pplVar19);
        uVar42 = *(uint *)(param_1 + 0x80);
      }
    }
    else {
      lVar21 = *(longlong *)(param_1 + 0x78);
      uVar42 = *(uint *)(param_1 + 0x80);
      lVar22 = (longlong)(int)uVar42;
      local_3b8 = puVar35;
      if (lVar22 != 0) {
        lVar37 = 0;
        do {
          iVar27 = *(int *)(lVar21 + 8 + lVar37);
          if (((((iVar27 != 0) && (uVar20 = *(uint *)(lVar21 + 4 + lVar37), -1 < (int)uVar20)) &&
               ((int)uVar20 < DAT_14c9647dc)) &&
              ((puVar25 = (undefined8 *)
                          ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
               puVar25 != (undefined8 *)0x0 && (*(int *)(puVar25 + 2) == iVar27)))) &&
             ((*(uint *)(puVar25 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(puVar25 + 1) & 0x10200000) == 0) {
              plVar23 = (longlong *)*puVar25;
            }
            else {
              plVar23 = (longlong *)0x0;
            }
            if (plVar23 == plVar18) {
              uVar20 = (int)(lVar37 >> 4) * -0x55555555;
              if ((-1 < (int)uVar20) && ((int)uVar20 < (int)uVar42)) {
                if (*(int *)(lVar21 + (ulonglong)(uVar20 & 0x7fffffff) * 0x30) == 0x7fffffff) {
                  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
                }
                goto LAB_140bf81c2;
              }
              break;
            }
          }
          lVar37 = lVar37 + 0x30;
        } while (lVar22 * 0x30 != lVar37);
      }
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
      *(uint *)(param_1 + 0x80) = uVar42 + 1;
      if (*(uint *)(param_1 + 0x84) < uVar42 + 1) {
        FUN_1403cac46(plVar32,uVar42);
        lVar21 = *plVar32;
      }
      lVar37 = lVar22 * 0x30 + 4 + lVar21;
      *(undefined8 *)(lVar37 + -4) = 0x7fffffff;
      *(undefined4 *)(lVar37 + 4) = 0;
      local_398 = plVar18;
      FUN_14485c47a(lVar37,plVar18);
      uVar20 = local_3b8[1];
      uVar1 = local_3b8[2];
      uVar2 = local_3b8[3];
      *(uint *)(lVar37 + 0xc) = *local_3b8;
      *(uint *)(lVar37 + 0x10) = uVar20;
      *(uint *)(lVar37 + 0x14) = uVar1;
      *(uint *)(lVar37 + 0x18) = uVar2;
      FUN_1408fa87e(lVar22 * 0x30 + 0x20 + lVar21);
      *(undefined4 *)
       (*(longlong *)(param_1 + 0x78) + (longlong)(*(int *)(param_1 + 0x80) + -1) * 0x30) = 0;
      lVar21 = *(longlong *)(param_1 + 0x78);
      uVar20 = uVar42;
LAB_140bf81c2:
      *(undefined4 *)(lVar21 + (longlong)(int)uVar20 * 0x30) = 0;
      uVar42 = *(uint *)(param_1 + 0x80);
      puVar35 = local_3b8;
      if (0 < (int)uVar42) {
        uVar31 = 0;
        do {
          if (uVar31 != uVar20) {
            iVar27 = *(int *)(*plVar32 + uVar31 * 0x30);
            if (iVar27 != 0x7fffffff) {
              *(int *)(*plVar32 + uVar31 * 0x30) = iVar27 + 1;
              uVar42 = *(uint *)(param_1 + 0x80);
            }
          }
          uVar31 = uVar31 + 1;
        } while ((longlong)uVar31 < (longlong)(int)uVar42);
        goto LAB_140bf72ac;
      }
    }
    if (uVar42 != 0) {
      local_3a8 = (int *)*plVar32;
      local_3b0 = local_3a8 + 0xc;
      iVar27 = 0;
      uVar31 = 0;
      bVar40 = *local_3a8 == 0x7fffffff;
      local_3b8 = puVar35;
      do {
        iVar13 = (int)uVar31;
        uVar20 = iVar13 + 1U;
        if ((int)(iVar13 + 1U) < (int)uVar42) {
          uVar20 = uVar42;
        }
        piVar14 = local_3b0 + uVar31 * 0xc;
        uVar36 = uVar31;
        uVar33 = uVar31;
        do {
          uVar33 = uVar33 + 1;
          if ((longlong)(int)uVar42 <= (longlong)uVar33) {
            uVar36 = (ulonglong)uVar20;
            break;
          }
          iVar28 = *piVar14;
          uVar36 = (ulonglong)((int)uVar36 + 1);
          piVar14 = piVar14 + 0xc;
        } while (bVar40 == (iVar28 == 0x7fffffff));
        if (!bVar40) {
          iVar28 = (int)uVar36 - iVar13;
          if (iVar27 != iVar13) {
            memmove(local_3a8 + (longlong)iVar27 * 0xc,local_3a8 + uVar31 * 0xc,
                    (longlong)iVar28 * 0x30);
          }
          iVar27 = iVar27 + iVar28;
        }
        uVar31 = uVar36;
        bVar40 = (bool)(bVar40 ^ 1);
      } while ((longlong)uVar33 < (longlong)(int)uVar42);
      *(int *)(param_1 + 0x80) = iVar27;
      puVar35 = local_3b8;
    }
  }
  if (*(int *)(param_1 + 0x80) < 1) {
LAB_140bf822c:
    plVar32 = (longlong *)0x0;
  }
  else {
    lVar21 = 0;
    lVar22 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0x78) + lVar21) = (int)lVar22;
      lVar22 = lVar22 + 1;
      lVar21 = lVar21 + 0x30;
    } while (lVar22 < *(int *)(param_1 + 0x80));
    plVar32 = (longlong *)0x0;
    if ((0 < *(int *)(param_1 + 0x80)) && (*(int *)(param_1 + 0xc0) != 0)) {
      if ((**(int **)(param_1 + 0x78) == 0x7fffffff) ||
         (uVar31 = *(ulonglong *)(*(int **)(param_1 + 0x78) + 1), uVar31 >> 0x20 == 0))
      goto LAB_140bf822c;
      uVar42 = (uint)uVar31;
      plVar32 = (longlong *)0x0;
      if ((-1 < (int)uVar42) && (plVar32 = (longlong *)0x0, (int)uVar42 < DAT_14c9647dc)) {
        puVar25 = (undefined8 *)
                  ((ulonglong)((uVar42 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0xd & 0x3fff8)));
        if ((puVar25 == (undefined8 *)0x0) ||
           ((*(int *)(puVar25 + 2) != (int)(uVar31 >> 0x20) ||
            ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)))) goto LAB_140bf822c;
        plVar32 = (longlong *)*puVar25;
      }
    }
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
LAB_140bf7ea2:
    plVar18 = (longlong *)0x0;
  }
  else {
    uVar42 = *(uint *)(param_1 + 0xb0);
    plVar18 = (longlong *)0x0;
    if ((-1 < (int)uVar42) && ((int)uVar42 < DAT_14c9647dc)) {
      puVar25 = (undefined8 *)
                ((ulonglong)((uVar42 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8));
      if ((puVar25 == (undefined8 *)0x0) ||
         ((*(int *)(puVar25 + 2) != *(int *)(param_1 + 0xb4) ||
          ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)))) goto LAB_140bf7ea2;
      plVar18 = (longlong *)*puVar25;
    }
  }
  if ((((plVar18 == plVar32) || (*(int *)(param_1 + 100) == 0)) ||
      (uVar42 = *(uint *)(param_1 + 0x60), (int)uVar42 < 0)) ||
     (((((DAT_14c9647dc <= (int)uVar42 ||
         (plVar23 = (longlong *)
                    ((ulonglong)((uVar42 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8)),
         plVar23 == (longlong *)0x0)) ||
        (((int)plVar23[2] != *(int *)(param_1 + 100) ||
         (((*(uint *)(plVar23 + 1) & 0x10200000) != 0 || (lVar21 = *plVar23, lVar21 == 0)))))) ||
       ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) ||
      ((piVar14 = (int *)FUN_1447210f0(lVar21), piVar14 == (int *)0x0 ||
       ((*(byte *)((longlong)piVar14 + 0x155) & 0x20) != 0)))))) goto LAB_140bf73d0;
  FUN_14035d612(param_1);
  if (plVar32 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    iVar27 = piVar14[0x24c];
    if (plVar18 != (longlong *)0x0) goto LAB_140bf7e7c;
  }
  else {
    uVar42 = *(uint *)((longlong)plVar32 + 0xc);
    *(uint *)(param_1 + 0xb0) = uVar42;
    if ((int)uVar42 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8);
    }
    else {
      lVar22 = 0;
    }
    iVar27 = *(int *)(lVar22 + 0x10);
    local_3b0 = piVar14;
    if (*(int *)(lVar22 + 0x10) == 0) {
      LOCK();
      iVar27 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar40 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar27;
      if (bVar40) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar27 = *(int *)(lVar22 + 0x10);
      bVar40 = iVar27 == 0;
      if (bVar40) {
        *(int *)(lVar22 + 0x10) = iVar13;
        iVar27 = 0;
      }
      UNLOCK();
      if (bVar40) {
        iVar27 = iVar13;
      }
    }
    *(int *)(param_1 + 0xb4) = iVar27;
    uVar15 = FUN_14069ce7c();
    plVar23 = (longlong *)(**(code **)(*plVar32 + 0x288))(plVar32,uVar15);
    if (plVar23 != (longlong *)0x0) {
      uVar15 = FUN_14069ce7c();
      plVar16 = (longlong *)FUN_144718840(plVar23,uVar15);
      if (((plVar23 != plVar16) && (plVar16 != (longlong *)0x0)) &&
         (puVar17 = (uint *)(**(code **)(*plVar16 + 0x10))(plVar16), puVar17 != (uint *)0x0)) {
        uVar42 = *puVar35;
        local_98 = *(longlong *)puVar35;
        plVar23 = *(longlong **)(puVar35 + 2);
        if ((*(longlong **)(puVar17 + 4) == (longlong *)0x0) || (puVar17[3] == 0)) {
LAB_140bf7fc2:
          plVar16 = (longlong *)0x0;
        }
        else {
          uVar20 = puVar17[2];
          plVar16 = (longlong *)0x0;
          if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
            lVar22 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
            if ((lVar22 == 0) || (*(uint *)(lVar22 + 0x10) != puVar17[3])) goto LAB_140bf7fc2;
            plVar16 = (longlong *)0x0;
            if ((*(uint *)(lVar22 + 8) & 0x10200000) == 0) {
              plVar16 = *(longlong **)(puVar17 + 4);
            }
          }
        }
        plStack_90 = plVar23;
        if (((((plVar23 != (longlong *)0x0) && (puVar35[1] != 0)) && (-1 < (int)uVar42)) &&
            (((int)uVar42 < DAT_14c9647dc &&
             (lVar22 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8), lVar22 != 0))
            )) && ((*(uint *)(lVar22 + 0x10) == puVar35[1] &&
                   ((plVar16 != (longlong *)0x0 && ((*(uint *)(lVar22 + 8) & 0x10200000) == 0))))))
        {
          uVar42 = puVar17[0x1c];
          FUN_140365854(puVar17 + 0x1a,&local_98);
          if ((int)uVar42 < (int)puVar17[0x1c]) {
            if (puVar17[1] == 0) {
LAB_140bf8233:
              plVar30 = (longlong *)0x0;
            }
            else {
              uVar42 = *puVar17;
              plVar30 = (longlong *)0x0;
              if ((-1 < (int)uVar42) && ((int)uVar42 < DAT_14c9647dc)) {
                puVar25 = (undefined8 *)
                          ((ulonglong)((uVar42 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8));
                if ((puVar25 == (undefined8 *)0x0) ||
                   ((*(uint *)(puVar25 + 2) != puVar17[1] ||
                    ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)))) goto LAB_140bf8233;
                plVar30 = (longlong *)*puVar25;
              }
            }
            lVar22 = (**(code **)(*plVar23 + 0x28))(plVar23);
            if (*(int *)(lVar22 + 0x1c) == 0) {
LAB_140bf823b:
              local_398 = (longlong *)0x0;
            }
            else {
              uVar42 = *(uint *)(lVar22 + 0x18);
              local_398 = (longlong *)0x0;
              if ((-1 < (int)uVar42) && ((int)uVar42 < DAT_14c9647dc)) {
                local_398 = (longlong *)
                            ((ulonglong)((uVar42 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8));
                if ((local_398 == (longlong *)0x0) ||
                   (((int)local_398[2] != *(int *)(lVar22 + 0x1c) ||
                    ((*(uint *)(local_398 + 1) & 0x10200000) != 0)))) goto LAB_140bf823b;
                local_398 = (longlong *)*local_398;
              }
            }
            local_388[0] = CONCAT31(local_388[0]._1_3_,1);
            local_390 = plVar30;
            (**(code **)(*plVar16 + 0x18))(plVar16);
          }
          if (((float)puVar17[0x1e] == -1.0) && (!NAN((float)puVar17[0x1e]))) {
            uVar42 = 0;
            if ((((puVar17[1] != 0) &&
                 (((uVar20 = *puVar17, -1 < (int)uVar20 && ((int)uVar20 < DAT_14c9647dc)) &&
                  (plVar23 = (longlong *)
                             ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
                  plVar23 != (longlong *)0x0)))) &&
                (((*(uint *)(plVar23 + 2) == puVar17[1] &&
                  ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)) && (*plVar23 != 0)))) &&
               (lVar22 = FUN_1447210f0(), lVar22 != 0)) {
              uVar42 = *(uint *)(lVar22 + 0x930);
            }
            puVar17[0x1e] = uVar42;
          }
        }
      }
    }
    lVar22 = *(longlong *)(param_1 + 0x60);
    local_398 = (longlong *)0x0;
    local_390 = (longlong *)((ulonglong)local_390 & 0xffffffff00000000);
    FUN_1446efa72(&local_398,0,3,0x10);
    plVar23 = local_398;
    local_390 = (longlong *)CONCAT44(local_390._4_4_,3);
    *local_398 = (longlong)&PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar24 = DAT_14c758608 + 1;
    lVar37 = DAT_14c758608 + 1;
    if (lVar24 == 0) {
      LOCK();
      UNLOCK();
      lVar24 = DAT_14c758608 + 2;
      lVar37 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar37;
    local_398[2] = lVar24;
    *local_398 = (longlong)&PTR_FUN_14ac8d880;
    local_398[3] = 0;
    uVar42 = *(uint *)(lVar21 + 0xc);
    *(uint *)(local_398 + 3) = uVar42;
    if ((int)uVar42 < DAT_14c9647dc) {
      lVar37 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8);
    }
    else {
      lVar37 = 0;
    }
    iVar27 = *(int *)(lVar37 + 0x10);
    if (*(int *)(lVar37 + 0x10) == 0) {
      LOCK();
      iVar27 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar40 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar27;
      if (bVar40) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar27 = *(int *)(lVar37 + 0x10);
      bVar40 = iVar27 == 0;
      if (bVar40) {
        *(int *)(lVar37 + 0x10) = iVar13;
        iVar27 = 0;
      }
      UNLOCK();
      if (bVar40) {
        iVar27 = iVar13;
      }
    }
    *(int *)((longlong)plVar23 + 0x1c) = iVar27;
    plVar23[4] = lVar22;
    if (((int)local_390 == 0) || (local_398 == (longlong *)0x0)) {
LAB_140bf871f:
      if ((int)local_390 == 0) {
        uVar15 = 0;
        goto LAB_140bf7cae;
      }
      if (local_398 != (longlong *)0x0) {
        uVar15 = 0;
        (**(code **)*local_398)(local_398,0);
        FUN_1446efa72(&local_398,0,0,0x10);
        goto LAB_140bf7ca1;
      }
      uVar15 = 0;
    }
    else {
      cVar12 = (**(code **)(*local_398 + 0x30))();
      if (cVar12 == '\0') {
        goto LAB_140bf871f;
      }
      plVar23 = plVar32 + 0x57;
      if (*(int *)((longlong)plVar32 + 0x2cc) < 1) {
        iVar27 = (int)plVar32[0x58];
        iVar13 = (int)plVar32[0x59] + -1;
        *(int *)(plVar32 + 0x59) = iVar13;
        if (iVar13 <= iVar27) {
          iVar13 = iVar27;
          if (0 < iVar27) {
            iVar28 = 0;
            do {
              if (((*(int *)(*plVar23 + 8 + (longlong)iVar28 * 0x10) == 0) ||
                  (plVar16 = *(longlong **)(*plVar23 + (longlong)iVar28 * 0x10),
                  plVar16 == (longlong *)0x0)) ||
                 (cVar12 = (**(code **)(*plVar16 + 0x28))(), cVar12 != '\0')) {
                FUN_14005b288(plVar23,iVar28);
                FUN_14005b248(plVar23);
              }
              else {
                iVar28 = iVar28 + 1;
              }
              iVar13 = (int)plVar32[0x58];
            } while (iVar28 < iVar13);
          }
          iVar28 = 2;
          if (2 < iVar13 * 2) {
            iVar28 = iVar13 * 2;
          }
          *(int *)(plVar32 + 0x59) = iVar28;
          if ((iVar28 < iVar27) && (*(int *)((longlong)plVar32 + 0x2c4) != iVar13)) {
            FUN_14045812c();
          }
        }
      }
      uVar15 = 0;
      if (((int)local_390 != 0) && (local_398 != (longlong *)0x0)) {
        (**(code **)(*local_398 + 0x38))(local_398,&local_3a0);
        uVar15 = local_3a0;
      }
      iVar27 = (int)plVar32[0x58];
      *(uint *)(plVar32 + 0x58) = iVar27 + 1U;
      if (*(uint *)((longlong)plVar32 + 0x2c4) < iVar27 + 1U) {
        FUN_1447a71f6(plVar23,iVar27);
      }
      lVar22 = *plVar23;
      lVar37 = (longlong)iVar27 * 0x10;
      *(undefined8 *)(lVar22 + lVar37) = 0;
      *(undefined4 *)(lVar22 + 8 + lVar37) = 0;
      *(longlong **)(lVar22 + lVar37) = local_398;
      local_398 = (longlong *)0x0;
      *(int *)(lVar22 + 8 + lVar37) = (int)local_390;
LAB_140bf7ca1:
      local_390 = (longlong *)((ulonglong)local_390 & 0xffffffff00000000);
LAB_140bf7cae:
      if (local_398 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x3a0) = uVar15;
    lVar22 = *(longlong *)(param_1 + 0x60);
    local_398 = (longlong *)0x0;
    local_390 = (longlong *)((ulonglong)local_390 & 0xffffffff00000000);
    FUN_1446efa72(&local_398,0,3,0x10);
    plVar23 = local_398;
    local_390 = (longlong *)CONCAT44(local_390._4_4_,3);
    *local_398 = (longlong)&PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar24 = DAT_14c758608 + 1;
    lVar37 = DAT_14c758608 + 1;
    if (lVar24 == 0) {
      LOCK();
      UNLOCK();
      lVar24 = DAT_14c758608 + 2;
      lVar37 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar37;
    local_398[2] = lVar24;
    *local_398 = (longlong)&PTR_FUN_14ac8d8f0;
    local_398[3] = 0;
    uVar42 = *(uint *)(lVar21 + 0xc);
    *(uint *)(local_398 + 3) = uVar42;
    if ((int)uVar42 < DAT_14c9647dc) {
      lVar21 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8);
    }
    else {
      lVar21 = 0;
    }
    iVar27 = *(int *)(lVar21 + 0x10);
    if (*(int *)(lVar21 + 0x10) == 0) {
      LOCK();
      iVar27 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar40 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar27;
      if (bVar40) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar27 = *(int *)(lVar21 + 0x10);
      bVar40 = iVar27 == 0;
      if (bVar40) {
        *(int *)(lVar21 + 0x10) = iVar13;
        iVar27 = 0;
      }
      UNLOCK();
      if (bVar40) {
        iVar27 = iVar13;
      }
    }
    *(int *)((longlong)plVar23 + 0x1c) = iVar27;
    plVar23[4] = lVar22;
    if (((int)local_390 == 0) || (local_398 == (longlong *)0x0)) {
LAB_140bf8783:
      if ((int)local_390 == 0) {
        uVar15 = 0;
        goto LAB_140bf7e5a;
      }
      if (local_398 != (longlong *)0x0) {
        uVar15 = 0;
        (**(code **)*local_398)(local_398,0);
        FUN_1446efa72(&local_398,0,0,0x10);
        goto LAB_140bf7e4d;
      }
      uVar15 = 0;
    }
    else {
      cVar12 = (**(code **)(*local_398 + 0x30))();
      if (cVar12 == '\0') {
        goto LAB_140bf8783;
      }
      plVar23 = plVar32 + 0x5a;
      if (*(int *)((longlong)plVar32 + 0x2e4) < 1) {
        iVar27 = (int)plVar32[0x5b];
        iVar13 = (int)plVar32[0x5c] + -1;
        *(int *)(plVar32 + 0x5c) = iVar13;
        if (iVar13 <= iVar27) {
          iVar13 = iVar27;
          if (0 < iVar27) {
            iVar28 = 0;
            do {
              if (((*(int *)(*plVar23 + 8 + (longlong)iVar28 * 0x10) == 0) ||
                  (plVar16 = *(longlong **)(*plVar23 + (longlong)iVar28 * 0x10),
                  plVar16 == (longlong *)0x0)) ||
                 (cVar12 = (**(code **)(*plVar16 + 0x28))(), cVar12 != '\0')) {
                FUN_14005b288(plVar23,iVar28);
                FUN_14005b248(plVar23);
              }
              else {
                iVar28 = iVar28 + 1;
              }
              iVar13 = (int)plVar32[0x5b];
            } while (iVar28 < iVar13);
          }
          iVar28 = 2;
          if (2 < iVar13 * 2) {
            iVar28 = iVar13 * 2;
          }
          *(int *)(plVar32 + 0x5c) = iVar28;
          if ((iVar28 < iVar27) && (*(int *)((longlong)plVar32 + 0x2dc) != iVar13)) {
            FUN_14045812c();
          }
        }
      }
      uVar15 = 0;
      if (((int)local_390 != 0) && (local_398 != (longlong *)0x0)) {
        (**(code **)(*local_398 + 0x38))(local_398,&local_3a0);
        uVar15 = local_3a0;
      }
      iVar27 = (int)plVar32[0x5b];
      *(uint *)(plVar32 + 0x5b) = iVar27 + 1U;
      if (*(uint *)((longlong)plVar32 + 0x2dc) < iVar27 + 1U) {
        FUN_1447a71f6(plVar23,iVar27);
      }
      lVar21 = *plVar23;
      lVar22 = (longlong)iVar27 * 0x10;
      *(undefined8 *)(lVar21 + lVar22) = 0;
      *(undefined4 *)(lVar21 + 8 + lVar22) = 0;
      *(longlong **)(lVar21 + lVar22) = local_398;
      local_398 = (longlong *)0x0;
      *(int *)(lVar21 + 8 + lVar22) = (int)local_390;
LAB_140bf7e4d:
      local_390 = (longlong *)((ulonglong)local_390 & 0xffffffff00000000);
LAB_140bf7e5a:
      if (local_398 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x3a8) = uVar15;
    iVar27 = local_3b0[0x24c];
    if (plVar18 == (longlong *)0x0) {
LAB_140bf7e7c:
      *(int *)(param_1 + 0xb8) = iVar27;
    }
  }
  *(int *)(param_1 + 0xbc) = iVar27;
  FUN_1403caff4(param_1,param_1,plVar32,plVar18);
LAB_140bf73d0:
  if ((local_60 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140bf763d:
  local_98 = *plVar30;
  plStack_90 = (longlong *)plVar30[1];
  local_88 = plVar30[2];
  lStack_80 = plVar30[3];
  local_78 = plVar30[4];
  lStack_70 = plVar30[5];
  lVar21 = *plVar34;
  lVar22 = plVar11[-5];
  lVar37 = plVar11[-4];
  lVar24 = plVar11[-3];
  lVar3 = plVar11[-1];
  plVar30[4] = plVar11[-2];
  plVar30[5] = lVar3;
  plVar30[2] = lVar37;
  plVar30[3] = lVar24;
  *plVar30 = lVar21;
  plVar30[1] = lVar22;
  plVar11[-2] = local_78;
  plVar11[-1] = lStack_70;
  plVar11[-4] = local_88;
  plVar11[-3] = lStack_80;
  *plVar34 = local_98;
  plVar11[-5] = (longlong)plStack_90;
  iVar27 = iVar27 + -1;
  local_3b8 = puVar35;
  if ((longlong)plVar29 - (longlong)plVar38 < (longlong)plVar16 - (longlong)plVar39) {
    if (plVar23 < plVar18) {
      *pplVar19 = plVar23;
      pplVar19[1] = plVar18;
      *(int *)(pplVar19 + 2) = iVar27;
      pplVar19 = pplVar19 + 3;
    }
    plVar23 = plVar30;
    plVar18 = plVar11 + -0xc;
    plVar16 = plVar29;
    plVar39 = plVar30;
    if (plVar34 <= plVar30 + 6) goto LAB_140bf77c4;
  }
  else {
    if (plVar30 + 6 < plVar34) {
      *pplVar19 = plVar30;
      pplVar19[1] = plVar11 + -0xc;
      *(int *)(pplVar19 + 2) = iVar27;
      pplVar19 = pplVar19 + 3;
    }
    plVar16 = plVar18;
    if (plVar18 <= plVar23) goto LAB_140bf77c4;
  }
  iVar13 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar39) >> 4) * -0x55555555;
  uVar42 = iVar13 + 1;
  plVar30 = plVar23;
  plVar38 = plVar39;
  if (iVar27 == 0) goto LAB_140bf834b;
  goto LAB_140bf755a;
}



// FUNCTION 140bf885c FUN_140bf885c body=235 status=ok
// SIG undefined FUN_140bf885c(void)

void FUN_140bf885c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140bf8950 FUN_140bf8950 body=139 status=ok
// SIG undefined FUN_140bf8950(void)

undefined8 FUN_140bf8950(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_14021219d(param_2,local_28);
  }
  else {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_14021219d(param_2,local_28);
    FUN_140bf89dc(param_1,local_28,0);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf89dc FUN_140bf89dc body=206 status=ok
// SIG undefined FUN_140bf89dc(void)

void FUN_140bf89dc(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  size_t sVar1;
  wchar_t *_Str;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_40 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1449b853c(local_c0,_Str,sVar1 & 0xffffffff,1);
  }
  FUN_140822ef4(param_1,local_38,param_3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf8aab FUN_140bf8aab body=281 status=ok
// SIG undefined FUN_140bf8aab(void)

bool FUN_140bf8aab(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  
  if (param_1 == 0) {
LAB_140bf8bbd:
    bVar4 = false;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c952a58) {
      FUN_144b3d300(&DAT_14c952a58);
      if (DAT_14c952a58 == -1) {
        uVar2 = FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar2,FUN_1403a682c);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
    }
    if (DAT_14c952a10 == 0) {
      bVar4 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c952a08 && bVar4) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar4 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c952a08) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar4) goto LAB_140bf8bbd;
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c952a10) == 0) goto LAB_140bf8bbd;
    lVar1 = FUN_140bf8bc4();
    bVar4 = *(longlong *)(param_1 + 0x70) == lVar1;
  }
  return bVar4;
}



// FUNCTION 140bf8bc4 FUN_140bf8bc4 body=164 status=ok
// SIG undefined FUN_140bf8bc4(void)

undefined8 FUN_140bf8bc4(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949168) {
    FUN_144b3d300(&DAT_14c949168);
    if (DAT_14c949168 == -1) {
      FUN_1446f470e(&local_18,L"LinearColor",1);
      DAT_14c949160 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c949168);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c949160;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf8c6a FUN_140bf8c6a body=85 status=ok
// SIG undefined FUN_140bf8c6a(void)

void FUN_140bf8c6a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140bf8cc0(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


