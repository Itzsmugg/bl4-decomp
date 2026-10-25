// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146264b74 FUN_146264b74 body=70 status=ok
// SIG undefined FUN_146264b74(void)

void FUN_146264b74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_1416d7a4f(*param_1,param_2,param_3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 146264bba FUN_146264bba body=2066 status=ok
// SIG undefined FUN_146264bba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146264bba(longlong param_1,int *param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_d0;
  byte *local_c8;
  longlong *local_c0;
  byte *local_b8;
  longlong *local_b0;
  byte *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  byte *local_98;
  longlong *local_90;
  byte *local_88;
  longlong *local_80;
  byte *local_78;
  undefined4 local_70;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar15 = 0;
  if (((*param_2 == 0) || (param_2[1] == 0)) || (*param_2 == DAT_14c948000)) goto LAB_146264ca7;
  if (((byte *)*param_3 != (byte *)0x0) && ((*(byte *)*param_3 & 0x6b) == 3)) {
    local_88 = DAT_14cb8dcf8;
    local_80 = (longlong *)CONCAT44(local_80._4_4_,DAT_14cb8dd00);
    FUN_1448075d0(&local_68);
    iVar9 = *param_2;
    iVar8 = (int)local_68;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (iVar9 != iVar8) {
      local_88 = _DAT_14cb8dd30;
      local_80 = (longlong *)CONCAT44(local_80._4_4_,DAT_14cb8dd38);
      FUN_1448075d0(&local_68);
      iVar9 = *param_2;
      iVar8 = (int)local_68;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (iVar9 != iVar8) {
        local_80 = (longlong *)CONCAT44(local_80._4_4_,DAT_14cbe66b8);
        local_88 = DAT_14cbe66b0;
        FUN_1448075d0(&local_68,&local_88);
        puVar11 = (undefined8 *)FUN_144a06846(param_3,&local_68);
        local_88 = (byte *)*puVar11;
        local_80 = (longlong *)puVar11[1];
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if (((local_88 == (byte *)0x0) || ((*local_88 & 0x6b) != 3)) ||
           ((*(longlong *)(param_1 + 0x30) == 0 ||
            (lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar13 == 0)))) {
LAB_146264d75:
          uVar15 = 0;
        }
        else {
          iVar9 = FUN_14490d72a(lVar13);
          if (iVar9 != 3) goto LAB_146264d75;
          if ((int)param_4[1] < 2) {
            local_98 = *(byte **)(lVar13 + 0x18);
            FUN_1400021e4(&local_98,&local_68);
            if (&local_68 == param_4) {
              if (local_68 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*param_4 != 0) {
                FUN_1400020a8();
              }
              *param_4 = local_68;
              local_68 = 0;
              *(int *)(param_4 + 1) = local_60;
              *(undefined4 *)((longlong)param_4 + 0xc) = local_5c;
            }
          }
          else {
            FUN_1415024b8(param_4);
          }
          FUN_145ad105e(&local_68);
          iVar9 = (int)param_4[1];
          if (iVar9 == local_60) {
            if (iVar9 < 2) {
              bVar16 = true;
            }
            else {
              lVar13 = 0;
              while( true ) {
                uVar3 = *(ushort *)(*param_4 + lVar13);
                uVar10 = (uint)uVar3;
                uVar4 = *(ushort *)(local_68 + lVar13);
                uVar14 = (uint)uVar4;
                if (uVar3 != uVar4) {
                  if ((uVar4 | uVar3) < 0x80) {
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_146264e68;
                  }
                  iVar9 = uVar10 - uVar14;
                  goto LAB_146264e93;
                }
                if (uVar3 == 0) break;
LAB_146264e68:
                lVar13 = lVar13 + 2;
              }
              iVar9 = 0;
LAB_146264e93:
              bVar16 = iVar9 == 0;
            }
          }
          else {
            bVar16 = local_60 + iVar9 == 1;
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (bVar16) goto LAB_146264d75;
          uVar15 = 0;
          local_68 = 0;
          local_a8 = (byte *)0x0;
          FUN_14131b4b0(&local_98,&DAT_14cbca1d0);
          if (local_98 != (byte *)0x0) {
            if ((*local_98 & 0x6b) == 3) {
              local_a0 = DAT_14cbe66b8;
              local_a8 = DAT_14cbe66b0;
              FUN_1448075d0(&local_68);
              puVar11 = (undefined8 *)FUN_144a06846(&local_98,&local_68);
              pbVar5 = (byte *)*puVar11;
              plVar6 = (longlong *)puVar11[1];
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
              }
              if (local_50 != 0) {
                FUN_1400020a8();
              }
              if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 0x6b) != 3)) {
LAB_146264f63:
                uVar15 = 0;
              }
              else {
                lVar13 = FUN_1416dc568(&local_88);
                if (lVar13 != 0) goto LAB_146264f63;
                local_d8 = 0;
                FUN_1401412e0(&local_98,&local_a8,1,0);
                local_c0 = (longlong *)CONCAT44(local_c0._4_4_,DAT_14cbe66b8);
                local_c8 = DAT_14cbe66b0;
                FUN_1448075d0(&local_68);
                puVar11 = (undefined8 *)FUN_144a06846(&local_a8,&local_68);
                local_b8 = (byte *)*puVar11;
                local_b0 = (longlong *)puVar11[1];
                if (local_b0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                  UNLOCK();
                }
                if (local_50 != 0) {
                  FUN_1400020a8();
                }
                local_70 = DAT_14cbe6880;
                local_78 = DAT_14cbe6878;
                FUN_1448075d0(&local_68);
                puVar11 = (undefined8 *)FUN_144a06846(&local_a8,&local_68);
                local_c8 = (byte *)*puVar11;
                local_c0 = (longlong *)puVar11[1];
                if (local_c0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
                  UNLOCK();
                }
                if (local_50 != 0) {
                  FUN_1400020a8();
                }
                local_70 = DAT_14cbe66a0;
                local_78 = DAT_14cbe6698;
                FUN_1448075d0(&local_68,&local_78);
                uVar12 = FUN_144a06846(&local_88,&local_68);
                local_78 = (byte *)0x0;
                FUN_1400bc2c2(uVar12,&local_d0,&local_78);
                if (local_50 != 0) {
                  FUN_1400020a8();
                }
                plVar7 = local_c0;
                if ((local_b8 == (byte *)0x0) || ((*local_b8 & 0x6b) != 3)) {
                  if (local_c0 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = local_c0 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
                      (**(code **)*local_c0)(local_c0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar7 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar7 + 0x10))(plVar7);
                      }
                    }
                  }
                  plVar7 = local_b0;
                  if (local_b0 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = local_b0 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
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
                  plVar7 = (longlong *)CONCAT44(uStack_9c,local_a0);
                  if (plVar7 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plVar7 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
                      (**(code **)*plVar7)(plVar7);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar7 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar7 + 0x10))(plVar7);
                      }
                    }
                  }
                  goto LAB_146264f63;
                }
                if (local_d0 != 0) {
                  local_70 = DAT_14cbe66a0;
                  local_78 = DAT_14cbe6698;
                  FUN_1448075d0(&local_68);
                  FUN_148d31a58(&local_b8,&local_68,&local_d0);
                  if (local_50 != 0) {
                    FUN_1400020a8();
                  }
                }
                local_70 = DAT_14cbe66b8;
                local_78 = DAT_14cbe66b0;
                FUN_1448075d0(&local_68);
                FUN_14161210c(param_3,&local_68,&local_b8);
                if (local_50 != 0) {
                  FUN_1400020a8();
                }
                local_70 = DAT_14cbe6880;
                local_78 = DAT_14cbe6878;
                FUN_1448075d0(&local_68);
                FUN_14161210c(param_3,&local_68,&local_c8);
                if (local_50 != 0) {
                  FUN_1400020a8();
                }
                plVar7 = local_c0;
                if (local_c0 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_c0 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_c0)(local_c0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar7 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7);
                    }
                  }
                }
                plVar7 = local_b0;
                if (local_b0 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_b0 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
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
                plVar7 = (longlong *)CONCAT44(uStack_9c,local_a0);
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar7 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar7)(plVar7);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar7 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7);
                    }
                  }
                }
                uVar15 = CONCAT71((int7)((ulonglong)&local_68 >> 8),1);
              }
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar6 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
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
            else {
              uVar15 = 0;
            }
          }
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_90 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar1 = (int *)((longlong)local_90 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_90 + 0x10))(local_90);
              }
            }
          }
        }
        plVar6 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_80 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        goto LAB_146264ca7;
      }
    }
  }
  uVar15 = 0;
LAB_146264ca7:
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462653da FUN_1462653da body=8016 status=ok
// SIG undefined FUN_1462653da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1462653da(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ushort *puVar4;
  void *pvVar5;
  longlong **pplVar6;
  wchar_t *pwVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong *local_1b8 [2];
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [16];
  void *local_188;
  int local_180;
  undefined4 local_17c;
  void *local_178;
  int local_170;
  undefined4 local_16c;
  void *local_168;
  int local_160;
  undefined4 local_15c;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *local_110;
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong **local_a8;
  undefined8 *local_a0;
  wchar_t *local_98;
  int local_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_146267382(param_1,param_2,param_4);
  FUN_14626769c(param_3 + 0x118);
  if ((*(longlong *)(param_1 + 0x288) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0x408) != '\0')) goto LAB_14626546e;
  if ((param_2 == (longlong *)0x0) || (*(char *)(param_3 + 0x360) == '\0')) {
    puVar4 = *(ushort **)(param_3 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(param_3 + 0x78) & 0x3f));
    }
    *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
    goto LAB_14626546e;
  }
  *(undefined4 *)(param_3 + 0x1c8) = param_4;
  lVar17 = param_2[1];
  if (lVar17 == 0) {
LAB_1462657b5:
    FUN_1400b22c2(&local_88,"Designer: Set my location name");
    if ((longlong **)(param_3 + 0x1f8) == &local_88) {
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_3 + 0x1f8) != 0) {
        FUN_1400020a8();
      }
      *(longlong **)(param_3 + 0x1f8) = local_88;
      local_88 = (longlong *)0x0;
      *(int *)(param_3 + 0x200) = (int)uStack_80;
      *(undefined4 *)(param_3 + 0x204) = uStack_80._4_4_;
    }
    FUN_1400b22c2(&local_98,"Designer: Set my location description");
    FUN_140233b1a(&local_88,&local_98);
    FUN_140008f88(param_3 + 0x240,&local_88);
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_88,&DAT_149e02088);
    if ((longlong **)(param_3 + 0x2d0) == &local_88) {
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_3 + 0x2d0) != 0) {
        FUN_1400020a8();
      }
      *(longlong **)(param_3 + 0x2d0) = local_88;
      local_88 = (longlong *)0x0;
      *(int *)(param_3 + 0x2d8) = (int)uStack_80;
      *(undefined4 *)(param_3 + 0x2dc) = uStack_80._4_4_;
    }
  }
  else {
    uVar10 = FUN_14125b292();
    cVar8 = FUN_1448093f4(lVar17,uVar10);
    if (cVar8 == '\0') goto LAB_1462657b5;
    FUN_1400b22c2(&local_e8,&DAT_149e02088);
    FUN_140233b1a(local_d8,&local_e8);
    FUN_14023409e(&local_f8,lVar17 + 0x18,1);
    local_88 = (longlong *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(&local_78,local_d8);
    local_a8 = &local_88;
    local_a0 = &uStack_68;
    FUN_14010d304(&local_98);
    local_b8 = local_f8;
    local_b0 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_f0 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    uVar10 = FUN_1447a1f4a(local_c8);
    FUN_144a787a6(param_3 + 0x1f8,uVar10);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_e8,&DAT_149e02088);
    FUN_140233b1a(local_108,&local_e8);
    FUN_14023409e(&local_118,lVar17 + 0x58,1);
    local_88 = (longlong *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(&local_78,local_108);
    local_a8 = &local_88;
    local_a0 = &uStack_68;
    FUN_14010d304(&local_98);
    local_b8 = local_118;
    local_b0 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_110 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
        }
      }
    }
    if (local_108[0] != (longlong *)0x0) {
      (**(code **)(*local_108[0] + 0x10))();
    }
    FUN_140008f88(param_3 + 0x240,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_3 + 0x2c9) = *(undefined1 *)(lVar17 + 0x28);
    FUN_140390f7a(lVar17 + 0x30,param_3 + 0x2d0);
  }
  lVar17 = param_2[2];
  if (lVar17 == 0) {
    FUN_1400b22c2(&local_88,"Designer: Set my location type name");
    plVar14 = local_88;
    if ((longlong **)(param_3 + 0x1e0) == &local_88) goto LAB_146265aa4;
    if (*(longlong *)(param_3 + 0x1e0) != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(param_3 + 0x1e0) = local_88;
    local_88 = (longlong *)0x0;
    *(int *)(param_3 + 0x1e8) = (int)uStack_80;
    *(undefined4 *)(param_3 + 0x1ec) = uStack_80._4_4_;
  }
  else {
    FUN_1400b22c2(&local_e8,&DAT_149e02088);
    FUN_140233b1a(local_128,&local_e8);
    FUN_14023409e(&local_138,lVar17 + 0x18,1);
    local_88 = (longlong *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(&local_78,local_128);
    local_a8 = &local_88;
    local_a0 = &uStack_68;
    FUN_14010d304(&local_98);
    local_b8 = local_138;
    local_b0 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_130 + 1) = (int)local_130[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_130 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_130 + 0x10))(local_130);
        }
      }
    }
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
    uVar10 = FUN_1447a1f4a(local_c8);
    FUN_144a787a6(param_3 + 0x1e0,uVar10);
    plVar14 = local_e8;
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
      plVar14 = local_e8;
    }
