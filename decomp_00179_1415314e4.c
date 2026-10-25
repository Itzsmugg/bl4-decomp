// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1415314e4 FUN_1415314e4 body=136 status=ok
// SIG undefined FUN_1415314e4(void)

void FUN_1415314e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1bf9f0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
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



// FUNCTION 14153156c FUN_14153156c body=109 status=ok
// SIG undefined FUN_14153156c(void)

undefined8 *
FUN_14153156c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x40))(DAT_14c8407a8,param_2,param_3,param_4,param_5);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = FAutoConsoleVariableRef::vftable;
  return param_1;
}



// FUNCTION 1415315da FUN_1415315da body=2254 status=ok
// SIG undefined FUN_1415315da(void)

void FUN_1415315da(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *_Src;
  undefined4 *_Src_00;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_1415316c5;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar1[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_1415316c5:
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_140dafe7a;
      local_70 = 0;
      local_78 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_48);
            goto LAB_141531791;
          }
        }
        _Src = (longlong *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_48,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(local_48,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar1[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_48,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
LAB_141531791:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_14153185e;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar1[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_14153185e:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_60 = FUN_1408a629c;
      local_68 = &DAT_14c9520b8;
      local_70 = 0;
      local_78 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_14153192a;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar1[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_14153192a:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = CONCAT44(local_78._4_4_,local_54);
  (**(code **)(*param_1 + 0x828))(param_1,local_30,local_48,local_50);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141531eaa FUN_141531eaa body=460 status=ok
// SIG undefined FUN_141531eaa(void)

void FUN_141531eaa(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  ulonglong uStack_50;
  undefined2 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined2 *)0x0;
  uVar1 = *(uint *)(param_3 + 1);
  _Src = (void *)*param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    uStack_40 = (ulonglong)uVar1;
  }
  else {
    FUN_1446dd670(&local_48,uVar1,0);
    memcpy(local_48,_Src,(longlong)(int)uVar1 * 2);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf9e50) {
    FUN_144b3d300(&DAT_14caf9e50);
    if (DAT_14caf9e50 == -1) {
      FUN_1446f470e(&DAT_14caf9e48,&DAT_14aa4bac8,1);
      _Init_thread_footer(&DAT_14caf9e50);
    }
  }
  if ((param_2 != 0) && (DAT_14caf9e48 == param_4)) {
    puVar4 = &DAT_149dfb77a;
    if ((int)uStack_40 != 0) {
      puVar4 = local_48;
    }
    FUN_141220240(param_2,&local_68);
    puVar5 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar5 = local_68;
    }
    FUN_140002266(&local_58,L"%s: %s",puVar5,puVar4);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (((*(longlong *)(param_1 + 0x430) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x430) + 0x78), lVar2 != 0)) &&
     (plVar3 = *(longlong **)(lVar2 + 0x40), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_48);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141532077 FUN_141532077 body=369 status=ok
// SIG undefined FUN_141532077(void)

void FUN_141532077(undefined8 param_1)

{
  ulonglong uVar1;
  short *psVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14475cc44(param_1,&local_48);
  if (1 < (longlong)local_40) {
    uVar3 = (longlong)local_40 * 2;
    do {
      if (uVar3 == 0) goto LAB_141532104;
      uVar1 = uVar3 - 2;
      psVar2 = (short *)(local_48 + -2 + uVar3);
      uVar3 = uVar1;
    } while (*psVar2 != 0x2e);
    if ((int)(~uVar1 >> 1) == 0) {
LAB_141532104:
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      FUN_140056680(&local_38,&DAT_149e065c6);
      local_80 = 1;
      local_88 = (undefined2 *)CONCAT44(local_88._4_4_,1);
      FUN_1407cdbc6(&local_48,&local_38,&local_68,&local_58);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      local_88 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        local_88 = local_58;
      }
      puVar4 = &DAT_149dfb77a;
      if ((int)uStack_60 != 0) {
        puVar4 = local_68;
      }
      FUN_140002266(&local_78,L"%s/%s.%s",puVar4);
      local_38 = local_78;
      local_30 = local_70 + -1;
      if (local_70 == 0) {
        local_30 = 0;
      }
      FUN_14475bf92(param_1);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415321ea FUN_1415321ea body=150 status=ok
// SIG undefined FUN_1415321ea(void)

void FUN_1415321ea(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b525b20;
  FUN_14658ee98();
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_141478002(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145ffe7cc(param_1 + 0x1d);
  plVar2 = (longlong *)param_1[0x1a];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14658eefc(param_1);
  return;
}



// FUNCTION 141532280 FUN_141532280 body=88 status=ok
// SIG undefined FUN_141532280(void)

undefined8 * FUN_141532280(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b73b790;
  param_1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(param_1 + 7);
  *param_1 = &PTR_FUN_14b80b150;
  param_1[6] = &PTR_LAB_14b80b410;
  param_1[7] = &PTR_LAB_14b80b4a0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1415322d8 FUN_1415322d8 body=88 status=ok
// SIG undefined FUN_1415322d8(void)

undefined8 * FUN_1415322d8(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b7e2970;
  param_1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(param_1 + 7);
  *param_1 = &PTR_FUN_14b80c370;
  param_1[6] = &PTR_LAB_14b80c630;
  param_1[7] = &PTR_LAB_14b80c6c0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 141532330 FUN_141532330 body=169 status=ok
// SIG undefined FUN_141532330(void)

void FUN_141532330(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b429300;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1415323ae;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1415323ae:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415323c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1415323da FUN_1415323da body=217 status=ok
// SIG undefined FUN_1415323da(void)

undefined4 * FUN_1415323da(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar6 = (undefined8 *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    *param_2 = *(undefined4 *)puVar6;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  cVar4 = FUN_144729dda(param_1 + 8);
  if (cVar4 == '\0') {
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      puVar6 = &DAT_14c8464e0;
    }
  }
  else {
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 8);
    (**(code **)(*plVar5 + 0x2b0))(plVar5,local_88);
    *(undefined8 *)(param_1 + 0x38) = local_68;
    *(undefined8 *)(param_1 + 0x40) = uStack_60;
    *(undefined8 *)(param_1 + 0x48) = local_58;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  *(undefined8 *)(param_2 + 4) = puVar6[2];
  uVar1 = *(undefined4 *)((longlong)puVar6 + 4);
  uVar2 = *(undefined4 *)(puVar6 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar6 + 0xc);
  *param_2 = *(undefined4 *)puVar6;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415324b4 FUN_1415324b4 body=206 status=ok
// SIG undefined FUN_1415324b4(void)

undefined8 * FUN_1415324b4(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[0x1f] == '\0') {
    uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_141532584(&local_40,param_1 + 0x19,uVar3);
    param_1[0x1e] = local_30;
    param_1[0x1c] = local_40;
    param_1[0x1d] = lStack_38;
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  lVar2 = param_1[0x1d];
  lVar1 = param_1[0x1e];
  param_2[4] = param_1[0x1c];
  param_2[5] = lVar2;
  param_2[6] = lVar1;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141532584 FUN_141532584 body=536 status=ok
// SIG undefined FUN_141532584(void)

undefined8 * FUN_141532584(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1410d53f0(&local_a8,param_3);
  if (local_a0 != (longlong *)0x0) {
    iVar4 = (int)local_a0[1];
    do {
      if (iVar4 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)local_a0[1];
      bVar11 = iVar4 == iVar2;
      if (bVar11) {
        *(int *)(local_a0 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
      plVar10 = local_a0;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    if (plVar10 != (longlong *)0x0) {
      bVar11 = true;
      if ((local_a8 != 0) &&
         (plVar5 = (longlong *)FUN_141446784(local_a8,param_2), plVar5 != (longlong *)0x0)) {
        uVar6 = FUN_14027972a();
        plVar7 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
        if (plVar7 == (longlong *)0x0) {
LAB_141532694:
          lVar9 = plVar5[0x39];
          if (lVar9 != 0) {
            uVar6 = *(undefined8 *)(lVar9 + 0x268);
            *param_1 = *(undefined8 *)(lVar9 + 0x260);
            param_1[1] = uVar6;
            uVar12 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
            uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
            goto LAB_1415326b2;
          }
          param_1[2] = DAT_14c8464f0;
          uVar14 = DAT_14c8464e8._4_4_;
          uVar13 = (undefined4)DAT_14c8464e8;
          uVar12 = DAT_14c8464e0._4_4_;
          *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
          *(undefined4 *)((longlong)param_1 + 4) = uVar12;
          *(undefined4 *)(param_1 + 1) = uVar13;
          *(undefined4 *)((longlong)param_1 + 0xc) = uVar14;
        }
        else {
          uVar6 = FUN_14027972a();
          plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
          if ((plVar8 == (longlong *)0x0 || plVar7 == plVar8) ||
             (cVar3 = (**(code **)(*plVar8 + 0x10))(plVar8), cVar3 == '\0')) goto LAB_141532694;
          uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
          FUN_1406115f6(uVar6,&local_a8);
          *param_1 = local_88;
          param_1[1] = uStack_80;
          uVar12 = (undefined4)local_78;
          uVar13 = (undefined4)((ulonglong)local_78 >> 0x20);
LAB_1415326b2:
          param_1[2] = CONCAT44(uVar13,uVar12);
        }
        bVar11 = false;
      }
      LOCK();
      plVar5 = plVar10 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (!bVar11) goto LAB_14153275a;
    }
  }
  local_c0 = *param_2;
  local_b8 = (undefined4)param_2[1];
  local_b0 = 0;
  lVar9 = FUN_1414bd2c4();
  if (lVar9 == 0) {
    lVar9 = param_2[2];
    if (lVar9 == 0) {
      local_a8 = *param_2;
      lVar9 = FUN_14050aea0();
      param_2[2] = lVar9;
      if (lVar9 == 0) {
        param_1[2] = DAT_14c8464f0;
        uVar12 = (undefined4)DAT_14c8464e0;
        uVar13 = DAT_14c8464e0._4_4_;
        uVar14 = (undefined4)DAT_14c8464e8;
        uVar15 = DAT_14c8464e8._4_4_;
        goto LAB_141532757;
      }
    }
    param_1[2] = *(undefined8 *)(lVar9 + 0x78);
    uVar12 = *(undefined4 *)(lVar9 + 0x68);
    uVar13 = *(undefined4 *)(lVar9 + 0x6c);
    uVar14 = *(undefined4 *)(lVar9 + 0x70);
    uVar15 = *(undefined4 *)(lVar9 + 0x74);
  }
  else {
    param_1[2] = *(undefined8 *)(lVar9 + 0x210);
    uVar12 = *(undefined4 *)(lVar9 + 0x200);
    uVar13 = *(undefined4 *)(lVar9 + 0x204);
    uVar14 = *(undefined4 *)(lVar9 + 0x208);
    uVar15 = *(undefined4 *)(lVar9 + 0x20c);
  }
LAB_141532757:
  *(undefined4 *)param_1 = uVar12;
  *(undefined4 *)((longlong)param_1 + 4) = uVar13;
  *(undefined4 *)(param_1 + 1) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar15;
LAB_14153275a:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14153279e FUN_14153279e body=117 status=ok
// SIG undefined FUN_14153279e(void)

void FUN_14153279e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x48), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_140b7066c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      cVar2 = (**(code **)(*plVar1 + 0x358))(plVar1);
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x70) = 0xb;
        *(undefined1 *)(param_1 + 0x18) = 1;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  FUN_145d13390(param_1);
  return;
}



// FUNCTION 141532814 FUN_141532814 body=203 status=ok
// SIG undefined FUN_141532814(void)

void FUN_141532814(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x50);
  if (-1 < (int)*(uint *)(param_1 + 0x50)) {
    iVar1 = *(int *)(param_1 + 0x48);
    do {
      iVar4 = (int)uVar5;
      if (iVar1 <= iVar4) break;
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      cVar3 = FUN_148a7d908(uVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + uVar5 * 4));
      if (cVar3 == '\0') {
        *(undefined4 *)(param_1 + 0x70) = 4;
        if (*(char *)(param_1 + 0x5c) == '\0') {
          local_48 = &LAB_143f02c18;
          local_40 = 0;
          FUN_148a68e4a(local_38,param_1);
          FUN_143f29e76(uVar2,*(undefined1 *)(param_1 + 0x54),local_38);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
        if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      uVar5 = uVar5 + 1;
      *(int *)(param_1 + 0x50) = (int)uVar5;
    } while (-2 < iVar4);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 1415328f0 FUN_1415328f0 body=203 status=ok
// SIG undefined FUN_1415328f0(void)

void FUN_1415328f0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x50);
  if (-1 < (int)*(uint *)(param_1 + 0x50)) {
    iVar1 = *(int *)(param_1 + 0x48);
    do {
      iVar4 = (int)uVar5;
      if (iVar1 <= iVar4) break;
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      cVar3 = FUN_148a7dd2c(uVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + uVar5 * 4));
      if (cVar3 == '\0') {
        *(undefined4 *)(param_1 + 0x70) = 5;
        if (*(char *)(param_1 + 0x5c) == '\0') {
          local_48 = &LAB_143f02c18;
          local_40 = 0;
          FUN_148a68e4a(local_38,param_1);
          FUN_143f29e76(uVar2,*(undefined1 *)(param_1 + 0x54),local_38);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
        if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      uVar5 = uVar5 + 1;
      *(int *)(param_1 + 0x50) = (int)uVar5;
    } while (-2 < iVar4);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 1415329cc FUN_1415329cc body=427 status=ok
// SIG undefined FUN_1415329cc(void)

void FUN_1415329cc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)FUN_140a68038(0);
  if (plVar6 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x80))(plVar6,&local_38);
    if ((local_38 != (longlong *)0x0) && (uVar4 = *(uint *)(param_1 + 0x50), -1 < (int)uVar4)) {
      while ((int)uVar4 < *(int *)(param_1 + 0x48)) {
        (**(code **)(*local_38 + 0x110))
                  (local_38,&local_48,
                   *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 4));
        if ((local_48 != 0) && (iVar5 = (**(code **)(*local_38 + 0x130))(), iVar5 != 2)) {
          *(undefined4 *)(param_1 + 0x70) = 3;
          if (*(char *)(param_1 + 0x5c) == '\0') {
            uVar3 = *(undefined8 *)(param_1 + 0x38);
            local_68 = &LAB_143f02c18;
            local_60 = 0;
            FUN_148a68e4a(local_58,param_1);
            FUN_143f29e76(uVar3,*(undefined1 *)(param_1 + 0x54),local_58);
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 1;
          }
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_40 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
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
          goto LAB_141532af4;
        }
        plVar6 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        iVar5 = *(int *)(param_1 + 0x50);
        uVar4 = iVar5 + 1;
        *(uint *)(param_1 + 0x50) = uVar4;
        if (iVar5 < -1) break;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  FUN_145d13390(param_1);
LAB_141532af4:
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141532b78 FUN_141532b78 body=518 status=ok
// SIG undefined FUN_141532b78(void)

void FUN_141532b78(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  code *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  int local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0x50);
  if (((longlong)iVar4 < 0) || (*(int *)(param_1 + 0x48) <= iVar4)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      FUN_145d13390(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar4 * 4);
  FUN_1446f470e(&local_40,L"SHIFT",1);
  local_50 = local_40;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x110))(local_38,&local_50,uVar3);
      if (local_50 == 0) {
LAB_141532c34:
        *(undefined4 *)(param_1 + 0x70) = 4;
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
      else {
        iVar4 = (**(code **)(*local_38 + 0x130))();
        plVar5 = local_38;
        if (iVar4 != 2) goto LAB_141532c34;
        local_70 = FUN_14156dd9e;
        local_68 = 0;
        FUN_14657f430(&local_60,param_1);
        local_78 = 0;
        (**(code **)(*plVar5 + 0x170))(plVar5,local_50,1,&local_60);
        if (local_58 == 0) {
LAB_141532d73:
          if (local_60 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_60 != (undefined8 *)0x0) {
          (**(code **)*local_60)(local_60,0);
          FUN_1446efa72(&local_60,0,0,0x10);
          local_58 = 0;
          goto LAB_141532d73;
        }
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_48 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      goto LAB_141532c7b;
    }
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  FUN_141532b78(param_1);
LAB_141532c7b:
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 141532d8c FUN_141532d8c body=617 status=ok
// SIG undefined FUN_141532d8c(void)

void FUN_141532d8c(undefined8 param_1,undefined4 *param_2,undefined1 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b4e02a0;
  local_60 = (longlong *)*param_5;
  *param_5 = 0;
  local_58 = (longlong *)CONCAT44(local_58._4_4_,*(undefined4 *)(param_5 + 1));
  *(undefined4 *)(param_5 + 1) = 0;
  lVar9 = *param_4;
  uVar3 = *param_3;
  uVar4 = *param_2;
  plVar6[3] = 0;
  plVar6[4] = 0;
  *(undefined1 *)(plVar6 + 5) = 0;
  iVar8 = DAT_14cb970bc + 1;
  *(int *)((longlong)plVar6 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar8;
  plVar6[2] = (longlong)&PTR_FUN_14b4df2f0;
  *(undefined4 *)(plVar6 + 6) = uVar4;
  *(undefined1 *)((longlong)plVar6 + 0x34) = uVar3;
  plVar6[7] = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  FUN_145d85882(plVar6 + 7);
  *(undefined4 *)(plVar6 + 9) = 1;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  iVar8 = 0;
  if (lVar9 != 0) {
    uVar5 = *(uint *)(lVar9 + 0xc);
    *(uint *)(plVar6 + 0xb) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar7;
      }
    }
  }
  plVar1 = plVar6 + 2;
  *(int *)((longlong)plVar6 + 0x5c) = iVar8;
  if ((int)local_58 != 0) {
    if (local_60 == (longlong *)0x0) goto LAB_141532eec;
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141532eec:
  local_70 = plVar1;
  local_68 = plVar6;
  FUN_148a6f4fe(&local_70,plVar1);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_60 = plVar1;
  local_58 = plVar6;
  FUN_14657fd98(param_1,&local_60);
  plVar6 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141532ff6 FUN_141532ff6 body=305 status=ok
// SIG undefined FUN_141532ff6(void)

void FUN_141532ff6(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_141533090;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_141533069:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_141533069;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_141533090;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141533090:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141533128 FUN_141533128 body=857 status=ok
// SIG undefined FUN_141533128(void)

void FUN_141533128(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined8 ***pppuVar8;
  char *pcVar9;
  void *_Dst;
  float fVar10;
  float fVar11;
  undefined1 auStack_f8 [40];
  undefined8 **local_d0 [3];
  ushort local_b8;
  byte local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  byte local_78;
  undefined2 local_68;
  undefined1 local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x20);
  if (iVar5 == 0) {
    local_a8 = local_a8 & 0xffffffffffffff00;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    *(undefined4 *)(param_2 + 0x20) = 1;
    if (*(int *)(param_2 + 0x24) == 0) {
      FUN_14095139e(puVar1,0);
    }
    puVar4 = (undefined1 *)*puVar1;
    *puVar4 = 0;
    FUN_145d1462c(puVar4 + 8,&local_a0);
    FUN_140382e86(puVar4 + 0x20,&uStack_88);
    FUN_144a2da94(&uStack_88);
  }
  else if (1 < iVar5) {
    uVar2 = iVar5 - 1;
    _Dst = (void *)(*(longlong *)(param_2 + 0x18) + 0x58);
    FUN_14028f43e(_Dst,uVar2);
    iVar6 = *(int *)(param_2 + 0x20) - iVar5;
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((ulonglong)uVar2 * 0x58 + (longlong)_Dst),(longlong)iVar6 * 0x58);
      iVar5 = *(int *)(param_2 + 0x20);
    }
    *(uint *)(param_2 + 0x20) = iVar5 - uVar2;
    FUN_1487be82c(puVar1);
  }
  pcVar9 = (char *)*puVar1;
  if (*pcVar9 == '\x02') {
    uVar2 = *(uint *)(param_1 + 0x88);
    cVar7 = '\0';
    if (uVar2 < 3) {
      cVar7 = (char)(0x20301 >> ((char)uVar2 * '\b' & 0x1fU));
    }
    if (pcVar9[0x48] == cVar7) {
      pcVar9 = pcVar9 + 0x20;
      if (uVar2 == 1) {
        local_a8 = (ulonglong)local_a8._1_7_ << 8;
        local_80 = 0;
        FUN_14575a19a(&local_a8,0);
        FUN_1447c3578(pcVar9,local_d0,&local_a8);
        fVar10 = (float)FUN_144a7ecd0(local_d0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
        if (pcVar3 != (code *)0x0) {
          pppuVar8 = local_d0;
          if (0x18 < local_b8) {
            pppuVar8 = (undefined8 ***)local_d0[0];
          }
          (*pcVar3)(pppuVar8);
        }
        if (0x18 < local_b8) {
          FUN_1400020a8(local_d0[0]);
        }
        FUN_144a5ac3a(&local_a8);
        fVar11 = *(float *)(param_1 + 0x8c);
        if ((fVar11 <= fVar10) && (fVar11 = *(float *)(param_1 + 0x90), fVar10 <= fVar11))
        goto LAB_141533247;
        local_a0 = CONCAT44(local_a0._4_4_,fVar11);
        local_80 = CONCAT31(local_80._1_3_,3);
        local_78 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
      }
      else {
        if (uVar2 != 2) goto LAB_141533247;
        local_a8 = (ulonglong)local_a8._1_7_ << 8;
        local_80 = 0;
        FUN_14575a19a(&local_a8,0);
        FUN_1447c3578(pcVar9,local_d0,&local_a8);
        iVar5 = FUN_1405d5f74(local_d0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
        if (pcVar3 != (code *)0x0) {
          pppuVar8 = local_d0;
          if (0x18 < local_b8) {
            pppuVar8 = (undefined8 ***)local_d0[0];
          }
          (*pcVar3)(pppuVar8);
        }
        if (0x18 < local_b8) {
          FUN_1400020a8(local_d0[0]);
        }
        FUN_144a5ac3a(&local_a8);
        iVar6 = (int)*(float *)(param_1 + 0x8c);
        if ((iVar6 <= iVar5) && (iVar6 = (int)*(float *)(param_1 + 0x90), iVar5 <= iVar6))
        goto LAB_141533247;
        local_a0 = CONCAT44(local_a0._4_4_,iVar6);
        local_80 = CONCAT31(local_80._1_3_,2);
        local_78 = (byte)~DAT_14c9a8754 >> 4 & 2;
      }
      uStack_88 = CONCAT62(uStack_88._2_6_,4);
      local_a8 = 0;
      FUN_1403719a4(pcVar9,&local_a8);
      FUN_144a2da94(&local_a8);
      goto LAB_141533247;
    }
  }
  else if (*pcVar9 == '\0') goto LAB_141533247;
  *pcVar9 = '\0';
LAB_141533247:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141533482 FUN_141533482 body=53 status=ok
// SIG undefined FUN_141533482(void)

void FUN_141533482(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x98);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1415334b8 FUN_1415334b8 body=282 status=ok
// SIG undefined FUN_1415334b8(void)

undefined8 * FUN_1415334b8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14371f534);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1415335d2 FUN_1415335d2 body=267 status=ok
// SIG undefined FUN_1415335d2(void)

void FUN_1415335d2(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x588) + 0xdc) & 0xffffff)) {
    FUN_140dfab96(&local_58,(longlong)param_2 + 0xc);
    puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    uVar4 = param_2[1];
    uVar3 = *(undefined8 *)(param_1 + 0x588);
    QueryPerformanceCounter(&local_48);
    puVar5[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
    puVar5[2] = uVar3;
    *puVar5 = &PTR_FUN_14ba43cf0;
    FUN_140df9946(local_58,puVar5 + 3);
    *(int *)(puVar5 + 5) = (int)uVar4;
    FUN_143e6b0f2(param_1,puVar5);
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
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415336de FUN_1415336de body=27 status=ok
// SIG undefined FUN_1415336de(void)

void FUN_1415336de(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x60))();
  if (cVar1 != '\0') {
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return;
}



// FUNCTION 1415336fa FUN_1415336fa body=169 status=ok
// SIG undefined FUN_1415336fa(void)

longlong FUN_1415336fa(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x24f0);
  if (lVar2 == 0) {
    FUN_1446f470e(&local_20,L"PushToTalkInputComponent",1);
    lVar2 = FUN_145d1614e(param_1,local_20);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x24f0) = lVar2;
    *(undefined4 *)(lVar2 + 400) = 1000;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x24f0) + 0x194);
    *pbVar1 = *pbVar1 & 0xfe;
    lVar2 = *(longlong *)(param_1 + 0x24f0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415337a4 FUN_1415337a4 body=289 status=ok
// SIG undefined FUN_1415337a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415337a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6b0b0) {
    FUN_144b3d300(&DAT_14ca6b0b0);
    if (DAT_14ca6b0b0 == -1) {
      FUN_1415338c6();
      FUN_145d166f4();
      FUN_140db5666(&DAT_14ca6b008,0,&DAT_14ca6afa0,L"FVolumetricFogMaterialSetupCS",
                    L"/Engine/Private/VolumetricFog.usf",L"MaterialSetupCS",5,8,FUN_1473348d2,
                    FUN_147334872,&LAB_1431028ba,&LAB_14733486e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca6cad0);
      _DAT_14ca6b008 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431028bd);
      _Init_thread_footer(&DAT_14ca6b0b0);
    }
  }
  return &DAT_14ca6b008;
}



// FUNCTION 1415338c6 FUN_1415338c6 body=258 status=ok
// SIG undefined FUN_1415338c6(void)

void FUN_1415338c6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6cb50) {
    FUN_144b3d300(&DAT_14ca6cb50);
    if (DAT_14ca6cb50 == -1) {
      FUN_145d1683e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x270;
      local_58 = 0x100;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6cad0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310e72b);
      _Init_thread_footer(&DAT_14ca6cb50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415339c9 FUN_1415339c9 body=78 status=ok
// SIG undefined FUN_1415339c9(void)

void FUN_1415339c9(void)

{
  longlong *plVar1;
  
  if (DAT_14c948aa0 != (longlong *)0x0) {
    (**(code **)(*DAT_14c948aa0 + 0x10))();
    plVar1 = DAT_14c948aa0;
    if (DAT_14c948aa0 != (longlong *)0x0) {
      DAT_14c948aa0 = (longlong *)0x0;
      (**(code **)*plVar1)(plVar1,1);
    }
  }
  if (DAT_14c948aa8 != '\x01') {
    return;
  }
  FUN_145ce3eb0();
  return;
}



// FUNCTION 141533a18 FUN_141533a18 body=763 status=ok
// SIG undefined FUN_141533a18(void)

void FUN_141533a18(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_c8 [47];
  char local_99;
  PSRWLOCK local_98;
  undefined1 local_8c [4];
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined **local_68;
  uint local_60;
  undefined4 uStack_5c;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if (((lVar5 == 0) || (lVar5 = FUN_1400f6f32(lVar5), lVar5 == 0)) ||
     (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 == 0)) goto LAB_141533ce6;
  FUN_14042af24(lVar5,local_8c,param_2);
  FUN_1446f470e(&local_78,L"SHIFT",1);
  FUN_1413d9c32(lVar5,&local_68,local_8c,&local_78);
  uVar6 = (ulonglong)local_50;
  if ((&DAT_149fc1b6e)[uVar6] == '\x01') {
    if ((longlong *)CONCAT44(uStack_5c,local_60) != (longlong *)0x0) {
      cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_5c,local_60) + 0x28))();
      if (cVar4 != '\0') goto LAB_141533b00;
      uVar6 = (ulonglong)local_50;
    }
  }
  else if ((local_60 & 0xffffff) != 0) {
LAB_141533b00:
    local_99 = param_3;
    FUN_1402815f4(param_1,&local_78);
    lVar5 = local_78[0x22];
    local_98 = (PSRWLOCK)(lVar5 + 0x100);
    AcquireSRWLockExclusive(local_98);
    plVar3 = local_70;
    *(int *)(lVar5 + 0xf8) = *(int *)(lVar5 + 0xf8) + 1;
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
    *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
    if ((longlong)*(int *)(lVar5 + 0x20) != 0) {
      lVar9 = *(longlong *)(lVar5 + 0x18) + 0x180;
      lVar5 = (longlong)*(int *)(lVar5 + 0x20) * 0x198;
      do {
        if (*(char *)(lVar9 + -0x28) == '\0') {
          FUN_140cb2ecc(&local_78,lVar9);
          if (local_78 == (longlong *)0x0) {
LAB_141533c22:
            cVar4 = '\0';
          }
          else {
            (**(code **)(*local_78 + 0x10))(local_78,&local_80);
            FUN_1446f470e(&local_88,L"SHIFT",1);
            if (local_80 != local_88) goto LAB_141533c22;
            uVar7 = FUN_14127b0d4(&local_68);
            plVar3 = local_70;
            if (local_70 == (longlong *)0x0) {
              cVar4 = (**(code **)*local_78)(local_78,uVar7);
            }
            else {
              LOCK();
              *(int *)(local_70 + 1) = (int)local_70[1] + 1;
              UNLOCK();
              cVar4 = (**(code **)*local_78)(local_78,uVar7);
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
          if (cVar4 != '\0') {
            if (lVar9 == 0x180) break;
            if ((bool)*(char *)(lVar9 + -0x20) == (local_99 == '\x03')) {
              if (*(int *)(lVar9 + -0x1c) != 0) break;
              iVar8 = 1;
            }
            else {
              iVar8 = *(int *)(lVar9 + -0x1c) + 1;
            }
            *(bool *)(lVar9 + -0x20) = local_99 == '\x03';
            *(int *)(lVar9 + -0x1c) = iVar8;
            break;
          }
        }
        lVar9 = lVar9 + 0x198;
        lVar5 = lVar5 + -0x198;
      } while (lVar5 != 0);
    }
    ReleaseSRWLockExclusive(local_98);
    uVar6 = (ulonglong)local_50;
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar6])(&local_60);
LAB_141533ce6:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141533d14 FUN_141533d14 body=35 status=ok
// SIG undefined FUN_141533d14(void)

undefined8 FUN_141533d14(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x32b8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141533d31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x480))(plVar1,DAT_14c9abbf0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141533d38 FUN_141533d38 body=130 status=ok
// SIG undefined FUN_141533d38(void)

undefined8 * FUN_141533d38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2a5c90;
  param_1[0xe] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  if ((param_1[0xd] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xd] + 0x50));
  }
  if ((param_1[6] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[6] + 0x50));
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141533dba FUN_141533dba body=139 status=ok
// SIG undefined FUN_141533dba(void)

void FUN_141533dba(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined1 *)(puVar1 + 0x13) = 1;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *puVar1 = &PTR_FUN_14b57d2b0;
  return;
}



// FUNCTION 141533e46 FUN_141533e46 body=139 status=ok
// SIG undefined FUN_141533e46(void)

void FUN_141533e46(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined1 *)(puVar1 + 0x13) = 1;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *puVar1 = &PTR_FUN_14b57d690;
  return;
}



// FUNCTION 141533ed2 FUN_141533ed2 body=380 status=ok
// SIG undefined FUN_141533ed2(void)

void FUN_141533ed2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  double local_70;
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140457ffc(&DAT_14c867420,param_1);
  if (param_1[2] != 0) {
    param_1[2] = 0;
    plVar3 = (longlong *)param_1[3];
    if (plVar3 != (longlong *)0x0) {
      param_1[3] = 0;
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
  if (param_1[1] != 0) {
    uVar7 = (**(code **)(*param_1 + 0x2a0))(param_1);
    FUN_14126849c(uVar7,param_1);
    local_70 = 2.0;
    local_78 = &DAT_14c872af8;
    FUN_14612afb8(DAT_14c872ce0,L"LiveLink",L"ClientShutdownTimeout",&local_70);
    QueryPerformanceCounter(&local_68);
    dVar5 = local_70;
    dVar4 = (double)local_68.QuadPart * DAT_14c83f420;
    do {
      cVar6 = FUN_145af9594(param_1[1]);
      QueryPerformanceCounter(&local_68);
      if (cVar6 != '\0') break;
    } while (((double)local_68.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar4 + 16777216.0) <=
             dVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141534050 FUN_141534050 body=324 status=ok
// SIG undefined FUN_141534050(void)

undefined2 * FUN_141534050(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x408;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x46;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14b422bc0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14b422b90;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14b422bf0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415341ea FUN_1415341ea body=293 status=ok
// SIG undefined FUN_1415341ea(void)

void FUN_1415341ea(longlong param_1,short param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x520) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x518);
    lVar2 = (longlong)*(int *)(param_1 + 0x520) * 0x90;
    do {
      if (*(short *)(lVar4 + 0xc) == param_2) {
        if (lVar4 == 0) {
          return;
        }
        *(undefined1 *)(lVar4 + 0x48) = 1;
        if (((*(char *)(lVar4 + 0x38) == '\x01') && (lVar2 = FUN_1447210f0(param_1), lVar2 != 0)) &&
           (lVar2 = FUN_140995560(lVar2), lVar2 != 0)) {
          FUN_1447f69b6(lVar2 + 0x30);
        }
        if (((((*(int *)(lVar4 + 0x50) != 0) && (uVar1 = *(uint *)(lVar4 + 0x4c), -1 < (int)uVar1))
             && (((int)uVar1 < DAT_14c9647dc &&
                 ((plVar3 = (longlong *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                  plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(lVar4 + 0x50))))))) &&
            ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) &&
           ((*plVar3 != 0 && (lVar2 = FUN_141416276(), lVar2 != 0)))) {
          if (*(longlong *)(lVar4 + 0x40) != 0) {
            FUN_14480f766(lVar2 + 0x488);
          }
          *(undefined8 *)(lVar4 + 0x40) = 0;
        }
        if (*(char *)(param_1 + 0x178) != '\x03') {
          return;
        }
        if (*(int *)(lVar4 + 0x88) < 6) {
          *(undefined4 *)(lVar4 + 0x88) = 6;
        }
        if (*(char *)(lVar4 + 0x38) != '\0') {
          return;
        }
        FUN_1414dc0a8(param_1,lVar4);
        return;
      }
      lVar4 = lVar4 + 0x90;
      lVar2 = lVar2 + -0x90;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 141534310 FUN_141534310 body=1457 status=ok
// SIG undefined FUN_141534310(void)

void FUN_141534310(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  uint *local_d8;
  undefined8 *local_c8;
  int local_c0;
  ushort local_b2;
  uint local_b0 [2];
  ushort *local_a8;
  undefined8 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b2 = (ushort)param_2;
  lVar5 = FUN_1447210f0();
  if (lVar5 == 0) goto LAB_141534419;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_c8 = (undefined8 *)0x0;
    local_c0 = 0;
    FUN_1446efa72(&local_c8,0,3,0x10);
    puVar6 = local_c8;
    local_c0 = 3;
    *local_c8 = &PTR_LAB_14b424590;
    *(ushort *)(local_c8 + 1) = local_b2;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_c8[2] = lVar9;
    *local_c8 = &PTR_FUN_14b424520;
    local_c8[3] = 0;
    iVar11 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_c8 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar11 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar11 = *(int *)(lVar8 + 0x10);
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(lVar8 + 0x10) = iVar12;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar11 = iVar12;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar11;
    puVar6[4] = &LAB_1489516e4;
    local_a8 = &local_b2;
    FUN_145c5260c(param_1 + 0x670,local_b0);
    lVar9 = (longlong)(int)local_b0[0];
    lVar8 = *(longlong *)(param_1 + 0x670);
    uVar2 = *(undefined4 *)(param_1 + 0x6c0);
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar7 = *puVar6;
    local_a8 = (ushort *)0x0;
    local_a0 = (longlong *)((ulonglong)local_a0._4_4_ << 0x20);
    FUN_14487d8d8(&local_a8,&local_c8);
    local_68 = 1;
    local_b0[0] = local_b0[0] & 0xffff0000;
    local_b0[1] = 0xbf800000;
    local_d8 = local_b0;
    FUN_1406f4044(uVar7,lVar8 + lVar9 * 0x18 + 8,&local_a8,uVar2);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    if (local_c0 == 0) {
LAB_141534609:
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_c8 != (undefined8 *)0x0) {
      (**(code **)*local_c8)(local_c8,0);
      FUN_1446efa72(&local_c8,0,0,0x10);
      local_c0 = 0;
      goto LAB_141534609;
    }
    param_2 = (uint)local_b2;
  }
  if ((longlong)*(int *)(param_1 + 0x520) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x518);
    lVar8 = (longlong)*(int *)(param_1 + 0x520) * 0x90;
    do {
      if (*(short *)(lVar5 + 0xc) == (short)param_2) {
        if ((((((lVar5 != 0) && (*(char *)(lVar5 + 0x3a) == '\x01')) &&
              (*(int *)(lVar5 + 0x50) != 0)) &&
             (((uVar3 = *(uint *)(lVar5 + 0x4c), -1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
              ((plVar10 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0 &&
               (((int)plVar10[2] == *(int *)(lVar5 + 0x50) &&
                ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))))))) &&
            (lVar5 = *plVar10, lVar5 != 0)) &&
           (((*(longlong *)(lVar5 + 0x630) == 0 ||
             (*(int *)(*(longlong *)(lVar5 + 0x630) + 0x30) == 0)) ||
            (*(char *)(lVar5 + 0x720) == '\0')))) {
          plVar10 = (longlong *)FUN_148956d9a(param_1 + 0x618,param_2 & 0xffff,&local_b2);
          if (((*plVar10 != 0) && (plVar10[1] != 0)) && (0 < *(int *)(plVar10[1] + 8)))
          goto LAB_141534419;
          uVar7 = FUN_1401cb356();
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          FUN_1446efa72(&local_c8,0,3,0x10);
          puVar6 = local_c8;
          local_c0 = 3;
          *local_c8 = &PTR_LAB_14b424670;
          *(ushort *)(local_c8 + 1) = local_b2;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar5 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar5 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar5;
          local_c8[2] = lVar8;
          *local_c8 = &PTR_FUN_14b424600;
          local_c8[3] = 0;
          iVar11 = 0;
          if (param_1 != 0) {
            uVar3 = *(uint *)(param_1 + 0xc);
            *(uint *)(local_c8 + 3) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar11 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar11 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar11;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar11 = *(int *)(lVar5 + 0x10);
              bVar13 = iVar11 == 0;
              if (bVar13) {
                *(int *)(lVar5 + 0x10) = iVar12;
                iVar11 = 0;
              }
              UNLOCK();
              if (bVar13) {
                iVar11 = iVar12;
              }
            }
          }
          *(int *)((longlong)puVar6 + 0x1c) = iVar11;
          puVar6[4] = FUN_143e17ae0;
          local_d8 = (uint *)((ulonglong)local_d8 & 0xffffffff00000000);
          FUN_1405f67fc(uVar7,&local_a8,&local_c8,
                        L"AGbxLevelSequenceManager.HandleTimerCheckBindingsReady");
          *plVar10 = (longlong)local_a8;
          local_a8 = (ushort *)0x0;
          plVar4 = (longlong *)plVar10[1];
          plVar10[1] = (longlong)local_a0;
          local_a0 = (longlong *)0x0;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_a0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_a0 + 0x10))();
              }
            }
          }
          if (local_c0 != 0) {
            if (local_c8 == (undefined8 *)0x0) goto LAB_141534419;
            (**(code **)*local_c8)(local_c8,0);
            FUN_1446efa72(&local_c8,0,0,0x10);
            local_c0 = 0;
          }
          if (local_c8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_141534419;
        }
        break;
      }
      lVar5 = lVar5 + 0x90;
      lVar8 = lVar8 + -0x90;
    } while (lVar8 != 0);
  }
  FUN_143e17b9e(param_1,param_2);
LAB_141534419:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415348c2 FUN_1415348c2 body=47 status=ok
// SIG undefined FUN_1415348c2(void)

void FUN_1415348c2(longlong param_1,int param_2)

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



// FUNCTION 1415348f1 FUN_1415348f1 body=47 status=ok
// SIG undefined FUN_1415348f1(void)

void FUN_1415348f1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141534920 FUN_141534920 body=99 status=ok
// SIG undefined FUN_141534920(void)

void FUN_141534920(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 141534984 FUN_141534984 body=99 status=ok
// SIG undefined FUN_141534984(void)

void FUN_141534984(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1415349e8 FUN_1415349e8 body=99 status=ok
// SIG undefined FUN_1415349e8(void)

void FUN_1415349e8(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 141534a4c FUN_141534a4c body=407 status=ok
// SIG undefined FUN_141534a4c(void)

ulonglong FUN_141534a4c(undefined8 *param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_2b8 [40];
  longlong local_290 [2];
  longlong local_280;
  undefined8 local_278;
  undefined2 *local_270;
  undefined2 *local_268;
  ulonglong *local_260;
  char local_258;
  undefined2 local_250 [260];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  iVar3 = param_3 - param_2;
  if (iVar3 == 0 || (int)param_3 < (int)param_2) {
    uVar4 = 0;
  }
  else {
    uVar6 = (ulonglong)param_2;
    lVar5 = uVar6 << 4;
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    do {
      uVar6 = uVar6 + 1;
      local_258 = '\0';
      local_260 = &local_48;
      local_270 = local_250;
      local_268 = local_250;
      FUN_14585a2fe(&local_270,*(longlong *)param_1[2] + lVar5,param_1[3]);
      plVar1 = (longlong *)*param_1;
      *local_268 = 0;
      cVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,local_270);
      if (cVar2 != '\0') {
        *local_268 = 0;
        FUN_140056680(local_290,local_270);
        FUN_140aa5ef8(&local_280,local_290);
        plVar1 = (longlong *)param_1[1];
        if (plVar1 == &local_280) {
          if (local_280 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*plVar1 != 0) {
            FUN_1400020a8();
          }
          *plVar1 = local_280;
          local_280 = 0;
          *(undefined4 *)(plVar1 + 1) = (undefined4)local_278;
          *(undefined4 *)((longlong)plVar1 + 0xc) = local_278._4_4_;
          local_278 = 0;
        }
        if (local_290[0] != 0) {
          FUN_1400020a8();
        }
        if (local_258 == '\x01') {
          FUN_1400020a8(local_270);
        }
        break;
      }
      if (local_258 == '\x01') {
        FUN_1400020a8(local_270);
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),uVar6 < param_3);
      lVar5 = lVar5 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffff01;
}



// FUNCTION 141534be4 FUN_141534be4 body=181 status=ok
// SIG undefined FUN_141534be4(void)

longlong FUN_141534be4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_141534c46;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_141534c9a(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_141534c46:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 141534c9a FUN_141534c9a body=782 status=ok
// SIG undefined FUN_141534c9a(void)

int * FUN_141534c9a(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_1447711aa(param_1,iVar21);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar19 = param_1 + 2;
    iVar15 = iVar12 + 1;
    iVar22 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar22 = iVar12;
    }
    if (iVar22 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar15;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar15 = 0x80;
          iVar11 = iVar12;
        }
        else {
          uVar17 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar17) {
              uVar16 = uVar17;
            }
          }
          else {
            uVar16 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar16 << 2,0);
          iVar11 = (int)(uVar13 >> 2);
          iVar15 = -0x20;
          if ((int)uVar17 <= iVar11) {
            iVar15 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar15;
        FUN_1446efbd8(plVar19,iVar11);
        iVar15 = (int)param_1[5] + 1;
      }
      iVar11 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar11 = iVar15;
      }
      *(int *)(param_1 + 5) = iVar15;
      if (iVar15 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar19;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar19 + (longlong)(iVar22 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar18 = (longlong)iVar21;
    iVar12 = *(int *)(*param_1 + 4 + lVar18 * 0x20);
    *(int *)(param_1 + 6) = iVar12;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x20) = 0xffffffff;
    }
  }
  iVar12 = 1;
  plVar19 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar19 = (longlong *)param_1[4];
  }
  iVar11 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar11 = iVar21;
  }
  puVar1 = (uint *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar21 & 0x1f);
  lVar5 = *param_1;
  lVar18 = lVar18 * 0x20;
  puVar2 = (undefined4 *)(lVar5 + lVar18);
  lVar6 = *(longlong *)*param_4;
  *(longlong *)(lVar5 + lVar18) = lVar6;
  puVar4 = (undefined8 *)(lVar5 + 8 + lVar18);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar18) = 0xffffffff;
  uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar17 != 0) && (uVar17 != 1)) {
    plVar19 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar19 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar11 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x20) == lVar6) {
          if (*(longlong *)(puVar3 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar7;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          FUN_148cffd1e(param_1,iVar21);
          goto LAB_141534e4a;
        }
        iVar11 = puVar3[6];
      } while (iVar11 != -1);
    }
  }
  if (3 < uVar17) {
    uVar13 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
    lVar18 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar18 & 0x1f);
  }
  if (((int)uVar17 < 1) || (iVar12 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    puVar2[7] = param_3;
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4)
    ;
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    *(int *)((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar21;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_141534fa8(param_1);
  }
LAB_141534e4a:
  *param_2 = iVar21;
  return param_2;
}



// FUNCTION 141534fa8 FUN_141534fa8 body=590 status=ok
// SIG undefined FUN_141534fa8(void)

void FUN_141534fa8(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1415351b1;
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
LAB_1415351b1:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415351f8 FUN_1415351f8 body=153 status=ok
// SIG undefined FUN_1415351f8(void)

void FUN_1415351f8(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caa7b28,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141535292 FUN_141535292 body=153 status=ok
// SIG undefined FUN_141535292(void)

void FUN_141535292(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caa7c18,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153532c FUN_14153532c body=584 status=ok
// SIG undefined FUN_14153532c(void)

void FUN_14153532c(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1404fad5e();
  if (((param_2[1] == 0) || (uVar1 = *param_2, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
LAB_1415354ed:
    if (((*(double *)(param_2 + 2) == 0.0) && (!NAN(*(double *)(param_2 + 2)))) &&
       ((*(double *)(param_2 + 4) == 0.0 && (!NAN(*(double *)(param_2 + 4)))))) {
      if ((*(double *)(param_2 + 6) == 0.0) && (!NAN(*(double *)(param_2 + 6)))) goto LAB_141535534;
    }
  }
  else {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != param_2[1])) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (*plVar7 == 0)))) goto LAB_1415354ed;
  }
  if (param_1[0x16] == 0) {
    lVar6 = FUN_1448abda6(param_1);
    if (lVar6 == 0) goto LAB_141535534;
  }
  if (param_1[0x39d] == 0) goto LAB_141535534;
  param_1[0x5f5] = *(longlong *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  lVar6 = *(longlong *)(param_2 + 6);
  param_1[0x5f3] = *(longlong *)(param_2 + 4);
  param_1[0x5f4] = lVar6;
  *(uint *)(param_1 + 0x5f1) = uVar1;
  *(uint *)((longlong)param_1 + 0x2f8c) = uVar2;
  *(uint *)(param_1 + 0x5f2) = uVar3;
  *(uint *)((longlong)param_1 + 0x2f94) = uVar4;
  if (((param_2[1] == 0) || (uVar1 = *param_2, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
LAB_141535442:
    local_38 = *(longlong *)(param_2 + 6);
    local_48 = *(longlong *)(param_2 + 2);
    lStack_40 = *(longlong *)(param_2 + 4);
  }
  else {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != param_2[1])) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (*plVar7 == 0)))) goto LAB_141535442;
    lVar6 = 0;
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar7;
    }
    FUN_14880fd16(param_1,&local_48,lVar6);
  }
  param_1[0x5f8] = local_38;
  param_1[0x5f6] = local_48;
  param_1[0x5f7] = lStack_40;
  *(undefined1 *)(param_1 + 0x5f9) = 1;
  *(uint *)((longlong)param_1 + 0x2fcc) = param_2[8];
  if ((*(byte *)((longlong)param_1 + 0x2fac) & 8) != 0) {
    FUN_140257a06(param_1,&DAT_14cb76120,5);
  }
  if (param_1[0x15] != 0) {
    iVar5 = FUN_14487fd02();
    if (iVar5 == 3) {
      local_28 = *(undefined8 *)(param_2 + 8);
      local_48 = *(longlong *)param_2;
      lStack_40 = *(longlong *)(param_2 + 2);
      local_38 = *(longlong *)(param_2 + 4);
      uStack_30 = *(undefined8 *)(param_2 + 6);
      (**(code **)(*param_1 + 3000))(param_1);
      FUN_1458d9f42(param_1,&local_48);
    }
  }
LAB_141535534:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141535576 FUN_141535576 body=60 status=ok
// SIG undefined FUN_141535576(void)

longlong FUN_141535576(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = FUN_14001cc68(0x4a8,0x10);
    FUN_1460d3e8c(lVar1);
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  return lVar1;
}



// FUNCTION 1415355b2 FUN_1415355b2 body=877 status=ok
// SIG undefined FUN_1415355b2(void)

void FUN_1415355b2(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_138 [36];
  uint local_114;
  ulonglong local_110;
  longlong *local_108;
  uint *local_100;
  undefined1 local_f8 [96];
  longlong local_98 [2];
  undefined2 auStack_88 [20];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34) < 2) &&
     (plVar5 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10)),
     plVar5 != (longlong *)0x0)) {
    cVar2 = FUN_140d60302(param_1 + 0x20);
    if (cVar2 != '\0') {
      local_108 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 0x20);
      uVar12 = *(uint *)(param_2 + 5);
      if (uVar12 == 0) {
        uVar10 = 1;
        uVar15 = 0;
        iVar16 = 0;
        uVar3 = 0;
      }
      else {
        puVar6 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar6 = (uint *)(param_2 + 2);
        }
        uVar3 = *puVar6;
        if (uVar3 == 0) {
          iVar16 = uVar12 + 0x1e;
          if (-1 < (int)(uVar12 - 1)) {
            iVar16 = uVar12 - 1;
          }
          uVar15 = 0;
          uVar10 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar10 = uVar15;
          }
          iVar16 = 0;
          do {
            if (uVar10 == uVar15) goto LAB_1415356bd;
            iVar16 = iVar16 + 0x20;
            uVar3 = puVar6[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar3 == 0);
        }
        else {
          uVar15 = 0;
          iVar16 = 0;
        }
        uVar10 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar10 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar3 = (iVar16 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)uVar12 <= (int)uVar3) {
          uVar3 = uVar12;
        }
      }
      if (uVar3 != uVar12) {
        uVar13 = 0xffffffff;
        local_110 = (ulonglong)uVar12;
        local_100 = (uint *)(param_2 + 2);
        do {
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(*param_2 + 8 + (longlong)(int)uVar3 * 0x18) != 0) {
            puVar7 = *(undefined2 **)(*param_2 + (longlong)(int)uVar3 * 0x18);
          }
          local_114 = uVar13;
          iVar4 = FUN_144a1ccda(puVar7,0);
          local_98[0] = 0;
          local_98[1] = 0;
          lVar11 = 0xf;
          iVar9 = 0x10;
          lVar8 = 0x1000000000;
          iVar14 = iVar4;
          do {
            lVar8 = lVar8 + -0x100000000;
            auStack_88[lVar11] = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar14 % 10) * 2);
            uVar12 = iVar14 + 9;
            lVar11 = lVar11 + -1;
            iVar9 = iVar9 + -1;
            iVar14 = iVar14 / 10;
          } while (0x12 < uVar12);
          if (iVar4 < 0) {
            iVar9 = (int)lVar11;
            lVar8 = (longlong)iVar9;
            auStack_88[lVar8] = 0x2d;
          }
          else {
            lVar8 = lVar8 >> 0x20;
          }
          FUN_1400020e8(local_98,auStack_88 + lVar8,0x10 - iVar9);
          lVar8 = FUN_145916402(param_1,local_98);
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
          if (lVar8 != 0) {
            FUN_1413ebcfe(local_f8,lVar8 + 0x18);
            (**(code **)(*local_108 + 0xf8))(local_108,1,local_f8);
          }
          uVar13 = local_114 & ~(uint)uVar10;
          puVar6 = (uint *)param_2[4];
          if ((uint *)param_2[4] == (uint *)0x0) {
            puVar6 = local_100;
          }
          uVar12 = *(uint *)(param_2 + 5);
          iVar14 = (int)uVar15;
          lVar8 = (longlong)iVar14;
          uVar3 = puVar6[lVar8] & uVar13;
          if (uVar3 == 0) {
            iVar4 = uVar12 + 0x1e;
            if (-1 < (int)(uVar12 - 1)) {
              iVar4 = uVar12 - 1;
            }
            iVar4 = iVar4 >> 5;
            iVar16 = iVar16 + 0x20;
            iVar9 = iVar4;
            if (iVar4 < iVar14) {
              iVar9 = iVar14;
            }
            if (iVar14 < iVar4) {
              lVar11 = 0;
              do {
                uVar3 = puVar6[lVar8 + lVar11 + 1];
                if (uVar3 != 0) {
                  uVar15 = (ulonglong)(iVar14 + (int)lVar11 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_1415358b2;
                }
                iVar16 = iVar16 + 0x20;
                lVar11 = lVar11 + 1;
              } while (iVar9 - lVar8 != lVar11);
              uVar13 = 0xffffffff;
              iVar14 = iVar9;
            }
            uVar15 = (ulonglong)(iVar14 + 1);
            uVar3 = uVar12;
          }
          else {
LAB_1415358b2:
            uVar10 = (ulonglong)(-uVar3 & uVar3);
            uVar1 = uVar10 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar3 = (iVar16 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if ((int)uVar12 <= (int)uVar3) {
              uVar3 = uVar12;
            }
          }
        } while (uVar3 != (uint)local_110);
      }
    }
  }
LAB_1415356bd:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141535920 FUN_141535920 body=71 status=ok
// SIG undefined FUN_141535920(void)

void FUN_141535920(longlong *param_1)

{
  FUN_1405e4918(param_1,0x42c80000);
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x42c80000;
  if ((char)param_1[0x2f] == '\x03') {
    FUN_14081ae08(param_1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000141535960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1);
  return;
}



// FUNCTION 141535968 FUN_141535968 body=134 status=ok
// SIG undefined FUN_141535968(void)

undefined4 FUN_141535968(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_38 = DAT_14cb92bf8;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_1461bc04e(param_1,lVar4,param_2);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415359f0 FUN_1415359f0 body=160 status=ok
// SIG undefined FUN_1415359f0(void)

undefined4 FUN_1415359f0(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_4[1];
  lVar2 = *param_4;
  local_48 = DAT_14cb92bf8;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_145e0007a(param_1,lVar1,param_2,param_3);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141535a96 FUN_141535a96 body=153 status=ok
// SIG undefined FUN_141535a96(void)

void FUN_141535a96(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caa7b70,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141535b30 FUN_141535b30 body=117 status=ok
// SIG undefined FUN_141535b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141535b30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb76c60) {
    FUN_144b3d300(&DAT_14cb76c60);
    if (DAT_14cb76c60 == -1) {
      DAT_14cb76c48 = 0;
      _DAT_14cb76c50 = 0;
      _DAT_14cb76c58 = 2;
      atexit(FUN_143d0887d);
      _Init_thread_footer(&DAT_14cb76c60);
    }
  }
  return &DAT_14cb76c48;
}



// FUNCTION 141535ba6 FUN_141535ba6 body=60 status=ok
// SIG undefined FUN_141535ba6(void)

void FUN_141535ba6(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((((*(byte *)(param_2 + 0x28) & 1) != 0) && ((*(byte *)(param_2 + 0x29) & 1) != 0)) &&
     (*(char *)(param_1 + 0x80) == '\0')) {
    cVar1 = FUN_144a8e0e6(param_1 + 0x90);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
  }
  return;
}



// FUNCTION 141535be2 FUN_141535be2 body=63 status=ok
// SIG undefined FUN_141535be2(void)

void FUN_141535be2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141535c22 FUN_141535c22 body=3536 status=ok
// SIG undefined FUN_141535c22(void)

void FUN_141535c22(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  
  if (*param_2 < 7) {
    lVar1 = *param_1;
    switch(*param_2) {
    case 0:
      cVar2 = FUN_141536d04();
      if (cVar2 != '\0') {
        uVar4 = *(int *)(lVar1 + 0x30) - *(int *)(lVar1 + 0x5c);
        iVar13 = 1;
        if (3 < uVar4) {
          uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar18 & 0x1f);
        }
        *(int *)(lVar1 + 0x70) = iVar13;
        FUN_144a8d11e((longlong *)(lVar1 + 0x28));
      }
      iVar13 = *(int *)(lVar1 + 0x50);
      if (iVar13 == 0) {
        uVar21 = 1;
        iVar14 = 0;
        iVar3 = 0;
        uVar8 = 0;
      }
      else {
        puVar6 = *(uint **)(lVar1 + 0x48);
        if (*(uint **)(lVar1 + 0x48) == (uint *)0x0) {
          puVar6 = (uint *)(lVar1 + 0x38);
        }
        uVar4 = *puVar6;
        if (uVar4 == 0) {
          iVar3 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar3 = iVar13 + -1;
          }
          uVar8 = 0;
          uVar21 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar21 = uVar8;
          }
          iVar14 = 0;
          do {
            if (uVar21 == uVar8) {
              return;
            }
            iVar14 = iVar14 + 0x20;
            uVar4 = puVar6[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar4 == 0);
        }
        else {
          iVar14 = 0;
          uVar8 = 0;
        }
        uVar21 = (ulonglong)(-uVar4 & uVar4);
        uVar7 = uVar21 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar3 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar3) {
          iVar3 = iVar13;
        }
      }
      if (iVar3 != iVar13) {
        uVar4 = 0xffffffff;
        do {
          lVar18 = *(longlong *)(lVar1 + 0x28);
          lVar17 = *(longlong *)(lVar18 + 0x10 + (longlong)iVar3 * 0x20);
          if (((lVar17 != 0) && (*(longlong *)((longlong)iVar3 * 0x20 + lVar18 + 8) == 0)) &&
             (cVar2 = FUN_1415369f2(lVar17), cVar2 != '\0')) {
            uVar12 = *(int *)(lVar17 + 8) - *(int *)(lVar17 + 0x34);
            if (uVar12 < 4) {
              iVar3 = 1;
            }
            else {
              uVar7 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
              lVar18 = 0x3f;
              if (uVar7 != 0) {
                for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar3 = 1 << ((byte)lVar18 & 0x1f);
            }
            *(int *)(lVar17 + 0x48) = iVar3;
            FUN_14492abf0(lVar17);
          }
          uVar4 = uVar4 & ~(uint)uVar21;
          puVar6 = *(uint **)(lVar1 + 0x48);
          if (*(uint **)(lVar1 + 0x48) == (uint *)0x0) {
            puVar6 = (uint *)(lVar1 + 0x38);
          }
          iVar16 = *(int *)(lVar1 + 0x50);
          iVar3 = (int)uVar8;
          lVar18 = (longlong)iVar3;
          uVar12 = puVar6[lVar18] & uVar4;
          if (uVar12 == 0) {
            iVar11 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar11 = iVar16 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar10 = iVar11;
            if (iVar11 < iVar3) {
              iVar10 = iVar3;
            }
            if (iVar3 < iVar11) {
              lVar17 = 0;
              do {
                uVar12 = puVar6[lVar18 + lVar17 + 1];
                if (uVar12 != 0) {
                  uVar8 = (ulonglong)(iVar3 + (int)lVar17 + 1);
                  uVar4 = 0xffffffff;
                  goto LAB_141535da0;
                }
                iVar14 = iVar14 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar18 != lVar17);
              uVar4 = 0xffffffff;
              iVar3 = iVar10;
            }
            uVar8 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar16;
          }
          else {
LAB_141535da0:
            uVar21 = (ulonglong)(-uVar12 & uVar12);
            uVar7 = uVar21 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar3 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar3) {
              iVar3 = iVar16;
            }
          }
        } while (iVar3 != iVar13);
      }
      break;
    case 1:
      cVar2 = FUN_141536bac(lVar1 + 0x78);
      if (cVar2 != '\0') {
        uVar4 = *(int *)(lVar1 + 0x80) - *(int *)(lVar1 + 0xac);
        iVar13 = 1;
        if (3 < uVar4) {
          uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar18 & 0x1f);
        }
        *(int *)(lVar1 + 0xc0) = iVar13;
        FUN_144a88e3a(lVar1 + 0x78);
        return;
      }
      break;
    case 2:
      cVar2 = FUN_141536e6a();
      if (cVar2 != '\0') {
        uVar4 = *(int *)(lVar1 + 0xd0) - *(int *)(lVar1 + 0xfc);
        iVar13 = 1;
        if (3 < uVar4) {
          uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar18 & 0x1f);
        }
        *(int *)(lVar1 + 0x110) = iVar13;
        FUN_14017b2d2((longlong *)(lVar1 + 200));
      }
      iVar13 = *(int *)(lVar1 + 0xf0);
      if (iVar13 == 0) {
        uVar21 = 1;
        uVar8 = 0;
        iVar3 = 0;
        iVar14 = 0;
      }
      else {
        puVar6 = *(uint **)(lVar1 + 0xe8);
        if (*(uint **)(lVar1 + 0xe8) == (uint *)0x0) {
          puVar6 = (uint *)(lVar1 + 0xd8);
        }
        uVar4 = *puVar6;
        if (uVar4 == 0) {
          iVar3 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar3 = iVar13 + -1;
          }
          uVar8 = 0;
          uVar21 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar21 = uVar8;
          }
          iVar14 = 0;
          do {
            if (uVar21 == uVar8) {
              return;
            }
            iVar14 = iVar14 + 0x20;
            uVar4 = puVar6[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar8 = 0;
          iVar14 = 0;
        }
        uVar21 = (ulonglong)(-uVar4 & uVar4);
        uVar7 = uVar21 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar3 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar3) {
          iVar3 = iVar13;
        }
      }
      if (iVar3 != iVar13) {
        uVar4 = 0xffffffff;
        do {
          lVar18 = *(longlong *)(lVar1 + 200);
          lVar17 = *(longlong *)(lVar18 + 0x10 + (longlong)iVar3 * 0x20);
          if (((lVar17 != 0) && (*(longlong *)((longlong)iVar3 * 0x20 + lVar18 + 8) == 0)) &&
             (cVar2 = FUN_1415369f2(lVar17), cVar2 != '\0')) {
            uVar12 = *(int *)(lVar17 + 8) - *(int *)(lVar17 + 0x34);
            if (uVar12 < 4) {
              iVar3 = 1;
            }
            else {
              uVar7 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
              lVar18 = 0x3f;
              if (uVar7 != 0) {
                for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar3 = 1 << ((byte)lVar18 & 0x1f);
            }
            *(int *)(lVar17 + 0x48) = iVar3;
            FUN_14492abf0(lVar17);
          }
          uVar4 = uVar4 & ~(uint)uVar21;
          puVar6 = *(uint **)(lVar1 + 0xe8);
          if (*(uint **)(lVar1 + 0xe8) == (uint *)0x0) {
            puVar6 = (uint *)(lVar1 + 0xd8);
          }
          iVar16 = *(int *)(lVar1 + 0xf0);
          iVar3 = (int)uVar8;
          lVar18 = (longlong)iVar3;
          uVar12 = puVar6[lVar18] & uVar4;
          if (uVar12 == 0) {
            iVar11 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar11 = iVar16 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar10 = iVar11;
            if (iVar11 < iVar3) {
              iVar10 = iVar3;
            }
            if (iVar3 < iVar11) {
              lVar17 = 0;
              do {
                uVar12 = puVar6[lVar18 + lVar17 + 1];
                if (uVar12 != 0) {
                  uVar8 = (ulonglong)(iVar3 + (int)lVar17 + 1);
                  uVar4 = 0xffffffff;
                  goto LAB_141536284;
                }
                iVar14 = iVar14 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar18 != lVar17);
              uVar4 = 0xffffffff;
              iVar3 = iVar10;
            }
            uVar8 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar16;
          }
          else {
LAB_141536284:
            uVar21 = (ulonglong)(-uVar12 & uVar12);
            uVar7 = uVar21 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar3 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar3) {
              iVar3 = iVar16;
            }
          }
        } while (iVar3 != iVar13);
      }
      break;
    case 3:
      cVar2 = FUN_141536fd0();
      if (cVar2 != '\0') {
        uVar4 = *(int *)(lVar1 + 0x120) - *(int *)(lVar1 + 0x14c);
        iVar13 = 1;
        if (3 < uVar4) {
          uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar18 & 0x1f);
        }
        *(int *)(lVar1 + 0x160) = iVar13;
        FUN_140852d4c((longlong *)(lVar1 + 0x118));
      }
      iVar13 = *(int *)(lVar1 + 0x140);
      if (iVar13 == 0) {
        uVar21 = 1;
        uVar8 = 0;
        iVar3 = 0;
        iVar14 = 0;
      }
      else {
        puVar6 = *(uint **)(lVar1 + 0x138);
        if (*(uint **)(lVar1 + 0x138) == (uint *)0x0) {
          puVar6 = (uint *)(lVar1 + 0x128);
        }
        uVar4 = *puVar6;
        if (uVar4 == 0) {
          iVar3 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar3 = iVar13 + -1;
          }
          uVar8 = 0;
          uVar21 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar21 = uVar8;
          }
          iVar14 = 0;
          do {
            if (uVar21 == uVar8) {
              return;
            }
            iVar14 = iVar14 + 0x20;
            uVar4 = puVar6[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar8 = 0;
          iVar14 = 0;
        }
        uVar21 = (ulonglong)(-uVar4 & uVar4);
        uVar7 = uVar21 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar3 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar3) {
          iVar3 = iVar13;
        }
      }
      if (iVar3 != iVar13) {
        uVar4 = 0xffffffff;
        do {
          lVar18 = *(longlong *)(lVar1 + 0x118);
          lVar17 = *(longlong *)(lVar18 + 0x10 + (longlong)iVar3 * 0x20);
          if (((lVar17 != 0) && (*(longlong *)((longlong)iVar3 * 0x20 + lVar18 + 8) == 0)) &&
             (cVar2 = FUN_1415369f2(lVar17), cVar2 != '\0')) {
            uVar12 = *(int *)(lVar17 + 8) - *(int *)(lVar17 + 0x34);
            if (uVar12 < 4) {
              iVar3 = 1;
            }
            else {
              uVar7 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
              lVar18 = 0x3f;
              if (uVar7 != 0) {
                for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar3 = 1 << ((byte)lVar18 & 0x1f);
            }
            *(int *)(lVar17 + 0x48) = iVar3;
            FUN_14492abf0(lVar17);
          }
          uVar4 = uVar4 & ~(uint)uVar21;
          puVar6 = *(uint **)(lVar1 + 0x138);
          if (*(uint **)(lVar1 + 0x138) == (uint *)0x0) {
            puVar6 = (uint *)(lVar1 + 0x128);
          }
          iVar16 = *(int *)(lVar1 + 0x140);
          iVar3 = (int)uVar8;
          lVar18 = (longlong)iVar3;
          uVar12 = puVar6[lVar18] & uVar4;
          if (uVar12 == 0) {
            iVar11 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar11 = iVar16 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar10 = iVar11;
            if (iVar11 < iVar3) {
              iVar10 = iVar3;
            }
            if (iVar3 < iVar11) {
              lVar17 = 0;
              do {
                uVar12 = puVar6[lVar18 + lVar17 + 1];
                if (uVar12 != 0) {
                  uVar8 = (ulonglong)(iVar3 + (int)lVar17 + 1);
                  uVar4 = 0xffffffff;
                  goto LAB_14153647e;
                }
                iVar14 = iVar14 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar18 != lVar17);
              uVar4 = 0xffffffff;
              iVar3 = iVar10;
            }
            uVar8 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar16;
          }
          else {
LAB_14153647e:
            uVar21 = (ulonglong)(-uVar12 & uVar12);
            uVar7 = uVar21 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar3 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar3) {
              iVar3 = iVar16;
            }
          }
        } while (iVar3 != iVar13);
      }
      break;
    case 4:
      cVar2 = FUN_141537136();
      if (cVar2 != '\0') {
        uVar4 = *(int *)(lVar1 + 0x170) - *(int *)(lVar1 + 0x19c);
        iVar13 = 1;
        if (3 < uVar4) {
          uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar18 & 0x1f);
        }
        *(int *)(lVar1 + 0x1b0) = iVar13;
        FUN_140a11e4e((longlong *)(lVar1 + 0x168));
      }
      iVar13 = *(int *)(lVar1 + 400);
      if (iVar13 == 0) {
        uVar21 = 1;
        uVar8 = 0;
        iVar3 = 0;
        iVar14 = 0;
      }
      else {
        puVar6 = *(uint **)(lVar1 + 0x188);
        if (*(uint **)(lVar1 + 0x188) == (uint *)0x0) {
          puVar6 = (uint *)(lVar1 + 0x178);
        }
        uVar4 = *puVar6;
        if (uVar4 == 0) {
          iVar3 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar3 = iVar13 + -1;
          }
          uVar8 = 0;
          uVar21 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar21 = uVar8;
          }
          iVar14 = 0;
          do {
            if (uVar21 == uVar8) {
              return;
            }
            iVar14 = iVar14 + 0x20;
            uVar4 = puVar6[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar8 = 0;
          iVar14 = 0;
        }
        uVar21 = (ulonglong)(-uVar4 & uVar4);
        uVar7 = uVar21 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar3 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar3) {
          iVar3 = iVar13;
        }
      }
      if (iVar3 != iVar13) {
        uVar4 = 0xffffffff;
        do {
          lVar17 = *(longlong *)(lVar1 + 0x168);
          lVar18 = lVar17 + (longlong)iVar3 * 0x60;
          plVar15 = (longlong *)(lVar18 + 8);
          lVar17 = (longlong)iVar3 * 0x60 + lVar17;
          lVar5 = lVar17 + 0x18;
          iVar3 = *(int *)(lVar17 + 0x30);
          iVar16 = -1;
          if (iVar3 != 0) {
            lVar17 = *(longlong *)(lVar18 + 0x28);
            if (*(longlong *)(lVar18 + 0x28) == 0) {
              lVar17 = lVar5;
            }
            uVar7 = (ulonglong)(iVar3 + 0x1fU >> 5);
            iVar16 = -0x3e - (iVar3 + 0x1fU & 0xffffffe0);
            uVar12 = 0xffffffff >> (-(char)iVar3 & 0x1fU);
            do {
              bVar22 = uVar7 == 0;
              uVar7 = uVar7 - 1;
              if (bVar22) {
                iVar16 = -1;
                goto LAB_141535f9f;
              }
              iVar16 = iVar16 + 0x20;
              uVar19 = uVar12 & *(uint *)(lVar17 + uVar7 * 4);
              uVar12 = 0xffffffff;
            } while (uVar19 == 0);
            uVar7 = (ulonglong)uVar19 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar16 = -(((uint)lVar17 ^ 0x3f) + iVar16);
          }
LAB_141535f9f:
          iVar3 = iVar16 + 1;
          iVar11 = *(int *)(lVar18 + 0x10);
          if (iVar3 < iVar11) {
            if ((0 < *(int *)(lVar18 + 0x3c)) &&
               (uVar7 = (ulonglong)*(uint *)(lVar18 + 0x38), *(uint *)(lVar18 + 0x38) != 0xffffffff)
               ) {
              lVar17 = *plVar15;
              do {
                lVar20 = (longlong)(int)uVar7 * 0x10;
                if (iVar16 < (int)uVar7) {
                  iVar11 = *(int *)(lVar17 + lVar20);
                  iVar10 = *(int *)(lVar17 + 4 + lVar20);
                  uVar7 = (ulonglong)iVar10;
                  if (uVar7 != 0xffffffffffffffff) {
                    *(int *)(lVar17 + uVar7 * 0x10) = iVar11;
                  }
                  if (iVar11 == -1) {
                    *(int *)(lVar18 + 0x38) = iVar10;
                  }
                  else {
                    *(int *)(lVar17 + 4 + (longlong)iVar11 * 0x10) = iVar10;
                  }
                  *(int *)(lVar18 + 0x3c) = *(int *)(lVar18 + 0x3c) + -1;
                }
                else {
                  uVar7 = (ulonglong)*(uint *)(lVar17 + 4 + lVar20);
                }
              } while ((int)uVar7 != -1);
              iVar11 = *(int *)(lVar18 + 0x10);
            }
            if (iVar11 != iVar3) {
              *(int *)(lVar18 + 0x10) = iVar3;
            }
            *(int *)(lVar18 + 0x30) = iVar3;
            iVar16 = iVar16 + 0x20;
            if (-1 < iVar3) {
              iVar16 = iVar3;
            }
            iVar11 = iVar3;
            if (iVar3 % 0x20 != 0) {
              if (*(longlong *)(lVar18 + 0x28) != 0) {
                lVar5 = *(longlong *)(lVar18 + 0x28);
              }
              bVar9 = -(char)(iVar3 % 0x20);
              *(uint *)(lVar5 + (longlong)(iVar16 >> 5) * 4) =
                   (uint)(*(int *)(lVar5 + (longlong)(iVar16 >> 5) * 4) << (bVar9 & 0x1f)) >>
                   (bVar9 & 0x1f);
              iVar11 = *(int *)(lVar18 + 0x10);
            }
          }
          if (*(int *)(lVar18 + 0x14) != iVar11) {
            FUN_14474875a(plVar15);
            iVar11 = *(int *)(lVar18 + 0x10);
          }
          uVar12 = iVar11 - *(int *)(lVar18 + 0x3c);
          iVar3 = 1;
          if (3 < uVar12) {
            uVar7 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
            lVar17 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar3 = 1 << ((byte)lVar17 & 0x1f);
          }
          if ((0 < (int)uVar12 && *(int *)(lVar18 + 0x50) < iVar3) ||
             (iVar3 < *(int *)(lVar18 + 0x50))) {
            *(int *)(lVar18 + 0x50) = iVar3;
            FUN_1407a7d86(plVar15);
          }
          uVar4 = uVar4 & ~(uint)uVar21;
          puVar6 = *(uint **)(lVar1 + 0x188);
          if (*(uint **)(lVar1 + 0x188) == (uint *)0x0) {
            puVar6 = (uint *)(lVar1 + 0x178);
          }
          iVar16 = *(int *)(lVar1 + 400);
          iVar3 = (int)uVar8;
          lVar18 = (longlong)iVar3;
          uVar12 = puVar6[lVar18] & uVar4;
          if (uVar12 == 0) {
            iVar11 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar11 = iVar16 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar10 = iVar11;
            if (iVar11 < iVar3) {
              iVar10 = iVar3;
            }
            if (iVar3 < iVar11) {
              lVar17 = 0;
              do {
                uVar12 = puVar6[lVar18 + lVar17 + 1];
                if (uVar12 != 0) {
                  uVar8 = (ulonglong)(iVar3 + (int)lVar17 + 1);
                  uVar4 = 0xffffffff;
                  goto LAB_14153605b;
                }
                iVar14 = iVar14 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar18 != lVar17);
              uVar4 = 0xffffffff;
              iVar3 = iVar10;
            }
            uVar8 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar16;
          }
          else {
LAB_14153605b:
            uVar21 = (ulonglong)(-uVar12 & uVar12);
            uVar7 = uVar21 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar3 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar3) {
              iVar3 = iVar16;
            }
          }
        } while (iVar3 != iVar13);
      }
      break;
    case 5:
      cVar2 = FUN_145d22b86();
      if (cVar2 != '\0') {
        uVar4 = *(int *)(lVar1 + 0x1d0) - *(int *)(lVar1 + 0x1fc);
        iVar13 = 1;
        if (3 < uVar4) {
          uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar18 & 0x1f);
        }
        *(int *)(lVar1 + 0x210) = iVar13;
        FUN_1469028b8((longlong *)(lVar1 + 0x1c8));
      }
      iVar13 = *(int *)(lVar1 + 0x1f0);
      if (iVar13 == 0) {
        uVar21 = 1;
        uVar8 = 0;
        iVar3 = 0;
        iVar14 = 0;
      }
      else {
        puVar6 = *(uint **)(lVar1 + 0x1e8);
        if (*(uint **)(lVar1 + 0x1e8) == (uint *)0x0) {
          puVar6 = (uint *)(lVar1 + 0x1d8);
        }
        uVar4 = *puVar6;
        if (uVar4 == 0) {
          iVar3 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar3 = iVar13 + -1;
          }
          uVar8 = 0;
          uVar21 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar21 = uVar8;
          }
          iVar14 = 0;
          do {
            if (uVar21 == uVar8) {
              return;
            }
            iVar14 = iVar14 + 0x20;
            uVar4 = puVar6[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar8 = 0;
          iVar14 = 0;
        }
        uVar21 = (ulonglong)(-uVar4 & uVar4);
        uVar7 = uVar21 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar3 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar3) {
          iVar3 = iVar13;
        }
      }
      if (iVar3 != iVar13) {
        uVar4 = 0xffffffff;
        do {
          lVar18 = *(longlong *)(lVar1 + 0x1c8);
          lVar17 = *(longlong *)(lVar18 + 0x10 + (longlong)iVar3 * 0x20);
          if (((lVar17 != 0) && (*(longlong *)((longlong)iVar3 * 0x20 + lVar18 + 8) == 0)) &&
             (cVar2 = FUN_1415369f2(lVar17), cVar2 != '\0')) {
            uVar12 = *(int *)(lVar17 + 8) - *(int *)(lVar17 + 0x34);
            if (uVar12 < 4) {
              iVar3 = 1;
            }
            else {
              uVar7 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
              lVar18 = 0x3f;
              if (uVar7 != 0) {
                for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar3 = 1 << ((byte)lVar18 & 0x1f);
            }
            *(int *)(lVar17 + 0x48) = iVar3;
            FUN_14492abf0(lVar17);
          }
          uVar4 = uVar4 & ~(uint)uVar21;
          puVar6 = *(uint **)(lVar1 + 0x1e8);
          if (*(uint **)(lVar1 + 0x1e8) == (uint *)0x0) {
            puVar6 = (uint *)(lVar1 + 0x1d8);
          }
          iVar16 = *(int *)(lVar1 + 0x1f0);
          iVar3 = (int)uVar8;
          lVar18 = (longlong)iVar3;
          uVar12 = puVar6[lVar18] & uVar4;
          if (uVar12 == 0) {
            iVar11 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar11 = iVar16 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar10 = iVar11;
            if (iVar11 < iVar3) {
              iVar10 = iVar3;
            }
            if (iVar3 < iVar11) {
              lVar17 = 0;
              do {
                uVar12 = puVar6[lVar18 + lVar17 + 1];
                if (uVar12 != 0) {
                  uVar8 = (ulonglong)(iVar3 + (int)lVar17 + 1);
                  uVar4 = 0xffffffff;
                  goto LAB_14153678f;
                }
                iVar14 = iVar14 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar18 != lVar17);
              uVar4 = 0xffffffff;
              iVar3 = iVar10;
            }
            uVar8 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar16;
          }
          else {
LAB_14153678f:
            uVar21 = (ulonglong)(-uVar12 & uVar12);
            uVar7 = uVar21 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar3 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar3) {
              iVar3 = iVar16;
            }
          }
        } while (iVar3 != iVar13);
      }
      break;
    case 6:
      cVar2 = FUN_145d22cec(lVar1 + 0x218);
      if (cVar2 != '\0') {
        uVar4 = *(int *)(lVar1 + 0x220) - *(int *)(lVar1 + 0x24c);
        iVar13 = 1;
        if (3 < uVar4) {
          uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar18 & 0x1f);
        }
        *(int *)(lVar1 + 0x260) = iVar13;
        FUN_146902a96(lVar1 + 0x218);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1415369f2 FUN_1415369f2 body=442 status=ok
// SIG undefined FUN_1415369f2(void)

undefined8 FUN_1415369f2(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  void *_Dst;
  uint uVar9;
  undefined8 uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  iVar7 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar7 == 0) {
    uVar10 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 1);
    iVar12 = uVar2 - iVar7;
    iVar6 = iVar12;
    if ((int)param_1[6] == -1) {
      uVar10 = 0;
    }
    else {
      lVar4 = *param_1;
      uVar10 = 0;
      iVar5 = (int)param_1[6];
      uVar13 = uVar2;
      do {
        iVar3 = *(int *)(lVar4 + 4 + (longlong)iVar5 * 0x10);
        if (iVar5 < iVar12) {
          puVar14 = (undefined8 *)((longlong)iVar5 * 0x10 + lVar4);
          plVar8 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar8 = param_1 + 2;
          }
          puVar18 = (undefined8 *)((longlong)(int)(uVar13 - 1) * 0x10 + lVar4 + 0x10);
          uVar9 = uVar13;
          do {
            puVar17 = puVar18;
            uVar13 = uVar9 - 1;
            uVar15 = uVar9 + 0x1e;
            if (-1 < (int)uVar13) {
              uVar15 = uVar13;
            }
            puVar18 = puVar17 + -2;
            uVar9 = uVar13;
          } while ((*(uint *)((longlong)plVar8 + (longlong)((int)uVar15 >> 5) * 4) >>
                    (uVar13 & 0x1f) & 1) == 0);
          uVar9 = 1 << ((byte)iVar5 & 0x1f);
          uVar10 = puVar17[-1];
          *puVar14 = *puVar18;
          puVar14[1] = uVar10;
          plVar8 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar8 = param_1 + 2;
          }
          iVar16 = iVar5 + 0x1f;
          if (-1 < iVar5) {
            iVar16 = iVar5;
          }
          puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar16 >> 5) * 4);
          *puVar1 = *puVar1 | uVar9;
          uVar10 = CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
        }
        iVar5 = iVar3;
      } while (iVar3 != -1);
      iVar5 = (int)param_1[1] - uVar2;
      if (iVar5 != 0) {
        _Dst = (void *)((longlong)iVar12 * 0x10 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar7 * 0x10 + (longlong)_Dst),(longlong)iVar5 << 4);
        iVar6 = (int)param_1[1] - iVar7;
      }
    }
    *(int *)(param_1 + 1) = iVar6;
    iVar6 = (int)param_1[5] - uVar2;
    if (iVar6 != 0) {
      plVar8 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      FUN_14493566c(plVar8,iVar12,plVar8,uVar2,iVar6);
      iVar12 = (int)param_1[5] - iVar7;
    }
    iVar7 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar7 = iVar12;
    }
    *(int *)(param_1 + 5) = iVar12;
    if (iVar12 % 0x20 != 0) {
      plVar8 = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[4];
      }
      bVar11 = -(char)(iVar12 % 0x20);
      *(uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) << (bVar11 & 0x1f)) >>
           (bVar11 & 0x1f);
    }
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_14474875a(param_1);
    }
  }
  return uVar10;
}



// FUNCTION 141536bac FUN_141536bac body=343 status=ok
// SIG undefined FUN_141536bac(void)

undefined8 FUN_141536bac(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  void *_Dst;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    iVar7 = uVar3 - iVar2;
    iVar6 = iVar7;
    if ((int)param_1[6] == -1) {
      uVar9 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar9 = 0;
      iVar10 = (int)param_1[6];
      uVar11 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar10 * 0x10);
        if (iVar10 < iVar7) {
          puVar14 = (undefined8 *)((longlong)iVar10 * 0x10 + lVar5);
          plVar12 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar12 = param_1 + 2;
          }
          puVar17 = (undefined8 *)((longlong)(int)(uVar11 - 1) * 0x10 + lVar5 + 0x10);
          uVar8 = uVar11;
          do {
            puVar16 = puVar17;
            uVar11 = uVar8 - 1;
            uVar13 = uVar8 + 0x1e;
            if (-1 < (int)uVar11) {
              uVar13 = uVar11;
            }
            puVar17 = puVar16 + -2;
            uVar8 = uVar11;
          } while ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar13 >> 5) * 4) >>
                    (uVar11 & 0x1f) & 1) == 0);
          uVar8 = 1 << ((byte)iVar10 & 0x1f);
          uVar9 = puVar16[-1];
          *puVar14 = *puVar17;
          puVar14[1] = uVar9;
          plVar12 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar12 = param_1 + 2;
          }
          iVar15 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar15 = iVar10;
          }
          puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar15 >> 5) * 4);
          *puVar1 = *puVar1 | uVar8;
          uVar9 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
        }
        iVar10 = iVar4;
      } while (iVar4 != -1);
      iVar10 = (int)param_1[1] - uVar3;
      if (iVar10 != 0) {
        _Dst = (void *)((longlong)iVar7 * 0x10 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x10 + (longlong)_Dst),(longlong)iVar10 << 4);
        iVar6 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar6;
    FUN_144a6134a(param_1 + 2,iVar7,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_14472eb64(param_1);
    }
  }
  return uVar9;
}



// FUNCTION 141536d04 FUN_141536d04 body=358 status=ok
// SIG undefined FUN_141536d04(void)

undefined8 FUN_141536d04(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    iVar10 = uVar3 - iVar2;
    iVar9 = iVar10;
    if ((int)param_1[6] == -1) {
      uVar12 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar12 = 0;
      iVar13 = (int)param_1[6];
      uVar14 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar13 * 0x20);
        if (iVar13 < iVar10) {
          puVar17 = (undefined8 *)((longlong)iVar13 * 0x20 + lVar5);
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          puVar8 = (undefined8 *)((longlong)(int)(uVar14 - 1) * 0x20 + lVar5 + 0x20);
          uVar11 = uVar14;
          do {
            puVar15 = puVar8;
            uVar14 = uVar11 - 1;
            uVar16 = uVar11 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar8 = puVar15 + -4;
            uVar11 = uVar14;
          } while ((*(uint *)((longlong)plVar18 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar12 = puVar15[-4];
          uVar6 = puVar15[-3];
          uVar7 = puVar15[-1];
          uVar11 = 1 << ((byte)iVar13 & 0x1f);
          puVar17[2] = puVar15[-2];
          puVar17[3] = uVar7;
          *puVar17 = uVar12;
          puVar17[1] = uVar6;
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          iVar19 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar19 = iVar13;
          }
          puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar19 >> 5) * 4);
          *puVar1 = *puVar1 | uVar11;
          uVar12 = CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
        }
        iVar13 = iVar4;
      } while (iVar4 != -1);
      iVar13 = (int)param_1[1] - uVar3;
      if (iVar13 != 0) {
        _Dst = (void *)((longlong)iVar10 * 0x20 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x20 + (longlong)_Dst),(longlong)iVar13 << 5);
        iVar9 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar9;
    FUN_144a6134a(param_1 + 2,iVar10,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1446f4a44(param_1);
    }
  }
  return uVar12;
}



// FUNCTION 141536e6a FUN_141536e6a body=358 status=ok
// SIG undefined FUN_141536e6a(void)

undefined8 FUN_141536e6a(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    iVar10 = uVar3 - iVar2;
    iVar9 = iVar10;
    if ((int)param_1[6] == -1) {
      uVar12 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar12 = 0;
      iVar13 = (int)param_1[6];
      uVar14 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar13 * 0x20);
        if (iVar13 < iVar10) {
          puVar17 = (undefined8 *)((longlong)iVar13 * 0x20 + lVar5);
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          puVar8 = (undefined8 *)((longlong)(int)(uVar14 - 1) * 0x20 + lVar5 + 0x20);
          uVar11 = uVar14;
          do {
            puVar15 = puVar8;
            uVar14 = uVar11 - 1;
            uVar16 = uVar11 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar8 = puVar15 + -4;
            uVar11 = uVar14;
          } while ((*(uint *)((longlong)plVar18 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar12 = puVar15[-4];
          uVar6 = puVar15[-3];
          uVar7 = puVar15[-1];
          uVar11 = 1 << ((byte)iVar13 & 0x1f);
          puVar17[2] = puVar15[-2];
          puVar17[3] = uVar7;
          *puVar17 = uVar12;
          puVar17[1] = uVar6;
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          iVar19 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar19 = iVar13;
          }
          puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar19 >> 5) * 4);
          *puVar1 = *puVar1 | uVar11;
          uVar12 = CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
        }
        iVar13 = iVar4;
      } while (iVar4 != -1);
      iVar13 = (int)param_1[1] - uVar3;
      if (iVar13 != 0) {
        _Dst = (void *)((longlong)iVar10 * 0x20 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x20 + (longlong)_Dst),(longlong)iVar13 << 5);
        iVar9 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar9;
    FUN_144a6134a(param_1 + 2,iVar10,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1446f4a44(param_1);
    }
  }
  return uVar12;
}



// FUNCTION 141536fd0 FUN_141536fd0 body=358 status=ok
// SIG undefined FUN_141536fd0(void)

undefined8 FUN_141536fd0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    iVar10 = uVar3 - iVar2;
    iVar9 = iVar10;
    if ((int)param_1[6] == -1) {
      uVar12 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar12 = 0;
      iVar13 = (int)param_1[6];
      uVar14 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar13 * 0x20);
        if (iVar13 < iVar10) {
          puVar17 = (undefined8 *)((longlong)iVar13 * 0x20 + lVar5);
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          puVar8 = (undefined8 *)((longlong)(int)(uVar14 - 1) * 0x20 + lVar5 + 0x20);
          uVar11 = uVar14;
          do {
            puVar15 = puVar8;
            uVar14 = uVar11 - 1;
            uVar16 = uVar11 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar8 = puVar15 + -4;
            uVar11 = uVar14;
          } while ((*(uint *)((longlong)plVar18 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar12 = puVar15[-4];
          uVar6 = puVar15[-3];
          uVar7 = puVar15[-1];
          uVar11 = 1 << ((byte)iVar13 & 0x1f);
          puVar17[2] = puVar15[-2];
          puVar17[3] = uVar7;
          *puVar17 = uVar12;
          puVar17[1] = uVar6;
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          iVar19 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar19 = iVar13;
          }
          puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar19 >> 5) * 4);
          *puVar1 = *puVar1 | uVar11;
          uVar12 = CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
        }
        iVar13 = iVar4;
      } while (iVar4 != -1);
      iVar13 = (int)param_1[1] - uVar3;
      if (iVar13 != 0) {
        _Dst = (void *)((longlong)iVar10 * 0x20 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x20 + (longlong)_Dst),(longlong)iVar13 << 5);
        iVar9 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar9;
    FUN_144a6134a(param_1 + 2,iVar10,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1446f4a44(param_1);
    }
  }
  return uVar12;
}



// FUNCTION 141537136 FUN_141537136 body=393 status=ok
// SIG undefined FUN_141537136(void)

undefined8 FUN_141537136(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    iVar11 = uVar3 - iVar2;
    iVar7 = iVar11;
    if ((int)param_1[6] == -1) {
      uVar12 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar12 = 0;
      iVar6 = (int)param_1[6];
      uVar15 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar6 * 0x60);
        if (iVar6 < iVar11) {
          plVar8 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar8 = param_1 + 2;
          }
          pvVar9 = (void *)((longlong)(int)(uVar15 - 1) * 0x60 + lVar5 + 0x60);
          uVar14 = uVar15;
          do {
            uVar15 = uVar14 - 1;
            uVar13 = uVar14 + 0x1e;
            if (-1 < (int)uVar15) {
              uVar13 = uVar15;
            }
            pvVar9 = (void *)((longlong)pvVar9 + -0x60);
            uVar14 = uVar15;
          } while ((*(uint *)((longlong)plVar8 + (longlong)((int)uVar13 >> 5) * 4) >>
                    (uVar15 & 0x1f) & 1) == 0);
          memmove((void *)((longlong)iVar6 * 0x60 + lVar5),pvVar9,0x60);
          plVar8 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar8 = param_1 + 2;
          }
          iVar10 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar10 = iVar6;
          }
          puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar10 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
          uVar12 = 1;
        }
        iVar6 = iVar4;
      } while (iVar4 != -1);
      iVar6 = (int)param_1[1] - uVar3;
      if (iVar6 != 0) {
        pvVar9 = (void *)((longlong)iVar11 * 0x60 + *param_1);
        memmove(pvVar9,(void *)((longlong)iVar2 * 0x60 + (longlong)pvVar9),(longlong)iVar6 * 0x60);
        iVar7 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar7;
    FUN_144a6134a(param_1 + 2,iVar11,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1448fc38a(param_1);
    }
  }
  return uVar12;
}



// FUNCTION 1415372c0 FUN_1415372c0 body=869 status=ok
// SIG undefined FUN_1415372c0(void)

int * FUN_1415372c0(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar19) {
      FUN_1447711aa(param_1,iVar19);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar11 = iVar21 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar17 = iVar21 + 1;
    iVar22 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar22 = iVar21;
    }
    if (iVar22 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar11 = iVar21;
        }
        else {
          uVar12 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar12) {
              uVar13 = uVar12;
            }
          }
          else {
            uVar13 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar18 = FUN_144a3809e(uVar13 << 2,0);
          iVar11 = (int)(uVar18 >> 2);
          iVar17 = -0x20;
          if ((int)uVar12 <= iVar11) {
            iVar17 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar15,iVar11);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar11 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar11 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar15;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar16 = (byte)iVar21 & 0x1f;
    puVar3 = (uint *)((longlong)plVar15 + (longlong)(iVar22 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar19 = (int)param_1[6];
    lVar14 = (longlong)iVar19;
    iVar21 = *(int *)(*param_1 + 4 + lVar14 * 0x20);
    *(int *)(param_1 + 6) = iVar21;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x20) = 0xffffffff;
    }
  }
  plVar15 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar15 = (longlong *)param_1[4];
  }
  iVar21 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar21 = iVar19;
  }
  puVar3 = (uint *)((longlong)plVar15 + (longlong)(iVar21 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar19 & 0x1f);
  lVar4 = *param_1;
  lVar14 = lVar14 * 0x20;
  puVar1 = (undefined4 *)(lVar4 + lVar14);
  puVar5 = (undefined4 *)param_3[1];
  uVar18 = *(ulonglong *)*param_3;
  *(ulonglong *)(lVar4 + lVar14) = uVar18;
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  uVar8 = puVar5[3];
  puVar2 = (undefined4 *)(lVar4 + 8 + lVar14);
  *puVar2 = *puVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined4 *)(lVar4 + 0x18 + lVar14) = 0xffffffff;
  uVar12 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  cVar10 = '\0';
  iVar21 = iVar19;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar21 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar12) * 4);
    if (iVar21 != -1) {
      do {
        puVar2 = (undefined4 *)(*param_1 + (longlong)iVar21 * 0x20);
        if (*(ulonglong *)(*param_1 + (longlong)iVar21 * 0x20) == uVar18) {
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          FUN_140638eae(param_1,iVar19,1);
          cVar10 = '\x01';
          goto LAB_14153742e;
        }
        iVar21 = puVar2[6];
      } while (iVar21 != -1);
    }
    cVar10 = '\0';
    iVar21 = iVar19;
  }
LAB_14153742e:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar10;
  }
  if (cVar10 == '\0') {
    uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar13 < 4) {
      iVar19 = 1;
    }
    else {
      uVar18 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar19 <= (int)param_1[9])) {
      uVar12 = (int)param_1[9] - 1U & uVar12;
      puVar1[7] = uVar12;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      puVar1[6] = *(undefined4 *)
                   ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4
                   );
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
           iVar21;
    }
    else {
      *(int *)(param_1 + 9) = iVar19;
      FUN_141537626(param_1);
    }
  }
  *param_2 = iVar21;
  return param_2;
}



// FUNCTION 141537626 FUN_141537626 body=594 status=ok
// SIG undefined FUN_141537626(void)

void FUN_141537626(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_14153782f;
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
LAB_14153782f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153787a FUN_14153787a body=186 status=ok
// SIG undefined FUN_14153787a(void)

int FUN_14153787a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1415378bd:
      lVar11 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar11);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar10 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar11) + lVar10);
          uVar9 = (ulonglong)uVar8;
          uVar6 = *(ushort *)(*param_3 + lVar10);
          if (uVar8 == uVar6) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar8)) goto LAB_14153790f;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_14153790f;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_141537915;
    }
  }
  return -1;
LAB_14153790f:
  if (uVar8 == uVar6) {
    return iVar1;
  }
LAB_141537915:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar11);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1415378bd;
}



// FUNCTION 141537934 FUN_141537934 body=1074 status=ok
// SIG undefined FUN_141537934(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_141537934(longlong param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 *local_100;
  longlong *local_f8;
  undefined1 *local_f0;
  undefined8 **local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined1 **local_d0;
  code *local_c8;
  longlong *local_c0;
  code **local_b8;
  code *local_b0;
  code ***local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar9 = *(longlong *)(&DAT_00001ce8 + param_1);
  if ((lVar9 != 0) && (*(longlong *)(param_1 + 0x110) != 0)) {
    if (*(code **)(*(longlong *)(&DAT_00001100 + lVar9) + 0x10) == (code *)&LAB_144944cea) {
      lVar9 = lVar9 + 0x1808;
    }
    else {
      lVar9 = (**(code **)(*(longlong *)(&DAT_00001100 + lVar9) + 0x10))(&DAT_00001100 + lVar9);
    }
    local_100 = &local_108;
    local_108 = DAT_14cb72618;
    local_f8 = &local_e0;
    local_e0 = 0;
    local_e8 = &local_100;
    local_f0 = &LAB_143cbcae0;
    if (*(longlong *)(lVar9 + 0x40) != 0) {
      local_c0 = &local_d8;
      local_d0 = &local_f0;
      local_b8 = &local_c8;
      local_c8 = FUN_143cbca2e;
      local_a8 = &local_b8;
      local_b0 = FUN_1487df56e;
      local_d8 = lVar9;
      FUN_1447c5ba2();
      lVar9 = local_e0;
      if (local_e0 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x110);
        dVar5 = *(double *)(lVar4 + 0x240);
        dVar6 = *(double *)(lVar4 + 0x248);
        dVar7 = *(double *)(lVar4 + 0x250);
        dVar8 = *(double *)(lVar4 + 600);
        fVar1 = *(float *)(local_e0 + 0x2a4);
        if (fVar1 < 1e-08) {
          *param_2 = dVar5;
          param_2[1] = dVar6;
          param_2[2] = dVar7;
          param_2[3] = dVar8;
        }
        else if (1.0 < fVar1) {
          dVar5 = *(double *)(local_e0 + 0x3c0);
          dVar6 = *(double *)(local_e0 + 0x3c8);
          dVar7 = *(double *)(local_e0 + 0x3d8);
          param_2[2] = *(double *)(local_e0 + 0x3d0);
          param_2[3] = dVar7;
          *param_2 = dVar5;
          param_2[1] = dVar6;
        }
        else {
          dVar2 = *(double *)(local_e0 + 0x3c0);
          dVar12 = *(double *)(local_e0 + 0x3c8);
          dVar3 = *(double *)(local_e0 + 0x3d0);
          dVar13 = *(double *)(local_e0 + 0x3d8);
          dVar10 = dVar8 * dVar13 + dVar7 * dVar3 + dVar5 * dVar2 + dVar6 * dVar12;
          dVar11 = dVar10 * (double)(&DAT_149931160)[0.0 <= dVar10];
          dVar14 = 1.0 - (double)fVar1;
          dVar10 = (double)(&DAT_149931160)[0.0 <= dVar10] * (double)fVar1;
          if (dVar11 < 0.9999) {
            dVar12 = dVar11;
            if (1.0 <= dVar11) {
              dVar12 = 1.0;
            }
            dVar12 = acos((double)(-(ulonglong)(dVar11 < -1.0) & 0xbff0000000000000 |
                                  ~-(ulonglong)(dVar11 < -1.0) & (ulonglong)dVar12));
            dVar13 = sin(dVar12);
            dVar14 = sin(dVar14 * dVar12);
            dVar14 = dVar14 * (1.0 / dVar13);
            dVar10 = sin(dVar10 * dVar12);
            dVar10 = dVar10 * (1.0 / dVar13);
            dVar13 = *(double *)(lVar9 + 0x3d8);
            dVar3 = *(double *)(lVar9 + 0x3d0);
            dVar2 = *(double *)(lVar9 + 0x3c0);
            dVar12 = *(double *)(lVar9 + 0x3c8);
          }
          *param_2 = dVar5 * dVar14 + dVar2 * dVar10;
          param_2[1] = dVar6 * dVar14 + dVar12 * dVar10;
          param_2[2] = dVar7 * dVar14 + dVar3 * dVar10;
          param_2[3] = dVar14 * dVar8 + dVar13 * dVar10;
          dVar5 = *param_2;
          dVar6 = param_2[1];
          dVar7 = param_2[2];
          dVar8 = param_2[3];
          dVar12 = dVar7 * dVar7 + dVar5 * dVar5;
          dVar13 = dVar8 * dVar8 + dVar6 * dVar6;
          auVar16._0_8_ = dVar12 + dVar13;
          auVar16._8_8_ = dVar12 + dVar13;
          auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
          auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
          auVar17 = sqrtpd(auVar16,auVar16);
          auVar17 = divpd(_DAT_149934d80,auVar17);
          auVar18._0_8_ = auVar17._0_8_ * dVar7;
          auVar18._8_8_ = auVar17._8_8_ * dVar8;
          *param_2 = (double)((ulonglong)(dVar5 * auVar17._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
          param_2[1] = (double)((ulonglong)(dVar6 * auVar17._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
          auVar15 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar18,auVar15);
          *(undefined1 (*) [16])(param_2 + 2) = auVar15;
        }
        if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  FUN_145d2588a(param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_128);
}



// FUNCTION 141537d6c FUN_141537d6c body=22 status=ok
// SIG undefined FUN_141537d6c(void)

ulonglong FUN_141537d6c(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cb7d368;
  if (DAT_14cb7d368 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cb7d368 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb7d368 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cb7d368 + 0x1fc) < (int)DAT_14cb7d368[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cb7d368 + 0x300))(DAT_14cb7d368);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 141537d82 FUN_141537d82 body=767 status=ok
// SIG undefined FUN_141537d82(void)

undefined8 FUN_141537d82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  void *pvVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  
  do {
    if (param_4 == 0) {
      return 1;
    }
    if (param_2 != param_3) {
      iVar2 = *(int *)(param_3 + 0x10);
      pvVar8 = *(void **)(param_3 + 8);
      *(int *)(param_2 + 0x10) = iVar2;
      if (iVar2 == 0 && *(int *)(param_2 + 0x14) == 0) {
        *(undefined4 *)(param_2 + 0x14) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_2 + 8),iVar2);
        if (iVar2 != 0) {
          memcpy(*(void **)(param_2 + 8),pvVar8,(longlong)iVar2 * 2);
        }
      }
    }
    if ((*(longlong *)(param_2 + 0x20) != *(longlong *)(param_3 + 0x20)) ||
       (*(int *)(param_2 + 0x28) != *(int *)(param_3 + 0x28))) {
      *(longlong *)(param_2 + 0x20) = *(longlong *)(param_3 + 0x20);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x3d) = *(undefined8 *)(param_3 + 0x3d);
    *(undefined8 *)(param_2 + 0x38) = uVar4;
    plVar5 = *(longlong **)(param_3 + 0x48);
    plVar6 = *(longlong **)(param_2 + 0x48);
    if (plVar6 != plVar5) {
      *(longlong **)(param_2 + 0x48) = plVar5;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    if (param_2 != param_3) {
      iVar2 = *(int *)(param_3 + 0xa0);
      plVar5 = (longlong *)(param_2 + 0x98);
      if ((ulonglong)(longlong)iVar2 < 2) {
        if (*plVar5 != 0) {
          FUN_1446efa72(plVar5,0,0,4);
        }
        if (iVar2 != 0) goto LAB_141537f43;
      }
      else {
        FUN_1446efa72(plVar5,0,iVar2,4);
LAB_141537f43:
        pvVar8 = (void *)(param_2 + 0x90);
        if ((void *)*plVar5 != (void *)0x0) {
          pvVar8 = (void *)*plVar5;
        }
        pvVar10 = (void *)(param_3 + 0x90);
        if (*(void **)(param_3 + 0x98) != (void *)0x0) {
          pvVar10 = *(void **)(param_3 + 0x98);
        }
        memcpy(pvVar8,pvVar10,(longlong)iVar2 << 2);
      }
      puVar1 = (undefined8 *)(param_2 + 0x58);
      *(int *)(param_2 + 0xa0) = iVar2;
      uVar3 = *(uint *)(param_3 + 0x60);
      FUN_1407db1d4(puVar1,(ulonglong)uVar3);
      iVar2 = *(int *)(param_2 + 0x60);
      *(uint *)(param_2 + 0x60) = iVar2 + uVar3;
      if ((uint)(*(int *)(param_2 + 100) - iVar2) < uVar3) {
        FUN_140044672(puVar1);
      }
      *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_3 + 0x88);
      *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_3 + 0x8c);
      uVar7 = *(int *)(param_3 + 0x80) + 0x1fU & 0xffffffe0;
      *(undefined4 *)(param_2 + 0x80) = 0;
      if ((*(int *)(param_2 + 0x84) < (int)uVar7) || (0x80 < *(int *)(param_2 + 0x84))) {
        uVar9 = 0x80;
        if (0x80 < (int)uVar7) {
          uVar9 = uVar7;
        }
        *(uint *)(param_2 + 0x84) = uVar9;
        FUN_1446efbd8((void *)(param_2 + 0x68));
      }
      iVar2 = *(int *)(param_3 + 0x80);
      *(int *)(param_2 + 0x80) = iVar2;
      if (iVar2 != 0) {
        pvVar8 = *(void **)(param_3 + 0x78);
        if (*(void **)(param_3 + 0x78) == (void *)0x0) {
          pvVar8 = (void *)(param_3 + 0x68);
        }
        pvVar10 = (void *)(param_2 + 0x68);
        if (*(void **)(param_2 + 0x78) != (void *)0x0) {
          pvVar10 = *(void **)(param_2 + 0x78);
        }
        memcpy(pvVar10,pvVar8,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
      }
      if (0 < (int)uVar3) {
        puVar13 = (undefined4 *)*puVar1;
        puVar11 = *(undefined4 **)(param_3 + 0x58);
        uVar12 = 0;
        do {
          pvVar8 = *(void **)(param_3 + 0x78);
          if (*(void **)(param_3 + 0x78) == (void *)0x0) {
            pvVar8 = (void *)(param_3 + 0x68);
          }
          if ((*(uint *)((longlong)pvVar8 + (uVar12 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar12 & 0x1f)
              & 1) == 0) {
            *puVar13 = *puVar11;
            puVar13[1] = puVar11[1];
          }
          else {
            FUN_145d293b6(puVar13);
            *(undefined8 *)(puVar13 + 10) = *(undefined8 *)(puVar11 + 10);
          }
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 0xc;
          puVar13 = puVar13 + 0xc;
        } while (uVar3 != uVar12);
      }
    }
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
    param_4 = param_4 + -1;
  } while( true );
}



// FUNCTION 141538082 FUN_141538082 body=118 status=ok
// SIG undefined FUN_141538082(void)

undefined8 * FUN_141538082(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948280) {
    FUN_144b3d300(&DAT_14c948280);
    if (DAT_14c948280 == -1) {
      uVar1 = FUN_1415380f8(2);
      FUN_140056680(&DAT_14c948270,uVar1);
      atexit((_func_5014 *)&LAB_1427b7e4e);
      _Init_thread_footer(&DAT_14c948280);
    }
  }
  return &DAT_14c948270;
}



// FUNCTION 1415380f8 FUN_1415380f8 body=30 status=ok
// SIG undefined FUN_1415380f8(void)

undefined2 * FUN_1415380f8(char param_1)

{
  if ((byte)(param_1 - 1U) < 0xb) {
    return (undefined2 *)(&PTR_u__uasset_149e668d0)[(byte)(param_1 - 1U)];
  }
  return &DAT_149dfb77a;
}



// FUNCTION 141538116 FUN_141538116 body=64 status=ok
// SIG undefined FUN_141538116(void)

undefined8 * FUN_141538116(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14a4e7980;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 0xb;
  return param_1;
}



// FUNCTION 141538156 FUN_141538156 body=192 status=ok
// SIG undefined FUN_141538156(void)

void FUN_141538156(void)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_48 = 0;
  cVar1 = FUN_14063337c(&DAT_14c846b20,L"HTTP=",local_28,1);
  if (cVar1 != '\0') {
    FUN_140056680(local_38,L"WinInet");
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_141505626();
  FUN_142919612();
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141538218 FUN_141538218 body=253 status=ok
// SIG undefined FUN_141538218(void)

void FUN_141538218(void)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char local_19;
  int local_18;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c6e2a2();
  local_11 = '\x01';
  local_28 = &DAT_14c872ce8;
  cVar1 = FUN_14052bb08(DAT_14c872ce0,L"HTTP",L"AcceptCompressedContent");
  if ((cVar1 != '\0') && (DAT_14c990b92 != local_11)) {
    DAT_14c990b92 = local_11;
  }
  local_18 = 0;
  local_28 = &DAT_14c872ce8;
  cVar1 = FUN_1414d73b6(DAT_14c872ce0,L"HTTP.Curl",L"BufferSize");
  if (((cVar1 != '\0') && (0 < local_18)) && (DAT_14c990ba8 != local_18)) {
    DAT_14c990ba8 = local_18;
  }
  local_19 = '\0';
  local_28 = &DAT_14c872ce8;
  cVar1 = FUN_14052bb08(DAT_14c872ce0,L"HTTP.Curl",L"bAllowSeekFunction");
  if ((cVar1 != '\0') && (DAT_14c990bac != local_19)) {
    DAT_14c990bac = local_19;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141538316 FUN_141538316 body=263 status=ok
// SIG undefined FUN_141538316(void)

undefined8 * FUN_141538316(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x328) == '\x01') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x6c0,0x10);
    FUN_145c57e88(puVar1);
    *puVar1 = &PTR_FUN_149f286a0;
    puVar1[1] = &PTR_FUN_149f28758;
    *(undefined1 *)(puVar1 + 0xcc) = 0;
    puVar1[0xd2] = 0;
    *(undefined4 *)(puVar1 + 0xd3) = 0;
    puVar1[0xce] = 0;
    puVar1[0xcf] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x69c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 0x6a4) = 0;
    puVar1[0xd6] = 0;
    puVar2 = puVar1 + 0xd7;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    FUN_142919c7a(puVar1);
    *puVar1 = &PTR_FUN_149f285d0;
    puVar1[1] = &PTR_FUN_149f28660;
    puVar1[0x20] = 0;
    *(undefined4 *)(puVar1 + 0x21) = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x10c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 0x114) = 0;
    puVar1[0x24] = 0;
    puVar2 = puVar1 + 0x25;
  }
  *(undefined4 *)puVar2 = 0;
  return puVar1;
}



// FUNCTION 14153841e FUN_14153841e body=141 status=ok
// SIG undefined FUN_14153841e(void)

undefined4 FUN_14153841e(void)

{
  undefined4 uVar1;
  wchar_t *_Str;
  float *in_R9;
  double dVar2;
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  local_38 = in_stack_00000028;
  uVar1 = FUN_1449da20c();
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1415384ac FUN_1415384ac body=265 status=ok
// SIG undefined FUN_1415384ac(void)

undefined * FUN_1415384ac(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90fa8) {
    FUN_144b3d300(&DAT_14ca90fa8);
    if (DAT_14ca90fa8 == -1) {
      FUN_1415385b6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FBinkParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x18;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca90f28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f875e);
      _Init_thread_footer(&DAT_14ca90fa8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca90f28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415385b6 FUN_1415385b6 body=226 status=ok
// SIG undefined FUN_1415385b6(void)

longlong * FUN_1415385b6(longlong *param_1)

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
  pcVar13 = FUN_14631c3ee;
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



// FUNCTION 14153869a FUN_14153869a body=141 status=ok
// SIG undefined FUN_14153869a(void)

void FUN_14153869a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x15];
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
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14631b528(param_1 + 6);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141538728 FUN_141538728 body=886 status=ok
// SIG undefined FUN_141538728(void)

int * FUN_141538728(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_1447711aa(param_1,iVar21);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar16 = iVar12 + 1;
    iVar20 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar20 = iVar12;
    }
    if (iVar20 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar16;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar16 = 0x80;
          iVar11 = iVar12;
        }
        else {
          uVar17 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar17) {
              uVar22 = uVar17;
            }
          }
          else {
            uVar22 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar22 << 2,0);
          iVar11 = (int)(uVar14 >> 2);
          iVar16 = -0x20;
          if ((int)uVar17 <= iVar11) {
            iVar16 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar16;
        FUN_1446efbd8(plVar13,iVar11);
        iVar16 = (int)param_1[5] + 1;
      }
      iVar11 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar11 = iVar16;
      }
      *(int *)(param_1 + 5) = iVar16;
      if (iVar16 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar13;
        }
        bVar15 = -(char)(iVar16 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar12 & 0x1f;
    puVar2 = (uint *)((longlong)plVar13 + (longlong)(iVar20 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar18 = (longlong)iVar21;
    iVar12 = *(int *)(*param_1 + 4 + lVar18 * 0x20);
    *(int *)(param_1 + 6) = iVar12;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x20) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar12 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar12 = iVar21;
  }
  puVar2 = (uint *)((longlong)plVar13 + (longlong)(iVar12 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar21 & 0x1f);
  iVar12 = 1;
  lVar5 = *param_1;
  lVar18 = lVar18 * 0x20;
  puVar3 = (undefined4 *)(lVar5 + lVar18);
  puVar6 = (undefined8 *)param_3[1];
  *(undefined8 *)(lVar5 + lVar18) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar5 + 8 + lVar18) = *puVar6;
  *(undefined8 *)(lVar5 + 0x10 + lVar18) = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar18) = 0xffffffff;
  lVar18 = *(longlong *)(lVar5 + lVar18);
  uVar17 = (uint)((ulonglong)lVar18 >> 0x10);
  uVar22 = (uint)lVar18 & 0xffff;
  uVar17 = ((uint)lVar18 << 0x10 | uVar22) + (int)((ulonglong)lVar18 >> 0x20) +
           (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar22 >> 4);
  uVar22 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar22 != 0) && (uVar22 != 1)) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (iVar11 != -1) {
      do {
        puVar4 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x20) == lVar18) {
          plVar13 = *(longlong **)(puVar4 + 4);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar13 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
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
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
          *puVar4 = uVar7;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          FUN_14860848a(param_1,iVar21);
          iVar21 = iVar11;
          goto LAB_14153891f;
        }
        iVar11 = puVar4[6];
      } while (iVar11 != -1);
    }
  }
  if (3 < uVar22) {
    uVar14 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar18 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar18 & 0x1f);
  }
  if (((int)uVar22 < 1) || (iVar12 <= (int)param_1[9])) {
    uVar17 = (int)param_1[9] - 1U & uVar17;
    puVar3[7] = uVar17;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    puVar3[6] = *(undefined4 *)
                 ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar21;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_141538a9e(param_1);
  }
LAB_14153891f:
  *param_2 = iVar21;
  return param_2;
}



// FUNCTION 141538a9e FUN_141538a9e body=601 status=ok
// SIG undefined FUN_141538a9e(void)

void FUN_141538a9e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
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
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_141538caa;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_141538caa:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141538cf8 FUN_141538cf8 body=39 status=ok
// SIG undefined FUN_141538cf8(void)

void FUN_141538cf8(longlong param_1)

{
  FUN_1463ce436();
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_14117928e();
  }
  FUN_14592c56a();
  return;
}



// FUNCTION 141538d20 FUN_141538d20 body=98 status=ok
// SIG undefined FUN_141538d20(void)

undefined1 * FUN_141538d20(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  *param_2 = *(undefined1 *)*param_1;
  FUN_1481cb7b8(param_2 + 8);
  FUN_145748bd6(0,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141538d84 FUN_141538d84 body=173 status=ok
// SIG undefined FUN_141538d84(void)

undefined8 FUN_141538d84(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
        pcVar1 = (char *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*pcVar1 == *param_3) {
          FUN_145748bd6(*(undefined8 *)(pcVar1 + 0x10),*(undefined4 *)(pcVar1 + 0x18));
          if (*(longlong *)(pcVar1 + 0x10) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          uVar6 = *(undefined4 *)(param_3 + 0x14);
          uVar7 = *(undefined4 *)(param_3 + 0x18);
          uVar8 = *(undefined4 *)(param_3 + 0x1c);
          *(undefined4 *)(pcVar1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
          *(undefined4 *)(pcVar1 + 0x14) = uVar6;
          *(undefined4 *)(pcVar1 + 0x18) = uVar7;
          *(undefined4 *)(pcVar1 + 0x1c) = uVar8;
          *(undefined4 *)pcVar1 = uVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar3;
          *(undefined4 *)(pcVar1 + 8) = uVar4;
          *(undefined4 *)(pcVar1 + 0xc) = uVar5;
          FUN_1481cb8c0(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = *(int *)(pcVar1 + 0x20);
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 141538e31 FUN_141538e31 body=65 status=ok
// SIG undefined FUN_141538e31(void)

void FUN_141538e31(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      LOCK();
      puVar1 = (uint *)(*param_1 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 141538e72 FUN_141538e72 body=83 status=ok
// SIG undefined FUN_141538e72(void)

void FUN_141538e72(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x10))();
      }
      lVar2 = plVar3[-1];
      if (lVar2 != 0) {
        LOCK();
        piVar1 = (int *)(lVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_144716208(lVar2);
          FUN_1400020a8(lVar2);
        }
      }
      plVar3 = plVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141538ec6 FUN_141538ec6 body=62 status=ok
// SIG undefined FUN_141538ec6(void)

longlong FUN_141538ec6(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x450);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 * 5;
    lVar3 = 0;
    do {
      bVar4 = *(int *)(*(longlong *)(param_1 + 0x448) + lVar3) == *param_2;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar4);
      if (bVar4) {
        return lVar2;
      }
      bVar4 = lVar1 * 0x28 + -0x28 != lVar3;
      lVar3 = lVar3 + 0x28;
    } while (bVar4);
  }
  return lVar2;
}



// FUNCTION 141538f04 FUN_141538f04 body=904 status=ok
// SIG undefined FUN_141538f04(void)

double * FUN_141538f04(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar4 = *(int *)(param_1 + 0x628);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x620);
    lVar13 = 0;
    bVar12 = false;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar13);
      if (plVar6 != (longlong *)0x0) {
        if (bVar12) {
          (**(code **)(*plVar6 + 0x2a0))(plVar6,&local_128,param_1 + 0x240);
          dVar3 = *param_2;
          dVar1 = param_2[1];
          dVar20 = dVar3 + param_2[3];
          dVar15 = dVar1 + param_2[4];
          dVar2 = param_2[2];
          dVar17 = dVar2 + param_2[5];
          dVar14 = dVar3 - param_2[3];
          dVar8 = dVar1 - param_2[4];
          dVar16 = dVar2 - param_2[5];
          dVar7 = dVar14;
          if (dVar20 <= dVar14) {
            dVar7 = dVar20;
          }
          dVar18 = dVar8;
          if (dVar15 <= dVar8) {
            dVar18 = dVar15;
          }
          dVar19 = dVar16;
          if (dVar17 <= dVar16) {
            dVar19 = dVar17;
          }
          if (dVar14 <= dVar20) {
            dVar14 = dVar20;
          }
          if (dVar8 <= dVar15) {
            dVar8 = dVar15;
          }
          if (dVar16 <= dVar17) {
            dVar16 = dVar17;
          }
          dVar15 = local_128 - local_110;
          if (dVar15 <= dVar7) {
            dVar7 = dVar15;
          }
          if (dVar14 <= dVar15) {
            dVar14 = dVar15;
          }
          dVar15 = local_120 - local_108;
          if (dVar15 <= dVar18) {
            dVar18 = dVar15;
          }
          if (dVar8 <= dVar15) {
            dVar8 = dVar15;
          }
          dVar15 = local_118 - local_100;
          if (dVar15 <= dVar19) {
            dVar19 = dVar15;
          }
          if (dVar16 <= dVar15) {
            dVar16 = dVar15;
          }
          dVar15 = local_110 + local_128;
          if (dVar15 <= dVar7) {
            dVar7 = dVar15;
          }
          if (dVar14 <= dVar15) {
            dVar14 = dVar15;
          }
          dVar15 = local_108 + local_120;
          if (dVar15 <= dVar18) {
            dVar18 = dVar15;
          }
          if (dVar8 <= dVar15) {
            dVar8 = dVar15;
          }
          dVar15 = local_100 + local_118;
          if (dVar15 <= dVar19) {
            dVar19 = dVar15;
          }
          if (dVar16 <= dVar15) {
            dVar16 = dVar15;
          }
          dVar8 = (dVar8 - dVar18) * 0.5;
          dVar15 = (dVar14 - dVar7) * 0.5;
          dVar18 = dVar18 + dVar8;
          dVar7 = dVar7 + dVar15;
          dVar17 = (dVar16 - dVar19) * 0.5;
          dVar19 = dVar19 + dVar17;
          dVar1 = SQRT((dVar2 - dVar19) * (dVar2 - dVar19) +
                       (dVar3 - dVar7) * (dVar3 - dVar7) + (dVar1 - dVar18) * (dVar1 - dVar18)) +
                  param_2[6];
          *param_2 = dVar7;
          param_2[1] = dVar18;
          param_2[2] = dVar19;
          param_2[3] = dVar15;
          param_2[4] = dVar8;
          param_2[5] = dVar17;
          dVar3 = SQRT((local_118 - dVar19) * (local_118 - dVar19) +
                       (local_128 - dVar7) * (local_128 - dVar7) +
                       (local_120 - dVar18) * (local_120 - dVar18)) + local_f8;
          if (dVar1 <= dVar3) {
            dVar1 = dVar3;
          }
          dVar3 = SQRT(dVar17 * dVar17 + dVar15 * dVar15 + dVar8 * dVar8);
          if (dVar1 <= dVar3) {
            dVar3 = dVar1;
          }
          param_2[6] = dVar3;
        }
        else {
          (**(code **)(*plVar6 + 0x2a0))(plVar6,param_2,param_1 + 0x240);
          bVar12 = true;
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar4 * 8 != lVar13);
    if (bVar12) goto LAB_141538fec;
  }
  uVar9 = *(undefined4 *)(param_1 + 0x264);
  uVar10 = *(undefined4 *)(param_1 + 0x268);
  uVar11 = *(undefined4 *)(param_1 + 0x26c);
  dVar3 = *(double *)(param_1 + 0x270);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)((longlong)param_2 + 4) = uVar9;
  *(undefined4 *)(param_2 + 1) = uVar10;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar11;
  param_2[2] = dVar3;
LAB_141538fec:
  if ((local_f0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153928e FUN_14153928e body=1067 status=ok
// SIG undefined FUN_14153928e(void)

double * FUN_14153928e(longlong param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  double *pdVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  uint uStack_90;
  uint uStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  uStack_8c = 0;
  if ((longlong)*(int *)(param_1 + 0x98) == 0) {
    uVar19 = *(undefined4 *)(param_1 + 0x50);
    uVar21 = *(undefined4 *)(param_1 + 0x54);
    uVar20 = *(undefined4 *)(param_1 + 0x58);
    uVar22 = *(undefined4 *)(param_1 + 0x5c);
    uVar23 = (undefined4)*(undefined8 *)(param_1 + 0x60);
    uVar24 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    uStack_8c = 0;
LAB_141539598:
    uStack_90 = 1;
    FUN_1403e3958(&local_98);
  }
  else {
    pdVar4 = *(double **)(param_1 + 0x90);
    pdVar1 = pdVar4 + (longlong)*(int *)(param_1 + 0x98) * 3;
    do {
      dVar7 = *pdVar4 * *(double *)(param_1 + 0x70);
      dVar9 = pdVar4[1] * *(double *)(param_1 + 0x78);
      dVar6 = pdVar4[2] * *(double *)(param_1 + 0x80);
      dVar13 = *(double *)(param_1 + 0x30);
      dVar18 = *(double *)(param_1 + 0x38);
      dVar17 = *(double *)(param_1 + 0x40);
      dVar11 = *(double *)(param_1 + 0x48);
      dVar12 = dVar9 * dVar13 - dVar7 * dVar18;
      dVar14 = dVar6 * dVar18 - dVar9 * dVar17;
      dVar15 = dVar7 * dVar17 - dVar13 * dVar6;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar12 = dVar12 + dVar12;
      dVar8 = ((dVar12 * dVar18 - dVar15 * dVar17) + dVar11 * dVar14 + dVar7 +
              *(double *)(param_1 + 0x50)) * param_3[8];
      dVar10 = ((dVar17 * dVar14 - dVar13 * dVar12) + *(double *)(param_1 + 0x48) * dVar15 + dVar9 +
               *(double *)(param_1 + 0x58)) * param_3[9];
      dVar14 = (dVar12 * dVar11 + dVar6 + (dVar15 * dVar13 - dVar14 * dVar18) +
               *(double *)(param_1 + 0x60)) * param_3[10];
      dVar6 = *param_3;
      dVar7 = param_3[1];
      dVar9 = param_3[2];
      dVar11 = param_3[3];
      dVar13 = dVar10 * dVar6 - dVar7 * dVar8;
      dVar16 = dVar14 * dVar7 - dVar9 * dVar10;
      dVar17 = dVar8 * dVar9 - dVar6 * dVar14;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar13 = dVar13 + dVar13;
      dVar15 = param_3[4];
      dVar18 = (dVar9 * dVar16 - dVar6 * dVar13) + param_3[3] * dVar17 + dVar10 + param_3[5];
      dVar12 = param_3[6];
      lVar5 = (longlong)(int)uStack_90;
      uStack_90 = uStack_90 + 1;
      if (uStack_8c < uStack_90) {
        FUN_1403e3958(&local_98);
      }
      auVar2._8_4_ = SUB84(dVar18,0);
      auVar2._0_8_ = (dVar13 * dVar7 - dVar17 * dVar9) + dVar11 * dVar16 + dVar8 + dVar15;
      auVar2._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      *(undefined1 (*) [16])(local_98 + lVar5 * 6) = auVar2;
      *(double *)(local_98 + lVar5 * 6 + 4) =
           dVar13 * dVar11 + dVar14 + (dVar17 * dVar6 - dVar16 * dVar7) + dVar12;
      pdVar4 = pdVar4 + 3;
    } while (pdVar4 != pdVar1);
    if (uStack_90 != 0) goto LAB_1415394f0;
    uVar19 = *(undefined4 *)(param_1 + 0x50);
    uVar21 = *(undefined4 *)(param_1 + 0x54);
    uVar20 = *(undefined4 *)(param_1 + 0x58);
    uVar22 = *(undefined4 *)(param_1 + 0x5c);
    uVar23 = (undefined4)*(undefined8 *)(param_1 + 0x60);
    uVar24 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    uStack_90 = 1;
    if (uStack_8c == 0) goto LAB_141539598;
  }
  *local_98 = uVar19;
  local_98[1] = uVar21;
  local_98[2] = uVar20;
  local_98[3] = uVar22;
  *(ulonglong *)(local_98 + 4) = CONCAT44(uVar24,uVar23);
LAB_1415394f0:
  if ((int)uStack_90 < 1) {
    dVar17 = 0.0;
    dVar15 = 0.0;
    dVar11 = 0.0;
    dVar12 = 0.0;
    dVar18 = 0.0;
    dVar13 = 0.0;
  }
  else {
    bVar3 = true;
    dVar17 = 0.0;
    lVar5 = 0;
    dVar15 = 0.0;
    dVar12 = 0.0;
    dVar18 = 0.0;
    dVar13 = 0.0;
    uVar19 = 0;
    uVar21 = 0;
    do {
      dVar11 = *(double *)((longlong)local_98 + lVar5);
      uVar20 = SUB84(dVar11,0);
      uVar22 = (undefined4)((ulonglong)dVar11 >> 0x20);
      if (bVar3) {
        dVar12 = *(double *)((longlong)local_98 + lVar5 + 8);
        dVar15 = *(double *)((longlong)local_98 + lVar5 + 0x10);
        dVar13 = dVar11;
        dVar18 = dVar15;
        dVar17 = dVar12;
      }
      else {
        if (dVar11 <= dVar13) {
          dVar13 = dVar11;
        }
        dVar6 = *(double *)((longlong)local_98 + lVar5 + 8);
        dVar7 = *(double *)((longlong)local_98 + lVar5 + 0x10);
        if (dVar6 <= dVar17) {
          dVar17 = dVar6;
        }
        if (dVar7 <= dVar15) {
          dVar15 = dVar7;
        }
        if ((double)CONCAT44(uVar21,uVar19) <= dVar11) {
          uVar19 = uVar20;
          uVar21 = uVar22;
        }
        if (dVar12 <= dVar6) {
          dVar12 = dVar6;
        }
        if (dVar18 <= dVar7) {
          dVar18 = dVar7;
        }
        dVar11 = (double)CONCAT44(uVar21,uVar19);
        uVar20 = uVar19;
        uVar22 = uVar21;
      }
      lVar5 = lVar5 + 0x18;
      bVar3 = false;
      uVar19 = uVar20;
      uVar21 = uVar22;
    } while ((ulonglong)uStack_90 * 0x18 != lVar5);
  }
  dVar18 = (((double)*(float *)(param_1 + 0xa0) + dVar18) - dVar15) * 0.5;
  dVar12 = (dVar12 - dVar17) * 0.5;
  dVar11 = (dVar11 - dVar13) * 0.5;
  *param_2 = dVar13 + dVar11;
  param_2[1] = dVar17 + dVar12;
  param_2[2] = dVar15 + dVar18;
  param_2[3] = dVar11;
  param_2[4] = dVar12;
  param_2[5] = dVar18;
  param_2[6] = SQRT(dVar18 * dVar18 + dVar11 * dVar11 + dVar12 * dVar12);
  if (local_98 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1415396ba FUN_1415396ba body=232 status=ok
// SIG undefined FUN_1415396ba(void)

ulonglong FUN_1415396ba(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8 [408];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((char)param_1[0x10] == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    iVar1 = Ordinal_115(0x101,local_1b8);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),iVar1 == 0);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0xc0))(param_1,iVar1);
      uVar3 = FUN_146b11fe0(param_1,uVar2);
      FUN_140002266(&local_1c8,L"WSAStartup failed (%s)",uVar3);
      if (&local_1c8 == param_2) {
        if (local_1c8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_1c8;
        *(undefined4 *)(param_2 + 1) = local_1c0;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_1bc;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415397a4 FUN_1415397a4 body=320 status=ok
// SIG undefined FUN_1415397a4(void)

void FUN_1415397a4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14a152750;
  param_1[5] = &PTR_FUN_14a1529f0;
  FUN_145d312f2(param_1[0x112]);
  FUN_144760e21(param_1[0x10e],*(undefined4 *)(param_1 + 0x10f));
  if (param_1[0x10e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10b],*(undefined4 *)(param_1 + 0x10c));
  if (param_1[0x10b] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10a];
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
  if (param_1[0x107] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x105] != 0) {
    FUN_1400020a8();
  }
  param_1[5] = &PTR_FUN_14a155bf0;
  lVar5 = 0x820;
  do {
    puVar4 = *(undefined8 **)((longlong)param_1 + lVar5);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    lVar5 = lVar5 + -8;
  } while (lVar5 != 0x30);
  puVar4 = (undefined8 *)param_1[6];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1415398e4 FUN_1415398e4 body=164 status=ok
// SIG undefined FUN_1415398e4(void)

void FUN_1415398e4(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Particles";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Particles";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caeab80,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153998a FUN_14153998a body=180 status=ok
// SIG undefined FUN_14153998a(void)

void FUN_14153998a(longlong param_1)

{
  if (DAT_14c868738 != (undefined8 *)0x0 && DAT_14c868740 != 0) {
    (**(code **)*DAT_14c868738)(DAT_14c868738,0);
    FUN_1446efa72(&DAT_14c868738,0,0,0x10);
    DAT_14c868740 = 0;
  }
  if (DAT_14c868748 != (undefined8 *)0x0 && DAT_14c868750 != 0) {
    (**(code **)*DAT_14c868748)(DAT_14c868748,0);
    FUN_1446efa72(&DAT_14c868748,0,0,0x10);
    DAT_14c868750 = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14583fee2(param_1 + 8);
  return;
}



// FUNCTION 141539a3e FUN_141539a3e body=509 status=ok
// SIG undefined FUN_141539a3e(void)

void FUN_141539a3e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x10 + (longlong)iVar6 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x30) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_141539b97;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_141539b97:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_14494313c(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141539c3e FUN_141539c3e body=311 status=ok
// SIG undefined FUN_141539c3e(void)

void FUN_141539c3e(longlong *param_1)

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
        do {
          local_60 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_60._4_4_ != iVar6);
      } while (((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1) || (local_78 != param_1));
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



// FUNCTION 141539d76 FUN_141539d76 body=445 status=ok
// SIG undefined FUN_141539d76(void)

void FUN_141539d76(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x30;
        iVar6 = FUN_141539f34(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar10) =
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



// FUNCTION 141539f34 FUN_141539f34 body=535 status=ok
// SIG undefined FUN_141539f34(void)

uint FUN_141539f34(undefined8 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar1 = *(int *)(param_1 + 3);
  uVar6 = 0;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  uVar5 = 0;
  if (0 < iVar7) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)param_1[2];
    }
    lVar9 = 0;
    uVar5 = 0;
    do {
      uVar3 = ((uint)(0x19 < (ushort)puVar2[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar9]) -
              0x20;
      uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar3) & 0xff) * 4);
      uVar5 = uVar5 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar3 >> 8 & 0xff) * 4);
      lVar9 = lVar9 + 1;
    } while (iVar7 != (int)lVar9);
  }
  uVar3 = *(uint *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 1);
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    lVar9 = 0;
    uVar6 = 0;
    do {
      uVar4 = ((uint)(0x19 < (ushort)puVar2[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar9]) -
              0x20;
      uVar6 = uVar6 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar6 ^ uVar4) & 0xff) * 4);
      uVar6 = uVar6 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar6 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
      lVar9 = lVar9 + 1;
    } while (iVar7 != (int)lVar9);
  }
  uVar6 = uVar5 >> 0xd ^ uVar6 - uVar5;
  uVar4 = uVar6 << 8 ^ (-0x61c88647 - uVar5) - uVar6;
  uVar5 = uVar4 >> 0xd ^ (uVar5 - uVar6) - uVar4;
  uVar6 = uVar5 >> 0xc ^ (uVar6 - uVar4) - uVar5;
  uVar4 = uVar6 << 0x10 ^ (uVar4 - uVar5) - uVar6;
  uVar5 = uVar4 >> 5 ^ (uVar5 - uVar6) - uVar4;
  uVar8 = uVar5 >> 3 ^ (uVar6 - uVar4) - uVar5;
  uVar6 = uVar8 << 10 ^ (uVar4 - uVar5) - uVar8;
  uVar6 = uVar3 >> 0xd ^ (uVar6 >> 0xf ^ uVar5 - (uVar8 + uVar6)) - uVar3;
  uVar4 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
  uVar5 = uVar4 >> 0xd ^ (uVar3 - uVar6) - uVar4;
  uVar6 = uVar5 >> 0xc ^ (uVar6 - uVar4) - uVar5;
  uVar4 = uVar6 << 0x10 ^ (uVar4 - uVar5) - uVar6;
  uVar3 = uVar4 >> 5 ^ (uVar5 - uVar6) - uVar4;
  uVar5 = uVar3 >> 3 ^ (uVar6 - uVar4) - uVar3;
  uVar6 = uVar5 << 10 ^ (uVar4 - uVar3) - uVar5;
  return uVar6 >> 0xf ^ uVar3 - (uVar5 + uVar6);
}



// FUNCTION 14153a14c FUN_14153a14c body=5036 status=ok
// SIG undefined FUN_14153a14c(void)

void FUN_14153a14c(longlong param_1)

{
  ulonglong uVar1;
  ushort *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_428 [32];
  undefined8 local_408;
  undefined1 local_400;
  undefined8 *local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  undefined8 *local_3d8;
  undefined8 local_3d0;
  undefined8 *local_3c8;
  ulonglong uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 *local_348;
  undefined8 *local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_428;
  FUN_1407cbc56();
  lVar26 = *(longlong *)(param_1 + 0x288);
  if (lVar26 != 0) {
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar11 = &DAT_14c9a1308;
    }
    else {
      puVar11 = (undefined8 *)FUN_1408db3b0(*(longlong *)(param_1 + 0x160),"OptionsGroups");
    }
    cVar10 = FUN_141165bc4(puVar11);
    if ((cVar10 != '\0') && ((*(byte *)*puVar11 & 3) == 2)) {
      local_3c8 = (undefined8 *)0x0;
      uStack_3c0 = 0;
      local_3e0 = param_1;
      uVar12 = FUN_145d32eb4();
      FUN_1446ddc76(&local_3d0,"DefaultSettings",1);
      lVar13 = FUN_144a87586(uVar12,local_3d0);
      local_3e8 = lVar26;
      if (lVar13 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(longlong *)(lVar13 + 8);
        lVar14 = FUN_1446e6bbc();
        if (*(ulonglong *)(lVar14 + 8) == 0) {
          bVar35 = lVar18 != 0;
          if (lVar18 != lVar14 && bVar35) {
            do {
              lVar18 = *(longlong *)(lVar18 + 0x30);
              bVar35 = lVar18 != 0;
              lVar26 = local_3e8;
              if (lVar18 == lVar14) break;
            } while (lVar18 != 0);
          }
        }
        else {
          bVar35 = (*(ulonglong *)(lVar18 + 0x18) & *(ulonglong *)(lVar14 + 8)) != 0;
        }
        lVar18 = 0;
        if (bVar35) {
          lVar18 = lVar13;
        }
      }
      local_400 = 0;
      local_408 = 0;
      FUN_1446e0fc6(puVar11,&local_3c8,lVar18,0xffffffff);
      FUN_145d32eec(lVar26 + 0xb0,uStack_3c0 & 0xffffffff);
      iVar30 = *(int *)(lVar26 + 0xcc);
      FUN_14580756d(*(undefined8 *)(lVar26 + 0xc0),*(undefined4 *)(lVar26 + 200));
      *(undefined4 *)(lVar26 + 200) = 0;
      if ((iVar30 < 0) && (*(int *)(lVar26 + 0xcc) != 0)) {
        FUN_148ed587c(lVar26 + 0xc0);
      }
      iVar30 = *(int *)(lVar26 + 0xe4);
      FUN_14580752f(*(undefined8 *)(lVar26 + 0xd8),*(undefined4 *)(lVar26 + 0xe0));
      *(undefined4 *)(lVar26 + 0xe0) = 0;
      if ((iVar30 < 0) && (*(int *)(lVar26 + 0xe4) != 0)) {
        FUN_148ed58ac(lVar26 + 0xd8);
      }
      iVar30 = *(int *)(lVar26 + 0xfc);
      FUN_145807498(*(undefined8 *)(lVar26 + 0xf0));
      *(undefined4 *)(lVar26 + 0xf8) = 0;
      if ((iVar30 < 0) && (*(int *)(lVar26 + 0xfc) != 0)) {
        FUN_148ed58dc(lVar26 + 0xf0);
      }
      puVar11 = local_3c8;
      iVar30 = (int)uStack_3c0;
      lVar26 = (longlong)(int)uStack_3c0;
      if (1 < lVar26) {
        memset(local_338,0,0x2f0);
        local_348 = puVar11;
        local_340 = puVar11 + lVar26 * 10 + -10;
        fVar36 = logf((float)iVar30);
        local_338[0] = (int)(longlong)(fVar36 + fVar36);
        ppuVar16 = &local_348;
        do {
          puVar11 = *ppuVar16;
          puVar20 = ppuVar16[1];
          iVar30 = *(int *)(ppuVar16 + 2);
          iVar17 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar11) >> 4) * -0x33333333;
          uVar19 = (ulonglong)(iVar17 + 1);
          puVar22 = puVar20;
          puVar23 = puVar11;
          if (iVar30 != 0) {
LAB_14153a38f:
            if (8 < (int)(uint)uVar19) {
              puVar24 = puVar11 + (ulonglong)((uint)uVar19 >> 1) * 10;
              puVar15 = &local_3b8;
              for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar15 = *puVar24;
                puVar24 = puVar24 + 1;
                puVar15 = puVar15 + 1;
              }
              puVar24 = puVar11;
              puVar15 = puVar11 + (ulonglong)((uint)uVar19 >> 1) * 10;
              for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar15 = *puVar24;
                puVar24 = puVar24 + 1;
                puVar15 = puVar15 + 1;
              }
              puVar24 = &local_3b8;
              puVar15 = puVar11;
              for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar15 = *puVar24;
                puVar24 = puVar24 + 1;
                puVar15 = puVar15 + 1;
              }
              puVar24 = puVar22 + 10;
              local_3f0 = puVar11;
              do {
                puVar15 = local_3f0 + 10;
                puVar25 = local_3f0 + 10;
                do {
                  local_3f0 = puVar25;
                  puVar27 = puVar15;
                  if (puVar22 < local_3f0) break;
                  puVar15 = puVar27 + 10;
                  puVar25 = local_3f0 + 10;
                } while (*(int *)(local_3f0 + 5) <= *(int *)(puVar11 + 5));
                puVar15 = puVar24 + -0x14;
                do {
                  puVar25 = puVar24;
                  puVar21 = puVar15;
                  puVar24 = puVar25 + -10;
                  if (puVar24 <= puVar11) break;
                  puVar15 = puVar21 + -10;
                } while (*(int *)(puVar11 + 5) <= *(int *)(puVar25 + -5));
                if (puVar24 < local_3f0) goto LAB_14153b425;
                puVar15 = local_3f0;
                puVar25 = &local_3b8;
                for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                  *puVar25 = *puVar15;
                  puVar15 = puVar15 + 1;
                  puVar25 = puVar25 + 1;
                }
                puVar15 = puVar24;
                puVar25 = local_3f0;
                for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                  *puVar25 = *puVar15;
                  puVar15 = puVar15 + 1;
                  puVar25 = puVar25 + 1;
                }
                puVar15 = &local_3b8;
                puVar25 = puVar24;
                for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                  *puVar25 = *puVar15;
                  puVar15 = puVar15 + 1;
                  puVar25 = puVar25 + 1;
                }
              } while( true );
            }
            while (puVar23 = puVar11, puVar20 = puVar11, puVar11 < puVar22) {
              while (puVar24 = puVar23, puVar20 = puVar20 + 10, puVar20 <= puVar22) {
                puVar23 = puVar20;
                if (*(int *)(puVar20 + 5) <= *(int *)(puVar24 + 5)) {
                  puVar23 = puVar24;
                }
              }
              puVar20 = puVar22 + -10;
              puVar23 = puVar24;
              puVar15 = &local_3b8;
              for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar15 = *puVar23;
                puVar23 = puVar23 + 1;
                puVar15 = puVar15 + 1;
              }
              puVar23 = puVar22;
              for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar24 = *puVar23;
                puVar23 = puVar23 + 1;
                puVar24 = puVar24 + 1;
              }
              puVar23 = &local_3b8;
              puVar24 = puVar22;
              for (lVar26 = 10; puVar22 = puVar20, lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar24 = *puVar23;
                puVar23 = puVar23 + 1;
                puVar24 = puVar24 + 1;
              }
            }
            goto LAB_14153a401;
          }
LAB_14153b10a:
          local_3f0 = puVar11;
          iVar30 = (int)uVar19;
          if (iVar30 != 0) {
            iVar33 = (iVar17 - (iVar17 + -1 >> 0x1f)) + -1 >> 1;
            iVar17 = iVar33;
joined_r0x00014153b12f:
            do {
              iVar34 = iVar17 * 2 + 1;
              if (iVar34 < iVar30) {
                iVar31 = iVar17 * 2 + 2;
                if ((iVar31 < iVar30) &&
                   (*(int *)(local_3f0 + (longlong)iVar34 * 10 + 5) <=
                    *(int *)(local_3f0 + (longlong)iVar31 * 10 + 5))) {
                  iVar34 = iVar31;
                }
                if (*(int *)(local_3f0 + (longlong)iVar17 * 10 + 5) <
                    *(int *)(local_3f0 + (longlong)iVar34 * 10 + 5)) {
                  puVar11 = local_3f0 + (longlong)iVar17 * 10;
                  puVar20 = &local_3b8;
                  for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar20 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar20 = puVar20 + 1;
                  }
                  puVar11 = local_3f0 + (longlong)iVar34 * 10;
                  puVar20 = local_3f0 + (longlong)iVar17 * 10;
                  for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar20 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar20 = puVar20 + 1;
                  }
                  puVar11 = &local_3b8;
                  puVar20 = local_3f0 + (longlong)iVar34 * 10;
                  for (lVar26 = 10; iVar17 = iVar34, lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar20 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar20 = puVar20 + 1;
                  }
                  goto joined_r0x00014153b12f;
                }
              }
              bVar35 = iVar33 != 0;
              iVar33 = iVar33 + -1;
              iVar17 = iVar33;
            } while (bVar35);
            if (1 < iVar30) {
              puVar11 = local_3f0;
              puVar20 = &local_3b8;
              for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar20 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar20 = puVar20 + 1;
              }
              puVar11 = local_3f0 + (uVar19 - 1) * 10;
              puVar20 = local_3f0;
              for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar20 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar20 = puVar20 + 1;
              }
              puVar11 = &local_3b8;
              puVar20 = local_3f0 + (uVar19 - 1) * 10;
              for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar20 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar20 = puVar20 + 1;
              }
              uVar19 = uVar19 - 1;
              if (iVar30 != 2) {
                do {
                  iVar30 = 0;
                  iVar33 = 1;
                  iVar17 = 0;
                  do {
                    iVar30 = iVar30 + 2;
                    iVar34 = iVar33;
                    if (((longlong)iVar30 < (longlong)uVar19) &&
                       (*(int *)(local_3f0 + (longlong)iVar33 * 10 + 5) <=
                        *(int *)(local_3f0 + (longlong)iVar30 * 10 + 5))) {
                      iVar34 = iVar30;
                    }
                    if (*(int *)(local_3f0 + (longlong)iVar34 * 10 + 5) <=
                        *(int *)(local_3f0 + (longlong)iVar17 * 10 + 5)) break;
                    puVar11 = local_3f0 + (longlong)iVar17 * 10;
                    puVar20 = &local_3b8;
                    for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                      *puVar20 = *puVar11;
                      puVar11 = puVar11 + 1;
                      puVar20 = puVar20 + 1;
                    }
                    puVar11 = local_3f0 + (longlong)iVar34 * 10;
                    puVar20 = local_3f0 + (longlong)iVar17 * 10;
                    for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                      *puVar20 = *puVar11;
                      puVar11 = puVar11 + 1;
                      puVar20 = puVar20 + 1;
                    }
                    puVar11 = &local_3b8;
                    puVar20 = local_3f0 + (longlong)iVar34 * 10;
                    for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                      *puVar20 = *puVar11;
                      puVar11 = puVar11 + 1;
                      puVar20 = puVar20 + 1;
                    }
                    iVar30 = iVar34 * 2;
                    iVar33 = iVar34 * 2 + 1;
                    iVar17 = iVar34;
                  } while ((longlong)iVar33 < (longlong)uVar19);
                  puVar11 = local_3f0;
                  puVar20 = &local_3b8;
                  for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar20 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar20 = puVar20 + 1;
                  }
                  puVar11 = local_3f0 + (uVar19 - 1) * 10;
                  puVar20 = local_3f0;
                  for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar20 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar20 = puVar20 + 1;
                  }
                  puVar11 = &local_3b8;
                  puVar20 = local_3f0 + (uVar19 - 1) * 10;
                  for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar20 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar20 = puVar20 + 1;
                  }
                  bVar35 = 2 < uVar19;
                  uVar19 = uVar19 - 1;
                } while (bVar35);
              }
            }
          }
LAB_14153a401:
          ppuVar16 = ppuVar16 + -3;
        } while (&local_348 <= ppuVar16);
      }
      lVar26 = local_3e8;
      if ((int)uStack_3c0 != 0) {
        local_3d8 = local_3c8 + (longlong)(int)uStack_3c0 * 10;
        puVar11 = local_3c8;
        lVar13 = local_3e0;
        do {
          iVar30 = *(int *)(puVar11 + 9);
          if (1 < (longlong)iVar30) {
            puVar20 = (undefined8 *)puVar11[8];
            memset(local_338,0,0x2f0);
            local_340 = puVar20 + (longlong)iVar30 * 0xe + -0xe;
            local_348 = puVar20;
            fVar36 = logf((float)iVar30);
            local_338[0] = (int)(longlong)(fVar36 + fVar36);
            ppuVar16 = &local_348;
            do {
              puVar20 = *ppuVar16;
              puVar22 = ppuVar16[1];
              iVar30 = *(int *)(ppuVar16 + 2);
              iVar17 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar20) >> 4) * -0x49249249;
              uVar32 = iVar17 + 1;
              puVar23 = puVar22;
              puVar24 = puVar20;
              if (iVar30 != 0) {
LAB_14153a4d8:
                if (8 < (int)uVar32) {
                  puVar15 = puVar20 + (ulonglong)(uVar32 >> 1) * 0xe;
                  puVar25 = &local_3b8;
                  for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar25 = *puVar15;
                    puVar15 = puVar15 + 1;
                    puVar25 = puVar25 + 1;
                  }
                  puVar15 = puVar20;
                  puVar25 = puVar20 + (ulonglong)(uVar32 >> 1) * 0xe;
                  for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar25 = *puVar15;
                    puVar15 = puVar15 + 1;
                    puVar25 = puVar25 + 1;
                  }
                  puVar15 = &local_3b8;
                  puVar25 = puVar20;
                  for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar25 = *puVar15;
                    puVar15 = puVar15 + 1;
                    puVar25 = puVar25 + 1;
                  }
                  puVar15 = puVar23 + 0xe;
                  local_3f0 = puVar20;
                  do {
                    puVar25 = local_3f0 + 0xe;
                    puVar27 = local_3f0 + 0xe;
                    do {
                      local_3f0 = puVar27;
                      puVar21 = puVar25;
                      if (puVar23 < local_3f0) break;
                      puVar25 = puVar21 + 0xe;
                      puVar27 = local_3f0 + 0xe;
                    } while (*(int *)(local_3f0 + 5) <= *(int *)(puVar20 + 5));
                    puVar25 = puVar15 + -0x1c;
                    do {
                      puVar27 = puVar15;
                      puVar29 = puVar25;
                      puVar15 = puVar27 + -0xe;
                      if (puVar15 <= puVar20) break;
                      puVar25 = puVar29 + -0xe;
                    } while (*(int *)(puVar20 + 5) <= *(int *)(puVar27 + -9));
                    if (puVar15 < local_3f0) goto LAB_14153aeeb;
                    puVar25 = local_3f0;
                    puVar27 = &local_3b8;
                    for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                      *puVar27 = *puVar25;
                      puVar25 = puVar25 + 1;
                      puVar27 = puVar27 + 1;
                    }
                    puVar25 = puVar15;
                    puVar27 = local_3f0;
                    for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                      *puVar27 = *puVar25;
                      puVar25 = puVar25 + 1;
                      puVar27 = puVar27 + 1;
                    }
                    puVar25 = &local_3b8;
                    puVar27 = puVar15;
                    for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                      *puVar27 = *puVar25;
                      puVar25 = puVar25 + 1;
                      puVar27 = puVar27 + 1;
                    }
                  } while( true );
                }
                while (puVar24 = puVar20, puVar22 = puVar20, puVar20 < puVar23) {
                  while (puVar15 = puVar24, puVar22 = puVar22 + 0xe, puVar22 <= puVar23) {
                    puVar24 = puVar22;
                    if (*(int *)(puVar22 + 5) <= *(int *)(puVar15 + 5)) {
                      puVar24 = puVar15;
                    }
                  }
                  puVar22 = puVar23 + -0xe;
                  puVar24 = puVar15;
                  puVar25 = &local_3b8;
                  for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
                    *puVar25 = *puVar24;
                    puVar24 = puVar24 + 1;
                    puVar25 = puVar25 + 1;
                  }
                  puVar24 = puVar23;
                  for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
                    *puVar15 = *puVar24;
                    puVar24 = puVar24 + 1;
                    puVar15 = puVar15 + 1;
                  }
                  puVar24 = &local_3b8;
                  puVar15 = puVar23;
                  for (lVar18 = 0xe; puVar23 = puVar22, lVar18 != 0; lVar18 = lVar18 + -1) {
                    *puVar15 = *puVar24;
                    puVar24 = puVar24 + 1;
                    puVar15 = puVar15 + 1;
                  }
                }
                goto LAB_14153a549;
              }
LAB_14153abe9:
              local_3f0 = puVar20;
              lVar26 = local_3e8;
              lVar13 = local_3e0;
              if (uVar32 != 0) {
                iVar17 = (iVar17 - (iVar17 + -1 >> 0x1f)) + -1 >> 1;
                iVar30 = iVar17;
joined_r0x00014153ac11:
                do {
                  iVar33 = iVar30 * 2 + 1;
                  if (iVar33 < (int)uVar32) {
                    iVar34 = iVar30 * 2 + 2;
                    if ((iVar34 < (int)uVar32) &&
                       (*(int *)(local_3f0 + (longlong)iVar33 * 0xe + 5) <=
                        *(int *)(local_3f0 + (longlong)iVar34 * 0xe + 5))) {
                      iVar33 = iVar34;
                    }
                    if (*(int *)(local_3f0 + (longlong)iVar30 * 0xe + 5) <
                        *(int *)(local_3f0 + (longlong)iVar33 * 0xe + 5)) {
                      puVar20 = local_3f0 + (longlong)iVar30 * 0xe;
                      puVar22 = &local_3b8;
                      for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                        *puVar22 = *puVar20;
                        puVar20 = puVar20 + 1;
                        puVar22 = puVar22 + 1;
                      }
                      puVar20 = local_3f0 + (longlong)iVar33 * 0xe;
                      puVar22 = local_3f0 + (longlong)iVar30 * 0xe;
                      for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                        *puVar22 = *puVar20;
                        puVar20 = puVar20 + 1;
                        puVar22 = puVar22 + 1;
                      }
                      puVar20 = &local_3b8;
                      puVar22 = local_3f0 + (longlong)iVar33 * 0xe;
                      for (lVar26 = 0xe; iVar30 = iVar33, lVar26 != 0; lVar26 = lVar26 + -1) {
                        *puVar22 = *puVar20;
                        puVar20 = puVar20 + 1;
                        puVar22 = puVar22 + 1;
                      }
                      goto joined_r0x00014153ac11;
                    }
                  }
                  bVar35 = iVar17 != 0;
                  iVar17 = iVar17 + -1;
                  iVar30 = iVar17;
                } while (bVar35);
                lVar26 = local_3e8;
                if (1 < (int)uVar32) {
                  puVar20 = local_3f0;
                  puVar22 = &local_3b8;
                  for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar22 = *puVar20;
                    puVar20 = puVar20 + 1;
                    puVar22 = puVar22 + 1;
                  }
                  puVar20 = local_3f0 + ((ulonglong)uVar32 - 1) * 0xe;
                  puVar22 = local_3f0;
                  for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar22 = *puVar20;
                    puVar20 = puVar20 + 1;
                    puVar22 = puVar22 + 1;
                  }
                  puVar20 = &local_3b8;
                  puVar22 = local_3f0 + ((ulonglong)uVar32 - 1) * 0xe;
                  for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar22 = *puVar20;
                    puVar20 = puVar20 + 1;
                    puVar22 = puVar22 + 1;
                  }
                  uVar19 = (ulonglong)uVar32 - 1;
                  lVar26 = local_3e8;
                  if (uVar32 != 2) {
                    do {
                      iVar30 = 0;
                      iVar33 = 1;
                      iVar17 = 0;
                      do {
                        iVar30 = iVar30 + 2;
                        iVar34 = iVar33;
                        if (((longlong)iVar30 < (longlong)uVar19) &&
                           (*(int *)(local_3f0 + (longlong)iVar33 * 0xe + 5) <=
                            *(int *)(local_3f0 + (longlong)iVar30 * 0xe + 5))) {
                          iVar34 = iVar30;
                        }
                        if (*(int *)(local_3f0 + (longlong)iVar34 * 0xe + 5) <=
                            *(int *)(local_3f0 + (longlong)iVar17 * 0xe + 5)) break;
                        puVar20 = local_3f0 + (longlong)iVar17 * 0xe;
                        puVar22 = &local_3b8;
                        for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                          *puVar22 = *puVar20;
                          puVar20 = puVar20 + 1;
                          puVar22 = puVar22 + 1;
                        }
                        puVar20 = local_3f0 + (longlong)iVar34 * 0xe;
                        puVar22 = local_3f0 + (longlong)iVar17 * 0xe;
                        for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                          *puVar22 = *puVar20;
                          puVar20 = puVar20 + 1;
                          puVar22 = puVar22 + 1;
                        }
                        puVar20 = &local_3b8;
                        puVar22 = local_3f0 + (longlong)iVar34 * 0xe;
                        for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                          *puVar22 = *puVar20;
                          puVar20 = puVar20 + 1;
                          puVar22 = puVar22 + 1;
                        }
                        iVar30 = iVar34 * 2;
                        iVar33 = iVar34 * 2 + 1;
                        iVar17 = iVar34;
                      } while ((longlong)iVar33 < (longlong)uVar19);
                      puVar20 = local_3f0;
                      puVar22 = &local_3b8;
                      for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                        *puVar22 = *puVar20;
                        puVar20 = puVar20 + 1;
                        puVar22 = puVar22 + 1;
                      }
                      puVar20 = local_3f0 + (uVar19 - 1) * 0xe;
                      puVar22 = local_3f0;
                      for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                        *puVar22 = *puVar20;
                        puVar20 = puVar20 + 1;
                        puVar22 = puVar22 + 1;
                      }
                      puVar20 = &local_3b8;
                      puVar22 = local_3f0 + (uVar19 - 1) * 0xe;
                      for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
                        *puVar22 = *puVar20;
                        puVar20 = puVar20 + 1;
                        puVar22 = puVar22 + 1;
                      }
                      bVar35 = 2 < uVar19;
                      uVar19 = uVar19 - 1;
                      lVar26 = local_3e8;
                    } while (bVar35);
                  }
                }
              }
LAB_14153a549:
              ppuVar16 = ppuVar16 + -3;
            } while (&local_348 <= ppuVar16);
            iVar30 = *(int *)(puVar11 + 9);
          }
          if (iVar30 != 0) {
            lVar18 = puVar11[8];
            lVar14 = (longlong)iVar30 * 0x70 + lVar18;
            do {
              ppuVar16 = &local_348;
              iVar30 = *(int *)(lVar18 + 0x50);
              if (1 < (longlong)iVar30) {
                puVar20 = *(undefined8 **)(lVar18 + 0x48);
                local_3f0 = puVar11;
                memset(local_338,0,0x2f0);
                local_340 = puVar20 + (longlong)iVar30 * 5 + -5;
                local_348 = puVar20;
                fVar36 = logf((float)iVar30);
                local_338[0] = (int)(longlong)(fVar36 + fVar36);
                do {
                  puVar20 = *ppuVar16;
                  puVar22 = ppuVar16[1];
                  iVar30 = *(int *)(ppuVar16 + 2);
                  iVar17 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar20) >> 3) *
                           -0x33333333;
                  uVar32 = iVar17 + 1;
                  puVar11 = puVar22;
                  puVar23 = puVar20;
                  if (iVar30 != 0) {
LAB_14153a611:
                    if (8 < (int)uVar32) {
                      uVar19 = (ulonglong)(uVar32 >> 1);
                      uVar12 = puVar20[uVar19 * 5 + 4];
                      uVar3 = puVar20[uVar19 * 5];
                      uVar4 = (puVar20 + uVar19 * 5)[1];
                      uVar5 = puVar20[uVar19 * 5 + 2];
                      uVar6 = (puVar20 + uVar19 * 5 + 2)[1];
                      puVar20[uVar19 * 5 + 4] = puVar20[4];
                      uVar7 = *puVar20;
                      uVar8 = puVar20[1];
                      uVar9 = puVar20[3];
                      puVar20[uVar19 * 5 + 2] = puVar20[2];
                      (puVar20 + uVar19 * 5 + 2)[1] = uVar9;
                      puVar20[uVar19 * 5] = uVar7;
                      (puVar20 + uVar19 * 5)[1] = uVar8;
                      puVar20[4] = uVar12;
                      puVar20[2] = uVar5;
                      puVar20[3] = uVar6;
                      *puVar20 = uVar3;
                      puVar20[1] = uVar4;
                      puVar24 = puVar11 + 5;
                      puVar15 = puVar20;
                      do {
                        puVar25 = puVar15 + 5;
                        puVar27 = puVar15 + 5;
                        do {
                          puVar15 = puVar27;
                          puVar21 = puVar25;
                          if (puVar11 < puVar15) break;
                          puVar25 = puVar21 + 5;
                          puVar27 = puVar15 + 5;
                        } while (*(int *)(puVar15 + 3) <= *(int *)(puVar20 + 3));
                        puVar25 = puVar24 + -10;
                        do {
                          puVar27 = puVar24;
                          puVar29 = puVar25;
                          puVar24 = puVar27 + -5;
                          if (puVar24 <= puVar20) break;
                          puVar25 = puVar29 + -5;
                        } while (*(int *)(puVar20 + 3) <= *(int *)(puVar27 + -2));
                        if (puVar24 < puVar15) goto code_r0x00014153a6de;
                        uVar12 = puVar15[4];
                        uVar3 = *puVar15;
                        uVar4 = puVar15[1];
                        uVar5 = puVar15[2];
                        uVar6 = puVar15[3];
                        puVar15[4] = puVar27[-1];
                        uVar7 = *puVar24;
                        uVar8 = puVar27[-4];
                        uVar9 = puVar27[-2];
                        puVar15[2] = puVar27[-3];
                        puVar15[3] = uVar9;
                        *puVar15 = uVar7;
                        puVar15[1] = uVar8;
                        puVar27[-1] = uVar12;
                        puVar27[-3] = uVar5;
                        puVar27[-2] = uVar6;
                        *puVar24 = uVar3;
                        puVar27[-4] = uVar4;
                      } while( true );
                    }
                    for (; puVar23 = puVar20, puVar22 = puVar20, puVar20 < puVar11;
                        puVar11 = puVar11 + -5) {
                      while (puVar24 = puVar23, puVar22 = puVar22 + 5, puVar22 <= puVar11) {
                        puVar23 = puVar22;
                        if (*(int *)(puVar22 + 3) <= *(int *)(puVar24 + 3)) {
                          puVar23 = puVar24;
                        }
                      }
                      local_398 = puVar24[4];
                      local_3b8 = *puVar24;
                      uStack_3b0 = puVar24[1];
                      local_3a8 = puVar24[2];
                      uStack_3a0 = puVar24[3];
                      uVar5 = local_3b8;
                      uVar6 = uStack_3b0;
                      puVar24[4] = puVar11[4];
                      uVar12 = *puVar11;
                      uVar3 = puVar11[1];
                      uVar4 = puVar11[3];
                      puVar24[2] = puVar11[2];
                      puVar24[3] = uVar4;
                      *puVar24 = uVar12;
                      puVar24[1] = uVar3;
                      puVar11[4] = local_398;
                      local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
                      uStack_3b0._4_4_ = (undefined4)((ulonglong)uStack_3b0 >> 0x20);
                      puVar11[2] = local_3a8;
                      puVar11[3] = uStack_3a0;
                      *(undefined4 *)puVar11 = (undefined4)local_3b8;
                      *(undefined4 *)((longlong)puVar11 + 4) = local_3b8._4_4_;
                      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_3b0;
                      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_3b0._4_4_;
                      local_3b8 = uVar5;
                      uStack_3b0 = uVar6;
                    }
                    goto LAB_14153a85d;
                  }
LAB_14153a908:
                  lVar26 = local_3e8;
                  lVar13 = local_3e0;
                  if (uVar32 != 0) {
                    iVar30 = (iVar17 - (iVar17 + -1 >> 0x1f)) + -1 >> 1;
                    iVar17 = iVar30;
joined_r0x00014153a92b:
                    do {
                      iVar33 = iVar30 * 2 + 1;
                      if (iVar33 < (int)uVar32) {
                        iVar34 = iVar30 * 2 + 2;
                        if ((iVar34 < (int)uVar32) &&
                           (*(int *)(puVar20 + (longlong)iVar33 * 5 + 3) <=
                            *(int *)(puVar20 + (longlong)iVar34 * 5 + 3))) {
                          iVar33 = iVar34;
                        }
                        if (*(int *)(puVar20 + (longlong)iVar30 * 5 + 3) <
                            *(int *)(puVar20 + (longlong)iVar33 * 5 + 3)) {
                          puVar11 = puVar20 + (longlong)iVar30 * 5;
                          puVar22 = puVar20 + (longlong)iVar33 * 5;
                          local_398 = puVar11[4];
                          local_3b8 = *puVar11;
                          uStack_3b0 = puVar11[1];
                          local_3a8 = puVar11[2];
                          uStack_3a0 = puVar11[3];
                          uVar5 = local_3b8;
                          uVar6 = uStack_3b0;
                          puVar11[4] = puVar22[4];
                          uVar12 = *puVar22;
                          uVar3 = puVar22[1];
                          uVar4 = puVar22[3];
                          puVar11[2] = puVar22[2];
                          puVar11[3] = uVar4;
                          *puVar11 = uVar12;
                          puVar11[1] = uVar3;
                          puVar22[4] = local_398;
                          local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
                          uStack_3b0._4_4_ = (undefined4)((ulonglong)uStack_3b0 >> 0x20);
                          puVar22[2] = local_3a8;
                          puVar22[3] = uStack_3a0;
                          *(undefined4 *)puVar22 = (undefined4)local_3b8;
                          *(undefined4 *)((longlong)puVar22 + 4) = local_3b8._4_4_;
                          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_3b0;
                          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_3b0._4_4_;
                          local_3b8 = uVar5;
                          uStack_3b0 = uVar6;
                          iVar30 = iVar33;
                          goto joined_r0x00014153a92b;
                        }
                      }
                      bVar35 = iVar17 != 0;
                      iVar30 = iVar17 + -1;
                      iVar17 = iVar30;
                    } while (bVar35);
                    if (1 < (int)uVar32) {
                      uVar19 = (ulonglong)uVar32 - 1;
                      local_398 = puVar20[4];
                      local_3b8 = *puVar20;
                      uStack_3b0 = puVar20[1];
                      local_3a8 = puVar20[2];
                      uStack_3a0 = puVar20[3];
                      uVar5 = local_3b8;
                      uVar6 = uStack_3b0;
                      puVar20[4] = puVar20[uVar19 * 5 + 4];
                      uVar12 = puVar20[uVar19 * 5];
                      uVar3 = (puVar20 + uVar19 * 5)[1];
                      uVar4 = (puVar20 + uVar19 * 5 + 2)[1];
                      puVar20[2] = puVar20[uVar19 * 5 + 2];
                      puVar20[3] = uVar4;
                      *puVar20 = uVar12;
                      puVar20[1] = uVar3;
                      puVar20[uVar19 * 5 + 4] = local_398;
                      local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
                      uStack_3b0._4_4_ = (undefined4)((ulonglong)uStack_3b0 >> 0x20);
                      puVar20[uVar19 * 5 + 2] = local_3a8;
                      (puVar20 + uVar19 * 5 + 2)[1] = uStack_3a0;
                      puVar11 = puVar20 + uVar19 * 5;
                      *(undefined4 *)puVar11 = (undefined4)local_3b8;
                      *(undefined4 *)((longlong)puVar11 + 4) = local_3b8._4_4_;
                      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_3b0;
                      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_3b0._4_4_;
                      local_3b8 = uVar5;
                      uStack_3b0 = uVar6;
                      if (uVar32 != 2) {
                        do {
                          iVar30 = 0;
                          iVar33 = 1;
                          iVar17 = 0;
                          do {
                            iVar30 = iVar30 + 2;
                            iVar34 = iVar33;
                            if (((longlong)iVar30 < (longlong)uVar19) &&
                               (*(int *)(puVar20 + (longlong)iVar33 * 5 + 3) <=
                                *(int *)(puVar20 + (longlong)iVar30 * 5 + 3))) {
                              iVar34 = iVar30;
                            }
                            if (*(int *)(puVar20 + (longlong)iVar34 * 5 + 3) <=
                                *(int *)(puVar20 + (longlong)iVar17 * 5 + 3)) break;
                            puVar11 = puVar20 + (longlong)iVar17 * 5;
                            puVar22 = puVar20 + (longlong)iVar34 * 5;
                            uVar12 = puVar11[4];
                            uVar3 = *puVar11;
                            uVar4 = puVar11[1];
                            uVar5 = puVar11[2];
                            uVar6 = puVar11[3];
                            puVar11[4] = puVar22[4];
                            uVar7 = *puVar22;
                            uVar8 = puVar22[1];
                            uVar9 = puVar22[3];
                            puVar11[2] = puVar22[2];
                            puVar11[3] = uVar9;
                            *puVar11 = uVar7;
                            puVar11[1] = uVar8;
                            puVar22[4] = uVar12;
                            puVar22[2] = uVar5;
                            puVar22[3] = uVar6;
                            *puVar22 = uVar3;
                            puVar22[1] = uVar4;
                            iVar30 = iVar34 * 2;
                            iVar33 = iVar34 * 2 + 1;
                            iVar17 = iVar34;
                          } while ((longlong)iVar33 < (longlong)uVar19);
                          uVar1 = uVar19 - 1;
                          local_398 = puVar20[4];
                          local_3b8 = *puVar20;
                          uStack_3b0 = puVar20[1];
                          local_3a8 = puVar20[2];
                          uStack_3a0 = puVar20[3];
                          uVar5 = local_3b8;
                          uVar6 = uStack_3b0;
                          puVar20[4] = puVar20[uVar1 * 5 + 4];
                          uVar12 = puVar20[uVar1 * 5];
                          uVar3 = (puVar20 + uVar1 * 5)[1];
                          uVar4 = (puVar20 + uVar1 * 5 + 2)[1];
                          puVar20[2] = puVar20[uVar1 * 5 + 2];
                          puVar20[3] = uVar4;
                          *puVar20 = uVar12;
                          puVar20[1] = uVar3;
                          puVar20[uVar1 * 5 + 4] = local_398;
                          local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
                          uStack_3b0._4_4_ = (undefined4)((ulonglong)uStack_3b0 >> 0x20);
                          puVar20[uVar1 * 5 + 2] = local_3a8;
                          (puVar20 + uVar1 * 5 + 2)[1] = uStack_3a0;
                          puVar11 = puVar20 + uVar1 * 5;
                          *(undefined4 *)puVar11 = (undefined4)local_3b8;
                          *(undefined4 *)((longlong)puVar11 + 4) = local_3b8._4_4_;
                          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_3b0;
                          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_3b0._4_4_;
                          bVar35 = 2 < uVar19;
                          uVar19 = uVar1;
                          local_3b8 = uVar5;
                          uStack_3b0 = uVar6;
                        } while (bVar35);
                      }
                    }
                  }
LAB_14153a85d:
                  ppuVar16 = ppuVar16 + -3;
                  puVar11 = local_3f0;
                } while (&local_348 <= ppuVar16);
              }
              lVar18 = lVar18 + 0x70;
            } while (lVar18 != lVar14);
          }
          FUN_14153b4fa(lVar13,lVar26,puVar11);
          puVar11 = puVar11 + 10;
        } while (puVar11 != local_3d8);
      }
      puVar2 = *(ushort **)(lVar26 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar26 + 0x78) & 0x3f));
      }
      FUN_145d32e8e(local_3c8,uStack_3c0 & 0xffffffff);
      if (local_3c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14153b425:
  puVar15 = puVar11;
  puVar29 = &local_3b8;
  for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
    *puVar29 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar29 = puVar29 + 1;
  }
  puVar15 = puVar24;
  puVar29 = puVar11;
  for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
    *puVar29 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar29 = puVar29 + 1;
  }
  puVar15 = &local_3b8;
  puVar29 = puVar24;
  for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
    *puVar29 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar29 = puVar29 + 1;
  }
  iVar30 = iVar30 + -1;
  puVar25 = puVar25 + -0x14;
  if ((longlong)puVar21 - (longlong)puVar23 < (longlong)puVar20 - (longlong)puVar27) {
    if (local_3f0 < puVar22) {
      *ppuVar16 = local_3f0;
      ppuVar16[1] = puVar22;
      *(int *)(ppuVar16 + 2) = iVar30;
      ppuVar16 = ppuVar16 + 3;
    }
    puVar27 = puVar11;
    if (puVar24 <= puVar11 + 10) goto LAB_14153a401;
  }
  else {
    if (puVar11 + 10 < puVar24) {
      *ppuVar16 = puVar11;
      ppuVar16[1] = puVar25;
      *(int *)(ppuVar16 + 2) = iVar30;
      ppuVar16 = ppuVar16 + 3;
    }
    puVar21 = puVar22;
    puVar11 = local_3f0;
    puVar25 = puVar22;
    if (puVar22 <= local_3f0) goto LAB_14153a401;
  }
  iVar17 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar27) >> 4) * -0x33333333;
  uVar19 = (ulonglong)(iVar17 + 1);
  puVar20 = puVar21;
  puVar22 = puVar25;
  puVar23 = puVar27;
  local_3f0 = puVar11;
  if (iVar30 == 0) goto LAB_14153b10a;
  goto LAB_14153a38f;
LAB_14153aeeb:
  puVar25 = puVar20;
  puVar28 = &local_3b8;
  for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
    *puVar28 = *puVar25;
    puVar25 = puVar25 + 1;
    puVar28 = puVar28 + 1;
  }
  puVar25 = puVar15;
  puVar28 = puVar20;
  for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
    *puVar28 = *puVar25;
    puVar25 = puVar25 + 1;
    puVar28 = puVar28 + 1;
  }
  puVar25 = &local_3b8;
  puVar28 = puVar15;
  for (lVar26 = 0xe; lVar26 != 0; lVar26 = lVar26 + -1) {
    *puVar28 = *puVar25;
    puVar25 = puVar25 + 1;
    puVar28 = puVar28 + 1;
  }
  iVar30 = iVar30 + -1;
  puVar27 = puVar27 + -0x1c;
  if ((longlong)puVar29 - (longlong)puVar24 < (longlong)puVar22 - (longlong)puVar21) {
    if (local_3f0 < puVar23) {
      *ppuVar16 = local_3f0;
      ppuVar16[1] = puVar23;
      *(int *)(ppuVar16 + 2) = iVar30;
      ppuVar16 = ppuVar16 + 3;
    }
    puVar22 = puVar29;
    lVar26 = local_3e8;
    puVar21 = puVar20;
    lVar13 = local_3e0;
    if (puVar15 <= puVar20 + 0xe) goto LAB_14153a549;
  }
  else {
    if (puVar20 + 0xe < puVar15) {
      *ppuVar16 = puVar20;
      ppuVar16[1] = puVar27;
      *(int *)(ppuVar16 + 2) = iVar30;
      ppuVar16 = ppuVar16 + 3;
    }
    puVar20 = local_3f0;
    puVar27 = puVar23;
    puVar22 = puVar23;
    lVar26 = local_3e8;
    lVar13 = local_3e0;
    if (puVar23 <= local_3f0) goto LAB_14153a549;
  }
  iVar17 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar21) >> 4) * -0x49249249;
  uVar32 = iVar17 + 1;
  puVar23 = puVar27;
  puVar24 = puVar21;
  lVar26 = local_3e8;
  lVar13 = local_3e0;
  local_3f0 = puVar20;
  if (iVar30 == 0) goto LAB_14153abe9;
  goto LAB_14153a4d8;
code_r0x00014153a6de:
  local_398 = puVar20[4];
  local_3b8 = *puVar20;
  uStack_3b0 = puVar20[1];
  local_3a8 = puVar20[2];
  uStack_3a0 = puVar20[3];
  uVar5 = local_3b8;
  uVar6 = uStack_3b0;
  puVar20[4] = puVar27[-1];
  uVar12 = *puVar24;
  uVar3 = puVar27[-4];
  uVar4 = puVar27[-2];
  puVar20[2] = puVar27[-3];
  puVar20[3] = uVar4;
  *puVar20 = uVar12;
  puVar20[1] = uVar3;
  puVar27[-1] = local_398;
  local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
  uStack_3b0._4_4_ = (undefined4)((ulonglong)uStack_3b0 >> 0x20);
  puVar27[-3] = local_3a8;
  puVar27[-2] = uStack_3a0;
  *(undefined4 *)puVar24 = (undefined4)local_3b8;
  *(undefined4 *)((longlong)puVar27 + -0x24) = local_3b8._4_4_;
  *(undefined4 *)(puVar27 + -4) = (undefined4)uStack_3b0;
  *(undefined4 *)((longlong)puVar27 + -0x1c) = uStack_3b0._4_4_;
  iVar30 = iVar30 + -1;
  local_3b8 = uVar5;
  uStack_3b0 = uVar6;
  if ((longlong)puVar29 - (longlong)puVar23 < (longlong)puVar22 - (longlong)puVar21) {
    if (puVar15 < puVar11) {
      *ppuVar16 = puVar15;
      ppuVar16[1] = puVar11;
      *(int *)(ppuVar16 + 2) = iVar30;
      ppuVar16 = ppuVar16 + 3;
    }
    puVar15 = puVar20;
    puVar21 = puVar20;
    puVar11 = puVar27 + -10;
    puVar22 = puVar29;
    lVar26 = local_3e8;
    lVar13 = local_3e0;
    if (puVar24 <= puVar20 + 5) goto LAB_14153a85d;
  }
  else {
    if (puVar20 + 5 < puVar24) {
      *ppuVar16 = puVar20;
      ppuVar16[1] = puVar27 + -10;
      *(int *)(ppuVar16 + 2) = iVar30;
      ppuVar16 = ppuVar16 + 3;
    }
    puVar22 = puVar11;
    lVar26 = local_3e8;
    lVar13 = local_3e0;
    if (puVar11 <= puVar15) goto LAB_14153a85d;
  }
  iVar17 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar21) >> 3) * -0x33333333;
  uVar32 = iVar17 + 1;
  puVar20 = puVar15;
  lVar26 = local_3e8;
  puVar23 = puVar21;
  lVar13 = local_3e0;
  if (iVar30 == 0) goto LAB_14153a908;
  goto LAB_14153a611;
}



// FUNCTION 14153b4fa FUN_14153b4fa body=3946 status=ok
// SIG undefined FUN_14153b4fa(void)

void FUN_14153b4fa(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  void *_Src;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_218 [40];
  longlong *local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8 [2];
  longlong *local_1c8;
  undefined4 local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  int local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined8 uStack_180;
  void *local_178;
  undefined8 uStack_170;
  uint local_168;
  longlong *local_160 [2];
  undefined2 local_150;
  undefined2 local_148;
  longlong local_138 [2];
  undefined **local_128;
  undefined1 local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e0 [2];
  longlong *local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  longlong local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1e0 = param_1;
  FUN_144a5dc74(&local_d0);
  FUN_140056680(local_c0,&DAT_149dfb77a);
  local_b0 = 0;
  uStack_a8 = 0;
  lVar14 = *(longlong *)(param_3 + 0x18);
  if (lVar14 == 0) {
    uVar7 = FUN_14036a63e();
    lVar14 = FUN_14477b664(uVar7);
    *(longlong *)(param_3 + 0x18) = lVar14;
  }
  plVar11 = (longlong *)(param_3 + 0x10);
  lVar8 = *(longlong *)(param_3 + 0x20);
  if (lVar8 == 0) {
    if ((lVar14 != 0) && (*plVar11 != 0)) {
      plVar2 = *(longlong **)(lVar14 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        *(undefined8 *)(param_3 + 0x20) = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar7,plVar11);
        *(longlong *)(param_3 + 0x20) = lVar8;
        if (lVar8 != 0) {
          lVar14 = *(longlong *)(param_3 + 0x18);
          goto LAB_14153b5f6;
        }
      }
    }
    FUN_1400b22c2(local_e0,"NO NAME SET");
    FUN_140233b1a(&local_198,local_e0);
    bVar3 = false;
  }
  else {
LAB_14153b5f6:
    if (lVar14 == 0) {
      uVar7 = FUN_14036a63e();
      lVar14 = FUN_14477b664(uVar7);
      *(longlong *)(param_3 + 0x18) = lVar14;
      lVar8 = *(longlong *)(param_3 + 0x20);
      if (((lVar8 == 0) && (lVar8 = 0, lVar14 != 0)) && (*plVar11 != 0)) {
        plVar2 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
          lVar8 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar8 = FUN_144aff482(uVar7,plVar11);
        }
        *(longlong *)(param_3 + 0x20) = lVar8;
      }
    }
    local_198 = *(longlong **)(lVar8 + 0x18);
    if (local_198 != (longlong *)0x0) {
      (**(code **)(*local_198 + 8))();
    }
    uStack_190 = CONCAT44(uStack_190._4_4_,*(undefined4 *)(lVar8 + 0x20));
    bVar3 = true;
  }
  plVar11 = local_d0;
  if (local_d0 != local_198) {
    local_d0 = local_198;
    if (local_198 != (longlong *)0x0) {
      (**(code **)(*local_198 + 8))();
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  local_c8 = (int)uStack_190;
  if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x10))();
  }
  if ((!bVar3) && (local_e0[0] != 0)) {
    FUN_1400020a8();
  }
  FUN_144a787a6(local_c0,param_3 + 0x30);
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)*(int *)(param_3 + 0x48) != 0) {
    lVar14 = *(longlong *)(param_3 + 0x40);
    lVar8 = (longlong)*(int *)(param_3 + 0x48) * 0x70 + lVar14;
    local_1e8 = (longlong *)(param_2 + 0xd8);
    local_1f0 = (longlong *)(param_2 + 0xc0);
    do {
      if (*(char *)(lVar14 + 0x68) == '\0') {
        local_128 = &PTR_FUN_14b8c2a60;
        local_120 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_118 = DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*DAT_14c844840 + 8))();
          }
        }
        local_110 = 0;
        FUN_140056680(&local_108,&DAT_149dfb77a);
        FUN_144a2b0a4(lVar14,&local_198);
        if (CONCAT44(uStack_104,local_108) != 0) {
          FUN_1400020a8();
        }
        local_108 = (undefined4)local_198;
        uStack_104 = local_198._4_4_;
        iStack_100 = (int)uStack_190;
        uStack_fc = uStack_190._4_4_;
        local_120 = *(undefined1 *)(lVar14 + 0x2c);
        lVar13 = *(longlong *)(lVar14 + 0x18);
        if (lVar13 == 0) {
          uVar7 = FUN_14036a63e();
          lVar13 = FUN_14477b664(uVar7);
          *(longlong *)(lVar14 + 0x18) = lVar13;
        }
        plVar11 = (longlong *)(lVar14 + 0x10);
        lVar9 = *(longlong *)(lVar14 + 0x20);
        if (lVar9 == 0) {
          if ((lVar13 != 0) && (*plVar11 != 0)) {
            plVar2 = *(longlong **)(lVar13 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
              *(undefined8 *)(lVar14 + 0x20) = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar9 = FUN_144aff482(uVar7,plVar11);
              *(longlong *)(lVar14 + 0x20) = lVar9;
              if (lVar9 != 0) {
                lVar13 = *(longlong *)(lVar14 + 0x18);
                goto LAB_14153b831;
              }
            }
          }
          FUN_1400b22c2(local_138,"NO NAME SET");
          FUN_140233b1a(&local_198,local_138);
          bVar3 = false;
        }
        else {
LAB_14153b831:
          if (lVar13 == 0) {
            uVar7 = FUN_14036a63e();
            lVar13 = FUN_14477b664(uVar7);
            *(longlong *)(lVar14 + 0x18) = lVar13;
            lVar9 = *(longlong *)(lVar14 + 0x20);
            if (((lVar9 == 0) && (lVar9 = 0, lVar13 != 0)) && (*plVar11 != 0)) {
              plVar2 = *(longlong **)(lVar13 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
                lVar9 = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar9 = FUN_144aff482(uVar7,plVar11);
              }
              *(longlong *)(lVar14 + 0x20) = lVar9;
            }
          }
          local_198 = *(longlong **)(lVar9 + 0x18);
          if (local_198 != (longlong *)0x0) {
            (**(code **)(*local_198 + 8))();
          }
          uStack_190 = CONCAT44(uStack_190._4_4_,*(undefined4 *)(lVar9 + 0x20));
          bVar3 = true;
        }
        plVar11 = local_118;
        if (local_118 != local_198) {
          local_118 = local_198;
          if (local_198 != (longlong *)0x0) {
            (**(code **)(*local_198 + 8))();
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        local_110 = (int)uStack_190;
        if (local_198 != (longlong *)0x0) {
          (**(code **)(*local_198 + 0x10))();
        }
        if ((!bVar3) && (local_138[0] != 0)) {
          FUN_1400020a8();
        }
        cVar5 = *(char *)(lVar14 + 0x2c);
        if (cVar5 == '\x01') {
          FUN_14153c466(&local_198);
          local_148 = 0;
          puVar12 = &DAT_149dfb77a;
          if (iStack_100 != 0) {
            puVar12 = (undefined2 *)CONCAT44(uStack_104,local_108);
          }
          FUN_1446f470e(&local_1b8,puVar12,1);
          local_188 = local_1b8;
          uVar7 = FUN_1447a1f4a(&local_118);
          FUN_144a787a6(&uStack_180,uVar7);
          local_198 = (longlong *)CONCAT44(*(float *)(lVar14 + 0x30),(undefined4)local_198);
          fVar15 = *(float *)(lVar14 + 0x34);
          uStack_170 = *(undefined8 *)(lVar14 + 0x34);
          fVar15 = (*(float *)(lVar14 + 0x30) - fVar15) / (*(float *)(lVar14 + 0x38) - fVar15);
          if (1.0 <= fVar15) {
            fVar15 = 1.0;
          }
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          uStack_190 = CONCAT44(*(undefined4 *)(lVar14 + 0x3c),fVar15 * 100.0);
          local_168 = *(uint *)(lVar14 + 0x40);
          iVar1 = *(int *)(param_2 + 0xe0);
          *(uint *)(param_2 + 0xe0) = iVar1 + 1U;
          if (*(uint *)(param_2 + 0xe4) < iVar1 + 1U) {
            FUN_145d334c6(local_1e8,iVar1);
          }
          lVar13 = *local_1e8;
          FUN_145d32fd4(lVar13 + (longlong)iVar1 * 0x58,&local_198);
          *(undefined2 *)(lVar13 + 0x50 + (longlong)iVar1 * 0x58) = local_148;
          plVar11 = uStack_180;
          if (local_160[0] != (longlong *)0x0) {
            (**(code **)(*local_160[0] + 0x10))();
            plVar11 = uStack_180;
          }
LAB_14153b9fb:
          if (plVar11 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (cVar5 == '\x02') {
            local_198 = (longlong *)0x0;
            uStack_190 = uStack_190 & 0xffffffffffff0000;
            puVar12 = &DAT_149dfb77a;
            FUN_140056680(&local_188,&DAT_149dfb77a);
            local_178 = (void *)0x0;
            uStack_170 = 0;
            local_168 = local_168 & 0xffff0000;
            if (iStack_100 != 0) {
              puVar12 = (undefined2 *)CONCAT44(uStack_104,local_108);
            }
            FUN_1446f470e(&local_1b8,puVar12,1);
            local_198 = local_1b8;
            bVar3 = *(float *)(lVar14 + 0x30) != 0.0;
            uStack_190._0_2_ = CONCAT11(bVar3,bVar3);
            FUN_1406fa324(&local_178,lVar14 + 0x58);
            iVar1 = *(int *)(param_2 + 200);
            *(uint *)(param_2 + 200) = iVar1 + 1U;
            if (*(uint *)(param_2 + 0xcc) < iVar1 + 1U) {
              FUN_145d33436(local_1f0,iVar1);
            }
            FUN_145d330fa((longlong)iVar1 * 0x38 + *local_1f0,&local_198);
            uVar4 = uStack_f0;
            if ((char)uStack_190 == '\0') {
              lVar13 = (longlong)(int)(uint)uStack_170;
              if (lVar13 != 0) {
                iVar1 = (int)uStack_f0;
                lVar9 = (longlong)(int)uStack_f0;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_f0 + (uint)uStack_170);
                if ((uint)(uStack_f0._4_4_ - iVar1) < (uint)uStack_170) {
                  FUN_1446f84a2(&local_f8,uVar4 & 0xffffffff);
                }
                memcpy((void *)(lVar9 * 8 + local_f8),local_178,lVar13 << 3);
              }
            }
            plVar11 = local_188;
            if (local_178 != (void *)0x0) {
              FUN_1400020a8();
              plVar11 = local_188;
            }
            goto LAB_14153b9fb;
          }
          if (cVar5 == '\x03') {
            local_188 = (longlong *)0x0;
            uStack_180 = (longlong *)0x0;
            local_198 = (longlong *)0x0;
            uStack_190 = 0;
            puVar12 = &DAT_149dfb77a;
            FUN_140056680(&local_178,&DAT_149dfb77a);
            local_168 = 0x10001;
            FUN_140056680(local_160,&DAT_149dfb77a);
            local_150 = 0;
            if (iStack_100 != 0) {
              puVar12 = (undefined2 *)CONCAT44(uStack_104,local_108);
            }
            FUN_1446f470e(&local_1b8,puVar12,1);
            local_198 = local_1b8;
            uStack_190 = CONCAT44((int)*(float *)(lVar14 + 0x30),(int)*(float *)(lVar14 + 0x30));
            if ((longlong)*(int *)(lVar14 + 0x50) != 0) {
              plVar11 = *(longlong **)(lVar14 + 0x48);
              lVar13 = (longlong)*(int *)(lVar14 + 0x50) * 0x28;
              do {
                local_1b8 = (longlong *)0x0;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c844850) &&
                   (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                  DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
                  DAT_14c844840[1] = 0;
                  *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
                  DAT_14c844840[2] = -1;
                  DAT_14c844840[3] = 0;
                  DAT_14c844840[4] = 0;
                  DAT_14c844840[5] = 0;
                  if (DAT_14c844840 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                    UNLOCK();
                  }
                  DAT_14c844848 = 0;
                  atexit(FUN_142760bef);
                  _Init_thread_footer(&DAT_14c844850);
                }
                local_1b0 = DAT_14c844840;
                if (DAT_14c844840 != (longlong *)0x0) {
                  (**(code **)(*DAT_14c844840 + 8))();
                }
                local_1a8 = DAT_14c844848;
                local_1a0 = 0;
                local_1b8 = *(longlong **)((longlong)plVar11 + 0x1c);
                lVar9 = plVar11[1];
                if (lVar9 == 0) {
                  uVar7 = FUN_14036a63e();
                  lVar9 = FUN_14477b664(uVar7);
                  plVar11[1] = lVar9;
                }
                lVar10 = plVar11[2];
                if (lVar10 == 0) {
                  if ((lVar9 != 0) && (*plVar11 != 0)) {
                    plVar2 = *(longlong **)(lVar9 + 0xb8);
                    if ((plVar2 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
                      plVar11[2] = 0;
                    }
                    else {
                      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
                      lVar10 = FUN_144aff482(uVar7,plVar11);
                      plVar11[2] = lVar10;
                      if (lVar10 != 0) {
                        lVar9 = plVar11[1];
                        goto LAB_14153bdef;
                      }
                    }
                  }
                  FUN_1400b22c2(local_1d8,"NO NAME SET");
                  FUN_140233b1a(&local_1c8,local_1d8);
                  bVar3 = false;
                }
                else {
LAB_14153bdef:
                  if (lVar9 == 0) {
                    uVar7 = FUN_14036a63e();
                    lVar9 = FUN_14477b664(uVar7);
                    plVar11[1] = lVar9;
                    lVar10 = plVar11[2];
                    if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*plVar11 != 0)) {
                      plVar2 = *(longlong **)(lVar9 + 0xb8);
                      if ((plVar2 == (longlong *)0x0) ||
                         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
                        lVar10 = 0;
                      }
                      else {
                        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
                        lVar10 = FUN_144aff482(uVar7,plVar11);
                      }
                      plVar11[2] = lVar10;
                    }
                  }
                  local_1c8 = *(longlong **)(lVar10 + 0x18);
                  if (local_1c8 != (longlong *)0x0) {
                    (**(code **)(*local_1c8 + 8))();
                  }
                  local_1c0 = *(undefined4 *)(lVar10 + 0x20);
                  bVar3 = true;
                }
                local_a0 = local_1c8;
                if (local_1c8 != (longlong *)0x0) {
                  (**(code **)(*local_1c8 + 8))();
                }
                local_98 = local_1c0;
                if ((local_1a0 == 0) ||
                   (cVar5 = FUN_144722c14(&local_1b0,&local_a0,0), cVar5 == '\0')) {
                  FUN_140008f88(&local_1b0,&local_a0);
                  local_1a0 = local_1a0 + 1;
                }
                if (local_a0 != (longlong *)0x0) {
                  (**(code **)(*local_a0 + 0x10))();
                }
                if (local_1c8 != (longlong *)0x0) {
                  (**(code **)(*local_1c8 + 0x10))();
                }
                if ((!bVar3) && (local_1d8[0] != 0)) {
                  FUN_1400020a8();
                }
                plVar2 = uStack_180;
                lVar9 = (longlong)(int)uStack_180;
                uVar6 = (int)uStack_180 + 1;
                uStack_180 = (longlong *)CONCAT44(uStack_180._4_4_,uVar6);
                if (uStack_180._4_4_ < uVar6) {
                  FUN_14148d176(&local_188,(ulonglong)plVar2 & 0xffffffff);
                }
                local_188[lVar9 * 4] = (longlong)local_1b8;
                FUN_140dd90de(local_188 + lVar9 * 4 + 1,&local_1b0);
                if (local_1b0 != (longlong *)0x0) {
                  (**(code **)(*local_1b0 + 0x10))();
                }
                plVar11 = plVar11 + 5;
                lVar13 = lVar13 + -0x28;
              } while (lVar13 != 0);
            }
            iVar1 = *(int *)(param_2 + 0xf8);
            *(uint *)(param_2 + 0xf8) = iVar1 + 1U;
            if (*(uint *)(param_2 + 0xfc) < iVar1 + 1U) {
              FUN_145d336e4((longlong *)(param_2 + 0xf0),iVar1);
            }
            lVar13 = *(longlong *)(param_2 + 0xf0);
            FUN_145d332e4(lVar13 + (longlong)iVar1 * 0x50,&local_198);
            *(undefined2 *)(lVar13 + 0x48 + (longlong)iVar1 * 0x50) = local_150;
            FUN_14110ce80(&local_198);
          }
        }
        uVar4 = uStack_a8;
        lVar13 = (longlong)(int)uStack_a8;
        uVar6 = (int)uStack_a8 + 1;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar6);
        if (uStack_a8._4_4_ < uVar6) {
          FUN_145d33066(&local_b0,uVar4 & 0xffffffff);
        }
        lVar9 = local_b0;
        lVar13 = lVar13 * 0x30;
        *(undefined ***)(local_b0 + lVar13) = &PTR_FUN_14b8c2a60;
        *(undefined1 *)(local_b0 + 8 + lVar13) = local_120;
        *(longlong **)(local_b0 + 0x10 + lVar13) = local_118;
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 8))();
        }
        lVar9 = lVar9 + lVar13;
        *(undefined4 *)(lVar9 + 0x18) = local_110;
        *(undefined8 *)(lVar9 + 0x20) = 0;
        lVar13 = (longlong)iStack_100;
        _Src = (void *)CONCAT44(uStack_104,local_108);
        *(int *)(lVar9 + 0x28) = iStack_100;
        if (lVar13 == 0) {
          *(undefined4 *)(lVar9 + 0x2c) = 0;
        }
        else {
          FUN_1446dd670((undefined8 *)(lVar9 + 0x20),iStack_100,0);
          memcpy(*(void **)(lVar9 + 0x20),_Src,lVar13 * 2);
        }
        local_128 = &PTR_FUN_14b8c2a60;
        if (CONCAT44(uStack_104,local_108) != 0) {
          FUN_1400020a8();
        }
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 0x10))();
        }
      }
      lVar13 = local_f8;
      lVar14 = lVar14 + 0x70;
    } while (lVar14 != lVar8);
    lVar14 = (longlong)(int)uStack_f0;
    if (lVar14 != 0) {
      lVar8 = 0;
      do {
        FUN_14153c660(local_1e0,*(undefined8 *)(lVar13 + lVar8),1);
        lVar8 = lVar8 + 8;
      } while (lVar14 * 8 != lVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xb8);
  *(uint *)(param_2 + 0xb8) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0xbc) < iVar1 + 1U) {
    FUN_148ed67ce((longlong *)(param_2 + 0xb0),iVar1);
  }
  FUN_145d331b8((longlong)iVar1 * 0x30 + *(longlong *)(param_2 + 0xb0),&local_d0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1458074e4(&local_d0);
  if ((local_90 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14153c466 FUN_14153c466 body=272 status=ok
// SIG undefined FUN_14153c466(void)

undefined2 * FUN_14153c466(undefined2 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0x101;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1400b22c2(param_1 + 0xc,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0x14) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3c23d70a;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x1c) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x20) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 14153c576 FUN_14153c576 body=166 status=ok
// SIG undefined FUN_14153c576(void)

void FUN_14153c576(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  undefined8 *puVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    piVar4 = (int *)(param_2 + 0x28);
    do {
      puVar3[-4] = &PTR_FUN_14b8c2a60;
      *(char *)(puVar3 + -3) = (char)piVar4[-8];
      plVar2 = *(longlong **)(piVar4 + -6);
      puVar3[-2] = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      *(int *)(puVar3 + -1) = piVar4[-4];
      *puVar3 = 0;
      iVar1 = *piVar4;
      _Src = *(void **)(piVar4 + -2);
      *(int *)(puVar3 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar1,0);
        memcpy((void *)*puVar3,_Src,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 6;
      piVar4 = piVar4 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14153c61c FUN_14153c61c body=68 status=ok
// SIG undefined FUN_14153c61c(void)

void FUN_14153c61c(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_140dd90de(param_1,param_2);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14153c660 FUN_14153c660 body=672 status=ok
// SIG undefined FUN_14153c660(void)

void FUN_14153c660(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  size_t sVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  wchar_t *pwVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_2e8 [40];
  longlong local_2c0;
  undefined8 local_2b8 [2];
  undefined8 local_2a8;
  undefined **local_298;
  longlong local_290;
  longlong local_288;
  undefined4 local_280;
  undefined8 local_278 [2];
  undefined8 local_268;
  undefined **local_258;
  longlong local_250;
  longlong local_248;
  undefined4 local_240;
  undefined8 local_238 [2];
  undefined8 local_228;
  undefined **local_218;
  longlong local_210;
  longlong local_208;
  undefined4 local_200;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  char local_1d8;
  undefined1 local_1d0 [256];
  undefined1 local_d0 [128];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  lVar1 = *(longlong *)(param_1 + 0x288);
  local_2c0 = param_2;
  if (lVar1 != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x30);
    if (cVar2 != '\0') {
      uVar3 = FUN_14479d2ce(param_1 + 0x30);
      local_1f0 = local_1d0;
      local_1d8 = '\0';
      local_1e0 = local_d0;
      pwVar8 = L"Event_EnableElement";
      if (param_3 != '\0') {
        pwVar8 = L"Event_DisableElement";
      }
      local_1e8 = local_1f0;
      pwVar8 = (wchar_t *)FUN_140c7f682(param_1,pwVar8,&local_1f0);
      local_50 = 0;
      if (pwVar8 == (wchar_t *)0x0) {
        local_48 = 0;
        local_40 = 0;
      }
      else {
        sVar4 = wcslen(pwVar8);
        FUN_1446fe5a4(local_d0,pwVar8,sVar4 & 0xffffffff,1);
      }
      FUN_145d33556(uVar3,local_48,&local_2c0);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (local_1d8 == '\x01') {
        FUN_1400020a8(local_1f0);
      }
    }
    if (0 < (longlong)*(int *)(lVar1 + 200)) {
      plVar10 = *(longlong **)(lVar1 + 0xc0);
      lVar5 = 0;
      do {
        if (*plVar10 == local_2c0) {
          *(char *)(plVar10 + 6) = param_3;
          puVar11 = local_238;
          local_228 = 0;
          local_218 = &PTR_LAB_14b9d2fb0;
          local_200 = (undefined4)lVar5;
          pcVar7 = FUN_144303f34;
          local_210 = param_1;
          local_208 = lVar1;
          goto LAB_14153c82d;
        }
        lVar5 = lVar5 + 1;
        plVar10 = plVar10 + 7;
      } while (*(int *)(lVar1 + 200) != lVar5);
    }
    if (0 < (longlong)*(int *)(lVar1 + 0xe0)) {
      pcVar9 = (char *)(*(longlong *)(lVar1 + 0xd8) + 0x50);
      lVar5 = 0;
      do {
        if (*(longlong *)(pcVar9 + -0x40) == local_2c0) {
          *pcVar9 = param_3;
          puVar11 = local_278;
          local_268 = 0;
          local_258 = &PTR_LAB_14b9d2fd0;
          local_240 = (undefined4)lVar5;
          pcVar7 = FUN_1443040d4;
          local_250 = param_1;
          local_248 = lVar1;
          goto LAB_14153c82d;
        }
        lVar5 = lVar5 + 1;
        pcVar9 = pcVar9 + 0x58;
      } while (*(int *)(lVar1 + 0xe0) != lVar5);
    }
    if (0 < (int)*(uint *)(lVar1 + 0xf8)) {
      plVar10 = *(longlong **)(lVar1 + 0xf0);
      uVar6 = 0;
      do {
        if (*plVar10 == local_2c0) {
          *(char *)(plVar10 + 9) = param_3;
          puVar11 = local_2b8;
          local_2a8 = 0;
          local_298 = &PTR_LAB_14b9d2ff0;
          local_280 = (undefined4)uVar6;
          pcVar7 = FUN_144304274;
          local_290 = param_1;
          local_288 = lVar1;
LAB_14153c82d:
          *puVar11 = pcVar7;
          FUN_1403911de(param_1);
          break;
        }
        uVar6 = uVar6 + 1;
        plVar10 = plVar10 + 10;
      } while (*(uint *)(lVar1 + 0xf8) != uVar6);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14153c902 FUN_14153c902 body=59 status=ok
// SIG undefined FUN_14153c902(void)

void FUN_14153c902(undefined8 param_1,undefined4 param_2)

{
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
  }
                    /* WARNING: Could not recover jumptable at 0x00014153c92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c872d28 + 0x50))(DAT_14c872d28,param_1,param_2);
  return;
}



// FUNCTION 14153c93e FUN_14153c93e body=517 status=ok
// SIG undefined FUN_14153c93e(void)

void FUN_14153c93e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x70);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x70) = plVar2;
  }
  local_40 = (void *)0x0;
  uStack_38._0_4_ = *(int *)(param_3 + 1);
  lVar5 = (longlong)(int)uStack_38;
  _Src = (void *)*param_3;
  if (lVar5 == 0) {
    local_44 = 0;
    local_48 = 0;
    local_50 = (void *)0x0;
  }
  else {
    FUN_1446dd670(&local_40,(int)uStack_38,0);
    memcpy(local_40,_Src,lVar5 * 2);
    local_50 = local_40;
    local_48 = (int)uStack_38;
    local_44 = uStack_38._4_4_;
  }
  local_40 = (void *)0x0;
  uStack_38 = 0;
  cVar3 = FUN_140c44378(*param_2);
  if (cVar3 == '\0') {
    local_68 = 0;
    FUN_1413f0866(*param_2,&local_50,&local_68,0);
    FUN_1444bd3c6(&local_68,&local_50,*param_2);
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_64,local_68);
    if ((undefined4 *)(param_1 + 0x50) == &local_68) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x58) = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 0x60) = local_58;
      *(undefined4 *)(param_1 + 100) = local_54;
    }
  }
  else {
    FUN_1444bd3c6(&local_68,&local_50,*param_2);
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_64,local_68);
    if ((undefined4 *)(param_1 + 0x50) == &local_68) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x58) = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 0x60) = local_58;
      *(undefined4 *)(param_1 + 100) = local_54;
    }
    FUN_1444c4f2e(param_1);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153cb44 FUN_14153cb44 body=365 status=ok
// SIG undefined FUN_14153cb44(void)

void FUN_14153cb44(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_14153cc3f;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
LAB_14153cc3f:
  local_f8 = param_1 + 6;
  FUN_1459b5fb0(param_2,local_58,param_1 + 2,param_1 + 4);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14153ccb2 FUN_14153ccb2 body=265 status=ok
// SIG undefined FUN_14153ccb2(void)

undefined * FUN_14153ccb2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca35190) {
    FUN_144b3d300(&DAT_14ca35190);
    if (DAT_14ca35190 == -1) {
      FUN_145d347d0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x42;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca35110,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f140e1);
      _Init_thread_footer(&DAT_14ca35190);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca35110;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153cdbc FUN_14153cdbc body=39 status=ok
// SIG undefined FUN_14153cdbc(void)

undefined8 FUN_14153cdbc(longlong *param_1)

{
  longlong lVar1;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x2b8))(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xe0);
  }
  return 0;
}



// FUNCTION 14153cde4 FUN_14153cde4 body=94 status=ok
// SIG undefined FUN_14153cde4(void)

undefined4 FUN_14153cde4(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_1446f8bcc(*(undefined8 *)(param_1 + 0x38),*(int *)(param_1 + 0x30) >> 1);
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_140002184(*(undefined8 *)(param_1 + 0x38),
                    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2));
      iVar2 = iVar2 + 2;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (((iVar2 == 3) || (iVar2 == 5)) || (iVar2 == 0)) {
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),*(int *)(param_1 + 0x18) == 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14153ce42 FUN_14153ce42 body=834 status=ok
// SIG undefined FUN_14153ce42(void)

void FUN_14153ce42(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 **ppuVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  int local_f8;
  undefined2 *local_f0;
  undefined4 local_e8;
  undefined2 *local_e0;
  undefined4 local_d8;
  undefined2 *local_d0;
  undefined4 local_c8;
  undefined2 *local_c0;
  undefined4 local_b8;
  undefined2 *local_b0;
  undefined4 local_a8;
  undefined2 *local_a0;
  undefined4 local_98;
  undefined2 *local_90;
  undefined4 local_88;
  longlong local_80;
  uint local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulonglong *local_60;
  undefined1 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 != 0) {
    lVar5 = *param_2;
    do {
      uVar9 = 0;
      if (0 < (int)uVar2) {
        uVar9 = uVar2 - 1;
        if (0x7fe < uVar9) {
          uVar9 = 0x7ff;
        }
        uVar9 = uVar9 + 1;
        uVar3 = 0;
        do {
          uVar1 = *(ushort *)(lVar5 + uVar3 * 2);
          if (((((ulonglong)uVar1 < 0x23) && ((0x400003700U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0))
              || (uVar1 == 0x5c)) || (uVar1 < 0x20)) {
            uVar9 = (uint)uVar3;
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar9 != uVar3);
      }
      uVar8 = uVar2;
      if ((int)uVar9 < (int)uVar2) {
        uVar8 = uVar9;
      }
      if (0 < (int)uVar8) {
        local_80 = lVar5;
        local_78 = uVar8;
        FUN_145d3640c(*(undefined8 *)(param_1 + 8),&local_80);
        uVar2 = *(uint *)(param_2 + 1);
        lVar5 = *param_2;
      }
      uVar8 = uVar2 - uVar9;
      if ((int)uVar2 <= (int)(uVar2 - uVar9)) {
        uVar8 = uVar2;
      }
      lVar7 = 0;
      uVar3 = 0;
      if (0 < (int)uVar8) {
        uVar3 = (ulonglong)uVar8;
      }
      uVar9 = (uint)uVar3;
      lVar5 = (lVar5 + (longlong)(int)uVar2 * 2) - (ulonglong)(uVar9 * 2);
      *param_2 = lVar5;
      *(uint *)(param_2 + 1) = uVar9;
      if (0 < (int)uVar8) {
        lVar7 = 0;
        do {
          uVar9 = (uint)uVar3;
          lVar5 = *param_2;
          uVar1 = *(ushort *)(lVar5 + lVar7 * 2);
          switch(uVar1) {
          case 8:
            local_c0 = (undefined2 *)&DAT_149e38588;
            local_b8 = 2;
            uVar4 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_c0;
            break;
          case 9:
            local_b0 = (undefined2 *)&DAT_149e01ffe;
            local_a8 = 2;
            uVar4 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_b0;
            break;
          case 10:
            local_a0 = (undefined2 *)&DAT_149e01ff8;
            local_98 = 2;
            uVar4 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_a0;
            break;
          case 0xb:
switchD_14153cfd1_caseD_b:
            if (uVar1 < 0x20) {
              local_58 = 0;
              local_70 = local_50;
              local_60 = &local_48;
              local_68 = local_70;
              FUN_14089c9ba(&local_70,"\\u%04x");
              local_f8 = (int)local_68 - (int)local_70;
              local_100 = local_70;
              FUN_14683c90a(*(undefined8 *)(param_1 + 8),&local_100);
              FUN_144aa0d5a(&local_70);
              goto LAB_14153cfd8;
            }
            goto LAB_14153cf3f;
          case 0xc:
            local_d0 = (undefined2 *)&DAT_149e3858e;
            local_c8 = 2;
            uVar4 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_d0;
            break;
          case 0xd:
            local_e0 = (undefined2 *)&DAT_149e02004;
            local_d8 = 2;
            uVar4 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_e0;
            break;
          default:
            if (uVar1 == 0x22) {
              local_f0 = (undefined2 *)&DAT_149e0200a;
              local_e8 = 2;
              uVar4 = *(undefined8 *)(param_1 + 8);
              ppuVar6 = &local_f0;
            }
            else {
              if (uVar1 != 0x5c) goto switchD_14153cfd1_caseD_b;
              local_90 = &DAT_149e01ff2;
              local_88 = 2;
              uVar4 = *(undefined8 *)(param_1 + 8);
              ppuVar6 = &local_90;
            }
          }
          FUN_145d3640c(uVar4,ppuVar6);
LAB_14153cfd8:
          lVar7 = lVar7 + 1;
          uVar9 = *(uint *)(param_2 + 1);
          uVar3 = (ulonglong)(int)uVar9;
        } while (lVar7 < (longlong)uVar3);
        lVar5 = *param_2;
      }
LAB_14153cf3f:
      uVar8 = uVar9 - (int)lVar7;
      if ((int)uVar9 <= (int)uVar8) {
        uVar8 = uVar9;
      }
      uVar2 = 0;
      if (0 < (int)uVar8) {
        uVar2 = uVar8;
      }
      lVar5 = (lVar5 + (longlong)(int)uVar9 * 2) - (ulonglong)(uVar2 * 2);
      *param_2 = lVar5;
      *(uint *)(param_2 + 1) = uVar2;
    } while (0 < (int)uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14153d186 FUN_14153d186 body=255 status=ok
// SIG undefined FUN_14153d186(void)

void FUN_14153d186(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[0x57] == param_3) {
    *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
    lVar4 = param_1[0x56];
    if (lVar4 != 0) {
      plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
      (**(code **)(*plVar3 + 0x6a0))(plVar3,lVar4);
      FUN_140f065f6(lVar4,param_1,param_3);
      if ((char)param_1[-0xe9] == '\x03') {
        FUN_14654a8c6(param_1 + 0x40);
        if (param_1[6] != 0) {
          FUN_145ac621c(param_1 + 4);
        }
        lVar4 = param_1[0xb];
        if ((longlong)(int)lVar4 != 0) {
          lVar1 = param_1[10];
          lVar5 = 0;
          do {
            (**(code **)(**(longlong **)(lVar1 + lVar5) + 0x20))
                      (*(longlong **)(lVar1 + lVar5),param_1[0x56]);
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)lVar4 * 8 != lVar5);
        }
        cVar2 = FUN_1403ae288(param_1 + 0x52);
        if (cVar2 != '\0') {
          lVar4 = FUN_14008e0ae(param_1 + 0x52);
          FUN_140457ffc(lVar4 + 0x168,param_1 + -0x118);
        }
        FUN_1411cb32c(param_1 + -0x118,0);
      }
      param_1[0x56] = 0;
    }
  }
  return;
}



// FUNCTION 14153d286 FUN_14153d286 body=333 status=ok
// SIG undefined FUN_14153d286(void)

void FUN_14153d286(longlong param_1,longlong *param_2,byte param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_78 [47];
  char local_49;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_2[0x14];
  iVar5 = *(int *)(param_1 + 0x150) + 5;
  if (param_3 < 3) {
    iVar5 = *(int *)(param_1 + 0x150);
  }
  FUN_140056680(local_48,L"PostPacketHandler");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (param_3 != 0) {
    uVar3 = rand();
    iVar6 = (int)(((float)(uVar3 & 0x7fff) / 32767.0) * 9.0);
    iVar4 = 8;
    if (iVar6 < 8) {
      iVar4 = iVar6;
    }
    iVar6 = 0x10 - iVar4;
    if (((2 < param_3) || (((int)lVar2 - iVar5) + iVar6 * 8 != 0x183)) ||
       (iVar6 = 0xf - iVar4, 0 < iVar6)) {
      do {
        iVar5 = rand();
        local_49 = ((char)(uint)((ulonglong)((longlong)iVar5 * 0x80808081) >> 0x27) -
                   (char)((longlong)iVar5 * 0x80808081 >> 0x3f)) + (char)iVar5;
        puVar1 = (ulonglong *)param_2[1];
        if (puVar1[1] < *puVar1 + 1) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_49,1);
        }
        else {
          *puVar1 = *puVar1 + 1;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_1400748c2(param_2,1);
  *(char *)(param_1 + 0x15c) = *(char *)(param_1 + 0x15c) + '\x01';
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153d3d4 FUN_14153d3d4 body=261 status=ok
// SIG undefined FUN_14153d3d4(void)

void FUN_14153d3d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b383560;
  FUN_140e4557c(param_1 + 0x84,param_1[0x84]);
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_14150f58b(param_1[0x75],*(undefined4 *)(param_1 + 0x76));
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_145d2b974(param_1 + 0x68);
  FUN_1406d02ae(param_1);
  return;
}



// FUNCTION 14153d4da FUN_14153d4da body=289 status=ok
// SIG undefined FUN_14153d4da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14153d4da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c6fa0) {
    FUN_144b3d300(&DAT_14c9c6fa0);
    if (DAT_14c9c6fa0 == -1) {
      FUN_14153d5fc();
      FUN_145d36f7a();
      FUN_140db5666(&DAT_14c9c6ef8,0,&DAT_14c9c6e90,L"FShadowObjectCullPS",
                    L"/Engine/Private/DistanceFieldShadowing.usf",L"ShadowObjectCullPS",3,8,
                    FUN_14714f4d0,FUN_14714f470,&LAB_14714f420,&LAB_14714f41c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c8af8);
      _DAT_14c9c6ef8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be0109);
      _Init_thread_footer(&DAT_14c9c6fa0);
    }
  }
  return &DAT_14c9c6ef8;
}



// FUNCTION 14153d5fc FUN_14153d5fc body=258 status=ok
// SIG undefined FUN_14153d5fc(void)

void FUN_14153d5fc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c8b78) {
    FUN_144b3d300(&DAT_14c9c8b78);
    if (DAT_14c9c8b78 == -1) {
      FUN_145d370c4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0xe6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8af8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7736);
      _Init_thread_footer(&DAT_14c9c8b78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153d700 FUN_14153d700 body=308 status=ok
// SIG undefined FUN_14153d700(void)

longlong * FUN_14153d700(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = param_3;
  local_48 = param_4;
  FUN_141270afc(param_2,&local_68,0);
  lVar3 = local_68;
  lVar7 = (longlong)(int)uStack_60;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar8);
      if ((plVar2 != (longlong *)0x0) && (cVar4 = FUN_143893b9e(plVar2,&local_50), cVar4 != '\0')) {
        lVar5 = (**(code **)(*plVar2 + 0x5d8))(plVar2);
        if (lVar5 == 0) {
LAB_14153d7b8:
          lVar5 = 0;
        }
        else {
          lVar6 = FUN_140d12354();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_14153d7b8;
        }
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1418927d0(param_1,iVar1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar5;
      }
      lVar8 = lVar8 + 8;
    } while (lVar7 * 8 != lVar8);
  }
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153d836 FUN_14153d836 body=90 status=ok
// SIG undefined FUN_14153d836(void)

void FUN_14153d836(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 14153d890 FUN_14153d890 body=78 status=ok
// SIG undefined FUN_14153d890(void)

void FUN_14153d890(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1447a1747(*param_1,(int)param_1[1]);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x00014153d8c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14153d8de FUN_14153d8de body=130 status=ok
// SIG undefined FUN_14153d8de(void)

undefined4
FUN_14153d8de(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_14611499c(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153d962 FUN_14153d962 body=34 status=ok
// SIG undefined FUN_14153d962(void)

undefined8 FUN_14153d962(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    uVar2 = FUN_1447210f0(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14153d984 FUN_14153d984 body=85 status=ok
// SIG undefined FUN_14153d984(void)

void FUN_14153d984(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_1401900c0();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_145d39d42(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14153d9da FUN_14153d9da body=258 status=ok
// SIG undefined FUN_14153d9da(void)

void FUN_14153d9da(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca67a00) {
    FUN_144b3d300(&DAT_14ca67a00);
    if (DAT_14ca67a00 == -1) {
      FUN_145d3a5d4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x4d2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67980,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e547b);
      _Init_thread_footer(&DAT_14ca67a00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153dade FUN_14153dade body=287 status=ok
// SIG undefined FUN_14153dade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14153dade(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2eda0) {
    FUN_144b3d300(&DAT_14cb2eda0);
    if (DAT_14cb2eda0 == -1) {
      uVar1 = FUN_14153dbfe();
      FUN_145d3b41c();
      FUN_140db5666(&DAT_14cb2ecf8,0,&DAT_14cb2ec90,L"FNiagaraRibbonSortPhase1CS",
                    L"/Plugin/FX/Niagara/Private/Ribbons/NiagaraRibbonSortParticles.usf",
                    L"InitialSortList",5,8,FUN_14804d4ce,FUN_14804d474,&LAB_1438fa160,&LAB_14804d470
                    ,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2ecf8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fa163);
      _Init_thread_footer(&DAT_14cb2eda0);
    }
  }
  return &DAT_14cb2ecf8;
}



// FUNCTION 14153dbfe FUN_14153dbfe body=265 status=ok
// SIG undefined FUN_14153dbfe(void)

undefined * FUN_14153dbfe(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb33b38) {
    FUN_144b3d300(&DAT_14cb33b38);
    if (DAT_14cb33b38 == -1) {
      FUN_145d3b566(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRibbonOrderSortParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x55;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33ab8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb724);
      _Init_thread_footer(&DAT_14cb33b38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb33ab8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153dd08 FUN_14153dd08 body=226 status=ok
// SIG undefined FUN_14153dd08(void)

longlong * FUN_14153dd08(longlong *param_1)

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
  pcVar13 = FUN_146461bd0;
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



// FUNCTION 14153ddec FUN_14153ddec body=425 status=ok
// SIG undefined FUN_14153ddec(void)

ulonglong FUN_14153ddec(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  puVar1 = (uint *)(param_1 + 0x10);
  DVar5 = GetCurrentThreadId();
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 1) == 0) {
    LOCK();
    uVar2 = *puVar1;
    bVar12 = uVar7 == uVar2;
    if (bVar12) {
      *puVar1 = uVar7 | 1;
      uVar2 = uVar7;
    }
    uVar7 = uVar2;
    UNLOCK();
    if (bVar12) {
      *(DWORD *)(param_1 + 0x14) = DVar5;
      goto LAB_14153de2a;
    }
  }
  if (*(DWORD *)(param_1 + 0x14) == DVar5) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar7);
  }
LAB_14153de2a:
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 != 0) {
    iVar10 = 0;
    do {
      lVar11 = (longlong)iVar10;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar11 * 8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x68) == 1)) {
        iVar6 = (**(code **)(*DAT_14ca83900 + 0x1d0))(DAT_14ca83900,*(undefined8 *)(lVar4 + 8));
        if (*(longlong *)(lVar4 + 0x10) != *(longlong *)(lVar4 + 8)) {
          iVar8 = (**(code **)(*DAT_14ca83900 + 0x1d0))();
          iVar6 = iVar6 + iVar8;
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - (iVar6 + 0x3ffU >> 10);
        lVar4 = *(longlong *)(param_1 + 0x28);
        iVar6 = *(int *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x40) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x44) < iVar6 + 1U) {
          FUN_145d3c018((longlong *)(param_1 + 0x38),iVar6);
        }
        lVar4 = *(longlong *)(lVar4 + lVar11 * 8);
        *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x68) = *(int *)(lVar4 + 0x68) + 1;
          UNLOCK();
        }
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar11 * 8) != 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar11 * 8) = 0;
          FUN_144734574();
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) = 0;
      }
      iVar10 = iVar10 + 1;
    } while (iVar3 != iVar10);
  }
  uVar7 = *puVar1;
  uVar9 = (ulonglong)uVar7;
  if (uVar7 < 4) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (uVar7 < 2) {
      LOCK();
      uVar2 = *puVar1;
      if (uVar7 == uVar2) {
        *puVar1 = 0;
      }
      else {
        uVar9 = (ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar7 == uVar2) {
        return uVar9;
      }
    }
    uVar9 = FUN_140d366d2(puVar1);
    return uVar9;
  }
  LOCK();
  *puVar1 = *puVar1 - 4;
  UNLOCK();
  return uVar9;
}



// FUNCTION 14153dfa0 FUN_14153dfa0 body=60 status=ok
// SIG undefined FUN_14153dfa0(void)

undefined8 * FUN_14153dfa0(void)

{
  char cVar1;
  
  if (DAT_14c77e9c4 != 2) {
    cVar1 = FUN_142501800(&DAT_14c77e9c4);
    if (cVar1 != '\0') {
      FUN_1424b71a0();
      FUN_1425019c0(&DAT_14c77e9c4);
    }
  }
  return &DAT_14c77e850;
}



// FUNCTION 14153dfe0 FUN_14153dfe0 body=66 status=ok
// SIG undefined FUN_14153dfe0(void)

void FUN_14153dfe0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_2 + 0x58))(param_2);
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xf0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(longlong *)(param_1 + 0xf0) = lVar2;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14153e030 FUN_14153e030 body=130 status=ok
// SIG undefined FUN_14153e030(void)

undefined8 *
FUN_14153e030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1424cb6e0();
  *param_1 = icu_64::GregorianCalendar::vftable;
  param_1[0x4d] = 0xc2a63a0d36a80000;
  *(undefined4 *)(param_1 + 0x4e) = 0x231519;
  param_1[0x4f] = 0xc2a63a0d36a80000;
  *(undefined4 *)(param_1 + 0x50) = 0x62e;
  *(undefined2 *)(param_1 + 0x51) = 1;
  uVar1 = thunk_FUN_1424d9690();
  FUN_1424ccf20(param_1,uVar1,param_2,param_4,param_1,uVar2);
  return param_1;
}



// FUNCTION 14153e0c0 Unwind@14153e0c0 body=34 status=ok
// SIG undefined Unwind@14153e0c0(void)

void Unwind_14153e0c0(undefined8 param_1,longlong param_2)

{
  FUN_1424cbfc0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14153e0e2 FUN_14153e0e2 body=402 status=ok
// SIG undefined FUN_14153e0e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14153e0e2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b70f9c0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  FUN_14403d232(param_1 + 0xa3);
  *(undefined4 *)(param_1 + 0xa2) = 0;
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9d804(param_1 + 0x99);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  FUN_145c09eea(param_1 + 0x8f);
  FUN_1465d1795(param_1[0x8a],*(undefined4 *)(param_1 + 0x8b));
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014153e266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14153e274 FUN_14153e274 body=1561 status=ok
// SIG undefined FUN_14153e274(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14153e274(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar23;
  undefined1 auVar22 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  longlong lVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_158 [40];
  undefined **local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [12];
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined2 uStack_104;
  undefined2 uStack_102;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined1 local_d4 [16];
  undefined1 local_c4 [16];
  undefined4 local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uStack_102 = 0;
  uStack_dc = 0;
  local_130 = &PTR_FUN_14b4d9d98;
  local_128 = ZEXT816(0x407f400000000000) << 0x40;
  local_118 = ZEXT812(0x412000003f800000) << 0x20;
  uStack_10c = 0x14;
  local_108 = 0x41a00000;
  uStack_104 = 0x101;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0xffffffff;
  local_d8 = 0xffffffff;
  local_d4 = (undefined1  [16])0x0;
  local_c4 = (undefined1  [16])0x0;
  local_b4 = 0;
  FUN_145d3e79e(param_1 + 0x28);
  FUN_14597c824(&local_130);
  if (DAT_14cb96828 == (undefined1 (*) [16])0x0) {
    DAT_14cb96828 = (undefined1 (*) [16])FUN_14001cc68(0x30);
    *DAT_14cb96828 = (undefined1  [16])0x0;
    DAT_14cb96828[1] = (undefined1  [16])0x0;
    DAT_14cb96828[2] = (undefined1  [16])0x0;
  }
  iVar2 = *(int *)(DAT_14cb96828[1] + 8);
  if ((longlong)iVar2 != 0) {
    lVar34 = *(longlong *)DAT_14cb96828[1];
    lVar20 = 0;
    do {
      pbVar1 = (byte *)(lVar34 + 8 + lVar20);
      *pbVar1 = *pbVar1 & 0xf9;
      lVar20 = lVar20 + 0x80;
    } while ((longlong)iVar2 * 0x80 != lVar20);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_145d3e75a(param_1 + 0xd0);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_14480f766(&DAT_14cb10980);
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_14480f766(&DAT_14cb10a20);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  auVar16 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    uVar17 = (longlong)*(int *)(param_1 + 0x148) * 0x50 - 0x50;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar17;
    uVar21 = SUB164(auVar24 * ZEXT816(0xcccccccccccccccd),8);
    uVar23 = (undefined4)(uVar17 / 0x140000000);
    auVar25._0_8_ = CONCAT44(uVar23,uVar21);
    auVar25._8_4_ = uVar21;
    auVar25._12_4_ = uVar23;
    auVar22._0_8_ = auVar25._0_8_ >> 6;
    auVar22._8_8_ = auVar25._8_8_ >> 6;
    puVar18 = (undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x4d0);
    uVar19 = 0;
    auVar24 = pmovsxbq(in_XMM1,0xf0e);
    auVar25 = pmovsxbq(in_XMM2,0xd0c);
    auVar26 = pmovsxbq(in_XMM3,0xb0a);
    auVar27 = pmovsxbq(in_XMM4,0x908);
    auVar28 = pmovsxbq(in_XMM5,0x706);
    auVar29 = pmovsxbq((undefined1  [16])0x0,0x504);
    auVar30 = pmovsxbq(unaff_XMM7,0x302);
    auVar31 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar32._8_4_ = (int)uVar19;
      auVar32._0_8_ = uVar19;
      auVar32._12_4_ = (int)(uVar19 >> 0x20);
      auVar35 = auVar22 | auVar16;
      auVar36 = (auVar32 | auVar31) ^ auVar16;
      lVar34 = auVar35._0_8_;
      auVar37._0_8_ = -(ulonglong)(lVar34 < auVar36._0_8_);
      lVar20 = auVar35._8_8_;
      auVar37._8_8_ = -(ulonglong)(lVar20 < auVar36._8_8_);
      auVar44 = pshuflw(unaff_XMM14,auVar37,0xe8);
      auVar36._8_4_ = 0xffffffff;
      auVar36._0_8_ = 0xffffffffffffffff;
      auVar36._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar44 ^ auVar36,auVar44 ^ auVar36);
      if ((auVar36._0_4_ & 1) != 0) {
        puVar18[-0x4b0] = 0;
      }
      auVar37 = packssdw(auVar37,auVar37);
      auVar44._8_4_ = 0xffffffff;
      auVar44._0_8_ = 0xffffffffffffffff;
      auVar44._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar44,auVar37 ^ auVar44);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[1] & 1) != 0) {
        puVar18[-0x460] = 0;
      }
      auVar37 = (auVar32 | auVar30) ^ auVar16;
      auVar38._0_8_ = -(ulonglong)(lVar34 < auVar37._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = packssdw(auVar36,auVar38);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar3,auVar36 ^ auVar3);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[2] & 1) != 0) {
        puVar18[-0x410] = 0;
      }
      auVar37 = pshufhw(auVar38,auVar38,0x84);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar4,auVar37 ^ auVar4);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[3] & 1) != 0) {
        puVar18[-0x3c0] = 0;
      }
      auVar37 = (auVar32 | auVar29) ^ auVar16;
      auVar39._0_8_ = -(ulonglong)(lVar34 < auVar37._0_8_);
      auVar39._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = pshuflw(auVar36,auVar39,0xe8);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar5,auVar36 ^ auVar5);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[4] & 1) != 0) {
        puVar18[-0x370] = 0;
      }
      auVar37 = packssdw(auVar39,auVar39);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar6,auVar37 ^ auVar6);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[5] & 1) != 0) {
        puVar18[-800] = 0;
      }
      auVar37 = (auVar32 | auVar28) ^ auVar16;
      auVar40._0_8_ = -(ulonglong)(lVar34 < auVar37._0_8_);
      auVar40._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = packssdw(auVar36,auVar40);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar7,auVar36 ^ auVar7);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[6] & 1) != 0) {
        puVar18[-0x2d0] = 0;
      }
      auVar37 = pshufhw(auVar40,auVar40,0x84);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar8,auVar37 ^ auVar8);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[7] & 1) != 0) {
        puVar18[-0x280] = 0;
      }
      auVar37 = (auVar32 | auVar27) ^ auVar16;
      auVar41._0_8_ = -(ulonglong)(lVar34 < auVar37._0_8_);
      auVar41._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = pshuflw(auVar36,auVar41,0xe8);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar9,auVar36 ^ auVar9);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[8] & 1) != 0) {
        puVar18[-0x230] = 0;
      }
      auVar37 = packssdw(auVar41,auVar41);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar10,auVar37 ^ auVar10);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[9] & 1) != 0) {
        puVar18[-0x1e0] = 0;
      }
      auVar37 = (auVar32 | auVar26) ^ auVar16;
      auVar42._0_8_ = -(ulonglong)(lVar34 < auVar37._0_8_);
      auVar42._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = packssdw(auVar36,auVar42);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar11,auVar36 ^ auVar11);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[10] & 1) != 0) {
        puVar18[-400] = 0;
      }
      auVar37 = pshufhw(auVar42,auVar42,0x84);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar12,auVar37 ^ auVar12);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[0xb] & 1) != 0) {
        puVar18[-0x140] = 0;
      }
      auVar37 = (auVar32 | auVar25) ^ auVar16;
      auVar43._0_8_ = -(ulonglong)(lVar34 < auVar37._0_8_);
      auVar43._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = pshuflw(auVar36,auVar43,0xe8);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar13,auVar36 ^ auVar13);
      unaff_XMM14 = packsswb(auVar36,auVar36);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar18[-0xf0] = 0;
      }
      auVar36 = packssdw(auVar43,auVar43);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar14,auVar36 ^ auVar14);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xd] & 1) != 0) {
        puVar18[-0xa0] = 0;
      }
      auVar36 = (auVar32 | auVar24) ^ auVar16;
      auVar33._0_8_ = -(ulonglong)(lVar34 < auVar36._0_8_);
      auVar33._8_8_ = -(ulonglong)(lVar20 < auVar36._8_8_);
      auVar36 = packssdw(auVar35,auVar33);
      auVar35._8_4_ = 0xffffffff;
      auVar35._0_8_ = 0xffffffffffffffff;
      auVar35._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar35,auVar36 ^ auVar35);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xe] & 1) != 0) {
        puVar18[-0x50] = 0;
      }
      auVar36 = pshufhw(auVar33,auVar33,0x84);
      auVar15._8_4_ = 0xffffffff;
      auVar15._0_8_ = 0xffffffffffffffff;
      auVar15._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar15,auVar36 ^ auVar15);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xf] & 1) != 0) {
        *puVar18 = 0;
      }
      uVar19 = uVar19 + 0x10;
      puVar18 = puVar18 + 0x500;
    } while ((uVar17 / 0x50 + 0x10 & 0xfffffffffffffff0) != uVar19);
  }
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153e88e FUN_14153e88e body=478 status=ok
// SIG undefined FUN_14153e88e(void)

void FUN_14153e88e(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  uint local_90 [6];
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  int local_34;
  undefined1 local_30 [8];
  undefined1 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pbVar1 = (byte *)*param_2;
  uVar2 = 1;
  if ((pbVar1 == (byte *)0x0) || ((~*pbVar1 & 3) != 0)) goto LAB_14153e99b;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  FUN_140cb327c(&local_68,*(longlong *)(pbVar1 + 8) + 0x18);
  FUN_1446dcdd4(local_90,&DAT_14cb973d8);
  if ((int)uStack_60 != local_34) {
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = local_30;
    }
    for (iVar3 = *(int *)(puVar4 + (ulonglong)(local_20 - 1U & local_90[0]) * 4); iVar3 != -1;
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + local_68 + 0x38)) {
      if (*(uint *)(local_68 + (longlong)iVar3 * 0x40) == local_90[0]) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_1446dcdd4(local_90,&DAT_14cb973d8);
        if ((int)uStack_60 == local_34) goto LAB_14153ea32;
        puVar4 = local_30;
        if (local_28 != (undefined1 *)0x0) {
          puVar4 = local_28;
        }
        iVar3 = *(int *)(puVar4 + (ulonglong)(local_20 - 1U & local_90[0]) * 4);
        if (iVar3 == -1) goto LAB_14153ea32;
        goto LAB_14153ea19;
      }
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar2 = 1;
  goto LAB_14153e974;
  while (iVar3 = *(int *)(lVar5 + 0x38), iVar3 != -1) {
LAB_14153ea19:
    lVar5 = local_68 + (longlong)iVar3 * 0x40;
    if (*(uint *)(local_68 + (longlong)iVar3 * 0x40) == local_90[0]) goto LAB_14153ea34;
  }
LAB_14153ea32:
  lVar5 = 0;
LAB_14153ea34:
  uVar2 = FUN_140e1edd4(lVar5 + 0x28,0);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_14153e974:
  local_20 = 0;
  if (local_28 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140cb2c32(&local_68);
LAB_14153e99b:
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153ea6e FUN_14153ea6e body=543 status=ok
// SIG undefined FUN_14153ea6e(void)

void FUN_14153ea6e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar15 = (int)local_68;
  }
  plVar6 = local_60;
  iVar8 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar13 = *param_1;
      if (*(longlong *)(lVar13 + 0x10 + (longlong)iVar8 * 0x28) != 0) {
        FUN_1400020a8();
      }
      plVar9 = *(longlong **)(lVar13 + (longlong)iVar8 * 0x28 + 8);
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
      uVar14 = uVar14 & ~(uint)uVar11;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar13 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar13 == lVar10) goto LAB_14153ebbd;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar14 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_14153ebbd:
  iVar15 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140549ad6(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar14 = iVar15 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar14) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153ec90 FUN_14153ec90 body=289 status=ok
// SIG undefined FUN_14153ec90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14153ec90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca27618) {
    FUN_144b3d300(&DAT_14ca27618);
    if (DAT_14ca27618 == -1) {
      FUN_14153edb2();
      FUN_145d44016();
      FUN_140db5666(&DAT_14ca27570,0,&DAT_14ca27508,L"FEyeAdaptationCS",
                    L"/Engine/Private/PostProcessEyeAdaptation.usf",L"EyeAdaptationCS",5,2,
                    FUN_14728bbe0,FUN_14728bb80,&LAB_14728bb68,&LAB_14728bb64,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca2a100);
      _DAT_14ca27570 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ebc268);
      _Init_thread_footer(&DAT_14ca27618);
    }
  }
  return &DAT_14ca27570;
}



// FUNCTION 14153edb2 FUN_14153edb2 body=258 status=ok
// SIG undefined FUN_14153edb2(void)

void FUN_14153edb2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2a180) {
    FUN_144b3d300(&DAT_14ca2a180);
    if (DAT_14ca2a180 == -1) {
      FUN_145d44160(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x325;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2a100,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edce77);
      _Init_thread_footer(&DAT_14ca2a180);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153eeb6 FUN_14153eeb6 body=258 status=ok
// SIG undefined FUN_14153eeb6(void)

void FUN_14153eeb6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43d40) {
    FUN_144b3d300(&DAT_14ca43d40);
    if (DAT_14ca43d40 == -1) {
      FUN_145d44958(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCubeShaderParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x73;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43cc0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb1edc);
      _Init_thread_footer(&DAT_14ca43d40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153efba FUN_14153efba body=1057 status=ok
// SIG undefined FUN_14153efba(void)

void FUN_14153efba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  PSRWLOCK pRVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  longlong *local_90;
  uint *local_88;
  PSRWLOCK local_80;
  code *local_78;
  longlong *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    FUN_1449027d0(param_1 + -0x38,&local_78);
    lVar4 = *(longlong *)(local_78 + 0x420);
    pRVar16 = (PSRWLOCK)(lVar4 + 0x78);
    AcquireSRWLockExclusive(pRVar16);
    *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x70) + 1;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    lVar5 = FUN_1400d7050(param_1 + -8);
    if (lVar5 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_78 = FUN_141030f22;
        local_a0 = FUN_14081d0ea;
        local_a8 = &LAB_1459f2e4c;
        local_b8 = &LAB_148c39de3;
        local_c0 = &LAB_1457a9eb2;
        local_c8 = &DAT_149e063b2;
        local_d0 = 0;
        local_d8 = 0x10000004;
        local_e0 = 0x10;
        local_e8 = 0x3de0;
        local_b0 = &local_78;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      uVar14 = (ulonglong)*(int *)(DAT_14cbadd90 + 0x38);
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + uVar14 * 8) ==
          DAT_14cbadd90 + 0x30)) {
        iVar13 = *(int *)(param_1 + 0x38);
        if (iVar13 == 0) {
          uVar17 = 1;
          uVar20 = 0;
          iVar6 = 0;
          iVar19 = 0;
        }
        else {
          puVar10 = *(uint **)(param_1 + 0x30);
          if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
            puVar10 = (uint *)(param_1 + 0x20);
          }
          uVar12 = *puVar10;
          if (uVar12 == 0) {
            iVar6 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar6 = iVar13 + -1;
            }
            uVar20 = 0;
            uVar14 = (ulonglong)(uint)(iVar6 >> 5);
            if (iVar6 >> 5 < 1) {
              uVar14 = uVar20;
            }
            iVar19 = 0;
            do {
              if (uVar14 == uVar20) goto LAB_14153f25c;
              iVar19 = iVar19 + 0x20;
              uVar12 = puVar10[uVar20 + 1];
              uVar20 = uVar20 + 1;
            } while (uVar12 == 0);
          }
          else {
            uVar20 = 0;
            iVar19 = 0;
          }
          uVar17 = (ulonglong)(-uVar12 & uVar12);
          uVar14 = uVar17 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar12 = (uint)lVar18 ^ 0x3f;
          uVar14 = (ulonglong)uVar12;
          iVar6 = (iVar19 - uVar12) + 0x3e;
          if (iVar13 <= iVar6) {
            iVar6 = iVar13;
          }
        }
        if (iVar6 < iVar13) {
          local_90 = (longlong *)(lVar4 + 0x10);
          uVar12 = 0xffffffff;
          local_88 = (uint *)(param_1 + 0x20);
          local_80 = pRVar16;
          do {
            lVar15 = (longlong)iVar6 * 0x10;
            uVar21 = (**(code **)(*(longlong *)(lVar5 + 0xda8) + 0x60))
                               ((longlong *)(lVar5 + 0xda8),
                                CONCAT71((int7)(uVar14 >> 8),
                                         *(undefined1 *)(*(longlong *)(param_1 + 0x10) + lVar15)));
            plVar1 = local_90;
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4 + lVar15) = uVar21;
            lVar18 = *(longlong *)(param_1 + 0x10);
            uVar21 = *(undefined4 *)(lVar18 + 4 + lVar15);
            bVar3 = *(byte *)(lVar18 + lVar15);
            if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
              lVar11 = lVar4 + 0x48;
              if (*(longlong *)(lVar4 + 0x50) != 0) {
                lVar11 = *(longlong *)(lVar4 + 0x50);
              }
              iVar13 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar4 + 0x58) - 1U & (uint)bVar3) * 4)
              ;
              if (iVar13 != -1) {
                do {
                  lVar11 = *local_90 + (longlong)iVar13 * 0x10;
                  if (*(byte *)(*local_90 + (longlong)iVar13 * 0x10) == bVar3) {
                    if (lVar11 != 0) goto LAB_14153f1bb;
                    break;
                  }
                  iVar13 = *(int *)(lVar11 + 8);
                } while (iVar13 != -1);
              }
            }
            local_78 = (code *)(lVar18 + lVar15);
            FUN_145d44f5a(local_90,&local_64,bVar3,&local_78);
            lVar11 = *plVar1 + (longlong)local_64 * 0x10;
LAB_14153f1bb:
            *(undefined4 *)(lVar11 + 4) = uVar21;
            uVar12 = uVar12 & ~(uint)uVar17;
            puVar10 = *(uint **)(param_1 + 0x30);
            if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
              puVar10 = local_88;
            }
            iVar13 = *(int *)(param_1 + 0x38);
            iVar6 = (int)uVar20;
            lVar18 = (longlong)iVar6;
            uVar7 = puVar10[lVar18] & uVar12;
            pRVar16 = local_80;
            if (uVar7 == 0) {
              iVar8 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar8 = iVar13 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar9 = iVar8;
              if (iVar8 < iVar6) {
                iVar9 = iVar6;
              }
              if (iVar8 <= iVar6) break;
              lVar15 = 0;
              while( true ) {
                iVar19 = iVar19 + 0x20;
                uVar7 = puVar10[lVar18 + lVar15 + 1];
                if (uVar7 != 0) break;
                lVar15 = lVar15 + 1;
                if (iVar9 - lVar18 == lVar15) goto LAB_14153f25c;
              }
              uVar20 = (ulonglong)(iVar6 + (int)lVar15 + 1);
              uVar12 = 0xffffffff;
            }
            uVar17 = (ulonglong)(-uVar7 & uVar7);
            uVar14 = uVar17 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            uVar7 = (uint)lVar18 ^ 0x3f;
            uVar14 = (ulonglong)uVar7;
            iVar6 = (iVar19 - uVar7) + 0x3e;
          } while (iVar6 < iVar13);
        }
      }
    }
LAB_14153f25c:
    ReleaseSRWLockExclusive(pRVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153f3dc FUN_14153f3dc body=781 status=ok
// SIG undefined FUN_14153f3dc(void)

/* WARNING: Removing unreachable block (ram,0x00014153f609) */

void FUN_14153f3dc(longlong *param_1,undefined8 param_2,byte param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1;
  if (*(byte *)param_1[1] <= param_3) {
    uVar10 = 0;
    plVar4 = (longlong *)
             FUN_140d6a126(DAT_14c872ce0,L"Internationalization.AssetGroupCultures",0,param_2);
    if (plVar4 != (longlong *)0x0) {
      iVar2 = (int)plVar4[5];
      if (iVar2 == 0) {
        uVar12 = 1;
        iVar11 = 0;
        iVar5 = 0;
      }
      else {
        puVar14 = (uint *)plVar4[4];
        if ((uint *)plVar4[4] == (uint *)0x0) {
          puVar14 = (uint *)(plVar4 + 2);
        }
        uVar13 = *puVar14;
        if (uVar13 == 0) {
          iVar11 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar11 = iVar2 + -1;
          }
          uVar10 = 0;
          uVar12 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar12 = uVar10;
          }
          iVar11 = 0;
          do {
            if (uVar12 == uVar10) goto LAB_14153f4b7;
            iVar11 = iVar11 + 0x20;
            uVar13 = puVar14[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar13 == 0);
        }
        else {
          uVar10 = 0;
          iVar11 = 0;
        }
        uVar12 = (ulonglong)(-uVar13 & uVar13);
        uVar1 = uVar12 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar5 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != iVar2) {
        uVar13 = 0xffffffff;
        iVar17 = iVar2;
        do {
          plVar9 = (longlong *)((longlong)iVar5 * 0x40 + *plVar4);
          plVar3 = (longlong *)*local_70;
          if ((longlong)(int)plVar3[1] == 0) {
            lVar18 = *plVar9;
          }
          else {
            plVar15 = (longlong *)*plVar3;
            lVar18 = *plVar9;
            lVar16 = (longlong)(int)plVar3[1] * 0x18;
            do {
              if (*plVar15 == lVar18) {
                if (plVar15 != (longlong *)0x0) goto LAB_14153f624;
                break;
              }
              plVar15 = plVar15 + 3;
              lVar16 = lVar16 + -0x18;
            } while (lVar16 != 0);
          }
          uVar1 = (ulonglong)((int)plVar9[5] - 2U < 0x7fffffff);
          local_58 = (void *)0x0;
          uVar6 = *(uint *)(plVar9 + uVar1 * 2 + 3);
          _Src = (void *)plVar9[uVar1 * 2 + 2];
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          local_74 = iVar11;
          local_68 = uVar10;
          local_60 = lVar18;
          if ((longlong)(int)uVar6 == 0) {
            local_50 = (ulonglong)uVar6;
          }
          else {
            FUN_1446dd670(&local_58,uVar6,0);
            memcpy(local_58,_Src,(longlong)(int)uVar6 * 2);
          }
          iVar11 = (int)plVar3[1];
          lVar18 = (longlong)iVar11;
          *(uint *)(plVar3 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)plVar3 + 0xc) < iVar11 + 1U) {
            FUN_140af6a9a(plVar3,iVar11);
          }
          lVar16 = *plVar3;
          *(longlong *)(lVar16 + lVar18 * 0x18) = local_60;
          *(undefined8 *)(lVar16 + 8 + lVar18 * 0x18) = 0;
          *(void **)(lVar16 + 8 + lVar18 * 0x18) = local_58;
          *(undefined4 *)(lVar16 + 0x10 + lVar18 * 0x18) = (undefined4)local_50;
          *(undefined4 *)(lVar16 + 0x14 + lVar18 * 0x18) = local_50._4_4_;
          local_50 = 0;
          local_58 = (void *)0x0;
          iVar17 = (int)plVar4[5];
          uVar10 = local_68;
          iVar11 = local_74;
LAB_14153f624:
          uVar13 = uVar13 & ~(uint)uVar12;
          puVar14 = (uint *)plVar4[4];
          if ((uint *)plVar4[4] == (uint *)0x0) {
            puVar14 = (uint *)(plVar4 + 2);
          }
          iVar5 = (int)uVar10;
          lVar18 = (longlong)iVar5;
          uVar6 = puVar14[lVar18] & uVar13;
          if (uVar6 == 0) {
            iVar7 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar7 = iVar17 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar5) {
              iVar8 = iVar5;
            }
            if (iVar5 < iVar7) {
              lVar16 = 0;
              do {
                uVar6 = puVar14[lVar18 + lVar16 + 1];
                if (uVar6 != 0) {
                  uVar10 = (ulonglong)(iVar5 + (int)lVar16 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_14153f697;
                }
                iVar11 = iVar11 + 0x20;
                lVar16 = lVar16 + 1;
              } while (iVar8 - lVar18 != lVar16);
              uVar13 = 0xffffffff;
              iVar5 = iVar8;
            }
            uVar10 = (ulonglong)(iVar5 + 1);
            iVar5 = iVar17;
          }
          else {
LAB_14153f697:
            uVar12 = (ulonglong)(-uVar6 & uVar6);
            uVar1 = uVar12 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar5 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar5) {
              iVar5 = iVar17;
            }
          }
        } while (iVar5 != iVar2);
      }
    }
  }
LAB_14153f4b7:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14153f6ea FUN_14153f6ea body=67 status=ok
// SIG undefined FUN_14153f6ea(void)

void FUN_14153f6ea(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + -1;
  UNLOCK();
  FUN_14625b310(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014153f726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  return;
}



// FUNCTION 14153f72e FUN_14153f72e body=90 status=ok
// SIG undefined FUN_14153f72e(void)

void FUN_14153f72e(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + -1;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FUN_146ff1020(param_1 + 0x30);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  FUN_140457ffc(&DAT_14c867390,param_1);
  return;
}



// FUNCTION 14153f788 FUN_14153f788 body=165 status=ok
// SIG undefined FUN_14153f788(void)

void FUN_14153f788(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  PSRWLOCK SRWLock;
  longlong *plVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xe78);
  EnterCriticalSection(lpCriticalSection);
  SRWLock = (PSRWLOCK)(param_1 + 0xe68);
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + 1;
  UNLOCK();
  AcquireSRWLockExclusive(SRWLock);
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + -1;
  UNLOCK();
  plVar1 = *(longlong **)(param_1 + 0x9a0);
  *(undefined8 *)(param_1 + 0x9a0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    ReleaseSRWLockExclusive(SRWLock);
    LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Could not recover jumptable at 0x00014153f80e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  ReleaseSRWLockExclusive(SRWLock);
                    /* WARNING: Could not recover jumptable at 0x00014153f826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 14153f82e FUN_14153f82e body=113 status=ok
// SIG undefined FUN_14153f82e(void)

void FUN_14153f82e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be8d870;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14153f8a0 FUN_14153f8a0 body=226 status=ok
// SIG undefined FUN_14153f8a0(void)

longlong * FUN_14153f8a0(longlong *param_1)

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
  pcVar13 = FUN_1462cf53c;
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



// FUNCTION 14153f984 FUN_14153f984 body=582 status=ok
// SIG undefined FUN_14153f984(void)

undefined8 *
FUN_14153f984(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined4 *local_58;
  longlong **local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)*param_3;
  if ((plVar5 != (longlong *)0x0) && (*(int *)(param_1 + 0x2c) != 0)) {
    uVar3 = *(uint *)(param_1 + 0x28);
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(param_1 + 0x2c))) &&
          ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (lVar6 = *plVar7, lVar6 != 0)) {
        if (param_5 == 0) {
          param_5 = DAT_14cb80940 + 1 + (uint)(DAT_14cb80940 == -1);
          DAT_14cb80940 = param_5;
        }
        (**(code **)(*plVar5 + 0x78))(plVar5,&local_68);
        (**(code **)(*local_68 + 0x50))(local_68,param_3,lVar6,param_5);
        plVar5 = local_68;
        *(int *)(local_68 + 0x2d) = (int)param_4[1];
        local_68[0x2c] = *param_4;
        puVar2 = (undefined8 *)((longlong)local_68 + 0x164);
        if ((*(ulonglong *)((longlong)local_68 + 0x164) == DAT_14c948034) &&
           ((int)local_68[0x2c] != DAT_14c948030)) {
          FUN_14011791e(&local_58,(int)local_68[0x2c],
                        *(ulonglong *)((longlong)local_68 + 0x164) >> 0x20);
          *puVar2 = local_58;
        }
        FUN_1457722a2(plVar5,puVar2);
        local_6c = *(undefined4 *)((longlong)local_68 + 0x184);
        local_58 = &local_6c;
        local_50 = &local_68;
        FUN_145b172f0(param_1 + 0x30,local_44);
        iVar4 = *(int *)(param_1 + 0x98);
        *(uint *)(param_1 + 0x98) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x9c) < iVar4 + 1U) {
          FUN_1457ecd54((longlong *)(param_1 + 0x90),iVar4);
        }
        lVar6 = *(longlong *)(param_1 + 0x90);
        *(longlong **)(lVar6 + (longlong)iVar4 * 0x10) = local_68;
        *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = local_60;
        if (local_60 == (longlong *)0x0) {
          *param_2 = local_68;
          param_2[1] = 0;
        }
        else {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
          *param_2 = local_68;
          param_2[1] = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_60 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar1 = (int *)((longlong)local_60 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_60 + 0x10))(local_60);
                }
              }
            }
          }
        }
        if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 14153fbcb FUN_14153fbcb body=4933 status=ok
// SIG undefined FUN_14153fbcb(void)

longlong * FUN_14153fbcb(longlong *param_1,ulonglong *param_2)

{
  char cVar1;
  longlong lVar2;
  uint3 uVar3;
  undefined2 *_Src;
  void *pvVar4;
  uint uVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong **pplVar15;
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  code *local_1a0;
  undefined4 local_198;
  code *local_190;
  undefined1 *local_188;
  undefined2 **local_180;
  longlong *local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  longlong *local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  void *local_d0;
  int local_c8;
  longlong *local_c0;
  longlong *local_b8;
  void *local_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  void *local_90;
  uint local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  bVar6 = *(byte *)((longlong)param_1 + 0x23);
  if (bVar6 != 0) {
    local_170 = (longlong *)0x0;
    plVar7 = (longlong *)*param_2;
    if (((((ulonglong)plVar7 & 1) == 0) || (((ulonglong)plVar7 & 0xfffffffffffffffe) == 0)) ||
       (DAT_14c950c29 == 0)) {
LAB_14153fdb2:
      uStack_a0 = 0;
      local_a8 = (undefined2 *)0x0;
      pplVar15 = &local_170;
      uVar14 = 0;
      plVar13 = plVar7;
      do {
        cVar1 = *(char *)((longlong)param_1 + uVar14 + 0x21);
        if (cVar1 == '\x01') {
          if ((int)uStack_a0 < 2) {
            FUN_1400021e4(param_1 + 3,&local_90);
          }
          else {
            FUN_1449b8608(&local_90,&local_a8,L"_InnerArray");
          }
          plVar7 = (longlong *)FUN_14001cc68(0x80,0);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
            FUN_1446ddbd2();
            local_1a0 = FUN_140b31576;
            local_1a8 = &DAT_14c951a38;
            local_1b0 = 0;
            local_1b8 = (wchar_t *)0x208001;
            FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
            atexit(FUN_14280cbf7);
            _Init_thread_footer(&DAT_14c951ae0);
          }
          plVar7[1] = (longlong)&DAT_14c951a90;
          plVar7[2] = 0;
          plVar7[3] = 0;
          *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
          plVar7[0xd] = 0;
          *plVar7 = (longlong)&PTR_LAB_149e70270;
          iVar12 = local_88 - 1;
          if (local_88 == 0) {
            iVar12 = 0;
          }
          FUN_1446f82e2(&local_d0,iVar12,local_90,1);
          local_b0 = local_d0;
          local_b8 = plVar13;
          if (((((ulonglong)plVar13 & 1) != 0) && (((ulonglong)plVar13 & 0xfffffffffffffffe) != 0))
             && (DAT_14c950c29 == 1)) {
            FUN_1456cec3c((ulonglong)plVar13 & 0xfffffffffffffffe);
          }
          local_1b8 = (wchar_t *)((ulonglong)local_1b8 & 0xffffffffffffff00);
          FUN_140b316da(plVar7,&local_b8,&local_b0);
          *pplVar15 = plVar7;
          if (((((ulonglong)plVar7 & 1) != 0) && (((ulonglong)plVar7 & 0xfffffffffffffffe) != 0)) &&
             (DAT_14c950c29 == 1)) {
            FUN_1456cec3c();
          }
          uVar5 = local_88;
          pvVar4 = local_90;
          lVar8 = (longlong)(int)local_88;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,local_88);
          if (local_88 == 0 && uStack_a0._4_4_ == 0) {
            uStack_a0 = (ulonglong)local_88;
          }
          else {
            FUN_1446dd670(&local_a8,local_88);
            if (uVar5 != 0) {
              memcpy(local_a8,pvVar4,lVar8 * 2);
            }
          }
          if (local_90 != (void *)0x0) {
            FUN_1400020a8();
          }
          pplVar15 = (longlong **)(plVar7 + 0xf);
        }
        else {
          plVar7 = plVar13;
          if (cVar1 == '\x02') {
            if ((int)uStack_a0 < 2) {
              FUN_1400021e4(param_1 + 3,&local_90);
            }
            else {
              FUN_1449b8608(&local_90,&local_a8,L"_InnerSet");
            }
            plVar7 = (longlong *)FUN_14001cc68(0x90,0);
            lVar8 = FUN_144a7e162();
            plVar7[1] = lVar8;
            plVar7[2] = 0;
            plVar7[3] = 0;
            *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
            *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
            plVar7[0xd] = 0;
            *plVar7 = (longlong)&PTR_LAB_149e70450;
            iVar12 = local_88 - 1;
            if (local_88 == 0) {
              iVar12 = 0;
            }
            FUN_1446f82e2(&local_d0,iVar12,local_90,1);
            local_b0 = local_d0;
            local_c0 = plVar13;
            if (((((ulonglong)plVar13 & 1) != 0) && (((ulonglong)plVar13 & 0xfffffffffffffffe) != 0)
                ) && (DAT_14c950c29 == 1)) {
              FUN_1456cec3c((ulonglong)plVar13 & 0xfffffffffffffffe);
            }
            FUN_1468e4da4(plVar7,&local_c0,&local_b0,1);
            *pplVar15 = plVar7;
            if (((((ulonglong)plVar7 & 1) != 0) && (((ulonglong)plVar7 & 0xfffffffffffffffe) != 0))
               && (DAT_14c950c29 == 1)) {
              FUN_1456cec3c();
            }
            uVar5 = local_88;
            pvVar4 = local_90;
            lVar8 = (longlong)(int)local_88;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,local_88);
            if (local_88 == 0 && uStack_a0._4_4_ == 0) {
              uStack_a0 = (ulonglong)local_88;
            }
            else {
              FUN_1446dd670(&local_a8,local_88);
              if (uVar5 != 0) {
                memcpy(local_a8,pvVar4,lVar8 * 2);
              }
            }
            if (local_90 != (void *)0x0) {
              FUN_1400020a8();
            }
            pplVar15 = (longlong **)(plVar7 + 0xe);
          }
        }
        uVar14 = uVar14 + 1;
        plVar13 = plVar7;
      } while (bVar6 != uVar14);
    }
    else {
      FUN_1456cec3c();
      bVar6 = *(byte *)((longlong)param_1 + 0x23);
      local_a8 = (undefined2 *)0x0;
      uStack_a0 = 0;
      if (bVar6 != 0) goto LAB_14153fdb2;
      pplVar15 = &local_170;
    }
    local_90 = (void *)*param_1;
    if ((local_90 != (void *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    _Src = local_a8;
    local_68 = param_1[5];
    local_88 = *(uint *)(param_1 + 1);
    uStack_84 = *(uint *)((longlong)param_1 + 0xc);
    uStack_80 = (undefined4)param_1[2];
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0x14);
    local_78 = (undefined4)param_1[3];
    uStack_74 = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_70 = (uint)param_1[4];
    uStack_6c = *(undefined4 *)((longlong)param_1 + 0x24);
    lVar8 = (longlong)(int)uStack_a0;
    local_d0 = (void *)0x0;
    local_c8 = (int)uStack_a0;
    FUN_1446dd670(&local_d0,(int)uStack_a0 + (uint)(lVar8 == 0) + 10,0);
    if (lVar8 != 0) {
      memcpy(local_d0,_Src,lVar8 * 2);
    }
    FUN_1400020e8(&local_d0,L"_InnerType",10);
    iVar12 = local_c8 + -1;
    if (local_c8 == 0) {
      iVar12 = 0;
    }
    FUN_1446f82e2(&local_78,iVar12,local_d0,1);
    if (local_d0 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = (uint3)uStack_70;
    uStack_70 = (uint)(uVar3 & 0xff);
    local_d8 = plVar7;
    if (((((ulonglong)plVar7 & 1) != 0) && (((ulonglong)plVar7 & 0xfffffffffffffffe) != 0)) &&
       (DAT_14c950c29 == 1)) {
      FUN_1456cec3c((ulonglong)plVar7 & 0xfffffffffffffffe);
    }
    plVar7 = (longlong *)FUN_14153fbcb(&local_90,&local_d8);
    *pplVar15 = plVar7;
    plVar7 = local_170;
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    goto switchD_1415400b4_caseD_b;
  }
  if ((char)param_1[4] == '\v') {
    lVar8 = *param_1;
    if (lVar8 != 0) {
      if (DAT_14c948fa0 == 0) {
        local_a8 = &DAT_1427db2a2;
        lVar8 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948fa0 = lVar8;
        FUN_1446f470e(&local_90,L"ScriptStruct",1);
        local_188 = &LAB_1468915ce;
        local_190 = FUN_1427dc742;
        local_1a0 = (code *)0x149e2b68a;
        local_198 = 199;
        local_1a8 = (undefined *)0x10;
        local_1b0 = CONCAT44(local_1b0._4_4_,0x10000020);
        local_1b8 = (wchar_t *)CONCAT44(local_1b8._4_4_,8);
        local_180 = &local_a8;
        FUN_14574b4b2(lVar8);
        DAT_14c948fa0 = lVar8;
        uVar9 = FUN_1446f8646();
        lVar8 = DAT_14c948fa0;
        uVar10 = FUN_1449e2fb2();
        local_1b8 = L"ScriptStruct";
        FUN_14574b446(uVar10,lVar8,uVar9,L"/Script/CoreUObject");
        lVar8 = *param_1;
        if (lVar8 == 0) goto LAB_141540822;
      }
      plVar7 = (longlong *)0x0;
      if ((DAT_14c948fa0 == 0) || (lVar11 = *(longlong *)(lVar8 + 0x10), lVar11 == 0))
      goto switchD_1415400b4_caseD_b;
      if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8)
          == DAT_14c948fa0 + 0x30)) {
        plVar7 = (longlong *)FUN_14001cc68(0x78,0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952a58) &&
           (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
          local_1a8 = (undefined *)FUN_1446ddbd2();
          local_1a0 = FUN_1403a682c;
          local_1b0 = 0;
          local_1b8 = (wchar_t *)0x108001;
          FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
          atexit(FUN_142818c9e);
          _Init_thread_footer(&DAT_14c952a58);
        }
        plVar7[1] = (longlong)&DAT_14c952a08;
        plVar7[2] = 0;
        plVar7[3] = 0;
        *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
        *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
        plVar7[0xd] = 0;
        plVar7[0xe] = 0;
        *plVar7 = (longlong)&PTR_LAB_149e71fe0;
        local_148 = *param_2;
        if ((((local_148 & 1) != 0) && ((local_148 & 0xfffffffffffffffe) != 0)) &&
           (DAT_14c950c29 == 1)) {
          FUN_1456cec3c();
        }
        FUN_1403a697c(plVar7,&local_148,param_1 + 3,1);
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar8);
        }
        plVar7[0xe] = lVar8;
        plVar13 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar13 != (longlong *)0x0) &&
           ((**(code **)(*plVar13 + 8))(plVar13,&local_90), (uStack_84 & 0x100000) != 0)) {
          *(byte *)((longlong)plVar7 + 0x3e) = *(byte *)((longlong)plVar7 + 0x3e) | 8;
        }
        if ((*(byte *)(lVar8 + 0xb0) & 4) != 0) {
          *(byte *)((longlong)plVar7 + 0x3c) = *(byte *)((longlong)plVar7 + 0x3c) | 0x80;
        }
        goto switchD_1415400b4_caseD_b;
      }
    }
    goto LAB_141540822;
  }
  plVar7 = (longlong *)0x0;
  switch((char)param_1[4]) {
  case '\x01':
    plVar7 = (longlong *)FUN_14001cc68(0x78,0);
    lVar8 = FUN_144a5ab96();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e70e50;
    local_e0 = *param_2;
    if ((((local_e0 & 1) != 0) && ((local_e0 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    FUN_14067a19c(plVar7,&local_e0,param_1 + 3,1);
    FUN_14001671c(plVar7,1,1,0);
    goto switchD_1415400b4_caseD_b;
  case '\x02':
    plVar7 = (longlong *)FUN_14001cc68(0x78,0);
    lVar8 = FUN_14475a8dc();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    plVar7[0xe] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e6f1c0;
    local_e8 = *param_2;
    if ((((local_e8 & 1) != 0) && ((local_e8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    FUN_1409f1bac(plVar7,&local_e8,param_1 + 3,1);
    break;
  case '\x03':
    plVar7 = (longlong *)FUN_14001cc68(0x70,0);
    lVar8 = FUN_144a7452c();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e71030;
    local_f0 = *param_2;
    if ((((local_f0 & 1) != 0) && ((local_f0 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    FUN_1405ebd0e(plVar7,&local_f0,param_1 + 3,1);
    break;
  case '\x04':
    plVar7 = (longlong *)FUN_14001cc68(0x70,0);
    lVar8 = FUN_144a83f76();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e6f430;
    local_100 = *param_2;
    if ((((local_100 & 1) != 0) && ((local_100 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1))
    {
      FUN_1456cec3c();
    }
    FUN_14597398e(plVar7,&local_100,param_1 + 3,1);
    break;
  case '\x05':
    plVar7 = (longlong *)FUN_14001cc68(0x70,0);
    lVar8 = FUN_144a64e42();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e71d60;
    local_110 = *param_2;
    if ((((local_110 & 1) != 0) && ((local_110 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1))
    {
      FUN_1456cec3c();
    }
    FUN_1408a63f8(plVar7,&local_110,param_1 + 3,1);
    break;
  case '\x06':
    plVar7 = (longlong *)FUN_14001cc68(0x70,0);
    lVar8 = FUN_144a49fc8();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e712b0;
    local_118 = *param_2;
    if ((((local_118 & 1) != 0) && ((local_118 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1))
    {
      FUN_1456cec3c();
    }
    FUN_14079c746(plVar7,&local_118,param_1 + 3,1);
    break;
  case '\a':
    plVar7 = (longlong *)FUN_14001cc68(0x70,0);
    lVar8 = FUN_144a63fc8();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e71530;
    local_120 = *param_2;
    if ((((local_120 & 1) != 0) && ((local_120 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1))
    {
      FUN_1456cec3c();
    }
    FUN_1409e13f4(plVar7,&local_120,param_1 + 3,1);
    break;
  case '\b':
    plVar7 = (longlong *)FUN_14001cc68(0x70,0);
    lVar8 = FUN_144a49f24();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e71720;
    local_128 = *param_2;
    if ((((local_128 & 1) != 0) && ((local_128 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1))
    {
      FUN_1456cec3c();
    }
    FUN_140daffce(plVar7,&local_128,param_1 + 3,1);
    break;
  case '\t':
    plVar7 = (longlong *)FUN_14001cc68(0x70,0);
    lVar8 = FUN_144a4a07e();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e71b60;
    local_130 = *param_2;
    if ((((local_130 & 1) != 0) && ((local_130 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1))
    {
      FUN_1456cec3c();
    }
    FUN_140fb5da6(plVar7,&local_130,param_1 + 3,1);
    goto switchD_1415400b4_caseD_b;
  case '\n':
    if (*param_1 != 0) {
      lVar11 = FUN_140851d9a();
      lVar8 = *param_1;
      if (lVar8 != 0) {
        plVar7 = (longlong *)0x0;
        if ((lVar11 == 0) || (lVar2 = *(longlong *)(lVar8 + 0x10), lVar2 == 0))
        goto switchD_1415400b4_caseD_b;
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
            lVar11 + 0x30)) {
          plVar7 = (longlong *)FUN_145d4713e();
          local_138 = *param_2;
          if ((((local_138 & 1) != 0) && ((local_138 & 0xfffffffffffffffe) != 0)) &&
             (DAT_14c950c29 == 1)) {
            FUN_1456cec3c();
          }
          FUN_140a4847e(plVar7,&local_138,param_1 + 3,1);
          uVar9 = FUN_145d470fe();
          FUN_1446ddc76(&local_90,"UnderlyingType",1);
          local_140 = plVar7;
          FUN_1409f1bac(uVar9,&local_140,&local_90,1);
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar8);
          }
          plVar7[0xf] = lVar8;
          (**(code **)(*plVar7 + 0x38))(plVar7,uVar9);
          goto switchD_1415400b4_caseD_b;
        }
      }
    }
    goto LAB_141540822;
  default:
    goto switchD_1415400b4_caseD_b;
  case '\f':
    if (*param_1 != 0) {
      lVar11 = FUN_144a797b2();
      lVar8 = *param_1;
      if (lVar8 != 0) {
        plVar7 = (longlong *)0x0;
        if ((lVar11 == 0) || (lVar2 = *(longlong *)(lVar8 + 0x10), lVar2 == 0))
        goto switchD_1415400b4_caseD_b;
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
            lVar11 + 0x30)) {
          plVar7 = (longlong *)FUN_14688ddc2();
          local_160 = *param_2;
          if ((((local_160 & 1) != 0) && ((local_160 & 0xfffffffffffffffe) != 0)) &&
             (DAT_14c950c29 == 1)) {
            FUN_1456cec3c();
          }
          FUN_1403a60ec(plVar7,&local_160,param_1 + 3,1);
          if ((*(byte *)(lVar8 + 0xd6) & 0x20) != 0) {
            *(byte *)((longlong)plVar7 + 0x3a) = *(byte *)((longlong)plVar7 + 0x3a) | 8;
          }
          FUN_1468d9a50(plVar7,lVar8);
          plVar7[7] = plVar7[7] | 0x108000000000000;
          goto switchD_1415400b4_caseD_b;
        }
      }
    }
    goto LAB_141540822;
  case '\r':
    if (*param_1 != 0) {
      lVar11 = FUN_144a797b2();
      lVar8 = *param_1;
      if (lVar8 != 0) {
        plVar7 = (longlong *)0x0;
        if ((lVar11 == 0) || (lVar2 = *(longlong *)(lVar8 + 0x10), lVar2 == 0))
        goto switchD_1415400b4_caseD_b;
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
            lVar11 + 0x30)) {
          plVar7 = (longlong *)FUN_14688de02();
          local_168 = *param_2;
          if ((((local_168 & 1) != 0) && ((local_168 & 0xfffffffffffffffe) != 0)) &&
             (DAT_14c950c29 == 1)) {
            FUN_1456cec3c();
          }
          FUN_140f1811e(plVar7,&local_168,param_1 + 3,1);
          if ((*(byte *)(lVar8 + 0xd6) & 0x20) != 0) {
            *(byte *)((longlong)plVar7 + 0x3a) = *(byte *)((longlong)plVar7 + 0x3a) | 8;
          }
          FUN_1468d9a50(plVar7,lVar8);
          break;
        }
      }
    }
    goto LAB_141540822;
  case '\x0e':
    if (*param_1 != 0) {
      lVar11 = FUN_144a797b2();
      lVar8 = *param_1;
      if (lVar8 != 0) {
        plVar7 = (longlong *)0x0;
        if ((lVar11 == 0) || (lVar2 = *(longlong *)(lVar8 + 0x10), lVar2 == 0))
        goto switchD_1415400b4_caseD_b;
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
            lVar11 + 0x30)) {
          plVar7 = (longlong *)FUN_140019cb0(0x80);
          local_150 = *param_2;
          if ((((local_150 & 1) != 0) && ((local_150 & 0xfffffffffffffffe) != 0)) &&
             (DAT_14c950c29 == 1)) {
            FUN_1456cec3c();
          }
          FUN_141255be4(plVar7,&local_150,param_1 + 3,1);
          FUN_1468daf50(plVar7,lVar8);
LAB_141540972:
          lVar8 = FUN_144a797b2();
          if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar8);
          }
          plVar7[0xe] = lVar8;
          break;
        }
      }
    }
    goto LAB_141540822;
  case '\x0f':
    if (*param_1 != 0) {
      lVar11 = FUN_144a797b2();
      lVar8 = *param_1;
      if (lVar8 != 0) {
        plVar7 = (longlong *)0x0;
        if ((lVar11 == 0) || (lVar2 = *(longlong *)(lVar8 + 0x10), lVar2 == 0))
        goto switchD_1415400b4_caseD_b;
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
            lVar11 + 0x30)) {
          plVar7 = (longlong *)FUN_1415514f8(0x80);
          local_158 = *param_2;
          if ((((local_158 & 1) != 0) && ((local_158 & 0xfffffffffffffffe) != 0)) &&
             (DAT_14c950c29 == 1)) {
            FUN_1456cec3c();
          }
          FUN_145dc537a(plVar7,&local_158,param_1 + 3,1);
          FUN_1468e6830(plVar7,lVar8);
          goto LAB_141540972;
        }
      }
    }
LAB_141540822:
    plVar7 = (longlong *)0x0;
    goto switchD_1415400b4_caseD_b;
  case '\x10':
    plVar7 = (longlong *)FUN_14001cc68(0x70,0);
    lVar8 = FUN_144a8cc30();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e6f6a0;
    local_f8 = *param_2;
    if ((((local_f8 & 1) != 0) && ((local_f8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    FUN_1468ec5aa(plVar7,&local_f8,param_1 + 3,1);
    break;
  case '\x11':
    plVar7 = (longlong *)FUN_14001cc68(0x70,0);
    lVar8 = FUN_144aa1f9a();
    plVar7[1] = lVar8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[0xd] = 0;
    *plVar7 = (longlong)&PTR_LAB_149e6f910;
    local_108 = *param_2;
    if ((((local_108 & 1) != 0) && ((local_108 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1))
    {
      FUN_1456cec3c();
    }
    FUN_1468ec6aa(plVar7,&local_108,param_1 + 3,1);
  }
  *(byte *)((longlong)plVar7 + 0x3e) = *(byte *)((longlong)plVar7 + 0x3e) | 8;
switchD_1415400b4_caseD_b:
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141540f2c FUN_141540f2c body=289 status=ok
// SIG undefined FUN_141540f2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141540f2c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e85b0) {
    FUN_144b3d300(&DAT_14c9e85b0);
    if (DAT_14c9e85b0 == -1) {
      FUN_14154104e();
      FUN_145d476f2();
      FUN_140db5666(&DAT_14c9e8508,0,&DAT_14c9e84a0,L"FLightGridFeedbackStatusCS",
                    L"/Engine/Private/LightGridInjection.usf",L"FeedbackStatusCS",5,1,FUN_1471d0ff4,
                    FUN_1471d0f94,&LAB_1471d0f90,&LAB_1471d0f8c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9ea208);
      _DAT_14c9e8508 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce7014);
      _Init_thread_footer(&DAT_14c9e85b0);
    }
  }
  return &DAT_14c9e8508;
}



// FUNCTION 14154104e FUN_14154104e body=258 status=ok
// SIG undefined FUN_14154104e(void)

void FUN_14154104e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ea288) {
    FUN_144b3d300(&DAT_14c9ea288);
    if (DAT_14c9ea288 == -1) {
      FUN_145d4783c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x5ef;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ea208,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4859);
      _Init_thread_footer(&DAT_14c9ea288);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141541152 FUN_141541152 body=205 status=ok
// SIG undefined FUN_141541152(void)

undefined8 FUN_141541152(longlong param_1,int param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x88) = uVar1;
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
    *(int *)(param_1 + 0x8c) = iVar2;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x14c) = 1;
  }
  else {
    *(int *)(param_1 + 0x14c) = param_2;
    FUN_1403ac79e(param_1,0);
  }
  return 1;
}



// FUNCTION 141541220 FUN_141541220 body=180 status=ok
// SIG undefined FUN_141541220(void)

void FUN_141541220(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_40 = param_2;
    local_38 = param_3;
    FUN_141143592(0,&local_58,0);
    lVar2 = local_58;
    lVar4 = (longlong)(int)uStack_50;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar5);
        if ((lVar1 != 0) && (cVar3 = FUN_143893b9e(lVar1,&local_40), cVar3 != '\0')) {
          FUN_1415e434e(lVar1);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415412d6 FUN_1415412d6 body=2765 status=ok
// SIG undefined FUN_1415412d6(void)

void FUN_1415412d6(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0 [2];
  longlong local_b0;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  int iStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1446ddc76(&local_a0,*(undefined8 *)(param_1 + 0xb8),1);
  local_78 = (uint *)0x0;
  iVar18 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  iStack_68 = -1;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 == 0) {
    iVar7 = *(int *)(param_1 + 0x1e0);
    if (iVar7 < 0) goto LAB_141541b20;
  }
  else {
    uVar21 = 0;
    do {
      lVar4 = *(longlong *)(lVar4 + uVar21 * 8);
      if (lVar4 == 0) break;
      FUN_1446ddc76(local_c0,lVar4,1);
      iVar18 = iStack_68;
      uVar10 = uStack_90;
      if (local_64 == 0) {
        iVar18 = (int)uStack_90;
        uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 1);
        if (uStack_90._4_4_ == iVar18) {
          FUN_140171ad2(&local_98,uVar10 & 0xffffffff);
        }
        iVar7 = local_70;
        if (local_70 == 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar3 = local_70 + -1;
          }
          iVar3 = iVar3 >> 5;
        }
        iVar8 = local_70 + 1;
        iVar13 = local_70 + 0x1f;
        if (-1 < local_70) {
          iVar13 = local_70;
        }
        if (iVar13 >> 5 == iVar3) {
          local_70 = iVar8;
        }
        else {
          if ((int)local_6c <= local_70) {
            if (local_70 + 0x20U < 0xa0) {
              local_6c = 0x80;
            }
            else {
              uVar11 = local_70 + 0x20U >> 5;
              if (local_6c + 0x1f < 0xa0) {
                uVar15 = 4;
                if (4 < uVar11) {
                  uVar15 = uVar11;
                }
              }
              else {
                uVar15 = uVar11 + (uVar11 * 3 >> 3) + 0x10;
              }
              uVar10 = (ulonglong)(uVar15 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar14 = (uint)(uVar10 + 0xf);
                  if (uVar15 < 0x1ffd) {
                    uVar10 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar10 + 0xf >> 4]];
                  }
                  else {
                    uVar12 = (ulonglong)(uVar14 & 0xfffffff0);
                    if (uVar12 < 0x7ff1) {
                      bVar6 = (&DAT_14c841e00)[uVar14 >> 4];
                      uVar20 = 0x32;
                      if (0x32 < bVar6) {
                        uVar20 = (ulonglong)bVar6;
                      }
                      uVar17 = 0x32 - (ulonglong)bVar6;
                      do {
                        uVar10 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14154197a;
                        lVar4 = uVar20 + 1 + uVar17;
                        uVar17 = uVar17 - 1;
                      } while (lVar4 != 0x33);
                    }
                    uVar10 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar10 = 0x10;
                    }
                    uVar10 = -uVar10 & (uVar12 + uVar10) - 1;
                  }
                }
                else {
                  local_c8 = (ulonglong)uVar11;
                  uVar10 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar10,0);
                  uVar11 = (uint)local_c8;
                }
              }
LAB_14154197a:
              iVar3 = (int)(uVar10 >> 2);
              local_6c = iVar3 << 5;
              if (iVar3 < (int)uVar11) {
                local_6c = 0xffffffe0;
              }
            }
            FUN_1446efbd8(local_88,local_70);
            iVar8 = local_70 + 1;
          }
          iVar3 = iVar8 + 0x1f;
          if (-1 < iVar8) {
            iVar3 = iVar8;
          }
          local_70 = iVar8;
          if (iVar8 % 0x20 != 0) {
            puVar9 = local_78;
            if (local_78 == (uint *)0x0) {
              puVar9 = local_88;
            }
            bVar6 = -(char)(iVar8 % 0x20);
            puVar9[iVar3 >> 5] = (puVar9[iVar3 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
          }
        }
        lVar4 = (longlong)iVar18;
        puVar9 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar9 = local_88;
        }
        bVar6 = (byte)iVar7 & 0x1f;
        puVar9[iVar13 >> 5] = puVar9[iVar13 >> 5] & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      }
      else {
        lVar4 = (longlong)iStack_68;
        iStack_68 = *(int *)(local_98 + 4 + lVar4 * 0x14);
        local_64 = local_64 + -1;
        if (local_64 != 0) {
          *(undefined4 *)(local_98 + (longlong)iStack_68 * 0x14) = 0xffffffff;
        }
      }
      puVar9 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar9 = local_88;
      }
      iVar7 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar7 = iVar18;
      }
      puVar9[iVar7 >> 5] = puVar9[iVar7 >> 5] | 1 << ((byte)iVar18 & 0x1f);
      plVar22 = (longlong *)(local_98 + lVar4 * 0x14);
      *plVar22 = local_c0[0];
      *(char *)(plVar22 + 1) = (char)uVar21;
      *(undefined4 *)((longlong)plVar22 + 0xc) = 0xffffffff;
      uVar11 = (uint)((ulonglong)local_c0[0] >> 0x10);
      uVar15 = (uint)local_c0[0] & 0xffff;
      uVar11 = ((uint)local_c0[0] << 0x10 | uVar15) + (int)((ulonglong)local_c0[0] >> 0x20) +
               (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar15 >> 4);
      uVar15 = (int)uStack_90 - local_64;
      if ((uVar15 != 0) && (uVar15 != 1)) {
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        iVar7 = *(int *)(puVar5 + (ulonglong)(local_50 - 1 & uVar11) * 4);
        while (iVar7 != -1) {
          plVar1 = (longlong *)(local_98 + (longlong)iVar7 * 0x14);
          if (*plVar1 == local_c0[0]) {
            lVar4 = *plVar22;
            *(int *)(plVar1 + 1) = (int)plVar22[1];
            *plVar1 = lVar4;
            FUN_14709f5be(&local_98);
            goto LAB_141541595;
          }
          iVar7 = *(int *)((longlong)plVar1 + 0xc);
        }
      }
      if (uVar15 < 4) {
        uVar14 = 1;
      }
      else {
        uVar10 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar14 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((int)uVar15 < 1) || ((int)uVar14 <= (int)local_50)) {
        uVar11 = local_50 - 1 & uVar11;
        *(uint *)(plVar22 + 2) = uVar11;
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        *(undefined4 *)((longlong)plVar22 + 0xc) =
             *(undefined4 *)(puVar5 + ((longlong)(int)local_50 - 1U & (longlong)(int)uVar11) * 4);
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        *(int *)(puVar5 + ((longlong)(int)local_50 - 1U & (longlong)(int)uVar11) * 4) = iVar18;
      }
      else {
        local_50 = uVar14;
        if (local_58 != (undefined1 *)0x0) {
          FUN_1446efa72(&local_58,0,0,4);
        }
        uVar11 = local_50;
        if (local_50 == 1) {
          if (local_58 != (undefined1 *)0x0) {
            FUN_1446efa72(&local_58,0,0,4);
          }
LAB_14154167b:
          uVar15 = 0;
          do {
            puVar5 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar5 = local_60;
            }
            *(undefined4 *)(puVar5 + (ulonglong)(local_50 + 0x7fffffff & uVar15) * 4) = 0xffffffff;
            uVar15 = uVar15 + 1;
          } while (uVar11 != uVar15);
        }
        else {
          if (local_50 == 0) goto LAB_141541595;
          FUN_1446efa72(&local_58,0,local_50,4);
          if (0 < (int)uVar11) goto LAB_14154167b;
        }
        if (local_70 == 0) {
          uVar10 = 0;
          uVar12 = 1;
          iVar18 = 0;
          iVar7 = 0;
        }
        else {
          puVar9 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar9 = local_88;
          }
          uVar11 = *puVar9;
          if (uVar11 == 0) {
            iVar18 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar18 = local_70 + -1;
            }
            uVar10 = 0;
            uVar12 = (ulonglong)(uint)(iVar18 >> 5);
            if (iVar18 >> 5 < 1) {
              uVar12 = uVar10;
            }
            iVar7 = 0;
            do {
              if (uVar12 == uVar10) goto LAB_141541595;
              iVar7 = iVar7 + 0x20;
              uVar11 = puVar9[uVar10 + 1];
              uVar10 = uVar10 + 1;
            } while (uVar11 == 0);
          }
          else {
            uVar10 = 0;
            iVar7 = 0;
          }
          uVar12 = (ulonglong)(-uVar11 & uVar11);
          uVar20 = uVar12 * 2 + 1;
          lVar4 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar18 = (iVar7 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar18) {
            iVar18 = local_70;
          }
        }
        if (iVar18 < local_70) {
          uVar11 = 0xffffffff;
          do {
            lVar4 = (longlong)iVar18;
            uVar2 = *(undefined8 *)(local_98 + lVar4 * 0x14);
            uVar15 = (uint)((ulonglong)uVar2 >> 0x10);
            uVar14 = (uint)uVar2 & 0xffff;
            uVar20 = (longlong)
                     (int)(((uint)uVar2 << 0x10 | uVar14) + (int)((ulonglong)uVar2 >> 0x20) +
                           (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar14 >> 4)) &
                     (longlong)(int)local_50 - 1U;
            iVar3 = (int)uVar20;
            *(int *)(local_98 + 0x10 + lVar4 * 0x14) = iVar3;
            puVar5 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar5 = local_60;
            }
            *(undefined4 *)(local_98 + 0xc + lVar4 * 0x14) =
                 *(undefined4 *)(puVar5 + ((longlong)(int)local_50 - 1U & uVar20) * 4);
            puVar5 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar5 = local_60;
            }
            *(int *)(puVar5 + ((longlong)iVar3 & (longlong)(int)local_50 - 1U) * 4) = iVar18;
            uVar11 = ~(uint)uVar12 & uVar11;
            puVar9 = local_78;
            if (local_78 == (uint *)0x0) {
              puVar9 = local_88;
            }
            iVar18 = (int)uVar10;
            lVar4 = (longlong)iVar18;
            uVar15 = puVar9[lVar4] & uVar11;
            local_d0 = uVar21;
            if (uVar15 == 0) {
              iVar3 = local_70 + 0x1e;
              if (-1 < local_70 + -1) {
                iVar3 = local_70 + -1;
              }
              iVar3 = iVar3 >> 5;
              iVar8 = iVar3;
              if (iVar3 < iVar18) {
                iVar8 = iVar18;
              }
              if (iVar3 <= iVar18) break;
              lVar16 = 0;
              while( true ) {
                iVar7 = iVar7 + 0x20;
                uVar15 = puVar9[lVar4 + lVar16 + 1];
                if (uVar15 != 0) break;
                lVar16 = lVar16 + 1;
                if (iVar8 - lVar4 == lVar16) goto LAB_141541595;
              }
              uVar10 = (ulonglong)(iVar18 + (int)lVar16 + 1);
              uVar11 = 0xffffffff;
            }
            uVar12 = (ulonglong)(-uVar15 & uVar15);
            uVar20 = uVar12 * 2 + 1;
            lVar4 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            iVar18 = (iVar7 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
          } while (iVar18 < local_70);
        }
      }
LAB_141541595:
      uVar21 = uVar21 + 1;
      lVar4 = *(longlong *)(param_1 + 0xc0);
    } while (lVar4 != 0);
    iVar7 = *(int *)(param_1 + 0x1e0);
    iVar18 = (int)uVar21;
    if (iVar7 < iVar18) {
LAB_141541b20:
      *(int *)(param_1 + 0x1e0) = iVar18;
      if ((uint)(*(int *)(param_1 + 0x1e4) - iVar7) < (uint)(iVar18 - iVar7)) {
        FUN_141738a82((longlong *)(param_1 + 0x1d8));
      }
      memset((void *)((longlong)iVar7 * 8 + *(longlong *)(param_1 + 0x1d8)),0,
             (longlong)(iVar18 - iVar7) << 3);
      goto LAB_141541b59;
    }
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar21 & 0xffffffff);
    }
  }
  if (iVar18 < iVar7) {
    *(int *)(param_1 + 0x1e0) = iVar18;
    FUN_14709f630(param_1 + 0x1d8);
  }
LAB_141541b59:
  if (DAT_14c9a1ef8 != (longlong *)0x0) {
    plVar22 = DAT_14c9a1ef8;
    do {
      if (((local_a0 == plVar22[4]) && ((code *)plVar22[1] != (code *)0x0)) &&
         (lVar4 = (*(code *)plVar22[1])(), lVar4 != 0)) {
        FUN_1400bbfc4(local_c0,lVar4);
        if ((int)uStack_90 != local_64) {
          lVar16 = plVar22[3];
          uVar11 = (uint)((ulonglong)lVar16 >> 0x10);
          uVar15 = (uint)lVar16 & 0xffff;
          puVar5 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar5 = local_60;
          }
          iVar18 = *(int *)(puVar5 + (ulonglong)
                                     (local_50 - 1 &
                                     (int)((ulonglong)lVar16 >> 0x20) +
                                     ((uint)lVar16 << 0x10 | uVar15) +
                                     (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar15 >> 4)) * 4);
          while (iVar18 != -1) {
            plVar1 = (longlong *)(local_98 + (longlong)iVar18 * 0x14);
            if (*plVar1 == lVar16) {
              plVar19 = plVar1 + 1;
              if (((plVar19 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
                  (-1 < (char)*plVar19)) &&
                 (((int)(char)*plVar19 < *(int *)(param_1 + 0x1e0) &&
                  (lVar4 = FUN_1462a3121(param_1,lVar4), lVar4 != 0)))) {
                lVar16 = *(longlong *)(param_1 + 0x1d8);
                uVar21 = (longlong)(char)*plVar19;
                if (DAT_14c950c29 == '\x01') {
                  local_d0 = (longlong)(char)*plVar19;
                  FUN_1456cec3c(lVar4);
                  uVar21 = local_d0;
                }
                *(longlong *)(lVar16 + uVar21 * 8) = lVar4;
                FUN_1462a3288(lVar4,param_1,(char)*plVar19,plVar22[2]);
              }
              break;
            }
            iVar18 = *(int *)((longlong)plVar1 + 0xc);
          }
        }
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
      }
      plVar22 = (longlong *)*plVar22;
    } while (plVar22 != (longlong *)0x0);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar21 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar21 != 0) {
    FUN_1401ad22e(&local_98,0);
  }
  iStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141541df8 FUN_141541df8 body=646 status=ok
// SIG undefined FUN_141541df8(void)

void FUN_141541df8(longlong *param_1,undefined8 param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  uint uVar8;
  wchar_t *pwVar9;
  int iVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_141542034;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_f8 = param_2;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar9 = _Str;
  do {
    iVar10 = (int)uVar6;
    if (iVar10 < 1) {
LAB_141541f41:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_141541f5e;
      FUN_1446efa72(&local_60,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_141541f60;
    }
    wVar1 = *pwVar9;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar9 + 1;
    uVar8 = iVar10 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar10 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_141541f41;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar9 + 2;
        uVar8 = iVar10 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar8;
    pwVar9 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_141541f5e:
  local_f0 = (undefined1 *)0x0;
LAB_141541f60:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar10 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    param_2 = local_f8;
    if (iVar10 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar9 = _Str + 1;
    iVar2 = iVar10 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar10 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        param_2 = local_f8;
        break;
      }
      if (((ushort)*pwVar9 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar9 + 0xfca02400;
        pwVar9 = _Str + 2;
        iVar2 = iVar10 + -2;
      }
    }
    iVar10 = iVar2;
    _Str = pwVar9;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
    param_2 = local_f8;
  } while (cVar3 != '\0');
LAB_141542034:
  FUN_1459fff42(param_2,local_58,param_1 + 2);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141542080 FUN_141542080 body=2463 status=ok
// SIG undefined FUN_141542080(void)

void FUN_141542080(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_118 [36];
  undefined4 local_f4;
  wchar_t *local_f0;
  int local_e8;
  int local_dc;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(char *)(param_1 + 0xca) != '\x01') || (*(char *)(param_1 + 0xcc) != '\0'))
  goto LAB_1415420b8;
  *(uint *)(param_1 + 0x380) = param_2;
  if (param_2 < 3) {
    pwVar8 = (wchar_t *)(&PTR_DAT_14b47b258)[param_2];
  }
  else {
    pwVar8 = L"Unsupported";
  }
  FUN_140056680(&local_f0,pwVar8);
  local_f4 = 0;
  if (((((*(int *)(param_1 + 0x374) != 0) && (uVar9 = *(uint *)(param_1 + 0x370), -1 < (int)uVar9))
       && ((int)uVar9 < DAT_14c9647dc)) &&
      ((puVar1 = (undefined8 *)
                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
       puVar1 != (undefined8 *)0x0 && (*(int *)(puVar1 + 2) == *(int *)(param_1 + 0x374))))) &&
     ((*(uint *)(puVar1 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar1 + 1) & 0x10200000) == 0) {
      uVar10 = *puVar1;
    }
    else {
      uVar10 = 0;
    }
    if ((*(uint *)(puVar1 + 1) & 0x10200000) == 0) {
      plVar4 = (longlong *)*puVar1;
    }
    else {
      plVar4 = (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar4 + 0x180))();
    lVar3 = FUN_140334a94(uVar10,uVar2);
    if (lVar3 != 0) {
      FUN_14016169c(lVar3,&local_f4);
    }
  }
  FUN_1461c6c1a(param_1,"Event_SetSplitScreenMode",&local_f0,&local_f4);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar4 = (longlong *)(param_1 + 0x28);
  }
  else {
    plVar4 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) + 8);
  }
  plVar4 = (longlong *)*plVar4;
  if (plVar4 != (longlong *)0x0) {
    pwVar8 = local_f0;
    if (local_e8 == 0) {
      pwVar8 = L"";
    }
    local_58 = (undefined1 *)0x0;
    if (pwVar8 == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
    }
    else {
      sVar5 = wcslen(pwVar8);
      local_48 = FUN_14475aa65(0,pwVar8,sVar5 & 0xffffffff);
      uVar9 = local_48 + 1;
      local_50 = (undefined1 *)0x0;
      if (0x80 < uVar9) {
        FUN_1446efa72(&local_58,0,uVar9,1);
        local_50 = local_58;
      }
      if (local_50 == (undefined1 *)0x0) {
        local_50 = local_d8;
      }
      FUN_14475a98a(local_50,uVar9,pwVar8,(int)sVar5 + 1);
    }
    (**(code **)(*plVar4 + 0x218))(plVar4,"splitscreen_mode",local_50);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_dc = 0;
  if (((*(int *)(param_1 + 0x374) != 0) && (uVar9 = *(uint *)(param_1 + 0x370), -1 < (int)uVar9)) &&
     (((int)uVar9 < DAT_14c9647dc &&
      (((puVar1 = (undefined8 *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
        puVar1 != (undefined8 *)0x0 && (*(int *)(puVar1 + 2) == *(int *)(param_1 + 0x374))) &&
       ((*(uint *)(puVar1 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar1 + 1) & 0x10200000) == 0) {
      uVar10 = *puVar1;
    }
    else {
      uVar10 = 0;
    }
    if ((*(uint *)(puVar1 + 1) & 0x10200000) == 0) {
      plVar4 = (longlong *)*puVar1;
    }
    else {
      plVar4 = (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar4 + 0x180))();
    lVar3 = FUN_140334a94(uVar10,uVar2);
    if (lVar3 != 0) {
      FUN_14016169c(lVar3,&local_dc);
    }
  }
  lVar3 = DAT_14cb927a8;
  if (*(int *)(param_1 + 0x380) == 2) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb927a0,1);
    lVar3 = param_1 + 0x3c0;
    if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar6 = FUN_144a8c772(lVar3), lVar6 != 0)) {
      FUN_14129c610(lVar6,local_d8);
    }
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92770,1);
    if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar6 = FUN_144a8c772(lVar3), lVar6 != 0)) {
      FUN_14129c610(lVar6,local_d8);
    }
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92768,1);
    if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar6 = FUN_144a8c772(lVar3), lVar6 != 0)) {
      FUN_14129c566(lVar6,local_d8);
    }
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92798,1);
    if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar6 = FUN_144a8c772(lVar3), lVar6 != 0)) {
      FUN_14129c566(lVar6,local_d8);
    }
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92780,1);
    if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar6 = FUN_144a8c772(lVar3), lVar6 != 0)) {
      FUN_14129c566(lVar6,local_d8);
    }
    if (local_dc == 0) {
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92790,1);
      if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar3 = FUN_144a8c772(lVar3), lVar3 != 0)) {
        FUN_14129c610(lVar3,local_d8);
      }
      uVar10 = DAT_14cb92788;
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
        uVar10 = DAT_14cb92788;
      }
    }
    else {
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92788,1);
      if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar3 = FUN_144a8c772(lVar3), lVar3 != 0)) {
        FUN_14129c610(lVar3,local_d8);
      }
      uVar10 = DAT_14cb92790;
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
        uVar10 = DAT_14cb92790;
      }
    }
LAB_141542866:
    FUN_1400702d4(DAT_14caa8580,local_d8,uVar10,1);
    if ((*(longlong *)(param_1 + 0x3c8) != 0) &&
       (lVar3 = FUN_144a8c772(param_1 + 0x3c0), lVar3 != 0)) {
      FUN_14129c566(lVar3,local_d8);
    }
  }
  else {
    if (*(int *)(param_1 + 0x380) == 1) {
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb927a0,1);
      lVar3 = param_1 + 0x3c0;
      if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar6 = FUN_144a8c772(lVar3), lVar6 != 0)) {
        FUN_14129c610(lVar6,local_d8);
      }
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92768,1);
      if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar6 = FUN_144a8c772(lVar3), lVar6 != 0)) {
        FUN_14129c610(lVar6,local_d8);
      }
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92770,1);
      if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar6 = FUN_144a8c772(lVar3), lVar6 != 0)) {
        FUN_14129c566(lVar6,local_d8);
      }
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92790,1);
      if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar6 = FUN_144a8c772(lVar3), lVar6 != 0)) {
        FUN_14129c566(lVar6,local_d8);
      }
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92788,1);
      if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar6 = FUN_144a8c772(lVar3), lVar6 != 0)) {
        FUN_14129c566(lVar6,local_d8);
      }
      if (local_dc == 0) {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92798,1);
        if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar3 = FUN_144a8c772(lVar3), lVar3 != 0)) {
          FUN_14129c610(lVar3,local_d8);
        }
        uVar10 = DAT_14cb92780;
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
          uVar10 = DAT_14cb92780;
        }
      }
      else {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        FUN_1400702d4(DAT_14caa8580,local_d8,DAT_14cb92780,1);
        if ((*(longlong *)(param_1 + 0x3c8) != 0) && (lVar3 = FUN_144a8c772(lVar3), lVar3 != 0)) {
          FUN_14129c610(lVar3,local_d8);
        }
        uVar10 = DAT_14cb92798;
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
          uVar10 = DAT_14cb92798;
        }
      }
      goto LAB_141542866;
    }
    lVar6 = (longlong)DAT_14cb927b0;
    if (lVar6 != 0) {
      lVar11 = 0;
      do {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        FUN_1400702d4(DAT_14caa8580,local_d8,*(undefined8 *)(lVar3 + lVar11),1);
        if ((*(longlong *)(param_1 + 0x3c8) != 0) &&
           (lVar7 = FUN_144a8c772(param_1 + 0x3c0), lVar7 != 0)) {
          FUN_14129c566(lVar7,local_d8);
        }
        lVar11 = lVar11 + 8;
      } while (lVar6 * 8 != lVar11);
    }
  }
  if (local_f0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1415420b8:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141542a20 FUN_141542a20 body=722 status=ok
// SIG undefined FUN_141542a20(void)

void FUN_141542a20(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined2 local_87;
  undefined1 local_85;
  undefined4 local_84;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar2 = FUN_14487fd02();
  if (((iVar2 == 3) || (lVar3 = FUN_1447210f0(param_1), lVar3 == 0)) ||
     ((lVar4 = *(longlong *)(lVar3 + 0x170), lVar4 == 0 &&
      ((*(longlong *)(lVar3 + 0x178) == 0 || (lVar4 = FUN_145afc578(), lVar4 == 0))))))
  goto LAB_141542a74;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_87 = 1;
  local_85 = 0;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  uStack_a0 = *(undefined8 *)(param_1 + 0x1b0);
  local_88 = 1;
  local_84 = 0x48;
  lVar6 = *(longlong *)(lVar4 + 0x3b8);
  local_a8 = param_1;
  if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
    FUN_1456cec3c(lVar6);
LAB_141542b36:
    lVar5 = FUN_1400d1928();
    if (((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_141542b58;
LAB_141542b7d:
    lVar5 = FUN_1400d1928();
    if ((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_141542b95;
    lVar11 = 0;
    if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      lVar11 = lVar6;
    }
  }
  else {
    if (lVar6 != 0) goto LAB_141542b36;
LAB_141542b58:
    lVar6 = FUN_1400d1928();
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
      goto LAB_141542b7d;
    }
    if (lVar6 != 0) goto LAB_141542b7d;
LAB_141542b95:
    lVar11 = 0;
  }
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  uVar7 = FUN_141037e38(lVar3,lVar11,&local_118,&local_b8);
  FUN_145ad9df8(param_1,uVar7);
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FUN_141220240(*(longlong *)(param_1 + 0x398),&local_118);
    iVar2 = (int)uStack_110;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (iVar2 < 2) {
      plVar10 = *(longlong **)(param_1 + 0x398);
      plVar8 = *(longlong **)(lVar4 + 0x400);
      if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      plVar8 = *(longlong **)(lVar4 + 0x400);
      pcVar1 = *(code **)(*plVar8 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar9 = plVar8 + 3;
        if (plVar8[5] != 0) {
          plVar9 = (longlong *)(plVar8[5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar9 = plVar8 + 2;
      }
      else {
        plVar9 = (longlong *)(*pcVar1)(plVar8);
      }
      (**(code **)(*plVar10 + 0x690))(plVar10,plVar9);
    }
  }
  if (local_78 != 0) {
    plVar10 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar10 = local_58;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
LAB_141542a74:
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141542cf4 FUN_141542cf4 body=52 status=ok
// SIG undefined FUN_141542cf4(void)

undefined8 FUN_141542cf4(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_14127aa70(uVar1,param_2);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_148a9568e(lVar2);
  return uVar1;
}



// FUNCTION 141542d28 FUN_141542d28 body=806 status=ok
// SIG undefined FUN_141542d28(void)

void FUN_141542d28(longlong *param_1,longlong param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 == (longlong *)0x0) || (lVar8 = (**(code **)(*param_1 + 0x180))(), lVar8 == 0)) {
LAB_141542d88:
    if (((*param_4 != -1) && (plVar4 = *(longlong **)(param_4 + 4), plVar4 != (longlong *)0x0)) &&
       (lVar8 = FUN_1400796d0(plVar4[2],*(undefined8 *)(param_4 + 2),1), lVar8 != 0)) {
      (**(code **)(*plVar4 + 0x248))(plVar4,lVar8,param_4);
    }
    goto LAB_141542dc1;
  }
  if ((*(byte *)(lVar8 + 0x155) & 0x20) != 0) goto LAB_141542dc1;
  if (((param_2 == 0) || (iVar7 = FUN_14490d72a(lVar8), iVar7 == 3)) ||
     (lVar9 = FUN_14589e76e(param_1), lVar9 == 0)) goto LAB_141542d88;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = *(longlong *)(lVar9 + 0x148);
  plVar4 = *(longlong **)(lVar9 + 0x150);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar6 == 0) {
    lVar9 = 0;
    plVar11 = (longlong *)0x0;
    if (*(longlong *)(param_4 + 4) != 0) goto LAB_141542e6a;
LAB_141542fd9:
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
  else {
    FUN_145d467de(lVar6,&local_58,param_2,&DAT_14c948618);
    lVar9 = local_58;
    plVar11 = (longlong *)CONCAT44(uStack_4c,local_50);
    if (local_58 == 0) {
      if (*(longlong *)(param_4 + 4) == 0) goto LAB_141542fd9;
      lVar9 = 0;
    }
    else {
      local_58 = *param_3;
      local_50 = (undefined4)param_3[1];
      FUN_1410fd40a(lVar9);
    }
LAB_141542e6a:
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
    if (*(longlong *)(lVar8 + 0x1f0) == 0) {
      lVar8 = lVar8 + 0x460;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x1f0) + 0xf8);
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar10 = &PTR_FUN_14b40cc60;
    puVar10[1] = uVar5;
    puVar10[2] = lVar9;
    puVar10[3] = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)puVar10 + 0x24) = 0;
    if (*(longlong *)(param_4 + 4) == 0) {
      *(undefined4 *)(puVar10 + 4) = 0;
      iVar7 = 0;
    }
    else {
      uVar3 = *(uint *)(*(longlong *)(param_4 + 4) + 0xc);
      *(uint *)(puVar10 + 4) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar13 = iVar7 == 0;
        if (bVar13) {
          *(int *)(lVar9 + 0x10) = iVar12;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar7 = iVar12;
        }
      }
    }
    *(int *)((longlong)puVar10 + 0x24) = iVar7;
    puVar10[5] = *(undefined8 *)(param_4 + 2);
    *(int *)(puVar10 + 6) = *param_4;
    FUN_140b1330e(lVar8,*(undefined8 *)(param_4 + 4),param_4[1],puVar10);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar11 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_141542dc1:
  FUN_1403d8100(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141543068 FUN_141543068 body=62 status=ok
// SIG undefined FUN_141543068(void)

void FUN_141543068(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1446dda88(param_1 + 0x28,0);
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1415430a6 FUN_1415430a6 body=226 status=ok
// SIG undefined FUN_1415430a6(void)

longlong * FUN_1415430a6(longlong *param_1)

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
  pcVar13 = FUN_145ee6c10;
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



// FUNCTION 14154318a FUN_14154318a body=461 status=ok
// SIG undefined FUN_14154318a(void)

undefined4 FUN_14154318a(longlong param_1)

{
  char cVar1;
  void *_Src;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = *(char *)(param_1 + 0x300);
  if (cVar1 == '\x02') {
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (cVar1 == '\x01') {
    uVar2 = FUN_145cefb3b(param_1 + 0x308);
    iVar3 = FUN_145cefbbe((longlong *)(param_1 + 0x140),uVar2,param_1 + 0x308);
    uVar2 = 0x3e9;
    if ((iVar3 != -1) &&
       (lVar4 = (longlong)iVar3 * 0x78 + *(longlong *)(param_1 + 0x140),
       plVar5 = (longlong *)(lVar4 + 0x60), plVar5 != (longlong *)0x0 && lVar4 != 0)) {
      if (DAT_14cb99c48 == (undefined8 *)0x0) {
        DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *DAT_14cb99c48 = 0;
        DAT_14cb99c48[1] = 0;
        DAT_14cb99c48[2] = 2;
      }
      lVar4 = *plVar5;
      local_30 = (void *)0x0;
      local_28 = *(int *)(lVar4 + 0x1b8);
      lVar6 = (longlong)local_28;
      _Src = *(void **)(lVar4 + 0x1b0);
      if (lVar6 == 0) {
        local_24 = 0;
      }
      else {
        FUN_1446dd670(&local_30,local_28,0);
        memcpy(local_30,_Src,lVar6 * 2);
      }
      uVar2 = FUN_14658f18c(&local_30);
      if (local_30 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uVar2 = 0x3ec;
    if (cVar1 == '\0') {
      if (DAT_14cb99c48 == (undefined8 *)0x0) {
        DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *DAT_14cb99c48 = 0;
        DAT_14cb99c48[1] = 0;
        DAT_14cb99c48[2] = 2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141543376 FUN_141543376 body=715 status=ok
// SIG undefined FUN_141543376(void)

void FUN_141543376(short *param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  short *psVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  char cVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_f8 [35];
  char local_d5;
  int local_d4;
  int local_d0;
  int local_cc;
  longlong local_c8;
  undefined8 local_c0;
  short *local_b8;
  longlong *local_b0;
  int local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    uVar5 = *(undefined8 *)(param_2 + 0x248);
    cVar13 = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    cVar7 = cVar13;
    iVar2 = *(int *)(param_2 + 0x10);
    psVar8 = param_1;
    if (local_50 != *(int *)(param_2 + 0x10)) {
      do {
        local_b8 = psVar8;
        local_c0 = uVar5;
        local_d4 = iVar2;
        local_d5 = cVar7;
        psVar8 = local_b8;
        lVar6 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
        if (cVar13 == '\0') {
          *(undefined4 *)(lVar6 + 0x14) = 0;
          local_c8 = lVar6;
        }
        else {
          local_c8 = 0;
        }
        if (*(ushort *)(lVar6 + 0xc) != 0) {
          plVar16 = *(longlong **)(lVar6 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar6 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar16 + 0x1e) == local_b8[2]) goto LAB_141543452;
            plVar16 = plVar16 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar16 = (longlong *)0x0;
LAB_141543452:
        iVar2 = *(int *)(lVar6 + 0x14);
        if (iVar2 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar16 + 1));
        }
        LOCK();
        *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
        UNLOCK();
        lVar9 = *plVar16;
        if (*(ushort *)(lVar6 + 0xc) != 0) {
          plVar12 = *(longlong **)(lVar6 + 0x28);
          lVar10 = (ulonglong)*(ushort *)(lVar6 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar12 + 0x1e) == psVar8[1]) goto LAB_14154349a;
            plVar12 = plVar12 + 4;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        plVar12 = (longlong *)0x0;
LAB_14154349a:
        iVar3 = *(int *)(lVar6 + 0x14);
        if (iVar3 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
        }
        LOCK();
        *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
        UNLOCK();
        lVar10 = *plVar12;
        if (*(ushort *)(lVar6 + 0xc) != 0) {
          plVar14 = *(longlong **)(lVar6 + 0x28);
          lVar11 = (ulonglong)*(ushort *)(lVar6 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar14 + 0x1e) == *psVar8) goto LAB_1415434ea;
            plVar14 = plVar14 + 4;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
        plVar14 = (longlong *)0x0;
LAB_1415434ea:
        iVar4 = *(int *)(lVar6 + 0x14);
        local_d0 = iVar3;
        local_cc = iVar2;
        if (iVar4 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
        }
        LOCK();
        *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
        UNLOCK();
        lVar11 = *plVar14;
        local_90 = local_d0;
        local_78 = local_c0;
        local_70 = local_cc;
        uVar1 = *(ushort *)(lVar6 + 0xe);
        local_b0 = plVar14;
        local_a8 = iVar4;
        local_a0 = lVar11;
        local_98 = plVar12;
        local_88 = lVar10;
        local_80 = plVar16;
        local_68 = lVar9;
        if ((ulonglong)uVar1 != 0) {
          uVar15 = 0;
          do {
            FUN_145d5265a(*(undefined8 *)(lVar11 + uVar15 * 8),lVar10,lVar9 + uVar15);
            uVar15 = uVar15 + 1;
            lVar10 = lVar10 + 0x14;
          } while (uVar1 != uVar15);
        }
        FUN_145d52750(&local_b0);
        iVar3 = local_d4;
        cVar13 = local_d5;
        if (local_c8 != 0) {
          *(undefined4 *)(local_c8 + 0x14) = 1;
        }
        local_50 = FUN_1403b8464(&local_60,local_50 + 1);
        cVar7 = local_d5;
        iVar2 = local_d4;
        uVar5 = local_c0;
        psVar8 = local_b8;
      } while (local_50 != iVar3);
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141543642 FUN_141543642 body=164 status=ok
// SIG undefined FUN_141543642(void)

void FUN_141543642(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_140208c1e(&DAT_14caebfe8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415436e8 FUN_1415436e8 body=164 status=ok
// SIG undefined FUN_1415436e8(void)

void FUN_1415436e8(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_140208c1e(&DAT_14caec000,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154378e FUN_14154378e body=164 status=ok
// SIG undefined FUN_14154378e(void)

void FUN_14154378e(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_140208c1e(&DAT_14caec090,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141543834 FUN_141543834 body=164 status=ok
// SIG undefined FUN_141543834(void)

void FUN_141543834(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_140208c1e(&DAT_14caec0a8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415438da FUN_1415438da body=164 status=ok
// SIG undefined FUN_1415438da(void)

void FUN_1415438da(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_140208c1e(&DAT_14caec0c0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141543980 FUN_141543980 body=164 status=ok
// SIG undefined FUN_141543980(void)

void FUN_141543980(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXRamp4";
  local_38 = 0x20;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13b80,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141543a26 FUN_141543a26 body=164 status=ok
// SIG undefined FUN_141543a26(void)

void FUN_141543a26(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXAppend4Vector";
  local_38 = 0x28;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13850,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141543acc FUN_141543acc body=164 status=ok
// SIG undefined FUN_141543acc(void)

void FUN_141543acc(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXPlace2D";
  local_38 = 0x22;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13b08,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141543b72 FUN_141543b72 body=4 status=ok
// SIG undefined FUN_141543b72(void)

undefined4 FUN_141543b72(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 141543b76 FUN_141543b76 body=436 status=ok
// SIG undefined FUN_141543b76(void)

undefined8 FUN_141543b76(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  
  iVar2 = *(int *)(param_1 + 0x3e0);
  if (iVar2 == 0) {
    uVar6 = 0;
    uVar10 = 1;
    iVar12 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x3d8);
    if (*(uint **)(param_1 + 0x3d8) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x3c8);
    }
    uVar3 = *puVar8;
    if (uVar3 == 0) {
      iVar12 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar12 = iVar2 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar6;
      }
      iVar7 = 0;
      do {
        if (uVar10 == uVar6) {
          return 1;
        }
        iVar7 = iVar7 + 0x20;
        uVar3 = puVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar6 = 0;
      iVar7 = 0;
    }
    uVar10 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar12 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
  }
  if (iVar12 != iVar2) {
    uVar3 = 0xffffffff;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x3b8) + 4 + (longlong)iVar12 * 0x10) == 0) {
        return 0;
      }
      uVar3 = uVar3 & ~(uint)uVar10;
      puVar8 = *(uint **)(param_1 + 0x3d8);
      if (*(uint **)(param_1 + 0x3d8) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x3c8);
      }
      iVar12 = (int)uVar6;
      lVar9 = (longlong)iVar12;
      uVar13 = puVar8[lVar9] & uVar3;
      if (uVar13 == 0) {
        iVar4 = iVar2 + -1;
        if (iVar2 + -1 < 0) {
          iVar4 = iVar2 + 0x1e;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar12) {
          iVar5 = iVar12;
        }
        if (iVar4 <= iVar12) {
          return 1;
        }
        lVar11 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar13 = puVar8[lVar9 + lVar11 + 1];
          if (uVar13 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar5 - lVar9 == lVar11) {
            return 1;
          }
        }
        uVar6 = (ulonglong)(iVar12 + (int)lVar11 + 1);
        uVar3 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar10 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar12 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar2);
  }
  return 1;
}



// FUNCTION 141543d2a FUN_141543d2a body=523 status=ok
// SIG undefined FUN_141543d2a(void)

void FUN_141543d2a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_158 [32];
  undefined8 **local_138;
  longlong *local_128;
  undefined8 *local_120;
  int local_118;
  longlong local_110;
  int local_108;
  undefined1 local_100 [216];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_146584706();
  FUN_1459565f8(param_1,&local_110);
  if (local_108 == (int)param_1[4]) {
    FUN_14114e6dc(param_1 + 6,param_2);
    if (0 < local_108) {
      (**(code **)(*param_1 + 8))(param_1,local_100);
      lVar1 = param_1[5];
      local_120 = (undefined8 *)0x0;
      local_118 = 0;
      FUN_1446efa72(&local_120,0,3,0x10);
      local_118 = 3;
      *local_120 = &PTR_LAB_149e06450;
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
      local_120[2] = lVar5;
      *local_120 = &PTR_FUN_14b4f28a0;
      local_120[3] = param_1;
      local_120[4] = FUN_145a3b5ac;
      local_138 = &local_120;
      local_128 = param_1;
      FUN_145d2c63e(lVar1,&local_128,&local_110,local_100);
      if (local_118 == 0) {
LAB_141543e66:
        if (local_120 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_120 != (undefined8 *)0x0) {
        (**(code **)*local_120)(local_120,0);
        FUN_1446efa72(&local_120,0,0,0x10);
        local_118 = 0;
        goto LAB_141543e66;
      }
      FUN_14124f074(local_100);
    }
  }
  else if (((int)param_2[1] != 0) && (plVar2 = (longlong *)*param_2, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,0);
  }
  FUN_14127b1cd(local_110,local_108);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if ((int)param_2[1] != 0) {
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_141543eea;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
LAB_141543eea:
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141543f36 FUN_141543f36 body=1003 status=ok
// SIG undefined FUN_141543f36(void)

void FUN_141543f36(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  float fVar11;
  double dVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  uint local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar2 = (longlong *)param_1[0x72];
  if ((plVar2[0x86] == 0) || ((*(byte *)(plVar2 + 0x84) & 2) == 0)) {
LAB_141543f93:
    if ((*(uint *)(param_1 + 0x5cb) & 0x300) == 0x100) goto LAB_141544248;
  }
  else {
    cVar5 = (**(code **)(*plVar2 + 0x6c8))();
    if (cVar5 == '\0') goto LAB_141543f93;
  }
  (**(code **)(*param_1 + 0x740))(param_1,param_2);
  fVar11 = (float)FUN_144916004(param_1);
  if (fVar11 <= 0.0001) {
    fVar11 = 0.0001;
  }
  *(float *)((longlong)param_1 + 0x2e74) =
       (float)param_2 / fVar11 + *(float *)((longlong)param_1 + 0x2e74);
  if ((*(byte *)((longlong)param_1 + 0x2e59) & 4) == 0) goto LAB_141544248;
  if ((param_1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar6 = FUN_14487fd02(param_1);
  if (iVar6 != 3) goto LAB_141544248;
  if (DAT_14cac0fa8 == (longlong *)0x0) {
    local_c0 = &local_78;
    local_78 = FUN_141030f22;
    local_b0 = FUN_14081d0ea;
    local_b8 = &LAB_141117124;
    local_c8 = &LAB_14786c867;
    local_d0 = &LAB_145abcadb;
    local_d8 = &DAT_149e063b2;
    local_e0 = 0;
    local_e8 = 0x10000004;
    local_f0 = 8;
    local_f8 = 0x438;
    FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
  }
  plVar2 = DAT_14cac0fa8;
  lVar8 = DAT_14cac0fa8[0x22];
  if (lVar8 == 0) {
    (**(code **)(*DAT_14cac0fa8 + 1000))(DAT_14cac0fa8);
    lVar8 = plVar2[0x22];
  }
  fVar11 = *(float *)(lVar8 + 0x410);
  fVar1 = *(float *)(lVar8 + 0x414);
  lVar8 = (**(code **)(*param_1 + 0x670))(param_1);
  lVar9 = (**(code **)(*param_1 + 0x678))(param_1);
  FUN_140202030(&local_90,lVar8,param_1);
  FUN_140202030(&local_a8,lVar9,param_1);
  local_98 = local_80 - local_98;
  local_a0 = (double)CONCAT44(uStack_84,uStack_88) - local_a0;
  local_a8 = (double)CONCAT44(uStack_8c,local_90) - local_a8;
  if (((double)(fVar1 * fVar1) < local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0) ||
     (fVar11 < *(float *)((longlong)param_1 + 0x2e74))) {
    dVar12 = (*(double *)(lVar8 + 0x20) * 65536.0) / 360.0;
    dVar3 = (*(double *)(lVar8 + 0x18) * 65536.0) / 360.0;
    dVar4 = (*(double *)(lVar9 + 0x20) * 65536.0) / 360.0;
    uVar7 = ((uint)(longlong)ROUND(dVar12 + dVar12 + 0.5) & 0xfffffffe) << 0xf |
            (uint)((ulonglong)(longlong)ROUND(dVar3 + dVar3 + 0.5) >> 1) & 0xffff;
    dVar12 = (*(double *)(lVar9 + 0x18) * 65536.0) / 360.0;
    if (uVar7 == (((uint)(longlong)ROUND(dVar4 + dVar4 + 0.5) & 0xfffffffe) << 0xf |
                 (uint)((ulonglong)(longlong)ROUND(dVar12 + dVar12 + 0.5) >> 1) & 0xffff)) {
      if ((((ABS(local_a8) <= 9.999999747378752e-05) && (ABS(local_a0) <= 9.999999747378752e-05)) &&
          (ABS(local_98) <= 9.999999747378752e-05)) &&
         (*(float *)((longlong)param_1 + 0x2e74) < *(float *)(param_1 + 0x5cf) ||
          *(float *)((longlong)param_1 + 0x2e74) == *(float *)(param_1 + 0x5cf)))
      goto LAB_141544241;
    }
    plVar2 = (longlong *)param_1[0x72];
    local_68 = local_80;
    local_78 = (code *)CONCAT44(uStack_8c,local_90);
    uStack_70 = uStack_88;
    uStack_6c = uStack_84;
    local_60 = uVar7;
    uVar10 = FUN_14477b072(plVar2,DAT_14caf9b90);
    (**(code **)(*plVar2 + 0x248))(plVar2,uVar10,&local_78);
    *(undefined4 *)((longlong)param_1 + 0x2e74) = 0;
  }
LAB_141544241:
  *(byte *)((longlong)param_1 + 0x2e59) = *(byte *)((longlong)param_1 + 0x2e59) & 0xfb;
LAB_141544248:
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141544322 FUN_141544322 body=226 status=ok
// SIG undefined FUN_141544322(void)

longlong * FUN_141544322(longlong *param_1)

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
  pcVar13 = FUN_1462d5cec;
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



// FUNCTION 141544406 FUN_141544406 body=139 status=ok
// SIG undefined FUN_141544406(void)

void FUN_141544406(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  
  if (*param_3 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28) = 2;
    FUN_145ee5550(*(undefined8 *)(param_1 + 0x30),param_1 + 0x38);
    FUN_143f460d4(*(longlong *)(param_1 + 0x30),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x30),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x39));
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    FUN_143f46a06(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28) = 0;
  if ((*(int *)(param_1 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x20), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014154444b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x30),0);
    return;
  }
  return;
}



// FUNCTION 141544492 FUN_141544492 body=296 status=ok
// SIG undefined FUN_141544492(void)

undefined8 * FUN_141544492(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149eec6a0;
  memset(param_1 + 5,0,0x3e0);
  lVar2 = 0x410;
  do {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844850) {
      FUN_144b3d300(&DAT_14c844850);
      if (DAT_14c844850 == -1) {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
    }
    plVar1 = DAT_14c844840;
    *(longlong **)((longlong)param_1 + lVar2 + -8) = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x7e0);
  FUN_145d586e2(param_1);
  return param_1;
}



// FUNCTION 1415445ba FUN_1415445ba body=1388 status=ok
// SIG undefined FUN_1415445ba(void)

void FUN_1415445ba(char *param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = (int)param_2[1];
  uVar10 = 0;
  if (1 < iVar9) {
    uVar10 = (uint)(*(short *)*param_2 == 0x23);
  }
  uVar3 = iVar9 - 1;
  if (iVar9 == 0) {
    uVar3 = 0;
  }
  uVar6 = uVar10 + 3;
  if (uVar3 == uVar6) {
    lVar2 = *param_2;
    uVar5 = *(ushort *)(lVar2 + (ulonglong)uVar10 * 2);
    iVar9 = uVar5 - 0x30;
    if (9 < (ushort)(uVar5 - 0x30)) {
      if ((ushort)(uVar5 - 0x61) < 6) {
        iVar9 = uVar5 - 0x57;
      }
      else {
        iVar9 = 0;
        if ((ushort)(uVar5 - 0x41) < 6) {
          iVar9 = uVar5 - 0x37;
        }
      }
    }
    uVar5 = *(ushort *)(lVar2 + 2 + (ulonglong)uVar10 * 2);
    iVar7 = uVar5 - 0x30;
    if (9 < (ushort)(uVar5 - 0x30)) {
      if ((ushort)(uVar5 - 0x61) < 6) {
        iVar7 = uVar5 - 0x57;
      }
      else {
        iVar7 = 0;
        if ((ushort)(uVar5 - 0x41) < 6) {
          iVar7 = uVar5 - 0x37;
        }
      }
    }
    uVar5 = *(ushort *)(lVar2 + (ulonglong)(uVar10 | 2) * 2);
    iVar8 = uVar5 - 0x30;
    if (9 < (ushort)(uVar5 - 0x30)) {
      if ((ushort)(uVar5 - 0x61) < 6) {
        iVar8 = uVar5 - 0x57;
      }
      else {
        iVar8 = 0;
        if ((ushort)(uVar5 - 0x41) < 6) {
          iVar8 = uVar5 - 0x37;
        }
      }
    }
    *param_1 = (char)(iVar8 << 4) + (char)iVar8;
    param_1[1] = (char)(iVar7 << 4) + (char)iVar7;
    param_1[2] = (char)(iVar9 << 4) + (char)iVar9;
  }
  else {
    if (uVar3 != uVar10 + 6) {
      if (uVar3 == uVar10 + 8) {
        lVar2 = *param_2;
        uVar4 = (ulonglong)uVar10;
        uVar5 = *(ushort *)(lVar2 + uVar4 * 2);
        iVar9 = uVar5 - 0x30;
        if (9 < (ushort)(uVar5 - 0x30)) {
          if ((ushort)(uVar5 - 0x61) < 6) {
            iVar9 = uVar5 - 0x57;
          }
          else {
            iVar9 = 0;
            if ((ushort)(uVar5 - 0x41) < 6) {
              iVar9 = uVar5 - 0x37;
            }
          }
        }
        sVar1 = *(short *)(lVar2 + 2 + uVar4 * 2);
        uVar5 = sVar1 - 0x30U;
        if (9 < (ushort)(sVar1 - 0x30U)) {
          if ((ushort)(sVar1 - 0x61U) < 6) {
            uVar5 = sVar1 - 0x57;
          }
          else {
            uVar5 = 0;
            if ((ushort)(sVar1 - 0x41U) < 6) {
              uVar5 = sVar1 - 0x37;
            }
          }
        }
        param_1[2] = (char)uVar5 + (char)(iVar9 << 4);
        uVar5 = *(ushort *)(lVar2 + 4 + uVar4 * 2);
        iVar9 = uVar5 - 0x30;
        if (9 < (ushort)(uVar5 - 0x30)) {
          if ((ushort)(uVar5 - 0x61) < 6) {
            iVar9 = uVar5 - 0x57;
          }
          else {
            iVar9 = 0;
            if ((ushort)(uVar5 - 0x41) < 6) {
              iVar9 = uVar5 - 0x37;
            }
          }
        }
        sVar1 = *(short *)(lVar2 + (ulonglong)uVar6 * 2);
        uVar5 = sVar1 - 0x30U;
        if (9 < (ushort)(sVar1 - 0x30U)) {
          if ((ushort)(sVar1 - 0x61U) < 6) {
            uVar5 = sVar1 - 0x57;
          }
          else {
            uVar5 = 0;
            if ((ushort)(sVar1 - 0x41U) < 6) {
              uVar5 = sVar1 - 0x37;
            }
          }
        }
        param_1[1] = (char)uVar5 + (char)(iVar9 << 4);
        uVar5 = *(ushort *)(lVar2 + 8 + uVar4 * 2);
        iVar9 = uVar5 - 0x30;
        if (9 < (ushort)(uVar5 - 0x30)) {
          if ((ushort)(uVar5 - 0x61) < 6) {
            iVar9 = uVar5 - 0x57;
          }
          else {
            iVar9 = 0;
            if ((ushort)(uVar5 - 0x41) < 6) {
              iVar9 = uVar5 - 0x37;
            }
          }
        }
        sVar1 = *(short *)(lVar2 + 10 + uVar4 * 2);
        uVar5 = sVar1 - 0x30U;
        if (9 < (ushort)(sVar1 - 0x30U)) {
          if ((ushort)(sVar1 - 0x61U) < 6) {
            uVar5 = sVar1 - 0x57;
          }
          else {
            uVar5 = 0;
            if ((ushort)(sVar1 - 0x41U) < 6) {
              uVar5 = sVar1 - 0x37;
            }
          }
        }
        *param_1 = (char)uVar5 + (char)(iVar9 << 4);
        uVar5 = *(ushort *)(lVar2 + (ulonglong)(uVar10 + 6) * 2);
        iVar9 = uVar5 - 0x30;
        if (9 < (ushort)(uVar5 - 0x30)) {
          if ((ushort)(uVar5 - 0x61) < 6) {
            iVar9 = uVar5 - 0x57;
          }
          else {
            iVar9 = 0;
            if ((ushort)(uVar5 - 0x41) < 6) {
              iVar9 = uVar5 - 0x37;
            }
          }
        }
        sVar1 = *(short *)(lVar2 + 0xe + uVar4 * 2);
        uVar5 = sVar1 - 0x30U;
        if (9 < (ushort)(sVar1 - 0x30U)) {
          if ((ushort)(sVar1 - 0x61U) < 6) {
            uVar5 = sVar1 - 0x57;
          }
          else {
            uVar5 = 0;
            if ((ushort)(sVar1 - 0x41U) < 6) {
              uVar5 = sVar1 - 0x37;
            }
          }
        }
        param_1[3] = (char)uVar5 + (char)(iVar9 << 4);
        return;
      }
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      return;
    }
    lVar2 = *param_2;
    uVar4 = (ulonglong)uVar10;
    uVar5 = *(ushort *)(lVar2 + uVar4 * 2);
    iVar9 = uVar5 - 0x30;
    if (9 < (ushort)(uVar5 - 0x30)) {
      if ((ushort)(uVar5 - 0x61) < 6) {
        iVar9 = uVar5 - 0x57;
      }
      else {
        iVar9 = 0;
        if ((ushort)(uVar5 - 0x41) < 6) {
          iVar9 = uVar5 - 0x37;
        }
      }
    }
    sVar1 = *(short *)(lVar2 + 2 + uVar4 * 2);
    uVar5 = sVar1 - 0x30U;
    if (9 < (ushort)(sVar1 - 0x30U)) {
      if ((ushort)(sVar1 - 0x61U) < 6) {
        uVar5 = sVar1 - 0x57;
      }
      else {
        uVar5 = 0;
        if ((ushort)(sVar1 - 0x41U) < 6) {
          uVar5 = sVar1 - 0x37;
        }
      }
    }
    param_1[2] = (char)uVar5 + (char)(iVar9 << 4);
    uVar5 = *(ushort *)(lVar2 + 4 + uVar4 * 2);
    iVar9 = uVar5 - 0x30;
    if (9 < (ushort)(uVar5 - 0x30)) {
      if ((ushort)(uVar5 - 0x61) < 6) {
        iVar9 = uVar5 - 0x57;
      }
      else {
        iVar9 = 0;
        if ((ushort)(uVar5 - 0x41) < 6) {
          iVar9 = uVar5 - 0x37;
        }
      }
    }
    sVar1 = *(short *)(lVar2 + (ulonglong)uVar6 * 2);
    uVar5 = sVar1 - 0x30U;
    if (9 < (ushort)(sVar1 - 0x30U)) {
      if ((ushort)(sVar1 - 0x61U) < 6) {
        uVar5 = sVar1 - 0x57;
      }
      else {
        uVar5 = 0;
        if ((ushort)(sVar1 - 0x41U) < 6) {
          uVar5 = sVar1 - 0x37;
        }
      }
    }
    param_1[1] = (char)uVar5 + (char)(iVar9 << 4);
    uVar5 = *(ushort *)(lVar2 + 8 + uVar4 * 2);
    iVar9 = uVar5 - 0x30;
    if (9 < (ushort)(uVar5 - 0x30)) {
      if ((ushort)(uVar5 - 0x61) < 6) {
        iVar9 = uVar5 - 0x57;
      }
      else {
        iVar9 = 0;
        if ((ushort)(uVar5 - 0x41) < 6) {
          iVar9 = uVar5 - 0x37;
        }
      }
    }
    sVar1 = *(short *)(lVar2 + 10 + uVar4 * 2);
    uVar5 = sVar1 - 0x30U;
    if (9 < (ushort)(sVar1 - 0x30U)) {
      if ((ushort)(sVar1 - 0x61U) < 6) {
        uVar5 = sVar1 - 0x57;
      }
      else {
        uVar5 = 0;
        if ((ushort)(sVar1 - 0x41U) < 6) {
          uVar5 = sVar1 - 0x37;
        }
      }
    }
    *param_1 = (char)uVar5 + (char)(iVar9 << 4);
  }
  param_1[3] = -1;
  return;
}



// FUNCTION 141544b26 FUN_141544b26 body=208 status=ok
// SIG undefined FUN_141544b26(void)

void FUN_141544b26(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_50 = param_3;
    local_48 = param_4;
    FUN_14141c592(0,&local_68);
    lVar2 = local_68;
    lVar4 = (longlong)(int)uStack_60;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar5);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_50), cVar3 != '\0'))
        {
          (**(code **)(*plVar1 + 0x650))(plVar1,param_2,param_5);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141544bf8 FUN_141544bf8 body=180 status=ok
// SIG undefined FUN_141544bf8(void)

undefined8 * FUN_141544bf8(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a17fc40;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = param_2;
  *(uint *)(param_1 + 7) = param_4;
  *(longlong *)((longlong)param_1 + 0x3c) = param_2;
  *(uint *)((longlong)param_1 + 0x44) = param_4 >> 3 & 1;
  if (param_2 != 0) {
    FUN_140e5a8ae();
    if ((longlong)(int)DAT_14c9a3718 != 0) {
      lVar2 = (longlong)(int)DAT_14c9a3718 << 3;
      plVar3 = DAT_14c9a3710;
      do {
        if ((*plVar3 != 0) && (*(longlong *)(*plVar3 + 0x30) == param_2)) {
          if (plVar3 != (longlong *)0x0) {
            return param_1;
          }
          break;
        }
        plVar3 = plVar3 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    FUN_140e5a8ae();
    uVar1 = DAT_14c9a3718;
    lVar2 = (longlong)(int)DAT_14c9a3718;
    DAT_14c9a3718 = DAT_14c9a3718 + 1;
    if (DAT_14c9a371c < DAT_14c9a3718) {
      FUN_145d5ade6(&DAT_14c9a3710,uVar1);
    }
    DAT_14c9a3710[lVar2] = (longlong)param_1;
  }
  return param_1;
}



// FUNCTION 141544cac FUN_141544cac body=921 status=ok
// SIG undefined FUN_141544cac(void)

void FUN_141544cac(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  int local_84;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  code *local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = param_1 + 0x250;
  local_68 = (code *)0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_80 = param_3;
  local_70 = param_2;
  local_60 = local_78;
  if (*(int *)(param_1 + 0x268) == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = (ulonglong)local_68 >> 0x20;
    iVar11 = *(int *)(param_1 + 0x268);
  }
  lVar4 = local_60;
  plVar5 = local_80;
  iVar13 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar12 = local_58._4_4_;
  iVar15 = local_50;
  iVar2 = iVar11;
  if (local_58._4_4_ != iVar11 || local_60 != local_78) {
    do {
      local_84 = iVar2;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar12 * 0x10);
      if (lVar10 != 0) {
        lVar7 = *local_70;
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar7);
          plVar5 = local_80;
          iVar11 = local_84;
LAB_141544dc1:
          if (DAT_14cad00c8 == 0) {
            local_68 = FUN_144a7958c;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a0 = &local_68;
            local_a8 = &LAB_1479b7a0c;
            local_b0 = &LAB_1463b464e;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000005;
            local_d0 = 8;
            local_d8 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            plVar5 = local_80;
            iVar11 = local_84;
            if (DAT_14cad00c8 == 0) goto LAB_141544fd6;
          }
          if (*(int *)(lVar7 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_141544fd6;
          if (*(longlong *)
               (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar7 = 0;
          }
        }
        else {
          if (lVar7 != 0) goto LAB_141544dc1;
LAB_141544fd6:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar11 = (int)plVar5[1];
          *(uint *)(plVar5 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)plVar5 + 0xc) < iVar11 + 1U) {
            FUN_145d5b818(plVar5,iVar11);
            plVar5 = local_80;
          }
          *(longlong *)(*plVar5 + (longlong)iVar11 * 8) = lVar10;
          iVar11 = local_84;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar8;
      lVar10 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) == 0) {
        lVar10 = lVar4;
      }
      iVar2 = *(int *)(lVar4 + 0x18);
      lVar7 = (longlong)iVar13;
      uVar6 = *(uint *)(lVar10 + lVar7 * 4) & uVar14;
      if (uVar6 == 0) {
        iVar12 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar12 = iVar2 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar3 = iVar12;
        if (iVar12 < iVar13) {
          iVar3 = iVar13;
        }
        iVar11 = local_84;
        if (iVar13 < iVar12) {
          lVar9 = 0;
          do {
            uVar6 = *(uint *)(lVar10 + lVar7 * 4 + 4 + lVar9 * 4);
            if (uVar6 != 0) {
              iVar13 = iVar13 + (int)lVar9 + 1;
              uVar14 = 0xffffffff;
              goto LAB_141544e7a;
            }
            iVar15 = iVar15 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar3 - lVar7 != lVar9);
          uVar14 = 0xffffffff;
          iVar13 = iVar3;
        }
        iVar13 = iVar13 + 1;
        plVar5 = local_80;
        iVar12 = iVar2;
      }
      else {
LAB_141544e7a:
        uVar8 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar8 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar12 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar12) {
          iVar12 = iVar2;
        }
      }
      iVar2 = local_84;
    } while (iVar12 != iVar11 || lVar4 != local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141545046 FUN_141545046 body=650 status=ok
// SIG undefined FUN_141545046(void)

void FUN_141545046(longlong param_1,longlong *param_2,uint param_3)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar9 = FUN_14479d2ce(param_1 + 0x18);
  if ((lVar9 != 0) && (*(char *)(param_1 + 0xf8) == '\0')) {
    local_a8 = 0;
    FUN_14485c47a(&local_a8,param_2);
    lVar10 = FUN_145d5f342(param_1 + 0x50,(uint)((ulonglong)local_a8 >> 0x20) ^ (uint)local_a8,
                           &local_a8);
    lVar2 = param_2[0x39];
    uVar18 = (undefined4)DAT_14c8464f0;
    uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    if (lVar2 == 0) {
      puVar11 = &DAT_14c8464e0;
      uVar16 = uVar18;
      uVar17 = uVar19;
    }
    else {
      puVar11 = (undefined8 *)(lVar2 + 0x260);
      uVar16 = (int)*(undefined8 *)(lVar2 + 0x270);
      uVar17 = (int)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
    }
    lVar9 = *(longlong *)(lVar9 + 0x1c8);
    if (lVar9 == 0) {
      puVar13 = &DAT_14c8464e0;
    }
    else {
      uVar18 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
      puVar13 = (undefined8 *)(lVar9 + 0x260);
    }
    uVar3 = *puVar11;
    uVar4 = puVar11[1];
    uVar5 = *puVar13;
    uVar6 = puVar13[1];
    (**(code **)(*param_2 + 0x328))(param_2,&local_a8);
    local_b8 = 0;
    uStack_b0 = 0;
    lVar9 = 0;
    do {
      if (*(float *)(lVar10 + lVar9) <= 3.4028235e+38 && *(float *)(lVar10 + lVar9) != 3.4028235e+38
         ) goto LAB_1415451ad;
      lVar9 = lVar9 + 0x60;
    } while (lVar9 != 0x2a0);
    local_c0 = 0;
    FUN_14485c47a(&local_c0,param_2);
    uVar12 = uStack_b0;
    lVar9 = (longlong)(int)uStack_b0;
    uVar7 = (int)uStack_b0 + 1;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
    if (uStack_b0._4_4_ < uVar7) {
      FUN_140155462(&local_b8,uVar12 & 0xffffffff);
    }
    *(undefined8 *)(local_b8 + lVar9 * 8) = local_c0;
LAB_1415451ad:
    uVar12 = (ulonglong)((param_3 & 0xff) * 0x60);
    puVar14 = (undefined4 *)(lVar10 + uVar12);
    pfVar1 = (float *)(lVar10 + uVar12);
    if (*pfVar1 <= 3.4028235e+38 && *pfVar1 != 3.4028235e+38) {
      fVar15 = (float)puVar14[5] + 1.0;
      iVar8 = puVar14[2] + 1;
    }
    else {
      puVar14[1] = 0;
      puVar14[3] = 1;
      fVar15 = 1.0;
      iVar8 = 1;
    }
    *puVar14 = 0;
    *(undefined8 *)(puVar14 + 6) = uVar3;
    *(undefined8 *)(puVar14 + 8) = uVar4;
    *(ulonglong *)(puVar14 + 10) = CONCAT44(uVar17,uVar16);
    *(undefined8 *)(puVar14 + 0xc) = uVar5;
    *(undefined8 *)(puVar14 + 0xe) = uVar6;
    *(ulonglong *)(puVar14 + 0x10) = CONCAT44(uVar19,uVar18);
    puVar14[0x12] = (undefined4)local_a8;
    puVar14[0x13] = local_a8._4_4_;
    puVar14[0x14] = uStack_a0;
    puVar14[0x15] = uStack_9c;
    *(undefined8 *)(puVar14 + 0x16) = local_98;
    puVar14[4] = 0x3f800000;
    puVar14[5] = fVar15;
    puVar14[2] = iVar8;
    *(undefined1 *)(param_1 + 0xa0) = 1;
    if (0 < (int)uStack_b0) {
      FUN_140367464(param_1,&local_b8);
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415452d2 FUN_1415452d2 body=215 status=ok
// SIG undefined FUN_1415452d2(void)

undefined8 * FUN_1415452d2(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined *apuStack_310 [95];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)(apuStack_310 + 7);
  apuStack_310[6] = (undefined *)0x141545305;
  memset(apuStack_310 + 0xb,0,0x2a0);
  lVar1 = 0x58;
  do {
    *(undefined8 *)((longlong)apuStack_310 + lVar1) = 0x7f7fffff7f7fffff;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 8) = 0;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 0x18) = 0x47efffffe0000000;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 0x20) = 0x47efffffe0000000;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 0x28) = 0x47efffffe0000000;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 0x30) = 0x47efffffe0000000;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 0x38) = 0x47efffffe0000000;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 0x40) = 0x47efffffe0000000;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 0x48) = 0x47efffffe0000000;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 0x50) = 0x47efffffe0000000;
    *(undefined8 *)((longlong)apuStack_310 + lVar1 + 0x58) = 0x47efffffe0000000;
    lVar1 = lVar1 + 0x60;
  } while (lVar1 != 0x2f8);
  *param_2 = *(undefined8 *)*param_1;
  apuStack_310[6] = (undefined *)0x141545383;
  memcpy(param_2 + 1,apuStack_310 + 0xb,0x2a0);
  if ((local_18 ^ (ulonglong)(apuStack_310 + 7)) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  apuStack_310[6] = &UNK_1415453a9;
  FUN_144d8e3a0();
}



// FUNCTION 1415453aa FUN_1415453aa body=434 status=ok
// SIG undefined FUN_1415453aa(void)

void FUN_1415453aa(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ddcc0;
  param_1[6] = &PTR_FUN_14b4de0e8;
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_145c2da0c(param_1 + 0x3a);
  plVar2 = (longlong *)param_1[0x39];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x1e);
  plVar2 = (longlong *)param_1[0x1c];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14b4e3f70;
  if (param_1[7] != 0) {
    FUN_1411ebbe4();
    param_1[7] = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14154555c FUN_14154555c body=85 status=ok
// SIG undefined FUN_14154555c(void)

void FUN_14154555c(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_1402566a4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_145d6942c(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1415455b2 FUN_1415455b2 body=91 status=ok
// SIG undefined FUN_1415455b2(void)

void FUN_1415455b2(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = DAT_14c9a1378;
  for (iVar3 = DAT_14c9a1380; iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      lVar4 = 0x3fe8;
      do {
        if (*(longlong *)(lVar1 + -0x10 + lVar4) != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
      FUN_1400020a8(lVar1);
    }
    plVar2 = plVar2 + 1;
  }
  return;
}



// FUNCTION 14154560e FUN_14154560e body=204 status=ok
// SIG undefined FUN_14154560e(void)

int FUN_14154560e(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_1[1];
  iVar2 = (int)param_1[2];
  iVar7 = (int)((ulonglong)((longlong)(iVar2 + param_2 + 0x198) * -0x5fc3e977) >> 0x20) +
          iVar2 + param_2 + 0x198;
  iVar7 = (iVar7 >> 8) - (iVar7 >> 0x1f);
  *(int *)(param_1 + 2) = iVar2 + param_2;
  if (iVar6 < iVar7) {
    do {
      lVar4 = FUN_14001cc68(0x3fe8,0x10);
      lVar5 = 0x18;
      do {
        puVar1 = (undefined8 *)(lVar4 + -0x18 + lVar5);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(lVar4 + -8 + lVar5) = 0;
        *(undefined8 *)(lVar4 + lVar5) = 0;
        ((undefined8 *)(lVar4 + lVar5))[1] = 0;
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != 0x4000);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(longlong *)(*param_1 + (longlong)iVar3 * 8) = lVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar7);
  }
  return iVar2;
}



// FUNCTION 1415456da FUN_1415456da body=292 status=ok
// SIG undefined FUN_1415456da(void)

void FUN_1415456da(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  void *local_48;
  ulonglong uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (void *)0x0;
  uStack_40 = (ulonglong)*(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 2) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1447403be(&local_48,0);
    iVar6 = *(int *)(param_1 + 2);
  }
  pvVar2 = local_48;
  *(int *)((longlong)param_1 + 0x14) = iVar6;
  uVar1 = *param_1;
  iVar4 = iVar6;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
    iVar4 = *(int *)((longlong)param_1 + 0x14);
  }
  local_38 = (longlong)iVar4;
  local_68 = (longlong)iVar6;
  local_58 = 0;
  local_60 = 0;
  cVar3 = FUN_1410fe780(DAT_14c892f44,pvVar2,&local_38,uVar1);
  if (((int)local_38 == local_38) &&
     (*(int *)((longlong)param_1 + 0x14) = (int)local_38, cVar3 != '\0')) {
    FUN_1400ec3e6(param_1);
    uVar5 = *(uint *)((longlong)param_1 + 0x14);
    iVar6 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar6 + uVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar6) < uVar5) {
      FUN_1447403be(param_1);
      uVar5 = *(uint *)((longlong)param_1 + 0x14);
    }
    memcpy((void *)*param_1,local_48,(longlong)(int)uVar5);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141545800 FUN_141545800 body=289 status=ok
// SIG undefined FUN_141545800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141545800(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c65c8) {
    FUN_144b3d300(&DAT_14c9c65c8);
    if (DAT_14c9c65c8 == -1) {
      FUN_141545922();
      FUN_145d6ad10();
      FUN_140db5666(&DAT_14c9c6520,0,&DAT_14c9c64b8,L"FObjectCullPS",
                    L"/Engine/Private/DistanceFieldObjectCulling.usf",L"ObjectCullPS",3,2,
                    FUN_14714eee6,FUN_14714ee86,&LAB_1462bdc60,&LAB_14714ee82,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c8520);
      _DAT_14c9c6520 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bd6311);
      _Init_thread_footer(&DAT_14c9c65c8);
    }
  }
  return &DAT_14c9c6520;
}



// FUNCTION 141545922 FUN_141545922 body=258 status=ok
// SIG undefined FUN_141545922(void)

void FUN_141545922(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c85a0) {
    FUN_144b3d300(&DAT_14c9c85a0);
    if (DAT_14c9c85a0 == -1) {
      FUN_145d6ae5a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0xb1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8520,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be76a6);
      _Init_thread_footer(&DAT_14c9c85a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141545a26 FUN_141545a26 body=538 status=ok
// SIG undefined FUN_141545a26(void)

void FUN_141545a26(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
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
  plVar5 = local_60;
  iVar14 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar8 = *param_1;
      lVar11 = lVar8 + (longlong)iVar7 * 0x28;
      plVar9 = (longlong *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x18) == 0) {
LAB_141545ac9:
        if (*plVar9 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar3 = (undefined8 *)*plVar9;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,0);
          FUN_1446efa72(plVar9,0,0,0x10);
          *(undefined4 *)(lVar8 + (longlong)iVar7 * 0x28 + 0x18) = 0;
          goto LAB_141545ac9;
        }
      }
      uVar12 = uVar12 & ~(uint)uVar13;
      plVar9 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar9 = plVar5;
      }
      iVar2 = (int)plVar5[3];
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar9 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar7;
        if (iVar7 < iVar14) {
          iVar4 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar9 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar4 - lVar11 == lVar8) goto LAB_141545bb9;
        }
        iVar14 = iVar14 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_141545bb9:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141545c42 FUN_141545c42 body=164 status=ok
// SIG undefined FUN_141545c42(void)

void FUN_141545c42(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_140208c1e(&DAT_14caebfd0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141545ce8 FUN_141545ce8 body=164 status=ok
// SIG undefined FUN_141545ce8(void)

void FUN_141545ce8(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate Conversion";
  local_38 = 0x14;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate Conversion";
  local_38 = 0x14;
  FUN_140208c1e(&DAT_14caec198,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141545d8e FUN_141545d8e body=279 status=ok
// SIG undefined FUN_141545d8e(void)

longlong FUN_141545d8e(longlong param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x140) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x68), lVar1 != 0)) {
    if (DAT_14cb0b9a0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146408884;
      local_38 = &LAB_147d719e1;
      local_40 = &LAB_140fb41fe;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x168;
      FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
    }
    if ((*(int *)(DAT_14cb0b9a0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8) == DAT_14cb0b9a0 + 0x30)) goto LAB_141545de1;
  }
  lVar1 = 0;
LAB_141545de1:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141545ea6 FUN_141545ea6 body=1258 status=ok
// SIG undefined FUN_141545ea6(void)

void FUN_141545ea6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1414f1d42();
  if ((*(int *)(param_1 + 0xf8) == 2) || (*(int *)(param_1 + 0xf8) == 1)) {
    LOCK();
    *(undefined4 *)(param_1 + 0xf8) = 0;
    UNLOCK();
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_141545f14;
    if (iVar6 != 1) goto LAB_141545f0f;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_141545f14;
  }
  else {
LAB_141545f0f:
    if (iVar6 == 0x10) goto LAB_141545f14;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_141545f14:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_141545f14;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_1415460b8;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_143ea3853);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar2 = puVar9;
      FUN_140217a48(puVar2);
      puVar10 = (uint *)*puVar2;
LAB_1415460b8:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x17);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar3 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar2;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x17);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_141546138;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_141546138:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14b4567f0;
    puVar16[0x15] = param_1;
    *(undefined4 *)(puVar16 + 0x16) = param_2;
    *(undefined4 *)((longlong)puVar16 + 0xb4) = param_3;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar6 = 0;
      }
      else {
        uVar15 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar15 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar15 != '\x06') {
        uVar5 = uVar15;
      }
      uVar15 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar16[0xf] = uVar11;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar6;
    if (puVar16 == (undefined8 *)0x0) {
      local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_88 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14b4567a0;
    local_78[0] = &LAB_143ea56e8;
    local_50 = param_1;
    local_48 = param_2;
    local_44 = param_3;
    FUN_14005a792(&DAT_14ca9a440,L"SetViewRendererTexture",&DAT_14cb9135c);
    if (local_78[0] != (undefined1 *)0x0) {
      pppuVar13 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar13 = &local_58;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415463aa FUN_1415463aa body=1043 status=ok
// SIG undefined FUN_1415463aa(void)

void FUN_1415463aa(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined1 auStack_a8 [40];
  uint *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if ((lVar5 == 0) || (lVar5 = FUN_14007a5e6(), lVar5 == 0)) goto LAB_1415463e7;
  local_58 = 0;
  uStack_50 = 0;
  uVar16 = *(int *)((longlong)param_1 + 0x34) - (int)param_1[0x1d];
  if ('\0' < (char)uVar16) {
    puVar19 = (uint *)(param_1 + 10);
    iVar2 = (int)param_1[0xd];
    if (iVar2 == 0) {
      uVar20 = 1;
      uVar17 = 0;
      iVar13 = 0;
      iVar8 = 0;
    }
    else {
      puVar12 = (uint *)param_1[0xc];
      if ((uint *)param_1[0xc] == (uint *)0x0) {
        puVar12 = puVar19;
      }
      uVar15 = *puVar12;
      if (uVar15 == 0) {
        iVar13 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar13 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar9 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar9 = uVar17;
        }
        iVar13 = 0;
        do {
          if (uVar9 == uVar17) goto LAB_141546786;
          iVar13 = iVar13 + 0x20;
          uVar15 = puVar12[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar17 = 0;
        iVar13 = 0;
      }
      uVar20 = (ulonglong)(-uVar15 & uVar15);
      uVar9 = uVar20 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar8 = (iVar13 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      local_70 = param_1 + 0x25;
      local_78 = param_1 + 0x19;
      uVar15 = 0xffffffff;
      iVar3 = iVar2;
      local_80 = puVar19;
      local_68 = param_1;
LAB_1415464ee:
      uVar9 = uStack_50;
      lVar5 = param_1[8] + (longlong)iVar8 * 0x100;
      puVar12 = (uint *)(lVar5 + 0xe8);
      if ((int)param_1[0x1f] != *(int *)((longlong)param_1 + 0x124)) {
        plVar10 = (longlong *)param_1[0x26];
        if ((longlong *)param_1[0x26] == (longlong *)0x0) {
          plVar10 = local_70;
        }
        iVar6 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x27] - 1U & *puVar12) * 4);
        if (iVar6 != -1) {
          do {
            if (*(uint *)(param_1[0x1e] + (longlong)iVar6 * 0xc) == *puVar12) goto LAB_141546686;
            iVar6 = *(int *)(param_1[0x1e] + (longlong)iVar6 * 0xc + 4);
          } while (iVar6 != -1);
        }
      }
      lVar11 = param_1[8] + (longlong)iVar8 * 0x100;
      if ((int)param_1[0x13] != *(int *)((longlong)param_1 + 0xc4)) {
        uVar4 = *(uint *)(lVar11 + 8);
        plVar10 = (longlong *)param_1[0x1a];
        if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
          plVar10 = local_78;
        }
        iVar8 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x1b] - 1U & uVar4) * 4);
        if (iVar8 != -1) {
          lVar18 = param_1[0x12];
          iVar6 = iVar8;
          do {
            if (*(uint *)(lVar18 + (longlong)iVar6 * 0x10) == uVar4) goto LAB_1415465c3;
            iVar6 = *(int *)((longlong)iVar6 * 0x10 + lVar18 + 8);
          } while (iVar6 != -1);
        }
      }
      goto LAB_1415465ee;
    }
    goto LAB_141546786;
  }
  uVar17 = 0;
  goto LAB_141546797;
  while (iVar8 = *(int *)(lVar14 + 8), iVar8 != -1) {
LAB_1415465c3:
    lVar14 = lVar18 + (longlong)iVar8 * 0x10;
    if (*(uint *)(lVar18 + (longlong)iVar8 * 0x10) == uVar4) goto LAB_1415465e1;
  }
  lVar14 = 0;
LAB_1415465e1:
  if (*(uint *)(lVar14 + 4) != *puVar12) {
LAB_1415465ee:
    lVar18 = (longlong)(int)uStack_50;
    uVar4 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
    local_60 = uVar20;
    if (uStack_50._4_4_ < uVar4) {
      FUN_148f12af6(&local_58,uVar9 & 0xffffffff);
    }
    puVar1 = (undefined4 *)(local_58 + lVar18 * 0xf0);
    *puVar1 = *(undefined4 *)(lVar11 + 8);
    FUN_1406fd608(puVar1 + 2,lVar11 + 0x10);
    *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)puVar12;
    puVar1[0x3a] = *(undefined4 *)(lVar5 + 0xf0);
    param_1 = local_68;
    if ((char)uVar16 < '\x02') goto LAB_14154674e;
    uVar16 = (uint)(byte)((char)uVar16 - 1);
    iVar3 = (int)local_68[0xd];
    puVar19 = local_80;
    uVar20 = local_60;
  }
LAB_141546686:
  uVar15 = uVar15 & ~(uint)uVar20;
  puVar12 = (uint *)param_1[0xc];
  if ((uint *)param_1[0xc] == (uint *)0x0) {
    puVar12 = puVar19;
  }
  iVar8 = (int)uVar17;
  lVar5 = (longlong)iVar8;
  uVar4 = puVar12[lVar5] & uVar15;
  if (uVar4 == 0) {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    iVar6 = iVar6 >> 5;
    iVar13 = iVar13 + 0x20;
    iVar7 = iVar6;
    if (iVar6 < iVar8) {
      iVar7 = iVar8;
    }
    if (iVar8 < iVar6) {
      lVar11 = 0;
      do {
        uVar4 = puVar12[lVar5 + lVar11 + 1];
        if (uVar4 != 0) {
          uVar17 = (ulonglong)(iVar8 + (int)lVar11 + 1);
          uVar15 = 0xffffffff;
          goto LAB_1415466fb;
        }
        iVar13 = iVar13 + 0x20;
        lVar11 = lVar11 + 1;
      } while (iVar7 - lVar5 != lVar11);
      uVar15 = 0xffffffff;
      iVar8 = iVar7;
    }
    uVar17 = (ulonglong)(iVar8 + 1);
    puVar19 = local_80;
    iVar8 = iVar3;
  }
  else {
LAB_1415466fb:
    uVar20 = (ulonglong)(-uVar4 & uVar4);
    uVar9 = uVar20 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar8 = (iVar13 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
  }
  if (iVar8 == iVar2) goto LAB_14154674e;
  goto LAB_1415464ee;
LAB_14154674e:
  if ((longlong)(int)uStack_50 != 0) {
    lVar5 = (longlong)(int)uStack_50 * 0xf0;
    lVar11 = local_58 + 0xe0;
    do {
      FUN_14127fe9c(param_1,lVar11);
      lVar11 = lVar11 + 0xf0;
      lVar5 = lVar5 + -0xf0;
    } while (lVar5 != 0);
  }
LAB_141546786:
  FUN_14127fc36(param_1);
  uVar17 = uStack_50 & 0xffffffff;
LAB_141546797:
  FUN_148f12ac7(local_58,uVar17);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1415463e7:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415467be FUN_1415467be body=372 status=ok
// SIG undefined FUN_1415467be(void)

undefined8 FUN_1415467be(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  void *_Dst;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  void *local_40;
  uint local_34;
  uint *local_30;
  void **local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3d67c) && (FUN_144b3d300(&DAT_14cb3d67c), DAT_14cb3d67c == -1)) {
    DAT_14cb3d678 = FUN_144a8db9c(L"FNDI_SkeletalMesh_GeneratedData");
    _Init_thread_footer(&DAT_14cb3d67c);
  }
  local_34 = DAT_14cb3d678;
  plVar1 = (longlong *)(param_1 + 0x1b40);
  if (*(int *)(param_1 + 0x1b48) != *(int *)(param_1 + 0x1b74)) {
    lVar4 = param_1 + 0x1b78;
    if (*(longlong *)(param_1 + 0x1b80) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1b80);
    }
    uVar3 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1b88) - 1U & DAT_14cb3d678) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar3 * 0x18);
        if (*puVar2 == DAT_14cb3d678) {
          if (puVar2 != (uint *)0x0) goto LAB_141546864;
          break;
        }
        uVar3 = puVar2[4];
      } while (uVar3 != 0xffffffff);
    }
  }
  _Dst = (void *)FUN_14001cc68(0x90);
  memset(_Dst,0,0x90);
  FUN_145d6d16c(_Dst);
  local_28 = &local_40;
  local_30 = &local_34;
  local_40 = _Dst;
  FUN_145d6d1e0(plVar1,&local_1c);
  puVar2 = (uint *)(*plVar1 + (longlong)local_1c * 0x18);
LAB_141546864:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined8 *)(puVar2 + 2);
}



// FUNCTION 141546934 FUN_141546934 body=164 status=ok
// SIG undefined FUN_141546934(void)

void FUN_141546934(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Parameters";
  local_38 = 10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Parameters";
  local_38 = 10;
  FUN_140208c1e(&DAT_14caeae18,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415469da FUN_1415469da body=164 status=ok
// SIG undefined FUN_1415469da(void)

void FUN_1415469da(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate Extras";
  local_38 = 0x10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate Extras";
  local_38 = 0x10;
  FUN_140208c1e(&DAT_14caec018,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141546a80 FUN_141546a80 body=164 status=ok
// SIG undefined FUN_141546a80(void)

void FUN_141546a80(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXPremult";
  local_38 = 0x22;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13b68,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141546b26 FUN_141546b26 body=164 status=ok
// SIG undefined FUN_141546b26(void)

void FUN_141546b26(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXTextureSampleBlur";
  local_38 = 0x2c;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13d60,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141546bcc FUN_141546bcc body=164 status=ok
// SIG undefined FUN_141546bcc(void)

void FUN_141546bcc(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXUnpremult";
  local_38 = 0x24;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13d90,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141546c72 FUN_141546c72 body=206 status=ok
// SIG undefined FUN_141546c72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141546c72(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb973c8) {
    FUN_144b3d300(&DAT_14cb973c8);
    if (DAT_14cb973c8 == -1) {
      _DAT_14cb97330 = 0;
      uRam000000014cb97338 = 0;
      _DAT_14cb97340 = 2;
      DAT_14cb97348 = 0;
      _DAT_14cb97398 = 0;
      _DAT_14cb973a0 = 0;
      _DAT_14cb97350 = 0;
      uRam000000014cb97358 = 0;
      _DAT_14cb97360 = 0;
      uRam000000014cb97368 = 0;
      _DAT_14cb97370 = 0;
      uRam000000014cb97378 = 0;
      _DAT_14cb97380 = 0;
      _DAT_14cb973a4 = 0xffffffff00000080;
      _DAT_14cb973ac = 0;
      _DAT_14cb973b8 = 0;
      _DAT_14cb973c0 = 0;
      atexit((_func_5014 *)&LAB_143f2dec8);
      _Init_thread_footer(&DAT_14cb973c8);
    }
  }
  return &DAT_14cb97330;
}



// FUNCTION 141546d40 FUN_141546d40 body=423 status=ok
// SIG undefined FUN_141546d40(void)

undefined * FUN_141546d40(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca69b40) {
    FUN_144b3d300(&DAT_14ca69b40);
    if (DAT_14ca69b40 == -1) {
      FUN_145d7306c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"VolumetricCloudCommonParameters";
      local_78 = L"FVolumetricCloudCommonGlobalShaderParameters";
      local_50 = 0x370;
      local_58 = 0x42;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca69ac0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430f736a);
      _Init_thread_footer(&DAT_14ca69b40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca69ac0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141546ee8 FUN_141546ee8 body=107 status=ok
// SIG undefined FUN_141546ee8(void)

undefined1 FUN_141546ee8(void)

{
  char cVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c87d760) {
    FUN_144b3d300(&DAT_14c87d760);
    if (DAT_14c87d760 == -1) {
      cVar1 = FUN_145d736ae();
      if (cVar1 == '\0') {
        DAT_14c87d75c = FUN_145d7371a();
      }
      else {
        DAT_14c87d75c = 1;
      }
      _Init_thread_footer(&DAT_14c87d760);
    }
  }
  return DAT_14c87d75c;
}



// FUNCTION 141546f54 FUN_141546f54 body=194 status=ok
// SIG undefined FUN_141546f54(void)

undefined8 * FUN_141546f54(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b965920;
  FUN_1412cbb62(param_1 + 4);
  param_1[6] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 7) = 0;
  FUN_1405bceb4(param_1 + 6);
  *param_1 = &PTR_FUN_14b965460;
  param_1[4] = &PTR_FUN_14b965480;
  param_1[6] = &PTR_FUN_14b9654e0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 10) = 0x2ff;
  return param_1;
}



// FUNCTION 141547016 FUN_141547016 body=162 status=ok
// SIG undefined FUN_141547016(void)

void FUN_141547016(longlong *param_1,undefined8 param_2)

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
        goto LAB_1415470a3;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1415470a3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1415470b8 FUN_1415470b8 body=268 status=ok
// SIG undefined FUN_1415470b8(void)

void FUN_1415470b8(void)

{
  HMODULE hModule;
  undefined1 auStack_68 [32];
  _SYSTEM_INFO local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  GetSystemInfo(&local_48);
  if ((ulonglong)local_48.dwPageSize != 0) {
    DAT_14c75d698 = (ulonglong)local_48.dwPageSize;
  }
  DAT_14c8c47d8 = FUN_146835bfd();
  DAT_14c8c47e0 = FUN_146835c5c();
  hModule = LoadLibraryW(L"kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_14c8c47e8 = GetProcAddress(hModule,"GetCurrentProcessorNumberEx");
    DAT_14c8c47f0 = GetProcAddress(hModule,"GetNumaProcessorNodeEx");
    DAT_14c8c47f8 = GetProcAddress(hModule,"GetNumaNodeProcessorMaskEx");
    FreeLibrary(hModule);
  }
  if (DAT_14c75ea64 == 0) {
    FUN_1412bb367(&DAT_14c75ea60);
  }
  if (DAT_14c75ea60 == 0) {
    if (DAT_14c75ea7c == 0) {
      FUN_1412bb367(&DAT_14c75ea78);
    }
    if (DAT_14c75ea78 == 0) goto LAB_141547184;
  }
  FUN_146838864();
LAB_141547184:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415471c6 FUN_1415471c6 body=68 status=ok
// SIG undefined FUN_1415471c6(void)

void FUN_1415471c6(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_1400ab9ae(param_1 + 0x60);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154720c FUN_14154720c body=319 status=ok
// SIG undefined FUN_14154720c(void)

undefined2 * FUN_14154720c(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined8 *)0x0;
  local_78 = 0x408;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5d60;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82,&local_80);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5d90;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154734c FUN_14154734c body=324 status=ok
// SIG undefined FUN_14154734c(void)

undefined2 *
FUN_14154734c(undefined8 param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x810;
  local_76 = (*(byte *)(param_4 + 1) & 0xc) << 2 | *(byte *)(param_4 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_4;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a475b50;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a475b20;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_4 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a475b80;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141547492 FUN_141547492 body=324 status=ok
// SIG undefined FUN_141547492(void)

undefined2 * FUN_141547492(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x410;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x46;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5de0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5db0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5e10;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415475d8 FUN_1415475d8 body=335 status=ok
// SIG undefined FUN_1415475d8(void)

undefined2 * FUN_1415475d8(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x848;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5620;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c55f0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5650;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141547728 FUN_141547728 body=324 status=ok
// SIG undefined FUN_141547728(void)

undefined2 * FUN_141547728(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x818;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x46;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5ac0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5a90;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5af0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154786e FUN_14154786e body=335 status=ok
// SIG undefined FUN_14154786e(void)

undefined2 * FUN_14154786e(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x820;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c54a0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5470;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c54d0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415479be FUN_1415479be body=335 status=ok
// SIG undefined FUN_1415479be(void)

undefined2 * FUN_1415479be(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x101;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c57f0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c57c0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5820;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141547b0e FUN_141547b0e body=319 status=ok
// SIG undefined FUN_141547b0e(void)

undefined2 * FUN_141547b0e(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined8 *)0x0;
  local_78 = 0x101;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5770;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82,&local_80);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c57a0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141547c4e FUN_141547c4e body=319 status=ok
// SIG undefined FUN_141547c4e(void)

undefined2 * FUN_141547c4e(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined8 *)0x0;
  local_78 = 0x408;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5940;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82,&local_80);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5970;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141547d8e FUN_141547d8e body=319 status=ok
// SIG undefined FUN_141547d8e(void)

undefined2 * FUN_141547d8e(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined8 *)0x0;
  local_78 = 0x408;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5d10;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82,&local_80);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5d40;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141547ece FUN_141547ece body=324 status=ok
// SIG undefined FUN_141547ece(void)

undefined2 * FUN_141547ece(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x818;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x46;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c58f0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c58c0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5920;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141548014 FUN_141548014 body=324 status=ok
// SIG undefined FUN_141548014(void)

undefined2 * FUN_141548014(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x418;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x46;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5a40;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5a10;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5a70;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154815a FUN_14154815a body=324 status=ok
// SIG undefined FUN_14154815a(void)

undefined2 * FUN_14154815a(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x808;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5b40;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5b10;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5b70;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415482a0 FUN_1415482a0 body=324 status=ok
// SIG undefined FUN_1415482a0(void)

undefined2 * FUN_1415482a0(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x808;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5bc0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5b90;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5bf0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415483e6 FUN_1415483e6 body=324 status=ok
// SIG undefined FUN_1415483e6(void)

undefined2 * FUN_1415483e6(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x808;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5c40;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5c10;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5c70;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154852c FUN_14154852c body=324 status=ok
// SIG undefined FUN_14154852c(void)

undefined2 * FUN_14154852c(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x410;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x46;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5cc0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5c90;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5cf0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141548672 FUN_141548672 body=324 status=ok
// SIG undefined FUN_141548672(void)

undefined2 * FUN_141548672(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x808;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5ee0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5eb0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5f10;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415487b8 FUN_1415487b8 body=324 status=ok
// SIG undefined FUN_1415487b8(void)

undefined2 * FUN_1415487b8(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x460;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x46;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5f60;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5f30;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5f90;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415488fe FUN_1415488fe body=324 status=ok
// SIG undefined FUN_1415488fe(void)

undefined2 * FUN_1415488fe(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x840;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5fe0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5fb0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c6010;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141548a44 FUN_141548a44 body=324 status=ok
// SIG undefined FUN_141548a44(void)

undefined2 * FUN_141548a44(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x820;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c6060;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c6030;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c6090;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141548b8a FUN_141548b8a body=335 status=ok
// SIG undefined FUN_141548b8a(void)

undefined2 * FUN_141548b8a(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x820;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5520;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c54f0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5550;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141548cda FUN_141548cda body=335 status=ok
// SIG undefined FUN_141548cda(void)

undefined2 * FUN_141548cda(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x820;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c55a0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5570;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c55d0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141548e2a FUN_141548e2a body=335 status=ok
// SIG undefined FUN_141548e2a(void)

undefined2 * FUN_141548e2a(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x818;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c56a0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5670;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c56d0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141548f7a FUN_141548f7a body=335 status=ok
// SIG undefined FUN_141548f7a(void)

undefined2 * FUN_141548f7a(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x102;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5720;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c56f0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5750;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415490ca FUN_1415490ca body=335 status=ok
// SIG undefined FUN_1415490ca(void)

undefined2 * FUN_1415490ca(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x810;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 2;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5870;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5840;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c58a0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154921a FUN_14154921a body=335 status=ok
// SIG undefined FUN_14154921a(void)

undefined2 * FUN_14154921a(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x418;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c59c0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5990;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c59f0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154936a FUN_14154936a body=335 status=ok
// SIG undefined FUN_14154936a(void)

undefined2 * FUN_14154936a(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x414;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a4c5e60;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4c5e30;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4c5e90;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415494ba FUN_1415494ba body=228 status=ok
// SIG undefined FUN_1415494ba(void)

longlong FUN_1415494ba(void)

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
  if (DAT_14cac0dd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_14786c29d;
    local_40 = &LAB_145ac5e31;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"ExponentialHeightFogComponent",&DAT_14cac0dd0,FUN_14637729e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac0dd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415495a0 FUN_1415495a0 body=228 status=ok
// SIG undefined FUN_1415495a0(void)

longlong FUN_1415495a0(void)

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
  if (DAT_14cad2d00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147a18349;
    local_40 = &LAB_145adb96b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x3b0;
    FUN_14081cfa3(L"/Script/Engine",L"SkyAtmosphereComponent",&DAT_14cad2d00,FUN_1463bd6c8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad2d00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141549685 FUN_141549685 body=95 status=ok
// SIG undefined FUN_141549685(void)

void FUN_141549685(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1415496e4 FUN_1415496e4 body=123 status=ok
// SIG undefined FUN_1415496e4(void)

void FUN_1415496e4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afccff0;
  param_1[3] = &PTR_FUN_14afcd0a0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x10))(lVar1 + 0x10,1);
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x30))(lVar1 + 8,1);
  }
  FUN_145bfbed6(param_1 + 3);
  return;
}



// FUNCTION 141549760 FUN_141549760 body=386 status=ok
// SIG undefined FUN_141549760(void)

longlong * FUN_141549760(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_141549871:
    *puVar5 = &PTR_LAB_14b4ed500;
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
    *puVar5 = &PTR_FUN_14b4ed490;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_141549871;
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
    *puVar5 = &PTR_LAB_14b4ed500;
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
    *puVar5 = &PTR_FUN_14b4ed490;
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



// FUNCTION 1415498e2 FUN_1415498e2 body=745 status=ok
// SIG undefined FUN_1415498e2(void)

void FUN_1415498e2(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1;
  plVar5 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b4ed570;
  plVar1 = plVar5 + 2;
  plVar10 = (longlong *)*param_4;
  plVar7 = (longlong *)0x0;
  *param_4 = 0;
  iVar8 = (int)param_4[1];
  local_60 = (longlong *)CONCAT44(local_60._4_4_,iVar8);
  *(undefined4 *)(param_4 + 1) = 0;
  lVar3 = *param_3;
  uVar9 = *param_2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined1 *)(plVar5 + 5) = 0;
  iVar4 = DAT_14cb970bc + 1;
  *(int *)((longlong)plVar5 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar4;
  plVar5[7] = 0;
  *(undefined4 *)(plVar5 + 8) = uVar9;
  plVar5[9] = lVar3;
  plVar5[2] = (longlong)&PTR_FUN_14b4e8060;
  plVar5[6] = (longlong)&PTR_LAB_14b4e8088;
  plVar5[10] = 0;
  *(undefined4 *)(plVar5 + 0xb) = 0;
  local_58 = (longlong *)0x0;
  local_50._0_4_ = 0;
  uVar9 = 0;
  local_68 = plVar10;
  if (plVar10 == (longlong *)0x0 || iVar8 == 0) {
LAB_1415499c3:
    local_50._0_4_ = 0;
    local_58 = (longlong *)0x0;
    plVar5[10] = (longlong)plVar7;
    *(undefined4 *)(plVar5 + 0xb) = uVar9;
LAB_1415499cb:
    *(undefined4 *)(plVar5 + 0xc) = 2;
    if (iVar8 != 0) {
      if (plVar10 == (longlong *)0x0) goto LAB_141549aaf;
      goto LAB_141549a79;
    }
  }
  else {
    (**(code **)(*plVar10 + 0x40))(plVar10,&local_58);
    uVar9 = (int)local_50;
    plVar7 = local_58;
    puVar6 = (undefined8 *)plVar5[10];
    local_58 = (longlong *)0x0;
    local_50._0_4_ = 0;
    if ((int)plVar5[0xb] != 0) {
      if (puVar6 == (undefined8 *)0x0) goto LAB_1415499c3;
      (**(code **)*puVar6)(puVar6,0);
      FUN_1446efa72(plVar5 + 10,0,0,0x10);
      *(undefined4 *)(plVar5 + 0xb) = 0;
      puVar6 = (undefined8 *)plVar5[10];
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    plVar5[10] = (longlong)plVar7;
    *(undefined4 *)(plVar5 + 0xb) = uVar9;
    if ((int)local_50 == 0) {
LAB_141549a69:
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
        plVar10 = local_68;
        iVar8 = (int)local_60;
        goto LAB_1415499cb;
      }
    }
    else if (local_58 != (longlong *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50._0_4_ = 0;
      goto LAB_141549a69;
    }
    *(undefined4 *)(plVar5 + 0xc) = 2;
LAB_141549a79:
    (**(code **)*plVar10)(plVar10,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
    plVar10 = local_68;
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_1400020a8(plVar10);
  }
LAB_141549aaf:
  local_68 = plVar1;
  local_60 = plVar5;
  FUN_148a938fa(&local_68,plVar1);
  local_58 = plVar1;
  local_50 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    FUN_145837c4c(local_70,&local_58);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_145837c4c(local_70);
    if (plVar5 != (longlong *)0x0) {
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
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_60 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141549bcc FUN_141549bcc body=2300 status=ok
// SIG undefined FUN_141549bcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141549bcc(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  double *pdVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  uint uVar9;
  byte bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double _X;
  double _X_00;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double _X_01;
  undefined1 auStack_148 [32];
  double *local_128;
  undefined1 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  bVar3 = *(byte *)((longlong)param_1 + 0x1fa);
  if ((bVar3 & 0x20) != 0) {
    lVar5 = param_1[0x2b];
    param_1[0x2b] = param_1[0x24];
    param_1[0x24] = lVar5;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    lVar5 = param_1[0x26];
    param_1[0x26] = param_1[0x25];
    param_1[0x25] = lVar5;
    if (((char)param_1[0x3f] < '\0') && ((*(byte *)((longlong)param_1 + 0x1fa) & 0x10) == 0)) {
      local_e8 = DAT_14c8464f0;
      local_f8 = DAT_14c8464e0;
      lStack_f0 = DAT_14c8464e8;
      FUN_144a62f0c(param_1,param_1[7],5);
      param_1[0x35] = local_e8;
      param_1[0x33] = local_f8;
      param_1[0x34] = lStack_f0;
    }
    bVar3 = *(byte *)((longlong)param_1 + 0x1f9);
    if (((bVar3 & 1) != 0) && ((*(byte *)((longlong)param_1 + 0x1fa) & 0x10) == 0)) {
      local_108 = DAT_14c846508;
      local_118 = DAT_14c8464f8;
      dStack_110 = DAT_14c846500;
      FUN_144a62f0c(param_1,param_1[7],6);
      param_1[0x38] = (longlong)local_108;
      param_1[0x36] = (longlong)local_118;
      param_1[0x37] = (longlong)dStack_110;
      bVar3 = *(byte *)((longlong)param_1 + 0x1f9);
    }
    if (((bVar3 & 2) != 0) && ((*(byte *)((longlong)param_1 + 0x1fa) & 0x10) == 0)) {
      dVar11 = DAT_14c846510;
      if (ABS((float)DAT_14c846510) < 0.001) {
        dVar11 = (double)((ulonglong)((uint)((ulonglong)DAT_14c846510 >> 0x20) & 0x80000000) << 0x20
                         | 0x3f50624de0000000);
      }
      dVar12 = DAT_14c846518;
      if (ABS((float)DAT_14c846518) < 0.001) {
        dVar12 = (double)((ulonglong)((uint)((ulonglong)DAT_14c846518 >> 0x20) & 0x80000000) << 0x20
                         | 0x3f50624de0000000);
      }
      dVar13 = DAT_14c846520;
      if (ABS((float)DAT_14c846520) < 0.001) {
        dVar13 = (double)((ulonglong)((uint)((ulonglong)DAT_14c846520 >> 0x20) & 0x80000000) << 0x20
                         | 0x3f50624de0000000);
      }
      FUN_144a62f0c(param_1,param_1[7],7);
      param_1[0x39] = (longlong)dVar11;
      param_1[0x3a] = (longlong)dVar12;
      param_1[0x3b] = (longlong)dVar13;
    }
    bVar3 = *(byte *)(param_1 + 0x3f);
    bVar10 = bVar3 & 0x40;
    if (bVar10 == 0 && param_1[0x24] != 0) {
      (**(code **)(*param_1 + 0x4a0))(param_1,&DAT_14cadad9c);
    }
    else {
      bVar1 = *(byte *)((longlong)param_1 + 0x1f9);
      (**(code **)(*param_1 + 0x490))(param_1,param_1[0x2b],&DAT_14cadad98,param_1[0x26]);
      *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xbf | bVar10;
      uVar2 = param_1[7];
      if (uVar2 < 0xffffffff00000000) {
        plVar8 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar2,0xc);
      }
      else {
        uVar9 = (uint)uVar2;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
          puVar6 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar6 = DAT_14c998080;
          }
          if ((*(uint *)(puVar6 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
            lVar5 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
            puVar7 = *(uint **)(lVar5 + 0x18);
            if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
              puVar7 = (uint *)(lVar5 + 8);
            }
            *puVar7 = *puVar7 | 0x1000;
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
          }
        }
      }
      *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0x7f | bVar3 & 0x80;
      uVar2 = param_1[7];
      if (uVar2 < 0xffffffff00000000) {
        plVar8 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar2,0xd);
      }
      else {
        uVar9 = (uint)uVar2;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
          puVar6 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar6 = DAT_14c998080;
          }
          if ((*(uint *)(puVar6 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
            lVar5 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
            puVar7 = *(uint **)(lVar5 + 0x18);
            if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
              puVar7 = (uint *)(lVar5 + 8);
            }
            *puVar7 = *puVar7 | 0x2000;
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
          }
        }
      }
      *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) & 0xfe | bVar1 & 1
      ;
      uVar2 = param_1[7];
      if (uVar2 < 0xffffffff00000000) {
        plVar8 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar2,0xe);
      }
      else {
        uVar9 = (uint)uVar2;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
          puVar6 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar6 = DAT_14c998080;
          }
          if ((*(uint *)(puVar6 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
            lVar5 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
            puVar7 = *(uint **)(lVar5 + 0x18);
            if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
              puVar7 = (uint *)(lVar5 + 8);
            }
            *puVar7 = *puVar7 | 0x4000;
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
          }
        }
      }
      *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) & 0xfd | bVar1 & 2
      ;
      uVar2 = param_1[7];
      if (uVar2 < 0xffffffff00000000) {
        plVar8 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar2,0xf);
      }
      else {
        uVar9 = (uint)uVar2;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
          puVar6 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar6 = DAT_14c998080;
          }
          if ((*(uint *)(puVar6 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
            lVar5 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
            puVar7 = *(uint **)(lVar5 + 0x18);
            if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
              puVar7 = (uint *)(lVar5 + 8);
            }
            *puVar7 = *puVar7 | 0x8000;
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
          }
        }
      }
    }
    bVar3 = *(byte *)((longlong)param_1 + 0x1fa) & 0xdf;
    *(byte *)((longlong)param_1 + 0x1fa) = bVar3;
  }
  if ((bVar3 & 0x10) != 0) {
    auVar16 = *(undefined1 (*) [16])(param_1 + 0x36);
    dVar12 = auVar16._0_8_;
    dVar13 = auVar16._8_8_;
    dVar11 = (double)param_1[0x38];
    pdVar4 = (double *)param_1[0x46];
    if (pdVar4 == (double *)0x0) {
      pdVar4 = (double *)FUN_14001cc68(0x40,0x10);
      dVar14 = DAT_14c8463d8;
      *pdVar4 = DAT_14c8463d0;
      pdVar4[1] = dVar14;
      dVar14 = DAT_14c8463e8;
      pdVar4[2] = DAT_14c8463e0;
      pdVar4[3] = dVar14;
      dVar14 = DAT_14c846500;
      pdVar4[4] = DAT_14c8464f8;
      pdVar4[5] = dVar14;
      pdVar4[6] = DAT_14c846508;
      param_1[0x46] = (longlong)pdVar4;
    }
    auVar20 = _DAT_1499387d0;
    if ((((pdVar4[4] != dVar12) || (NAN(pdVar4[4]) || NAN(dVar12))) || (pdVar4[5] != dVar13)) ||
       (((NAN(pdVar4[5]) || NAN(dVar13) || (pdVar4[6] != dVar11)) || (NAN(pdVar4[6]) || NAN(dVar11))
        ))) {
      auVar22._8_8_ = 0;
      auVar22._0_8_ = dVar11;
      dVar14 = (double)DAT_1499387d0;
      dVar15 = DAT_1499387d0._8_8_;
      auVar16 = divpd(auVar16,_DAT_1499387d0);
      auVar19 = divpd(auVar22,_DAT_1499387d0);
      auVar16 = roundpd(auVar16,auVar16,3);
      auVar19 = roundpd(auVar19,auVar19,3);
      auVar28._0_8_ = dVar12 - auVar16._0_8_ * dVar14;
      auVar28._8_8_ = dVar13 - auVar16._8_8_ * dVar15;
      auVar23._0_8_ = dVar11 - auVar19._0_8_ * dVar14;
      auVar23._8_8_ = 0.0 - auVar19._8_8_ * dVar15;
      auVar26._0_8_ = auVar28._0_8_ + dVar14;
      auVar26._8_8_ = auVar28._8_8_ + dVar15;
      auVar21._0_8_ = auVar23._0_8_ + dVar14;
      auVar21._8_8_ = auVar23._8_8_ + dVar15;
      auVar19._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
      auVar19._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
      auVar16 = blendvpd(auVar26,auVar28,auVar19);
      auVar27._8_8_ = -(ulonglong)(0.0 <= auVar23._8_8_);
      auVar27._0_8_ = -(ulonglong)(0.0 <= auVar23._0_8_);
      auVar19 = blendvpd(auVar21,auVar23,auVar27);
      auVar24._0_8_ = auVar16._0_8_ + -360.0;
      auVar24._8_8_ = auVar16._8_8_ + -360.0;
      auVar17._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
      auVar17._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
      auVar27 = blendvpd(auVar16,auVar24,auVar17);
      auVar18._8_8_ = -(ulonglong)(180.0 < auVar19._8_8_);
      auVar18._0_8_ = -(ulonglong)(180.0 < auVar19._0_8_);
      auVar16._8_8_ = auVar19._8_8_ + 0.0;
      auVar16._0_8_ = auVar19._0_8_ + -360.0;
      auVar16 = blendvpd(auVar19,auVar16,auVar18);
      *(undefined1 (*) [16])(pdVar4 + 4) = auVar27;
      dVar11 = auVar16._0_8_;
      pdVar4[6] = dVar11;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = dVar11;
      auVar16 = divpd(auVar27,auVar20);
      auVar20 = divpd(auVar29,auVar20);
      auVar16 = roundpd(auVar16,auVar16,3);
      auVar20 = roundpd(auVar20,auVar20,3);
      dVar25 = (auVar27._0_8_ - auVar16._0_8_ * dVar14) * 0.008726646259971648;
      _X = (auVar27._8_8_ - auVar16._8_8_ * dVar15) * 0.008726646259971648;
      _X_00 = (dVar11 - auVar20._0_8_ * dVar14) * 0.008726646259971648;
      _X_01 = (0.0 - auVar20._8_8_ * dVar15) * 0.008726646259971648;
      dVar11 = sin(dVar25);
      dVar12 = sin(_X);
      dVar13 = sin(_X_00);
      sin(_X_01);
      dVar14 = cos(dVar25);
      dVar15 = cos(_X);
      dVar25 = cos(_X_00);
      cos(_X_01);
      *pdVar4 = dVar11 * dVar12 * dVar25 - dVar14 * dVar15 * dVar13;
      pdVar4[1] = -(dVar11 * dVar15 * dVar25) - dVar14 * dVar12 * dVar13;
      pdVar4[2] = -(dVar15 * dVar11 * dVar13) + dVar12 * dVar14 * dVar25;
      pdVar4[3] = dVar12 * dVar11 * dVar13 + dVar15 * dVar14 * dVar25;
    }
    local_d8 = *pdVar4;
    dStack_d0 = pdVar4[1];
    local_c8 = pdVar4[2];
    dStack_c0 = pdVar4[3];
    local_128 = &local_d8;
    local_120 = 0;
    FUN_140092404(param_1,param_1[0x24],param_1[0x25],0);
    *(byte *)((longlong)param_1 + 0x1fa) = *(byte *)((longlong)param_1 + 0x1fa) & 0xef;
  }
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14154a4ca FUN_14154a4ca body=307 status=ok
// SIG undefined FUN_14154a4ca(void)

void FUN_14154a4ca(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  lVar8 = (longlong)(int)param_1[1];
  if (lVar8 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar7 = lVar8 + 1;
    lVar8 = lVar8 * 0x10 + -8;
    bVar6 = 0;
    do {
      if (((*(int *)(*param_1 + lVar8) == 0) ||
          (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
         cVar3 == '\0')) {
        bVar6 = 1;
      }
      uVar7 = uVar7 - 1;
      lVar8 = lVar8 + -0x10;
    } while (1 < uVar7);
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar1 + -1;
    if ((bool)(bVar6 & iVar1 < 2)) {
      iVar1 = (int)param_1[1];
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar5 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*param_1 + (longlong)iVar5 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar5);
            FUN_14005b248(param_1);
          }
          else {
            iVar5 = iVar5 + 1;
          }
          iVar4 = (int)param_1[1];
        } while (iVar5 < iVar4);
      }
      iVar5 = 2;
      if (2 < iVar4 * 2) {
        iVar5 = iVar4 * 2;
      }
      *(int *)(param_1 + 2) = iVar5;
      if ((iVar5 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14154a5fe FUN_14154a5fe body=31 status=ok
// SIG undefined FUN_14154a5fe(void)

void FUN_14154a5fe(longlong param_1)

{
  if (*(char *)(param_1 + 0x7e) == '\x01') {
    FUN_14143b896(param_1,2);
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  return;
}



// FUNCTION 14154a61e FUN_14154a61e body=609 status=ok
// SIG undefined FUN_14154a61e(void)

void FUN_14154a61e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_14480f766(&DAT_14cadbe48);
    *(undefined8 *)(param_1 + 0x410) = 0;
  }
  if (((*(longlong *)(param_1 + 0x2f8) != 0) && (*(longlong *)(param_1 + 0x300) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x300) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x2f8);
    local_20 = *(longlong *)(param_1 + 0x300);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar3 = *(longlong **)(param_1 + 0x300);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x308) != 0) && (*(longlong *)(param_1 + 0x310) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x310) + 8))) {
    FUN_1401cb356();
    local_38 = *(undefined8 *)(param_1 + 0x308);
    local_30 = *(longlong *)(param_1 + 0x310);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_38);
    plVar3 = *(longlong **)(param_1 + 0x310);
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  FUN_140457ffc(&DAT_14c867518,param_1);
  FUN_140457ffc(param_1 + 0x60,param_1);
  FUN_140457ffc(&DAT_14c964278,param_1);
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  if (((*(longlong *)(param_1 + 0x2e0) != 0) && (*(longlong *)(param_1 + 0x1e0) != 0)) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x30), lVar4 != 0)) {
    FUN_1489b0474(lVar4,param_1 + 0x2e0);
  }
  if (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x2a8))();
    lVar4 = *(longlong *)(param_1 + 0x1e0);
    FUN_144757f48(lVar4,0x40000000);
    uVar2 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    do {
      uVar2 = *(uint *)(lVar4 + 8);
      if ((uVar2 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar5 = uVar2 == *(uint *)(lVar4 + 8);
      if (bVar5) {
        *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
      }
      UNLOCK();
    } while (!bVar5);
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x380);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x48) = 0;
    if (*(longlong *)(lVar4 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145d0d594(lVar4);
    FUN_1400020a8(lVar4);
    *(undefined8 *)(param_1 + 0x380) = 0;
  }
  FUN_145c8c958(param_1);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_145ded188(param_1);
  return;
}



// FUNCTION 14154a880 FUN_14154a880 body=226 status=ok
// SIG undefined FUN_14154a880(void)

longlong * FUN_14154a880(longlong *param_1)

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
  pcVar13 = FUN_1462e7492;
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



// FUNCTION 14154a964 FUN_14154a964 body=164 status=ok
// SIG undefined FUN_14154a964(void)

void FUN_14154a964(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Parameters";
  local_38 = 10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Parameters";
  local_38 = 10;
  FUN_140208c1e(&DAT_14caeaa70,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154aa0a FUN_14154aa0a body=57 status=ok
// SIG undefined FUN_14154aa0a(void)

void FUN_14154aa0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57c88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57c88 = FUN_140002ddd(FUN_141848bd2,uVar1,L"GameResourcePoolDef");
  }
  return;
}



// FUNCTION 14154aa44 FUN_14154aa44 body=164 status=ok
// SIG undefined FUN_14154aa44(void)

void FUN_14154aa44(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXRemap";
  local_38 = 0x20;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13c10,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


