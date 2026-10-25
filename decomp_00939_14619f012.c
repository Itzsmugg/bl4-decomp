// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14619f012 FUN_14619f012 body=85 status=ok
// SIG undefined FUN_14619f012(void)

undefined8 * FUN_14619f012(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 4;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_145741460(param_1,uVar2 & 0xffffffff,0);
    FUN_1457414c2(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 14619f068 FUN_14619f068 body=103 status=ok
// SIG undefined FUN_14619f068(void)

ulonglong FUN_14619f068(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14619f0b2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14619f0b2;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 14619f0d5 FUN_14619f0d5 body=466 status=ok
// SIG undefined FUN_14619f0d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14619f0d5(void)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_30,L"GbxGameSettingTags");
  FUN_1446f470e(&local_40,L"GbxGameSettings.PersistentStorage.EngineConfig",1);
  FUN_1413e432a(lVar1,&local_38,local_40,local_30);
  DAT_14cb9a800 = local_38;
  FUN_1446f470e(&local_48,L"GbxGameSettings.PersistentStorage.GameConfig",1);
  FUN_1413e432a(lVar1,&local_38,local_48,local_30);
  DAT_14cb9a808 = local_38;
  FUN_1446f470e(&local_50,L"GbxGameSettings.PersistentStorage.InputConfig",1);
  FUN_1413e432a(lVar1,&local_38,local_50,local_30);
  DAT_14cb9a810 = local_38;
  FUN_1446f470e(&local_58,L"GbxGameSettings.PersistentStorage.GameUserSettings",1);
  FUN_1413e432a(lVar1,&local_38,local_58,local_30);
  DAT_14cb9a818 = local_38;
  FUN_1446f470e(&local_60,L"GbxGameSettings.PersistentStorage.Vault",1);
  FUN_1413e432a(lVar1,&local_38,local_60,local_30);
  DAT_14cb9a828 = local_38;
  FUN_1446f470e(&local_68,L"GbxGameSettings.Scalar.EditNormalized",1);
  FUN_1413e432a(lVar1,&local_38,local_68,local_30);
  _DAT_14cb9a820 = local_38;
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619f2a8 FUN_14619f2a8 body=103 status=ok
// SIG undefined FUN_14619f2a8(void)

ulonglong FUN_14619f2a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14619f2f2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14619f2f2;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 14619f31e FUN_14619f31e body=238 status=ok
// SIG undefined FUN_14619f31e(void)

void FUN_14619f31e(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(int *)(param_1 + 0x1e0);
  if (0 < (longlong)uVar5) {
    lVar4 = uVar5 * 0x70;
    do {
      lVar4 = lVar4 + -0x70;
      if (*(char *)(*(longlong *)(param_1 + 0x1d8) + lVar4) == '\x01') {
        FUN_148dcd50e((longlong *)(param_1 + 0x1d8));
      }
      bVar1 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x1f0) + lVar3) == '\x01') {
        lVar4 = *(longlong *)(param_1 + 0x1f0) - lVar4;
        if (lVar4 == 0) {
          return;
        }
        plVar2 = (longlong *)FUN_14479d2ce(lVar4 + 8);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        if ((*(uint *)(plVar2 + 1) >> 0x1e & 1) != 0) {
          return;
        }
        if (plVar2[0x139b] != 0) {
          FUN_148baa308(plVar2[0x139b],param_2);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00014619f409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x5c8))(plVar2,0,*(code **)(*plVar2 + 0x5c8));
        return;
      }
      lVar4 = lVar4 + -0x38;
      lVar3 = lVar3 + 0x38;
    } while ((longlong)*(int *)(param_1 + 0x1f8) * -0x38 - lVar4 != 0);
  }
  return;
}



// FUNCTION 14619f40c FUN_14619f40c body=40 status=ok
// SIG undefined FUN_14619f40c(void)

undefined8 FUN_14619f40c(undefined8 param_1,int param_2)

