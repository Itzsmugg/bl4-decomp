// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148aa74ae FUN_148aa74ae body=186 status=ok
// SIG undefined FUN_148aa74ae(void)

void FUN_148aa74ae(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x580);
  local_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_145deef92(&local_30,plVar1);
  if ((*(int *)(param_1 + 0x588) != 0) &&
     (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x588) = 0;
  }
  if (local_30 != (longlong *)0x0 && local_28 != 0) {
    (**(code **)(*local_30 + 0x60))(local_30,param_3);
  }
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa756a FUN_148aa756a body=186 status=ok
// SIG undefined FUN_148aa756a(void)

void FUN_148aa756a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x590);
  local_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_14114e6dc(&local_30,plVar1);
  if ((*(int *)(param_1 + 0x598) != 0) &&
     (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x598) = 0;
  }
  if (local_30 != (longlong *)0x0 && local_28 != 0) {
    (**(code **)(*local_30 + 0x60))(local_30,param_3);
  }
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa7628 FUN_148aa7628 body=435 status=ok
// SIG undefined FUN_148aa7628(void)

void FUN_148aa7628(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_145977038();
  if (cVar3 != '\0') {
    (**(code **)(*param_2 + 0x10))(param_2,&local_48);
    FUN_1446f470e(&local_30,L"SHIFT",1);
    if (local_48 == local_30) {
      uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_140b6e166(&local_48,uVar4,param_2);
      if (local_48 != (longlong *)0x0) {
        FUN_148aa7628(param_1);
      }
    }
    else {
      (**(code **)(*param_2 + 0x10))(param_2,&local_50);
      (**(code **)(*param_1 + 0x180))(param_1);
      local_60 = local_50;
      plVar5 = (longlong *)FUN_1401e3228();
      if (plVar5 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
        plStack_40 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar5 + 0x70))(plVar5,&local_48);
        if (local_48 != (longlong *)0x0) {
          (**(code **)(*param_2 + 0x10))(param_2,&local_68);
          FUN_145ed8890(param_1[4],&local_60,local_68);
          if (local_60 != 0) {
            local_78 = 0;
            uStack_70 = 0;
            (**(code **)(*local_48 + 0x48))(local_48,local_60,param_2,&local_78);
            FUN_1449db362(&local_78);
          }
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_58 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
        }
      }
    }
    plVar5 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa77dc FUN_148aa77dc body=281 status=ok
// SIG undefined FUN_148aa77dc(void)