LAB_146265aa4:
    if (plVar14 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar17 = *param_2;
  plVar14 = param_2 + 0x24;
  lVar11 = FUN_14090ae24(plVar14);
  if (lVar11 == 0) {
    if (lVar17 != 0) {
      plVar14 = (longlong *)(lVar17 + 0x18);
      goto LAB_146265ae1;
    }
  }
  else {
LAB_146265ae1:
    FUN_140390f7a(plVar14,param_3 + 0x1d0);
  }
  *(char *)(param_3 + 0x1f0) = (char)param_2[6];
  *(char *)(param_3 + 0x208) = (char)param_2[3];
  local_1d8 = (longlong *)(param_3 + 0x210);
  iVar9 = *(int *)(param_3 + 0x21c);
  FUN_146162165(*(undefined8 *)(param_3 + 0x210),*(undefined4 *)(param_3 + 0x218));
  *(undefined4 *)(param_3 + 0x218) = 0;
  if ((iVar9 < 0) && (*(int *)(param_3 + 0x21c) != 0)) {
    FUN_148e9b558(local_1d8);
  }
  if (lVar17 == 0) {
    if ((0 < (int)param_2[0x23]) && (lVar17 = param_2[10], (longlong)(int)lVar17 != 0)) {
      lVar11 = param_2[9];
      lVar20 = 0;
      do {
        local_178 = (void *)0x0;
        local_170 = *(int *)(*(longlong *)(lVar11 + lVar20) + 0x20);
        lVar18 = (longlong)local_170;
        pvVar5 = *(void **)(*(longlong *)(lVar11 + lVar20) + 0x18);
        if (lVar18 == 0) {
          local_16c = 0;
        }
        else {
          FUN_1446dd670(&local_178,local_170,0);
          memcpy(local_178,pvVar5,lVar18 * 2);
        }
        puVar12 = (undefined8 *)FUN_1447a1f4a(*(longlong *)(lVar11 + lVar20) + 8);
        local_188 = (void *)0x0;
        local_180 = *(int *)(puVar12 + 1);
        lVar18 = (longlong)local_180;
        pvVar5 = (void *)*puVar12;
        if (lVar18 == 0) {
          local_17c = 0;
        }
        else {
          FUN_1446dd670(&local_188,local_180,0);
          memcpy(local_188,pvVar5,lVar18 * 2);
        }
        FUN_148e90026(&local_88,&local_188);
        FUN_1400b22c2(&local_98,"action_ui_bigmap_tooltip_main_action");
        pwVar7 = local_98;
        if ((int)local_70 == local_90) {
          bVar22 = true;
          if (1 < (int)local_70) {
            iVar9 = wcscmp(local_78,local_98);
            bVar22 = iVar9 == 0;
          }
        }
        else {
          bVar22 = local_90 + (int)local_70 == 1;
        }
        if (pwVar7 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar7);
        }
        if (bVar22) {
          uVar10 = *(undefined8 *)(lVar11 + lVar20);
          plVar14 = *(longlong **)(lVar11 + 8 + lVar20);
          if (plVar14 == (longlong *)0x0) {
            *(undefined8 *)(param_3 + 0x328) = uVar10;
            plVar19 = *(longlong **)(param_3 + 0x330);
            if (plVar19 != (longlong *)0x0) {
              *(undefined8 *)(param_3 + 0x330) = 0;
LAB_146266093:
              LOCK();
              plVar14 = plVar19 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar9 = *piVar1;
                UNLOCK();
joined_r0x000146266141:
                if (iVar9 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
            *(undefined8 *)(param_3 + 0x328) = uVar10;
            plVar19 = *(longlong **)(param_3 + 0x330);
            if (plVar14 == plVar19) {
LAB_146266123:
              LOCK();
              plVar19 = plVar14 + 1;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)*plVar19 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar9 = *piVar1;
                UNLOCK();
                plVar19 = plVar14;
                goto joined_r0x000146266141;
              }
            }
            else {
              *(longlong **)(param_3 + 0x330) = plVar14;
LAB_1462661ae:
              if (plVar19 != (longlong *)0x0) goto LAB_146266093;
            }
          }
        }
        else {
          FUN_1400b22c2(&local_98,"action_ui_bigmap_tooltip_leave_menu_action");
          pwVar7 = local_98;
          if ((int)local_70 == local_90) {
            bVar22 = true;
            if (1 < (int)local_70) {
              iVar9 = wcscmp(local_78,local_98);
              bVar22 = iVar9 == 0;
            }
          }
          else {
            bVar22 = local_90 + (int)local_70 == 1;
          }
          if (pwVar7 != (wchar_t *)0x0) {
            FUN_1400020a8(pwVar7);
          }
          if (bVar22) {
            uVar10 = *(undefined8 *)(lVar11 + lVar20);
            plVar14 = *(longlong **)(lVar11 + 8 + lVar20);
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
              *(undefined8 *)(param_3 + 0x338) = uVar10;
              plVar19 = *(longlong **)(param_3 + 0x340);
              if (plVar14 != plVar19) {
                *(longlong **)(param_3 + 0x340) = plVar14;
                goto LAB_1462661ae;
              }
              goto LAB_146266123;
            }
            *(undefined8 *)(param_3 + 0x338) = uVar10;
            plVar19 = *(longlong **)(param_3 + 0x340);
            if (plVar19 != (longlong *)0x0) {
              *(undefined8 *)(param_3 + 0x340) = 0;
              goto LAB_146266093;
            }
          }
        }
        iVar9 = *(int *)(param_3 + 0x218);
        *(uint *)(param_3 + 0x218) = iVar9 + 1U;
        if (*(uint *)(param_3 + 0x21c) < iVar9 + 1U) {
          FUN_148e9c4e2(local_1d8,iVar9);
        }
        FUN_148c6eb9e((longlong)iVar9 * 0x20 + *local_1d8,&local_88);
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar20 = lVar20 + 0x10;
      } while ((longlong)(int)lVar17 * 0x10 != lVar20);
    }
  }
  else {
    uVar10 = FUN_140390f40();
    cVar8 = FUN_1448093f4(lVar17,uVar10);
    if (cVar8 == '\0') {
      if (*(char *)(param_3 + 0x208) != '\0') goto LAB_146266262;
    }
    else {
      *(undefined1 *)(param_3 + 0x208) = *(undefined1 *)(lVar17 + 0x18d);
      cVar8 = FUN_148d1065f();
      if (cVar8 == '\0') {
        if ((*(byte *)(param_3 + 0x208) & 1) != 0) {
          lVar11 = *(longlong *)(lVar17 + 0x198);
          if (lVar11 == 0) {
            uVar10 = FUN_14036a63e();
            lVar11 = FUN_14477b664(uVar10);
            *(longlong *)(lVar17 + 0x198) = lVar11;
          }
          plVar14 = (longlong *)(lVar17 + 400);
          lVar20 = *(longlong *)(lVar17 + 0x1a0);
          if (lVar20 == 0) {
            if ((lVar11 != 0) && (*plVar14 != 0)) {
              plVar19 = *(longlong **)(lVar11 + 0xb8);
              if ((plVar19 == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar8 == '\0')) {
                *(undefined8 *)(lVar17 + 0x1a0) = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar19 + 0x110))(plVar19);
                lVar20 = FUN_144aff482(uVar10,plVar14);
                *(longlong *)(lVar17 + 0x1a0) = lVar20;
                if (lVar20 != 0) {
                  lVar11 = *(longlong *)(lVar17 + 0x198);
                  goto LAB_146266470;
                }
              }
            }
LAB_146266262:
            FUN_1400b22c2(&local_88,"No Locked Message Set");
            if ((longlong **)(param_3 + 0x2e0) == &local_88) {
              if (local_88 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(param_3 + 0x2e0) != 0) {
                FUN_1400020a8();
              }
              *(longlong **)(param_3 + 0x2e0) = local_88;
              local_88 = (longlong *)0x0;
              *(int *)(param_3 + 0x2e8) = (int)uStack_80;
              *(undefined4 *)(param_3 + 0x2ec) = uStack_80._4_4_;
            }
          }
          else {
LAB_146266470:
            if (lVar11 == 0) {
              uVar10 = FUN_14036a63e();
              lVar11 = FUN_14477b664(uVar10);
              *(longlong *)(lVar17 + 0x198) = lVar11;
              lVar20 = *(longlong *)(lVar17 + 0x1a0);
              if (((lVar20 == 0) && (lVar20 = 0, lVar11 != 0)) && (*plVar14 != 0)) {
                plVar19 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar19 == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar8 == '\0')) {
                  lVar20 = 0;
                }
                else {
                  uVar10 = (**(code **)(*plVar19 + 0x110))(plVar19);
                  lVar20 = FUN_144aff482(uVar10,plVar14);
                }
                *(longlong *)(lVar17 + 0x1a0) = lVar20;
              }
            }
            puVar15 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar20 + 8) != (undefined4 *)0x0) {
              puVar15 = *(undefined4 **)(lVar20 + 8);
            }
            local_88 = (longlong *)0x0;
            uStack_80 = 0;
            FUN_1400b2348(puVar15,&local_88,1);
            local_1f0 = 0xffffffff;
            local_1f8 = 0;
            iVar9 = FUN_1447ee042(&local_88,L"BigMap_ActionsLocked_DLC",0x18,1);
            if (local_88 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (iVar9 == -1) {
              lVar11 = *(longlong *)(lVar17 + 0x198);
              if (lVar11 == 0) {
                uVar10 = FUN_14036a63e();
                lVar11 = FUN_14477b664(uVar10);
                *(longlong *)(lVar17 + 0x198) = lVar11;
              }
              lVar20 = *(longlong *)(lVar17 + 0x1a0);
              if (((lVar20 == 0) && (lVar20 = 0, lVar11 != 0)) && (*plVar14 != 0)) {
                plVar19 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar19 == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(*plVar19 + 0x108))(), cVar8 == '\0')) {
                  lVar20 = 0;
                }
                else {
                  uVar10 = (**(code **)(*plVar19 + 0x110))(plVar19);
                  lVar20 = FUN_144aff482(uVar10,plVar14);
                }
                *(longlong *)(lVar17 + 0x1a0) = lVar20;
              }
              uVar10 = FUN_1447a1f4a(lVar20 + 0x18);
              FUN_144a787a6(param_3 + 0x2e0,uVar10);
            }
            else {
              *(undefined1 *)(param_3 + 0x209) = 1;
              lVar11 = *(longlong *)(lVar17 + 0x198);
              if (lVar11 == 0) {
                uVar10 = FUN_14036a63e();
                lVar11 = FUN_14477b664(uVar10);
                *(longlong *)(lVar17 + 0x198) = lVar11;
              }
              lVar20 = *(longlong *)(lVar17 + 0x1a0);
              if (((lVar20 == 0) && (lVar20 = 0, lVar11 != 0)) && (*plVar14 != 0)) {
                plVar19 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar19 == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar8 == '\0')) {
                  lVar20 = 0;
                }
                else {
                  uVar10 = (**(code **)(*plVar19 + 0x110))(plVar19);
                  lVar20 = FUN_144aff482(uVar10,plVar14);
                }
                *(longlong *)(lVar17 + 0x1a0) = lVar20;
              }
              FUN_14023409e(&local_148,lVar20 + 0x18,1);
              local_a0 = &uStack_68;
              local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
              uStack_80 = 0;
              local_78 = (wchar_t *)0x0;
              local_70 = (ulonglong)local_70._4_4_ << 0x20;
              local_a8 = &local_88;
              FUN_14010d304(&local_98);
              local_b8 = local_148;
              local_b0 = local_140;
              if (local_140 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_140 + 1) = (int)local_140[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_c8,&local_b8,&local_98);
              FUN_14007f2db(local_98,local_90);
              if (local_98 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              if (local_78 != (wchar_t *)0x0) {
                (**(code **)(*(longlong *)local_78 + 0x10))();
              }
              if (local_140 != (longlong *)0x0) {
                LOCK();
                plVar14 = local_140 + 1;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)*plVar14 == 0) {
                  (**(code **)*local_140)(local_140);
                  LOCK();
                  piVar1 = (int *)((longlong)local_140 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_140 + 0x10))(local_140);
                  }
                }
              }
              uVar10 = FUN_1447a1f4a(local_c8);
              FUN_144a787a6(param_3 + 0x2e0,uVar10);
              if (local_c8[0] != (longlong *)0x0) {
                (**(code **)(*local_c8[0] + 0x10))();
              }
            }
          }
          goto LAB_1462662cf;
        }
      }
      else {
        *(undefined1 *)(param_3 + 0x208) = 0;
      }
      if (*(char *)(lVar17 + 0x18c) == '\x01') {
        *(undefined1 *)(param_3 + 0x208) = 0;
        lVar17 = param_2[10];
        if ((longlong)(int)lVar17 != 0) {
          lVar11 = param_2[9];
          lVar20 = 0;
          do {
            local_158 = (void *)0x0;
            local_150 = *(int *)(*(longlong *)(lVar11 + lVar20) + 0x20);
            lVar18 = (longlong)local_150;
            pvVar5 = *(void **)(*(longlong *)(lVar11 + lVar20) + 0x18);
            if (lVar18 == 0) {
              local_14c = 0;
            }
            else {
              FUN_1446dd670(&local_158,local_150,0);
              memcpy(local_158,pvVar5,lVar18 * 2);
            }
            puVar12 = (undefined8 *)FUN_1447a1f4a(*(longlong *)(lVar11 + lVar20) + 8);
            local_168 = (void *)0x0;
            local_160 = *(int *)(puVar12 + 1);
            lVar18 = (longlong)local_160;
            pvVar5 = (void *)*puVar12;
            if (lVar18 == 0) {
              local_15c = 0;
            }
            else {
              FUN_1446dd670(&local_168,local_160,0);
              memcpy(local_168,pvVar5,lVar18 * 2);
            }
            FUN_148e90026(&local_88,&local_168);
            FUN_1400b22c2(&local_98,"action_ui_bigmap_tooltip_main_action");
            pwVar7 = local_98;
            if ((int)local_70 == local_90) {
              bVar22 = true;
              if (1 < (int)local_70) {
                iVar9 = wcscmp(local_78,local_98);
                bVar22 = iVar9 == 0;
              }
            }
            else {
              bVar22 = local_90 + (int)local_70 == 1;
            }
            if (pwVar7 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar7);
            }
            if (bVar22) {
              uVar10 = *(undefined8 *)(lVar11 + lVar20);
              plVar14 = *(longlong **)(lVar11 + 8 + lVar20);
              if (plVar14 == (longlong *)0x0) {
                *(undefined8 *)(param_3 + 0x328) = uVar10;
                plVar19 = *(longlong **)(param_3 + 0x330);
                if (plVar19 != (longlong *)0x0) {
                  *(undefined8 *)(param_3 + 0x330) = 0;
LAB_146265d27:
                  LOCK();
                  plVar14 = plVar19 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar19 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    iVar9 = *piVar1;
                    UNLOCK();
joined_r0x000146265dd5:
                    if (iVar9 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                    }
                  }
                }
              }
              else {
                LOCK();
                *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                UNLOCK();
                *(undefined8 *)(param_3 + 0x328) = uVar10;
                plVar19 = *(longlong **)(param_3 + 0x330);
                if (plVar14 == plVar19) {
LAB_146265db7:
                  LOCK();
                  plVar19 = plVar14 + 1;
                  *(int *)plVar19 = (int)*plVar19 + -1;
                  UNLOCK();
                  if ((int)*plVar19 == 0) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    iVar9 = *piVar1;
                    UNLOCK();
                    plVar19 = plVar14;
                    goto joined_r0x000146265dd5;
                  }
                }
                else {
                  *(longlong **)(param_3 + 0x330) = plVar14;
LAB_146265e42:
                  if (plVar19 != (longlong *)0x0) goto LAB_146265d27;
                }
              }
            }
            else {
              FUN_1400b22c2(&local_98,"action_ui_bigmap_tooltip_leave_menu_action");
              pwVar7 = local_98;
              if ((int)local_70 == local_90) {
                bVar22 = true;
                if (1 < (int)local_70) {
                  iVar9 = wcscmp(local_78,local_98);
                  bVar22 = iVar9 == 0;
                }
              }
              else {
                bVar22 = local_90 + (int)local_70 == 1;
              }
              if (pwVar7 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar7);
              }
              if (bVar22) {
                uVar10 = *(undefined8 *)(lVar11 + lVar20);
                plVar14 = *(longlong **)(lVar11 + 8 + lVar20);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                  UNLOCK();
                  *(undefined8 *)(param_3 + 0x338) = uVar10;
                  plVar19 = *(longlong **)(param_3 + 0x340);
                  if (plVar14 != plVar19) {
                    *(longlong **)(param_3 + 0x340) = plVar14;
                    goto LAB_146265e42;
                  }
                  goto LAB_146265db7;
                }
                *(undefined8 *)(param_3 + 0x338) = uVar10;
                plVar19 = *(longlong **)(param_3 + 0x340);
                if (plVar19 != (longlong *)0x0) {
                  *(undefined8 *)(param_3 + 0x340) = 0;
                  goto LAB_146265d27;
                }
              }
            }
            iVar9 = *(int *)(param_3 + 0x218);
            *(uint *)(param_3 + 0x218) = iVar9 + 1U;
            if (*(uint *)(param_3 + 0x21c) < iVar9 + 1U) {
              FUN_148e9c4e2(local_1d8,iVar9);
            }
            FUN_148c6eb9e((longlong)iVar9 * 0x20 + *local_1d8,&local_88);
            if (local_78 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_88 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            lVar20 = lVar20 + 0x10;
          } while ((longlong)(int)lVar17 * 0x10 != lVar20);
        }
      }
    }
  }
LAB_1462662cf:
  if (((*(char *)(param_1 + 0x2c9) != '\0') ||
      ((*(char *)(param_1 + 0x2ca) == '\x01' && (param_2[8] != 0)))) &&
     (*(int *)(param_3 + 0x218) < 2)) {
    FUN_144a5dc74(&local_98);
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
    local_70 = 0;
    uStack_68 = 0;
    FUN_1446ddda2(&local_88,"UIBigMap_ShowOnMap",0);
    FUN_140ac6c96(&local_88,&local_98);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(local_198,"action_ui_bigmap_tooltip_locate_on_map");
    puVar12 = (undefined8 *)FUN_1447a1f4a(&local_98);
    local_1a8 = (void *)0x0;
    local_1a0 = *(int *)(puVar12 + 1);
    lVar17 = (longlong)local_1a0;
    pvVar5 = (void *)*puVar12;
    if (lVar17 == 0) {
      local_19c = 0;
    }
    else {
      FUN_1446dd670(&local_1a8,local_1a0,0);
      memcpy(local_1a8,pvVar5,lVar17 * 2);
    }
    FUN_148e90026(&local_88,&local_1a8,local_198);
    iVar9 = *(int *)(param_3 + 0x218);
    *(uint *)(param_3 + 0x218) = iVar9 + 1U;
    if (*(uint *)(param_3 + 0x21c) < iVar9 + 1U) {
      FUN_148e9c4e2(local_1d8,iVar9);
    }
    FUN_148c6eb9e((longlong)iVar9 * 0x20 + *local_1d8,&local_88);
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_98 + 0x10))();
    }
  }
  FUN_140002266(&local_88,L"difficulty_%d",*(undefined4 *)((longlong)param_2 + 0x1c));
  if ((longlong **)(param_3 + 0x220) == &local_88) {
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 0x220) != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(param_3 + 0x220) = local_88;
    *(int *)(param_3 + 0x228) = (int)uStack_80;
    *(undefined4 *)(param_3 + 0x22c) = uStack_80._4_4_;
  }
  switch(*(undefined4 *)((longlong)param_2 + 0x1c)) {
  case 1:
    local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
    pcVar16 = "BigMap_Completed";
    break;
  case 2:
    local_78 = (wchar_t *)((ulonglong)local_78._4_4_ << 0x20);
    pcVar16 = "UIDifficulty_VEasy";
    break;
  case 3:
    local_78 = (wchar_t *)((ulonglong)local_78._4_4_ << 0x20);
    pcVar16 = "UIDifficulty_Easy";
    break;
  case 4:
    local_78 = (wchar_t *)((ulonglong)local_78._4_4_ << 0x20);
    pcVar16 = "UIDifficulty_Normal";
    break;
  case 5:
    local_78 = (wchar_t *)((ulonglong)local_78._4_4_ << 0x20);
    pcVar16 = "UIDifficulty_Hard";
    break;
  case 6:
    local_78 = (wchar_t *)((ulonglong)local_78._4_4_ << 0x20);
    pcVar16 = "UIDifficulty_VHard";
    break;
  default:
    local_78 = (wchar_t *)((ulonglong)local_78._4_4_ << 0x20);
    pcVar16 = "UIDifficultyBase";
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_80 = 0;
  local_88 = (longlong *)0x0;
  FUN_1446ddda2(&local_88,pcVar16,0);
  FUN_1410d1eba(&local_98,&local_88);
  uVar10 = FUN_1447a1f4a(&local_98);
  FUN_144a787a6(param_3 + 0x230,uVar10);
  if (local_98 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  cVar8 = *(char *)((longlong)param_2 + 0x84);
  *(char *)(param_3 + 0x278) = cVar8;
  *(undefined1 *)(param_3 + 0x279) = *(undefined1 *)((longlong)param_2 + 0x85);
  if (cVar8 == '\x01') {
    cVar8 = FUN_144a7c5f6(param_2 + 0x19);
    if (cVar8 == '\0') {
      puVar12 = (undefined8 *)FUN_1447a1f4a(param_2 + 0x19);
      local_88 = (longlong *)0x0;
      uVar3 = *(uint *)(puVar12 + 1);
      pvVar5 = (void *)*puVar12;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        uStack_80 = (ulonglong)uVar3;
      }
      else {
        FUN_1446dd670(&local_88,uVar3,0);
        memcpy(local_88,pvVar5,(longlong)(int)uVar3 * 2);
      }
    }
    else {
      FUN_1400b22c2(&local_88,"Designer: Set my location name");
    }
    iVar9 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar9 = 0;
    }
    FUN_1402980a2(param_3 + 0x1f8,local_88,iVar9);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar13 = (longlong *)FUN_140e82300();
    plVar14 = (longlong *)*plVar13;
    plVar19 = *(longlong **)(param_3 + 0x240);
    if (plVar19 != plVar14) {
      *(longlong **)(param_3 + 0x240) = plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
    *(int *)(param_3 + 0x248) = (int)plVar13[1];
    FUN_1400b22c2(&local_88,&DAT_149e02088);
    if ((longlong **)(param_3 + 0x2d0) == &local_88) {
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_3 + 0x2d0) != 0) {
        FUN_1400020a8();
      }
      *(longlong **)(param_3 + 0x2d0) = local_88;
      local_88 = (longlong *)0x0;
      *(int *)(param_3 + 0x2d8) = (int)uStack_80;
      *(undefined4 *)(param_3 + 0x2dc) = uStack_80._4_4_;
    }
    *(undefined1 *)(param_3 + 0x27a) = *(undefined1 *)((longlong)param_2 + 0x86);
  }
  if (((char)param_2[0x13] == '\x01') && ((longlong)(int)param_2[0x15] != 0)) {
    lVar17 = param_2[0x14];
    lVar11 = (longlong)(int)param_2[0x15] * 0xd8;
    do {
      FUN_145a050a6(param_3 + 0x280,lVar17);
      lVar17 = lVar17 + 0xd8;
      lVar11 = lVar11 + -0xd8;
    } while (lVar11 != 0);
  }
  lVar17 = param_2[0x1d];
  *(char *)(param_3 + 0x2c8) = (char)lVar17;
  if (((char)lVar17 == '\x01') && (lVar17 = param_2[0x1f], (longlong)(int)lVar17 != 0)) {
    local_1d8 = (longlong *)param_2[0x1e];
    local_1d0 = (longlong *)(param_3 + 0x2f0);
    lVar11 = 0;
    do {
      if (*(longlong *)((longlong)local_1d8 + lVar11) != 0) {
        lVar18 = *(longlong *)((longlong)local_1d8 + lVar11) + 0x18;
        lVar20 = FUN_14090ae24(lVar18);
        if (lVar20 != 0) {
          local_88 = (longlong *)0x0;
          uStack_80 = 0;
          FUN_140390f7a(lVar18,&local_88);
          iVar9 = *(int *)(param_3 + 0x2f8);
          *(uint *)(param_3 + 0x2f8) = iVar9 + 1U;
          if (*(uint *)(param_3 + 0x2fc) < iVar9 + 1U) {
            FUN_1447a1bd6(local_1d0,iVar9);
          }
          plVar14 = local_88;
          lVar20 = *local_1d0;
          lVar21 = (longlong)iVar9 * 0x10;
          puVar12 = (undefined8 *)(lVar20 + lVar21);
          *(undefined8 *)(lVar20 + lVar21) = 0;
          lVar18 = (longlong)(int)uStack_80;
          *(int *)(lVar20 + 8 + lVar21) = (int)uStack_80;
          if (lVar18 == 0) {
            *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar12,uStack_80 & 0xffffffff,0);
            memcpy((void *)*puVar12,plVar14,lVar18 * 2);
          }
          if (local_88 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar17 * 8 != lVar11);
  }
  lVar17 = param_2[0xb];
  *(char *)(param_3 + 0x250) = (char)lVar17;
  if ((char)lVar17 == '\x01') {
    uVar3 = *(uint *)(param_2 + 0xf);
    if ((int)uVar3 < 2) {
      FUN_1400b22c2(&local_88,"No Player Name Set");
    }
    else {
      local_88 = (longlong *)0x0;
      pvVar5 = (void *)param_2[0xe];
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
      FUN_1446dd670(&local_88,(ulonglong)uVar3,0);
      memcpy(local_88,pvVar5,(ulonglong)uVar3 * 2);
    }
    iVar9 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar9 = 0;
    }
    FUN_1402980a2(param_3 + 0x1f8,local_88,iVar9);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a787a6(param_3 + 600,param_2 + 0xc);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbdd478) && (FUN_144b3d300(&DAT_14cbdd478), DAT_14cbdd478 == -1)) {
      plVar14 = (longlong *)FUN_140e82300();
      DAT_14cbdd468 = (longlong *)*plVar14;
      if (DAT_14cbdd468 != (longlong *)0x0) {
        (**(code **)(*DAT_14cbdd468 + 8))();
      }
      _DAT_14cbdd470 = (undefined4)plVar14[1];
      atexit((_func_5014 *)&LAB_1442d1e4b);
      _Init_thread_footer(&DAT_14cbdd478);
    }
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
    local_70 = 0;
    uStack_68 = 0;
    FUN_1446ddda2(&local_88,"UIBigMap_CharacterLevel",0);
    FUN_140ac6c96(&local_88,&DAT_14cbdd468);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    local_e8 = (longlong *)0x0;
    plStack_e0 = (longlong *)0x0;
    FUN_1413a454c(local_1b8,(int)param_2[0x10],0);
    FUN_14023409e(&local_1c8,&DAT_14cbdd468,1);
    local_88 = (longlong *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(&local_78,local_1b8);
    local_a0 = &uStack_68;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_1c8;
    local_b0 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_1c0 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1c0 + 0x10))(local_1c0);
        }
      }
    }
    if (local_1b8[0] != (longlong *)0x0) {
      (**(code **)(*local_1b8[0] + 0x10))();
    }
    uVar10 = FUN_1447a1f4a(local_c8);
    FUN_144a787a6(param_3 + 0x268,uVar10);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    plVar14 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar19 = plStack_e0 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    plVar13 = (longlong *)FUN_140e82300();
    plVar14 = (longlong *)*plVar13;
    plVar19 = *(longlong **)(param_3 + 0x240);
    if (plVar19 != plVar14) {
      *(longlong **)(param_3 + 0x240) = plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
    *(int *)(param_3 + 0x248) = (int)plVar13[1];
  }
  if (0 < (longlong)(int)param_2[0x23]) {
    lVar17 = param_2[0x22];
    local_1d8 = (longlong *)(param_3 + 0x300);
    lVar11 = (longlong)(int)param_2[0x23] << 4;
    do {
      puVar12 = (undefined8 *)FUN_1447a1f4a(lVar17);
      iVar9 = *(int *)(param_3 + 0x308);
      *(uint *)(param_3 + 0x308) = iVar9 + 1U;
      if (*(uint *)(param_3 + 0x30c) < iVar9 + 1U) {
        FUN_1447a1bd6(local_1d8,iVar9);
      }
      lVar20 = *local_1d8;
      lVar18 = (longlong)iVar9 * 0x10;
      puVar2 = (undefined8 *)(lVar20 + lVar18);
      *(undefined8 *)(lVar20 + lVar18) = 0;
      iVar9 = *(int *)(puVar12 + 1);
      pvVar5 = (void *)*puVar12;
      *(int *)(lVar20 + 8 + lVar18) = iVar9;
      if ((longlong)iVar9 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar2,iVar9,0);
        memcpy((void *)*puVar2,pvVar5,(longlong)iVar9 * 2);
      }
      lVar17 = lVar17 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  lVar17 = param_2[0x29];
  *(char *)(param_3 + 0x310) = (char)lVar17;
  if ((char)lVar17 == '\x01') {
    iVar9 = *(int *)((longlong)param_2 + 0x14c);
    FUN_140212f8e(&local_a8);
    pplVar6 = local_a8;
    local_1e0 = 0;
    local_1e8 = 0;
    local_1f0 = 0;
    local_1f8 = 0;
    FUN_14021300e(&local_88,0x7b2,1,1);
    lVar17 = SUB168(SEXT816((longlong)pplVar6 - (longlong)local_88) * SEXT816(0x29406b2a1a85bd43),8)
             - ((longlong)pplVar6 - (longlong)local_88);
    auVar23._0_8_ =
         (double)(((lVar17 >> 0x17) - (lVar17 >> 0x3f)) + (longlong)iVar9) * 10000000.0 + 0.5;
    auVar23._8_8_ = 0;
    auVar23 = roundpd(auVar23,auVar23,1);
    local_98 = (wchar_t *)(longlong)auVar23._0_8_;
    FUN_14681ea84(&local_98,&local_88,L"%h:%m");
    FUN_14496493a(&local_88,0,1,1);
    iVar9 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar9 = 0;
    }
    FUN_1402980a2(param_3 + 0x318,local_88,iVar9);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar4 = *(ushort **)(param_3 + 0x80);
  if (puVar4 != (ushort *)0x0) {
    *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(param_3 + 0x78) & 0x3f));
  }
