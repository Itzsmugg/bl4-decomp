// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143f5de74 FUN_143f5de74 body=163 status=ok
// SIG undefined FUN_143f5de74(void)

void FUN_143f5de74(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  undefined **local_38 [3];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x10))(param_2,&local_48,"voiceChat",param_1);
  if (local_48 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_38,"service",true);
    local_38[0] = &PTR_FUN_14b503c00;
    local_20 = 0;
    (**(code **)(*local_48 + 0x18))(local_48,local_40,(Property *)local_38);
    cohtml::Property::~Property((Property *)local_38);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5df18 FUN_143f5df18 body=905 status=ok
// SIG undefined FUN_143f5df18(void)

void FUN_143f5df18(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined **local_58 [3];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x10))(param_2,&local_68,"profile",param_1);
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_58,"id",true);
    local_58[0] = &PTR_FUN_14b503d00;
    local_40 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"avatar",true);
    local_58[0] = &PTR_FUN_14b503d00;
    local_40 = 0x10;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"type",true);
    local_58[0] = &PTR_FUN_14b503d00;
    local_40 = 0x20;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"isOnline",true);
    local_58[0] = &PTR_FUN_14b503d90;
    local_40 = 0x30;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"firstService",true);
    local_58[0] = &PTR_FUN_14b503d00;
    local_40 = 0x38;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"voiceChat",true);
    local_58[0] = &PTR_FUN_14b503e20;
    local_40 = 0x48;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"gameInviteSent",true);
    local_58[0] = &PTR_FUN_14b503d90;
    local_40 = 0x58;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"lastPlayedDate",true);
    local_58[0] = &PTR_FUN_14b503d00;
    local_40 = 0x60;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"info",true);
    local_58[0] = &PTR_FUN_14b503eb0;
    local_40 = 0x70;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"shiftName",true);
    local_58[0] = &PTR_FUN_14b503d00;
    local_40 = 0x80;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"isInSameLobby",true);
    local_58[0] = &PTR_FUN_14b503d90;
    local_40 = 0x90;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"isLobbyCreated",true);
    local_58[0] = &PTR_FUN_14b503d90;
    local_40 = 0x91;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    cohtml::Property::Property((Property *)local_58,"isFriend",true);
    local_58[0] = &PTR_FUN_14b503d90;
    local_40 = 0x92;
    (**(code **)(*local_68 + 0x18))(local_68,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_68);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5e2a2 FUN_143f5e2a2 body=242 status=ok
// SIG undefined FUN_143f5e2a2(void)

void FUN_143f5e2a2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined **local_50 [3];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x10))(param_2,&local_60,"message",param_1);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_50,"title",true);
    local_50[0] = &PTR_FUN_14b503f40;
    local_38 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    cohtml::Property::Property((Property *)local_50,"desc",true);
    local_50[0] = &PTR_FUN_14b503f40;
    local_38 = 0x10;
    (**(code **)(*local_60 + 0x18))(local_60,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5e396 FUN_143f5e396 body=245 status=ok
// SIG undefined FUN_143f5e396(void)

void FUN_143f5e396(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined **local_48 [3];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x10))(param_2,&local_58,"response",param_1);
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_48,"success",true);
    local_48[0] = &PTR_FUN_14b503fd0;
    local_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
    cohtml::Property::Property((Property *)local_48,"message",true);
    local_48[0] = &PTR_FUN_14b504060;
    local_30 = 8;
    (**(code **)(*local_58 + 0x18))(local_58,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5e48c FUN_143f5e48c body=1284 status=ok
// SIG undefined FUN_143f5e48c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143f5e48c(longlong *param_1,undefined8 *param_2,void ***param_3)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  void **ppvVar8;
  uint uVar9;
  void ***pppvVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  void **ppvVar14;
  void **ppvVar15;
  undefined1 auStack_c8 [40];
  void **local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  longlong *plStack_80;
  void *local_78;
  longlong *local_70;
  void **local_68;
  void **ppvStack_60;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_3 == (void **)0x0) {
    uVar6 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
    plVar7 = (longlong *)FUN_14657d46e(uVar6);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 200))(plVar7,&local_68);
      ppvVar8 = ppvStack_60;
      if (&local_68 != param_3) {
        *param_3 = local_68;
        local_68 = (void **)0x0;
        ppvVar15 = param_3[1];
        if (ppvStack_60 != ppvVar15) {
          ppvStack_60 = (void **)0x0;
          param_3[1] = ppvVar8;
          if (ppvVar15 != (void **)0x0) {
            LOCK();
            ppvVar8 = ppvVar15 + 1;
            *(int *)ppvVar8 = *(int *)ppvVar8 + -1;
            UNLOCK();
            if (*(int *)ppvVar8 == 0) {
              (**(code **)*ppvVar15)(ppvVar15);
              LOCK();
              piVar2 = (int *)((longlong)ppvVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)((longlong)*ppvVar15 + 0x10))(ppvVar15);
              }
            }
          }
        }
      }
      ppvVar8 = ppvStack_60;
      if (ppvStack_60 != (void **)0x0) {
        LOCK();
        ppvVar15 = ppvStack_60 + 1;
        *(int *)ppvVar15 = *(int *)ppvVar15 + -1;
        UNLOCK();
        if (*(int *)ppvVar15 == 0) {
          (**(code **)*ppvStack_60)(ppvStack_60);
          LOCK();
          piVar2 = (int *)((longlong)ppvVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)((longlong)*ppvVar8 + 0x10))(ppvVar8);
          }
        }
      }
      if (*param_3 != (void **)0x0) goto LAB_143f5e4c4;
    }
    uVar11 = 0;
    goto LAB_143f5e73e;
  }
LAB_143f5e4c4:
  ppvVar8 = (void **)*param_2;
  ppvVar15 = (void **)param_2[1];
  if (ppvVar15 != (void **)0x0) {
    LOCK();
    *(int *)(ppvVar15 + 1) = *(int *)(ppvVar15 + 1) + 1;
    UNLOCK();
  }
  local_98 = (void *)0x0;
  local_90 = (int)param_1[1];
  lVar13 = (longlong)local_90;
  pppvVar10 = (void ***)*param_1;
  if (lVar13 == 0) {
    local_8c = 0;
LAB_143f5e677:
    local_88 = (void *)0x0;
    plStack_80 = (longlong *)0x0;
  }
  else {
    uVar12 = 0;
    local_a0 = ppvVar8;
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pppvVar10,lVar13 * 2);
    if (local_90 < 2) goto LAB_143f5e677;
    lVar13 = 0;
    do {
      uVar4 = *(ushort *)((longlong)local_98 + lVar13 * 2);
      uVar9 = ((uint)(0x19 < uVar4 - 0x61) * 0x20 + (uint)uVar4) - 0x20;
      uVar12 = uVar12 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar12 ^ uVar9) & 0xff) * 4);
      uVar12 = uVar12 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
      lVar13 = lVar13 + 1;
    } while (local_90 + -1 != (int)lVar13);
    iVar5 = FUN_1413dafe6(&DAT_14cb98868,uVar12,&local_98);
    lVar13 = (longlong)iVar5 * 0x28 + _DAT_14cb98868;
    pppvVar10 = param_3;
    if (lVar13 == 0 || iVar5 == -1) {
      ppvVar8 = local_a0;
      if (local_a0 == (void **)0x0) {
        uVar6 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
        plVar7 = (longlong *)FUN_14657d46e(uVar6);
        if (plVar7 == (longlong *)0x0) goto LAB_143f5e677;
        (**(code **)(*plVar7 + 0x80))(plVar7,&local_68);
        ppvVar3 = ppvStack_60;
        ppvVar8 = local_68;
        local_68 = (void **)0x0;
        ppvVar14 = ppvVar15;
        if (ppvStack_60 == ppvVar15) {
LAB_143f5e946:
          ppvVar15 = ppvStack_60;
          if (ppvStack_60 != (void **)0x0) {
            LOCK();
            ppvVar3 = ppvStack_60 + 1;
            *(int *)ppvVar3 = *(int *)ppvVar3 + -1;
            UNLOCK();
            if (*(int *)ppvVar3 == 0) {
              (**(code **)*ppvStack_60)(ppvStack_60);
              LOCK();
              piVar2 = (int *)((longlong)ppvVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)((longlong)*ppvVar15 + 0x10))(ppvVar15);
              }
            }
          }
        }
        else {
          ppvStack_60 = (void **)0x0;
          ppvVar14 = ppvVar3;
          if (ppvVar15 != (void **)0x0) {
            LOCK();
            ppvVar3 = ppvVar15 + 1;
            *(int *)ppvVar3 = *(int *)ppvVar3 + -1;
            UNLOCK();
            if (*(int *)ppvVar3 == 0) {
              (**(code **)*ppvVar15)(ppvVar15);
              LOCK();
              piVar2 = (int *)((longlong)ppvVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)((longlong)*ppvVar15 + 0x10))(ppvVar15);
              }
            }
            goto LAB_143f5e946;
          }
        }
        ppvVar15 = ppvVar14;
        if (ppvVar8 == (void **)0x0) {
          local_88 = (void *)0x0;
          plStack_80 = (longlong *)0x0;
          goto LAB_143f5e67f;
        }
      }
      (**(code **)((longlong)*ppvVar8 + 0x120))(ppvVar8,&local_88,&local_98);
      if (local_88 != (void *)0x0) {
        local_78 = local_88;
        local_70 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
          UNLOCK();
        }
        ppvStack_60 = &local_78;
        local_68 = &local_98;
        FUN_145944ea8(&DAT_14cb98868,local_4c,&local_68,0);
        plVar7 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
    }
    else {
      local_88 = *(void **)(lVar13 + 0x10);
      plStack_80 = *(longlong **)(lVar13 + 0x18);
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
    }
  }
LAB_143f5e67f:
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (ppvVar15 != (void **)0x0) {
    LOCK();
    ppvVar8 = ppvVar15 + 1;
    *(int *)ppvVar8 = *(int *)ppvVar8 + -1;
    UNLOCK();
    if (*(int *)ppvVar8 == 0) {
      (**(code **)*ppvVar15)(ppvVar15);
      LOCK();
      piVar2 = (int *)((longlong)ppvVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)((longlong)*ppvVar15 + 0x10))(ppvVar15);
      }
    }
  }
  if (local_88 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    local_68 = (void **)0x0;
    ppvStack_60 = (void **)0x0;
    (**(code **)((longlong)**param_3 + 0x68))(*param_3,local_88,&local_68);
    ppvVar8 = ppvStack_60;
    if (local_68 == (void **)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)pppvVar10 >> 8),*(undefined1 *)(local_68 + 2)) &
               0xffffffffffffff01;
    }
    if (ppvStack_60 != (void **)0x0) {
      LOCK();
      ppvVar15 = ppvStack_60 + 1;
      *(int *)ppvVar15 = *(int *)ppvVar15 + -1;
      UNLOCK();
      if (*(int *)ppvVar15 == 0) {
        (**(code **)*ppvStack_60)(ppvStack_60);
        LOCK();
        piVar2 = (int *)((longlong)ppvVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)((longlong)*ppvVar8 + 0x10))(ppvVar8);
        }
      }
    }
  }
  plVar7 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_143f5e73e:
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  ppvVar8 = param_3[1];
  if (ppvVar8 != (void **)0x0) {
    LOCK();
    ppvVar15 = ppvVar8 + 1;
    *(int *)ppvVar15 = *(int *)ppvVar15 + -1;
    UNLOCK();
    if (*(int *)ppvVar15 == 0) {
      (**(code **)*ppvVar8)(ppvVar8);
      LOCK();
      piVar2 = (int *)((longlong)ppvVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)((longlong)*ppvVar8 + 0x10))(ppvVar8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 143f5e991 FUN_143f5e991 body=261 status=ok
// SIG undefined FUN_143f5e991(void)

undefined8 FUN_143f5e991(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = "psn";
  if (DAT_14cb8e1d8 != param_2) {
    FUN_1446f470e(&local_30,&DAT_14b4367ec,1);
    if (local_30 != param_2) {
      if (DAT_14cb8e468 == param_2) {
        pcVar1 = "steam";
      }
      else {
        pcVar1 = "epic";
        if (DAT_14cb8e220 != param_2) {
          FUN_1446f470e(&local_38,L"EPIC",1);
          if (local_38 != param_2) {
            FUN_1446f470e(&local_40,&DAT_14b4367f4,1);
            if (local_40 == param_2) {
              pcVar1 = "xboxlive";
            }
            else {
              pcVar1 = "UNSUPPORTED";
              if (DAT_14cb8e210 == param_2) {
                pcVar1 = "nintendo";
              }
            }
          }
        }
      }
    }
  }
  FUN_1400b22c2(param_1,pcVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5ea97 FUN_143f5ea97 body=1767 status=ok
// SIG undefined FUN_143f5ea97(void)

longlong * FUN_143f5ea97(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  longlong local_208;
  void **local_200;
  undefined1 local_1f8;
  longlong **local_1f0;
  longlong **local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  void *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong **local_1a8;
  longlong **local_1a0;
  longlong *local_198;
  undefined1 local_190;
  longlong *local_188;
  longlong *plStack_180;
  longlong *local_178;
  longlong *plStack_170;
  longlong *local_168;
  longlong *local_160;
  void *local_158;
  int local_150;
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  uVar4 = DAT_14cb987b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar6 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar7 = (longlong *)FUN_140773fe2();
  if (plVar7 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_238);
  }
  lVar8 = (**(code **)(*plVar7 + 0x2d0))(plVar7,uVar4,uVar6);
  *param_1 = 0;
  param_1[1] = 0;
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x2b8) == 0)) goto LAB_143f5eb1b;
  uVar6 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar7 = (longlong *)FUN_14657d420(uVar6);
  (**(code **)(*plVar7 + 0x10))(plVar7,&local_148);
  FUN_143f5e991(&local_158,local_148);
  FUN_143f5f180(&local_168,uVar6);
  if (local_168 != (longlong *)0x0) {
    uVar6 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
    plVar7 = (longlong *)FUN_14657d46e(uVar6);
    local_178 = (longlong *)0x0;
    plStack_170 = (longlong *)0x0;
    local_188 = (longlong *)0x0;
    plStack_180 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      local_1e0 = plVar7;
      (**(code **)(*plVar7 + 0x80))(plVar7,&local_140);
      plVar2 = local_138;
      plVar7 = plStack_170;
      local_178 = local_140;
      local_140 = (longlong *)0x0;
      if (local_138 == plStack_170) {
LAB_143f5ecbc:
        plVar7 = local_138;
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_138 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_138)(local_138);
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
        local_138 = (longlong *)0x0;
        plStack_170 = plVar2;
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
          goto LAB_143f5ecbc;
        }
      }
      (**(code **)(*local_1e0 + 200))(local_1e0,&local_140);
      plVar2 = local_138;
      plVar7 = plStack_180;
      local_188 = local_140;
      local_140 = (longlong *)0x0;
      if (local_138 != plStack_180) {
        local_138 = (longlong *)0x0;
        plStack_180 = plVar2;
        if (plVar7 == (longlong *)0x0) goto LAB_143f5ed84;
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
      plVar7 = local_138;
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_138 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_138)(local_138);
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
LAB_143f5ed84:
    iVar5 = (int)param_2[1];
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
      FUN_148ac56bc(param_1);
    }
    _Src = local_158;
    local_1d0 = uVar4;
    local_1c8 = (void *)0x0;
    local_1c0 = local_150;
    local_1d8 = lVar8;
    if ((longlong)local_150 == 0) {
      local_1bc = 0;
    }
    else {
      FUN_1446dd670(&local_1c8,local_150,0);
      memcpy(local_1c8,_Src,(longlong)local_150 * 2);
    }
    local_1b8 = local_168;
    local_1b0 = local_160;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_160 + 1) = (int)local_160[1] + 1;
      UNLOCK();
    }
    local_1a8 = &local_178;
    local_1a0 = &local_188;
    local_198 = param_3;
    local_190 = param_4;
    if ((longlong)(int)param_2[1] != 0) {
      lVar8 = (longlong)(int)param_2[1] << 6;
      lVar10 = *param_2 + 0x38;
      do {
        local_1e0 = (longlong *)(lVar10 + -0x30);
        FUN_140b6e409(local_58,local_1d8);
        (**(code **)(*local_1b8 + 0x120))(local_1b8,&local_140,local_58);
        plVar2 = local_138;
        plVar7 = local_198;
        if (local_138 == (longlong *)0x0) {
          local_138 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_138 + 1) = (int)local_138[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_138 + 1) = (int)local_138[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_138 + 1) = (int)local_138[1] + 1;
          UNLOCK();
        }
        uVar4 = (**(code **)(*local_140 + 0x40))();
        iVar5 = FUN_140b6c796(plVar7,uVar4,&local_140);
        plVar3 = local_138;
        if (iVar5 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)iVar5 * 0x28 + *plVar7;
        }
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_138 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
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
        local_208 = lVar9 + 0x10;
        if (lVar9 == 0) {
          local_208 = 0;
        }
        local_68 = *local_1a0;
        local_60 = local_1a0[1];
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        local_78 = *local_1a8;
        local_70 = local_1a8[1];
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        local_218 = lVar10 + -0x20;
        local_1e8 = &local_68;
        local_1f0 = &local_78;
        local_1f8 = local_190;
        local_210 = lVar10;
        local_200 = &local_1c8;
        FUN_148abe9c1(&local_140,local_1d8,local_1d0,local_1e0);
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
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_148ac5928(param_1,iVar5);
        }
        FUN_148ac5730((longlong)iVar5 * 200 + *param_1,&local_140);
        FUN_148abf402(&local_140);
        lVar10 = lVar10 + 0x40;
        lVar8 = lVar8 + -0x40;
      } while (lVar8 != 0);
    }
    plVar7 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_1c8 != (void *)0x0) {
      FUN_1400020a8();
    }
    plVar7 = plStack_180;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_180 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_180)(plStack_180);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    plVar7 = plStack_170;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_170 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_170)(plStack_170);
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
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_160 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143f5eb1b:
  if ((local_48 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5f180 FUN_143f5f180 body=170 status=ok
// SIG undefined FUN_143f5f180(void)

longlong * FUN_143f5f180(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_14657d420(param_2);
  if (plVar2 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  (**(code **)(*plVar2 + 0x80))(plVar2,&local_28);
  if (local_28 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  else {
    *param_1 = local_28;
    param_1[1] = (longlong)local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143f5f22b FUN_143f5f22b body=273 status=ok
// SIG undefined FUN_143f5f22b(void)

undefined8 * FUN_143f5f22b(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  uVar1 = DAT_14cb987b8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_140773fe2();
  uVar3 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar4 = (longlong *)FUN_140773fe2();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x2d0))(plVar4,uVar1,uVar3);
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x2b8) != 0)) && (lVar2 != 0)) {
      uVar3 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
      plVar4 = (longlong *)FUN_14657d420(uVar3);
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_40);
      FUN_14657da9a(lVar2,local_50,param_2,local_40);
      FUN_140b6f107(param_1,lVar5,local_50);
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 143f5f33d FUN_143f5f33d body=94 status=ok
// SIG undefined FUN_143f5f33d(void)

void FUN_143f5f33d(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = param_2;
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf4ce(uVar1,param_1,&local_11);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5f39c FUN_143f5f39c body=58 status=ok
// SIG undefined FUN_143f5f39c(void)

void FUN_143f5f39c(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_1461bcd44(uVar1,"Load_Blocked_List_Response",param_1);
  return;
}



// FUNCTION 143f5f3d6 FUN_143f5f3d6 body=58 status=ok
// SIG undefined FUN_143f5f3d6(void)

void FUN_143f5f3d6(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_1461bcd44(uVar1,"Load_Request_List_Response",param_1);
  return;
}



// FUNCTION 143f5f410 FUN_143f5f410 body=58 status=ok
// SIG undefined FUN_143f5f410(void)

void FUN_143f5f410(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Add_Shift_Friend_Response",param_1);
  return;
}



// FUNCTION 143f5f44a FUN_143f5f44a body=58 status=ok
// SIG undefined FUN_143f5f44a(void)

void FUN_143f5f44a(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Accept_Request_Response",param_1);
  return;
}



// FUNCTION 143f5f484 FUN_143f5f484 body=58 status=ok
// SIG undefined FUN_143f5f484(void)

void FUN_143f5f484(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Decline_Request_Response",param_1);
  return;
}



// FUNCTION 143f5f4be FUN_143f5f4be body=58 status=ok
// SIG undefined FUN_143f5f4be(void)

void FUN_143f5f4be(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Cancel_Request_Response",param_1);
  return;
}



// FUNCTION 143f5f4f8 FUN_143f5f4f8 body=58 status=ok
// SIG undefined FUN_143f5f4f8(void)

void FUN_143f5f4f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Block_Player_Response",param_1);
  return;
}



// FUNCTION 143f5f532 FUN_143f5f532 body=58 status=ok
// SIG undefined FUN_143f5f532(void)

void FUN_143f5f532(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Add_Unblock_Player_Response",param_1);
  return;
}



// FUNCTION 143f5f56c FUN_143f5f56c body=58 status=ok
// SIG undefined FUN_143f5f56c(void)

void FUN_143f5f56c(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Report_Player_Response",param_1);
  return;
}



// FUNCTION 143f5f5a6 FUN_143f5f5a6 body=58 status=ok
// SIG undefined FUN_143f5f5a6(void)

void FUN_143f5f5a6(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Remove_Friend_Response",param_1);
  return;
}



// FUNCTION 143f5f5e0 FUN_143f5f5e0 body=698 status=ok
// SIG undefined FUN_143f5f5e0(void)

void FUN_143f5f5e0(undefined8 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  uVar3 = DAT_14cb98818;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14cb98810 == 0) goto LAB_143f5f60a;
  uVar5 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  uVar2 = DAT_14cb987b8;
  plVar6 = (longlong *)FUN_14657d420(uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_143f5f60a;
  (**(code **)(*plVar6 + 0x70))(plVar6,&local_40);
  if (local_40 != (longlong *)0x0) {
    FUN_143f5f180(&local_50,uVar5);
    if (local_50 != (longlong *)0x0) {
      FUN_143f67508(&local_60,param_1);
      if (1 < local_58) {
        (**(code **)(*local_50 + 0x110))(local_50,&local_70,uVar2);
        (**(code **)(*local_50 + 0x120))(local_50,&local_80,&local_60);
        local_90 = (undefined8 *)0x0;
        local_88 = 0;
        FUN_1446efa72(&local_90,0,3,0x10);
        local_88 = 3;
        *local_90 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_90[2] = lVar7;
        *local_90 = &PTR_FUN_14b5060c0;
        local_90[3] = uVar3;
        local_90[4] = &DAT_143f67506;
        (**(code **)(*local_40 + 0x48))(local_40,local_70,local_80,&local_90);
        if (local_88 == 0) {
LAB_143f5f7b0:
          if (local_90 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_90 != (undefined8 *)0x0) {
          (**(code **)*local_90)(local_90,0);
          FUN_1446efa72(&local_90,0,0,0x10);
          local_88 = 0;
          goto LAB_143f5f7b0;
        }
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_78 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar1 = (int *)((longlong)local_78 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_78 + 0x10))(local_78);
            }
          }
        }
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_68 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_68 + 0x10))(local_68);
            }
          }
        }
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
LAB_143f5f60a:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5f89b FUN_143f5f89b body=51 status=ok
// SIG undefined FUN_143f5f89b(void)

void FUN_143f5f89b(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf59e(uVar1,param_1);
  return;
}



// FUNCTION 143f5f8ce FUN_143f5f8ce body=58 status=ok
// SIG undefined FUN_143f5f8ce(void)

void FUN_143f5f8ce(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Friends_Notification_Friend_Request_Response",param_1);
  return;
}



// FUNCTION 143f5f908 FUN_143f5f908 body=58 status=ok
// SIG undefined FUN_143f5f908(void)

void FUN_143f5f908(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Notification_Game_Invite_Response",param_1);
  return;
}



// FUNCTION 143f5f942 FUN_143f5f942 body=58 status=ok
// SIG undefined FUN_143f5f942(void)

void FUN_143f5f942(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Notification_Decline_Game_Invite_Response",param_1);
  return;
}



// FUNCTION 143f5f97c FUN_143f5f97c body=58 status=ok
// SIG undefined FUN_143f5f97c(void)

void FUN_143f5f97c(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Is_Shift_Invite_Allowed_Response",param_1);
  return;
}



// FUNCTION 143f5f9b6 FUN_143f5f9b6 body=58 status=ok
// SIG undefined FUN_143f5f9b6(void)

void FUN_143f5f9b6(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Is_Platform_Invite_Allowed_Response",param_1);
  return;
}



// FUNCTION 143f5f9f0 FUN_143f5f9f0 body=58 status=ok
// SIG undefined FUN_143f5f9f0(void)

void FUN_143f5f9f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Invite_To_Game_Response",param_1);
  return;
}



// FUNCTION 143f5fa2a FUN_143f5fa2a body=58 status=ok
// SIG undefined FUN_143f5fa2a(void)

void FUN_143f5fa2a(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_148abf534(uVar1,"Player_Profile_Invite_Platform_To_Game_Response",param_1);
  return;
}



// FUNCTION 143f5fa64 FUN_143f5fa64 body=474 status=ok
// SIG undefined FUN_143f5fa64(void)

void FUN_143f5fa64(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 *local_48;
  ulonglong uStack_40;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  lVar1 = DAT_14cb98818;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((DAT_14cb98818 != 0) && (DAT_14cb987b8 == param_1)) {
    if (*(char *)(DAT_14cb98818 + 0x20) == '\x01') {
      uVar3 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
      plVar4 = (longlong *)FUN_140773fe2();
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x2d0))(plVar4,param_1,uVar3);
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x2b8) != 0)) {
          FUN_14150a9d5(&local_30,lVar5,3);
          if (local_28 == 0) {
            local_48 = (undefined8 *)0x0;
            uStack_40 = 0;
            if (DAT_14cb98810 == (longlong *)0x0) {
              uVar6 = 0;
            }
            else {
              uVar3 = (**(code **)(*DAT_14cb98810 + 0xf8))();
              FUN_1461bcd44(uVar3,"Load_Blocked_List_Response",&local_48);
              uVar6 = uStack_40 & 0xffffffff;
            }
            FUN_145da91ec(local_48,uVar6);
            if (local_48 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            local_48 = (undefined8 *)0x0;
            uStack_40 = uStack_40 & 0xffffffff00000000;
            FUN_1446efa72(&local_48,0,2,0x10);
            uStack_40 = CONCAT44(uStack_40._4_4_,2);
            *local_48 = &PTR_LAB_14b505290;
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 1;
            lVar2 = DAT_14c758608 + 1;
            if (lVar7 == 0) {
              LOCK();
              UNLOCK();
              lVar7 = DAT_14c758608 + 2;
              lVar2 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar2;
            local_48[2] = lVar7;
            *local_48 = &PTR_FUN_14b505370;
            local_58 = 0;
            FUN_14624c942(lVar1,lVar5,&local_30,&local_48);
          }
          FUN_141323308(local_30,local_28);
          if (local_30 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f5fc4f FUN_143f5fc4f body=489 status=ok
// SIG undefined FUN_143f5fc4f(void)

void FUN_143f5fc4f(int param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((DAT_14cb98818 == 0) || (DAT_14cb987b8 != param_1)) goto LAB_143f5fdfd;
  plVar2 = *(longlong **)(DAT_14cb98ab0 + 0x28);
  if (*(char *)((longlong)plVar2 + 0x172) == '\x01') {
    uVar5 = (**(code **)(*plVar2 + 0x180))(plVar2);
    FUN_143f5fe3a(&local_38,uVar5);
    lVar3 = DAT_14cb98818;
    if (local_38 != (longlong *)0x0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4392c0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b504e70;
      local_48[3] = lVar3;
      local_48[4] = FUN_143f5fee2;
      FUN_140056680(local_58,L"default");
      (**(code **)(*local_38 + 0xe8))(local_38,param_1,local_58,&local_48);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) {
        if (local_48 == (undefined8 *)0x0) goto LAB_143f5fdba;
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_143f5fdba:
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (local_38 == (longlong *)0x0) goto LAB_143f5fdfd;
  }
  else {
    FUN_143f6056c();
    FUN_140b6c1c2(0,0);
  }
  FUN_143f5fa64(param_1);
LAB_143f5fdfd:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f5fe3a FUN_143f5fe3a body=167 status=ok
// SIG undefined FUN_143f5fe3a(void)

longlong * FUN_143f5fe3a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_14657d420(param_2);
  if (plVar2 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_28);
  if (local_28 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  else {
    *param_1 = local_28;
    param_1[1] = (longlong)local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143f5fee2 FUN_143f5fee2 body=1673 status=ok
// SIG undefined FUN_143f5fee2(void)

/* WARNING: Removing unreachable block (ram,0x000143f6009f) */

void FUN_143f5fee2(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  int local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  ulonglong uStack_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 *local_88;
  int local_80;
  undefined8 *local_78;
  undefined4 local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar8 = (longlong *)FUN_140773fe2();
  if ((plVar8 == (longlong *)0x0) ||
     (lVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8,param_2,uVar7), lVar9 == 0)) goto LAB_143f602d0;
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  FUN_143f5fe3a(&local_a8,uVar7);
  if (local_a8 != (longlong *)0x0) {
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_140056680(&local_98,L"default");
    cVar5 = (**(code **)(*local_a8 + 0x1c8))(local_a8,param_2,&local_98,&local_b8);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    iVar12 = (int)uStack_b0;
    if (cVar5 == '\0') {
LAB_143f6010f:
      puVar14 = local_b8;
      local_e8 = (longlong *)0x0;
      local_e0 = CONCAT44(local_e0._4_4_,iVar12);
      if (iVar12 == 0) goto LAB_143f6015d;
      local_f0 = param_1;
      FUN_140b6f604(&local_e8,iVar12,0);
      FUN_140b6ce2b(local_e8,puVar14,iVar12);
    }
    else {
      if ((int)uStack_b0 != 0) {
        puVar13 = local_b8 + (longlong)(int)uStack_b0 * 2;
        puVar14 = local_b8;
        local_100 = uVar7;
        local_f8 = lVar9;
        do {
          plVar8 = (longlong *)*puVar14;
          plVar3 = (longlong *)puVar14[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar8 + 8))(plVar8,&local_f0);
          (**(code **)(*local_f0 + 0x30))(local_f0,&local_98);
          uVar4 = uStack_c0;
          lVar9 = (longlong)(int)uStack_c0;
          uVar6 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
          if (uStack_c0._4_4_ < uVar6) {
            FUN_1447a1bd6(&local_c8,uVar4 & 0xffffffff);
          }
          plVar8 = local_e8;
          lVar9 = lVar9 * 0x10;
          *(undefined8 *)(local_c8 + lVar9) = 0;
          *(longlong *)(local_c8 + lVar9) = local_98;
          *(undefined4 *)(local_c8 + 8 + lVar9) = (undefined4)local_90;
          *(undefined4 *)(local_c8 + 0xc + lVar9) = local_90._4_4_;
          local_90 = 0;
          local_98 = 0;
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_e8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar3 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
          puVar14 = puVar14 + 2;
        } while (puVar14 != puVar13);
        uVar7 = local_100;
        lVar9 = local_f8;
        iVar12 = (int)uStack_b0;
        goto LAB_143f6010f;
      }
      local_e0 = 0;
LAB_143f6015d:
      local_e8 = (longlong *)0x0;
      local_e0 = local_e0 & 0xffffffff;
      local_f0 = param_1;
    }
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    FUN_1446efa72(&local_d8,0,3,0x10);
    local_d0 = 3;
    *local_d8 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_d8[2] = lVar11;
    *local_d8 = &PTR_FUN_14b506440;
    local_d8[3] = local_f0;
    local_d8[4] = 0;
    local_d8[4] = local_e8;
    local_e8 = (longlong *)0x0;
    *(undefined4 *)(local_d8 + 5) = (undefined4)local_e0;
    *(undefined4 *)((longlong)local_d8 + 0x2c) = local_e0._4_4_;
    local_e0 = 0;
    if (*(longlong *)(lVar9 + 0x2b8) != 0) {
      lVar10 = FUN_140773fe2();
      plVar8 = (longlong *)FUN_14657d420(uVar7);
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_50);
      if (lVar10 != 0) {
        local_68 = 0;
        uStack_60 = 0;
        FUN_148a62464(lVar10,&local_c8,&local_68,local_50);
        uVar4 = uStack_60;
        lVar10 = local_68;
        local_98 = 0;
        local_90 = CONCAT44(local_90._4_4_,(int)uStack_60);
        if ((int)uStack_60 == 0) {
          local_90 = uStack_60 & 0xffffffff;
        }
        else {
          FUN_140b856de(&local_98,uStack_60 & 0xffffffff,0);
          FUN_140b8566a(local_98,lVar10,uVar4 & 0xffffffff);
        }
        local_88 = (undefined8 *)0x0;
        local_80 = 0;
        FUN_14114e6dc(&local_88,&local_d8);
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        FUN_1446efa72(&local_78,0,4,0x10);
        local_70 = 4;
        *local_78 = &PTR_LAB_149e001f0;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_78[2] = lVar11;
        *local_78 = &PTR_FUN_14b506360;
        local_78[3] = local_98;
        local_98 = 0;
        *(undefined4 *)(local_78 + 4) = (undefined4)local_90;
        *(undefined4 *)((longlong)local_78 + 0x24) = local_90._4_4_;
        local_90 = 0;
        local_78[5] = local_88;
        local_88 = (undefined8 *)0x0;
        *(int *)(local_78 + 6) = local_80;
        local_80 = 0;
        FUN_14622bf56(lVar9,&local_68,&local_78);
        if (local_80 == 0) {
LAB_143f604ca:
          if (local_88 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_88 != (undefined8 *)0x0) {
          (**(code **)*local_88)(local_88,0);
          FUN_1446efa72(&local_88,0,0,0x10);
          local_80 = 0;
          goto LAB_143f604ca;
        }
        FUN_1447a1747(local_98,local_90 & 0xffffffff);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_d0 == 0) {
LAB_143f60241:
      if (local_d8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_d8 != (undefined8 *)0x0) {
      (**(code **)*local_d8)(local_d8,0);
      FUN_1446efa72(&local_d8,0,0,0x10);
      local_d0 = 0;
      goto LAB_143f60241;
    }
    FUN_140b6c1c2(local_e8,local_e0 & 0xffffffff);
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_140b6c1c2(local_b8,uStack_b0 & 0xffffffff);
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_a0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
LAB_143f602d0:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f6056c FUN_143f6056c body=1023 status=ok
// SIG undefined FUN_143f6056c(void)

void FUN_143f6056c(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  uVar3 = DAT_14cb987b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x20) != '\x01') goto LAB_143f605e5;
  uVar5 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar6 = (longlong *)FUN_140773fe2();
  if (((plVar6 == (longlong *)0x0) ||
      (lVar7 = (**(code **)(*plVar6 + 0x2d0))(plVar6,uVar3,uVar5), lVar7 == 0)) ||
     (*(longlong *)(lVar7 + 0x2b8) == 0)) goto LAB_143f605e5;
  FUN_14150a9d5(&local_58,lVar7,2);
  local_a0 = param_1;
  if (DAT_14cb98960 == DAT_14cb9898c) {
LAB_143f60661:
    if (DAT_00000004 == '\0') {
LAB_143f6066f:
      lVar13 = 0;
LAB_143f60671:
      *(undefined1 *)(lVar13 + 4) = 1;
      if ((longlong)local_50 != 0) {
        lVar13 = (longlong)local_50 << 6;
        puVar14 = (undefined8 *)(local_58 + 8);
        do {
          local_5c = FUN_140b71325(puVar14);
          local_88 = (void *)0x0;
          uVar2 = *(uint *)(puVar14 + 1);
          _Src = (void *)*puVar14;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
          if ((longlong)(int)uVar2 == 0) {
            uStack_80 = (ulonglong)uVar2;
          }
          else {
            FUN_1446dd670(&local_88,uVar2,0);
            memcpy(local_88,_Src,(longlong)(int)uVar2 * 2);
          }
          local_70 = (undefined8 *)0x0;
          local_68 = 0;
          FUN_1446efa72(&local_70,0,3,0x10);
          local_68 = 3;
          *local_70 = &PTR_LAB_14b507400;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar8 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar8 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar8;
          local_70[2] = lVar10;
          *local_70 = &PTR_FUN_14b5051b0;
          local_70[3] = local_88;
          local_88 = (void *)0x0;
          *(undefined4 *)(local_70 + 4) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)local_70 + 0x24) = uStack_80._4_4_;
          uStack_80 = 0;
          FUN_143ef0bf7(lVar7);
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          puVar14 = puVar14 + 8;
          lVar13 = lVar13 + -0x40;
        } while (lVar13 != 0);
      }
    }
  }
  else {
    puVar9 = &DAT_14cb98990;
    if (DAT_14cb98998 != (undefined *)0x0) {
      puVar9 = DAT_14cb98998;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)(DAT_14cb989a0 - 1U & uVar3) * 4);
    iVar11 = iVar4;
    if (iVar4 == -1) goto LAB_143f60661;
    do {
      lVar13 = DAT_14cb98958 + (longlong)iVar11 * 0x10;
      if (*(uint *)(DAT_14cb98958 + (longlong)iVar11 * 0x10) == uVar3) goto LAB_143f607cf;
      iVar11 = *(int *)(lVar13 + 8);
    } while (*(int *)(lVar13 + 8) != -1);
    lVar13 = 0;
LAB_143f607cf:
    if (*(char *)(lVar13 + 4) == '\0') {
      do {
        lVar13 = DAT_14cb98958 + (longlong)iVar4 * 0x10;
        if (*(uint *)(DAT_14cb98958 + (longlong)iVar4 * 0x10) == uVar3) goto LAB_143f60671;
        iVar4 = *(int *)(lVar13 + 8);
      } while (iVar4 != -1);
      goto LAB_143f6066f;
    }
  }
  lVar13 = local_a0;
  if (*(int *)(local_a0 + 0x30) != *(int *)(local_a0 + 0x5c)) {
    lVar8 = local_a0 + 0x60;
    if (*(longlong *)(local_a0 + 0x68) != 0) {
      lVar8 = *(longlong *)(local_a0 + 0x68);
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)(local_a0 + 0x70) - 1U & uVar3) * 4);
    if (iVar4 != -1) {
      do {
        lVar8 = *(longlong *)(local_a0 + 0x28) + (longlong)iVar4 * 0x10;
        if (*(uint *)(*(longlong *)(local_a0 + 0x28) + (longlong)iVar4 * 0x10) == uVar3)
        goto LAB_143f60821;
        iVar4 = *(int *)(lVar8 + 8);
      } while (iVar4 != -1);
    }
  }
  lVar8 = 0;
LAB_143f60821:
  uVar1 = *(undefined1 *)(lVar8 + 4);
  if (local_50 == 0) {
    local_88 = (void *)0x0;
    uStack_80 = 0;
    local_5c = CONCAT31(local_5c._1_3_,uVar1);
    if (DAT_14cb98810 == (longlong *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar5 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf4ce(uVar5,&local_88,&local_5c);
      uVar12 = uStack_80 & 0xffffffff;
    }
    FUN_145da91ec(local_88,uVar12);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,2,0x10);
    local_90 = 2;
    *local_98 = &PTR_LAB_14b505290;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_98[2] = lVar10;
    *local_98 = &PTR_FUN_14b505220;
    *(undefined1 *)(local_98 + 3) = uVar1;
    local_a8 = 0;
    FUN_14624c942(lVar13,lVar7,&local_58,&local_98);
  }
  FUN_141323308(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_143f605e5:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f6096c FUN_143f6096c body=513 status=ok
// SIG undefined FUN_143f6096c(void)

undefined8 FUN_143f6096c(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  uVar2 = DAT_14cb987b8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar4 = (longlong *)FUN_140773fe2();
  if (((plVar4 == (longlong *)0x0) ||
      (lVar5 = (**(code **)(*plVar4 + 0x2d0))(plVar4,uVar2,uVar3), lVar5 == 0)) ||
     (*(longlong *)(lVar5 + 0x2b8) == 0)) {
    FUN_1400b22c2(param_1,&DAT_149e02088);
  }
  else {
    FUN_14150a9d5(&local_48,lVar5,4);
    local_58 = (void *)0x0;
    local_50 = (int)param_2[1];
    lVar5 = (longlong)local_50;
    _Src = (void *)*param_2;
    if (lVar5 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar5 * 2);
    }
    bVar1 = 1;
    lVar5 = local_48;
    if ((longlong)local_40 != 0) {
      lVar5 = (longlong)local_40 * 0x40 + local_48;
      lVar7 = local_48;
LAB_143f60a9b:
      if (*(int *)(lVar7 + 0x10) != local_50) {
        if (*(int *)(lVar7 + 0x10) + local_50 == 1) goto LAB_143f60b0a;
        goto LAB_143f60afc;
      }
      if (1 < local_50) {
        lVar10 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar7 + 8) + lVar10);
          uVar9 = (ulonglong)uVar8;
          uVar11 = *(ushort *)((longlong)local_58 + lVar10);
          if (uVar8 == uVar11) {
            if (uVar8 == 0) break;
          }
          else {
            if (0x7f < (uVar11 | uVar8)) goto LAB_143f60ae9;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar12 = (ulonglong)uVar11;
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar12]) goto LAB_143f60ae9;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      goto LAB_143f60b0a;
    }
LAB_143f60b0c:
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    puVar6 = &DAT_149e02088;
    if ((!(bool)(bVar1 | lVar5 == 0)) && ((ulonglong)*(byte *)(lVar5 + 0x38) < 4)) {
      puVar6 = &DAT_14b507498 + *(int *)(&DAT_14b507498 + (ulonglong)*(byte *)(lVar5 + 0x38) * 4);
    }
    FUN_1400b22c2(param_1,puVar6);
    FUN_141323308(local_48,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_143f60ae9:
  if (uVar8 == uVar11) {
LAB_143f60b0a:
    bVar1 = 0;
    lVar5 = lVar7;
    goto LAB_143f60b0c;
  }
LAB_143f60afc:
  lVar7 = lVar7 + 0x40;
  if (lVar7 == lVar5) goto LAB_143f60b0c;
  goto LAB_143f60a9b;
}



// FUNCTION 143f60b98 FUN_143f60b98 body=2321 status=ok
// SIG undefined FUN_143f60b98(void)

/* WARNING: Removing unreachable block (ram,0x000143f610fe) */

void FUN_143f60b98(longlong param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ushort uVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  uint local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  undefined4 *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined4 *local_b8;
  int local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar8 = (longlong *)FUN_140773fe2();
  if (((plVar8 != (longlong *)0x0) &&
      (lVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8,param_2,uVar7), lVar9 != 0)) &&
     (*(longlong *)(lVar9 + 0x2b8) != 0)) {
    FUN_14150a9d5(&local_b8,lVar9,1);
    if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
      lVar14 = param_1 + 0x1f0;
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        lVar14 = *(longlong *)(param_1 + 0x1f8);
      }
      iVar12 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x200) - 1U & param_2) * 4);
      if (iVar12 != -1) {
        do {
          lVar14 = *(longlong *)(param_1 + 0x1b8) + (longlong)iVar12 * 0x60;
          if (*(uint *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar12 * 0x60) == param_2)
          goto LAB_143f60cb0;
          iVar12 = *(int *)(lVar14 + 0x58);
        } while (iVar12 != -1);
      }
    }
    lVar14 = 0;