{
  FUN_14619f434();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14619f434 FUN_14619f434 body=432 status=ok
// SIG undefined FUN_14619f434(void)

void FUN_14619f434(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba2a750;
  param_1[6] = &PTR_FUN_14ba2aa60;
  param_1[7] = &PTR_FUN_14ba2aa70;
  param_1[8] = &PTR_FUN_14ba2aaa0;
  plVar3 = (longlong *)param_1[0x8d];
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
  plVar3 = (longlong *)param_1[0x8b];
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
  plVar3 = (longlong *)param_1[0x88];
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
  plVar3 = (longlong *)param_1[0x86];
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
  FUN_14008cd94(param_1 + 0x4c);
  FUN_14008cd94(param_1 + 0x28);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x19];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14619f5e4 FUN_14619f5e4 body=25 status=ok
// SIG undefined FUN_14619f5e4(void)

undefined8 FUN_14619f5e4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14619f5fe FUN_14619f5fe body=669 status=ok
// SIG undefined FUN_14619f5fe(void)

void FUN_14619f5fe(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    FUN_145a05808(param_1);
    uVar3 = 1;
    if (param_2 < 0xe) {
      uVar3 = *(undefined4 *)(&DAT_14b4ee054 + (longlong)(int)param_2 * 4);
    }
    goto LAB_14619f7b3;
  }
  uVar3 = FUN_14619f89c(param_1[10]);
  FUN_14619f8a0(&local_38,2,uVar3);
  param_1[7] = (longlong)local_38;
  (**(code **)(*param_1 + 0x130))(param_1);
  FUN_1414f40b2(param_1);
  plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4eb230;
  FUN_145c2b6be(plVar4 + 2,param_1);
  if (plVar4 == (longlong *)0x0) {
    param_1[0xf] = 0x10;
    plVar6 = (longlong *)param_1[0x10];
    if (plVar6 != (longlong *)0x0) {
      param_1[0x10] = 0;
LAB_14619f827:
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
      if (plVar4 != (longlong *)0x0) goto LAB_14619f6c4;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[0xf] = (longlong)(plVar4 + 2);
    plVar6 = (longlong *)param_1[0x10];
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      param_1[0x10] = (longlong)plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_14619f827;
    }
LAB_14619f6c4:
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_14101cf30(param_1[10],&local_38);
  if ((longlong)local_30 == 0) {
    local_30 = 0;
  }
  else {
    lVar5 = (longlong)local_30 << 4;
    pwVar7 = local_38;
    do {
      if (*(int *)(*(longlong *)pwVar7 + 0x14) != 0) {
        FUN_145eee92e(param_1,pwVar7);
      }
      pwVar7 = pwVar7 + 8;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  FUN_14101cee4(local_38,local_30);
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_38 = L"PartyJoined";
  local_30 = 0xb;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"GbxNetwork";
  local_30 = 10;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"Joined Party!");
  (**(code **)(*param_1 + 0x120))(param_1,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  uVar3 = 0;
LAB_14619f7b3:
  (**(code **)(*param_1 + 0x68))(param_1,uVar3);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14619f89c FUN_14619f89c body=4 status=ok
// SIG undefined FUN_14619f89c(void)

undefined4 FUN_14619f89c(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// FUNCTION 14619f8a0 FUN_14619f8a0 body=10 status=ok
// SIG undefined FUN_14619f8a0(void)

undefined4 * FUN_14619f8a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 14619f8aa FUN_14619f8aa body=156 status=ok
// SIG undefined FUN_14619f8aa(void)

longlong * FUN_14619f8aa(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_14001cc68(0x40,0x10);
  FUN_14619f946(lVar3,param_2,param_3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e442d0;
  plVar4[2] = lVar3;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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



// FUNCTION 14619f946 FUN_14619f946 body=199 status=ok
// SIG undefined FUN_14619f946(void)

undefined8 * FUN_14619f946(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *_Dst;
  
  *param_1 = &PTR_FUN_149e44270;
  _Dst = (longlong *)FUN_14001cc68(0xa8);
  memset(_Dst,0,0x90);
  FUN_144869430(_Dst);
  _Dst[0x12] = 0;
  *_Dst = (longlong)&PTR_FUN_149e1e590;
  _Dst[0x13] = (longlong)(param_1 + 5);
  _Dst[0x14] = 0;
  FUN_144a69558(_Dst,1);
  (**(code **)(*_Dst + 0xf0))(_Dst,0);
  *_Dst = (longlong)&PTR_FUN_149e1e330;
  param_1[1] = _Dst;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3;
  *param_1 = &PTR_FUN_149e44270;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  return param_1;
}



// FUNCTION 14619fa0e FUN_14619fa0e body=224 status=ok
// SIG undefined FUN_14619fa0e(void)

void FUN_14619fa0e(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *plVar1 = 0;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14160b312(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),1);
    if (plVar1 != &local_20) {
      lVar4 = *plVar1;
      *plVar1 = local_20;
      local_20 = 0;
      if (lVar4 == 0) goto LAB_14619fa71;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_20 != 0) {
      LOCK();
      puVar2 = (uint *)(local_20 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
LAB_14619fa71:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619faf0 FUN_14619faf0 body=224 status=ok
// SIG undefined FUN_14619faf0(void)

void FUN_14619faf0(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *plVar1 = 0;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14160b40c(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),1);
    if (plVar1 != &local_20) {
      lVar4 = *plVar1;
      *plVar1 = local_20;
      local_20 = 0;
      if (lVar4 == 0) goto LAB_14619fb53;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_20 != 0) {
      LOCK();
      puVar2 = (uint *)(local_20 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
LAB_14619fb53:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619fbdc FUN_14619fbdc body=462 status=ok
// SIG undefined FUN_14619fbdc(void)

undefined8 * FUN_14619fbdc(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14007c92a();
  *param_1 = &PTR_FUN_14ade0900;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0x404;
  param_1[0xe] = &DAT_14a176f00;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 0x404;
  param_1[0x1e] = &DAT_14a176f00;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1dc) = 0x404;
  param_1[0x2e] = &DAT_14a176f00;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0x404;
  param_1[0x3e] = &DAT_14a176f00;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_1446f470e(&local_20,L"Vector4 Curve",1);
  param_1[0xc] = local_20;
  FUN_14007c890(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619fdac FUN_14619fdac body=474 status=ok
// SIG undefined FUN_14619fdac(void)

void FUN_14619fdac(undefined8 param_1,byte *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  
  memset(param_2,0,0x178);
  bVar2 = 1;
  if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca838f8) {
    bVar2 = ~*(byte *)(&DAT_14ca814c8 + (ulonglong)DAT_14ca85550 * 0xf) & 1;
  }
  *param_2 = bVar2;
  param_2[1] = bVar2;
  param_2[2] = bVar2;
  param_2[3] = 0;
  param_2[4] = 1;
  param_2[5] = 0;
  param_2[6] = 1;
  param_2[7] = 1;
  uVar1 = DAT_14ca84e40;
  param_2[8] = 1;
  param_2[9] = 1;
  param_2[10] = 1;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 1;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0x168) = DAT_14ca84e40;
  *(undefined4 *)(param_2 + 0x16c) = uVar1;
  param_2[0x164] = 1;
  param_2[0x165] = 0;
  param_2[0x166] = 0;
  param_2[0x167] = 0;
  param_2[0x10] = 1;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x170] = 0;
  param_2[0x171] = 1;
  param_2[0x172] = 0;
  param_2[0x173] = 0;
  param_2[0x174] = 0;
  param_2[0x175] = 1;
  param_2[0x176] = 0;
  param_2[0x177] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0x1d;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0x1d;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x28] = 0x1d;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x1d;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x20] = 0x1d;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0x1d;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0xd0] = 0x2f;
  param_2[0xd1] = 0;
  param_2[0xd2] = 0;
  param_2[0xd3] = 0;
  param_2[0xd4] = 0x2f;
  param_2[0xd5] = 0;
  param_2[0xd6] = 0;
  param_2[0xd7] = 0;
  param_2[0xe0] = 0x1d;
  param_2[0xe1] = 0;
  param_2[0xe2] = 0;
  param_2[0xe3] = 0;
  param_2[0x38] = 9;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0x1e;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0x1e;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 9;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0xd;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0x1d;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x57] = 0;
  param_2[0x58] = 0x1d;
  param_2[0x59] = 0;
  param_2[0x5a] = 0;
  param_2[0x5b] = 0;
  param_2[0x5c] = 0x1d;
  param_2[0x5d] = 0;
  param_2[0x5e] = 0;
  param_2[0x5f] = 0;
  param_2[0x60] = 0x1d;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0x1d;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0x1d;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  param_2[0x6b] = 0;
  param_2[0x6c] = 0x1d;
  param_2[0x6d] = 0;
  param_2[0x6e] = 0;
  param_2[0x6f] = 0;
  param_2[0x70] = 0x1d;
  param_2[0x71] = 0;
  param_2[0x72] = 0;
  param_2[0x73] = 0;
  param_2[0x74] = 0x1d;
  param_2[0x75] = 0;
  param_2[0x76] = 0;
  param_2[0x77] = 0;
  param_2[0x78] = 0x1d;
  param_2[0x79] = 0;
  param_2[0x7a] = 0;
  param_2[0x7b] = 0;
  param_2[0x7c] = 0x1d;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0x1d;
  param_2[0x81] = 0;
  param_2[0x82] = 0;
  param_2[0x83] = 0;
  param_2[0x84] = 0x1d;
  param_2[0x85] = 0;
  param_2[0x86] = 0;
  param_2[0x87] = 0;
  param_2[0x88] = 0x1d;
  param_2[0x89] = 0;
  param_2[0x8a] = 0;
  param_2[0x8b] = 0;
  param_2[0x8c] = 0x1e;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  param_2[0x8f] = 0;
  param_2[0x90] = 0x1f;
  param_2[0x91] = 0;
  param_2[0x92] = 0;
  param_2[0x93] = 0;
  param_2[0x94] = 0x20;
  param_2[0x95] = 0;
  param_2[0x96] = 0;
  param_2[0x97] = 0;
  param_2[0x98] = 0x20;
  param_2[0x99] = 0;
  param_2[0x9a] = 0;
  param_2[0x9b] = 0;
  param_2[0x9c] = 0x20;
  param_2[0x9d] = 0;
  param_2[0x9e] = 0;
  param_2[0x9f] = 0;
  param_2[0xa0] = 0x20;
  param_2[0xa1] = 0;
  param_2[0xa2] = 0;
  param_2[0xa3] = 0;
  param_2[0xa4] = 0x20;
  param_2[0xa5] = 0;
  param_2[0xa6] = 0;
  param_2[0xa7] = 0;
  param_2[0xa8] = 0x20;
  param_2[0xa9] = 0;
  param_2[0xaa] = 0;
  param_2[0xab] = 0;
  param_2[0xac] = 0x20;
  param_2[0xad] = 0;
  param_2[0xae] = 0;
  param_2[0xaf] = 0;
  param_2[0x118] = 0x20;
  param_2[0x119] = 0;
  param_2[0x11a] = 0;
  param_2[0x11b] = 0;
  param_2[0x11c] = 0x20;
  param_2[0x11d] = 0;
  param_2[0x11e] = 0;
  param_2[0x11f] = 0;
  param_2[0x120] = 0x20;
  param_2[0x121] = 0;
  param_2[0x122] = 0;
  param_2[0x123] = 0;
  param_2[0xb0] = 0x20;
  param_2[0xb1] = 0;
  param_2[0xb2] = 0;
  param_2[0xb3] = 0;
  param_2[0xb4] = 0x20;
  param_2[0xb5] = 0;
  param_2[0xb6] = 0;
  param_2[0xb7] = 0;
  param_2[0xb8] = 0x20;
  param_2[0xb9] = 0;
  param_2[0xba] = 0;
  param_2[0xbb] = 0;
  param_2[0xbc] = 0x20;
  param_2[0xbd] = 0;
  param_2[0xbe] = 0;
  param_2[0xbf] = 0;
  param_2[0xc0] = 0x20;
  param_2[0xc1] = 0;
  param_2[0xc2] = 0;
  param_2[0xc3] = 0;
  param_2[0xc4] = 0x20;
  param_2[0xc5] = 0;
  param_2[0xc6] = 0;
  param_2[199] = 0;
  param_2[0x124] = 0x20;
  param_2[0x125] = 0;
  param_2[0x126] = 0;
  param_2[0x127] = 0;
  param_2[0x128] = 0x20;
  param_2[0x129] = 0;
  param_2[0x12a] = 0;
  param_2[299] = 0;
  param_2[300] = 0x20;
  param_2[0x12d] = 0;
  param_2[0x12e] = 0;
  param_2[0x12f] = 0;
  param_2[200] = 0x20;
  param_2[0xc9] = 0;
  param_2[0xca] = 0;
  param_2[0xcb] = 0;
  param_2[0xcc] = 0x20;
  param_2[0xcd] = 0;
  param_2[0xce] = 0;
  param_2[0xcf] = 0;
  param_2[0x14c] = 0x20;
  param_2[0x14d] = 0;
  param_2[0x14e] = 0;
  param_2[0x14f] = 0;
  param_2[0x150] = 0x20;
  param_2[0x151] = 0;
  param_2[0x152] = 0;
  param_2[0x153] = 0;
  param_2[0x154] = 0x20;
  param_2[0x155] = 0;
  param_2[0x156] = 0;
  param_2[0x157] = 0;
  param_2[0x158] = 0x20;
  param_2[0x159] = 0;
  param_2[0x15a] = 0;
  param_2[0x15b] = 0;
  param_2[0x15c] = 0x20;
  param_2[0x15d] = 0;
  param_2[0x15e] = 0;
  param_2[0x15f] = 0;
  param_2[0x160] = 0x20;
  param_2[0x161] = 0;
  param_2[0x162] = 0;
  param_2[0x163] = 0;
  param_2[0x34] = 0x1d;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0xe4] = 0x34;
  param_2[0xe5] = 0;
  param_2[0xe6] = 0;
  param_2[0xe7] = 0;
  param_2[0xd8] = 0x1d;
  param_2[0xd9] = 0;
  param_2[0xda] = 0;
  param_2[0xdb] = 0;
  param_2[0xdc] = 0x1d;
  param_2[0xdd] = 0;
  param_2[0xde] = 0;
  param_2[0xdf] = 0;
  param_2[0xe8] = 0x35;
  param_2[0xe9] = 0;
  param_2[0xea] = 0;
  param_2[0xeb] = 0;
  param_2[0xec] = 0x35;
  param_2[0xed] = 0;
  param_2[0xee] = 0;
  param_2[0xef] = 0;
  param_2[0xf0] = 0x35;
  param_2[0xf1] = 0;
  param_2[0xf2] = 0;
  param_2[0xf3] = 0;
  param_2[0xf4] = 0;
  param_2[0xf5] = 0;
  param_2[0xf6] = 0;
  param_2[0xf7] = 0;
  param_2[0xf8] = 0x1d;
  param_2[0xf9] = 0;
  param_2[0xfa] = 0;
  param_2[0xfb] = 0;
  param_2[0xfc] = 0x1d;
  param_2[0xfd] = 0;
  param_2[0xfe] = 0;
  param_2[0xff] = 0;
  param_2[0x100] = 0x1d;
  param_2[0x101] = 0;
  param_2[0x102] = 0;
  param_2[0x103] = 0;
  param_2[0x104] = 0x3c;
  param_2[0x105] = 0;
  param_2[0x106] = 0;
  param_2[0x107] = 0;
  param_2[0x108] = 0x3c;
  param_2[0x109] = 0;
  param_2[0x10a] = 0;
  param_2[0x10b] = 0;
  param_2[0x10c] = 0x3c;
  param_2[0x10d] = 0;
  param_2[0x10e] = 0;
  param_2[0x10f] = 0;
  param_2[0x110] = 0x3c;
  param_2[0x111] = 0;
  param_2[0x112] = 0;
  param_2[0x113] = 0;
  param_2[0x114] = 0x40;
  param_2[0x115] = 0;
  param_2[0x116] = 0;
  param_2[0x117] = 0;
  param_2[0x130] = 0x47;
  param_2[0x131] = 0;
  param_2[0x132] = 0;
  param_2[0x133] = 0;
  param_2[0x134] = 0x1d;
  param_2[0x135] = 0;
  param_2[0x136] = 0;
  param_2[0x137] = 0;
  param_2[0x138] = 0x1d;
  param_2[0x139] = 0;
  param_2[0x13a] = 0;
  param_2[0x13b] = 0;
  param_2[0x13c] = 0x1d;
  param_2[0x13d] = 0;
  param_2[0x13e] = 0;
  param_2[0x13f] = 0;
  param_2[0x140] = 0x1d;
  param_2[0x141] = 0;
  param_2[0x142] = 0;
  param_2[0x143] = 0;
  param_2[0x144] = 0x1d;
  param_2[0x145] = 0;
  param_2[0x146] = 0;
  param_2[0x147] = 0;
  param_2[0x148] = 0x1d;
  param_2[0x149] = 0;
  param_2[0x14a] = 0;
  param_2[0x14b] = 0;
  return;
}



// FUNCTION 14619ff86 FUN_14619ff86 body=195 status=ok
// SIG undefined FUN_14619ff86(void)

void FUN_14619ff86(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_2 != '\0') {
    uVar5 = FUN_1447210f0(param_1);
    FUN_1410d53f0(&local_30,uVar5);
    if (local_28 != (longlong *)0x0) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_28;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_14160b506();
        }
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  FUN_1461a004a(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461a004a FUN_1461a004a body=109 status=ok
// SIG undefined FUN_1461a004a(void)

void FUN_1461a004a(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != '\0') {
    lVar2 = FUN_1447210f0();
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x1f0), plVar1 != (longlong *)0x0)) {
      lVar2 = FUN_144a79464();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30 && (*(char *)(param_1 + 0x178) == '\x03')))) {
                    /* WARNING: Could not recover jumptable at 0x0001461a00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x570))(plVar1,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461a00b8 FUN_1461a00b8 body=201 status=ok
// SIG undefined FUN_1461a00b8(void)

void FUN_1461a00b8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong **pplVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[6] == 0) || (*(longlong *)(param_1[6] + 0x360) == 0)) goto LAB_1461a013a;
  iVar2 = FUN_14490d72a();
  if (iVar2 == 3) goto LAB_1461a013a;
  (**(code **)(*param_1 + 0x578))(param_1,&local_28);
  plVar3 = local_28;
  pplVar4 = (longlong **)(param_1 + 0x80);
  if (pplVar4 == &local_28) {
LAB_1461a0167:
    if (local_28 != (longlong *)0x0) {
      (**(code **)*local_28)(local_28,1);
    }
    plVar3 = *pplVar4;
  }
  else {
    plVar1 = *pplVar4;
    *pplVar4 = local_28;
    local_28 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1,1);
      goto LAB_1461a0167;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3,param_2);
  }
LAB_1461a013a:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a0182 FUN_1461a0182 body=46 status=ok
// SIG undefined FUN_1461a0182(void)

void FUN_1461a0182(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1461a01b0(param_1 + 8,param_2 + 0x498);
  uVar1 = *(undefined8 *)(param_2 + 0x4c0);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x4b8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



// FUNCTION 1461a01b0 FUN_1461a01b0 body=93 status=ok
// SIG undefined FUN_1461a01b0(void)

undefined8 * FUN_1461a01b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458826b0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1488654a8(param_1,iVar1);
      FUN_14886551b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1461a020e FUN_1461a020e body=56 status=ok
// SIG undefined FUN_1461a020e(void)

undefined8 * FUN_1461a020e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14b403730;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1461a0246 FUN_1461a0246 body=377 status=ok
// SIG undefined FUN_1461a0246(void)

undefined8 * FUN_1461a0246(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  plVar3 = (longlong *)FUN_14001cc68(0x490);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b978b50;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x480);
  FUN_1461a0462(plVar4);
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_1461a03c0(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1461a02e9;
    param_1[1] = 0;
LAB_1461a0357:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1461a02e9;
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
      if (plVar4 == (longlong *)0x0) goto LAB_1461a02e9;
      goto LAB_1461a0357;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1461a02e9;
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
LAB_1461a02e9:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x480;
  FUN_140a52e78(*param_1,"SOakLoadingScreen",
                ".\\../../OakGame/Source/OakGame/LoadingScreen/OakLoadingScreenSubsystem.cpp",
                param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a03c0 FUN_1461a03c0 body=162 status=ok
// SIG undefined FUN_1461a03c0(void)

void FUN_1461a03c0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461a03ff;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461a03ff;
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
LAB_1461a03ff:
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
                    /* WARNING: Could not recover jumptable at 0x0001461a045e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461a0462 FUN_1461a0462 body=171 status=ok
// SIG undefined FUN_1461a0462(void)

undefined8 * FUN_1461a0462(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b978b70;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_140ca8f8e(param_1 + 0x5e);
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  FUN_140ca8f8e(param_1 + 0x78);
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  return param_1;
}



// FUNCTION 1461a050e FUN_1461a050e body=252 status=ok
// SIG undefined FUN_1461a050e(void)

void FUN_1461a050e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1461a060c();
  lVar1 = FUN_14479d2ce(param_1 + 0x80);
  if ((lVar1 != 0) && (*(char *)(*(longlong *)(param_1 + 0x48) + 0x381) == '\x01')) {
    lVar2 = FUN_14479d2ce(param_1 + 0xcc);
    if (lVar2 != 0) {
      lVar3 = FUN_145b900f0();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_148dc7a28(lVar2,local_98,0);
        if (local_38 == '\x01') {
          local_b8 = local_78;
          uStack_b0 = uStack_70;
          local_a8 = local_68;
          FUN_14622c6fc(param_1 + 0x2c8);
          FUN_1489522da(lVar1,&local_b8,&DAT_14cbcaf5c,param_1 + 0x2c8);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a060c FUN_1461a060c body=209 status=ok
// SIG undefined FUN_1461a060c(void)

void FUN_1461a060c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_14584ab16();
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    uVar2 = FUN_145d4f604(lVar1);
    FUN_145d4f4c0(param_1,uVar2);
    if (*(char *)(lVar1 + 0x230) == '\x01') {
      FUN_1461a06de(param_1,&DAT_14cb80ae0,0,0x3f800000,0x32,lVar1 + 0x234,1);
    }
    if (*(char *)(lVar1 + 0x290) != '\x01') {
      FUN_145bef6be(param_1,&DAT_14cb80ad8);
      return;
    }
    FUN_1461a06de(param_1,&DAT_14cb80ad8,1,0,0x19,lVar1 + 0x340,1);
  }
  return;
}



// FUNCTION 1461a06de FUN_1461a06de body=1407 status=ok
// SIG undefined FUN_1461a06de(void)

void FUN_1461a06de(longlong param_1,longlong *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5,byte *param_6,undefined1 param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 *****pppppuVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined4 local_140;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined1 local_e1;
  undefined8 ****local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  ushort local_c8;
  byte local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_90;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar11 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
  if (lVar11 == 0) goto LAB_1461a0810;
  ppppuVar3 = *(undefined8 *****)(lVar11 + 0x158);
  ppppuVar4 = *(undefined8 *****)(lVar11 + 0x160);
  if (ppppuVar4 != (undefined8 ****)0x0) {
    LOCK();
    *(int *)(ppppuVar4 + 1) = *(int *)(ppppuVar4 + 1) + 1;
    UNLOCK();
  }
  if (ppppuVar3 != (undefined8 ****)0x0) {
    if (param_3 == '\0') {
      local_130 = (&DAT_14c758c60)[param_6[1]];
      local_12c = (&DAT_14c758c60)[*param_6];
      local_128 = (float)param_6[3] * 0.003921569;
      local_134 = (&DAT_14c758c60)[param_6[2]];
      FUN_1461ba4f0(&local_114,(ulonglong)*param_6,param_5);
    }
    else {
      local_120 = (&DAT_14c758c60)[param_6[1]];
      local_11c = (&DAT_14c758c60)[*param_6];
      local_118 = (float)param_6[3] * 0.003921569;
      local_124 = (&DAT_14c758c60)[param_6[2]];
      FUN_1460147d0(&local_114);
    }
    local_f4._0_2_ = CONCAT11(param_7,(undefined1)local_f4);
    if ((*param_2 == DAT_14cb80ad8) && (0.0 < *(float *)(param_1 + 0x1a8))) {
      lVar11 = *(longlong *)(param_1 + 0x48);
      local_e1 = 2;
      local_f0 = FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_e0);
      local_b8 = local_b8 & 0xffffffffffffff00;
      local_90 = 0;
      FUN_144a7bf34(&local_b8,&local_e0,&local_f0,&local_e1);
      plVar8 = (longlong *)CONCAT44(uStack_d4,local_d8);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      FUN_1447c3578(lVar11 + 0x308,&local_e0,&local_b8);
      fVar17 = (float)FUN_144a7ecd0(&local_e0);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
      if (pcVar5 != (code *)0x0) {
        pppppuVar15 = &local_e0;
        if (0x18 < local_c8) {
          pppppuVar15 = (undefined8 *****)local_e0;
        }
        (*pcVar5)(pppppuVar15);
      }
      if (0x18 < local_c8) {
        FUN_1400020a8(local_e0);
      }
      FUN_144a5ac3a(&local_b8);
      if ((0.0001 < fVar17) && (lVar11 = FUN_1405f939e(param_1), lVar11 != 0)) {
        if (ppppuVar4 != (undefined8 ****)0x0) {
          LOCK();
          *(int *)(ppppuVar4 + 1) = *(int *)(ppppuVar4 + 1) + 1;
          UNLOCK();
        }
        ppppuVar6 = (undefined8 ****)*param_2;
        local_98 = local_f4;
        local_a8 = local_104;
        uStack_a4 = uStack_100;
        uStack_a0 = uStack_fc;
        uStack_9c = uStack_f8;
        local_b8._0_4_ = local_114;
        local_b8._4_4_ = uStack_110;
        uStack_b0 = uStack_10c;
        uStack_ac = uStack_108;
        local_e0 = (undefined8 *****)0x0;
        local_d8 = 0;
        FUN_1446efa72(&local_e0,0,7,0x10);
        local_d8 = 7;
        ppppuVar13 = (undefined8 ****)ppppuVar3[1];
        if (ppppuVar13 == (undefined8 ****)0x0) {
LAB_1461a0b4f:
          *local_e0 = (undefined8 ***)&PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          ppppuVar13 = (undefined8 ****)(DAT_14c758608 + 1);
          lVar9 = DAT_14c758608 + 1;
          if (ppppuVar13 == (undefined8 ****)0x0) {
            LOCK();
            UNLOCK();
            ppppuVar13 = (undefined8 ****)(DAT_14c758608 + 2);
            lVar9 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar9;
          local_e0[2] = ppppuVar13;
          *local_e0 = (undefined8 ***)&PTR_FUN_14b40d4e0;
          local_e0[3] = (undefined8 ****)0x0;
          local_e0[4] = (undefined8 ****)0x0;
          local_e0[5] = ppppuVar3;
          local_e0[6] = ppppuVar4;
          local_e0[7] = ppppuVar6;
          *(undefined4 *)(local_e0 + 8) = (undefined4)local_b8;
          *(undefined4 *)((longlong)local_e0 + 0x44) = local_b8._4_4_;
          *(undefined4 *)(local_e0 + 9) = uStack_b0;
          *(undefined4 *)((longlong)local_e0 + 0x4c) = uStack_ac;
          local_e0[10] = (undefined8 ****)CONCAT44(uStack_a4,local_a8);
          local_e0[0xb] = (undefined8 ****)CONCAT44(uStack_9c,uStack_a0);
          *(undefined4 *)(local_e0 + 0xc) = local_98;
        }
        else {
          iVar10 = *(int *)(ppppuVar13 + 1);
          do {
            if (iVar10 == 0) goto LAB_1461a0b4f;
            LOCK();
            iVar2 = *(int *)(ppppuVar13 + 1);
            bVar16 = iVar10 == iVar2;
            if (bVar16) {
              *(int *)(ppppuVar13 + 1) = iVar10 + 1;
              iVar2 = iVar10;
            }
            iVar10 = iVar2;
            UNLOCK();
          } while (!bVar16);
          ppppuVar7 = (undefined8 ****)*ppppuVar3;
          LOCK();
          *(int *)(ppppuVar13 + 1) = *(int *)(ppppuVar13 + 1) + 1;
          UNLOCK();
          LOCK();
          *(int *)(ppppuVar13 + 1) = *(int *)(ppppuVar13 + 1) + 1;
          UNLOCK();
          *local_e0 = (undefined8 ***)&PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          ppppuVar14 = (undefined8 ****)(DAT_14c758608 + 1);
          lVar9 = DAT_14c758608 + 1;
          if (ppppuVar14 == (undefined8 ****)0x0) {
            LOCK();
            UNLOCK();
            ppppuVar14 = (undefined8 ****)(DAT_14c758608 + 2);
            lVar9 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar9;
          local_e0[2] = ppppuVar14;
          *local_e0 = (undefined8 ***)&PTR_FUN_14b40d4e0;
          local_e0[3] = ppppuVar7;
          local_e0[4] = ppppuVar13;
          LOCK();
          *(int *)((longlong)ppppuVar13 + 0xc) = *(int *)((longlong)ppppuVar13 + 0xc) + 1;
          UNLOCK();
          local_e0[5] = ppppuVar3;
          local_e0[6] = ppppuVar4;
          local_e0[7] = ppppuVar6;
          *(undefined4 *)(local_e0 + 8) = (undefined4)local_b8;
          *(undefined4 *)((longlong)local_e0 + 0x44) = local_b8._4_4_;
          *(undefined4 *)(local_e0 + 9) = uStack_b0;
          *(undefined4 *)((longlong)local_e0 + 0x4c) = uStack_ac;
          *(undefined4 *)(local_e0 + 10) = local_a8;
          *(undefined4 *)((longlong)local_e0 + 0x54) = uStack_a4;
          *(undefined4 *)(local_e0 + 0xb) = uStack_a0;
          *(undefined4 *)((longlong)local_e0 + 0x5c) = uStack_9c;
          *(undefined4 *)(local_e0 + 0xc) = local_98;
          LOCK();
          ppppuVar3 = ppppuVar13 + 1;
          *(int *)ppppuVar3 = *(int *)ppppuVar3 + -1;
          UNLOCK();
          if (*(int *)ppppuVar3 == 0) {
            (*(code *)**ppppuVar13)(ppppuVar13);
            LOCK();
            piVar1 = (int *)((longlong)ppppuVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*ppppuVar13)[2])(ppppuVar13);
            }
          }
          LOCK();
          ppppuVar3 = ppppuVar13 + 1;
          *(int *)ppppuVar3 = *(int *)ppppuVar3 + -1;
          UNLOCK();
          if (*(int *)ppppuVar3 == 0) {
            (*(code *)**ppppuVar13)(ppppuVar13);
            LOCK();
            piVar1 = (int *)((longlong)ppppuVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*ppppuVar13)[2])(ppppuVar13);
            }
          }
          LOCK();
          ppppuVar3 = ppppuVar13 + 1;
          *(int *)ppppuVar3 = *(int *)ppppuVar3 + -1;
          UNLOCK();
          if (*(int *)ppppuVar3 == 0) {
            (*(code *)**ppppuVar13)(ppppuVar13);
            LOCK();
            piVar1 = (int *)((longlong)ppppuVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*ppppuVar13)[2])(ppppuVar13);
            }
          }
        }
        local_f0 = 0;
        uVar12 = FUN_144a88394(lVar11);
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_14487d8d8(&local_b8,&local_e0);
        local_78 = 1;
        local_140 = 0xbf800000;
        local_148 = 0;
        FUN_1406f3fee(uVar12,&local_f0,&local_b8,fVar17);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
        FUN_1449db362(&local_e0);
        goto LAB_1461a0801;
      }
    }
    FUN_1461a0c5e(ppppuVar3,param_2,&local_114);
  }
LAB_1461a0801:
  if (ppppuVar4 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar3 = ppppuVar4 + 1;
    *(int *)ppppuVar3 = *(int *)ppppuVar3 + -1;
    UNLOCK();
    if (*(int *)ppppuVar3 == 0) {
      (*(code *)**ppppuVar4)(ppppuVar4);
      LOCK();
      piVar1 = (int *)((longlong)ppppuVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppppuVar4)[2])(ppppuVar4);
      }
    }
  }
LAB_1461a0810:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461a0c5e FUN_1461a0c5e body=437 status=ok
// SIG undefined FUN_1461a0c5e(void)

void FUN_1461a0c5e(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_14479d2ce(param_1 + 0xe0);
  if (lVar3 != 0) {
    lVar4 = FUN_14098d926(lVar3);
    if (lVar4 != 0) {
      if (param_3[0x21] == '\x01') {
        local_48[0] = *param_3;
        if (*(float *)(param_3 + 8) < *(float *)(param_3 + 4) ||
            *(float *)(param_3 + 8) == *(float *)(param_3 + 4)) {
          local_38 = 0;
          puVar6 = &DAT_14c758c60;
          puVar7 = &DAT_14c758c60;
          puVar8 = &DAT_14c758c60;
        }
        else {
          puVar6 = (undefined4 *)(param_3 + 0x10);
          puVar7 = (undefined4 *)(param_3 + 0x14);
          puVar8 = (undefined4 *)(param_3 + 0x18);
          local_38 = *(undefined4 *)(param_3 + 0x1c);
        }
        local_3c = *puVar8;
        local_40 = *puVar7;
        local_44 = *puVar6;
        local_58 = local_48;
        local_34 = '\x01';
        local_60 = param_2;
        FUN_1461a1024(param_1 + 0x90,local_4c);
      }
      else {
        local_34 = '\0';
        FUN_145bef896(param_1 + 0x90,*param_2);
      }
      FUN_144a7d35a(lVar4,&local_60);
      uVar2 = (uint)local_58;
      if (-1 < (int)(uint)local_58) {
        do {
          if ((int)local_60[1] <= (int)uVar2) break;
          lVar4 = FUN_14479d2ce((ulonglong)uVar2 * 8 + *local_60);
          if (lVar4 != 0) {
            lVar5 = FUN_1449f3324();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              lVar5 = (**(code **)(*(longlong *)(lVar4 + 0x958) + 0x10))(lVar4 + 0x958);
              if (lVar5 == lVar3) {
                FUN_1461a0e14(lVar4,param_2,param_3);
              }
            }
          }
          iVar1 = (uint)local_58;
          uVar2 = (uint)local_58 + 1;
          local_58 = (undefined1 *)CONCAT44(local_58._4_4_,uVar2);
        } while (-2 < iVar1);
      }
      if (local_34 == '\x01') {
        local_34 = '\0';
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a0e14 FUN_1461a0e14 body=273 status=ok
// SIG undefined FUN_1461a0e14(void)

void FUN_1461a0e14(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 8);
  if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
    if (fVar2 <= fVar1) {
      uVar3 = param_3[0x21];
      FUN_1411ab38a(param_3 + 0x10,local_34);
      uVar4 = *param_3;
      uVar5 = *(undefined4 *)(param_3 + 0xc);
      local_40 = uVar3;
LAB_1461a0ec4:
      local_48 = local_34;
      FUN_1461a0fa0(param_1,param_2,uVar5,uVar4);
      goto LAB_1461a0e7b;
    }
    FUN_1411ab38a(param_3 + 0x10,local_34);
    uVar4 = *param_3;
    uVar5 = *(undefined4 *)(param_3 + 0xc);
  }
  else {
    if (fVar2 < 0.5) {
      uVar3 = param_3[0x21];
      FUN_1411ab38a(param_3 + 0x10,local_34);
      uVar4 = *param_3;
      uVar5 = 0;
      local_40 = uVar3;
      goto LAB_1461a0ec4;
    }
    FUN_1411ab38a(param_3 + 0x10,local_34);
    uVar4 = *param_3;
    uVar5 = 0;
  }
  local_48 = local_34;
  FUN_1461a0f26(param_1,param_2,uVar5,uVar4);
LAB_1461a0e7b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a0f26 FUN_1461a0f26 body=120 status=ok
// SIG undefined FUN_1461a0f26(void)

void FUN_1461a0f26(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_20 = *param_5;
  local_28 = param_3;
  local_24 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61c60);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a0fa0 FUN_1461a0fa0 body=130 status=ok
// SIG undefined FUN_1461a0fa0(void)

void FUN_1461a0fa0(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 *param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_20 = *param_5;
  local_1c = param_6;
  local_28 = param_3;
  local_24 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61c50);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a1024 FUN_1461a1024 body=338 status=ok
// SIG undefined FUN_1461a1024(void)

undefined4 * FUN_1461a1024(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461a1208(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = puVar1[4];
  *(undefined4 *)((longlong)local_40 + 0x1c) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4);
  cVar6 = FUN_1461a1178(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
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
      *(uint *)(local_40 + 4) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x1c) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1461a12f0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a1178 FUN_1461a1178 body=144 status=ok
// SIG undefined FUN_1461a1178(void)

undefined8 FUN_1461a1178(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x24);
        if (*plVar6 == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar1 = param_3[2];
          *(int *)(plVar6 + 3) = (int)param_3[3];
          plVar6[2] = lVar1;
          *(int *)plVar6 = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar2;
          *(int *)(plVar6 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar3;
          FUN_145bef970((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = *(int *)((longlong)plVar6 + 0x1c);
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1461a1208 FUN_1461a1208 body=231 status=ok
// SIG undefined FUN_1461a1208(void)

int * FUN_1461a1208(longlong *param_1,int *param_2)

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



// FUNCTION 1461a12f0 FUN_1461a12f0 body=482 status=ok
// SIG undefined FUN_1461a12f0(void)

void FUN_1461a12f0(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x24);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
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



// FUNCTION 1461a14dc FUN_1461a14dc body=466 status=ok
// SIG undefined FUN_1461a14dc(void)

undefined8 * FUN_1461a14dc(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar2);
  *param_1 = &PTR_FUN_14ae972e0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = L"/Water/Materials/MPC/MPC_Water.MPC_Water";
  local_30 = 0x28;
  FUN_14475bf92(&local_58);
  pvVar1 = local_48;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_50._4_4_;
  param_1[0xb] = 0;
  lVar3 = (longlong)(int)uStack_40;
  *(int *)(param_1 + 0xc) = (int)uStack_40;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,uStack_40 & 0xffffffff,0);
    memcpy((void *)param_1[0xb],pvVar1,lVar3 * 2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  *(undefined4 *)(param_1 + 0xd) = 0x42960000;
  FUN_1446f470e((longlong)param_1 + 0x6c,L"WaterBodyCollision",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_38 = L"/Water/Materials/WaterInfo/DrawWaterInfo.DrawWaterInfo";
  local_30 = 0x36;
  FUN_14475bf92(&local_78);
  pvVar1 = local_68;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_1 + 0x84) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0x11) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_70._4_4_;
  param_1[0x12] = 0;
  lVar3 = (longlong)(int)uStack_60;
  *(int *)(param_1 + 0x13) = (int)uStack_60;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,uStack_60 & 0xffffffff,0);
    memcpy((void *)param_1[0x12],pvVar1,lVar3 * 2);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8(local_68);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a16b0 FUN_1461a16b0 body=231 status=ok
// SIG undefined FUN_1461a16b0(void)

void FUN_1461a16b0(void)

{
  longlong *plVar1;
  longlong local_68;
  int local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  longlong local_38 [2];
  longlong local_28;
  int local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  plVar1 = (longlong *)FUN_144a8054c();
  (**(code **)(*plVar1 + 0x70))(plVar1,local_48);
  (**(code **)(*local_48[0] + 0x20))(local_48[0],&local_28);
  local_68 = local_28;
  local_60 = local_20 + -1;
  if (local_20 == 0) {
    local_60 = 0;
  }
  local_58 = L"Shaders";
  local_50 = 7;
  FUN_140bee87a(local_38,&local_68,2);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1461a1834(local_48);
  FUN_140056680(&local_68,L"/Plugin/ExrReaderShaders");
  FUN_141414c4a(&local_68,local_38);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1461a1798 Unwind@1461a1798 body=40 status=ok
// SIG undefined Unwind@1461a1798(void)

void Unwind_1461a1798(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1461a17c0 Unwind@1461a17c0 body=35 status=ok
// SIG undefined Unwind@1461a17c0(void)

void Unwind_1461a17c0(undefined8 param_1,longlong param_2)

{
  FUN_1461a1834(param_2 + 0x50);
  return;
}



// FUNCTION 1461a17e4 Unwind@1461a17e4 body=40 status=ok
// SIG undefined Unwind@1461a17e4(void)

void Unwind_1461a17e4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1461a180c Unwind@1461a180c body=40 status=ok
// SIG undefined Unwind@1461a180c(void)

void Unwind_1461a180c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1461a1834 FUN_1461a1834 body=66 status=ok
// SIG undefined FUN_1461a1834(void)

void FUN_1461a1834(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1461a1876 Unwind@1461a1876 body=20 status=ok
// SIG undefined Unwind@1461a1876(void)

void Unwind_1461a1876(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1461a188c FUN_1461a188c body=332 status=ok
// SIG undefined FUN_1461a188c(void)

undefined4 * FUN_1461a188c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461a1a66(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4);
  cVar6 = FUN_1461a19da(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1461a1b4c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a19da FUN_1461a19da body=139 status=ok
// SIG undefined FUN_1461a19da(void)

undefined8 FUN_1461a19da(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_145db049e((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461a1a66 FUN_1461a1a66 body=230 status=ok
// SIG undefined FUN_1461a1a66(void)

int * FUN_1461a1a66(longlong *param_1,int *param_2)

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



// FUNCTION 1461a1b4c FUN_1461a1b4c body=485 status=ok
// SIG undefined FUN_1461a1b4c(void)

void FUN_1461a1b4c(longlong *param_1)

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



// FUNCTION 1461a1d32 FUN_1461a1d32 body=284 status=ok
// SIG undefined FUN_1461a1d32(void)

void FUN_1461a1d32(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
      plVar3 = local_38;
      if (local_38 != (longlong *)0x0) {
        local_58 = FUN_145e4e5e6;
        local_50 = 0;
        FUN_1461a1e50(local_48,param_1);
        (**(code **)(*plVar3 + 0x218))(plVar3,&local_58,local_48);
        *(code **)(param_1 + 0x180) = local_58;
        FUN_1449db362(local_48);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10);
        }
        (**(code **)(*local_38 + 0x208))
                  (local_38,*(undefined8 *)(param_1 + 0x38),uVar4,param_1 + 0x48);
      }
      goto LAB_1461a1df6;
    }
  }
  local_38 = (longlong *)0x0;
  plStack_30 = (longlong *)0x0;
LAB_1461a1df6:
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a1e50 FUN_1461a1e50 body=428 status=ok
// SIG undefined FUN_1461a1e50(void)

longlong * FUN_1461a1e50(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1461a1f30:
    *puVar5 = &PTR_LAB_14b4c2ba0;
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
    *puVar5 = &PTR_FUN_14b4f3140;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461a1f30;
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
    *puVar5 = &PTR_LAB_14b4c2ba0;
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
    *puVar5 = &PTR_FUN_14b4f3140;
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



// FUNCTION 1461a1ffc FUN_1461a1ffc body=205 status=ok
// SIG undefined FUN_1461a1ffc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461a1ffc(void)

{
  if ((DAT_14c9519af & 2) == 0) {
    DAT_14c9519af = DAT_14c9519af | 2;
    _DAT_14c951950 = L"FFreezablePerPlatformFloat";
    _DAT_14c951968 = FUN_146826540;
    _DAT_14c951970 = FUN_146825d77;
    _DAT_14c951978 = FUN_146825fd6;
    _DAT_14c951980 = FUN_1407e02ea;
    _DAT_14c951988 = FUN_146826273;
    _DAT_14c951960 = &LAB_1468c77ae;
    _DAT_14c9519a0 = 0xffffffff00000004;
    _DAT_14c9519a8 = 4;
    DAT_14c9519ac = 0;
    _DAT_14c951990 = &LAB_1468c77b6;
    FUN_1461a20ca();
    FUN_1407e00cc(&DAT_14c951948);
    return;
  }
  return;
}



// FUNCTION 1461a20ca FUN_1461a20ca body=271 status=ok
// SIG undefined FUN_1461a20ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461a20ca(void)

{
  _DAT_14c951ae8 = L"Default";
  DAT_14c951b12 = FUN_140850cc5();
  if ((DAT_14c951b7f & 2) == 0) {
    DAT_14c951b7f = DAT_14c951b7f | 3;
    _DAT_14c951b20 = L"float";
    _DAT_14c951b38 = &LAB_1468cb284;
    _DAT_14c951b40 = &LAB_1468cb290;
    _DAT_14c951b48 = &LAB_1468cb2a0;
    _DAT_14c951b50 = &LAB_1468cb2a6;
    _DAT_14c951b58 = &LAB_1468cb2aa;
    _DAT_14c951b30 = &LAB_1468cb2b4;
    _DAT_14c951b70 = 0x400000004;
    _DAT_14c951b78 = 4;
    DAT_14c951b7c = 0;
  }
  _DAT_14c951af0 = &DAT_14c951b18;
  _DAT_14c951b00 = &LAB_14682652b;
  _DAT_14c951b08 = 0x100000000;
  _DAT_14c951b10 = 0;
  _DAT_14c951af8 = DAT_14c951958;
  DAT_14c951958 = &DAT_14c951ae8;
  return;
}



// FUNCTION 1461a21da FUN_1461a21da body=205 status=ok
// SIG undefined FUN_1461a21da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461a21da(void)

{
  if ((DAT_14c951a1f & 2) == 0) {
    DAT_14c951a1f = DAT_14c951a1f | 2;
    _DAT_14c9519c0 = L"FFreezablePerPlatformInt";
    _DAT_14c9519d8 = FUN_146826540;
    _DAT_14c9519e0 = FUN_146825d77;
    _DAT_14c9519e8 = FUN_146825fd6;
    _DAT_14c9519f0 = FUN_1407e02ea;
    _DAT_14c9519f8 = FUN_146826273;
    _DAT_14c9519d0 = &LAB_1468c77ba;
    _DAT_14c951a10 = 0xffffffff00000004;
    _DAT_14c951a18 = 4;
    DAT_14c951a1c = 0;
    _DAT_14c951a00 = &LAB_1468c77c2;
    FUN_1461a22a8();
    FUN_1407e00cc(&DAT_14c9519b8);
    return;
  }
  return;
}



// FUNCTION 1461a22a8 FUN_1461a22a8 body=271 status=ok
// SIG undefined FUN_1461a22a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461a22a8(void)

{
  _DAT_14c951b80 = L"Default";
  DAT_14c951baa = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14c951b88 = &DAT_14c951bf8;
  _DAT_14c951b98 = &LAB_14682652b;
  _DAT_14c951ba0 = 0x100000000;
  _DAT_14c951ba8 = 0;
  _DAT_14c951b90 = DAT_14c9519c8;
  DAT_14c9519c8 = &DAT_14c951b80;
  return;
}



// FUNCTION 1461a23b8 FUN_1461a23b8 body=205 status=ok
// SIG undefined FUN_1461a23b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461a23b8(void)

{
  if ((DAT_14ca9820f & 2) == 0) {
    DAT_14ca9820f = DAT_14ca9820f | 2;
    _DAT_14ca981b0 = L"FShaderUniformBufferParameterInfo";
    _DAT_14ca981c8 = FUN_146826540;
    _DAT_14ca981d0 = FUN_146825d77;
    _DAT_14ca981d8 = FUN_146825fd6;
    _DAT_14ca981e0 = FUN_1407e02ea;
    _DAT_14ca981e8 = FUN_146826273;
    _DAT_14ca981c0 = &LAB_14743239c;
    _DAT_14ca98200 = 0xffffffff00000002;
    _DAT_14ca98208 = 2;
    DAT_14ca9820c = 0;
    _DAT_14ca981f0 = &LAB_1474323a2;
    FUN_1461a2486();
    FUN_1407e00cc(&DAT_14ca981a8);
    return;
  }
  return;
}



// FUNCTION 1461a2486 FUN_1461a2486 body=271 status=ok
// SIG undefined FUN_1461a2486(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461a2486(void)

{
  _DAT_14ca999e8 = L"BaseIndex";
  DAT_14ca99a12 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca999f0 = &DAT_14ca84cb0;
  _DAT_14ca99a00 = &LAB_14682652b;
  _DAT_14ca99a08 = 0x100000000;
  _DAT_14ca99a10 = 0;
  _DAT_14ca999f8 = DAT_14ca981b8;
  DAT_14ca981b8 = &DAT_14ca999e8;
  return;
}



// FUNCTION 1461a2595 FUN_1461a2595 body=32 status=ok
// SIG undefined FUN_1461a2595(void)

void FUN_1461a2595(void)

{
  FUN_14160b5fc(&DAT_14c9c07b0);
  atexit((_func_5014 *)&LAB_142b8db9b);
  return;
}



// FUNCTION 1461a25b5 FUN_1461a25b5 body=32 status=ok
// SIG undefined FUN_1461a25b5(void)

void FUN_1461a25b5(void)

{
  FUN_14160b7ba(&DAT_14c9c0d88);
  atexit((_func_5014 *)&LAB_142b8dc8b);
  return;
}



// FUNCTION 1461a25d5 FUN_1461a25d5 body=32 status=ok
// SIG undefined FUN_1461a25d5(void)

void FUN_1461a25d5(void)

{
  FUN_14160b978(&DAT_14c9c0d28);
  atexit((_func_5014 *)&LAB_142b8dceb);
  return;
}



// FUNCTION 1461a25f5 FUN_1461a25f5 body=32 status=ok
// SIG undefined FUN_1461a25f5(void)

void FUN_1461a25f5(void)

{
  FUN_14160bb36(&DAT_14c9c0e90);
  atexit((_func_5014 *)&LAB_142b8dd03);
  return;
}



// FUNCTION 1461a2615 FUN_1461a2615 body=32 status=ok
// SIG undefined FUN_1461a2615(void)

void FUN_1461a2615(void)

{
  FUN_14160bcf4(&DAT_14c9c0c50);
  atexit((_func_5014 *)&LAB_142b8dd27);
  return;
}



// FUNCTION 1461a2635 FUN_1461a2635 body=32 status=ok
// SIG undefined FUN_1461a2635(void)

void FUN_1461a2635(void)

{
  FUN_14160beb2(&DAT_14c9d5268);
  atexit((_func_5014 *)&LAB_142c3f983);
  return;
}



// FUNCTION 1461a2655 FUN_1461a2655 body=32 status=ok
// SIG undefined FUN_1461a2655(void)

void FUN_1461a2655(void)

{
  FUN_14160c070(&DAT_14ca19738);
  atexit((_func_5014 *)&LAB_142e26eba);
  return;
}



// FUNCTION 1461a2675 FUN_1461a2675 body=32 status=ok
// SIG undefined FUN_1461a2675(void)

void FUN_1461a2675(void)

{
  FUN_14160c22e(&DAT_14ca16b40);
  atexit((_func_5014 *)&LAB_142e26f02);
  return;
}



// FUNCTION 1461a2695 FUN_1461a2695 body=32 status=ok
// SIG undefined FUN_1461a2695(void)

void FUN_1461a2695(void)

{
  FUN_14160c3ec(&DAT_14ca350f8);
  atexit((_func_5014 *)&LAB_142f101df);
  return;
}



// FUNCTION 1461a26b6 FUN_1461a26b6 body=38 status=ok
// SIG undefined FUN_1461a26b6(void)

undefined8 FUN_1461a26b6(undefined8 param_1,int param_2)

{
  FUN_14160c5aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461a26e4 FUN_1461a26e4 body=468 status=ok
// SIG undefined FUN_1461a26e4(void)

longlong * FUN_1461a26e4(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ad3966();
  *param_1 = (longlong)&PTR_FUN_14bdc4a40;
  param_1[5] = (longlong)&PTR_FUN_14bdc4ec0;
  param_1[0x13] = (longlong)&PTR_FUN_14bdc4ee0;
  param_1[0x15] = (longlong)&PTR_FUN_14bdc4f10;
  param_1[0x16] = (longlong)&PTR_FUN_14bdc4f50;
  param_1[0x5d] = (longlong)&PTR_FUN_14bdc4f80;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x3ff00000;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0x3ff00000;
  param_1[0x6c] = 0x3ff0000000000000;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x70] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x71] = lVar1;
  param_1[0x72] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x73) = 0xffffffff;
  param_1[0x76] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x74) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = uVar2;
  *(undefined4 *)(param_1 + 0x75) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = uVar4;
  *(undefined4 *)(param_1 + 0x77) = 0xffffffff;
  param_1[0x7c] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  local_40 = L"SeamSculptToolName";
  local_38 = 0x12;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UMeshSelectionTool";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,L"Add UV Seams");
  (**(code **)(*param_1 + 0x370))(param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a28ba FUN_1461a28ba body=284 status=ok
// SIG undefined FUN_1461a28ba(void)

undefined4 * FUN_1461a28ba(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461a2a5a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_1461a29d8(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1461a2b42(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a29d8 FUN_1461a29d8 body=129 status=ok
// SIG undefined FUN_1461a29d8(void)

undefined8 FUN_1461a29d8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147ad3c6e(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461a2a5a FUN_1461a2a5a body=231 status=ok
// SIG undefined FUN_1461a2a5a(void)

int * FUN_1461a2a5a(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1461a2b42 FUN_1461a2b42 body=428 status=ok
// SIG undefined FUN_1461a2b42(void)

void FUN_1461a2b42(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 1461a2cfa FUN_1461a2cfa body=466 status=ok
// SIG undefined FUN_1461a2cfa(void)

undefined8 * FUN_1461a2cfa(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a653ee0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_28,L"PortalComponent",1);
  uVar1 = FUN_145991b48();
  local_50 = 0;
  local_58 = 1;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x72] = lVar2;
  local_40 = 0x4024000000000000;
  local_38 = 0x4059000000000000;
  local_30 = 0x4059000000000000;
  FUN_14084f00a(lVar2);
  lVar2 = param_1[0x72];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar2;
  FUN_1446f470e(&local_48,L"DrawBox0",1);
  uVar1 = FUN_14088b378();
  local_50 = 0;
  local_58 = 1;
  plVar3 = (longlong *)FUN_14048696c(param_1,local_48,uVar1,uVar1);
  FUN_140486fc4(plVar3,param_1[0x72],0);
  *(byte *)((longlong)plVar3 + 0x2de) = *(byte *)((longlong)plVar3 + 0x2de) | 0x10;
  (**(code **)(*plVar3 + 0x728))(plVar3,DAT_14cad0f30,1);
  plVar3[200] = 0x3ff0000000000000;
  plVar3[0xc9] = 0x3ff0000000000000;
  plVar3[0xca] = 0x3ff0000000000000;
  lVar2 = param_1[0x72];
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar3);
  }
  *(longlong **)(lVar2 + 0x2a8) = plVar3;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a2ece FUN_1461a2ece body=158 status=ok
// SIG undefined FUN_1461a2ece(void)

bool FUN_1461a2ece(longlong param_1,undefined8 param_2)

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



// FUNCTION 1461a2fbe FUN_1461a2fbe body=80 status=ok
// SIG undefined FUN_1461a2fbe(void)

undefined8 FUN_1461a2fbe(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    cVar1 = FUN_144729dda(param_1 + 8);
    if (cVar1 == '\0') {
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        return 0;
      }
    }
    else {
      plVar2 = (longlong *)FUN_14479d2ce(param_1 + 8);
      uVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
      *(undefined8 *)(param_1 + 0x68) = uVar3;
      *(undefined1 *)(param_1 + 0x70) = 1;
    }
  }
  return *(undefined8 *)(param_1 + 0x68);
}



// FUNCTION 1461a300e FUN_1461a300e body=159 status=ok
// SIG undefined FUN_1461a300e(void)

void FUN_1461a300e(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_14050c909();
  lVar5 = *(longlong *)(lVar3 + 0x4a0);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x4a0) = lVar5;
  }
  if (*(longlong *)(lVar3 + 0x4a8) != 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x498) != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x498));
    }
    *(undefined8 *)(lVar3 + 0x4a8) = uVar4;
    return;
  }
  return;
}



// FUNCTION 1461a30ae FUN_1461a30ae body=120 status=ok
// SIG undefined FUN_1461a30ae(void)

void FUN_1461a30ae(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14cb26568 = 0;
  LOCK();
  DAT_14cb26448 = 0;
  UNLOCK();
  local_18 = &local_21;
  local_20 = &LAB_1438acbd2;
  FUN_14160c762();
  if (DAT_14cb259f8 != 0) {
    FUN_1461a3128();
  }
  FUN_14042d23c(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a3128 FUN_1461a3128 body=9 status=ok
// SIG undefined FUN_1461a3128(void)

void FUN_1461a3128(longlong param_1)

{
  FUN_1461a3132(*(undefined8 *)(param_1 + 0x60));
  return;
}



// FUNCTION 1461a3132 FUN_1461a3132 body=275 status=ok
// SIG undefined FUN_1461a3132(void)

void FUN_1461a3132(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar2 = param_1 + 0x30;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  iVar3 = 0;
  local_40 = lVar2;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (local_40 != lVar2)) {
    do {
      do {
        FUN_140f4e7ec(*local_70,*(undefined8 *)(*local_70 + (longlong)iStack_54 * 0x18));
        local_58 = local_58 & ~local_68._4_4_;
        FUN_1449c0562(&local_68);
      } while (iStack_54 != iVar3);
    } while ((local_60 != lVar2) || (local_70 != plVar1));
  }
  FUN_1461a3246(plVar1,0);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461a3246 FUN_1461a3246 body=107 status=ok
// SIG undefined FUN_1461a3246(void)

void FUN_1461a3246(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_1461a3295:
      FUN_145af75d8(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_147f852a6(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1461a3295;
  FUN_1461a32b2(param_1);
  FUN_145af75d8(param_1,param_2);
  return;
}



// FUNCTION 1461a32b2 FUN_1461a32b2 body=335 status=ok
// SIG undefined FUN_1461a32b2(void)

void FUN_1461a32b2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1461a3402 FUN_1461a3402 body=32 status=ok
// SIG undefined FUN_1461a3402(void)

void FUN_1461a3402(void)

{
  FUN_14160cd6a(&DAT_14c9c0d70);
  atexit((_func_5014 *)&LAB_142b8dc07);
  return;
}



// FUNCTION 1461a3422 FUN_1461a3422 body=32 status=ok
// SIG undefined FUN_1461a3422(void)

void FUN_1461a3422(void)

{
  FUN_14160cf2a(&DAT_14c9c0db8);
  atexit((_func_5014 *)&LAB_142b8dc13);
  return;
}



// FUNCTION 1461a3442 FUN_1461a3442 body=32 status=ok
// SIG undefined FUN_1461a3442(void)

void FUN_1461a3442(void)

{
  FUN_14160d0ea(&DAT_14c9c0dd0);
  atexit((_func_5014 *)&LAB_142b8dd0f);
  return;
}



// FUNCTION 1461a3462 FUN_1461a3462 body=32 status=ok
// SIG undefined FUN_1461a3462(void)

void FUN_1461a3462(void)

{
  FUN_14160d2aa(&DAT_14c9c0ea8);
  atexit((_func_5014 *)&LAB_142b8ddb7);
  return;
}



// FUNCTION 1461a3482 FUN_1461a3482 body=32 status=ok
// SIG undefined FUN_1461a3482(void)

void FUN_1461a3482(void)

{
  FUN_14160d46a(&DAT_14c9cfd98);
  atexit((_func_5014 *)&LAB_142c1c871);
  return;
}



// FUNCTION 1461a34a2 FUN_1461a34a2 body=32 status=ok
// SIG undefined FUN_1461a34a2(void)

void FUN_1461a34a2(void)

{
  FUN_14160d62a(&DAT_14ca214b8);
  atexit((_func_5014 *)&LAB_142e93c30);
  return;
}



// FUNCTION 1461a34c2 FUN_1461a34c2 body=32 status=ok
// SIG undefined FUN_1461a34c2(void)

void FUN_1461a34c2(void)

{
  FUN_14160d7ea(&DAT_14ca2c3a0);
  atexit((_func_5014 *)&LAB_142ed6b60);
  return;
}



// FUNCTION 1461a34e2 FUN_1461a34e2 body=32 status=ok
// SIG undefined FUN_1461a34e2(void)

void FUN_1461a34e2(void)

{
  FUN_14160d9aa(&DAT_14ca2c388);
  atexit((_func_5014 *)&LAB_142ed6b6c);
  return;
}



// FUNCTION 1461a3502 FUN_1461a3502 body=32 status=ok
// SIG undefined FUN_1461a3502(void)

void FUN_1461a3502(void)

{
  FUN_14160db6a(&DAT_14ca34fd0);
  atexit((_func_5014 *)&LAB_142f1023f);
  return;
}



// FUNCTION 1461a3522 FUN_1461a3522 body=32 status=ok
// SIG undefined FUN_1461a3522(void)

void FUN_1461a3522(void)

{
  FUN_14160dd2a(&DAT_14ca30fe8);
  atexit((_func_5014 *)&LAB_142f1024b);
  return;
}



// FUNCTION 1461a3542 FUN_1461a3542 body=32 status=ok
// SIG undefined FUN_1461a3542(void)

void FUN_1461a3542(void)

{
  FUN_14160deea(&DAT_14cab15c8);
  atexit((_func_5014 *)&LAB_1432c70ad);
  return;
}



// FUNCTION 1461a3562 FUN_1461a3562 body=54 status=ok
// SIG undefined FUN_1461a3562(void)

void FUN_1461a3562(void)

{
  FUN_1461a3598();
  if (DAT_14cab4308 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab42e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461a3598 FUN_1461a3598 body=424 status=ok
// SIG undefined FUN_1461a3598(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461a3598(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cab42f8;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cab4310 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cab42e8;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      lVar1 = *local_60 + (longlong)iStack_44 * 0xa0;
      if (*(longlong *)(*local_60 + 0x50 + (longlong)iStack_44 * 0xa0) != 0) {
        plVar2 = (longlong *)(lVar1 + 0x70);
        if (*(longlong **)(lVar1 + 0x60) != (longlong *)0x0) {
          plVar2 = *(longlong **)(lVar1 + 0x60);
        }
        (**(code **)(*plVar2 + 0x10))();
      }
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        plVar2 = (longlong *)(lVar1 + 0x30);
        if (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0) {
          plVar2 = *(longlong **)(lVar1 + 0x20);
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14cab42f0 = 0;
  if (DAT_14cab42f4 != 0) {
    FUN_140de7f60(&DAT_14cab42e8,0);
  }
  _DAT_14cab4318 = 0xffffffff;
  DAT_14cab4310 = 0;
  if (0x80 < DAT_14cab4314) {
    DAT_14cab4314 = 0x80;
    FUN_1446efbd8(&DAT_14cab42f8,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461a3742 FUN_1461a3742 body=484 status=ok
// SIG undefined FUN_1461a3742(void)

longlong * FUN_1461a3742(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    lVar5 = FUN_14479d2ce(param_1 + 0x48);
    if (lVar5 != 0) {
      lVar6 = FUN_144a6c4d8();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        iVar3 = *(int *)(param_1 + 0x158);
        if ((longlong)iVar3 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x150);
          lVar6 = 0;
          do {
            if ((*(longlong *)(lVar5 + lVar6) != 0) && (lVar8 = FUN_14027347e(), lVar8 == param_3))
            {
              *param_2 = *(longlong *)(lVar5 + lVar6);
              lVar5 = *(longlong *)(lVar5 + 8 + lVar6);
              param_2[1] = lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1461a3899;
            }
            lVar6 = lVar6 + 0x10;
          } while ((longlong)iVar3 * 0x10 != lVar6);
        }
        plVar4 = *(longlong **)(param_3 + 0x30);
        (**(code **)(*plVar4 + 200))(plVar4,&local_50);
        *param_2 = local_50;
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
              piVar2 = (int *)((longlong)local_48 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
              }
            }
          }
        }
        lVar5 = *param_2;
        if (lVar5 != 0) {
          iVar3 = *(int *)(param_1 + 0x158);
          *(uint *)(param_1 + 0x158) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x15c) < iVar3 + 1U) {
            FUN_1461a3928((longlong *)(param_1 + 0x150),iVar3);
          }
          lVar6 = *(longlong *)(param_1 + 0x150);
          *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar5;
          lVar8 = param_2[1];
          *(longlong *)(lVar6 + 8 + (longlong)iVar3 * 0x10) = lVar8;
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
            lVar5 = *param_2;
          }
          uVar7 = FUN_14479d2ce(param_1 + 0x48);
          FUN_14160e0aa(lVar5,plVar4,uVar7,param_1);
        }
        FUN_1447f69b6(param_1 + 0x130);
LAB_1461a3899:
        if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 1461a3928 FUN_1461a3928 body=132 status=ok
// SIG undefined FUN_1461a3928(void)

void FUN_1461a3928(longlong param_1,int param_2)

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



// FUNCTION 1461a39b4 FUN_1461a39b4 body=1036 status=ok
// SIG undefined FUN_1461a39b4(void)

undefined8 * FUN_1461a39b4(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14007ca06();
  FUN_1412b486a(param_1,uVar2);
  *param_1 = &PTR_FUN_14bcbf5c0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0x100;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e9) = 0;
  FUN_1461a3dc2(param_1 + 0x3f);
  FUN_1461a3e7e(param_1 + 0x4a);
  *(undefined1 *)(param_1 + 0x59) = 0;
  FUN_1446ddc76(&local_28,"MaterialPipeline",1);
  uVar2 = FUN_14599b898();
  local_60 = 0;
  local_68 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x39] = lVar3;
  FUN_1446ddc76(&local_30,"CommonMeshesProperties",1);
  uVar2 = FUN_1458d6348();
  local_60 = 0;
  local_68 = 1;
  lVar3 = FUN_14048696c(param_1,local_30,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x35] = lVar3;
  FUN_1446ddc76(&local_38,"CommonSkeletalMeshesAndAnimationsProperties",1);
  uVar2 = FUN_1458d6432();
  local_60 = 0;
  local_68 = 1;
  lVar3 = FUN_14048696c(param_1,local_38,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x36] = lVar3;
  FUN_1446ddc76(&local_40,"MeshPipeline",1);
  uVar2 = FUN_14595e92a();
  local_60 = 0;
  local_68 = 1;
  lVar3 = FUN_14048696c(param_1,local_40,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x37] = lVar3;
  lVar3 = param_1[0x35];
  if ((lVar3 != 0 & bVar1) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_48 = 0;
  FUN_14485c47a(&local_48,lVar3);
  *(undefined8 *)(param_1[0x37] + 0x148) = local_48;
  lVar3 = param_1[0x36];
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_48 = 0;
  FUN_14485c47a(&local_48,lVar3);
  *(undefined8 *)(param_1[0x37] + 0x150) = local_48;
  FUN_1446ddc76(&local_50,"AnimationPipeline",1);
  uVar2 = FUN_14599b7ac();
  local_60 = 0;
  local_68 = 1;
  lVar3 = FUN_14048696c(param_1,local_50,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x38] = lVar3;
  lVar3 = param_1[0x36];
  if ((lVar3 != 0 & bVar1) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_48 = 0;
  FUN_14485c47a(&local_48,lVar3);
  *(undefined8 *)(param_1[0x38] + 0x148) = local_48;
  lVar3 = param_1[0x35];
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_48 = 0;
  FUN_14485c47a(&local_48,lVar3);
  *(undefined8 *)(param_1[0x38] + 0x150) = local_48;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a3dc2 FUN_1461a3dc2 body=186 status=ok
// SIG undefined FUN_1461a3dc2(void)

undefined8 * FUN_1461a3dc2(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  local_38 = L"GetConflictInfos_MaterialTitle";
  local_30 = 0x1e;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UInterchangeGenericAssetsPipeline";
  local_30 = 0x21;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_1 + 9,local_40,local_3c,L"Material Conflicts");
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a3e7e FUN_1461a3e7e body=207 status=ok
// SIG undefined FUN_1461a3e7e(void)

undefined8 * FUN_1461a3e7e(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  local_38 = L"GetConflictInfos_SkeletonTitle";
  local_30 = 0x1e;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UInterchangeGenericAssetsPipeline";
  local_30 = 0x21;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_1 + 0xd,local_40,local_3c,L"Skeleton Conflicts");
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a3f4e FUN_1461a3f4e body=32 status=ok
// SIG undefined FUN_1461a3f4e(void)

void FUN_1461a3f4e(void)

{
  FUN_14160e980(&DAT_14c9c0d58);
  atexit((_func_5014 *)&LAB_142b8dba7);
  return;
}



// FUNCTION 1461a3f6e FUN_1461a3f6e body=32 status=ok
// SIG undefined FUN_1461a3f6e(void)

void FUN_1461a3f6e(void)

{
  FUN_14160eb42(&DAT_14c9c0de8);
  atexit((_func_5014 *)&LAB_142b8dbb3);
  return;
}



// FUNCTION 1461a3f8e FUN_1461a3f8e body=32 status=ok
// SIG undefined FUN_1461a3f8e(void)

void FUN_1461a3f8e(void)

{
  FUN_14160ed04(&DAT_14c9c0e00);
  atexit((_func_5014 *)&LAB_142b8dbbf);
  return;
}



// FUNCTION 1461a3fae FUN_1461a3fae body=32 status=ok
// SIG undefined FUN_1461a3fae(void)

void FUN_1461a3fae(void)

{
  FUN_14160eec6(&DAT_14c9c0e18);
  atexit((_func_5014 *)&LAB_142b8dbcb);
  return;
}



// FUNCTION 1461a3fce FUN_1461a3fce body=32 status=ok
// SIG undefined FUN_1461a3fce(void)

void FUN_1461a3fce(void)

{
  FUN_14160f088(&DAT_14c9c0e30);
  atexit((_func_5014 *)&LAB_142b8dbd7);
  return;
}



// FUNCTION 1461a3fee FUN_1461a3fee body=32 status=ok
// SIG undefined FUN_1461a3fee(void)

void FUN_1461a3fee(void)

{
  FUN_14160f24a(&DAT_14c9c0e48);
  atexit((_func_5014 *)&LAB_142b8dbe3);
  return;
}



// FUNCTION 1461a400e FUN_1461a400e body=32 status=ok
// SIG undefined FUN_1461a400e(void)

void FUN_1461a400e(void)

{
  FUN_14160f40c(&DAT_14c9c0e60);
  atexit((_func_5014 *)&LAB_142b8dbef);
  return;
}



// FUNCTION 1461a402e FUN_1461a402e body=32 status=ok
// SIG undefined FUN_1461a402e(void)

void FUN_1461a402e(void)

{
  FUN_14160f5ce(&DAT_14c9c0e78);
  atexit((_func_5014 *)&LAB_142b8dbfb);
  return;
}



// FUNCTION 1461a404e FUN_1461a404e body=32 status=ok
// SIG undefined FUN_1461a404e(void)

void FUN_1461a404e(void)

{
  FUN_14160f790(&DAT_14c9c0da0);
  atexit((_func_5014 *)&LAB_142b8dd1b);
  return;
}



// FUNCTION 1461a407a FUN_1461a407a body=469 status=ok
// SIG undefined FUN_1461a407a(void)

undefined8 * FUN_1461a407a(undefined8 *param_1)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14a9a0ac0;
  local_50 = L"UE::Blueprint::Private::PropertyGetFailedWarning";
  local_48._0_4_ = 0x30;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetSystemLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x14);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_60,local_68,local_64,L"Property Get Failed");
  local_50 = DAT_14cae7f30;
  local_48 = local_60;
  if (local_60 == (longlong *)0x0) {
    local_40 = local_58;
  }
  else {
    (**(code **)(*local_60 + 8))();
    local_40 = local_58;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_50 = L"UE::Blueprint::Private::PropertySetFailedWarning";
  local_48._0_4_ = 0x30;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetSystemLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x14);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_78,local_68,local_64,L"Property Set Failed");
  local_50 = DAT_14cae7f38;
  local_48 = local_78;
  if (local_78 == (longlong *)0x0) {
    local_40 = local_70;
  }
  else {
    (**(code **)(*local_78 + 8))();
    local_40 = local_70;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a4250 FUN_1461a4250 body=70 status=ok
// SIG undefined FUN_1461a4250(void)

void FUN_1461a4250(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4820a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b722d60;
  puVar1[0x87] = 0;
  *(undefined4 *)(puVar1 + 0x88) = 0;
  FUN_1461a4296(puVar1 + 0x8a);
  return;
}



// FUNCTION 1461a4296 FUN_1461a4296 body=55 status=ok
// SIG undefined FUN_1461a4296(void)

undefined8 * FUN_1461a4296(undefined8 *param_1)

{
  FUN_140b4884c();
  *param_1 = &PTR_FUN_14b72b330;
  FUN_14160f952(param_1 + 0x115);
  param_1[0x2da] = 0;
  return param_1;
}



// FUNCTION 1461a42ce FUN_1461a42ce body=1547 status=ok
// SIG undefined FUN_1461a42ce(void)

void FUN_1461a42ce(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  byte bVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong *plStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ushort local_54;
  undefined4 local_52;
  undefined1 local_4e;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1461a48da();
  plVar6 = (longlong *)FUN_1414dac37();
  cVar4 = (**(code **)(*plVar6 + 0x100))(plVar6);
  if (cVar4 != '\0') goto LAB_1461a45fb;
  cVar4 = (**(code **)(*plVar6 + 0x130))(plVar6);
  if (cVar4 != '\0') {
    uVar9 = FUN_1401cb356();
    local_78 = (undefined8 *)0x0;
    plStack_70._0_4_ = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar3 = local_78;
    plStack_70 = (longlong *)CONCAT44(plStack_70._4_4_,3);
    *local_78 = &PTR_LAB_149e02020;
    uVar11 = FUN_144a3f946();
    puVar3[2] = uVar11;
    *puVar3 = &PTR_FUN_14b529ea0;
    puVar3[3] = 0;
    FUN_14485c47a(puVar3 + 3,param_1);
    puVar3[4] = param_1;
    local_98 = 0;
    FUN_1405f67fc(uVar9,local_48,&local_78,
                  L"UGbxDefaultLoadingScreenManager::OnLoadingScreenActivate");
    if (local_40 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    FUN_1449db362(&local_78);
    goto LAB_1461a45fb;
  }
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa5) = 0;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  local_78 = (undefined8 *)0x0;
  plStack_70 = (longlong *)0x0;
  local_58 = 0xbf800000;
  local_54 = 0;
  local_4e = 0;
  local_52 = 0x10000;
  lVar7 = FUN_145a10c70();
  lVar8 = *(longlong *)(lVar7 + 0x110);
  if (lVar8 == 0) {
    FUN_140aa6c08(lVar7);
    lVar8 = *(longlong *)(lVar7 + 0x110);
    if (lVar8 != 0) goto LAB_1461a4381;
  }
  else {
LAB_1461a4381:
    local_52._0_3_ = CONCAT12(*(undefined1 *)(lVar8 + 0x80),(undefined2)local_52);
  }
  if (1 < (int)param_1[0x18]) {
    *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
    uStack_60 = CONCAT44(uStack_60._4_4_,1);
    FUN_1447a1bd6(&local_68,0);
    *local_68 = 0;
    *local_68 = param_1[0x17];
    param_1[0x17] = 0;
    *(int *)(local_68 + 1) = (int)param_1[0x18];
    *(undefined4 *)((longlong)local_68 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc4);
    param_1[0x18] = 0;
  }
  lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar8 == 0) {
    bVar13 = false;
  }
  else {
    iVar5 = FUN_14490d72a(lVar8);
    bVar13 = iVar5 == 3;
  }
  bVar12 = lVar8 != 0 & bVar13;
  if ((char)param_1[0x14] == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
    (**(code **)(*param_1 + 0x388))(param_1,&local_88);
LAB_1461a43f9:
    plVar10 = plStack_70;
    plVar1 = local_80;
    local_78 = local_88;
    if (local_80 == (longlong *)0x0) {
      if (plStack_70 != (longlong *)0x0) {
        plStack_70 = (longlong *)0x0;
LAB_1461a47f3:
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar5 = *piVar2;
          UNLOCK();
joined_r0x0001461a482c:
          if (iVar5 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      if (local_80 == plStack_70) {
        LOCK();
        plVar10 = local_80 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar5 = *piVar2;
          UNLOCK();
          plVar10 = plVar1;
          goto joined_r0x0001461a482c;
        }
      }
      else {
        plStack_70 = local_80;
        if (plVar10 != (longlong *)0x0) goto LAB_1461a47f3;
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_80 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    local_52 = CONCAT13(2,(undefined3)local_52);
    local_52 = CONCAT31(local_52._1_3_,1);
  }
  else {
    if (*(char *)((longlong)param_1 + 0xa1) != '\x01') {
      (**(code **)(*param_1 + 0x378))(param_1,&local_88);
      goto LAB_1461a43f9;
    }
    (**(code **)(*param_1 + 0x380))(param_1,&local_88);
    plVar10 = plStack_70;
    plVar1 = local_80;
    local_78 = local_88;
    if (local_80 == (longlong *)0x0) {
      if (plStack_70 != (longlong *)0x0) {
        plStack_70 = (longlong *)0x0;
LAB_1461a48a0:
        local_78 = local_88;
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar5 = *piVar2;
          UNLOCK();
joined_r0x0001461a488f:
          if (iVar5 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      if (local_80 == plStack_70) {
        LOCK();
        plVar10 = local_80 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar5 = *piVar2;
          UNLOCK();
          plVar10 = plVar1;
          goto joined_r0x0001461a488f;
        }
      }
      else {
        bVar13 = plStack_70 != (longlong *)0x0;
        plStack_70 = local_80;
        if (bVar13) goto LAB_1461a48a0;
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_80 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    local_52 = local_52 & 0xffffff;
    local_54 = CONCAT11(bVar12,(undefined1)local_54) ^ 0x100;
  }
  (**(code **)(*param_1 + 0x328))(param_1);
  (**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
  uVar9 = (**(code **)(*plVar6 + 0x98))(plVar6);
  FUN_1461a48dc(uVar9,&local_88,param_1,&LAB_1456f61ea);
  uVar9 = (**(code **)(*plVar6 + 0xa0))(plVar6);
  FUN_1461a49ae(uVar9,&local_88,param_1,&LAB_140e66250);
  uVar9 = (**(code **)(*plVar6 + 0xa8))(plVar6);
  FUN_1461a48dc(uVar9,&local_88,param_1,&LAB_1456f61f8);
  plVar10 = (longlong *)(**(code **)(*plVar6 + 0xb8))(plVar6);
  if ((int)plVar10[1] != 3) {
    FUN_1446efa72(plVar10,0,3,0x10);
    *(undefined4 *)(plVar10 + 1) = 3;
  }
  puVar3 = (undefined8 *)*plVar10;
  *puVar3 = &PTR_LAB_14a161fa0;
  uVar9 = FUN_144a3f946();
  puVar3[2] = uVar9;
  *puVar3 = &PTR_FUN_14b529ff0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_1);
  puVar3[4] = &LAB_148aef6ee;
  uVar9 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  FUN_146037462(uVar9,&local_88,param_1,&LAB_148aef6fc);
  if (bVar12 == 0) {
    uVar9 = (**(code **)(*plVar6 + 200))(plVar6);
    FUN_1461a4a80(uVar9,&local_88,param_1,&LAB_148aef70a);
    uVar9 = (**(code **)(*plVar6 + 0xd0))(plVar6);
    FUN_1461a4a80(uVar9,&local_88,param_1,&LAB_148aef718);
    uVar9 = (**(code **)(*plVar6 + 0xd8))(plVar6);
    FUN_1461a4c50(uVar9,&local_88,param_1);
  }
  if (*(char *)((longlong)param_1 + 0xa7) == '\0') {
    bVar12 = (**(code **)(*plVar6 + 0x48))(plVar6);
    LOCK();
    *(uint *)((longlong)param_1 + 0xec) = (uint)bVar12;
    UNLOCK();
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x1e) = 1;
  UNLOCK();
  FUN_14619aa88(&local_78);
LAB_1461a45fb:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a48da FUN_1461a48da body=1 status=ok
// SIG undefined FUN_1461a48da(void)

void FUN_1461a48da(void)

{
  return;
}



// FUNCTION 1461a48dc FUN_1461a48dc body=208 status=ok
// SIG undefined FUN_1461a48dc(void)

undefined8
FUN_1461a48dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar1 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b529f10;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a49ae FUN_1461a49ae body=208 status=ok
// SIG undefined FUN_1461a49ae(void)

undefined8
FUN_1461a49ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar1 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e01f80;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b529f80;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_3);
  puVar1[4] = param_4;
  FUN_140ca2242(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a4a80 FUN_1461a4a80 body=208 status=ok
// SIG undefined FUN_1461a4a80(void)

undefined8
FUN_1461a4a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar1 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b52a0d0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b52a060;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1461a4b52(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a4b52 FUN_1461a4b52 body=216 status=ok
// SIG undefined FUN_1461a4b52(void)

undefined8 * FUN_1461a4b52(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1461a4c38 FUN_1461a4c38 body=24 status=ok
// SIG undefined FUN_1461a4c38(void)

bool FUN_1461a4c38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1461a4c50 FUN_1461a4c50 body=210 status=ok
// SIG undefined FUN_1461a4c50(void)

undefined8 FUN_1461a4c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_48 = &PTR_LAB_14b52a1b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b52a140;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_3);
  puVar1[4] = &LAB_148aef726;
  FUN_1461a4d24(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a4d24 FUN_1461a4d24 body=216 status=ok
// SIG undefined FUN_1461a4d24(void)

undefined8 * FUN_1461a4d24(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1461a4e0a FUN_1461a4e0a body=24 status=ok
// SIG undefined FUN_1461a4e0a(void)

bool FUN_1461a4e0a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1461a4e22 FUN_1461a4e22 body=306 status=ok
// SIG undefined FUN_1461a4e22(void)

undefined8 * FUN_1461a4e22(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_14160fc98(param_1 + 1);
  if (*(int *)(param_1 + 10) < 0x8000) {
    *(undefined4 *)(param_1 + 10) = 0x8000;
    FUN_141610130(param_1 + 1);
  }
  if ((uint)(*(int *)(param_1 + 0xc) - *(int *)((longlong)param_1 + 0x8c)) < 0x8000) {
    FUN_14160fe1e(param_1 + 0xb);
    if (*(int *)(param_1 + 0x14) < 0x8000) {
      *(undefined4 *)(param_1 + 0x14) = 0x8000;
      FUN_1416102e2(param_1 + 0xb);
    }
  }
  if ((uint)(*(int *)(param_1 + 0x16) - *(int *)((longlong)param_1 + 0xdc)) < 0x8000) {
    FUN_14160ffa4(param_1 + 0x15);
    if (*(int *)(param_1 + 0x1e) < 0x8000) {
      *(undefined4 *)(param_1 + 0x1e) = 0x8000;
      FUN_141610494(param_1 + 0x15);
    }
  }
  return param_1;
}



// FUNCTION 1461a4f60 FUN_1461a4f60 body=470 status=ok
// SIG undefined FUN_1461a4f60(void)

undefined8 * FUN_1461a4f60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ad83f60;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  uVar5 = FUN_144830b78(param_1 + 9,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 9) = uVar5;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  uVar2 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar2;
  param_1[0xf] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar5 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x11) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar4;
  param_1[0x13] = DAT_14c846508;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x8000000080;
  *(undefined2 *)((longlong)param_1 + 0xac) = 2;
  param_1[0x16] = 0x4400000042b40000;
  *(undefined2 *)(param_1 + 0x17) = 1;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14ad88320;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 0x80;
  *(undefined4 *)(puVar6 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar6) && (param_1[5] = puVar6, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_48 = FUN_1446f8646();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar5 = FUN_144830b78(local_34);
  *(undefined4 *)(param_1 + 9) = uVar5;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a5138 FUN_1461a5138 body=302 status=ok
// SIG undefined FUN_1461a5138(void)

void FUN_1461a5138(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b98bdf0;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  *(undefined1 *)(plVar4 + 5) = 0;
  iVar3 = DAT_14cb970bc + 1;
  *(int *)((longlong)plVar4 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar3;
  plVar4[6] = param_1;
  *(undefined1 *)(plVar4 + 7) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b98be10;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_1461a5278(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a5278 FUN_1461a5278 body=162 status=ok
// SIG undefined FUN_1461a5278(void)

void FUN_1461a5278(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461a52b7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461a52b7;
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
LAB_1461a52b7:
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
                    /* WARNING: Could not recover jumptable at 0x0001461a5316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461a531a FUN_1461a531a body=158 status=ok
// SIG undefined FUN_1461a531a(void)

bool FUN_1461a531a(longlong param_1,undefined8 param_2)

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



// FUNCTION 1461a53ba FUN_1461a53ba body=684 status=ok
// SIG undefined FUN_1461a53ba(void)

void FUN_1461a53ba(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  longlong *plVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  PSRWLOCK SRWLock;
  longlong lVar16;
  undefined1 auStack_98 [40];
  PSRWLOCK local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1402815f4(param_1,&local_58);
  lVar5 = *(longlong *)(local_58 + 0xb0);
  SRWLock = (PSRWLOCK)(lVar5 + 0x88);
  AcquireSRWLockExclusive(SRWLock);
  *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*uStack_50)(uStack_50);
      LOCK();
      piVar1 = (int *)((longlong)uStack_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*uStack_50 + 0x10))(uStack_50);
      }
    }
  }
  local_58 = 0;
  uStack_50 = (longlong *)0x0;
  if (0 < (int)param_2[1]) {
    lVar14 = 0;
    lVar15 = 0;
    local_70 = SRWLock;
    do {
      lVar16 = *param_2;
      plVar2 = (longlong *)(lVar16 + lVar14);
      lVar11 = *(longlong *)(lVar16 + 8 + lVar14);
      if (lVar11 == 0) {
        uVar12 = FUN_1465f8c9c();
        lVar11 = FUN_14477b664(uVar12);
        plVar2[1] = lVar11;
      }
      lVar13 = *(longlong *)(lVar16 + 0x10 + lVar14);
      if (lVar13 == 0) {
        if ((lVar11 != 0) && (*plVar2 != 0)) {
          plVar6 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar6 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar8 == '\0')) {
            *(undefined8 *)(lVar16 + 0x10 + lVar14) = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar6 + 0x110))(plVar6);
            lVar13 = FUN_144aff482(uVar12,plVar2);
            *(longlong *)(lVar16 + 0x10 + lVar14) = lVar13;
            if (lVar13 != 0) goto LAB_1461a545a;
          }
        }
      }
      else {
LAB_1461a545a:
        puVar10 = (undefined8 *)FUN_1447a1f4a(lVar13 + 0x18);
        uVar7 = (ulonglong)uStack_50;
        lVar16 = (longlong)(int)uStack_50;
        uVar9 = (int)uStack_50 + 1;
        uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar9);
        if (uStack_50._4_4_ < uVar9) {
          FUN_1447a1bd6(&local_58,uVar7 & 0xffffffff);
        }
        lVar16 = lVar16 * 0x10;
        puVar3 = (undefined8 *)(local_58 + lVar16);
        *(undefined8 *)(local_58 + lVar16) = 0;
        iVar4 = *(int *)(puVar10 + 1);
        _Src = (void *)*puVar10;
        *(int *)(local_58 + 8 + lVar16) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar4,0);
          memcpy((void *)*puVar3,_Src,(longlong)iVar4 * 2);
        }
      }
      SRWLock = local_70;
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x18;
    } while (lVar15 < (int)param_2[1]);
    if (3 < (int)uStack_50) {
      FUN_14062fa62(&local_58,3,1);
    }
  }
  FUN_144a8b2a0(&local_68,&local_58,&DAT_149e19f34);
  if ((longlong *)(lVar5 + 0x38) == &local_68) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar5 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar5 + 0x38) = local_68;
    local_68 = 0;
    *(undefined4 *)(lVar5 + 0x40) = local_60;
    *(undefined4 *)(lVar5 + 0x44) = local_5c;
  }
  FUN_1447a1747(local_58,(ulonglong)uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461a5668 FUN_1461a5668 body=21 status=ok
// SIG undefined FUN_1461a5668(void)

undefined8 FUN_1461a5668(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1461a567e FUN_1461a567e body=173 status=ok
// SIG undefined FUN_1461a567e(void)

void FUN_1461a567e(void)

{
  longlong lVar1;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  wchar_t *local_120;
  undefined4 local_118;
  undefined1 local_110 [248];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1413e28b0(local_110);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_120 = 
  L"/MeshModelingToolset/Materials/M_DynamicMeshComponentVtxColor.M_DynamicMeshComponentVtxColor";
  local_118 = 0x5c;
  FUN_14475bf92(&local_148);
  lVar1 = FUN_1461a572c(local_110,&local_148);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  FUN_140f77756(local_110);
  if (lVar1 != 0) {
    FUN_1416106b4(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a572c FUN_1461a572c body=69 status=ok
// SIG undefined FUN_1461a572c(void)

longlong FUN_1461a572c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_141498c8a(param_1,param_2,0,0);
  if (lVar1 != 0) {
    lVar2 = FUN_140a1dfd8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1461a5771 FUN_1461a5771 body=32 status=ok
// SIG undefined FUN_1461a5771(void)

void FUN_1461a5771(void)

{
  FUN_141610b54(&DAT_14c9b7a90);
  atexit((_func_5014 *)&LAB_142b8dcaf);
  return;
}



// FUNCTION 1461a5791 FUN_1461a5791 body=32 status=ok
// SIG undefined FUN_1461a5791(void)

void FUN_1461a5791(void)

{
  FUN_141610d18(&DAT_14c9b7aa8);
  atexit((_func_5014 *)&LAB_142b8dcbb);
  return;
}



// FUNCTION 1461a57b1 FUN_1461a57b1 body=32 status=ok
// SIG undefined FUN_1461a57b1(void)

void FUN_1461a57b1(void)

{
  FUN_141610edc(&DAT_14c9c0868);
  atexit((_func_5014 *)&LAB_142b8dcc7);
  return;
}



// FUNCTION 1461a57d1 FUN_1461a57d1 body=32 status=ok
// SIG undefined FUN_1461a57d1(void)

void FUN_1461a57d1(void)

{
  FUN_1416110a0(&DAT_14c9c0850);
  atexit((_func_5014 *)&LAB_142b8dcd3);
  return;
}



// FUNCTION 1461a57f1 FUN_1461a57f1 body=32 status=ok
// SIG undefined FUN_1461a57f1(void)

void FUN_1461a57f1(void)

{
  FUN_141611264(&DAT_14c9c9ac0);
  atexit((_func_5014 *)&LAB_142be532f);
  return;
}



// FUNCTION 1461a5811 FUN_1461a5811 body=32 status=ok
// SIG undefined FUN_1461a5811(void)

void FUN_1461a5811(void)

{
  FUN_141611428(&DAT_14c9eb9c8);
  atexit((_func_5014 *)&LAB_142cf41d8);
  return;
}



// FUNCTION 1461a5831 FUN_1461a5831 body=32 status=ok
// SIG undefined FUN_1461a5831(void)

void FUN_1461a5831(void)

{
  FUN_1416115ec(&DAT_14c9eb9e0);
  atexit((_func_5014 *)&LAB_142cf4208);
  return;
}



// FUNCTION 1461a5851 FUN_1461a5851 body=32 status=ok
// SIG undefined FUN_1461a5851(void)

void FUN_1461a5851(void)

{
  FUN_1416117b0(&DAT_14ca00798);
  atexit((_func_5014 *)&LAB_142d99235);
  return;
}



// FUNCTION 1461a587c FUN_1461a587c body=471 status=ok
// SIG undefined FUN_1461a587c(void)

undefined8 * FUN_1461a587c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4c86f0;
  param_1[0x1f] = &PTR_LAB_14a4c8a60;
  FUN_140e6b310(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x1b) = 1;
  local_58 = 0xd2704c107b5ae74c;
  uStack_50 = 0xb212a5aa9585798;
  iVar4 = FUN_1448a256a(param_1);
  if (iVar4 < 4) {
    cVar3 = '\0';
  }
  else {
    local_68 = 0xd2704c107b5ae74c;
    uStack_60 = 0xb212a5aa9585798;
    iVar4 = FUN_1448a256a(param_1);
    cVar3 = '\x02' - (iVar4 < 6);
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = cVar3;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar5 + 2;
  FUN_140e6b3bc(plVar1,param_1 + 0x20);
  local_78 = plVar1;
  local_70 = plVar5;
  FUN_140aec6f8(&local_78,plVar1);
  plVar1 = local_70;
  if (local_70 == (longlong *)0x0) {
    param_1[0x1c] = local_78;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_1461a5993;
    param_1[0x1d] = 0;
LAB_1461a59f5:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1461a5993;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    param_1[0x1c] = local_78;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_70 != plVar5) {
      param_1[0x1d] = local_70;
      if (plVar5 == (longlong *)0x0) goto LAB_1461a5993;
      goto LAB_1461a59f5;
    }
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1461a5993;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1461a5993:
  plVar1 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a5a54 FUN_1461a5a54 body=152 status=ok
// SIG undefined FUN_1461a5a54(void)

undefined8 *
FUN_1461a5a54(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5a9ea0;
  uVar1 = *param_4;
  local_20 = *param_3;
  local_18 = param_3[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1461a5aee(param_1 + 2,&local_30,&local_20,uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a5aee FUN_1461a5aee body=330 status=ok
// SIG undefined FUN_1461a5aee(void)

undefined8 *
FUN_1461a5aee(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  lVar4 = param_3[1];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_4;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  lVar4 = FUN_14001cc68(0xe8,0x10);
  FUN_141581cde(lVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a356360;
  plVar5[2] = lVar4;
  param_1[3] = lVar4;
  plVar3 = (longlong *)param_1[4];
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) goto LAB_1461a5b95;
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1461a5b95;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    param_1[4] = plVar5;
    if (plVar3 == (longlong *)0x0) goto LAB_1461a5b95;
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1461a5b95;
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
LAB_1461a5b95:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  return param_1;
}



// FUNCTION 1461a5c38 FUN_1461a5c38 body=103 status=ok
// SIG undefined FUN_1461a5c38(void)

undefined8 FUN_1461a5c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_4 + 0x20);
  local_20 = *(undefined8 *)(param_4 + 0x28);
  local_18 = *(longlong *)(param_4 + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1461a5ca0(param_1,param_2,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a5ca0 FUN_1461a5ca0 body=368 status=ok
// SIG undefined FUN_1461a5ca0(void)

undefined1 * FUN_1461a5ca0(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0x270) == (longlong *)0x0) {
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x270) + 0x80))();
    uVar5 = uStack_40;
    lVar4 = local_48;
    if ((longlong)(int)uStack_40 != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(local_48 + lVar6) == *param_3) {
          *param_2 = 0;
          param_2[0x20] = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
          memset(param_2 + 0x28,0,0x88);
          *(undefined4 *)(param_2 + 0xb0) = 0x20702;
          param_2[0xb4] = 0;
          FUN_144a65a1e(lVar4,uVar5 & 0xffffffff);
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          goto LAB_1461a5d5d;
        }
        lVar6 = lVar6 + 0x18;
      } while ((longlong)(int)uStack_40 * 0x18 != lVar6);
    }
  }
  FUN_144a65a1e(local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1461a5d5d:
  plVar3 = (longlong *)param_3[2];
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461a5e12 FUN_1461a5e12 body=710 status=ok
// SIG undefined FUN_1461a5e12(void)

void FUN_1461a5e12(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined1 local_160;
  undefined1 *local_158;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_a4;
  undefined4 local_78;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  memset(local_148,0,0x100);
  local_78 = 0xffffffff;
  local_144 = 0x3f800000;
  local_a4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  local_158 = local_148;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_158 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_160 = iVar1 != 0;
  local_168 = local_44;
  FUN_1461a60da(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a60da FUN_1461a60da body=14 status=ok
// SIG undefined FUN_1461a60da(void)

void FUN_1461a60da(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    FUN_14571423e(param_1,param_3);
    return;
  }
  return;
}



// FUNCTION 1461a60e8 FUN_1461a60e8 body=76 status=ok
// SIG undefined FUN_1461a60e8(void)

undefined8 FUN_1461a60e8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x3f8) != 0) && (lVar1 = FUN_1461a6134(), lVar1 != 0)) {
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x20))(param_1 + 0x3c0,lVar1);
    *(undefined8 *)(param_1 + 0x410) = *param_2;
    return uVar2;
  }
  return 0;
}



// FUNCTION 1461a6134 FUN_1461a6134 body=166 status=ok
// SIG undefined FUN_1461a6134(void)

longlong FUN_1461a6134(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
    lVar4 = *param_2;
    uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar9 = (uint)lVar4 & 0xffff;
    lVar5 = param_1 + 0x138;
    if (*(longlong *)(param_1 + 0x140) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x140);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x148) - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x100) + (longlong)iVar3 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar3 * 0x38) == lVar4) {
          if (lVar5 == 0) {
            return 0;
          }
          puVar6 = (uint *)(lVar5 + 8);
          if (puVar6 == (uint *)0x0) {
            return 0;
          }
          if (((((*(int *)(lVar5 + 0xc) == 0) || (uVar1 = *puVar6, (int)uVar1 < 0)) ||
               (DAT_14c9647dc <= (int)uVar1)) ||
              ((plVar7 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(lVar5 + 0xc))))) ||
             (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar4 = *plVar7, lVar4 == 0)))) {
            if (*(longlong *)(lVar5 + 0x10) == 0) {
              return 0;
            }
            lVar4 = FUN_140007850();
            cVar2 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar4 == 0) || (cVar2 == '\0')) {
              if (lVar4 == 0) {
                puVar6[0] = 0;
                puVar6[1] = 0;
                return 0;
              }
              uVar1 = *(uint *)(lVar4 + 0xc);
              *puVar6 = uVar1;
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar10 = 0;
              }
              iVar3 = *(int *)(lVar10 + 0x10);
              if (*(int *)(lVar10 + 0x10) == 0) {
                LOCK();
                iVar3 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar3;
                if (bVar11) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar3 = *(int *)(lVar10 + 0x10);
                bVar11 = iVar3 == 0;
                if (bVar11) {
                  *(int *)(lVar10 + 0x10) = iVar8;
                  iVar3 = 0;
                }
                UNLOCK();
                if (bVar11) {
                  iVar3 = iVar8;
                }
              }
              *(int *)(lVar5 + 0xc) = iVar3;
            }
            else {
              uVar1 = *(uint *)(lVar4 + 0xc);
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar5 = 0;
              }
              if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(puVar6,lVar4);
              }
            }
            if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
              return 0;
            }
          }
          lVar5 = FUN_14053ad22();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            return lVar4;
          }
          return 0;
        }
        iVar3 = *(int *)(lVar5 + 0x30);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1461a61da FUN_1461a61da body=165 status=ok
// SIG undefined FUN_1461a61da(void)

bool FUN_1461a61da(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a6280 FUN_1461a6280 body=392 status=ok
// SIG undefined FUN_1461a6280(void)

void FUN_1461a6280(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar4 = FUN_1449f3324();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       ((longlong)*(int *)(param_1 + 0x520) != 0)) {
      lVar4 = *(longlong *)(param_1 + 0x518);
      lVar10 = (longlong)*(int *)(param_1 + 0x520) * 0x90 + lVar4;
      do {
        iVar2 = *(int *)(lVar4 + 0x70);
        if (0 < iVar2) {
          plVar1 = (longlong *)(lVar4 + 0x68);
          lVar9 = 0;
          bVar7 = false;
          do {
            lVar6 = lVar9 * 0xc;
            while (lVar5 = FUN_14479d2ce(*plVar1 + lVar6), lVar5 != param_3) {
              lVar9 = lVar9 + 1;
              iVar3 = *(int *)(lVar4 + 0x70);
              lVar6 = lVar6 + 0xc;
              if (iVar3 <= lVar9) {
                if (!bVar7) goto LAB_1461a63bb;
                goto LAB_1461a63af;
              }
            }
            do {
              iVar3 = *(int *)(lVar4 + 0x70);
              if (iVar3 - 1U != (uint)lVar9) {
                iVar8 = ~(uint)lVar9 + iVar3;
                if (0 < iVar8) {
                  iVar8 = 1;
                }
                memmove((void *)(*(longlong *)(lVar4 + 0x68) + lVar6),
                        (void *)(*(longlong *)(lVar4 + 0x68) + (longlong)(iVar3 - iVar8) * 0xc),
                        (longlong)iVar8 * 0xc);
                iVar3 = *(int *)(lVar4 + 0x70);
              }
              *(int *)(lVar4 + 0x70) = iVar3 + -1;
              if (iVar3 + -1 <= lVar9) goto LAB_1461a63af;
              lVar5 = FUN_14479d2ce(*plVar1 + lVar6);
            } while (lVar5 == param_3);
            lVar9 = lVar9 + 1;
            bVar7 = true;
          } while (lVar9 < *(int *)(lVar4 + 0x70));
LAB_1461a63af:
          FUN_1461a6408(plVar1);
          iVar3 = *(int *)(lVar4 + 0x70);
LAB_1461a63bb:
          if ((iVar3 < iVar2) && (*(int *)(lVar4 + 0x88) < 4)) {
            FUN_143e17e58(param_1,*(undefined2 *)(lVar4 + 0xc));
          }
        }
        lVar4 = lVar4 + 0x90;
      } while (lVar4 != lVar10);
    }
  }
  return;
}



// FUNCTION 1461a6408 FUN_1461a6408 body=63 status=ok
// SIG undefined FUN_1461a6408(void)

void FUN_1461a6408(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1461a6448(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 1461a6448 FUN_1461a6448 body=105 status=ok
// SIG undefined FUN_1461a6448(void)

ulonglong FUN_1461a6448(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xc) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 1461a64b2 FUN_1461a64b2 body=75 status=ok
// SIG undefined FUN_1461a64b2(void)

void FUN_1461a64b2(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14001cc68(0xa0,0x10);
  FUN_1461a64fe(uVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001461a64fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



// FUNCTION 1461a64fe FUN_1461a64fe body=411 status=ok
// SIG undefined FUN_1461a64fe(void)

undefined8 * FUN_1461a64fe(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a1e8f50;
  *(undefined4 *)(param_1 + 1) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_144a52528();
  FUN_1446ddc76(&local_30,"ImageWrapper",1);
  uVar3 = FUN_144a52528();
  FUN_1402c9134(uVar3,local_30,&local_48,1);
  uVar3 = FUN_1405d8a54(0);
  param_1[2] = uVar3;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar2 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar3 = FUN_144a3f946();
  puVar2[2] = uVar3;
  *puVar2 = &PTR_FUN_14a1e93e0;
  puVar2[3] = param_1;
  puVar2[4] = FUN_140e55498;
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_38,&local_48);
  param_1[0x12] = local_38;
  FUN_1449db362(&local_48);
  FUN_140e55498(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a669a FUN_1461a669a body=52 status=ok
// SIG undefined FUN_1461a669a(void)

void FUN_1461a669a(longlong param_1)

{
  FUN_1407cbe30();
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1461a66ce(*(longlong *)(param_1 + 0x288),param_1 + 0x160);
    return;
  }
  return;
}



// FUNCTION 1461a66ce FUN_1461a66ce body=434 status=ok
// SIG undefined FUN_1461a66ce(void)

void FUN_1461a66ce(longlong param_1,longlong *param_2)

{
  ushort *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte bVar6;
  byte *pbVar7;
  byte bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    puVar3 = &DAT_14c9a1308;
  }
  else {
    puVar3 = (undefined8 *)FUN_1408db3b0(*param_2,"class_html");
  }
  uVar4 = FUN_144a7cdd6(puVar3,&DAT_149e62dd2);
  FUN_1400b22c2(&local_38,uVar4);
  if ((longlong *)(param_1 + 0xf8) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xf8) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x100) = local_30;
    *(undefined4 *)(param_1 + 0x104) = local_2c;
  }
  if (*param_2 == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar5 = (longlong *)FUN_1408db3b0(*param_2,"is_full_inventory_ammo_always_visible");
  }
  if (*plVar5 == 0) {
    bVar6 = *(byte *)(param_1 + 0x118);
    bVar8 = 0;
  }
  else {
    bVar8 = 0;
    cVar2 = FUN_14000584e(*plVar5,0);
    bVar6 = *(byte *)(param_1 + 0x118);
    if (cVar2 != '\0') {
      bVar8 = 0x40;
    }
  }
  pbVar7 = (byte *)(param_1 + 0x118);
  *pbVar7 = bVar6 & 0xbf | bVar8;
  if (*param_2 == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar5 = (longlong *)FUN_1408db3b0(*param_2,"skip_repair_kit");
  }
  if (*plVar5 == 0) {
    bVar6 = *pbVar7;
  }
  else {
    cVar2 = FUN_14000584e(*plVar5,1);
    bVar6 = *pbVar7;
    if (cVar2 == '\0') {
      bVar8 = 0;
      goto LAB_1461a67f0;
    }
  }
  bVar8 = 0x80;
LAB_1461a67f0:
  *(byte *)(param_1 + 0x118) = bVar6 & 0x7f | bVar8;
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a6882 FUN_1461a6882 body=63 status=ok
// SIG undefined FUN_1461a6882(void)

void FUN_1461a6882(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_145bd989c(lVar1);
    if (lVar1 != 0) {
      FUN_1461a68c2(lVar1,param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1461a68c2 FUN_1461a68c2 body=510 status=ok
// SIG undefined FUN_1461a68c2(void)

undefined4 FUN_1461a68c2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_1401b2ade(param_3);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_144a7ba4c(lVar6);
  }
  FUN_146010760(param_1 + 0xb8,&local_60,param_3,uVar7);
  if (local_60 != DAT_14cbcd3c0) {
    cVar3 = FUN_140dddae6(param_2);
    if (cVar3 != '\0') {
      iVar9 = 0;
      local_98 = (longlong *)0x0;
      local_58 = 0;
      FUN_14131b4b0(local_70,&local_60);
      uVar4 = FUN_140dddae6(local_70);
      if ((char)uVar4 != '\0') {
        plVar8 = (longlong *)FUN_140dddafc(local_70);
        plVar1 = plVar8 + 3;
        local_58 = 0x100000000;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_50 = plVar1;
        if ((int)plVar8[6] != 0) {
          FUN_1449c0562(&local_58);
          iVar9 = (int)plVar8[6];
        }
        local_80 = local_48;
        uVar7 = local_80;
        local_78 = local_40;
        local_74 = local_3c;
        local_90 = local_58;
        local_88 = local_50;
        local_80._4_4_ = (int)((ulonglong)local_48 >> 0x20);
        iVar5 = local_80._4_4_;
        local_98 = plVar8;
        if ((local_80._4_4_ != iVar9) || (local_80 = uVar7, local_50 != plVar1)) {
          do {
            local_80 = uVar7;
            FUN_14161210c(param_2,*local_98 + (longlong)iVar5 * 0x40,
                          *local_98 + (longlong)iVar5 * 0x40 + 0x28);
            local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
            FUN_1449c0562(&local_90);
            iVar5 = local_80._4_4_;
            uVar7 = local_80;
          } while (local_98 != plVar8 || (local_88 != plVar1 || local_80._4_4_ != iVar9));
        }
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
      goto LAB_1461a6a70;
    }
  }
  uVar4 = 0;
LAB_1461a6a70:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a6ac6 FUN_1461a6ac6 body=136 status=ok
// SIG undefined FUN_1461a6ac6(void)

code * FUN_1461a6ac6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148049344;
}



// FUNCTION 1461a6b4e FUN_1461a6b4e body=138 status=ok
// SIG undefined FUN_1461a6b4e(void)

code * FUN_1461a6b4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultVelocity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148049230;
}



// FUNCTION 1461a6bd8 FUN_1461a6bd8 body=226 status=ok
// SIG undefined FUN_1461a6bd8(void)

longlong * FUN_1461a6bd8(longlong *param_1)

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
  pcVar13 = FUN_1464602a4;
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



// FUNCTION 1461a6cbc FUN_1461a6cbc body=132 status=ok
// SIG undefined FUN_1461a6cbc(void)

undefined1 * FUN_1461a6cbc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumCutoutVerticesPerFrame";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14804ad1e;
}



// FUNCTION 1461a6d40 FUN_1461a6d40 body=138 status=ok
// SIG undefined FUN_1461a6d40(void)

code * FUN_1461a6d40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SortedIndicesOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000063;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804ab80;
}



// FUNCTION 1461a6dca FUN_1461a6dca body=138 status=ok
// SIG undefined FUN_1461a6dca(void)

code * FUN_1461a6dca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgsOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1461a6d40;
}



// FUNCTION 1461a6e54 FUN_1461a6e54 body=40 status=ok
// SIG undefined FUN_1461a6e54(void)

undefined8 FUN_1461a6e54(undefined8 param_1,int param_2)

{
  FUN_1461a6e7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461a6e7c FUN_1461a6e7c body=1347 status=ok
// SIG undefined FUN_1461a6e7c(void)

void FUN_1461a6e7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b62a510;
  param_1[0x72] = &PTR_FUN_14b62b0f0;
  param_1[0xe9] = &PTR_FUN_14b62b150;
  param_1[0xea] = &PTR_FUN_14b62b168;
  param_1[0x10c] = &PTR_FUN_14b62b180;
  param_1[0x10d] = &PTR_FUN_14b62b1a0;
  param_1[0x10e] = &PTR_FUN_14b62b1e0;
  param_1[0x10f] = &PTR_FUN_14b62b200;
  param_1[0x214] = &PTR_FUN_14b62b220;
  param_1[0x215] = &PTR_FUN_14b62b2e0;
  param_1[0x216] = &PTR_FUN_14b62b310;
  param_1[0x217] = &PTR_FUN_14b62b380;
  param_1[0x218] = &PTR_FUN_14b62b3b0;
  param_1[0x219] = &PTR_FUN_14b62b430;
  param_1[0x21a] = &PTR_FUN_14b62b4a0;
  param_1[0x21b] = &PTR_FUN_14b62b4d0;
  param_1[0x21c] = &PTR_FUN_14b62b500;
  param_1[0x21d] = &PTR_FUN_14b62b570;
  param_1[0x21e] = &PTR_FUN_14b62b590;
  param_1[0x21f] = &PTR_FUN_14b62b5b0;
  param_1[0x220] = &PTR_FUN_14b62b5e0;
  param_1[0x221] = &PTR_FUN_14b62b620;
  param_1[0x222] = &PTR_FUN_14b62b640;
  param_1[0x223] = &PTR_FUN_14b62b660;
  param_1[0x224] = &PTR_FUN_14b62b690;
  param_1[0x225] = &PTR_FUN_14b62b6d0;
  param_1[0x226] = &PTR_FUN_14b62b6f0;
  param_1[0x227] = &PTR_FUN_14b62b710;
  param_1[0x228] = &PTR_FUN_14b62b7b0;
  param_1[0x229] = &PTR_FUN_14b62b7e0;
  param_1[0x22a] = &PTR_FUN_14b62b800;
  param_1[0x22b] = &PTR_FUN_14b62b840;
  param_1[0x22c] = &PTR_FUN_14b62b870;
  param_1[0x22d] = &PTR_FUN_14b62b890;
  param_1[0x22e] = &PTR_FUN_14b62b8c0;
  param_1[0x22f] = &PTR_FUN_14b62b910;
  param_1[0x230] = &PTR_FUN_14b62b940;
  param_1[0x231] = &PTR_FUN_14b62b990;
  param_1[0x232] = &PTR_FUN_14b62b9c0;
  param_1[0x233] = &PTR_FUN_14b62b9e0;
  param_1[0x236] = &PTR_FUN_14b62ba20;
  param_1[0x744] = &PTR_FUN_14b62ba40;
  param_1[0x745] = &PTR_FUN_14b62ba60;
  param_1[0x746] = &PTR_FUN_14b62ba90;
  param_1[0x747] = &PTR_FUN_14b62bb70;
  param_1[0x748] = &PTR_FUN_14b62bb90;
  param_1[0x749] = &PTR_FUN_14b62bba8;
  param_1[0x750] = &PTR_FUN_14b62bbc0;
  param_1[0x751] = &PTR_FUN_14b62bbe0;
  param_1[0x752] = &PTR_FUN_14b62bc20;
  param_1[0x759] = &PTR_FUN_14b62bcd0;
  param_1[0x75a] = &PTR_FUN_14b62bd10;
  param_1[0x75b] = &PTR_FUN_14b62bd40;
  param_1[0x75c] = &PTR_FUN_14b62bd70;
  param_1[0x75d] = &PTR_FUN_14b62bdb0;
  param_1[0x761] = &PTR_FUN_14b62bdd0;
  param_1[0x764] = &PTR_FUN_14b62bde0;
  param_1[0x765] = &PTR_FUN_14b62be20;
  param_1[0x766] = &PTR_FUN_14b62bf30;
  param_1[0x767] = &PTR_FUN_14b62bf50;
  param_1[0x768] = &PTR_FUN_14b62bf70;
  param_1[0x769] = &PTR_FUN_14b62c010;
  param_1[0x76a] = &PTR_FUN_14b62c0b0;
  param_1[0x76b] = &PTR_FUN_14b62c0f0;
  param_1[0x76c] = &PTR_FUN_14b62c120;
  param_1[0x76d] = &PTR_FUN_14b62c1b0;
  param_1[0x76e] = &PTR_FUN_14b62c220;
  param_1[0x773] = &PTR_FUN_14b62c250;
  param_1[0x774] = &PTR_FUN_14b62c290;
  param_1[0x775] = &PTR_FUN_14b62c2c0;
  param_1[0x776] = &PTR_FUN_14b62c2d8;
  param_1[0x777] = &PTR_FUN_14b62c2f0;
  param_1[0x778] = &PTR_FUN_14b62c320;
  param_1[0x779] = &PTR_FUN_14b62c350;
  param_1[0x77c] = &PTR_FUN_14b62c390;
  param_1[0x77d] = &PTR_FUN_14b62c3b0;
  param_1[0x77e] = &PTR_FUN_14b62c480;
  param_1[0x77f] = &PTR_FUN_14b62c4a0;
  param_1[0x780] = &PTR_FUN_14b62c4c0;
  param_1[0x781] = &PTR_FUN_14b62c4f0;
  param_1[0x782] = &PTR_FUN_14b62c510;
  param_1[0x783] = &PTR_FUN_14b62c530;
  param_1[0x784] = &PTR_FUN_14b62c560;
  param_1[0x785] = &PTR_FUN_14b62c590;
  param_1[0x786] = &PTR_FUN_14b62c5b0;
  param_1[0x787] = &PTR_FUN_14b62c5d0;
  param_1[0x788] = &PTR_FUN_14b62c600;
  param_1[0x789] = &PTR_FUN_14b62c620;
  param_1[0x78a] = &PTR_FUN_14b62c640;
  param_1[0x78b] = &PTR_FUN_14b62c690;
  param_1[0x78c] = &PTR_FUN_14b62c6d0;
  param_1[0x78d] = &PTR_FUN_14b62c730;
  FUN_1461a73bf(param_1[0x139d],*(undefined4 *)(param_1 + 0x139e));
  if (param_1[0x139d] != 0) {
    FUN_1400020a8();
  }
  FUN_14145c7a0(param_1);
  return;
}



// FUNCTION 1461a73bf FUN_1461a73bf body=77 status=ok
// SIG undefined FUN_1461a73bf(void)

void FUN_1461a73bf(longlong param_1,int param_2)

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



// FUNCTION 1461a740c FUN_1461a740c body=22 status=ok
// SIG undefined FUN_1461a740c(void)

undefined8 FUN_1461a740c(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cbe5410;
  if (DAT_14cbe5410 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbe5410 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbe5410 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbe5410[0x3a] <= *(int *)((longlong)DAT_14cbe5410 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cbe5410 + 0x300))(DAT_14cbe5410);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1461a7422 FUN_1461a7422 body=183 status=ok
// SIG undefined FUN_1461a7422(void)

void FUN_1461a7422(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = (code *)0x0;
  local_58 = (longlong *)0x0;
  cVar2 = FUN_141612a1a(param_1 + 0x520,local_68);
  if (cVar2 != '\0') {
    do {
      pcVar1 = local_68[0];
      plVar4 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar4 = local_48;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      cVar2 = FUN_141612a1a(param_1 + 0x520,local_68);
    } while (cVar2 != '\0');
  }
  if (local_68[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461a74da FUN_1461a74da body=495 status=ok
// SIG undefined FUN_1461a74da(void)

void FUN_1461a74da(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  code *local_68;
  undefined4 local_60;
  undefined8 local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = FUN_1459a0684;
  local_60 = 0;
  FUN_1461a76ca(local_58,param_1);
  FUN_145ace2c8(&DAT_14cb896c8,&local_68,local_58);
  FUN_1449db362(local_58);
  local_68 = FUN_1459a056a;
  local_60 = 0;
  FUN_1461a76ca(local_58,param_1,&local_68);
  FUN_145ace2c8(&DAT_14cb896e0,&local_68,local_58);
  FUN_1449db362(local_58);
  lVar2 = FUN_14479d2ce(param_1 + 8);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x238))) {
    local_70 = param_1 + 0x20;
    iVar5 = 0;
    lVar6 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar6);
      if (lVar3 != 0) {
        lVar4 = FUN_144a5dd5e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar4 = *(longlong *)(lVar3 + 0xf48);
          if (lVar4 != 0) {
            local_58[0] = 0;
            FUN_14485c47a(local_58,lVar4);
            iVar1 = *(int *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = iVar1 + 1U;
            if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
              FUN_145cb4378(local_70,iVar1);
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = local_58[0];
            FUN_145cb43fe(param_1,lVar4);
          }
          local_68 = FUN_145cb4248;
          local_60 = 0;
          FUN_1461a7876(local_58,param_1,&local_68);
          FUN_141230466(lVar3 + 0x9c0,&local_68,local_58);
          FUN_1449db362(local_58);
        }
      }
      lVar6 = lVar6 + 8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x238));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461a76ca FUN_1461a76ca body=428 status=ok
// SIG undefined FUN_1461a76ca(void)

longlong * FUN_1461a76ca(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1461a77aa:
    *puVar5 = &PTR_LAB_14b3ecd00;
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
    *puVar5 = &PTR_FUN_14b9637c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461a77aa;
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
    *puVar5 = &PTR_LAB_14b3ecd00;
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
    *puVar5 = &PTR_FUN_14b9637c0;
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



// FUNCTION 1461a7876 FUN_1461a7876 body=428 status=ok
// SIG undefined FUN_1461a7876(void)

longlong * FUN_1461a7876(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1461a7956:
    *puVar5 = &PTR_LAB_14b3fc260;
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
    *puVar5 = &PTR_FUN_14b963830;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461a7956;
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
    *puVar5 = &PTR_LAB_14b3fc260;
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
    *puVar5 = &PTR_FUN_14b963830;
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



// FUNCTION 1461a7a22 FUN_1461a7a22 body=131 status=ok
// SIG undefined FUN_1461a7a22(void)

undefined4 * FUN_1461a7a22(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1 + (longlong)(int)param_1[1] * 0x50;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar1 + -0x40);
  uVar2 = *(undefined4 *)(lVar1 + -0x4c);
  uVar3 = *(undefined4 *)(lVar1 + -0x48);
  uVar4 = *(undefined4 *)(lVar1 + -0x44);
  *param_2 = *(undefined4 *)(lVar1 + -0x50);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  FUN_14581caea(param_2 + 6,lVar1 + -0x38);
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(lVar1 + -0x20);
  *(undefined8 *)(lVar1 + -0x20) = 0;
  param_2[0xe] = *(undefined4 *)(lVar1 + -0x18);
  param_2[0xf] = *(undefined4 *)(lVar1 + -0x14);
  *(undefined8 *)(lVar1 + -0x18) = 0;
  *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(lVar1 + -8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar1 + -0x10);
  FUN_1461a7aa6(param_1,(int)param_1[1] + -1);
  return param_2;
}



// FUNCTION 1461a7aa6 FUN_1461a7aa6 body=115 status=ok
// SIG undefined FUN_1461a7aa6(void)

void FUN_1461a7aa6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x50;
  FUN_140de863f(*(undefined8 *)(lVar1 + 0x30 + lVar3),*(undefined4 *)(lVar1 + 0x38 + lVar3));
  if (*(longlong *)(lVar1 + 0x30 + lVar3) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + lVar3 + 0x50),
            (longlong)(int)(~param_2 + iVar2) * 0x50);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1461a7b1a FUN_1461a7b1a body=175 status=ok
// SIG undefined FUN_1461a7b1a(void)

bool FUN_1461a7b1a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1461a7bca FUN_1461a7bca body=70 status=ok
// SIG undefined FUN_1461a7bca(void)

void FUN_1461a7bca(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1461a7bfb;
  }
  param_4 = 0;
LAB_1461a7bfb:
  FUN_145c46468(param_1,param_4);
  return;
}



// FUNCTION 1461a7c1c FUN_1461a7c1c body=480 status=ok
// SIG undefined FUN_1461a7c1c(void)

undefined8 * FUN_1461a7c1c(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
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
  FUN_145aa0ce2();
  *param_1 = &PTR_FUN_14ba63920;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  lVar4 = FUN_1459f5c76();
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  plVar1 = param_1 + 0x7b;
  param_1[0x74] = lVar4;
  lVar4 = FUN_1458996a6();
  if (lVar4 == 0) {
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    if (*(int *)((longlong)param_1 + 0x3e4) < 0) {
      FUN_1446f8c06(plVar1,0);
    }
    if ((undefined2 *)*plVar1 != (undefined2 *)0x0) {
      *(undefined2 *)*plVar1 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_58,lVar4);
    *(undefined4 *)(param_1 + 0x79) = local_58;
    *(undefined4 *)((longlong)param_1 + 0x3cc) = uStack_54;
    *(undefined4 *)(param_1 + 0x7a) = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x3d4) = uStack_4c;
    if (param_1 + 0x79 == (undefined8 *)&local_58) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[0x7b] = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x7c) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x3e4) = local_3c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x78] = 0;
        goto LAB_1461a7d24;
      }
    }
    FUN_14485c47a(param_1 + 0x78,lVar4);
  }
LAB_1461a7d24:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a7e04 FUN_1461a7e04 body=40 status=ok
// SIG undefined FUN_1461a7e04(void)

undefined8 FUN_1461a7e04(undefined8 param_1,int param_2)

{
  FUN_1461a7e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461a7e2c FUN_1461a7e2c body=177 status=ok
// SIG undefined FUN_1461a7e2c(void)

void FUN_1461a7e2c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a8d5d90;
  param_1[5] = &PTR_FUN_14a8d6300;
  lVar3 = param_1[0x274];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  plVar4 = (longlong *)param_1[0x271];
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
  plVar4 = (longlong *)param_1[0x26f];
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
  plVar4 = (longlong *)param_1[0x26d];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_141613188(param_1);
  return;
}



// FUNCTION 1461a7ede FUN_1461a7ede body=53 status=ok
// SIG undefined FUN_1461a7ede(void)

void FUN_1461a7ede(longlong *param_1)

{
  FUN_141613e2e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461a7f1e FUN_1461a7f1e body=483 status=ok
// SIG undefined FUN_1461a7f1e(void)

undefined8 * FUN_1461a7f1e(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_145943e5e();
  *param_1 = &PTR_FUN_14ac0b5b0;
  FUN_14111896e(param_1 + 0x12);
  FUN_14111896e(param_1 + 0x1a);
  FUN_145c3d274(param_1 + 0x21);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x149) = 0;
  *(undefined8 *)((longlong)param_1 + 0x151) = 0;
  FUN_14111896e(param_1 + 0x2c);
  param_1[0x34] = 0;
  FUN_14111896e(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x44800000;
  *(undefined4 *)(param_1 + 0x40) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x41200000;
  param_1[0x41] = &DAT_41200000;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined2 *)((longlong)param_1 + 0x21c) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xffffffc0 | 0x1e;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x34] = lVar1;
  lVar1 = FUN_145943f0a();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[8] = lVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x20) = 0x42480000;
  *(undefined4 *)(param_1 + 0x27) = 8;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x28] = lVar1;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x2a] = lVar1;
  *(undefined4 *)(param_1 + 0x32) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x33) = 0x40c90fdb;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xffffffcf | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x21d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x85) = 0;
  return param_1;
}



// FUNCTION 1461a8102 FUN_1461a8102 body=893 status=ok
// SIG undefined FUN_1461a8102(void)

longlong * FUN_1461a8102(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = 0;
  *param_1 = (longlong)&PTR_FUN_14a8950a0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  *(undefined4 *)(param_1 + 5) = 0x40a00000;
  param_1[6] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar3 = FUN_14054d46e(&DAT_14c846b20,L"NoTextureStreaming");
  if (cVar3 != '\0') {
    FUN_140635eb8(DAT_14cb0b100,0,0xc000000,0);
  }
  (**(code **)(*param_1 + 0x98))(param_1,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caced84) {
    FUN_144b3d300(&DAT_14caced84);
    if (DAT_14caced84 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar3 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
      if (cVar3 == '\0') {
        DAT_14caced80 = 0;
      }
      else {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar4 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
        DAT_14caced80 = bVar4 ^ 1;
      }
      _Init_thread_footer(&DAT_14caced84);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caced8c) {
    FUN_144b3d300(&DAT_14caced8c);
    if (DAT_14caced8c == -1) {
      DAT_14caced88 = 1;
      if (DAT_14c866ff0 == '\0') {
        if (DAT_14c872bf0 == '\x01') {
          DAT_14caced88 = DAT_14c872bc0 ^ 1;
        }
        else {
          DAT_14caced88 = 0;
        }
      }
      _Init_thread_footer(&DAT_14caced8c);
    }
  }
  if ((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) {
    FUN_1461a86e4(local_38);
    puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    FUN_1416142b6(puVar5,local_38);
    param_1[7] = (longlong)puVar5;
    if (local_38[0] != 0) {
      FUN_1400020a8();
      puVar5 = (undefined8 *)param_1[7];
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14a8996f0;
    param_1[7] = (longlong)puVar5;
  }
  plVar1 = param_1 + 2;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_145a5c03e(plVar1,iVar2);
  }
  *(undefined8 **)(param_1[2] + (longlong)iVar2 * 8) = puVar5;
  lVar6 = FUN_14001cc68(0x88,0x10);
  FUN_1461a84c4(lVar6);
  param_1[8] = lVar6;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_145a5c03e(plVar1,iVar2);
  }
  *(longlong *)(param_1[2] + (longlong)iVar2 * 8) = lVar6;
  lVar6 = FUN_14001cc68(0x138,0x10);
  FUN_1461a8480(lVar6);
  param_1[9] = lVar6;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_145a5c03e(plVar1,iVar2);
  }
  *(longlong *)(param_1[2] + (longlong)iVar2 * 8) = lVar6;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a8480 FUN_1461a8480 body=67 status=ok
// SIG undefined FUN_1461a8480(void)

undefined8 * FUN_1461a8480(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14ab01830;
  FUN_1461a8656(param_1 + 2);
  FUN_1461a8528(param_1 + 0x1d);
  FUN_140308182(param_1 + 3,0);
  return param_1;
}



// FUNCTION 1461a84c4 FUN_1461a84c4 body=100 status=ok
// SIG undefined FUN_1461a84c4(void)

undefined8 * FUN_1461a84c4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14a796ba0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  return param_1;
}



// FUNCTION 1461a8528 FUN_1461a8528 body=101 status=ok
// SIG undefined FUN_1461a8528(void)

longlong * FUN_1461a8528(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x400;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = (longlong)&DAT_14c7585e0;
  param_1[5] = 0;
  param_1[6] = 0x400;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = (longlong)&DAT_14c7585e0;
  param_1[9] = 0;
  FUN_1461a858e(param_1);
  lVar1 = *param_1;
  *(undefined2 *)(lVar1 + 0x38) = 0;
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  lVar1 = *param_1;
  *(undefined2 *)(lVar1 + 0x78) = 0;
  *(undefined4 *)(lVar1 + 0x7c) = 0x10001;
  return param_1;
}



// FUNCTION 1461a858e FUN_1461a858e body=65 status=ok
// SIG undefined FUN_1461a858e(void)

void FUN_1461a858e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 2) {
    FUN_1461a85d0(param_1,iVar1);
  }
  FUN_141613fe7((longlong)iVar1 * 0x40 + *param_1,2);
  return;
}



// FUNCTION 1461a85d0 FUN_1461a85d0 body=132 status=ok
// SIG undefined FUN_1461a85d0(void)

void FUN_1461a85d0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461a8656 FUN_1461a8656 body=141 status=ok
// SIG undefined FUN_1461a8656(void)

void FUN_1461a8656(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  *param_1 = &PTR_FUN_14ab08910;
  param_1[1] = &PTR_FUN_14ab08920;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  return;
}



// FUNCTION 1461a86e4 FUN_1461a86e4 body=348 status=ok
// SIG undefined FUN_1461a86e4(void)

undefined8 * FUN_1461a86e4(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  lVar6 = FUN_1461a8840(0,0);
  lVar7 = FUN_1461a8840(0,0);
  fVar13 = DAT_14c76130c;
  fVar14 = DAT_14c761308;
  iVar12 = *(int *)(lVar7 + 0x6c);
  iVar1 = *(int *)(lVar7 + 0x78);
  iVar2 = *(int *)(lVar6 + 0x6c);
  iVar3 = *(int *)(lVar6 + 0x78);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1461a88b4(param_1);
  uVar9 = iVar2 << 10;
  if (0.9999 <= fVar14) {
    fVar14 = 0.9999;
  }
  iVar5 = iVar3 * 0x400;
  iVar10 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar10 = iVar12;
  }
  iVar10 = iVar10 >> 5;
  if (0x1fff < iVar12) {
    iVar10 = 0;
  }
  if (fVar13 <= 1.0) {
    fVar13 = 1.0;
  }
  if (iVar10 < iVar1) {
    iVar10 = iVar1;
  }
  iVar12 = 0x100;
  if (0x100 < iVar10) {
    iVar12 = iVar10;
  }
  iVar12 = iVar12 * 0x400;
  if (iVar12 <= iVar5) {
    iVar5 = iVar12;
  }
  if (iVar3 < 1) {
    iVar5 = iVar12;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar13 = (float)((int)uVar9 / (int)((float)iVar5 * (1.0 - fVar14))) * fVar13;
  uVar8 = (ulonglong)fVar13;
  uVar8 = (longlong)(fVar13 - 9.223372e+18) & (longlong)uVar8 >> 0x3f | uVar8;
  if (0x7ffffffe < uVar8) {
    uVar8 = 0x7fffffff;
  }
  uVar11 = 1;
  if (1 < (uint)uVar8) {
    uVar11 = (uint)uVar8;
  }
  uVar8 = 0x4000000;
  if (0 < iVar2) {
    uVar8 = (ulonglong)uVar9;
  }
  puVar4 = (undefined4 *)*param_1;
  *puVar4 = 0x40000;
  puVar4[1] = uVar11;
  *(ulonglong *)(puVar4 + 2) = uVar8;
  return param_1;
}



// FUNCTION 1461a8840 FUN_1461a8840 body=115 status=ok
// SIG undefined FUN_1461a8840(void)

undefined8 FUN_1461a8840(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_141614009(param_1,&local_21);
  if (local_21 == '\x01') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cacdd50);
    FUN_141614929(uVar1,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cacdd50);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a88b4 FUN_1461a88b4 body=125 status=ok
// SIG undefined FUN_1461a88b4(void)

void FUN_1461a88b4(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 << 4,8);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 4)) {
      uVar3 = uVar2 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 1461a8931 FUN_1461a8931 body=25 status=ok
// SIG undefined FUN_1461a8931(void)

void FUN_1461a8931(void)

{
  FUN_141615890();
  atexit((_func_5014 *)&LAB_142e26eea);
  return;
}



// FUNCTION 1461a894a FUN_1461a894a body=25 status=ok
// SIG undefined FUN_1461a894a(void)

void FUN_1461a894a(void)

{
  FUN_141615a66();
  atexit((_func_5014 *)&LAB_142e26ef6);
  return;
}



// FUNCTION 1461a8963 FUN_1461a8963 body=25 status=ok
// SIG undefined FUN_1461a8963(void)

void FUN_1461a8963(void)

{
  FUN_141615c3c();
  atexit((_func_5014 *)&LAB_142e26f0e);
  return;
}



// FUNCTION 1461a897c FUN_1461a897c body=25 status=ok
// SIG undefined FUN_1461a897c(void)

void FUN_1461a897c(void)

{
  FUN_141615e12();
  atexit((_func_5014 *)&LAB_142e26f1a);
  return;
}



// FUNCTION 1461a8995 FUN_1461a8995 body=25 status=ok
// SIG undefined FUN_1461a8995(void)

void FUN_1461a8995(void)

{
  FUN_141615fe8();
  atexit((_func_5014 *)&LAB_142e26f26);
  return;
}



// FUNCTION 1461a89ae FUN_1461a89ae body=25 status=ok
// SIG undefined FUN_1461a89ae(void)

void FUN_1461a89ae(void)

{
  FUN_1416161be();
  atexit((_func_5014 *)&LAB_142e26f32);
  return;
}



// FUNCTION 1461a89c7 FUN_1461a89c7 body=25 status=ok
// SIG undefined FUN_1461a89c7(void)

void FUN_1461a89c7(void)

{
  FUN_141616394();
  atexit((_func_5014 *)&LAB_142e26f3e);
  return;
}



// FUNCTION 1461a89e0 FUN_1461a89e0 body=25 status=ok
// SIG undefined FUN_1461a89e0(void)

void FUN_1461a89e0(void)

{
  FUN_14161656a();
  atexit((_func_5014 *)&LAB_142e26f4a);
  return;
}



// FUNCTION 1461a89fa FUN_1461a89fa body=232 status=ok
// SIG undefined FUN_1461a89fa(void)

undefined8 FUN_1461a89fa(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if ((((lVar3 != 0) && (lVar1 = FUN_1411b2b2a(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30 && (lVar3 = *param_1, lVar3 != 0)))) {
    lVar1 = FUN_1411b2b2a();
    if ((lVar1 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *param_1;
    }
    lVar1 = FUN_1411b2b2a();
    if (lVar3 != lVar1) {
      lVar3 = *param_1;
      if ((((lVar3 == 0) || (lVar1 = FUN_1411b2b2a(), lVar1 == 0)) ||
          (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *param_1;
      }
      uVar2 = FUN_1461a8ae2(DAT_14c951640,lVar3,0,0,0,0,0,0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1461a8ae2 FUN_1461a8ae2 body=262 status=ok
// SIG undefined FUN_1461a8ae2(void)

undefined8
FUN_1461a8ae2(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a8bea FUN_1461a8bea body=40 status=ok
// SIG undefined FUN_1461a8bea(void)

undefined8 FUN_1461a8bea(undefined8 param_1,int param_2)

{
  FUN_1461a8c12();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461a8c12 FUN_1461a8c12 body=907 status=ok
// SIG undefined FUN_1461a8c12(void)

void FUN_1461a8c12(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14bdb7bb0;
  param_1[5] = &PTR_FUN_14bdb7f50;
  param_1[0x13] = &PTR_FUN_14bdb7f70;
  param_1[0x17] = &PTR_FUN_14bdb7fa0;
  param_1[0x18] = &PTR_FUN_14bdb7fb0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 100);
  plVar3 = (longlong *)param_1[0x62];
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
  plVar3 = (longlong *)param_1[0x60];
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
  plVar3 = (longlong *)param_1[0x5e];
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
  plVar3 = (longlong *)param_1[0x5c];
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
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x34];
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
  plVar3 = (longlong *)param_1[0x32];
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
  plVar3 = (longlong *)param_1[0x30];
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
  plVar3 = (longlong *)param_1[0x2e];
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
  FUN_145850673(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_145850673(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_145850673(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145850673(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1461a8f9d(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x1d];
  if (lVar4 != 0) {
    FUN_1496cbd06(lVar4);
    FUN_1400020a8(lVar4);
  }
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 1461a8f9d FUN_1461a8f9d body=43 status=ok
// SIG undefined FUN_1461a8f9d(void)

void FUN_1461a8f9d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141082778(param_1);
    param_1 = param_1 + 0x220;
  }
  return;
}



// FUNCTION 1461a8fd0 FUN_1461a8fd0 body=363 status=ok
// SIG undefined FUN_1461a8fd0(void)

undefined8 FUN_1461a8fd0(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*param_2 == 0) {
    puVar3 = &DAT_14c9a1308;
  }
  else {
    puVar3 = (undefined8 *)FUN_1408db3b0(*param_2,"resolvedtype");
  }
  pbVar1 = (byte *)*puVar3;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(pbVar1 + 8);
  }
  uVar2 = FUN_140d74e5a(uVar5,0);
  *(undefined1 *)(param_1 + 0x158) = uVar2;
  if (*param_2 == 0) {
    puVar3 = &DAT_14c9a1308;
  }
  else {
    puVar3 = (undefined8 *)FUN_1408db3b0(*param_2,"property");
  }
  if (((byte *)*puVar3 != (byte *)0x0) && ((~*(byte *)*puVar3 & 3) == 0)) {
    puVar3 = &DAT_14c9a1308;
    plVar4 = &DAT_14c9a1308;
    if (*param_2 != 0) {
      plVar4 = (longlong *)FUN_1408db3b0(*param_2,"property");
    }
    if (*plVar4 != 0) {
      puVar3 = (undefined8 *)FUN_1408db3b0(*plVar4,"propertypath");
    }
    pbVar1 = (byte *)*puVar3;
    if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) && (*(longlong *)(pbVar1 + 8) != 0)) {
      FUN_144a81018(local_138);
      FUN_14020fad6(param_1 + 0x128,local_30);
      FUN_140c42a30(param_1 + 8);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a913c FUN_1461a913c body=32 status=ok
// SIG undefined FUN_1461a913c(void)

void FUN_1461a913c(void)

{
  FUN_141616740(&DAT_14c9c9d28);
  atexit((_func_5014 *)&LAB_142be535f);
  return;
}



// FUNCTION 1461a915c FUN_1461a915c body=32 status=ok
// SIG undefined FUN_1461a915c(void)

void FUN_1461a915c(void)

{
  FUN_141616910(&DAT_14c9cfcd8);
  atexit((_func_5014 *)&LAB_142c1c8d1);
  return;
}



// FUNCTION 1461a917c FUN_1461a917c body=363 status=ok
// SIG undefined FUN_1461a917c(void)

ulonglong FUN_1461a917c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14095591c(param_3,&local_28);
  if (local_28 == 0) {
    plVar5 = (longlong *)FUN_140f0c6d8(param_3);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_140c65c56(uVar6,&local_38);
      plVar5 = local_20;
      plVar1 = local_30;
      if (local_30 == (longlong *)0x0) {
        local_28 = local_38;
        if (local_20 != (longlong *)0x0) {
          local_20 = (longlong *)0x0;
LAB_1461a9276:
          local_28 = local_38;
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
joined_r0x0001461a92a1:
            if (iVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        local_28 = local_38;
        if (local_30 == local_20) {
          LOCK();
          plVar5 = local_30 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
            plVar5 = plVar1;
            goto joined_r0x0001461a92a1;
          }
        }
        else {
          local_20 = local_30;
          if (plVar5 != (longlong *)0x0) goto LAB_1461a9276;
        }
      }
      param_3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_30 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    }
    if (local_28 == 0) {
      uVar7 = 0;
      goto LAB_1461a91b9;
    }
  }
  lVar4 = FUN_1461a92e8();
  uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),0 < *(int *)(lVar4 + 8));
LAB_1461a91b9:
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a92e8 FUN_1461a92e8 body=8 status=ok
// SIG undefined FUN_1461a92e8(void)

longlong FUN_1461a92e8(longlong param_1)

{
  return param_1 + 0xf8;
}



// FUNCTION 1461a92f0 FUN_1461a92f0 body=264 status=ok
// SIG undefined FUN_1461a92f0(void)

void FUN_1461a92f0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_1461a9362:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
      if ((int)plVar3[1] == iVar1) {
        if (1 < iVar1) {
          lVar8 = 0;
          do {
            uVar5 = *(ushort *)(*plVar3 + lVar8);
            uVar6 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(*param_2 + lVar8);
            if (uVar5 == uVar7) {
              if (uVar5 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar5)) goto LAB_1461a93bb;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar9]) goto LAB_1461a93bb;
            }
            lVar8 = lVar8 + 2;
          } while( true );
        }
        goto LAB_1461a93c1;
      }
      if ((int)plVar3[1] + iVar1 == 1) goto LAB_1461a93c1;
      goto LAB_1461a93de;
    }
  }
  return;
LAB_1461a93bb:
  if (uVar5 == uVar7) {
LAB_1461a93c1:
    FUN_1461a93f8(param_1);
    return;
  }
LAB_1461a93de:
  iVar2 = (int)plVar3[4];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_1461a9362;
}



// FUNCTION 1461a93f8 FUN_1461a93f8 body=116 status=ok
// SIG undefined FUN_1461a93f8(void)

void FUN_1461a93f8(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_145cc0e18((longlong)param_2 * 0x28 + *param_1);
  FUN_1461a946c(param_1,param_2);
  return;
}



// FUNCTION 1461a946c FUN_1461a946c body=116 status=ok
// SIG undefined FUN_1461a946c(void)

void FUN_1461a946c(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1461a94e0 FUN_1461a94e0 body=40 status=ok
// SIG undefined FUN_1461a94e0(void)

undefined8 FUN_1461a94e0(undefined8 param_1,int param_2)

{
  FUN_1461a9508();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461a9508 FUN_1461a9508 body=456 status=ok
// SIG undefined FUN_1461a9508(void)

void FUN_1461a9508(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd90930;
  param_1[5] = &PTR_FUN_14bd90cd0;
  param_1[0x13] = &PTR_FUN_14bd90cf0;
  param_1[0x17] = &PTR_FUN_14bd90d20;
  plVar3 = (longlong *)param_1[0x57];
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
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x42);
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x2d);
  plVar3 = (longlong *)param_1[0x29];
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
  FUN_145850673(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 1461a96de FUN_1461a96de body=25 status=ok
// SIG undefined FUN_1461a96de(void)

void FUN_1461a96de(void)

{
  FUN_141617488();
  atexit((_func_5014 *)&LAB_1436a86ad);
  return;
}



// FUNCTION 1461a96f8 FUN_1461a96f8 body=500 status=ok
// SIG undefined FUN_1461a96f8(void)

void FUN_1461a96f8(longlong param_1,undefined8 param_2,void *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(int *)(param_1 + 0x9f8) < 1) {
    *(undefined2 *)(param_1 + 0xb85) = 0;
  }
  else {
    lVar4 = **(longlong **)(param_1 + 0x9f0);
    *(undefined2 *)(param_1 + 0xb85) = 0;
    if (lVar4 != 0) goto LAB_1461a97c5;
  }
  if (*(char *)(param_1 + 0x578) != '\x01') goto LAB_1461a97c5;
  lVar4 = *(longlong *)(param_1 + 0x550);
  if (lVar4 == 0) {
    uVar3 = FUN_145d84a5c();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x550) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x558) == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x548) != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x558) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x548));
        *(longlong *)(param_1 + 0x558) = lVar4;
        if (lVar4 != 0) goto LAB_1461a97c0;
      }
    }
    *(undefined1 *)(param_1 + 0xb85) = 1;
  }
  else {
LAB_1461a97c0:
    *(undefined1 *)(param_1 + 0xb86) = 1;
  }
LAB_1461a97c5:
  *(undefined8 *)(param_1 + 0xa30) = 0;
  *(undefined8 *)(param_1 + 0xa38) = 0;
  *(undefined8 *)(param_1 + 0xa20) = 0;
  *(undefined8 *)(param_1 + 0xa28) = 0;
  *(undefined8 *)(param_1 + 0xa10) = 0;
  *(undefined8 *)(param_1 + 0xa18) = 0;
  *(undefined8 *)(param_1 + 0xa00) = 0;
  *(undefined8 *)(param_1 + 0xa08) = 0;
  puVar5 = &DAT_14c846480;
  puVar6 = (undefined8 *)(param_1 + 0xa40);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0xaa0) = 1;
  *(undefined8 *)(param_1 + 0xa00) = param_2;
  memcpy((void *)(param_1 + 0xa10),param_3,0x90);
  *(undefined8 *)(param_1 + 0xab0) = 1;
  *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_1 + 0xb70);
  *(undefined4 *)(param_1 + 0xb6c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xb80) = 1;
  *(undefined4 *)(param_1 + 0xb74) = *(undefined4 *)(param_1 + 0x59c);
  *(undefined8 *)(param_1 + 0xb78) = 1;
  FUN_1407606b4(param_1 + 0xb68,0);
  *(undefined1 *)(param_1 + 0xb81) = 1;
  FUN_1461a98ec(param_1,1);
  return;
}



// FUNCTION 1461a98ec FUN_1461a98ec body=327 status=ok
// SIG undefined FUN_1461a98ec(void)

void FUN_1461a98ec(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1461a9a3a(param_1 + 0x4b0);
  if (*(char *)(param_1 + 0xb85) == '\0') {
    lVar1 = param_1 + 0xac0;
    FUN_141588d26(lVar1);
    if (param_2 == '\x01') {
      local_30 = 0;
      FUN_14485c47a(&local_30,*(undefined8 *)(param_1 + 0xab8));
      FUN_1461a9a34(lVar1,local_30);
      puVar3 = (undefined8 *)(param_1 + 0x530);
      if (*(char *)(param_1 + 0xb86) != '\0') {
        puVar3 = (undefined8 *)(param_1 + 0x548);
      }
      local_48 = *puVar3;
      puVar4 = &local_48;
      uVar2 = FUN_14477b664(puVar3[1]);
      local_40 = FUN_14477b664(uVar2);
      local_38 = puVar3[2];
    }
    else {
      local_58 = 0;
      FUN_14485c47a(&local_58,*(undefined8 *)(param_1 + 0xab8));
      FUN_1461a9a34(lVar1,local_58);
      local_70 = *(undefined8 *)(param_1 + 0x560);
      puVar4 = &local_70;
      uVar2 = FUN_14477b664(*(undefined8 *)(param_1 + 0x568));
      local_68 = FUN_14477b664(uVar2);
      local_60 = *(undefined8 *)(param_1 + 0x570);
    }
    local_50 = 0;
    FUN_140e4e738(lVar1,&local_50,puVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461a9a34 FUN_1461a9a34 body=5 status=ok
// SIG undefined FUN_1461a9a34(void)

void FUN_1461a9a34(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 1461a9a3a FUN_1461a9a3a body=162 status=ok
// SIG undefined FUN_1461a9a3a(void)

void FUN_1461a9a3a(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1461a9ac7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1461a9ac7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1461a9adc FUN_1461a9adc body=185 status=ok
// SIG undefined FUN_1461a9adc(void)

void FUN_1461a9adc(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
        lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
        if (lVar1 != 0) {
          lVar2 = FUN_144a5dd5e();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            lVar1 = FUN_14030d330(lVar1);
            if (lVar1 != 0) {
              lVar1 = FUN_140cee904(lVar1);
              if (lVar1 != 0) {
                FUN_141617c34(lVar1,param_4,param_1 + 0xf);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1461a9b96 FUN_1461a9b96 body=26 status=ok
// SIG undefined FUN_1461a9b96(void)

undefined8 FUN_1461a9b96(longlong param_1,undefined8 param_2)

{
  FUN_1461a9bb0(param_1 + 0x18);
  return param_2;
}



// FUNCTION 1461a9bb0 FUN_1461a9bb0 body=422 status=ok
// SIG undefined FUN_1461a9bb0(void)

longlong * FUN_1461a9bb0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb82328 != (longlong *)0x0 && DAT_14cb82330 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb82328 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb82328;
    if (DAT_14cb82330 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_1461a9c81;
  }
  lVar3 = FUN_14001cc68(0x40,0x10);
  FUN_1461a9d58(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b411510;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_1461a9c81;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_1461a9c81;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_1461a9cfc:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_1461a9c77;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_1461a9cfc;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_1461a9c77:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_1461a9c81:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461a9d58 FUN_1461a9d58 body=49 status=ok
// SIG undefined FUN_1461a9d58(void)

void FUN_1461a9d58(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b411880;
  param_1[4] = 0x404e000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 1461a9d8a FUN_1461a9d8a body=40 status=ok
// SIG undefined FUN_1461a9d8a(void)

undefined8 FUN_1461a9d8a(undefined8 param_1,int param_2)

{
  FUN_1461a9db2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461a9db2 FUN_1461a9db2 body=458 status=ok
// SIG undefined FUN_1461a9db2(void)

void FUN_1461a9db2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba2b630;
  param_1[6] = &PTR_FUN_14ba2b940;
  param_1[7] = &PTR_FUN_14ba2b950;
  param_1[8] = &PTR_FUN_14ba2b980;
  plVar3 = (longlong *)param_1[0x7e];
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
  plVar3 = (longlong *)param_1[0x7c];
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
  plVar3 = (longlong *)param_1[0x77];
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
  plVar3 = (longlong *)param_1[0x75];
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
  FUN_14008cd94(param_1 + 0x4e);
  FUN_14008cd94(param_1 + 0x2a);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x19];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1461a9f7c FUN_1461a9f7c body=531 status=ok
// SIG undefined FUN_1461a9f7c(void)

undefined8 FUN_1461a9f7c(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar4 + 8))
                      (plVar4,(longlong)param_2 * 0x48 + *(longlong *)(param_1 + 0x68));
    uVar9 = 3;
    if (cVar7 == '\0') goto LAB_1461aa00d;
  }
  if (param_3 == '\x01') {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x48);
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
    local_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
    uStack_2c = puVar2[3];
    FUN_1461aa200(param_1 + 0x18);
    FUN_1461aa190(param_1 + 0x68,param_2);
    uVar8 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar8) {
      uVar12 = 0;
      uVar11 = uVar8;
      do {
        uVar1 = (uVar11 >> 1) + uVar12;
        if (*(int *)(lVar5 + (ulonglong)uVar1 * 0x30) < param_2) {
          uVar12 = uVar1 + (uVar11 & 1);
        }
        bVar6 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar6);
    }
    if (((int)uVar12 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar12 * 0x30) <= param_2)) {
      if (~uVar12 + uVar8 != 0) {
        pvVar10 = (void *)(lVar5 + (ulonglong)uVar12 * 0x30);
        memmove(pvVar10,(void *)((longlong)pvVar10 + 0x30),(longlong)(int)(~uVar12 + uVar8) * 0x30);
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar8 - 1;
      FUN_1476b011c(param_1 + 0xa0);
    }
    uVar9 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar12 = uVar8;
    if (0 < (int)uVar8) {
      do {
        uVar1 = (uVar12 >> 1) + uVar11;
        if (*(int *)(lVar5 + (ulonglong)uVar1 * 0x30) < param_2) {
          uVar11 = uVar1 + (uVar12 & 1);
        }
        bVar6 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar6);
    }
    if (((int)uVar11 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar11 * 0x30) <= param_2)) {
      if (~uVar11 + uVar8 != 0) {
        pvVar10 = (void *)(lVar5 + (ulonglong)uVar11 * 0x30);
        memmove(pvVar10,(void *)((longlong)pvVar10 + 0x30),(longlong)(int)(~uVar11 + uVar8) * 0x30);
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar8 - 1;
      FUN_1476b011c(param_1 + 0xa0);
    }
    else {
      pbVar3 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x40 + (longlong)param_2 * 0x48);
      *pbVar3 = *pbVar3 | 2;
    }
    uVar9 = 1;
  }
LAB_1461aa00d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1461aa190 FUN_1461aa190 body=112 status=ok
// SIG undefined FUN_1461aa190(void)

void FUN_1461aa190(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1461aa200 FUN_1461aa200 body=156 status=ok
// SIG undefined FUN_1461aa200(void)

void FUN_1461aa200(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_14073624c(param_2);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x24);
        if ((((*piVar1 == *param_2) &&
             (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x24) == param_2[1])) &&
            (piVar1[2] == param_2[2])) &&
           ((piVar1[3] == param_2[3] && (*(longlong *)(piVar1 + 4) == *(longlong *)(param_2 + 4)))))
        {
          FUN_1461aa29c(param_1);
          return;
        }
        iVar2 = piVar1[7];
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1461aa29c FUN_1461aa29c body=85 status=ok
// SIG undefined FUN_1461aa29c(void)

void FUN_1461aa29c(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x24;
  lVar5 = (longlong)*(int *)(lVar1 + 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x24 + 0x1c);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x1c);
  FUN_1461aa2f2();
  return;
}



// FUNCTION 1461aa2f2 FUN_1461aa2f2 body=112 status=ok
// SIG undefined FUN_1461aa2f2(void)

void FUN_1461aa2f2(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1461aa362 FUN_1461aa362 body=156 status=ok
// SIG undefined FUN_1461aa362(void)

undefined8 * FUN_1461aa362(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 < 4) {
    local_38 = 0;
    local_30 = 0;
    FUN_1461aa400(&local_38,param_4);
    FUN_1461aa47e(param_1 + (ulonglong)param_3 * 0x18 + 0x188,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *param_2 = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461aa400 FUN_1461aa400 body=124 status=ok
// SIG undefined FUN_1461aa400(void)

void FUN_1461aa400(longlong *param_1,longlong *param_2)

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



// FUNCTION 1461aa47e FUN_1461aa47e body=216 status=ok
// SIG undefined FUN_1461aa47e(void)

undefined8 * FUN_1461aa47e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1461aa558 FUN_1461aa558 body=40 status=ok
// SIG undefined FUN_1461aa558(void)

undefined8 FUN_1461aa558(undefined8 param_1,int param_2)

{
  FUN_1461aa580();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461aa580 FUN_1461aa580 body=460 status=ok
// SIG undefined FUN_1461aa580(void)

void FUN_1461aa580(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aaede40;
  plVar3 = (longlong *)param_1[0x2a];
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
  FUN_144a65a1e(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e927f(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e92cc(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1461aa760 FUN_1461aa760 body=492 status=ok
// SIG undefined FUN_1461aa760(void)

undefined8 * FUN_1461aa760(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  FUN_145bfca82();
  *param_1 = &PTR_FUN_14bc8c980;
  puVar2 = (undefined8 *)FUN_145a9bbfa();
  param_1[0x5a] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 0x5b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x5a,iVar1,0);
    memcpy((void *)param_1[0x5a],_Src,(longlong)iVar1 * 2);
  }
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_14020fad6(param_1 + 0x5c,L"ImportMorphTarget");
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_14020fad6(param_1 + 0x5e,L"ImportVertexAttributes");
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  FUN_14020fad6(param_1 + 0x60,L"SkeletonSoftObjectPath");
  param_1[0x62] = 0;
  param_1[99] = 0;
  FUN_14020fad6(param_1 + 0x62,L"CreatePhysicsAsset");
  param_1[100] = 0;
  param_1[0x65] = 0;
  FUN_14020fad6(param_1 + 100,L"PhysicAssetSoftObjectPath");
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  FUN_14020fad6(param_1 + 0x66,L"ImportContentType");
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  FUN_14020fad6(param_1 + 0x68,L"UseHighPrecisionSkinWeights");
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_14020fad6(param_1 + 0x6a,L"ThresholdPosition");
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  FUN_14020fad6(param_1 + 0x6c,L"ThresholdTangentNormal");
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  FUN_14020fad6(param_1 + 0x6e,L"ThresholdUV");
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  FUN_14020fad6(param_1 + 0x70,L"MorphThresholdPosition");
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_14020fad6(param_1 + 0x72,L"BoneInfluenceLimit");
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  FUN_14020fad6(param_1 + 0x74,L"MergeMorphTargetShapeWithSameName");
  param_1[0x76] = 0;
  return param_1;
}



// FUNCTION 1461aa94c FUN_1461aa94c body=1205 status=ok
// SIG undefined FUN_1461aa94c(void)

void FUN_1461aa94c(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong local_f8;
  ulonglong local_f0;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  char *local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined1 local_ac [8];
  int local_a4;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88;
  longlong local_80;
  byte local_78;
  longlong local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = *(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8);
  if (*(ushort *)(lVar8 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar8 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == **(short **)(param_1 + 8)) goto LAB_1461aa9c0;
      plVar12 = plVar12 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1461aa9c0:
  local_e4 = *(int *)(lVar8 + 0x14);
  local_100 = param_4;
  local_c8 = param_2;
  if (local_e4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  local_f0 = (ulonglong)*(ushort *)(lVar8 + 0xe);
  if (local_f0 != 0) {
    lVar7 = param_1 + -0xd8;
    lVar3 = *plVar12;
    local_d8 = *param_6;
    local_e0 = param_6[1];
    lVar4 = param_6[2];
    local_f0 = (ulonglong)((uint)*(ushort *)(lVar8 + 0xe) * 2);
    param_5 = param_5 + 8;
    uVar10 = 0;
    local_f8 = param_1;
    do {
      local_a0 = *(longlong *)(local_100 + uVar10 * 4);
      if ((local_a0 != 0) && (cVar6 = FUN_1461aae02(lVar7,&local_a0,param_5), cVar6 != '\0')) {
        FUN_14607ded8(lVar7,local_ac,&local_a0,param_5);
        piVar9 = *(int **)(param_1 + -0x28);
        if (*piVar9 != 0) {
          FUN_140adeba6(piVar9,local_ac);
          piVar9 = *(int **)(param_1 + -0x28);
        }
        lVar8 = FUN_1400e4054(piVar9,local_ac);
        if (lVar8 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = CONCAT71((int7)((ulonglong)&local_a0 >> 8),
                            '\x02' - (*(short *)(lVar8 + 0xe) == 0));
        }
        cVar6 = FUN_1461aaf16(lVar7,local_a4,uVar11 & 0xffffffff);
        if (cVar6 == '\0') {
          local_78 = 0;
          local_98[0] = 0;
          local_98[1] = 0;
          local_88 = 0;
          local_70 = *(longlong *)(lVar3 + uVar10 * 8);
          if ((DAT_14c950c29 == 1) && (local_70 != 0)) {
            FUN_1456cec3c();
          }
          local_68 = *(undefined1 *)(lVar3 + 8 + uVar10 * 8);
          if (local_e0 == 0) {
            if (local_d8 == 0) {
              if (lVar4 != 0) {
                (*(code *)(&PTR_LAB_14a4c7e10)[local_78])(&local_88);
                local_88 = *(longlong *)(lVar4 + uVar10 * 8);
                local_80 = *(longlong *)(lVar4 + 8 + uVar10 * 8);
                if (local_80 != 0) {
                  LOCK();
                  *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
                  UNLOCK();
                }
                local_78 = 2;
                uVar5 = *(undefined8 *)(lVar4 + uVar10 * 8);
                if ((DAT_14c950c29 == 1) && (*(longlong *)(lVar3 + uVar10 * 8) != 0)) {
                  FUN_1456cec3c();
                }
                lVar8 = FUN_145c97f3e(uVar5,*(undefined8 *)(local_100 + uVar10 * 4));
                if (lVar8 != 0 && DAT_14c950c29 == 1) goto LAB_1461aad21;
                goto LAB_1461aabb8;
              }
            }
            else {
              lVar8 = (longlong)*(int *)(param_1 + 0x24) * (ulonglong)*(ushort *)(local_d8 + uVar10)
                      + *(longlong *)(param_1 + 0x18);
              (*(code *)(&PTR_LAB_14a4c7e10)[local_78])(&local_88);
              local_78 = 0;
              local_c0 = *(longlong *)(lVar3 + uVar10 * 8);
              local_d0 = lVar8;
              local_88 = lVar8;
              if ((DAT_14c950c29 == 1) && (local_c0 != 0)) {
                FUN_1456cec3c();
              }
              local_b8 = *(undefined1 *)(lVar3 + 8 + uVar10 * 8);
              FUN_1475e54da(*(undefined8 *)(local_100 + uVar10 * 4),&local_c0,local_d0,local_98);
              param_1 = local_f8;
            }
          }
          else {
            (*(code *)(&PTR_LAB_14a4c7e10)[local_78])(&local_88);
            local_88 = CONCAT62(local_88._2_6_,*(undefined2 *)(local_e0 + uVar10));
            local_78 = 1;
            uVar2 = *(ushort *)(local_e0 + uVar10);
            if ((DAT_14c950c29 == 1) && (*(longlong *)(lVar3 + uVar10 * 8) != 0)) {
              FUN_1456cec3c();
            }
            lVar8 = *(longlong *)(*(longlong *)(local_100 + uVar10 * 4) + (ulonglong)uVar2);
            if (lVar8 != 0 && (~DAT_14c950c29 & 1) == 0) {
LAB_1461aad21:
              FUN_1456cec3c(lVar8);
            }
LAB_1461aabb8:
            if ((lVar8 != 0) && ((DAT_14c950c29 & 1) != 0)) {
              FUN_1456cec3c(lVar8);
            }
            local_98[1] = 0;
            param_1 = local_f8;
            local_98[0] = lVar8;
          }
          FUN_1461aae84(lVar7,local_a4,uVar11 & 0xffffffff,local_98);
          (*(code *)(&PTR_LAB_14a4c7e10)[local_78])(&local_88);
        }
        if (*local_c8 == '\x01') {
          pbVar1 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x48 + (longlong)local_a4 * 0x50);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      uVar10 = uVar10 + 2;
      param_5 = param_5 + 0x14;
    } while (local_f0 != uVar10);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (local_e4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar12 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461aae02 FUN_1461aae02 body=129 status=ok
// SIG undefined FUN_1461aae02(void)

byte FUN_1461aae02(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_1461aafb8(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  else {
    bVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1461aae84 FUN_1461aae84 body=144 status=ok
// SIG undefined FUN_1461aae84(void)

void FUN_1461aae84(longlong param_1,int param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68);
  local_14 = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar1 + 0x48) & 1) == 0) {
      FUN_1461ab122(lVar1 + 0x10,param_4);
      *(byte *)(lVar1 + 0x48) = *(byte *)(lVar1 + 0x48) | 1;
    }
    else {
      FUN_1475e5584(param_1 + 0xa0,&local_14,param_4);
    }
  }
  else if (param_3 == '\x01') {
    FUN_1461ab122(lVar1 + 0x10,param_4);
    *(byte *)(lVar1 + 0x48) = *(byte *)(lVar1 + 0x48) | 3;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461aaf16 FUN_1461aaf16 body=161 status=ok
// SIG undefined FUN_1461aaf16(void)

ulonglong FUN_1461aaf16(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x48);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      if (0 < (int)uVar3) {
        uVar9 = 0;
        uVar8 = uVar3;
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x40) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x40) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x40;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x48));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1461aafb8 FUN_1461aafb8 body=193 status=ok
// SIG undefined FUN_1461aafb8(void)

longlong FUN_1461aafb8(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1461ab07a(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ab07a FUN_1461ab07a body=167 status=ok
// SIG undefined FUN_1461ab07a(void)

undefined4 * FUN_1461ab07a(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 1461ab122 FUN_1461ab122 body=248 status=ok
// SIG undefined FUN_1461ab122(void)

longlong * FUN_1461ab122(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *param_2;
    }
  }
  *param_1 = lVar5;
  param_1[1] = param_2[1];
  if (param_2 != param_1) {
    local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_2 + 4));
    (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_2 + 4)])
              (&local_58,param_2 + 2);
    local_28 = local_48;
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uVar1 = param_1[4];
    lVar5 = param_1[2];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
    lVar4 = param_1[3];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined4 *)(param_1 + 2) = local_58;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_54;
    *(undefined4 *)(param_1 + 3) = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_4c;
    param_1[4] = local_48;
    local_58 = (int)lVar5;
    uStack_54 = uVar2;
    uStack_50 = (int)lVar4;
    uStack_4c = uVar3;
    local_48 = uVar1;
    (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
  }
  lVar5 = param_2[5];
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[5];
    }
  }
  param_1[5] = lVar5;
  *(char *)(param_1 + 6) = (char)param_2[6];
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ab21c FUN_1461ab21c body=185 status=ok
// SIG undefined FUN_1461ab21c(void)

undefined2 * FUN_1461ab21c(void)

{
  char cVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  
  if ((DAT_14c86aa58 != (longlong *)0x0 && DAT_14c86aa60 != 0) &&
     (cVar1 = (**(code **)(*DAT_14c86aa58 + 0x30))(), cVar1 != '\0')) {
    plVar3 = DAT_14c86aa58;
    if (DAT_14c86aa60 == 0) {
      plVar3 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001461ab2d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined2 *)(**(code **)(*plVar3 + 0x58))();
    return puVar2;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c846588) && (FUN_144b3d300(&DAT_14c846588), DAT_14c846588 == -1)) {
    FUN_1416185aa();
    atexit((_func_5014 *)&LAB_142770a89);
    _Init_thread_footer(&DAT_14c846588);
  }
  puVar2 = DAT_14c846578;
  if (DAT_14c846580 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  return puVar2;
}



// FUNCTION 1461ab2d5 FUN_1461ab2d5 body=25 status=ok
// SIG undefined FUN_1461ab2d5(void)

void FUN_1461ab2d5(void)

{
  FUN_1416186e6();
  atexit((_func_5014 *)&LAB_142b8ddff);
  return;
}



// FUNCTION 1461ab2ee FUN_1461ab2ee body=25 status=ok
// SIG undefined FUN_1461ab2ee(void)

void FUN_1461ab2ee(void)

{
  FUN_1416188c2();
  atexit((_func_5014 *)&LAB_142b8de23);
  return;
}



// FUNCTION 1461ab307 FUN_1461ab307 body=25 status=ok
// SIG undefined FUN_1461ab307(void)

void FUN_1461ab307(void)

{
  FUN_141618a9e();
  atexit((_func_5014 *)&LAB_142b8de3b);
  return;
}



// FUNCTION 1461ab320 FUN_1461ab320 body=25 status=ok
// SIG undefined FUN_1461ab320(void)

void FUN_1461ab320(void)

{
  FUN_141618c7a();
  atexit((_func_5014 *)&LAB_142b8de53);
  return;
}



// FUNCTION 1461ab339 FUN_1461ab339 body=25 status=ok
// SIG undefined FUN_1461ab339(void)

void FUN_1461ab339(void)

{
  FUN_141618e56();
  atexit((_func_5014 *)&LAB_142bc0269);
  return;
}



// FUNCTION 1461ab352 FUN_1461ab352 body=25 status=ok
// SIG undefined FUN_1461ab352(void)

void FUN_1461ab352(void)

{
  FUN_141619032();
  atexit((_func_5014 *)&LAB_142bc0281);
  return;
}



// FUNCTION 1461ab36b FUN_1461ab36b body=25 status=ok
// SIG undefined FUN_1461ab36b(void)

void FUN_1461ab36b(void)

{
  FUN_14161920e();
  atexit((_func_5014 *)&LAB_142be530b);
  return;
}