LAB_14626546e:
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146267382 FUN_146267382 body=390 status=ok
// SIG undefined FUN_146267382(void)

void FUN_146267382(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x288) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0x408) == '\0')) {
    FUN_1448d5e3c(&local_48,param_1 + 0x208);
    lVar5 = *(longlong *)(local_48 + 0x410);
    SRWLock = (PSRWLOCK)(lVar5 + 0x1b0);
    AcquireSRWLockShared(SRWLock);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    uVar3 = FUN_14479d2ce(param_1 + 0x30);
    lVar4 = FUN_140391a3c(uVar3);
    if (lVar4 != 0) {
      lVar5 = FUN_14626750a(lVar5,*(undefined4 *)(param_1 + 0x324));
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        uVar3 = *(undefined8 *)(lVar5 + 0x40);
        *puVar6 = &PTR_FUN_14b9c4878;
        puVar6[1] = uVar3;
        *(undefined1 *)(puVar6 + 2) = 0;
        FUN_14039144e(lVar4,puVar6);
      }
      *(undefined4 *)(param_1 + 0x324) = param_3;
      if (param_2 != 0) {
        puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        uVar3 = *(undefined8 *)(param_2 + 0x40);
        *puVar6 = &PTR_FUN_14b9c4878;
        puVar6[1] = uVar3;
        *(undefined1 *)(puVar6 + 2) = 1;
        FUN_14039144e(lVar4,puVar6);
        if (lVar5 == 0) {
          FUN_140de1078(param_1,&DAT_14cbdd378,0,0);
        }
      }
    }
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626750a FUN_14626750a body=400 status=ok
// SIG undefined FUN_14626750a(void)

longlong FUN_14626750a(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar7 = (int)param_1[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_1;
  if ((iStack_44 == iVar7) && (uStack_50 == plVar1)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar4 = *local_80;
      lVar2 = (longlong)iStack_64 * 0x60;
      if (*(int *)(lVar4 + 0x10 + lVar2) != *(int *)(lVar4 + 0x3c + lVar2)) {
        lVar2 = lVar2 + lVar4;
        lVar4 = lVar2 + 0x40;
        if (*(longlong *)(lVar2 + 0x48) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x48);
        }
        iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & param_2) * 4);
        if (iVar3 != -1) {
          lVar4 = *(longlong *)(lVar2 + 8);
          iVar5 = iVar3;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar5 * 0x160) == param_2) goto LAB_146267670;
            iVar5 = *(int *)((longlong)iVar5 * 0x160 + lVar4 + 0x158);
          } while (iVar5 != -1);
        }
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_1 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar7));
  }
  goto LAB_14626763a;
  while (iVar3 = *(int *)(lVar2 + 0x158), iVar3 != -1) {
LAB_146267670:
    lVar2 = lVar4 + (longlong)iVar3 * 0x160;
    if (*(uint *)(lVar4 + (longlong)iVar3 * 0x160) == param_2) goto LAB_146267687;
  }
  lVar2 = 0;
LAB_146267687:
  lVar6 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar6 = 0;
  }
LAB_14626763a:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14626769c FUN_14626769c body=1690 status=ok
// SIG undefined FUN_14626769c(void)

void FUN_14626769c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(param_1 + 0xb8) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xb8) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0xc0) = local_30;
    *(undefined4 *)(param_1 + 0xc4) = local_2c;
  }
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(param_1 + 200) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 200) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0xd0) = local_30;
    *(undefined4 *)(param_1 + 0xd4) = local_2c;
  }
  *(undefined1 *)(param_1 + 0xd8) = 1;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(param_1 + 0xe0) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xe0) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = local_2c;
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
  iVar2 = *(int *)(param_1 + 0x104);
  FUN_146162165(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  *(undefined4 *)(param_1 + 0x100) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x104) != 0)) {
    FUN_148e9b558(param_1 + 0xf8);
  }
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(param_1 + 0x108) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x108) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x108) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x110) = local_30;
    *(undefined4 *)(param_1 + 0x114) = local_2c;
  }
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(param_1 + 0x118) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x118) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x120) = local_30;
    *(undefined4 *)(param_1 + 0x124) = local_2c;
  }
  plVar5 = (longlong *)FUN_140e82300();
  plVar3 = (longlong *)*plVar5;
  plVar4 = *(longlong **)(param_1 + 0x128);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x128) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(int *)(param_1 + 0x130) = (int)plVar5[1];
  *(undefined1 *)(param_1 + 0x138) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(param_1 + 0x140) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x140) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x148) = local_30;
    *(undefined4 *)(param_1 + 0x14c) = local_2c;
  }
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(param_1 + 0x150) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x150) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x158) = local_30;
    *(undefined4 *)(param_1 + 0x15c) = local_2c;
  }
  *(undefined2 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x162) = 0;
  FUN_1461cf39e(param_1 + 0x168,0);
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(param_1 + 0x1b8) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x1b8) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x1c0) = local_30;
    *(undefined4 *)(param_1 + 0x1c4) = local_2c;
  }
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(param_1 + 0x1c8) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x1c8) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x1d0) = local_30;
    *(undefined4 *)(param_1 + 0x1d4) = local_2c;
  }
  iVar2 = *(int *)(param_1 + 0x1e4);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x1e4) != 0)) {
    FUN_1408be2c4(param_1 + 0x1d8,0);
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  plVar3 = *(longlong **)(param_1 + 0x218);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x218) = 0;
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  *(undefined8 *)(param_1 + 0x220) = 0;
  plVar3 = *(longlong **)(param_1 + 0x228);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x228) = 0;
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  iVar2 = *(int *)(param_1 + 500);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 500) != 0)) {
    FUN_1408be2c4(param_1 + 0x1e8,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146267d38 FUN_146267d38 body=483 status=ok
// SIG undefined FUN_146267d38(void)

void FUN_146267d38(longlong *param_1)

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



// FUNCTION 146267f1c FUN_146267f1c body=47 status=ok
// SIG undefined FUN_146267f1c(void)

void FUN_146267f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_145979a62();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
    FUN_1416df0a0(*(longlong *)(lVar1 + 8),param_3);
    return;
  }
  return;
}



// FUNCTION 146267f4c FUN_146267f4c body=42 status=ok
// SIG undefined FUN_146267f4c(void)

int FUN_146267f4c(void)

{
  int iVar1;
  
  iVar1 = FUN_1416e6dda();
  if ((iVar1 == 0) && (iVar1 = FUN_1416e2128(), iVar1 == 0)) {
    return 0;
  }
  FUN_146416bfe();
  return iVar1;
}



// FUNCTION 146267f76 FUN_146267f76 body=169 status=ok
// SIG undefined FUN_146267f76(void)

void FUN_146267f76(void)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38 [2];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1416f7d00(&local_28);
  FUN_1416f07f0(&local_28);
  FUN_1416ec2e0(&local_28);
  FUN_140056680(local_38,L"RegisterNativeRedirects");
  local_48 = local_28;
  local_40 = (undefined4)uStack_20;
  FUN_14107234a();
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a24(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146268020 FUN_146268020 body=98 status=ok
// SIG undefined FUN_146268020(void)

int FUN_146268020(void)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c82b3cc) {
    FUN_144b3d300(&DAT_14c82b3cc);
    if (DAT_14c82b3cc == -1) {
      DAT_14c82b3c8 = 0;
      _Init_thread_footer(&DAT_14c82b3cc);
    }
  }
  LOCK();
  iVar1 = DAT_14c82b3c8;
  DAT_14c82b3c8 = DAT_14c82b3c8 + 1;
  UNLOCK();
  return iVar1;
}



// FUNCTION 146268082 FUN_146268082 body=85 status=ok
// SIG undefined FUN_146268082(void)

undefined8 * FUN_146268082(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462680d8 FUN_1462680d8 body=118 status=ok
// SIG undefined FUN_1462680d8(void)

void FUN_1462680d8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_14060a7c0((longlong *)(param_1 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar5 = (longlong)iVar1 * 0x40;
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar5) = lVar3;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0;
  if (lVar3 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146268142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar4)(plVar4,lVar2 + lVar5 + 0x10);
    return;
  }
  return;
}



// FUNCTION 14626819e FUN_14626819e body=114 status=ok
// SIG undefined FUN_14626819e(void)

void FUN_14626819e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144761492(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_145804ca2(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146268212 FUN_146268212 body=196 status=ok
// SIG undefined FUN_146268212(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146268212(void)

{
  if ((DAT_14c83373f & 2) == 0) {
    DAT_14c83373f = DAT_14c83373f | 2;
    _DAT_14c8336e0 = L"FResourceArrayInterface";
    _DAT_14c8336f8 = FUN_146826540;
    _DAT_14c833700 = FUN_146825d77;
    _DAT_14c833708 = FUN_146825fd6;
    _DAT_14c833710 = FUN_1407e02ea;
    _DAT_14c833718 = FUN_146826273;
    _DAT_14c8336f0 = FUN_1467ac73a;
    _DAT_14c833730 = 0xffffffff00000008;
    _DAT_14c833738 = 8;
    DAT_14c83373c = 2;
    _DAT_14c833720 = &LAB_1467ac764;
    FUN_1407e00cc(&DAT_14c8336d8);
  }
  return &DAT_14c8336d8;
}



// FUNCTION 1462682d6 FUN_1462682d6 body=90 status=ok
// SIG undefined FUN_1462682d6(void)

undefined8 * FUN_1462682d6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FUN_140ded26a(param_2);
  return param_2;
}



// FUNCTION 146268330 FUN_146268330 body=145 status=ok
// SIG undefined FUN_146268330(void)

longlong * FUN_146268330(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149e020b0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_149e01c10;
  puVar1[3] = param_2;
  puVar1[4] = &LAB_1467adf94;
  return param_1;
}



// FUNCTION 1462683c2 FUN_1462683c2 body=89 status=ok
// SIG undefined FUN_1462683c2(void)

void FUN_1462683c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar6 = (undefined8 *)*puVar5;
  while( true ) {
    FUN_1400020a8(puVar5);
    if (puVar6 == (undefined8 *)0x0) break;
    *(undefined8 **)(param_1 + 8) = puVar6;
    puVar3 = (undefined8 *)*puVar6;
    plVar4 = (longlong *)puVar6[2];
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = puVar3;
  }
  return;
}



// FUNCTION 14626841c FUN_14626841c body=135 status=ok
// SIG undefined FUN_14626841c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14626841c(void)