void FUN_148aa77dc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_145ed8aa8();
  if (cVar3 != '\0') {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar5 = FUN_140b70372(uVar4);
    if (lVar5 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,&local_48);
      FUN_1446f470e(&local_38,L"SHIFT",1);
      if (local_48 == local_38) {
        uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140b6e166(&local_48,uVar4,param_2);
        if (local_48 != 0) {
          FUN_148a6d57c(lVar5,*(undefined4 *)(param_1[4] + 0xe0));
        }
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
      }
      else {
        FUN_148a6d57c(lVar5,*(undefined4 *)(param_1[4] + 0xe0),param_2);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa78f6 FUN_148aa78f6 body=1460 status=ok
// SIG undefined FUN_148aa78f6(void)

void FUN_148aa78f6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  wchar_t *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  undefined2 *local_70;
  longlong *local_68;
  wchar_t *local_60;
  undefined8 uStack_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar5 = FUN_145ed8cf0();
  if (cVar5 != '\0') {
    local_a8 = (wchar_t *)0x0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    local_138 = &local_c8;
    cVar5 = FUN_145eef516(uVar7,param_2,&local_a8,&local_b8);
    pwVar3 = local_a8;
    if (((cVar5 != '\0') && (1 < (int)uStack_a0)) && (1 < (int)uStack_b0)) {
      lVar8 = 0;
      while( true ) {
        uVar11 = *(ushort *)(local_b8 + lVar8);
        uVar12 = (ulonglong)uVar11;
        uVar13 = *(ushort *)((longlong)&DAT_149e62e78 + lVar8);
        if (uVar11 != uVar13) break;
        if (uVar11 == 0) goto LAB_148aa7a13;
LAB_148aa79e3:
        lVar8 = lVar8 + 2;
      }
      if ((uVar13 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar14 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_148aa79e3;
      }
      if (uVar11 != uVar13) {
        FUN_144a2b0a4(&local_b8,&local_70);
        puVar10 = local_70;
        if ((int)local_68 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_60,L"[%s]%s",puVar10,pwVar3);
        if (local_a8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_a8 = local_60;
        uStack_a0 = uStack_58;
        local_60 = (wchar_t *)0x0;
        uStack_58 = 0;
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_148aa7a13:
    FUN_144a5dc74(local_d8);
    if ((int)uStack_a0 < 2) {
      local_60 = L"ConfirmKickPlayer_NoName";
      uStack_58._0_4_ = 0x18;
      FUN_1446e940c(&local_70,&local_60);
      local_60 = L"GbxSocialSubsystem";
      uStack_58 = CONCAT44(uStack_58._4_4_,0x12);
      FUN_1446e940c(&local_80,&local_60);
      FUN_140208bae(&local_60,&local_80,&local_70,L"Are you sure you want to kick this player?");
      FUN_140008f88(local_d8,&local_60);
      local_118[0] = local_60;
    }
    else {
      FUN_140009b9a(local_f8,&local_a8);
      local_60 = L"ConfirmKickPlayer";
      uStack_58._0_4_ = 0x11;
      FUN_1446e940c(local_11c,&local_60);
      local_60 = L"GbxSocialSubsystem";
      uStack_58 = CONCAT44(uStack_58._4_4_,0x12);
      FUN_1446e940c(local_120,&local_60);
      FUN_140208bae(local_118,local_120,local_11c,L"Are you sure you want to kick {0}?");
      FUN_14023409e(&local_108,local_118,1);
      local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
      FUN_14023423e(local_50,local_f8);
      local_78 = &local_40;
      local_80 = &local_60;
      FUN_14010d304(&local_70);
      local_90 = local_108;
      local_88 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_e8,&local_90,&local_70);
      FUN_14007f2db(local_70,(ulonglong)local_68 & 0xffffffff);
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_100 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar2 = (int *)((longlong)local_100 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_100 + 0x10))(local_100);
          }
        }
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      FUN_140008f88(local_d8,local_e8);
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
    }
    if (local_118[0] != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_118[0] + 0x10))();
    }
    local_60 = L"ConfirmKickPlayerHeader";
    uStack_58._0_4_ = 0x17;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"GbxSocialSubsystem";
    uStack_58 = CONCAT44(uStack_58._4_4_,0x12);
    FUN_1446e940c(&local_80,&local_60);
    FUN_140208bae(&local_60,&local_80,&local_70,L"Kick Player");
    plVar9 = *(longlong **)(param_2 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_148aa7cd8:
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_148aa7cd8;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar15 = iVar6 == iVar4;
        if (bVar15) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar15);
    }
    local_70 = (undefined2 *)0x0;
    if (plVar9 != (longlong *)0x0) {
      local_70 = *(undefined2 **)(param_2 + 8);
    }
    local_130 = 0;
    local_128 = 0;
    local_68 = plVar9;
    FUN_1446efa72(&local_130,0,3,0x10);
    local_128 = 3;
    FUN_148ab0dfe(local_130,param_1,FUN_148aa7eac,&local_70);
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_60,local_d8,&local_130);
    if (plVar9 != (longlong *)0x0) {
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
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    plVar9 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aa7eac FUN_148aa7eac body=303 status=ok
// SIG undefined FUN_148aa7eac(void)

void FUN_148aa7eac(longlong *param_1,char param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != '\0') {
    plVar4 = (longlong *)FUN_14127aa1c();
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_48);
      FUN_1446f470e(&local_38,L"SHIFT",1);
      if (local_48 == local_38) {
        (**(code **)(*plVar4 + 0x368))(plVar4,*param_3,0);
      }
      else {
        uVar3 = *param_3;
        uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140b6ec10(&local_48,uVar5,uVar3);
        if (local_48 != 0) {
          (**(code **)(*plVar4 + 0x368))(plVar4,local_48,0);
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_40 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa7fdc FUN_148aa7fdc body=511 status=ok
// SIG undefined FUN_148aa7fdc(void)

void FUN_148aa7fdc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_14127ab10();
  if (cVar5 != '\0') {
    lVar7 = FUN_14127aa1c(param_1);
    if (lVar7 != 0) {
      FUN_143f378b0(lVar7);
      lVar8 = FUN_1414a727e();
      lVar9 = *(longlong *)(lVar8 + 0x110);
      if (lVar9 == 0) {
        FUN_140aa6c08(lVar8);
        lVar9 = *(longlong *)(lVar8 + 0x110);
      }
      if (*(char *)(lVar9 + 0x28) == '\x01') {
        (**(code **)(*param_2 + 0x10))(param_2,&local_68);
        FUN_1446f470e(&local_48,L"SHIFT",1);
        if ((local_68 == local_48) && (iVar6 = FUN_148aa81dc(param_1,param_2), iVar6 != 0)) {
          if (iVar6 == 3) {
            plVar10 = (longlong *)param_2[2];
            if (plVar10 == (longlong *)0x0) {
LAB_148aa80d6:
              plVar10 = (longlong *)0x0;
            }
            else {
              iVar6 = (int)plVar10[1];
              do {
                if (iVar6 == 0) goto LAB_148aa80d6;
                LOCK();
                iVar4 = (int)plVar10[1];
                bVar11 = iVar6 == iVar4;
                if (bVar11) {
                  *(int *)(plVar10 + 1) = iVar6 + 1;
                  iVar4 = iVar6;
                }
                iVar6 = iVar4;
                UNLOCK();
              } while (!bVar11);
            }
            local_68 = 0;
            if (plVar10 != (longlong *)0x0) {
              local_68 = param_2[1];
            }
            local_58 = 0;
            local_50 = 0;
            local_60 = plVar10;
            FUN_1446efa72(&local_58,0,3,0x10);
            local_50 = 3;
            FUN_148ab11fe(local_58,param_1,FUN_148aa8330,&local_68);
            uVar3 = *(undefined4 *)(param_1[4] + 0xe0);
            local_78 = (undefined4 *)0x0;
            local_70 = 1;
            FUN_144a06ca8(&local_78,1,0);
            *local_78 = uVar3;
            local_88 = 0;
            local_80 = &local_58;
            FUN_145d54248(lVar7,&local_78,1,1);
            if (local_78 != (undefined4 *)0x0) {
              FUN_1400020a8();
            }
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar10 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
          goto LAB_148aa808f;
        }
      }
    }
    (**(code **)(*param_1 + 0x2d8))(param_1,param_2);
  }
LAB_148aa808f:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aa81dc FUN_148aa81dc body=339 status=ok
// SIG undefined FUN_148aa81dc(void)

undefined8 FUN_148aa81dc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = FUN_14127aa1c();
  if (lVar8 != 0) {
    plStack_40 = *(longlong **)(param_2 + 0x10);
    if (plStack_40 == (longlong *)0x0) {
LAB_148aa823f:
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      bVar11 = true;
    }
    else {
      iVar7 = (int)plStack_40[1];
      do {
        if (iVar7 == 0) goto LAB_148aa823f;
        LOCK();
        iVar5 = (int)plStack_40[1];
        bVar11 = iVar7 == iVar5;
        if (bVar11) {
          *(int *)(plStack_40 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar11);
      local_48 = *(undefined8 *)(param_2 + 8);
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
      bVar11 = false;
    }
    plVar4 = plStack_40;
    cVar6 = FUN_143f37fde(lVar8,&local_48);
    plVar3 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar11) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    uVar10 = 0;
    if (cVar6 != '\0') goto LAB_148aa830a;
    lVar9 = FUN_14127aa1c(param_1);
    uVar10 = 3;
    if ((lVar9 == 0) ||
       (iVar7 = FUN_1458ff3f0(lVar9,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xe0)),
       iVar7 != 1)) goto LAB_148aa830a;
    lVar9 = FUN_14127aa1c(param_1);
    uVar10 = 4;
    if ((lVar9 == 0) || (iVar7 = FUN_141543b76(lVar9), iVar7 != 1)) goto LAB_148aa830a;
    cVar6 = FUN_14133cdf6(lVar8);
    uVar10 = 5;
    if (cVar6 == '\0') goto LAB_148aa830a;
  }
  uVar10 = 0;
LAB_148aa830a:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 148aa8330 FUN_148aa8330 body=104 status=ok
// SIG undefined FUN_148aa8330(void)

void FUN_148aa8330(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = FUN_148aa81dc(param_1,*param_3);
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1,*param_3);
  }
  else {
    FUN_148aa83d2(param_1,iVar4);
  }
  plVar3 = (longlong *)param_3[1];
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
                    /* WARNING: Could not recover jumptable at 0x000148aa8380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148aa8398 FUN_148aa8398 body=57 status=ok
// SIG undefined FUN_148aa8398(void)

void FUN_148aa8398(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14127aa1c();
  if (lVar1 != 0) {
    FUN_148a95c00(lVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xe0),param_2);
    return;
  }
  return;
}



// FUNCTION 148aa83d2 FUN_148aa83d2 body=603 status=ok
// SIG undefined FUN_148aa83d2(void)

void FUN_148aa83d2(longlong *param_1,undefined4 param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a5dc74(local_48);
  switch(param_2) {
  case 1:
    local_38 = L"InvalidIndividualCrossplayPreferenceForJoin";
    local_30 = 0x2b;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"GbxSocialSubsystem";
    local_30 = 0x12;
    FUN_1446e940c(local_50,&local_38);
    pwVar1 = 
    L"You are attempting to join a cross platform session with your crossplay preference disabled. Please set your preference to enabled to continue."
    ;
    break;
  case 2:
    local_38 = L"InvalidLocalCrossplayPreferenceForJoin";
    local_30 = 0x26;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"GbxSocialSubsystem";
    local_30 = 0x12;
    FUN_1446e940c(local_50,&local_38);
    pwVar1 = 
    L"You are attempting to join a cross platform session with a local player that has their crossplay preference disabled. Please set their preference to enabled to continue."
    ;
    break;
  case 3:
    local_38 = L"InvalidIndivdualCrossplayPreferenceForInvite";
    local_30 = 0x2c;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"GbxSocialSubsystem";
    local_30 = 0x12;
    FUN_1446e940c(local_50,&local_38);
    pwVar1 = 
    L"You are attempting to invite a cross platform player with your crossplay preference disabled. Please set your preference to enabled to continue."
    ;
    break;
  case 4:
    local_38 = L"InvalidLocalCrossplayPreferenceForInvite";
    local_30 = 0x28;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"GbxSocialSubsystem";
    local_30 = 0x12;
    FUN_1446e940c(local_50,&local_38);
    pwVar1 = 
    L"You are attempting to invite a cross platform player with a local player that has their crossplay preference disabled. Please set your preference to enabled to continue."
    ;
    break;
  case 5:
    local_38 = L"InvalidPartyCrossplayPreferenceForInvite";
    local_30 = 0x28;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"GbxSocialSubsystem";
    local_30 = 0x12;
    FUN_1446e940c(local_50,&local_38);
    pwVar1 = 
    L"You are attempting to invite a cross platform user when your party has crossplay disabled. Please have all party members set their crossplay preference to enabled and enable crossplay for the party to continue."
    ;
    break;
  default:
    goto switchD_148aa8412_default;
  }
  FUN_140208bae(&local_38,local_50,local_4c,pwVar1);
  FUN_140008f88(local_48,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
switchD_148aa8412_default:
  FUN_144a7c5f6(local_48);
  (**(code **)(*param_1 + 0x2c0))(param_1,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aa862e FUN_148aa862e body=187 status=ok
// SIG undefined FUN_148aa862e(void)

void FUN_148aa862e(longlong *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"PlayerNotJoinable";
  local_30 = 0x11;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"GbxSocialSubsystem";
  local_30 = 0x12;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"This player is no longer joinable.");
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa86ea FUN_148aa86ea body=104 status=ok
// SIG undefined FUN_148aa86ea(void)

void FUN_148aa86ea(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = FUN_146227c68(param_1,*param_3);
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x2e0))(param_1,*param_3);
  }
  else {
    FUN_148aa83d2(param_1,iVar4);
  }
  plVar3 = (longlong *)param_3[1];
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
                    /* WARNING: Could not recover jumptable at 0x000148aa873a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148aa8752 FUN_148aa8752 body=103 status=ok
// SIG undefined FUN_148aa8752(void)

ulonglong FUN_148aa8752(void)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14127aa1c();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_14127bdbc(lVar1,&local_28);
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0 < local_20);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa87ba FUN_148aa87ba body=138 status=ok
// SIG undefined FUN_148aa87ba(void)

void FUN_148aa87ba(undefined8 param_1,char param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != '\0') {
    local_28 = *param_3;
    local_20 = param_3[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_14166c14e(param_1,&local_28);
  }
  puVar2 = (undefined8 *)param_3[1];
  if (puVar2 != (undefined8 *)0x0) {
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



// FUNCTION 148aa8856 FUN_148aa8856 body=249 status=ok
// SIG undefined FUN_148aa8856(void)

void FUN_148aa8856(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_145ed8556();
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FUN_14127aa1c(param_1);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x10))(param_2,&local_48);
      FUN_1446f470e(&local_38,L"SHIFT",1);
      if (local_48 == local_38) {
        (**(code **)(*plVar3 + 0x360))(plVar3,param_2);
      }
      else {
        uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140b6ec10(&local_48,uVar4,param_2);
        if (local_48 != 0) {
          (**(code **)(*plVar3 + 0x360))(plVar3);
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_40 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa8950 FUN_148aa8950 body=276 status=ok
// SIG undefined FUN_148aa8950(void)

void FUN_148aa8950(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_145ed8732();
  if (cVar3 != '\0') {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar5 = FUN_140b70372(uVar4);
    if (lVar5 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,&local_48);
      FUN_1446f470e(&local_38,L"SHIFT",1);
      if (local_48 == local_38) {
        FUN_148a6d57c(lVar5,*(undefined4 *)(param_1[4] + 0xe0),param_2);
      }
      else {
        uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140b6ec10(&local_48,uVar4,param_2);
        if (local_48 != 0) {
          FUN_148a6d57c(lVar5,*(undefined4 *)(param_1[4] + 0xe0));
        }
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
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa8a66 FUN_148aa8a66 body=504 status=ok
// SIG undefined FUN_148aa8a66(void)

void FUN_148aa8a66(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_64 [4];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = FUN_145ed85c6();
  if (cVar4 != '\0') {
    local_50 = L"ConfirmRemoveFriendHeader";
    local_48 = 0x19;
    FUN_1446e940c(&local_88,&local_50);
    local_50 = L"GbxSocialSubsystem";
    local_48 = 0x12;
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(local_60,local_64,&local_88,L"Remove Friend");
    local_50 = L"ConfirmRemoveFriend";
    local_48 = 0x13;
    FUN_1446e940c(&local_88,&local_50);
    local_50 = L"GbxSocialSubsystem";
    local_48 = 0x12;
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_88,
                  L"Are you sure you want to remove this user from your friends list? They will need to accept another friend request to be added back to your friends list."
                 );
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (plVar6 == (longlong *)0x0) {
LAB_148aa8b80:
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) goto LAB_148aa8b80;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar5 == iVar3;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar7);
    }
    local_88 = 0;
    if (plVar6 != (longlong *)0x0) {
      local_88 = *(undefined8 *)(param_2 + 8);
    }
    local_78 = 0;
    local_70 = 0;
    local_80 = plVar6;
    FUN_1446efa72(&local_78,0,3,0x10);
    local_70 = 3;
    FUN_148ab0dfe(local_78,param_1,FUN_148aa8c60,&local_88);
    (**(code **)(*param_1 + 0x2c8))(param_1,local_60,&local_50,&local_78);
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
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aa8c60 FUN_148aa8c60 body=321 status=ok
// SIG undefined FUN_148aa8c60(void)

void FUN_148aa8c60(longlong *param_1,char param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != '\0') {
    uVar4 = (**(code **)(*param_1 + 0x180))();
    lVar5 = FUN_140b70372(uVar4);
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_48);
      FUN_1446f470e(&local_38,L"SHIFT",1);
      if (local_48 == local_38) {
        FUN_148a6d6ea(lVar5,*(undefined4 *)(param_1[4] + 0xe0),*param_3);
      }
      else {
        uVar4 = *param_3;
        uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140b6ec10(&local_48,uVar6,uVar4);
        if (local_48 != 0) {
          FUN_148a6d6ea(lVar5,*(undefined4 *)(param_1[4] + 0xe0));
        }
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
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa8da2 FUN_148aa8da2 body=500 status=ok
// SIG undefined FUN_148aa8da2(void)

void FUN_148aa8da2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_64 [4];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = FUN_145ed89de();
  if (cVar4 != '\0') {
    local_50 = L"ConfirmBlockPlayerHeader";
    local_48 = 0x18;
    FUN_1446e940c(&local_88,&local_50);
    local_50 = L"GbxSocialSubsystem";
    local_48 = 0x12;
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(local_60,local_64,&local_88,L"Block User");
    local_50 = L"ConfirmBlockPlayer";
    local_48 = 0x12;
    FUN_1446e940c(&local_88,&local_50);
    local_50 = L"GbxSocialSubsystem";
    local_48 = 0x12;
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_88,
                  L"Are you sure you want to block this user? If you are friends with this user, they will be removed from your friends list."
                 );
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (plVar6 == (longlong *)0x0) {
LAB_148aa8eb8:
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) goto LAB_148aa8eb8;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar5 == iVar3;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar7);
    }
    local_88 = 0;
    if (plVar6 != (longlong *)0x0) {
      local_88 = *(undefined8 *)(param_2 + 8);
    }
    local_78 = 0;
    local_70 = 0;
    local_80 = plVar6;
    FUN_1446efa72(&local_78,0,3,0x10);
    local_70 = 3;
    FUN_148ab0dfe(local_78,param_1,FUN_148aa8f98,&local_88);
    (**(code **)(*param_1 + 0x2c8))(param_1,local_60,&local_50,&local_78);
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
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aa8f98 FUN_148aa8f98 body=345 status=ok
// SIG undefined FUN_148aa8f98(void)

void FUN_148aa8f98(longlong *param_1,char param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != '\0') {
    uVar4 = (**(code **)(*param_1 + 0x180))();
    lVar5 = FUN_140b70372(uVar4);
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_48);
      FUN_1446f470e(&local_38,L"SHIFT",1);
      if (local_48 == local_38) {
        FUN_148a6d7c6(lVar5,*(undefined4 *)(param_1[4] + 0xe0),*param_3);
        FUN_143f4580e(param_1,*param_3);
      }
      else {
        uVar4 = *param_3;
        uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140b6ec10(&local_48,uVar6,uVar4);
        if (local_48 != 0) {
          FUN_148a6d7c6(lVar5,*(undefined4 *)(param_1[4] + 0xe0));
          FUN_143f4580e(param_1,local_48);
        }
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
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa90f2 FUN_148aa90f2 body=276 status=ok
// SIG undefined FUN_148aa90f2(void)

void FUN_148aa90f2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_145ed867c();
  if (cVar3 != '\0') {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar5 = FUN_140b70372(uVar4);
    if (lVar5 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,&local_48);
      FUN_1446f470e(&local_38,L"SHIFT",1);
      if (local_48 == local_38) {
        FUN_148a6d89a(lVar5,*(undefined4 *)(param_1[4] + 0xe0),param_2);
      }
      else {
        uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140b6ec10(&local_48,uVar4,param_2);
        if (local_48 != 0) {
          FUN_148a6d89a(lVar5,*(undefined4 *)(param_1[4] + 0xe0));
        }
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
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa9208 FUN_148aa9208 body=147 status=ok
// SIG undefined FUN_148aa9208(void)

void FUN_148aa9208(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_145ed8bfc();
  if (cVar3 != '\0') {
    FUN_14586ccee(param_1,&local_30,param_2);
    if (local_30 != 0) {
      (**(code **)(*param_1 + 0x2d0))(param_1);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa93f4 FUN_148aa93f4 body=315 status=ok
// SIG undefined FUN_148aa93f4(void)

void FUN_148aa93f4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_148aa9413;
  uVar3 = FUN_1400b465c();
  plVar4 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4f6180;
  plVar5 = plVar4 + 2;
  FUN_148aa9580(plVar5,uVar3);
  local_38 = plVar5;
  local_30 = plVar4;
  FUN_148ab1d7a(&local_38,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB_148aa94c2:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148aa94ed:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x000148aa94ed;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148aa94c2;
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_148aa9413:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa9530 FUN_148aa9530 body=79 status=ok
// SIG undefined FUN_148aa9530(void)

void FUN_148aa9530(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000148aa9574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148aa9580 FUN_148aa9580 body=233 status=ok
// SIG undefined FUN_148aa9580(void)

undefined8 * FUN_148aa9580(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 148aa966a FUN_148aa966a body=210 status=ok
// SIG undefined FUN_148aa966a(void)

void FUN_148aa966a(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar1 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x70);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == param_2) goto LAB_148aa9720;
        iVar2 = *(int *)(lVar1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  FUN_1447cbafe((longlong *)(param_1 + 0x30),local_18,&local_14,0);
  lVar1 = FUN_148aa973e(param_1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_141030f66();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_14591b552(*(longlong *)(lVar1 + 0x30),local_14,DAT_14cb978d8);
    }
  }
LAB_148aa9720:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa973e FUN_148aa973e body=58 status=ok
// SIG undefined FUN_148aa973e(void)

undefined8 FUN_148aa973e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x28);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x28);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      return *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
    }
  }
  return 0;
}



// FUNCTION 148aa9778 FUN_148aa9778 body=95 status=ok
// SIG undefined FUN_148aa9778(void)

void FUN_148aa9778(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_144a7cc9e(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = FUN_148aa973e(param_1);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar2 = FUN_141030f66();
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
        FUN_1458192d8(*(longlong *)(lVar2 + 0x30),param_2,DAT_14cb978d8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148aa97d8 FUN_148aa97d8 body=367 status=ok
// SIG undefined FUN_148aa97d8(void)

void FUN_148aa97d8(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148aa98df:
    *puVar3 = &PTR_LAB_14b4f7800;
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
    *puVar3 = &PTR_FUN_14b4f61a0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148aa98df;
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
    *puVar3 = &PTR_LAB_14b4f7800;
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
    *puVar3 = &PTR_FUN_14b4f61a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148aa98db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148aa9948 FUN_148aa9948 body=806 status=ok
// SIG undefined FUN_148aa9948(void)

void FUN_148aa9948(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar7 = FUN_143f45b90();
  if (((cVar7 != '\0') && (cVar7 = FUN_148aaa32c(param_1), cVar7 != '\0')) &&
     (*(int *)(param_1 + 0x11) != *(int *)((longlong)param_1 + 0xb4))) {
    uVar4 = (uint)((ulonglong)param_3 >> 0x10);
    uVar9 = (uint)param_3 & 0xffff;
    puVar8 = param_1 + 0x17;
    if ((undefined8 *)param_1[0x18] != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_1[0x18];
    }
    iVar10 = *(int *)((longlong)puVar8 +
                     (ulonglong)
                     (*(int *)(param_1 + 0x19) - 1U &
                     (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar9) +
                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(longlong *)(param_1[0x10] + (longlong)iVar10 * 0x20) == param_3) {
          cVar7 = FUN_148aaa53e(param_1,param_2);
          if (cVar7 == '\0') {
            plVar13 = *(longlong **)(param_2 + 0x10);
            if (plVar13 == (longlong *)0x0) goto LAB_148aa9a51;
            iVar10 = (int)plVar13[1];
            goto LAB_148aa9b58;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + param_1[0x10] + 0x18);
      } while (iVar10 != -1);
    }
  }
  goto LAB_148aa9979;
LAB_148aa9a51:
  plVar13 = (longlong *)0x0;
  goto LAB_148aa9a54;
  while( true ) {
    LOCK();
    iVar5 = (int)plVar13[1];
    bVar15 = iVar10 == iVar5;
    if (bVar15) {
      *(int *)(plVar13 + 1) = iVar10 + 1;
      iVar5 = iVar10;
    }
    iVar10 = iVar5;
    UNLOCK();
    if (bVar15) break;
LAB_148aa9b58:
    if (iVar10 == 0) goto LAB_148aa9a51;
  }
LAB_148aa9a54:
  uVar12 = 0;
  if (plVar13 != (longlong *)0x0) {
    uVar12 = *(undefined8 *)(param_2 + 8);
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,5,0x10);
  local_40 = 5;
  plVar14 = (longlong *)param_1[1];
  if (plVar14 == (longlong *)0x0) {
LAB_148aa9aa2:
    *local_48 = &PTR_LAB_149e063e0;
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
    local_48[2] = lVar11;
    *local_48 = &PTR_FUN_14b4f6360;
    local_48[3] = 0;
    local_48[4] = 0;
    bVar15 = true;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar14[1];
    do {
      if (iVar10 == 0) goto LAB_148aa9aa2;
      LOCK();
      iVar5 = (int)plVar14[1];
      bVar15 = iVar10 == iVar5;
      if (bVar15) {
        *(int *)(plVar14 + 1) = iVar10 + 1;
        iVar5 = iVar10;
      }
      iVar10 = iVar5;
      UNLOCK();
    } while (!bVar15);
    uVar3 = *param_1;
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    *local_48 = &PTR_LAB_149e063e0;
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
    local_48[2] = lVar11;
    *local_48 = &PTR_FUN_14b4f6360;
    local_48[3] = uVar3;
    local_48[4] = plVar14;
    LOCK();
    *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
    UNLOCK();
    bVar15 = false;
  }
  local_48[5] = param_1;
  local_48[6] = uVar12;
  local_48[7] = plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_48[8] = param_3;
  if (!bVar15) {
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_148aaa588(param_1,param_4,&local_48);
  FUN_1449db362(&local_48);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
LAB_148aa9979:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aa9c70 FUN_148aa9c70 body=367 status=ok
// SIG undefined FUN_148aa9c70(void)

void FUN_148aa9c70(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148aa9d77:
    *puVar3 = &PTR_LAB_14b4f6280;
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
    *puVar3 = &PTR_FUN_14b4f6210;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148aa9d77;
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
    *puVar3 = &PTR_LAB_14b4f6280;
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
    *puVar3 = &PTR_FUN_14b4f6210;
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
                    /* WARNING: Could not recover jumptable at 0x000148aa9d73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148aa9de0 FUN_148aa9de0 body=328 status=ok
// SIG undefined FUN_148aa9de0(void)

void FUN_148aa9de0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_3;
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    lVar3 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xc0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 200) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar5 * 0x20) == param_3) {
          uVar2 = (**(code **)(*(longlong *)*param_2 + 0x40))();
          lVar3 = FUN_148ab2c6c(param_1 + 0xd0,uVar2,param_2);
          FUN_144a13f80(lVar3,local_2c,&local_28,0);
          if (*(int *)(lVar3 + 8) - *(int *)(lVar3 + 0x34) == 1) {
            lVar3 = FUN_148aa973e(param_1);
            if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
              lVar3 = FUN_141030f66();
              if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
                FUN_145ebf3fc(*(longlong *)(lVar3 + 0x30),param_2,DAT_14cb978d8);
              }
            }
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x80) + 0x18);
      } while (iVar5 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aa9f2a FUN_148aa9f2a body=613 status=ok
// SIG undefined FUN_148aa9f2a(void)

void FUN_148aa9f2a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    uVar6 = (uint)((ulonglong)param_3 >> 0x10);
    uVar9 = (uint)param_3 & 0xffff;
    lVar10 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xc0);
    }
    iVar8 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 200) - 1U &
                              (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar9) +
                              (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar8 * 0x20) == param_3) {
          plVar2 = (longlong *)(param_1 + 0xd0);
          local_50 = (longlong *)*param_2;
          plVar5 = (longlong *)param_2[1];
          if (plVar5 == (longlong *)0x0) {
            local_48 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            local_48 = plVar5;
          }
          uVar7 = (**(code **)(*local_50 + 0x40))();
          iVar8 = FUN_148ab2cf2(plVar2,uVar7,&local_50);
          plVar1 = local_48;
          if (iVar8 == -1) {
            lVar10 = 0;
          }
          else {
            lVar10 = (longlong)iVar8 * 0x68 + *plVar2;
          }
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_48 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar4 = (int *)((longlong)plVar1 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar4 = (int *)((longlong)plVar5 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (lVar10 != 0) {
            FUN_144a8b5fe(lVar10 + 0x10,param_3);
            if (*(int *)(lVar10 + 0x18) == *(int *)(lVar10 + 0x44)) {
              local_50 = (longlong *)*param_2;
              plVar5 = (longlong *)param_2[1];
              if (plVar5 == (longlong *)0x0) {
                local_48 = (longlong *)0x0;
                FUN_148ab33a4(plVar2);
              }
              else {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
                local_48 = plVar5;
                FUN_148ab33a4(plVar2);
                LOCK();
                plVar2 = plVar5 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar4 = (int *)((longlong)plVar5 + 0xc);
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  if (*piVar4 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
              lVar10 = FUN_148aa973e(param_1);
              if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x1f0) != 0)) {
                lVar10 = FUN_141030f66();
                if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x30) != 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
                }
              }
            }
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x80) + 0x18);
      } while (iVar8 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aaa1ae FUN_148aaa1ae body=382 status=ok
// SIG undefined FUN_148aaa1ae(void)

void FUN_148aaa1ae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xc0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 200) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x80);
      do {
        lVar1 = lVar4 + (longlong)iVar6 * 0x20;
        if (*(longlong *)(lVar4 + (longlong)iVar6 * 0x20) == param_2) {
          plVar7 = (longlong *)(lVar1 + 8);
          if (plVar7 == (longlong *)0x0 || lVar1 == 0) {
            return;
          }
          (**(code **)(*(longlong *)*plVar7 + 0x10))();
          lVar4 = *plVar7;
          if (*(int *)(lVar4 + 0x20) != 0) {
            puVar2 = *(undefined8 **)(lVar4 + 0x18);
            if (puVar2 != (undefined8 *)0x0) {
              (**(code **)*puVar2)(puVar2,0);
              FUN_1446efa72((longlong *)(lVar4 + 0x18),0,0,0x10);
              *(undefined4 *)(lVar4 + 0x20) = 0;
              lVar4 = *plVar7;
            }
          }
          if (*(int *)(lVar4 + 0x30) != 0) {
            puVar2 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar2 != (undefined8 *)0x0) {
              (**(code **)*puVar2)(puVar2,0);
              FUN_1446efa72((longlong *)(lVar4 + 0x28),0,0,0x10);
              *(undefined4 *)(lVar4 + 0x30) = 0;
              lVar4 = *plVar7;
            }
          }
          if (*(int *)(lVar4 + 0x40) != 0) {
            puVar2 = *(undefined8 **)(lVar4 + 0x38);
            if (puVar2 != (undefined8 *)0x0) {
              (**(code **)*puVar2)(puVar2,0);
              FUN_1446efa72((longlong *)(lVar4 + 0x38),0,0,0x10);
              *(undefined4 *)(lVar4 + 0x40) = 0;
            }
          }
          FUN_148ab2a70((longlong *)(param_1 + 0x80),param_2);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 148aaa32c FUN_148aaa32c body=528 status=ok
// SIG undefined FUN_148aaa32c(void)

ulonglong FUN_148aaa32c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong lStack_78;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined4 local_60;
  uint uStack_5c;
  longlong lStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  longlong *plVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar6 = (longlong *)(param_1 + 0x80);
  lStack_58 = param_1 + 0x90;
  local_60 = 0;
  uStack_5c = 1;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_80._0_4_ = local_60;
  local_80._4_4_ = uStack_5c;
  lStack_78 = lStack_58;
  local_88 = plVar6;
  if (iStack_4c < *(int *)(lStack_58 + 0x18)) {
    plVar6 = &local_80;
    do {
      if (*(char *)(*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x20) + 0x50) != '\0') {
        lVar3 = FUN_148aa973e(param_1);
        uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
        if ((((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1f0) == 0)) ||
            (lVar3 = FUN_141030f66(), lVar3 == 0)) ||
           (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 == 0)) goto LAB_148aaa415;
        plVar6 = (longlong *)(param_1 + 0x30);
        lVar1 = param_1 + 0x40;
        local_60 = 0;
        uStack_5c = 1;
        local_50 = 0xffffffff;
        iStack_4c = 0;
        uStack_48 = 0;
        lStack_58 = lVar1;
        if (*(int *)(param_1 + 0x58) == 0) {
          iVar4 = 0;
        }
        else {
          FUN_1449c0562(&local_60);
          iVar4 = *(int *)(param_1 + 0x58);
        }
        local_70 = local_50;
        iStack_6c = iStack_4c;
        uStack_68 = CONCAT44(uStack_44,uStack_48);
        local_80._0_4_ = local_60;
        local_80._4_4_ = uStack_5c;
        lStack_78 = lStack_58;
        local_88 = plVar6;
        if ((iStack_4c == iVar4) && (lStack_58 == lVar1)) goto LAB_148aaa415;
        goto LAB_148aaa4db;
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(plVar6);
    } while (iStack_6c < *(int *)(lStack_78 + 0x18));
  }
  uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  goto LAB_148aaa415;
  while( true ) {
    local_70 = local_70 & ~local_80._4_4_;
    FUN_1449c0562(&local_80);
    if (local_88 == plVar6 && (lStack_78 == lVar1 && iStack_6c == iVar4)) break;
LAB_148aaa4db:
    cVar2 = FUN_1457e1d32(lVar3,*(undefined4 *)(*local_88 + (longlong)iStack_6c * 0xc));
    if (cVar2 == '\0') {
      uVar5 = 0;
      break;
    }
  }
LAB_148aaa415:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148aaa53e FUN_148aaa53e body=73 status=ok
// SIG undefined FUN_148aaa53e(void)

undefined8 FUN_148aaa53e(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  lVar2 = FUN_148aa973e();
  if ((lVar2 != 0) && (param_1 = *(longlong *)(lVar2 + 0x1f0), param_1 != 0)) {
    lVar2 = FUN_141030f66();
    if ((lVar2 != 0) && (param_1 = 0, *(longlong *)(lVar2 + 0x30) != 0)) {
      uVar3 = FUN_140b645f6(*(longlong *)(lVar2 + 0x30),param_2);
      bVar5 = (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar1 = 1;
      goto LAB_148aaa57b;
    }
  }
  bVar5 = (byte)param_1;
  bVar1 = 0;
  uVar4 = 0;
LAB_148aaa57b:
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 148aaa588 FUN_148aaa588 body=1296 status=ok
// SIG undefined FUN_148aaa588(void)

void FUN_148aaa588(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  int local_d4;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar9 = (longlong *)FUN_140a68038();
  uVar10 = local_98;
  if (plVar9 == (longlong *)0x0) {
LAB_148aaa65b:
    local_98 = uVar10;
    local_88 = 0;
    uStack_80 = (longlong *)0x0;
    plVar13 = (longlong *)0x0;
  }
  else {
    plVar13 = param_1 + 6;
    plVar1 = param_1 + 8;
    local_88 = 0x100000000;
    local_78 = 0xffffffff;
    uStack_70 = 0;
    uStack_80 = plVar1;
    if ((int)param_1[0xb] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_88);
      iVar8 = (int)param_1[0xb];
    }
    uStack_90 = CONCAT44(uStack_6c,uStack_70);
    local_98 = local_78;
    uVar10 = local_98;
    local_a8 = local_88;
    uStack_a0 = (undefined4)uStack_80;
    uStack_9c = uStack_80._4_4_;
    local_98._4_4_ = (int)((ulonglong)local_78 >> 0x20);
    local_b0 = plVar13;
    if ((local_98._4_4_ == iVar8) && (uStack_80 == plVar1)) goto LAB_148aaa65b;
    plVar15 = (longlong *)0x0;
    iVar7 = local_98._4_4_;
    local_e0 = param_3;
    local_d4 = iVar8;
    local_d0 = param_2;
    local_c8 = plVar13;
    local_98 = uVar10;
    do {
      uVar4 = *(undefined4 *)(*local_b0 + (longlong)iVar7 * 0xc);
      local_88 = 0;
      uStack_80 = (longlong *)0x0;
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_c0,uVar4,&local_88);
      plVar3 = local_b8;
      plVar5 = local_c0;
      local_c0 = (longlong *)0x0;
      plVar13 = plVar15;
      if (local_b8 == plVar15) {
LAB_148aaa776:
        plVar15 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_b8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      else {
        local_b8 = (longlong *)0x0;
        plVar13 = plVar3;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar15 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          goto LAB_148aaa776;
        }
      }
      uVar10 = FUN_148aa973e(param_1);
      lVar11 = FUN_14127aa70(uVar10,uVar4);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (plVar5 != (longlong *)0x0) break;
      local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
      FUN_1449c0562(&local_a8);
      plVar15 = plVar13;
      iVar7 = local_98._4_4_;
    } while (local_b0 != local_c8 ||
             ((longlong *)CONCAT44(uStack_9c,uStack_a0) != plVar1 || local_98._4_4_ != local_d4));
    if (lVar11 == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = FUN_145c15618(lVar11);
      bVar6 = bVar6 ^ 1;
    }
    param_2 = local_d0;
    local_88 = 0;
    uStack_80 = (longlong *)0x0;
    param_3 = local_e0;
    if (((plVar5 != (longlong *)0x0) && (bVar6 == 0)) &&
       (iVar8 = FUN_1403de9f2(local_d0,&local_88,&DAT_149e001d8,0), param_3 = local_e0, 0 < iVar8))
    {
      local_a8 = 0;
      uStack_a0 = 0;
      local_b0 = param_1;
      FUN_146281d3c(&local_a8,local_e0);
      local_c0 = (longlong *)0x0;
      local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
      FUN_1446efa72(&local_c0,0,4,0x10);
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,4);
      plVar9 = (longlong *)param_1[1];
      if (plVar9 == (longlong *)0x0) {
LAB_148aaa909:
        *local_c0 = (longlong)&PTR_LAB_14b4f7950;
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
        local_c0[2] = lVar12;
        *local_c0 = (longlong)&PTR_FUN_14b4f62f0;
        local_c0[3] = 0;
        local_c0[4] = 0;
        bVar16 = true;
        plVar9 = (longlong *)0x0;
      }
      else {
        iVar8 = (int)plVar9[1];
        do {
          if (iVar8 == 0) goto LAB_148aaa909;
          LOCK();
          iVar7 = (int)plVar9[1];
          bVar16 = iVar8 == iVar7;
          if (bVar16) {
            *(int *)(plVar9 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
        } while (!bVar16);
        lVar11 = *param_1;
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        *local_c0 = (longlong)&PTR_LAB_14b4f7950;
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 1;
        lVar12 = DAT_14c758608 + 1;
        if (lVar14 == 0) {
          LOCK();
          UNLOCK();
          lVar14 = DAT_14c758608 + 2;
          lVar12 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar12;
        local_c0[2] = lVar14;
        *local_c0 = (longlong)&PTR_FUN_14b4f62f0;
        local_c0[3] = lVar11;
        local_c0[4] = (longlong)plVar9;
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        bVar16 = false;
      }
      local_c0[5] = (longlong)local_b0;
      local_c0[6] = 0;
      *(undefined4 *)(local_c0 + 7) = 0;
      FUN_146281d3c(local_c0 + 6,&local_a8);
      if (!bVar16) {
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
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_88,&local_c0);
      FUN_1449db362(&local_c0);
      FUN_1449db362(&local_a8);
      goto LAB_148aaa687;
    }
  }
  plVar9 = (longlong *)*param_3;
  if (plVar9 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar9 + 0x60))(plVar9,param_2);
  }
LAB_148aaa687:
  FUN_1447a1747(local_88,(ulonglong)uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar13 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aaaa9a FUN_148aaaa9a body=95 status=ok
// SIG undefined FUN_148aaaa9a(void)

undefined8 *
FUN_148aaaa9a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[9] = param_3;
  *(undefined1 *)(param_1 + 10) = param_4;
  *param_1 = &PTR_FUN_14b4f4ed0;
  param_1[0xb] = 0;
  FUN_14485c47a(param_1 + 0xb);
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 148aaaafa FUN_148aaaafa body=1679 status=ok
// SIG undefined FUN_148aaaafa(void)

void FUN_148aaaafa(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_f8 [40];
  undefined8 **local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  int local_60;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  local_80 = 3;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
LAB_148aaab5e:
    *local_88 = &PTR_LAB_14b4f6440;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_88[2] = lVar7;
    *local_88 = &PTR_FUN_14b4f63d0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = param_1;
  }
  else {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_148aaab5e;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar11 = iVar9 == iVar4;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar4 = iVar9;
      }
      iVar9 = iVar4;
      UNLOCK();
    } while (!bVar11);
    lVar6 = param_1[1];
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_88 = &PTR_LAB_14b4f6440;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_88[2] = lVar8;
    *local_88 = &PTR_FUN_14b4f63d0;
    local_88[3] = lVar6;
    local_88[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_88[5] = param_1;
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
  FUN_148ab3526(&local_d0,&local_88);
  FUN_1449db362(&local_88);
  param_1[0xc] = (longlong)local_d0;
  cVar5 = FUN_144729dda(param_1 + 0xb);
  if (cVar5 != '\0') {
    lVar6 = FUN_14479d2ce(param_1 + 0xb);
    lVar6 = *(longlong *)(lVar6 + 0x48);
    if (lVar6 != 0) {
      lVar7 = FUN_140b7066c();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        local_88 = (undefined8 *)0x0;
        local_80 = 0;
        FUN_1446efa72(&local_88,0,3,0x10);
        local_80 = 3;
        plVar3 = (longlong *)param_1[2];
        if (plVar3 == (longlong *)0x0) {
LAB_148aaae5a:
          *local_88 = &PTR_LAB_14b4f38d0;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar7 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          local_88[2] = lVar8;
          *local_88 = &PTR_FUN_14b4f64b0;
          local_88[3] = 0;
          local_88[4] = 0;
          local_88[5] = param_1;
        }
        else {
          iVar9 = (int)plVar3[1];
          do {
            if (iVar9 == 0) goto LAB_148aaae5a;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar11 = iVar9 == iVar4;
            if (bVar11) {
              *(int *)(plVar3 + 1) = iVar9 + 1;
              iVar4 = iVar9;
            }
            iVar9 = iVar4;
            UNLOCK();
          } while (!bVar11);
          lVar7 = param_1[1];
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          *local_88 = &PTR_LAB_14b4f38d0;
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
          local_88[2] = lVar10;
          *local_88 = &PTR_FUN_14b4f64b0;
          local_88[3] = lVar7;
          local_88[4] = plVar3;
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          local_88[5] = param_1;
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
        FUN_145a5cf80(lVar6 + 0x228,&local_d0,&local_88);
        FUN_1449db362(&local_88);
        param_1[0xd] = (longlong)local_d0;
        local_88 = (undefined8 *)0x0;
        local_80 = 0;
        FUN_1446efa72(&local_88,0,3,0x10);
        local_80 = 3;
        plVar3 = (longlong *)param_1[2];
        if (plVar3 == (longlong *)0x0) {
LAB_148aaaf08:
          *local_88 = &PTR_LAB_14b4f38d0;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar7 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          local_88[2] = lVar8;
          *local_88 = &PTR_FUN_14b4f6520;
          local_88[3] = 0;
          local_88[4] = 0;
          local_88[5] = param_1;
        }
        else {
          iVar9 = (int)plVar3[1];
          do {
            if (iVar9 == 0) goto LAB_148aaaf08;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar11 = iVar9 == iVar4;
            if (bVar11) {
              *(int *)(plVar3 + 1) = iVar9 + 1;
              iVar4 = iVar9;
            }
            iVar9 = iVar4;
            UNLOCK();
          } while (!bVar11);
          lVar7 = param_1[1];
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          *local_88 = &PTR_LAB_14b4f38d0;
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
          local_88[2] = lVar10;
          *local_88 = &PTR_FUN_14b4f6520;
          local_88[3] = lVar7;
          local_88[4] = plVar3;
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          local_88[5] = param_1;
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
        FUN_145a5cf80(lVar6 + 0x240,&local_d0,&local_88);
        FUN_1449db362(&local_88);
        param_1[0xe] = (longlong)local_d0;
      }
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,&local_88);
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  uStack_90 = 0;
  uStack_a0 = local_78;
  if (local_60 == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar9 = local_60;
  }
  uStack_b0 = CONCAT44(uStack_8c,uStack_90);
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_c8 = (undefined4)local_a8;
  uStack_c4 = local_a8._4_4_;
  uStack_c0 = (undefined4)uStack_a0;
  uStack_bc = uStack_a0._4_4_;
  local_d0 = &local_88;
  if ((iStack_94 != iVar9) || (uStack_a0 != local_78)) {
    do {
      if (((int)param_1[6] != 0) && (plVar3 = (longlong *)param_1[5], plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,*local_d0 + (longlong)iStack_b4 * 3,param_1[9]);
      }
      local_b8 = local_b8 & ~uStack_c4;
      FUN_1449c0562(&local_c8);
    } while (local_d0 != &local_88 ||
             ((undefined1 *)CONCAT44(uStack_bc,uStack_c0) != local_78 || iStack_b4 != iVar9));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(&local_88);
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aab18a FUN_148aab18a body=475 status=ok
// SIG undefined FUN_148aab18a(void)

void FUN_148aab18a(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80 [2];
  undefined1 local_70 [24];
  int local_58;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x20))(param_1,local_80);
  local_a0 = 0x100000000;
  local_90 = 0xffffffff;
  iStack_8c = 0;
  uStack_88 = 0;
  uStack_98 = local_70;
  if (local_58 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_a0);
    iVar5 = local_58;
  }
  uStack_a8 = CONCAT44(uStack_84,uStack_88);
  local_b0 = local_90;
  iStack_ac = iStack_8c;
  local_c0 = (undefined4)local_a0;
  uStack_bc = local_a0._4_4_;
  uStack_b8 = (undefined4)uStack_98;
  uStack_b4 = uStack_98._4_4_;
  local_c8 = local_80;
  if ((iStack_8c != iVar5) || (uStack_98 != local_70)) {
    do {
      if (((int)param_1[8] != 0) && (plVar1 = (longlong *)param_1[7], plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x60))(plVar1,(longlong)iStack_ac * 0x18 + *local_c8,param_1[9]);
      }
      local_b0 = local_b0 & ~uStack_bc;
      FUN_1449c0562(&local_c0);
    } while (local_c8 != local_80 ||
             ((undefined1 *)CONCAT44(uStack_b4,uStack_b8) != local_70 || iStack_ac != iVar5));
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(local_80);
  if (param_1[0xc] != 0) {
    FUN_14480f766(&DAT_14cb71580);
  }
  cVar2 = FUN_144729dda(param_1 + 0xb);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(param_1 + 0xb);
    lVar3 = *(longlong *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      lVar4 = FUN_140b7066c();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        if (param_1[0xd] != 0) {
          FUN_14480f766(lVar3 + 0x228);
        }
        if (param_1[0xe] != 0) {
          FUN_14480f766(lVar3 + 0x240);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aab366 FUN_148aab366 body=150 status=ok
// SIG undefined FUN_148aab366(void)

void FUN_148aab366(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar2 = FUN_144729dda(param_1 + 0x58);
  if (cVar2 != '\0') {
    lVar4 = FUN_14479d2ce(param_1 + 0x58);
    if ((longlong)*(int *)(lVar4 + 0x40) != 0) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar6);
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == param_2)) {
          if (*(longlong *)(lVar1 + 0x30) == 0) {
            return;
          }
          uVar5 = FUN_1449f3324();
          bVar3 = FUN_144a7ca96((longlong *)(lVar1 + 0x30),uVar5);
          lVar4 = *(longlong *)(lVar1 + 0x30);
          if ((lVar4 != 0 & bVar3) != 1) {
            return;
          }
          FUN_1487c5248(lVar4,param_3);
          return;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(lVar4 + 0x40) * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 148aab3fc FUN_148aab3fc body=435 status=ok
// SIG undefined FUN_148aab3fc(void)

undefined8 * FUN_148aab3fc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  cVar4 = FUN_144729dda(param_1 + 0x58);
  if (cVar4 != '\0') {
    lVar5 = FUN_14479d2ce(param_1 + 0x58);
    lVar5 = *(longlong *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      lVar6 = FUN_140b7066c();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        FUN_14127bdbc(lVar5,&local_58);
        lVar5 = local_58;
        if ((longlong)local_50 != 0) {
          lVar6 = 0;
          do {
            FUN_1408e4d18(*(longlong *)(lVar5 + lVar6) + 0x3a0,&local_68);
            if (local_68 != 0) {
              local_78 = local_68;
              local_70 = local_60;
              if (local_60 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_60 + 1) = (int)local_60[1] + 1;
                UNLOCK();
              }
              FUN_140b6d1a4(param_2,local_7c,&local_78,0);
              plVar3 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_70 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_70)(local_70);
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
            plVar3 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_60 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)local_50 * 8 != lVar6);
        }
        if (local_58 != 0) {
          FUN_1400020a8(local_58);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148aab5b0 FUN_148aab5b0 body=58 status=ok
// SIG undefined FUN_148aab5b0(void)

undefined8 FUN_148aab5b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x58);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x58);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      return *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
    }
  }
  return 0;
}



// FUNCTION 148aab5ea FUN_148aab5ea body=147 status=ok
// SIG undefined FUN_148aab5ea(void)

void FUN_148aab5ea(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b4f4ef8;
  param_1[3] = *param_2;
  lVar1 = param_2[1];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaa) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}



// FUNCTION 148aab67e FUN_148aab67e body=144 status=ok
// SIG undefined FUN_148aab67e(void)

void FUN_148aab67e(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b4f4ef8;
  param_1[3] = *param_2;
  lVar1 = param_2[1];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = param_3;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaa) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}



// FUNCTION 148aab712 FUN_148aab712 body=464 status=ok
// SIG undefined FUN_148aab712(void)

void FUN_148aab712(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68;
  longlong local_60;
  undefined4 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)(param_1 + 0x138);
  local_58 = (undefined4 *)(param_1 + 0x148);
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_98 = local_60;
  local_90 = local_58;
  local_68 = 0;
  local_a0 = plVar3;
  local_78 = plVar3;
  local_70 = plVar3;
  if (iStack_4c < (int)local_58[6]) {
    do {
      lVar4 = *(longlong *)(*local_a0 + 0x10 + (longlong)iStack_84 * 0x28);
      plVar3 = *(longlong **)(*local_a0 + 0x18 + (longlong)iStack_84 * 0x28);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_a4 = 0;
      local_60 = *param_2 + 0x30;
      local_58 = &local_a4;
      FUN_145ca1206(lVar4 + 0x10,local_3c,&local_60);
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
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < (int)local_90[6]);
    if (((local_68 & 1) != 0) && (local_68._1_1_ == '\x01')) {
      FUN_148ab3a78(local_70,(int)local_70[1] - *(int *)((longlong)local_70 + 0x34));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aab8e4 FUN_148aab8e4 body=348 status=ok
// SIG undefined FUN_148aab8e4(void)

void FUN_148aab8e4(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459ca5e2(param_1,&local_40,param_2);
  if (local_40 != 0) {
    local_50 = 0;
    iVar5 = *(int *)(local_40 + 0xb8);
    uVar6 = *(undefined8 *)(local_40 + 0xb0);
    local_48 = iVar5;
    if (iVar5 == 0) {
      local_44 = 0;
      uVar4 = 0;
    }
    else {
      FUN_148ab3ea8(&local_50,iVar5);
      FUN_148ab3f00(local_50,uVar6,iVar5);
      uVar4 = *(undefined4 *)(local_40 + 0xb8);
      uVar6 = *(undefined8 *)(local_40 + 0xb0);
    }
    FUN_145ad1eba(uVar6,uVar4);
    *(undefined4 *)(local_40 + 0xb8) = 0;
    if (*(int *)(local_40 + 0xbc) != 0) {
      FUN_148ab3f3e(local_40 + 0xb0);
    }
    lVar3 = local_50;
    lVar7 = (longlong)local_48;
    iVar5 = 0;
    if (lVar7 != 0) {
      lVar8 = 0;
      do {
        if ((*(int *)(lVar3 + 8 + lVar8) != 0) &&
           (plVar2 = *(longlong **)(lVar3 + lVar8), plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
        }
        lVar8 = lVar8 + 0x10;
        iVar5 = local_48;
      } while (lVar7 * 0x10 != lVar8);
    }
    FUN_145ad1eba(local_50,iVar5);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aaba42 FUN_148aaba42 body=613 status=ok
// SIG undefined FUN_148aaba42(void)

void FUN_148aaba42(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined4 local_7c;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined4 *local_60;
  int local_58;
  longlong local_48;
  undefined4 local_38;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = param_4;
  FUN_148aabe1f(&local_68);
  if (*param_3 == (int)local_68) {
    iVar8 = param_3[4];
    if (iVar8 == local_58) {
      bVar12 = true;
      if (1 < iVar8) {
        lVar10 = 0;
        while( true ) {
          uVar3 = *(ushort *)(*(longlong *)(param_3 + 2) + lVar10);
          uVar7 = (uint)uVar3;
          uVar4 = *(ushort *)((longlong)local_60 + lVar10);
          uVar11 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_148aabac8;
            }
            iVar8 = uVar7 - uVar11;
            goto LAB_148aabb4b;
          }
          if (uVar3 == 0) break;
LAB_148aabac8:
          lVar10 = lVar10 + 2;
        }
        iVar8 = 0;
LAB_148aabb4b:
        bVar12 = iVar8 == 0;
      }
    }
    else {
      bVar12 = local_58 + iVar8 == 1;
    }
  }
  else {
    bVar12 = false;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar12) {
    FUN_14131d034(param_1,&local_78,param_2);
    local_60 = &local_7c;
    local_7c = 0;
    local_68 = (undefined8 *)&local_38;
    FUN_145ca1206(local_78 + 0x10,local_34,&local_68);
    uVar6 = FUN_1401cb356();
    local_68 = (undefined8 *)0x0;
    local_60 = (undefined4 *)((ulonglong)local_60 & 0xffffffff00000000);
    FUN_1446efa72(&local_68,0,3,0x10);
    puVar5 = local_68;
    local_60 = (undefined4 *)CONCAT44(local_60._4_4_,3);
    *local_68 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_68[2] = lVar9;
    *local_68 = &PTR_FUN_14b4f6ae0;
    local_68[3] = 0;
    FUN_14485c47a(local_68 + 3,param_1);
    puVar5[4] = param_1;
    local_98 = 0x40a00000;
    FUN_1405f67fc(uVar6,local_90,&local_68,L"GbxVoice_ResolveConnection_Timer");
    if (local_88 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    FUN_1449db362(&local_68);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aabca8 FUN_148aabca8 body=353 status=ok
// SIG undefined FUN_148aabca8(void)

void FUN_148aabca8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410bdc90(param_1,&local_40);
  plVar3 = local_38;
  lVar4 = local_40;
  if (local_40 == 0) goto LAB_148aabd90;
  if (local_38 == (longlong *)0x0) {
    lVar7 = local_40 + 0x18;
    iVar5 = FUN_140b64372(param_1,lVar7);
    *(undefined1 *)(lVar4 + 0x2c) = param_4;
LAB_148aabd85:
    iVar6 = FUN_140b64372(param_1,lVar7);
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    iVar5 = FUN_140b64372(param_1,local_40 + 0x18);
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
    plVar3 = local_38;
    *(undefined1 *)(local_40 + 0x2c) = param_4;
    if (local_38 == (longlong *)0x0) {
      lVar7 = local_40 + 0x18;
      goto LAB_148aabd85;
    }
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    iVar6 = FUN_140b64372(param_1,local_40 + 0x18);
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
  if (iVar5 != iVar6) {
    FUN_145bffc58(param_1 + 0x1d8,local_40 + 0x18,iVar6);
  }
LAB_148aabd90:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aabe1f FUN_148aabe1f body=182 status=ok
// SIG undefined FUN_148aabe1f(void)

undefined8 FUN_148aabe1f(undefined8 param_1)

{
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140056680(local_48,L"connection_failure");
  FUN_140056680(local_58,L"errors.com.epicgames.voicechat");
  local_68 = local_38;
  FUN_148aaf6f6(param_1,local_58,0xd,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aabed6 FUN_148aabed6 body=259 status=ok
// SIG undefined FUN_148aabed6(void)

void FUN_148aabed6(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (**(code **)(*param_1 + 0x180))();
  lVar5 = FUN_14127aa70(uVar4,param_2);
  if (lVar5 != 0) {
    FUN_148a9595a(lVar5,param_3);
  }
  FUN_1459ca5e2(param_1,&local_40,param_2);
  plVar2 = local_38;
  if ((local_40 != 0) && (plVar3 = *(longlong **)(local_40 + 0x38), plVar3 != (longlong *)0x0)) {
    if (local_38 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,param_3);
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      plVar3 = *(longlong **)(local_40 + 0x38);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_3);
      }
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aabff0 FUN_148aabff0 body=214 status=ok
// SIG undefined FUN_148aabff0(void)

void FUN_148aabff0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459ca5e2(param_1,&local_40,param_2);
  plVar2 = local_38;
  if ((local_40 != 0) && (plVar3 = *(longlong **)(local_40 + 0x38), plVar3 != (longlong *)0x0)) {
    if (local_38 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_3);
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      plVar3 = *(longlong **)(local_40 + 0x38);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_3);
      }
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aac0dc thunk_FUN_143f460d4 body=8 status=ok
// SIG undefined thunk_FUN_143f460d4(void)

void thunk_FUN_143f460d4(undefined8 param_1,undefined8 param_2)

{
  FUN_143f460d4(param_1,param_2,1);
  return;
}



// FUNCTION 148aac0e4 FUN_148aac0e4 body=8 status=ok
// SIG undefined FUN_148aac0e4(void)

void FUN_148aac0e4(undefined8 param_1,undefined8 param_2)

{
  FUN_143f460d4(param_1,param_2,0);
  return;
}



// FUNCTION 148aac0ec FUN_148aac0ec body=8 status=ok
// SIG undefined FUN_148aac0ec(void)

bool FUN_148aac0ec(longlong param_1)

{
  return *(int *)(param_1 + 0x3c) == 0;
}



// FUNCTION 148aac0f4 FUN_148aac0f4 body=145 status=ok
// SIG undefined FUN_148aac0f4(void)

void FUN_148aac0f4(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *_Str;
  wchar_t *_Str_00;
  double dVar3;
  
  _Str_00 = L"";
  _Str = L"";
  if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
    _Str = *(wchar_t **)*param_1;
  }
  iVar1 = _wtoi(_Str);
  if (*(int *)(*param_1 + 0x18) != 0) {
    _Str_00 = *(wchar_t **)(*param_1 + 0x10);
  }
  dVar3 = _wtof(_Str_00);
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1f0) != 0)) {
    lVar2 = FUN_1459b10c6();
    if (lVar2 != 0) {
      FUN_148aabff0(lVar2,iVar1,(float)dVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148aac185 FUN_148aac185 body=145 status=ok
// SIG undefined FUN_148aac185(void)

void FUN_148aac185(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *_Str;
  wchar_t *_Str_00;
  double dVar3;
  
  _Str_00 = L"";
  _Str = L"";
  if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
    _Str = *(wchar_t **)*param_1;
  }
  iVar1 = _wtoi(_Str);
  if (*(int *)(*param_1 + 0x18) != 0) {
    _Str_00 = *(wchar_t **)(*param_1 + 0x10);
  }
  dVar3 = _wtof(_Str_00);
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1f0) != 0)) {
    lVar2 = FUN_1459b10c6();
    if (lVar2 != 0) {
      FUN_148aabed6(lVar2,iVar1,(float)dVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148aac216 FUN_148aac216 body=88 status=ok
// SIG undefined FUN_148aac216(void)

undefined8 * FUN_148aac216(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4f5180;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  FUN_14485c47a(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 148aac26e FUN_148aac26e body=102 status=ok
// SIG undefined FUN_148aac26e(void)

void FUN_148aac26e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4f5180;
  FUN_148aac2d4();
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
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148aac2d4 FUN_148aac2d4 body=205 status=ok
// SIG undefined FUN_148aac2d4(void)

void FUN_148aac2d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_148aac3a2();
    local_20 = 0;
    plVar3 = (longlong *)FUN_1401e3228();
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 400))(local_38,param_1 + 0x40);
        (**(code **)(*local_38 + 0x1b8))();
      }
    }
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aac3a2 FUN_148aac3a2 body=44 status=ok
// SIG undefined FUN_148aac3a2(void)

void FUN_148aac3a2(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144729dda(param_1 + 0x20);
  if (cVar1 != '\0') {
    FUN_14479d2ce(param_1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 148aac3ce FUN_148aac3ce body=68 status=ok
// SIG undefined FUN_148aac3ce(void)

undefined4 FUN_148aac3ce(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_14111b834(param_1 + 0x20,0);
  uVar4 = 0xffffffff;
  if (cVar1 == '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x20);
    lVar3 = FUN_14119d4d6(uVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(lVar3 + 0xe0);
    }
  }
  return uVar4;
}



// FUNCTION 148aac412 FUN_148aac412 body=9948 status=ok
// SIG undefined FUN_148aac412(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148aac412(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_4a8 [32];
  longlong *local_488;
  longlong *local_480;
  ulonglong local_478;
  longlong *local_470;
  longlong local_468;
  longlong local_460;
  undefined4 local_458 [188];
  undefined1 local_168 [288];
  ulonglong local_48;
  ulonglong uVar6;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  lVar23 = *(longlong *)(param_1 + 0x28);
  if (lVar23 != 0) {
    iVar22 = *(int *)(lVar23 + 0x10);
    lVar20 = (longlong)iVar22;
    if (0 < lVar20) {
      iVar4 = *(int *)(param_1 + 0x38);
      if (iVar4 == 0) {
        if (*(char *)(param_1 + 0x3c) == '\x01') {
          if (iVar22 != 1) {
            lVar23 = *(longlong *)(lVar23 + 8);
            memset(local_458,0,0x2f0);
            local_460 = lVar20 * 0x120 + lVar23 + -0x120;
            local_468 = lVar23;
            fVar29 = logf((float)iVar22);
            local_458[0] = (int)(longlong)(fVar29 + fVar29);
            plVar14 = &local_468;
            do {
              plVar15 = (longlong *)*plVar14;
              plVar16 = (longlong *)plVar14[1];
              iVar22 = (int)plVar14[2];
              iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 5) * 0x38e38e39;
              uVar27 = iVar4 + 1;
              plVar21 = plVar15;
              plVar18 = plVar15;
              plVar17 = plVar16;
              local_488 = plVar14;
              if (iVar22 != 0) {
LAB_148aad28c:
                if (8 < (int)uVar27) {
                  local_478 = CONCAT44(local_478._4_4_,iVar22);
                  local_480 = plVar15;
                  local_470 = plVar17;
                  memcpy(local_168,plVar18 + (ulonglong)(uVar27 >> 1) * 0x24,0x120);
                  memcpy(plVar18 + (ulonglong)(uVar27 >> 1) * 0x24,plVar18,0x120);
                  memcpy(plVar18,local_168,0x120);
                  plVar15 = plVar16 + 0x24;
                  plVar21 = plVar18;
                  do {
                    plVar14 = plVar21 + 0x24;
                    plVar17 = plVar21 + 0x24;
                    do {
                      plVar21 = plVar17;
                      plVar8 = plVar14;
                      if (plVar16 < plVar21) break;
                      plVar14 = plVar8 + 0x24;
                      plVar17 = plVar21 + 0x24;
                    } while ((int)plVar21[0x23] <= (int)plVar18[0x23]);
                    plVar14 = plVar15 + -0x48;
                    do {
                      plVar19 = plVar15;
                      plVar17 = plVar14;
                      plVar15 = plVar19 + -0x24;
                      if (plVar15 <= plVar18) break;
                      plVar14 = plVar17 + -0x24;
                    } while ((int)plVar18[0x23] <= (int)plVar19[-1]);
                    if (plVar15 < plVar21) goto LAB_148aad3a2;
                    memcpy(local_168,plVar21,0x120);
                    memcpy(plVar21,plVar15,0x120);
                    memcpy(plVar15,local_168,0x120);
                  } while( true );
                }
                for (; plVar14 = local_488, plVar21 = plVar18, plVar15 = plVar18, plVar18 < plVar16;
                    plVar16 = plVar16 + -0x24) {
                  while (plVar14 = plVar21, plVar15 = plVar15 + 0x24, plVar15 <= plVar16) {
                    plVar21 = plVar15;
                    if ((int)plVar15[0x23] <= (int)plVar14[0x23]) {
                      plVar21 = plVar14;
                    }
                  }
                  memcpy(local_168,plVar14,0x120);
                  memcpy(plVar14,plVar16,0x120);
                  memcpy(plVar16,local_168,0x120);
                }
                goto LAB_148aad791;
              }
LAB_148aad495:
              plVar14 = local_488;
              if (uVar27 != 0) {
                uVar5 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
                do {
                  uVar6 = (ulonglong)uVar5;
                  local_478 = uVar6;
                  while (uVar12 = uVar5 * 2 + 1, (int)uVar12 < (int)uVar27) {
                    uVar9 = uVar5 * 2 + 2;
                    uVar5 = uVar12;
                    if (((int)uVar9 < (int)uVar27) &&
                       ((int)plVar21[(longlong)(int)uVar12 * 0x24 + 0x23] <=
                        (int)plVar21[(longlong)(int)uVar9 * 0x24 + 0x23])) {
                      uVar5 = uVar9;
                    }
                    if ((int)plVar21[(longlong)(int)uVar5 * 0x24 + 0x23] <=
                        (int)plVar21[(longlong)(int)uVar6 * 0x24 + 0x23]) break;
                    memcpy(local_168,plVar21 + (longlong)(int)uVar6 * 0x24,0x120);
                    memcpy(plVar21 + (longlong)(int)uVar6 * 0x24,
                           plVar21 + (longlong)(int)uVar5 * 0x24,0x120);
                    memcpy(plVar21 + (longlong)(int)uVar5 * 0x24,local_168,0x120);
                    uVar6 = (ulonglong)uVar5;
                  }
                  uVar5 = (int)local_478 - 1;
                } while ((int)local_478 != 0);
                plVar14 = local_488;
                if (1 < (int)uVar27) {
                  memcpy(local_168,plVar21,0x120);
                  memcpy(plVar21,plVar21 + ((ulonglong)uVar27 - 1) * 0x24,0x120);
                  memcpy(plVar21 + ((ulonglong)uVar27 - 1) * 0x24,local_168,0x120);
                  plVar14 = local_488;
                  uVar6 = (ulonglong)uVar27 - 1;
                  if (uVar27 != 2) {
                    do {
                      iVar22 = 0;
                      iVar11 = 1;
                      iVar4 = 0;
                      do {
                        iVar22 = iVar22 + 2;
                        iVar10 = iVar11;
                        if (((longlong)iVar22 < (longlong)uVar6) &&
                           ((int)plVar21[(longlong)iVar11 * 0x24 + 0x23] <=
                            (int)plVar21[(longlong)iVar22 * 0x24 + 0x23])) {
                          iVar10 = iVar22;
                        }
                        if ((int)plVar21[(longlong)iVar10 * 0x24 + 0x23] <=
                            (int)plVar21[(longlong)iVar4 * 0x24 + 0x23]) break;
                        memcpy(local_168,plVar21 + (longlong)iVar4 * 0x24,0x120);
                        memcpy(plVar21 + (longlong)iVar4 * 0x24,plVar21 + (longlong)iVar10 * 0x24,
                               0x120);
                        memcpy(plVar21 + (longlong)iVar10 * 0x24,local_168,0x120);
                        iVar22 = iVar10 * 2;
                        iVar11 = iVar10 * 2 + 1;
                        iVar4 = iVar10;
                      } while ((longlong)iVar11 < (longlong)uVar6);
                      memcpy(local_168,plVar21,0x120);
                      memcpy(plVar21,plVar21 + (uVar6 - 1) * 0x24,0x120);
                      memcpy(plVar21 + (uVar6 - 1) * 0x24,local_168,0x120);
                      bVar28 = 2 < uVar6;
                      plVar14 = local_488;
                      uVar6 = uVar6 - 1;
                    } while (bVar28);
                  }
                }
              }
LAB_148aad791:
              plVar14 = plVar14 + -3;
            } while (&local_468 <= plVar14);
          }
        }
        else if (iVar22 != 1) {
          lVar23 = *(longlong *)(lVar23 + 8);
          memset(local_458,0,0x2f0);
          local_460 = lVar20 * 0x120 + lVar23 + -0x120;
          local_468 = lVar23;
          fVar29 = logf((float)iVar22);
          local_458[0] = (int)(longlong)(fVar29 + fVar29);
          plVar14 = &local_468;
          do {
            plVar15 = (longlong *)*plVar14;
            plVar16 = (longlong *)plVar14[1];
            iVar22 = (int)plVar14[2];
            iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 5) * 0x38e38e39;
            uVar27 = iVar4 + 1;
            plVar21 = plVar15;
            plVar18 = plVar15;
            plVar17 = plVar16;
            local_488 = plVar14;
            if (iVar22 != 0) {
LAB_148aadff9:
              if (8 < (int)uVar27) {
                local_478 = CONCAT44(local_478._4_4_,iVar22);
                local_480 = plVar15;
                local_470 = plVar17;
                memcpy(local_168,plVar18 + (ulonglong)(uVar27 >> 1) * 0x24,0x120);
                memcpy(plVar18 + (ulonglong)(uVar27 >> 1) * 0x24,plVar18,0x120);
                memcpy(plVar18,local_168,0x120);
                plVar15 = plVar16 + 0x24;
                plVar21 = plVar18;
                do {
                  plVar14 = plVar21 + 0x24;
                  plVar17 = plVar21 + 0x24;
                  do {
                    plVar21 = plVar17;
                    plVar8 = plVar14;
                    if (plVar16 < plVar21) break;
                    plVar14 = plVar8 + 0x24;
                    plVar17 = plVar21 + 0x24;
                  } while ((int)plVar18[0x23] <= (int)plVar21[0x23]);
                  plVar14 = plVar15 + -0x48;
                  do {
                    plVar19 = plVar15;
                    plVar17 = plVar14;
                    plVar15 = plVar19 + -0x24;
                    if (plVar15 <= plVar18) break;
                    plVar14 = plVar17 + -0x24;
                  } while ((int)plVar19[-1] <= (int)plVar18[0x23]);
                  if (plVar15 < plVar21) goto LAB_148aae10f;
                  memcpy(local_168,plVar21,0x120);
                  memcpy(plVar21,plVar15,0x120);
                  memcpy(plVar15,local_168,0x120);
                } while( true );
              }
              for (; plVar14 = local_488, plVar21 = plVar18, plVar15 = plVar18, plVar18 < plVar16;
                  plVar16 = plVar16 + -0x24) {
                while (plVar14 = plVar21, plVar15 = plVar15 + 0x24, plVar15 <= plVar16) {
                  plVar21 = plVar15;
                  if ((int)plVar14[0x23] <= (int)plVar15[0x23]) {
                    plVar21 = plVar14;
                  }
                }
                memcpy(local_168,plVar14,0x120);
                memcpy(plVar14,plVar16,0x120);
                memcpy(plVar16,local_168,0x120);
              }
              goto LAB_148aae4fe;
            }
LAB_148aae202:
            plVar14 = local_488;
            if (uVar27 != 0) {
              uVar5 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
              do {
                uVar6 = (ulonglong)uVar5;
                local_478 = uVar6;
                while (uVar12 = uVar5 * 2 + 1, (int)uVar12 < (int)uVar27) {
                  uVar9 = uVar5 * 2 + 2;
                  uVar5 = uVar12;
                  if (((int)uVar9 < (int)uVar27) &&
                     ((int)plVar21[(longlong)(int)uVar9 * 0x24 + 0x23] <=
                      (int)plVar21[(longlong)(int)uVar12 * 0x24 + 0x23])) {
                    uVar5 = uVar9;
                  }
                  if ((int)plVar21[(longlong)(int)uVar6 * 0x24 + 0x23] <=
                      (int)plVar21[(longlong)(int)uVar5 * 0x24 + 0x23]) break;
                  memcpy(local_168,plVar21 + (longlong)(int)uVar6 * 0x24,0x120);
                  memcpy(plVar21 + (longlong)(int)uVar6 * 0x24,plVar21 + (longlong)(int)uVar5 * 0x24
                         ,0x120);
                  memcpy(plVar21 + (longlong)(int)uVar5 * 0x24,local_168,0x120);
                  uVar6 = (ulonglong)uVar5;
                }
                uVar5 = (int)local_478 - 1;
              } while ((int)local_478 != 0);
              plVar14 = local_488;
              if (1 < (int)uVar27) {
                memcpy(local_168,plVar21,0x120);
                memcpy(plVar21,plVar21 + ((ulonglong)uVar27 - 1) * 0x24,0x120);
                memcpy(plVar21 + ((ulonglong)uVar27 - 1) * 0x24,local_168,0x120);
                plVar14 = local_488;
                uVar6 = (ulonglong)uVar27 - 1;
                if (uVar27 != 2) {
                  do {
                    iVar22 = 0;
                    iVar11 = 1;
                    iVar4 = 0;
                    do {
                      iVar22 = iVar22 + 2;
                      iVar10 = iVar11;
                      if (((longlong)iVar22 < (longlong)uVar6) &&
                         ((int)plVar21[(longlong)iVar22 * 0x24 + 0x23] <=
                          (int)plVar21[(longlong)iVar11 * 0x24 + 0x23])) {
                        iVar10 = iVar22;
                      }
                      if ((int)plVar21[(longlong)iVar4 * 0x24 + 0x23] <=
                          (int)plVar21[(longlong)iVar10 * 0x24 + 0x23]) break;
                      memcpy(local_168,plVar21 + (longlong)iVar4 * 0x24,0x120);
                      memcpy(plVar21 + (longlong)iVar4 * 0x24,plVar21 + (longlong)iVar10 * 0x24,
                             0x120);
                      memcpy(plVar21 + (longlong)iVar10 * 0x24,local_168,0x120);
                      iVar22 = iVar10 * 2;
                      iVar11 = iVar10 * 2 + 1;
                      iVar4 = iVar10;
                    } while ((longlong)iVar11 < (longlong)uVar6);
                    memcpy(local_168,plVar21,0x120);
                    memcpy(plVar21,plVar21 + (uVar6 - 1) * 0x24,0x120);
                    memcpy(plVar21 + (uVar6 - 1) * 0x24,local_168,0x120);
                    bVar28 = 2 < uVar6;
                    plVar14 = local_488;
                    uVar6 = uVar6 - 1;
                  } while (bVar28);
                }
              }
            }
LAB_148aae4fe:
            plVar14 = plVar14 + -3;
          } while (&local_468 <= plVar14);
        }
      }
      else if (iVar4 == 1) {
        if (*(char *)(param_1 + 0x3c) == '\x01') {
          if (iVar22 != 1) {
            lVar23 = *(longlong *)(lVar23 + 8);
            memset(local_458,0,0x2f0);
            local_460 = lVar20 * 0x120 + lVar23 + -0x120;
            local_468 = lVar23;
            fVar29 = logf((float)iVar22);
            local_458[0] = (int)(longlong)(fVar29 + fVar29);
            plVar14 = &local_468;
            do {
              plVar15 = (longlong *)*plVar14;
              plVar16 = (longlong *)plVar14[1];
              iVar22 = (int)plVar14[2];
              iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 5) * 0x38e38e39;
              uVar27 = iVar4 + 1;
              local_480 = plVar14;
              if (iVar22 != 0) {
LAB_148aacad0:
                if (8 < (int)uVar27) {
                  local_478 = CONCAT44(local_478._4_4_,iVar22);
                  local_470 = plVar16;
                  memcpy(local_168,plVar15 + (ulonglong)(uVar27 >> 1) * 0x24,0x120);
                  memcpy(plVar15 + (ulonglong)(uVar27 >> 1) * 0x24,plVar15,0x120);
                  memcpy(plVar15,local_168,0x120);
                  plVar18 = plVar16 + 0x24;
                  plVar14 = plVar15;
LAB_148aacb2e:
                  plVar21 = plVar14 + 0x24;
                  if (plVar21 <= plVar16) goto code_r0x000148aacb3d;
                  goto LAB_148aacba3;
                }
                for (; plVar14 = local_480, plVar18 = plVar15, plVar21 = plVar15, plVar15 < plVar16;
                    plVar16 = plVar16 + -0x24) {
joined_r0x000148aad104:
                  plVar14 = plVar18 + 0x24;
                  if (plVar14 <= plVar16) {
                    puVar7 = &DAT_149dfb77a;
                    if ((int)plVar18[0x28] != 0) {
                      puVar7 = (undefined2 *)plVar18[0x27];
                    }
                    puVar13 = &DAT_149dfb77a;
                    if ((int)plVar21[4] != 0) {
                      puVar13 = (undefined2 *)plVar21[3];
                    }
                    lVar23 = 0;
                    while( true ) {
                      uVar2 = *(ushort *)((longlong)puVar13 + lVar23);
                      uVar27 = (uint)uVar2;
                      uVar3 = *(ushort *)((longlong)puVar7 + lVar23);
                      uVar5 = (uint)uVar3;
                      plVar18 = plVar14;
                      if (uVar2 != uVar3) break;
                      if (uVar2 == 0) goto joined_r0x000148aad104;
LAB_148aad14e:
                      lVar23 = lVar23 + 2;
                    }
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148aad14e;
                    }
                    if ((int)(uVar27 - uVar5) < 0) {
                      plVar21 = plVar14;
                    }
                    goto joined_r0x000148aad104;
                  }
                  memcpy(local_168,plVar21,0x120);
                  memcpy(plVar21,plVar16,0x120);
                  memcpy(plVar16,local_168,0x120);
                }
                goto LAB_148aad1d6;
              }
LAB_148aacd31:
              plVar14 = local_480;
              if (uVar27 != 0) {
                uVar5 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
                do {
                  uVar12 = uVar5 * 2 + 1;
                  if ((int)uVar12 < (int)uVar27) {
                    local_478 = (ulonglong)uVar5;
                    uVar9 = uVar5;
LAB_148aacd63:
                    uVar9 = uVar9 * 2 + 2;
                    uVar6 = (ulonglong)uVar12;
                    if ((int)uVar9 < (int)uVar27) {
                      puVar7 = &DAT_149dfb77a;
                      if ((int)plVar15[(longlong)(int)uVar12 * 0x24 + 4] != 0) {
                        puVar7 = (undefined2 *)plVar15[(longlong)(int)uVar12 * 0x24 + 3];
                      }
                      puVar13 = &DAT_149dfb77a;
                      if ((int)plVar15[(longlong)(int)uVar9 * 0x24 + 4] != 0) {
                        puVar13 = (undefined2 *)plVar15[(longlong)(int)uVar9 * 0x24 + 3];
                      }
                      lVar23 = 0;
                      while( true ) {
                        uVar2 = *(ushort *)((longlong)puVar13 + lVar23);
                        uVar25 = (uint)uVar2;
                        uVar3 = *(ushort *)((longlong)puVar7 + lVar23);
                        uVar26 = (uint)uVar3;
                        uVar6 = (ulonglong)uVar9;
                        if (uVar2 != uVar3) break;
                        if (uVar2 == 0) goto LAB_148aacdec;
LAB_148aacdbd:
                        lVar23 = lVar23 + 2;
                      }
                      if ((uVar3 | uVar2) < 0x80) {
                        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148aacdbd;
                      }
                      if ((int)(uVar25 - uVar26) < 0) {
                        uVar6 = (ulonglong)uVar12;
                      }
                    }
LAB_148aacdec:
                    lVar23 = (longlong)(int)uVar6;
                    puVar7 = &DAT_149dfb77a;
                    if ((int)plVar15[lVar23 * 0x24 + 4] != 0) {
                      puVar7 = (undefined2 *)plVar15[lVar23 * 0x24 + 3];
                    }
                    lVar20 = (longlong)(int)local_478;
                    puVar13 = &DAT_149dfb77a;
                    if ((int)plVar15[lVar20 * 0x24 + 4] != 0) {
                      puVar13 = (undefined2 *)plVar15[lVar20 * 0x24 + 3];
                    }
                    lVar24 = 0;
                    do {
                      uVar2 = *(ushort *)((longlong)puVar13 + lVar24);
                      uVar12 = (uint)uVar2;
                      uVar3 = *(ushort *)((longlong)puVar7 + lVar24);
                      uVar9 = (uint)uVar3;
                      local_478 = uVar6;
                      if (uVar2 == uVar3) {
                        if (uVar2 == 0) break;
                      }
                      else {
                        if (0x7f < (uVar3 | uVar2)) goto LAB_148aace65;
                        uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_148aace65;
                      }
                      lVar24 = lVar24 + 2;
                    } while( true );
                  }
LAB_148aaceb7:
                  plVar14 = local_480;
                  bVar28 = uVar5 != 0;
                  uVar5 = uVar5 - 1;
                } while (bVar28);
                if (1 < (int)uVar27) {
                  memcpy(local_168,plVar15,0x120);
                  memcpy(plVar15,plVar15 + ((ulonglong)uVar27 - 1) * 0x24,0x120);
                  memcpy(plVar15 + ((ulonglong)uVar27 - 1) * 0x24,local_168,0x120);
                  uVar6 = (ulonglong)uVar27 - 1;
                  if (uVar27 != 2) {
LAB_148aacf2f:
                    iVar4 = 0;
                    iVar22 = 1;
                    iVar11 = 0;
LAB_148aacf38:
                    iVar4 = iVar4 + 2;
                    lVar23 = (longlong)iVar4;
                    iVar10 = iVar22;
                    if (lVar23 < (longlong)uVar6) {
                      puVar7 = &DAT_149dfb77a;
                      if ((int)plVar15[(longlong)iVar22 * 0x24 + 4] != 0) {
                        puVar7 = (undefined2 *)plVar15[(longlong)iVar22 * 0x24 + 3];
                      }
                      puVar13 = &DAT_149dfb77a;
                      if ((int)plVar15[lVar23 * 0x24 + 4] != 0) {
                        puVar13 = (undefined2 *)plVar15[lVar23 * 0x24 + 3];
                      }
                      lVar23 = 0;
                      while( true ) {
                        uVar2 = *(ushort *)((longlong)puVar13 + lVar23);
                        uVar27 = (uint)uVar2;
                        uVar3 = *(ushort *)((longlong)puVar7 + lVar23);
                        uVar5 = (uint)uVar3;
                        iVar10 = iVar4;
                        if (uVar2 != uVar3) break;
                        if (uVar2 == 0) goto LAB_148aacfc1;
LAB_148aacf92:
                        lVar23 = lVar23 + 2;
                      }
                      if ((uVar3 | uVar2) < 0x80) {
                        uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148aacf92;
                      }
                      if ((int)(uVar27 - uVar5) < 0) {
                        iVar10 = iVar22;
                      }
                    }
LAB_148aacfc1:
                    lVar23 = (longlong)iVar10;
                    puVar7 = &DAT_149dfb77a;
                    if ((int)plVar15[lVar23 * 0x24 + 4] != 0) {
                      puVar7 = (undefined2 *)plVar15[lVar23 * 0x24 + 3];
                    }
                    lVar20 = (longlong)iVar11;
                    puVar13 = &DAT_149dfb77a;
                    if ((int)plVar15[lVar20 * 0x24 + 4] != 0) {
                      puVar13 = (undefined2 *)plVar15[lVar20 * 0x24 + 3];
                    }
                    lVar24 = 0;
                    do {
                      uVar2 = *(ushort *)((longlong)puVar13 + lVar24);
                      uVar27 = (uint)uVar2;
                      uVar3 = *(ushort *)((longlong)puVar7 + lVar24);
                      uVar5 = (uint)uVar3;
                      if (uVar2 == uVar3) {
                        if (uVar2 == 0) goto LAB_148aad08a;
                      }
                      else {
                        if (0x7f < (uVar3 | uVar2)) goto LAB_148aad035;
                        uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_148aad035;
                      }
                      lVar24 = lVar24 + 2;
                    } while( true );
                  }
                }
              }
LAB_148aad1d6:
              plVar14 = plVar14 + -3;
            } while (&local_468 <= plVar14);
          }
        }
        else if (iVar22 != 1) {
          lVar23 = *(longlong *)(lVar23 + 8);
          memset(local_458,0,0x2f0);
          local_460 = lVar20 * 0x120 + lVar23 + -0x120;
          local_468 = lVar23;
          fVar29 = logf((float)iVar22);
          local_458[0] = (int)(longlong)(fVar29 + fVar29);
          plVar14 = &local_468;
          do {
            plVar15 = (longlong *)*plVar14;
            plVar16 = (longlong *)plVar14[1];
            iVar22 = (int)plVar14[2];
            iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 5) * 0x38e38e39;
            uVar27 = iVar4 + 1;
            local_480 = plVar14;
            if (iVar22 != 0) {
LAB_148aad845:
              if (8 < (int)uVar27) {
                local_478 = CONCAT44(local_478._4_4_,iVar22);
                local_470 = plVar16;
                memcpy(local_168,plVar15 + (ulonglong)(uVar27 >> 1) * 0x24,0x120);
                memcpy(plVar15 + (ulonglong)(uVar27 >> 1) * 0x24,plVar15,0x120);
                memcpy(plVar15,local_168,0x120);
                plVar18 = plVar16 + 0x24;
                plVar14 = plVar15;
LAB_148aad8a3:
                plVar21 = plVar14 + 0x24;
                if (plVar21 <= plVar16) goto code_r0x000148aad8b2;
                goto LAB_148aad918;
              }
              for (; plVar14 = local_480, plVar18 = plVar15, plVar21 = plVar15, plVar15 < plVar16;
                  plVar16 = plVar16 + -0x24) {
joined_r0x000148aade7a:
                plVar14 = plVar18 + 0x24;
                if (plVar14 <= plVar16) {
                  puVar7 = &DAT_149dfb77a;
                  if ((int)plVar21[4] != 0) {
                    puVar7 = (undefined2 *)plVar21[3];
                  }
                  puVar13 = &DAT_149dfb77a;
                  if ((int)plVar18[0x28] != 0) {
                    puVar13 = (undefined2 *)plVar18[0x27];
                  }
                  lVar23 = 0;
                  while( true ) {
                    uVar2 = *(ushort *)((longlong)puVar13 + lVar23);
                    uVar27 = (uint)uVar2;
                    uVar3 = *(ushort *)((longlong)puVar7 + lVar23);
                    uVar5 = (uint)uVar3;
                    plVar18 = plVar14;
                    if (uVar2 != uVar3) break;
                    if (uVar2 == 0) goto joined_r0x000148aade7a;
LAB_148aadec5:
                    lVar23 = lVar23 + 2;
                  }
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148aadec5;
                  }
                  if ((int)(uVar27 - uVar5) < 0) {
                    plVar21 = plVar14;
                  }
                  goto joined_r0x000148aade7a;
                }
                memcpy(local_168,plVar21,0x120);
                memcpy(plVar21,plVar16,0x120);
                memcpy(plVar16,local_168,0x120);
              }
              goto LAB_148aadf4d;
            }
LAB_148aadaa6:
            plVar14 = local_480;
            if (uVar27 != 0) {
              uVar5 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
              do {
                uVar12 = uVar5 * 2 + 1;
                if ((int)uVar12 < (int)uVar27) {
                  local_478 = (ulonglong)uVar5;
                  uVar9 = uVar5;
LAB_148aadad8:
                  uVar9 = uVar9 * 2 + 2;
                  uVar6 = (ulonglong)uVar12;
                  if ((int)uVar9 < (int)uVar27) {
                    puVar7 = &DAT_149dfb77a;
                    if ((int)plVar15[(longlong)(int)uVar9 * 0x24 + 4] != 0) {
                      puVar7 = (undefined2 *)plVar15[(longlong)(int)uVar9 * 0x24 + 3];
                    }
                    puVar13 = &DAT_149dfb77a;
                    if ((int)plVar15[(longlong)(int)uVar12 * 0x24 + 4] != 0) {
                      puVar13 = (undefined2 *)plVar15[(longlong)(int)uVar12 * 0x24 + 3];
                    }
                    lVar23 = 0;
                    while( true ) {
                      uVar2 = *(ushort *)((longlong)puVar13 + lVar23);
                      uVar25 = (uint)uVar2;
                      uVar3 = *(ushort *)((longlong)puVar7 + lVar23);
                      uVar26 = (uint)uVar3;
                      uVar6 = (ulonglong)uVar9;
                      if (uVar2 != uVar3) break;
                      if (uVar2 == 0) goto LAB_148aadb61;
LAB_148aadb32:
                      lVar23 = lVar23 + 2;
                    }
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148aadb32;
                    }
                    if ((int)(uVar25 - uVar26) < 0) {
                      uVar6 = (ulonglong)uVar12;
                    }
                  }
LAB_148aadb61:
                  lVar23 = (longlong)(int)local_478;
                  puVar7 = &DAT_149dfb77a;
                  if ((int)plVar15[lVar23 * 0x24 + 4] != 0) {
                    puVar7 = (undefined2 *)plVar15[lVar23 * 0x24 + 3];
                  }
                  lVar20 = (longlong)(int)uVar6;
                  puVar13 = &DAT_149dfb77a;
                  if ((int)plVar15[lVar20 * 0x24 + 4] != 0) {
                    puVar13 = (undefined2 *)plVar15[lVar20 * 0x24 + 3];
                  }
                  lVar24 = 0;
                  do {
                    uVar2 = *(ushort *)((longlong)puVar13 + lVar24);
                    uVar12 = (uint)uVar2;
                    uVar3 = *(ushort *)((longlong)puVar7 + lVar24);
                    uVar9 = (uint)uVar3;
                    local_478 = uVar6;
                    if (uVar2 == uVar3) {
                      if (uVar2 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar3 | uVar2)) goto LAB_148aadbdb;
                      uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_148aadbdb;
                    }
                    lVar24 = lVar24 + 2;
                  } while( true );
                }
LAB_148aadc2d:
                plVar14 = local_480;
                bVar28 = uVar5 != 0;
                uVar5 = uVar5 - 1;
              } while (bVar28);
              if (1 < (int)uVar27) {
                memcpy(local_168,plVar15,0x120);
                memcpy(plVar15,plVar15 + ((ulonglong)uVar27 - 1) * 0x24,0x120);
                memcpy(plVar15 + ((ulonglong)uVar27 - 1) * 0x24,local_168,0x120);
                uVar6 = (ulonglong)uVar27 - 1;
                if (uVar27 != 2) {
LAB_148aadca5:
                  iVar4 = 0;
                  iVar22 = 1;
                  iVar11 = 0;
LAB_148aadcae:
                  iVar4 = iVar4 + 2;
                  lVar23 = (longlong)iVar4;
                  iVar10 = iVar22;
                  if (lVar23 < (longlong)uVar6) {
                    puVar7 = &DAT_149dfb77a;
                    if ((int)plVar15[lVar23 * 0x24 + 4] != 0) {
                      puVar7 = (undefined2 *)plVar15[lVar23 * 0x24 + 3];
                    }
                    puVar13 = &DAT_149dfb77a;
                    if ((int)plVar15[(longlong)iVar22 * 0x24 + 4] != 0) {
                      puVar13 = (undefined2 *)plVar15[(longlong)iVar22 * 0x24 + 3];
                    }
                    lVar23 = 0;
                    while( true ) {
                      uVar2 = *(ushort *)((longlong)puVar13 + lVar23);
                      uVar27 = (uint)uVar2;
                      uVar3 = *(ushort *)((longlong)puVar7 + lVar23);
                      uVar5 = (uint)uVar3;
                      iVar10 = iVar4;
                      if (uVar2 != uVar3) break;
                      if (uVar2 == 0) goto LAB_148aadd37;
LAB_148aadd08:
                      lVar23 = lVar23 + 2;
                    }
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148aadd08;
                    }
                    if ((int)(uVar27 - uVar5) < 0) {
                      iVar10 = iVar22;
                    }
                  }
LAB_148aadd37:
                  lVar23 = (longlong)iVar11;
                  puVar7 = &DAT_149dfb77a;
                  if ((int)plVar15[lVar23 * 0x24 + 4] != 0) {
                    puVar7 = (undefined2 *)plVar15[lVar23 * 0x24 + 3];
                  }
                  lVar20 = (longlong)iVar10;
                  puVar13 = &DAT_149dfb77a;
                  if ((int)plVar15[lVar20 * 0x24 + 4] != 0) {
                    puVar13 = (undefined2 *)plVar15[lVar20 * 0x24 + 3];
                  }
                  lVar24 = 0;
                  do {
                    uVar2 = *(ushort *)((longlong)puVar13 + lVar24);
                    uVar27 = (uint)uVar2;
                    uVar3 = *(ushort *)((longlong)puVar7 + lVar24);
                    uVar5 = (uint)uVar3;
                    if (uVar2 == uVar3) {
                      if (uVar2 == 0) goto LAB_148aade00;
                    }
                    else {
                      if (0x7f < (uVar3 | uVar2)) goto LAB_148aaddab;
                      uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_148aaddab;
                    }
                    lVar24 = lVar24 + 2;
                  } while( true );
                }
              }
            }
LAB_148aadf4d:
            plVar14 = plVar14 + -3;
          } while (&local_468 <= plVar14);
        }
      }
      else if (iVar4 == 2) {
        if (*(char *)(param_1 + 0x3c) == '\x01') {
          if (iVar22 != 1) {
            lVar23 = *(longlong *)(lVar23 + 8);
            memset(local_458,0,0x2f0);
            local_460 = lVar20 * 0x120 + lVar23 + -0x120;
            local_468 = lVar23;
            fVar29 = logf((float)iVar22);
            local_458[0] = (int)(longlong)(fVar29 + fVar29);
            plVar14 = &local_468;
            do {
              plVar15 = (longlong *)*plVar14;
              plVar16 = (longlong *)plVar14[1];
              iVar22 = (int)plVar14[2];
              iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 5) * 0x38e38e39;
              uVar27 = iVar4 + 1;
              plVar21 = plVar15;
              plVar18 = plVar15;
              plVar17 = plVar16;
              local_488 = plVar14;
              if (iVar22 != 0) {
LAB_148aac50d:
                if (8 < (int)uVar27) {
                  local_478 = CONCAT44(local_478._4_4_,iVar22);
                  local_480 = plVar15;
                  local_470 = plVar17;
                  memcpy(local_168,plVar18 + (ulonglong)(uVar27 >> 1) * 0x24,0x120);
                  memcpy(plVar18 + (ulonglong)(uVar27 >> 1) * 0x24,plVar18,0x120);
                  memcpy(plVar18,local_168,0x120);
                  plVar15 = plVar16 + 0x24;
                  plVar21 = plVar18;
                  do {
                    plVar14 = plVar21 + 0x24;
                    plVar17 = plVar21 + 0x24;
                    do {
                      plVar21 = plVar17;
                      plVar8 = plVar14;
                      if (plVar16 < plVar21) break;
                      plVar14 = plVar8 + 0x24;
                      plVar17 = plVar21 + 0x24;
                    } while (*(int *)((longlong)plVar18 + 0x114) <=
                             *(int *)((longlong)plVar21 + 0x114));
                    plVar14 = plVar15 + -0x48;
                    do {
                      plVar19 = plVar15;
                      plVar17 = plVar14;
                      plVar15 = plVar19 + -0x24;
                      if (plVar15 <= plVar18) break;
                      plVar14 = plVar17 + -0x24;
                    } while (*(int *)((longlong)plVar19 + -0xc) <=
                             *(int *)((longlong)plVar18 + 0x114));
                    if (plVar15 < plVar21) goto LAB_148aac623;
                    memcpy(local_168,plVar21,0x120);
                    memcpy(plVar21,plVar15,0x120);
                    memcpy(plVar15,local_168,0x120);
                  } while( true );
                }
                for (; plVar14 = local_488, plVar15 = plVar18, plVar21 = plVar18, plVar18 < plVar16;
                    plVar16 = plVar16 + -0x24) {
                  while (plVar14 = plVar15, plVar15 = plVar21 + 0x24, plVar15 <= plVar16) {
                    piVar1 = (int *)((longlong)plVar21 + 0x234);
                    plVar21 = plVar15;
                    if (*(int *)((longlong)plVar14 + 0x114) <= *piVar1) {
                      plVar15 = plVar14;
                    }
                  }
                  memcpy(local_168,plVar14,0x120);
                  memcpy(plVar14,plVar16,0x120);
                  memcpy(plVar16,local_168,0x120);
                }
                goto LAB_148aaca12;
              }
LAB_148aac716:
              plVar14 = local_488;
              if (uVar27 != 0) {
                uVar5 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
                do {
                  uVar6 = (ulonglong)uVar5;
                  local_478 = uVar6;
                  while (uVar12 = uVar5 * 2 + 1, (int)uVar12 < (int)uVar27) {
                    uVar9 = uVar5 * 2 + 2;
                    uVar5 = uVar12;
                    if (((int)uVar9 < (int)uVar27) &&
                       (*(int *)((longlong)plVar21 + (longlong)(int)uVar9 * 0x120 + 0x114) <=
                        *(int *)((longlong)plVar21 + (longlong)(int)uVar12 * 0x120 + 0x114))) {
                      uVar5 = uVar9;
                    }
                    if (*(int *)((longlong)plVar21 + (longlong)(int)uVar6 * 0x120 + 0x114) <=
                        *(int *)((longlong)plVar21 + (longlong)(int)uVar5 * 0x120 + 0x114)) break;
                    memcpy(local_168,plVar21 + (longlong)(int)uVar6 * 0x24,0x120);
                    memcpy(plVar21 + (longlong)(int)uVar6 * 0x24,
                           plVar21 + (longlong)(int)uVar5 * 0x24,0x120);
                    memcpy(plVar21 + (longlong)(int)uVar5 * 0x24,local_168,0x120);
                    uVar6 = (ulonglong)uVar5;
                  }
                  uVar5 = (int)local_478 - 1;
                } while ((int)local_478 != 0);
                plVar14 = local_488;
                if (1 < (int)uVar27) {
                  memcpy(local_168,plVar21,0x120);
                  memcpy(plVar21,plVar21 + ((ulonglong)uVar27 - 1) * 0x24,0x120);
                  memcpy(plVar21 + ((ulonglong)uVar27 - 1) * 0x24,local_168,0x120);
                  plVar14 = local_488;
                  uVar6 = (ulonglong)uVar27 - 1;
                  if (uVar27 != 2) {
                    do {
                      iVar22 = 0;
                      iVar11 = 1;
                      iVar4 = 0;
                      do {
                        iVar22 = iVar22 + 2;
                        iVar10 = iVar11;
                        if (((longlong)iVar22 < (longlong)uVar6) &&
                           (*(int *)((longlong)plVar21 + (longlong)iVar22 * 0x120 + 0x114) <=
                            *(int *)((longlong)plVar21 + (longlong)iVar11 * 0x120 + 0x114))) {
                          iVar10 = iVar22;
                        }
                        if (*(int *)((longlong)plVar21 + (longlong)iVar4 * 0x120 + 0x114) <=
                            *(int *)((longlong)plVar21 + (longlong)iVar10 * 0x120 + 0x114)) break;
                        memcpy(local_168,plVar21 + (longlong)iVar4 * 0x24,0x120);
                        memcpy(plVar21 + (longlong)iVar4 * 0x24,plVar21 + (longlong)iVar10 * 0x24,
                               0x120);
                        memcpy(plVar21 + (longlong)iVar10 * 0x24,local_168,0x120);
                        iVar22 = iVar10 * 2;
                        iVar11 = iVar10 * 2 + 1;
                        iVar4 = iVar10;
                      } while ((longlong)iVar11 < (longlong)uVar6);
                      memcpy(local_168,plVar21,0x120);
                      memcpy(plVar21,plVar21 + (uVar6 - 1) * 0x24,0x120);
                      memcpy(plVar21 + (uVar6 - 1) * 0x24,local_168,0x120);
                      bVar28 = 2 < uVar6;
                      plVar14 = local_488;
                      uVar6 = uVar6 - 1;
                    } while (bVar28);
                  }
                }
              }
LAB_148aaca12:
              plVar14 = plVar14 + -3;
            } while (&local_468 <= plVar14);
          }
        }
        else if (iVar22 != 1) {
          lVar23 = *(longlong *)(lVar23 + 8);
          memset(local_458,0,0x2f0);
          local_460 = lVar20 * 0x120 + lVar23 + -0x120;
          local_468 = lVar23;
          fVar29 = logf((float)iVar22);
          local_458[0] = (int)(longlong)(fVar29 + fVar29);
          plVar14 = &local_468;
          do {
            plVar15 = (longlong *)*plVar14;
            plVar16 = (longlong *)plVar14[1];
            iVar22 = (int)plVar14[2];
            iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 5) * 0x38e38e39;
            uVar27 = iVar4 + 1;
            plVar21 = plVar15;
            plVar18 = plVar15;
            plVar17 = plVar16;
            local_488 = plVar14;
            if (iVar22 != 0) {
LAB_148aae5aa:
              if (8 < (int)uVar27) {
                local_478 = CONCAT44(local_478._4_4_,iVar22);
                local_480 = plVar15;
                local_470 = plVar17;
                memcpy(local_168,plVar18 + (ulonglong)(uVar27 >> 1) * 0x24,0x120);
                memcpy(plVar18 + (ulonglong)(uVar27 >> 1) * 0x24,plVar18,0x120);
                memcpy(plVar18,local_168,0x120);
                plVar15 = plVar16 + 0x24;
                plVar21 = plVar18;
                do {
                  plVar14 = plVar21 + 0x24;
                  plVar17 = plVar21 + 0x24;
                  do {
                    plVar21 = plVar17;
                    plVar8 = plVar14;
                    if (plVar16 < plVar21) break;
                    plVar14 = plVar8 + 0x24;
                    plVar17 = plVar21 + 0x24;
                  } while (*(int *)((longlong)plVar21 + 0x114) <=
                           *(int *)((longlong)plVar18 + 0x114));
                  plVar14 = plVar15 + -0x48;
                  do {
                    plVar19 = plVar15;
                    plVar17 = plVar14;
                    plVar15 = plVar19 + -0x24;
                    if (plVar15 <= plVar18) break;
                    plVar14 = plVar17 + -0x24;
                  } while (*(int *)((longlong)plVar18 + 0x114) <= *(int *)((longlong)plVar19 + -0xc)
                          );
                  if (plVar15 < plVar21) goto LAB_148aae6c0;
                  memcpy(local_168,plVar21,0x120);
                  memcpy(plVar21,plVar15,0x120);
                  memcpy(plVar15,local_168,0x120);
                } while( true );
              }
              for (; plVar14 = local_488, plVar15 = plVar18, plVar21 = plVar18, plVar18 < plVar16;
                  plVar16 = plVar16 + -0x24) {
                while (plVar14 = plVar15, plVar15 = plVar21 + 0x24, plVar15 <= plVar16) {
                  piVar1 = (int *)((longlong)plVar21 + 0x234);
                  plVar21 = plVar15;
                  if (*piVar1 <= *(int *)((longlong)plVar14 + 0x114)) {
                    plVar15 = plVar14;
                  }
                }
                memcpy(local_168,plVar14,0x120);
                memcpy(plVar14,plVar16,0x120);
                memcpy(plVar16,local_168,0x120);
              }
              goto LAB_148aaeaaf;
            }
LAB_148aae7b3:
            plVar14 = local_488;
            if (uVar27 != 0) {
              uVar5 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
              do {
                uVar6 = (ulonglong)uVar5;
                local_478 = uVar6;
                while (uVar12 = uVar5 * 2 + 1, (int)uVar12 < (int)uVar27) {
                  uVar9 = uVar5 * 2 + 2;
                  uVar5 = uVar12;
                  if (((int)uVar9 < (int)uVar27) &&
                     (*(int *)((longlong)plVar21 + (longlong)(int)uVar12 * 0x120 + 0x114) <=
                      *(int *)((longlong)plVar21 + (longlong)(int)uVar9 * 0x120 + 0x114))) {
                    uVar5 = uVar9;
                  }
                  if (*(int *)((longlong)plVar21 + (longlong)(int)uVar5 * 0x120 + 0x114) <=
                      *(int *)((longlong)plVar21 + (longlong)(int)uVar6 * 0x120 + 0x114)) break;
                  memcpy(local_168,plVar21 + (longlong)(int)uVar6 * 0x24,0x120);
                  memcpy(plVar21 + (longlong)(int)uVar6 * 0x24,plVar21 + (longlong)(int)uVar5 * 0x24
                         ,0x120);
                  memcpy(plVar21 + (longlong)(int)uVar5 * 0x24,local_168,0x120);
                  uVar6 = (ulonglong)uVar5;
                }
                uVar5 = (int)local_478 - 1;
              } while ((int)local_478 != 0);
              plVar14 = local_488;
              if (1 < (int)uVar27) {
                memcpy(local_168,plVar21,0x120);
                memcpy(plVar21,plVar21 + ((ulonglong)uVar27 - 1) * 0x24,0x120);
                memcpy(plVar21 + ((ulonglong)uVar27 - 1) * 0x24,local_168,0x120);
                plVar14 = local_488;
                uVar6 = (ulonglong)uVar27 - 1;
                if (uVar27 != 2) {
                  do {
                    iVar22 = 0;
                    iVar11 = 1;
                    iVar4 = 0;
                    do {
                      iVar22 = iVar22 + 2;
                      iVar10 = iVar11;
                      if (((longlong)iVar22 < (longlong)uVar6) &&
                         (*(int *)((longlong)plVar21 + (longlong)iVar11 * 0x120 + 0x114) <=
                          *(int *)((longlong)plVar21 + (longlong)iVar22 * 0x120 + 0x114))) {
                        iVar10 = iVar22;
                      }
                      if (*(int *)((longlong)plVar21 + (longlong)iVar10 * 0x120 + 0x114) <=
                          *(int *)((longlong)plVar21 + (longlong)iVar4 * 0x120 + 0x114)) break;
                      memcpy(local_168,plVar21 + (longlong)iVar4 * 0x24,0x120);
                      memcpy(plVar21 + (longlong)iVar4 * 0x24,plVar21 + (longlong)iVar10 * 0x24,
                             0x120);
                      memcpy(plVar21 + (longlong)iVar10 * 0x24,local_168,0x120);
                      iVar22 = iVar10 * 2;
                      iVar11 = iVar10 * 2 + 1;
                      iVar4 = iVar10;
                    } while ((longlong)iVar11 < (longlong)uVar6);
                    memcpy(local_168,plVar21,0x120);
                    memcpy(plVar21,plVar21 + (uVar6 - 1) * 0x24,0x120);
                    memcpy(plVar21 + (uVar6 - 1) * 0x24,local_168,0x120);
                    bVar28 = 2 < uVar6;
                    plVar14 = local_488;
                    uVar6 = uVar6 - 1;
                  } while (bVar28);
                }
              }
            }
LAB_148aaeaaf:
            plVar14 = plVar14 + -3;
          } while (&local_468 <= plVar14);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148aae10f:
  memcpy(local_168,plVar18,0x120);
  memcpy(plVar18,plVar15,0x120);
  memcpy(plVar15,local_168,0x120);
  iVar22 = (int)local_478 + -1;
  plVar19 = plVar19 + -0x48;
  if ((longlong)plVar17 - (longlong)local_480 < (longlong)local_470 - (longlong)plVar8) {
    plVar14 = local_488;
    if (plVar21 < plVar16) {
      *local_488 = (longlong)plVar21;
      local_488[1] = (longlong)plVar16;
      *(int *)(local_488 + 2) = iVar22;
      plVar14 = local_488 + 3;
    }
    plVar21 = plVar18;
    if (plVar15 <= plVar18 + 0x24) goto LAB_148aae4fe;
  }
  else {
    if (plVar18 + 0x24 < plVar15) {
      *local_488 = (longlong)plVar18;
      local_488[1] = (longlong)plVar19;
      *(int *)(local_488 + 2) = iVar22;
      local_488 = local_488 + 3;
    }
    plVar14 = local_488;
    plVar18 = plVar8;
    plVar19 = plVar16;
    plVar17 = plVar16;
    if (plVar16 <= plVar21) goto LAB_148aae4fe;
  }
  local_488 = plVar14;
  iVar4 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar18) >> 5) * 0x38e38e39;
  uVar27 = iVar4 + 1;
  plVar15 = plVar18;
  plVar16 = plVar19;
  plVar18 = plVar21;
  if (iVar22 == 0) goto LAB_148aae202;
  goto LAB_148aadff9;
LAB_148aad3a2:
  memcpy(local_168,plVar18,0x120);
  memcpy(plVar18,plVar15,0x120);
  memcpy(plVar15,local_168,0x120);
  iVar22 = (int)local_478 + -1;
  plVar19 = plVar19 + -0x48;
  if ((longlong)plVar17 - (longlong)local_480 < (longlong)local_470 - (longlong)plVar8) {
    plVar14 = local_488;
    if (plVar21 < plVar16) {
      *local_488 = (longlong)plVar21;
      local_488[1] = (longlong)plVar16;
      *(int *)(local_488 + 2) = iVar22;
      plVar14 = local_488 + 3;
    }
    plVar21 = plVar18;
    if (plVar15 <= plVar18 + 0x24) goto LAB_148aad791;
  }
  else {
    if (plVar18 + 0x24 < plVar15) {
      *local_488 = (longlong)plVar18;
      local_488[1] = (longlong)plVar19;
      *(int *)(local_488 + 2) = iVar22;
      local_488 = local_488 + 3;
    }
    plVar14 = local_488;
    plVar18 = plVar8;
    plVar19 = plVar16;
    plVar17 = plVar16;
    if (plVar16 <= plVar21) goto LAB_148aad791;
  }
  local_488 = plVar14;
  iVar4 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar18) >> 5) * 0x38e38e39;
  uVar27 = iVar4 + 1;
  plVar15 = plVar18;
  plVar16 = plVar19;
  plVar18 = plVar21;
  if (iVar22 == 0) goto LAB_148aad495;
  goto LAB_148aad28c;
code_r0x000148aad8b2:
  puVar7 = &DAT_149dfb77a;
  if ((int)plVar15[4] != 0) {
    puVar7 = (undefined2 *)plVar15[3];
  }
  puVar13 = &DAT_149dfb77a;
  if ((int)plVar14[0x28] != 0) {
    puVar13 = (undefined2 *)plVar14[0x27];
  }
  lVar23 = 0;
  while( true ) {
    uVar2 = *(ushort *)((longlong)puVar13 + lVar23);
    uVar27 = (uint)uVar2;
    uVar3 = *(ushort *)((longlong)puVar7 + lVar23);
    uVar5 = (uint)uVar3;
    if (uVar2 != uVar3) {
      if ((uVar3 | uVar2) < 0x80) {
        uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148aad8ea;
      }
      iVar22 = uVar27 - uVar5;
      goto LAB_148aad914;
    }
    if (uVar2 == 0) break;
LAB_148aad8ea:
    lVar23 = lVar23 + 2;
  }
  iVar22 = 0;
LAB_148aad914:
  plVar14 = plVar21;
  if (-1 < iVar22) goto LAB_148aad8a3;
LAB_148aad918:
  do {
    plVar17 = plVar18;
    plVar18 = plVar17 + -0x24;
    if (plVar18 <= plVar15) break;
    puVar7 = &DAT_149dfb77a;
    if ((int)plVar17[-0x20] != 0) {
      puVar7 = (undefined2 *)plVar17[-0x21];
    }
    puVar13 = &DAT_149dfb77a;
    if ((int)plVar15[4] != 0) {
      puVar13 = (undefined2 *)plVar15[3];
    }
    lVar23 = 0;
    while( true ) {
      uVar2 = *(ushort *)((longlong)puVar13 + lVar23);
      uVar27 = (uint)uVar2;
      uVar3 = *(ushort *)((longlong)puVar7 + lVar23);
      uVar5 = (uint)uVar3;
      if (uVar2 != uVar3) {
        if ((uVar3 | uVar2) < 0x80) {
          uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148aad960;
        }
        iVar22 = uVar27 - uVar5;
        goto LAB_148aad98a;
      }
      if (uVar2 == 0) break;
LAB_148aad960:
      lVar23 = lVar23 + 2;
    }
    iVar22 = 0;
LAB_148aad98a:
  } while (-1 < iVar22);
  if (plVar21 <= plVar18) {
    memcpy(local_168,plVar21,0x120);
    memcpy(plVar21,plVar18,0x120);
    memcpy(plVar18,local_168,0x120);
    plVar14 = plVar21;
    goto LAB_148aad8a3;
  }
  memcpy(local_168,plVar15,0x120);
  memcpy(plVar15,plVar18,0x120);
  memcpy(plVar18,local_168,0x120);
  iVar22 = (int)local_478 + -1;
  plVar17 = plVar17 + -0x48;
  if ((longlong)plVar17 - (longlong)plVar15 < (longlong)local_470 - (longlong)plVar21) {
    if (plVar21 < plVar16) {
      *local_480 = (longlong)plVar21;
      local_480[1] = (longlong)plVar16;
      *(int *)(local_480 + 2) = iVar22;
      local_480 = local_480 + 3;
    }
    plVar14 = local_480;
    if (plVar18 <= plVar15 + 0x24) goto LAB_148aadf4d;
  }
  else {
    plVar14 = local_480;
    if (plVar15 + 0x24 < plVar18) {
      *local_480 = (longlong)plVar15;
      local_480[1] = (longlong)plVar17;
      *(int *)(local_480 + 2) = iVar22;
      plVar14 = local_480 + 3;
    }
    plVar17 = plVar16;
    plVar15 = plVar21;
    if (plVar16 <= plVar21) goto LAB_148aadf4d;
  }
  local_480 = plVar14;
  iVar4 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar15) >> 5) * 0x38e38e39;
  uVar27 = iVar4 + 1;
  plVar16 = plVar17;
  if (iVar22 == 0) goto LAB_148aadaa6;
  goto LAB_148aad845;
LAB_148aadbdb:
  if (-1 < (int)(uVar12 - uVar9)) goto LAB_148aadc2d;
  memcpy(local_168,plVar15 + lVar23 * 0x24,0x120);
  memcpy(plVar15 + lVar23 * 0x24,plVar15 + lVar20 * 0x24,0x120);
  memcpy(plVar15 + lVar20 * 0x24,local_168,0x120);
  uVar9 = (uint)local_478;
  uVar12 = uVar9 * 2 + 1;
  if ((int)uVar27 <= (int)uVar12) goto LAB_148aadc2d;
  goto LAB_148aadad8;
LAB_148aaddab:
  if (-1 < (int)(uVar27 - uVar5)) goto LAB_148aade00;
  memcpy(local_168,plVar15 + lVar23 * 0x24,0x120);
  memcpy(plVar15 + lVar23 * 0x24,plVar15 + lVar20 * 0x24,0x120);
  memcpy(plVar15 + lVar20 * 0x24,local_168,0x120);
  iVar4 = iVar10 * 2;
  iVar22 = iVar10 * 2 + 1;
  iVar11 = iVar10;
  if ((longlong)uVar6 <= (longlong)iVar22) goto LAB_148aade00;
  goto LAB_148aadcae;
LAB_148aade00:
  memcpy(local_168,plVar15,0x120);
  memcpy(plVar15,plVar15 + (uVar6 - 1) * 0x24,0x120);
  memcpy(plVar15 + (uVar6 - 1) * 0x24,local_168,0x120);
  bVar28 = uVar6 < 3;
  uVar6 = uVar6 - 1;
  plVar14 = local_480;
  if (bVar28) goto LAB_148aadf4d;
  goto LAB_148aadca5;
code_r0x000148aacb3d:
  puVar7 = &DAT_149dfb77a;
  if ((int)plVar14[0x28] != 0) {
    puVar7 = (undefined2 *)plVar14[0x27];
  }
  puVar13 = &DAT_149dfb77a;
  if ((int)plVar15[4] != 0) {
    puVar13 = (undefined2 *)plVar15[3];
  }
  lVar23 = 0;
  while( true ) {
    uVar2 = *(ushort *)((longlong)puVar13 + lVar23);
    uVar27 = (uint)uVar2;
    uVar3 = *(ushort *)((longlong)puVar7 + lVar23);
    uVar5 = (uint)uVar3;
    if (uVar2 != uVar3) {
      if ((uVar3 | uVar2) < 0x80) {
        uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148aacb75;
      }
      iVar22 = uVar27 - uVar5;
      goto LAB_148aacb9f;
    }
    if (uVar2 == 0) break;
LAB_148aacb75:
    lVar23 = lVar23 + 2;
  }
  iVar22 = 0;
LAB_148aacb9f:
  plVar14 = plVar21;
  if (-1 < iVar22) goto LAB_148aacb2e;
LAB_148aacba3:
  do {
    plVar17 = plVar18;
    plVar18 = plVar17 + -0x24;
    if (plVar18 <= plVar15) break;
    puVar7 = &DAT_149dfb77a;
    if ((int)plVar15[4] != 0) {
      puVar7 = (undefined2 *)plVar15[3];
    }
    puVar13 = &DAT_149dfb77a;
    if ((int)plVar17[-0x20] != 0) {
      puVar13 = (undefined2 *)plVar17[-0x21];
    }
    lVar23 = 0;
    while( true ) {
      uVar2 = *(ushort *)((longlong)puVar13 + lVar23);
      uVar27 = (uint)uVar2;
      uVar3 = *(ushort *)((longlong)puVar7 + lVar23);
      uVar5 = (uint)uVar3;
      if (uVar2 != uVar3) {
        if ((uVar3 | uVar2) < 0x80) {
          uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148aacbeb;
        }
        iVar22 = uVar27 - uVar5;
        goto LAB_148aacc15;
      }
      if (uVar2 == 0) break;
LAB_148aacbeb:
      lVar23 = lVar23 + 2;
    }
    iVar22 = 0;
LAB_148aacc15:
  } while (-1 < iVar22);
  if (plVar21 <= plVar18) {
    memcpy(local_168,plVar21,0x120);
    memcpy(plVar21,plVar18,0x120);
    memcpy(plVar18,local_168,0x120);
    plVar14 = plVar21;
    goto LAB_148aacb2e;
  }
  memcpy(local_168,plVar15,0x120);
  memcpy(plVar15,plVar18,0x120);
  memcpy(plVar18,local_168,0x120);
  iVar22 = (int)local_478 + -1;
  plVar17 = plVar17 + -0x48;
  if ((longlong)plVar17 - (longlong)plVar15 < (longlong)local_470 - (longlong)plVar21) {
    if (plVar21 < plVar16) {
      *local_480 = (longlong)plVar21;
      local_480[1] = (longlong)plVar16;
      *(int *)(local_480 + 2) = iVar22;
      local_480 = local_480 + 3;
    }
    plVar14 = local_480;
    if (plVar18 <= plVar15 + 0x24) goto LAB_148aad1d6;
  }
  else {
    plVar14 = local_480;
    if (plVar15 + 0x24 < plVar18) {
      *local_480 = (longlong)plVar15;
      local_480[1] = (longlong)plVar17;
      *(int *)(local_480 + 2) = iVar22;
      plVar14 = local_480 + 3;
    }
    plVar17 = plVar16;
    plVar15 = plVar21;
    if (plVar16 <= plVar21) goto LAB_148aad1d6;
  }
  local_480 = plVar14;
  iVar4 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar15) >> 5) * 0x38e38e39;
  uVar27 = iVar4 + 1;
  plVar16 = plVar17;
  if (iVar22 == 0) goto LAB_148aacd31;
  goto LAB_148aacad0;
LAB_148aace65:
  if (-1 < (int)(uVar12 - uVar9)) goto LAB_148aaceb7;
  memcpy(local_168,plVar15 + lVar20 * 0x24,0x120);
  memcpy(plVar15 + lVar20 * 0x24,plVar15 + lVar23 * 0x24,0x120);
  memcpy(plVar15 + lVar23 * 0x24,local_168,0x120);
  uVar9 = (uint)local_478;
  uVar12 = uVar9 * 2 + 1;
  if ((int)uVar27 <= (int)uVar12) goto LAB_148aaceb7;
  goto LAB_148aacd63;
LAB_148aad035:
  if (-1 < (int)(uVar27 - uVar5)) goto LAB_148aad08a;
  memcpy(local_168,plVar15 + lVar20 * 0x24,0x120);
  memcpy(plVar15 + lVar20 * 0x24,plVar15 + lVar23 * 0x24,0x120);
  memcpy(plVar15 + lVar23 * 0x24,local_168,0x120);
  iVar4 = iVar10 * 2;
  iVar22 = iVar10 * 2 + 1;
  iVar11 = iVar10;
  if ((longlong)uVar6 <= (longlong)iVar22) goto LAB_148aad08a;
  goto LAB_148aacf38;
LAB_148aad08a:
  memcpy(local_168,plVar15,0x120);
  memcpy(plVar15,plVar15 + (uVar6 - 1) * 0x24,0x120);
  memcpy(plVar15 + (uVar6 - 1) * 0x24,local_168,0x120);
  bVar28 = uVar6 < 3;
  uVar6 = uVar6 - 1;
  plVar14 = local_480;
  if (bVar28) goto LAB_148aad1d6;
  goto LAB_148aacf2f;
LAB_148aae6c0:
  memcpy(local_168,plVar18,0x120);
  memcpy(plVar18,plVar15,0x120);
  memcpy(plVar15,local_168,0x120);
  iVar22 = (int)local_478 + -1;
  plVar19 = plVar19 + -0x48;
  if ((longlong)plVar17 - (longlong)local_480 < (longlong)local_470 - (longlong)plVar8) {
    plVar14 = local_488;
    if (plVar21 < plVar16) {
      *local_488 = (longlong)plVar21;
      local_488[1] = (longlong)plVar16;
      *(int *)(local_488 + 2) = iVar22;
      plVar14 = local_488 + 3;
    }
    plVar21 = plVar18;
    if (plVar15 <= plVar18 + 0x24) goto LAB_148aaeaaf;
  }
  else {
    if (plVar18 + 0x24 < plVar15) {
      *local_488 = (longlong)plVar18;
      local_488[1] = (longlong)plVar19;
      *(int *)(local_488 + 2) = iVar22;
      local_488 = local_488 + 3;
    }
    plVar14 = local_488;
    plVar18 = plVar8;
    plVar19 = plVar16;
    plVar17 = plVar16;
    if (plVar16 <= plVar21) goto LAB_148aaeaaf;
  }
  local_488 = plVar14;
  iVar4 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar18) >> 5) * 0x38e38e39;
  uVar27 = iVar4 + 1;
  plVar15 = plVar18;
  plVar16 = plVar19;
  plVar18 = plVar21;
  if (iVar22 == 0) goto LAB_148aae7b3;
  goto LAB_148aae5aa;
LAB_148aac623:
  memcpy(local_168,plVar18,0x120);
  memcpy(plVar18,plVar15,0x120);
  memcpy(plVar15,local_168,0x120);
  iVar22 = (int)local_478 + -1;
  plVar19 = plVar19 + -0x48;
  if ((longlong)plVar17 - (longlong)local_480 < (longlong)local_470 - (longlong)plVar8) {
    plVar14 = local_488;
    if (plVar21 < plVar16) {
      *local_488 = (longlong)plVar21;
      local_488[1] = (longlong)plVar16;
      *(int *)(local_488 + 2) = iVar22;
      plVar14 = local_488 + 3;
    }
    plVar21 = plVar18;
    if (plVar15 <= plVar18 + 0x24) goto LAB_148aaca12;
  }
  else {
    if (plVar18 + 0x24 < plVar15) {
      *local_488 = (longlong)plVar18;
      local_488[1] = (longlong)plVar19;
      *(int *)(local_488 + 2) = iVar22;
      local_488 = local_488 + 3;
    }
    plVar14 = local_488;
    plVar18 = plVar8;
    plVar19 = plVar16;
    plVar17 = plVar16;
    if (plVar16 <= plVar21) goto LAB_148aaca12;
  }
  local_488 = plVar14;
  iVar4 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar18) >> 5) * 0x38e38e39;
  uVar27 = iVar4 + 1;
  plVar15 = plVar18;
  plVar16 = plVar19;
  plVar18 = plVar21;
  if (iVar22 == 0) goto LAB_148aac716;
  goto LAB_148aac50d;
}



// FUNCTION 148aaeaf0 FUN_148aaeaf0 body=126 status=ok
// SIG undefined FUN_148aaeaf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148aaeaf0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb97918) {
    FUN_144b3d300(&DAT_14cb97918);
    if (DAT_14cb97918 == -1) {
      DAT_14cb97908 = 0;
      _DAT_14cb97910 = 0;
      atexit(FUN_143f47d4d);
      _Init_thread_footer(&DAT_14cb97918);
    }
  }
  puVar1 = &DAT_14cb97908;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + 8);
  }
  return puVar1;
}



// FUNCTION 148aaeb6e FUN_148aaeb6e body=14 status=ok
// SIG undefined FUN_148aaeb6e(void)

void FUN_148aaeb6e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x38) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x38) = param_2;
  FUN_148aac412();
  return;
}



// FUNCTION 148aaebd2 FUN_148aaebd2 body=191 status=ok
// SIG undefined FUN_148aaebd2(void)

void FUN_148aaebd2(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x140) != 0) && (*(longlong *)(param_1 + 0x148) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x148) + 8))) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x140);
    local_20 = *(longlong *)(param_1 + 0x148);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
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



// FUNCTION 148aaeca2 FUN_148aaeca2 body=390 status=ok
// SIG undefined FUN_148aaeca2(void)

void FUN_148aaeca2(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_14119d664(*(longlong *)(param_1 + 0x180),&local_38);
    if (local_30 == *(int *)(param_1 + 0x178)) {
      bVar9 = true;
      if (1 < local_30) {
        lVar7 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_38 + lVar7);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x170) + lVar7);
          uVar8 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148aaed1e;
            }
            iVar5 = uVar4 - uVar8;
            goto LAB_148aaee0e;
          }
          if (uVar1 == 0) break;
LAB_148aaed1e:
          lVar7 = lVar7 + 2;
        }
        iVar5 = 0;
LAB_148aaee0e:
        bVar9 = iVar5 == 0;
      }
    }
    else {
      bVar9 = *(int *)(param_1 + 0x178) + local_30 == 1;
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (bVar9) {
      uVar3 = *(undefined8 *)(param_1 + 0x180);
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4edb10;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b4f72b0;
      local_48[3] = param_1;
      *(undefined4 *)(local_48 + 4) = param_2;
      FUN_143f3a7da(uVar3,param_2,&local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aaee2a FUN_148aaee2a body=373 status=ok
// SIG undefined FUN_148aaee2a(void)

void FUN_148aaee2a(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_14119d664(*(longlong *)(param_1 + 0x180),&local_30);
    if (local_28 == *(int *)(param_1 + 0x178)) {
      bVar9 = true;
      if (1 < local_28) {
        lVar7 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_30 + lVar7);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x170) + lVar7);
          uVar8 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148aaeea4;
            }
            iVar5 = uVar4 - uVar8;
            goto LAB_148aaef85;
          }
          if (uVar1 == 0) break;
LAB_148aaeea4:
          lVar7 = lVar7 + 2;
        }
        iVar5 = 0;
LAB_148aaef85:
        bVar9 = iVar5 == 0;
      }
    }
    else {
      bVar9 = *(int *)(param_1 + 0x178) + local_28 == 1;
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (bVar9) {
      uVar3 = *(undefined8 *)(param_1 + 0x180);
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,2,0x10);
      local_38 = 2;
      *local_40 = &PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_40[2] = lVar6;
      *local_40 = &PTR_FUN_14b4f7320;
      FUN_143f3a4a6(uVar3,param_2,&local_40);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aaefa0 FUN_148aaefa0 body=19 status=ok
// SIG undefined FUN_148aaefa0(void)

ulonglong FUN_148aaefa0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  undefined7 uVar7;
  undefined1 auStack_58 [32];
  longlong *plStack_38;
  longlong *plStack_30;
  ulonglong uStack_28;
  
  plVar5 = *(longlong **)(param_1 + 0x180);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)(**(code **)(*plVar5 + 0x10))();
  if (plVar4 == (longlong *)0x0) {
    plStack_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&plStack_38);
    if (plStack_38 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plStack_38 + 0x318))(plStack_38,param_2,plVar5[2],param_3);
      plVar5 = (longlong *)(ulonglong)uVar3;
      uVar7 = (undefined7)((ulonglong)param_3 >> 8);
      bVar6 = 1;
      goto LAB_148a96d96;
    }
  }
  bVar6 = 0;
  uVar7 = 0;
LAB_148a96d96:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar7,bVar6 & (byte)plVar5) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aaefb4 FUN_148aaefb4 body=156 status=ok
// SIG undefined FUN_148aaefb4(void)

undefined8 * FUN_148aaefb4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (1 < *(int *)(param_3 + 1)) {
    puVar1 = DAT_14cb97940;
    if (DAT_14cb97948 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(local_30,L"%s.%s",puVar1,*param_3);
    FUN_14101cdd4(*(longlong *)(param_1 + 8) + 0x80,local_30,param_2);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148aaf052 FUN_148aaf052 body=33 status=ok
// SIG undefined FUN_148aaf052(void)

undefined8 FUN_148aaf052(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x360);
  }
  return 0;
}



// FUNCTION 148aaf074 FUN_148aaf074 body=723 status=ok
// SIG undefined FUN_148aaf074(void)

void FUN_148aaf074(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (1 < (int)param_2[1]) {
    FUN_14101cf30(*(undefined8 *)(param_1 + 8),&local_70);
    bVar11 = true;
    if ((longlong)local_68 != 0) {
      plVar10 = local_70 + (longlong)local_68 * 2;
      plVar5 = local_70;
      do {
        local_88 = 0;
        uStack_80 = 0;
        FUN_14101cdd4(*plVar5 + 0x20,&DAT_14cb977e0);
        if ((int)uStack_80 == (int)param_2[1]) {
          bVar11 = true;
          if (1 < (int)uStack_80) {
            lVar6 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_88 + lVar6);
              uVar3 = (uint)uVar1;
              uVar2 = *(ushort *)(*param_2 + lVar6);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148aaf15a;
                }
                iVar4 = uVar3 - uVar8;
                goto LAB_148aaf1b5;
              }
              if (uVar1 == 0) break;
LAB_148aaf15a:
              lVar6 = lVar6 + 2;
            }
            iVar4 = 0;
LAB_148aaf1b5:
            bVar11 = iVar4 == 0;
          }
        }
        else {
          bVar11 = (int)param_2[1] + (int)uStack_80 == 1;
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (bVar11) {
          FUN_145c7de4a(param_1,plVar5);
          bVar11 = false;
          goto LAB_148aaf1c5;
        }
        plVar5 = plVar5 + 2;
      } while (plVar5 != plVar10);
      bVar11 = true;
    }
LAB_148aaf1c5:
    FUN_14101cee4(local_70,local_68);
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (bVar11) {
      puVar9 = &DAT_149dfb77a;
      if ((int)param_2[1] != 0) {
        puVar9 = (undefined2 *)*param_2;
      }
      puVar7 = &DAT_149dfb77a;
      if (DAT_14cb97938 != 0) {
        puVar7 = DAT_14cb97930;
      }
      FUN_140002266(&local_70,L"%s.%s",puVar7,puVar9);
      puVar9 = &DAT_149dfb77a;
      if ((int)param_2[1] != 0) {
        puVar9 = (undefined2 *)*param_2;
      }
      puVar7 = &DAT_149dfb77a;
      if (DAT_14cb97948 != 0) {
        puVar7 = DAT_14cb97940;
      }
      FUN_140002266(&local_88,L"%s.%s",puVar7,puVar9);
      FUN_140056680(local_98,&DAT_149dfb77a);
      FUN_141511334(*(undefined8 *)(param_1 + 8),&local_70,local_98);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_98,&DAT_149dfb77a);
      FUN_141511334(*(undefined8 *)(param_1 + 8),&local_88,local_98);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar9 = &DAT_149dfb77a;
      if ((int)param_2[1] != 0) {
        puVar9 = (undefined2 *)*param_2;
      }
      puVar7 = &DAT_149dfb77a;
      if (DAT_14cb97948 != 0) {
        puVar7 = DAT_14cb97940;
      }
      FUN_140002266(&local_70,L"%s.%s",puVar7,puVar9);
      FUN_140056680(&local_88,&DAT_149dfb77a);
      FUN_141511334(*(undefined8 *)(param_1 + 8),&local_70,&local_88);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148aaf348 FUN_148aaf348 body=263 status=ok
// SIG undefined FUN_148aaf348(void)

void FUN_148aaf348(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[0x32] == '\0') {
    FUN_145c6571c();
    iVar1 = *(int *)(param_1[0x30] + 0x78);
    cVar2 = FUN_1414e62ca(param_1[1]);
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
    if (iVar1 != *(int *)(param_1[1] + 0x58)) {
      local_38 = L"PlatformSessionPrivacyChangeNotAllowed";
      local_30 = 0x26;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"PlatformSessionManager";
      local_30 = 0x16;
      FUN_1446e940c(local_40,&local_38);
      FUN_140208bae(&local_38,local_40,local_3c,
                    L"Only the party leader is allowed to change the party privacy.");
      (**(code **)(*param_1 + 0x18))(param_1,&local_38);
      if (local_38 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_38 + 0x10))();
      }
      FUN_145c65b22(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aaf464 FUN_148aaf464 body=365 status=ok
// SIG undefined FUN_148aaf464(void)

void FUN_148aaf464(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x140) == 0) || (*(longlong *)(param_1 + 0x148) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x148) + 8) < 1)) {
    *(undefined4 *)(param_1 + 0x138) = 0x41700000;
    uVar4 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    local_38 = 3;
    *local_40 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b4f7550;
    local_40[3] = param_1;
    local_40[4] = FUN_143f49e4c;
    local_48 = 0;
    FUN_1405f67fc(uVar4,&local_30,&local_40,L"FPlatformSessionManager_TickJoinRetry");
    *(undefined8 *)(param_1 + 0x140) = local_30;
    local_30 = 0;
    plVar2 = *(longlong **)(param_1 + 0x148);
    *(longlong **)(param_1 + 0x148) = local_28;
    local_28 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aaf5d2 FUN_148aaf5d2 body=38 status=ok
// SIG undefined FUN_148aaf5d2(void)

undefined8 FUN_148aaf5d2(undefined8 param_1,int param_2)

{
  FUN_14621fa1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aaf602 FUN_148aaf602 body=38 status=ok
// SIG undefined FUN_148aaf602(void)

undefined8 FUN_148aaf602(undefined8 param_1,int param_2)

{
  FUN_148ab6000();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aaf628 FUN_148aaf628 body=38 status=ok
// SIG undefined FUN_148aaf628(void)

undefined8 FUN_148aaf628(undefined8 param_1,int param_2)

{
  FUN_145ad1de6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aaf64e FUN_148aaf64e body=38 status=ok
// SIG undefined FUN_148aaf64e(void)

undefined8 FUN_148aaf64e(undefined8 param_1,int param_2)

{
  FUN_148aac26e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aaf676 FUN_148aaf676 body=125 status=ok
// SIG undefined FUN_148aaf676(void)

undefined8 FUN_148aaf676(int *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  
  if (*param_1 == *param_2) {
    iVar7 = param_1[4];
    iVar3 = param_2[4];
    if (iVar7 == iVar3) {
      if (iVar7 < 2) {
        return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
      }
      uVar4 = *(ulonglong *)(param_2 + 2);
      lVar8 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 2) + lVar8);
        uVar6 = (uint)uVar1;
        uVar2 = *(ushort *)(uVar4 + lVar8);
        uVar9 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148aaf6b9;
          }
          iVar7 = uVar6 - uVar9;
          goto LAB_148aaf6ef;
        }
        if (uVar1 == 0) break;
LAB_148aaf6b9:
        lVar8 = lVar8 + 2;
      }
      iVar7 = 0;
LAB_148aaf6ef:
      bVar10 = iVar7 == 0;
    }
    else {
      uVar4 = (ulonglong)(uint)(iVar3 + iVar7);
      bVar10 = iVar3 + iVar7 == 1;
    }
    uVar5 = CONCAT71((int7)(uVar4 >> 8),bVar10);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 148aaf6f6 FUN_148aaf6f6 body=334 status=ok
// SIG undefined FUN_148aaf6f6(void)

longlong FUN_148aaf6f6(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  void *_Src;
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148aaf846(param_1,param_3,param_4,param_5);
  if (1 < *(int *)(param_1 + 0x10)) {
    cVar2 = FUN_144a791f8((void **)(param_1 + 8),L"errors.com.",0xb,1);
    if (cVar2 == '\0') {
      local_40 = (void *)0x0;
      local_38 = *(int *)(param_2 + 1);
      lVar3 = (longlong)local_38;
      _Src = (void *)*param_2;
      if (lVar3 == 0) {
        local_34 = 0;
      }
      else {
        FUN_1446dd670(&local_40,local_38,0);
        memcpy(local_40,_Src,lVar3 * 2);
      }
      FUN_1400020e8(&local_40,&DAT_149e0635c,1);
      iVar1 = *(int *)(param_1 + 0x10) + -1;
      if (*(int *)(param_1 + 0x10) == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_40,*(undefined8 *)(param_1 + 8),iVar1);
      if ((void **)(param_1 + 8) == &local_40) {
        if (local_40 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_1400020a8();
        }
        *(void **)(param_1 + 8) = local_40;
        *(int *)(param_1 + 0x10) = local_38;
        *(undefined4 *)(param_1 + 0x14) = local_34;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aaf846 FUN_148aaf846 body=173 status=ok
// SIG undefined FUN_148aaf846(void)

undefined4 *
FUN_148aaf846(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148aaf8f4 FUN_148aaf8f4 body=114 status=ok
// SIG undefined FUN_148aaf8f4(void)

void FUN_148aaf8f4(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 148aaf966 FUN_148aaf966 body=84 status=ok
// SIG undefined FUN_148aaf966(void)

void FUN_148aaf966(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14133665b(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148aaf9b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148aaf9ba FUN_148aaf9ba body=68 status=ok
// SIG undefined FUN_148aaf9ba(void)

undefined8 * FUN_148aaf9ba(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f5420;
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



// FUNCTION 148aafa02 FUN_148aafa02 body=81 status=ok
// SIG undefined FUN_148aafa02(void)

undefined8 FUN_148aafa02(longlong param_1)

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



// FUNCTION 148aafa5a FUN_148aafa5a body=89 status=ok
// SIG undefined FUN_148aafa5a(void)

bool FUN_148aafa5a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148aafaa5;
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
LAB_148aafaa5:
  return lVar6 == param_2;
}



// FUNCTION 148aafad0 FUN_148aafad0 body=118 status=ok
// SIG undefined FUN_148aafad0(void)

void FUN_148aafad0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5420;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148aafb46 FUN_148aafb46 body=156 status=ok
// SIG undefined FUN_148aafb46(void)

void FUN_148aafb46(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438ab0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5420;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aafbd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aafbe2 FUN_148aafbe2 body=105 status=ok
// SIG undefined FUN_148aafbe2(void)

void FUN_148aafbe2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148aafc39:
    (**(code **)(param_1 + 0x28))(0);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148aafc39;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148aafc35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148aafc4c FUN_148aafc4c body=88 status=ok
// SIG undefined FUN_148aafc4c(void)

void FUN_148aafc4c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148aafca4 FUN_148aafca4 body=61 status=ok
// SIG undefined FUN_148aafca4(void)

void FUN_148aafca4(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_14133606c(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148aafcf0 FUN_148aafcf0 body=31 status=ok
// SIG undefined FUN_148aafcf0(void)

undefined8 FUN_148aafcf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aafd2c FUN_148aafd2c body=93 status=ok
// SIG undefined FUN_148aafd2c(void)

void FUN_148aafd2c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f55b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aafd8a FUN_148aafd8a body=126 status=ok
// SIG undefined FUN_148aafd8a(void)

void FUN_148aafd8a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f55b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aafdf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aafe08 FUN_148aafe08 body=21 status=ok
// SIG undefined FUN_148aafe08(void)

undefined8 FUN_148aafe08(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148aafe22 FUN_148aafe22 body=145 status=ok
// SIG undefined FUN_148aafe22(void)

void FUN_148aafe22(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    iVar3 = 1;
    lVar2 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar2) == *param_2) {
        if (iVar3 == 0) {
          return;
        }
        lVar2 = (lVar4 >> 0x20) * 0x10;
        _Dst = (void *)(lVar1 + lVar2);
        FUN_14127b1cd(_Dst,1);
        memmove(_Dst,(void *)(lVar1 + lVar2 + 0x10),(longlong)((int)param_1[1] - iVar3) << 4);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 148aafeb6 FUN_148aafeb6 body=73 status=ok
// SIG undefined FUN_148aafeb6(void)

undefined8 * FUN_148aafeb6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f5950;
  FUN_1449db362(param_1 + 4);
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 148aaff1e FUN_148aaff1e body=32 status=ok
// SIG undefined FUN_148aaff1e(void)

undefined8 FUN_148aaff1e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxSocialPartyTask_Leave");
  return param_2;
}



// FUNCTION 148aaff3e FUN_148aaff3e body=31 status=ok
// SIG undefined FUN_148aaff3e(void)

undefined8 FUN_148aaff3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148aaff86 FUN_148aaff86 body=93 status=ok
// SIG undefined FUN_148aaff86(void)

void FUN_148aaff86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5a20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f59b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aaffe4 FUN_148aaffe4 body=126 status=ok
// SIG undefined FUN_148aaffe4(void)

void FUN_148aaffe4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f5a20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f59b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab0053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab0072 FUN_148ab0072 body=38 status=ok
// SIG undefined FUN_148ab0072(void)

undefined8 FUN_148ab0072(undefined8 param_1,int param_2)

{
  FUN_145b07228();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab0098 FUN_148ab0098 body=124 status=ok
// SIG undefined FUN_148ab0098(void)

undefined8 FUN_148ab0098(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))(*(longlong **)(param_1 + 0x28),&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FGbxSocialPartyTask_QueryUserInfo(%s)",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148ab0116 FUN_148ab0116 body=380 status=ok
// SIG undefined FUN_148ab0116(void)

longlong * FUN_148ab0116(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_148ab0222:
    *puVar3 = &PTR_LAB_14b438b20;
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
    *puVar3 = &PTR_FUN_14b4f5bc0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148ab0222;
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
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b438b20;
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
    *puVar3 = &PTR_FUN_14b4f5bc0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
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



// FUNCTION 148ab0292 FUN_148ab0292 body=68 status=ok
// SIG undefined FUN_148ab0292(void)

undefined8 * FUN_148ab0292(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f5ae0;
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



// FUNCTION 148ab02da FUN_148ab02da body=81 status=ok
// SIG undefined FUN_148ab02da(void)

undefined8 FUN_148ab02da(longlong param_1)

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



// FUNCTION 148ab0330 FUN_148ab0330 body=89 status=ok
// SIG undefined FUN_148ab0330(void)

bool FUN_148ab0330(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ab037b;
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
LAB_148ab037b:
  return lVar6 == param_2;
}



// FUNCTION 148ab03a6 FUN_148ab03a6 body=118 status=ok
// SIG undefined FUN_148ab03a6(void)

void FUN_148ab03a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5ae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab041c FUN_148ab041c body=156 status=ok
// SIG undefined FUN_148ab041c(void)

void FUN_148ab041c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5ae0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab04a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab04f4 FUN_148ab04f4 body=68 status=ok
// SIG undefined FUN_148ab04f4(void)

undefined8 * FUN_148ab04f4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f5b50;
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



// FUNCTION 148ab053c FUN_148ab053c body=81 status=ok
// SIG undefined FUN_148ab053c(void)

undefined8 FUN_148ab053c(longlong param_1)

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



// FUNCTION 148ab0592 FUN_148ab0592 body=89 status=ok
// SIG undefined FUN_148ab0592(void)

bool FUN_148ab0592(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ab05dd;
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
LAB_148ab05dd:
  return lVar6 == param_2;
}



// FUNCTION 148ab0608 FUN_148ab0608 body=118 status=ok
// SIG undefined FUN_148ab0608(void)

void FUN_148ab0608(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5b50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab067e FUN_148ab067e body=156 status=ok
// SIG undefined FUN_148ab067e(void)

void FUN_148ab067e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5b50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab070a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab0754 FUN_148ab0754 body=64 status=ok
// SIG undefined FUN_148ab0754(void)

undefined8 * FUN_148ab0754(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f5bc0;
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



// FUNCTION 148ab0798 FUN_148ab0798 body=81 status=ok
// SIG undefined FUN_148ab0798(void)

undefined8 FUN_148ab0798(longlong param_1)

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



// FUNCTION 148ab07ee FUN_148ab07ee body=89 status=ok
// SIG undefined FUN_148ab07ee(void)

bool FUN_148ab07ee(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ab0839;
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
LAB_148ab0839:
  return lVar6 == param_2;
}



// FUNCTION 148ab0864 FUN_148ab0864 body=118 status=ok
// SIG undefined FUN_148ab0864(void)

void FUN_148ab0864(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438b20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5bc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab08da FUN_148ab08da body=118 status=ok
// SIG undefined FUN_148ab08da(void)

void FUN_148ab08da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438b20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5bc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab0950 FUN_148ab0950 body=156 status=ok
// SIG undefined FUN_148ab0950(void)

void FUN_148ab0950(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438b20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5bc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab09dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab0a28 FUN_148ab0a28 body=31 status=ok
// SIG undefined FUN_148ab0a28(void)

undefined8 FUN_148ab0a28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab0a60 FUN_148ab0a60 body=93 status=ok
// SIG undefined FUN_148ab0a60(void)

void FUN_148ab0a60(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f5c80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab0abe FUN_148ab0abe body=126 status=ok
// SIG undefined FUN_148ab0abe(void)

void FUN_148ab0abe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5c80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab0b2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab0b3c FUN_148ab0b3c body=21 status=ok
// SIG undefined FUN_148ab0b3c(void)

undefined8 FUN_148ab0b3c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ab0b60 FUN_148ab0b60 body=38 status=ok
// SIG undefined FUN_148ab0b60(void)

undefined8 FUN_148ab0b60(undefined8 param_1,int param_2)

{
  FUN_145e065b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab0bb0 FUN_148ab0bb0 body=51 status=ok
// SIG undefined FUN_148ab0bb0(void)

undefined8 FUN_148ab0bb0(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x28);
  }
  FUN_140002266(param_2,L"FGbxSocialPartyTask_FindGameplaySession(%s)",puVar1);
  return param_2;
}



// FUNCTION 148ab0be8 FUN_148ab0be8 body=81 status=ok
// SIG undefined FUN_148ab0be8(void)

undefined8 FUN_148ab0be8(longlong param_1)

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



// FUNCTION 148ab0c3e FUN_148ab0c3e body=89 status=ok
// SIG undefined FUN_148ab0c3e(void)

bool FUN_148ab0c3e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ab0c89;
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
LAB_148ab0c89:
  return lVar6 == param_2;
}



// FUNCTION 148ab0cb4 FUN_148ab0cb4 body=118 status=ok
// SIG undefined FUN_148ab0cb4(void)

void FUN_148ab0cb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4ea0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5e20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab0d2a FUN_148ab0d2a body=156 status=ok
// SIG undefined FUN_148ab0d2a(void)

void FUN_148ab0d2a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4ea0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5e20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab0db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab0dc6 FUN_148ab0dc6 body=56 status=ok
// SIG undefined FUN_148ab0dc6(void)

void FUN_148ab0dc6(longlong param_1,undefined8 param_2,undefined1 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_1461f4a06(lVar1 + 0x50,param_4);
  *(undefined4 *)(lVar1 + 0x168) = *(undefined4 *)(param_4 + 0x118);
  *(undefined1 *)(lVar1 + 0x48) = param_3;
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}



// FUNCTION 148ab0dfe FUN_148ab0dfe body=132 status=ok
// SIG undefined FUN_148ab0dfe(void)

undefined8 *
FUN_148ab0dfe(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_14b4f5f50;
  param_1[1] = *param_4;
  lVar1 = param_4[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
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
  param_1[3] = lVar2;
  *param_1 = &PTR_FUN_14b4f5ee0;
  param_1[4] = 0;
  FUN_14485c47a(param_1 + 4);
  param_1[5] = param_3;
  return param_1;
}



// FUNCTION 148ab0e82 FUN_148ab0e82 body=83 status=ok
// SIG undefined FUN_148ab0e82(void)

undefined8 * FUN_148ab0e82(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b4f5f50;
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



// FUNCTION 148ab0ef0 FUN_148ab0ef0 body=29 status=ok
// SIG undefined FUN_148ab0ef0(void)

bool FUN_148ab0ef0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 148ab0f0e FUN_148ab0f0e body=26 status=ok
// SIG undefined FUN_148ab0f0e(void)

bool FUN_148ab0f0e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 148ab0f28 FUN_148ab0f28 body=24 status=ok
// SIG undefined FUN_148ab0f28(void)

bool FUN_148ab0f28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 148ab0f4c FUN_148ab0f4c body=118 status=ok
// SIG undefined FUN_148ab0f4c(void)

void FUN_148ab0f4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5f50;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b4f5ee0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  return;
}



// FUNCTION 148ab0fc2 FUN_148ab0fc2 body=118 status=ok
// SIG undefined FUN_148ab0fc2(void)

void FUN_148ab0fc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5f50;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b4f5ee0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  return;
}



// FUNCTION 148ab1038 FUN_148ab1038 body=156 status=ok
// SIG undefined FUN_148ab1038(void)

void FUN_148ab1038(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f5f50;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5ee0;
  DVar3 = *(DWORD *)(param_1 + 0x24);
  DVar4 = *(DWORD *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar3;
  p_Var1->Flags = DVar4;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar5;
  p_Var1->SpareWORD = (short)((uint)uVar5 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab10c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab10d4 FUN_148ab10d4 body=108 status=ok
// SIG undefined FUN_148ab10d4(void)

void FUN_148ab10d4(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14479d2ce(param_1 + 0x20);
  pcVar1 = *(code **)(param_1 + 0x28);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)(uVar2,param_2,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab1142 FUN_148ab1142 body=185 status=ok
// SIG undefined FUN_148ab1142(void)

bool FUN_148ab1142(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x20,&local_38,0);
    lVar4 = local_38;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x28);
    local_38 = *(longlong *)(param_1 + 8);
    local_30 = *(longlong *)(param_1 + 0x10);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (*pcVar1)(lVar3,param_2,&local_38);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab11fe FUN_148ab11fe body=132 status=ok
// SIG undefined FUN_148ab11fe(void)

undefined8 *
FUN_148ab11fe(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_14b4f6030;
  param_1[1] = *param_4;
  lVar1 = param_4[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
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
  param_1[3] = lVar2;
  *param_1 = &PTR_FUN_14b4f5fc0;
  param_1[4] = 0;
  FUN_14485c47a(param_1 + 4);
  param_1[5] = param_3;
  return param_1;
}



// FUNCTION 148ab1282 FUN_148ab1282 body=83 status=ok
// SIG undefined FUN_148ab1282(void)

undefined8 * FUN_148ab1282(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b4f6030;
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



// FUNCTION 148ab12f0 FUN_148ab12f0 body=29 status=ok
// SIG undefined FUN_148ab12f0(void)

bool FUN_148ab12f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 148ab130e FUN_148ab130e body=26 status=ok
// SIG undefined FUN_148ab130e(void)

bool FUN_148ab130e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 148ab1328 FUN_148ab1328 body=24 status=ok
// SIG undefined FUN_148ab1328(void)

bool FUN_148ab1328(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 148ab134c FUN_148ab134c body=118 status=ok
// SIG undefined FUN_148ab134c(void)

void FUN_148ab134c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6030;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b4f5fc0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  return;
}



// FUNCTION 148ab13c2 FUN_148ab13c2 body=118 status=ok
// SIG undefined FUN_148ab13c2(void)

void FUN_148ab13c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6030;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b4f5fc0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  return;
}



// FUNCTION 148ab1438 FUN_148ab1438 body=156 status=ok
// SIG undefined FUN_148ab1438(void)

void FUN_148ab1438(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6030;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5fc0;
  DVar3 = *(DWORD *)(param_1 + 0x24);
  DVar4 = *(DWORD *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar3;
  p_Var1->Flags = DVar4;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar5;
  p_Var1->SpareWORD = (short)((uint)uVar5 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab14c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab14d4 FUN_148ab14d4 body=108 status=ok
// SIG undefined FUN_148ab14d4(void)

void FUN_148ab14d4(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14479d2ce(param_1 + 0x20);
  pcVar1 = *(code **)(param_1 + 0x28);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)(uVar2,param_2,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab1542 FUN_148ab1542 body=185 status=ok
// SIG undefined FUN_148ab1542(void)

bool FUN_148ab1542(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x20,&local_38,0);
    lVar4 = local_38;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x28);
    local_38 = *(longlong *)(param_1 + 8);
    local_30 = *(longlong *)(param_1 + 0x10);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (*pcVar1)(lVar3,param_2,&local_38);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab15fe FUN_148ab15fe body=31 status=ok
// SIG undefined FUN_148ab15fe(void)

undefined8 FUN_148ab15fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab1638 FUN_148ab1638 body=29 status=ok
// SIG undefined FUN_148ab1638(void)

bool FUN_148ab1638(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ab1656 FUN_148ab1656 body=26 status=ok
// SIG undefined FUN_148ab1656(void)

bool FUN_148ab1656(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ab167c FUN_148ab167c body=93 status=ok
// SIG undefined FUN_148ab167c(void)

void FUN_148ab167c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6110;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4f60a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab16da FUN_148ab16da body=126 status=ok
// SIG undefined FUN_148ab16da(void)

void FUN_148ab16da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6110;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f60a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab1749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab1758 FUN_148ab1758 body=64 status=ok
// SIG undefined FUN_148ab1758(void)

void FUN_148ab1758(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 148ab179a FUN_148ab179a body=9 status=ok
// SIG undefined FUN_148ab179a(void)

void FUN_148ab179a(longlong param_1)

{
  FUN_148ab17c2(param_1 + 0x10);
  return;
}



// FUNCTION 148ab17a4 FUN_148ab17a4 body=29 status=ok
// SIG undefined FUN_148ab17a4(void)

undefined8 FUN_148ab17a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab17c2 FUN_148ab17c2 body=230 status=ok
// SIG undefined FUN_148ab17c2(void)

void FUN_148ab17c2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_148ab18a8(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_148ab1a2a(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_148ab1bee(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x30);
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab189c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148ab18a8 FUN_148ab18a8 body=52 status=ok
// SIG undefined FUN_148ab18a8(void)

void FUN_148ab18a8(longlong *param_1)

{
  FUN_148ab18dc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ab18dc FUN_148ab18dc body=332 status=ok
// SIG undefined FUN_148ab18dc(void)

void FUN_148ab18dc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar3 = (longlong)iStack_5c;
      lVar2 = *local_78;
      lVar4 = 0x40;
      do {
        if (*(longlong *)(lVar3 * 0x58 + lVar2 + lVar4) != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab1a2a FUN_148ab1a2a body=52 status=ok
// SIG undefined FUN_148ab1a2a(void)

void FUN_148ab1a2a(longlong *param_1)

{
  FUN_148ab1a5e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ab1a5e FUN_148ab1a5e body=303 status=ok
// SIG undefined FUN_148ab1a5e(void)

void FUN_148ab1a5e(longlong *param_1)

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
      FUN_148ab1b8e((longlong)iStack_4c * 0x68 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab1b8e FUN_148ab1b8e body=95 status=ok
// SIG undefined FUN_148ab1b8e(void)

void FUN_148ab1b8e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148ab1be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ab1bee FUN_148ab1bee body=52 status=ok
// SIG undefined FUN_148ab1bee(void)

void FUN_148ab1bee(longlong *param_1)

{
  FUN_148ab1c22();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ab1c22 FUN_148ab1c22 body=343 status=ok
// SIG undefined FUN_148ab1c22(void)

void FUN_148ab1c22(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab1d7a FUN_148ab1d7a body=164 status=ok
// SIG undefined FUN_148ab1d7a(void)

void FUN_148ab1d7a(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_148ab1df2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_148ab1df2;
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
LAB_148ab1df2:
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
                    /* WARNING: Could not recover jumptable at 0x000148ab1e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ab1e1e FUN_148ab1e1e body=370 status=ok
// SIG undefined FUN_148ab1e1e(void)

undefined4 *
FUN_148ab1e1e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148ab1f92(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_48 = uVar9;
  local_48[1] = *puVar1;
  lVar7 = puVar1[1];
  local_48[2] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    uVar9 = *local_48;
  }
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  local_68 = param_4;
  cVar3 = FUN_148ab2078(param_1,uVar8,local_48,&local_54);
  uVar2 = local_54;
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
      *(uint *)((longlong)local_48 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_148ab21c2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab1f92 FUN_148ab1f92 body=229 status=ok
// SIG undefined FUN_148ab1f92(void)

int * FUN_148ab1f92(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 148ab2078 FUN_148ab2078 body=215 status=ok
// SIG undefined FUN_148ab2078(void)

void FUN_148ab2078(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
          if (plVar9 != (longlong *)0x0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_148ab2150(param_1,*param_4);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_148ab20ee;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_148ab20ee:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 148ab2150 FUN_148ab2150 body=114 status=ok
// SIG undefined FUN_148ab2150(void)

void FUN_148ab2150(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 148ab21c2 FUN_148ab21c2 body=476 status=ok
// SIG undefined FUN_148ab21c2(void)

void FUN_148ab21c2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 148ab23a0 FUN_148ab23a0 body=64 status=ok
// SIG undefined FUN_148ab23a0(void)

undefined8 * FUN_148ab23a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f61a0;
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



// FUNCTION 148ab23e4 FUN_148ab23e4 body=81 status=ok
// SIG undefined FUN_148ab23e4(void)

undefined8 FUN_148ab23e4(longlong param_1)

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



// FUNCTION 148ab243c FUN_148ab243c body=89 status=ok
// SIG undefined FUN_148ab243c(void)

bool FUN_148ab243c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ab2487;
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
LAB_148ab2487:
  return lVar6 == param_2;
}



// FUNCTION 148ab24be FUN_148ab24be body=118 status=ok
// SIG undefined FUN_148ab24be(void)

void FUN_148ab24be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f61a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab2534 FUN_148ab2534 body=118 status=ok
// SIG undefined FUN_148ab2534(void)

void FUN_148ab2534(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f61a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab25aa FUN_148ab25aa body=156 status=ok
// SIG undefined FUN_148ab25aa(void)

void FUN_148ab25aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f7800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f61a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab2636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab2646 FUN_148ab2646 body=98 status=ok
// SIG undefined FUN_148ab2646(void)

void FUN_148ab2646(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148ab268f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ab269e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148ab26a8 FUN_148ab26a8 body=94 status=ok
// SIG undefined FUN_148ab26a8(void)

ulonglong FUN_148ab26a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148ab26fb:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148ab26fb;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 148ab2708 FUN_148ab2708 body=64 status=ok
// SIG undefined FUN_148ab2708(void)

undefined8 * FUN_148ab2708(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f6210;
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



// FUNCTION 148ab274c FUN_148ab274c body=81 status=ok
// SIG undefined FUN_148ab274c(void)

undefined8 FUN_148ab274c(longlong param_1)

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



// FUNCTION 148ab27a4 FUN_148ab27a4 body=89 status=ok
// SIG undefined FUN_148ab27a4(void)

bool FUN_148ab27a4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ab27ef;
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
LAB_148ab27ef:
  return lVar6 == param_2;
}



// FUNCTION 148ab2826 FUN_148ab2826 body=118 status=ok
// SIG undefined FUN_148ab2826(void)

void FUN_148ab2826(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab289c FUN_148ab289c body=118 status=ok
// SIG undefined FUN_148ab289c(void)

void FUN_148ab289c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ab2912 FUN_148ab2912 body=156 status=ok
// SIG undefined FUN_148ab2912(void)

void FUN_148ab2912(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6280;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6210;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab299e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab29ae FUN_148ab29ae body=98 status=ok
// SIG undefined FUN_148ab29ae(void)

void FUN_148ab29ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148ab29f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ab2a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148ab2a10 FUN_148ab2a10 body=94 status=ok
// SIG undefined FUN_148ab2a10(void)

ulonglong FUN_148ab2a10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148ab2a63:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148ab2a63;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 148ab2a70 FUN_148ab2a70 body=132 status=ok
// SIG undefined FUN_148ab2a70(void)

void FUN_148ab2a70(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_148ab2af4(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 148ab2af4 FUN_148ab2af4 body=90 status=ok
// SIG undefined FUN_148ab2af4(void)

void FUN_148ab2af4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_148ab2b4e();
  return;
}



// FUNCTION 148ab2b4e FUN_148ab2b4e body=78 status=ok
// SIG undefined FUN_148ab2b4e(void)

void FUN_148ab2b4e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_148ab2150(param_1,param_2);
  return;
}



// FUNCTION 148ab2baa FUN_148ab2baa body=193 status=ok
// SIG undefined FUN_148ab2baa(void)

void FUN_148ab2baa(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148ab2c41;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148ab2c41:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148ab2c6c FUN_148ab2c6c body=133 status=ok
// SIG undefined FUN_148ab2c6c(void)

longlong FUN_148ab2c6c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148ab2cf2();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_148ab2ca5;
  }
  local_30 = param_3;
  FUN_148ab2dae(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_148ab2ca5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab2cf2 FUN_148ab2cf2 body=188 status=ok
// SIG undefined FUN_148ab2cf2(void)

int FUN_148ab2cf2(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar7 = *param_1;
      do {
        lVar8 = (longlong)iVar3 * 0x68;
        puVar4 = *(undefined8 **)(lVar7 + lVar8);
        plVar6 = *(longlong **)(lVar7 + 8 + lVar8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_3) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
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
        if (cVar5 != '\0') {
          return iVar3;
        }
        lVar7 = *param_1;
        iVar3 = *(int *)(lVar7 + 0x60 + lVar8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 148ab2dae FUN_148ab2dae body=272 status=ok
// SIG undefined FUN_148ab2dae(void)

undefined4 * FUN_148ab2dae(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148ab2ec0(param_1,local_48);
  FUN_148ab3090(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_148ab2fa2(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148ab31ba(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab2ec0 FUN_148ab2ec0 body=226 status=ok
// SIG undefined FUN_148ab2ec0(void)

int * FUN_148ab2ec0(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 148ab2fa2 FUN_148ab2fa2 body=237 status=ok
// SIG undefined FUN_148ab2fa2(void)

undefined8 FUN_148ab2fa2(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  void *_Dst;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    local_38 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      iVar4 = FUN_148ab2cf2(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      iVar4 = FUN_148ab2cf2(param_1);
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
    }
    if (iVar4 != -1) {
      _Dst = (void *)((longlong)iVar4 * 0x68 + *param_1);
      FUN_148ab1b8e(_Dst);
      memmove(_Dst,param_3,0x60);
      FUN_148ab3146(param_1,*param_4);
      *param_4 = iVar4;
      uVar5 = 1;
      goto LAB_148ab2fc8;
    }
  }
  uVar5 = 0;
LAB_148ab2fc8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab3090 FUN_148ab3090 body=180 status=ok
// SIG undefined FUN_148ab3090(void)

undefined8 * FUN_148ab3090(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_2 = *puVar1;
  lVar2 = puVar1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_144a87124(param_2 + 2,&local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab3146 FUN_148ab3146 body=116 status=ok
// SIG undefined FUN_148ab3146(void)

void FUN_148ab3146(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148ab31ba FUN_148ab31ba body=489 status=ok
// SIG undefined FUN_148ab31ba(void)

void FUN_148ab31ba(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x68;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 100) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x60) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ab33a4 FUN_148ab33a4 body=272 status=ok
// SIG undefined FUN_148ab33a4(void)

void FUN_148ab33a4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      do {
        lVar3 = *param_1;
        lVar9 = (longlong)iVar6 * 0x68;
        puVar4 = *(undefined8 **)(lVar3 + lVar9);
        plVar7 = *(longlong **)(lVar3 + 8 + lVar9);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_2) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
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
        if (cVar5 != '\0') {
          FUN_148ab34b4(param_1,*puVar10);
          break;
        }
        iVar6 = *(int *)(lVar3 + lVar9 + 0x60);
        puVar10 = (undefined4 *)(lVar3 + lVar9 + 0x60);
      } while (iVar6 != -1);
    }
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
                    /* WARNING: Could not recover jumptable at 0x000148ab33ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ab34b4 FUN_148ab34b4 body=113 status=ok
// SIG undefined FUN_148ab34b4(void)

void FUN_148ab34b4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x68;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 100 + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x60 + lVar6 * 0x68);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x68 + 0x60);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x60);
  FUN_148ab1b8e(lVar3 + *param_1);
  FUN_148ab3146(param_1,param_2);
  return;
}



// FUNCTION 148ab3526 FUN_148ab3526 body=243 status=ok
// SIG undefined FUN_148ab3526(void)

undefined8 * FUN_148ab3526(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb71580,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14cb71588;
      lVar6 = (longlong)(int)DAT_14cb71588;
      DAT_14cb71588 = DAT_14cb71588 + 1;
      if (DAT_14cb7158c < DAT_14cb71588) {
        FUN_1447a71f6(&DAT_14cb71580,uVar3);
      }
      lVar2 = DAT_14cb71580;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb71580 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab3628 FUN_148ab3628 body=31 status=ok
// SIG undefined FUN_148ab3628(void)

undefined8 FUN_148ab3628(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab3662 FUN_148ab3662 body=29 status=ok
// SIG undefined FUN_148ab3662(void)

bool FUN_148ab3662(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ab3680 FUN_148ab3680 body=26 status=ok
// SIG undefined FUN_148ab3680(void)

bool FUN_148ab3680(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ab369a FUN_148ab369a body=93 status=ok
// SIG undefined FUN_148ab369a(void)

void FUN_148ab369a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f6590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab36f8 FUN_148ab36f8 body=93 status=ok
// SIG undefined FUN_148ab36f8(void)

void FUN_148ab36f8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f6590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab3756 FUN_148ab3756 body=126 status=ok
// SIG undefined FUN_148ab3756(void)

void FUN_148ab3756(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6590;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab37c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab37d4 FUN_148ab37d4 body=35 status=ok
// SIG undefined FUN_148ab37d4(void)

void FUN_148ab37d4(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ab37f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148ab37f8 FUN_148ab37f8 body=31 status=ok
// SIG undefined FUN_148ab37f8(void)

undefined8 FUN_148ab37f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab3832 FUN_148ab3832 body=29 status=ok
// SIG undefined FUN_148ab3832(void)

bool FUN_148ab3832(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ab3850 FUN_148ab3850 body=26 status=ok
// SIG undefined FUN_148ab3850(void)

bool FUN_148ab3850(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ab386a FUN_148ab386a body=93 status=ok
// SIG undefined FUN_148ab386a(void)

void FUN_148ab386a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f78e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab38c8 FUN_148ab38c8 body=93 status=ok
// SIG undefined FUN_148ab38c8(void)

void FUN_148ab38c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f78e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab3926 FUN_148ab3926 body=126 status=ok
// SIG undefined FUN_148ab3926(void)

void FUN_148ab3926(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f78e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6600;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab3995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab39a4 FUN_148ab39a4 body=48 status=ok
// SIG undefined FUN_148ab39a4(void)

void FUN_148ab39a4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ab39d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148ab39d6 FUN_148ab39d6 body=162 status=ok
// SIG undefined FUN_148ab39d6(void)

void FUN_148ab39d6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148ab3a15;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148ab3a15;
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
LAB_148ab3a15:
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
                    /* WARNING: Could not recover jumptable at 0x000148ab3a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ab3a78 FUN_148ab3a78 body=68 status=ok
// SIG undefined FUN_148ab3a78(void)

void FUN_148ab3a78(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1458eb6b2(param_1);
  return;
}



// FUNCTION 148ab3abc FUN_148ab3abc body=31 status=ok
// SIG undefined FUN_148ab3abc(void)

undefined8 FUN_148ab3abc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab3af6 FUN_148ab3af6 body=29 status=ok
// SIG undefined FUN_148ab3af6(void)

bool FUN_148ab3af6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ab3b14 FUN_148ab3b14 body=93 status=ok
// SIG undefined FUN_148ab3b14(void)

void FUN_148ab3b14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab3b72 FUN_148ab3b72 body=126 status=ok
// SIG undefined FUN_148ab3b72(void)

void FUN_148ab3b72(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b438ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6700;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab3be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab3bf0 FUN_148ab3bf0 body=46 status=ok
// SIG undefined FUN_148ab3bf0(void)

void FUN_148ab3bf0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ab3c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148ab3c1e FUN_148ab3c1e body=159 status=ok
// SIG undefined FUN_148ab3c1e(void)

void FUN_148ab3c1e(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_148ab3c5b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_148ab3c5b;
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
LAB_148ab3c5b:
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
                    /* WARNING: Could not recover jumptable at 0x000148ab3cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ab3cbe FUN_148ab3cbe body=31 status=ok
// SIG undefined FUN_148ab3cbe(void)

undefined8 FUN_148ab3cbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab3cf8 FUN_148ab3cf8 body=29 status=ok
// SIG undefined FUN_148ab3cf8(void)

bool FUN_148ab3cf8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ab3d16 FUN_148ab3d16 body=26 status=ok
// SIG undefined FUN_148ab3d16(void)

bool FUN_148ab3d16(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ab3d30 FUN_148ab3d30 body=24 status=ok
// SIG undefined FUN_148ab3d30(void)

bool FUN_148ab3d30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ab3d48 FUN_148ab3d48 body=93 status=ok
// SIG undefined FUN_148ab3d48(void)

void FUN_148ab3d48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f67b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab3da6 FUN_148ab3da6 body=93 status=ok
// SIG undefined FUN_148ab3da6(void)

void FUN_148ab3da6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f67b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ab3e04 FUN_148ab3e04 body=126 status=ok
// SIG undefined FUN_148ab3e04(void)

void FUN_148ab3e04(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f67b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ab3e73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab3e82 FUN_148ab3e82 body=38 status=ok
// SIG undefined FUN_148ab3e82(void)

void FUN_148ab3e82(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ab3ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148ab3ea8 FUN_148ab3ea8 body=88 status=ok
// SIG undefined FUN_148ab3ea8(void)

void FUN_148ab3ea8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148ab3f00 FUN_148ab3f00 body=61 status=ok
// SIG undefined FUN_148ab3f00(void)

void FUN_148ab3f00(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_140146ccc(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148ab3f3e FUN_148ab3f3e body=48 status=ok
// SIG undefined FUN_148ab3f3e(void)

void FUN_148ab3f3e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148ab3f88 FUN_148ab3f88 body=29 status=ok
// SIG undefined FUN_148ab3f88(void)

bool FUN_148ab3f88(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 148ab3fa6 FUN_148ab3fa6 body=26 status=ok
// SIG undefined FUN_148ab3fa6(void)

bool FUN_148ab3fa6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 148ab3fc0 FUN_148ab3fc0 body=24 status=ok
// SIG undefined FUN_148ab3fc0(void)

bool FUN_148ab3fc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 != 0;
}



// FUNCTION 148ab3fe4 FUN_148ab3fe4 body=127 status=ok
// SIG undefined FUN_148ab3fe4(void)

void FUN_148ab3fe4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6890;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_140146ccc(puVar1 + 2,param_1 + 0x10);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b4f6820;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  return;
}



// FUNCTION 148ab4064 FUN_148ab4064 body=127 status=ok
// SIG undefined FUN_148ab4064(void)

void FUN_148ab4064(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6890;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_140146ccc(puVar1 + 2,param_1 + 0x10);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b4f6820;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  return;
}



// FUNCTION 148ab40e4 FUN_148ab40e4 body=163 status=ok
// SIG undefined FUN_148ab40e4(void)

void FUN_148ab40e4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f6890;
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = 0;
  FUN_140146ccc(&p_Var1->ProcessLocksList,param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f6820;
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
                    /* WARNING: Could not recover jumptable at 0x000148ab4177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ab4188 FUN_148ab4188 body=142 status=ok
// SIG undefined FUN_148ab4188(void)

void FUN_148ab4188(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14479d2ce(param_1 + 0x28);
  pcVar1 = *(code **)(param_1 + 0x30);
  local_48 = 0;
  local_40 = 0;
  FUN_140146ccc(&local_48,param_1 + 0x10);
  local_58 = &local_48;
  (*pcVar1)(uVar2,param_2,param_3,*(undefined4 *)(param_1 + 8));
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ab421a FUN_148ab421a body=132 status=ok
// SIG undefined FUN_148ab421a(void)

void FUN_148ab421a(longlong param_1,int param_2)

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



// FUNCTION 148ab42a0 FUN_148ab42a0 body=203 status=ok
// SIG undefined FUN_148ab42a0(void)

int FUN_148ab42a0(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_148ab42ea:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_148ab4360;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_148ab4360;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_148ab4351;
    }
  }
  return -1;
LAB_148ab4360:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_148ab4351:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_148ab42ea;
}



// FUNCTION 148ab436c FUN_148ab436c body=31 status=ok
// SIG undefined FUN_148ab436c(void)

undefined8 FUN_148ab436c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ab43a6 FUN_148ab43a6 body=29 status=ok
// SIG undefined FUN_148ab43a6(void)

bool FUN_148ab43a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ab43c4 FUN_148ab43c4 body=26 status=ok
// SIG undefined FUN_148ab43c4(void)

bool FUN_148ab43c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}