LAB_143f60cb0:
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_100 = param_2;
    local_e8 = lVar9;
    local_e0 = param_1;
    FUN_1410b2022(&local_98,lVar14 + 8);
    local_f0 = local_b8;
    puVar16 = local_b8;
    if ((longlong)local_b0 != 0) {
      puVar23 = local_b8 + (longlong)local_b0 * 0x10;
      puVar21 = local_b8;
LAB_143f60d1a:
      local_f4 = (int)uStack_90;
      local_f8 = local_64;
      puVar13 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar13 = local_60;
      }
      local_fc = local_50 - 1;
      puVar19 = puVar21;
LAB_143f60d5f:
      iVar12 = puVar19[4];
      uVar6 = 0;
      iVar5 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar5 = 0;
      }
      if (0 < iVar5) {
        puVar18 = &DAT_149dfb77a;
        if (iVar12 != 0) {
          puVar18 = *(undefined2 **)(puVar19 + 2);
        }
        lVar9 = 0;
        uVar25 = 0;
        do {
          uVar6 = ((uint)(ushort)puVar18[lVar9] +
                  (uint)(0x19 < (ushort)puVar18[lVar9] - 0x61) * 0x20) - 0x20;
          uVar11 = (uint)(uVar25 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar25 ^ uVar6) & 0xff) * 4);
          uVar6 = uVar11 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
          uVar25 = (ulonglong)uVar6;
          lVar9 = lVar9 + 1;
        } while (iVar5 != (int)lVar9);
      }
      puVar16 = puVar21;
      puVar24 = puVar23;
      if ((int)uStack_90 != local_64) {
        iVar5 = *(int *)(puVar13 + (ulonglong)(uVar6 & local_fc) * 4);
LAB_143f60de0:
        puVar16 = puVar19;
        if (iVar5 == -1) goto LAB_143f60e70;
        lVar9 = (longlong)iVar5;
        iVar5 = *(int *)(local_98 + 8 + lVar9 * 0x18);
        if (iVar5 == iVar12) {
          if (1 < iVar12) {
            lVar14 = 0;
            do {
              uVar15 = *(ushort *)(*(longlong *)(local_98 + lVar9 * 0x18) + lVar14);
              uVar25 = (ulonglong)uVar15;
              uVar4 = *(ushort *)(*(longlong *)(puVar19 + 2) + lVar14);
              if (uVar15 == uVar4) {
                if (uVar15 == 0) break;
              }
              else {
                if (0x7f < (uVar4 | uVar15)) goto LAB_143f60e55;
                uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
                uVar10 = (ulonglong)uVar4;
                uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                if ((&DAT_149e05da0)[uVar25] != (&DAT_149e05da0)[uVar10]) goto LAB_143f60e55;
              }
              lVar14 = lVar14 + 2;
            } while( true );
          }
        }
        else if (iVar5 + iVar12 != 1) goto LAB_143f60e01;
        goto LAB_143f60e5b;
      }
LAB_143f60e70:
      do {
        iVar12 = puVar24[-0xc];
        uVar6 = 0;
        iVar5 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar5 = 0;
        }
        if (0 < iVar5) {
          puVar18 = &DAT_149dfb77a;
          if (iVar12 != 0) {
            puVar18 = *(undefined2 **)(puVar24 + -0xe);
          }
          lVar9 = 0;
          uVar25 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar18[lVar9] +
                    (uint)(0x19 < (ushort)puVar18[lVar9] - 0x61) * 0x20) - 0x20;
            uVar11 = (uint)(uVar25 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar25 ^ uVar6) & 0xff) * 4);
            uVar6 = uVar11 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
            uVar25 = (ulonglong)uVar6;
            lVar9 = lVar9 + 1;
          } while (iVar5 != (int)lVar9);
        }
        puVar23 = puVar24 + -0x10;
        if ((int)uStack_90 != local_64) {
          iVar5 = *(int *)(puVar13 + (ulonglong)(uVar6 & local_fc) * 4);
LAB_143f60ef8:
          if (iVar5 != -1) {
            lVar9 = (longlong)iVar5;
            iVar5 = *(int *)(local_98 + 8 + lVar9 * 0x18);
            if (iVar5 == iVar12) {
              if (1 < iVar12) {
                lVar14 = 0;
                do {
                  uVar15 = *(ushort *)(*(longlong *)(local_98 + lVar9 * 0x18) + lVar14);
                  uVar4 = *(ushort *)(*(longlong *)(puVar24 + -0xe) + lVar14);
                  if (uVar15 == uVar4) {
                    if (uVar15 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar4 | uVar15)) {
                      iVar5 = (uint)uVar15 - (uint)uVar4;
                      goto LAB_143f60f78;
                    }
                    if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[(uint)uVar4])
                    goto code_r0x000143f60f76;
                  }
                  lVar14 = lVar14 + 2;
                } while( true );
              }
              goto LAB_143f60f8e;
            }
            if (iVar5 + iVar12 == 1) goto LAB_143f60f8e;
            goto LAB_143f60f19;
          }
        }
        puVar24 = puVar23;
      } while (puVar16 != puVar23);
    }
LAB_143f60fab:
    uVar25 = (longlong)puVar16 - (longlong)local_f0;
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_98);
    FUN_148abf606(&local_b8,uVar25 >> 6 & 0xffffffff);
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    if (local_b0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_b0);
    }
    if (local_b0 != 0) {
      FUN_1408be2c4(&local_c8);
      puVar16 = local_b8;
      lVar9 = (longlong)local_b0;
      if (lVar9 != 0) {
        lVar14 = 0;
        uVar25 = uStack_a0;
        do {
          uStack_a0 = uVar25;
          local_a8 = (void *)0x0;
          uVar6 = *(uint *)((longlong)puVar16 + lVar14 + 0x10);
          pvVar1 = *(void **)((longlong)puVar16 + lVar14 + 8);
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
          if ((longlong)(int)uVar6 == 0) {
            uStack_a0 = (ulonglong)uVar6;
          }
          else {
            FUN_1446dd670(&local_a8,uVar6,0);
            memcpy(local_a8,pvVar1,(longlong)(int)uVar6 * 2);
          }
          uVar25 = uStack_c0;
          lVar20 = (longlong)(int)uStack_c0;
          uVar6 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
          if (uStack_c0._4_4_ < uVar6) {
            FUN_1447a1bd6(&local_c8,uVar25 & 0xffffffff);
          }
          local_c8[lVar20 * 2] = 0;
          local_c8[lVar20 * 2] = (longlong)local_a8;
          *(int *)(local_c8 + lVar20 * 2 + 1) = (int)uStack_a0;
          *(uint *)((longlong)local_c8 + lVar20 * 0x10 + 0xc) = uStack_a0._4_4_;
          uStack_a0 = 0;
          uVar25 = uStack_a0;
          uStack_a0 = 0;
          local_a8 = (void *)0x0;
          lVar14 = lVar14 + 0x40;
        } while (lVar9 * 0x40 != lVar14);
      }
    }
    if (((*(int *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x150) != 0) &&
        (plVar8 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x148),
        plVar8 != (longlong *)0x0)) && (cVar3 = (**(code **)(*plVar8 + 0x30))(), cVar3 != '\0')) {
      if (*(int *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x150) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x148);
      }
      (**(code **)(*plVar8 + 0x58))(plVar8,&local_a8,local_100,&local_c8);
      FUN_1410e5bda(&local_c8,&local_a8);
      FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      if ((longlong)local_b0 != 0) {
        puVar23 = local_b8 + (longlong)local_b0 * 0x10;
        puVar16 = local_b8;
        do {
          uVar25 = uStack_a0;
          if ((longlong)(int)uStack_c0 != 0) {
            iVar12 = puVar16[4];
            plVar8 = local_c8;
LAB_143f612e8:
            if ((int)plVar8[1] == iVar12) {
              if (1 < iVar12) {
                lVar9 = 0;
                do {
                  uVar15 = *(ushort *)(*plVar8 + lVar9);
                  uVar10 = (ulonglong)uVar15;
                  uVar4 = *(ushort *)(*(longlong *)(puVar16 + 2) + lVar9);
                  if (uVar15 == uVar4) {
                    if (uVar15 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar4 | uVar15)) goto LAB_143f61350;
                    uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                    uVar17 = (ulonglong)uVar4;
                    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                    if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar17]) goto LAB_143f61350;
                  }
                  lVar9 = lVar9 + 2;
                } while( true );
              }
              goto LAB_143f61358;
            }
            if ((int)plVar8[1] + iVar12 == 1) goto LAB_143f61358;
            goto LAB_143f612fa;
          }
LAB_143f612cb:
          puVar16 = puVar16 + 0x10;
        } while (puVar16 != puVar23);
      }
      FUN_146589bbc(&local_b8,&local_a8);
      FUN_141323308(local_a8,uStack_a0 & 0xffffffff);
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    FUN_1446efa72(&local_d8,0,2,0x10);
    local_d0 = 2;
    *local_d8 = &PTR_LAB_14b505290;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_d8[2] = lVar14;
    *local_d8 = &PTR_FUN_14b505db0;
    local_108 = 0;
    FUN_14624c942(local_e0,local_e8,&local_b8,&local_d8);
    FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
    if (local_c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_141323308(local_b8,local_b0);
    if (local_b8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143f60e55:
  if (uVar15 == uVar4) goto LAB_143f60e5b;
LAB_143f60e01:
  iVar5 = *(int *)(local_98 + 0x10 + lVar9 * 0x18);
  goto LAB_143f60de0;
LAB_143f60e5b:
  puVar19 = puVar19 + 0x10;
  puVar16 = puVar23;
  if (puVar19 == puVar23) goto LAB_143f60fab;
  goto LAB_143f60d5f;
code_r0x000143f60f76:
  iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar15] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_143f60f78:
  if (iVar5 == 0) {
LAB_143f60f8e:
    FUN_148ac6af6(puVar16,puVar23);
    puVar21 = puVar16 + 0x10;
    puVar16 = puVar23;
    if (puVar21 == puVar23) goto LAB_143f60fab;
    goto LAB_143f60d1a;
  }
LAB_143f60f19:
  iVar5 = *(int *)(local_98 + 0x10 + lVar9 * 0x18);
  goto LAB_143f60ef8;
LAB_143f61350:
  if (uVar15 == uVar4) {
LAB_143f61358:
    lVar9 = (longlong)(int)uStack_a0;
    uVar6 = (int)uStack_a0 + 1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
    if (uStack_a0._4_4_ < uVar6) {
      FUN_145c69d66(&local_a8,uVar25 & 0xffffffff);
    }
    pvVar2 = local_a8;
    lVar9 = lVar9 * 0x40;
    *(undefined4 *)((longlong)local_a8 + lVar9) = *puVar16;
    *(undefined8 *)((longlong)local_a8 + lVar9 + 8) = 0;
    iVar12 = puVar16[4];
    pvVar1 = *(void **)(puVar16 + 2);
    *(int *)((longlong)local_a8 + lVar9 + 0x10) = iVar12;
    if ((longlong)iVar12 == 0) {
      *(undefined4 *)((longlong)local_a8 + lVar9 + 0x14) = 0;
    }
    else {
      puVar22 = (undefined8 *)((longlong)local_a8 + lVar9 + 8);
      FUN_1446dd670(puVar22,iVar12,0);
      memcpy((void *)*puVar22,pvVar1,(longlong)iVar12 * 2);
    }
    *(undefined8 *)((longlong)pvVar2 + lVar9 + 0x18) = 0;
    iVar12 = puVar16[8];
    pvVar1 = *(void **)(puVar16 + 6);
    *(int *)((longlong)pvVar2 + lVar9 + 0x20) = iVar12;
    if ((longlong)iVar12 == 0) {
      *(undefined4 *)((longlong)pvVar2 + lVar9 + 0x24) = 0;
    }
    else {
      puVar22 = (undefined8 *)((longlong)pvVar2 + lVar9 + 0x18);
      FUN_1446dd670(puVar22,iVar12,0);
      memcpy((void *)*puVar22,pvVar1,(longlong)iVar12 * 2);
    }
    *(undefined8 *)((longlong)pvVar2 + lVar9 + 0x28) = 0;
    iVar12 = puVar16[0xc];
    pvVar1 = *(void **)(puVar16 + 10);
    *(int *)((longlong)pvVar2 + lVar9 + 0x30) = iVar12;
    if ((longlong)iVar12 == 0) {
      *(undefined4 *)((longlong)pvVar2 + lVar9 + 0x34) = 0;
    }
    else {
      puVar22 = (undefined8 *)((longlong)pvVar2 + lVar9 + 0x28);
      FUN_1446dd670(puVar22,iVar12,0);
      memcpy((void *)*puVar22,pvVar1,(longlong)iVar12 * 2);
    }
    *(undefined2 *)((longlong)pvVar2 + lVar9 + 0x38) = *(undefined2 *)(puVar16 + 0xe);
    goto LAB_143f612cb;
  }
LAB_143f612fa:
  plVar8 = plVar8 + 2;
  if (plVar8 == local_c8 + (longlong)(int)uStack_c0 * 2) goto LAB_143f612cb;
  goto LAB_143f612e8;
}



// FUNCTION 143f614aa FUN_143f614aa body=1802 status=ok
// SIG undefined FUN_143f614aa(void)