{
  longlong lVar1;
  
  FUN_1400020a8(DAT_14c833a58);
  if (DAT_14c833a48 != 0) {
    FUN_1400020a8();
  }
  do {
    lVar1 = FUN_14010889a(&DAT_14c833a00);
  } while (lVar1 != 0);
  _DAT_14c8339e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8339f0,1);
                    /* WARNING: Could not recover jumptable at 0x00014626848e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c8339c0);
  return;
}



// FUNCTION 1462684a4 FUN_1462684a4 body=132 status=ok
// SIG undefined FUN_1462684a4(void)

void FUN_1462684a4(longlong param_1,int param_2)

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



// FUNCTION 14626852a FUN_14626852a body=93 status=ok
// SIG undefined FUN_14626852a(void)

void FUN_14626852a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e01730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146268588 FUN_146268588 body=93 status=ok
// SIG undefined FUN_146268588(void)

void FUN_146268588(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e01c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1462685e6 FUN_1462685e6 body=147 status=ok
// SIG undefined FUN_1462685e6(void)

void FUN_1462685e6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14626867a FUN_14626867a body=63 status=ok
// SIG undefined FUN_14626867a(void)

void FUN_14626867a(longlong param_1,longlong param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (param_2 != 0) {
    FUN_14480f766(param_1 + 0x48,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001462686b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 1462686ba FUN_1462686ba body=219 status=ok
// SIG undefined FUN_1462686ba(void)

undefined8 FUN_1462686ba(undefined8 param_1)

{
  size_t sVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  longlong local_78 [2];
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  undefined2 *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140d6b9b4(&local_88);
  local_60 = local_80 + -1;
  if (local_80 == 0) {
    local_60 = 0;
  }
  local_68 = local_88;
  local_58 = &DAT_14c764000;
  sVar1 = wcslen(&DAT_14c764000);
  local_48 = L"Patch";
  local_40 = 5;
  local_38 = &DAT_14c764000;
  local_50 = (int)sVar1;
  local_30 = (int)sVar1;
  FUN_140bee87a(local_78,&local_68,4);
  FUN_140aa5ef8(param_1,local_78);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146268796 FUN_146268796 body=280 status=ok
// SIG undefined FUN_146268796(void)

ulonglong FUN_146268796(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                       undefined1 param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  param_4 = param_4 & 0xffffff01;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xe8))(param_1,param_3,param_4);
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    plVar3 = (longlong *)
             (**(code **)(*param_1 + 0x100))
                       (param_1,param_2,0,CONCAT31((int3)(param_4 >> 8),param_5) & 0xffffff01);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x50))(plVar2);
      if ((longlong)uVar4 < 1) {
        uVar4 = 1;
      }
      else {
        uVar7 = 0x100000;
        if (uVar4 < 0x100000) {
          uVar7 = uVar4;
        }
        uVar5 = FUN_14001cc68(uVar7,0);
        do {
          if (uVar4 == 0) {
            uVar4 = 0;
            break;
          }
          uVar6 = uVar7;
          if ((longlong)uVar4 <= (longlong)uVar7) {
            uVar6 = uVar4;
          }
          cVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,uVar5,uVar6);
          if (cVar1 == '\0') {
            uVar4 = 1;
            break;
          }
          cVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,uVar5,uVar6);
          if (cVar1 == '\0') {
            uVar6 = 0;
          }
          uVar4 = uVar4 - uVar6;
        } while (cVar1 != '\0');
        FUN_1400020a8(uVar5);
        uVar4 = CONCAT71((int7)(uVar4 >> 8),uVar4 == 0);
      }
      (**(code **)*plVar3)(plVar3,1);
    }
    (**(code **)*plVar2)(plVar2,1);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1462688ae FUN_1462688ae body=96 status=ok
// SIG undefined FUN_1462688ae(void)

undefined8 FUN_1462688ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,param_3);
  FUN_140aa5ef8(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146268910 FUN_146268910 body=127 status=ok
// SIG undefined FUN_146268910(void)

void FUN_146268910(void)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  int local_88;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c83e674 == 0) {
    DAT_14c83e674 = 0x193200;
    FUN_1405d5a96(local_98);
    iVar1 = 0x10000;
    if (local_88 != 0) {
      iVar1 = local_88;
    }
    DAT_14c83e674 = -iVar1 & (DAT_14c83e674 + iVar1) - 1;
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146268990 FUN_146268990 body=127 status=ok
// SIG undefined FUN_146268990(void)

void FUN_146268990(void)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  int local_88;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c83e678 == 0) {
    DAT_14c83e678 = 0x7300;
    FUN_1405d5a96(local_98);
    iVar1 = 0x10000;
    if (local_88 != 0) {
      iVar1 = local_88;
    }
    DAT_14c83e678 = -iVar1 & (DAT_14c83e678 + iVar1) - 1;
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146268a10 FUN_146268a10 body=687 status=ok
// SIG undefined FUN_146268a10(void)

undefined8 FUN_146268a10(undefined8 param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_60;
  int local_58;
  wchar_t *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_40,&DAT_14c8c27ca);
  FUN_140e64772(&local_40,&local_30);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_50,&DAT_14c8c27d7);
  FUN_140e64772(&local_50,&local_40);
  if (local_50 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_60,L"Unknown");
  FUN_140e64772(&local_60,&local_50);
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_60,L"Unknown");
  pwVar2 = local_60;
  if (local_48 == local_58) {
    if (local_48 < 2) {
      bVar5 = true;
    }
    else {
      iVar1 = wcscmp(local_50,local_60);
      bVar5 = iVar1 == 0;
    }
  }
  else {
    bVar5 = local_58 + local_48 == 1;
  }
  if (pwVar2 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar2);
  }
  if (bVar5) {
    puVar3 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar3 = local_40;
    }
    puVar4 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar4 = local_30;
    }
    pwVar2 = L"%s|%s";
  }
  else {
    local_70 = 0xffffffff;
    local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
    iVar1 = FUN_1447ee042(&local_40,&DAT_149e06184,1,1);
    if (iVar1 != -1) {
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,1);
      FUN_140807d8e(&local_40,&local_60,&DAT_149e06184,&DAT_149e01f60);
      local_78 = L"";
      if (local_48 != 0) {
        local_78 = local_50;
      }
      pwVar2 = L"";
      if (local_58 != 0) {
        pwVar2 = local_60;
      }
      puVar3 = &DAT_149dfb77a;
      if (local_28 != 0) {
        puVar3 = local_30;
      }
      FUN_140002266(param_1,L"%s|%s|%s",puVar3,pwVar2);
      if (local_60 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_146268b3d;
    }
    local_78 = L"";
    if (local_48 != 0) {
      local_78 = local_50;
    }
    puVar3 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar3 = local_40;
    }
    puVar4 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar4 = local_30;
    }
    pwVar2 = L"%s|%s|%s";
  }
  FUN_140002266(param_1,pwVar2,puVar4,puVar3);
LAB_146268b3d:
  if (local_50 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146268cc0 FUN_146268cc0 body=327 status=ok
// SIG undefined FUN_146268cc0(void)

void FUN_146268cc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  PSRWLOCK SRWLock;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1401af92e(FUN_1456d6024);
  SRWLock = (PSRWLOCK)(*(longlong *)(lVar4 + 0x68) + 0x20);
  AcquireSRWLockExclusive(SRWLock);
  lVar4 = FUN_1401af92e(FUN_1456d6024);
  lVar4 = *(longlong *)(lVar4 + 0x68);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar5 = (longlong)local_38;
  pvVar3 = (void *)*param_1;
  if (lVar5 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar3,lVar5 * 2);
  }
  FUN_145a3c032(&local_40);
  iVar2 = *(int *)(lVar4 + 0x18);
  *(uint *)(lVar4 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar4 + 0x1c) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(lVar4 + 0x10),iVar2);
  }
  pvVar3 = local_40;
  lVar4 = *(longlong *)(lVar4 + 0x10);
  lVar6 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar4 + lVar6);
  *(undefined8 *)(lVar4 + lVar6) = 0;
  lVar5 = (longlong)local_38;
  *(int *)(lVar4 + 8 + lVar6) = local_38;
  if (lVar5 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,local_38,0);
    memcpy((void *)*puVar1,pvVar3,lVar5 * 2);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146268e08 FUN_146268e08 body=111 status=ok
// SIG undefined FUN_146268e08(void)

void FUN_146268e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e05470;
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146268e78 FUN_146268e78 body=143 status=ok
// SIG undefined FUN_146268e78(void)

byte FUN_146268e78(void)

{
  byte bVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83e750) {
    FUN_144b3d300(&DAT_14c83e750);
    if (DAT_14c83e750 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar1 = FUN_14054d46e(&DAT_14c846b20,L"noheartbeatthread");
      DAT_14c83e74c = bVar1 ^ 1;
      _Init_thread_footer(&DAT_14c83e750);
    }
  }
  return DAT_14c83e74c;
}



// FUNCTION 146268f08 FUN_146268f08 body=1068 status=ok
// SIG undefined FUN_146268f08(void)

void FUN_146268f08(longlong *param_1)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined1 local_120 [8];
  undefined2 *local_118;
  int local_110;
  undefined4 local_10c;
  longlong local_108;
  ulonglong uStack_100;
  longlong local_f8 [2];
  undefined2 *local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_148 = 0;
  cVar3 = FUN_14063337c(&DAT_14c846b20,L"logcategoryfiles=",&local_b8,1);
  if (cVar3 != '\0') {
    FUN_1467acba0(&local_b8,&local_c8,0);
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    local_b8 = local_c8;
    uStack_b0 = uStack_c0;
    local_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    FUN_1403de9f2(&local_b8,&local_c8,&DAT_149e06196,1);
    local_130 = local_c8;
    uVar6 = 0;
    if ((longlong)(int)uStack_c0 != 0) {
      local_128 = local_c8 + (longlong)(int)uStack_c0 * 2;
      do {
        local_d8 = (void *)0x0;
        local_d0 = *(int *)(local_130 + 1);
        lVar9 = (longlong)local_d0;
        pvVar2 = (void *)*local_130;
        if (lVar9 == 0) {
          local_cc = 0;
        }
        else {
          FUN_1446dd670(&local_d8,local_d0,0);
          memcpy(local_d8,pvVar2,lVar9 * 2);
        }
        local_e8 = (undefined2 *)0x0;
        uStack_e0 = 0;
        local_f8[0] = 0;
        local_f8[1] = 0;
        FUN_140ded208(&local_d8,&local_108);
        FUN_140056680(&local_118,&DAT_149e06162);
        cVar3 = FUN_1407cdba6(&local_108,&local_118,local_f8 + 2,local_f8);
        if (local_118 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') {
          uVar4 = FUN_14001cc68(0x880,0x10);
          local_a8[0] = 0;
          local_98 = 0;
          puVar5 = &DAT_149dfb77a;
          if ((int)uStack_e0 != 0) {
            puVar5 = local_e8;
          }
          local_140 = local_a8;
          local_148 = CONCAT71(local_148._1_7_,1);
          FUN_1427867de(uVar4,puVar5,0,0);
          local_108 = 0;
          uStack_100 = 0;
          FUN_1403de9f2(local_f8,&local_108,&DAT_149e06124,1);
          lVar9 = local_108;
          lVar10 = (longlong)(int)uStack_100;
          if (lVar10 != 0) {
            lVar8 = 0;
            do {
              local_118 = (undefined2 *)0x0;
              local_110 = *(int *)(lVar9 + 8 + lVar8);
              lVar7 = (longlong)local_110;
              pvVar2 = *(void **)(lVar9 + lVar8);
              if (lVar7 == 0) {
                local_10c = 0;
LAB_146269210:
                puVar5 = &DAT_149dfb77a;
              }
              else {
                FUN_1446dd670(&local_118,local_110,0);
                memcpy(local_118,pvVar2,lVar7 * 2);
                puVar5 = local_118;
                if (local_110 == 0) goto LAB_146269210;
              }
              FUN_1446f470e(local_120,puVar5);
              FUN_14681655e(uVar4,local_120);
              if (local_118 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              lVar8 = lVar8 + 0x10;
            } while (lVar10 * 0x10 != lVar8);
          }
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_145ca1714(param_1,iVar1);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar4;
          FUN_1447a1747(local_108,uStack_100 & 0xffffffff);
          if (local_108 != 0) {
            FUN_1400020a8();
          }
        }
        if (local_f8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_d8 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_130 = local_130 + 2;
      } while (local_130 != local_128);
      uVar6 = (int)uStack_c0;
    }
    local_130 = local_c8;
    FUN_1447a1747(local_c8,uVar6);
    if (local_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146269336 FUN_146269336 body=285 status=ok
// SIG undefined FUN_146269336(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_146269336(void)

{
  size_t sVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  undefined2 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = DAT_14c83f0e8;
  if (DAT_14c83f0f0 < 2) {
    FUN_1401afab0(&local_58);
    local_38 = local_58;
    if (local_50 == 0) {
      local_38 = L"";
    }
    if (local_38 == (wchar_t *)0x0) {
      local_30 = 0;
    }
    else {
      sVar1 = wcslen(local_38);
      local_30 = (int)sVar1;
    }
    local_28 = L"Shaders";
    local_20 = 7;
    FUN_140bee87a(&local_48,&local_38,2);
    if (DAT_14c83f0e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    DAT_14c83f0e8 = local_48;
    local_48 = (undefined2 *)0x0;
    DAT_14c83f0f0 = (uint)local_40;
    _DAT_14c83f0f4 = local_40._4_4_;
    local_40 = 0;
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    puVar2 = &DAT_149dfb77a;
    if (DAT_14c83f0f0 != 0) {
      puVar2 = DAT_14c83f0e8;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 146269454 FUN_146269454 body=490 status=ok
// SIG undefined FUN_146269454(void)

undefined8 FUN_146269454(undefined8 param_1,double param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0.001) {
    FUN_140002266(param_1,L"%d us",(int)(param_2 * 1000000.0));
    return param_1;
  }
  if (1.0 <= param_2) {
    if (10.0 <= param_2) {
      if (60.0 <= param_2) {
        if (3600.0 <= param_2) {
          iVar2 = (int)(param_2 / 3600.0);
          iVar3 = (int)((param_2 - (double)(iVar2 * 0xe10)) / 60.0);
          pwVar1 = L"%d:%02d:%02d hours";
        }
        else {
          iVar2 = (int)(param_2 / 60.0);
          iVar3 = iVar2 * -0x3c + (int)param_2;
          pwVar1 = L"%d:%02d min";
        }
        goto LAB_1462694b4;
      }
      iVar3 = ((int)param_2 * -1000 + (int)(param_2 * 1000.0)) / 100;
      pwVar1 = L"%d.%d sec";
    }
    else {
      iVar3 = ((int)param_2 * -1000 + (int)(param_2 * 1000.0)) / 10;
      pwVar1 = L"%d.%02d sec";
    }
    iVar2 = (int)param_2;
  }
  else {
    iVar2 = (int)(param_2 * 1000.0);
    iVar3 = iVar2 * -1000 + (int)(param_2 * 1000000.0);
    pwVar1 = L"%d.%03d ms";
  }
LAB_1462694b4:
  FUN_140002266(param_1,pwVar1,iVar2,iVar3);
  return param_1;
}



// FUNCTION 14626963e FUN_14626963e body=106 status=ok
// SIG undefined FUN_14626963e(void)

void FUN_14626963e(void)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = DAT_14c83f158;
  if (DAT_14c83f158 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14c83f158 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = DAT_14c83f148;
  if (DAT_14c83f148 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14c83f148 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1449db362(&DAT_14c83f130);
  FUN_1449db362(&DAT_14c83f120);
  if (DAT_14c83f110 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1462696a8 FUN_1462696a8 body=195 status=ok
// SIG undefined FUN_1462696a8(void)

LPCRITICAL_SECTION FUN_1462696a8(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 2) {
    FUN_1446efa72(param_1 + 1,0,2,0x10);
    param_1[1].LockCount = 2;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e065d0;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_149e05b20;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)FUN_14577abac;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14626976c FUN_14626976c body=132 status=ok
// SIG undefined FUN_14626976c(void)

void FUN_14626976c(longlong param_1,int param_2)

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



// FUNCTION 1462697f0 FUN_1462697f0 body=115 status=ok
// SIG undefined FUN_1462697f0(void)

void FUN_1462697f0(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146269864 FUN_146269864 body=76 status=ok
// SIG undefined FUN_146269864(void)

void FUN_146269864(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_14470efbc(param_1);
    if (uVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1462698b0 FUN_1462698b0 body=93 status=ok
// SIG undefined FUN_1462698b0(void)

void FUN_1462698b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14626990e FUN_14626990e body=296 status=ok
// SIG undefined FUN_14626990e(void)

undefined8 * FUN_14626990e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e13270;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 2;
  param_1[0x1e] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1f),4000);
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2f),4000);
  return param_1;
}



// FUNCTION 146269a36 FUN_146269a36 body=60 status=ok
// SIG undefined FUN_146269a36(void)

void FUN_146269a36(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000146269a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x98))(plVar2,param_2);
  return;
}



// FUNCTION 146269a72 FUN_146269a72 body=157 status=ok
// SIG undefined FUN_146269a72(void)

char FUN_146269a72(undefined8 param_1,undefined8 param_2,char param_3,char param_4)

{
  char cVar1;
  char cVar2;
  DWORD dwErrCode;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_1400dbadc();
  plVar4 = (longlong *)*plVar3;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_140e92164();
    *plVar3 = (longlong)plVar4;
  }
  lVar5 = 0x118;
  if (param_4 != '\0') {
    lVar5 = 0x1d0;
  }
  cVar1 = (**(code **)(*plVar4 + lVar5))(plVar4,param_2);
  if (param_3 == '\0' && cVar1 == '\0') {
    dwErrCode = GetLastError();
    plVar3 = (longlong *)FUN_1400dbadc();
    plVar4 = (longlong *)*plVar3;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_140e92164();
      *plVar3 = (longlong)plVar4;
    }
    cVar2 = (**(code **)(*plVar4 + 0x108))(plVar4,param_2);
    cVar1 = '\x01';
    if (cVar2 != '\0') {
      SetLastError(dwErrCode);
      cVar1 = '\0';
    }
  }
  return cVar1;
}



// FUNCTION 146269b10 FUN_146269b10 body=68 status=ok
// SIG undefined FUN_146269b10(void)

void FUN_146269b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000146269b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x130))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 146269b54 FUN_146269b54 body=68 status=ok
// SIG undefined FUN_146269b54(void)

void FUN_146269b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000146269b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x1a8))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 146269b98 FUN_146269b98 body=115 status=ok
// SIG undefined FUN_146269b98(void)

undefined4 FUN_146269b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)FUN_1400dbadc();
  plVar3 = (longlong *)*plVar2;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_140e92164();
    *plVar2 = (longlong)plVar3;
  }
  uVar1 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
  if ((char)uVar1 != '\0') {
    plVar2 = (longlong *)FUN_1400dbadc();
    plVar3 = (longlong *)*plVar2;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_140e92164();
      *plVar2 = (longlong)plVar3;
    }
    (**(code **)(*plVar3 + 0xb8))(plVar3,param_2,param_3);
  }
  return uVar1;
}



// FUNCTION 146269c0c FUN_146269c0c body=68 status=ok
// SIG undefined FUN_146269c0c(void)

undefined8 FUN_146269c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  (**(code **)(*plVar2 + 0x1f0))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 146269c50 FUN_146269c50 body=68 status=ok
// SIG undefined FUN_146269c50(void)

undefined8 FUN_146269c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  (**(code **)(*plVar2 + 0x1f8))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 146269ca4 FUN_146269ca4 body=89 status=ok
// SIG undefined FUN_146269ca4(void)

undefined8 * FUN_146269ca4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x98);
  _Src = *(void **)(param_1 + 0x90);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 146269d08 FUN_146269d08 body=92 status=ok
// SIG undefined FUN_146269d08(void)

void FUN_146269d08(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146269d64 FUN_146269d64 body=124 status=ok
// SIG undefined FUN_146269d64(void)

void FUN_146269d64(longlong *param_1,longlong *param_2)

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



// FUNCTION 146269de2 FUN_146269de2 body=124 status=ok
// SIG undefined FUN_146269de2(void)

void FUN_146269de2(longlong *param_1,longlong *param_2)

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



// FUNCTION 146269e60 FUN_146269e60 body=55 status=ok
// SIG undefined FUN_146269e60(void)

void FUN_146269e60(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000146269e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,param_2);
  return;
}



// FUNCTION 146269e98 FUN_146269e98 body=64 status=ok
// SIG undefined FUN_146269e98(void)

undefined1 FUN_146269e98(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_144a61b4f();
    uVar2 = (ulonglong)(bVar1 ^ 1);
  }
  return *(undefined1 *)(param_1 + 0x50 + uVar2);
}



// FUNCTION 146269ed8 FUN_146269ed8 body=65 status=ok
// SIG undefined FUN_146269ed8(void)

int FUN_146269ed8(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_144a61b4f();
    uVar2 = (ulonglong)(bVar1 ^ 1);
  }
  return (int)*(float *)(param_1 + 0x50 + uVar2 * 4);
}



// FUNCTION 146269f19 FUN_146269f19 body=38 status=ok
// SIG undefined FUN_146269f19(void)

undefined1 FUN_146269f19(void)

{
  int iVar1;
  undefined1 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  bool bVar5;
  
  if (((DAT_14c844290 & 1) != 0) && ((DAT_14c844291 & 1) == 0)) {
    uVar2 = thunk_FUN_14682ba26(&DAT_14c844298);
    return uVar2;
  }
  bVar5 = true;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        bVar5 = DVar3 == DVar4;
      }
      else {
        bVar5 = false;
      }
    }
  }
  return bVar5;
}



// FUNCTION 146269f40 FUN_146269f40 body=83 status=ok
// SIG undefined FUN_146269f40(void)

undefined8 * FUN_146269f40(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e15b50;
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
    param_1[1] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146269f94 FUN_146269f94 body=38 status=ok
// SIG undefined FUN_146269f94(void)

undefined8 FUN_146269f94(undefined8 param_1,int param_2)

{
  FUN_14584de8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146269fba FUN_146269fba body=142 status=ok
// SIG undefined FUN_146269fba(void)

void FUN_146269fba(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x1808) = 0;
  if (*(int *)(param_1 + 0x180c) != param_2) {
    FUN_1457da48c(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x1840) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x1838) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x183c)) && (*(int *)(param_1 + 0x183c) < 0x101)) {
    return;
  }
  uVar1 = 0x100;
  if (0x100 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x183c) = uVar1;
  FUN_1456d07e4(param_1 + 0x1810,0);
  return;
}



// FUNCTION 14626a04a FUN_14626a04a body=148 status=ok
// SIG undefined FUN_14626a04a(void)

void FUN_14626a04a(longlong param_1,int param_2)

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
    uVar4 = lVar3 << 3;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 3)) {
      uVar5 = uVar4 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14626a0e0 FUN_14626a0e0 body=43 status=ok
// SIG undefined FUN_14626a0e0(void)

undefined8 FUN_14626a0e0(longlong param_1,undefined8 param_2)

{
  FUN_1412abbc6(param_2,param_1 + 0x78,param_1 + 0xb8,param_1 + 0x98);
  return param_2;
}



// FUNCTION 14626a10c FUN_14626a10c body=142 status=ok
// SIG undefined FUN_14626a10c(void)

void FUN_14626a10c(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x78,0x10);
  lpCriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  lpCriticalSection->LockCount = 0;
  lpCriticalSection->RecursionCount = 0;
  lpCriticalSection->OwningThread = (HANDLE)0x0;
  lpCriticalSection->LockSemaphore = (HANDLE)0x0;
  lpCriticalSection->SpinCount = 0;
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  lpCriticalSection[1].LockCount = 0;
  lpCriticalSection[1].RecursionCount = 0;
  lpCriticalSection[1].OwningThread = (HANDLE)0x0;
  lpCriticalSection[1].LockSemaphore = (HANDLE)0x0;
  lpCriticalSection[1].SpinCount = 0;
  lpCriticalSection[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  lpCriticalSection[2].LockCount = 0;
  lpCriticalSection[2].RecursionCount = 0;
  lpCriticalSection[2].OwningThread = (HANDLE)0x0;
  lpCriticalSection[2].LockSemaphore = (HANDLE)0x0;
  lpCriticalSection[2].SpinCount = 0;
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  lpCriticalSection[1].SpinCount = 0;
  *(undefined4 *)&lpCriticalSection[2].DebugInfo = 0;
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  lpCriticalSection[1].LockCount = 0;
  lpCriticalSection[1].RecursionCount = 0;
  *(undefined8 *)((longlong)&lpCriticalSection[2].DebugInfo + 4) = 0xffffffff00000080;
  lpCriticalSection[2].RecursionCount = 0;
  lpCriticalSection[2].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&lpCriticalSection[2].SpinCount = 0;
  DAT_14c8443b8 = lpCriticalSection;
  return;
}



// FUNCTION 14626a19a FUN_14626a19a body=90 status=ok
// SIG undefined FUN_14626a19a(void)

bool FUN_14626a19a(longlong param_1,longlong param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar3 = (uint)(uVar1 >> 5);
    }
    uVar1 = *(ushort *)(param_2 + 8);
    if ((short)uVar1 < 0) {
      uVar4 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar4 = (uint)(uVar1 >> 5);
    }
    bVar5 = false;
    if (((uVar1 & 1) == 0) && (uVar3 == uVar4)) {
      cVar2 = FUN_1412ae090();
      bVar5 = cVar2 != '\0';
    }
  }
  else {
    bVar5 = (bool)(*(byte *)(param_2 + 8) & 1);
  }
  return bVar5;
}



// FUNCTION 14626a1f4 FUN_14626a1f4 body=274 status=ok
// SIG undefined FUN_14626a1f4(void)

longlong * FUN_14626a1f4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,L"Internationalization",L"CultureMappings",param_1);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_68 = &DAT_14c872af8;
  FUN_14105aa76(DAT_14c872ce0,L"Internationalization",L"CultureMappings",&local_58);
  lVar2 = (longlong)(int)(uint)uStack_50;
  if (lVar2 != 0) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + (uint)uStack_50;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)uStack_50) {
      FUN_1447a1bd6(param_1,iVar1);
    }
    memmove((void *)((longlong)iVar1 * 0x10 + *param_1),local_58,lVar2 << 4);
    uStack_50 = uStack_50 & 0xffffffff00000000;
  }
  FUN_1447a1747(local_58,0);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626a308 FUN_14626a308 body=165 status=ok
// SIG undefined FUN_14626a308(void)

undefined4 * FUN_14626a308(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0x960eead8;
  param_1[1] = 0x34d44d08;
  param_1[2] = 0xbc1118d9;
  param_1[3] = 0x5bdf8d43;
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_28 = param_2[2];
  local_20 = param_2[3];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_141135764(param_1 + 4,&local_38);
  plVar3 = (longlong *)param_2[3];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626a3ae FUN_14626a3ae body=29 status=ok
// SIG undefined FUN_14626a3ae(void)

undefined8 FUN_14626a3ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626a3cc FUN_14626a3cc body=29 status=ok
// SIG undefined FUN_14626a3cc(void)

undefined8 FUN_14626a3cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626a3ea FUN_14626a3ea body=29 status=ok
// SIG undefined FUN_14626a3ea(void)

undefined8 FUN_14626a3ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626a408 FUN_14626a408 body=29 status=ok
// SIG undefined FUN_14626a408(void)

undefined8 FUN_14626a408(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626a426 FUN_14626a426 body=132 status=ok
// SIG undefined FUN_14626a426(void)

void FUN_14626a426(longlong param_1,int param_2)

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



// FUNCTION 14626a4ab FUN_14626a4ab body=171 status=ok
// SIG undefined FUN_14626a4ab(void)

undefined8 FUN_14626a4ab(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  lVar5 = FUN_140d5712e();
  lVar3 = *(longlong *)(lVar5 + 0x68);
  plVar4 = *(longlong **)(lVar5 + 0x70);
  if (plVar4 == (longlong *)0x0) {
    if (*(int *)(lVar3 + 0x30) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(lVar3 + 0x28);
    }
    FUN_1415ba7c1(param_1,L"LOCALE=",L"Locale",puVar6,param_2);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (*(int *)(lVar3 + 0x30) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(lVar3 + 0x28);
    }
    FUN_1415ba7c1(param_1,L"LOCALE=",L"Locale",puVar6,param_2);
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



// FUNCTION 14626a556 FUN_14626a556 body=80 status=ok
// SIG undefined FUN_14626a556(void)

longlong * FUN_14626a556(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140958ed1(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14626a5a6 FUN_14626a5a6 body=196 status=ok
// SIG undefined FUN_14626a5a6(void)

undefined8
FUN_14626a5a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e1c1c0;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626a66c FUN_14626a66c body=206 status=ok
// SIG undefined FUN_14626a66c(void)

void FUN_14626a66c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0xf1) == '\0') {
    *(undefined1 *)(param_1 + 0xf1) = 1;
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(lVar2 + 8 + lVar5);
        local_40 = *(undefined8 *)(param_1 + 8);
        local_38 = *(longlong *)(param_1 + 0x10);
        if (local_38 != 0) {
          LOCK();
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          UNLOCK();
        }
        (**(code **)*puVar3)(puVar3,&local_40);
        lVar5 = lVar5 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar5);
      local_50 = 0;
      local_58 = 0xffffffffffffffff;
      uVar4 = FUN_1411b1052(param_1,L"IoDispatcher",0,1);
      *(undefined8 *)(param_1 + 0x80) = uVar4;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626a73c FUN_14626a73c body=50 status=ok
// SIG undefined FUN_14626a73c(void)

void FUN_14626a73c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = FUN_14017f2fc(lVar1 + 0x40);
  *(undefined8 *)(lVar2 + 0x40) = param_2;
  FUN_1400d20b8(lVar1,param_1,lVar2);
  return;
}



// FUNCTION 14626a76e FUN_14626a76e body=38 status=ok
// SIG undefined FUN_14626a76e(void)

undefined8 FUN_14626a76e(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626a794 FUN_14626a794 body=38 status=ok
// SIG undefined FUN_14626a794(void)

undefined8 FUN_14626a794(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626a7d0 FUN_14626a7d0 body=29 status=ok
// SIG undefined FUN_14626a7d0(void)

undefined8 FUN_14626a7d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626a7ee FUN_14626a7ee body=164 status=ok
// SIG undefined FUN_14626a7ee(void)

LPCRITICAL_SECTION FUN_14626a7ee(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1c150;
  p_Var2 = (_LIST_ENTRY *)FUN_144a3f946();
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_149e1c0e0;
  (p_Var1->ProcessLocksList).Blink = param_2;
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14626a892 FUN_14626a892 body=143 status=ok
// SIG undefined FUN_14626a892(void)

void FUN_14626a892(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14626a922 FUN_14626a922 body=29 status=ok
// SIG undefined FUN_14626a922(void)

undefined8 FUN_14626a922(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626a940 FUN_14626a940 body=29 status=ok
// SIG undefined FUN_14626a940(void)

undefined8 FUN_14626a940(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626a95e FUN_14626a95e body=29 status=ok
// SIG undefined FUN_14626a95e(void)

undefined8 FUN_14626a95e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626a97c FUN_14626a97c body=90 status=ok
// SIG undefined FUN_14626a97c(void)

void FUN_14626a97c(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x80c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x80c) = 0;
    if (*(void **)((longlong)param_1 + 0x800) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x800),
              (longlong)*(int *)((longlong)param_1 + 0x808) << 3);
      FUN_1446efa72((longlong)param_1 + 0x800,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14626a9d6 FUN_14626a9d6 body=156 status=ok
// SIG undefined FUN_14626a9d6(void)

LPCRITICAL_SECTION FUN_14626a9d6(LPCRITICAL_SECTION param_1,undefined8 *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 2) {
    FUN_1446efa72(param_1 + 1,0,2,0x10);
    param_1[1].LockCount = 2;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1dc70;
  p_Var2 = (_LIST_ENTRY *)FUN_144a3f946();
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_149e1c610;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)*param_2;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14626aa72 FUN_14626aa72 body=62 status=ok
// SIG undefined FUN_14626aa72(void)

void FUN_14626aa72(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(&DAT_14c846528,*param_1,iVar1);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14626aab0 FUN_14626aab0 body=106 status=ok
// SIG undefined FUN_14626aab0(void)

bool FUN_14626aab0(ulonglong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  bVar2 = true;
  if ((((DAT_14c892f44 != param_1) && (DAT_14c892f48 != param_1)) && (DAT_14c892f4c != param_1)) &&
     (DAT_14c892f54 != param_1)) {
    lVar1 = FUN_142772eb6(param_1,0);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 14626ab1a FUN_14626ab1a body=126 status=ok
// SIG undefined FUN_14626ab1a(void)

undefined4 FUN_14626ab1a(void)

{
  undefined4 uVar1;
  int iVar2;
  wchar_t *_Str;
  int *in_R9;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  uVar1 = FUN_1412734f2();
  if ((char)uVar1 != '\0') {
    _Str = local_28;
    if ((int)uStack_20 == 0) {
      _Str = L"";
    }
    iVar2 = _wtoi(_Str);
    *in_R9 = iVar2;
  }
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14626ab9a FUN_14626ab9a body=132 status=ok
// SIG undefined FUN_14626ab9a(void)

undefined4 FUN_14626ab9a(void)

{
  undefined4 uVar1;
  wchar_t *_Str;
  float *in_R9;
  double dVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  uVar1 = FUN_1412734f2();
  if ((char)uVar1 != '\0') {
    _Str = local_28;
    if ((int)uStack_20 == 0) {
      _Str = L"";
    }
    dVar2 = _wtof(_Str);
    *in_R9 = (float)dVar2;
  }
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14626ac20 FUN_14626ac20 body=106 status=ok
// SIG undefined FUN_14626ac20(void)

void FUN_14626ac20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1409261c2(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14092636e(param_1);
  return;
}



// FUNCTION 14626ac8a FUN_14626ac8a body=107 status=ok
// SIG undefined FUN_14626ac8a(void)

void FUN_14626ac8a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = *param_2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    if (param_1[2] == 0) {
      param_1[1] = (longlong)puVar1;
    }
    else {
      *(undefined8 **)(param_1[2] + 8) = puVar1;
      puVar1[2] = param_1[2];
    }
    param_1[2] = (longlong)puVar1;
                    /* WARNING: Could not recover jumptable at 0x00014626acdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
    return;
  }
  return;
}



// FUNCTION 14626acf6 FUN_14626acf6 body=439 status=ok
// SIG undefined FUN_14626acf6(void)

undefined8 * FUN_14626acf6(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = 0;
  do {
    FUN_1408e73e2((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x5f8;
  } while (lVar1 != 0x3bb0);
  FUN_1446ddc76(&local_20,"Engine",1);
  *param_1 = local_20;
  FUN_1446ddc76(&local_20,&DAT_149e2b654,1);
  param_1[0xbf] = local_20;
  FUN_1446ddc76(&local_20,"Input",1);
  param_1[0x17e] = local_20;
  FUN_1446ddc76(&local_20,"DeviceProfiles",1);
  param_1[0x23d] = local_20;
  FUN_1446ddc76(&local_20,"GameUserSettings",1);
  param_1[0x2fc] = local_20;
  FUN_1446ddc76(&local_20,"Scalability",1);
  param_1[0x3bb] = local_20;
  FUN_1446ddc76(&local_20,"RuntimeOptions",1);
  param_1[0x47a] = local_20;
  FUN_1446ddc76(&local_20,"InstallBundle",1);
  param_1[0x539] = local_20;
  FUN_1446ddc76(&local_20,"Hardware",1);
  param_1[0x5f8] = local_20;
  FUN_1446ddc76(&local_20,"GameplayTags",1);
  param_1[0x6b7] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626aeae FUN_14626aeae body=279 status=ok
// SIG undefined FUN_14626aeae(void)

/* WARNING: Removing unreachable block (ram,0x00014626afb3) */