void FUN_143f614aa(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  wchar_t **ppwVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined1 auStack_128 [40];
  ulonglong local_100;
  wchar_t *local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  void *pvStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  longlong local_b8 [2];
  undefined8 *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  ulonglong uStack_90;
  undefined8 local_80;
  undefined1 local_78 [32];
  wchar_t *local_58;
  void *pvStack_50;
  ulonglong local_48;
  
  uVar6 = DAT_14cb98818;
  uVar5 = DAT_14cb987b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = FUN_140773fe2();
  uVar9 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar10 = (longlong *)FUN_140773fe2();
  if (plVar10 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*plVar10 + 0x2d0))(plVar10,uVar5,uVar9);
  }
  FUN_1401e7e86(local_78,param_1);
  uVar9 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar10 = (longlong *)FUN_14657d420(uVar9);
  (**(code **)(*plVar10 + 0x10))(plVar10,&local_80);
  if (((lVar11 == 0) || (*(longlong *)(lVar11 + 0x2b8) == 0)) || (lVar8 == 0)) {
    FUN_1400b22c2(&local_f8,&DAT_149e02088);
    FUN_1400b22c2(&local_e8,&DAT_149e02088);
    local_100 = local_100 & 0xffffffffffffff00;
    local_58 = L"Error_Send_Friend_Request_Title";
    pvStack_50._0_4_ = 0x1f;
    FUN_1446e940c(&local_a8,&local_58);
    local_58 = L"ShiftUI";
    pvStack_50._0_4_ = 7;
    FUN_1446e940c(local_b8,&local_58);
    local_58 = L"Friend Request Not Sent";
    pvStack_50 = (void *)CONCAT44(pvStack_50._4_4_,0x17);
    FUN_140208c1e(&local_98,local_b8,&local_a8,&local_58);
    plVar10 = local_98;
    if (*(code **)(*local_98 + 0x50) != FUN_144828418) {
      plVar10 = (longlong *)(**(code **)(*local_98 + 0x50))();
    }
    FUN_1447a1fc0(plVar10);
    pcVar3 = *(code **)(*local_98 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      ppwVar12 = (wchar_t **)(local_98 + 3);
      if (local_98[5] != 0) {
        ppwVar12 = (wchar_t **)(local_98[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      ppwVar12 = (wchar_t **)(local_98 + 2);
    }
    else {
      ppwVar12 = (wchar_t **)(*pcVar3)(local_98);
    }
    if (&local_f8 != ppwVar12) {
      uVar1 = *(uint *)(ppwVar12 + 1);
      pwVar13 = *ppwVar12;
      local_f0 = CONCAT44(local_f0._4_4_,uVar1);
      if (uVar1 == 0 && local_f0._4_4_ == 0) {
        local_f0 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_f8,uVar1);
        if (uVar1 != 0) {
          memcpy(local_f8,pwVar13,(longlong)(int)uVar1 * 2);
        }
      }
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    FUN_14657de87(&local_98,param_1);
    FUN_1400b22c2(local_b8,&DAT_149dfd136);
    local_58 = L"Error_Send_Friend_Request_Desc";
    pvStack_50._0_4_ = 0x1e;
    FUN_1446e940c(local_cc,&local_58);
    local_58 = L"ShiftUI";
    pvStack_50._0_4_ = 7;
    FUN_1446e940c(local_d0,&local_58);
    local_58 = L"Could not deliver your SHiFT Friend Request to";
    pvStack_50 = (void *)CONCAT44(pvStack_50._4_4_,0x2e);
    FUN_140208c1e(local_c8,local_d0,local_cc,&local_58);
    plVar10 = local_c8[0];
    if (*(code **)(*local_c8[0] + 0x50) != FUN_144828418) {
      plVar10 = (longlong *)(**(code **)(*local_c8[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar10);
    pcVar3 = *(code **)(*local_c8[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar10 = local_c8[0] + 3;
      if (local_c8[0][5] != 0) {
        plVar10 = (longlong *)(local_c8[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar10 = local_c8[0] + 2;
    }
    else {
      plVar10 = (longlong *)(*pcVar3)(local_c8[0]);
    }
    FUN_1407ec8fc(&local_a8,plVar10,local_b8);
    FUN_1401c7f3e(&local_58,&local_a8,&local_98);
    if (local_e8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_e8 = local_58;
    pvStack_e0 = pvStack_50;
    local_58 = (wchar_t *)0x0;
    pvStack_50 = (void *)0x0;
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14cb98810 != (longlong *)0x0) {
      uVar9 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf534(uVar9,"Player_Profile_Add_Shift_Friend_Response",&local_100);
    }
    pwVar13 = local_f8;
    if (local_e8 != (wchar_t *)0x0) {
      FUN_1400020a8();
      pwVar13 = local_f8;
    }
  }
  else {
    local_58 = (wchar_t *)0x0;
    pvStack_50 = (void *)0x1;
    FUN_1447a1bd6(&local_58,0);
    pwVar13 = local_58;
    local_58[0] = L'\0';
    local_58[1] = L'\0';
    local_58[2] = L'\0';
    local_58[3] = L'\0';
    iVar2 = (int)param_1[1];
    pvVar4 = (void *)*param_1;
    *(int *)(local_58 + 4) = iVar2;
    if ((longlong)iVar2 == 0) {
      local_58[6] = L'\0';
      local_58[7] = L'\0';
    }
    else {
      FUN_1446dd670(local_58,iVar2,0);
      memcpy(*(void **)pwVar13,pvVar4,(longlong)iVar2 * 2);
    }
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    FUN_148a62464(lVar8,&local_58,&local_98,local_80);
    uVar7 = uStack_90;
    plVar10 = local_98;
    local_100 = uVar6;
    local_f8 = (wchar_t *)0x0;
    local_f0 = CONCAT44(local_f0._4_4_,(int)uStack_90);
    if ((int)uStack_90 == 0) {
      local_f0 = uStack_90 & 0xffffffff;
    }
    else {
      FUN_140b856de(&local_f8,uStack_90 & 0xffffffff,0);
      FUN_140b8566a(local_f8,plVar10,uVar7 & 0xffffffff);
    }
    local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,uVar5);
    pvStack_e0 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 1);
    pvVar4 = (void *)*param_1;
    local_d8 = CONCAT44(local_d8._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      local_d8 = (ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&pvStack_e0,uVar1,0);
      memcpy(pvStack_e0,pvVar4,(longlong)(int)uVar1 * 2);
    }
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,5,0x10);
    local_a0 = 5;
    *local_a8 = &PTR_LAB_149e001f0;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_a8[2] = lVar14;
    *local_a8 = &PTR_FUN_14b505530;
    local_a8[3] = local_100;
    local_a8[4] = local_f8;
    local_f8 = (wchar_t *)0x0;
    *(undefined4 *)(local_a8 + 5) = (undefined4)local_f0;
    *(int *)((longlong)local_a8 + 0x2c) = local_f0._4_4_;
    local_f0 = 0;
    *(undefined4 *)(local_a8 + 6) = local_e8._0_4_;
    local_a8[7] = pvStack_e0;
    pvStack_e0 = (void *)0x0;
    *(undefined4 *)(local_a8 + 8) = (undefined4)local_d8;
    *(undefined4 *)((longlong)local_a8 + 0x44) = local_d8._4_4_;
    local_d8 = 0;
    FUN_14622bf56(lVar11,&local_98,&local_a8);
    if (pvStack_e0 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_f8,local_f0 & 0xffffffff);
    if (local_f8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_58,(ulonglong)pvStack_50 & 0xffffffff);
    pwVar13 = local_58;
  }
  if (pwVar13 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401e7e48(local_78);
  if (*param_1 == 0) {
    if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 143f61bd0 FUN_143f61bd0 body=1495 status=ok
// SIG undefined FUN_143f61bd0(void)

void FUN_143f61bd0(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  void **ppvVar10;
  longlong lVar11;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  wchar_t *local_a8 [2];
  ulonglong local_98;
  void *local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined8 uStack_78;
  undefined1 local_70 [32];
  wchar_t *local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  lVar4 = DAT_14cb98818;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_70,param_1);
  uVar1 = DAT_14cb987b8;
  uVar6 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar7 = (longlong *)FUN_140773fe2();
  if (((plVar7 == (longlong *)0x0) ||
      (lVar8 = (**(code **)(*plVar7 + 0x2d0))(plVar7,uVar1,uVar6), lVar8 == 0)) ||
     (*(longlong *)(lVar8 + 0x2b8) == 0)) {
    FUN_1400b22c2(&local_90,&DAT_149e02088);
    FUN_1400b22c2(&local_80,&DAT_149e02088);
    local_98 = local_98 & 0xffffffffffffff00;
    local_50 = L"Error_Accept_Friend_Request_Title";
    uStack_48._0_4_ = 0x21;
    FUN_1446e940c(local_b8,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_50);
    local_50 = L"Error Accepting Request";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x17);
    FUN_140208c1e(local_a8,local_c8,local_b8,&local_50);
    pwVar9 = local_a8[0];
    if (*(code **)(*(longlong *)local_a8[0] + 0x50) != FUN_144828418) {
      pwVar9 = (wchar_t *)(**(code **)(*(longlong *)local_a8[0] + 0x50))();
    }
    FUN_1447a1fc0(pwVar9);
    pcVar2 = *(code **)(*(longlong *)local_a8[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar10 = (void **)(local_a8[0] + 0xc);
      if (*(longlong *)(local_a8[0] + 0x14) != 0) {
        ppvVar10 = (void **)(*(longlong *)(local_a8[0] + 0x14) + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar10 = (void **)(local_a8[0] + 8);
    }
    else {
      ppvVar10 = (void **)(*pcVar2)(local_a8[0]);
    }
    if (&local_90 != ppvVar10) {
      uVar1 = *(uint *)(ppvVar10 + 1);
      pvVar3 = *ppvVar10;
      local_88 = CONCAT44(local_88._4_4_,uVar1);
      if (uVar1 == 0 && local_88._4_4_ == 0) {
        local_88 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_90,uVar1);
        if (uVar1 != 0) {
          memcpy(local_90,pvVar3,(longlong)(int)uVar1 * 2);
        }
      }
    }
    if (local_a8[0] != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8[0] + 0x10))();
    }
    FUN_14657de87(local_a8,param_1);
    FUN_1400b22c2(local_c8,&DAT_149dfd136);
    local_50 = L"Error_Accept_Friend_Request_Desc";
    uStack_48._0_4_ = 0x20;
    FUN_1446e940c(local_dc,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_e0,&local_50);
    local_50 = L"Could not accept friend request from";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x24);
    FUN_140208c1e(local_d8,local_e0,local_dc,&local_50);
    plVar7 = local_d8[0];
    if (*(code **)(*local_d8[0] + 0x50) != FUN_144828418) {
      plVar7 = (longlong *)(**(code **)(*local_d8[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar7);
    pcVar2 = *(code **)(*local_d8[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar7 = local_d8[0] + 3;
      if (local_d8[0][5] != 0) {
        plVar7 = (longlong *)(local_d8[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar7 = local_d8[0] + 2;
    }
    else {
      plVar7 = (longlong *)(*pcVar2)(local_d8[0]);
    }
    FUN_1407ec8fc(local_b8,plVar7,local_c8);
    FUN_1401c7f3e(&local_50,local_b8,local_a8);
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_80 = local_50;
    uStack_78 = uStack_48;
    local_50 = (wchar_t *)0x0;
    uStack_48 = 0;
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_a8[0] = local_80;
    if (DAT_14cb98810 != (longlong *)0x0) {
      uVar6 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf534(uVar6,"Player_Profile_Accept_Request_Response",&local_98);
      local_a8[0] = local_80;
    }
  }
  else {
    if (*(int *)(lVar4 + 0x1c0) != *(int *)(lVar4 + 0x1ec)) {
      lVar11 = lVar4 + 0x1f0;
      if (*(longlong *)(lVar4 + 0x1f8) != 0) {
        lVar11 = *(longlong *)(lVar4 + 0x1f8);
      }
      iVar5 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar4 + 0x200) - 1U & uVar1) * 4);
      if (iVar5 != -1) {
        do {
          lVar11 = *(longlong *)(lVar4 + 0x1b8) + (longlong)iVar5 * 0x60;
          if (*(uint *)(*(longlong *)(lVar4 + 0x1b8) + (longlong)iVar5 * 0x60) == uVar1)
          goto LAB_143f6203d;
          iVar5 = *(int *)(lVar11 + 0x58);
        } while (iVar5 != -1);
      }
    }
    lVar11 = 0;
LAB_143f6203d:
    local_98 = lVar11 + 8;
    local_90 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 1);
    pvVar3 = (void *)*param_1;
    local_88 = CONCAT44(local_88._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      local_88 = (ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&local_90,uVar1,0);
      memcpy(local_90,pvVar3,(longlong)(int)uVar1 * 2);
    }
    local_50 = (wchar_t *)0x0;
    uStack_48._0_4_ = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    uStack_48 = CONCAT44(uStack_48._4_4_,3);
    *(undefined ***)local_50 = &PTR_LAB_14b4e4e30;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    *(longlong *)(local_50 + 8) = lVar11;
    *(undefined ***)local_50 = &PTR_FUN_14b505690;
    *(ulonglong *)(local_50 + 0xc) = local_98;
    *(void **)(local_50 + 0x10) = local_90;
    local_90 = (void *)0x0;
    *(undefined4 *)(local_50 + 0x14) = (undefined4)local_88;
    *(int *)(local_50 + 0x16) = local_88._4_4_;
    local_88 = 0;
    FUN_148a57d9a(local_70,local_a8);
    FUN_148a60128(lVar8,local_a8,&local_50);
  }
  if (local_a8[0] != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401e7e48(local_70);
  if (*param_1 == 0) {
    if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 143f621c2 FUN_143f621c2 body=1402 status=ok
// SIG undefined FUN_143f621c2(void)

void FUN_143f621c2(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong *local_a8 [2];
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  wchar_t *local_80;
  undefined8 uStack_78;
  undefined1 local_70 [32];
  wchar_t *local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_70,param_1);
  uVar5 = DAT_14cb987b8;
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar8 = (longlong *)FUN_140773fe2();
  if (((plVar8 == (longlong *)0x0) ||
      (lVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8,uVar5,uVar7), lVar9 == 0)) ||
     (*(longlong *)(lVar9 + 0x2b8) == 0)) {
    FUN_1400b22c2(&local_90,&DAT_149e02088);
    FUN_1400b22c2(&local_80,&DAT_149e02088);
    local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffffffffff00);
    local_50 = L"Error_Decline_Friend_Request_Title";
    uStack_48._0_4_ = 0x22;
    FUN_1446e940c(local_b8,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_50);
    local_50 = L"Error Declining Request";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x17);
    FUN_140208c1e(local_a8,local_c8,local_b8,&local_50);
    plVar8 = local_a8[0];
    if (*(code **)(*local_a8[0] + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_a8[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar8);
    pcVar3 = *(code **)(*local_a8[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar8 = local_a8[0] + 3;
      if (local_a8[0][5] != 0) {
        plVar8 = (longlong *)(local_a8[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar8 = local_a8[0] + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar3)(local_a8[0]);
    }
    if ((longlong *)&local_90 != plVar8) {
      iVar1 = (int)plVar8[1];
      pvVar4 = (void *)*plVar8;
      local_88 = iVar1;
      if (iVar1 == 0 && local_84 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd670(&local_90,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)CONCAT44(uStack_8c,local_90),pvVar4,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    FUN_14657de87(local_a8,param_1);
    FUN_1400b22c2(local_c8,&DAT_149dfd136);
    local_50 = L"Error_Decline_Friend_Request_Desc";
    uStack_48._0_4_ = 0x21;
    FUN_1446e940c(local_dc,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_e0,&local_50);
    local_50 = L"Could not decline request from";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x1e);
    FUN_140208c1e(local_d8,local_e0,local_dc,&local_50);
    plVar8 = local_d8[0];
    if (*(code **)(*local_d8[0] + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_d8[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar8);
    pcVar3 = *(code **)(*local_d8[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar8 = local_d8[0] + 3;
      if (local_d8[0][5] != 0) {
        plVar8 = (longlong *)(local_d8[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar8 = local_d8[0] + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar3)(local_d8[0]);
    }
    FUN_1407ec8fc(local_b8,plVar8,local_c8);
    FUN_1401c7f3e(&local_50,local_b8,local_a8);
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_80 = local_50;
    uStack_78 = uStack_48;
    local_50 = (wchar_t *)0x0;
    uStack_48 = 0;
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14cb98810 != (longlong *)0x0) {
      uVar7 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf534(uVar7,"Player_Profile_Decline_Request_Response",&local_98);
    }
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    pwVar10 = (wchar_t *)CONCAT44(uStack_8c,local_90);
  }
  else {
    local_50 = (wchar_t *)0x0;
    uVar2 = *(uint *)(param_1 + 1);
    pvVar4 = (void *)*param_1;
    uStack_48 = CONCAT44(uStack_48._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      uStack_48 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_50,uVar2,0);
      memcpy(local_50,pvVar4,(longlong)(int)uVar2 * 2);
    }
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    local_90 = 3;
    *local_98 = &PTR_LAB_14b4e4e30;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_98[2] = lVar11;
    *local_98 = &PTR_FUN_14b5057d0;
    local_98[3] = local_50;
    local_50 = (wchar_t *)0x0;
    *(undefined4 *)(local_98 + 4) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)local_98 + 0x24) = uStack_48._4_4_;
    uStack_48 = 0;
    FUN_148a57d9a(local_70,local_a8);
    FUN_148a6031a(lVar9,local_a8,&local_98);
    pwVar10 = local_50;
    if (local_a8[0] != (longlong *)0x0) {
      FUN_1400020a8();
      pwVar10 = local_50;
    }
  }
  if (pwVar10 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401e7e48(local_70);
  if (*param_1 == 0) {
    if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 143f62757 FUN_143f62757 body=1402 status=ok
// SIG undefined FUN_143f62757(void)

void FUN_143f62757(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong *local_a8 [2];
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  wchar_t *local_80;
  undefined8 uStack_78;
  undefined1 local_70 [32];
  wchar_t *local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_70,param_1);
  uVar5 = DAT_14cb987b8;
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar8 = (longlong *)FUN_140773fe2();
  if (((plVar8 == (longlong *)0x0) ||
      (lVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8,uVar5,uVar7), lVar9 == 0)) ||
     (*(longlong *)(lVar9 + 0x2b8) == 0)) {
    FUN_1400b22c2(&local_90,&DAT_149e02088);
    FUN_1400b22c2(&local_80,&DAT_149e02088);
    local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffffffffff00);
    local_50 = L"Error_Cancel_Friend_Request_Title";
    uStack_48._0_4_ = 0x21;
    FUN_1446e940c(local_b8,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_50);
    local_50 = L"Error Canceling Request";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x17);
    FUN_140208c1e(local_a8,local_c8,local_b8,&local_50);
    plVar8 = local_a8[0];
    if (*(code **)(*local_a8[0] + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_a8[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar8);
    pcVar3 = *(code **)(*local_a8[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar8 = local_a8[0] + 3;
      if (local_a8[0][5] != 0) {
        plVar8 = (longlong *)(local_a8[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar8 = local_a8[0] + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar3)(local_a8[0]);
    }
    if ((longlong *)&local_90 != plVar8) {
      iVar1 = (int)plVar8[1];
      pvVar4 = (void *)*plVar8;
      local_88 = iVar1;
      if (iVar1 == 0 && local_84 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd670(&local_90,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)CONCAT44(uStack_8c,local_90),pvVar4,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    FUN_14657de87(local_a8,param_1);
    FUN_1400b22c2(local_c8,&DAT_149dfd136);
    local_50 = L"Error_Cancel_Friend_Request_Desc";
    uStack_48._0_4_ = 0x20;
    FUN_1446e940c(local_dc,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_e0,&local_50);
    local_50 = L"Could not cancel friend request to";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x22);
    FUN_140208c1e(local_d8,local_e0,local_dc,&local_50);
    plVar8 = local_d8[0];
    if (*(code **)(*local_d8[0] + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_d8[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar8);
    pcVar3 = *(code **)(*local_d8[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar8 = local_d8[0] + 3;
      if (local_d8[0][5] != 0) {
        plVar8 = (longlong *)(local_d8[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar8 = local_d8[0] + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar3)(local_d8[0]);
    }
    FUN_1407ec8fc(local_b8,plVar8,local_c8);
    FUN_1401c7f3e(&local_50,local_b8,local_a8);
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_80 = local_50;
    uStack_78 = uStack_48;
    local_50 = (wchar_t *)0x0;
    uStack_48 = 0;
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14cb98810 != (longlong *)0x0) {
      uVar7 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf534(uVar7,"Player_Profile_Cancel_Request_Response",&local_98);
    }
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    pwVar10 = (wchar_t *)CONCAT44(uStack_8c,local_90);
  }
  else {
    local_50 = (wchar_t *)0x0;
    uVar2 = *(uint *)(param_1 + 1);
    pvVar4 = (void *)*param_1;
    uStack_48 = CONCAT44(uStack_48._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      uStack_48 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_50,uVar2,0);
      memcpy(local_50,pvVar4,(longlong)(int)uVar2 * 2);
    }
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    local_90 = 3;
    *local_98 = &PTR_LAB_14b4e4e30;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_98[2] = lVar11;
    *local_98 = &PTR_FUN_14b505c70;
    local_98[3] = local_50;
    local_50 = (wchar_t *)0x0;
    *(undefined4 *)(local_98 + 4) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)local_98 + 0x24) = uStack_48._4_4_;
    uStack_48 = 0;
    FUN_148a57d9a(local_70,local_a8);
    FUN_148a6031a(lVar9,local_a8,&local_98);
    pwVar10 = local_50;
    if (local_a8[0] != (longlong *)0x0) {
      FUN_1400020a8();
      pwVar10 = local_50;
    }
  }
  if (pwVar10 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401e7e48(local_70);
  if (*param_1 == 0) {
    if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 143f62cec FUN_143f62cec body=1402 status=ok
// SIG undefined FUN_143f62cec(void)

void FUN_143f62cec(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong *local_a8 [2];
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  wchar_t *local_80;
  undefined8 uStack_78;
  undefined1 local_70 [32];
  wchar_t *local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_70,param_1);
  uVar5 = DAT_14cb987b8;
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar8 = (longlong *)FUN_140773fe2();
  if (((plVar8 == (longlong *)0x0) ||
      (lVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8,uVar5,uVar7), lVar9 == 0)) ||
     (*(longlong *)(lVar9 + 0x2b8) == 0)) {
    FUN_1400b22c2(&local_90,&DAT_149e02088);
    FUN_1400b22c2(&local_80,&DAT_149e02088);
    local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffffffffff00);
    local_50 = L"Error_Block_Friend_Request_Title";
    uStack_48._0_4_ = 0x20;
    FUN_1446e940c(local_b8,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_50);
    local_50 = L"Error Blocking User";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x13);
    FUN_140208c1e(local_a8,local_c8,local_b8,&local_50);
    plVar8 = local_a8[0];
    if (*(code **)(*local_a8[0] + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_a8[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar8);
    pcVar3 = *(code **)(*local_a8[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar8 = local_a8[0] + 3;
      if (local_a8[0][5] != 0) {
        plVar8 = (longlong *)(local_a8[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar8 = local_a8[0] + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar3)(local_a8[0]);
    }
    if ((longlong *)&local_90 != plVar8) {
      iVar1 = (int)plVar8[1];
      pvVar4 = (void *)*plVar8;
      local_88 = iVar1;
      if (iVar1 == 0 && local_84 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd670(&local_90,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)CONCAT44(uStack_8c,local_90),pvVar4,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    FUN_14657de87(local_a8,param_1);
    FUN_1400b22c2(local_c8,&DAT_149dfd136);
    local_50 = L"Error_Block_Friend_Request_Desc";
    uStack_48._0_4_ = 0x1f;
    FUN_1446e940c(local_dc,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_e0,&local_50);
    local_50 = L"Could not block";
    uStack_48 = CONCAT44(uStack_48._4_4_,0xf);
    FUN_140208c1e(local_d8,local_e0,local_dc,&local_50);
    plVar8 = local_d8[0];
    if (*(code **)(*local_d8[0] + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_d8[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar8);
    pcVar3 = *(code **)(*local_d8[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar8 = local_d8[0] + 3;
      if (local_d8[0][5] != 0) {
        plVar8 = (longlong *)(local_d8[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar8 = local_d8[0] + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar3)(local_d8[0]);
    }
    FUN_1407ec8fc(local_b8,plVar8,local_c8);
    FUN_1401c7f3e(&local_50,local_b8,local_a8);
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_80 = local_50;
    uStack_78 = uStack_48;
    local_50 = (wchar_t *)0x0;
    uStack_48 = 0;
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14cb98810 != (longlong *)0x0) {
      uVar7 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf534(uVar7,"Player_Profile_Block_Player_Response",&local_98);
    }
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    pwVar10 = (wchar_t *)CONCAT44(uStack_8c,local_90);
  }
  else {
    local_50 = (wchar_t *)0x0;
    uVar2 = *(uint *)(param_1 + 1);
    pvVar4 = (void *)*param_1;
    uStack_48 = CONCAT44(uStack_48._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      uStack_48 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_50,uVar2,0);
      memcpy(local_50,pvVar4,(longlong)(int)uVar2 * 2);
    }
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    local_90 = 3;
    *local_98 = &PTR_LAB_14b4e4e30;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_98[2] = lVar11;
    *local_98 = &PTR_FUN_14b505920;
    local_98[3] = local_50;
    local_50 = (wchar_t *)0x0;
    *(undefined4 *)(local_98 + 4) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)local_98 + 0x24) = uStack_48._4_4_;
    uStack_48 = 0;
    FUN_148a57d9a(local_70,local_a8);
    FUN_148a6050c(lVar9,local_a8,&local_98);
    pwVar10 = local_50;
    if (local_a8[0] != (longlong *)0x0) {
      FUN_1400020a8();
      pwVar10 = local_50;
    }
  }
  if (pwVar10 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401e7e48(local_70);
  if (*param_1 == 0) {
    if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 143f63281 FUN_143f63281 body=1389 status=ok
// SIG undefined FUN_143f63281(void)

void FUN_143f63281(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  void **ppvVar9;
  longlong lVar10;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  wchar_t *local_a8 [2];
  uint local_98 [2];
  void *local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined8 uStack_78;
  undefined1 local_70 [32];
  wchar_t *local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_70,param_1);
  uVar1 = DAT_14cb987b8;
  uVar5 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar6 = (longlong *)FUN_140773fe2();
  if (((plVar6 == (longlong *)0x0) ||
      (lVar7 = (**(code **)(*plVar6 + 0x2d0))(plVar6,uVar1,uVar5), lVar7 == 0)) ||
     (*(longlong *)(lVar7 + 0x2b8) == 0)) {
    FUN_1400b22c2(&local_90,&DAT_149e02088);
    FUN_1400b22c2(&local_80,&DAT_149e02088);
    local_98[0] = local_98[0] & 0xffffff00;
    local_50 = L"Error_Unblock_Friend_Request_Title";
    uStack_48._0_4_ = 0x22;
    FUN_1446e940c(local_b8,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_50);
    local_50 = L"Error Unblocking User";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x15);
    FUN_140208c1e(local_a8,local_c8,local_b8,&local_50);
    pwVar8 = local_a8[0];
    if (*(code **)(*(longlong *)local_a8[0] + 0x50) != FUN_144828418) {
      pwVar8 = (wchar_t *)(**(code **)(*(longlong *)local_a8[0] + 0x50))();
    }
    FUN_1447a1fc0(pwVar8);
    pcVar2 = *(code **)(*(longlong *)local_a8[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar9 = (void **)(local_a8[0] + 0xc);
      if (*(longlong *)(local_a8[0] + 0x14) != 0) {
        ppvVar9 = (void **)(*(longlong *)(local_a8[0] + 0x14) + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar9 = (void **)(local_a8[0] + 8);
    }
    else {
      ppvVar9 = (void **)(*pcVar2)(local_a8[0]);
    }
    if (&local_90 != ppvVar9) {
      uVar1 = *(uint *)(ppvVar9 + 1);
      pvVar3 = *ppvVar9;
      local_88 = CONCAT44(local_88._4_4_,uVar1);
      if (uVar1 == 0 && local_88._4_4_ == 0) {
        local_88 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_90,uVar1);
        if (uVar1 != 0) {
          memcpy(local_90,pvVar3,(longlong)(int)uVar1 * 2);
        }
      }
    }
    if (local_a8[0] != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8[0] + 0x10))();
    }
    FUN_14657de87(local_a8,param_1);
    FUN_1400b22c2(local_c8,&DAT_149dfd136);
    local_50 = L"Error_Unblock_Friend_Request_Desc";
    uStack_48._0_4_ = 0x21;
    FUN_1446e940c(local_dc,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_e0,&local_50);
    local_50 = L"Could not unblock";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x11);
    FUN_140208c1e(local_d8,local_e0,local_dc,&local_50);
    plVar6 = local_d8[0];
    if (*(code **)(*local_d8[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_d8[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_d8[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar6 = local_d8[0] + 3;
      if (local_d8[0][5] != 0) {
        plVar6 = (longlong *)(local_d8[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar6 = local_d8[0] + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar2)(local_d8[0]);
    }
    FUN_1407ec8fc(local_b8,plVar6,local_c8);
    FUN_1401c7f3e(&local_50,local_b8,local_a8);
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_80 = local_50;
    uStack_78 = uStack_48;
    local_50 = (wchar_t *)0x0;
    uStack_48 = 0;
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_a8[0] = local_80;
    if (DAT_14cb98810 != (longlong *)0x0) {
      uVar5 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf534(uVar5,"Player_Profile_Add_Unblock_Player_Response",local_98);
      local_a8[0] = local_80;
    }
  }
  else {
    local_98[0] = uVar1;
    local_90 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 1);
    pvVar3 = (void *)*param_1;
    local_88 = CONCAT44(local_88._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      local_88 = (ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&local_90,uVar1,0);
      memcpy(local_90,pvVar3,(longlong)(int)uVar1 * 2);
    }
    local_50 = (wchar_t *)0x0;
    uStack_48._0_4_ = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    uStack_48 = CONCAT44(uStack_48._4_4_,3);
    *(undefined ***)local_50 = &PTR_LAB_14b4e4e30;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    *(longlong *)(local_50 + 8) = lVar10;
    *(undefined ***)local_50 = &PTR_FUN_14b505a30;
    *(uint *)(local_50 + 0xc) = local_98[0];
    *(void **)(local_50 + 0x10) = local_90;
    local_90 = (void *)0x0;
    *(undefined4 *)(local_50 + 0x14) = (undefined4)local_88;
    *(int *)(local_50 + 0x16) = local_88._4_4_;
    local_88 = 0;
    FUN_148a57d9a(local_70,local_a8);
    FUN_148a606fe(lVar7,local_a8,&local_50);
  }
  if (local_a8[0] != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401e7e48(local_70);
  if (*param_1 == 0) {
    if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 143f63809 FUN_143f63809 body=1389 status=ok
// SIG undefined FUN_143f63809(void)

void FUN_143f63809(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  void **ppvVar9;
  longlong lVar10;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  wchar_t *local_a8 [2];
  uint local_98 [2];
  void *local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined8 uStack_78;
  undefined1 local_70 [32];
  wchar_t *local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_70,param_1);
  uVar1 = DAT_14cb987b8;
  uVar5 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar6 = (longlong *)FUN_140773fe2();
  if (((plVar6 == (longlong *)0x0) ||
      (lVar7 = (**(code **)(*plVar6 + 0x2d0))(plVar6,uVar1,uVar5), lVar7 == 0)) ||
     (*(longlong *)(lVar7 + 0x2b8) == 0)) {
    FUN_1400b22c2(&local_90,&DAT_149e02088);
    FUN_1400b22c2(&local_80,&DAT_149e02088);
    local_98[0] = local_98[0] & 0xffffff00;
    local_50 = L"Error_Remove_Friend_Title";
    uStack_48._0_4_ = 0x19;
    FUN_1446e940c(local_b8,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_50);
    local_50 = L"Error Removing Friend.";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x16);
    FUN_140208c1e(local_a8,local_c8,local_b8,&local_50);
    pwVar8 = local_a8[0];
    if (*(code **)(*(longlong *)local_a8[0] + 0x50) != FUN_144828418) {
      pwVar8 = (wchar_t *)(**(code **)(*(longlong *)local_a8[0] + 0x50))();
    }
    FUN_1447a1fc0(pwVar8);
    pcVar2 = *(code **)(*(longlong *)local_a8[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar9 = (void **)(local_a8[0] + 0xc);
      if (*(longlong *)(local_a8[0] + 0x14) != 0) {
        ppvVar9 = (void **)(*(longlong *)(local_a8[0] + 0x14) + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar9 = (void **)(local_a8[0] + 8);
    }
    else {
      ppvVar9 = (void **)(*pcVar2)(local_a8[0]);
    }
    if (&local_90 != ppvVar9) {
      uVar1 = *(uint *)(ppvVar9 + 1);
      pvVar3 = *ppvVar9;
      local_88 = CONCAT44(local_88._4_4_,uVar1);
      if (uVar1 == 0 && local_88._4_4_ == 0) {
        local_88 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_90,uVar1);
        if (uVar1 != 0) {
          memcpy(local_90,pvVar3,(longlong)(int)uVar1 * 2);
        }
      }
    }
    if (local_a8[0] != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8[0] + 0x10))();
    }
    FUN_14657de87(local_a8,param_1);
    FUN_1400b22c2(local_c8,&DAT_149dfd136);
    local_50 = L"Error_Remove_Friend_Desc";
    uStack_48._0_4_ = 0x18;
    FUN_1446e940c(local_dc,&local_50);
    local_50 = L"ShiftUI";
    uStack_48._0_4_ = 7;
    FUN_1446e940c(local_e0,&local_50);
    local_50 = L"Could not remove SHiFT friend";
    uStack_48 = CONCAT44(uStack_48._4_4_,0x1d);
    FUN_140208c1e(local_d8,local_e0,local_dc,&local_50);
    plVar6 = local_d8[0];
    if (*(code **)(*local_d8[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_d8[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_d8[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar6 = local_d8[0] + 3;
      if (local_d8[0][5] != 0) {
        plVar6 = (longlong *)(local_d8[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar6 = local_d8[0] + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar2)(local_d8[0]);
    }
    FUN_1407ec8fc(local_b8,plVar6,local_c8);
    FUN_1401c7f3e(&local_50,local_b8,local_a8);
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_80 = local_50;
    uStack_78 = uStack_48;
    local_50 = (wchar_t *)0x0;
    uStack_48 = 0;
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_a8[0] = local_80;
    if (DAT_14cb98810 != (longlong *)0x0) {
      uVar5 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf534(uVar5,"Player_Profile_Remove_Friend_Response",local_98);
      local_a8[0] = local_80;
    }
  }
  else {
    local_98[0] = uVar1;
    local_90 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 1);
    pvVar3 = (void *)*param_1;
    local_88 = CONCAT44(local_88._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      local_88 = (ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&local_90,uVar1,0);
      memcpy(local_90,pvVar3,(longlong)(int)uVar1 * 2);
    }
    local_50 = (wchar_t *)0x0;
    uStack_48._0_4_ = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    uStack_48 = CONCAT44(uStack_48._4_4_,3);
    *(undefined ***)local_50 = &PTR_LAB_14b4e4e30;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    *(longlong *)(local_50 + 8) = lVar10;
    *(undefined ***)local_50 = &PTR_FUN_14b5053e0;
    *(uint *)(local_50 + 0xc) = local_98[0];
    *(void **)(local_50 + 0x10) = local_90;
    local_90 = (void *)0x0;
    *(undefined4 *)(local_50 + 0x14) = (undefined4)local_88;
    *(int *)(local_50 + 0x16) = local_88._4_4_;
    local_88 = 0;
    FUN_148a57d9a(local_70,local_a8);
    FUN_148a6031a(lVar7,local_a8,&local_50);
  }
  if (local_a8[0] != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401e7e48(local_70);
  if (*param_1 == 0) {
    if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 143f63d91 FUN_143f63d91 body=108 status=ok
// SIG undefined FUN_143f63d91(void)

void FUN_143f63d91(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_143f63dfe(DAT_14cb98818,param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f63dfe FUN_143f63dfe body=1917 status=ok
// SIG undefined FUN_143f63dfe(void)

void FUN_143f63dfe(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong *local_f0;
  ulonglong *local_e8;
  longlong *local_e0;
  int local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 *local_c0;
  int local_b8;
  longlong local_b0;
  longlong *local_a8;
  void *local_a0;
  uint local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  void *local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong *plStack_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  uVar8 = DAT_14cb987b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar9 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar10 = (longlong *)FUN_140773fe2();
  if (((plVar10 == (longlong *)0x0) ||
      (lVar11 = (**(code **)(*plVar10 + 0x2d0))(plVar10,uVar8,uVar9), lVar11 == 0)) ||
     (*(longlong *)(lVar11 + 0x2b8) == 0)) goto LAB_143f63e77;
  uVar9 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar10 = (longlong *)FUN_14657d420(uVar9);
  (**(code **)(*plVar10 + 0x10))(plVar10,&local_90);
  FUN_143f5e991(&local_a0,local_90);
  FUN_143f5f180(&local_b0,uVar9);
  if (local_b0 != 0) {
    FUN_14150a9d5(&local_c0,lVar11,2);
    pvVar7 = local_a0;
    if ((longlong)local_b8 != 0) {
      iVar5 = (int)param_2[1];
      puVar15 = local_c0;
LAB_143f63f39:
      if (puVar15[8] != iVar5) {
        if (puVar15[8] + iVar5 == 1) goto LAB_143f63fb3;
        goto LAB_143f63fa3;
      }
      if (1 < iVar5) {
        lVar14 = 0;
        do {
          uVar3 = *(ushort *)(*(longlong *)(puVar15 + 6) + lVar14);
          uVar4 = *(ushort *)(*param_2 + lVar14);
          if (uVar3 == uVar4) {
            if (uVar3 == 0) break;
          }
          else {
            if (0x7f < (uVar4 | uVar3)) {
              iVar13 = (uint)uVar3 - (uint)uVar4;
              goto LAB_143f63f93;
            }
            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) goto code_r0x000143f63f90;
          }
          lVar14 = lVar14 + 2;
        } while( true );
      }
      goto LAB_143f63fb3;
    }
LAB_143f63fbc:
    local_80 = (longlong *)CONCAT44(local_80._4_4_,uVar8);
    local_78 = (void *)0x0;
    local_70 = (void *)CONCAT44(local_70._4_4_,local_98);
    local_88 = param_1;
    if ((longlong)(int)local_98 == 0) {
      local_70 = (void *)(ulonglong)local_98;
    }
    else {
      FUN_1446dd670(&local_78,local_98,0);
      memcpy(local_78,pvVar7,(longlong)(int)local_98 * 2);
    }
    local_68 = local_b0;
    plStack_60 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
    }
    local_58 = (void *)0x0;
    local_50 = (int)param_2[1];
    lVar14 = (longlong)local_50;
    pvVar7 = (void *)*param_2;
    if (lVar14 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar7,lVar14 * 2);
    }
    local_e0 = (longlong *)0x0;
    local_d8 = 0;
    FUN_1446efa72(&local_e0,0,6,0x10);
    pvVar7 = local_58;
    local_d8 = 6;
    *local_e0 = (longlong)&PTR_LAB_149e063e0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    local_e0[2] = lVar12;
    *local_e0 = (longlong)&PTR_FUN_14b505e90;
    local_e0[3] = local_88;
    *(undefined4 *)(local_e0 + 4) = local_80._0_4_;
    local_e0[5] = (longlong)local_78;
    local_78 = (void *)0x0;
    *(undefined4 *)(local_e0 + 6) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_e0 + 0x34) = local_70._4_4_;
    local_70 = (void *)0x0;
    local_e0[7] = local_68;
    local_e0[8] = (longlong)plStack_60;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    local_e0[9] = 0;
    lVar14 = (longlong)local_50;
    *(int *)(local_e0 + 10) = local_50;
    if (lVar14 == 0) {
      *(undefined4 *)((longlong)local_e0 + 0x54) = 0;
    }
    else {
      plVar10 = local_e0 + 9;
      FUN_1446dd670(plVar10,local_50,0);
      memcpy((void *)*plVar10,pvVar7,lVar14 * 2);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8(local_58);
    }
    plVar10 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((*(int *)(param_3 + 8) < 2) || ((int)param_2[1] < 2)) {
      local_100 = 0;
      local_f8 = 0;
      FUN_146281d3c(&local_100,&local_e0);
      FUN_148a62bc5(lVar11,param_2,&local_100);
    }
    else if (local_e0 != (longlong *)0x0 && local_d8 != 0) {
      (**(code **)(*local_e0 + 0x60))(local_e0,param_3);
    }
    plVar10 = local_e0;
    if (local_d8 == 0) {
LAB_143f64289:
      if (plVar10 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e0 != (longlong *)0x0) {
      (**(code **)*local_e0)(local_e0,0);
      FUN_1446efa72(&local_e0,0,0,0x10);
      local_d8 = 0;
      plVar10 = local_e0;
      goto LAB_143f64289;
    }
    FUN_141323308(local_c0,local_b8);
    if (local_c0 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_a8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143f63e77:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143f63f90:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_143f63f93:
  if (iVar13 == 0) {
LAB_143f63fb3:
    if (puVar15 != (undefined4 *)0x0) {
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,2,0x10);
      local_c8 = 2;
      *local_d0 = &PTR_LAB_14b505290;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar14 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar14 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar14;
      local_d0[2] = lVar12;
      *local_d0 = &PTR_FUN_14b505e20;
      local_88 = CONCAT44(local_88._4_4_,*puVar15);
      local_80 = (longlong *)0x0;
      uVar6 = puVar15[4];
      pvVar7 = *(void **)(puVar15 + 2);
      local_78 = (void *)CONCAT44(local_78._4_4_,uVar6);
      if ((longlong)(int)uVar6 == 0) {
        local_78 = (void *)(ulonglong)uVar6;
      }
      else {
        FUN_1446dd670(&local_80,uVar6,0);
        memcpy(local_80,pvVar7,(longlong)(int)uVar6 * 2);
      }
      local_70 = (void *)0x0;
      uVar6 = puVar15[8];
      pvVar7 = *(void **)(puVar15 + 6);
      local_68 = CONCAT44(local_68._4_4_,uVar6);
      if ((longlong)(int)uVar6 == 0) {
        local_68 = (ulonglong)uVar6;
      }
      else {
        FUN_1446dd670(&local_70,uVar6,0);
        memcpy(local_70,pvVar7,(longlong)(int)uVar6 * 2);
      }
      plStack_60 = (longlong *)0x0;
      uVar6 = puVar15[0xc];
      pvVar7 = *(void **)(puVar15 + 10);
      local_58 = (void *)CONCAT44(local_58._4_4_,uVar6);
      if ((longlong)(int)uVar6 == 0) {
        local_58 = (void *)(ulonglong)uVar6;
      }
      else {
        FUN_1446dd670(&plStack_60,uVar6,0);
        memcpy(plStack_60,pvVar7,(longlong)(int)uVar6 * 2);
      }
      local_f0 = &local_88;
      local_50 = CONCAT22(local_50._2_2_,*(undefined2 *)(puVar15 + 0xe));
      local_e8 = &local_48;
      FUN_148abf780(&local_e0);
      local_108 = 0;
      FUN_14624c942(param_1,lVar11,&local_e0,&local_d0);
      FUN_141323308(local_e0,local_d8);
      if (local_e0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (plStack_60 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar10 = local_80;
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
        plVar10 = local_80;
      }
      goto LAB_143f64289;
    }
    goto LAB_143f63fbc;
  }
LAB_143f63fa3:
  puVar15 = puVar15 + 0x10;
  if (puVar15 == local_c0 + (longlong)local_b8 * 0x10) goto LAB_143f63fbc;
  goto LAB_143f63f39;
}



// FUNCTION 143f6457c FUN_143f6457c body=2158 status=ok
// SIG undefined FUN_143f6457c(void)

void FUN_143f6457c(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  void **ppvVar11;
  longlong *plVar12;
  undefined *puVar13;
  longlong lVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ushort uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStack_1e8 [40];
  undefined8 *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8 [2];
  wchar_t *local_198;
  undefined8 local_190;
  undefined8 local_188;
  wchar_t *local_180;
  ulonglong uStack_178;
  undefined1 local_15c [4];
  longlong *local_158;
  undefined4 local_150;
  void *local_148;
  uint local_140;
  undefined4 local_13c;
  undefined1 local_138 [8];
  void *local_130;
  int local_128;
  int local_124;
  wchar_t *local_120;
  ulonglong uStack_118;
  longlong local_110;
  int local_108;
  ulonglong local_48;
  
  uVar5 = DAT_14cb987b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1b0 = DAT_14cb98818;
  uVar8 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar9 = (longlong *)FUN_140773fe2();
  if (plVar9 == (longlong *)0x0) {
    local_1b8 = 0;
  }
  else {
    local_1b8 = (**(code **)(*plVar9 + 0x2d0))(plVar9,uVar5,uVar8);
  }
  if (DAT_14cb98910 != DAT_14cb9893c) {
    puVar13 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar13 = DAT_14cb98948;
    }
    iVar7 = *(int *)(puVar13 + (ulonglong)(DAT_14cb98950 - 1U & uVar5) * 4);
    while (iVar7 != -1) {
      lVar22 = DAT_14cb98908 + (longlong)iVar7 * 0x20;
      if (*(uint *)(DAT_14cb98908 + (longlong)iVar7 * 0x20) == uVar5) goto LAB_143f64647;
      iVar7 = *(int *)(lVar22 + 0x18);
    }
  }
  lVar22 = 0;
LAB_143f64647:
  FUN_148abf86e(&local_110,param_1);
  if ((longlong)*(int *)(lVar22 + 0x10) != 0) {
    plVar9 = *(longlong **)(lVar22 + 8);
    plVar12 = plVar9 + (longlong)*(int *)(lVar22 + 0x10) * 0x19;
LAB_143f647a7:
    if (local_108 == (int)plVar9[1]) {
      if (1 < local_108) {
        lVar22 = 0;
        do {
          uVar19 = *(ushort *)(local_110 + lVar22);
          uVar20 = (ulonglong)uVar19;
          uVar16 = *(ushort *)(*plVar9 + lVar22);
          if (uVar19 == uVar16) {
            if (uVar19 == 0) break;
          }
          else {
            if (0x7f < (uVar16 | uVar19)) goto LAB_143f647fa;
            uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
            uVar17 = (ulonglong)uVar16;
            uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            if ((&DAT_149e05da0)[uVar20] != (&DAT_149e05da0)[uVar17]) goto LAB_143f647fa;
          }
          lVar22 = lVar22 + 2;
        } while( true );
      }
    }
    else if ((int)plVar9[1] + local_108 != 1) goto LAB_143f64814;
    goto LAB_143f64670;
  }
LAB_143f6466e:
  plVar9 = (longlong *)0x0;
LAB_143f64670:
  local_1c0 = param_1;
  FUN_148abf402(&local_110);
  FUN_1400b22c2(&local_130,&DAT_149e02088);
  FUN_1400b22c2(&local_120,&DAT_149e02088);
  local_138[0] = 0;
  local_180 = L"Error_Accept_Friend_Request_Title";
  uStack_178._0_4_ = 0x21;
  FUN_1446e940c(&local_148,&local_180);
  local_180 = L"ShiftUI";
  uStack_178._0_4_ = 7;
  FUN_1446e940c(&local_158,&local_180);
  local_180 = L"Error Accepting Request";
  uStack_178 = CONCAT44(uStack_178._4_4_,0x17);
  FUN_140208c1e(&local_198,&local_158,&local_148,&local_180);
  pwVar10 = local_198;
  if (*(code **)(*(longlong *)local_198 + 0x50) != FUN_144828418) {
    pwVar10 = (wchar_t *)(**(code **)(*(longlong *)local_198 + 0x50))();
  }
  FUN_1447a1fc0(pwVar10);
  pcVar3 = *(code **)(*(longlong *)local_198 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    ppvVar11 = (void **)(local_198 + 0xc);
    if (*(longlong *)(local_198 + 0x14) != 0) {
      ppvVar11 = (void **)(*(longlong *)(local_198 + 0x14) + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    ppvVar11 = (void **)(local_198 + 8);
  }
  else {
    ppvVar11 = (void **)(*pcVar3)(local_198);
  }
  if (&local_130 != ppvVar11) {
    iVar7 = *(int *)(ppvVar11 + 1);
    pvVar4 = *ppvVar11;
    local_128 = iVar7;
    if (iVar7 == 0 && local_124 == 0) {
      local_124 = 0;
    }
    else {
      FUN_1446dd670(&local_130,iVar7);
      if (iVar7 != 0) {
        memcpy(local_130,pvVar4,(longlong)iVar7 * 2);
      }
    }
  }
  if (local_198 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_198 + 0x10))();
  }
  FUN_1400b22c2(&local_148,&DAT_149dfd136);
  local_180 = L"Error_Accept_Friend_Request_Desc";
  uStack_178._0_4_ = 0x20;
  FUN_1446e940c(local_1a8,&local_180);
  local_180 = L"ShiftUI";
  uStack_178._0_4_ = 7;
  FUN_1446e940c(local_15c,&local_180);
  local_180 = L"Could not accept friend request from";
  uStack_178 = CONCAT44(uStack_178._4_4_,0x24);
  FUN_140208c1e(&local_158,local_15c,local_1a8,&local_180);
  plVar12 = local_158;
  if (*(code **)(*local_158 + 0x50) != FUN_144828418) {
    plVar12 = (longlong *)(**(code **)(*local_158 + 0x50))();
  }
  puVar18 = local_1c0;
  FUN_1447a1fc0(plVar12);
  pcVar3 = *(code **)(*local_158 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar12 = local_158 + 3;
    if (local_158[5] != 0) {
      plVar12 = (longlong *)(local_158[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar12 = local_158 + 2;
  }
  else {
    plVar12 = (longlong *)(*pcVar3)(local_158);
  }
  FUN_1407ec8fc(&local_198,plVar12,&local_148);
  iVar7 = (int)local_190;
  if ((int)local_190 < 2) {
    local_180 = (wchar_t *)0x0;
    uVar2 = *(uint *)(puVar18 + 1);
    pvVar4 = (void *)*puVar18;
    uStack_178 = CONCAT44(uStack_178._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      uStack_178 = (ulonglong)uVar2;
      puVar18 = local_1c0;
    }
    else {
      FUN_1446dd670(&local_180,uVar2,0);
      memcpy(local_180,pvVar4,(longlong)(int)uVar2 * 2);
      puVar18 = local_1c0;
    }
  }
  else {
    iVar21 = *(int *)(puVar18 + 1) + -1;
    if (*(int *)(puVar18 + 1) == 0) {
      iVar21 = 0;
    }
    local_180 = local_198;
    local_198 = (wchar_t *)0x0;
    iVar6 = local_190._4_4_;
    uStack_178 = (ulonglong)local_190;
    local_190 = (void *)0x0;
    iVar1 = iVar21 + iVar7;
    if (iVar1 < iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar21);
    }
    if (iVar6 < iVar1) {
      FUN_1446f8c06(&local_180);
    }
    FUN_1400020e8(&local_180,*puVar18,iVar21);
  }
  if (local_120 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_120 = local_180;
  uStack_118 = uStack_178;
  local_180 = (wchar_t *)0x0;
  uStack_178 = 0;
  if (local_198 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x10))();
  }
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (plVar9 == (longlong *)0x0) {
    if (DAT_14cb98810 != (longlong *)0x0) {
      uVar8 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf534(uVar8,"Friends_Notification_Friend_Request_Response",local_138);
    }
  }
  else {
    local_148 = (void *)0x0;
    local_140 = *(uint *)(plVar9 + 1);
    lVar22 = (longlong)(int)local_140;
    pvVar4 = (void *)*plVar9;
    if (lVar22 == 0) {
      local_13c = 0;
    }
    else {
      FUN_1446dd670(&local_148,local_140,0);
      memcpy(local_148,pvVar4,lVar22 * 2);
    }
    lVar22 = local_1b8;
    FUN_1401e7e86(&local_180,&local_148);
    pvVar4 = local_148;
    if ((lVar22 == 0) || (*(longlong *)(lVar22 + 0x2b8) == 0)) {
      if (DAT_14cb98810 != (longlong *)0x0) {
        uVar8 = (**(code **)(*DAT_14cb98810 + 0xf8))();
        FUN_148abf534(uVar8,"Friends_Notification_Friend_Request_Response",local_138);
      }
    }
    else {
      if (*(int *)(local_1b0 + 0x1c0) != *(int *)(local_1b0 + 0x1ec)) {
        lVar15 = local_1b0 + 0x1f0;
        if (*(longlong *)(local_1b0 + 0x1f8) != 0) {
          lVar15 = *(longlong *)(local_1b0 + 0x1f8);
        }
        iVar7 = *(int *)(lVar15 + (ulonglong)(*(int *)(local_1b0 + 0x200) - 1U & uVar5) * 4);
        if (iVar7 != -1) {
          do {
            lVar15 = *(longlong *)(local_1b0 + 0x1b8) + (longlong)iVar7 * 0x60;
            if (*(uint *)(*(longlong *)(local_1b0 + 0x1b8) + (longlong)iVar7 * 0x60) == uVar5)
            goto LAB_143f64bad;
            iVar7 = *(int *)(lVar15 + 0x58);
          } while (iVar7 != -1);
        }
      }
      lVar15 = 0;
LAB_143f64bad:
      local_198 = (wchar_t *)(lVar15 + 8);
      local_190 = (void *)0x0;
      lVar15 = (longlong)(int)local_140;
      local_188 = CONCAT44(local_188._4_4_,local_140);
      if (lVar15 == 0) {
        local_188 = (ulonglong)local_140;
      }
      else {
        FUN_1446dd670(&local_190,local_140,0);
        memcpy(local_190,pvVar4,lVar15 * 2);
      }
      local_158 = (longlong *)0x0;
      local_150 = 0;
      FUN_1446efa72(&local_158,0,3,0x10);
      local_150 = 3;
      *local_158 = (longlong)&PTR_LAB_14b4e4e30;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar15 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar15 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar15;
      local_158[2] = lVar14;
      *local_158 = (longlong)&PTR_FUN_14b506130;
      local_158[3] = (longlong)local_198;
      local_158[4] = (longlong)local_190;
      local_190 = (void *)0x0;
      *(undefined4 *)(local_158 + 5) = (undefined4)local_188;
      *(undefined4 *)((longlong)local_158 + 0x2c) = local_188._4_4_;
      local_188 = 0;
      FUN_148a57d9a(&local_180,local_1a8);
      FUN_148a60128(lVar22,local_1a8,&local_158);
      if (local_1a8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_190 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1401e7e48(&local_180);
    if (local_148 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_120 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_130 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    FUN_148abf402(puVar18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143f647fa:
  if (uVar19 == uVar16) goto LAB_143f64670;
LAB_143f64814:
  plVar9 = plVar9 + 0x19;
  if (plVar9 == plVar12) goto LAB_143f6466e;
  goto LAB_143f647a7;
}



// FUNCTION 143f64deb FUN_143f64deb body=288 status=ok
// SIG undefined FUN_143f64deb(void)

void FUN_143f64deb(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  uVar1 = DAT_14cb987b8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(local_40,&DAT_149e02088);
  FUN_1400b22c2(local_30,&DAT_149e02088);
  if ((*(int *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 200) != 0) &&
     (plVar4 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0xc0), plVar4 != (longlong *)0x0
     )) {
    cVar2 = (**(code **)(*plVar4 + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 200) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0xc0);
      }
      cVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,uVar1,param_1);
      if (cVar2 != '\0') {
        local_48[0] = 1;
        goto LAB_143f64e8f;
      }
    }
  }
  local_48[0] = 0;
LAB_143f64e8f:
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar3 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar3,"Player_Profile_Is_Shift_Invite_Allowed_Response",local_48);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f64f1b FUN_143f64f1b body=731 status=ok
// SIG undefined FUN_143f64f1b(void)

void FUN_143f64f1b(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50 [2];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  uVar4 = DAT_14cb987b8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = *(int *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x15c);
  if (iVar2 == 0) {
LAB_143f65095:
    lVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x158);
    lVar7 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != iVar2 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
      goto LAB_143f65095;
      lVar7 = *plVar8;
    }
  }
  if (*(longlong *)(lVar7 + 0x30) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(lVar7 + 0x30) + 0x360);
  }
  FUN_143f67508(local_50,param_1);
  FUN_143f5f180(&local_60,uVar6);
  (**(code **)(*local_60 + 0x120))(local_60,&local_70,local_50);
  FUN_1400b22c2(local_90,&DAT_149e02088);
  FUN_1400b22c2(local_80,&DAT_149e02088);
  if ((local_70 == (longlong *)0x0) || (cVar5 = (**(code **)(*local_70 + 0x28))(), cVar5 == '\0'))
  goto LAB_143f65112;
  if ((*(int *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0xd8) == 0) ||
     ((plVar8 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0xd0),
      plVar8 == (longlong *)0x0 ||
      (cVar5 = (**(code **)(*plVar8 + 0x30))(), plVar8 = local_68, cVar5 == '\0')))) {
LAB_143f650fd:
    local_98[0] = 0;
  }
  else {
    lVar7 = *(longlong *)(DAT_14cb98ab0 + 0x28);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    if (*(int *)(lVar7 + 0xd8) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(lVar7 + 0xd0);
    }
    local_40 = local_70;
    local_38 = local_68;
    if (local_68 == (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar9 + 0x58))(plVar9,uVar4,&local_40);
    }
    else {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      cVar5 = (**(code **)(*plVar9 + 0x58))(plVar9,uVar4,&local_40);
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (cVar5 == '\0') goto LAB_143f650fd;
    local_98[0] = 1;
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar6 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar6,"Player_Profile_Is_Platform_Invite_Allowed_Response",local_98);
  }
LAB_143f65112:
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_58 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6520d FUN_143f6520d body=63 status=ok
// SIG undefined FUN_143f6520d(void)

void FUN_143f6520d(longlong *param_1)

{
  FUN_146209706(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0xe0,DAT_14cb987b8,param_1);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f6524c FUN_143f6524c body=330 status=ok
// SIG undefined FUN_143f6524c(void)

void FUN_143f6524c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  uVar4 = DAT_14cb987b8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  FUN_143f67508(local_40,param_1);
  FUN_143f5f180(&local_50,uVar5);
  (**(code **)(*local_50 + 0x120))(local_50,&local_60,local_40);
  if (local_60 != 0) {
    lVar3 = *(longlong *)(DAT_14cb98ab0 + 0x28);
    local_70 = local_60;
    local_68 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_148abf7d6(lVar3 + 0xf8,uVar4,&local_70);
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f653aa FUN_143f653aa body=1645 status=ok
// SIG undefined FUN_143f653aa(void)

void FUN_143f653aa(undefined8 param_1)

{
  longlong *plVar1;
  code *pcVar2;
  void *pvVar3;
  uint uVar4;
  longlong *plVar5;
  void **ppvVar6;
  undefined *puVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ushort uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auStack_178 [40];
  wchar_t *local_150;
  int local_148;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  longlong *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70;
  void *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  uVar4 = DAT_14cb987b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  FUN_1400b22c2(&local_58,&DAT_149e02088);
  local_70 = 0;
  local_150 = L"Error_Join_Lobby_Title";
  local_148 = 0x16;
  FUN_1446e940c(local_84,&local_150);
  local_150 = L"ShiftUI";
  local_148 = 7;
  FUN_1446e940c(local_88,&local_150);
  local_150 = L"Error Joining Lobby";
  local_148 = 0x13;
  FUN_140208c1e(&local_80,local_88,local_84,&local_150);
  plVar5 = local_80;
  if (*(code **)(*local_80 + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_80 + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar2 = *(code **)(*local_80 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    ppvVar6 = (void **)(local_80 + 3);
    if (local_80[5] != 0) {
      ppvVar6 = (void **)(local_80[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    ppvVar6 = (void **)(local_80 + 2);
  }
  else {
    ppvVar6 = (void **)(*pcVar2)(local_80);
  }
  if (&local_68 != ppvVar6) {
    iVar8 = *(int *)(ppvVar6 + 1);
    pvVar3 = *ppvVar6;
    local_60 = iVar8;
    if (iVar8 == 0 && local_5c == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,iVar8);
      if (iVar8 != 0) {
        memcpy(local_68,pvVar3,(longlong)iVar8 * 2);
      }
    }
  }
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  local_150 = L"Error_Join_Lobby_Desc";
  local_148 = 0x15;
  FUN_1446e940c(local_84,&local_150);
  local_150 = L"ShiftUI";
  local_148 = 7;
  FUN_1446e940c(local_88,&local_150);
  local_150 = L"Could not join lobby";
  local_148 = 0x14;
  FUN_140208c1e(&local_80,local_88,local_84,&local_150);
  plVar5 = local_80;
  if (*(code **)(*local_80 + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_80 + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar2 = *(code **)(*local_80 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    ppvVar6 = (void **)(local_80 + 3);
    if (local_80[5] != 0) {
      ppvVar6 = (void **)(local_80[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    ppvVar6 = (void **)(local_80 + 2);
  }
  else {
    ppvVar6 = (void **)(*pcVar2)(local_80);
  }
  if (&local_58 != ppvVar6) {
    iVar8 = *(int *)(ppvVar6 + 1);
    pvVar3 = *ppvVar6;
    local_50 = iVar8;
    if (iVar8 == 0 && local_4c == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,iVar8);
      if (iVar8 != 0) {
        memcpy(local_58,pvVar3,(longlong)iVar8 * 2);
      }
    }
  }
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  if (DAT_14cb98910 != DAT_14cb9893c) {
    puVar7 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar7 = DAT_14cb98948;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)(DAT_14cb98950 - 1U & uVar4) * 4);
    while (iVar8 != -1) {
      lVar12 = DAT_14cb98908 + (longlong)iVar8 * 0x20;
      if (*(uint *)(DAT_14cb98908 + (longlong)iVar8 * 0x20) == uVar4) goto LAB_143f656f3;
      iVar8 = *(int *)(lVar12 + 0x18);
    }
  }
  lVar12 = 0;
LAB_143f656f3:
  FUN_148abf86e(&local_150,param_1);
  if ((longlong)*(int *)(lVar12 + 0x10) != 0) {
    plVar5 = *(longlong **)(lVar12 + 8);
    plVar9 = plVar5 + (longlong)*(int *)(lVar12 + 0x10) * 0x19;
LAB_143f65736:
    if (local_148 != (int)plVar5[1]) {
      if ((int)plVar5[1] + local_148 == 1) goto LAB_143f657a6;
      goto LAB_143f65795;
    }
    if (1 < local_148) {
      lVar12 = 0;
      do {
        uVar11 = *(ushort *)((longlong)local_150 + lVar12);
        uVar10 = (ulonglong)uVar11;
        uVar13 = *(ushort *)(*plVar5 + lVar12);
        if (uVar11 == uVar13) {
          if (uVar11 == 0) break;
        }
        else {
          if (0x7f < (uVar13 | uVar11)) goto LAB_143f65782;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar14 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar14]) goto LAB_143f65782;
        }
        lVar12 = lVar12 + 2;
      } while( true );
    }
    goto LAB_143f657a6;
  }
LAB_143f65709:
  FUN_148abf402(&local_150);
  goto LAB_143f65997;
LAB_143f65782:
  if (uVar11 == uVar13) {
LAB_143f657a6:
    FUN_148abf402(&local_150);
    if (plVar5 == (longlong *)0x0) goto LAB_143f65997;
    local_80 = (longlong *)0x0;
    local_78 = (int)plVar5[1];
    lVar12 = (longlong)local_78;
    pvVar3 = (void *)*plVar5;
    if (lVar12 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar3,lVar12 * 2);
    }
    if (DAT_14cb98910 == DAT_14cb9893c) goto LAB_143f65864;
    puVar7 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar7 = DAT_14cb98948;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)(DAT_14cb98950 - 1U & uVar4) * 4);
    if (iVar8 == -1) goto LAB_143f65864;
    goto LAB_143f6584b;
  }
LAB_143f65795:
  plVar5 = plVar5 + 0x19;
  if (plVar5 == plVar9) goto LAB_143f65709;
  goto LAB_143f65736;
  while (iVar8 = *(int *)(lVar12 + 0x18), iVar8 != -1) {
LAB_143f6584b:
    lVar12 = DAT_14cb98908 + (longlong)iVar8 * 0x20;
    if (*(uint *)(DAT_14cb98908 + (longlong)iVar8 * 0x20) == uVar4) goto LAB_143f65866;
  }
LAB_143f65864:
  lVar12 = 0;
LAB_143f65866:
  if ((longlong)*(int *)(lVar12 + 0x10) != 0) {
    plVar5 = *(longlong **)(lVar12 + 8);
    plVar9 = plVar5 + (longlong)*(int *)(lVar12 + 0x10) * 0x19;
LAB_143f65891:
    plVar1 = plVar9 + -0x18;
    plVar9 = plVar9 + -0x19;
    if (local_78 != (int)*plVar1) {
      if ((int)*plVar1 + local_78 == 1) goto LAB_143f65900;
      goto LAB_143f658f6;
    }
    if (1 < local_78) {
      lVar12 = 0;
      do {
        uVar11 = *(ushort *)((longlong)local_80 + lVar12);
        uVar10 = (ulonglong)uVar11;
        uVar13 = *(ushort *)(*plVar9 + lVar12);
        if (uVar11 == uVar13) {
          if (uVar11 == 0) break;
        }
        else {
          if (0x7f < (uVar13 | uVar11)) goto LAB_143f658e5;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar14 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar14]) goto LAB_143f658e5;
        }
        lVar12 = lVar12 + 2;
      } while( true );
    }
    goto LAB_143f65900;
  }
  goto LAB_143f6598d;
LAB_143f658e5:
  if (uVar11 == uVar13) {
LAB_143f65900:
    if ((int)((ulonglong)((longlong)plVar9 - (longlong)plVar5) >> 3) * -0x3d70a3d7 != -1) {
      if (DAT_14cb98910 == DAT_14cb9893c) goto LAB_143f6595e;
      puVar7 = &DAT_14cb98940;
      if (DAT_14cb98948 != (undefined *)0x0) {
        puVar7 = DAT_14cb98948;
      }
      iVar8 = *(int *)(puVar7 + (ulonglong)(DAT_14cb98950 - 1U & uVar4) * 4);
      if (iVar8 == -1) goto LAB_143f6595e;
      goto LAB_143f65945;
    }
    goto LAB_143f6598d;
  }
LAB_143f658f6:
  if (plVar9 == plVar5) goto LAB_143f6598d;
  goto LAB_143f65891;
  while (iVar8 = *(int *)(lVar12 + 0x18), iVar8 != -1) {
LAB_143f65945:
    lVar12 = DAT_14cb98908 + (longlong)iVar8 * 0x20;
    if (*(uint *)(DAT_14cb98908 + (longlong)iVar8 * 0x20) == uVar4) goto LAB_143f65960;
  }
LAB_143f6595e:
  lVar12 = 0;
LAB_143f65960:
  FUN_148abfbc6(lVar12 + 8);
  FUN_146209706(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x78,uVar4,&local_80);
LAB_143f6598d:
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f65997:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    FUN_148abf402(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f65a18 FUN_143f65a18 body=1744 status=ok
// SIG undefined FUN_143f65a18(void)

void FUN_143f65a18(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  void *_Src;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong **pplVar7;
  undefined *puVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ushort uVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auStack_198 [44];
  undefined1 local_16c [4];
  longlong *local_168 [2];
  undefined1 local_154 [4];
  longlong *local_150;
  int local_148;
  undefined4 local_144;
  undefined1 local_140 [8];
  longlong *local_138;
  int local_130;
  int local_12c;
  longlong local_128 [2];
  longlong local_118;
  int local_110;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  uVar3 = DAT_14cb987b8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (DAT_14cb98910 != DAT_14cb9893c) {
    puVar8 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar8 = DAT_14cb98948;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)(DAT_14cb98950 - 1U & DAT_14cb987b8) * 4);
    while (iVar9 != -1) {
      lVar13 = DAT_14cb98908 + (longlong)iVar9 * 0x20;
      if (*(uint *)(DAT_14cb98908 + (longlong)iVar9 * 0x20) == DAT_14cb987b8) goto LAB_143f65a9a;
      iVar9 = *(int *)(lVar13 + 0x18);
    }
  }
  lVar13 = 0;
LAB_143f65a9a:
  FUN_148abf86e(&local_118,param_1);
  if ((longlong)*(int *)(lVar13 + 0x10) != 0) {
    plVar6 = *(longlong **)(lVar13 + 8);
    plVar4 = plVar6 + (longlong)*(int *)(lVar13 + 0x10) * 0x19;
LAB_143f65ae9:
    if (local_110 != (int)plVar6[1]) {
      if ((int)plVar6[1] + local_110 == 1) goto LAB_143f65b59;
      goto LAB_143f65b48;
    }
    if (1 < local_110) {
      lVar13 = 0;
      do {
        uVar12 = *(ushort *)(local_118 + lVar13);
        uVar11 = (ulonglong)uVar12;
        uVar14 = *(ushort *)(*plVar6 + lVar13);
        if (uVar12 == uVar14) {
          if (uVar12 == 0) break;
        }
        else {
          if (0x7f < (uVar14 | uVar12)) goto LAB_143f65b35;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar15 = (ulonglong)uVar14;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar15]) goto LAB_143f65b35;
        }
        lVar13 = lVar13 + 2;
      } while( true );
    }
    goto LAB_143f65b59;
  }
LAB_143f65ab3:
  FUN_148abf402(&local_118);
LAB_143f65b6f:
  FUN_1400b22c2(&local_138,&DAT_149e02088);
  FUN_1400b22c2(local_128,&DAT_149e02088);
  local_140[0] = 0;
  local_50 = L"Error_Decline_Game_Invite";
  local_48 = 0x19;
  FUN_1446e940c(local_168,&local_50);
  local_50 = L"ShiftUI";
  local_48 = 7;
  FUN_1446e940c(local_154,&local_50);
  local_50 = L"Error Declining Game Invite";
  local_48 = 0x1b;
  FUN_140208c1e(&local_150,local_154,local_168,&local_50);
  plVar6 = local_150;
  if (*(code **)(*local_150 + 0x50) != FUN_144828418) {
    plVar6 = (longlong *)(**(code **)(*local_150 + 0x50))();
  }
  FUN_1447a1fc0(plVar6);
  pcVar2 = *(code **)(*local_150 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    pplVar7 = (longlong **)(local_150 + 3);
    if (local_150[5] != 0) {
      pplVar7 = (longlong **)(local_150[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    pplVar7 = (longlong **)(local_150 + 2);
  }
  else {
    pplVar7 = (longlong **)(*pcVar2)(local_150);
  }
  if (&local_138 != pplVar7) {
    iVar9 = *(int *)(pplVar7 + 1);
    plVar6 = *pplVar7;
    local_130 = iVar9;
    if (iVar9 == 0 && local_12c == 0) {
      local_12c = 0;
    }
    else {
      FUN_1446dd670(&local_138,iVar9);
      if (iVar9 != 0) {
        memcpy(local_138,plVar6,(longlong)iVar9 * 2);
      }
    }
  }
  if (local_150 != (longlong *)0x0) {
    (**(code **)(*local_150 + 0x10))();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar5 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar5,"Notification_Decline_Game_Invite_Response",local_140);
  }
  plVar6 = local_138;
  if (local_128[0] != 0) {
    FUN_1400020a8();
    plVar6 = local_138;
  }
  goto LAB_143f65d0e;
LAB_143f65b35:
  if (uVar12 == uVar14) {
LAB_143f65b59:
    FUN_148abf402(&local_118);
    if (plVar6 == (longlong *)0x0) goto LAB_143f65b6f;
    local_150 = (longlong *)0x0;
    local_148 = *(int *)(param_1 + 1);
    lVar13 = (longlong)local_148;
    _Src = (void *)*param_1;
    if (lVar13 == 0) {
      local_144 = 0;
    }
    else {
      FUN_1446dd670(&local_150,local_148,0);
      memcpy(local_150,_Src,lVar13 * 2);
    }
    FUN_146209706(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x90,uVar3,param_1);
    if (DAT_14cb98910 == DAT_14cb9893c) goto LAB_143f65e04;
    puVar8 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar8 = DAT_14cb98948;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)(DAT_14cb98950 - 1U & uVar3) * 4);
    if (iVar9 == -1) goto LAB_143f65e04;
    goto LAB_143f65deb;
  }
LAB_143f65b48:
  plVar6 = plVar6 + 0x19;
  if (plVar6 == plVar4) goto LAB_143f65ab3;
  goto LAB_143f65ae9;
  while (iVar9 = *(int *)(lVar13 + 0x18), iVar9 != -1) {
LAB_143f65deb:
    lVar13 = DAT_14cb98908 + (longlong)iVar9 * 0x20;
    if (*(uint *)(DAT_14cb98908 + (longlong)iVar9 * 0x20) == uVar3) goto LAB_143f65e06;
  }
LAB_143f65e04:
  lVar13 = 0;
LAB_143f65e06:
  plVar6 = local_150;
  if ((longlong)*(int *)(lVar13 + 0x10) != 0) {
    plVar4 = *(longlong **)(lVar13 + 8);
    plVar10 = plVar4 + (longlong)*(int *)(lVar13 + 0x10) * 0x19;
LAB_143f65e2b:
    plVar1 = plVar10 + -0x18;
    plVar10 = plVar10 + -0x19;
    if (local_148 != (int)*plVar1) {
      if ((int)*plVar1 + local_148 == 1) goto LAB_143f65e9c;
      goto LAB_143f65e92;
    }
    if (1 < local_148) {
      lVar13 = 0;
      do {
        uVar12 = *(ushort *)((longlong)local_150 + lVar13);
        uVar11 = (ulonglong)uVar12;
        uVar14 = *(ushort *)(*plVar10 + lVar13);
        if (uVar12 == uVar14) {
          if (uVar12 == 0) break;
        }
        else {
          if (0x7f < (uVar14 | uVar12)) goto LAB_143f65e81;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar15 = (ulonglong)uVar14;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar15]) goto LAB_143f65e81;
        }
        lVar13 = lVar13 + 2;
      } while( true );
    }
    goto LAB_143f65e9c;
  }
  goto LAB_143f65d0e;
LAB_143f65e81:
  if (uVar12 == uVar14) {
LAB_143f65e9c:
    if ((int)((ulonglong)((longlong)plVar10 - (longlong)plVar4) >> 3) * -0x3d70a3d7 != -1) {
      if (DAT_14cb98910 == DAT_14cb9893c) goto LAB_143f65efe;
      puVar8 = &DAT_14cb98940;
      if (DAT_14cb98948 != (undefined *)0x0) {
        puVar8 = DAT_14cb98948;
      }
      iVar9 = *(int *)(puVar8 + (ulonglong)(DAT_14cb98950 - 1U & uVar3) * 4);
      if (iVar9 == -1) goto LAB_143f65efe;
      goto LAB_143f65ee5;
    }
    goto LAB_143f65d0e;
  }
LAB_143f65e92:
  if (plVar10 == plVar4) goto LAB_143f65d0e;
  goto LAB_143f65e2b;
  while (iVar9 = *(int *)(lVar13 + 0x18), iVar9 != -1) {
LAB_143f65ee5:
    lVar13 = DAT_14cb98908 + (longlong)iVar9 * 0x20;
    if (*(uint *)(DAT_14cb98908 + (longlong)iVar9 * 0x20) == uVar3) goto LAB_143f65f00;
  }
LAB_143f65efe:
  lVar13 = 0;
LAB_143f65f00:
  FUN_148abfbc6(lVar13 + 8);
  FUN_1400b22c2(&local_138,&DAT_149e02088);
  FUN_1400b22c2(local_128,&DAT_149e02088);
  local_140[0] = 1;
  local_50 = L"Decline_Game_Invite";
  local_48 = 0x13;
  FUN_1446e940c(local_154,&local_50);
  local_50 = L"ShiftUI";
  local_48 = 7;
  FUN_1446e940c(local_16c,&local_50);
  local_50 = L"Game Invite Declined";
  local_48 = 0x14;
  FUN_140208c1e(local_168,local_16c,local_154,&local_50);
  plVar6 = local_168[0];
  if (*(code **)(*local_168[0] + 0x50) != FUN_144828418) {
    plVar6 = (longlong *)(**(code **)(*local_168[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar6);
  pcVar2 = *(code **)(*local_168[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    pplVar7 = (longlong **)(local_168[0] + 3);
    if (local_168[0][5] != 0) {
      pplVar7 = (longlong **)(local_168[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    pplVar7 = (longlong **)(local_168[0] + 2);
  }
  else {
    pplVar7 = (longlong **)(*pcVar2)(local_168[0]);
  }
  if (&local_138 != pplVar7) {
    iVar9 = *(int *)(pplVar7 + 1);
    plVar6 = *pplVar7;
    local_130 = iVar9;
    if (iVar9 == 0 && local_12c == 0) {
      local_12c = 0;
    }
    else {
      FUN_1446dd670(&local_138,iVar9);
      if (iVar9 != 0) {
        memcpy(local_138,plVar6,(longlong)iVar9 * 2);
      }
    }
  }
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar5 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar5,"Notification_Decline_Game_Invite_Response",local_140);
  }
  FUN_14154d759();
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  plVar6 = local_150;
  if (local_138 != (longlong *)0x0) {
    FUN_1400020a8();
    plVar6 = local_150;
  }
LAB_143f65d0e:
  if (plVar6 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    FUN_148abf402(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f660e9 FUN_143f660e9 body=645 status=ok
// SIG undefined FUN_143f660e9(void)

void FUN_143f660e9(undefined8 *param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined *puVar6;
  longlong *plVar7;
  longlong lVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  uVar3 = DAT_14cb987b8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_1 + 1);
  lVar8 = (longlong)local_48;
  _Src = (void *)*param_1;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar8 * 2);
  }
  if (*(int *)(param_1 + 5) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)param_1[4];
  }
  lVar8 = 0;
  while( true ) {
    uVar10 = *(ushort *)((longlong)puVar4 + lVar8);
    uVar11 = (ulonglong)uVar10;
    uVar9 = *(ushort *)((longlong)L"game_invite" + lVar8);
    if (uVar10 != uVar9) break;
    if (uVar10 == 0) goto LAB_143f661b9;
LAB_143f6618d:
    lVar8 = lVar8 + 2;
  }
  if ((uVar9 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    uVar12 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar12]) goto LAB_143f6618d;
  }
  if (uVar10 != uVar9) goto LAB_143f661d3;
LAB_143f661b9:
  FUN_146209706(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0xa8,uVar3,param_1);
LAB_143f661d3:
  if (DAT_14cb98910 != DAT_14cb9893c) {
    puVar6 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar6 = DAT_14cb98948;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb98950 - 1U & uVar3) * 4);
    while (iVar5 != -1) {
      lVar8 = DAT_14cb98908 + (longlong)iVar5 * 0x20;
      if (*(uint *)(DAT_14cb98908 + (longlong)iVar5 * 0x20) == uVar3) goto LAB_143f6622e;
      iVar5 = *(int *)(lVar8 + 0x18);
    }
  }
  lVar8 = 0;
LAB_143f6622e:
  if ((longlong)*(int *)(lVar8 + 0x10) != 0) {
    plVar2 = *(longlong **)(lVar8 + 8);
    plVar7 = plVar2 + (longlong)*(int *)(lVar8 + 0x10) * 0x19;
LAB_143f66253:
    plVar1 = plVar7 + -0x18;
    plVar7 = plVar7 + -0x19;
    if (local_48 != (int)*plVar1) {
      if ((int)*plVar1 + local_48 == 1) goto LAB_143f662c5;
      goto LAB_143f662be;
    }
    if (1 < local_48) {
      lVar8 = 0;
      do {
        uVar10 = *(ushort *)((longlong)local_50 + lVar8);
        uVar11 = (ulonglong)uVar10;
        uVar9 = *(ushort *)(*plVar7 + lVar8);
        if (uVar10 == uVar9) {
          if (uVar10 == 0) break;
        }
        else {
          if (0x7f < (uVar9 | uVar10)) goto LAB_143f662ab;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar12 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar12]) goto LAB_143f662ab;
        }
        lVar8 = lVar8 + 2;
      } while( true );
    }
    goto LAB_143f662c5;
  }
  goto LAB_143f66338;
LAB_143f662ab:
  if (uVar10 == uVar9) {
LAB_143f662c5:
    if ((int)((ulonglong)((longlong)plVar7 - (longlong)plVar2) >> 3) * -0x3d70a3d7 != -1) {
      if (DAT_14cb98910 == DAT_14cb9893c) goto LAB_143f66323;
      puVar6 = &DAT_14cb98940;
      if (DAT_14cb98948 != (undefined *)0x0) {
        puVar6 = DAT_14cb98948;
      }
      iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb98950 - 1U & uVar3) * 4);
      if (iVar5 == -1) goto LAB_143f66323;
      goto LAB_143f6630a;
    }
    goto LAB_143f66338;
  }
LAB_143f662be:
  if (plVar7 == plVar2) goto LAB_143f66338;
  goto LAB_143f66253;
  while (iVar5 = *(int *)(lVar8 + 0x18), iVar5 != -1) {
LAB_143f6630a:
    lVar8 = DAT_14cb98908 + (longlong)iVar5 * 0x20;
    if (*(uint *)(DAT_14cb98908 + (longlong)iVar5 * 0x20) == uVar3) goto LAB_143f66325;
  }
LAB_143f66323:
  lVar8 = 0;
LAB_143f66325:
  FUN_148abfbc6(lVar8 + 8);
  FUN_14154d759();
LAB_143f66338:
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_148abf402(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6636f FUN_143f6636f body=2912 status=ok
// SIG undefined FUN_143f6636f(void)

void FUN_143f6636f(longlong *param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined1 auStack_298 [32];
  longlong ****local_278;
  longlong *local_270;
  longlong **local_268;
  longlong *local_260;
  undefined1 local_258 [36];
  undefined4 local_234;
  longlong local_230 [2];
  undefined4 local_21c;
  longlong local_218 [2];
  undefined4 local_204;
  longlong local_200 [2];
  undefined4 local_1ec;
  longlong local_1e8 [2];
  undefined4 local_1d4;
  longlong local_1d0 [2];
  undefined4 local_1bc;
  longlong local_1b8 [2];
  undefined4 local_1a4;
  longlong local_1a0 [2];
  undefined4 local_18c;
  longlong local_188 [2];
  undefined4 local_174;
  longlong *local_170 [2];
  undefined4 local_15c;
  longlong local_158 [2];
  undefined4 local_144;
  longlong local_140 [2];
  undefined4 local_12c;
  longlong *local_128;
  int local_120;
  undefined4 local_11c;
  longlong ***local_118;
  ulonglong *puStack_110;
  longlong **local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *plStack_e8;
  undefined4 *local_e0;
  longlong **local_d8;
  undefined4 *local_d0;
  longlong *local_c8;
  undefined4 *local_c0;
  longlong *local_b8;
  undefined4 *local_b0;
  longlong *local_a8;
  undefined4 *local_a0;
  longlong *local_98;
  undefined4 *local_90;
  longlong *local_88;
  undefined4 *local_80;
  longlong *local_78;
  undefined4 *local_70;
  longlong *local_68;
  undefined4 *local_60;
  longlong *local_58;
  undefined4 *local_50;
  ulonglong local_48;
  
  pplVar10 = DAT_14cb98818;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_270 = param_2;
  FUN_1401e7e86(local_258,param_1);
  uVar3 = DAT_14cb987b8;
  uVar6 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar7 = (longlong *)FUN_140773fe2();
  if (((plVar7 == (longlong *)0x0) ||
      (lVar8 = (**(code **)(*plVar7 + 0x2d0))(plVar7,uVar3,uVar6), lVar8 == 0)) ||
     (*(longlong *)(lVar8 + 0x2b8) == 0)) {
    FUN_1400b22c2(&local_100,&DAT_149e02088);
    FUN_1400b22c2(&local_f0,&DAT_149e02088);
    local_108 = (longlong **)((ulonglong)local_108 & 0xffffffffffffff00);
    local_118 = (longlong ***)0x14b50235e;
    puStack_110._0_4_ = 0x21;
    FUN_1446e940c(local_140,&local_118);
    local_118 = (longlong ***)0x14b501600;
    puStack_110._0_4_ = 7;
    FUN_1446e940c(local_158,&local_118);
    local_118 = (longlong ***)0x14b502334;
    puStack_110 = (ulonglong *)CONCAT44(puStack_110._4_4_,0x14);
    FUN_140208c1e(&local_128,local_158,local_140,&local_118);
    plVar7 = local_128;
    if (*(code **)(*local_128 + 0x50) != FUN_144828418) {
      plVar7 = (longlong *)(**(code **)(*local_128 + 0x50))();
    }
    FUN_1447a1fc0(plVar7);
    pcVar1 = *(code **)(*local_128 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      pplVar10 = (longlong **)(local_128 + 3);
      if (local_128[5] != 0) {
        pplVar10 = (longlong **)(local_128[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      pplVar10 = (longlong **)(local_128 + 2);
    }
    else {
      pplVar10 = (longlong **)(*pcVar1)(local_128);
    }
    if (&local_100 != pplVar10) {
      uVar12 = *(uint *)(pplVar10 + 1);
      plVar7 = *pplVar10;
      local_f8 = (longlong **)CONCAT44(local_f8._4_4_,uVar12);
      if (uVar12 == 0 && local_f8._4_4_ == 0) {
        local_f8 = (longlong **)(ulonglong)uVar12;
      }
      else {
        FUN_1446dd670(&local_100,uVar12);
        if (uVar12 != 0) {
          memcpy(local_100,plVar7,(longlong)(int)uVar12 * 2);
        }
      }
    }
    if (local_128 != (longlong *)0x0) {
      (**(code **)(*local_128 + 0x10))();
    }
    FUN_14657de87(&local_128,param_1);
    FUN_1400b22c2(local_158,&DAT_149dfd136);
    local_118 = (longlong ***)0x14b5023c4;
    puStack_110._0_4_ = 0x20;
    FUN_1446e940c(local_188,&local_118);
    local_118 = (longlong ***)0x14b501600;
    puStack_110._0_4_ = 7;
    FUN_1446e940c(local_1a0,&local_118);
    local_118 = (longlong ***)0x14b5023a2;
    puStack_110 = (ulonglong *)CONCAT44(puStack_110._4_4_,0x10);
    FUN_140208c1e(local_170,local_1a0,local_188,&local_118);
    plVar7 = local_170[0];
    if (*(code **)(*local_170[0] + 0x50) != FUN_144828418) {
      plVar7 = (longlong *)(**(code **)(*local_170[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar7);
    pcVar1 = *(code **)(*local_170[0] + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar7 = local_170[0] + 3;
      if (local_170[0][5] != 0) {
        plVar7 = (longlong *)(local_170[0][5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar7 = local_170[0] + 2;
    }
    else {
      plVar7 = (longlong *)(*pcVar1)(local_170[0]);
    }
    FUN_1407ec8fc(local_140,plVar7,local_158);
    FUN_1401c7f3e(&local_118,local_140,&local_128);
    if (local_f0 != (longlong ***)0x0) {
      FUN_1400020a8();
    }
    local_f0 = local_118;
    plStack_e8 = (longlong *)puStack_110;
    local_118 = (longlong ***)0x0;
    puStack_110 = (ulonglong *)0x0;
    if (local_140[0] != 0) {
      FUN_1400020a8();
    }
    if (local_170[0] != (longlong *)0x0) {
      (**(code **)(*local_170[0] + 0x10))();
    }
    if (local_158[0] != 0) {
      FUN_1400020a8();
    }
    if (local_128 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14cb98810 != (longlong *)0x0) {
      uVar6 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf534(uVar6,"Player_Profile_Report_Player_Response",&local_108);
    }
    plVar7 = local_100;
    if (local_f0 != (longlong ***)0x0) {
      FUN_1400020a8();
      plVar7 = local_100;
    }
    goto LAB_143f6675d;
  }
  local_268 = pplVar10;
  local_260 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb98a98) && (FUN_144b3d300(&DAT_14cb98a98), DAT_14cb98a98 == -1)) {
    FUN_1400b22c2(&local_128,"USERNAME");
    local_100 = (longlong *)&local_12c;
    local_12c = 0;
    local_108 = &local_128;
    FUN_1400b22c2(local_140,"SPORTSMANSHIP");
    local_f0 = (longlong ***)&local_144;
    local_144 = 1;
    local_f8 = (longlong **)local_140;
    FUN_1400b22c2(local_158,"ABUSE");
    local_e0 = &local_15c;
    local_15c = 2;
    plStack_e8 = local_158;
    FUN_1400b22c2(local_170,"HATESPEECH");
    local_d0 = &local_174;
    local_174 = 3;
    local_d8 = local_170;
    FUN_1400b22c2(local_188,"LEAVINGAFK");
    local_c0 = &local_18c;
    local_18c = 4;
    local_c8 = local_188;
    FUN_1400b22c2(local_1a0,"CHEATING");
    local_b0 = &local_1a4;
    local_1a4 = 5;
    local_b8 = local_1a0;
    FUN_1400b22c2(local_1b8,"REALLIFEINFORMATIONDOXING");
    local_a0 = &local_1bc;
    local_1bc = 6;
    local_a8 = local_1b8;
    FUN_1400b22c2(local_1d0,"FRAUD");
    local_90 = &local_1d4;
    local_1d4 = 7;
    local_98 = local_1d0;
    FUN_1400b22c2(local_1e8,"SEXUALCONTENT");
    local_80 = &local_1ec;
    local_1ec = 8;
    local_88 = local_1e8;
    FUN_1400b22c2(local_200,"MINORABUSE");
    local_70 = &local_204;
    local_204 = 9;
    local_78 = local_200;
    FUN_1400b22c2(local_218,"TERRORISM");
    local_60 = &local_21c;
    local_21c = 10;
    local_68 = local_218;
    FUN_1400b22c2(local_230,"OTHERILLEGALCONTENT");
    local_50 = &local_234;
    local_234 = 0xb;
    puStack_110 = &local_48;
    local_118 = &local_108;
    local_58 = local_230;
    FUN_148abf680();
    if (local_230[0] != 0) {
      FUN_1400020a8();
    }
    if (local_218[0] != 0) {
      FUN_1400020a8();
    }
    if (local_200[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1d0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_188[0] != 0) {
      FUN_1400020a8();
    }
    if (local_170[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_158[0] != 0) {
      FUN_1400020a8();
    }
    if (local_140[0] != 0) {
      FUN_1400020a8();
    }
    if (local_128 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    atexit(FUN_143f67432);
    _Init_thread_footer(&DAT_14cb98a98);
  }
  iVar5 = (int)local_270[1];
  uVar12 = 0;
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  if (iVar4 < 1) {
    iVar5 = FUN_148ac73c6(0,local_270);
    if (iVar5 != -1) goto LAB_143f66914;
  }
  else {
    if (iVar5 == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    else {
      puVar14 = (undefined2 *)*local_270;
    }
    lVar9 = 0;
    uVar11 = 0;
    do {
      uVar12 = ((uint)(0x19 < (ushort)puVar14[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar14[lVar9])
               - 0x20;
      uVar13 = (uint)(uVar11 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar12) & 0xff) * 4);
      uVar11 = (ulonglong)
               (uVar13 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar12 >> 8 & 0xff) * 4));
      lVar9 = lVar9 + 1;
    } while (iVar4 != (int)lVar9);
    iVar5 = FUN_148ac73c6(uVar11,local_270);
    uVar12 = 0;
    if (iVar5 != -1) {
      lVar9 = 0;
      uVar12 = 0;
      do {
        uVar13 = ((uint)(ushort)puVar14[lVar9] + (uint)(0x19 < (ushort)puVar14[lVar9] - 0x61) * 0x20
                 ) - 0x20;
        uVar12 = uVar12 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar12 ^ uVar13) & 0xff) * 4)
        ;
        uVar12 = uVar12 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar13 >> 8 & 0xff) * 4);
        lVar9 = lVar9 + 1;
      } while (iVar4 != (int)lVar9);
LAB_143f66914:
      iVar5 = FUN_148ac73c6(uVar12);
      lVar9 = 0;
      if (iVar5 != -1) {
        lVar9 = (longlong)iVar5 * 0x20 + DAT_14cb98a48;
      }
      uVar12 = *(uint *)(lVar9 + 0x10);
    }
  }
  param_3 = local_260;
  local_108 = local_268;
  local_100 = (longlong *)CONCAT44(local_100._4_4_,uVar3);
  local_f8 = (longlong **)0x0;
  uVar13 = *(uint *)(param_1 + 1);
  pvVar2 = (void *)*param_1;
  local_f0 = (longlong ***)CONCAT44(local_f0._4_4_,uVar13);
  if ((longlong)(int)uVar13 == 0) {
    local_f0 = (longlong ***)(ulonglong)uVar13;
  }
  else {
    FUN_1446dd670(&local_f8,uVar13,0);
    memcpy(local_f8,pvVar2,(longlong)(int)uVar13 * 2);
  }
  local_118 = (longlong ***)0x0;
  puStack_110 = (ulonglong *)((ulonglong)puStack_110 & 0xffffffff00000000);
  FUN_1446efa72(&local_118,0,4,0x10);
  puStack_110 = (ulonglong *)CONCAT44(puStack_110._4_4_,4);
  *local_118 = (longlong **)&PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  pplVar10 = (longlong **)(DAT_14c758608 + 1);
  lVar9 = DAT_14c758608 + 1;
  if (pplVar10 == (longlong **)0x0) {
    LOCK();
    UNLOCK();
    pplVar10 = (longlong **)(DAT_14c758608 + 2);
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_118[2] = pplVar10;
  *local_118 = (longlong **)&PTR_FUN_14b505b50;
  local_118[3] = local_108;
  *(undefined4 *)(local_118 + 4) = local_100._0_4_;
  local_118[5] = local_f8;
  local_f8 = (longlong **)0x0;
  *(undefined4 *)(local_118 + 6) = (undefined4)local_f0;
  *(undefined4 *)((longlong)local_118 + 0x34) = local_f0._4_4_;
  local_f0 = (longlong ***)0x0;
  local_128 = (longlong *)0x0;
  local_120 = (int)param_3[1];
  lVar9 = (longlong)local_120;
  pvVar2 = (void *)*param_3;
  if (lVar9 == 0) {
    local_11c = 0;
  }
  else {
    FUN_1446dd670(&local_128,local_120,0);
    memcpy(local_128,pvVar2,lVar9 * 2);
  }
  FUN_148a57d9a(local_258,local_140);
  local_278 = &local_118;
  FUN_148a608f0(lVar8,local_140,uVar12,&local_128);
  plVar7 = (longlong *)local_f8;
  if (local_140[0] != 0) {
    FUN_1400020a8();
    plVar7 = (longlong *)local_f8;
  }
LAB_143f6675d:
  if (plVar7 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401e7e48(local_258);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if (*local_270 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 == 0) {
    if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_298);
}



// FUNCTION 143f66eec FUN_143f66eec body=1349 status=ok
// SIG undefined FUN_143f66eec(void)

void FUN_143f66eec(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_138 [44];
  undefined4 local_10c;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  int local_d0;
  undefined8 *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar8 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar9 = (longlong *)FUN_140773fe2();
  if (plVar9 != (longlong *)0x0) {
    lVar10 = (**(code **)(*plVar9 + 0x2d0))(plVar9,param_1,uVar8);
    if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x2b8) != 0)) {
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      if ((*(int *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x130) == 0) ||
         (plVar9 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x128),
         plVar9 == (longlong *)0x0)) {
LAB_143f67215:
        if (((int)param_3[1] != 0) && (plVar9 = (longlong *)*param_3, plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x60))(plVar9,param_1,&local_b8);
        }
      }
      else {
        cVar6 = (**(code **)(*plVar9 + 0x30))();
        if (cVar6 == '\0') goto LAB_143f67215;
        uVar8 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
        FUN_143f5f180(&local_e8,uVar8);
        local_100 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          local_f8 = 0;
          uStack_f0 = 0;
          iVar3 = (int)param_2[1];
          if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar3);
          }
          if (iVar3 != 0) {
            FUN_1459b6c3c(&local_f8);
          }
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
          }
          local_108 = local_e0;
          local_10c = param_1;
          if ((longlong)(int)param_2[1] != 0) {
            lVar13 = *param_2;
            lVar14 = (longlong)(int)param_2[1] << 4;
            do {
              FUN_140b6e409(&local_c8,lVar10,lVar13);
              iVar3 = (int)plStack_c0;
              if (local_c8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (1 < iVar3) {
                FUN_140b6e409(&local_d8,lVar10,lVar13);
                (**(code **)(*local_100 + 0x120))(local_100,&local_c8,&local_d8);
                plVar9 = plStack_c0;
                puVar4 = local_c8;
                local_c8 = (undefined8 *)0x0;
                plStack_c0 = (longlong *)0x0;
                if (local_d8 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                uVar5 = uStack_f0;
                lVar12 = (longlong)(int)uStack_f0;
                uVar7 = (int)uStack_f0 + 1;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
                if (uStack_f0._4_4_ < uVar7) {
                  FUN_1413eac7e(&local_f8,uVar5 & 0xffffffff);
                }
                *(undefined8 **)(local_f8 + lVar12 * 0x10) = puVar4;
                *(longlong **)(local_f8 + 8 + lVar12 * 0x10) = plVar9;
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                  UNLOCK();
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
                }
              }
              lVar13 = lVar13 + 0x10;
              lVar14 = lVar14 + -0x10;
            } while (lVar14 != 0);
          }
          plVar9 = local_108;
          if (local_108 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_108 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_108)(local_108);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          if ((int)uStack_f0 == 0) {
            if (((int)param_3[1] != 0) && (plVar9 = (longlong *)*param_3, plVar9 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar9 + 0x60))(plVar9,local_10c,&local_b8);
            }
          }
          else {
            lVar10 = *(longlong *)(DAT_14cb98ab0 + 0x28);
            lVar13 = *param_3;
            *param_3 = 0;
            lVar14 = param_3[1];
            *(undefined4 *)(param_3 + 1) = 0;
            local_c8 = (undefined8 *)0x0;
            plStack_c0 = (longlong *)((ulonglong)plStack_c0 & 0xffffffff00000000);
            FUN_1446efa72(&local_c8,0,3,0x10);
            plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,3);
            *local_c8 = &PTR_LAB_14b5072b0;
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
            local_c8[2] = lVar11;
            *local_c8 = &PTR_FUN_14b505300;
            local_c8[3] = lVar13;
            local_d8 = (undefined8 *)0x0;
            *(int *)(local_c8 + 4) = (int)lVar14;
            local_d0 = 0;
            if (*(int *)(lVar10 + 0x130) == 0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = *(longlong **)(lVar10 + 0x128);
            }
            (**(code **)(*plVar9 + 0x58))(plVar9,local_10c,&local_f8,&local_c8);
            if ((int)plStack_c0 == 0) {
LAB_143f67332:
              if (local_c8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_c8 != (undefined8 *)0x0) {
              (**(code **)*local_c8)(local_c8,0);
              FUN_1446efa72(&local_c8,0,0,0x10);
              plStack_c0 = (longlong *)((ulonglong)plStack_c0 & 0xffffffff00000000);
              goto LAB_143f67332;
            }
            if (local_d0 != 0) {
              if (local_d8 == (undefined8 *)0x0) goto LAB_143f67385;
              (**(code **)*local_d8)(local_d8,0);
              FUN_1446efa72(&local_d8,0,0,0x10);
              local_d0 = 0;
            }
            if (local_d8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_143f67385:
          FUN_14127b1cd(local_f8,uStack_f0 & 0xffffffff);
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
        }
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_e0 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_145d43c70(&local_b8);
    }
  }
  if ((int)param_3[1] != 0) {
    puVar4 = (undefined8 *)*param_3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f66fa1;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_143f66fa1:
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f67432 FUN_143f67432 body=41 status=ok
// SIG undefined FUN_143f67432(void)

void FUN_143f67432(void)

{
  DAT_14cb98a90 = 0;
  if (DAT_14cb98a88 != 0) {
    FUN_1400020a8();
  }
  FUN_148ac382a();
  return;
}



// FUNCTION 143f6745c FUN_143f6745c body=170 status=ok
// SIG undefined FUN_143f6745c(void)

void FUN_143f6745c(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x20) == '\x01') && (DAT_14cb987b8 == param_2)) {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
    plVar2 = (longlong *)FUN_140773fe2();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x2d0))(plVar2,param_2,uVar1);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x2b8) != 0)) {
        if (DAT_14cb98860 == 5) {
          FUN_143f60b98(param_1,*(undefined4 *)(lVar3 + 0x38));
          return;
        }
        if (DAT_14cb98860 == 2) {
          FUN_143f5fa64(*(undefined4 *)(lVar3 + 0x38));
          return;
        }
        if (DAT_14cb98860 == 1) {
          FUN_143f5fc4f(*(undefined4 *)(lVar3 + 0x38));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143f67508 FUN_143f67508 body=358 status=ok
// SIG undefined FUN_143f67508(void)

longlong * FUN_143f67508(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  uVar2 = DAT_14cb987b8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar4 = (longlong *)FUN_140773fe2();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x2d0))(plVar4,uVar2,uVar3);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x2b8) != 0)) {
      FUN_140b6f107(&local_38,lVar5,param_2);
      if (local_30 < 2) {
        FUN_140b6e409(&local_48,lVar5,param_2);
        if (local_40 < 2) {
          FUN_1400b22c2(param_1,&DAT_149e02088);
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          *param_1 = local_48;
          local_48 = 0;
          *(int *)(param_1 + 1) = local_40;
          *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
        }
      }
      else {
        *param_1 = 0;
        iVar1 = *(int *)(param_2 + 1);
        _Src = (void *)*param_2;
        *(int *)(param_1 + 1) = iVar1;
        if ((longlong)iVar1 == 0) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_1,iVar1,0);
          memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
        }
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 143f67670 FUN_143f67670 body=128 status=ok
// SIG undefined FUN_143f67670(void)

void FUN_143f67670(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 4;
  if ((int)param_1[5] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f676b4;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f676b4:
  FUN_141323308(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f676f0 FUN_143f676f0 body=153 status=ok
// SIG undefined FUN_143f676f0(void)

void FUN_143f676f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((((lVar1 != 0) && (DAT_14cb98798 != param_2)) && (DAT_14cb987a0 != param_2)) &&
     ((DAT_14cb987a8 != param_2 && (DAT_14cb987b0 != param_2)))) {
    local_20 = param_2;
    FUN_144a13f80(lVar1 + 0x1f0,local_24,&local_20,0);
    FUN_144a8b5fe(lVar1 + 0x240,local_20);
    FUN_14571a8e6(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6778a FUN_143f6778a body=119 status=ok
// SIG undefined FUN_143f6778a(void)

void FUN_143f6778a(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((((*(longlong *)(param_1 + 0x28) != 0) && (DAT_14cb98798 != param_2)) &&
      (DAT_14cb987a0 != param_2)) && ((DAT_14cb987a8 != param_2 && (DAT_14cb987b0 != param_2)))) {
    local_10 = param_2;
    FUN_144a13f80(*(longlong *)(param_1 + 0x28) + 0x240,local_14,&local_10,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f67802 FUN_143f67802 body=760 status=ok
// SIG undefined FUN_143f67802(void)

undefined8 FUN_143f67802(longlong *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  size_t sVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *_Str;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_148 [40];
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  wchar_t *local_100;
  int local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_1[6] == 0) ||
     (plVar5 = (longlong *)(**(code **)(*param_1 + 0xf8))(), plVar5 == (longlong *)0x0)) {
    uVar7 = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[6] + 0x58))((longlong *)param_1[6],&local_100);
    _Str = local_100;
    if (local_f8 == 0) {
      _Str = L"";
    }
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
    }
    else {
      sVar6 = wcslen(_Str);
      local_e4 = 0;
      local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
      uVar9 = sVar6 & 0xffffffff;
      pwVar11 = _Str;
      do {
        iVar12 = (int)uVar9;
        if (iVar12 < 1) {
LAB_143f67985:
          local_50 = local_e4;
          uVar8 = local_e4 + 1;
          if (uVar8 < 0x81) goto LAB_143f679a2;
          FUN_1446efa72(&local_60,0,uVar8,1);
          local_f0 = local_60;
          goto LAB_143f679a4;
        }
        wVar1 = *pwVar11;
        uVar8 = (uint)(ushort)wVar1;
        pwVar10 = pwVar11 + 1;
        uVar13 = iVar12 - 1;
        if ((wVar1 & 0xfc00U) == 0xd800) {
          if (iVar12 == 1) {
            cVar4 = FUN_140024707(uVar8,&local_e4,&local_f0);
            if (cVar4 != '\0') goto LAB_143f67985;
            break;
          }
          if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
            uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
            pwVar10 = pwVar11 + 2;
            uVar13 = iVar12 - 2;
          }
        }
        cVar4 = FUN_140024707(uVar8,&local_e4,&local_f0);
        uVar9 = (ulonglong)uVar13;
        pwVar11 = pwVar10;
      } while (cVar4 != '\0');
      local_50 = 0xffffffff;
      uVar8 = 0;
LAB_143f679a2:
      local_f0 = (undefined1 *)0x0;
LAB_143f679a4:
      if (local_f0 == (undefined1 *)0x0) {
        local_f0 = local_e0;
      }
      iVar12 = (int)sVar6 + 1;
      local_e4 = uVar8;
      local_58 = local_f0;
      do {
        if (iVar12 < 1) break;
        wVar1 = *_Str;
        uVar8 = (uint)(ushort)wVar1;
        pwVar11 = _Str + 1;
        iVar3 = iVar12 + -1;
        if ((wVar1 & 0xfc00U) == 0xd800) {
          if (iVar12 == 1) {
            FUN_1400247af(uVar8,&local_f0,&local_e4);
            break;
          }
          if (((ushort)*pwVar11 & 0xfc00) == 0xdc00) {
            uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar11 + 0xfca02400;
            pwVar11 = _Str + 2;
            iVar3 = iVar12 + -2;
          }
        }
        iVar12 = iVar3;
        _Str = pwVar11;
        cVar4 = FUN_1400247af(uVar8,&local_f0,&local_e4);
      } while (cVar4 != '\0');
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,local_58);
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    local_110 = param_1[6];
    lVar2 = param_1[0xc];
    local_108 = param_1[7];
    if (local_108 != 0) {
      LOCK();
      *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
      UNLOCK();
    }
    FUN_148abe790(lVar2,&local_110);
    local_120 = param_1[6];
    lVar2 = param_1[0xe];
    local_118 = param_1[7];
    if (local_118 != 0) {
      LOCK();
      *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
      UNLOCK();
    }
    FUN_148abff3e(lVar2,&local_120);
    if (local_100 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 143f67afc FUN_143f67afc body=2749 status=ok
// SIG undefined FUN_143f67afc(void)

ulonglong FUN_143f67afc(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_318 [32];
  longlong *local_2f8;
  undefined4 *local_2f0;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined1 local_2d1;
  longlong local_2d0;
  longlong *local_2c8;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  undefined4 local_285;
  undefined1 local_281;
  longlong *local_280;
  longlong *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined2 local_250;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined2 local_22c;
  undefined4 local_229;
  undefined8 local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  longlong local_208 [53];
  ulonglong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if (*(longlong *)(DAT_14cb98ab0 + 0x28) == 0) {
    uVar13 = 0;
    uVar9 = 0;
  }
  else {
    uVar13 = *(uint *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0xc);
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar9 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar6 = *(uint *)(lVar11 + 0x10);
      bVar14 = uVar6 == 0;
      if (bVar14) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar6 = uVar10;
      }
      uVar9 = (ulonglong)uVar6;
    }
  }
  FUN_146568968(local_208);
  local_60 = (ulonglong)uVar13 | uVar9 << 0x20;
  FUN_1461259c0(&local_280,&local_2d0);
  if (local_278 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_278 + 1) = (int)local_278[1] + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)param_1[0xf];
  param_1[0xe] = (longlong)local_280;
  param_1[0xf] = (longlong)local_278;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  FUN_146589c0c(&local_280,local_218,local_208);
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_210 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)local_210 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_210 + 0x10))(local_210);
      }
    }
  }
  plVar7 = local_278;
  if (local_278 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_278 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_278)(local_278);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a4ff8c(local_208);
  if (param_1[0xe] == 0) {
LAB_143f67c73:
    lVar11 = *param_1;
  }
  else {
    local_278 = (longlong *)0x0;
    local_270 = 0x2d000000500;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    local_250 = 1;
    local_24c = 1;
    uStack_244 = 0;
    local_23c = 200;
    local_238 = 0;
    local_230 = 0x41000000;
    local_22c = 0;
    local_220 = 0;
    local_229 = 0;
    local_280 = param_1;
    plVar7 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b5064d0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    cohtml::ITextInputHandler::ITextInputHandler((ITextInputHandler *)(plVar7 + 2));
    plVar7[2] = (longlong)&PTR_FUN_14b5064f0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    *(undefined1 *)(plVar7 + 5) = 0;
    if (plVar7 == (longlong *)0x0) {
      param_1[8] = 0x10;
      plVar12 = (longlong *)param_1[9];
      if (plVar12 != (longlong *)0x0) {
        param_1[9] = 0;
LAB_143f67e1e:
        LOCK();
        plVar5 = plVar12 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (plVar7 != (longlong *)0x0) goto LAB_143f67e42;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      param_1[8] = (longlong)(plVar7 + 2);
      plVar12 = (longlong *)param_1[9];
      if (plVar7 == plVar12) {
        LOCK();
        plVar12 = plVar7 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      else {
        param_1[9] = (longlong)plVar7;
        if (plVar12 != (longlong *)0x0) goto LAB_143f67e1e;
      }
LAB_143f67e42:
      LOCK();
      plVar12 = plVar7 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    local_281 = 0;
    local_285 = 0x10001;
    local_298 = param_1[8];
    lVar11 = param_1[0xe];
    local_290 = param_1[9];
    if (local_290 != 0) {
      LOCK();
      *(int *)(local_290 + 8) = *(int *)(local_290 + 8) + 1;
      UNLOCK();
    }
    local_2a8 = *param_2;
    local_2a0 = param_2[1];
    if (local_2a0 != 0) {
      LOCK();
      *(int *)(local_2a0 + 8) = *(int *)(local_2a0 + 8) + 1;
      UNLOCK();
    }
    local_208[0] = 0;
    local_208[1] = 0;
    local_2f0 = &local_285;
    local_2f8 = &local_298;
    FUN_145c22798(lVar11,&local_280,local_208,&local_2a8);
    if (local_208[0] != 0) {
      FUN_1400020a8();
    }
    FUN_145ab037e(local_208);
    local_2f8 = (longlong *)&local_2d1;
    FUN_145ab11ce(&local_2d0,"SCanvas",
                  ".\\../Plugins/ShiftUI/ShiftUIPlugin/Source/Private/ShiftUIListener.cpp",0x4b);
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)param_1[0xb];
    param_1[10] = local_2d0;
    param_1[0xb] = (longlong)local_2c8;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar7 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    FUN_145ab01e4(&local_2d0,local_2b8,local_208);
    if (local_2b0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_2b0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_2b0)(local_2b0);
        LOCK();
        piVar1 = (int *)((longlong)local_2b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2b0 + 0x10))(local_2b0);
        }
      }
    }
    plVar7 = local_2c8;
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2c8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_2c8)(local_2c8);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    FUN_145aafdc8(local_208);
    if (param_1[10] == 0) goto LAB_143f67c73;
    FUN_145717202(param_1[10],local_208);
    local_2d0 = param_1[0xe];
    plVar7 = (longlong *)param_1[0xf];
    if (plVar7 == (longlong *)0x0) {
      local_2c8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_2c8 = plVar7;
    }
    FUN_14571701c(local_208,&local_2d0);
    plVar12 = local_2c8;
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2c8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_2c8)(local_2c8);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar7 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    FUN_1457172e6(local_208);
    FUN_146589c82(local_208);
    plVar12 = local_58;
    local_60 = param_1[0xe];
    plVar7 = (longlong *)param_1[0xf];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar5 = plVar7;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        puVar3 = (undefined8 *)*local_58;
        local_58 = plVar7;
        (*(code *)*puVar3)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar5 = local_58;
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          plVar5 = local_58;
        }
      }
    }
    local_58 = plVar5;
    FUN_1461d8d54(&local_2d0,&local_2d1);
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
      UNLOCK();
    }
    plVar12 = (longlong *)param_1[0xd];
    param_1[0xc] = local_2d0;
    param_1[0xd] = (longlong)local_2c8;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar12 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    FUN_1460d731a(&local_2d0,local_2e8,local_208);
    if (local_2e0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2e0 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_2e0)(local_2e0);
        LOCK();
        piVar1 = (int *)((longlong)local_2e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2e0 + 0x10))(local_2e0);
        }
      }
    }
    plVar12 = local_2c8;
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2c8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_2c8)(local_2c8);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar7 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      LOCK();
      plVar12 = plVar7 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    FUN_146589cbe(local_208);
    lVar11 = *param_1;
    if (param_1[0xc] != 0) {
      (**(code **)(lVar11 + 0x130))(param_1,0);
      lVar11 = param_1[0xc];
      if (*(int *)(lVar11 + 600) != 3) {
        FUN_1446efa72((longlong *)(lVar11 + 0x250),0,3,0x10);
        *(undefined4 *)(lVar11 + 600) = 3;
      }
      puVar3 = *(undefined8 **)(lVar11 + 0x250);
      *puVar3 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      puVar3[2] = lVar8;
      *puVar3 = &PTR_FUN_14b506780;
      puVar3[3] = param_1;
      puVar3[4] = &LAB_143f685ba;
      lVar11 = param_1[0xc];
      if (*(int *)(lVar11 + 0x268) != 3) {
        FUN_1446efa72((longlong *)(lVar11 + 0x260),0,3,0x10);
        *(undefined4 *)(lVar11 + 0x268) = 3;
      }
      puVar3 = *(undefined8 **)(lVar11 + 0x260);
      *puVar3 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      puVar3[2] = lVar8;
      *puVar3 = &PTR_FUN_14b506780;
      puVar3[3] = param_1;
      puVar3[4] = &LAB_143f685d8;
      lVar11 = param_1[0xe];
      if (*(int *)(lVar11 + 0x2d8) != 3) {
        FUN_1446efa72((longlong *)(lVar11 + 0x2d0),0,3,0x10);
        *(undefined4 *)(lVar11 + 0x2d8) = 3;
      }
      puVar3 = *(undefined8 **)(lVar11 + 0x2d0);
      *puVar3 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      puVar3[2] = lVar8;
      *puVar3 = &PTR_FUN_14b506780;
      puVar3[3] = param_1;
      puVar3[4] = &LAB_1414ba01e;
      lVar11 = param_1[0xe];
      if (*(int *)(lVar11 + 0x2e8) != 3) {
        FUN_1446efa72((longlong *)(lVar11 + 0x2e0),0,3,0x10);
        *(undefined4 *)(lVar11 + 0x2e8) = 3;
      }
      puVar3 = *(undefined8 **)(lVar11 + 0x2e0);
      *puVar3 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      puVar3[2] = lVar8;
      *puVar3 = &PTR_FUN_14b506780;
      puVar3[3] = param_1;
      puVar3[4] = &LAB_1414ba03c;
      lVar11 = param_1[0xe];
      if (*(int *)(lVar11 + 0x2f8) != 3) {
        FUN_1446efa72((longlong *)(lVar11 + 0x2f0),0,3,0x10);
        *(undefined4 *)(lVar11 + 0x2f8) = 3;
      }
      puVar3 = *(undefined8 **)(lVar11 + 0x2f0);
      *puVar3 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      puVar3[2] = lVar8;
      *puVar3 = &PTR_FUN_14b506780;
      puVar3[3] = param_1;
      puVar3[4] = FUN_148abffc4;
      lVar11 = param_1[0xe];
      if (*(int *)(lVar11 + 0x308) != 3) {
        FUN_1446efa72((longlong *)(lVar11 + 0x300),0,3,0x10);
        *(undefined4 *)(lVar11 + 0x308) = 3;
      }
      puVar3 = *(undefined8 **)(lVar11 + 0x300);
      *puVar3 = &PTR_LAB_14b504de0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      puVar3[2] = lVar8;
      *puVar3 = &PTR_FUN_14b5067f0;
      puVar3[3] = param_1;
      puVar3[4] = FUN_148abfff8;
      *(undefined1 *)(param_1[0xe] + 0x2c0) = 3;
      uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_143f67c81;
    }
  }
  (**(code **)(lVar11 + 0xe8))(param_1);
  uVar9 = 0;
LAB_143f67c81:
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143f685f5 FUN_143f685f5 body=313 status=ok
// SIG undefined FUN_143f685f5(void)

void FUN_143f685f5(void)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [40];
  undefined *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  longlong local_a8;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14cb98ab0 != 0) {
    FUN_145dc8030(&local_d0);
    if (local_a8 != 0) {
      FUN_14571a702(*(undefined8 *)(DAT_14cb98ab0 + 0x28));
    }
    FUN_145dc27b2(&local_d0);
    FUN_145ef1eee(&local_d0);
  }
  FUN_1427e390c(0,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  local_d0 = &DAT_14b504100;
  local_c8 = 7;
  local_c4 = 0;
  uVar1 = FUN_14001a6c0(&local_d0,1);
  FUN_14156ce54(&DAT_14c874628,uVar1,1,1);
  if ((local_10 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6872f FUN_143f6872f body=47 status=ok
// SIG undefined FUN_143f6872f(void)

void FUN_143f6872f(void)

{
  DAT_14cb98b10 = 0;
  if (DAT_14cb98b08 != 0) {
    FUN_1400020a8();
  }
  FUN_145c0832e(&DAT_14cb98ac8);
  return;
}



// FUNCTION 143f6875e FUN_143f6875e body=241 status=ok
// SIG undefined FUN_143f6875e(void)

undefined8 * FUN_143f6875e(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  uVar1 = DAT_14cb987b8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar3 = (longlong *)FUN_140773fe2();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x2d0))(plVar3,uVar1,uVar2);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2b8) != 0)) {
      FUN_140056680(local_38,L"https://shift.gearboxsoftware.com/");
      FUN_140056680(local_48,L"ShiftBaseUrl");
      FUN_148a6298e(param_1,lVar4,local_48,local_38);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 143f68850 FUN_143f68850 body=592 status=ok
// SIG undefined FUN_143f68850(void)

void FUN_143f68850(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  uint local_58;
  int local_54;
  longlong local_50 [2];
  uint *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  uVar1 = DAT_14cb987b8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar4 = (longlong *)FUN_140773fe2();
  if (((plVar4 != (longlong *)0x0) &&
      (lVar5 = (**(code **)(*plVar4 + 0x2d0))(plVar4,uVar1,uVar3), lVar5 != 0)) &&
     (*(longlong *)(lVar5 + 0x2b8) != 0)) {
    FUN_140056680(local_50,&DAT_149dfb77a);
    local_54 = 0;
    local_58 = *(uint *)(lVar5 + 0xc);
    if ((int)local_58 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((local_58 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar2 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar2 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar2 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar2 = iVar7;
      }
    }
    local_40 = &local_58;
    local_54 = iVar2;
    local_38 = local_50;
    FUN_148ac8624(local_2c);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,2,0x10);
    local_60 = 2;
    *local_68 = &PTR_LAB_14b506b70;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_68[2] = lVar6;
    *local_68 = &PTR_FUN_14b506b00;
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    FUN_1446efa72(&local_78,0,2,0x10);
    local_70 = 2;
    *local_78 = &PTR_LAB_14b506a90;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_78[2] = lVar6;
    *local_78 = &PTR_FUN_14b506a20;
    FUN_148a60bfb(lVar5,&local_78,&local_68);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f68aa1 FUN_143f68aa1 body=267 status=ok
// SIG undefined FUN_143f68aa1(void)

void FUN_143f68aa1(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  uVar1 = DAT_14cb987b8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar4 = (longlong *)FUN_140773fe2();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x2d0))(plVar4,uVar1,uVar3);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x2b8) != 0)) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      local_28 = 2;
      *local_30 = &PTR_LAB_14b4ec7e0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_30[2] = lVar6;
      *local_30 = &PTR_FUN_14b506be0;
      FUN_148a5cf47(lVar5,param_1,&local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f68bad FUN_143f68bad body=415 status=ok
// SIG undefined FUN_143f68bad(void)

undefined8 * FUN_143f68bad(undefined8 *param_1)

{
  undefined4 uVar1;
  void *_Src;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  uVar1 = DAT_14cb987b8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar3 = (longlong *)FUN_140773fe2();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x2d0))(plVar3,uVar1,uVar2);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2b8) != 0)) {
      local_38 = &local_a0;
      local_a0 = 0x3000300000000;
      local_98 = 3;
      local_96 = 3;
      local_94 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = (void *)0x0;
      uStack_40 = 0;
      local_28 = &local_38;
      local_30 = FUN_143ef2b5a;
      bifrost::account::get();
      _Src = local_48;
      *param_1 = 0;
      lVar4 = (longlong)(int)uStack_40;
      *(int *)(param_1 + 1) = (int)uStack_40;
      if (lVar4 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,uStack_40 & 0xffffffff,0);
        memcpy((void *)*param_1,_Src,lVar4 * 2);
      }
      if (local_48 != (void *)0x0) {
        FUN_1400020a8(local_48);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_c8);
}



// FUNCTION 143f68d4d FUN_143f68d4d body=422 status=ok
// SIG undefined FUN_143f68d4d(void)

void FUN_143f68d4d(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1416442d9(&local_30);
  uVar1 = DAT_14cb987b8;
  uVar4 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar5 = (longlong *)FUN_140773fe2();
  uVar7 = 0;
  if (plVar5 == (longlong *)0x0) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    lVar6 = (**(code **)(*plVar5 + 0x2d0))(plVar5,uVar1,uVar4);
    uVar3 = 0;
    if (lVar6 != 0) {
      uVar7 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      uVar3 = *(uint *)(lVar6 + 0x10);
      if (*(uint *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar3 = *(uint *)(lVar6 + 0x10);
        bVar11 = uVar3 == 0;
        if (bVar11) {
          *(uint *)(lVar6 + 0x10) = uVar8;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar11) {
          uVar3 = uVar8;
        }
      }
    }
  }
  local_40 = CONCAT44(uVar3,uVar7);
  iVar2 = FUN_148ac8928(uVar3 ^ uVar7);
  lVar6 = 0;
  if (iVar2 != -1) {
    lVar6 = (longlong)iVar2 * 0x20 + DAT_14cb98ac8;
  }
  if (lVar6 != 0) {
    puVar9 = &DAT_149dfb77a;
    puVar10 = &DAT_149dfb77a;
    if (*(int *)(lVar6 + 0x10) != 0) {
      puVar10 = *(undefined2 **)(lVar6 + 8);
    }
    if (iStack_28 != 0) {
      puVar9 = (undefined2 *)CONCAT44(uStack_2c,local_30);
    }
    FUN_140002266(&local_40,L"%s?link_code=%s",puVar9,puVar10);
    if (CONCAT44(uStack_2c,local_30) != 0) {
      FUN_1400020a8();
    }
    local_30 = (undefined4)local_40;
    uStack_2c = local_40._4_4_;
    iStack_28 = iStack_38;
    uStack_24 = uStack_34;
  }
  FUN_143f68ef4(&local_30);
  if (CONCAT44(uStack_2c,local_30) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f68ef4 FUN_143f68ef4 body=377 status=ok
// SIG undefined FUN_143f68ef4(void)

void FUN_143f68ef4(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  ulonglong uStack_80;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 1) < 2) goto LAB_143f68f16;
  uVar3 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar4 = (longlong *)FUN_14657d420(uVar3);
  if (plVar4 == (longlong *)0x0) goto LAB_143f68f16;
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_30);
  local_6c = 0;
  local_70 = 0;
  local_64 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_68 = DAT_14cb987b8;
  if (local_30 == (longlong *)0x0) {
LAB_143f69001:
    if (*(int *)(param_1 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    if (puVar5 != (undefined2 *)0x0) {
      FUN_14279a7c2(puVar5,0,0);
    }
  }
  else {
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    cVar2 = (**(code **)(*local_30 + 0x38))(local_30,param_1,&local_70,&local_88);
    if ((int)uStack_80 == 0) {
LAB_143f68ff3:
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_88 != (undefined8 *)0x0) {
      (**(code **)*local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      uStack_80 = uStack_80 & 0xffffffff00000000;
      goto LAB_143f68ff3;
    }
    if (cVar2 == '\0') goto LAB_143f69001;
  }
  FUN_148a3c424(&local_70);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
LAB_143f68f16:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6907f FUN_143f6907f body=49 status=ok
// SIG undefined FUN_143f6907f(void)

void FUN_143f6907f(void)

{
  FUN_148ac8c72(DAT_14cb98b30,DAT_14cb98b38);
  if (DAT_14cb98b30 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f690b0 FUN_143f690b0 body=279 status=ok
// SIG undefined FUN_143f690b0(void)

void FUN_143f690b0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((DAT_14cb98b38 == 0) || (cVar3 = FUN_148ac0e7f(), cVar3 == '\0')) {
    uVar1 = DAT_14cb987b8;
    uVar4 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
    plVar5 = (longlong *)FUN_140773fe2();
    if ((plVar5 != (longlong *)0x0) &&
       ((lVar6 = (**(code **)(*plVar5 + 0x2d0))(plVar5,uVar1,uVar4), lVar6 != 0 &&
        (*(longlong *)(lVar6 + 0x2b8) != 0)))) {
      local_28 = (undefined8 *)0x0;
      local_20 = 0;
      FUN_1446efa72(&local_28,0,2,0x10);
      local_20 = 2;
      *local_28 = &PTR_LAB_14b507390;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_28[2] = lVar7;
      *local_28 = &PTR_FUN_14b506cc0;
      FUN_145cc8b60(lVar6,&local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f691cd FUN_143f691cd body=49 status=ok
// SIG undefined FUN_143f691cd(void)

void FUN_143f691cd(void)

{
  FUN_148ac9338(DAT_14cb98b40,DAT_14cb98b48);
  if (DAT_14cb98b40 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f691fe FUN_143f691fe body=300 status=ok
// SIG undefined FUN_143f691fe(void)

void FUN_143f691fe(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  uVar1 = DAT_14cb987b8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb98b48 != 0) {
    (**(code **)(*DAT_14cb98ab8 + 0xf8))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  uVar3 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar4 = (longlong *)FUN_140773fe2();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x2d0))(plVar4,uVar1,uVar3);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x2b8) != 0)) {
      local_28 = (undefined8 *)0x0;
      local_20 = 0;
      FUN_1446efa72(&local_28,0,2,0x10);
      local_20 = 2;
      *local_28 = &PTR_LAB_14b507390;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_28[2] = lVar6;
      *local_28 = &PTR_FUN_14b506d40;
      FUN_14581c0f0(lVar5,&local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f69339 FUN_143f69339 body=289 status=ok
// SIG undefined FUN_143f69339(void)

void FUN_143f69339(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400d3e84(param_1,local_28);
  uVar1 = DAT_14cb987b8;
  uVar3 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar4 = (longlong *)FUN_140773fe2();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x2d0))(plVar4,uVar1,uVar3);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x2b8) != 0)) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,2,0x10);
      local_30 = 2;
      *local_38 = &PTR_LAB_14b506e20;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_38[2] = lVar6;
      *local_38 = &PTR_FUN_14b506db0;
      FUN_148a5e6a7(lVar5,local_28,&local_38);
    }
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6945b FUN_143f6945b body=241 status=ok
// SIG undefined FUN_143f6945b(void)

undefined8 * FUN_143f6945b(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  uVar1 = DAT_14cb987b8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar3 = (longlong *)FUN_140773fe2();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x2d0))(plVar3,uVar1,uVar2);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2b8) != 0)) {
      FUN_140056680(local_38,&DAT_149dfb77a);
      FUN_140056680(local_48,L"ShiftSupportUrl");
      FUN_148a6298e(param_1,lVar4,local_48,local_38);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 143f6954d FUN_143f6954d body=93 status=ok
// SIG undefined FUN_143f6954d(void)

undefined8 FUN_143f6954d(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143f6875e(local_28);
  FUN_148ac1758(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f695ab FUN_143f695ab body=82 status=ok
// SIG undefined FUN_143f695ab(void)

void FUN_143f695ab(void)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143f6875e(local_20);
  FUN_143f68ef4(local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f695fe FUN_143f695fe body=93 status=ok
// SIG undefined FUN_143f695fe(void)

undefined8 FUN_143f695fe(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143f6945b(local_28);
  FUN_148ac1758(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6965c FUN_143f6965c body=82 status=ok
// SIG undefined FUN_143f6965c(void)

void FUN_143f6965c(void)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143f6945b(local_20);
  FUN_143f68ef4(local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f696b0 FUN_143f696b0 body=2009 status=ok
// SIG undefined FUN_143f696b0(void)

void FUN_143f696b0(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  uint local_60;
  undefined1 local_5c [4];
  uint *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  if (puVar3 == (undefined8 *)0x0) goto LAB_143f6977b;
  local_60 = param_2;
  if (DAT_14cb98a00 != DAT_14cb98a2c) {
    puVar11 = &DAT_14cb98a30;
    if (DAT_14cb98a38 != (undefined *)0x0) {
      puVar11 = DAT_14cb98a38;
    }
    for (iVar6 = *(int *)(puVar11 + (ulonglong)(DAT_14cb98a40 - 1U & param_2) * 4); iVar6 != -1;
        iVar6 = *(int *)(DAT_14cb989f8 + (longlong)iVar6 * 0xc + 4)) {
      if (*(uint *)(DAT_14cb989f8 + (longlong)iVar6 * 0xc) == param_2) goto LAB_143f6977b;
    }
  }
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar8 = (longlong *)FUN_140773fe2();
  if (((plVar8 == (longlong *)0x0) ||
      (lVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8,param_2,uVar7), lVar9 == 0)) ||
     (*(longlong *)(lVar9 + 0x2b8) == 0)) goto LAB_143f6977b;
  lVar13 = 0;
  FUN_1447cbafe(&DAT_14cb989f8,&local_58,&local_60,0);
  local_58 = &local_60;
  FUN_145cff2fc(puVar3 + 5,&local_80,&local_58);
  local_58 = &local_60;
  FUN_145fdf416(&local_80,&local_58);
  local_58 = &local_60;
  FUN_14615bb94(&local_80,&local_58);
  local_58 = &local_60;
  FUN_145cff2fc(&DAT_14cb98958,&local_80,&local_58);
  local_58 = &local_60;
  FUN_145cff2fc(&DAT_14cb989a8,&local_80,&local_58);
  local_58 = &local_60;
  FUN_146107a4c(puVar3 + 0x37,&local_80,&local_58);
  if (DAT_14cb98960 != DAT_14cb9898c) {
    puVar11 = &DAT_14cb98990;
    if (DAT_14cb98998 != (undefined *)0x0) {
      puVar11 = DAT_14cb98998;
    }
    iVar6 = *(int *)(puVar11 + (ulonglong)(DAT_14cb989a0 - 1U & local_60) * 4);
    while (iVar6 != -1) {
      lVar13 = DAT_14cb98958 + (longlong)iVar6 * 0x10;
      if (*(uint *)(DAT_14cb98958 + (longlong)iVar6 * 0x10) == local_60) goto LAB_143f698b9;
      iVar6 = *(int *)(lVar13 + 8);
    }
    lVar13 = 0;
  }
LAB_143f698b9:
  *(undefined1 *)(lVar13 + 4) = 0;
  local_50 = (longlong **)(lVar9 + 0x228);
  local_58 = &local_60;
  FUN_145bfb980(puVar3 + 0x2d,&local_80,&local_58,0);
  uVar4 = local_60;
  if (*(char *)(lVar9 + 0x368) == '\x01') {
    if (*(int *)(puVar3 + 6) != *(int *)((longlong)puVar3 + 0x5c)) {
      puVar10 = puVar3 + 0xc;
      if ((undefined8 *)puVar3[0xd] != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)puVar3[0xd];
      }
      iVar6 = *(int *)((longlong)puVar10 + (ulonglong)(*(int *)(puVar3 + 0xe) - 1U & local_60) * 4);
      if (iVar6 != -1) {
        lVar13 = puVar3[5];
        do {
          lVar12 = lVar13 + (longlong)iVar6 * 0x10;
          if (*(uint *)(lVar13 + (longlong)iVar6 * 0x10) == local_60) goto LAB_143f69936;
          iVar6 = *(int *)(lVar12 + 8);
        } while (iVar6 != -1);
      }
    }
    lVar12 = 0;
LAB_143f69936:
    *(undefined1 *)(lVar12 + 4) = 1;
  }
  local_58 = (uint *)0x0;
  local_50 = (longlong **)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50._0_4_ = 3;
  *(undefined ***)local_58 = &PTR_LAB_14b507320;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  *(longlong *)(local_58 + 4) = lVar12;
  *(undefined ***)local_58 = &PTR_FUN_14b504ee0;
  *(undefined8 **)(local_58 + 6) = puVar3;
  local_58[8] = uVar4;
  FUN_146065c06(lVar9 + 0x140,&local_80,&local_58);
  if ((int)local_50 == 0) {
LAB_143f69a06:
    if (local_58 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (uint *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_143f69a06;
  }
  local_58 = &local_60;
  local_50 = &local_80;
  FUN_146122ba8(puVar3 + 0xf,&local_98,&local_58,0);
  uVar4 = local_60;
  local_58 = (uint *)0x0;
  local_50 = (longlong **)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50._0_4_ = 3;
  *(undefined ***)local_58 = &PTR_LAB_14b4f3990;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  *(longlong *)(local_58 + 4) = lVar12;
  *(undefined ***)local_58 = &PTR_FUN_14b504f50;
  *(undefined8 **)(local_58 + 6) = puVar3;
  local_58[8] = uVar4;
  FUN_145defd34(lVar9 + 0x188,&local_80,&local_58);
  if ((int)local_50 == 0) {
LAB_143f69b09:
    if (local_58 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (uint *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_143f69b09;
  }
  local_58 = &local_60;
  local_50 = &local_80;
  FUN_146122ba8(puVar3 + 0x19,&local_98,&local_58,0);
  uVar4 = local_60;
  if (DAT_14c763b08 == '\x01') {
    FUN_143f5fc4f(local_60);
    FUN_143f5fa64(uVar4);
    FUN_143f60b98(puVar3,uVar4);
    DAT_14cb98860 = 1;
  }
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar8 = (longlong *)FUN_14657d420(uVar7);
  if (plVar8 == (longlong *)0x0) goto LAB_143f6977b;
  (**(code **)(*plVar8 + 0x10))(plVar8,&local_68);
  if (local_68 == DAT_14cb8e220) {
    bVar14 = false;
  }
  else {
    FUN_1446f470e(&local_70,L"EPIC",1);
    bVar14 = local_68 != local_70;
  }
  *(bool *)(puVar3 + 2) = bVar14;
  (**(code **)(*plVar8 + 200))(plVar8,&local_80);
  uVar4 = local_60;
  if (local_80 != (longlong *)0x0) {
    plVar8 = (longlong *)puVar3[1];
    if (plVar8 == (longlong *)0x0) {
LAB_143f69c3b:
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,4,0x10);
      local_90 = 4;
      *local_98 = &PTR_LAB_14b438a40;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_98[2] = lVar13;
      *local_98 = &PTR_FUN_14b504fc0;
      local_98[3] = 0;
      local_98[4] = 0;
      local_98[5] = puVar3;
      *(uint *)(local_98 + 6) = uVar4;
      bVar14 = true;
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar8[1];
      do {
        if (iVar6 == 0) goto LAB_143f69c3b;
        LOCK();
        iVar5 = (int)plVar8[1];
        bVar14 = iVar6 == iVar5;
        if (bVar14) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar14);
      uVar7 = *puVar3;
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,4,0x10);
      local_90 = 4;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      *local_98 = &PTR_LAB_14b438a40;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_98[2] = lVar13;
      *local_98 = &PTR_FUN_14b504fc0;
      local_98[3] = uVar7;
      local_98[4] = plVar8;
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      local_98[5] = puVar3;
      *(uint *)(local_98 + 6) = uVar4;
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      bVar14 = false;
    }
    (**(code **)(*local_80 + 0x28))(local_80,&local_88,&local_98);
    local_58 = &local_60;
    local_50 = &local_88;
    FUN_146122ba8(puVar3 + 0x23,local_5c,&local_58,0);
    if (local_90 == 0) {
LAB_143f69de2:
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_98 != (undefined8 *)0x0) {
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      local_90 = 0;
      goto LAB_143f69de2;
    }
    if (!bVar14) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_78 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
LAB_143f6977b:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f69e8a FUN_143f69e8a body=1099 status=ok
// SIG undefined FUN_143f69e8a(void)

void FUN_143f69e8a(longlong param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined *puVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (lVar5 == 0) goto LAB_143f69eae;
  if (DAT_14cb98a00 != DAT_14cb98a2c) {
    puVar11 = &DAT_14cb98a30;
    if (DAT_14cb98a38 != (undefined *)0x0) {
      puVar11 = DAT_14cb98a38;
    }
    for (iVar3 = *(int *)(puVar11 + (ulonglong)(DAT_14cb98a40 - 1U & param_2) * 4); iVar3 != -1;
        iVar3 = *(int *)(DAT_14cb989f8 + (longlong)iVar3 * 0xc + 4)) {
      if (*(uint *)(DAT_14cb989f8 + (longlong)iVar3 * 0xc) == param_2) {
        uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
        plVar8 = (longlong *)FUN_140773fe2();
        if (((plVar8 == (longlong *)0x0) ||
            (lVar12 = (**(code **)(*plVar8 + 0x2d0))(plVar8,param_2,uVar7), lVar12 == 0)) ||
           (*(longlong *)(lVar12 + 0x2b8) == 0)) goto LAB_143f6a07a;
        if (*(int *)(lVar5 + 0x80) == *(int *)(lVar5 + 0xac)) goto LAB_143f69ffd;
        lVar9 = lVar5 + 0xb0;
        if (*(longlong *)(lVar5 + 0xb8) != 0) {
          lVar9 = *(longlong *)(lVar5 + 0xb8);
        }
        uVar10 = *(uint *)(lVar9 + (ulonglong)(*(int *)(lVar5 + 0xc0) - 1U & param_2) * 4);
        if (uVar10 == 0xffffffff) goto LAB_143f69ffd;
        goto LAB_143f69fbf;
      }
    }
  }
  goto LAB_143f6a157;
  while (uVar10 = puVar14[4], uVar10 != 0xffffffff) {
LAB_143f69fbf:
    puVar14 = (uint *)(*(longlong *)(lVar5 + 0x78) + (longlong)(int)uVar10 * 0x18);
    if (*puVar14 == param_2) {
      if ((puVar14 + 2 != (uint *)0x0 && puVar14 != (uint *)0x0) &&
         (*(longlong *)(puVar14 + 2) != 0)) {
        FUN_14480f766(lVar12 + 0x140);
      }
      break;
    }
  }
LAB_143f69ffd:
  if (*(int *)(lVar5 + 0xd0) != *(int *)(lVar5 + 0xfc)) {
    lVar9 = lVar5 + 0x100;
    if (*(longlong *)(lVar5 + 0x108) != 0) {
      lVar9 = *(longlong *)(lVar5 + 0x108);
    }
    uVar10 = *(uint *)(lVar9 + (ulonglong)(*(int *)(lVar5 + 0x110) - 1U & param_2) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        puVar14 = (uint *)(*(longlong *)(lVar5 + 200) + (longlong)(int)uVar10 * 0x18);
        if (*puVar14 == param_2) {
          if ((puVar14 + 2 != (uint *)0x0 && puVar14 != (uint *)0x0) &&
             (*(longlong *)(puVar14 + 2) != 0)) {
            FUN_14480f766(lVar12 + 0x188);
          }
          break;
        }
        uVar10 = puVar14[4];
      } while (uVar10 != 0xffffffff);
    }
  }
LAB_143f6a07a:
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar8 = (longlong *)FUN_14657d420(uVar7);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 200))(plVar8,&local_48);
    if ((local_48 != (longlong *)0x0) && (*(int *)(lVar5 + 0x120) != *(int *)(lVar5 + 0x14c))) {
      lVar12 = lVar5 + 0x150;
      if (*(longlong *)(lVar5 + 0x158) != 0) {
        lVar12 = *(longlong *)(lVar5 + 0x158);
      }
      uVar10 = *(uint *)(lVar12 + (ulonglong)(*(int *)(lVar5 + 0x160) - 1U & param_2) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar14 = (uint *)(*(longlong *)(lVar5 + 0x118) + (longlong)(int)uVar10 * 0x18);
          if (*puVar14 == param_2) {
            if ((puVar14 + 2 != (uint *)0x0 && puVar14 != (uint *)0x0) &&
               (*(longlong *)(puVar14 + 2) != 0)) {
              (**(code **)(*local_48 + 0x30))();
            }
            break;
          }
          uVar10 = puVar14[4];
        } while (uVar10 != 0xffffffff);
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
LAB_143f6a157:
  if (DAT_14cb98a00 != DAT_14cb98a2c) {
    puVar11 = DAT_14cb98a38;
    if (DAT_14cb98a38 == (undefined *)0x0) {
      puVar11 = &DAT_14cb98a30;
    }
    puVar14 = (uint *)(puVar11 + ((longlong)(int)param_2 & (longlong)DAT_14cb98a40 - 1U) * 4);
    do {
      uVar10 = *puVar14;
      lVar12 = (longlong)(int)uVar10;
      if (lVar12 == -1) break;
      puVar2 = (uint *)(DAT_14cb989f8 + lVar12 * 0xc);
      uVar4 = *puVar2;
      if (uVar4 == param_2) {
        puVar11 = DAT_14cb98a38;
        if (DAT_14cb98a38 == (undefined *)0x0) {
          puVar11 = &DAT_14cb98a30;
        }
        uVar13 = *(uint *)(puVar11 + (longlong)(int)puVar2[2] * 4);
        if (uVar13 == uVar10) {
          puVar15 = (uint *)(puVar11 + (longlong)(int)puVar2[2] * 4);
        }
        else {
          do {
            puVar15 = (uint *)(DAT_14cb989f8 + (longlong)(int)uVar13 * 0xc + 4);
            uVar13 = *puVar15;
          } while (uVar13 != uVar10);
        }
        *puVar15 = puVar2[1];
        lVar9 = DAT_14cb989f8;
        if (DAT_14cb98a2c != 0) {
          *(uint *)(DAT_14cb989f8 + (longlong)(int)DAT_14cb98a28 * 0xc) = uVar10;
        }
        *(undefined4 *)(lVar9 + lVar12 * 0xc) = 0xffffffff;
        uVar13 = 0xffffffff;
        if (0 < DAT_14cb98a2c) {
          uVar13 = DAT_14cb98a28;
        }
        *(uint *)(lVar9 + 4 + lVar12 * 0xc) = uVar13;
        DAT_14cb98a2c = DAT_14cb98a2c + 1;
        puVar11 = DAT_14cb98a18;
        if (DAT_14cb98a18 == (undefined *)0x0) {
          puVar11 = &DAT_14cb98a08;
        }
        uVar13 = uVar10 + 0x1f;
        if (-1 < (int)uVar10) {
          uVar13 = uVar10;
        }
        bVar6 = (byte)uVar10 & 0x1f;
        DAT_14cb98a28 = uVar10;
        *(uint *)(puVar11 + (longlong)((int)uVar13 >> 5) * 4) =
             *(uint *)(puVar11 + (longlong)((int)uVar13 >> 5) * 4) &
             (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      }
      else {
        puVar14 = puVar2 + 1;
      }
    } while (uVar4 != param_2);
  }
  FUN_145a27a2e(lVar5 + 0x28,param_2);
  FUN_145d16394(param_2);
  FUN_145ceb9f2(param_2);
  FUN_145a27a2e(&DAT_14cb98958,param_2);
  FUN_145a27a2e(&DAT_14cb989a8,param_2);
  FUN_145ccfe9e(lVar5 + 0x1b8,param_2);
LAB_143f69eae:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6a330 FUN_143f6a330 body=675 status=ok
// SIG undefined FUN_143f6a330(void)

void FUN_143f6a330(longlong param_1)

{
  void *_Src;
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  void **local_68;
  ulonglong *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  uVar1 = DAT_14cb987b8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb98ac0 == '\0') {
    uVar2 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
    plVar3 = (longlong *)FUN_140773fe2();
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x2d0))(plVar3,uVar1,uVar2);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2b8) != 0)) {
        local_48 = (undefined8 *)0x0;
        local_40 = 0;
        FUN_1446efa72(&local_48,0,2,0x10);
        local_40 = 2;
        *local_48 = &PTR_LAB_14b4daf00;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_48[2] = lVar5;
        *local_48 = &PTR_FUN_14b5069b0;
        FUN_14657d586(lVar4,&local_48);
      }
    }
  }
  uVar1 = DAT_14cb987b8;
  if ((*(char *)(param_1 + 0x21) == '\n') && (1 < *(int *)(param_1 + 0x30))) {
    uVar2 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
    plVar3 = (longlong *)FUN_140773fe2();
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x2d0))(plVar3,uVar1,uVar2);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2b8) != 0)) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,2,0x10);
        local_50 = 2;
        *local_58 = &PTR_LAB_149e001f0;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_58[2] = lVar5;
        *local_58 = &PTR_FUN_14b5070c0;
        local_58[3] = param_1;
        local_38 = (void *)0x0;
        local_30 = *(int *)(param_1 + 0x30);
        lVar6 = (longlong)local_30;
        _Src = *(void **)(param_1 + 0x28);
        if (lVar6 == 0) {
          local_2c = 0;
        }
        else {
          FUN_1446dd670(&local_38,local_30,0);
          memcpy(local_38,_Src,lVar6 * 2);
        }
        local_68 = &local_38;
        local_60 = &local_28;
        FUN_141469cae(&local_48);
        FUN_145c4b799(lVar4,&local_48,&local_58,0);
        FUN_1447a1747(local_48,local_40);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (local_38 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6a5d4 FUN_143f6a5d4 body=51 status=ok
// SIG undefined FUN_143f6a5d4(void)

void FUN_143f6a5d4(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x18) != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  plVar1 = (longlong *)FUN_148ac195e();
                    /* WARNING: Could not recover jumptable at 0x000143f6a604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 600))
            (plVar1,"Virtual_Keyboard_Text_Changed_Notify",*(code **)(*plVar1 + 600));
  return;
}



// FUNCTION 143f6a608 FUN_143f6a608 body=347 status=ok
// SIG undefined FUN_143f6a608(void)

void FUN_143f6a608(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  uVar3 = DAT_14cb987b8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  lVar4 = FUN_14001cc68(0x70,0x10);
  uVar5 = FUN_148ac195e();
  FUN_1489dcd04(lVar4,uVar5,param_2);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b4541c0;
  plVar6[2] = lVar4;
  *(longlong *)(param_1 + 8) = lVar4;
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar6 == plVar7) {
    if (plVar6 == (longlong *)0x0) goto LAB_143f6a714;
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      plVar7 = plVar6;
      goto joined_r0x000143f6a701;
    }
  }
  else {
    *(longlong **)(param_1 + 0x10) = plVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000143f6a701:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 8);
  plVar7 = *(longlong **)(param_1 + 0x10);
LAB_143f6a714:
  uVar5 = DAT_14c98e618;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_40 = lVar4;
  local_38 = plVar7;
  FUN_1428f5168(uVar5,1,uVar3,&local_40);
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6a764 FUN_143f6a764 body=147 status=ok
// SIG undefined FUN_143f6a764(void)

void FUN_143f6a764(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1428f5168(DAT_14c98e618,0,DAT_14cb987b8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6a8a8 FUN_143f6a8a8 body=48 status=ok
// SIG undefined FUN_143f6a8a8(void)

void FUN_143f6a8a8(longlong *param_1)

{
  longlong *plVar1;
  
  if ((char)param_1[5] == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6a8ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143f6a8fc FUN_143f6a8fc body=29 status=ok
// SIG undefined FUN_143f6a8fc(void)

undefined8 FUN_143f6a8fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6a92e FUN_143f6a92e body=93 status=ok
// SIG undefined FUN_143f6a92e(void)

void FUN_143f6a92e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507320;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504ee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f6a98c FUN_143f6a98c body=93 status=ok
// SIG undefined FUN_143f6a98c(void)

void FUN_143f6a98c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507320;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504ee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f6a9ea FUN_143f6a9ea body=126 status=ok
// SIG undefined FUN_143f6a9ea(void)

void FUN_143f6a9ea(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b507320;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b504ee0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6aa59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6aa74 FUN_143f6aa74 body=23 status=ok
// SIG undefined FUN_143f6aa74(void)

undefined1 FUN_143f6aa74(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143f6aa8c(param_1 + 0x18,param_3);
  return 1;
}



// FUNCTION 143f6aa8c FUN_143f6aa8c body=106 status=ok
// SIG undefined FUN_143f6aa8c(void)

void FUN_143f6aa8c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 4) == 1) {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x30) != *(int *)(lVar1 + 0x5c)) {
      lVar2 = lVar1 + 0x60;
      if (*(longlong *)(lVar1 + 0x68) != 0) {
        lVar2 = *(longlong *)(lVar1 + 0x68);
      }
      iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0x70) - 1U & *(uint *)(param_1 + 1)) * 4
                      );
      if (iVar3 != -1) {
        do {
          lVar2 = *(longlong *)(lVar1 + 0x28) + (longlong)iVar3 * 0x10;
          if (*(uint *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar3 * 0x10) ==
              *(uint *)(param_1 + 1)) goto LAB_143f6aae4;
          iVar3 = *(int *)(lVar2 + 8);
        } while (iVar3 != -1);
      }
    }
    lVar2 = 0;
LAB_143f6aae4:
    *(undefined1 *)(lVar2 + 4) = 1;
  }
  FUN_143f6745c(*param_1,(int)param_1[1]);
  return;
}



// FUNCTION 143f6aaf6 FUN_143f6aaf6 body=29 status=ok
// SIG undefined FUN_143f6aaf6(void)

undefined8 FUN_143f6aaf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6ab28 FUN_143f6ab28 body=93 status=ok
// SIG undefined FUN_143f6ab28(void)

void FUN_143f6ab28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f6ab86 FUN_143f6ab86 body=93 status=ok
// SIG undefined FUN_143f6ab86(void)

void FUN_143f6ab86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f6abe4 FUN_143f6abe4 body=126 status=ok
// SIG undefined FUN_143f6abe4(void)

void FUN_143f6abe4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b504f50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6ac53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6ac6c FUN_143f6ac6c body=20 status=ok
// SIG undefined FUN_143f6ac6c(void)

undefined1 FUN_143f6ac6c(longlong param_1)

{
  FUN_143f6ac80(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f6ac80 FUN_143f6ac80 body=971 status=ok
// SIG undefined FUN_143f6ac80(void)

void FUN_143f6ac80(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  void *_Src;
  longlong *plVar3;
  undefined *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [40];
  undefined4 uStack_70;
  undefined4 local_6c;
  uint uStack_68;
  char cStack_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  uint *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_1;
  uStack_68 = (uint)((ulonglong)*(undefined8 *)((longlong)param_2 + 5) >> 0x18);
  cStack_64 = (char)((ulonglong)*(undefined8 *)((longlong)param_2 + 5) >> 0x38);
  uStack_70 = (undefined4)*param_2;
  local_6c = (undefined4)((ulonglong)*param_2 >> 0x20);
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_2 + 3);
  lVar7 = (longlong)local_58;
  _Src = (void *)param_2[2];
  if (lVar7 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar7 * 2);
  }
  uVar1 = *(uint *)(param_1 + 1);
  (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar3 = (longlong *)FUN_140773fe2();
  if (((plVar3 != (longlong *)0x0) &&
      (lVar7 = (**(code **)(*plVar3 + 0x2d0))(plVar3,uVar1), lVar7 != 0)) &&
     (*(longlong *)(lVar7 + 0x2b8) != 0)) {
    FUN_1411cb701(&local_50,local_6c);
    if (1 < local_48) {
      if (uStack_68 == 0) {
        if (cStack_64 != '\0') {
          FUN_145da8f9e(uVar1,&local_50);
        }
        FUN_143f6745c(uVar2,uVar1);
      }
      else if (local_48 == *(int *)(lVar7 + 0x230)) {
        lVar8 = 0;
        while( true ) {
          uVar9 = *(ushort *)(local_50 + lVar8);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)(*(longlong *)(lVar7 + 0x228) + lVar8);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_143f6aefa;
LAB_143f6adab:
          lVar8 = lVar8 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_143f6adab;
        }
        if (uVar9 != uVar11) goto LAB_143f6ae00;
      }
      else if (*(int *)(lVar7 + 0x230) + local_48 != 1) {
LAB_143f6ae00:
        if (DAT_14cb988c0 != DAT_14cb988ec) {
          puVar4 = &DAT_14cb988f0;
          if (DAT_14cb988f8 != (undefined *)0x0) {
            puVar4 = DAT_14cb988f8;
          }
          iVar6 = *(int *)(puVar4 + (ulonglong)(DAT_14cb98900 - 1U & uVar1) * 4);
          while (iVar6 != -1) {
            lVar7 = DAT_14cb988b8 + (longlong)iVar6 * 0x60;
            if (*(uint *)(DAT_14cb988b8 + (longlong)iVar6 * 0x60) == uVar1) goto LAB_143f6ae5b;
            iVar6 = *(int *)(lVar7 + 0x58);
          }
        }
        lVar7 = 0;
LAB_143f6ae5b:
        if (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c)) {
          lVar8 = lVar7 + 0x40;
          if (*(longlong *)(lVar7 + 0x48) != 0) {
            lVar8 = *(longlong *)(lVar7 + 0x48);
          }
          iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar7 + 0x50) - 1U & uStack_68) * 4);
          if (iVar6 != -1) {
            do {
              lVar8 = *(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x60;
              if (*(uint *)(*(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x60) == uStack_68)
              goto LAB_143f6aea7;
              iVar6 = *(int *)(lVar8 + 0x58);
            } while (iVar6 != -1);
          }
        }
        lVar8 = 0;
LAB_143f6aea7:
        lVar7 = lVar8 + 8;
        if (lVar8 != 0) {
          lVar8 = lVar7;
        }
        if (((cStack_64 == '\x03') && (lVar8 != 0)) &&
           (FUN_1411a58b4(lVar8,&local_50), *(int *)(lVar8 + 8) == *(int *)(lVar8 + 0x34))) {
          if (DAT_14cb988c0 != DAT_14cb988ec) {
            puVar4 = &DAT_14cb988f0;
            if (DAT_14cb988f8 != (undefined *)0x0) {
              puVar4 = DAT_14cb988f8;
            }
            iVar6 = *(int *)(puVar4 + (ulonglong)(DAT_14cb98900 - 1U & uVar1) * 4);
            while (iVar6 != -1) {
              lVar5 = DAT_14cb988b8 + (longlong)iVar6 * 0x60;
              if (*(uint *)(DAT_14cb988b8 + (longlong)iVar6 * 0x60) == uVar1) goto LAB_143f6afa6;
              iVar6 = *(int *)(lVar5 + 0x58);
            }
          }
          lVar5 = 0;
LAB_143f6afa6:
          FUN_14601497a(lVar5 + 8,uStack_68);
        }
        if (cStack_64 == '\0') {
          if (lVar8 == 0) {
            local_40 = &uStack_68;
            if (DAT_14cb988c0 != DAT_14cb988ec) {
              puVar4 = &DAT_14cb988f0;
              if (DAT_14cb988f8 != (undefined *)0x0) {
                puVar4 = DAT_14cb988f8;
              }
              iVar6 = *(int *)(puVar4 + (ulonglong)(DAT_14cb98900 - 1U & uVar1) * 4);
              while (iVar6 != -1) {
                lVar7 = DAT_14cb988b8 + (longlong)iVar6 * 0x60;
                if (*(uint *)(DAT_14cb988b8 + (longlong)iVar6 * 0x60) == uVar1) goto LAB_143f6b017;
                iVar6 = *(int *)(lVar7 + 0x58);
              }
            }
            lVar7 = 0;
LAB_143f6b017:
            FUN_146003a72(lVar7 + 8,&local_34);
            lVar7 = *(longlong *)(lVar7 + 8) + (longlong)local_34 * 0x60 + 8;
          }
          FUN_14482b35e(lVar7,&local_40,&local_50,0);
        }
      }
    }
LAB_143f6aefa:
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6b04c FUN_143f6b04c body=64 status=ok
// SIG undefined FUN_143f6b04c(void)

undefined8 * FUN_143f6b04c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b504fc0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6b090 FUN_143f6b090 body=81 status=ok
// SIG undefined FUN_143f6b090(void)

undefined8 FUN_143f6b090(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 143f6b0e6 FUN_143f6b0e6 body=89 status=ok
// SIG undefined FUN_143f6b0e6(void)

bool FUN_143f6b0e6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143f6b131;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143f6b131:
  return lVar6 == param_2;
}



// FUNCTION 143f6b15c FUN_143f6b15c body=118 status=ok
// SIG undefined FUN_143f6b15c(void)

void FUN_143f6b15c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504fc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 143f6b1d2 FUN_143f6b1d2 body=118 status=ok
// SIG undefined FUN_143f6b1d2(void)

void FUN_143f6b1d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b504fc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 143f6b248 FUN_143f6b248 body=156 status=ok
// SIG undefined FUN_143f6b248(void)

void FUN_143f6b248(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b504fc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6b2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6b2f8 FUN_143f6b2f8 body=60 status=ok
// SIG undefined FUN_143f6b2f8(void)

ulonglong FUN_143f6b2f8(longlong param_1)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x20) == '\x01') {
      FUN_143f5fc4f(*(undefined4 *)(param_1 + 0x30));
    }
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 143f6b334 FUN_143f6b334 body=57 status=ok
// SIG undefined FUN_143f6b334(void)

undefined8 * FUN_143f6b334(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5051b0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6b382 FUN_143f6b382 body=159 status=ok
// SIG undefined FUN_143f6b382(void)

void FUN_143f6b382(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b507400;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5051b0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f6b422 FUN_143f6b422 body=159 status=ok
// SIG undefined FUN_143f6b422(void)

void FUN_143f6b422(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b507400;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5051b0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f6b4c2 FUN_143f6b4c2 body=198 status=ok
// SIG undefined FUN_143f6b4c2(void)

void FUN_143f6b4c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY **pp_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b507400;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b5051b0;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var2->EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->ContentionCount = 0;
  }
  else {
    pp_Var3 = &(p_Var2->ProcessLocksList).Blink;
    FUN_1446dd670(pp_Var3,DVar1,0);
    memcpy(*pp_Var3,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6b576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6b58e FUN_143f6b58e body=29 status=ok
// SIG undefined FUN_143f6b58e(void)

undefined8 FUN_143f6b58e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6b5c0 FUN_143f6b5c0 body=91 status=ok
// SIG undefined FUN_143f6b5c0(void)

void FUN_143f6b5c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505220;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f6b61c FUN_143f6b61c body=91 status=ok
// SIG undefined FUN_143f6b61c(void)

void FUN_143f6b61c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505220;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f6b678 FUN_143f6b678 body=124 status=ok
// SIG undefined FUN_143f6b678(void)

void FUN_143f6b678(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b505290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b505220;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6b6e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6b6f4 FUN_143f6b6f4 body=97 status=ok
// SIG undefined FUN_143f6b6f4(void)

void FUN_143f6b6f4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = *(undefined1 *)(param_1 + 0x18);
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf4ce(uVar1,param_2,&local_11);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6b756 FUN_143f6b756 body=99 status=ok
// SIG undefined FUN_143f6b756(void)

undefined8 FUN_143f6b756(longlong param_1,undefined8 param_2)

{
  undefined7 uVar2;
  undefined8 uVar1;
  undefined7 extraout_var;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = *(undefined1 *)(param_1 + 0x18);
  uVar2 = (undefined7)(local_10 >> 8);
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf4ce(uVar1,param_2,&local_11);
    uVar2 = extraout_var;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71(uVar2,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6b7ba FUN_143f6b7ba body=111 status=ok
// SIG undefined FUN_143f6b7ba(void)

undefined8 * FUN_143f6b7ba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b505300;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f6b80b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f6b80b:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6b83e FUN_143f6b83e body=115 status=ok
// SIG undefined FUN_143f6b83e(void)

void FUN_143f6b83e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5072b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505300;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1460dbc54(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 143f6b8b2 FUN_143f6b8b2 body=115 status=ok
// SIG undefined FUN_143f6b8b2(void)

void FUN_143f6b8b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5072b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505300;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1460dbc54(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 143f6b926 FUN_143f6b926 body=149 status=ok
// SIG undefined FUN_143f6b926(void)

void FUN_143f6b926(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5072b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b505300;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_1460dbc54(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6b9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6b9de FUN_143f6b9de body=40 status=ok
// SIG undefined FUN_143f6b9de(void)

undefined8 FUN_143f6b9de(longlong param_1)

{
  undefined8 in_RAX;
  undefined7 uVar1;
  undefined7 extraout_var;
  
  uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0 && *(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    uVar1 = extraout_var;
  }
  return CONCAT71(uVar1,1);
}



// FUNCTION 143f6ba06 FUN_143f6ba06 body=29 status=ok
// SIG undefined FUN_143f6ba06(void)

undefined8 FUN_143f6ba06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6ba38 FUN_143f6ba38 body=85 status=ok
// SIG undefined FUN_143f6ba38(void)

void FUN_143f6ba38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505370;
  return;
}



// FUNCTION 143f6ba8e FUN_143f6ba8e body=85 status=ok
// SIG undefined FUN_143f6ba8e(void)

void FUN_143f6ba8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505370;
  return;
}



// FUNCTION 143f6bae4 FUN_143f6bae4 body=118 status=ok
// SIG undefined FUN_143f6bae4(void)

void FUN_143f6bae4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b505290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b505370;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6bb4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6bb5a FUN_143f6bb5a body=58 status=ok
// SIG undefined FUN_143f6bb5a(void)

void FUN_143f6bb5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
  FUN_1461bcd44(uVar1,"Load_Blocked_List_Response",param_2);
  return;
}



// FUNCTION 143f6bb94 FUN_143f6bb94 body=57 status=ok
// SIG undefined FUN_143f6bb94(void)

undefined8 FUN_143f6bb94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_1461bcd44(uVar1,"Load_Blocked_List_Response",param_2);
  }
  return 1;
}



// FUNCTION 143f6bbce FUN_143f6bbce body=57 status=ok
// SIG undefined FUN_143f6bbce(void)

undefined8 * FUN_143f6bbce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5053e0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6bc1c FUN_143f6bc1c body=165 status=ok
// SIG undefined FUN_143f6bc1c(void)

void FUN_143f6bc1c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5053e0;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f6bcc2 FUN_143f6bcc2 body=165 status=ok
// SIG undefined FUN_143f6bcc2(void)

void FUN_143f6bcc2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5053e0;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f6bd68 FUN_143f6bd68 body=204 status=ok
// SIG undefined FUN_143f6bd68(void)

void FUN_143f6bd68(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4e4e30;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b5053e0;
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6be22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6be34 FUN_143f6be34 body=77 status=ok
// SIG undefined FUN_143f6be34(void)

void FUN_143f6be34(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_143f6bed2(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6be82 FUN_143f6be82 body=79 status=ok
// SIG undefined FUN_143f6be82(void)

undefined8 FUN_143f6be82(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_143f6bed2(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6bed2 FUN_143f6bed2 body=1455 status=ok
// SIG undefined FUN_143f6bed2(void)

void FUN_143f6bed2(longlong param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong *plVar6;
  void **ppvVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [8];
  void *local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *param_3;
  lVar2 = *param_2;
  FUN_1400b22c2(&local_78,&DAT_149e02088);
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  if (((lVar2 == 0) || (iVar1 != 0)) || (*(longlong *)(lVar2 + 0x2b8) == 0)) {
    local_80[0] = 0;
    local_58 = L"Error_Remove_Friend_Title";
    uStack_50._0_4_ = 0x19;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Error Removing Friend.";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x16);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar6 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar3 = *(code **)(*local_90[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      ppvVar7 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar7 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      ppvVar7 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar7 = (void **)(*pcVar3)(local_90[0]);
    }
    if (&local_78 != ppvVar7) {
      iVar1 = *(int *)(ppvVar7 + 1);
      pvVar4 = *ppvVar7;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar4,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1 + 8);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Error_Remove_Friend_Desc";
    uStack_50._0_4_ = 0x18;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"Could not remove SHiFT friend";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x1d);
  }
  else {
    local_80[0] = 1;
    local_58 = L"Remove_Friend_Title";
    uStack_50._0_4_ = 0x13;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Friend Removed";
    uStack_50 = CONCAT44(uStack_50._4_4_,0xe);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar6 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar3 = *(code **)(*local_90[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      ppvVar7 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar7 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      ppvVar7 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar7 = (void **)(*pcVar3)(local_90[0]);
    }
    if (&local_78 != ppvVar7) {
      iVar1 = *(int *)(ppvVar7 + 1);
      pvVar4 = *ppvVar7;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar4,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1 + 8);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Remove_Friend_Desc";
    uStack_50._0_4_ = 0x12;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"The following player has been removed from your friends list";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x3c);
  }
  FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
  plVar6 = local_c0[0];
  if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
    plVar6 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar6);
  pcVar3 = *(code **)(*local_c0[0] + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar6 = local_c0[0] + 3;
    if (local_c0[0][5] != 0) {
      plVar6 = (longlong *)(local_c0[0][5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar6 = local_c0[0] + 2;
  }
  else {
    plVar6 = (longlong *)(*pcVar3)(local_c0[0]);
  }
  FUN_1407ec8fc(local_a0,plVar6,local_b0);
  FUN_1401c7f3e(&local_58,local_a0,local_90);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_68 = local_58;
  uStack_60 = uStack_50;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar5 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar5,"Player_Profile_Remove_Friend_Response",local_80);
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f6c482 FUN_143f6c482 body=83 status=ok
// SIG undefined FUN_143f6c482(void)

undefined8 * FUN_143f6c482(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b505530;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6c4ea FUN_143f6c4ea body=247 status=ok
// SIG undefined FUN_143f6c4ea(void)

void FUN_143f6c4ea(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505530;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_140b856de(puVar2 + 4,iVar1,0);
    FUN_140b8566a(puVar2[4],uVar3,iVar1);
  }
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 143f6c5e2 FUN_143f6c5e2 body=247 status=ok
// SIG undefined FUN_143f6c5e2(void)

void FUN_143f6c5e2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505530;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_140b856de(puVar2 + 4,iVar1,0);
    FUN_140b8566a(puVar2[4],uVar3,iVar1);
  }
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 143f6c6da FUN_143f6c6da body=283 status=ok
// SIG undefined FUN_143f6c6da(void)

void FUN_143f6c6da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  int iVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var4 = param_2[1].DebugInfo;
  *(undefined ***)p_Var4 = &PTR_LAB_149e001f0;
  (p_Var4->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var4 = &PTR_FUN_14b505530;
  (p_Var4->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var4->EntryCount = 0;
  p_Var4->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  p_Var4->Flags = DVar1;
  if (DVar1 == 0) {
    p_Var4->CreatorBackTraceIndexHigh = 0;
    p_Var4->SpareWORD = 0;
  }
  else {
    FUN_140b856de(&p_Var4->EntryCount,DVar1,0);
    uVar6._0_4_ = p_Var4->EntryCount;
    uVar6._4_4_ = p_Var4->ContentionCount;
    FUN_140b8566a(uVar6,uVar5,DVar1);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  p_Var4[1].Type = (short)uVar2;
  p_Var4[1].CreatorBackTraceIndex = (short)((uint)uVar2 >> 0x10);
  p_Var4[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  iVar3 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)&p_Var4[1].ProcessLocksList.Flink = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)&p_Var4[1].ProcessLocksList.Flink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var4[1].CriticalSection,iVar3,0);
    memcpy(p_Var4[1].CriticalSection,_Src,(longlong)iVar3 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6c7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6c800 FUN_143f6c800 body=20 status=ok
// SIG undefined FUN_143f6c800(void)

undefined1 FUN_143f6c800(longlong param_1)

{
  FUN_143f6c814(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f6c814 FUN_143f6c814 body=1633 status=ok
// SIG undefined FUN_143f6c814(void)

void FUN_143f6c814(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  int local_78;
  int local_74;
  wchar_t *local_70;
  undefined8 uStack_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar8 = (longlong *)FUN_140773fe2();
  if (plVar8 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8,uVar1,uVar7);
    if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x2b8) != 0)) {
      local_88 = (undefined8 *)0x0;
      uStack_80 = (undefined8 *)0x0;
      if (*(int *)(param_1 + 0x10) < 1) {
        puVar10 = *(undefined8 **)(param_1 + 8);
        uStack_80 = (undefined8 *)&DAT_00000001;
LAB_143f6ccb5:
        FUN_1447a1bd6(&local_88,0);
LAB_143f6ccc1:
        puVar5 = local_88;
        *local_88 = 0;
        iVar2 = *(int *)(puVar10 + 1);
        pvVar4 = (void *)*puVar10;
        *(int *)(local_88 + 1) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)local_88 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(local_88,iVar2,0);
          memcpy((void *)*puVar5,pvVar4,(longlong)iVar2 * 2);
        }
      }
      else {
        lVar11 = 8;
        lVar12 = 0;
        local_d8 = lVar9;
        do {
          puVar10 = uStack_80;
          lVar9 = *param_2;
          if (1 < *(int *)(lVar9 + lVar11)) {
            lVar13 = (longlong)(int)uStack_80;
            uVar6 = (int)uStack_80 + 1;
            uStack_80 = (undefined8 *)CONCAT44(uStack_80._4_4_,uVar6);
            if (uStack_80._4_4_ < uVar6) {
              FUN_1447a1bd6(&local_88,(ulonglong)puVar10 & 0xffffffff);
            }
            puVar10 = local_88 + lVar13 * 2;
            local_88[lVar13 * 2] = 0;
            iVar2 = *(int *)(lVar9 + lVar11);
            pvVar4 = *(void **)(lVar9 + -8 + lVar11);
            *(int *)(local_88 + lVar13 * 2 + 1) = iVar2;
            if ((longlong)iVar2 == 0) {
              *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar10,iVar2,0);
              memcpy((void *)*puVar10,pvVar4,(longlong)iVar2 * 2);
            }
          }
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 0x10;
        } while (lVar12 < *(int *)(param_1 + 0x10));
        lVar9 = local_d8;
        if ((int)uStack_80 == 0) {
          puVar10 = *(undefined8 **)(param_1 + 8);
          uStack_80 = (undefined8 *)CONCAT44(uStack_80._4_4_,1);
          if (uStack_80._4_4_ == 0) goto LAB_143f6ccb5;
          goto LAB_143f6ccc1;
        }
      }
      local_98 = (longlong *)0x0;
      uVar6 = *(uint *)(param_1 + 0x28);
      pvVar4 = *(void **)(param_1 + 0x20);
      local_90 = CONCAT44(local_90._4_4_,uVar6);
      if ((longlong)(int)uVar6 == 0) {
        local_90 = (ulonglong)uVar6;
      }
      else {
        FUN_1446dd670(&local_98,uVar6,0);
        memcpy(local_98,pvVar4,(longlong)(int)uVar6 * 2);
      }
      local_58 = (wchar_t *)0x0;
      uStack_50._0_4_ = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      uStack_50 = CONCAT44(uStack_50._4_4_,3);
      *(undefined ***)local_58 = &PTR_LAB_14b4e4e30;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)(local_58 + 8) = lVar12;
      *(undefined ***)local_58 = &PTR_FUN_14b5055a0;
      *(longlong **)(local_58 + 0xc) = local_98;
      local_98 = (longlong *)0x0;
      *(undefined4 *)(local_58 + 0x10) = (undefined4)local_90;
      *(undefined4 *)(local_58 + 0x12) = local_90._4_4_;
      local_90 = 0;
      FUN_148a5ff36(lVar9,local_88,&local_58);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_88,(ulonglong)uStack_80 & 0xffffffff);
      puVar10 = local_88;
      goto LAB_143f6cb9c;
    }
  }
  FUN_1400b22c2(&uStack_80,&DAT_149e02088);
  FUN_1400b22c2(&local_70,&DAT_149e02088);
  local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffffffffff00);
  local_58 = L"Error_Send_Friend_Request_Title";
  uStack_50._0_4_ = 0x1f;
  FUN_1446e940c(local_a8,&local_58);
  local_58 = L"ShiftUI";
  uStack_50._0_4_ = 7;
  FUN_1446e940c(local_b8,&local_58);
  local_58 = L"Friend Request Not Sent";
  uStack_50 = CONCAT44(uStack_50._4_4_,0x17);
  FUN_140208c1e(&local_98,local_b8,local_a8,&local_58);
  plVar8 = local_98;
  if (*(code **)(*local_98 + 0x50) != FUN_144828418) {
    plVar8 = (longlong *)(**(code **)(*local_98 + 0x50))();
  }
  FUN_1447a1fc0(plVar8);
  pcVar3 = *(code **)(*local_98 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar8 = local_98 + 3;
    if (local_98[5] != 0) {
      plVar8 = (longlong *)(local_98[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar8 = local_98 + 2;
  }
  else {
    plVar8 = (longlong *)(*pcVar3)(local_98);
  }
  if (&uStack_80 != plVar8) {
    iVar2 = (int)plVar8[1];
    pvVar4 = (void *)*plVar8;
    local_78 = iVar2;
    if (iVar2 == 0 && local_74 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&uStack_80,iVar2);
      if (iVar2 != 0) {
        memcpy(uStack_80,pvVar4,(longlong)iVar2 * 2);
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  FUN_14657de87(&local_98,param_1 + 0x20);
  FUN_1400b22c2(local_b8,&DAT_149dfd136);
  local_58 = L"Error_Send_Friend_Request_Desc";
  uStack_50._0_4_ = 0x1e;
  FUN_1446e940c(local_cc,&local_58);
  local_58 = L"ShiftUI";
  uStack_50._0_4_ = 7;
  FUN_1446e940c(local_d0,&local_58);
  local_58 = L"Could not deliver your SHiFT Friend Request to";
  uStack_50 = CONCAT44(uStack_50._4_4_,0x2e);
  FUN_140208c1e(local_c8,local_d0,local_cc,&local_58);
  plVar8 = local_c8[0];
  if (*(code **)(*local_c8[0] + 0x50) != FUN_144828418) {
    plVar8 = (longlong *)(**(code **)(*local_c8[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar8);
  pcVar3 = *(code **)(*local_c8[0] + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar8 = local_c8[0] + 3;
    if (local_c8[0][5] != 0) {
      plVar8 = (longlong *)(local_c8[0][5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar8 = local_c8[0] + 2;
  }
  else {
    plVar8 = (longlong *)(*pcVar3)(local_c8[0]);
  }
  FUN_1407ec8fc(local_a8,plVar8,local_b8);
  FUN_1401c7f3e(&local_58,local_a8,&local_98);
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_70 = local_58;
  uStack_68 = uStack_50;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar7 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar7,"Player_Profile_Add_Shift_Friend_Response",&local_88);
  }
  puVar10 = uStack_80;
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
    puVar10 = uStack_80;
  }
LAB_143f6cb9c:
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f6ce76 FUN_143f6ce76 body=57 status=ok
// SIG undefined FUN_143f6ce76(void)

undefined8 * FUN_143f6ce76(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5055a0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6cec4 FUN_143f6cec4 body=159 status=ok
// SIG undefined FUN_143f6cec4(void)

void FUN_143f6cec4(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5055a0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f6cf64 FUN_143f6cf64 body=159 status=ok
// SIG undefined FUN_143f6cf64(void)

void FUN_143f6cf64(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5055a0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f6d004 FUN_143f6d004 body=198 status=ok
// SIG undefined FUN_143f6d004(void)

void FUN_143f6d004(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY **pp_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4e4e30;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b5055a0;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var2->EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->ContentionCount = 0;
  }
  else {
    pp_Var3 = &(p_Var2->ProcessLocksList).Blink;
    FUN_1446dd670(pp_Var3,DVar1,0);
    memcpy(*pp_Var3,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6d0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6d0ca FUN_143f6d0ca body=63 status=ok
// SIG undefined FUN_143f6d0ca(void)

void FUN_143f6d0ca(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f6d14c(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6d10a FUN_143f6d10a body=65 status=ok
// SIG undefined FUN_143f6d10a(void)

undefined8 FUN_143f6d10a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f6d14c(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6d14c FUN_143f6d14c body=1420 status=ok
// SIG undefined FUN_143f6d14c(void)

void FUN_143f6d14c(undefined8 param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void **ppvVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [8];
  void *local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *param_2;
  FUN_1400b22c2(&local_78,&DAT_149e02088);
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  if (iVar1 == 0) {
    local_80[0] = 1;
    local_58 = L"Send_Friend_Request_Title";
    uStack_50._0_4_ = 0x19;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Friend Request Sent";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x13);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar5 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar6 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Send_Friend_Request_Desc";
    uStack_50._0_4_ = 0x18;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"We delivered your SHiFT Friend Request to";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x29);
  }
  else {
    local_80[0] = 0;
    local_58 = L"Error_Send_Friend_Request_Title";
    uStack_50._0_4_ = 0x1f;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Friend Request Not Sent";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x17);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar5 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar6 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Error_Send_Friend_Request_Desc";
    uStack_50._0_4_ = 0x1e;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"Could not deliver your SHiFT Friend Request to";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x2e);
  }
  FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
  plVar5 = local_c0[0];
  if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar2 = *(code **)(*local_c0[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar5 = local_c0[0] + 3;
    if (local_c0[0][5] != 0) {
      plVar5 = (longlong *)(local_c0[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar5 = local_c0[0] + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar2)(local_c0[0]);
  }
  FUN_1407ec8fc(local_a0,plVar5,local_b0);
  FUN_1401c7f3e(&local_58,local_a0,local_90);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_68 = local_58;
  uStack_60 = uStack_50;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar4,"Player_Profile_Add_Shift_Friend_Response",local_80);
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f6d6da FUN_143f6d6da body=57 status=ok
// SIG undefined FUN_143f6d6da(void)

undefined8 * FUN_143f6d6da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b505690;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6d728 FUN_143f6d728 body=167 status=ok
// SIG undefined FUN_143f6d728(void)

void FUN_143f6d728(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505690;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f6d7d0 FUN_143f6d7d0 body=167 status=ok
// SIG undefined FUN_143f6d7d0(void)

void FUN_143f6d7d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505690;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f6d878 FUN_143f6d878 body=206 status=ok
// SIG undefined FUN_143f6d878(void)

void FUN_143f6d878(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4e4e30;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b505690;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6d934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6d946 FUN_143f6d946 body=63 status=ok
// SIG undefined FUN_143f6d946(void)

void FUN_143f6d946(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f6d9c8(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6d986 FUN_143f6d986 body=65 status=ok
// SIG undefined FUN_143f6d986(void)

undefined8 FUN_143f6d986(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f6d9c8(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6d9c8 FUN_143f6d9c8 body=1731 status=ok
// SIG undefined FUN_143f6d9c8(void)

void FUN_143f6d9c8(undefined8 *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  void **ppvVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [8];
  void *local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *param_2;
  FUN_1400b22c2(&local_78,&DAT_149e02088);
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  if (iVar1 == 0) {
    local_80[0] = 1;
    local_58 = L"Accept_Friend_Request_Title";
    uStack_50._0_4_ = 0x1b;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Friend Request Accepted";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x17);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar6 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar5 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar5 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar5 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar5 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar5) {
      iVar1 = *(int *)(ppvVar5 + 1);
      pvVar3 = *ppvVar5;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1 + 1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Accept_Friend_Request_Desc";
    uStack_50._0_4_ = 0x1a;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"You are now friends with";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x18);
    FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
    plVar6 = local_c0[0];
    if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_c0[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar6 = local_c0[0] + 3;
      if (local_c0[0][5] != 0) {
        plVar6 = (longlong *)(local_c0[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar6 = local_c0[0] + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar2)(local_c0[0]);
    }
    FUN_1407ec8fc(local_a0,plVar6,local_b0);
    FUN_1401c7f3e(&local_58,local_a0,local_90);
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_58;
    uStack_60 = uStack_50;
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_90[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1411a58b4(*param_1,param_1 + 1);
  }
  else {
    local_80[0] = 0;
    local_58 = L"Error_Accept_Friend_Request_Title";
    uStack_50._0_4_ = 0x21;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Error Accepting Request";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x17);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar6 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar5 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar5 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar5 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar5 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar5) {
      iVar1 = *(int *)(ppvVar5 + 1);
      pvVar3 = *ppvVar5;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1 + 1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Error_Accept_Friend_Request_Desc";
    uStack_50._0_4_ = 0x20;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"Could not accept friend request from";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x24);
    FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
    plVar6 = local_c0[0];
    if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_c0[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar6 = local_c0[0] + 3;
      if (local_c0[0][5] != 0) {
        plVar6 = (longlong *)(local_c0[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar6 = local_c0[0] + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar2)(local_c0[0]);
    }
    FUN_1407ec8fc(local_a0,plVar6,local_b0);
    FUN_1401c7f3e(&local_58,local_a0,local_90);
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_58;
    uStack_60 = uStack_50;
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_90[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar4,"Player_Profile_Accept_Request_Response",local_80);
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f6e08c FUN_143f6e08c body=57 status=ok
// SIG undefined FUN_143f6e08c(void)

undefined8 * FUN_143f6e08c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5057d0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6e0da FUN_143f6e0da body=159 status=ok
// SIG undefined FUN_143f6e0da(void)

void FUN_143f6e0da(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5057d0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f6e17a FUN_143f6e17a body=159 status=ok
// SIG undefined FUN_143f6e17a(void)

void FUN_143f6e17a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5057d0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f6e21a FUN_143f6e21a body=198 status=ok
// SIG undefined FUN_143f6e21a(void)

void FUN_143f6e21a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY **pp_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4e4e30;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b5057d0;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var2->EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->ContentionCount = 0;
  }
  else {
    pp_Var3 = &(p_Var2->ProcessLocksList).Blink;
    FUN_1446dd670(pp_Var3,DVar1,0);
    memcpy(*pp_Var3,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6e2ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6e2e0 FUN_143f6e2e0 body=63 status=ok
// SIG undefined FUN_143f6e2e0(void)

void FUN_143f6e2e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f6e362(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6e320 FUN_143f6e320 body=65 status=ok
// SIG undefined FUN_143f6e320(void)

undefined8 FUN_143f6e320(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f6e362(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6e362 FUN_143f6e362 body=1410 status=ok
// SIG undefined FUN_143f6e362(void)

void FUN_143f6e362(undefined8 param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void **ppvVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [8];
  void *local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *param_2;
  FUN_1400b22c2(&local_78,&DAT_149e02088);
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  if (iVar1 == 0) {
    local_80[0] = 1;
    local_58 = L"Decline_Friend_Request_Title";
    uStack_50._0_4_ = 0x1c;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Friend Request Declined";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x17);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar5 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar6 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Decline_Friend_Request_Desc";
    uStack_50._0_4_ = 0x1b;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50 = CONCAT44(uStack_50._4_4_,7);
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"You have declined request from";
  }
  else {
    local_80[0] = 0;
    local_58 = L"Error_Decline_Friend_Request_Title";
    uStack_50._0_4_ = 0x22;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Error Declining Request";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x17);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar5 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar6 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Error_Decline_Friend_Request_Desc";
    uStack_50._0_4_ = 0x21;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50 = CONCAT44(uStack_50._4_4_,7);
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"Could not decline request from";
  }
  uStack_50 = CONCAT44(uStack_50._4_4_,0x1e);
  FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
  plVar5 = local_c0[0];
  if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar2 = *(code **)(*local_c0[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar5 = local_c0[0] + 3;
    if (local_c0[0][5] != 0) {
      plVar5 = (longlong *)(local_c0[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar5 = local_c0[0] + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar2)(local_c0[0]);
  }
  FUN_1407ec8fc(local_a0,plVar5,local_b0);
  FUN_1401c7f3e(&local_58,local_a0,local_90);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_68 = local_58;
  uStack_60 = uStack_50;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar4,"Player_Profile_Decline_Request_Response",local_80);
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f6e8e6 FUN_143f6e8e6 body=57 status=ok
// SIG undefined FUN_143f6e8e6(void)

undefined8 * FUN_143f6e8e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b505920;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6e934 FUN_143f6e934 body=159 status=ok
// SIG undefined FUN_143f6e934(void)

void FUN_143f6e934(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505920;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f6e9d4 FUN_143f6e9d4 body=159 status=ok
// SIG undefined FUN_143f6e9d4(void)

void FUN_143f6e9d4(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505920;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f6ea74 FUN_143f6ea74 body=198 status=ok
// SIG undefined FUN_143f6ea74(void)

void FUN_143f6ea74(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY **pp_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4e4e30;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b505920;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var2->EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->ContentionCount = 0;
  }
  else {
    pp_Var3 = &(p_Var2->ProcessLocksList).Blink;
    FUN_1446dd670(pp_Var3,DVar1,0);
    memcpy(*pp_Var3,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6eb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6eb3a FUN_143f6eb3a body=63 status=ok
// SIG undefined FUN_143f6eb3a(void)

void FUN_143f6eb3a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f6ebbc(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6eb7a FUN_143f6eb7a body=65 status=ok
// SIG undefined FUN_143f6eb7a(void)

undefined8 FUN_143f6eb7a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f6ebbc(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6ebbc FUN_143f6ebbc body=1420 status=ok
// SIG undefined FUN_143f6ebbc(void)

void FUN_143f6ebbc(undefined8 param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void **ppvVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [8];
  void *local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *param_2;
  FUN_1400b22c2(&local_78,&DAT_149e02088);
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  if (iVar1 == 0) {
    local_80[0] = 1;
    local_58 = L"Block_Friend_Request_Title";
    uStack_50._0_4_ = 0x1a;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"User Blocked";
    uStack_50 = CONCAT44(uStack_50._4_4_,0xc);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar5 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar6 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Block_Friend_Request_Desc";
    uStack_50._0_4_ = 0x19;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"You have blocked";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x10);
  }
  else {
    local_80[0] = 0;
    local_58 = L"Error_Block_Friend_Request_Title";
    uStack_50._0_4_ = 0x20;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Error Blocking User";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x13);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar5 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar6 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Error_Block_Friend_Request_Desc";
    uStack_50._0_4_ = 0x1f;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"Could not block";
    uStack_50 = CONCAT44(uStack_50._4_4_,0xf);
  }
  FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
  plVar5 = local_c0[0];
  if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar2 = *(code **)(*local_c0[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar5 = local_c0[0] + 3;
    if (local_c0[0][5] != 0) {
      plVar5 = (longlong *)(local_c0[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar5 = local_c0[0] + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar2)(local_c0[0]);
  }
  FUN_1407ec8fc(local_a0,plVar5,local_b0);
  FUN_1401c7f3e(&local_58,local_a0,local_90);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_68 = local_58;
  uStack_60 = uStack_50;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar4,"Player_Profile_Block_Player_Response",local_80);
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f6f14a FUN_143f6f14a body=57 status=ok
// SIG undefined FUN_143f6f14a(void)

undefined8 * FUN_143f6f14a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b505a30;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6f198 FUN_143f6f198 body=165 status=ok
// SIG undefined FUN_143f6f198(void)

void FUN_143f6f198(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505a30;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f6f23e FUN_143f6f23e body=165 status=ok
// SIG undefined FUN_143f6f23e(void)

void FUN_143f6f23e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505a30;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f6f2e4 FUN_143f6f2e4 body=204 status=ok
// SIG undefined FUN_143f6f2e4(void)

void FUN_143f6f2e4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4e4e30;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b505a30;
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6f39e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6f3b0 FUN_143f6f3b0 body=63 status=ok
// SIG undefined FUN_143f6f3b0(void)

void FUN_143f6f3b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f6f432(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6f3f0 FUN_143f6f3f0 body=65 status=ok
// SIG undefined FUN_143f6f3f0(void)

undefined8 FUN_143f6f3f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f6f432(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6f432 FUN_143f6f432 body=1428 status=ok
// SIG undefined FUN_143f6f432(void)

void FUN_143f6f432(longlong param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void **ppvVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [8];
  void *local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *param_2;
  FUN_1400b22c2(&local_78,&DAT_149e02088);
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  if (iVar1 == 0) {
    local_80[0] = 1;
    local_58 = L"Unblock_Friend_Request_Title";
    uStack_50._0_4_ = 0x1c;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"User Unblocked";
    uStack_50 = CONCAT44(uStack_50._4_4_,0xe);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar5 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar6 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1 + 8);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Unblock_Friend_Request_Desc";
    uStack_50._0_4_ = 0x1b;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"You have unblocked";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x12);
  }
  else {
    local_80[0] = 0;
    local_58 = L"Error_Unblock_Friend_Request_Title";
    uStack_50._0_4_ = 0x22;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Error Unblocking User";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x15);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar5 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar6 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1 + 8);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Error_Unblock_Friend_Request_Desc";
    uStack_50._0_4_ = 0x21;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"Could not unblock";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x11);
  }
  FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
  plVar5 = local_c0[0];
  if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar2 = *(code **)(*local_c0[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar5 = local_c0[0] + 3;
    if (local_c0[0][5] != 0) {
      plVar5 = (longlong *)(local_c0[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar5 = local_c0[0] + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar2)(local_c0[0]);
  }
  FUN_1407ec8fc(local_a0,plVar5,local_b0);
  FUN_1401c7f3e(&local_58,local_a0,local_90);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_68 = local_58;
  uStack_60 = uStack_50;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar4,"Player_Profile_Add_Unblock_Player_Response",local_80);
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f6f9c8 FUN_143f6f9c8 body=57 status=ok
// SIG undefined FUN_143f6f9c8(void)

undefined8 * FUN_143f6f9c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b505b50;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f6fa16 FUN_143f6fa16 body=173 status=ok
// SIG undefined FUN_143f6fa16(void)

void FUN_143f6fa16(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505b50;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 143f6fac4 FUN_143f6fac4 body=173 status=ok
// SIG undefined FUN_143f6fac4(void)

void FUN_143f6fac4(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505b50;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 143f6fb72 FUN_143f6fb72 body=212 status=ok
// SIG undefined FUN_143f6fb72(void)

void FUN_143f6fb72(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e06450;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b505b50;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f6fc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f6fc46 FUN_143f6fc46 body=65 status=ok
// SIG undefined FUN_143f6fc46(void)

void FUN_143f6fc46(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f6fccc(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6fc88 FUN_143f6fc88 body=67 status=ok
// SIG undefined FUN_143f6fc88(void)

undefined8 FUN_143f6fc88(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f6fccc(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f6fccc FUN_143f6fccc body=1484 status=ok
// SIG undefined FUN_143f6fccc(void)

void FUN_143f6fccc(longlong param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong *plVar7;
  void **ppvVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [8];
  void *local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar1 = *param_2;
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar6 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar7 = (longlong *)FUN_140773fe2();
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x2d0))(plVar7,uVar2,uVar6);
  }
  FUN_1400b22c2(&local_78,&DAT_149e02088);
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  if (cVar1 == '\0') {
    local_80[0] = 0;
    local_58 = L"Error_Report_Friend_Request_Title";
    uStack_50._0_4_ = 0x21;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Error Reporting User";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x14);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar7 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar7 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar7);
    pcVar4 = *(code **)(*local_90[0] + 0x28);
    if (pcVar4 == FUN_14482841c) {
      ppvVar8 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar8 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      ppvVar8 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar8 = (void **)(*pcVar4)(local_90[0]);
    }
    if (&local_78 != ppvVar8) {
      iVar3 = *(int *)(ppvVar8 + 1);
      pvVar5 = *ppvVar8;
      local_70 = iVar3;
      if (iVar3 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar3);
        if (iVar3 != 0) {
          memcpy(local_78,pvVar5,(longlong)iVar3 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1 + 0x10);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Error_Report_Friend_Request_Desc";
    uStack_50._0_4_ = 0x20;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"Could not report";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x10);
  }
  else {
    local_80[0] = 1;
    local_58 = L"Report_Friend_Request_Title";
    uStack_50._0_4_ = 0x1b;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"User Reported";
    uStack_50 = CONCAT44(uStack_50._4_4_,0xd);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar7 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar7 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar7);
    pcVar4 = *(code **)(*local_90[0] + 0x28);
    if (pcVar4 == FUN_14482841c) {
      ppvVar8 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar8 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      ppvVar8 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar8 = (void **)(*pcVar4)(local_90[0]);
    }
    if (&local_78 != ppvVar8) {
      iVar3 = *(int *)(ppvVar8 + 1);
      pvVar5 = *ppvVar8;
      local_70 = iVar3;
      if (iVar3 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar3);
        if (iVar3 != 0) {
          memcpy(local_78,pvVar5,(longlong)iVar3 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1 + 0x10);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Report_Friend_Request_Desc";
    uStack_50._0_4_ = 0x1a;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"You have reported";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x11);
  }
  FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
  plVar7 = local_c0[0];
  if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
    plVar7 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar7);
  pcVar4 = *(code **)(*local_c0[0] + 0x28);
  if (pcVar4 == FUN_14482841c) {
    plVar7 = local_c0[0] + 3;
    if (local_c0[0][5] != 0) {
      plVar7 = (longlong *)(local_c0[0][5] + 8);
    }
  }
  else if (pcVar4 == (code *)&LAB_14010c34c) {
    plVar7 = local_c0[0] + 2;
  }
  else {
    plVar7 = (longlong *)(*pcVar4)(local_c0[0]);
  }
  FUN_1407ec8fc(local_a0,plVar7,local_b0);
  FUN_1401c7f3e(&local_58,local_a0,local_90);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_68 = local_58;
  uStack_60 = uStack_50;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar6 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar6,"Player_Profile_Report_Player_Response",local_80);
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f7029a FUN_143f7029a body=57 status=ok
// SIG undefined FUN_143f7029a(void)

undefined8 * FUN_143f7029a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b505c70;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f702e8 FUN_143f702e8 body=159 status=ok
// SIG undefined FUN_143f702e8(void)

void FUN_143f702e8(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505c70;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f70388 FUN_143f70388 body=159 status=ok
// SIG undefined FUN_143f70388(void)

void FUN_143f70388(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505c70;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f70428 FUN_143f70428 body=198 status=ok
// SIG undefined FUN_143f70428(void)

void FUN_143f70428(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY **pp_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4e4e30;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b505c70;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var2->EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->ContentionCount = 0;
  }
  else {
    pp_Var3 = &(p_Var2->ProcessLocksList).Blink;
    FUN_1446dd670(pp_Var3,DVar1,0);
    memcpy(*pp_Var3,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f704dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f704ee FUN_143f704ee body=63 status=ok
// SIG undefined FUN_143f704ee(void)

void FUN_143f704ee(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f70570(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7052e FUN_143f7052e body=65 status=ok
// SIG undefined FUN_143f7052e(void)

undefined8 FUN_143f7052e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f70570(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f70570 FUN_143f70570 body=1420 status=ok
// SIG undefined FUN_143f70570(void)

void FUN_143f70570(undefined8 param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void **ppvVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [8];
  void *local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *param_2;
  FUN_1400b22c2(&local_78,&DAT_149e02088);
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  if (iVar1 == 0) {
    local_80[0] = 1;
    local_58 = L"Cancel_Friend_Request_Title";
    uStack_50._0_4_ = 0x1b;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Friend Request Canceled";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x17);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar5 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar6 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Cancel_Friend_Request_Desc";
    uStack_50._0_4_ = 0x1a;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"You have canceled request to";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x1c);
  }
  else {
    local_80[0] = 0;
    local_58 = L"Error_Cancel_Friend_Request_Title";
    uStack_50._0_4_ = 0x21;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Error Canceling Request";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x17);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar5 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar5);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar6 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar6 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar1 = *(int *)(ppvVar6 + 1);
      pvVar3 = *ppvVar6;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Error_Cancel_Friend_Request_Desc";
    uStack_50._0_4_ = 0x20;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"Could not cancel friend request to";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x22);
  }
  FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
  plVar5 = local_c0[0];
  if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar2 = *(code **)(*local_c0[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar5 = local_c0[0] + 3;
    if (local_c0[0][5] != 0) {
      plVar5 = (longlong *)(local_c0[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar5 = local_c0[0] + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar2)(local_c0[0]);
  }
  FUN_1407ec8fc(local_a0,plVar5,local_b0);
  FUN_1401c7f3e(&local_58,local_a0,local_90);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_68 = local_58;
  uStack_60 = uStack_50;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar4,"Player_Profile_Cancel_Request_Response",local_80);
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f70afe FUN_143f70afe body=29 status=ok
// SIG undefined FUN_143f70afe(void)

undefined8 FUN_143f70afe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f70b30 FUN_143f70b30 body=85 status=ok
// SIG undefined FUN_143f70b30(void)

void FUN_143f70b30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505db0;
  return;
}



// FUNCTION 143f70b86 FUN_143f70b86 body=85 status=ok
// SIG undefined FUN_143f70b86(void)

void FUN_143f70b86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505db0;
  return;
}



// FUNCTION 143f70bdc FUN_143f70bdc body=118 status=ok
// SIG undefined FUN_143f70bdc(void)

void FUN_143f70bdc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b505290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b505db0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f70c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f70c5a FUN_143f70c5a body=19 status=ok
// SIG undefined FUN_143f70c5a(void)

undefined1 FUN_143f70c5a(undefined8 param_1,undefined8 param_2)

{
  FUN_143f70c6e(param_2);
  return 1;
}



// FUNCTION 143f70c6e FUN_143f70c6e body=66 status=ok
// SIG undefined FUN_143f70c6e(void)

void FUN_143f70c6e(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar1 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_1461bcd44(uVar1,"Load_Request_List_Response",param_1);
  }
  FUN_14154d759();
  FUN_145da91ec(0,0);
  return;
}



// FUNCTION 143f70cb0 FUN_143f70cb0 body=29 status=ok
// SIG undefined FUN_143f70cb0(void)

undefined8 FUN_143f70cb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f70ce2 FUN_143f70ce2 body=85 status=ok
// SIG undefined FUN_143f70ce2(void)

void FUN_143f70ce2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505e20;
  return;
}



// FUNCTION 143f70d38 FUN_143f70d38 body=85 status=ok
// SIG undefined FUN_143f70d38(void)

void FUN_143f70d38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505e20;
  return;
}



// FUNCTION 143f70d8e FUN_143f70d8e body=118 status=ok
// SIG undefined FUN_143f70d8e(void)

void FUN_143f70d8e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b505290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b505e20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f70df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f70e04 FUN_143f70e04 body=57 status=ok
// SIG undefined FUN_143f70e04(void)

void FUN_143f70e04(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_2 + 1) != 0) && (DAT_14cb98810 != (longlong *)0x0)) {
    uVar1 = *param_2;
    uVar2 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf59e(uVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 143f70e3e FUN_143f70e3e body=56 status=ok
// SIG undefined FUN_143f70e3e(void)

undefined8 FUN_143f70e3e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_2 + 1) != 0) && (DAT_14cb98810 != (longlong *)0x0)) {
    uVar1 = *param_2;
    uVar2 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf59e(uVar2,uVar1);
  }
  return 1;
}



// FUNCTION 143f70e76 FUN_143f70e76 body=111 status=ok
// SIG undefined FUN_143f70e76(void)

undefined8 * FUN_143f70e76(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b505e90;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[8];
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
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f70efa FUN_143f70efa body=277 status=ok
// SIG undefined FUN_143f70efa(void)

void FUN_143f70efa(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e063e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505e90;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar3 = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  lVar4 = *(longlong *)(param_1 + 0x40);
  puVar2[8] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar2[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  pvVar3 = *(void **)(param_1 + 0x48);
  *(int *)(puVar2 + 10) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 9,iVar1,0);
    memcpy((void *)puVar2[9],pvVar3,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
  return;
}



// FUNCTION 143f71010 FUN_143f71010 body=277 status=ok
// SIG undefined FUN_143f71010(void)

void FUN_143f71010(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e063e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505e90;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar3 = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  lVar4 = *(longlong *)(param_1 + 0x40);
  puVar2[8] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar2[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  pvVar3 = *(void **)(param_1 + 0x48);
  *(int *)(puVar2 + 10) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 9,iVar1,0);
    memcpy((void *)puVar2[9],pvVar3,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
  return;
}



// FUNCTION 143f71126 FUN_143f71126 body=319 status=ok
// SIG undefined FUN_143f71126(void)

void FUN_143f71126(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  DWORD DVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  void *pvVar4;
  _LIST_ENTRY *p_Var5;
  _LIST_ENTRY **pp_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149e063e0;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_14b505e90;
  (p_Var3->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var3->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var3->Flags = 0;
  p_Var3->CreatorBackTraceIndexHigh = 0;
  p_Var3->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar4 = *(void **)(param_1 + 0x28);
  p_Var3[1].Type = (short)iVar1;
  p_Var3[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var3[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var3->Flags,iVar1,0);
    memcpy(*(void **)&p_Var3->Flags,pvVar4,(longlong)iVar1 * 2);
  }
  p_Var3[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x40);
  p_Var3[1].ProcessLocksList.Flink = p_Var5;
  if (p_Var5 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var5->Blink = *(int *)&p_Var5->Blink + 1;
    UNLOCK();
  }
  p_Var3[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
  DVar2 = *(DWORD *)(param_1 + 0x50);
  pvVar4 = *(void **)(param_1 + 0x48);
  p_Var3[1].EntryCount = DVar2;
  if ((longlong)(int)DVar2 == 0) {
    p_Var3[1].ContentionCount = 0;
  }
  else {
    pp_Var6 = &p_Var3[1].ProcessLocksList.Blink;
    FUN_1446dd670(pp_Var6,DVar2,0);
    memcpy(*pp_Var6,pvVar4,(longlong)(int)DVar2 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f7124f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f71270 FUN_143f71270 body=20 status=ok
// SIG undefined FUN_143f71270(void)

undefined1 FUN_143f71270(longlong param_1)

{
  FUN_143f71284(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f71284 FUN_143f71284 body=2089 status=ok
// SIG undefined FUN_143f71284(void)

void FUN_143f71284(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  longlong lVar12;
  ushort uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ushort uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 **local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined1 local_178;
  void **local_170;
  undefined4 **local_168;
  undefined8 *local_158;
  undefined1 *local_150;
  longlong local_148;
  undefined4 local_140;
  undefined8 *local_138;
  undefined4 local_130;
  void *local_128;
  ulonglong uStack_120;
  undefined4 *local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  void *local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar3 = *(undefined4 *)(param_1 + 1);
  uVar7 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar8 = (longlong *)FUN_140773fe2();
  if (((plVar8 != (longlong *)0x0) &&
      (lVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8,uVar3,uVar7), lVar9 != 0)) &&
     (*(longlong *)(lVar9 + 0x2b8) != 0)) {
    local_118 = (undefined4 *)0x0;
    uStack_110 = 0;
    local_f0 = (void *)CONCAT26(0x30,(undefined6)local_f0);
    FUN_1400020e8(&local_118);
    iVar6 = (int)param_2[1];
    if (iVar6 == (int)uStack_110) {
      bVar20 = true;
      if (1 < iVar6) {
        lVar12 = 0;
        while( true ) {
          uVar13 = *(ushort *)(*param_2 + lVar12);
          uVar5 = (uint)uVar13;
          uVar18 = *(ushort *)((longlong)local_118 + lVar12);
          uVar14 = (uint)uVar18;
          if (uVar13 != uVar18) {
            if ((uVar18 | uVar13) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar13];
              uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar18];
              if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar18]) goto LAB_143f71387;
            }
            iVar6 = uVar5 - uVar14;
            goto LAB_143f713c5;
          }
          if (uVar13 == 0) break;
LAB_143f71387:
          lVar12 = lVar12 + 2;
        }
        iVar6 = 0;
LAB_143f713c5:
        bVar20 = iVar6 == 0;
      }
    }
    else {
      bVar20 = (int)uStack_110 + iVar6 == 1;
    }
    if (local_118 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar20) {
      local_118 = (undefined4 *)0x0;
      uStack_110 = 0;
      local_180 = param_1 + 2;
      local_170 = &local_128;
      local_128 = (void *)0x0;
      uStack_120 = 0;
      local_190 = &local_138;
      local_138 = (undefined8 *)CONCAT71(local_138._1_7_,4);
      local_198 = param_1 + 6;
      local_178 = 0;
      local_188 = 0;
      local_168 = &local_118;
      FUN_148abe9c1(&local_108,lVar9,*(undefined4 *)(param_1 + 1),param_2);
    }
    else {
      if (1 < (int)param_2[1]) {
        FUN_14150a9d5(&local_118,lVar9,4);
        local_128 = (void *)0x0;
        uVar5 = *(uint *)(param_2 + 1);
        pvVar11 = (void *)*param_2;
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar5);
        if ((longlong)(int)uVar5 == 0) {
          uStack_120 = (ulonglong)uVar5;
        }
        else {
          FUN_1446dd670(&local_128,uVar5,0);
          memcpy(local_128,pvVar11,(longlong)(int)uVar5 * 2);
        }
        bVar4 = 1;
        puVar17 = local_118;
        if ((longlong)(int)uStack_110 != 0) {
          puVar17 = local_118 + (longlong)(int)uStack_110 * 0x10;
          puVar16 = local_118;
LAB_143f7152c:
          if (puVar16[4] != (int)uStack_120) {
            if (puVar16[4] + (int)uStack_120 == 1) goto LAB_143f7159d;
            goto LAB_143f7158f;
          }
          if (1 < (int)uStack_120) {
            lVar12 = 0;
            do {
              uVar13 = *(ushort *)(*(longlong *)(puVar16 + 2) + lVar12);
              uVar15 = (ulonglong)uVar13;
              uVar18 = *(ushort *)((longlong)local_128 + lVar12);
              if (uVar13 == uVar18) {
                if (uVar13 == 0) break;
              }
              else {
                if (0x7f < (uVar18 | uVar13)) goto LAB_143f7157c;
                uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                uVar19 = (ulonglong)uVar18;
                uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
                if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar19]) goto LAB_143f7157c;
              }
              lVar12 = lVar12 + 2;
            } while( true );
          }
          goto LAB_143f7159d;
        }
LAB_143f7159f:
        if (local_128 != (void *)0x0) {
          FUN_1400020a8();
        }
        if ((bool)(bVar4 | puVar17 == (undefined4 *)0x0)) {
          local_108 = *param_1;
          local_100 = (void *)CONCAT44(local_100._4_4_,*(undefined4 *)(param_1 + 1));
          local_f8 = (void *)0x0;
          uVar5 = *(uint *)(param_2 + 1);
          pvVar11 = (void *)*param_2;
          local_f0 = (void *)CONCAT44(local_f0._4_4_,uVar5);
          if ((longlong)(int)uVar5 == 0) {
            local_f0 = (void *)(ulonglong)uVar5;
          }
          else {
            FUN_1446dd670(&local_f8,uVar5,0);
            memcpy(local_f8,pvVar11,(longlong)(int)uVar5 * 2);
          }
          local_e8 = (void *)0x0;
          uVar5 = *(uint *)(param_1 + 7);
          pvVar11 = (void *)param_1[6];
          local_e0 = (void *)CONCAT44(local_e0._4_4_,uVar5);
          if ((longlong)(int)uVar5 == 0) {
            local_e0 = (void *)(ulonglong)uVar5;
          }
          else {
            FUN_1446dd670(&local_e8,uVar5,0);
            memcpy(local_e8,pvVar11,(longlong)(int)uVar5 * 2);
          }
          local_138 = (undefined8 *)0x0;
          local_130 = 0;
          FUN_1446efa72(&local_138,0,5,0x10);
          pvVar11 = local_f8;
          puVar2 = local_138;
          local_130 = 5;
          *local_138 = &PTR_LAB_149e063e0;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar12 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar12 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar12;
          local_138[2] = lVar10;
          *local_138 = &PTR_FUN_14b505f70;
          local_138[3] = local_108;
          *(undefined4 *)(local_138 + 4) = local_100._0_4_;
          local_138[5] = 0;
          lVar12 = (longlong)(int)local_f0;
          *(int *)(local_138 + 6) = (int)local_f0;
          if (lVar12 == 0) {
            *(undefined4 *)((longlong)local_138 + 0x34) = 0;
          }
          else {
            puVar1 = local_138 + 5;
            FUN_1446dd670(puVar1,(ulonglong)local_f0 & 0xffffffff,0);
            memcpy((void *)*puVar1,pvVar11,lVar12 * 2);
          }
          pvVar11 = local_e8;
          puVar2[7] = 0;
          lVar12 = (longlong)(int)local_e0;
          *(int *)(puVar2 + 8) = (int)local_e0;
          if (lVar12 == 0) {
            *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
          }
          else {
            FUN_1446dd670(puVar2 + 7,(ulonglong)local_e0 & 0xffffffff,0);
            memcpy((void *)puVar2[7],pvVar11,lVar12 * 2);
          }
          FUN_148a62dce(lVar9,param_2,&local_138);
          pvVar11 = local_f8;
          if (local_e8 != (void *)0x0) {
            FUN_1400020a8();
            pvVar11 = local_f8;
          }
        }
        else {
          puVar2 = (undefined8 *)(puVar17 + 6);
          if (puVar2 != param_1 + 6) {
            iVar6 = *(int *)(param_1 + 7);
            pvVar11 = (void *)param_1[6];
            puVar17[8] = iVar6;
            if (iVar6 == 0 && puVar17[9] == 0) {
              puVar17[9] = 0;
            }
            else {
              FUN_1446dd670(puVar2,iVar6);
              if (iVar6 != 0) {
                memcpy((void *)*puVar2,pvVar11,(longlong)iVar6 * 2);
              }
            }
          }
          uVar7 = *param_1;
          local_138 = (undefined8 *)0x0;
          local_130 = 0;
          FUN_1446efa72(&local_138,0,2,0x10);
          local_130 = 2;
          *local_138 = &PTR_LAB_14b505290;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar12 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar12 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar12;
          local_138[2] = lVar10;
          *local_138 = &PTR_FUN_14b505f00;
          local_108 = CONCAT44(local_108._4_4_,*puVar17);
          local_100 = (void *)0x0;
          uVar5 = puVar17[4];
          pvVar11 = *(void **)(puVar17 + 2);
          local_f8 = (void *)CONCAT44(local_f8._4_4_,uVar5);
          if ((longlong)(int)uVar5 == 0) {
            local_f8 = (void *)(ulonglong)uVar5;
          }
          else {
            FUN_1446dd670(&local_100,uVar5,0);
            memcpy(local_100,pvVar11,(longlong)(int)uVar5 * 2);
          }
          local_f0 = (void *)0x0;
          uVar5 = puVar17[8];
          pvVar11 = *(void **)(puVar17 + 6);
          local_e8 = (void *)CONCAT44(local_e8._4_4_,uVar5);
          if ((longlong)(int)uVar5 == 0) {
            local_e8 = (void *)(ulonglong)uVar5;
          }
          else {
            FUN_1446dd670(&local_f0,uVar5,0);
            memcpy(local_f0,pvVar11,(longlong)(int)uVar5 * 2);
          }
          local_e0 = (void *)0x0;
          local_d8 = puVar17[0xc];
          lVar12 = (longlong)local_d8;
          pvVar11 = *(void **)(puVar17 + 10);
          if (lVar12 == 0) {
            local_d4 = 0;
          }
          else {
            FUN_1446dd670(&local_e0,local_d8,0);
            memcpy(local_e0,pvVar11,lVar12 * 2);
          }
          local_d0 = *(undefined2 *)(puVar17 + 0xe);
          local_158 = &local_108;
          local_150 = local_c8;
          FUN_148abf780(&local_148);
          local_198 = (undefined8 *)((ulonglong)local_198 & 0xffffffffffffff00);
          FUN_14624c942(uVar7,lVar9,&local_148,&local_138);
          FUN_141323308(local_148,local_140);
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          if (local_e0 != (void *)0x0) {
            FUN_1400020a8();
          }
          pvVar11 = local_100;
          if (local_f0 != (void *)0x0) {
            FUN_1400020a8();
            pvVar11 = local_100;
          }
        }
        if (pvVar11 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_141323308(local_118,uStack_110 & 0xffffffff);
        if (local_118 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143f712f5;
      }
      FUN_148abf356(&local_108);
    }
    if (DAT_14cb98810 != (longlong *)0x0) {
      uVar7 = (**(code **)(*DAT_14cb98810 + 0xf8))();
      FUN_148abf59e(uVar7,&local_108);
    }
    FUN_148abf402(&local_108);
  }
LAB_143f712f5:
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143f7157c:
  if (uVar13 == uVar18) {
LAB_143f7159d:
    bVar4 = 0;
    puVar17 = puVar16;
    goto LAB_143f7159f;
  }
LAB_143f7158f:
  puVar16 = puVar16 + 0x10;
  if (puVar16 == puVar17) goto LAB_143f7159f;
  goto LAB_143f7152c;
}



// FUNCTION 143f71aae FUN_143f71aae body=29 status=ok
// SIG undefined FUN_143f71aae(void)

undefined8 FUN_143f71aae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f71ae0 FUN_143f71ae0 body=85 status=ok
// SIG undefined FUN_143f71ae0(void)

void FUN_143f71ae0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505f00;
  return;
}



// FUNCTION 143f71b36 FUN_143f71b36 body=85 status=ok
// SIG undefined FUN_143f71b36(void)

void FUN_143f71b36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505f00;
  return;
}



// FUNCTION 143f71b8c FUN_143f71b8c body=118 status=ok
// SIG undefined FUN_143f71b8c(void)

void FUN_143f71b8c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b505290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b505f00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f71bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f71c02 FUN_143f71c02 body=57 status=ok
// SIG undefined FUN_143f71c02(void)

void FUN_143f71c02(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_2 + 1) != 0) && (DAT_14cb98810 != (longlong *)0x0)) {
    uVar1 = *param_2;
    uVar2 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf59e(uVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 143f71c3c FUN_143f71c3c body=56 status=ok
// SIG undefined FUN_143f71c3c(void)

undefined8 FUN_143f71c3c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_2 + 1) != 0) && (DAT_14cb98810 != (longlong *)0x0)) {
    uVar1 = *param_2;
    uVar2 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf59e(uVar2,uVar1);
  }
  return 1;
}



// FUNCTION 143f71c74 FUN_143f71c74 body=71 status=ok
// SIG undefined FUN_143f71c74(void)

undefined8 * FUN_143f71c74(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b505f70;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f71cd0 FUN_143f71cd0 body=252 status=ok
// SIG undefined FUN_143f71cd0(void)

void FUN_143f71cd0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e063e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505f70;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar3 = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  pvVar3 = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],pvVar3,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 143f71dcc FUN_143f71dcc body=252 status=ok
// SIG undefined FUN_143f71dcc(void)

void FUN_143f71dcc(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e063e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b505f70;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar3 = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  pvVar3 = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],pvVar3,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 143f71ec8 FUN_143f71ec8 body=294 status=ok
// SIG undefined FUN_143f71ec8(void)

void FUN_143f71ec8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *pvVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e063e0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b505f70;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar3 = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,pvVar3,(longlong)iVar1 * 2);
  }
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  iVar1 = *(int *)(param_1 + 0x40);
  pvVar3 = *(void **)(param_1 + 0x38);
  *(int *)&p_Var2[1].ProcessLocksList.Flink = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var2[1].CriticalSection,iVar1,0);
    memcpy(p_Var2[1].CriticalSection,pvVar3,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f71fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f71ff8 FUN_143f71ff8 body=20 status=ok
// SIG undefined FUN_143f71ff8(void)

undefined1 FUN_143f71ff8(longlong param_1)

{
  FUN_143f7200c(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f7200c FUN_143f7200c body=1003 status=ok
// SIG undefined FUN_143f7200c(void)

void FUN_143f7200c(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 *local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  void *local_b0;
  ulonglong uStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulonglong uStack_88;
  undefined2 local_80;
  undefined4 local_78 [2];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = *(undefined4 *)(param_1 + 1);
  uVar4 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar5 = (longlong *)FUN_140773fe2();
  if (plVar5 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x2d0))(plVar5,uVar1,uVar4);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x2b8) != 0)) {
      local_90 = (void *)0x0;
      uStack_88 = 0;
      local_a0 = (void *)0x0;
      uStack_98 = 0;
      local_b0 = (void *)0x0;
      uStack_a8 = 0;
      local_80 = 0x304;
      local_b8 = FUN_14657de13(param_1 + 2);
      if (&local_b0 != (void **)(param_1 + 2)) {
        uVar2 = *(uint *)(param_1 + 3);
        pvVar3 = (void *)param_1[2];
        uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar2);
        if ((longlong)(int)uVar2 == 0) {
          uStack_a8 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_b0,uVar2,0);
          memcpy(local_b0,pvVar3,(longlong)(int)uVar2 * 2);
        }
      }
      if (&local_a0 != (void **)(param_1 + 4)) {
        uVar2 = *(uint *)(param_1 + 5);
        pvVar3 = (void *)param_1[4];
        uStack_98 = CONCAT44(uStack_98._4_4_,uVar2);
        if (uVar2 == 0 && uStack_98._4_4_ == 0) {
          uStack_98 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_a0,uVar2);
          if (uVar2 != 0) {
            memcpy(local_a0,pvVar3,(longlong)(int)uVar2 * 2);
          }
        }
      }
      uVar4 = *param_1;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0;
      FUN_1446efa72(&local_c8,0,2,0x10);
      pvVar3 = local_b0;
      local_c0 = 2;
      *local_c8 = &PTR_LAB_14b505290;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_c8[2] = lVar7;
      *local_c8 = &PTR_FUN_14b505fe0;
      local_78[0] = local_b8;
      local_70 = (void *)0x0;
      lVar8 = (longlong)(int)uStack_a8;
      local_68 = (int)uStack_a8;
      if (lVar8 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,uStack_a8 & 0xffffffff,0);
        memcpy(local_70,pvVar3,lVar8 * 2);
      }
      pvVar3 = local_a0;
      local_60 = (void *)0x0;
      lVar8 = (longlong)(int)uStack_98;
      local_58 = (int)uStack_98;
      if (lVar8 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,uStack_98 & 0xffffffff,0);
        memcpy(local_60,pvVar3,lVar8 * 2);
      }
      pvVar3 = local_90;
      local_50 = (void *)0x0;
      lVar8 = (longlong)(int)uStack_88;
      local_48 = (int)uStack_88;
      if (lVar8 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,uStack_88 & 0xffffffff,0);
        memcpy(local_50,pvVar3,lVar8 * 2);
      }
      local_e8 = local_78;
      local_40 = local_80;
      local_e0 = &local_38;
      FUN_148abf780(&local_d8);
      local_f8 = 0;
      FUN_14624c942(uVar4,lVar6,&local_d8,&local_c8);
      FUN_141323308(local_d8,local_d0);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_90 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f723f8 FUN_143f723f8 body=29 status=ok
// SIG undefined FUN_143f723f8(void)

undefined8 FUN_143f723f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7242a FUN_143f7242a body=85 status=ok
// SIG undefined FUN_143f7242a(void)

void FUN_143f7242a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505fe0;
  return;
}



// FUNCTION 143f72480 FUN_143f72480 body=85 status=ok
// SIG undefined FUN_143f72480(void)

void FUN_143f72480(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b505290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b505fe0;
  return;
}



// FUNCTION 143f724d6 FUN_143f724d6 body=118 status=ok
// SIG undefined FUN_143f724d6(void)

void FUN_143f724d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b505290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b505fe0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f7253d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f7254c FUN_143f7254c body=57 status=ok
// SIG undefined FUN_143f7254c(void)

void FUN_143f7254c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_2 + 1) != 0) && (DAT_14cb98810 != (longlong *)0x0)) {
    uVar1 = *param_2;
    uVar2 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf59e(uVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 143f72586 FUN_143f72586 body=56 status=ok
// SIG undefined FUN_143f72586(void)

undefined8 FUN_143f72586(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_2 + 1) != 0) && (DAT_14cb98810 != (longlong *)0x0)) {
    uVar1 = *param_2;
    uVar2 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf59e(uVar2,uVar1);
  }
  return 1;
}



// FUNCTION 143f725be FUN_143f725be body=57 status=ok
// SIG undefined FUN_143f725be(void)

undefined8 * FUN_143f725be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b506050;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7260c FUN_143f7260c body=173 status=ok
// SIG undefined FUN_143f7260c(void)

void FUN_143f7260c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b505290;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b506050;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 143f726ba FUN_143f726ba body=173 status=ok
// SIG undefined FUN_143f726ba(void)

void FUN_143f726ba(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b505290;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b506050;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 143f72768 FUN_143f72768 body=212 status=ok
// SIG undefined FUN_143f72768(void)

void FUN_143f72768(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b505290;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b506050;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f7282a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f72846 FUN_143f72846 body=20 status=ok
// SIG undefined FUN_143f72846(void)

undefined1 FUN_143f72846(longlong param_1)

{
  FUN_143f7285a(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f7285a FUN_143f7285a body=765 status=ok
// SIG undefined FUN_143f7285a(void)

void FUN_143f7285a(longlong param_1,undefined8 param_2)

{
  void *_Src;
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb98910 != DAT_14cb9893c) {
    puVar6 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar6 = DAT_14cb98948;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14cb98950 - 1U & *(uint *)(param_1 + 8)) * 4);
    while (iVar7 != -1) {
      lVar4 = DAT_14cb98908 + (longlong)iVar7 * 0x20;
      if (*(uint *)(DAT_14cb98908 + (longlong)iVar7 * 0x20) == *(uint *)(param_1 + 8))
      goto LAB_143f728d9;
      iVar7 = *(int *)(lVar4 + 0x18);
    }
  }
  lVar4 = 0;
LAB_143f728d9:
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_1 + 0x18);
  lVar8 = (longlong)local_48;
  _Src = *(void **)(param_1 + 0x10);
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar8 * 2);
  }
  iVar7 = -1;
  if ((longlong)*(int *)(lVar4 + 0x10) != 0) {
    plVar1 = *(longlong **)(lVar4 + 8);
    plVar5 = plVar1;
LAB_143f72956:
    if (local_48 != (int)plVar5[1]) {
      if ((int)plVar5[1] + local_48 == 1) goto LAB_143f729c5;
      goto LAB_143f729b7;
    }
    if (1 < local_48) {
      lVar8 = 0;
      do {
        uVar11 = *(ushort *)((longlong)local_50 + lVar8);
        uVar12 = (ulonglong)uVar11;
        uVar9 = *(ushort *)(*plVar5 + lVar8);
        if (uVar11 == uVar9) {
          if (uVar11 == 0) break;
        }
        else {
          if (0x7f < (uVar9 | uVar11)) goto LAB_143f729a4;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar12] != (&DAT_149e05da0)[uVar10]) goto LAB_143f729a4;
        }
        lVar8 = lVar8 + 2;
      } while( true );
    }
    goto LAB_143f729c5;
  }
LAB_143f729d2:
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(uint *)(param_1 + 8);
  if (DAT_14cb98910 != DAT_14cb9893c) {
    puVar6 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar6 = DAT_14cb98948;
    }
    for (iVar3 = *(int *)(puVar6 + (ulonglong)(DAT_14cb98950 - 1U & uVar2) * 4); iVar3 != -1;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + DAT_14cb98908 + 0x18)) {
      if (*(uint *)(DAT_14cb98908 + (longlong)iVar3 * 0x20) == uVar2) goto LAB_143f72a42;
    }
  }
  iVar3 = -1;
LAB_143f72a42:
  if (-1 < iVar7) {
    lVar4 = 0;
    if (iVar3 != -1) {
      lVar4 = (longlong)iVar3 * 0x20 + DAT_14cb98908;
    }
    if (iVar7 < *(int *)(lVar4 + 0x10)) {
      if (DAT_14cb98910 != DAT_14cb9893c) {
        puVar6 = &DAT_14cb98940;
        if (DAT_14cb98948 != (undefined *)0x0) {
          puVar6 = DAT_14cb98948;
        }
        iVar3 = *(int *)(puVar6 + (ulonglong)(DAT_14cb98950 - 1U & uVar2) * 4);
        while (iVar3 != -1) {
          lVar4 = DAT_14cb98908 + (longlong)iVar3 * 0x20;
          if (*(uint *)(DAT_14cb98908 + (longlong)iVar3 * 0x20) == uVar2) goto LAB_143f72a75;
          iVar3 = *(int *)(lVar4 + 0x18);
        }
      }
      lVar4 = 0;
LAB_143f72a75:
      FUN_148abfbc6(lVar4 + 8,iVar7);
      uVar2 = *(uint *)(param_1 + 8);
    }
  }
  if (DAT_14cb98910 != DAT_14cb9893c) {
    puVar6 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar6 = DAT_14cb98948;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14cb98950 - 1U & uVar2) * 4);
    while (iVar7 != -1) {
      lVar4 = DAT_14cb98908 + (longlong)iVar7 * 0x20;
      if (*(uint *)(DAT_14cb98908 + (longlong)iVar7 * 0x20) == uVar2) goto LAB_143f72adc;
      iVar7 = *(int *)(lVar4 + 0x18);
    }
  }
  lVar4 = 0;
LAB_143f72adc:
  FUN_148ac7522(lVar4 + 8,param_2);
  FUN_14154d759();
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143f729a4:
  if (uVar11 == uVar9) {
LAB_143f729c5:
    iVar7 = (int)((ulonglong)((longlong)plVar5 - (longlong)plVar1) >> 3) * -0x3d70a3d7;
    goto LAB_143f729d2;
  }
LAB_143f729b7:
  plVar5 = plVar5 + 0x19;
  if (plVar5 == plVar1 + (longlong)*(int *)(lVar4 + 0x10) * 0x19) goto LAB_143f729d2;
  goto LAB_143f72956;
}



// FUNCTION 143f72b58 FUN_143f72b58 body=57 status=ok
// SIG undefined FUN_143f72b58(void)

undefined8 * FUN_143f72b58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b506130;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f72ba6 FUN_143f72ba6 body=167 status=ok
// SIG undefined FUN_143f72ba6(void)

void FUN_143f72ba6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b506130;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f72c4e FUN_143f72c4e body=167 status=ok
// SIG undefined FUN_143f72c4e(void)

void FUN_143f72c4e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4e30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b506130;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f72cf6 FUN_143f72cf6 body=206 status=ok
// SIG undefined FUN_143f72cf6(void)

void FUN_143f72cf6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4e4e30;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b506130;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f72db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f72dc4 FUN_143f72dc4 body=63 status=ok
// SIG undefined FUN_143f72dc4(void)

void FUN_143f72dc4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f72e46(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f72e04 FUN_143f72e04 body=65 status=ok
// SIG undefined FUN_143f72e04(void)

undefined8 FUN_143f72e04(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f72e46(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f72e46 FUN_143f72e46 body=1731 status=ok
// SIG undefined FUN_143f72e46(void)

void FUN_143f72e46(undefined8 *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  void **ppvVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [8];
  void *local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *param_2;
  FUN_1400b22c2(&local_78,&DAT_149e02088);
  FUN_1400b22c2(&local_68,&DAT_149e02088);
  if (iVar1 == 0) {
    local_80[0] = 1;
    local_58 = L"Accept_Friend_Request_Title";
    uStack_50._0_4_ = 0x1b;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Friend Request Accepted";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x17);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar6 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar5 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar5 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar5 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar5 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar5) {
      iVar1 = *(int *)(ppvVar5 + 1);
      pvVar3 = *ppvVar5;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1 + 1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Accept_Friend_Request_Desc";
    uStack_50._0_4_ = 0x1a;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"You are now friends with";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x18);
    FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
    plVar6 = local_c0[0];
    if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_c0[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar6 = local_c0[0] + 3;
      if (local_c0[0][5] != 0) {
        plVar6 = (longlong *)(local_c0[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar6 = local_c0[0] + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar2)(local_c0[0]);
    }
    FUN_1407ec8fc(local_a0,plVar6,local_b0);
    FUN_1401c7f3e(&local_58,local_a0,local_90);
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_58;
    uStack_60 = uStack_50;
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_90[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1411a58b4(*param_1,param_1 + 1);
  }
  else {
    local_80[0] = 0;
    local_58 = L"Error_Accept_Friend_Request_Title";
    uStack_50._0_4_ = 0x21;
    FUN_1446e940c(local_a0,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_58);
    local_58 = L"Error Accepting Request";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x17);
    FUN_140208c1e(local_90,local_b0,local_a0,&local_58);
    plVar6 = local_90[0];
    if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_90[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_90[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      ppvVar5 = (void **)(local_90[0] + 3);
      if (local_90[0][5] != 0) {
        ppvVar5 = (void **)(local_90[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      ppvVar5 = (void **)(local_90[0] + 2);
    }
    else {
      ppvVar5 = (void **)(*pcVar2)(local_90[0]);
    }
    if (&local_78 != ppvVar5) {
      iVar1 = *(int *)(ppvVar5 + 1);
      pvVar3 = *ppvVar5;
      local_70 = iVar1;
      if (iVar1 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar1);
        if (iVar1 != 0) {
          memcpy(local_78,pvVar3,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    FUN_14657de87(local_90,param_1 + 1);
    FUN_1400b22c2(local_b0,&DAT_149dfd136);
    local_58 = L"Error_Accept_Friend_Request_Desc";
    uStack_50._0_4_ = 0x20;
    FUN_1446e940c(local_c4,&local_58);
    local_58 = L"ShiftUI";
    uStack_50._0_4_ = 7;
    FUN_1446e940c(local_c8,&local_58);
    local_58 = L"Could not accept friend request from";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x24);
    FUN_140208c1e(local_c0,local_c8,local_c4,&local_58);
    plVar6 = local_c0[0];
    if (*(code **)(*local_c0[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_c0[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_c0[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar6 = local_c0[0] + 3;
      if (local_c0[0][5] != 0) {
        plVar6 = (longlong *)(local_c0[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar6 = local_c0[0] + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar2)(local_c0[0]);
    }
    FUN_1407ec8fc(local_a0,plVar6,local_b0);
    FUN_1401c7f3e(&local_58,local_a0,local_90);
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_58;
    uStack_60 = uStack_50;
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_90[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (DAT_14cb98810 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_14cb98810 + 0xf8))();
    FUN_148abf534(uVar4,"Friends_Notification_Friend_Request_Response",local_80);
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f7350a FUN_143f7350a body=52 status=ok
// SIG undefined FUN_143f7350a(void)

undefined8 * FUN_143f7350a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5061a0;
  FUN_141694818(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f73552 FUN_143f73552 body=64 status=ok
// SIG undefined FUN_143f73552(void)

void FUN_143f73552(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  FUN_143f736ba(*param_2,param_1);
  return;
}



// FUNCTION 143f73592 FUN_143f73592 body=64 status=ok
// SIG undefined FUN_143f73592(void)

void FUN_143f73592(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  FUN_143f736ba(*param_2,param_1);
  return;
}



// FUNCTION 143f735d2 FUN_143f735d2 body=98 status=ok
// SIG undefined FUN_143f735d2(void)

void FUN_143f735d2(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  FUN_143f736ba(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f73625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f73634 FUN_143f73634 body=65 status=ok
// SIG undefined FUN_143f73634(void)

void FUN_143f73634(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f737e0(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f73676 FUN_143f73676 body=67 status=ok
// SIG undefined FUN_143f73676(void)

undefined8 FUN_143f73676(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f737e0(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f736ba FUN_143f736ba body=293 status=ok
// SIG undefined FUN_143f736ba(void)

undefined8 * FUN_143f736ba(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  *param_1 = &PTR_LAB_14b506210;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14b5061a0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_145c496b4(param_1 + 4,iVar1,0);
    FUN_14150193d(param_1[4],uVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 6,iVar1,0);
    FUN_140b8566a(param_1[6],uVar2,iVar1);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  _Src = *(void **)(param_2 + 0x40);
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],_Src,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_14658a2de(param_1 + 10,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 143f737e0 FUN_143f737e0 body=752 status=ok
// SIG undefined FUN_143f737e0(void)

void FUN_143f737e0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  void *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined1 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *param_2;
  local_58 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  local_50 = iVar2;
  if (iVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_145c496b4(&local_58,iVar2,0);
    FUN_14150193d(local_58,uVar4,iVar2);
  }
  FUN_1465898d8(&local_48,&local_58,param_3);
  local_a0 = (void *)0x0;
  uVar3 = *(uint *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  local_98 = CONCAT44(local_98._4_4_,uVar3);
  if ((longlong)(int)uVar3 == 0) {
    local_98 = (ulonglong)uVar3;
  }
  else {
    FUN_1446dd670(&local_a0,uVar3,0);
    memcpy(local_a0,_Src,(longlong)(int)uVar3 * 2);
  }
  iVar2 = local_40;
  lVar5 = local_48;
  local_90 = 0;
  local_88 = CONCAT44(local_88._4_4_,local_40);
  if (local_40 == 0) {
    local_88 = 0;
  }
  else {
    FUN_145c496b4(&local_90,local_40,0);
    FUN_14150193d(local_90,lVar5,iVar2);
  }
  local_80 = *(undefined8 **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_78 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_70 = *(undefined1 *)(param_1 + 0x48);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,5,0x10);
  local_60 = 5;
  *local_68 = &PTR_LAB_14b5072b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_68[2] = lVar6;
  *local_68 = &PTR_FUN_14b506280;
  local_68[3] = local_a0;
  local_a0 = (void *)0x0;
  *(undefined4 *)(local_68 + 4) = (undefined4)local_98;
  *(undefined4 *)((longlong)local_68 + 0x24) = local_98._4_4_;
  local_98 = 0;
  local_68[5] = local_90;
  local_90 = 0;
  *(undefined4 *)(local_68 + 6) = (undefined4)local_88;
  *(undefined4 *)((longlong)local_68 + 0x34) = local_88._4_4_;
  local_88 = 0;
  local_68[7] = local_80;
  local_80 = (undefined8 *)0x0;
  *(int *)(local_68 + 8) = local_78;
  local_78 = 0;
  *(undefined1 *)(local_68 + 9) = local_70;
  FUN_143f66eec(uVar1,param_1 + 0x18,&local_68);
  if (local_78 != 0) {
    if (local_80 == (undefined8 *)0x0) goto LAB_143f73a12;
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_80 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f73a12:
  FUN_141323308(local_90,local_88 & 0xffffffff);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_141323308(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f73ad2 FUN_143f73ad2 body=151 status=ok
// SIG undefined FUN_143f73ad2(void)

undefined8 * FUN_143f73ad2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b506280;
  plVar1 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f73b23;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f73b23:
  FUN_141323308(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f73b7e FUN_143f73b7e body=264 status=ok
// SIG undefined FUN_143f73b7e(void)

void FUN_143f73b7e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5072b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b506280;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
  }
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_145c496b4(puVar2 + 5,iVar1,0);
    FUN_14150193d(puVar2[5],uVar3,iVar1);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_14658a2de(puVar2 + 7,param_1 + 0x38);
  *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(param_1 + 0x48);
  return;
}



// FUNCTION 143f73c86 FUN_143f73c86 body=264 status=ok
// SIG undefined FUN_143f73c86(void)

void FUN_143f73c86(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5072b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b506280;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
  }
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_145c496b4(puVar2 + 5,iVar1,0);
    FUN_14150193d(puVar2[5],uVar3,iVar1);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_14658a2de(puVar2 + 7,param_1 + 0x38);
  *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(param_1 + 0x48);
  return;
}