longlong * FUN_14626aeae(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x3c20);
  uVar2 = *(undefined8 *)(param_1 + 0x3c18);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_2,iVar1,0);
    FUN_140b8566a(*param_2,uVar2,iVar1);
  }
  lVar6 = 0x18;
  uVar2 = local_48;
  uVar4 = local_40;
  do {
    local_40 = uVar4;
    local_48 = uVar2;
    FUN_1400021e4(param_1 + lVar6,&local_48);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    lVar3 = *param_2;
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar5) = 0;
    *(undefined8 *)(lVar3 + lVar5) = local_48;
    local_48 = 0;
    uVar2 = local_48;
    *(undefined4 *)(lVar3 + 8 + lVar5) = (undefined4)local_40;
    *(undefined4 *)(lVar3 + 0xc + lVar5) = local_40._4_4_;
    local_40 = 0;
    uVar4 = local_40;
    local_40 = 0;
    local_48 = 0;
    lVar6 = lVar6 + 0x5f8;
  } while (lVar6 != 0x3bc8);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14626afc6 FUN_14626afc6 body=101 status=ok
// SIG undefined FUN_14626afc6(void)

void FUN_14626afc6(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,&DAT_149dfb77a);
  FUN_140d6d8de(param_1,1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626b02c FUN_14626b02c body=123 status=ok
// SIG undefined FUN_14626b02c(void)

undefined4 FUN_14626b02c(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 in_R9;
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  local_38 = in_stack_00000028;
  cVar1 = FUN_1449da20c();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_146805230(in_R9,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626b0a8 FUN_14626b0a8 body=178 status=ok
// SIG undefined FUN_14626b0a8(void)

void FUN_14626b0a8(longlong *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = 0x20;
  do {
    lVar1 = *param_1;
    FUN_1400021e4(lVar1 + lVar3 + -8,&local_40);
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_140d6b9d6(param_1,puVar2,lVar1 + lVar3);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + 0x5f8;
  } while (lVar3 != 0x3bd0);
  if (*param_1 != DAT_14c872ce0) {
    *(undefined1 *)(*param_1 + 9) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626b15c FUN_14626b15c body=287 status=ok
// SIG undefined FUN_14626b15c(void)

undefined4
FUN_14626b15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,longlong param_8,
             longlong param_9,undefined1 param_10)

{
  undefined4 uVar1;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  longlong local_1f0 [2];
  undefined1 local_1e0 [80];
  undefined1 local_190 [305];
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_46;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_9 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_140056680(local_1f0,param_3);
    local_1f8 = 0;
    FUN_140d6a722(local_1e0,param_9,1,local_1f0);
    if (local_1f0[0] != 0) {
      FUN_1400020a8();
    }
    if (param_8 != 0) {
      FUN_14020fad6(local_190,param_8);
    }
    local_5f = param_6;
    local_5d = param_7;
    local_46 = param_10;
    local_5e = param_4;
    uVar1 = FUN_140d6b9d6(local_1e0,param_2,param_1);
    FUN_140d6b5be(local_1e0);
  }
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626b27c FUN_14626b27c body=194 status=ok
// SIG undefined FUN_14626b27c(void)

undefined4
FUN_14626b27c(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  longlong local_1d8 [2];
  undefined1 local_1c8 [386];
  undefined1 local_46;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (param_3 == '\0') {
    FUN_140056680(local_1d8,param_4);
  }
  else {
    FUN_140056680(local_1d8,param_4);
  }
  local_1e8 = param_1;
  FUN_140d6a722(local_1c8,0,param_3 != '\0',local_1d8);
  if (local_1d8[0] != 0) {
    FUN_1400020a8();
  }
  local_46 = param_5;
  uVar1 = FUN_141628e80(local_1c8,param_2);
  FUN_140d6b5be(local_1c8);
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626b340 FUN_14626b340 body=29 status=ok
// SIG undefined FUN_14626b340(void)

undefined8 FUN_14626b340(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626b35e FUN_14626b35e body=204 status=ok
// SIG undefined FUN_14626b35e(void)

void FUN_14626b35e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6 * 0x20;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x20) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x20) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
        }
      } while ((int)uVar6 != -1);
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
  FUN_1446f4a44(param_1,iVar5);
  return;
}



// FUNCTION 14626b42a FUN_14626b42a body=132 status=ok
// SIG undefined FUN_14626b42a(void)

void FUN_14626b42a(longlong param_1,int param_2)

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



// FUNCTION 14626b4ae FUN_14626b4ae body=137 status=ok
// SIG undefined FUN_14626b4ae(void)

LPCRITICAL_SECTION FUN_14626b4ae(LPCRITICAL_SECTION param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_1 + 1);
  *puVar1 = &PTR_LAB_149e1dc70;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e2b4a0;
  puVar1[3] = FUN_142778c03;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14626b538 FUN_14626b538 body=387 status=ok
// SIG undefined FUN_14626b538(void)

undefined8 FUN_14626b538(undefined2 *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(param_2,&DAT_149e061aa,*param_1);
  if (0 < (int)param_3) {
    FUN_140002266(&local_38,&DAT_149e2ca18,param_1[1]);
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (param_3 != 1) {
      FUN_140002266(&local_38,&DAT_149e2ca18,param_1[2]);
      iVar1 = local_30 + -1;
      if (local_30 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,local_38,iVar1);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (2 < param_3) {
        FUN_140002266(&local_38,&DAT_149e2ca20,*(uint *)(param_1 + 4) & 0x7fffffff);
        iVar1 = local_30 + -1;
        if (local_30 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(param_2,local_38,iVar1);
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        if ((param_3 != 3) && (*(int *)(param_1 + 0xc) - 2U < 0x7fffffff)) {
          FUN_140002266(&local_38,&DAT_149e2ca28,*(undefined8 *)(param_1 + 8));
          iVar1 = local_30 + -1;
          if (local_30 == 0) {
            iVar1 = 0;
          }
          FUN_1400020e8(param_2,local_38,iVar1);
          if (local_38 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626b6bc FUN_14626b6bc body=115 status=ok
// SIG undefined FUN_14626b6bc(void)

undefined8 * FUN_14626b6bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867370) {
    FUN_144b3d300(&DAT_14c867370);
    if (DAT_14c867370 == -1) {
      DAT_14c867360 = 0;
      DAT_14c867368 = 0;
      atexit(FUN_14277f00a);
      _Init_thread_footer(&DAT_14c867370);
    }
  }
  return &DAT_14c867360;
}



// FUNCTION 14626b730 FUN_14626b730 body=231 status=ok
// SIG undefined FUN_14626b730(void)

void FUN_14626b730(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_149e307b0;
  local_28[3] = &DAT_14c867c70;
  local_28[4] = FUN_1459ce952;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626b818 FUN_14626b818 body=78 status=ok
// SIG undefined FUN_14626b818(void)

undefined8 FUN_14626b818(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  lVar1 = FUN_1407bb686();
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  uVar2 = FUN_1407bb416();
  FUN_14089e6e0(uVar2,*(undefined8 *)(lVar1 + 0x10),puVar3,0,4);
  return param_1;
}



// FUNCTION 14626b866 FUN_14626b866 body=82 status=ok
// SIG undefined FUN_14626b866(void)

void FUN_14626b866(void)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_18 = FUN_14626bb4c;
  FUN_144a773aa(&local_18,&DAT_14c75b110);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626b8ba FUN_14626b8ba body=243 status=ok
// SIG undefined FUN_14626b8ba(void)

undefined1 FUN_14626b8ba(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868208) {
    FUN_144b3d300(&DAT_14c868208);
    if (DAT_14c868208 == -1) {
      uVar2 = FUN_140d6ac5a();
      FUN_140056680(&local_40,uVar2);
      FUN_1412cfe60(local_30,&local_40,(local_38 == 0) + '2');
      FUN_1401aebe8(local_30,L"Restricted/NotForLicensees/Build/EpicInternal.txt",0x31);
      uVar1 = FUN_1415258a0(local_30);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      DAT_14c868204 = uVar1;
      _Init_thread_footer(&DAT_14c868208);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return DAT_14c868204;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626b9ae FUN_14626b9ae body=243 status=ok
// SIG undefined FUN_14626b9ae(void)

undefined1 FUN_14626b9ae(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868210) {
    FUN_144b3d300(&DAT_14c868210);
    if (DAT_14c868210 == -1) {
      uVar2 = FUN_140d6ac5a();
      FUN_140056680(&local_40,uVar2);
      FUN_1412cfe60(local_30,&local_40,(local_38 == 0) + '\x18');
      FUN_1401aebe8(local_30,L"Build/PerforceBuild.txt",0x17);
      uVar1 = FUN_1415258a0(local_30);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      DAT_14c86820c = uVar1;
      _Init_thread_footer(&DAT_14c868210);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return DAT_14c86820c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626baa2 FUN_14626baa2 body=46 status=ok
// SIG undefined FUN_14626baa2(void)

void FUN_14626baa2(longlong param_1,longlong param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x10) < param_2) {
    FUN_140d2d4a8();
    return;
  }
  return;
}



// FUNCTION 14626bad0 FUN_14626bad0 body=93 status=ok
// SIG undefined FUN_14626bad0(void)

void FUN_14626bad0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e307b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14626bb2e FUN_14626bb2e body=29 status=ok
// SIG undefined FUN_14626bb2e(void)

undefined8 FUN_14626bb2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626bb4c FUN_14626bb4c body=95 status=ok
// SIG undefined FUN_14626bb4c(void)

undefined8 * FUN_14626bb4c(void)

{
  DWORD DVar1;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x130);
  memset(_Dst,0,0x130);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(_Dst + 1) = DVar1;
  *_Dst = &PTR_FUN_149e30880;
  _Dst[0x22] = 0;
  _Dst[0x24] = 0x400000000;
  return _Dst;
}



// FUNCTION 14626bbac FUN_14626bbac body=62 status=ok
// SIG undefined FUN_14626bbac(void)

void FUN_14626bbac(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c868708;
  if (DAT_14c868708 != 0) {
    if (*(longlong *)(DAT_14c868708 + 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    DAT_14c868708 = 0;
  }
  return;
}



// FUNCTION 14626bbea FUN_14626bbea body=203 status=ok
// SIG undefined FUN_14626bbea(void)

void FUN_14626bbea(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_141582352();
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_149e34910;
  FUN_1448b6402(uVar2,local_30,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626bcb6 FUN_14626bcb6 body=113 status=ok
// SIG undefined FUN_14626bcb6(void)

undefined8 * FUN_14626bcb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872e80) {
    FUN_144b3d300(&DAT_14c872e80);
    if (DAT_14c872e80 == -1) {
      FUN_140056680(&DAT_14c872e70,L"1.0.0");
      atexit((_func_5014 *)&LAB_142786667);
      _Init_thread_footer(&DAT_14c872e80);
    }
  }
  return &DAT_14c872e70;
}



// FUNCTION 14626bd28 FUN_14626bd28 body=392 status=ok
// SIG undefined FUN_14626bd28(void)

void FUN_14626bd28(longlong param_1)

{
  DWORD DVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  DWORD DVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  PSRWLOCK local_58;
  char local_50;
  char local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405043e4(&local_58,*(undefined8 *)(param_1 + 0x10));
  if (local_4f == '\x01') {
    FUN_14050447c(*(undefined8 *)(param_1 + 0x10));
    DVar5 = GetCurrentThreadId();
    lVar8 = *(longlong *)(param_1 + 0x10);
    DVar1 = *(DWORD *)(lVar8 + 0xa8);
    iVar2 = *(int *)(lVar8 + 0x50);
    if ((longlong)iVar2 != 0) {
      local_60 = lVar8 + 0xb0;
      lVar3 = *(longlong *)(lVar8 + 0x48);
      lVar10 = 0;
      uVar9 = 0;
      do {
        if (DVar1 == DVar5) {
          lVar6 = *(longlong *)(lVar8 + 0xb8);
          if (*(longlong *)(lVar8 + 0xb8) == 0) {
            lVar6 = local_60;
          }
          uVar7 = uVar9 + 0x1f;
          if (-1 < (int)uVar9) {
            uVar7 = uVar9;
          }
          uVar4 = uVar9 & 0x1f;
          uVar9 = uVar9 + 1;
          if ((*(uint *)(lVar6 + (longlong)((int)uVar7 >> 5) * 4) >> uVar4 & 1) != 0)
          goto LAB_14626bda7;
        }
        else {
LAB_14626bda7:
          FUN_145841066(*(undefined8 *)(lVar3 + lVar10));
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar2 * 8 != lVar10);
      lVar8 = *(longlong *)(param_1 + 0x10);
    }
    DVar1 = *(DWORD *)(lVar8 + 0xa8);
    iVar2 = *(int *)(lVar8 + 0x60);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(lVar8 + 0x58);
      lVar10 = 0;
      uVar9 = 0;
      do {
        if (DVar1 == DVar5) {
          lVar6 = *(longlong *)(lVar8 + 0xd0);
          if (*(longlong *)(lVar8 + 0xd0) == 0) {
            lVar6 = lVar8 + 200;
          }
          uVar7 = uVar9 + 0x1f;
          if (-1 < (int)uVar9) {
            uVar7 = uVar9;
          }
          uVar4 = uVar9 & 0x1f;
          uVar9 = uVar9 + 1;
          if ((*(uint *)(lVar6 + (longlong)((int)uVar7 >> 5) * 4) >> uVar4 & 1) != 0)
          goto LAB_14626beaa;
        }
        else {
LAB_14626beaa:
          FUN_145841066(*(undefined8 *)(lVar3 + lVar10));
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar2 * 8 != lVar10);
    }
  }
  if (local_4f == '\x01') {
    *(undefined4 *)&local_58[0x14].Ptr = 0xffffffff;
  }
  if (local_50 == '\x01') {
    ReleaseSRWLockExclusive(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14626beb2 FUN_14626beb2 body=140 status=ok
// SIG undefined FUN_14626beb2(void)

undefined8 FUN_14626beb2(undefined8 param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  undefined4 extraout_var_00;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined8 local_220;
  wchar_t local_218 [260];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_220 = 0;
  local_228 = 1;
  cVar1 = FUN_140751ea8(param_1,param_2,local_218,0x100);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = _wtoi(local_218);
    *param_3 = (short)iVar2;
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),1);
    if ((short)iVar2 == 0) {
      iVar2 = iswdigit(local_218[0]);
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar2) >> 8),iVar2 != 0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626bf40 FUN_14626bf40 body=295 status=ok
// SIG undefined FUN_14626bf40(void)

undefined8 FUN_14626bf40(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  int local_70;
  longlong local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_145c83bac();
  if ((cVar1 == '\0') && (cVar1 = FUN_145cbeb2e(), cVar1 == '\0')) {
    uVar2 = FUN_140d6ac5a();
    FUN_140056680(param_1,uVar2);
    if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
  FUN_1468001d2(&local_78);
  _Str = local_78;
  if (local_70 == 0) {
    _Str = L"";
  }
  local_58 = (wchar_t *)FUN_140d69f9e();
  local_40 = 0;
  local_50 = 0;
  if (local_58 != (wchar_t *)0x0) {
    sVar3 = wcslen(local_58);
    local_50 = (int)sVar3;
  }
  local_48 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    local_40 = (int)sVar3;
  }
  local_38 = L"Common";
  local_30 = 6;
  FUN_140bee87a(local_68,&local_58,3);
  FUN_144a882a8(param_1,local_68,&DAT_149e065c6);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 14626c06e FUN_14626c06e body=110 status=ok
// SIG undefined FUN_14626c06e(void)

undefined8 FUN_14626c06e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140d6ac5a();
  FUN_140056680(local_28,uVar1);
  FUN_144a882a8(param_1,local_28,L"Intermediate/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626c0de FUN_14626c0de body=110 status=ok
// SIG undefined FUN_14626c0de(void)

undefined8 FUN_14626c0de(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140d6afb0();
  FUN_140056680(local_28,uVar1);
  FUN_144a882a8(param_1,local_28,L"Config/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626c14e FUN_14626c14e body=110 status=ok
// SIG undefined FUN_14626c14e(void)

undefined8 FUN_14626c14e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140d6afb0();
  FUN_140056680(local_28,uVar1);
  FUN_144a882a8(param_1,local_28,L"Mods/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626c1be FUN_14626c1be body=239 status=ok
// SIG undefined FUN_14626c1be(void)

bool FUN_14626c1be(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401aea18(&local_30,param_1);
  FUN_1401aea18(&local_40,param_2);
  FUN_1401ae99a(&local_30);
  FUN_1401ae99a(&local_40);
  puVar6 = local_40;
  if (local_38 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar3 = local_30;
  }
  lVar7 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar7);
    uVar4 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar6 + lVar7);
    uVar8 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14626c245;
      }
      iVar5 = uVar4 - uVar8;
      goto LAB_14626c26e;
    }
    if (uVar1 == 0) break;
LAB_14626c245:
    lVar7 = lVar7 + 2;
  }
  iVar5 = 0;
LAB_14626c26e:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8(local_40);
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar5 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626c2ae FUN_14626c2ae body=155 status=ok
// SIG undefined FUN_14626c2ae(void)

undefined8 * FUN_14626c2ae(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  int local_38;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_140b7d41a();
  FUN_14020fad6(&local_28,uVar1);
  local_38 = ((int)uStack_20 == 0) + 9;
  *param_1 = 0;
  FUN_14125bce8(param_1,local_28,uStack_20 & 0xffffffff,0);
  FUN_1401aebe8(param_1,L"Gearbox/",8);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626c34a FUN_14626c34a body=108 status=ok
// SIG undefined FUN_14626c34a(void)

void FUN_14626c34a(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  
  iVar6 = (int)param_2 + 1;
  iVar2 = *(int *)(param_1 + 0x10) - iVar6;
  if (iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar4 = param_1;
    }
    FUN_14493566c(lVar4,param_2,lVar4,iVar6,iVar2);
    param_2 = (ulonglong)(*(int *)(param_1 + 0x10) - 1);
  }
  uVar1 = (uint)param_2;
  uVar3 = uVar1 + 0x1f;
  if (-1 < (int)uVar1) {
    uVar3 = uVar1;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  iVar2 = uVar1 - (uVar3 & 0xffffffe0);
  if (iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar4 = param_1;
    }
    bVar5 = -(char)iVar2;
    *(uint *)(lVar4 + (longlong)((int)uVar3 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)((int)uVar3 >> 5) * 4) << (bVar5 & 0x1f)) >>
         (bVar5 & 0x1f);
  }
  return;
}



// FUNCTION 14626c3b6 FUN_14626c3b6 body=465 status=ok
// SIG undefined FUN_14626c3b6(void)

void FUN_14626c3b6(LPCRITICAL_SECTION param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1[6].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  uVar1._0_4_ = param_1[6].LockCount;
  uVar1._4_4_ = param_1[6].RecursionCount;
  FUN_1447a1747(uVar1,*(undefined4 *)&param_1[6].OwningThread);
  lVar2._0_4_ = param_1[6].LockCount;
  lVar2._4_4_ = param_1[6].RecursionCount;
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[5].SpinCount,*(undefined4 *)&param_1[6].DebugInfo);
  if (param_1[5].SpinCount != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[5].OwningThread,*(undefined4 *)&param_1[5].LockSemaphore);
  if (param_1[5].OwningThread != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[5].DebugInfo,param_1[5].LockCount);
  if (param_1[5].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4].LockSemaphore,(int)param_1[4].SpinCount);
  if (param_1[4].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  uVar3._0_4_ = param_1[4].LockCount;
  uVar3._4_4_ = param_1[4].RecursionCount;
  FUN_1447a1747(uVar3,*(undefined4 *)&param_1[4].OwningThread);
  lVar4._0_4_ = param_1[4].LockCount;
  lVar4._4_4_ = param_1[4].RecursionCount;
  if (lVar4 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[3].SpinCount,*(undefined4 *)&param_1[4].DebugInfo);
  if (param_1[3].SpinCount != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[3].OwningThread,*(undefined4 *)&param_1[3].LockSemaphore);
  if (param_1[3].OwningThread != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  if (param_1[3].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  if (param_1[2].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  lVar5._0_4_ = param_1[2].LockCount;
  lVar5._4_4_ = param_1[2].RecursionCount;
  if (lVar5 != 0) {
    FUN_1400020a8();
  }
  if (param_1[1].SpinCount != 0) {
    FUN_1400020a8();
  }
  if (param_1[1].OwningThread != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014626c533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 14626c588 FUN_14626c588 body=132 status=ok
// SIG undefined FUN_14626c588(void)

void FUN_14626c588(longlong param_1,int param_2)

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



// FUNCTION 14626c60c FUN_14626c60c body=213 status=ok
// SIG undefined FUN_14626c60c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14626c60c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874ae0) {
    FUN_144b3d300(&DAT_14c874ae0);
    if (DAT_14c874ae0 == -1) {
      DAT_14c874a58 = 0;
      DAT_14c874a60 = 0;
      DAT_14c874a38 = 0;
      _DAT_14c874a40 = 0;
      _DAT_14c874a64 = 0xffffffff00000080;
      _DAT_14c874a6c = 0;
      DAT_14c874a78 = 0;
      _DAT_14c874a80 = 0;
      DAT_14c874aa8 = 0;
      DAT_14c874ab0 = 0;
      DAT_14c874a88 = 0;
      _DAT_14c874a90 = 0;
      _DAT_14c874ab4 = 0xffffffff00000080;
      _DAT_14c874abc = 0;
      DAT_14c874ac8 = 0;
      DAT_14c874ad0 = 0;
      DAT_14c874ad8 = 0;
      atexit((_func_5014 *)&LAB_14278e973);
      _Init_thread_footer(&DAT_14c874ae0);
    }
  }
  return &DAT_14c874a38;
}



// FUNCTION 14626c6e2 FUN_14626c6e2 body=78 status=ok
// SIG undefined FUN_14626c6e2(void)

void FUN_14626c6e2(void)

{
  longlong *plVar1;
  
  if (DAT_14c874bb0 != 0) {
    plVar1 = &DAT_14c874bd0;
    if (DAT_14c874bc0 != (longlong *)0x0) {
      plVar1 = DAT_14c874bc0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c874b98 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014626c70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c874b70);
  return;
}



// FUNCTION 14626c730 FUN_14626c730 body=29 status=ok
// SIG undefined FUN_14626c730(void)

undefined8 FUN_14626c730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626c74e FUN_14626c74e body=143 status=ok
// SIG undefined FUN_14626c74e(void)

undefined8 * FUN_14626c74e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  FUN_1407134c4();
  *param_1 = &PTR_FUN_149e37220;
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  _Src = *(void **)(param_2 + 0x90);
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],_Src,(longlong)iVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar2;
  return param_1;
}



// FUNCTION 14626c7de FUN_14626c7de body=117 status=ok
// SIG undefined FUN_14626c7de(void)

longlong FUN_14626c7de(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1400e9352();
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  return param_1;
}



// FUNCTION 14626c854 FUN_14626c854 body=80 status=ok
// SIG undefined FUN_14626c854(void)

void FUN_14626c854(void)

{
  longlong lVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_1403378ec(&DAT_14c874dc8);
    if (uVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14626c8a4 FUN_14626c8a4 body=68 status=ok
// SIG undefined FUN_14626c8a4(void)

undefined8 * FUN_14626c8a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e37220;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626c8e8 FUN_14626c8e8 body=147 status=ok
// SIG undefined FUN_14626c8e8(void)

double * FUN_14626c8e8(double *param_1,char param_2,undefined8 param_3,double param_4,
                      undefined4 param_5)

{
  double dVar1;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\0') {
    dVar1 = 0.0;
    param_5 = 0;
  }
  else {
    QueryPerformanceCounter(&local_38);
    dVar1 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  *param_1 = dVar1;
  FUN_140056680(param_1 + 1,param_3);
  param_1[3] = param_4;
  *(undefined4 *)(param_1 + 4) = param_5;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626c97c FUN_14626c97c body=414 status=ok
// SIG undefined FUN_14626c97c(void)

undefined8 * FUN_14626c97c(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145e11f9c();
  FUN_1400b22c2(local_68,"F16D2728168B4CDEBFB382B38FFE9E06");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7d0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"D8BF6DDDAAD748BC9854D5F56631973C");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e780;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"08A58144744FCA4A9BF6DD45DFC4EC13");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7a0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626cb1c FUN_14626cb1c body=414 status=ok
// SIG undefined FUN_14626cb1c(void)

undefined8 * FUN_14626cb1c(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145e11f9c();
  FUN_1400b22c2(local_68,"6ED76D6068904EBB9B3ADAC259F0F53E");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e780;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"EB4D2761094040DD889CC1BE3D24E1B3");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7d0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"21EC97751B084536AE887AA52996DA1C");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e770;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626ccbc FUN_14626ccbc body=629 status=ok
// SIG undefined FUN_14626ccbc(void)

undefined8 * FUN_14626ccbc(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145e11f9c();
  FUN_1400b22c2(local_68,"D35A655CD3FDA4408724D77E1316E35B");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7a0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"5705956EC7134274A5A1BD3FC74DB3A9");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7c0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"C64A6A89E16442C888B638EB264579DB");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7e0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"0A0A1BF5D2A94105BB395EF0DA7CAEB9");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e730;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"C0E1F59386894C9D855B85178B2553CB");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e770;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626cf32 FUN_14626cf32 body=837 status=ok
// SIG undefined FUN_14626cf32(void)

undefined8 * FUN_14626cf32(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145e11f9c();
  FUN_1400b22c2(local_68,"D0BF3452816D46908073DFDD4B855AE5");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e730;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"79090A66F9D94B5BB285D49E5D39468E");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e770;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"AC88CFBDDA614A9C8488F64D2DAF699D");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e780;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"7BCE96ABAA6E46D689306FE673DED4DE");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e790;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"85D2347062C644AAAD31E3E6CBA1FDA0");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7a0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"BA91E71F642E4813A1B74B80D0448928");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7c0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_68,"7A556175518D458AA8786ED69AB8DDE7");
  cVar1 = FUN_140b10a34(local_68,&local_58);
  if (cVar1 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_48 = &DAT_14c87e7d0;
  local_40 = &local_58;
  FUN_1412eb804(param_1,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626d278 FUN_14626d278 body=29 status=ok
// SIG undefined FUN_14626d278(void)

undefined8 FUN_14626d278(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626d296 FUN_14626d296 body=167 status=ok
// SIG undefined FUN_14626d296(void)

void FUN_14626d296(void)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_30 [2];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c846b14 == '\x01') {
    FUN_146011dcc(local_30);
    FUN_144a882a8(&local_20,local_30,L"CrashVideo.avi");
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    plVar1 = (longlong *)FUN_14054d1d4();
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    local_38 = 0;
    (**(code **)(*plVar1 + 0x30))(plVar1,puVar2,0,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14626d33e FUN_14626d33e body=357 status=ok
// SIG undefined FUN_14626d33e(void)

undefined4 FUN_14626d33e(void)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar4 = (undefined8 *)FUN_14047ac8c();
  local_78 = (void *)0x0;
  local_70 = *(int *)(puVar4 + 1);
  lVar7 = (longlong)local_70;
  _Src = (void *)*puVar4;
  if (lVar7 == 0) {
    local_6c = 0;
    iVar2 = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar7 * 2);
    iVar2 = local_70;
  }
  uVar3 = 0;
  local_60 = iVar2 + -1;
  if (iVar2 == 0) {
    local_60 = 0;
  }
  local_58 = L"Config";
  local_50 = 6;
  local_48 = L"Windows";
  local_40 = 7;
  local_38 = L"Engine.ini";
  local_30 = 10;
  local_68 = local_78;
  FUN_140bee87a(&local_88,&local_68,4);
  plVar5 = (longlong *)FUN_14054d1d4();
  puVar6 = local_88;
  if (local_80 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(*plVar5 + 0x48))(plVar5,puVar6);
  if (cVar1 != '\0') {
    plVar5 = (longlong *)FUN_14054d1d4();
    puVar6 = local_88;
    if (local_80 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5,puVar6);
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14626d4a4 FUN_14626d4a4 body=118 status=ok
// SIG undefined FUN_14626d4a4(void)

bool FUN_14626d4a4(void)

{
  BOOL BVar1;
  undefined1 auStack_258 [32];
  LPCWSTR local_238;
  undefined2 *local_230;
  char local_220;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_140659024(&local_238);
  *local_230 = 0;
  BVar1 = DeleteFileW(local_238);
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return BVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626d51c FUN_14626d51c body=124 status=ok
// SIG undefined FUN_14626d51c(void)

byte FUN_14626d51c(void)

{
  DWORD DVar1;
  undefined1 auStack_258 [32];
  LPCWSTR local_238;
  undefined2 *local_230;
  char local_220;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_140659024(&local_238);
  *local_230 = 0;
  DVar1 = GetFileAttributesW(local_238);
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return (byte)DVar1 & DVar1 != 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626d59a FUN_14626d59a body=182 status=ok
// SIG undefined FUN_14626d59a(void)

bool FUN_14626d59a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPCWSTR lpNewFileName;
  BOOL BVar1;
  undefined1 auStack_488 [32];
  LPCWSTR local_468;
  undefined2 *local_460;
  char local_450;
  LPCWSTR local_248;
  undefined2 *local_240;
  char local_230;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_488;
  FUN_140659024(&local_248);
  lpNewFileName = local_248;
  *local_240 = 0;
  FUN_140659024(&local_468,param_3);
  *local_460 = 0;
  BVar1 = MoveFileW(local_468,lpNewFileName);
  if (local_450 == '\x01') {
    FUN_1400020a8(local_468);
  }
  if (local_230 == '\x01') {
    FUN_1400020a8(local_248);
  }
  if ((local_28 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return BVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626d652 FUN_14626d652 body=138 status=ok
// SIG undefined FUN_14626d652(void)

ulonglong FUN_14626d652(void)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined8 unaff_RBX;
  bool bVar3;
  undefined1 auStack_258 [32];
  LPCWSTR local_238;
  undefined2 *local_230;
  char local_220;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_140c50214(&local_238);
  *local_230 = 0;
  BVar1 = CreateDirectoryW(local_238,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    bVar3 = DVar2 == 0xb7;
  }
  else {
    bVar3 = true;
  }
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626d6de FUN_14626d6de body=2866 status=ok
// SIG undefined FUN_14626d6de(void)

ulonglong FUN_14626d6de(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  HRESULT HVar5;
  int iVar6;
  DWORDLONG dwlConditionMask;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  OLECHAR *pOVar11;
  undefined8 unaff_RDI;
  ulonglong uVar12;
  OLECHAR *pOVar13;
  wchar_t *pwVar14;
  undefined1 auStackY_708 [32];
  longlong *local_6e0;
  undefined2 *local_6d8;
  int local_6d0;
  longlong *local_6c8;
  longlong *local_6c0;
  undefined2 *local_6b8;
  int local_6b0;
  undefined2 *local_6a8;
  int local_6a0;
  longlong local_698 [2];
  int local_684;
  longlong *local_680;
  OLECHAR local_678 [264];
  wchar_t *local_468;
  undefined4 local_460;
  OLECHAR local_258 [8];
  _OSVERSIONINFOEXW local_248;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStackY_708;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20);
  if (cVar1 == '\0') {
    memset(&local_248.dwMajorVersion,0,0x118);
    local_248.dwOSVersionInfoSize = 0x11c;
    local_248.wProductType = '\x01';
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    dwlConditionMask = VerSetConditionMask(0,0x80,1);
    BVar3 = VerifyVersionInfoW(&local_248,0x80,dwlConditionMask);
    if (BVar3 == 0) goto LAB_14626d8a2;
    GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&local_248,0x103);
    uVar4 = CoInitializeEx((LPVOID)0x0,2);
    if (1 < uVar4) goto LAB_14626ddf8;
    HVar5 = CoCreateInstance((IID *)&DAT_149e40b18,(LPUNKNOWN)0x0,1,(IID *)&DAT_149e40b08,&local_680
                            );
    local_684 = 1;
    uVar7 = Ordinal_2(&local_248);
    if ((-1 < HVar5) && (local_680 != (longlong *)0x0)) {
      (**(code **)(*local_680 + 0x30))(local_680,uVar7,&local_684);
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14054d46e(&DAT_14c846b20,L"installge");
    if (cVar1 == '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar1 = FUN_14054d46e(&DAT_14c846b20,L"uninstallge");
      if (cVar1 == '\0') {
        Ordinal_6(uVar7);
        if (local_680 != (longlong *)0x0) {
          (**(code **)(*local_680 + 0x10))();
          local_680 = (longlong *)0x0;
        }
        CoUninitialize();
        if (local_684 != 0) goto LAB_14626d8a2;
        local_468 = L"Error_ParentalControls";
        local_460 = 0x16;
        FUN_1446e940c(local_678,&local_468);
        local_468 = L"UnrealEd";
        local_460 = 8;
        FUN_1446e940c(local_258,&local_468);
        FUN_140208bae(&local_468,local_258,local_678,
                      L"The current level of parental controls do not allow you to run this game.");
        FUN_1427863e0();
        FUN_1427864dc(0,0,&local_468,&DAT_14c873210);
        if (local_468 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_468 + 0x10))();
        }
        goto LAB_14626ddf8;
      }
      if (local_680 == (longlong *)0x0) {
        local_468 = L"GameExplorerUninstallationFailedDoToNotRunningVista";
        local_460 = 0x33;
        pOVar11 = local_678;
        FUN_1446e940c(pOVar11,&local_468);
        local_468 = L"WindowsPlatform";
        local_460 = 0xf;
        pOVar13 = local_258;
        FUN_1446e940c(pOVar13,&local_468);
        pwVar14 = L"GameExplorer uninstallation failed because you are probably not running Vista.";
      }
      else {
        local_678[0] = L'\xdd1d';
        local_678[1] = L'炉';
        local_678[2] = L'ﺗ';
        local_678[3] = L'䳈';
        local_678[4] = L'겊';
        local_678[5] = L'㸦';
        local_678[6] = L'ὄ';
        local_678[7] = L'䈼';
        iVar6 = (**(code **)(*local_680 + 0x20))();
        if (iVar6 < 0) {
          local_468 = L"GameExplorerUninstallationFailed";
          local_460 = 0x20;
          pOVar11 = local_258;
          FUN_1446e940c(pOVar11,&local_468);
          local_468 = L"WindowsPlatform";
          local_460 = 0xf;
          pOVar13 = (OLECHAR *)local_698;
          FUN_1446e940c(pOVar13,&local_468);
          pwVar14 = L"GameExplorer uninstallation was a failure, quitting now.";
        }
        else {
          local_468 = L"GameExplorerUninstallationSuccessful";
          local_460 = 0x24;
          pOVar11 = local_258;
          FUN_1446e940c(pOVar11,&local_468);
          local_468 = L"WindowsPlatform";
          local_460 = 0xf;
          pOVar13 = (OLECHAR *)local_698;
          FUN_1446e940c(pOVar13,&local_468);
          pwVar14 = L"GameExplorer uninstallation was successful, quitting now.";
        }
      }
LAB_14626dd8e:
      FUN_140208bae(&local_468,pOVar13,pOVar11,pwVar14);
      FUN_1427863e0();
      FUN_1427864dc(0,0,&local_468,&DAT_14c873210);
      if (local_468 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_468 + 0x10))();
      }
    }
    else {
      if ((local_684 == 0) || (local_680 == (longlong *)0x0)) {
        local_468 = L"GameExplorerInstallationFailedDoToAccessPermissions";
        local_460 = 0x33;
        pOVar11 = local_678;
        FUN_1446e940c(pOVar11,&local_468);
        local_468 = L"WindowsPlatform";
        local_460 = 0xf;
        pOVar13 = local_258;
        FUN_1446e940c(pOVar13,&local_468);
        pwVar14 = 
        L"GameExplorer installation failed because you don\'t have access (check parental control levels and that you are running XP). You should not need Admin access"
        ;
        goto LAB_14626dd8e;
      }
      FUN_1401aee94();
      uVar8 = Ordinal_2(&DAT_14c8c2c00);
      plVar9 = local_680;
      local_258[0] = L'\xdd1d';
      local_258[1] = L'炉';
      local_258[2] = L'ﺗ';
      local_258[3] = L'䳈';
      local_258[4] = L'겊';
      local_258[5] = L'㸦';
      local_258[6] = L'ὄ';
      local_258[7] = L'䈼';
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar2 = FUN_14054d46e(&DAT_14c846b20,L"allusers");
      iVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,uVar7,uVar8,bVar2 | 2);
      if (iVar6 < 0) {
LAB_14626e151:
        local_468 = L"GameExplorerInstallationFailed";
        local_460 = 0x1e;
        FUN_1446e940c(local_678,&local_468);
        local_468 = L"WindowsPlatform";
        local_460 = 0xf;
        FUN_1446e940c(local_698,&local_468);
        pwVar14 = L"GameExplorer installation was a failure, quitting now.";
      }
      else {
        SHGetFolderPathW(0,0x801c,0,0);
        StringFromGUID2((GUID *)&DAT_149e40b3c,local_678,0x103);
        FUN_140056680(&local_6b8,&local_468);
        FUN_144a882a8(&local_6a8,&local_6b8,L"\\Microsoft\\Windows\\GameExplorer\\");
        FUN_144a882a8(local_698,&local_6a8,local_678);
        if (local_6a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_6b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1449b8608(&local_6a8,local_698,L"\\PlayTasks");
        FUN_1449b8608(&local_6b8,local_698,L"\\SupportTasks");
        plVar9 = (longlong *)FUN_14054d1d4();
        puVar10 = &DAT_149dfb77a;
        if (local_6a0 != 0) {
          puVar10 = local_6a8;
        }
        (**(code **)(*plVar9 + 0x58))(plVar9,puVar10,1);
        plVar9 = (longlong *)FUN_14054d1d4();
        puVar10 = &DAT_149dfb77a;
        if (local_6b0 != 0) {
          puVar10 = local_6b8;
        }
        (**(code **)(*plVar9 + 0x58))(plVar9,puVar10,1);
        HVar5 = CoCreateInstance((IID *)&DAT_1499d76b0,(LPUNKNOWN)0x0,1,(IID *)&DAT_1499d7640,
                                 &local_6c0);
        (**(code **)*local_6c0)(local_6c0,&DAT_1499d7720,&local_6c8);
        (**(code **)(*local_6c0 + 0xa0))(local_6c0,&local_248);
        (**(code **)(*local_6c0 + 0x58))(local_6c0,&DAT_149dfb77a);
        (**(code **)(*local_6c0 + 0x38))(local_6c0,L"Play");
        plVar9 = (longlong *)FUN_14054d1d4();
        FUN_1449b8608(&local_6d8,&local_6a8,&DAT_149e40bdc);
        puVar10 = &DAT_149dfb77a;
        if (local_6d0 != 0) {
          puVar10 = local_6d8;
        }
        (**(code **)(*plVar9 + 0x58))(plVar9,puVar10,1);
        if (local_6d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar9 = local_6c8;
        FUN_1449b8608(&local_6d8,&local_6a8,L"\\0\\Play.lnk");
        puVar10 = local_6d8;
        if (local_6d0 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        (**(code **)(*plVar9 + 0x30))(plVar9,puVar10,1);
        if (local_6d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)(*local_6c0 + 0x58))(local_6c0,L"editor");
        (**(code **)(*local_6c0 + 0x38))(local_6c0,L"Editor");
        plVar9 = (longlong *)FUN_14054d1d4();
        FUN_1449b8608(&local_6d8,&local_6a8,&DAT_149e40c08);
        puVar10 = local_6d8;
        if (local_6d0 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        (**(code **)(*plVar9 + 0x58))(plVar9,puVar10,1);
        if (local_6d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar9 = local_6c8;
        FUN_1449b8608(&local_6d8,&local_6a8,L"\\1\\Editor.lnk");
        puVar10 = local_6d8;
        if (local_6d0 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        (**(code **)(*plVar9 + 0x30))(plVar9,puVar10,1);
        if (local_6d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)(*local_6c8 + 0x10))();
        (**(code **)(*local_6c0 + 0x10))();
        CoCreateInstance((IID *)&DAT_1499d7620,(LPUNKNOWN)0x0,1,(IID *)&DAT_1499d7660,&local_6e0);
        (**(code **)*local_6e0)(local_6e0,&DAT_1499d7720,&local_6c8);
        (**(code **)(*local_6e0 + 0x18))(local_6e0,L"http://www.unrealtournament3.com/",0);
        plVar9 = (longlong *)FUN_14054d1d4();
        FUN_1449b8608(&local_6d8,&local_6b8,&DAT_149e40bdc);
        puVar10 = local_6d8;
        if (local_6d0 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        (**(code **)(*plVar9 + 0x58))(plVar9,puVar10,1);
        if (local_6d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar9 = local_6c8;
        FUN_1449b8608(&local_6d8,&local_6b8,L"\\0\\UT3.url");
        puVar10 = local_6d8;
        if (local_6d0 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        (**(code **)(*plVar9 + 0x30))(plVar9,puVar10,1);
        if (local_6d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)(*local_6c8 + 0x10))();
        (**(code **)(*local_6e0 + 0x10))();
        if (local_6b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_6a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_698[0] != 0) {
          FUN_1400020a8();
        }
        if (HVar5 < 0) goto LAB_14626e151;
        local_468 = L"GameExplorerInstallationSuccessful";
        local_460 = 0x22;
        FUN_1446e940c(local_678,&local_468);
        local_468 = L"WindowsPlatform";
        local_460 = 0xf;
        FUN_1446e940c(local_698,&local_468);
        pwVar14 = L"GameExplorer installation was successful, quitting now.";
      }
      FUN_140208bae(&local_468,local_698,local_678,pwVar14);
      FUN_1427863e0();
      FUN_1427864dc(0,0,&local_468,&DAT_14c873210);
      if (local_468 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_468 + 0x10))();
      }
      Ordinal_6(uVar8);
    }
    Ordinal_6(uVar7);
    if (local_680 != (longlong *)0x0) {
      (**(code **)(*local_680 + 0x10))();
      local_680 = (longlong *)0x0;
    }
    CoUninitialize();
  }
  else {
    uVar7 = FUN_144a82cde();
    FUN_14626bd28(uVar7);
    uVar7 = DAT_14c872ce0;
    FUN_140056680(&local_248,&DAT_149dfb77a);
    FUN_140d6d8de(uVar7,0,&local_248);
    if (CONCAT44(local_248.dwMajorVersion,local_248.dwOSVersionInfoSize) != 0) {
      FUN_1400020a8();
    }
  }
LAB_14626ddf8:
  uVar12 = 0;
LAB_14626d8a2:
  if ((local_40 ^ (ulonglong)auStackY_708) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 14626e212 FUN_14626e212 body=109 status=ok
// SIG undefined FUN_14626e212(void)

undefined8 FUN_14626e212(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_e8 [32];
  WCHAR local_c8 [92];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = GetUserDefaultLocaleName(local_c8,0x55);
  if (iVar1 == 0) {
    FUN_1467b7c40(param_1);
  }
  else {
    FUN_140056680(param_1,local_c8);
  }
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626e280 FUN_14626e280 body=29 status=ok
// SIG undefined FUN_14626e280(void)

undefined8 FUN_14626e280(undefined8 param_1)

{
  FUN_1400b22c2(param_1,&DAT_14c8c27ca);
  return param_1;
}



// FUNCTION 14626e29e FUN_14626e29e body=29 status=ok
// SIG undefined FUN_14626e29e(void)

undefined8 FUN_14626e29e(undefined8 param_1)

{
  FUN_1400b22c2(param_1,&DAT_14c8c27d7);
  return param_1;
}



// FUNCTION 14626e2bc FUN_14626e2bc body=106 status=ok
// SIG undefined FUN_14626e2bc(void)

void FUN_14626e2bc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14626e326 FUN_14626e326 body=367 status=ok
// SIG undefined FUN_14626e326(void)

ulonglong FUN_14626e326(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *_Str;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0x7ffffffe < (int)param_1[1] - 2U) {
    uVar6 = 0;
    goto LAB_14626e45b;
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  iVar2 = FUN_1403de9f2(param_1,&local_48,&DAT_149e065c6,1);
  puVar1 = local_48;
  if (iVar2 == 3) {
    if (((0x80000002 < *(int *)(local_48 + 1) + 0x7fffffffU) ||
        (0x80000002 < *(int *)(local_48 + 3) + 0x7fffffffU)) || (*(int *)(local_48 + 5) != 5))
    goto LAB_14626e48e;
    _Str = L"";
    pwVar5 = L"";
    if (*(int *)(local_48 + 1) != 0) {
      pwVar5 = (wchar_t *)*local_48;
    }
    iVar2 = _wtoi(pwVar5);
    pwVar5 = L"";
    if (*(int *)(puVar1 + 3) != 0) {
      pwVar5 = (wchar_t *)puVar1[2];
    }
    iVar3 = _wtoi(pwVar5);
    if (*(int *)(puVar1 + 5) != 0) {
      _Str = (wchar_t *)puVar1[4];
    }
    iVar4 = _wtoi(_Str);
    uVar6 = 0;
    if (((0 < iVar2) && (0 < iVar3)) && (2000 < iVar4)) {
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      FUN_14021300e(&local_50,iVar4,iVar2,iVar3);
      *param_2 = local_50;
      uVar6 = CONCAT71((int7)((ulonglong)&local_50 >> 8),1);
    }
  }
  else {
LAB_14626e48e:
    uVar6 = 0;
  }
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14626e45b:
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626e496 FUN_14626e496 body=575 status=ok
// SIG undefined FUN_14626e496(void)

undefined8 FUN_14626e496(longlong *param_1)

{
  char cVar1;
  int iVar2;
  wchar_t *_Str1;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[1] - 2U < 0x7fffffff) {
    local_90 = 0xffffffff;
    local_98 = 0;
    uVar5 = 0;
    iVar2 = FUN_1447ee042(param_1,L"Intel(R)",8,0);
    if (iVar2 == -1) goto LAB_14626e68e;
    local_90 = 0xffffffff;
    local_98 = 0;
    uVar4 = 0;
    iVar2 = FUN_1447ee042(param_1,L"Core(TM) i",10,0);
    if (iVar2 != -1) {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_1403de9f2(param_1,&local_78,&DAT_149e001d8,1);
      if ((longlong)(int)uStack_70 == 0) {
        uVar5 = 0;
      }
      else {
        lVar6 = (longlong)(int)uStack_70 << 4;
        uVar5 = 0;
        puVar3 = local_78;
        do {
          local_90 = 0xffffffff;
          local_98 = 0;
          iVar2 = FUN_1447ee042(puVar3,&DAT_149e1419a,1,1);
          if (iVar2 != -1) {
            _Str1 = L"";
            if (*(int *)(puVar3 + 1) != 0) {
              _Str1 = (wchar_t *)*puVar3;
            }
            iVar2 = wcsncmp(_Str1,L"i",1);
            if (iVar2 == 0) {
              local_88 = 0;
              uStack_80 = 0;
              iVar2 = FUN_1403de9f2(puVar3,&local_88,&DAT_149e1419a,1);
              if (iVar2 == 2) {
                cVar1 = FUN_144a791f8(local_88 + 0x10,&DAT_149e3f9b2,2,1);
                if (cVar1 == '\0') {
                  cVar1 = FUN_144a791f8(local_88 + 0x10,&DAT_149e3f9b8,2,1);
                  if (cVar1 == '\0') goto LAB_14626e646;
                }
                uVar5 = 1;
              }
LAB_14626e646:
              FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
              if (local_88 != 0) {
                FUN_1400020a8();
              }
            }
          }
          puVar3 = puVar3 + 2;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
        uVar4 = (int)uStack_70;
      }
      FUN_1447a1747(local_78,uVar4);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14626e68e;
    }
  }
  uVar5 = 0;
LAB_14626e68e:
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626e6d6 FUN_14626e6d6 body=383 status=ok
// SIG undefined FUN_14626e6d6(void)

undefined8 * FUN_14626e6d6(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_145db1694(10,0,22000);
  *param_1 = 0;
  param_1[1] = 0;
  cVar2 = FUN_145ca351c(&DAT_ffffffff80000002,
                        L"System\\CurrentControlSet\\Control\\GraphicsDrivers\\",L"HwSchMode",
                        param_1);
  if (cVar2 == '\0') {
    if (cVar1 == '\0') {
      pwVar4 = L"Disabled";
    }
    else {
      pwVar4 = L"Enabled";
    }
    FUN_14020fad6(param_1,pwVar4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_140056680(&local_30,&DAT_149e01eac);
  pwVar4 = local_30;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 == local_28) {
    bVar5 = true;
    if (1 < iVar3) {
      iVar3 = wcscmp((wchar_t *)*param_1,local_30);
      bVar5 = iVar3 == 0;
    }
  }
  else {
    bVar5 = local_28 + iVar3 == 1;
  }
  if (pwVar4 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar4);
  }
  if (bVar5) {
    pwVar4 = L"Enabled";
  }
  else {
    FUN_140056680(&local_30,&DAT_149e0209e);
    iVar3 = *(int *)(param_1 + 1);
    if (iVar3 == local_28) {
      bVar5 = true;
      if (1 < iVar3) {
        iVar3 = wcscmp((wchar_t *)*param_1,local_30);
        bVar5 = iVar3 == 0;
      }
    }
    else {
      bVar5 = local_28 + iVar3 == 1;
    }
    if (local_30 != (wchar_t *)0x0) {
      FUN_1400020a8(local_30);
    }
    if (bVar5) {
      pwVar4 = L"Disabled";
    }
    else {
      pwVar4 = L"Unknown";
    }
  }
  FUN_14020fad6(param_1,pwVar4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626e856 FUN_14626e856 body=174 status=ok
// SIG undefined FUN_14626e856(void)

undefined8 FUN_14626e856(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *puVar1 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e41990;
  puVar1[3] = &DAT_14c8962a8;
  puVar1[4] = param_3;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626e906 FUN_14626e906 body=286 status=ok
// SIG undefined FUN_14626e906(void)

void FUN_14626e906(void)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  LARGE_INTEGER local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  QueryPerformanceFrequency(&local_28);
  DAT_14c83f418 = 1.0 / (double)local_28.QuadPart;
  DAT_14c83f420 = DAT_14c83f418;
  uVar2 = FUN_1401cb356();
  local_48.QuadPart = 0;
  local_40 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x20,&local_48);
  *puVar3 = &PTR_LAB_149e02020;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_149e41f40;
  puVar3[3] = FUN_1407c2aca;
  local_58 = 0x3e800000;
  FUN_1405f67fc(uVar2,local_38,&local_48,L"FWindowsPlatformTime_UpdateCPUTime");
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  FUN_1449db362(&local_48);
  QueryPerformanceCounter(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0);
}



// FUNCTION 14626ea25 FUN_14626ea25 body=134 status=ok
// SIG undefined FUN_14626ea25(void)

int FUN_14626ea25(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  puVar3 = (ulonglong *)FUN_144737586();
  local_48 = 0;
  local_40 = &local_res20;
  iVar1 = __stdio_common_vsprintf(*puVar3 | 2,param_1,param_2,param_3);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626eaac FUN_14626eaac body=201 status=ok
// SIG undefined FUN_14626eaac(void)

void FUN_14626eaac(void)

{
  if (DAT_14c91eb08 != '\x01') {
    return;
  }
  if (DAT_14c91ec49 != '\0') {
    return;
  }
  DAT_14c91ec49 = 1;
  FlsSetValue(DAT_14c75e9c8,(PVOID)0x0);
  FlsFree(DAT_14c75e9c8);
  if (DAT_14c75e9ec == 0) {
    FUN_1412bb367(&DAT_14c75e9e8);
  }
  if (DAT_14c75e9e8 == 0) {
    if (DAT_14c75ea04 == 0) {
      FUN_1412bb367(&DAT_14c75ea00);
    }
    if (DAT_14c75ea00 == 0) goto LAB_14626eb07;
  }
  FUN_145d75242();
  FUN_146834ef6(**(longlong **)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xce8) + 0x3d8);
  FUN_146835497();
LAB_14626eb07:
  FUN_1412bb2e0("process done: 0x%zx\n",DAT_14c75e8f8);
  DAT_14c91eb09 = 0;
  return;
}



// FUNCTION 14626eb76 FUN_14626eb76 body=268 status=ok
// SIG undefined FUN_14626eb76(void)

void FUN_14626eb76(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e43d90;
  local_58 = plVar4 + 2;
  plVar4[2] = (longlong)&PTR_FUN_149e43db0;
  plVar4[4] = param_3;
  *(undefined4 *)(plVar4 + 3) = 3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_58;
  local_50 = plVar4;
  local_48 = param_2;
  FUN_1413ef6fe(param_1,local_34,&local_48,0);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626ec84 FUN_14626ec84 body=259 status=ok
// SIG undefined FUN_14626ec84(void)

void FUN_14626ec84(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e43f30;
  local_50 = plVar4 + 2;
  plVar4[2] = (longlong)&PTR_FUN_149e43f50;
  *(undefined1 *)(plVar4 + 4) = param_3;
  *(undefined4 *)(plVar4 + 3) = 4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = &local_50;
  local_48 = plVar4;
  local_40 = param_2;
  FUN_1413ef6fe(param_1,local_2c,&local_40,0);
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626ed88 FUN_14626ed88 body=192 status=ok
// SIG undefined FUN_14626ed88(void)

void FUN_14626ed88(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e441c0;
  puVar1[3] = &DAT_14c926c9c;
  puVar1[4] = FUN_14683c604;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626ee4a FUN_14626ee4a body=57 status=ok
// SIG undefined FUN_14626ee4a(void)

undefined8 * FUN_14626ee4a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e43e80;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626ee84 FUN_14626ee84 body=93 status=ok
// SIG undefined FUN_14626ee84(void)

void FUN_14626ee84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e441c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14626eee2 FUN_14626eee2 body=29 status=ok
// SIG undefined FUN_14626eee2(void)

undefined8 FUN_14626eee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626ef00 FUN_14626ef00 body=29 status=ok
// SIG undefined FUN_14626ef00(void)

undefined8 FUN_14626ef00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626ef1e FUN_14626ef1e body=486 status=ok
// SIG undefined FUN_14626ef1e(void)

void FUN_14626ef1e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626f112 FUN_14626f112 body=186 status=ok
// SIG undefined FUN_14626f112(void)

undefined8 * FUN_14626f112(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c926f68) {
    FUN_144b3d300(&DAT_14c926f68);
    if (DAT_14c926f68 == -1) {
      FUN_140056680(&DAT_14c926f58,L"uproject");
      atexit((_func_5014 *)&LAB_1427ad12c);
      _Init_thread_footer(&DAT_14c926f68);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14c926f60;
  _Src = DAT_14c926f58;
  lVar2 = (longlong)DAT_14c926f60;
  *(int *)(param_1 + 1) = DAT_14c926f60;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 14626f1cc FUN_14626f1cc body=192 status=ok
// SIG undefined FUN_14626f1cc(void)

void FUN_14626f1cc(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49c10;
  puVar1[3] = &DAT_14c926fa8;
  puVar1[4] = FUN_1468560dc;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14626f28e FUN_14626f28e body=29 status=ok
// SIG undefined FUN_14626f28e(void)

undefined8 FUN_14626f28e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626f2ac FUN_14626f2ac body=29 status=ok
// SIG undefined FUN_14626f2ac(void)

undefined8 FUN_14626f2ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14626f2ca FUN_14626f2ca body=275 status=ok
// SIG undefined FUN_14626f2ca(void)

undefined8 FUN_14626f2ca(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    FUN_140056680(&local_38);
    puVar8 = local_38;
    puVar6 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    iVar4 = local_30 + -1;
    if (local_30 == 0) {
      iVar4 = 0;
    }
    cVar5 = FUN_14038a9c4(puVar6,iVar4,L"*.pak",5);
    if ((cVar5 != '\0') &&
       (cVar5 = FUN_144a23846(*(undefined8 *)(param_1 + 0x10),&local_38), puVar8 = local_38,
       cVar5 == '\0')) {
      plVar2 = *(longlong **)(param_1 + 0x10);
      iVar4 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
        FUN_1447a1bd6(plVar2,iVar4);
      }
      puVar8 = local_38;
      lVar3 = *plVar2;
      lVar7 = (longlong)iVar4 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar7);
      *(undefined8 *)(lVar3 + lVar7) = 0;
      *(int *)(lVar3 + 8 + lVar7) = local_30;
      if ((longlong)local_30 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,local_30,0);
        memcpy((void *)*puVar1,puVar8,(longlong)local_30 * 2);
        puVar8 = local_38;
      }
    }
    if (puVar8 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14626f3de FUN_14626f3de body=93 status=ok
// SIG undefined FUN_14626f3de(void)

void FUN_14626f3de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14626f43b FUN_14626f43b body=47 status=ok
// SIG undefined FUN_14626f43b(void)

longlong FUN_14626f43b(void)

{
  if (DAT_14c926fb0 == 0) {
    FUN_1409ce572(&DAT_14c926fb0,&PTR_FUN_149e4a010);
  }
  return DAT_14c926fb0;
}



// FUNCTION 14626f46a FUN_14626f46a body=47 status=ok
// SIG undefined FUN_14626f46a(void)

longlong FUN_14626f46a(void)

{
  if (DAT_14c927718 == 0) {
    FUN_14086a14e(&DAT_14c927718,&PTR_FUN_149e561a0);
  }
  return DAT_14c927718;
}



// FUNCTION 14626f499 FUN_14626f499 body=47 status=ok
// SIG undefined FUN_14626f499(void)

longlong FUN_14626f499(void)

{
  if (DAT_14c927710 == 0) {
    FUN_14086a14e(&DAT_14c927710,&PTR_FUN_149e560c0);
  }
  return DAT_14c927710;
}



// FUNCTION 14626f4c8 FUN_14626f4c8 body=47 status=ok
// SIG undefined FUN_14626f4c8(void)

longlong FUN_14626f4c8(void)

{
  if (DAT_14c927680 == 0) {
    FUN_14086a14e(&DAT_14c927680,&PTR_FUN_149e553c8);
  }
  return DAT_14c927680;
}



// FUNCTION 14626f4f7 FUN_14626f4f7 body=49 status=ok
// SIG undefined FUN_14626f4f7(void)

longlong FUN_14626f4f7(void)

{
  if (DAT_14c927688 == 0) {
    FUN_14086a14e(&DAT_14c927688,&PTR_FUN_149e55550);
  }
  return DAT_14c927688;
}



// FUNCTION 14626f528 FUN_14626f528 body=49 status=ok
// SIG undefined FUN_14626f528(void)

longlong FUN_14626f528(void)

{
  if (DAT_14c9274b8 == 0) {
    FUN_14086a14e(&DAT_14c9274b8,&PTR_FUN_149e518f8);
  }
  return DAT_14c9274b8;
}



// FUNCTION 14626f559 FUN_14626f559 body=47 status=ok
// SIG undefined FUN_14626f559(void)

longlong FUN_14626f559(void)

{
  if (DAT_14c9274a8 == 0) {
    FUN_14086a14e(&DAT_14c9274a8,&PTR_FUN_149e516c8);
  }
  return DAT_14c9274a8;
}



// FUNCTION 14626f588 FUN_14626f588 body=47 status=ok
// SIG undefined FUN_14626f588(void)

longlong FUN_14626f588(void)

{
  if (DAT_14c9274a0 == 0) {
    FUN_14086a14e(&DAT_14c9274a0,&PTR_FUN_149e515b8);
  }
  return DAT_14c9274a0;
}



// FUNCTION 14626f5b7 FUN_14626f5b7 body=47 status=ok
// SIG undefined FUN_14626f5b7(void)

longlong FUN_14626f5b7(void)

{
  if (DAT_14c9274d0 == 0) {
    FUN_14086a14e(&DAT_14c9274d0,&PTR_FUN_149e51c48);
  }
  return DAT_14c9274d0;
}



// FUNCTION 14626f5e6 FUN_14626f5e6 body=47 status=ok
// SIG undefined FUN_14626f5e6(void)

longlong FUN_14626f5e6(void)

{
  if (DAT_14c9274c8 == 0) {
    FUN_14086a14e(&DAT_14c9274c8,&PTR_FUN_149e51b38);
  }
  return DAT_14c9274c8;
}



// FUNCTION 14626f615 FUN_14626f615 body=47 status=ok
// SIG undefined FUN_14626f615(void)

longlong FUN_14626f615(void)

{
  if (DAT_14c927610 == 0) {
    FUN_14086a14e(&DAT_14c927610,&PTR_FUN_149e54850);
  }
  return DAT_14c927610;
}



// FUNCTION 14626f644 FUN_14626f644 body=49 status=ok
// SIG undefined FUN_14626f644(void)

longlong FUN_14626f644(void)

{
  if (DAT_14c927608 == 0) {
    FUN_14086a14e(&DAT_14c927608,&PTR_FUN_149e54778);
  }
  return DAT_14c927608;
}



// FUNCTION 14626f675 FUN_14626f675 body=47 status=ok
// SIG undefined FUN_14626f675(void)

longlong FUN_14626f675(void)

{
  if (DAT_14c9272b8 == 0) {
    FUN_14086a14e(&DAT_14c9272b8,&PTR_FUN_149e4dbf0);
  }
  return DAT_14c9272b8;
}



// FUNCTION 14626f6a4 FUN_14626f6a4 body=49 status=ok
// SIG undefined FUN_14626f6a4(void)

longlong FUN_14626f6a4(void)

{
  if (DAT_14c9275f8 == 0) {
    FUN_14086a14e(&DAT_14c9275f8,&PTR_FUN_149e545a0);
  }
  return DAT_14c9275f8;
}



// FUNCTION 14626f6d5 FUN_14626f6d5 body=47 status=ok
// SIG undefined FUN_14626f6d5(void)

longlong FUN_14626f6d5(void)

{
  if (DAT_14c927630 == 0) {
    FUN_14086a14e(&DAT_14c927630,&PTR_FUN_149e54bc8);
  }
  return DAT_14c927630;
}



// FUNCTION 14626f704 FUN_14626f704 body=49 status=ok
// SIG undefined FUN_14626f704(void)

longlong FUN_14626f704(void)

{
  if (DAT_14c927628 == 0) {
    FUN_14086a14e(&DAT_14c927628,&PTR_FUN_149e54ae8);
  }
  return DAT_14c927628;
}



// FUNCTION 14626f735 FUN_14626f735 body=47 status=ok
// SIG undefined FUN_14626f735(void)

longlong FUN_14626f735(void)

{
  if (DAT_14c927780 == 0) {
    FUN_14086a14e(&DAT_14c927780,&PTR_FUN_149e56a68);
  }
  return DAT_14c927780;
}



// FUNCTION 14626f764 FUN_14626f764 body=47 status=ok
// SIG undefined FUN_14626f764(void)

longlong FUN_14626f764(void)

{
  if (DAT_14c927788 == 0) {
    FUN_14086a14e(&DAT_14c927788,&PTR_FUN_149e56aa0);
  }
  return DAT_14c927788;
}



// FUNCTION 14626f793 FUN_14626f793 body=47 status=ok
// SIG undefined FUN_14626f793(void)

longlong FUN_14626f793(void)

{
  if (DAT_14c927778 == 0) {
    FUN_14086a14e(&DAT_14c927778,&PTR_FUN_149e56a20);
  }
  return DAT_14c927778;
}



// FUNCTION 14626f7c2 FUN_14626f7c2 body=47 status=ok
// SIG undefined FUN_14626f7c2(void)

longlong FUN_14626f7c2(void)

{
  if (DAT_14c9277b8 == 0) {
    FUN_14086a14e(&DAT_14c9277b8,&PTR_FUN_149e56f38);
  }
  return DAT_14c9277b8;
}



// FUNCTION 14626f7f1 FUN_14626f7f1 body=49 status=ok
// SIG undefined FUN_14626f7f1(void)

longlong FUN_14626f7f1(void)

{
  if (DAT_14c927640 == 0) {
    FUN_14086a14e(&DAT_14c927640,&PTR_FUN_149e54d60);
  }
  return DAT_14c927640;
}



// FUNCTION 14626f822 FUN_14626f822 body=49 status=ok
// SIG undefined FUN_14626f822(void)

longlong FUN_14626f822(void)

{
  if (DAT_14c9273a8 == 0) {
    FUN_14086a14e(&DAT_14c9273a8,&PTR_FUN_149e4f7c0);
  }
  return DAT_14c9273a8;
}



// FUNCTION 14626f853 FUN_14626f853 body=47 status=ok
// SIG undefined FUN_14626f853(void)

longlong FUN_14626f853(void)

{
  if (DAT_14c927620 == 0) {
    FUN_14086a14e(&DAT_14c927620,&PTR_FUN_149e54a00);
  }
  return DAT_14c927620;
}



// FUNCTION 14626f882 FUN_14626f882 body=49 status=ok
// SIG undefined FUN_14626f882(void)

longlong FUN_14626f882(void)

{
  if (DAT_14c927618 == 0) {
    FUN_14086a14e(&DAT_14c927618,&PTR_FUN_149e54920);
  }
  return DAT_14c927618;
}



// FUNCTION 14626f8b3 FUN_14626f8b3 body=47 status=ok
// SIG undefined FUN_14626f8b3(void)

longlong FUN_14626f8b3(void)

{
  if (DAT_14c9273d8 == 0) {
    FUN_14086a14e(&DAT_14c9273d8,&PTR_FUN_149e4fc80);
  }
  return DAT_14c9273d8;
}



// FUNCTION 14626f8e2 FUN_14626f8e2 body=47 status=ok
// SIG undefined FUN_14626f8e2(void)

longlong FUN_14626f8e2(void)

{
  if (DAT_14c927430 == 0) {
    FUN_14086a14e(&DAT_14c927430,&PTR_FUN_149e50578);
  }
  return DAT_14c927430;
}



// FUNCTION 14626f911 FUN_14626f911 body=47 status=ok
// SIG undefined FUN_14626f911(void)

longlong FUN_14626f911(void)

{
  if (DAT_14c927400 == 0) {
    FUN_14086a14e(&DAT_14c927400,&PTR_FUN_149e500c0);
  }
  return DAT_14c927400;
}



// FUNCTION 14626f940 FUN_14626f940 body=47 status=ok
// SIG undefined FUN_14626f940(void)

longlong FUN_14626f940(void)

{
  if (DAT_14c927460 == 0) {
    FUN_14086a14e(&DAT_14c927460,&PTR_FUN_149e50bb0);
  }
  return DAT_14c927460;
}



// FUNCTION 14626f96f FUN_14626f96f body=49 status=ok
// SIG undefined FUN_14626f96f(void)

longlong FUN_14626f96f(void)

{
  if (DAT_14c9273b0 == 0) {
    FUN_14086a14e(&DAT_14c9273b0,&PTR_FUN_149e4f880);
  }
  return DAT_14c9273b0;
}



// FUNCTION 14626f9a0 FUN_14626f9a0 body=47 status=ok
// SIG undefined FUN_14626f9a0(void)

longlong FUN_14626f9a0(void)

{
  if (DAT_14c9273e0 == 0) {
    FUN_14086a14e(&DAT_14c9273e0,&PTR_FUN_149e4fd60);
  }
  return DAT_14c9273e0;
}



// FUNCTION 14626f9cf FUN_14626f9cf body=47 status=ok
// SIG undefined FUN_14626f9cf(void)

longlong FUN_14626f9cf(void)

{
  if (DAT_14c927438 == 0) {
    FUN_14086a14e(&DAT_14c927438,&PTR_FUN_149e50678);
  }
  return DAT_14c927438;
}



// FUNCTION 14626f9fe FUN_14626f9fe body=47 status=ok
// SIG undefined FUN_14626f9fe(void)

longlong FUN_14626f9fe(void)

{
  if (DAT_14c927408 == 0) {
    FUN_14086a14e(&DAT_14c927408,&PTR_FUN_149e50180);
  }
  return DAT_14c927408;
}



// FUNCTION 14626fa2d FUN_14626fa2d body=47 status=ok
// SIG undefined FUN_14626fa2d(void)

longlong FUN_14626fa2d(void)

{
  if (DAT_14c927468 == 0) {
    FUN_14086a14e(&DAT_14c927468,&PTR_FUN_149e50cf0);
  }
  return DAT_14c927468;
}



// FUNCTION 14626fa5c FUN_14626fa5c body=49 status=ok
// SIG undefined FUN_14626fa5c(void)

longlong FUN_14626fa5c(void)

{
  if (DAT_14c927508 == 0) {
    FUN_14086a14e(&DAT_14c927508,&PTR_FUN_149e52740);
  }
  return DAT_14c927508;
}



// FUNCTION 14626fa8d FUN_14626fa8d body=47 status=ok
// SIG undefined FUN_14626fa8d(void)

longlong FUN_14626fa8d(void)

{
  if (DAT_14c927558 == 0) {
    FUN_14086a14e(&DAT_14c927558,&PTR_FUN_149e53658);
  }
  return DAT_14c927558;
}



// FUNCTION 14626fabc FUN_14626fabc body=47 status=ok
// SIG undefined FUN_14626fabc(void)

longlong FUN_14626fabc(void)

{
  if (DAT_14c927500 == 0) {
    FUN_14086a14e(&DAT_14c927500,&PTR_FUN_149e525d0);
  }
  return DAT_14c927500;
}



// FUNCTION 14626faeb FUN_14626faeb body=47 status=ok
// SIG undefined FUN_14626faeb(void)

longlong FUN_14626faeb(void)

{
  if (DAT_14c927550 == 0) {
    FUN_14086a14e(&DAT_14c927550,&PTR_FUN_149e534f8);
  }
  return DAT_14c927550;
}



// FUNCTION 14626fb1a FUN_14626fb1a body=47 status=ok
// SIG undefined FUN_14626fb1a(void)

longlong FUN_14626fb1a(void)

{
  if (DAT_14c927530 == 0) {
    FUN_14086a14e(&DAT_14c927530,&PTR_FUN_149e52ef0);
  }
  return DAT_14c927530;
}



// FUNCTION 14626fb49 FUN_14626fb49 body=47 status=ok
// SIG undefined FUN_14626fb49(void)

longlong FUN_14626fb49(void)

{
  if (DAT_14c927540 == 0) {
    FUN_14086a14e(&DAT_14c927540,&PTR_FUN_149e531f8);
  }
  return DAT_14c927540;
}



// FUNCTION 14626fb78 FUN_14626fb78 body=47 status=ok
// SIG undefined FUN_14626fb78(void)

longlong FUN_14626fb78(void)

{
  if (DAT_14c927520 == 0) {
    FUN_14086a14e(&DAT_14c927520,&PTR_FUN_149e52bf0);
  }
  return DAT_14c927520;
}



// FUNCTION 14626fba7 FUN_14626fba7 body=47 status=ok
// SIG undefined FUN_14626fba7(void)

longlong FUN_14626fba7(void)

{
  if (DAT_14c927510 == 0) {
    FUN_14086a14e(&DAT_14c927510,&PTR_FUN_149e528f8);
  }
  return DAT_14c927510;
}



// FUNCTION 14626fbd6 FUN_14626fbd6 body=47 status=ok
// SIG undefined FUN_14626fbd6(void)

longlong FUN_14626fbd6(void)

{
  if (DAT_14c927538 == 0) {
    FUN_14086a14e(&DAT_14c927538,&PTR_FUN_149e53040);
  }
  return DAT_14c927538;
}



// FUNCTION 14626fc05 FUN_14626fc05 body=47 status=ok
// SIG undefined FUN_14626fc05(void)

longlong FUN_14626fc05(void)

{
  if (DAT_14c927548 == 0) {
    FUN_14086a14e(&DAT_14c927548,&PTR_FUN_149e53340);
  }
  return DAT_14c927548;
}



// FUNCTION 14626fc34 FUN_14626fc34 body=49 status=ok
// SIG undefined FUN_14626fc34(void)

longlong FUN_14626fc34(void)

{
  if (DAT_14c927528 == 0) {
    FUN_14086a14e(&DAT_14c927528,&PTR_FUN_149e52d40);
  }
  return DAT_14c927528;
}



// FUNCTION 14626fc65 FUN_14626fc65 body=47 status=ok
// SIG undefined FUN_14626fc65(void)

longlong FUN_14626fc65(void)

{
  if (DAT_14c927518 == 0) {
    FUN_14086a14e(&DAT_14c927518,&PTR_FUN_149e52a40);
  }
  return DAT_14c927518;
}



// FUNCTION 14626fc94 FUN_14626fc94 body=47 status=ok
// SIG undefined FUN_14626fc94(void)

longlong FUN_14626fc94(void)

{
  if (DAT_14c9273d0 == 0) {
    FUN_14086a14e(&DAT_14c9273d0,&PTR_FUN_149e4fba0);
  }
  return DAT_14c9273d0;
}



// FUNCTION 14626fcc3 FUN_14626fcc3 body=49 status=ok
// SIG undefined FUN_14626fcc3(void)

longlong FUN_14626fcc3(void)

{
  if (DAT_14c927410 == 0) {
    FUN_14086a14e(&DAT_14c927410,&PTR_FUN_149e50240);
  }
  return DAT_14c927410;
}



// FUNCTION 14626fcf4 FUN_14626fcf4 body=49 status=ok
// SIG undefined FUN_14626fcf4(void)

longlong FUN_14626fcf4(void)

{
  if (DAT_14c927470 == 0) {
    FUN_14086a14e(&DAT_14c927470,&PTR_FUN_149e50e30);
  }
  return DAT_14c927470;
}



// FUNCTION 14626fd25 FUN_14626fd25 body=47 status=ok
// SIG undefined FUN_14626fd25(void)

longlong FUN_14626fd25(void)

{
  if (DAT_14c9274f0 == 0) {
    FUN_14086a14e(&DAT_14c9274f0,&PTR_FUN_149e52290);
  }
  return DAT_14c9274f0;
}



// FUNCTION 14626fd54 FUN_14626fd54 body=49 status=ok
// SIG undefined FUN_14626fd54(void)

longlong FUN_14626fd54(void)

{
  if (DAT_14c9274e8 == 0) {
    FUN_14086a14e(&DAT_14c9274e8,&PTR_FUN_149e52130);
  }
  return DAT_14c9274e8;
}



// FUNCTION 14626fd85 FUN_14626fd85 body=47 status=ok
// SIG undefined FUN_14626fd85(void)

longlong FUN_14626fd85(void)

{
  if (DAT_14c927178 == 0) {
    FUN_14086a14e(&DAT_14c927178,&PTR_FUN_149e4c8d8);
  }
  return DAT_14c927178;
}



// FUNCTION 14626fdb4 FUN_14626fdb4 body=47 status=ok
// SIG undefined FUN_14626fdb4(void)

longlong FUN_14626fdb4(void)

{
  if (DAT_14c9274e0 == 0) {
    FUN_14086a14e(&DAT_14c9274e0,&PTR_FUN_149e51fb8);
  }
  return DAT_14c9274e0;
}



// FUNCTION 14626fde3 FUN_14626fde3 body=47 status=ok
// SIG undefined FUN_14626fde3(void)

longlong FUN_14626fde3(void)

{
  if (DAT_14c927388 == 0) {
    FUN_14086a14e(&DAT_14c927388,&PTR_FUN_149e4f4d0);
  }
  return DAT_14c927388;
}



// FUNCTION 14626fe12 FUN_14626fe12 body=47 status=ok
// SIG undefined FUN_14626fe12(void)

longlong FUN_14626fe12(void)

{
  if (DAT_14c927390 == 0) {
    FUN_14086a14e(&DAT_14c927390,&PTR_FUN_149e4f560);
  }
  return DAT_14c927390;
}



// FUNCTION 14626fe41 FUN_14626fe41 body=47 status=ok
// SIG undefined FUN_14626fe41(void)

longlong FUN_14626fe41(void)

{
  if (DAT_14c927398 == 0) {
    FUN_14086a14e(&DAT_14c927398,&PTR_FUN_149e4f640);
  }
  return DAT_14c927398;
}



// FUNCTION 14626fe70 FUN_14626fe70 body=49 status=ok
// SIG undefined FUN_14626fe70(void)

longlong FUN_14626fe70(void)

{
  if (DAT_14c927318 == 0) {
    FUN_14086a14e(&DAT_14c927318,&PTR_FUN_149e4e750);
  }
  return DAT_14c927318;
}



// FUNCTION 14626fea1 FUN_14626fea1 body=49 status=ok
// SIG undefined FUN_14626fea1(void)

longlong FUN_14626fea1(void)

{
  if (DAT_14c927310 == 0) {
    FUN_14086a14e(&DAT_14c927310,&PTR_FUN_149e4e6d8);
  }
  return DAT_14c927310;
}



// FUNCTION 14626fed2 FUN_14626fed2 body=47 status=ok
// SIG undefined FUN_14626fed2(void)

longlong FUN_14626fed2(void)

{
  if (DAT_14c9276e8 == 0) {
    FUN_14086a14e(&DAT_14c9276e8,&PTR_FUN_149e55978);
  }
  return DAT_14c9276e8;
}



// FUNCTION 14626ff01 FUN_14626ff01 body=49 status=ok
// SIG undefined FUN_14626ff01(void)

longlong FUN_14626ff01(void)

{
  if (DAT_14c927660 == 0) {
    FUN_14086a14e(&DAT_14c927660,&PTR_FUN_149e55190);
  }
  return DAT_14c927660;
}



// FUNCTION 14626ff32 FUN_14626ff32 body=47 status=ok
// SIG undefined FUN_14626ff32(void)

longlong FUN_14626ff32(void)

{
  if (DAT_14c927378 == 0) {
    FUN_14086a14e(&DAT_14c927378,&PTR_FUN_149e4f220);
  }
  return DAT_14c927378;
}



// FUNCTION 14626ff61 FUN_14626ff61 body=49 status=ok
// SIG undefined FUN_14626ff61(void)

longlong FUN_14626ff61(void)

{
  if (DAT_14c927370 == 0) {
    FUN_14086a14e(&DAT_14c927370,&PTR_FUN_149e4f0e0);
  }
  return DAT_14c927370;
}



// FUNCTION 14626ff92 FUN_14626ff92 body=47 status=ok
// SIG undefined FUN_14626ff92(void)

longlong FUN_14626ff92(void)

{
  if (DAT_14c927330 == 0) {
    FUN_14086a14e(&DAT_14c927330,&PTR_FUN_149e4e970);
  }
  return DAT_14c927330;
}



// FUNCTION 14626ffc1 FUN_14626ffc1 body=47 status=ok
// SIG undefined FUN_14626ffc1(void)

longlong FUN_14626ffc1(void)

{
  if (DAT_14c927328 == 0) {
    FUN_14086a14e(&DAT_14c927328,&PTR_FUN_149e4e8a0);
  }
  return DAT_14c927328;
}



// FUNCTION 14626fff0 FUN_14626fff0 body=49 status=ok
// SIG undefined FUN_14626fff0(void)

longlong FUN_14626fff0(void)

{
  if (DAT_14c927348 == 0) {
    FUN_14086a14e(&DAT_14c927348,&PTR_FUN_149e4ec58);
  }
  return DAT_14c927348;
}



// FUNCTION 146270021 FUN_146270021 body=49 status=ok
// SIG undefined FUN_146270021(void)

longlong FUN_146270021(void)

{
  if (DAT_14c927340 == 0) {
    FUN_14086a14e(&DAT_14c927340,&PTR_FUN_149e4eb58);
  }
  return DAT_14c927340;
}



// FUNCTION 146270052 FUN_146270052 body=49 status=ok
// SIG undefined FUN_146270052(void)

longlong FUN_146270052(void)

{
  if (DAT_14c927368 == 0) {
    FUN_14086a14e(&DAT_14c927368,&PTR_FUN_149e4efa0);
  }
  return DAT_14c927368;
}



// FUNCTION 146270083 FUN_146270083 body=47 status=ok
// SIG undefined FUN_146270083(void)

longlong FUN_146270083(void)

{
  if (DAT_14c927360 == 0) {
    FUN_14086a14e(&DAT_14c927360,&PTR_FUN_149e4eee0);
  }
  return DAT_14c927360;
}



// FUNCTION 1462700b2 FUN_1462700b2 body=47 status=ok
// SIG undefined FUN_1462700b2(void)

longlong FUN_1462700b2(void)

{
  if (DAT_14c927358 == 0) {
    FUN_14086a14e(&DAT_14c927358,&PTR_FUN_149e4ee20);
  }
  return DAT_14c927358;
}



// FUNCTION 1462700e1 FUN_1462700e1 body=47 status=ok
// SIG undefined FUN_1462700e1(void)

longlong FUN_1462700e1(void)

{
  if (DAT_14c927768 == 0) {
    FUN_14086a14e(&DAT_14c927768,&PTR_FUN_149e56988);
  }
  return DAT_14c927768;
}



// FUNCTION 146270110 FUN_146270110 body=47 status=ok
// SIG undefined FUN_146270110(void)

longlong FUN_146270110(void)

{
  if (DAT_14c927730 == 0) {
    FUN_14086a14e(&DAT_14c927730,&PTR_FUN_149e566d0);
  }
  return DAT_14c927730;
}



// FUNCTION 14627013f FUN_14627013f body=47 status=ok
// SIG undefined FUN_14627013f(void)

longlong FUN_14627013f(void)

{
  if (DAT_14c927728 == 0) {
    FUN_14086a14e(&DAT_14c927728,&PTR_FUN_149e564f8);
  }
  return DAT_14c927728;
}



// FUNCTION 14627016e FUN_14627016e body=49 status=ok
// SIG undefined FUN_14627016e(void)

longlong FUN_14627016e(void)

{
  if (DAT_14c927568 == 0) {
    FUN_14086a14e(&DAT_14c927568,&PTR_FUN_149e53898);
  }
  return DAT_14c927568;
}



// FUNCTION 14627019f FUN_14627019f body=49 status=ok
// SIG undefined FUN_14627019f(void)

longlong FUN_14627019f(void)

{
  if (DAT_14c927560 == 0) {
    FUN_14086a14e(&DAT_14c927560,&PTR_FUN_149e53788);
  }
  return DAT_14c927560;
}



// FUNCTION 1462701d0 FUN_1462701d0 body=49 status=ok
// SIG undefined FUN_1462701d0(void)

longlong FUN_1462701d0(void)

{
  if (DAT_14c927308 == 0) {
    FUN_14086a14e(&DAT_14c927308,&PTR_FUN_149e4e660);
  }
  return DAT_14c927308;
}



// FUNCTION 146270201 FUN_146270201 body=49 status=ok
// SIG undefined FUN_146270201(void)

longlong FUN_146270201(void)

{
  if (DAT_14c9273c0 == 0) {
    FUN_14086a14e(&DAT_14c9273c0,&PTR_FUN_149e4fa00);
  }
  return DAT_14c9273c0;
}



// FUNCTION 146270232 FUN_146270232 body=47 status=ok
// SIG undefined FUN_146270232(void)

longlong FUN_146270232(void)

{
  if (DAT_14c9273f0 == 0) {
    FUN_14086a14e(&DAT_14c9273f0,&PTR_FUN_149e4ff20);
  }
  return DAT_14c9273f0;
}


