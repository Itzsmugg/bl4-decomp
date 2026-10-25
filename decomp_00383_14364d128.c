// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14364d128 FUN_14364d128 body=796 status=ok
// SIG undefined FUN_14364d128(void)

void FUN_14364d128(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uStack_40 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_88);
  uStack_3c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_88) >> 0x20);
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1408a629c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar8 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar8 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar8);
          if (cVar6 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar9,&local_44);
            goto LAB_14364d2fe;
          }
        }
        _Src = (undefined4 *)(lVar9 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_44,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar8[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,&local_44,lVar9,1);
      }
      else {
        (*pcVar3)(plVar8,&local_44,lVar9);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_44 = (undefined4)uVar2;
      uStack_40 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_44);
    }
  }
LAB_14364d2fe:
  uVar5 = local_44;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar8 = (longlong *)FUN_140389788();
  lVar9 = plVar8[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 1000))(plVar8);
    lVar9 = plVar8[0x22];
  }
  if ((*(byte *)(lVar9 + 0x48) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x62c) = uVar5;
  }
  if ((CONCAT44(uStack_3c,uStack_40) ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14364d446 FUN_14364d446 body=796 status=ok
// SIG undefined FUN_14364d446(void)

void FUN_14364d446(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uStack_40 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_88);
  uStack_3c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_88) >> 0x20);
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1408a629c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar8 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar8 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar8);
          if (cVar6 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar9,&local_44);
            goto LAB_14364d61c;
          }
        }
        _Src = (undefined4 *)(lVar9 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_44,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar8[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,&local_44,lVar9,1);
      }
      else {
        (*pcVar3)(plVar8,&local_44,lVar9);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_44 = (undefined4)uVar2;
      uStack_40 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_44);
    }
  }
LAB_14364d61c:
  uVar5 = local_44;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar8 = (longlong *)FUN_140389788();
  lVar9 = plVar8[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 1000))(plVar8);
    lVar9 = plVar8[0x22];
  }
  if ((*(byte *)(lVar9 + 0x48) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x630) = uVar5;
  }
  if ((CONCAT44(uStack_3c,uStack_40) ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14364d764 FUN_14364d764 body=796 status=ok
// SIG undefined FUN_14364d764(void)

void FUN_14364d764(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uStack_40 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_88);
  uStack_3c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_88) >> 0x20);
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1408a629c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar8 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar8 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar8);
          if (cVar6 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar9,&local_44);
            goto LAB_14364d93a;
          }
        }
        _Src = (undefined4 *)(lVar9 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_44,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar8[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,&local_44,lVar9,1);
      }
      else {
        (*pcVar3)(plVar8,&local_44,lVar9);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_44 = (undefined4)uVar2;
      uStack_40 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_44);
    }
  }
LAB_14364d93a:
  uVar5 = local_44;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar8 = (longlong *)FUN_140389788();
  lVar9 = plVar8[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 1000))(plVar8);
    lVar9 = plVar8[0x22];
  }
  if ((*(byte *)(lVar9 + 0x48) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x628) = uVar5;
  }
  if ((CONCAT44(uStack_3c,uStack_40) ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14364da82 FUN_14364da82 body=435 status=ok
// SIG undefined FUN_14364da82(void)

void FUN_14364da82(longlong param_1,float param_2,float param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 auStack_78 [40];
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)(param_1 + 2000) & 1) != 0) || (0 < *DAT_14caf9e80))
  goto switchD_14364db01_caseD_2;
  switch(param_4) {
  case 0:
    *(undefined8 *)(param_1 + 0x540) = 0;
    plVar3 = *(longlong **)(param_1 + 0x548);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x548) = 0;
LAB_14364db95:
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
    break;
  case 1:
    *(undefined8 *)(param_1 + 0x550) = 0;
    plVar3 = *(longlong **)(param_1 + 0x558);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x558) = 0;
      goto LAB_14364db95;
    }
    break;
  default:
    goto switchD_14364db01_caseD_2;
  case 5:
    *(undefined8 *)(param_1 + 0x560) = 0;
    plVar3 = *(longlong **)(param_1 + 0x568);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x568) = 0;
      goto LAB_14364db95;
    }
    break;
  case 6:
    *(undefined8 *)(param_1 + 0x570) = 0;
    plVar3 = *(longlong **)(param_1 + 0x578);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x578) = 0;
      goto LAB_14364db95;
    }
  }
  if ((*(longlong *)(param_1 + 0x430) != 0) &&
     (plVar3 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe0))(), plVar3 != (longlong *)0x0)) {
    fVar4 = 1.0;
    if (param_2 <= 1.0) {
      fVar4 = param_2;
    }
    local_50 = ~-(uint)(param_2 < 0.0) & (uint)fVar4;
    fVar4 = 1.0;
    if (param_3 <= 1.0) {
      fVar4 = param_3;
    }
    local_4c = ~-(uint)(param_3 < 0.0) & (uint)fVar4;
    local_48 = 0;
    (**(code **)(*plVar3 + 0x18))
              (plVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0xe0),param_4);
  }
switchD_14364db01_caseD_2:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14364dc36 FUN_14364dc36 body=782 status=ok
// SIG undefined FUN_14364dc36(void)

void FUN_14364dc36(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar8 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar8 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar8);
          if (cVar6 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&local_2c);
            goto LAB_14364de07;
          }
        }
        _Src = (int *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_2c,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar8[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,&local_2c,lVar4,1);
      }
      else {
        (*pcVar3)(plVar8,&local_2c,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_14364de07:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(uint *)(param_1 + 0x634) = *(uint *)(param_1 + 0x634) & 0xffffffbf | (uint)(local_2c != 0) << 6;
  if (local_2c != 0) {
    plVar8 = (longlong *)FUN_140389788();
    if (plVar8[0x22] == 0) {
      (**(code **)(*plVar8 + 1000))(plVar8);
    }
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14364df45 FUN_14364df45 body=69 status=ok
// SIG undefined FUN_14364df45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364df45(void)

{
  _DAT_14caf9d00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364df87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9d08,1);
  return;
}



// FUNCTION 14364df8a FUN_14364df8a body=69 status=ok
// SIG undefined FUN_14364df8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364df8a(void)

{
  _DAT_14caf9d18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364dfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9d20,1);
  return;
}



// FUNCTION 14364dfcf FUN_14364dfcf body=69 status=ok
// SIG undefined FUN_14364dfcf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364dfcf(void)

{
  _DAT_14caf9d30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9d38,1);
  return;
}



// FUNCTION 14364e014 FUN_14364e014 body=69 status=ok
// SIG undefined FUN_14364e014(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e014(void)

{
  _DAT_14caf9d40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9d48,1);
  return;
}



// FUNCTION 14364e059 FUN_14364e059 body=69 status=ok
// SIG undefined FUN_14364e059(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e059(void)

{
  _DAT_14caf9d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9d60,1);
  return;
}



// FUNCTION 14364e09e FUN_14364e09e body=69 status=ok
// SIG undefined FUN_14364e09e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e09e(void)

{
  _DAT_14caf9d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9d70,1);
  return;
}



// FUNCTION 14364e0e3 FUN_14364e0e3 body=69 status=ok
// SIG undefined FUN_14364e0e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e0e3(void)

{
  _DAT_14caf9d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9d80,1);
  return;
}



// FUNCTION 14364e128 FUN_14364e128 body=69 status=ok
// SIG undefined FUN_14364e128(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e128(void)

{
  _DAT_14caf9d88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e16a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9d90,1);
  return;
}



// FUNCTION 14364e16d FUN_14364e16d body=69 status=ok
// SIG undefined FUN_14364e16d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e16d(void)

{
  _DAT_14caf9d98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e1af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9da0,1);
  return;
}



// FUNCTION 14364e1b2 FUN_14364e1b2 body=69 status=ok
// SIG undefined FUN_14364e1b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e1b2(void)

{
  _DAT_14caf9da8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9db0,1);
  return;
}



// FUNCTION 14364e1f7 FUN_14364e1f7 body=69 status=ok
// SIG undefined FUN_14364e1f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e1f7(void)

{
  _DAT_14caf9db8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9dc0,1);
  return;
}



// FUNCTION 14364e23c FUN_14364e23c body=69 status=ok
// SIG undefined FUN_14364e23c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e23c(void)

{
  _DAT_14caf9dc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e27e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9dd0,1);
  return;
}



// FUNCTION 14364e281 FUN_14364e281 body=69 status=ok
// SIG undefined FUN_14364e281(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e281(void)

{
  _DAT_14caf9dd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9de0,1);
  return;
}



// FUNCTION 14364e2c6 FUN_14364e2c6 body=69 status=ok
// SIG undefined FUN_14364e2c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e2c6(void)

{
  _DAT_14caf9de8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9df0,1);
  return;
}



// FUNCTION 14364e30b FUN_14364e30b body=69 status=ok
// SIG undefined FUN_14364e30b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e30b(void)

{
  _DAT_14caf9df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e34d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9e00,1);
  return;
}



// FUNCTION 14364e350 FUN_14364e350 body=69 status=ok
// SIG undefined FUN_14364e350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e350(void)

{
  _DAT_14caf9e08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9e10,1);
  return;
}



// FUNCTION 14364e395 FUN_14364e395 body=69 status=ok
// SIG undefined FUN_14364e395(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e395(void)

{
  _DAT_14caf9e18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e3d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9e20,1);
  return;
}



// FUNCTION 14364e3da FUN_14364e3da body=69 status=ok
// SIG undefined FUN_14364e3da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e3da(void)

{
  _DAT_14caf9e28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9e30,1);
  return;
}



// FUNCTION 14364e41f FUN_14364e41f body=69 status=ok
// SIG undefined FUN_14364e41f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14364e41f(void)

{
  _DAT_14caf9e38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014364e461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9e40,1);
  return;
}



// FUNCTION 14364e48c FUN_14364e48c body=209 status=ok
// SIG undefined FUN_14364e48c(void)

void FUN_14364e48c(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  longlong *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined1 *)(param_1 + 0x7ac) = 1;
  pbVar1 = (byte *)(param_1 + 0x5a4);
  pbVar3 = *(byte **)param_2[1];
  if ((byte *)((undefined8 *)param_2[1])[1] < pbVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,pbVar1,1);
  }
  else {
    *pbVar1 = *pbVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  plVar4 = (longlong *)param_3[0xb];
  if ((plVar4 != (longlong *)0x0) && ((longlong *)plVar4[0x1e] == param_3)) {
    bVar2 = *pbVar1;
    if (bVar2 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x310);
      plVar4 = param_3;
    }
    else {
      if ((int)param_3[10] < (int)(uint)bVar2) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x3b8))(plVar4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014364e526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x310))(plVar4,param_1,param_3,*(code **)(*plVar4 + 0x310));
        return;
      }
      plVar4 = *(longlong **)(param_3[9] + -8 + (ulonglong)(uint)bVar2 * 8);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x310);
    }
                    /* WARNING: Could not recover jumptable at 0x00014364e55a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar4,param_1,param_3);
    return;
  }
  return;
}



// FUNCTION 14364e57a FUN_14364e57a body=359 status=ok
// SIG undefined FUN_14364e57a(void)

void FUN_14364e57a(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  if (-1 < (int)param_2) {
    uVar6 = *(uint *)(param_1 + 0x7d8);
    uVar8 = uVar6 + 1;
    if (-1 < (int)uVar6 && (int)uVar8 < (int)param_2) {
      uVar6 = 0x1e;
      do {
        uVar3 = uVar8 - 1 & 0xf;
        uVar5 = *(uint *)(param_1 + 0x7d8);
        if ((int)*(uint *)(param_1 + 0x7d8) <= (int)uVar8) {
          uVar5 = uVar8;
        }
        *(uint *)(param_1 + 0x7d8) = uVar5;
        if ((uVar8 & 0xf) != uVar3) {
          puVar9 = (undefined8 *)((ulonglong)((uVar8 & 0xf) << 4) + param_1 + 0x7e0);
          uVar4 = (ulonglong)(uVar3 << 4);
          iVar2 = *(int *)(param_1 + 0x7e8 + uVar4);
          _Src = *(void **)(param_1 + 0x7e0 + uVar4);
          *(int *)(puVar9 + 1) = iVar2;
          if (iVar2 == 0 && *(int *)((longlong)puVar9 + 0xc) == 0) {
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          }
          else {
            FUN_1447a127e(puVar9,iVar2);
            if (iVar2 != 0) {
              memcpy((void *)*puVar9,_Src,(longlong)iVar2);
            }
          }
        }
        if (uVar6 < 2) break;
        uVar6 = uVar6 - 1;
        uVar8 = uVar8 + 1;
      } while (param_2 != uVar8);
      uVar6 = *(uint *)(param_1 + 0x7d8);
    }
    if ((int)uVar6 <= (int)param_2) {
      uVar6 = param_2;
    }
    *(uint *)(param_1 + 0x7d8) = uVar6;
    lVar1 = param_1 + (ulonglong)((param_2 & 0xf) << 4);
    plVar7 = (longlong *)(lVar1 + 0x7e0);
    if (plVar7 != param_3) {
      if (*plVar7 != 0) {
        FUN_1400020a8();
      }
      *plVar7 = *param_3;
      *param_3 = 0;
      *(int *)(lVar1 + 0x7e8) = (int)param_3[1];
      *(undefined4 *)(lVar1 + 0x7ec) = *(undefined4 *)((longlong)param_3 + 0xc);
      param_3[1] = 0;
      uVar6 = *(uint *)(param_1 + 0x7d8);
    }
    uVar8 = 0xf;
    if (0xf < (int)uVar6) {
      uVar8 = uVar6;
    }
    if (*(int *)(param_1 + 0x8f4) < (int)(uVar8 - 0xf)) {
      *(int *)(param_1 + 0x8f4) = (int)((uVar8 - 0xf) + uVar6) / 2;
    }
  }
  return;
}



// FUNCTION 14364e710 FUN_14364e710 body=388 status=ok
// SIG undefined FUN_14364e710(void)

undefined4
FUN_14364e710(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined2 local_a7;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined2 local_90;
  longlong local_68;
  undefined8 local_60;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa498) {
    FUN_144b3d300();
    if (DAT_14cafa498 == -1) {
      local_b8 = "ClickableTrace";
      local_b0 = CONCAT35(local_b0._5_3_,0xe);
      uVar2 = FUN_14001a6c0(&local_b8,1);
      DAT_14cafa490 = (char *)(ulonglong)uVar2;
      _Init_thread_footer();
    }
  }
  local_94 = 0;
  local_b0 = 0;
  local_90 = 0x101;
  local_68 = 0;
  local_60 = 0x800000000;
  local_48 = 0;
  local_40 = 0x400000000;
  local_9c = 0;
  local_b8 = DAT_14cafa490;
  local_a7 = 1;
  local_a5 = 0;
  local_98 = 0;
  local_a4 = 0x1000000;
  local_a0 = 1;
  local_c8 = *param_2;
  uStack_c4 = param_2[1];
  uStack_c0 = param_2[2];
  uStack_bc = param_2[3];
  local_d8 = param_5;
  local_a8 = param_4;
  uVar1 = FUN_147c9ecee(param_1,&local_c8,param_3,&local_b8);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14364e896 FUN_14364e896 body=619 status=ok
// SIG undefined FUN_14364e896(void)

undefined4
FUN_14364e896(longlong param_1,undefined4 *param_2,longlong *param_3,undefined1 param_4,
             undefined8 param_5)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  uint *local_128;
  char **local_120;
  double local_118;
  double local_110;
  double local_108;
  uint local_100;
  undefined1 local_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined2 local_9f;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  longlong local_60;
  undefined8 local_58;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x440) == 0) {
LAB_14364e8d2:
    cVar2 = FUN_147ab7a10(param_1,param_2,&local_e0,&local_f8);
    if (cVar2 != '\0') {
      local_100 = 0;
      if (0 < (int)param_3[1]) {
        lVar7 = 0;
        do {
          uVar5 = local_100;
          uVar3 = FUN_141302a0a(*(undefined1 *)(*param_3 + lVar7));
          local_100 = uVar5 | 1 << (uVar3 & 0x1f);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)param_3[1]);
      }
      local_fc = 0;
      uVar6 = FUN_1447210f0(param_1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cafa4a8) {
        FUN_144b3d300();
        if (DAT_14cafa4a8 == -1) {
          local_b0 = "ClickableTrace";
          local_a8 = CONCAT35(local_a8._5_3_,0xe);
          uVar5 = FUN_14001a6c0(&local_b0,1);
          DAT_14cafa4a0 = (char *)(ulonglong)uVar5;
          _Init_thread_footer();
        }
      }
      local_120 = &local_b0;
      local_8c = 0;
      local_a8 = 0;
      local_88 = 0x101;
      local_60 = 0;
      local_58 = 0x800000000;
      local_40 = 0;
      local_38 = 0x400000000;
      local_94 = 0;
      local_b0 = DAT_14cafa4a0;
      local_9f = 1;
      local_9d = 0;
      local_90 = 0;
      local_9c = 0x1000000;
      local_98 = 1;
      dVar1 = (double)*(float *)(param_1 + 0x66c);
      local_108 = local_e8 * dVar1 + local_d0;
      local_110 = local_f0 * dVar1 + local_d8;
      local_118 = dVar1 * local_f8 + local_e0;
      local_128 = &local_100;
      local_a0 = param_4;
      uVar4 = FUN_140526294(uVar6,param_5);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14364ea7d;
    }
  }
  else {
    local_c8 = *param_2;
    uStack_c4 = param_2[1];
    uStack_c0 = param_2[2];
    uStack_bc = param_2[3];
    lVar7 = FUN_147af0014(*(longlong *)(param_1 + 0x440),&local_c8,1);
    if (lVar7 == 0) goto LAB_14364e8d2;
  }
  uVar4 = 0;
LAB_14364ea7d:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14364eb06 FUN_14364eb06 body=379 status=ok
// SIG undefined FUN_14364eb06(void)

void FUN_14364eb06(longlong *param_1,float param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if ((*(uint *)(param_1 + 0xb4) & 1) == 0) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1;
    uVar2 = FUN_14477b072(param_1,DAT_14caf9b50);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
  }
  FUN_14364ec82(param_1,param_2,-(param_2 == 0.0) & 1);
  if (param_1[0x86] == 0) {
    return;
  }
  if (*(longlong **)(param_1[0x86] + 0x30) != param_1) {
    return;
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (param_1[0x79] == (ulonglong)DAT_14c893040) {
    if (param_1[0x7a] == 0) {
      (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893054);
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
    }
    else if (param_1[0x86] != 0) {
      bVar3 = param_1[0x87] == param_1[0x7a];
      goto LAB_14364ec01;
    }
  }
  bVar3 = false;
LAB_14364ec01:
  if (param_1[0x79] == (ulonglong)DAT_14c893054) {
    if (*(byte *)(param_1 + 0x2f) < 3) {
      (**(code **)(*param_1 + 0xc80))(param_1);
    }
    cVar1 = (**(code **)(*param_1 + 0xeb0))(param_1);
    if (cVar1 != '\0') {
      return;
    }
  }
  else if (param_1[0x79] == (ulonglong)DAT_14c893048) {
    if (*(byte *)(param_1 + 0x2f) < 3) {
      FUN_1462460ec(param_1);
    }
  }
  else if (!bVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014364ec7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb78))(param_1,param_2);
  return;
}



// FUNCTION 14364ec82 FUN_14364ec82 body=3292 status=ok
// SIG undefined FUN_14364ec82(void)

void FUN_14364ec82(longlong *param_1,float param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined8 local_220;
  wchar_t *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined8 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  int local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c0;
  undefined4 local_11c;
  undefined4 local_f0;
  uint local_e8;
  int local_e4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  cVar4 = (char)param_3;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_143778dc0(param_1[0xa1]);
  lVar7 = param_1[0x86];
  if (lVar7 == 0) goto LAB_14364ed23;
  if (DAT_14cae9568 == 0) {
    local_200 = &local_1c0;
    local_1c0 = FUN_1417de738;
    local_1f0 = &LAB_145893408;
    local_1f8 = &LAB_1458cbbd2;
    local_208 = &LAB_147ba21f1;
    local_210 = &LAB_1463e9233;
    local_218 = L"Engine";
    local_220 = 0;
    local_228 = 0x1000000c;
    local_230 = 8;
    local_238 = (undefined8 *)CONCAT44(local_238._4_4_,0x2b8);
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    lVar7 = param_1[0x86];
    if (lVar7 == 0) goto LAB_14364ed23;
  }
  if ((((DAT_14cae9568 == 0) || (lVar13 = *(longlong *)(lVar7 + 0x10), lVar13 == 0)) ||
      (*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
      DAT_14cae9568 + 0x30)) goto LAB_14364ed23;
  uVar14 = *(uint *)((longlong)param_1 + 0x634);
  if ((uVar14 & 8) != 0) {
    memset(&local_1c0,0,0x100);
    local_f0 = 0xffffffff;
    local_1c0 = (code *)CONCAT44(0x3f800000,(undefined4)local_1c0);
    local_11c = 0xffffffff;
    plVar8 = *(longlong **)(lVar7 + 0x78);
    cVar5 = (**(code **)(*param_1 + 0xd98))(param_1);
    if ((cVar5 == '\0') || (cVar5 = (**(code **)(*plVar8 + 0x338))(plVar8), cVar5 == '\0')) {
      if (*(int *)((longlong)param_1 + 0x68c) == 0) {
LAB_14364f3bc:
        uVar11 = 0;
      }
      else {
        uVar14 = *(uint *)(param_1 + 0xd1);
        uVar11 = 0;
        if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
          puVar12 = (undefined8 *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
          if ((puVar12 == (undefined8 *)0x0) ||
             ((*(int *)(puVar12 + 2) != *(int *)((longlong)param_1 + 0x68c) ||
              ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_14364f3bc;
          uVar11 = *puVar12;
        }
      }
LAB_14364f39d:
      FUN_1479f0e0e(uVar11);
LAB_14364f3a4:
      *(undefined4 *)(param_1 + 0xd1) = 0;
      iVar6 = 0;
    }
    else {
      local_1d8 = (undefined4)local_88;
      uStack_1d4 = local_88._4_4_;
      uStack_1d0 = (undefined4)uStack_80;
      uStack_1cc = uStack_80._4_4_;
      local_238 = &local_1c0;
      cVar5 = FUN_14364e710(param_1,&local_1d8,*(undefined1 *)((longlong)param_1 + 0x66b),1);
      if (*(int *)((longlong)param_1 + 0x68c) == 0) {
LAB_14364f3c0:
        uVar11 = 0;
      }
      else {
        uVar14 = *(uint *)(param_1 + 0xd1);
        uVar11 = 0;
        if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
          puVar12 = (undefined8 *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
          if ((puVar12 == (undefined8 *)0x0) ||
             ((*(int *)(puVar12 + 2) != *(int *)((longlong)param_1 + 0x68c) ||
              ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_14364f3c0;
          uVar11 = *puVar12;
        }
      }
      if ((((((cVar5 == '\0') || (local_e4 == 0)) || ((int)local_e8 < 0)) ||
           ((DAT_14c9647dc <= (int)local_e8 ||
            (plVar8 = (longlong *)
                      ((ulonglong)((local_e8 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_e8 >> 0x10) * 8)),
            plVar8 == (longlong *)0x0)))) || ((int)plVar8[2] != local_e4)) ||
         ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_14364f39d;
      lVar7 = *plVar8;
      FUN_1479f0e0e(uVar11);
      if (lVar7 == 0) goto LAB_14364f3a4;
      uVar14 = *(uint *)(lVar7 + 0xc);
      *(uint *)(param_1 + 0xd1) = uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar6 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar6 = *(int *)(lVar7 + 0x10);
        bVar18 = iVar6 == 0;
        if (bVar18) {
          *(int *)(lVar7 + 0x10) = iVar15;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar18) {
          iVar6 = iVar15;
        }
      }
    }
    *(int *)((longlong)param_1 + 0x68c) = iVar6;
    uVar14 = *(uint *)((longlong)param_1 + 0x634);
  }
  if ((uVar14 & 0x10) != 0) {
    uVar16 = 0;
    do {
      memset(&local_1c0,0,0x100);
      local_f0 = 0xffffffff;
      local_1c0 = (code *)CONCAT44(0x3f800000,(undefined4)local_1c0);
      local_11c = 0xffffffff;
      local_238 = &local_1c0;
      cVar5 = FUN_14364bb5c(param_1,uVar16 & 0xffffffff,*(undefined1 *)((longlong)param_1 + 0x66b),1
                           );
      iVar6 = *(int *)((longlong)param_1 + uVar16 * 8 + 0x694);
      if ((iVar6 == 0) || (uVar14 = *(uint *)(param_1 + uVar16 + 0xd2), (int)uVar14 < 0)) {
LAB_14364f14f:
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        if ((int)uVar14 < DAT_14c9647dc) {
          puVar12 = (undefined8 *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
          if (((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 2) != iVar6)) ||
             ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_14364f14f;
          uVar11 = *puVar12;
        }
      }
      if (((((cVar5 == '\0') || (local_e4 == 0)) ||
           (((int)local_e8 < 0 ||
            ((DAT_14c9647dc <= (int)local_e8 ||
             (plVar8 = (longlong *)
                       ((ulonglong)((local_e8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_e8 >> 0x10) * 8)),
             plVar8 == (longlong *)0x0)))))) || ((int)plVar8[2] != local_e4)) ||
         ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) {
        FUN_1479f122c(uVar16 & 0xffffffff,uVar11,0);
LAB_14364f127:
        *(undefined4 *)(param_1 + uVar16 + 0xd2) = 0;
        iVar6 = 0;
      }
      else {
        lVar7 = *plVar8;
        FUN_1479f122c(uVar16 & 0xffffffff,uVar11,lVar7);
        if (lVar7 == 0) goto LAB_14364f127;
        uVar14 = *(uint *)(lVar7 + 0xc);
        *(uint *)(param_1 + uVar16 + 0xd2) = uVar14;
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar6 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar18) {
            local_1dc = iVar15;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
            iVar15 = local_1dc;
          }
          LOCK();
          iVar6 = *(int *)(lVar7 + 0x10);
          bVar18 = iVar6 == 0;
          if (bVar18) {
            *(int *)(lVar7 + 0x10) = iVar15;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar18) {
            iVar6 = iVar15;
          }
        }
      }
      *(int *)((longlong)param_1 + uVar16 * 8 + 0x694) = iVar6;
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0xb);
  }
LAB_14364ed23:
  (**(code **)(*param_1 + 0xd78))(param_1,param_2,param_3);
  if (param_1[0x86] != 0) {
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    lVar7 = FUN_1447210f0(param_1);
    uVar16 = (ulonglong)(int)param_1[0xa3];
    if (0 < (longlong)uVar16) {
      plVar8 = param_1 + 0xa2;
      lVar13 = uVar16 * 0x70;
      do {
        lVar13 = lVar13 + -0x70;
        if (((cVar4 == '\0') || (*(char *)(*plVar8 + 0x12 + lVar13) == '\x01')) &&
           (cVar5 = FUN_147a99ade(*plVar8 + lVar13,param_2,param_1 + 0xb0), cVar5 == '\0')) {
          FUN_1434e6f1c(*plVar8 + lVar13);
          FUN_147ca7b70(plVar8);
          FUN_147ca7bd8(plVar8);
        }
        bVar18 = 1 < uVar16;
        uVar16 = uVar16 - 1;
      } while (bVar18);
    }
    if (cVar4 == '\0') {
      if (0 < (int)param_1[0xa5]) {
        uVar16 = 0;
        do {
          lVar13 = param_1[0xa4];
          uVar14 = (uint)uVar16;
          lVar9 = uVar16 * 0x20;
          fVar22 = *(float *)(lVar13 + 0xc + lVar9) + param_2;
          *(float *)(lVar13 + 0xc + lVar9) = fVar22;
          fVar21 = *(float *)(lVar13 + 8 + lVar9);
          if ((fVar21 < 0.0) || (fVar22 < fVar21)) {
            FUN_147ca1b48(lVar13 + lVar9 + 0x10);
          }
          else {
            iVar6 = (int)param_1[0xa5];
            if (~uVar14 + iVar6 != 0) {
              memmove((void *)(param_1[0xa4] + lVar9),(void *)(param_1[0xa4] + lVar9 + 0x20),
                      (longlong)(int)(~uVar14 + iVar6) << 5);
              iVar6 = (int)param_1[0xa5];
            }
            *(int *)(param_1 + 0xa5) = iVar6 + -1;
            FUN_147ca7e6a(param_1 + 0xa4);
            uVar14 = uVar14 - 1;
          }
          uVar16 = (ulonglong)(uVar14 + 1);
        } while ((int)(uVar14 + 1) < (int)param_1[0xa5]);
      }
      lVar13 = param_1[0xa7];
      if ((longlong)(int)lVar13 != 0) {
        lVar9 = param_1[0xa6];
        lVar17 = 0;
        do {
          FUN_147ca1b48(*(undefined8 *)(lVar9 + 8 + lVar17));
          lVar17 = lVar17 + 0x10;
        } while ((longlong)(int)lVar13 * 0x10 != lVar17);
      }
    }
    if ((longlong)DAT_14cad1370 != 0) {
      lVar13 = 0;
      do {
        lVar9 = *(longlong *)(DAT_14cad1368 + lVar13);
        if (*(longlong *)(lVar9 + 0x18) == lVar7) {
          if (lVar9 != 0) {
            FUN_147c9996e(param_1,&local_bc);
            (**(code **)(*param_1 + 0xe60))(param_1,&local_1c0);
            FUN_1479dd8bc(lVar9,&local_1c0,param_1 + 0xb0,local_bc);
          }
          break;
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)DAT_14cad1370 * 8 != lVar13);
    }
    (**(code **)(*param_1 + 0xd88))(param_1,param_2,param_3);
    fVar21 = *(float *)(param_1 + 0xca);
    fVar22 = *(float *)(param_1 + 0xb0) * fVar21;
    if (1.0 <= fVar22) {
      fVar22 = 1.0;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    *(float *)(param_1 + 0xb0) = fVar22;
    fVar22 = *(float *)(param_1 + 0xb1) * fVar21;
    if (1.0 <= fVar22) {
      fVar22 = 1.0;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    *(float *)(param_1 + 0xb1) = fVar22;
    fVar22 = *(float *)((longlong)param_1 + 0x584) * fVar21;
    if (1.0 <= fVar22) {
      fVar22 = 1.0;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x584) = fVar22;
    fVar21 = fVar21 * *(float *)((longlong)param_1 + 0x58c);
    if (1.0 <= fVar21) {
      fVar21 = 1.0;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x58c) = fVar21;
    if (cVar4 == '\0') {
      bVar18 = param_1[0xa8] != 0;
      if ((bVar18) && (cVar4 = FUN_147a99e2e(param_1[0xa8],param_2,&local_88), cVar4 == '\0')) {
        puVar12 = (undefined8 *)param_1[0xa8];
        if (*(char *)(puVar12 + 1) == '\x01') {
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          (**(code **)(*(longlong *)*puVar12 + 0x2a0))((longlong *)*puVar12,puVar12 + 3);
        }
        else {
          param_1[0xa8] = 0;
          plVar8 = (longlong *)param_1[0xa9];
          if (plVar8 != (longlong *)0x0) {
            param_1[0xa9] = 0;
            LOCK();
            plVar10 = plVar8 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
      }
      bVar19 = param_1[0xaa] != 0;
      if ((bVar19) && (cVar4 = FUN_147a99e2e(param_1[0xaa],param_2,&local_98), cVar4 == '\0')) {
        puVar12 = (undefined8 *)param_1[0xaa];
        if (*(char *)(puVar12 + 1) == '\x01') {
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          (**(code **)(*(longlong *)*puVar12 + 0x2a0))((longlong *)*puVar12,puVar12 + 3);
        }
        else {
          param_1[0xaa] = 0;
          plVar8 = (longlong *)param_1[0xab];
          if (plVar8 != (longlong *)0x0) {
            param_1[0xab] = 0;
            LOCK();
            plVar10 = plVar8 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
      }
      bVar20 = param_1[0xac] != 0;
      if ((bVar20) && (cVar4 = FUN_147a99e2e(param_1[0xac],param_2,&local_a8), cVar4 == '\0')) {
        puVar12 = (undefined8 *)param_1[0xac];
        if (*(char *)(puVar12 + 1) == '\x01') {
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          (**(code **)(*(longlong *)*puVar12 + 0x2a0))((longlong *)*puVar12,puVar12 + 3);
        }
        else {
          param_1[0xac] = 0;
          plVar8 = (longlong *)param_1[0xad];
          if (plVar8 != (longlong *)0x0) {
            param_1[0xad] = 0;
            LOCK();
            plVar10 = plVar8 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
      }
      if (param_1[0xae] == 0) {
        bVar2 = false;
      }
      else {
        cVar4 = FUN_147a99e2e(param_1[0xae],param_2,&local_b8);
        bVar3 = true;
        bVar2 = true;
        if (cVar4 == '\0') {
          puVar12 = (undefined8 *)param_1[0xae];
          bVar2 = bVar3;
          if (*(char *)(puVar12 + 1) == '\x01') {
            *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
            (**(code **)(*(longlong *)*puVar12 + 0x2a0))((longlong *)*puVar12,puVar12 + 3);
          }
          else {
            param_1[0xae] = 0;
            plVar8 = (longlong *)param_1[0xaf];
            if (plVar8 != (longlong *)0x0) {
              param_1[0xaf] = 0;
              LOCK();
              plVar10 = plVar8 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
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
        }
      }
    }
    else {
      bVar2 = false;
      bVar20 = false;
      bVar19 = false;
      bVar18 = false;
    }
    if (((DAT_14c98e618 != 0) && (iVar6 = (**(code **)(*param_1 + 0xda0))(param_1), iVar6 != -1)) &&
       (plVar8 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe0))(), plVar8 != (longlong *)0x0)) {
      if (1 < *(int *)(*(longlong *)(lVar7 + 0x1f0) + 0x40)) {
        plVar10 = (longlong *)FUN_140628716();
        lVar7 = plVar10[0x22];
        if (lVar7 == 0) {
          (**(code **)(*plVar10 + 1000))(plVar10);
          lVar7 = plVar10[0x22];
        }
        iVar6 = iVar6 - (uint)*(byte *)(lVar7 + 0x5c);
      }
      (**(code **)(*param_1 + 0xd90))(param_1,plVar8,iVar6);
      if ((*DAT_14caf9e80 < 1) && ((*(byte *)(param_1 + 0xfa) & 1) == 0)) {
        if (bVar18) {
          (**(code **)(*plVar8 + 0x18))(plVar8,iVar6,0,&local_88);
        }
        if (bVar19) {
          (**(code **)(*plVar8 + 0x18))(plVar8,iVar6,1,&local_98);
        }
        if (bVar20) {
          (**(code **)(*plVar8 + 0x18))(plVar8,iVar6,5,&local_a8);
        }
        if (bVar2) {
          (**(code **)(*plVar8 + 0x18))(plVar8,iVar6,6,&local_b8);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14364f98a FUN_14364f98a body=57 status=ok
// SIG undefined FUN_14364f98a(void)

void FUN_14364f98a(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x758))();
  if (cVar2 != '\0') {
    param_1[0xc4] = DAT_14c846508;
    lVar1 = DAT_14c846500;
    param_1[0xc2] = DAT_14c8464f8;
    param_1[0xc3] = lVar1;
  }
  return;
}



// FUNCTION 14364f9c4 FUN_14364f9c4 body=290 status=ok
// SIG undefined FUN_14364f9c4(void)

void FUN_14364f9c4(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = FUN_14487fd02();
  if (iVar2 != 3) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if ((param_1[0x79] == (ulonglong)DAT_14c893054) ||
       ((param_1[0x79] == (ulonglong)DAT_14c893048 && ((*(byte *)(param_1 + 0xb4) & 0x10) != 0)))) {
      lVar3 = FUN_1447210f0(param_1);
      lVar3 = *(longlong *)(lVar3 + 0x170);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
        cVar1 = FUN_14603e1e4(lVar3,param_1);
        if (cVar1 != '\0') {
          if (param_1[0x7a] != 0) {
            FUN_1413ef136(param_1);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
        }
      }
    }
    else if (param_1[0x7a] != 0) {
      local_28 = param_1[0x7a];
      uVar4 = FUN_14477b072(param_1,DAT_14caf9718);
      (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14364fafa FUN_14364fafa body=56 status=ok
// SIG undefined FUN_14364fafa(void)

void FUN_14364fafa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014364fb27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14364fb34 FUN_14364fb34 body=816 status=ok
// SIG undefined FUN_14364fb34(void)

undefined8 FUN_14364fb34(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
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
  if (*(longlong *)(param_1 + 0x430) != 0) {
    uVar8 = 0;
    cVar2 = FUN_14016169c(param_1,0);
    if (cVar2 == '\0') goto LAB_14364fcd7;
    lVar5 = *(longlong *)(param_1 + 0x430);
    if (lVar5 != 0) {
      if (DAT_14cae9568 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1417de738;
        local_40 = (code *)&LAB_145893408;
        local_48 = &LAB_1458cbbd2;
        local_58 = &LAB_147ba21f1;
        local_60 = &LAB_1463e9233;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x1000000c;
        local_80 = 8;
        local_88 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar5 = *(longlong *)(param_1 + 0x430);
        if (lVar5 == 0) goto LAB_14364fcd5;
      }
      lVar9 = 0;
      if ((DAT_14cae9568 != 0) && (lVar4 = *(longlong *)(lVar5 + 0x10), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
              DAT_14cae9568 + 0x30) {
            lVar9 = lVar5;
          }
        }
      }
      lVar4 = FUN_140496b24();
      lVar5 = *(longlong *)(param_1 + 0x430);
      if (lVar5 == 0) {
LAB_14364fd0a:
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if ((lVar4 != 0) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) {
          if (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_14364fd0a;
          lVar10 = 0;
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30) {
            lVar10 = lVar5;
          }
        }
      }
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 8) & 0x10) == 0) {
          uVar8 = *(undefined8 *)(lVar9 + 0x20);
        }
        else {
          uVar8 = 0;
        }
        uVar6 = FUN_1447210f0(param_1);
        plVar7 = (longlong *)FUN_140161992(uVar8,uVar6);
        uVar8 = 0;
        if (((int)param_2 < 0) || ((int)plVar7[1] <= (int)param_2)) goto LAB_14364fcd7;
        plVar7 = (longlong *)((ulonglong)param_2 * 8 + *plVar7);
LAB_14364fcb3:
        lVar5 = *plVar7;
LAB_14364fcb6:
        param_1 = *(longlong *)(lVar5 + 0x30);
LAB_14364fcba:
        uVar8 = *(undefined8 *)(param_1 + 0x398);
        goto LAB_14364fcd7;
      }
      if ((lVar10 != 0) && (iVar3 = FUN_14487fd02(param_1), iVar3 != 3)) {
        if (DAT_14cabf8e8 == 0) {
          local_50 = &local_30;
          local_30 = FUN_144ae7c60;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_14637144c;
          local_58 = &LAB_147861001;
          local_60 = &LAB_145acec30;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x1000000c;
          local_80 = 8;
          local_88 = 0x1df0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildConnection",&DAT_14cabf8e8,&DAT_147861000);
        }
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cabf8e8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cabf8e8 + 0x38) * 8) != DAT_14cabf8e8 + 0x30)) {
          if (0 < *(int *)(lVar10 + 0x50)) {
            if (param_2 != 0) {
              uVar8 = 0;
              if (((int)param_2 < 1) || (*(int *)(lVar10 + 0x50) < (int)param_2))
              goto LAB_14364fcd7;
              lVar5 = *(longlong *)(lVar10 + 0x48);
              goto LAB_14364fc7e;
            }
            goto LAB_14364fcba;
          }
        }
        else {
          lVar5 = *(longlong *)(lVar10 + 0x1de8);
          if (param_2 == 0) goto LAB_14364fcb6;
          if ((0 < (int)param_2) && ((int)param_2 <= *(int *)(lVar5 + 0x50))) {
            lVar5 = *(longlong *)(lVar5 + 0x48);
LAB_14364fc7e:
            plVar7 = (longlong *)(lVar5 + (ulonglong)param_2 * 8 + -8);
            goto LAB_14364fcb3;
          }
        }
      }
    }
  }
LAB_14364fcd5:
  uVar8 = 0;
LAB_14364fcd7:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14364fe66 FUN_14364fe66 body=724 status=ok
// SIG undefined FUN_14364fe66(void)

int FUN_14364fe66(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
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
  cVar2 = FUN_14016169c(param_1,0);
  iVar8 = 0;
  if ((cVar2 == '\0') || (lVar5 = *(longlong *)(param_1 + 0x430), iVar8 = 0, lVar5 == 0))
  goto LAB_14364ffb3;
  if (DAT_14cae9568 == 0) {
    local_50 = &local_30;
    local_30 = FUN_1417de738;
    local_40 = (code *)&LAB_145893408;
    local_48 = &LAB_1458cbbd2;
    local_58 = &LAB_147ba21f1;
    local_60 = &LAB_1463e9233;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x1000000c;
    local_80 = 8;
    local_88 = 0x2b8;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    lVar5 = *(longlong *)(param_1 + 0x430);
    if (lVar5 == 0) goto LAB_14364ffb3;
  }
  lVar7 = 0;
  if ((DAT_14cae9568 != 0) && (lVar3 = *(longlong *)(lVar5 + 0x10), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30) {
        lVar7 = lVar5;
      }
    }
  }
  lVar3 = FUN_140496b24();
  lVar5 = *(longlong *)(param_1 + 0x430);
  if (lVar5 == 0) {
LAB_14364ffe0:
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38)) goto LAB_14364ffe0;
      lVar10 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        lVar10 = lVar5;
      }
    }
  }
  if (lVar7 == 0) {
    if (lVar10 == 0) {
      iVar8 = 0;
    }
    else {
      if (DAT_14cabf8e8 == 0) {
        local_50 = &local_30;
        local_30 = FUN_144ae7c60;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_14637144c;
        local_58 = &LAB_147861001;
        local_60 = &LAB_145acec30;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x1000000c;
        local_80 = 8;
        local_88 = 0x1df0;
        FUN_14081cfa3(L"/Script/Engine",L"ChildConnection",&DAT_14cabf8e8,&DAT_147861000);
      }
      if ((*(int *)(DAT_14cabf8e8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cabf8e8 + 0x38) * 8) == DAT_14cabf8e8 + 0x30)) {
        lVar5 = *(longlong *)(lVar5 + 0x1de8);
      }
      iVar8 = *(int *)(lVar5 + 0x50) + 1;
    }
  }
  else {
    if ((*(uint *)(lVar7 + 8) & 0x10) == 0) {
      uVar9 = *(undefined8 *)(lVar7 + 0x20);
    }
    else {
      uVar9 = 0;
    }
    uVar4 = FUN_1447210f0(param_1);
    lVar5 = FUN_1458cac9e(uVar9,uVar4);
    puVar6 = &DAT_14cb0d060;
    if (*(longlong *)(lVar5 + 0x2a8) != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x2a8) + 0x38);
    }
    iVar8 = *(int *)(puVar6 + 1);
  }
LAB_14364ffb3:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 14365013b FUN_14365013b body=69 status=ok
// SIG undefined FUN_14365013b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365013b(void)

{
  _DAT_14caf9e70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365017d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf9e78,1);
  return;
}



// FUNCTION 143650180 FUN_143650180 body=92 status=ok
// SIG undefined FUN_143650180(void)

void FUN_143650180(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_1 + 0x634) & 0x20) == 0) {
    local_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0x580);
    uStack_14 = *(undefined4 *)(param_1 + 0x584);
    uStack_10 = *(undefined4 *)(param_1 + 0x588);
    uStack_c = *(undefined4 *)(param_1 + 0x58c);
  }
  (**(code **)(*param_2 + 0x10))(param_2,param_3,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436501de FUN_1436501de body=314 status=ok
// SIG undefined FUN_1436501de(void)

undefined4 FUN_1436501de(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x430);
  uVar3 = 0xffffffff;
  if (lVar2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(param_1 + 0x430);
      if (lVar2 == 0) goto LAB_143650245;
    }
    if ((((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      uVar3 = *(undefined4 *)(lVar2 + 0xe0);
    }
  }
LAB_143650245:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14365031a FUN_14365031a body=123 status=ok
// SIG undefined FUN_14365031a(void)

undefined8 FUN_14365031a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 1;
  if ((*(byte *)(param_1 + 0x700) & 4) == 0) {
    if (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
      if ((cVar1 != '\0') && (*(longlong **)(DAT_14cb0d2b0 + 0xfe0) != (longlong *)0x0)) {
        lVar2 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfe0) + 0x120))();
        if (lVar2 != 0) {
          plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfe0) + 0x120))();
                    /* WARNING: Could not recover jumptable at 0x00014365038d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
          return uVar4;
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14365039e FUN_14365039e body=422 status=ok
// SIG undefined FUN_14365039e(void)

longlong * FUN_14365039e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1[0xf4] == 0) {
    cVar3 = (**(code **)(*param_1 + 0x6c8))();
    if (cVar3 != '\0') {
      lVar4 = FUN_1447210f0(param_1);
      lVar1 = *(longlong *)(lVar4 + 0x178);
      if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x3a0), lVar2 != 0)) {
        lVar5 = FUN_140554cf2();
        if ((lVar5 != 0) &&
           (((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0x3a0), lVar1 != 0)))) {
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_78 = 0;
          local_68 = (longlong *)0x0;
          local_88 = 0x4800000101;
          local_a8 = param_1;
          (**(code **)(*param_1 + 0x680))(param_1,local_d0);
          local_d8 = param_1[0xf8];
          local_e8 = (undefined4)param_1[0xf6];
          uStack_e4 = *(undefined4 *)((longlong)param_1 + 0x7b4);
          uStack_e0 = (undefined4)param_1[0xf7];
          uStack_dc = *(undefined4 *)((longlong)param_1 + 0x7bc);
          local_f8 = &local_b8;
          plVar6 = (longlong *)FUN_141137228(lVar4,lVar1,&local_e8,local_d0);
          if (plVar6 != (longlong *)0x0) {
            FUN_140c7ce82(plVar6,0);
            (**(code **)(*plVar6 + 0x6d0))(plVar6,param_1);
            (**(code **)(*plVar6 + 0x6f8))(plVar6);
            (**(code **)(*plVar6 + 0x6e8))(plVar6);
            if ((*(byte *)((longlong)plVar6 + 0x3a) & 4) != 0) {
              (**(code **)(*plVar6 + 0x400))(plVar6,1);
            }
          }
          if (local_78 != 0) {
            plVar7 = local_68;
            if (local_68 == (longlong *)0x0) {
              plVar7 = local_58;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          goto LAB_14365041f;
        }
      }
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14365041f:
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143650546 FUN_143650546 body=220 status=ok
// SIG undefined FUN_143650546(void)

void FUN_143650546(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  lVar1 = param_1[0x73];
  if (lVar1 != 0) {
    uVar2 = *(ulonglong *)(lVar1 + 0x28);
    if (uVar2 < 0xffffffff00000000) {
      plVar6 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar6 = (longlong *)0x0;
      }
      (**(code **)(*plVar6 + 0x58))(plVar6,lVar1,uVar2,0xe);
    }
    else {
      uVar7 = (uint)uVar2;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar4 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar4 = DAT_14c998080;
        }
        if ((*(uint *)(puVar4 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar5 = *(uint **)(lVar3 + 0x18);
          if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
            puVar5 = (uint *)(lVar3 + 8);
          }
          *puVar5 = *puVar5 | 0x4000;
          *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
        }
      }
    }
    *(byte *)(lVar1 + 0x39a) = *(byte *)(lVar1 + 0x39a) & 0xfd;
  }
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xef;
                    /* WARNING: Could not recover jumptable at 0x00014365059a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe88))(param_1);
  return;
}



// FUNCTION 14365066e FUN_14365066e body=141 status=ok
// SIG undefined FUN_14365066e(void)

void FUN_14365066e(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[0x128] != '\x01') {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    (**(code **)(*param_1 + 0x688))(param_1,&local_48);
    plVar1 = (longlong *)param_1[0x7a];
    if (plVar1 != (longlong *)0x0) {
      local_18 = local_38;
      local_28 = local_48;
      uStack_24 = uStack_44;
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      (**(code **)(*plVar1 + 0x730))(plVar1,&local_28,0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436506fc FUN_1436506fc body=48 status=ok
// SIG undefined FUN_1436506fc(void)

longlong FUN_1436506fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1413f40c4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143650820 FUN_143650820 body=131 status=ok
// SIG undefined FUN_143650820(void)

void FUN_143650820(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(*param_2 + 0x40);
  dStack_20 = (double)*(float *)(lVar1 + 0x4c);
  local_28 = (double)*(float *)(lVar1 + 0x48);
  dStack_30 = (double)*(float *)(lVar1 + 0x44);
  local_38 = (double)*(float *)(lVar1 + 0x40);
  FUN_1448052ee(&local_38,&local_50);
  puVar2 = (undefined4 *)*param_1;
  *(undefined8 *)(puVar2 + 4) = local_40;
  *puVar2 = local_50;
  puVar2[1] = uStack_4c;
  puVar2[2] = uStack_48;
  puVar2[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436508a4 FUN_1436508a4 body=5445 status=ok
// SIG undefined FUN_1436508a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436508a4(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  longlong lVar18;
  longlong *plVar19;
  uint uVar20;
  undefined1 uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong lVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined *apuStack_1e8 [2];
  undefined4 auStack_1d8 [4];
  undefined8 auStack_1c8 [3];
  byte local_1ad;
  uint local_1ac;
  longlong *local_1a8;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_19b;
  undefined1 local_19a;
  undefined1 local_199;
  undefined8 local_198 [12];
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar7 = *param_1;
  lVar8 = *(longlong *)(lVar7 + 0x520);
  if (lVar8 != 0) {
    local_1ac = *(uint *)(lVar7 + 0x120) & 4;
    uVar26 = local_1ac >> 1 ^ 2;
    uVar20 = *(uint *)(lVar7 + 0x120) & 3;
    local_1ad = uVar20 == 1;
    lVar18 = *(longlong *)(lVar8 + 0x10);
    *(undefined1 *)(lVar8 + 0x138) = 0;
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
    if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        apuStack_1e8[1] = (undefined *)0x1436509fc;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        if (*(int *)(lVar18 + 0x18) == -1) {
          lVar23 = *(longlong *)(lVar9 + 0x98);
          uVar4 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
          lVar23 = (ulonglong)uVar4 * 0x10 + lVar23;
          plVar19 = (longlong *)(lVar23 + 0x198);
          iVar6 = *(int *)(lVar23 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar6;
          *(uint *)(lVar23 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar23 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x14365175e;
            local_1a8 = plVar19;
            FUN_140431d5c(plVar19,iVar6);
            plVar19 = local_1a8;
          }
          lVar23 = *plVar19;
          lVar25 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar23 + lVar25) = lVar18;
          *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
          puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        apuStack_1e8[1] = (undefined *)0x143650a0f;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
      }
      else if (*(int *)(lVar18 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar9 + 0x98);
        uVar4 = *(uint *)(lVar18 + 0x1c);
        piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar4 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(lVar18 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          apuStack_1e8[1] = (undefined *)0x143651e11;
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar23 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar23) = lVar18;
        *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
        puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
        *puVar22 = 0;
        puVar22[1] = 0;
      }
    }
    uVar21 = (undefined1)(local_1ac >> 2);
    apuStack_1e8[1] = (undefined *)0x143650a30;
    local_19b = uVar21;
    local_19a = uVar21;
    local_199 = uVar21;
    FUN_146de9426(lVar8);
    apuStack_1e8[1] = (undefined *)0x143650a48;
    local_19e = uVar21;
    local_19d = uVar21;
    local_19c = uVar21;
    FUN_146de9350(lVar8);
    lVar18 = *(longlong *)(lVar8 + 0x10);
    *(uint *)(lVar8 + 0x13c) = uVar26;
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
    if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        apuStack_1e8[1] = (undefined *)0x143650a82;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        if (*(int *)(lVar18 + 0x18) == -1) {
          lVar23 = *(longlong *)(lVar9 + 0x98);
          uVar4 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
          lVar23 = (ulonglong)uVar4 * 0x10 + lVar23;
          plVar19 = (longlong *)(lVar23 + 0x198);
          iVar6 = *(int *)(lVar23 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar6;
          *(uint *)(lVar23 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar23 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x1436516be;
            local_1a8 = plVar19;
            FUN_140431d5c(plVar19,iVar6);
            plVar19 = local_1a8;
          }
          lVar23 = *plVar19;
          lVar25 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar23 + lVar25) = lVar18;
          *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
          puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        apuStack_1e8[1] = (undefined *)0x143650a96;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
      }
      else if (*(int *)(lVar18 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar9 + 0x98);
        uVar4 = *(uint *)(lVar18 + 0x1c);
        piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar4 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(lVar18 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          apuStack_1e8[1] = (undefined *)0x143651d8a;
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar23 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar23) = lVar18;
        *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
        puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
        *puVar22 = 0;
        puVar22[1] = 0;
      }
    }
    lVar18 = *(longlong *)(lVar8 + 0x10);
    *(uint *)(lVar8 + 0x140) = uVar26;
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
    if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        apuStack_1e8[1] = (undefined *)0x143650ad0;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        if (*(int *)(lVar18 + 0x18) == -1) {
          lVar23 = *(longlong *)(lVar9 + 0x98);
          uVar4 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
          lVar23 = (ulonglong)uVar4 * 0x10 + lVar23;
          plVar19 = (longlong *)(lVar23 + 0x198);
          iVar6 = *(int *)(lVar23 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar6;
          *(uint *)(lVar23 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar23 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x1436516d9;
            local_1a8 = plVar19;
            FUN_140431d5c(plVar19,iVar6);
            plVar19 = local_1a8;
          }
          lVar23 = *plVar19;
          lVar25 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar23 + lVar25) = lVar18;
          *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
          puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        apuStack_1e8[1] = (undefined *)0x143650ae4;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
      }
      else if (*(int *)(lVar18 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar9 + 0x98);
        uVar4 = *(uint *)(lVar18 + 0x1c);
        piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar4 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(lVar18 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          apuStack_1e8[1] = (undefined *)0x143651d99;
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar23 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar23) = lVar18;
        *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
        puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
        *puVar22 = 0;
        puVar22[1] = 0;
      }
    }
    lVar18 = *(longlong *)(lVar8 + 0x10);
    *(uint *)(lVar8 + 0x144) = uVar26;
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
    if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        apuStack_1e8[1] = (undefined *)0x143650b1e;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        if (*(int *)(lVar18 + 0x18) == -1) {
          lVar23 = *(longlong *)(lVar9 + 0x98);
          uVar26 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar26 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
          lVar23 = lVar23 + (ulonglong)uVar26 * 0x10;
          iVar6 = *(int *)(lVar23 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar6;
          *(uint *)(lVar23 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar23 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x1436516ed;
            FUN_140431d5c((longlong *)(lVar23 + 0x198),iVar6);
          }
          lVar23 = *(longlong *)(lVar23 + 0x198);
          lVar25 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar23 + lVar25) = lVar18;
          *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
          puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        apuStack_1e8[1] = (undefined *)0x143650b32;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
      }
      else if (*(int *)(lVar18 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar9 + 0x98);
        uVar26 = *(uint *)(lVar18 + 0x1c);
        piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar26 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar26 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(lVar18 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          apuStack_1e8[1] = (undefined *)0x143651da8;
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar23 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar23) = lVar18;
        *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
        puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
        *puVar22 = 0;
        puVar22[1] = 0;
      }
    }
    bVar17 = local_1ad;
    lVar18 = *(longlong *)(lVar8 + 0x10);
    *(byte *)(lVar8 + 0x2a8) = uVar20 != 1 & *(byte *)(lVar7 + 0x120);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
    if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        apuStack_1e8[1] = (undefined *)0x143650b7f;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        if (*(int *)(lVar18 + 0x18) == -1) {
          lVar23 = *(longlong *)(lVar9 + 0x98);
          uVar26 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar26 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
          lVar23 = lVar23 + (ulonglong)uVar26 * 0x10;
          iVar6 = *(int *)(lVar23 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar6;
          *(uint *)(lVar23 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar23 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x1436516fc;
            FUN_140431d5c((longlong *)(lVar23 + 0x198),iVar6);
          }
          lVar23 = *(longlong *)(lVar23 + 0x198);
          lVar25 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar23 + lVar25) = lVar18;
          *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
          puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        apuStack_1e8[1] = (undefined *)0x143650b93;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
      }
      else if (*(int *)(lVar18 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar9 + 0x98);
        uVar26 = *(uint *)(lVar18 + 0x1c);
        piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar26 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar26 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(lVar18 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          apuStack_1e8[1] = (undefined *)0x143651db7;
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar23 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar23) = lVar18;
        *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
        puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
        *puVar22 = 0;
        puVar22[1] = 0;
      }
    }
    iVar6 = (uint)bVar17 * 2;
    lVar18 = *(longlong *)(lVar8 + 0x10);
    *(byte *)(lVar8 + 0x2a9) = uVar20 != 1 & *(byte *)(lVar7 + 0x120);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
    if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        apuStack_1e8[1] = (undefined *)0x143650bdc;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        if (*(int *)(lVar18 + 0x18) == -1) {
          lVar23 = *(longlong *)(lVar9 + 0x98);
          uVar26 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar26 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
          lVar23 = lVar23 + (ulonglong)uVar26 * 0x10;
          iVar5 = *(int *)(lVar23 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar5;
          *(uint *)(lVar23 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar23 + 0x1a4) < iVar5 + 1U) {
            apuStack_1e8[1] = (undefined *)0x14365170b;
            FUN_140431d5c((longlong *)(lVar23 + 0x198),iVar5);
          }
          lVar23 = *(longlong *)(lVar23 + 0x198);
          lVar25 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar23 + lVar25) = lVar18;
          *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
          puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        apuStack_1e8[1] = (undefined *)0x143650bf0;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
      }
      else if (*(int *)(lVar18 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar9 + 0x98);
        uVar26 = *(uint *)(lVar18 + 0x1c);
        piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar26 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar26 * 0x10;
        iVar5 = *(int *)(lVar9 + 0x1a0);
        *(int *)(lVar18 + 0x18) = iVar5;
        *(uint *)(lVar9 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar5 + 1U) {
          apuStack_1e8[1] = (undefined *)0x143651dc6;
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar5);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar23 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar9 + lVar23) = lVar18;
        *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
        puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
        *puVar22 = 0;
        puVar22[1] = 0;
      }
    }
    lVar18 = *(longlong *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x150) = iVar6;
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
    if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        apuStack_1e8[1] = (undefined *)0x143650c2a;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        if (*(int *)(lVar18 + 0x18) == -1) {
          lVar23 = *(longlong *)(lVar9 + 0x98);
          uVar26 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar26 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
          lVar23 = lVar23 + (ulonglong)uVar26 * 0x10;
          iVar5 = *(int *)(lVar23 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar5;
          *(uint *)(lVar23 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar23 + 0x1a4) < iVar5 + 1U) {
            apuStack_1e8[1] = (undefined *)0x14365171a;
            FUN_140431d5c((longlong *)(lVar23 + 0x198),iVar5);
          }
          lVar23 = *(longlong *)(lVar23 + 0x198);
          lVar25 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar23 + lVar25) = lVar18;
          *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
          puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        apuStack_1e8[1] = (undefined *)0x143650c3e;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
      }
      else if (*(int *)(lVar18 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar9 + 0x98);
        uVar26 = *(uint *)(lVar18 + 0x1c);
        piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar26 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar26 * 0x10;
        iVar5 = *(int *)(lVar9 + 0x1a0);
        *(int *)(lVar18 + 0x18) = iVar5;
        *(uint *)(lVar9 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar5 + 1U) {
          apuStack_1e8[1] = (undefined *)0x143651dd5;
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar5);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar23 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar9 + lVar23) = lVar18;
        *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
        puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
        *puVar22 = 0;
        puVar22[1] = 0;
      }
    }
    lVar18 = *(longlong *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x154) = iVar6;
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
    if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        apuStack_1e8[1] = (undefined *)0x143650c78;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        if (*(int *)(lVar18 + 0x18) == -1) {
          lVar23 = *(longlong *)(lVar9 + 0x98);
          uVar26 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar26 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
          lVar23 = lVar23 + (ulonglong)uVar26 * 0x10;
          iVar5 = *(int *)(lVar23 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar5;
          *(uint *)(lVar23 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar23 + 0x1a4) < iVar5 + 1U) {
            apuStack_1e8[1] = (undefined *)0x143651729;
            FUN_140431d5c((longlong *)(lVar23 + 0x198),iVar5);
          }
          lVar23 = *(longlong *)(lVar23 + 0x198);
          lVar25 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar23 + lVar25) = lVar18;
          *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
          puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        apuStack_1e8[1] = (undefined *)0x143650c8c;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
      }
      else if (*(int *)(lVar18 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar9 + 0x98);
        uVar26 = *(uint *)(lVar18 + 0x1c);
        piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar26 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar26 * 0x10;
        iVar5 = *(int *)(lVar9 + 0x1a0);
        *(int *)(lVar18 + 0x18) = iVar5;
        *(uint *)(lVar9 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar5 + 1U) {
          apuStack_1e8[1] = (undefined *)0x143651de4;
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar5);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar23 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar9 + lVar23) = lVar18;
        *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
        puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
        *puVar22 = 0;
        puVar22[1] = 0;
      }
    }
    lVar18 = *(longlong *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x158) = iVar6;
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
    if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        apuStack_1e8[1] = (undefined *)0x143650cc6;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        if (*(int *)(lVar18 + 0x18) == -1) {
          lVar23 = *(longlong *)(lVar9 + 0x98);
          uVar26 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar26 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
          lVar23 = lVar23 + (ulonglong)uVar26 * 0x10;
          iVar6 = *(int *)(lVar23 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar6;
          *(uint *)(lVar23 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar23 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x143651738;
            FUN_140431d5c((longlong *)(lVar23 + 0x198),iVar6);
          }
          lVar23 = *(longlong *)(lVar23 + 0x198);
          lVar25 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar23 + lVar25) = lVar18;
          *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
          puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        apuStack_1e8[1] = (undefined *)0x143650cda;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
      }
      else if (*(int *)(lVar18 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar9 + 0x98);
        uVar26 = *(uint *)(lVar18 + 0x1c);
        piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar26 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar26 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(lVar18 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          apuStack_1e8[1] = (undefined *)0x143651df3;
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar23 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar23) = lVar18;
        *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
        puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
        *puVar22 = 0;
        puVar22[1] = 0;
      }
    }
    auVar3 = *(undefined1 (*) [16])(lVar7 + 0x540);
    auVar27 = divpd(auVar3,_DAT_1499387d0);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(double *)(lVar7 + 0x550);
    auVar28 = divpd(auVar28,_DAT_1499387d0);
    auVar27 = roundpd(auVar27,auVar27,3);
    auVar28 = roundpd(auVar28,auVar28,3);
    dVar13 = (auVar3._0_8_ - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar14 = (auVar3._8_8_ - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar29 = (*(double *)(lVar7 + 0x550) - auVar28._0_8_ * (double)DAT_1499387d0) *
             0.008726646259971648;
    dVar30 = (0.0 - auVar28._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    apuStack_1e8[1] = (undefined *)0x143650d39;
    dVar10 = sin(dVar13);
    apuStack_1e8[1] = (undefined *)0x143650d52;
    dVar11 = sin(dVar14);
    apuStack_1e8[1] = (undefined *)0x143650d60;
    dVar12 = sin(dVar29);
    apuStack_1e8[1] = (undefined *)0x143650d79;
    sin(dVar30);
    apuStack_1e8[1] = (undefined *)0x143650d82;
    dVar13 = cos(dVar13);
    apuStack_1e8[1] = (undefined *)0x143650d91;
    dVar14 = cos(dVar14);
    apuStack_1e8[1] = (undefined *)0x143650d9e;
    dVar29 = cos(dVar29);
    apuStack_1e8[1] = (undefined *)0x143650dac;
    cos(dVar30);
    uVar2 = *(undefined8 *)(lVar7 + 0x538);
    uVar15 = *(undefined8 *)(lVar7 + 0x528);
    uVar16 = *(undefined8 *)(lVar7 + 0x530);
    lVar18 = 0x50;
    do {
      *(undefined8 *)((longlong)apuStack_1e8 + lVar18) = 0;
      *(undefined8 *)((longlong)auStack_1d8 + lVar18 + -8) = 0;
      *(undefined4 *)((longlong)auStack_1d8 + lVar18) = 0;
      *(undefined4 *)((longlong)auStack_1d8 + lVar18 + 4) = 0;
      *(undefined4 *)((longlong)auStack_1d8 + lVar18 + 8) = 0;
      *(undefined4 *)((longlong)auStack_1d8 + lVar18 + 0xc) = 0x3ff00000;
      *(undefined8 *)((longlong)auStack_1c8 + lVar18) = 0;
      *(undefined8 *)((longlong)auStack_1c8 + lVar18 + 8) = 0;
      *(undefined8 *)((longlong)auStack_1c8 + lVar18 + 0x10) = 0;
      *(undefined8 *)(&stack0xfffffffffffffe50 + lVar18) = 0;
      *(undefined8 *)((longlong)&local_1a8 + lVar18) = 0x3ff0000000000000;
      *(undefined8 *)(&stack0xfffffffffffffe60 + lVar18) = 0x3ff0000000000000;
      *(undefined8 *)((longlong)local_198 + lVar18) = 0x3ff0000000000000;
      *(undefined8 *)((longlong)local_198 + lVar18 + 8) = 0;
      lVar18 = lVar18 + 0x60;
    } while (lVar18 != 0x110);
    dVar30 = dVar14 * dVar13 * dVar29 + dVar11 * dVar10 * dVar12;
    puVar22 = &DAT_14c846480;
    puVar24 = local_198;
    for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar24 = *puVar22;
      puVar22 = puVar22 + 1;
      puVar24 = puVar24 + 1;
    }
    local_128._8_4_ = SUB84(dVar30,0);
    local_128._0_8_ = dVar11 * dVar13 * dVar29 + -(dVar14 * dVar10 * dVar12);
    local_128._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    uStack_100 = 0;
    local_f8 = 0x3ff0000000000000;
    uStack_f0 = 0x3ff0000000000000;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0;
    lVar18 = *(longlong *)(lVar8 + 0x10);
    apuStack_1e8[1] = (undefined *)0x143650ec7;
    local_138 = dVar10 * dVar11 * dVar29 - dVar13 * dVar14 * dVar12;
    dStack_130 = -(dVar10 * dVar14 * dVar29) - dVar13 * dVar11 * dVar12;
    local_118 = uVar15;
    uStack_110 = uVar16;
    local_108 = uVar2;
    memcpy((void *)(lVar8 + 0x40),local_198,0xc0);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
    if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        apuStack_1e8[1] = (undefined *)0x143650ef6;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        if (*(int *)(lVar18 + 0x18) == -1) {
          lVar23 = *(longlong *)(lVar9 + 0x98);
          uVar26 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar26 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
          lVar23 = lVar23 + (ulonglong)uVar26 * 0x10;
          iVar6 = *(int *)(lVar23 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar6;
          *(uint *)(lVar23 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar23 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x143651747;
            FUN_140431d5c((longlong *)(lVar23 + 0x198),iVar6);
          }
          lVar23 = *(longlong *)(lVar23 + 0x198);
          lVar25 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar23 + lVar25) = lVar18;
          *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
          puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        apuStack_1e8[1] = (undefined *)0x143650f0a;
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
      }
      else if (*(int *)(lVar18 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar9 + 0x98);
        uVar26 = *(uint *)(lVar18 + 0x1c);
        piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar26 * 4);
        *piVar1 = *piVar1 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar26 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(lVar18 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          apuStack_1e8[1] = (undefined *)0x143651e02;
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar23 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar23) = lVar18;
        *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
        puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
        *puVar22 = 0;
        puVar22[1] = 0;
      }
    }
    if (local_1ac != 0) {
      dVar10 = (double)*(float *)(lVar7 + 0x128);
      lVar18 = *(longlong *)(lVar8 + 0x10);
      *(double *)(lVar8 + 0x228) = dVar10;
      *(double *)(lVar8 + 0x230) = dVar10;
      *(double *)(lVar8 + 0x238) = dVar10;
      *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
      if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          apuStack_1e8[1] = (undefined *)0x143650f6d;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
          if (*(int *)(lVar18 + 0x18) == -1) {
            lVar23 = *(longlong *)(lVar9 + 0x98);
            uVar26 = *(uint *)(lVar18 + 0x1c);
            piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar26 * 4);
            *piVar1 = *piVar1 + 1;
            *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
            lVar23 = lVar23 + (ulonglong)uVar26 * 0x10;
            iVar6 = *(int *)(lVar23 + 0x1a0);
            *(int *)(lVar18 + 0x18) = iVar6;
            *(uint *)(lVar23 + 0x1a0) = iVar6 + 1U;
            if (*(uint *)(lVar23 + 0x1a4) < iVar6 + 1U) {
              apuStack_1e8[1] = (undefined *)0x143651772;
              FUN_140431d5c((longlong *)(lVar23 + 0x198),iVar6);
            }
            lVar23 = *(longlong *)(lVar23 + 0x198);
            lVar25 = (longlong)iVar6 * 0x20;
            *(longlong *)(lVar23 + lVar25) = lVar18;
            *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
            puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
            *puVar22 = 0;
            puVar22[1] = 0;
          }
          apuStack_1e8[1] = (undefined *)0x143650f82;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        }
        else if (*(int *)(lVar18 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar9 + 0x98);
          uVar26 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar26 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar26 * 0x10;
          iVar6 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar6;
          *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x143651e20;
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar23 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar9 + lVar23) = lVar18;
          *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
          puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
      }
      dVar10 = (double)*(float *)(lVar7 + 0x124);
      lVar18 = *(longlong *)(lVar8 + 0x10);
      *(double *)(lVar8 + 0x240) = dVar10;
      *(double *)(lVar8 + 0x248) = dVar10;
      *(double *)(lVar8 + 0x250) = dVar10;
      *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
      if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          apuStack_1e8[1] = (undefined *)0x143650fda;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
          if (*(int *)(lVar18 + 0x18) == -1) {
            lVar23 = *(longlong *)(lVar9 + 0x98);
            uVar26 = *(uint *)(lVar18 + 0x1c);
            piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar26 * 4);
            *piVar1 = *piVar1 + 1;
            *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
            lVar23 = lVar23 + (ulonglong)uVar26 * 0x10;
            iVar6 = *(int *)(lVar23 + 0x1a0);
            *(int *)(lVar18 + 0x18) = iVar6;
            *(uint *)(lVar23 + 0x1a0) = iVar6 + 1U;
            if (*(uint *)(lVar23 + 0x1a4) < iVar6 + 1U) {
              apuStack_1e8[1] = (undefined *)0x143651781;
              FUN_140431d5c((longlong *)(lVar23 + 0x198),iVar6);
            }
            lVar23 = *(longlong *)(lVar23 + 0x198);
            lVar25 = (longlong)iVar6 * 0x20;
            *(longlong *)(lVar23 + lVar25) = lVar18;
            *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
            puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
            *puVar22 = 0;
            puVar22[1] = 0;
          }
          apuStack_1e8[1] = (undefined *)0x143650fef;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        }
        else if (*(int *)(lVar18 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar9 + 0x98);
          uVar26 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar26 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar26 * 0x10;
          iVar6 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar6;
          *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x143651e2f;
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar23 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar9 + lVar23) = lVar18;
          *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
          puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
      }
    }
    if ((uVar20 != 1) && ((*(uint *)(lVar7 + 0x120) & 1) != 0)) {
      dVar10 = (double)*(float *)(lVar7 + 0x130);
      lVar18 = *(longlong *)(lVar8 + 0x10);
      *(double *)(lVar8 + 0x2b8) = dVar10;
      *(double *)(lVar8 + 0x2c0) = dVar10;
      *(double *)(lVar8 + 0x2c8) = dVar10;
      *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
      if ((lVar18 != 0) && (lVar9 = *(longlong *)(lVar18 + 8), lVar9 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          apuStack_1e8[1] = (undefined *)0x143651060;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
          if (*(int *)(lVar18 + 0x18) == -1) {
            lVar23 = *(longlong *)(lVar9 + 0x98);
            uVar20 = *(uint *)(lVar18 + 0x1c);
            piVar1 = (int *)(lVar23 + 0x160 + (ulonglong)uVar20 * 4);
            *piVar1 = *piVar1 + 1;
            *(int *)(lVar23 + 0x194) = *(int *)(lVar23 + 0x194) + 1;
            lVar23 = lVar23 + (ulonglong)uVar20 * 0x10;
            iVar6 = *(int *)(lVar23 + 0x1a0);
            *(int *)(lVar18 + 0x18) = iVar6;
            *(uint *)(lVar23 + 0x1a0) = iVar6 + 1U;
            if (*(uint *)(lVar23 + 0x1a4) < iVar6 + 1U) {
              apuStack_1e8[1] = (undefined *)0x143651790;
              FUN_140431d5c((longlong *)(lVar23 + 0x198),iVar6);
            }
            lVar23 = *(longlong *)(lVar23 + 0x198);
            lVar25 = (longlong)iVar6 * 0x20;
            *(longlong *)(lVar23 + lVar25) = lVar18;
            *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
            puVar22 = (undefined8 *)(lVar23 + 0x10 + lVar25);
            *puVar22 = 0;
            puVar22[1] = 0;
          }
          apuStack_1e8[1] = (undefined *)0x143651075;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x128));
        }
        else if (*(int *)(lVar18 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar9 + 0x98);
          uVar20 = *(uint *)(lVar18 + 0x1c);
          piVar1 = (int *)(lVar9 + 0x160 + (ulonglong)uVar20 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar20 * 0x10;
          iVar6 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar18 + 0x18) = iVar6;
          *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x143651e3e;
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar23 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar9 + lVar23) = lVar18;
          *(undefined4 *)(lVar9 + 8 + lVar23) = 0;
          puVar22 = (undefined8 *)(lVar9 + 0x10 + lVar23);
          *puVar22 = 0;
          puVar22[1] = 0;
        }
      }
      dVar10 = (double)*(float *)(lVar7 + 300);
      lVar7 = *(longlong *)(lVar8 + 0x10);
      *(double *)(lVar8 + 0x2d0) = dVar10;
      *(double *)(lVar8 + 0x2d8) = dVar10;
      *(double *)(lVar8 + 0x2e0) = dVar10;
      *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | 0x80;
      if ((lVar7 != 0) && (lVar8 = *(longlong *)(lVar7 + 8), lVar8 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          apuStack_1e8[1] = (undefined *)0x1436510d4;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
          if (*(int *)(lVar7 + 0x18) == -1) {
            lVar8 = *(longlong *)(lVar8 + 0x98);
            uVar20 = *(uint *)(lVar7 + 0x1c);
            piVar1 = (int *)(lVar8 + 0x160 + (ulonglong)uVar20 * 4);
            *piVar1 = *piVar1 + 1;
            *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
            lVar8 = lVar8 + (ulonglong)uVar20 * 0x10;
            iVar6 = *(int *)(lVar8 + 0x1a0);
            *(int *)(lVar7 + 0x18) = iVar6;
            *(uint *)(lVar8 + 0x1a0) = iVar6 + 1U;
            if (*(uint *)(lVar8 + 0x1a4) < iVar6 + 1U) {
              apuStack_1e8[1] = (undefined *)0x14365179f;
              FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar6);
            }
            lVar8 = *(longlong *)(lVar8 + 0x198);
            lVar18 = (longlong)iVar6 * 0x20;
            *(longlong *)(lVar8 + lVar18) = lVar7;
            *(undefined4 *)(lVar8 + 8 + lVar18) = 0;
            puVar22 = (undefined8 *)(lVar8 + 0x10 + lVar18);
            *puVar22 = 0;
            puVar22[1] = 0;
          }
                    /* WARNING: Subroutine does not return */
          apuStack_1e8[1] = &UNK_1436510ef;
          FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_1d8);
        }
        if (*(int *)(lVar7 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar8 + 0x98);
          uVar20 = *(uint *)(lVar7 + 0x1c);
          piVar1 = (int *)(lVar8 + 0x160 + (ulonglong)uVar20 * 4);
          *piVar1 = *piVar1 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar20 * 0x10;
          iVar6 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar6;
          *(uint *)(lVar8 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar6 + 1U) {
            apuStack_1e8[1] = (undefined *)0x143651e4d;
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar6);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar18 = (longlong)iVar6 * 0x20;
          *(longlong *)(lVar8 + lVar18) = lVar7;
          *(undefined4 *)(lVar8 + 8 + lVar18) = 0;
          puVar22 = (undefined8 *)(lVar8 + 0x10 + lVar18);
          *puVar22 = 0;
          puVar22[1] = 0;
                    /* WARNING: Subroutine does not return */
          apuStack_1e8[1] = &UNK_143651d7b;
          FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_1d8);
        }
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    apuStack_1e8[1] = &UNK_143650999;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143651e52 FUN_143651e52 body=164 status=ok
// SIG undefined FUN_143651e52(void)

void FUN_143651e52(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_1c = (float)*(double *)(lVar1 + 0x1b8);
  local_20 = (float)*(double *)(lVar1 + 0x1b0);
  local_48 = *(undefined4 *)(lVar1 + 0x1c0);
  uStack_44 = *(undefined4 *)(lVar1 + 0x1c4);
  uStack_40 = *(undefined4 *)(lVar1 + 0x1c8);
  uStack_3c = *(undefined4 *)(lVar1 + 0x1cc);
  local_24 = (float)*(double *)(lVar1 + 0x1a8);
  local_38 = *(undefined8 *)(lVar1 + 0x1d0);
  local_28 = (float)*(double *)(lVar1 + 0x1a0);
  local_58 = &local_48;
  local_18 = 2;
  local_50 = 1;
  FUN_144a678a8(&local_58,*(undefined8 *)(*(longlong *)(lVar1 + 0x518) + 0x40));
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143651ef8 FUN_143651ef8 body=313 status=ok
// SIG undefined FUN_143651ef8(void)

void FUN_143651ef8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  double local_58;
  double dStack_50;
  double local_48;
  longlong lStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = param_1[1];
  lVar1 = *(longlong *)(lVar2 + 0x48);
  local_88 = local_38;
  local_38[0] = 0;
  local_38[1] = 0;
  local_98 = (undefined1)param_1[0x1e];
  local_90 = *(undefined1 *)((longlong)param_1 + 0xf1);
  local_58 = (double)param_1[2];
  dStack_50 = (double)param_1[3];
  local_48 = (double)param_1[4];
  lStack_40 = param_1[5];
  local_78 = (undefined4)param_1[6];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_70 = (undefined4)param_1[7];
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_68 = param_1[8];
  FUN_14091fbf6(*(undefined8 *)(*param_1 + 0x9c8),lVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  local_48 = (double)param_1[0x18];
  local_58 = (double)param_1[0x16];
  dStack_50 = (double)param_1[0x17];
  FUN_14091cdb4(lVar2,&local_58,1);
  local_48 = (double)param_1[0x1b] * 0.01745329238474369;
  dStack_50 = (double)param_1[0x1a] * 0.01745329238474369;
  local_58 = (double)param_1[0x19] * 0.01745329238474369;
  FUN_14091ceac(lVar2,&local_58,1);
  if ((local_38[2] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365203c FUN_14365203c body=29 status=ok
// SIG undefined FUN_14365203c(void)

void FUN_14365203c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14365205a FUN_14365205a body=29 status=ok
// SIG undefined FUN_14365205a(void)

undefined8 FUN_14365205a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143652118 FUN_143652118 body=29 status=ok
// SIG undefined FUN_143652118(void)

undefined8 FUN_143652118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14365214a FUN_14365214a body=85 status=ok
// SIG undefined FUN_14365214a(void)

void FUN_14365214a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa4d0a0;
  return;
}



// FUNCTION 1436521a0 FUN_1436521a0 body=85 status=ok
// SIG undefined FUN_1436521a0(void)

void FUN_1436521a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa4d0a0;
  return;
}



// FUNCTION 1436521f6 FUN_1436521f6 body=118 status=ok
// SIG undefined FUN_1436521f6(void)

void FUN_1436521f6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa4d0a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014365225d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14365226c FUN_14365226c body=30 status=ok
// SIG undefined FUN_14365226c(void)

void FUN_14365226c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baa4();
  if (lVar1 != 0) {
    *(undefined **)(lVar1 + 8) = &DAT_14caf8538;
  }
  return;
}



// FUNCTION 14365228a FUN_14365228a body=32 status=ok
// SIG undefined FUN_14365228a(void)

undefined1 FUN_14365228a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baa4();
  if (lVar1 != 0) {
    *(undefined **)(lVar1 + 8) = &DAT_14caf8538;
  }
  return 1;
}



// FUNCTION 1436522b6 FUN_1436522b6 body=29 status=ok
// SIG undefined FUN_1436522b6(void)

undefined8 FUN_1436522b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436522e8 FUN_1436522e8 body=85 status=ok
// SIG undefined FUN_1436522e8(void)

void FUN_1436522e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa4d180;
  return;
}



// FUNCTION 14365233e FUN_14365233e body=85 status=ok
// SIG undefined FUN_14365233e(void)

void FUN_14365233e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa4d180;
  return;
}



// FUNCTION 143652394 FUN_143652394 body=118 status=ok
// SIG undefined FUN_143652394(void)

void FUN_143652394(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa4d180;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001436523fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143652410 FUN_143652410 body=367 status=ok
// SIG undefined FUN_143652410(void)

undefined8
FUN_143652410(double *param_1,double *param_2,undefined8 param_3,double *param_4,double *param_5)

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
  undefined8 uVar10;
  
  dVar9 = DAT_14c8462d0;
  dVar8 = DAT_14c8462c8;
  dVar7 = DAT_14c8462c0;
  dVar1 = param_2[2];
  dVar2 = param_1[2];
  dVar3 = param_2[1];
  dVar4 = *param_1;
  dVar5 = param_1[1];
  dVar6 = (dVar1 - dVar2) * DAT_14c8462d0 +
          (*param_2 - dVar4) * DAT_14c8462c0 + DAT_14c8462c8 * (dVar3 - dVar5);
  if (ABS(dVar6) <= 9.99999993922529e-09) {
    uVar10 = 0;
  }
  else {
    dVar6 = -(dVar2 * DAT_14c8462d0 + dVar4 * DAT_14c8462c0 + DAT_14c8462c8 * dVar5) / dVar6;
    uVar10 = 0;
    if ((0.0 < dVar6) && (dVar6 <= 1.0)) {
      *param_4 = dVar4 + (*param_2 - dVar4) * dVar6;
      param_4[1] = dVar5 + (dVar3 - dVar5) * dVar6;
      param_4[2] = dVar2 + (dVar1 - dVar2) * dVar6;
      *param_5 = dVar7;
      param_5[1] = dVar8;
      param_5[2] = dVar9;
      uVar10 = 1;
    }
  }
  return uVar10;
}



// FUNCTION 143652598 FUN_143652598 body=12 status=ok
// SIG undefined FUN_143652598(void)

void FUN_143652598(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436525a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436525a4 FUN_1436525a4 body=29 status=ok
// SIG undefined FUN_1436525a4(void)

undefined8 FUN_1436525a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436525c2 FUN_1436525c2 body=282 status=ok
// SIG undefined FUN_1436525c2(void)

undefined8 * FUN_1436525c2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365077e);
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



// FUNCTION 1436526dc FUN_1436526dc body=114 status=ok
// SIG undefined FUN_1436526dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436526dc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143652744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*_DAT_000000a8 + 0x18))(_DAT_000000a8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[0x15] + 0x18))((longlong *)param_1[0x15],&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143652720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14365274e FUN_14365274e body=51 status=ok
// SIG undefined FUN_14365274e(void)

void FUN_14365274e(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143652777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14365278c FUN_14365278c body=12 status=ok
// SIG undefined FUN_14365278c(void)

void FUN_14365278c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143652795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143652798 FUN_143652798 body=29 status=ok
// SIG undefined FUN_143652798(void)

undefined8 FUN_143652798(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436527b6 FUN_1436527b6 body=282 status=ok
// SIG undefined FUN_1436527b6(void)

undefined8 * FUN_1436527b6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365077e);
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



// FUNCTION 1436528d0 FUN_1436528d0 body=98 status=ok
// SIG undefined FUN_1436528d0(void)

void FUN_1436528d0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143652928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143652932 FUN_143652932 body=122 status=ok
// SIG undefined FUN_143652932(void)

void FUN_143652932(undefined8 *param_1,undefined8 param_2)

{
  FUN_143646a06(*param_1,param_2,param_1 + 5,param_1 + 3,param_1 + 1,param_1 + 0x10,param_1 + 0x12,
                *(undefined4 *)(param_1 + 0x14),param_1 + 0x1f,param_1 + 0x21,
                (longlong)param_1 + 0xa4);
  return;
}



// FUNCTION 1436529b6 FUN_1436529b6 body=29 status=ok
// SIG undefined FUN_1436529b6(void)

void FUN_1436529b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436529d4 FUN_1436529d4 body=139 status=ok
// SIG undefined FUN_1436529d4(void)

undefined8 * FUN_1436529d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa4d320;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143652a60 FUN_143652a60 body=282 status=ok
// SIG undefined FUN_143652a60(void)

undefined8 * FUN_143652a60(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365077e);
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



// FUNCTION 143652b7a FUN_143652b7a body=292 status=ok
// SIG undefined FUN_143652b7a(void)

void FUN_143652b7a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143646a06(param_1[0x15],&DAT_14ca85100,param_1 + 0x1a,param_1 + 0x18,param_1 + 0x16,
                param_1 + 0x25,param_1 + 0x27,*(undefined4 *)(param_1 + 0x29),param_1 + 0x34,
                param_1 + 0x36,(longlong)param_1 + 0x14c);
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143652c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143652cb6 FUN_143652cb6 body=12 status=ok
// SIG undefined FUN_143652cb6(void)

void FUN_143652cb6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143652cbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143652cc2 FUN_143652cc2 body=29 status=ok
// SIG undefined FUN_143652cc2(void)

undefined8 FUN_143652cc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143652ce0 FUN_143652ce0 body=282 status=ok
// SIG undefined FUN_143652ce0(void)

undefined8 * FUN_143652ce0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365077e);
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



// FUNCTION 143652dfa FUN_143652dfa body=80 status=ok
// SIG undefined FUN_143652dfa(void)

ulonglong FUN_143652dfa(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (param_1[0x15] != 0) {
    uVar2 = FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143652e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143652e4a FUN_143652e4a body=40 status=ok
// SIG undefined FUN_143652e4a(void)

void FUN_143652e4a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_147ca6964(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 143652e7c FUN_143652e7c body=12 status=ok
// SIG undefined FUN_143652e7c(void)

void FUN_143652e7c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143652e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143652e88 FUN_143652e88 body=29 status=ok
// SIG undefined FUN_143652e88(void)

undefined8 FUN_143652e88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143652ea6 FUN_143652ea6 body=282 status=ok
// SIG undefined FUN_143652ea6(void)

undefined8 * FUN_143652ea6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365077e);
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



// FUNCTION 143652fc0 FUN_143652fc0 body=96 status=ok
// SIG undefined FUN_143652fc0(void)

ulonglong FUN_143652fc0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_147ca6964(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143653003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143653020 FUN_143653020 body=71 status=ok
// SIG undefined FUN_143653020(void)

ulonglong FUN_143653020(undefined4 *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  param_2 = (longlong *)*param_2;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x2c8))(param_2);
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*param_2 + 0x2c0))(param_2,*param_1,*(undefined8 *)(param_1 + 2));
      uVar3 = (ulonglong)uVar2 ^ 1;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 143653087 FUN_143653087 body=8184 status=ok
// SIG undefined FUN_143653087(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143653087(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa2bba0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa2c400,1,0);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14caf7ce4);
  if (cVar1 == '\0') {
    _DAT_14caf7ce4 = 0;
    uRam000000014caf7cec = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "bone";
  local_68 = (code *)CONCAT35(local_68._5_3_,4);
  FUN_14001a6c0(&local_70,1);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa2f7a0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa2fd90,1,&PTR_FUN_14aa2fd60);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa313f0,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf7f30,L"p.SkipPhysicsReplication",&DAT_14caf7f28,&DAT_149dfb77a);
  atexit(FUN_1436424da);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7f40,L"p.NetPingExtrapolation",&DAT_14c76182c,&DAT_149dfb77a);
  atexit(FUN_14364251f);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7f50,L"p.NetPingLimit",&DAT_14c761830,&DAT_149dfb77a);
  atexit(FUN_143642564);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7f60,L"p.ErrorPerLinearDifference",&DAT_14c761834,&DAT_149dfb77a);
  atexit(FUN_1436425a9);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7f70,L"p.ErrorPerAngularDifference",&DAT_14c761838,&DAT_149dfb77a);
  atexit(FUN_1436425ee);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7f80,L"p.ErrorAccumulationSeconds",&DAT_14c76183c,&DAT_149dfb77a);
  atexit(FUN_143642633);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7f90,L"p.ErrorAccumulationDistanceSq",&DAT_14c761840,&DAT_149dfb77a);
  atexit(FUN_143642678);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7fa0,L"p.ErrorAccumulationSimilarity",&DAT_14c761844,&DAT_149dfb77a);
  atexit(FUN_1436426bd);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7fb0,L"p.MaxLinearHardSnapDistance",&DAT_14c761848,&DAT_149dfb77a);
  atexit(FUN_143642702);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7fc0,L"p.MaxRestoredStateError",&DAT_14c76184c,&DAT_149dfb77a);
  atexit(FUN_143642747);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7fd0,L"p.PositionLerp",&DAT_14c761850,&DAT_149dfb77a);
  atexit(FUN_14364278c);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7fe0,L"p.LinearVelocityCoefficient",&DAT_14c761854,&DAT_149dfb77a);
  atexit(FUN_1436427d1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf7ff0,L"p.AngleLerp",&DAT_14c761858,&DAT_149dfb77a);
  atexit(FUN_143642816);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8000,L"p.AngularVelocityCoefficient",&DAT_14c76185c,&DAT_149dfb77a);
  atexit(FUN_14364285b);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf8018,L"p.AlwaysHardSnap",&DAT_14caf8010,&DAT_149dfb77a);
  atexit(FUN_1436428a0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf8030,L"p.AlwaysResetPhysics",&DAT_14caf8028,&DAT_149dfb77a);
  atexit(FUN_1436428e5);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf8040,L"p.ApplyAsyncSleepState",&DAT_14c761860,&DAT_149dfb77a);
  atexit(FUN_14364292a);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf8050,L"p.SkipSkeletalRepOptimization",&DAT_14c761864,
                L"If true, we don\'t move the skeletal mesh component during replication. This is ok because the skeletal mesh already polls physx after its results"
               );
  atexit(FUN_14364296f);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf8068,L"np2.EnableDefaultReplication",&DAT_14caf8060,
                L"Enable default replication in the networked physics prediction flow.");
  atexit(FUN_1436429b4);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8078,L"p.DefaultReplication.Legacy.HardsnapInPT",&DAT_14cafa558,
                L"If default replication is used and it\'s running the legacy flow through Game Thread, allow hardsnapping to be performed on Physics Thread if async physics is enabled.."
               );
  atexit(FUN_1436429f9);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8088,L"p.DefaultReplication.CorrectConnectedBodies",&DAT_14cafa559,
                L"When true, transform corrections will also apply to any connected physics object."
               );
  atexit(FUN_143642a3e);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8098,L"p.DefaultReplication.CorrectConnectedBodiesFriction",&DAT_14c76190c
                ,
                L"When true, transform correction on any connected physics object will also recalculate their friction."
               );
  atexit(FUN_143642a83);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf80a8,L"np2.Resim.RuntimeCorrectionEnabled",&DAT_14cafa568,
                L"Apply positional and rotational runtime corrections while within resim trigger distance."
               );
  atexit(FUN_143642ac8);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf80b8,L"np2.Resim.RuntimeVelocityCorrection",&DAT_14cafa569,
                L"Apply linear and angular velocity corrections in runtime while within resim trigger distance. Used if RuntimeCorrectionEnabled is true."
               );
  atexit(FUN_143642b0d);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf80c8,L"np2.Resim.RuntimeCorrectConnectedBodies",&DAT_14c761932,
                L"If true runtime position and rotation correction will also shift transform of any connected physics objects. Used if RuntimeCorrectionEnabled is true."
               );
  atexit(FUN_143642b52);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf80d8,L"np2.Resim.DisableReplicationOnInteraction",&DAT_14c761868,
                L"If a resim object interacts with another object not running resimulation, deactivate that objects replication until interaction stops."
               );
  atexit(FUN_143642b97);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf80e8,L"np2.Resim.PosStabilityMultiplier",&DAT_14c761934,
                L"Recommended range between 0.0-1.0. Lower value means more stable positional corrections."
               );
  atexit(FUN_143642bdc);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf80f8,L"np2.Resim.RotStabilityMultiplier",&DAT_14c761938,
                L"Recommended range between 0.0-1.0. Lower value means more stable rotational corrections."
               );
  atexit(FUN_143642c21);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8108,L"np2.Resim.VelStabilityMultiplier",&DAT_14c76193c,
                L"Recommended range between 0.0-1.0. Lower value means more stable linear velocity corrections."
               );
  atexit(FUN_143642c66);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8118,L"np2.Resim.AngVelStabilityMultiplier",&DAT_14c761940,
                L"Recommended range between 0.0-1.0. Lower value means more stable angular velocity corrections."
               );
  atexit(FUN_143642cab);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8130,L"np2.Resim.DrawDebug",&DAT_14caf8128,
                L"Resimulation debug draw-calls");
  atexit(FUN_143642cf0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8140,L"np2.PredictiveInterpolation.PosCorrectionTimeBase",&DAT_14cafa55c,
                L"Base time to correct positional offset over. RoundTripTime * PosCorrectionTimeMultiplier is added on top of this."
               );
  atexit(FUN_143642d35);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8150,L"np2.PredictiveInterpolation.PosCorrectionTimeMin",&DAT_14c761910,
                L"Min time to correct positional offset over. DeltaSeconds is added on top of this."
               );
  atexit(FUN_143642d7a);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8160,L"np2.PredictiveInterpolation.PosCorrectionTimeMultiplier",
                &DAT_14c761914,
                L"Multiplier to adjust how much of RoundTripTime to add to positional offset correction."
               );
  atexit(FUN_143642dbf);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8170,L"np2.PredictiveInterpolation.RotCorrectionTimeBase",&DAT_14cafa560,
                L"Base time to correct rotational offset over. RoundTripTime * RotCorrectionTimeMultiplier is added on top of this."
               );
  atexit(FUN_143642e04);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8180,L"np2.PredictiveInterpolation.RotCorrectionTimeMin",&DAT_14c761918,
                L"Min time to correct rotational offset over. DeltaSeconds is added on top of this."
               );
  atexit(FUN_143642e49);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8190,L"np2.PredictiveInterpolation.RotCorrectionTimeMultiplier",
                &DAT_14c76191c,
                L"Multiplier to adjust how much of RoundTripTime to add to rotational offset correction."
               );
  atexit(FUN_143642e8e);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf81a0,L"np2.PredictiveInterpolation.InterpolationTimeMultiplier",
                &DAT_14c761920,
                L"Multiplier to adjust the interpolation time which is based on the sendrate of state data from the server."
               );
  atexit(FUN_143642ed3);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf81b0,L"np2.PredictiveInterpolation.RotInterpolationTimeMultiplier",
                &DAT_14c761924,
                L"Multiplier to adjust the rotational interpolation time which is based on the sendrate of state data from the server."
               );
  atexit(FUN_143642f18);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf81c0,L"np2.PredictiveInterpolation.AverageReceiveIntervalSmoothing",
                &DAT_14c76186c,
                L"Recommended range: 1.0 - 5.0. Higher value makes the average receive interval adjust itself slower, reducing spikes in InterpolationTime."
               );
  atexit(FUN_143642f5d);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf81d0,L"np2.PredictiveInterpolation.ExtrapolationTimeMultiplier",
                &DAT_14c761870,
                L"Multiplier to adjust the time to extrapolate the target forward over, the time is based on current send-rate."
               );
  atexit(FUN_143642fa2);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf81e0,L"np2.PredictiveInterpolation.ExtrapolationMinTime",&DAT_14c761874,
                L"Clamps minimum extrapolation time. Value in seconds. Disable minimum clamp by setting to 0."
               );
  atexit(FUN_143642fe7);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf81f0,L"np2.PredictiveInterpolation.MinExpectedDistanceCovered",
                &DAT_14c761878,
                L"Value between 0-1, in percentage where 0.25 = 25%. How much of the expected distance based on replication velocity should the object have covered in a simulation tick to Not be considered stuck."
               );
  atexit(FUN_14364302c);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8200,L"np2.PredictiveInterpolation.ErrorAccumulationDecreaseMultiplier",
                &DAT_14c76187c,
                L"Multiplier to adjust how fast we decrease accumulated error time when we no longer accumulate error."
               );
  atexit(FUN_143643071);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8210,L"np2.PredictiveInterpolation.ErrorAccumulationSeconds",
                &DAT_14c761880,
                L"Perform a reposition if replication have not been able to cover the min expected distance towards the target for this amount of time."
               );
  atexit(FUN_1436430b6);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8228,L"np2.PredictiveInterpolation.DisableErrorVelocityLimits",
                &DAT_14caf8220,
                L"Disable the velocity limit and allow error accumulation at any velocity.");
  atexit(FUN_1436430fb);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8238,L"np2.PredictiveInterpolation.ErrorAccLinVelMaxLimit",&DAT_14c761884,
                L"If target velocity is below this limit we check for desync to trigger softsnap and accumulate time to build up to a hardsnap."
               );
  atexit(FUN_143643140);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8248,L"np2.PredictiveInterpolation.ErrorAccAngVelMaxLimit",&DAT_14c761888,
                L"If target angular velocity (in radians) is below this limit we check for desync to trigger softsnap and accumulate time to build up to a hardsnap."
               );
  atexit(FUN_143643185);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8258,L"np2.PredictiveInterpolation.SoftSnapPosStrength",&DAT_14c761928,
                L"Value in percent between 0.0 - 1.0 representing how much to softsnap each tick of the remaining positional distance."
               );
  atexit(FUN_1436431ca);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8268,L"np2.PredictiveInterpolation.SoftSnapRotStrength",&DAT_14c76192c,
                L"Value in percent between 0.0 - 1.0 representing how much to softsnap each tick of the remaining rotational distance."
               );
  atexit(FUN_14364320f);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8278,L"np2.PredictiveInterpolation.SoftSnapToSource",&DAT_14cafa564,
                L"If true, soft snap will be performed towards the source state of the current target instead of the predicted state of the current target."
               );
  atexit(FUN_143643254);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8288,L"np2.PredictiveInterpolation.EarlyOutDistanceSqr",&DAT_14c76188c,
                L"Squared value. If object is within this distance from the source target, early out from replication and apply sleep if replicated."
               );
  atexit(FUN_143643299);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8298,L"np2.PredictiveInterpolation.EarlyOutAngle",&DAT_14c761890,
                L"If object is within this rotational angle (in degrees) from the source target, early out from replication and apply sleep if replicated."
               );
  atexit(FUN_1436432de);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf82a8,L"np2.PredictiveInterpolation.EarlyOutWithVelocity",&DAT_14c761894,
                L"If true, allow replication logic to early out if current velocities are driving replication well enough. If false, only early out if target velocity is zero."
               );
  atexit(FUN_143643323);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf82b8,L"np2.PredictiveInterpolation.SkipVelocityRepOnPosEarlyOut",
                &DAT_14c761930,
                L"If true, don\'t run linear velocity replication if position can early out but angular can\'t early out."
               );
  atexit(FUN_143643368);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf82c8,L"np2.PredictiveInterpolation.PostResimWaitForUpdate",&DAT_14cafa566,
                L"After a resimulation, wait for replicated states that correspond to post-resim state before processing replication again."
               );
  atexit(FUN_1436433ad);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf82d8,L"np2.PredictiveInterpolation.VelocityBased",&DAT_14c761895,
                L"When true, predictive interpolation replication mode will only apply linear velocity and angular velocity"
               );
  atexit(FUN_1436433f2);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf82f0,L"np2.PredictiveInterpolation.CorrectionAsVelocity",&DAT_14caf82e8,
                L"When true, predictive interpolation will apply positional and rotational offset correction as a velocity instead of as a transform shift."
               );
  atexit(FUN_143643437);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8300,L"np2.PredictiveInterpolation.CorrectConnectedBodies",&DAT_14cafa567,
                L"When true, transform corrections will also apply to any connected physics object."
               );
  atexit(FUN_14364347c);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8310,L"np2.PredictiveInterpolation.CorrectConnectedBodiesFriction",
                &DAT_14c761931,
                L"When true, transform correction on any connected physics object will also recalculate their friction."
               );
  atexit(FUN_1436434c1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8320,L"np2.PredictiveInterpolation.SleepConnectedBodies",&DAT_14c761896,
                L"When true, sleep state will be applied to any dynamic physics object connected to the replicated object."
               );
  atexit(FUN_143643506);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8330,L"np2.PredictiveInterpolation.KinematicPrediction",&DAT_14c761897,
                L"When true, predictive interpolation will perform predictive movement instead of interpolation for kinematic objects."
               );
  atexit(FUN_14364354b);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8348,L"np2.PredictiveInterpolation.KinematicHardSnap",&DAT_14caf8340,
                L"When true, predictive interpolation will perform a hard snap for objects that are kinematic."
               );
  atexit(FUN_143643590);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8358,L"np2.PredictiveInterpolation.DisableSoftSnap",&DAT_14cafa565,
                L"When true, predictive interpolation will not use softsnap to correct the replication with when velocity fails. Hardsnap will still eventually kick in if replication can\'t reach the target."
               );
  atexit(FUN_1436435d5);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8370,L"np2.PredictiveInterpolation.AlwaysHardSnap",&DAT_14caf8368,
                L"When true, predictive interpolation replication mode will always hard snap. Used as a backup measure"
               );
  atexit(FUN_14364361a);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf8388,L"np2.PredictiveInterpolation.SkipReplication",&DAT_14caf8380,
                L"When true, predictive interpolation is not applied anymore letting the object simulate freely instead"
               );
  atexit(FUN_14364365f);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf83a0,L"np2.PredictiveInterpolation.DontClearTarget",&DAT_14caf8398,
                L"When true, predictive interpolation will not lose track of the last replicated state after coming to rest."
               );
  atexit(FUN_1436436a4);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf83b8,L"np2.PredictiveInterpolation.DrawDebugTargets",&DAT_14caf83b0,
                L"Draw target states, color coded by which ServerFrame they originate from, replicated targets are large and extrapolated targets are small. There is a Z offset to the draw calls."
               );
  atexit(FUN_1436436e9);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf83d0,L"np2.PredictiveInterpolation.DrawDebugVectors",&DAT_14caf83c8,
                L"Draw replication vectors, target velocity, replicated velocity, velocity change between replication calls etc."
               );
  atexit(FUN_14364372e);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf83e0,L"np2.PredictiveInterpolation.DrawDebugZOffset",&DAT_14c761898,
                L"Offset in Z axis for draw debug calls");
  atexit(FUN_143643773);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf83f0,L"np2.PredictiveInterpolation.SleepSecondsClearTarget",&DAT_14c76189c
                ,
                L"Wait for the object to sleep for this many seconds before clearing the replication target, to ensure nothing wakes up the object just after it goes to sleep on the client."
               );
  atexit(FUN_1436437b8);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf8400,L"np2.PredictiveInterpolation.TargetTickAlignmentClampMultiplier",
                &DAT_14c7618a0,
                L"Multiplier to adjust clamping of target alignment via TickCount. Multiplier is performed on AverageReceiveInterval."
               );
  atexit(FUN_1436437fd);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf8428,L"np2.ReplicationCache.LingerForNSeconds",&DAT_14c7618a4,
                L"How long to keep data in the replication cache without the actor accessing it, after this we stop caching the actors state until it tries to access it again."
               );
  atexit(FUN_1436448c2);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14aa37610;
  local_88 = 4;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa376f0,1,&PTR_FUN_14aa37650);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa37e40,1,0);
  DAT_14caf8500 = 0;
  DAT_14caf8508 = 0;
  _DAT_14caf8510 = 0;
  _DAT_14caf8518 = 2;
  _DAT_14caf851c = 0;
  atexit(FUN_143644cd2);
  DAT_14cafa528 = 0;
  _DAT_14cafa530 = 0;
  _DAT_14cafa538 = 2;
  _DAT_14cafa53c = 0;
  atexit(FUN_143644d03);
  DAT_14cafa540 = 0;
  _DAT_14cafa548 = 0;
  _DAT_14cafa550 = 2;
  _DAT_14cafa554 = 0;
  atexit(FUN_143644d34);
  DAT_14caf8520 = 0;
  _DAT_14caf8528 = 0;
  _DAT_14caf8530 = 2;
  _DAT_14caf8534 = 0;
  atexit(FUN_143644d65);
  _DAT_14caf8538 = &PTR_FUN_14aa4c5a0;
  _DAT_14caf8540 = 0;
  DAT_14caf8558 = 0;
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa38b80,1,0);
  DAT_14caf85b0 = 0;
  DAT_14caf85c0 = &PTR_LAB_14aa4da30;
  _DAT_14caf85c8 = FUN_143652410;
  DAT_14caf85a0 = FUN_147ca5e84;
  atexit((_func_5014 *)&LAB_143646010);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa39e60,2,0);
  local_88._0_4_ = 0x60;
  FUN_141471170(&DAT_14caf8628,L"r.PhysicsField.BuildClipmap",&DAT_14c7618a8,
                L"Build the Physics field clipmap");
  atexit(FUN_143646037);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_88._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14caf8638,L"r.PhysicsField.EnableField",&local_70,
                L"Enable/Disable the Physics field clipmap");
  atexit(FUN_14364607c);
  local_88._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14caf8650,L"r.PhysicsField.ClipmapDistance",&DAT_14c7618ac,
                L"Max distance from the clipmap center");
  atexit(FUN_1436460c1);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caf8660,L"r.PhysicsField.ClipmapCount",&DAT_14c7618b0,
                L"Number of clipmaps used for the physics field");
  atexit(FUN_143646106);
  local_88._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14caf8670,L"r.PhysicsField.ClipmapExponent",&DAT_14c7618b4,
                L"Exponent used to derive each clipmap\'s size, together with r.PhysicsField.ClipmapDistance"
               );
  atexit(FUN_14364614b);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caf8680,L"r.PhysicsField.ClipmapResolution",&DAT_14c7618b8,
                L"Resolution of the physics field.  Higher values increase fidelity but also increase memory and composition cost."
               );
  atexit(FUN_143646190);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caf8698,L"r.PhysicsField.SingleTarget",&DAT_14caf8690,
                L"Limnit the physics field build to only one target, the linear force");
  atexit(FUN_1436461d5);
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_141471170(&DAT_14caf86a8,L"r.PhysicsField.EnableCulling",&DAT_14c7618bc,
                L"Enable the spatial culling based on the field nodes bounds");
  atexit(FUN_14364621a);
  local_68 = FUN_145d1f826;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf87d0,&local_70);
  local_68 = FUN_145d72530;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf88f8,&local_70);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa3aeb0,1,0);
  local_70 = "SMInstance";
  local_68 = (code *)CONCAT35(local_68._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14caf8988 = (ulonglong)uVar2;
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa3b3f0,1,0);
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_1415c789c(&DAT_14caf89e8,L"r.ForegroundFOVOverride",&DAT_14c7618c8,&DAT_149dfb77a);
  atexit(FUN_14364b72a);
  FUN_1446f470e(&DAT_14caf9548,L"ClientAckTimeDilation",1);
  FUN_1446f470e(&DAT_14caf9558,L"ClientAckUpdateLevelVisibility",1);
  FUN_1446f470e(&DAT_14caf9568,L"ClientAddTextureStreamingLoc",1);
  FUN_1446f470e(&DAT_14caf9578,L"ClientCancelPendingMapChange",1);
  FUN_1446f470e(&DAT_14caf9588,L"ClientCapBandwidth",1);
  FUN_1446f470e(&DAT_14caf9598,L"ClientClearCameraLensEffects",1);
  FUN_1446f470e(&DAT_14caf95a8,L"ClientCommitMapChange",1);
  FUN_1446f470e(&DAT_14caf95b8,L"ClientCorrectionAsyncPhysicsTimestamp",1);
  FUN_1446f470e(&DAT_14caf95c8,L"ClientEnableNetworkVoice",1);
  FUN_1446f470e(&DAT_14caf95d8,L"ClientEndOnlineSession",1);
  FUN_1446f470e(&DAT_14caf95e8,L"ClientFlushLevelStreaming",1);
  FUN_1446f470e(&DAT_14caf95f8,L"ClientForceGarbageCollection",1);
  FUN_1446f470e(&DAT_14caf9608,L"ClientGameEnded",1);
  FUN_1446f470e(&DAT_14caf9618,L"ClientGotoState",1);
  FUN_1446f470e(&DAT_14caf9628,L"ClientIgnoreLookInput",1);
  FUN_1446f470e(&DAT_14caf9638,L"ClientIgnoreMoveInput",1);
  FUN_1446f470e(&DAT_14caf9648,L"ClientMessage",1);
  FUN_1446f470e(&DAT_14caf9658,L"ClientMutePlayer",1);
  FUN_1446f470e(&DAT_14caf9668,L"ClientPlayForceFeedback_Internal",1);
  FUN_1446f470e(&DAT_14caf9678,L"ClientPlaySound",1);
  FUN_1446f470e(&DAT_14caf9688,L"ClientPlaySoundAtLocation",1);
  FUN_1446f470e(&DAT_14caf9698,L"ClientPrepareMapChange",1);
  FUN_1446f470e(&DAT_14caf96a8,L"ClientPrestreamTextures",1);
  FUN_1446f470e(&DAT_14caf96b8,L"ClientReceiveLocalizedMessage",1);
  FUN_1446f470e(&DAT_14caf96c8,L"ClientRecvServerAckFrame",1);
  FUN_1446f470e(&DAT_14caf96d8,L"ClientRecvServerAckFrameDebug",1);
  FUN_1446f470e(&DAT_14caf96e8,L"ClientRepObjRef",1);
  FUN_1446f470e(&DAT_14caf96f8,L"ClientReset",1);
  FUN_1446f470e(&DAT_14caf9708,L"ClientRestart",1);
  FUN_1446f470e(&DAT_14caf9718,L"ClientRetryClientRestart",1);
  FUN_1446f470e(&DAT_14caf9728,L"ClientReturnToMainMenuWithTextReason",1);
  FUN_1446f470e(&DAT_14caf9738,L"ClientSetBlockOnAsyncLoading",1);
  FUN_1446f470e(&DAT_14caf9748,L"ClientSetCameraFade",1);
  FUN_1446f470e(&DAT_14caf9758,L"ClientSetCameraMode",1);
  FUN_1446f470e(&DAT_14caf9768,L"ClientSetCinematicMode",1);
  FUN_1446f470e(&DAT_14caf9778,L"ClientSetForceMipLevelsToBeResident",1);
  FUN_1446f470e(&DAT_14caf9788,L"ClientSetHUD",1);
  FUN_1446f470e(&DAT_14caf9798,L"ClientSetSpectatorWaiting",1);
  FUN_1446f470e(&DAT_14caf97a8,L"ClientSetupNetworkPhysicsTimestamp",1);
  FUN_1446f470e(&DAT_14caf97b8,L"ClientSetViewTarget",1);
  FUN_1446f470e(&DAT_14caf97c8,L"ClientSpawnCameraLensEffect",1);
  FUN_1446f470e(&DAT_14caf97d8,L"ClientSpawnGenericCameraLensEffect",1);
  FUN_1446f470e(&DAT_14caf97e8,L"ClientStartCameraShake",1);
  FUN_1446f470e(&DAT_14caf9800,L"ClientStartOnlineSession",1);
  FUN_1446f470e(&DAT_14caf9810,L"ClientStopCameraShake",1);
  FUN_1446f470e(&DAT_14caf9828,L"ClientStopForceFeedback",1);
  FUN_1446f470e(&DAT_14caf9838,L"ClientTeamMessage",1);
  FUN_1446f470e(&DAT_14caf9850,L"ClientTravelInternal",1);
  FUN_1446f470e(&DAT_14caf9860,L"ClientUnmutePlayer",1);
  FUN_1446f470e(&DAT_14caf9870,L"ClientUnmutePlayers",1);
  FUN_1446f470e(&DAT_14caf9880,L"ClientUpdateLevelStreamingStatus",1);
  FUN_1446f470e(&DAT_14caf9890,L"ClientUpdateMultipleLevelsStreamingStatus",1);
  FUN_1446f470e(&DAT_14caf98a0,L"ClientVoiceHandshakeComplete",1);
  FUN_1446f470e(&DAT_14caf98b0,L"ClientWasKicked",1);
  FUN_1446f470e(&DAT_14caf99d8,L"OnServerStartedVisualLogger",1);
  FUN_1446f470e(&DAT_14caf9a28,L"ServerAcknowledgePossession",1);
  FUN_1446f470e(&DAT_14caf9a38,L"ServerBlockPlayer",1);
  FUN_1446f470e(&DAT_14caf9a48,L"ServerCamera",1);
  FUN_1446f470e(&DAT_14caf9a58,L"ServerChangeName",1);
  FUN_1446f470e(&DAT_14caf9a68,L"ServerCheckClientPossession",1);
  FUN_1446f470e(&DAT_14caf9a78,L"ServerCheckClientPossessionReliable",1);
  FUN_1446f470e(&DAT_14caf9a88,L"ServerDestroy",1);
  FUN_1446f470e(&DAT_14caf9aa0,L"ServerExecRPC",1);
  FUN_1446f470e(&DAT_14caf9ab0,L"ServerGbxConsoleCommand",1);
  FUN_1446f470e(&DAT_14caf9ac0,L"ServerMutePlayer",1);
  FUN_1446f470e(&DAT_14caf9ad0,L"ServerNotifyLoadedWorld",1);
  FUN_1446f470e(&DAT_14caf9ae0,L"ServerPause",1);
  FUN_1446f470e(&DAT_14caf9af0,L"ServerRecvClientInputFrame",1);
  FUN_1446f470e(&DAT_14caf9b00,L"ServerRestartPlayer",1);
  FUN_1446f470e(&DAT_14caf9b10,L"ServerSeamlessNetTransitionTeleport",1);
  FUN_1446f470e(&DAT_14caf9b20,L"ServerSendLatestAsyncPhysicsTimestamp",1);
  FUN_1446f470e(&DAT_14caf9b30,L"ServerSetSpectatorLocation",1);
  FUN_1446f470e(&DAT_14caf9b40,L"ServerSetSpectatorWaiting",1);
  FUN_1446f470e(&DAT_14caf9b50,L"ServerShortTimeout",1);
  FUN_1446f470e(&DAT_14caf9b60,L"ServerToggleAILogging",1);
  FUN_1446f470e(&DAT_14caf9b70,L"ServerUnblockPlayer",1);
  FUN_1446f470e(&DAT_14caf9b80,L"ServerUnmutePlayer",1);
  FUN_1446f470e(&DAT_14caf9b90,L"ServerUpdateCamera",1);
  FUN_1446f470e(&DAT_14caf9ba0,L"ServerUpdateLevelVisibility",1);
  FUN_1446f470e(&DAT_14caf9bb0,L"ServerUpdateMultipleLevelsVisibility",1);
  FUN_1446f470e(&DAT_14caf9bc0,L"ServerVerifyViewTarget",1);
  FUN_1446f470e(&DAT_14caf9bd0,L"ServerViewNextPlayer",1);
  FUN_1446f470e(&DAT_14caf9be0,L"ServerViewPrevPlayer",1);
  FUN_1446f470e(&DAT_14caf9bf0,L"ServerViewSelf",1);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14aa49c00;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa49c70,1,&PTR_FUN_14aa49c20);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9d00,L"PlayerController.NetResetServerPredictionDataOnPawnAck",
                &DAT_14c7618cc,
                L"Whether to reset server prediction data for the possessed Pawn when the pawn ack handshake completes.\n0: Disable, 1: Enable"
               );
  atexit(FUN_14364df45);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9d18,L"wp.Runtime.PlayerController.ForceUsingCameraAsStreamingSource",
                &DAT_14caf9d10,
                L"Whether to force the use of the camera as the streaming source for World Partition. By default the player pawn is used.\n0: Use pawn as streaming source, 1: Use camera as streaming source"
               );
  atexit(FUN_14364df8a);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf9d30,L"PlayerController.IsPushBased",&DAT_14caf9d28,
                L"If true, APlayerController\'s replicated properties will use push-based networking, and will therefore need to be marked dirty when changed."
               );
  atexit(FUN_14364dfcf);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9d40,L"np2.NumRedundantCmds",&DAT_14c7618d0,
                L"(DEPRECATED 5.4, only part of the legacy physics frame offset logic) Number of redundant user cmds to send per frame"
               );
  atexit(FUN_14364e014);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9d58,L"np2.EnableDebugRPC",&DAT_14caf9d50,
                L"(DEPRECATED 5.4, only part of the legacy physics frame offset logic) Sends extra debug information to clients about server side input buffering"
               );
  atexit(FUN_14364e059);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9d68,L"np2.NetworkPhysicsPredictionFrameOffset",&DAT_14c7618d4,
                L"(DEPRECATED 5.4, use np2.PredictionAsyncFrameBuffer instead) Additional frame offset to be added to the local to server offset used by network prediction"
               );
  atexit(FUN_14364e09e);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9d78,L"np2.PredictionAsyncFrameBuffer",&DAT_14c7618d8,
                L"(DEPRECATED 5.5, Use np2.TickOffsetBufferTime instead) Additional frame offset to be added to the local to server offset used by network prediction"
               );
  atexit(FUN_14364e0e3);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9d88,L"np2.TickOffsetUpdateInterval",&DAT_14c7618dc,
                L"(DEPRECATED 5.5, Use np2.TickOffsetUpdateIntervalTime instead) How many physics ticks to wait between each tick offset update. Lowest viable value = 1, which means update each tick. Deactivate physics offset updates by setting to 0 or negative value."
               );
  atexit(FUN_14364e128);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9d98,L"np2.TickOffsetCorrectionLimit",&DAT_14c7618e0,
                L"(DEPRECATED 5.5, Use np2.TickOffsetCorrectionSizeTimeLimit instead) If the client gets out of sync with physics ticks more than this limit, cut the losses and reset the offset."
               );
  atexit(FUN_14364e16d);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9da8,L"np2.TickOffsetUpdateIntervalTime",&DAT_14c7618e4,
                L"Value in milliseconds, default 100. How long time between syncing the tick offset between client and server. Deactivate syncing by setting value 0."
               );
  atexit(FUN_14364e1b2);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9db8,L"np2.TickOffsetBufferTime",&DAT_14c7618e8,
                L"Value in milliseconds, default 60. Additional offset to be added to the local to server offset used by network prediction, this results in a buffer server-side for incoming data that uses the client/server physics offset."
               );
  atexit(FUN_14364e1f7);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9dc8,L"np2.TickOffsetCorrectionSizeTimeLimit",&DAT_14c7618ec,
                L"Value in milliseconds. Note: Keep this equal to or larger than np2.TickOffsetBufferTime. If the client gets out of sync with physics ticks and the desync is larger than this value, reset the offset."
               );
  atexit(FUN_14364e23c);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caf9dd8,L"np2.TickOffsetCorrectionTimeLimit",&DAT_14c7618f0,
                L"Value in milliseconds. If the client gets out of sync with physics ticks and can\'t get in sync again for this amount of time, reset the offset."
               );
  atexit(FUN_14364e281);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf9de8,L"np2.TimeDilationAmount",&DAT_14c7618f4,
                L"Server-side CVar, Disable TimeDilation by setting to 0 | Value is in percent where 0.01 = 1% dilation. Example: 1.0/0.01 = 100, meaning that over the time it usually takes to tick 100 physics steps we will tick 99 or 101 depending on if we dilate up or down."
               );
  atexit(FUN_14364e2c6);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caf9df8,L"np2.TimeDilationEscalation",&DAT_14c7618f8,
                L"Server-side CVar, Dilate the time more depending on how many ticks we need to adjust. When set to false we use the set TimeDilationAmount and wait the amount of time it takes to perform correct the offset. When set to true we multiply the TimeDilationAmount with the buffer offset count which will correct the offset in one TimeDilationAmount cycle."
               );
  atexit(FUN_14364e30b);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf9e08,L"np2.TimeDilationEscalationDecay",&DAT_14c7618fc,
                L"Value is a multiplier, Default: 0.05. For each escalated TimeDilation amount, also decay by this much. Disable by setting to 0."
               );
  atexit(FUN_14364e350);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf9e18,L"np2.TimeDilationEscalationDecayMax",&DAT_14c761900,
                L"Value is a multiplier, Default: 0.5. The max decay value for escalated time dilation. Lower value means higher decay."
               );
  atexit(FUN_14364e395);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf9e28,L"np2.TimeDilationMax",&DAT_14c761904,
                L"Max value of the time dilation multiplier.");
  atexit(FUN_14364e3da);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14caf9e38,L"np2.TimeDilationMin",&DAT_14c761908,
                L"Min value of the time dilation multiplier");
  atexit(FUN_14364e41f);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14caf9e70,L"input.DisableHaptics",&local_70,
                L"If greater than zero, no haptic feedback is processed.");
  atexit(FUN_14365013b);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143655080 FUN_143655080 body=55 status=ok
// SIG undefined FUN_143655080(void)

void FUN_143655080(void)

{
  undefined8 uVar1;
  
  if (DAT_14cafa580 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cafa580 = FUN_14171c317(FUN_1463fa5f9,uVar1,L"EVoiceBlockReasons");
  }
  return;
}



// FUNCTION 1436550b8 FUN_1436550b8 body=39 status=ok
// SIG undefined FUN_1436550b8(void)

float FUN_1436550b8(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x3d8);
  if (fVar1 <= 0.0) {
    fVar1 = (float)*(byte *)(param_1 + 0x398) * 4.0;
  }
  return fVar1;
}



// FUNCTION 1436550e0 FUN_1436550e0 body=298 status=ok
// SIG undefined FUN_1436550e0(void)

void FUN_1436550e0(longlong *param_1,float param_2)

{
  double dVar1;
  ushort uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  
  fVar6 = 1.1;
  if (param_2 <= 1.1) {
    fVar6 = param_2;
  }
  lVar4 = FUN_1447210f0();
  dVar1 = *(double *)(lVar4 + 0x6e0);
  fVar6 = fVar6 * 1000.0;
  if (1.0 <= (float)dVar1 - *(float *)(param_1 + 0x84)) {
    (**(code **)(*param_1 + 0x678))(param_1);
    bVar3 = *(char *)((longlong)param_1 + 0x399) + 1U & 3;
    *(byte *)((longlong)param_1 + 0x399) = bVar3;
    *(float *)(param_1 + 0x84) = (float)dVar1;
    uVar5 = (ulonglong)bVar3;
    *(ushort *)((longlong)param_1 + uVar5 * 4 + 0x410) =
         (ushort)*(undefined4 *)((longlong)param_1 + uVar5 * 4 + 0x410) & 0xe000 |
         (ushort)((uint)(int)ROUND(fVar6 + fVar6 + -0.5) >> 1) & 0x1fff;
    *(byte *)((longlong)param_1 + uVar5 * 4 + 0x412) =
         (*(byte *)((longlong)param_1 + uVar5 * 4 + 0x412) & 0xf8) + 1;
  }
  else {
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x399);
    bVar3 = *(byte *)((longlong)param_1 + uVar5 * 4 + 0x412);
    if ((~bVar3 & 7) != 0) {
      uVar2 = (ushort)*(undefined4 *)((longlong)param_1 + uVar5 * 4 + 0x410);
      *(ushort *)((longlong)param_1 + uVar5 * 4 + 0x410) =
           uVar2 & 0xe000 |
           (short)(((int)ROUND(fVar6 + fVar6 + -0.5) & 0xffffU) >> 1) + uVar2 & 0x1fff;
      *(byte *)((longlong)param_1 + uVar5 * 4 + 0x412) = bVar3 & 0xf8 | bVar3 + 1 & 7;
    }
  }
  return;
}



// FUNCTION 14365520e FUN_14365520e body=90 status=ok
// SIG undefined FUN_14365520e(void)

void FUN_14365520e(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_3 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_3 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_3 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_3 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = param_2;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 143655268 FUN_143655268 body=78 status=ok
// SIG undefined FUN_143655268(void)

void FUN_143655268(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x10);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_2 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
    FUN_14742d27e((longlong *)(param_2 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 8);
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  return;
}



// FUNCTION 1436552b6 FUN_1436552b6 body=744 status=ok
// SIG undefined FUN_1436552b6(void)

void FUN_1436552b6(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  longlong local_50;
  ulonglong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = L"FPositionVertexBuffer";
  local_68 = (ulonglong *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x34));
  local_60 = 0x101;
  FUN_1402d9c44(param_1,local_48,param_2,param_1 + 0x20);
  uVar10 = local_48[0];
  puVar1 = (ulonglong *)(param_1 + 0x10);
  if (puVar1 == local_48) {
LAB_143655388:
    uVar10 = local_48[0];
    if (local_48[0] != 0) {
      LOCK();
      puVar2 = (uint *)(local_48[0] + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_48[0] + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_48[0] + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    uVar10 = *puVar1;
  }
  else {
    uVar5 = *puVar1;
    *puVar1 = local_48[0];
    local_48[0] = 0;
    if (uVar5 != 0) {
      LOCK();
      puVar2 = (uint *)(uVar5 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(uVar5 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(uVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_143655388;
    }
  }
  if (uVar10 != 0) {
    if ((*(byte *)(uVar10 + 0x28) & 0x10) == 0) {
      local_48[0]._0_3_ = 0x10d00;
    }
    else {
      local_48[0]._0_3_ = 0x40000;
    }
    local_48[0] = (ulonglong)(uint3)local_48[0];
    local_48[1] = 0;
    local_68 = local_48;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,param_2);
    plVar9 = (longlong *)(param_1 + 0x18);
    if (plVar9 != &local_50) {
      lVar6 = *plVar9;
      *plVar9 = local_50;
      local_50 = 0;
      if (lVar6 == 0) goto LAB_143655516;
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      puVar2 = (uint *)(local_50 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_50 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_50 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
LAB_143655516:
  if ((local_48[2] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436555a0 FUN_1436555a0 body=37 status=ok
// SIG undefined FUN_1436555a0(void)

void FUN_1436555a0(longlong param_1)

{
  FUN_147cab994(param_1 + 0xf0);
  FUN_147cab994(param_1 + 0x40);
  return;
}



// FUNCTION 1436555c6 FUN_1436555c6 body=535 status=ok
// SIG undefined FUN_1436555c6(void)

void FUN_1436555c6(char *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  double dVar6;
  undefined1 auStack_168 [40];
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128 [184];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*param_1 == '\x01') {
    FUN_147cac386(param_1 + 0x40);
    FUN_147cac386(param_1 + 0xf0);
  }
  *param_1 = '\x01';
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar6 = param_2[3];
  dVar3 = param_2[4];
  dVar4 = param_2[5];
  *(double *)(param_1 + 8) = *param_2;
  *(double *)(param_1 + 0x10) = dVar1;
  *(double *)(param_1 + 0x18) = dVar2;
  *(double *)(param_1 + 0x20) = dVar6;
  *(double *)(param_1 + 0x28) = dVar3;
  *(double *)(param_1 + 0x30) = dVar4;
  *(double *)(param_1 + 0x38) = param_2[6];
  dVar6 = (param_2[5] - param_2[2]) * 0.5;
  dVar2 = (param_2[4] - param_2[1]) * 0.5;
  dVar1 = (param_2[3] - *param_2) * 0.5;
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  uVar5 = SUB84(dVar1,0);
  if (dVar1 <= dVar6) {
    uVar5 = SUB84(dVar6,0);
  }
  local_130 = (param_2[5] + param_2[2]) * 0.5;
  local_138 = (param_2[4] + param_2[1]) * 0.5;
  local_140 = (param_2[3] + *param_2) * 0.5;
  FUN_147cab8ba(local_128,&local_140,uVar5);
  FUN_147cac1c2(param_1 + 0x40,local_128);
  FUN_147cab994(local_128);
  dVar6 = (param_2[5] - param_2[2]) * 0.5;
  dVar2 = (param_2[4] - param_2[1]) * 0.5;
  dVar1 = (param_2[3] - *param_2) * 0.5;
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  uVar5 = SUB84(dVar1,0);
  if (dVar1 <= dVar6) {
    uVar5 = SUB84(dVar6,0);
  }
  local_130 = (param_2[5] + param_2[2]) * 0.5;
  local_138 = (param_2[4] + param_2[1]) * 0.5;
  local_140 = (param_2[3] + *param_2) * 0.5;
  FUN_147cab8ba(local_128,&local_140,uVar5);
  FUN_147cac1c2(param_1 + 0xf0,local_128);
  FUN_147cab994(local_128);
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436557de FUN_1436557de body=352 status=ok
// SIG undefined FUN_1436557de(void)

void FUN_1436557de(undefined8 param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [144];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 == 9) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_118);
  }
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_147cbecc8(param_1,&local_f8);
  if ((longlong)(int)uStack_f0 != 0) {
    lVar4 = (longlong)(int)uStack_f0 * 0x50;
    do {
      FUN_147cab5e4(&local_e8);
      lVar2 = param_3[1];
      uVar3 = (int)lVar2 + 1;
      *(uint *)(param_3 + 1) = uVar3;
      if (*(uint *)((longlong)param_3 + 0xc) < uVar3) {
        FUN_147cbec34(param_3);
      }
      puVar1 = (undefined8 *)(*param_3 + (longlong)(int)lVar2 * 0xb0);
      memset(puVar1 + 2,0,0x90);
      *puVar1 = local_e8;
      *(undefined4 *)(puVar1 + 1) = local_e0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = local_dc;
      memcpy(puVar1 + 2,local_d8,0x90);
      *(undefined4 *)(puVar1 + 0x14) = local_48;
      *(undefined4 *)((longlong)puVar1 + 0xa4) = local_44;
      lVar4 = lVar4 + -0x50;
    } while (lVar4 != 0);
  }
  if (local_f8 != 0) {
    FUN_1400020a8(local_f8);
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365595a FUN_14365595a body=124 status=ok
// SIG undefined FUN_14365595a(void)

void FUN_14365595a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    lVar1 = (longlong)*(int *)(param_1 + 200) << 4;
    do {
      if (*(int *)(lVar2 + 0xc) != *(int *)(lVar2 + 8)) {
        FUN_147cc1a9c(lVar2);
      }
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x178) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x170);
    lVar1 = (longlong)*(int *)(param_1 + 0x178) << 4;
    do {
      if (*(int *)(lVar2 + 0xc) != *(int *)(lVar2 + 8)) {
        FUN_147cc1a9c(lVar2);
      }
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1436559e8 FUN_1436559e8 body=977 status=ok
// SIG undefined FUN_1436559e8(void)

void FUN_1436559e8(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char *pcVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar11;
  char **ppcVar12;
  bool bVar13;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined4 local_118;
  char *local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined2 local_da;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  int local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  size_t sVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = *(undefined4 *)(param_2 + 1);
  local_120 = *param_2;
  FUN_147cacd44(&local_a8,&local_120,*(undefined1 *)(param_1 + 0x1c));
  local_a8 = &DAT_00020008;
  local_60 = param_1;
  if ((longlong)DAT_14cafa798 < 0) {
    local_108 = (char *)(DAT_14cafa798 & 0x7fffffffffffffff);
    if (DAT_14cafa7a4 == '\x01') {
      ppcVar12 = &local_108;
      FUN_1446f470e(ppcVar12,local_108,1);
    }
    else {
      if (local_108 == (char *)0x0) {
        uVar5 = 0;
      }
      else {
        sVar10 = strlen(local_108);
        uVar5 = (undefined4)sVar10;
      }
      local_100 = CONCAT44(local_100._4_4_,uVar5);
      ppcVar12 = &local_110;
      FUN_14001c09c(ppcVar12,&local_108,1);
    }
    DAT_14cafa798 = (ulonglong)*(uint *)ppcVar12;
    uVar6 = CONCAT44(DAT_14cafa7a0,*(uint *)ppcVar12);
  }
  else {
    uVar6 = DAT_14cafa798 & 0xffffffff | (ulonglong)DAT_14cafa7a0 << 0x20;
  }
  local_d6 = local_76;
  local_d5 = local_75;
  local_d4 = local_74;
  local_e4 = local_84;
  local_dc = local_7c;
  local_da = local_7a;
  local_d8 = local_78;
  local_d7 = local_77;
  local_100 = local_a0;
  uStack_f8 = uStack_98;
  local_f0 = local_90;
  local_e8 = local_88;
  local_d3 = local_73;
  local_ec = local_8c;
  uStack_58._0_4_ = (undefined4)uVar6;
  uStack_58._4_4_ = (undefined4)(uVar6 >> 0x20);
  local_c0 = (undefined4)local_60;
  uStack_bc = local_60._4_4_;
  uStack_b8 = (undefined4)uStack_58;
  uStack_b4 = uStack_58._4_4_;
  local_b0 = local_50;
  local_108 = local_a8;
  uStack_58 = uVar6;
  if (local_70 == 0) {
    ppcVar12 = &local_a8;
    local_70 = FUN_1431edf91(0,local_60 != 0);
    lVar7 = *DAT_14ca83900;
  }
  else {
    lVar7 = *DAT_14ca83900;
    ppcVar12 = &local_108;
  }
  (**(code **)(lVar7 + 0x1a0))(DAT_14ca83900,&local_110,&DAT_14ca85100,ppcVar12);
  ppcVar12 = (char **)(param_1 + 0x20);
  if (ppcVar12 != &local_110) {
    pcVar4 = *ppcVar12;
    *ppcVar12 = local_110;
    local_110 = (char *)0x0;
    if (pcVar4 == (char *)0x0) goto LAB_143655cdf;
    LOCK();
    puVar1 = (uint *)(pcVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(pcVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = pcVar4[0xd];
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = (longlong)pcVar4;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar13) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar13) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  pcVar4 = local_110;
  if (local_110 != (char *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_110 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_110 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = local_110[0xd];
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = (longlong)pcVar4;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar13) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar13) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
LAB_143655cdf:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143655dba FUN_143655dba body=973 status=ok
// SIG undefined FUN_143655dba(void)

void FUN_143655dba(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char *pcVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar11;
  char **ppcVar12;
  bool bVar13;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined4 local_118;
  char *local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined2 local_da;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  int local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  size_t sVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = *(undefined4 *)(param_2 + 1);
  local_120 = *param_2;
  FUN_147cacd44(&local_a8,&local_120,*(undefined1 *)(param_1 + 0x1c));
  local_a8 = &DAT_00020008;
  if ((longlong)DAT_14cafa798 < 0) {
    local_108 = (char *)(DAT_14cafa798 & 0x7fffffffffffffff);
    if (DAT_14cafa7a4 == '\x01') {
      ppcVar12 = &local_108;
      FUN_1446f470e(ppcVar12,local_108,1);
    }
    else {
      if (local_108 == (char *)0x0) {
        uVar5 = 0;
      }
      else {
        sVar10 = strlen(local_108);
        uVar5 = (undefined4)sVar10;
      }
      local_100 = CONCAT44(local_100._4_4_,uVar5);
      ppcVar12 = &local_110;
      FUN_14001c09c(ppcVar12,&local_108,1);
    }
    DAT_14cafa798 = (ulonglong)*(uint *)ppcVar12;
    uVar6 = CONCAT44(DAT_14cafa7a0,*(uint *)ppcVar12);
  }
  else {
    uVar6 = DAT_14cafa798 & 0xffffffff | (ulonglong)DAT_14cafa7a0 << 0x20;
  }
  local_d6 = local_76;
  local_d5 = local_75;
  local_d4 = local_74;
  local_e4 = local_84;
  local_dc = local_7c;
  local_da = local_7a;
  local_d8 = local_78;
  local_d7 = local_77;
  local_100 = local_a0;
  uStack_f8 = uStack_98;
  local_f0 = local_90;
  local_e8 = local_88;
  local_d3 = local_73;
  local_ec = local_8c;
  uStack_58._0_4_ = (undefined4)uVar6;
  uStack_58._4_4_ = (undefined4)(uVar6 >> 0x20);
  local_c0 = local_60;
  uStack_bc = uStack_5c;
  uStack_b8 = (undefined4)uStack_58;
  uStack_b4 = uStack_58._4_4_;
  local_b0 = local_50;
  local_108 = local_a8;
  uStack_58 = uVar6;
  if (local_70 == 0) {
    ppcVar12 = &local_a8;
    local_70 = FUN_1431edf91(0,CONCAT44(uStack_5c,local_60) != 0);
    lVar7 = *DAT_14ca83900;
  }
  else {
    lVar7 = *DAT_14ca83900;
    ppcVar12 = &local_108;
  }
  (**(code **)(lVar7 + 0x1a0))(DAT_14ca83900,&local_110,&DAT_14ca85100,ppcVar12);
  ppcVar12 = (char **)(param_1 + 0x20);
  if (ppcVar12 != &local_110) {
    pcVar4 = *ppcVar12;
    *ppcVar12 = local_110;
    local_110 = (char *)0x0;
    if (pcVar4 == (char *)0x0) goto LAB_1436560ad;
    LOCK();
    puVar1 = (uint *)(pcVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(pcVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = pcVar4[0xd];
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = (longlong)pcVar4;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar13) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar13) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  pcVar4 = local_110;
  if (local_110 != (char *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_110 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_110 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = local_110[0xd];
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = (longlong)pcVar4;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar13) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar13) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
LAB_1436560ad:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143656188 FUN_143656188 body=435 status=ok
// SIG undefined FUN_143656188(void)

void FUN_143656188(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  longlong local_40;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined6 uStack_2e;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = *(longlong **)(param_1 + 0x20);
  uStack_37 = 0;
  uStack_36 = 0;
  uStack_35 = 0;
  uStack_33 = 0;
  uStack_32 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  local_38 = 3;
  uStack_34 = 1;
  lVar4 = (**(code **)(*plVar7 + 8))(plVar7);
  if (*(byte *)(lVar4 + 0x32) < 5) {
    uStack_36 = (undefined1)(0x4030502010 >> ((*(byte *)(lVar4 + 0x32) & 7) << 3));
  }
  local_48 = &local_38;
  uStack_35 = 0;
  uStack_32 = 0;
  uStack_30 = 0;
  (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_40,&DAT_14ca85100,plVar7);
  plVar7 = (longlong *)(param_1 + 0x28);
  if (plVar7 != &local_40) {
    lVar4 = *plVar7;
    *plVar7 = local_40;
    local_40 = 0;
    if (lVar4 == 0) goto LAB_1436562ec;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_40;
  if (local_40 != 0) {
    LOCK();
    puVar1 = (uint *)(local_40 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_40 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_40 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1436562ec:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365633c FUN_14365633c body=47 status=ok
// SIG undefined FUN_14365633c(void)

void FUN_14365633c(void)

{
  DAT_14cafeeb0 = &PTR_FUN_14aa59780;
  FUN_144725486(&DAT_14cafeeb0);
  FUN_145841116(&DAT_14cafeeb0);
  return;
}



// FUNCTION 14365636b FUN_14365636b body=774 status=ok
// SIG undefined FUN_14365636b(void)

longlong * FUN_14365636b(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined **local_68;
  longlong local_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e38f8c);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cb60);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cc78);
  FUN_140119d96(param_1,param_2 + 0x10);
  FUN_140333cf8(param_1,param_2 + 0x4c);
  FUN_147cace17(param_1,param_2 + 0x58);
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x90),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x90) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_140333cf8(param_1,param_2 + 0x94);
  FUN_147cace17(param_1,param_2 + 0xa0);
  lVar9 = 0;
  do {
    FUN_147cace17(param_1,param_2 + 0xd8 + lVar9);
    lVar9 = lVar9 + 0x38;
  } while (lVar9 != 0x150);
  FUN_147cace17(param_1,param_2 + 0x228);
  FUN_147cace17(param_1,param_2 + 0x260);
  iVar5 = FUN_1448332aa(param_1,&DAT_149e38f8c);
  if (((1 < iVar5) && (iVar5 = FUN_1448332aa(param_1,&DAT_149e3cc78), iVar5 < 0x4f)) &&
     ((*(byte *)(param_1 + 5) & 1) != 0)) {
    local_68 = &PTR_FUN_14aa581e0;
    local_60 = 0;
    uStack_58 = 0;
    uStack_53 = 0;
    uStack_50 = 0;
    local_48 = 0;
    lStack_40 = 0;
    local_38 = 0;
    FUN_147cace17(param_1,&local_68);
    FUN_147cace17(param_1,&local_68);
    lVar9 = lStack_40;
    local_68 = &PTR_FUN_14aa581e0;
    if (lStack_40 != 0) {
      LOCK();
      puVar1 = (uint *)(lStack_40 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lStack_40 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lStack_40 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar9;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar9 = local_48;
    if (local_48 != 0) {
      LOCK();
      puVar1 = (uint *)(local_48 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_48 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_48 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar9;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  iVar5 = FUN_1448332aa(param_1,&DAT_149e3cb60);
  if (0x21 < iVar5) {
    FUN_147cc2386(param_1,param_2 + 0x2a0);
    FUN_147cc2668(param_1,param_2 + 0x2c0);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143656672 FUN_143656672 body=2021 status=ok
// SIG undefined FUN_143656672(void)

void FUN_143656672(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined1 local_58;
  undefined4 local_54;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x2a8) < 1) goto LAB_143656d20;
  local_78 = param_1 + 0x298;
  *(undefined1 *)(param_1 + 0x2b0) = 1;
  *(undefined1 *)(param_1 + 0x2d0) = 1;
  local_80 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_54 = 0;
  local_50 = L"SubLevelBrickPositionsBuffer";
  local_48 = 0;
  uStack_40 = 0;
  iVar5 = *(int *)(param_1 + 0x2a8) * 0xc;
  local_98 = (undefined1)iVar5;
  uStack_97 = (undefined1)((uint)iVar5 >> 8);
  uStack_96 = (undefined1)((uint)iVar5 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar5 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (iVar5 == 0) {
    FUN_14570b4be(&DAT_14ca85100,&local_80,0x4101,0);
  }
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x2d8);
  if (plVar9 == &local_a0) {
LAB_14365685b:
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar4 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14365685b;
    }
  }
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 0x1c;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,&DAT_14ca85100);
  plVar9 = (longlong *)(param_1 + 0x2e0);
  if (plVar9 == &local_a0) {
LAB_143656998:
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar10 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar10 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_143656998;
    }
  }
  local_80 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_54 = 0;
  local_50 = L"IndirectionTextureOriginalValuesBuffer";
  local_48 = 0;
  uStack_40 = 0;
  iVar5 = *(uint *)(param_1 + 0x2c8) << 2;
  local_98 = (undefined1)iVar5;
  uStack_97 = (undefined1)((uint)iVar5 >> 8);
  uStack_96 = (undefined1)((uint)iVar5 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar5 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  local_78 = param_1 + 0x2b8;
  if ((*(uint *)(param_1 + 0x2c8) & 0x3fffffff) == 0) {
    FUN_14570b4be(&DAT_14ca85100,&local_80,0x4101,0);
  }
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x2e8);
  if (plVar9 == &local_a0) {
LAB_143656b8c:
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar4 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_143656b8c;
    }
  }
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 0x3c;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,&DAT_14ca85100);
  plVar9 = (longlong *)(param_1 + 0x2f0);
  if (plVar9 != &local_a0) {
    lVar10 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar10 == 0) goto LAB_143656d20;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar10 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar10 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar10 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_143656d20:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143656e58 FUN_143656e58 body=1533 status=ok
// SIG undefined FUN_143656e58(void)

void FUN_143656e58(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4,
                  undefined1 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined ***pppuVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c760e18 != '\x01') goto LAB_143656ff0;
  if (DAT_14cb05368 != 0) {
    FUN_1436a64c8(DAT_14cb05368,param_2,1);
  }
  if (param_2 == (longlong *)0x0 || param_4 == 0) goto LAB_143656ff0;
  *(undefined1 *)(param_1 + 8) = 1;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0xc) = uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar10 = *(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      param_3 = (ulonglong)uVar13;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      param_3);
      }
      LOCK();
      uVar10 = *(uint *)(lVar15 + 0x10);
      bVar17 = uVar10 == 0;
      if (bVar17) {
        *(uint *)(lVar15 + 0x10) = uVar13;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar10 = uVar13;
      }
    }
  }
  *(uint *)(param_1 + 0x10) = uVar10;
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar15 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar4 != 2) {
      if (iVar4 != 1) goto LAB_143656f2e;
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_143657382;
      goto LAB_143656f37;
    }
LAB_143657382:
    FUN_147caf456(param_1,&DAT_14ca85100,param_4,param_2);
  }
  else {
LAB_143656f2e:
    if (iVar4 == 0x10) goto LAB_143657382;
LAB_143656f37:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar4 = *(int *)(lVar15 + 0xc60), iVar4 == 2))
      goto LAB_143657382;
      if (iVar4 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_143657382;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar8 = (uint *)*puVar2;
      if (puVar8 != (uint *)0x0) goto LAB_1436570ce;
      while( true ) {
        uVar10 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar10 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar10 | 1;
          __tlregdtor(&LAB_14365fa42);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar7 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar7 = 0xffffffff;
        *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
        puVar7[0x12] = 0;
        *puVar2 = puVar7;
        FUN_140217a48(puVar2);
        puVar8 = (uint *)*puVar2;
LAB_1436570ce:
        puVar16 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar12 = (uint *)(puVar16 + 0x18);
        uVar10 = puVar8[0x12];
        if (puVar12 <= puVar8 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
          LOCK();
          uVar13 = *puVar8;
          *puVar8 = *puVar8 + uVar10 + 1;
          UNLOCK();
          if ((uVar13 ^ uVar10) != 0xffffffff) break;
          puVar8 = (uint *)*puVar2;
          *puVar8 = 0xffffffff;
          *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          puVar16 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar16 + 0x18);
          uVar10 = 0;
          if (puVar12 <= puVar8 + 0x4000) {
            uVar10 = 1;
            goto LAB_143657150;
          }
        }
      }
      uVar10 = uVar10 + 1;
LAB_143657150:
      *(uint **)(puVar8 + 0x10) = puVar12;
      puVar8[0x12] = uVar10;
      iVar4 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14aa59810;
      puVar16[0x15] = param_1;
      puVar16[0x16] = param_4;
      puVar16[0x17] = param_2;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar10 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar10 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
          iVar4 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar4 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar14 = 5;
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
      lVar15 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar15 == 0) {
        uVar3 = 1;
        if ((char)uVar14 != '\x06') {
          uVar3 = uVar14;
        }
        uVar14 = uVar3;
        uVar9 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
        }
        uVar9 = *(undefined8 *)(lVar15 + 0x30);
      }
      puVar16[0xf] = uVar9;
      puVar16[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar16 + 0x1c) = iVar4;
      if (puVar16 == (undefined8 *)0x0) {
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
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
      local_98 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14aa597f0;
      local_88[0] = &LAB_14366102a;
      local_60 = param_1;
      local_58 = param_4;
      local_50 = param_2;
      FUN_14005a792(&DAT_14ca9a440,L"SetVolumeDataCommand",&DAT_14cafe0b8);
      if (local_88[0] != (undefined1 *)0x0) {
        pppuVar11 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar11 = &local_68;
        }
        (*(code *)(*pppuVar11)[2])();
      }
    }
  }
  (**(code **)(*param_2 + 0x1f0))
            (param_2,param_1,CONCAT71((int7)(param_3 >> 8),param_5) & 0xffffffff);
LAB_143656ff0:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143657492 FUN_143657492 body=1216 status=ok
// SIG undefined FUN_143657492(void)

void FUN_143657492(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
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
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 == (longlong *)0x0) goto LAB_1436575cd;
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_1436574e7;
    if (iVar7 != 1) goto LAB_1436574e2;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_1436574e7;
  }
  else {
LAB_1436574e2:
    if (iVar7 == 0x10) goto LAB_1436574e7;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_1436574e7:
      (**(code **)(*plVar4 + 0x20))(plVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1436574e7;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14365768f;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14365fa42);
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
LAB_14365768f:
      puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar17 + 0x16);
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
        puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_14365770f;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14365770f:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar17,0);
    *puVar17 = &PTR_FUN_14aa59928;
    puVar17[0x15] = plVar4;
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
    if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
    }
    puVar17[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar17[9] = puVar17;
    puVar17[10] = puVar17;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar16 != '\x06') {
        uVar6 = uVar16;
      }
      uVar16 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar17[0xf] = uVar12;
    puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar17 + 0x1c) = iVar7;
    if (puVar17 == (undefined8 *)0x0) {
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aa598c0;
    local_68[0] = FUN_1436614b2;
    local_40 = plVar4;
    FUN_14005a792(&DAT_14ca9a440,L"DeleteVolumetricLightDataCommand",&DAT_14cafe1b0);
    if (local_68[0] != (code *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_1436575cd:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365796c FUN_14365796c body=79 status=ok
// SIG undefined FUN_14365796c(void)

void FUN_14365796c(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),0,0);
                    /* WARNING: Could not recover jumptable at 0x0001436579b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
  return;
}



// FUNCTION 1436579bb FUN_1436579bb body=69 status=ok
// SIG undefined FUN_1436579bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436579bb(void)

{
  _DAT_14cafada0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436579fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafada8,1);
  return;
}



// FUNCTION 143657a00 FUN_143657a00 body=1996 status=ok
// SIG undefined FUN_143657a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_143657a00(longlong *param_1,longlong param_2,longlong param_3,byte param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  longlong *plVar15;
  byte *pbVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double _X;
  double _X_00;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double _X_01;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  undefined1 *local_198;
  code *local_190;
  double local_188;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  code *local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((param_1[0x24] == param_2) && (param_1[0x25] == param_3)) {
    uVar17 = 0;
    puVar10 = (uint *)(**(code **)(*param_1 + 0x7b8))(param_1,0,0,0xffffffff);
    if (puVar10 == (uint *)0x0) goto LAB_143657d8a;
    if (((((puVar10[2] & 1) != 0) && (puVar10[1] != 0)) && (uVar3 = *puVar10, -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) {
      plVar15 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if (((plVar15 != (longlong *)0x0) && (*(uint *)(plVar15 + 2) == puVar10[1])) &&
         ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
          lVar11 = *plVar15;
        }
        else {
          lVar11 = 0;
        }
        lVar12 = DAT_14c997cc0;
        if (DAT_14c997cc0 == 0) {
          lVar14 = FUN_145a62958();
          lVar12 = *(longlong *)(lVar14 + 0x110);
          if (lVar12 == 0) {
            FUN_140aa6c08(lVar14);
            lVar12 = *(longlong *)(lVar14 + 0x110);
          }
        }
        cVar9 = *(char *)(lVar12 + 0x75);
        if (*(char *)(lVar11 + 0x31) != '\0') {
          cVar9 = *(char *)(lVar11 + 0x31);
        }
        if ((cVar9 != '\x03' & (param_4 ^ 1)) != 0) goto LAB_143657d88;
      }
    }
    if (((puVar10[0x51] == 0) || (uVar3 = puVar10[0x50], (int)uVar3 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar3 ||
        ((((plVar15 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar15 == (longlong *)0x0 || (*(uint *)(plVar15 + 2) != puVar10[0x51])) ||
          ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) || (lVar11 = *plVar15, lVar11 == 0)))))) {
LAB_143657b67:
      pbVar16 = (byte *)((longlong)puVar10 + 0x17);
    }
    else {
      if ((*(longlong *)(lVar11 + 0xa8) != 0) &&
         ((*(byte *)(*(longlong *)(lVar11 + 0xa8) + 0x65) & 1) == 0)) goto LAB_143657d88;
      if (DAT_14cad2858 == 0) {
        local_1a0 = &local_148;
        local_148 = FUN_144a7958c;
        local_190 = FUN_14081d0ea;
        local_198 = &LAB_146395584;
        local_1a8 = &LAB_147a0ba80;
        local_1b0 = &LAB_14575ccce;
        local_1b8 = L"Engine";
        local_1c0 = 0x40000000000;
        local_1c8 = 0x10000004;
        local_1d0 = 0x10;
        local_1d8 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
      goto LAB_143657b67;
      pbVar16 = (byte *)(lVar11 + 0x427);
    }
    if (1 < *pbVar16) {
      FUN_140156a6a(param_1);
      local_e8 = 0;
      plVar15 = (longlong *)FUN_1417e95f3(param_1,param_3,&local_e8,1);
      if (plVar15 != (longlong *)0x0) {
        uVar17 = 0;
        lVar11 = (**(code **)(*plVar15 + 0x7b8))(plVar15,local_e8,0,0xffffffff);
        if ((lVar11 != 0) && (uVar17 = 1, *(longlong *)(puVar10 + 0x42) != lVar11)) {
          cVar9 = (**(code **)(*plVar15 + 0x480))(plVar15,local_e8);
          if ((cVar9 == '\0') &&
             ((param_5 == '\0' && ((*(byte *)((longlong)puVar10 + 0x3e) & 4) == 0)))) {
            uVar17 = 0;
            LOCK();
            puVar10[0x42] = 0;
            puVar10[0x43] = 0;
            UNLOCK();
            (**(code **)(*param_1 + 0x690))(param_1,0);
          }
          else {
            if (plVar15 == (longlong *)param_1[0x24]) {
              lVar6 = param_1[0x39];
              uVar4 = *(undefined4 *)((longlong)param_1 + 0x1cc);
              lVar12 = param_1[0x3a];
              lVar14 = param_1[0x3b];
              lVar1 = param_1[0x34];
              lVar7 = param_1[0x33];
              uVar5 = *(undefined4 *)((longlong)param_1 + 0x19c);
              lVar8 = param_1[0x34];
              lVar2 = param_1[0x35];
              auVar22 = *(undefined1 (*) [16])(param_1 + 0x36);
              dVar19 = auVar22._0_8_;
              dVar31 = auVar22._8_8_;
              dVar18 = (double)param_1[0x38];
              pdVar13 = (double *)param_1[0x46];
              if (pdVar13 == (double *)0x0) {
                pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
                dVar20 = DAT_14c8463d8;
                *pdVar13 = DAT_14c8463d0;
                pdVar13[1] = dVar20;
                dVar20 = DAT_14c8463e8;
                pdVar13[2] = DAT_14c8463e0;
                pdVar13[3] = dVar20;
                dVar20 = DAT_14c846500;
                pdVar13[4] = DAT_14c8464f8;
                pdVar13[5] = dVar20;
                pdVar13[6] = DAT_14c846508;
                param_1[0x46] = (longlong)pdVar13;
              }
              auVar26 = _DAT_1499387d0;
              if ((((pdVar13[4] != dVar19) || (NAN(pdVar13[4]) || NAN(dVar19))) ||
                  (pdVar13[5] != dVar31)) ||
                 (((NAN(pdVar13[5]) || NAN(dVar31) || (pdVar13[6] != dVar18)) ||
                  (NAN(pdVar13[6]) || NAN(dVar18))))) {
                auVar28._8_8_ = 0;
                auVar28._0_8_ = dVar18;
                dVar20 = (double)DAT_1499387d0;
                dVar21 = DAT_1499387d0._8_8_;
                auVar22 = divpd(auVar22,_DAT_1499387d0);
                auVar25 = divpd(auVar28,_DAT_1499387d0);
                auVar22 = roundpd(auVar22,auVar22,3);
                auVar25 = roundpd(auVar25,auVar25,3);
                auVar34._0_8_ = dVar19 - auVar22._0_8_ * dVar20;
                auVar34._8_8_ = dVar31 - auVar22._8_8_ * dVar21;
                auVar29._0_8_ = dVar18 - auVar25._0_8_ * dVar20;
                auVar29._8_8_ = 0.0 - auVar25._8_8_ * dVar21;
                auVar32._0_8_ = auVar34._0_8_ + dVar20;
                auVar32._8_8_ = auVar34._8_8_ + dVar21;
                auVar27._0_8_ = auVar29._0_8_ + dVar20;
                auVar27._8_8_ = auVar29._8_8_ + dVar21;
                auVar25._8_8_ = -(ulonglong)(0.0 <= auVar34._8_8_);
                auVar25._0_8_ = -(ulonglong)(0.0 <= auVar34._0_8_);
                auVar22 = blendvpd(auVar32,auVar34,auVar25);
                auVar33._8_8_ = -(ulonglong)(0.0 <= auVar29._8_8_);
                auVar33._0_8_ = -(ulonglong)(0.0 <= auVar29._0_8_);
                auVar25 = blendvpd(auVar27,auVar29,auVar33);
                auVar30._0_8_ = auVar22._0_8_ + -360.0;
                auVar30._8_8_ = auVar22._8_8_ + -360.0;
                auVar23._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
                auVar23._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
                auVar33 = blendvpd(auVar22,auVar30,auVar23);
                auVar24._8_8_ = -(ulonglong)(180.0 < auVar25._8_8_);
                auVar24._0_8_ = -(ulonglong)(180.0 < auVar25._0_8_);
                auVar22._8_8_ = auVar25._8_8_ + 0.0;
                auVar22._0_8_ = auVar25._0_8_ + -360.0;
                auVar22 = blendvpd(auVar25,auVar22,auVar24);
                *(undefined1 (*) [16])(pdVar13 + 4) = auVar33;
                dVar18 = auVar22._0_8_;
                pdVar13[6] = dVar18;
                auVar35._8_8_ = 0;
                auVar35._0_8_ = dVar18;
                auVar22 = divpd(auVar33,auVar26);
                auVar26 = divpd(auVar35,auVar26);
                auVar22 = roundpd(auVar22,auVar22,3);
                auVar26 = roundpd(auVar26,auVar26,3);
                dVar31 = (auVar33._0_8_ - auVar22._0_8_ * dVar20) * 0.008726646259971648;
                _X = (auVar33._8_8_ - auVar22._8_8_ * dVar21) * 0.008726646259971648;
                _X_00 = (dVar18 - auVar26._0_8_ * dVar20) * 0.008726646259971648;
                _X_01 = (0.0 - auVar26._8_8_ * dVar21) * 0.008726646259971648;
                local_188 = sin(dVar31);
                uStack_150 = 0;
                local_158 = lVar12;
                dVar18 = sin(_X);
                uStack_160 = 0;
                local_168 = lVar14;
                dVar19 = sin(_X_00);
                uStack_170 = 0;
                local_178 = lVar2;
                sin(_X_01);
                dVar31 = cos(dVar31);
                dVar20 = cos(_X);
                dVar21 = cos(_X_00);
                cos(_X_01);
                local_138 = -(dVar20 * local_188 * dVar19) + dVar18 * dVar31 * dVar21;
                dStack_130 = dVar18 * local_188 * dVar19 + dVar20 * dVar31 * dVar21;
                local_148 = (code *)(local_188 * dVar18 * dVar21 - dVar31 * dVar20 * dVar19);
                dStack_140 = -(local_188 * dVar20 * dVar21) - dVar31 * dVar18 * dVar19;
                *pdVar13 = (double)local_148;
                pdVar13[1] = dStack_140;
                pdVar13[2] = local_138;
                pdVar13[3] = dStack_130;
                uStack_100 = (undefined4)local_158;
                uStack_fc = local_158._4_4_;
                local_118 = local_178;
                local_f8 = local_168;
              }
              else {
                local_148 = (code *)*pdVar13;
                dStack_140 = pdVar13[1];
                local_138 = pdVar13[2];
                dStack_130 = pdVar13[3];
                uStack_100 = (int)lVar12;
                uStack_fc = (int)((ulonglong)lVar12 >> 0x20);
                local_118 = lVar2;
                local_f8 = lVar14;
              }
              uStack_110 = 0;
              uStack_f0 = 0;
              local_128 = (int)lVar7;
              uStack_124 = uVar5;
              uStack_120 = (int)lVar8;
              uStack_11c = (int)((ulonglong)lVar1 >> 0x20);
              local_108 = (int)lVar6;
              uStack_104 = uVar4;
            }
            else {
              FUN_1449437a2(param_1 + 0x48,&local_148,plVar15 + 0x48);
            }
            FUN_147c478a8(lVar11,puVar10,param_1 + 0x48);
          }
        }
        goto LAB_143657d8a;
      }
    }
  }
LAB_143657d88:
  uVar17 = 0;
LAB_143657d8a:
  if ((local_e0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436581ce FUN_1436581ce body=597 status=ok
// SIG undefined FUN_1436581ce(void)

undefined4
FUN_1436581ce(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined1 param_4,
             char param_5,undefined8 param_6,undefined8 *param_7,undefined4 *param_8,
             undefined8 *param_9,longlong param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_138 [32];
  char **local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char *local_c8;
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
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafdea8) {
    FUN_144b3d300(&DAT_14cafdea8);
    if (DAT_14cafdea8 == -1) {
      local_c8 = "KismetTraceComponent";
      local_c0 = CONCAT35(local_c0._5_3_,0x14);
      uVar5 = FUN_14001a6c0();
      DAT_14cafdea0 = (char *)(ulonglong)uVar5;
      _Init_thread_footer(&DAT_14cafdea8);
    }
  }
  local_118 = &local_c8;
  local_a4 = 0;
  local_c0 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_ac = 0;
  local_c8 = DAT_14cafdea0;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  local_d8 = param_3[2];
  local_e8 = *param_3;
  uStack_e0 = param_3[1];
  local_108 = *param_2;
  uStack_104 = param_2[1];
  uStack_100 = param_2[2];
  uStack_fc = param_2[3];
  local_f8 = *(undefined8 *)(param_2 + 4);
  local_b8 = param_4;
  uVar4 = (**(code **)(*param_1 + 0x978))(param_1,param_10);
  if ((char)uVar4 == '\0') {
    param_7[2] = DAT_14c8464f0;
    uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *param_7 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_7[1] = uVar6;
    *(undefined8 *)(param_8 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *param_8 = (undefined4)DAT_14c8464e0;
    param_8[1] = uVar1;
    param_8[2] = uVar2;
    param_8[3] = uVar3;
    uVar6 = 0;
  }
  else {
    param_7[2] = *(undefined8 *)(param_10 + 0x20);
    uVar6 = *(undefined8 *)(param_10 + 0x18);
    *param_7 = *(undefined8 *)(param_10 + 0x10);
    param_7[1] = uVar6;
    *(undefined8 *)(param_8 + 4) = *(undefined8 *)(param_10 + 0x50);
    uVar1 = *(undefined4 *)(param_10 + 0x44);
    uVar2 = *(undefined4 *)(param_10 + 0x48);
    uVar3 = *(undefined4 *)(param_10 + 0x4c);
    *param_8 = *(undefined4 *)(param_10 + 0x40);
    param_8[1] = uVar1;
    param_8[2] = uVar2;
    param_8[3] = uVar3;
    uVar6 = *(undefined8 *)(param_10 + 0xf0);
  }
  *param_9 = uVar6;
  if (param_5 != '\0') {
    if (param_1[0x16] == 0) {
      FUN_1448abda6(param_1);
    }
    if (((char)uVar4 != '\0') && (param_1[0x16] == 0)) {
      FUN_1448abda6(param_1);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143658424 FUN_143658424 body=623 status=ok
// SIG undefined FUN_143658424(void)

void FUN_143658424(longlong *param_1,double *param_2,double *param_3,double *param_4,
                  undefined8 param_5,double param_6,int param_7,undefined4 param_8,
                  undefined4 param_9,undefined1 param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float _X;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined1 local_110;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_d8 = param_3[2] * param_6 + param_2[2];
  dStack_e0 = param_3[1] * param_6 + param_2[1];
  local_e8 = *param_3 * param_6 + *param_2;
  if (0 < param_7) {
    iVar6 = 1;
    do {
      _X = (float)iVar6 * (3.1415927 / (float)param_7);
      fVar8 = cosf(_X);
      dVar5 = (double)fVar8;
      dVar1 = param_3[2];
      dVar2 = param_3[1];
      dVar3 = *param_3;
      fVar8 = sinf(_X);
      dVar4 = (double)fVar8;
      local_f0 = (param_4[2] * dVar4 + dVar1 * dVar5) * param_6 + param_2[2];
      dStack_f8 = (param_4[1] * dVar4 + dVar2 * dVar5) * param_6 + param_2[1];
      local_100 = (dVar4 * *param_4 + dVar5 * dVar3) * param_6 + *param_2;
      local_110 = param_10;
      local_118 = param_9;
      local_120 = param_8;
      local_128 = 0;
      (**(code **)(*param_1 + 0x38))(param_1,&local_e8,&local_100,param_5);
      local_d8 = local_f0;
      local_e8 = local_100;
      dStack_e0 = dStack_f8;
      bVar7 = iVar6 != param_7;
      iVar6 = iVar6 + 1;
    } while (bVar7);
  }
  if ((local_d0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143658694 FUN_143658694 body=633 status=ok
// SIG undefined FUN_143658694(void)

void FUN_143658694(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  char param_5,longlong param_6,longlong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  lVar7 = DAT_14ca9ecb8;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar12 = 0;
  }
  else if (iVar5 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  if (((*(int *)(lVar7 + uVar12 * 4) == 1) &&
      (FUN_14485b2b4(*(undefined8 *)(param_6 + 0xc0),param_3),
      (*(byte *)(param_4 + 0x6d) & 0x40) != 0)) && ((*(byte *)(param_4 + 0x6f) & 0x40) == 0)) {
    uVar10 = FUN_14001cc68(0xe8,0x10);
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar6 = DAT_14c892c38;
    local_a8 = *(undefined8 *)(param_4 + 0x20);
    uStack_a0 = *(undefined8 *)(param_4 + 0x28);
    if (param_5 == '\0') {
      pfVar13 = (float *)&local_a8;
    }
    else {
      pfVar13 = (float *)(DAT_14cb0d2b0 + 0xdcc);
      if (*(char *)(DAT_14cb0d2b0 + 0xe0c) != '\0') {
        pfVar13 = (float *)(DAT_14cb0d2b0 + 0xdfc);
      }
    }
    fVar15 = 0.0;
    if ((*(byte *)(param_4 + 0x6c) & 0x10) != 0) {
      fVar15 = 0.15;
    }
    fVar1 = *pfVar13;
    fVar2 = pfVar13[1];
    fVar3 = pfVar13[2];
    fVar4 = pfVar13[3];
    fVar14 = 0.5;
    if (param_5 == '\0') {
      fVar14 = fVar15;
    }
    local_90 = powf(fVar14 * *(float *)(DAT_14cb0d2b0 + 0xe30) + 0.5,2.2);
    local_88 = fVar3 * local_90;
    local_8c = fVar2 * local_90;
    local_90 = fVar1 * local_90;
    local_84 = fVar4;
    uVar11 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x6a8) + 0x2f0))();
    FUN_14089e406(uVar10,uVar11,&local_90,uVar6);
    *(undefined8 *)(param_6 + 0xc0) = uVar10;
    iVar5 = *(int *)(param_7 + 0xb0);
    *(uint *)(param_7 + 0xb0) = iVar5 + 1U;
    if (*(uint *)(param_7 + 0xb4) < iVar5 + 1U) {
      FUN_1479cc194((longlong *)(param_7 + 0xa8),iVar5);
    }
    *(undefined8 *)(*(longlong *)(param_7 + 0xa8) + (longlong)iVar5 * 8) = uVar10;
  }
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365890e FUN_14365890e body=69 status=ok
// SIG undefined FUN_14365890e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365890e(void)

{
  _DAT_14cafadb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143658950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafadc0,1);
  return;
}



// FUNCTION 143658953 FUN_143658953 body=69 status=ok
// SIG undefined FUN_143658953(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143658953(void)

{
  _DAT_14cafadd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143658995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafadd8,1);
  return;
}



// FUNCTION 143658998 FUN_143658998 body=69 status=ok
// SIG undefined FUN_143658998(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143658998(void)

{
  _DAT_14cafade8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436589da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafadf0,1);
  return;
}



// FUNCTION 1436589dd FUN_1436589dd body=69 status=ok
// SIG undefined FUN_1436589dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436589dd(void)

{
  _DAT_14cafae00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143658a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafae08,1);
  return;
}



// FUNCTION 143658a22 FUN_143658a22 body=69 status=ok
// SIG undefined FUN_143658a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143658a22(void)

{
  _DAT_14cafae18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143658a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafae20,1);
  return;
}



// FUNCTION 143658a67 FUN_143658a67 body=69 status=ok
// SIG undefined FUN_143658a67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143658a67(void)

{
  _DAT_14cafae30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143658aa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafae38,1);
  return;
}



// FUNCTION 143658aac FUN_143658aac body=69 status=ok
// SIG undefined FUN_143658aac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143658aac(void)

{
  _DAT_14cafae48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143658aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafae50,1);
  return;
}



// FUNCTION 143658af1 FUN_143658af1 body=69 status=ok
// SIG undefined FUN_143658af1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143658af1(void)

{
  _DAT_14cafae60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143658b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafae68,1);
  return;
}



// FUNCTION 143658b36 FUN_143658b36 body=69 status=ok
// SIG undefined FUN_143658b36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143658b36(void)

{
  _DAT_14cafae78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143658b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafae80,1);
  return;
}



// FUNCTION 143658b7b FUN_143658b7b body=69 status=ok
// SIG undefined FUN_143658b7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143658b7b(void)

{
  _DAT_14cafae88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143658bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafae90,1);
  return;
}



// FUNCTION 143658bc0 FUN_143658bc0 body=118 status=ok
// SIG undefined FUN_143658bc0(void)

undefined8 FUN_143658bc0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if ((2 < param_4) &&
     (lVar3 = (**(code **)(*param_1 + 0x30))(), (*(byte *)(lVar3 + 0x29) & 1) != 0)) {
    plVar4 = (longlong *)FUN_14485b2b4(param_3,param_4);
    cVar1 = (**(code **)(*plVar4 + 400))(plVar4);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*plVar4 + 0x110))(plVar4), cVar1 == '\0')) {
      return 0;
    }
    cVar1 = FUN_14366c361(plVar4);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
      uVar5 = FUN_14366c379(uVar2);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 143658c44 FUN_143658c44 body=29 status=ok
// SIG undefined FUN_143658c44(void)

bool FUN_143658c44(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (((*(byte *)(param_1 + 0x73) & 0x10) == 0) && (*(int *)(DAT_14cafadf8 + 4) == 0)) {
    bVar1 = *(char *)(param_1 + 0x69) == '\x02';
  }
  return bVar1;
}



// FUNCTION 143658c62 FUN_143658c62 body=350 status=ok
// SIG undefined FUN_143658c62(void)

void FUN_143658c62(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
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
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  DWORD DVar18;
  DWORD DVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[0x36] = param_3[6];
  lVar20 = *param_3;
  lVar13 = param_3[1];
  lVar14 = param_3[2];
  lVar15 = param_3[3];
  lVar16 = param_3[5];
  param_1[0x34] = param_3[4];
  param_1[0x35] = lVar16;
  param_1[0x32] = lVar14;
  param_1[0x33] = lVar15;
  param_1[0x30] = lVar20;
  param_1[0x31] = lVar13;
  param_1[0x3d] = *(longlong *)(param_4 + 0xc);
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[4];
  uVar7 = param_4[5];
  uVar8 = param_4[6];
  uVar9 = param_4[7];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(param_1 + 0x3b) = param_4[8];
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar12;
  *(undefined4 *)(param_1 + 0x39) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar7;
  *(undefined4 *)(param_1 + 0x3a) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar9;
  *(undefined4 *)(param_1 + 0x37) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar5;
  lVar20 = DAT_14cafae58;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar21 = 0;
  }
  else if (iVar1 == 1) {
    DVar18 = FUN_140ad26c0();
    DVar19 = GetCurrentThreadId();
    uVar21 = (ulonglong)(DVar18 != DVar19);
  }
  else {
    uVar21 = 1;
  }
  bVar17 = 0x80;
  if (*(int *)(lVar20 + uVar21 * 4) == 0) {
    lVar20 = (**(code **)(*param_1 + 0x220))(param_1);
    if (lVar20 == 0) {
      if (param_1[0x12] == 0) {
        local_28 = DAT_14cae70c0;
        local_30 = DAT_14cae70b8;
      }
      else {
        FUN_140083ea4(param_1[0x12],&local_30,0);
      }
    }
    else {
      local_28 = *(undefined4 *)(lVar20 + 0x10);
      local_30 = *(undefined8 *)(lVar20 + 8);
    }
    bVar17 = ((byte)local_28 & 4) << 5;
  }
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0x7f | bVar17;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143658dc2 FUN_143658dc2 body=1276 status=ok
// SIG undefined FUN_143658dc2(void)

void FUN_143658dc2(undefined8 param_1,undefined1 param_2,undefined1 param_3)

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
  undefined8 *local_88;
  undefined1 local_79;
  undefined8 local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_14365921d;
    if (iVar6 != 1) goto LAB_143658e0c;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_14365921d;
  }
  else {
LAB_143658e0c:
    if (iVar6 == 0x10) goto LAB_14365921d;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_14365921d:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14365921d;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_143658f80;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14365fa42);
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
LAB_143658f80:
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
          goto LAB_143659000;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_143659000:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14aa59dc0;
    puVar16[0x15] = param_1;
    *(undefined1 *)(puVar16 + 0x16) = param_2;
    *(undefined1 *)((longlong)puVar16 + 0xb1) = param_3;
    *(undefined4 *)((longlong)puVar16 + 0xb2) = (undefined4)local_78;
    *(undefined2 *)((longlong)puVar16 + 0xb6) = local_78._4_2_;
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
      local_79 = 1;
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_79 = 1;
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
    local_88 = &local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aa59d80;
    local_78 = &LAB_143661dee;
    local_50 = param_1;
    local_48 = param_2;
    local_47 = param_3;
    FUN_14005a792(&DAT_14ca9a440,L"SetNewSelection",&DAT_14cafe1c0);
    if (local_78 != (undefined1 *)0x0) {
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



// FUNCTION 1436592d8 FUN_1436592d8 body=1207 status=ok
// SIG undefined FUN_1436592d8(void)

void FUN_1436592d8(undefined8 param_1)

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
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_14365931b;
    if (iVar6 != 1) goto LAB_143659316;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_14365931b;
  }
  else {
LAB_143659316:
    if (iVar6 == 0x10) goto LAB_14365931b;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_14365931b:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14365931b;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_1436594cd;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14365fa42);
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
LAB_1436594cd:
      puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar15 + 0x16);
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
        puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x16);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_14365954d;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_14365954d:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar15,0);
    *puVar15 = &PTR_FUN_14aa59f48;
    puVar15[0x15] = param_1;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar6 = 0;
      }
      else {
        uVar16 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar16 = 5;
    }
    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
    }
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar15[9] = puVar15;
    puVar15[10] = puVar15;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar16 != '\x06') {
        uVar5 = uVar16;
      }
      uVar16 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar15[0xf] = uVar11;
    puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar15 + 0x1c) = iVar6;
    if (puVar15 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar15);
      LOCK();
      piVar1 = (int *)(puVar15 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar15)(puVar15,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aa59f00;
    local_68[0] = &LAB_1436625f0;
    local_40 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"ResetSceneVelocity",&DAT_14cafe1d0);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436597aa FUN_1436597aa body=1387 status=ok
// SIG undefined FUN_1436597aa(void)

void FUN_1436597aa(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_79;
  undefined8 local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar15 = *(longlong **)(param_1 + 0x210);
  lVar4 = *(longlong *)(param_1 + 0x218);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_1436597fb;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143659804;
      goto LAB_143659891;
    }
  }
  else {
LAB_1436597fb:
    if (iVar8 != 0x10) {
LAB_143659891:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar5 + 0xc60), iVar8 == 2))
        goto LAB_143659804;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143659804;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_143659a1e;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14365fa42);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_143659a1e:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x19);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x19);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_143659a9e;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143659a9e:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14aa59fc0;
        puVar18[0x15] = param_1;
        *(char *)(puVar18 + 0x16) = param_2;
        uVar6 = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar18 + 0xb1) = uVar6;
        *(undefined4 *)((longlong)puVar18 + 0xb4) = local_78._3_4_;
        puVar18[0x17] = plVar15;
        puVar18[0x18] = lVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
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
          uVar7 = 1;
          if ((char)uVar17 != '\x06') {
            uVar7 = uVar17;
          }
          uVar17 = uVar7;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_79 = 1;
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
        local_78 = (code *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x28,8);
        *local_68 = (longlong)&PTR_LAB_14aa59f60;
        local_68[1] = param_1;
        *(char *)(local_68 + 2) = param_2;
        local_68[3] = (longlong)plVar15;
        local_68[4] = lVar4;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78 = FUN_1436627c0;
        }
        local_88 = &local_78;
        FUN_14005a792(&DAT_14ca9a440,L"SetEvaluateWorldPositionOffset",&DAT_14cafe1d4);
        if (local_78 != (code *)0x0) {
          plVar15 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar15 = local_58;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_14365995a;
    }
  }
LAB_143659804:
  if (((*(byte *)(param_1 + 0x75) & 4) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfb | param_2 << 2;
    if (lVar4 != 0) {
      (**(code **)(*plVar15 + 0x4c0))(plVar15,lVar4);
      (**(code **)(*plVar15 + 0x4b8))(plVar15,lVar4,8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
LAB_14365995a:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143659d30 FUN_143659d30 body=1 status=ok
// SIG undefined FUN_143659d30(void)

void FUN_143659d30(void)

{
  return;
}



// FUNCTION 143659d32 FUN_143659d32 body=132 status=ok
// SIG undefined FUN_143659d32(void)

void FUN_143659d32(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x268);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    lVar3 = 0;
    do {
      FUN_140245bbe(&DAT_14cafb2e8,2,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)iVar1 * 4 != lVar3);
    *(undefined4 *)(param_1 + 0x268) = 0;
    if (*(int *)(param_1 + 0x26c) != 0) {
      FUN_14480809c((longlong *)(param_1 + 0x260),0);
      return;
    }
  }
  return;
}



// FUNCTION 143659db6 FUN_143659db6 body=316 status=ok
// SIG undefined FUN_143659db6(void)

void FUN_143659db6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cac6e60 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b47bc4;
      local_48 = &LAB_1478989f1;
      local_50 = &LAB_146391124;
      local_58 = L"Engine";
      local_60 = 0x10000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) goto LAB_143659e11;
  }
  plVar1 = (longlong *)0x0;
LAB_143659e11:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143659e3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x790))(plVar1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143659ef4 FUN_143659ef4 body=2052 status=ok
// SIG undefined FUN_143659ef4(void)

void FUN_143659ef4(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  size_t sVar7;
  ulonglong uVar8;
  char *_Str;
  uint *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 *local_d0;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  ulonglong uStack_8c;
  uint5 local_84;
  undefined3 uStack_7f;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined8 local_70;
  wchar_t *pwStack_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cafaf10) && (FUN_144b3d300(&DAT_14cafaf10), DAT_14cafaf10 == -1)) {
    DAT_14cafaf00 = 0x800000014aa53830;
    local_a8 = (char *)CONCAT44(local_a8._4_4_,0x1a);
    DAT_14cafaf08 = FUN_14577453c();
    DAT_14cafaf0c = '\x01';
    _Init_thread_footer(&DAT_14cafaf10);
  }
  bVar2 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14cafaf00 < 0) {
    _Str = (char *)(DAT_14cafaf00 & 0x7fffffffffffffff);
    if (DAT_14cafaf0c == '\x01') {
      puVar9 = (uint *)&local_a8;
      FUN_1446f470e(puVar9,_Str,1);
    }
    else {
      local_a8 = _Str;
      if (_Str == (char *)0x0) {
        uStack_a0 = 0;
      }
      else {
        sVar7 = strlen(_Str);
        uStack_a0 = (undefined4)sVar7;
      }
      puVar9 = (uint *)&local_b8;
      FUN_14001c09c(puVar9,&local_a8,1);
    }
    uVar8 = (ulonglong)*puVar9;
    local_58 = (ulonglong)DAT_14cafaf08 << 0x20;
    DAT_14cafaf00 = uVar8;
  }
  else {
    uVar8 = (ulonglong)DAT_14cafaf08 << 0x20;
    local_58 = DAT_14cafaf00 & 0xffffffff;
  }
  local_58 = local_58 | uVar8;
  local_78 = (wchar_t *)CONCAT26(local_78._6_2_,0xff0001000000);
  local_a8 = &DAT_00020008;
  _local_84 = 0x10000002e;
  local_7c = 0x10001;
  local_78 = (wchar_t *)CONCAT62(local_78._2_6_,0x101);
  uStack_a0 = 1;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_8c = (ulonglong)(uint)~(-1 << bVar2);
  pwStack_68 = L"PrimitiveSceneDataTexture";
  local_60 = 0;
  local_50 = 0;
  local_70 = CONCAT44(local_70._4_4_,0xc00);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b8,&DAT_14ca85100,&local_a8);
  plVar10 = (longlong *)(param_1 + 0x28);
  if (plVar10 == &local_b8) {
LAB_14365a082:
    lVar4 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      puVar9 = (uint *)(local_b8 + 8);
      uVar1 = *puVar9;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar9 = (uint *)(local_b8 + 8);
        LOCK();
        uVar1 = *puVar9;
        *puVar9 = *puVar9 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_b8 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar11) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar11 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar11) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar10;
    *plVar10 = local_b8;
    local_b8 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar9 = (uint *)(lVar4 + 8);
      uVar1 = *puVar9;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar9 = (uint *)(lVar4 + 8);
        LOCK();
        uVar1 = *puVar9;
        *puVar9 = *puVar9 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar11) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar11 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar11) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14365a082;
    }
  }
  plVar10 = (longlong *)*plVar10;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_a8 = (char *)0x2;
  lVar4 = (**(code **)(*plVar10 + 8))(plVar10);
  if (*(byte *)(lVar4 + 0x32) < 5) {
    local_a8._0_3_ =
         CONCAT12((char)(0x4030502010 >> ((*(byte *)(lVar4 + 0x32) & 7) << 3)),(undefined2)local_a8)
    ;
  }
  local_a8._0_5_ = CONCAT23(0x100,(undefined3)local_a8);
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b8,param_2,plVar10);
  plVar10 = (longlong *)(param_1 + 0x30);
  if (plVar10 == &local_b8) {
LAB_14365a1c1:
    lVar4 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      puVar9 = (uint *)(local_b8 + 8);
      uVar1 = *puVar9;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar9 = (uint *)(local_b8 + 8);
        LOCK();
        uVar1 = *puVar9;
        *puVar9 = *puVar9 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_b8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar10 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar10;
              LOCK();
              bVar11 = plVar10 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar10 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar10 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar10;
    *plVar10 = local_b8;
    local_b8 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar9 = (uint *)(lVar4 + 8);
      uVar1 = *puVar9;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar9 = (uint *)(lVar4 + 8);
        LOCK();
        uVar1 = *puVar9;
        *puVar9 = *puVar9 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar10 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar10;
              LOCK();
              bVar11 = plVar10 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar10 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar10 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14365a1c1;
    }
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 1;
  uStack_94 = 0;
  uStack_8c = 0;
  local_84 = (uint5)(uint)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_7c = 0;
  local_78 = L"SkyIrradianceEnvironmentMap";
  local_70 = 0;
  pwStack_68 = (wchar_t *)0x0;
  local_b8 = 0x1000000080;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0x10101);
  local_d0 = &local_a8;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d8 = (longlong *)CONCAT44(local_d8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
    *(undefined4 *)(local_c0 + 0x18) = 0x70;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d8 = (longlong *)CONCAT44(local_d8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
    *(undefined4 *)(local_c0 + 0x18) = 0x70;
  }
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 == &local_c0) {
LAB_14365a392:
    lVar4 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      puVar9 = (uint *)(local_c0 + 8);
      uVar1 = *puVar9;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar9 = (uint *)(local_c0 + 8);
        LOCK();
        uVar1 = *puVar9;
        *puVar9 = *puVar9 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_c0 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar11) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar11 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar11) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar10;
    *plVar10 = local_c0;
    local_c0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar9 = (uint *)(lVar4 + 8);
      uVar1 = *puVar9;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar9 = (uint *)(lVar4 + 8);
        LOCK();
        uVar1 = *puVar9;
        *puVar9 = *puVar9 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar11) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar11 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar11) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14365a392;
    }
  }
  uStack_b0 = 0;
  uVar1 = *(uint *)(*plVar10 + 0x28);
  bVar2 = 4;
  if (((uVar1 & 0x10) == 0) && (bVar2 = 2, (uVar1 >> 0x10 & 1) == 0)) {
    bVar2 = ((byte)(uVar1 >> 0xd) & 1) * '\x02' + 1;
  }
  local_b8 = (ulonglong)bVar2 << 0x10;
  local_d8 = &local_b8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_c0,param_2);
  plVar10 = (longlong *)(param_1 + 0x20);
  if (plVar10 != &local_c0) {
    lVar4 = *plVar10;
    *plVar10 = local_c0;
    local_c0 = 0;
    if (lVar4 == 0) goto LAB_14365a51c;
    LOCK();
    puVar9 = (uint *)(lVar4 + 8);
    uVar1 = *puVar9;
    *puVar9 = *puVar9 - 1;
    UNLOCK();
    if ((uVar1 & 0x3fffffff) == 1) {
      puVar9 = (uint *)(lVar4 + 8);
      LOCK();
      uVar1 = *puVar9;
      *puVar9 = *puVar9 | 0x40000000;
      UNLOCK();
      if ((uVar1 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar11 = plVar6 != DAT_14ca843c8;
            plVar10 = plVar5;
            if (bVar11) {
              plVar6 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar4 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    puVar9 = (uint *)(local_c0 + 8);
    uVar1 = *puVar9;
    *puVar9 = *puVar9 - 1;
    UNLOCK();
    if ((uVar1 & 0x3fffffff) == 1) {
      puVar9 = (uint *)(local_c0 + 8);
      LOCK();
      uVar1 = *puVar9;
      *puVar9 = *puVar9 | 0x40000000;
      UNLOCK();
      if ((uVar1 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_c0 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar11 = plVar6 != DAT_14ca843c8;
            plVar10 = plVar5;
            if (bVar11) {
              plVar6 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_14365a51c:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365a6f9 FUN_14365a6f9 body=47 status=ok
// SIG undefined FUN_14365a6f9(void)

void FUN_14365a6f9(void)

{
  DAT_14caff0e0 = &PTR_FUN_14aa5a0f0;
  FUN_144725486(&DAT_14caff0e0);
  FUN_1463fc1ee(&DAT_14caff0e0);
  return;
}



// FUNCTION 14365a728 FUN_14365a728 body=69 status=ok
// SIG undefined FUN_14365a728(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365a728(void)

{
  _DAT_14cafaf48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365a76a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafaf50,1);
  return;
}



// FUNCTION 14365a76d FUN_14365a76d body=59 status=ok
// SIG undefined FUN_14365a76d(void)

void FUN_14365a76d(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cafaf60;
  if (DAT_14cafaf60 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cafaf60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014365a79d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14365a7a8 FUN_14365a7a8 body=666 status=ok
// SIG undefined FUN_14365a7a8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14365a7a8(longlong param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_1978 [32];
  wchar_t *local_1958;
  undefined4 local_1950;
  ulonglong local_1948 [11];
  ulonglong local_18f0;
  ulonglong local_18e8;
  undefined1 local_18c0 [5120];
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  undefined8 uStack_18;
  
  uStack_18 = 0x14365a7b4;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1978;
  FUN_1405d5a96(local_1948);
  *(float *)(param_1 + 0x20) = (float)local_1948[0] * 9.536743e-07;
  *(float *)(param_1 + 0x24) = (float)local_18f0 * 9.536743e-07;
  *(float *)(param_1 + 0x28) = (float)local_18e8 * 9.536743e-07;
  local_4c0 = 0;
  local_4b8 = 0x2000000000;
  local_b0 = 0;
  local_a8 = 0x2000000000;
  local_98 = 0;
  local_90 = 0;
  uStack_8c = 0x20;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  local_40 = 0;
  local_38 = 0;
  if (DAT_14c872d28 != (longlong *)0x0) {
    (**(code **)(*DAT_14c872d28 + 0xa8))(DAT_14c872d28,local_18c0);
    local_1958 = L"TotalAllocated";
    local_1950 = 0xe;
    puVar2 = (ulonglong *)FUN_147cbce36(local_18c0);
    if ((puVar2 != (ulonglong *)0x0) && (uVar1 = *puVar2, uVar1 != 0)) {
      uVar3 = DAT_14cafaf68;
      if (DAT_14cafaf68 < uVar1) {
        uVar3 = uVar1;
      }
      DAT_14cafaf68 = uVar3;
      *(float *)(param_1 + 0xc) = (float)uVar1 * 9.536743e-07;
      *(float *)(param_1 + 0x10) = (float)uVar3 * 9.536743e-07;
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar4 = FUN_140083894();
  if (*(longlong *)(lVar4 + 0x30) != 0) {
    lVar4 = FUN_140083894();
    lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x30) + 0xe0))();
    *(float *)(param_1 + 0x18) = (float)lVar4 * 9.536743e-07;
    lVar4 = FUN_140083894();
    lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x30) + 0xe8))();
    *(float *)(param_1 + 0x1c) = (float)lVar4 * 9.536743e-07;
  }
  FUN_147cbce96(local_18c0);
  if ((local_30 ^ (ulonglong)auStack_1978) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365aa44 FUN_14365aa44 body=1145 status=ok
// SIG undefined FUN_14365aa44(void)

void FUN_14365aa44(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *(double *)(param_1 + 0x70);
  local_58 = param_3;
  if (0.0 < local_78) {
    FUN_145bf7c2e(param_2,&local_58,5,L"MeasuredPerfTime: %.02f secs");
    local_60 = *(double *)(param_1 + 0xb0) * 1000.0;
    local_68 = *(double *)(param_1 + 0xa8);
    local_78 = *(double *)(param_1 + 0xb8);
    dStack_70 = *(double *)(param_1 + 0xc0);
    FUN_145bf7c2e(param_2,&local_58,5,
                  L"MVP: %.02f%%, AvgFPS:%.2f, HitchesPerMinute: %.2f, Avg Hitch %.02fms");
    local_68 = *(double *)(param_1 + 0xf8);
    dStack_70 = *(double *)(param_1 + 0x100);
    local_78 = *(double *)(param_1 + 0x108);
    FUN_145bf7c2e(param_2,&local_58,5,L"DynRes: Avg: %.02f%%, Max: %.02f%%, Min: %.02f%%");
    local_68 = *(double *)(param_1 + 0xe0) * 1000.0;
    dStack_70 = *(double *)(param_1 + 0xe8) * 1000.0;
    local_78 = *(double *)(param_1 + 0xf0) * 1000.0;
    FUN_145bf7c2e(param_2,&local_58,5,L"FT: Avg: %.02fms, Max: %.02fms, Min: %.02fms");
    local_68 = (double)*(float *)(param_1 + 0x78);
    dStack_70 = (double)*(float *)(param_1 + 0x7c);
    local_78 = (double)(*(float *)(param_1 + 0x80) * 1000.0);
    FUN_145bf7c2e(param_2,&local_58,5,L"GT:  Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%"
                 );
    local_68 = (double)*(float *)(param_1 + 0x84);
    dStack_70 = (double)*(float *)(param_1 + 0x88);
    local_78 = (double)(*(float *)(param_1 + 0x8c) * 1000.0);
    FUN_145bf7c2e(param_2,&local_58,5,L"RT:  Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%"
                 );
    local_68 = (double)*(float *)(param_1 + 0x90);
    dStack_70 = (double)*(float *)(param_1 + 0x94);
    local_78 = (double)(*(float *)(param_1 + 0x98) * 1000.0);
    FUN_145bf7c2e(param_2,&local_58,5,
                  L"RHIT: Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%");
    local_68 = (double)*(float *)(param_1 + 0x9c);
    dStack_70 = (double)*(float *)(param_1 + 0xa0);
    local_78 = (double)(*(float *)(param_1 + 0xa4) * 1000.0);
    FUN_145bf7c2e(param_2,&local_58,5,L"GPU: Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%"
                 );
    local_68._0_4_ = *(undefined4 *)(param_1 + 200);
    dStack_70._0_4_ = *(undefined4 *)(param_1 + 0xcc);
    local_78._0_4_ = *(undefined4 *)(param_1 + 0xd0);
    FUN_145bf7c2e(param_2,&local_58,5,L"DrawCalls: Avg: %d, Max: %d, Min: %d");
    local_68 = (double)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0xd4));
    dStack_70 = (double)CONCAT44(dStack_70._4_4_,*(undefined4 *)(param_1 + 0xd8));
    local_78 = (double)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0xdc));
    FUN_145bf7c2e(param_2,&local_58,5,L"DrawnPrims: Avg: %d, Max: %d, Min: %d");
    local_68 = *(double *)(param_1 + 0x30);
    dStack_70 = *(double *)(param_1 + 0x38);
    local_78 = *(double *)(param_1 + 0x40);
    FUN_145bf7c2e(param_2,&local_58,5,L"PhysicalMemoryMB: Avg: %llu, Max: %llu, Min: %llu");
    local_68 = *(double *)(param_1 + 0x48);
    dStack_70 = *(double *)(param_1 + 0x50);
    local_78 = *(double *)(param_1 + 0x58);
    FUN_145bf7c2e(param_2,&local_58,5,L"VirtualMemoryMB: Avg: %llu, Max: %llu, Min: %llu");
  }
  dStack_70 = (double)*(float *)(param_1 + 0x10);
  local_78 = (double)*(float *)(param_1 + 0xc);
  FUN_145bf7c2e(param_2,&local_58,5,L"CPU Memory: Used %.2fMB, Peak %.2fMB");
  dStack_70 = (double)*(float *)(param_1 + 0x28);
  local_78 = (double)*(float *)(param_1 + 0x24);
  FUN_145bf7c2e(param_2,&local_58,5,L"Physical Memory: Used %.2fMB, Peak %.2fMB");
  dStack_70 = (double)*(float *)(param_1 + 0x1c);
  local_78 = (double)*(float *)(param_1 + 0x18);
  FUN_145bf7c2e(param_2,&local_58,5,L"Streaming Memory: Used %.2fMB, Peak %.2fMB");
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar2 = 8;
    lVar1 = 0;
    do {
      local_78 = *(double *)(*(longlong *)(param_1 + 0x60) + -8 + lVar2);
      dStack_70 = (double)((float)*(ulonglong *)(*(longlong *)(param_1 + 0x60) + lVar2) *
                          9.536743e-07);
      FUN_145bf7c2e(param_2,&local_58,5,L"%s: Used %.2f MB");
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar1 < *(int *)(param_1 + 0x68));
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365aebe FUN_14365aebe body=69 status=ok
// SIG undefined FUN_14365aebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365aebe(void)

{
  _DAT_14cafaf88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365af00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafaf90,1);
  return;
}



// FUNCTION 14365af03 FUN_14365af03 body=69 status=ok
// SIG undefined FUN_14365af03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365af03(void)

{
  _DAT_14cafafa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365af45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafafa8,1);
  return;
}



// FUNCTION 14365af48 FUN_14365af48 body=69 status=ok
// SIG undefined FUN_14365af48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365af48(void)

{
  _DAT_14cafafb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365af8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafafc0,1);
  return;
}



// FUNCTION 14365af8e FUN_14365af8e body=391 status=ok
// SIG undefined FUN_14365af8e(void)

void FUN_14365af8e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0xb8) == 0) ||
      ((*(byte *)(*(longlong *)(param_1 + 0xb8) + 0xa0) & 1) != 0)) ||
     (lVar2 = *(longlong *)(param_1 + 0xb8), lVar2 == 0)) goto LAB_14365b002;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(lVar2 + 0x1c);
    if (2 < iVar1) {
      bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar3 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar1 - 3) * 4) == bVar3)
        goto LAB_14365b118;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar2,&local_58);
  }
  else {
LAB_14365b118:
    FUN_140082318(lVar2);
  }
LAB_14365b002:
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
    iVar1 = *(int *)(param_1 + 0xb4);
    FUN_145a22f7a(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0xb4) != 0)) {
      FUN_147cc630c(param_1 + 0xa8);
    }
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      FUN_147cc633c(param_1 + 0x58);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365b126 FUN_14365b126 body=1312 status=ok
// SIG undefined FUN_14365b126(void)

void FUN_14365b126(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  LARGE_INTEGER LVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_b8 [40];
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  undefined8 uStack_80;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
    puVar6 = TlsGetValue(DAT_14c896140);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar6);
    }
    puVar9 = (undefined8 *)puVar6[1];
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar6;
      if (puVar9 == (undefined8 *)0x0) {
        uVar12 = DAT_14c896180.s.LowPart;
        LVar3 = DAT_14c896180;
        while (DAT_14c896180 = LVar3, local_88 = LVar3, (LVar3.QuadPart & 0x3ffffffU) != 0) {
          local_90.QuadPart = (LVar3.QuadPart & 0xfffffffffc000000U) + 0x4000000;
          if ((ulonglong)local_90.QuadPart >> 0x1a < (ulonglong)LVar3.QuadPart >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar11 = (ulonglong)((uVar12 & 0x3ffffff) >> 0xe);
          uVar13 = (ulonglong)(LVar3.s.LowPart & 0x3fff);
          local_90.QuadPart =
               (ulonglong)local_90 & 0xfffffffffc000000 |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 0x10 + uVar13 * 0x18);
          LOCK();
          bVar14 = local_88.QuadPart == DAT_14c896180.QuadPart;
          LVar3.QuadPart = local_90.QuadPart;
          if (!bVar14) {
            LVar3 = DAT_14c896180;
          }
          DAT_14c896180 = LVar3;
          UNLOCK();
          if (bVar14) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + uVar13 * 0x18 + 0x10) = 0;
            puVar9 = *(undefined8 **)
                      (*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 8 +
                      (ulonglong)(uVar12 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar12 & 0x3ffffff);
            puVar6[1] = puVar9;
            if (puVar9 != (undefined8 *)0x0) goto LAB_14365b2ce;
            goto LAB_14365b573;
          }
          uVar12 = DAT_14c896180.s.LowPart;
          LVar3 = DAT_14c896180;
        }
        puVar6[1] = 0;
LAB_14365b573:
        puVar9 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar6[1] = puVar9;
        iVar5 = 0xff;
        puVar10 = puVar9;
        do {
          puVar7 = puVar10 + 0x20;
          *puVar10 = puVar7;
          iVar5 = iVar5 + -1;
          puVar10 = puVar7;
        } while (iVar5 != 0);
      }
      else {
        puVar6[1] = puVar9;
        puVar7 = puVar6;
      }
      *puVar7 = 0;
LAB_14365b2ce:
      *(undefined4 *)(puVar6 + 2) = 0x100;
      iVar5 = 0xff;
    }
    else {
      iVar5 = *(int *)(puVar6 + 2) + -1;
    }
    puVar6[1] = *puVar9;
    *(int *)(puVar6 + 2) = iVar5;
    *puVar9 = UE::Tasks::Private::FTaskBase::vftable;
    puVar9[1] = &DAT_100000002;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined4 *)(puVar9 + 4) = 0xffffffff;
    puVar9[6] = 0;
    puVar9[7] = 0x100000000;
    *(undefined1 *)(puVar9 + 8) = 1;
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::TTaskDelegateDummy::vftable;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0xe800000000000020;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0x100000000;
    *(undefined2 *)(puVar9 + 0x14) = 0;
    LOCK();
    bVar14 = *(char *)(puVar9 + 8) == '\x01';
    if (bVar14) {
      *(char *)(puVar9 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar14) {
      FUN_14008cdb0(puVar9 + 8);
    }
    *puVar9 = &PTR_FUN_14aa5a2a8;
    if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
    }
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar9[9] = puVar9;
    puVar9[10] = puVar9;
    lVar2 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar2 + 0x30);
    }
    puVar9[0xf] = uVar8;
    puVar9[0x10] = 0xe0000052a9532b80;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
    puVar9[0x15] = param_1;
    *puVar9 = &PTR_FUN_14aa5a298;
    local_88.s.LowPart._0_1_ = 1;
    FUN_1447439e4(puVar9);
    puVar6 = *(undefined8 **)(param_1 + 0xb8);
    *(undefined8 **)(param_1 + 0xb8) = puVar9;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  if (((*(longlong *)(param_1 + 0xb8) == 0) ||
      ((*(byte *)(*(longlong *)(param_1 + 0xb8) + 0xa0) & 1) != 0)) ||
     (lVar2 = *(longlong *)(param_1 + 0xb8), lVar2 == 0)) goto LAB_14365b4aa;
  if (DAT_14c87e718 == '\0') {
    iVar5 = *(int *)(lVar2 + 0x1c);
    if ((2 < iVar5) && (bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar4 < 3)) {
      local_88.QuadPart = 0x20100000001;
      uStack_80 = 0x30100000101;
      local_78 = DAT_14c7585c8;
      local_74 = DAT_14c7585c8 | 0x200;
      local_70 = DAT_14c7585c8 | 0x100;
      local_6c = DAT_14c7585c8 | 0x300;
      local_68 = 0;
      uStack_64 = 0x200;
      uStack_60 = 0x100;
      uStack_5c = 0x300;
      if (*(byte *)((longlong)&local_88 + (ulonglong)(iVar5 - 3) * 4) == bVar4) goto LAB_14365b63a;
    }
    QueryPerformanceCounter(&local_88);
    uStack_80 = 0xffffffffffffffff;
    FUN_140056092(lVar2,&local_88);
  }
  else {
LAB_14365b63a:
    FUN_140082318(lVar2);
  }
LAB_14365b4aa:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14480f766(&DAT_14cb0a918);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14480f766(&DAT_14cb0a930);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14480f766(&DAT_14cb0a8e8);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14480f766(&DAT_14cb0a900);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365b648 FUN_14365b648 body=563 status=ok
// SIG undefined FUN_14365b648(void)

void FUN_14365b648(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_94;
  longlong local_90;
  undefined8 *local_88;
  LARGE_INTEGER local_80;
  DWORD DStack_78;
  DWORD DStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 0x15;
  local_94 = param_4;
  local_88 = param_2;
  iVar12 = FUN_147cbd3e4(plVar1);
  puVar13 = (undefined4 *)FUN_14001cc68(0x28,0x10);
  *(undefined1 *)(puVar13 + 6) = 0;
  puVar13[8] = iVar12;
  *puVar13 = 0;
  QueryPerformanceCounter(&local_80);
  *(double *)(puVar13 + 2) =
       (double)CONCAT44(local_80.s.HighPart,local_80.s.LowPart) * DAT_14c83f420 + 16777216.0;
  lVar19 = (longlong)iVar12;
  if (param_5 != 0) {
LAB_14365b6ed:
    lVar16 = param_5;
    lVar15 = lVar16;
    if (*(longlong *)(lVar16 + 0x20) != 0) goto code_r0x00014365b6fc;
    goto LAB_14365b70e;
  }
LAB_14365b733:
  plVar14 = (longlong *)(**(code **)(*param_3 + 0x2a0))(param_3);
  if ((plVar14 != (longlong *)0x0) && (lVar15 = (**(code **)(*plVar14 + 8))(plVar14), lVar15 != 0))
  {
    lVar16 = FUN_14019a59a();
    if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8
         ) == lVar16 + 0x30)) {
      local_90 = lVar15 + 0x28;
      (**(code **)(*(longlong *)(lVar15 + 0x28) + 0x58))(local_90,&local_80);
      lVar16 = *plVar1;
      lVar18 = lVar19 * 0x138;
      *(undefined8 *)(lVar16 + 0x40 + lVar18) = local_50;
      puVar2 = (undefined4 *)(lVar16 + 0x30 + lVar18);
      *puVar2 = local_60;
      puVar2[1] = uStack_5c;
      puVar2[2] = uStack_58;
      puVar2[3] = uStack_54;
      puVar2 = (undefined4 *)(lVar16 + 0x20 + lVar18);
      *puVar2 = local_70;
      puVar2[1] = uStack_6c;
      puVar2[2] = uStack_68;
      puVar2[3] = uStack_64;
      pDVar3 = (DWORD *)(lVar16 + 0x10 + lVar18);
      *pDVar3 = local_80.s.LowPart;
      pDVar3[1] = local_80.s.HighPart;
      pDVar3[2] = DStack_78;
      pDVar3[3] = DStack_74;
      puVar17 = (undefined4 *)(**(code **)(*(longlong *)(lVar15 + 0x28) + 0x50))(local_90);
      lVar16 = *plVar1;
      uVar5 = puVar17[1];
      uVar6 = puVar17[2];
      uVar7 = puVar17[3];
      uVar8 = *(undefined8 *)(puVar17 + 4);
      uVar9 = *(undefined8 *)(puVar17 + 6);
      uVar10 = *(undefined8 *)(puVar17 + 8);
      uVar11 = *(undefined8 *)(puVar17 + 10);
      puVar2 = (undefined4 *)(lVar16 + 0x48 + lVar18);
      *puVar2 = *puVar17;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar4 = (undefined8 *)(lVar16 + 0x58 + lVar18);
      *puVar4 = uVar8;
      puVar4[1] = uVar9;
      puVar4 = (undefined8 *)(lVar16 + 0x68 + lVar18);
      *puVar4 = uVar10;
      puVar4[1] = uVar11;
      *(undefined8 *)(lVar16 + 0x78 + lVar18) = *(undefined8 *)(puVar17 + 0xc);
      *(undefined1 *)(*plVar1 + 0x130 + lVar18) = *(undefined1 *)(lVar15 + 0x59);
    }
  }
  *puVar13 = local_94;
  local_a0 = local_94;
  local_a8 = 0;
  (**(code **)(*param_1 + 0x2e8))(param_1,iVar12,lVar19 * 0x138 + param_1[0x15],param_3);
  *local_88 = puVar13;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014365b6fc:
  param_5 = *(longlong *)(lVar16 + 0x20);
  if ((*(uint *)(lVar16 + 8) >> 0x1c & 1) == 0) goto LAB_14365b6ed;
  lVar15 = FUN_142840154(lVar16);
LAB_14365b70e:
  if (lVar15 == 0) {
    param_5 = *(longlong *)(lVar16 + 0x20);
    goto LAB_14365b6ed;
  }
  *(undefined8 *)(*plVar1 + 8 + lVar19 * 0x138) = *(undefined8 *)(lVar15 + 0x18);
  *(undefined8 *)(*plVar1 + lVar19 * 0x138) = *(undefined8 *)(lVar15 + 0x38);
  goto LAB_14365b733;
}



// FUNCTION 14365c464 FUN_14365c464 body=223 status=ok
// SIG undefined FUN_14365c464(void)

void FUN_14365c464(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    local_30 = 0;
    if (param_3 != 0) {
      uVar1 = *(uint *)(param_3 + 0xc);
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
      local_30 = CONCAT44(iVar2,uVar1);
    }
    FUN_147cc6b40(param_1 + 0x58,&local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365c544 FUN_14365c544 body=1025 status=ok
// SIG undefined FUN_14365c544(void)

void FUN_14365c544(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  LARGE_INTEGER *pLVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((char)param_1[10] != '\x01') goto LAB_14365c56d;
  local_58.QuadPart = 0;
  uVar7 = 0;
  uVar5 = 0;
  if (param_3 != 0) {
    uVar7 = *(uint *)(param_3 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar5 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar5 = *(uint *)(lVar11 + 0x10);
      bVar12 = uVar5 == 0;
      if (bVar12) {
        *(uint *)(lVar11 + 0x10) = uVar8;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar5 = uVar8;
      }
    }
    local_58.s.HighPart = uVar5;
    local_58.s.LowPart = uVar7;
  }
  uVar7 = uVar5 >> 0xd ^ uVar7 - uVar5;
  uVar8 = uVar7 << 8 ^ (-0x61c88647 - uVar5) - uVar7;
  uVar9 = uVar8 >> 0xd ^ (uVar5 - uVar7) - uVar8;
  uVar5 = uVar9 >> 0xc ^ (uVar7 - uVar8) - uVar9;
  uVar7 = uVar5 << 0x10 ^ (uVar8 - uVar9) - uVar5;
  uVar9 = uVar7 >> 5 ^ (uVar9 - uVar5) - uVar7;
  uVar8 = uVar9 >> 3 ^ (uVar5 - uVar7) - uVar9;
  uVar5 = uVar8 << 10 ^ (uVar7 - uVar9) - uVar8;
  pLVar6 = (LARGE_INTEGER *)
           FUN_147cc659e(param_1 + 0xb,uVar5 >> 0xf ^ uVar9 - (uVar8 + uVar5),&local_58);
  if (pLVar6->QuadPart == 0) {
    local_68 = param_4;
    FUN_14365b648(param_1,&local_58,param_3,2);
    lVar11 = pLVar6->QuadPart;
    pLVar6->QuadPart = (LONGLONG)local_58;
    if (lVar11 != 0) {
      FUN_1400020a8();
    }
  }
  QueryPerformanceCounter(&local_58);
  dVar4 = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
  if (*(int *)pLVar6->QuadPart == 1) {
    *(undefined1 *)(param_1[0x15] + 0x131 + (longlong)((int *)pLVar6->QuadPart)[8] * 0x138) = 1;
    lVar11 = param_1[0x15];
    lVar10 = (longlong)*(int *)(pLVar6->QuadPart + 0x20) * 0x138;
    *(double *)(lVar11 + 0x80 + lVar10) = dVar4 - *(double *)(pLVar6->QuadPart + 8);
    *(undefined1 *)(lVar11 + 0x88 + lVar10) = 1;
    puVar2 = (undefined4 *)pLVar6->QuadPart;
    uVar1 = *puVar2;
    *puVar2 = 2;
    *(double *)(puVar2 + 2) = dVar4;
    local_60 = 2;
    local_68 = CONCAT44(local_68._4_4_,uVar1);
    (**(code **)(*param_1 + 0x2e8))
              (param_1,(longlong)(int)puVar2[8],(longlong)(int)puVar2[8] * 0x138 + param_1[0x15],
               param_3);
  }
  lVar11 = param_4;
  if (param_4 != 0) {
LAB_14365c788:
    lVar10 = lVar11;
    lVar11 = lVar10;
    if (*(longlong *)(lVar10 + 0x20) != 0) goto code_r0x00014365c797;
    goto LAB_14365c7a9;
  }
  lVar11 = param_1[0x15];
  lVar10 = (longlong)*(int *)(pLVar6->QuadPart + 0x20) * 0x138;
  *(double *)(lVar11 + 0x90 + lVar10) = dVar4 - *(double *)(pLVar6->QuadPart + 8);
  *(undefined1 *)(lVar11 + 0x98 + lVar10) = 1;
  *(undefined1 *)(param_1[0x15] + 0x131 + (longlong)*(int *)(pLVar6->QuadPart + 0x20) * 0x138) = 1;
  local_60 = 0;
  goto LAB_14365c8bc;
code_r0x00014365c797:
  lVar11 = *(longlong *)(lVar10 + 0x20);
  if ((*(uint *)(lVar10 + 8) >> 0x1c & 1) == 0) goto LAB_14365c788;
  lVar11 = FUN_142840154(lVar10);
LAB_14365c7a9:
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar10 + 0x20);
    goto LAB_14365c788;
  }
  *(undefined8 *)(param_1[0x15] + (longlong)*(int *)(pLVar6->QuadPart + 0x20) * 0x138) =
       *(undefined8 *)(lVar11 + 0x38);
LAB_14365c7d1:
  lVar10 = param_4;
  lVar11 = lVar10;
  if (*(longlong *)(lVar10 + 0x20) != 0) goto code_r0x00014365c7e0;
  goto LAB_14365c7f2;
code_r0x00014365c7e0:
  param_4 = *(longlong *)(lVar10 + 0x20);
  if ((*(uint *)(lVar10 + 8) >> 0x1c & 1) == 0) goto LAB_14365c7d1;
  lVar11 = FUN_142840154(lVar10);
LAB_14365c7f2:
  if (lVar11 == 0) {
    param_4 = *(longlong *)(lVar10 + 0x20);
    goto LAB_14365c7d1;
  }
  *(undefined8 *)(param_1[0x15] + 8 + (longlong)*(int *)(pLVar6->QuadPart + 0x20) * 0x138) =
       *(undefined8 *)(lVar11 + 0x18);
  *(undefined1 *)(param_1[0x15] + 0x131 + (longlong)*(int *)(pLVar6->QuadPart + 0x20) * 0x138) = 1;
  lVar11 = param_1[0x15];
  lVar10 = (longlong)*(int *)(pLVar6->QuadPart + 0x20) * 0x138;
  *(double *)(lVar11 + 0x90 + lVar10) = dVar4 - *(double *)(pLVar6->QuadPart + 8);
  *(undefined1 *)(lVar11 + 0x98 + lVar10) = 1;
  local_60 = 3;
LAB_14365c8bc:
  puVar2 = (undefined4 *)pLVar6->QuadPart;
  uVar1 = *puVar2;
  *puVar2 = local_60;
  *(double *)(puVar2 + 2) = dVar4;
  local_68 = CONCAT44(local_68._4_4_,uVar1);
  (**(code **)(*param_1 + 0x2e8))
            (param_1,(longlong)(int)puVar2[8],(longlong)(int)puVar2[8] * 0x138 + param_1[0x15],
             param_3);
LAB_14365c56d:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365c946 FUN_14365c946 body=670 status=ok
// SIG undefined FUN_14365c946(void)

void FUN_14365c946(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LARGE_INTEGER *pLVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((char)param_1[10] == '\x01') {
    local_58.QuadPart = 0;
    uVar6 = 0;
    uVar4 = 0;
    if (param_3 != 0) {
      uVar6 = *(uint *)(param_3 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar4 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar4 = *(uint *)(lVar10 + 0x10);
        bVar11 = uVar4 == 0;
        if (bVar11) {
          *(uint *)(lVar10 + 0x10) = uVar7;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          uVar4 = uVar7;
        }
      }
      local_58.s.HighPart = uVar4;
      local_58.s.LowPart = uVar6;
    }
    uVar6 = uVar4 >> 0xd ^ uVar6 - uVar4;
    uVar7 = uVar6 << 8 ^ (-0x61c88647 - uVar4) - uVar6;
    uVar8 = uVar7 >> 0xd ^ (uVar4 - uVar6) - uVar7;
    uVar4 = uVar8 >> 0xc ^ (uVar6 - uVar7) - uVar8;
    uVar6 = uVar4 << 0x10 ^ (uVar7 - uVar8) - uVar4;
    uVar8 = uVar6 >> 5 ^ (uVar8 - uVar4) - uVar6;
    uVar7 = uVar8 >> 3 ^ (uVar4 - uVar6) - uVar8;
    uVar4 = uVar7 << 10 ^ (uVar6 - uVar8) - uVar7;
    pLVar5 = (LARGE_INTEGER *)
             FUN_147cc659e(param_1 + 0xb,uVar4 >> 0xf ^ uVar8 - (uVar7 + uVar4),&local_58);
    if (pLVar5->QuadPart == 0) {
      local_68 = 0;
      FUN_14365b648(param_1,&local_58,param_3,1);
      lVar10 = pLVar5->QuadPart;
      pLVar5->QuadPart = (LONGLONG)local_58;
      if (lVar10 != 0) {
        FUN_1400020a8();
      }
    }
    QueryPerformanceCounter(&local_58);
    dVar12 = (double)local_58.QuadPart * DAT_14c83f420;
    *(undefined1 *)(param_1[0x15] + 0x131 + (longlong)*(int *)(pLVar5->QuadPart + 0x20) * 0x138) = 1
    ;
    lVar10 = param_1[0x15];
    lVar9 = (longlong)*(int *)(pLVar5->QuadPart + 0x20) * 0x138;
    *(double *)(lVar10 + 0x80 + lVar9) = (dVar12 + 16777216.0) - *(double *)(pLVar5->QuadPart + 8);
    *(undefined1 *)(lVar10 + 0x88 + lVar9) = 1;
    QueryPerformanceCounter(&local_58);
    dVar12 = (double)local_58.QuadPart * DAT_14c83f420;
    puVar2 = (undefined4 *)pLVar5->QuadPart;
    uVar1 = *puVar2;
    *puVar2 = 2;
    *(double *)(puVar2 + 2) = dVar12 + 16777216.0;
    local_60 = 2;
    local_68 = CONCAT44(local_68._4_4_,uVar1);
    (**(code **)(*param_1 + 0x2e8))
              (param_1,(longlong)(int)puVar2[8],(longlong)(int)puVar2[8] * 0x138 + param_1[0x15],
               param_3);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365cbe6 FUN_14365cbe6 body=575 status=ok
// SIG undefined FUN_14365cbe6(void)

void FUN_14365cbe6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[10] == '\x01') {
    local_40.QuadPart = 0;
    uVar5 = 0;
    uVar3 = 0;
    if (param_3 != 0) {
      uVar5 = *(uint *)(param_3 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar3 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar3 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar3 = uVar6;
        }
      }
      local_40.s.HighPart = uVar3;
      local_40.s.LowPart = uVar5;
    }
    uVar5 = uVar3 >> 0xd ^ uVar5 - uVar3;
    uVar6 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
    uVar7 = uVar6 >> 0xd ^ (uVar3 - uVar5) - uVar6;
    uVar3 = uVar7 >> 0xc ^ (uVar5 - uVar6) - uVar7;
    uVar5 = uVar3 << 0x10 ^ (uVar6 - uVar7) - uVar3;
    uVar7 = uVar5 >> 5 ^ (uVar7 - uVar3) - uVar5;
    uVar6 = uVar7 >> 3 ^ (uVar3 - uVar5) - uVar7;
    uVar3 = uVar6 << 10 ^ (uVar5 - uVar7) - uVar6;
    plVar4 = (longlong *)
             FUN_147cc659e(param_1 + 0xb,uVar3 >> 0xf ^ uVar7 - (uVar6 + uVar3),&local_40);
    if (*plVar4 != 0) {
      QueryPerformanceCounter(&local_40);
      dVar11 = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
      *(undefined1 *)(param_1[0x15] + 0x131 + (longlong)*(int *)(*plVar4 + 0x20) * 0x138) = 1;
      lVar9 = param_1[0x15];
      lVar8 = (longlong)*(int *)(*plVar4 + 0x20) * 0x138;
      *(double *)(lVar9 + 0xe0 + lVar8) = dVar11 - *(double *)(*plVar4 + 8);
      *(undefined1 *)(lVar9 + 0xe8 + lVar8) = 1;
      puVar1 = (undefined4 *)*plVar4;
      local_58 = *puVar1;
      *puVar1 = 9;
      *(double *)(puVar1 + 2) = dVar11;
      local_50 = 9;
      (**(code **)(*param_1 + 0x2e8))
                (param_1,(longlong)(int)puVar1[8],(longlong)(int)puVar1[8] * 0x138 + param_1[0x15],
                 param_3);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365ce26 FUN_14365ce26 body=1606 status=ok
// SIG undefined FUN_14365ce26(void)

void FUN_14365ce26(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  LARGE_INTEGER *pLVar1;
  DWORD *pDVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 *puVar11;
  int iVar12;
  double dVar13;
  uint uVar14;
  LARGE_INTEGER *pLVar15;
  longlong *plVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  LARGE_INTEGER local_d8;
  _struct_19 _Stack_d0;
  LARGE_INTEGER local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((char)param_1[10] == '\x01') {
    local_d8.QuadPart = 0;
    uVar17 = 0;
    uVar14 = 0;
    if (param_3 != 0) {
      uVar17 = *(uint *)(param_3 + 0xc);
      if ((int)uVar17 < DAT_14c9647dc) {
        lVar23 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
      }
      else {
        lVar23 = 0;
      }
      uVar14 = *(uint *)(lVar23 + 0x10);
      if (*(uint *)(lVar23 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        uVar19 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar19);
        }
        LOCK();
        uVar14 = *(uint *)(lVar23 + 0x10);
        bVar24 = uVar14 == 0;
        if (bVar24) {
          *(uint *)(lVar23 + 0x10) = uVar19;
          uVar14 = 0;
        }
        UNLOCK();
        if (bVar24) {
          uVar14 = uVar19;
        }
      }
      local_d8.s.HighPart = uVar14;
      local_d8.s.LowPart = uVar17;
    }
    uVar17 = uVar14 >> 0xd ^ uVar17 - uVar14;
    uVar19 = uVar17 << 8 ^ (-0x61c88647 - uVar14) - uVar17;
    uVar20 = uVar19 >> 0xd ^ (uVar14 - uVar17) - uVar19;
    uVar14 = uVar20 >> 0xc ^ (uVar17 - uVar19) - uVar20;
    uVar17 = uVar14 << 0x10 ^ (uVar19 - uVar20) - uVar14;
    uVar20 = uVar17 >> 5 ^ (uVar20 - uVar14) - uVar17;
    uVar19 = uVar20 >> 3 ^ (uVar14 - uVar17) - uVar20;
    uVar14 = uVar19 << 10 ^ (uVar17 - uVar20) - uVar19;
    pLVar15 = (LARGE_INTEGER *)
              FUN_147cc659e(param_1 + 0xb,uVar14 >> 0xf ^ uVar20 - (uVar19 + uVar14),&local_d8);
    if (pLVar15->QuadPart == 0) {
      local_e8 = param_4;
      FUN_14365b648(param_1,&local_d8,param_3,5);
      lVar23 = pLVar15->QuadPart;
      pLVar15->QuadPart = (LONGLONG)local_d8;
      if (lVar23 != 0) {
        FUN_1400020a8();
      }
    }
    QueryPerformanceCounter(&local_d8);
    dVar13 = (double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0;
    *(undefined1 *)(param_1[0x15] + 0x131 + (longlong)*(int *)(pLVar15->QuadPart + 0x20) * 0x138) =
         1;
    lVar23 = param_1[0x15];
    lVar21 = (longlong)*(int *)(pLVar15->QuadPart + 0x20) * 0x138;
    *(double *)(lVar23 + 0xb0 + lVar21) = dVar13 - *(double *)(pLVar15->QuadPart + 8);
    *(undefined1 *)(lVar23 + 0xb8 + lVar21) = 1;
    lVar23 = pLVar15->QuadPart;
    *(double *)(lVar23 + 0x10) = dVar13;
    *(undefined1 *)(lVar23 + 0x18) = 1;
    if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
        (lVar23 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar23 != 0)) &&
       (*(longlong *)(lVar23 + 0x3f0) != 0)) {
      lVar21 = (longlong)*(int *)(pLVar15->QuadPart + 0x20);
      lVar23 = param_1[0x15];
      lVar22 = lVar21 * 0x138;
      if (*(char *)(lVar23 + 0x40 + lVar22) != '\0') {
        dVar4 = *(double *)(lVar23 + 0x10 + lVar22);
        dVar5 = *(double *)(lVar23 + 0x18 + lVar22);
        dVar6 = *(double *)(lVar23 + 0x20 + lVar22);
        dVar7 = *(double *)(lVar23 + 0x28 + lVar22);
        dVar8 = *(double *)(lVar23 + 0x30 + lVar22);
        dVar9 = *(double *)(lVar23 + 0x38 + lVar22);
        plVar16 = (longlong *)FUN_147dc04d2();
        if ((longlong)(int)plVar16[1] != 0) {
          lVar23 = *plVar16;
          uVar25 = 0xffffffff;
          uVar26 = 0x7fefffff;
          lVar21 = 0;
          do {
            dVar3 = *(double *)(lVar23 + 8 + lVar21);
            dVar10 = dVar4;
            if ((dVar3 < dVar4) || (dVar27 = 0.0, dVar10 = dVar7, dVar7 < dVar3)) {
              dVar27 = (dVar3 - dVar10) * (dVar3 - dVar10);
            }
            dVar3 = *(double *)(lVar23 + 0x10 + lVar21);
            dVar10 = dVar5;
            if ((dVar3 < dVar5) || (dVar10 = dVar8, dVar8 < dVar3)) {
              dVar27 = dVar27 + (dVar3 - dVar10) * (dVar3 - dVar10);
            }
            dVar3 = *(double *)(lVar23 + 0x18 + lVar21);
            dVar10 = dVar6;
            if ((dVar3 < dVar6) || (dVar10 = dVar9, dVar9 < dVar3)) {
              dVar27 = dVar27 + (dVar3 - dVar10) * (dVar3 - dVar10);
            }
            if (dVar27 <= (double)CONCAT44(uVar26,uVar25) &&
                (double)CONCAT44(uVar26,uVar25) != dVar27) {
              pLVar1 = (LARGE_INTEGER *)(lVar23 + 8 + lVar21);
              local_c8 = pLVar1[2];
              local_d8 = (LARGE_INTEGER)*(LARGE_INTEGER *)&pLVar1->s;
              _Stack_d0 = pLVar1[1].s;
              uVar25 = SUB84(dVar27,0);
              uVar26 = (undefined4)((ulonglong)dVar27 >> 0x20);
            }
            lVar21 = lVar21 + 0x160;
          } while ((longlong)(int)plVar16[1] * 0x160 - lVar21 != 0);
          if (((double)CONCAT44(uVar26,uVar25) != 1.79769313486232e+308) ||
             (NAN((double)CONCAT44(uVar26,uVar25)))) {
            if ((double)CONCAT44(uVar26,uVar25) < 0.0) {
              dVar4 = sqrt((double)CONCAT44(uVar26,uVar25));
            }
            else {
              dVar4 = SQRT((double)CONCAT44(uVar26,uVar25));
            }
            lVar23 = param_1[0x15];
            lVar21 = (longlong)*(int *)(pLVar15->QuadPart + 0x20) * 0x138;
            *(double *)(lVar23 + 0xf0 + lVar21) = dVar4;
            *(undefined1 *)(lVar23 + 0xf8 + lVar21) = 1;
            lVar23 = param_1[0x15];
            lVar21 = (longlong)*(int *)(pLVar15->QuadPart + 0x20) * 0x138;
            *(LARGE_INTEGER *)(lVar23 + 0x120 + lVar21) = local_c8;
            pDVar2 = (DWORD *)(lVar23 + 0x110 + lVar21);
            *pDVar2 = local_d8.s.LowPart;
            pDVar2[1] = local_d8.s.HighPart;
            pDVar2[2] = _Stack_d0.LowPart;
            pDVar2[3] = _Stack_d0.HighPart;
            *(undefined1 *)(lVar23 + 0x128 + lVar21) = 1;
          }
        }
        lVar21 = (longlong)*(int *)(pLVar15->QuadPart + 0x20);
        lVar23 = param_1[0x15];
      }
      lVar21 = lVar21 * 0x138;
      if (*(char *)(lVar23 + 0x78 + lVar21) != '\0') {
        if ((*(longlong *)(param_2 + 0x30) == 0) ||
           (lVar22 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar22 == 0)) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(undefined8 *)(lVar22 + 0x3f0);
        }
        dVar4 = *(double *)(lVar23 + 0x48 + lVar21);
        dVar5 = *(double *)(lVar23 + 0x50 + lVar21);
        dVar6 = *(double *)(lVar23 + 0x58 + lVar21);
        dVar7 = *(double *)(lVar23 + 0x60 + lVar21);
        dVar8 = *(double *)(lVar23 + 0x68 + lVar21);
        dVar9 = *(double *)(lVar23 + 0x70 + lVar21);
        plVar16 = (longlong *)FUN_147dc04d2(uVar18);
        if ((longlong)(int)plVar16[1] != 0) {
          lVar23 = *plVar16;
          lVar21 = 0;
          dVar3 = 1.79769313486232e+308;
          do {
            dVar10 = *(double *)(lVar23 + 8 + lVar21);
            dVar27 = dVar4;
            if ((dVar10 < dVar4) || (dVar28 = 0.0, dVar27 = dVar7, dVar7 < dVar10)) {
              dVar28 = (dVar10 - dVar27) * (dVar10 - dVar27);
            }
            dVar10 = *(double *)(lVar23 + 0x10 + lVar21);
            dVar27 = dVar5;
            if ((dVar10 < dVar5) || (dVar27 = dVar8, dVar8 < dVar10)) {
              dVar28 = dVar28 + (dVar10 - dVar27) * (dVar10 - dVar27);
            }
            dVar10 = *(double *)(lVar23 + 0x18 + lVar21);
            dVar27 = dVar6;
            if ((dVar10 < dVar6) || (dVar27 = dVar9, dVar9 < dVar10)) {
              dVar28 = dVar28 + (dVar10 - dVar27) * (dVar10 - dVar27);
            }
            if (dVar3 <= dVar28) {
              dVar28 = dVar3;
            }
            lVar21 = lVar21 + 0x160;
            dVar3 = dVar28;
          } while ((longlong)(int)plVar16[1] * 0x160 - lVar21 != 0);
          if ((dVar28 != 1.79769313486232e+308) || (NAN(dVar28))) {
            if (dVar28 < 0.0) {
              dVar28 = sqrt(dVar28);
            }
            else {
              dVar28 = SQRT(dVar28);
            }
            lVar23 = param_1[0x15];
            lVar21 = (longlong)*(int *)(pLVar15->QuadPart + 0x20) * 0x138;
            *(double *)(lVar23 + 0x100 + lVar21) = dVar28;
            *(undefined1 *)(lVar23 + 0x108 + lVar21) = 1;
          }
        }
      }
    }
    puVar11 = (undefined4 *)pLVar15->QuadPart;
    uVar25 = *puVar11;
    *puVar11 = 6;
    *(double *)(puVar11 + 2) = dVar13;
    local_e0 = 6;
    local_e8 = CONCAT44(local_e8._4_4_,uVar25);
    (**(code **)(*param_1 + 0x2e8))
              (param_1,(longlong)(int)puVar11[8],(longlong)(int)puVar11[8] * 0x138 + param_1[0x15],
               param_3);
  }
  if ((local_c0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365d472 FUN_14365d472 body=415 status=ok
// SIG undefined FUN_14365d472(void)

void FUN_14365d472(void)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  void *local_48;
  int local_40;
  void *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *(undefined2 **)(DAT_14cb10918 + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  FUN_1449fb060(&local_28,&local_38,1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = DAT_14cafafd4;
  puVar4 = local_28;
  if (local_20 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  DAT_14cafafd4 = DAT_14cafafd4 + 1;
  FUN_140002266(&local_38,L"%03d_%s",iVar1,puVar4);
  pvVar2 = local_38;
  lVar3 = (longlong)local_30;
  local_48 = (void *)0x0;
  local_40 = local_30;
  FUN_1446dd670(&local_48,local_30 + (uint)(lVar3 == 0) + 10,0);
  if (lVar3 != 0) {
    memcpy(local_48,pvVar2,lVar3 * 2);
  }
  FUN_1400020e8(&local_48,L"_Leaks.txt",10);
  pvVar2 = local_38;
  lVar3 = (longlong)local_30;
  local_58 = (void *)0x0;
  local_50 = local_30;
  FUN_1446dd670(&local_58,(uint)(lVar3 == 0) + local_30 + 0xb,0);
  if (lVar3 != 0) {
    memcpy(local_58,pvVar2,lVar3 * 2);
  }
  FUN_1400020e8(&local_58,L"_Allocs.txt",0xb);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365d612 FUN_14365d612 body=69 status=ok
// SIG undefined FUN_14365d612(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d612(void)

{
  _DAT_14cafb058 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb060,1);
  return;
}



// FUNCTION 14365d657 FUN_14365d657 body=69 status=ok
// SIG undefined FUN_14365d657(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d657(void)

{
  _DAT_14cafb068 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb070,1);
  return;
}



// FUNCTION 14365d69c FUN_14365d69c body=69 status=ok
// SIG undefined FUN_14365d69c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d69c(void)

{
  _DAT_14cafb078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d6de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb080,1);
  return;
}



// FUNCTION 14365d6e1 FUN_14365d6e1 body=69 status=ok
// SIG undefined FUN_14365d6e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d6e1(void)

{
  _DAT_14cafb088 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb090,1);
  return;
}



// FUNCTION 14365d726 FUN_14365d726 body=55 status=ok
// SIG undefined FUN_14365d726(void)

void FUN_14365d726(void)

{
  undefined8 uVar1;
  
  if (DAT_14cafb0a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cafb0a0 = FUN_14171c317(FUN_1463fb5ec,uVar1,L"EPropertyAccessCopyBatch");
  }
  return;
}



// FUNCTION 14365d75d FUN_14365d75d body=55 status=ok
// SIG undefined FUN_14365d75d(void)

void FUN_14365d75d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cafb0b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cafb0b8 = FUN_14171c317(FUN_1463fb61b,uVar1,L"EPropertyAccessIndirectionType");
  }
  return;
}



// FUNCTION 14365d794 FUN_14365d794 body=55 status=ok
// SIG undefined FUN_14365d794(void)

void FUN_14365d794(void)

{
  undefined8 uVar1;
  
  if (DAT_14cafb0d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cafb0d0 = FUN_14171c317(FUN_1463fb64a,uVar1,L"EPropertyAccessObjectType");
  }
  return;
}



// FUNCTION 14365d7cb FUN_14365d7cb body=55 status=ok
// SIG undefined FUN_14365d7cb(void)

void FUN_14365d7cb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cafb148 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cafb148 = FUN_14171c317(FUN_1463fb8d4,uVar1,L"EPropertyAccessCopyType");
  }
  return;
}



// FUNCTION 14365d810 FUN_14365d810 body=69 status=ok
// SIG undefined FUN_14365d810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d810(void)

{
  _DAT_14cafb1e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb1e8,1);
  return;
}



// FUNCTION 14365d863 FUN_14365d863 body=69 status=ok
// SIG undefined FUN_14365d863(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d863(void)

{
  _DAT_14cafb238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d8a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb240,1);
  return;
}



// FUNCTION 14365d8a8 FUN_14365d8a8 body=69 status=ok
// SIG undefined FUN_14365d8a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d8a8(void)

{
  _DAT_14cafb250 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d8ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb258,1);
  return;
}



// FUNCTION 14365d8ed FUN_14365d8ed body=69 status=ok
// SIG undefined FUN_14365d8ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d8ed(void)

{
  _DAT_14cafb268 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d92f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb270,1);
  return;
}



// FUNCTION 14365d932 FUN_14365d932 body=69 status=ok
// SIG undefined FUN_14365d932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d932(void)

{
  _DAT_14cafb278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb280,1);
  return;
}



// FUNCTION 14365d977 FUN_14365d977 body=69 status=ok
// SIG undefined FUN_14365d977(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d977(void)

{
  _DAT_14cafb290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d9b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb298,1);
  return;
}



// FUNCTION 14365d9bc FUN_14365d9bc body=69 status=ok
// SIG undefined FUN_14365d9bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365d9bc(void)

{
  _DAT_14cafb2a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365d9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb2a8,1);
  return;
}



// FUNCTION 14365da01 FUN_14365da01 body=69 status=ok
// SIG undefined FUN_14365da01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365da01(void)

{
  _DAT_14cafb2b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365da43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb2c0,1);
  return;
}



// FUNCTION 14365da46 FUN_14365da46 body=134 status=ok
// SIG undefined FUN_14365da46(void)

ulonglong FUN_14365da46(wchar_t *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     ((DAT_14cafb358 == 2 && (uVar2 = (ulonglong)DAT_14c9ebd80, 0 < (longlong)uVar2)))) {
    puVar4 = &DAT_14cafe3e8;
    uVar3 = 0;
    do {
      iVar1 = wcscmp((wchar_t *)*puVar4,param_1);
      if (iVar1 == 0) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar2 != uVar3);
  }
  return 0xffffffff;
}



// FUNCTION 14365dacc FUN_14365dacc body=69 status=ok
// SIG undefined FUN_14365dacc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365dacc(void)

{
  _DAT_14cafb2c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365db0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb2d0,1);
  return;
}



// FUNCTION 14365db11 FUN_14365db11 body=69 status=ok
// SIG undefined FUN_14365db11(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365db11(void)

{
  _DAT_14cafb2d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365db53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb2e0,1);
  return;
}



// FUNCTION 14365db56 FUN_14365db56 body=308 status=ok
// SIG undefined FUN_14365db56(void)

ulonglong FUN_14365db56(longlong param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                       undefined4 param_5,undefined8 param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined1 *local_50;
  undefined2 local_42;
  undefined8 local_40;
  undefined1 local_35;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cafb2b4 != 1) {
    uVar3 = 0;
    if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) goto LAB_14365db9b;
    if (DAT_14cafb358 - 1U < 2) {
      uVar2 = (*param_3)(param_2);
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc30);
      local_40 = uVar2;
      EnterCriticalSection(lpCriticalSection);
      local_58 = &local_42;
      local_42 = 0;
      local_50 = &local_35;
      FUN_14573482a(param_1 + 0xc58,&local_34,
                    (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2 & 0x7fffffff,&local_40);
      cVar1 = *(char *)(*(longlong *)(param_1 + 0xc58) + 8 + (longlong)local_34 * 0x10);
      if (cVar1 == '\x01') {
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
        *(undefined1 *)((longlong)local_34 * 0x10 + *(longlong *)(param_1 + 0xc58) + 8) = 1;
        LeaveCriticalSection(lpCriticalSection);
        FUN_140691a2a(param_1,param_5,param_6);
      }
      uVar3 = CONCAT71((int7)((ulonglong)&local_40 >> 8),cVar1) ^ 1;
      goto LAB_14365db9b;
    }
  }
  uVar3 = 0;
LAB_14365db9b:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365dc8c FUN_14365dc8c body=308 status=ok
// SIG undefined FUN_14365dc8c(void)

ulonglong FUN_14365dc8c(longlong param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                       undefined4 param_5,undefined8 param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined1 *local_50;
  undefined2 local_42;
  undefined8 local_40;
  undefined1 local_35;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cafb2b4 != 1) {
    uVar3 = 0;
    if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) goto LAB_14365dcd1;
    if (DAT_14cafb358 - 1U < 2) {
      uVar2 = (*param_3)(param_2);
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc30);
      local_40 = uVar2;
      EnterCriticalSection(lpCriticalSection);
      local_58 = &local_42;
      local_42 = 0;
      local_50 = &local_35;
      FUN_14573482a(param_1 + 0xc58,&local_34,
                    (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2 & 0x7fffffff,&local_40);
      cVar1 = *(char *)(*(longlong *)(param_1 + 0xc58) + 8 + (longlong)local_34 * 0x10);
      if (cVar1 == '\x01') {
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
        *(undefined1 *)((longlong)local_34 * 0x10 + *(longlong *)(param_1 + 0xc58) + 8) = 1;
        LeaveCriticalSection(lpCriticalSection);
        FUN_140691a2a(param_1,param_5,param_6);
      }
      uVar3 = CONCAT71((int7)((ulonglong)&local_40 >> 8),cVar1) ^ 1;
      goto LAB_14365dcd1;
    }
  }
  uVar3 = 0;
LAB_14365dcd1:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365ddc6 FUN_14365ddc6 body=446 status=ok
// SIG undefined FUN_14365ddc6(void)

void FUN_14365ddc6(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStack_a8 [36];
  int local_84;
  undefined8 *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar7 = *piVar2;
  if (iVar7 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar7 = *piVar2;
  }
  *piVar2 = 0x40000002;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x400000000;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    (**(code **)(*plVar3 + 0x38))(plVar3,local_78);
    puVar9 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar9 = local_78;
    }
    lVar10 = (longlong)(int)local_50;
    if (lVar10 == 0) {
      uVar6 = 0;
    }
    else {
      lVar8 = 0;
      local_84 = iVar7;
      do {
        puVar4 = *(undefined8 **)(puVar9 + lVar8);
        if (puVar4 == (undefined8 *)0x0) {
          local_80 = (undefined8 *)0x0;
          FUN_14002c244(*(undefined8 *)(param_1 + 0x10),&local_80);
        }
        else {
          LOCK();
          *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
          UNLOCK();
          uVar5 = *(undefined8 *)(param_1 + 0x10);
          LOCK();
          *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
          UNLOCK();
          local_80 = puVar4;
          FUN_14002c244(uVar5,&local_80);
          LOCK();
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        lVar8 = lVar8 + 8;
      } while (lVar10 * 8 != lVar8);
      uVar6 = local_50 & 0xffffffff;
      iVar7 = local_84;
    }
    puVar9 = local_78;
    if (local_58 != (undefined1 *)0x0) {
      puVar9 = local_58;
    }
    FUN_144717c65(puVar9,uVar6);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_78[0] = 1;
  FUN_1447439e4();
  *piVar2 = iVar7;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365df86 FUN_14365df86 body=1087 status=ok
// SIG undefined FUN_14365df86(void)

void FUN_14365df86(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_128 [36];
  int local_104;
  int *local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_104 = *piVar1;
  if (local_104 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_104 = *piVar1;
  }
  *piVar1 = 0x40000002;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_100 = piVar1;
  if (lVar15 != 0) {
    FUN_1405be624(lVar15,&local_c8,param_1 + 8);
    FUN_1405be162(&local_e8,&local_c8);
    FUN_1405be1b2(CONCAT44(uStack_c4,local_c8),local_c0);
    if (CONCAT44(uStack_c4,local_c8) != 0) {
      FUN_1400020a8();
    }
    if ((longlong)(int)uStack_e0 != 0) {
      lVar16 = (longlong)(int)uStack_e0 * 0x130 + local_e8;
      lVar15 = local_e8;
      do {
        plVar13 = (longlong *)(lVar15 + 0xe0);
        if (*(longlong **)(lVar15 + 0x110) != (longlong *)0x0) {
          plVar13 = *(longlong **)(lVar15 + 0x110);
        }
        if ((longlong)*(int *)(lVar15 + 0x118) != 0) {
          plVar12 = plVar13 + (longlong)*(int *)(lVar15 + 0x118) * 2;
          do {
            local_c8 = (**(code **)(**(longlong **)(plVar13[1] + 8) + 0x48))();
            plVar9 = (longlong *)FUN_146e2e544(&local_98,local_c8,&local_c8);
            iVar7 = (**(code **)(**(longlong **)(plVar13[1] + 8) + 0x50))
                              (*(longlong **)(plVar13[1] + 8),*(undefined4 *)(*plVar13 + 0xd4));
            lVar17 = *plVar9;
            iVar2 = (int)plVar9[1];
            lVar14 = (longlong)iVar2;
            if (lVar14 != 0) {
              uVar10 = 0;
              do {
                if (*(int *)(lVar17 + uVar10) == iVar7) {
                  if ((~uVar10 & 0x3fffffffc) != 0) goto LAB_14365e18c;
                  break;
                }
                uVar10 = uVar10 + 4;
              } while (lVar14 * 4 - uVar10 != 0);
            }
            *(uint *)(plVar9 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)plVar9 + 0xc) < iVar2 + 1U) {
              FUN_1446f48e2(plVar9,iVar2);
              lVar17 = *plVar9;
            }
            uVar10 = uStack_d0;
            *(int *)(lVar17 + lVar14 * 4) = iVar7;
            lVar17 = (longlong)(int)uStack_d0;
            uVar8 = (int)uStack_d0 + 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar8);
            if (uStack_d0._4_4_ < uVar8) {
              FUN_141790964(&local_d8,uVar10 & 0xffffffff);
            }
            uVar5 = *(undefined4 *)((longlong)plVar13 + 4);
            lVar14 = plVar13[1];
            uVar6 = *(undefined4 *)((longlong)plVar13 + 0xc);
            plVar9 = local_d8 + lVar17 * 2;
            *(int *)plVar9 = (int)*plVar13;
            *(undefined4 *)((longlong)plVar9 + 4) = uVar5;
            *(int *)(plVar9 + 1) = (int)lVar14;
            *(undefined4 *)((longlong)plVar9 + 0xc) = uVar6;
LAB_14365e18c:
            plVar13 = plVar13 + 2;
          } while (plVar13 != plVar12);
        }
        lVar15 = lVar15 + 0x130;
      } while (lVar15 != lVar16);
    }
  }
  if ((longlong)(int)uStack_d0 != 0) {
    local_f8 = local_d8 + (longlong)(int)uStack_d0 * 2;
    plVar13 = local_d8;
    do {
      local_a8 = (undefined4 *)0x0;
      local_a0 = 0x400000000;
      (**(code **)(**(longlong **)(plVar13[1] + 8) + 0x30))
                (*(longlong **)(plVar13[1] + 8),*(undefined4 *)(*plVar13 + 0xd4),&local_c8);
      puVar11 = local_a8;
      if (local_a8 == (undefined4 *)0x0) {
        puVar11 = &local_c8;
      }
      lVar15 = (longlong)(int)local_a0;
      uVar10 = 0;
      if (lVar15 != 0) {
        lVar16 = 0;
        do {
          puVar3 = *(undefined8 **)((longlong)puVar11 + lVar16);
          if (puVar3 == (undefined8 *)0x0) {
            local_f0 = (undefined8 *)0x0;
            FUN_14002c244(*(undefined8 *)(param_1 + 0x30),&local_f0);
          }
          else {
            LOCK();
            *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
            UNLOCK();
            uVar4 = *(undefined8 *)(param_1 + 0x30);
            LOCK();
            *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
            UNLOCK();
            local_f0 = puVar3;
            FUN_14002c244(uVar4,&local_f0);
            LOCK();
            piVar1 = (int *)(puVar3 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          lVar16 = lVar16 + 8;
        } while (lVar15 * 8 != lVar16);
        uVar10 = local_a0 & 0xffffffff;
      }
      puVar11 = local_a8;
      if (local_a8 == (undefined4 *)0x0) {
        puVar11 = &local_c8;
      }
      FUN_144717c65(puVar11,uVar10);
      if (local_a8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != local_f8);
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_c8 = CONCAT31(local_c8._1_3_,1);
  FUN_1447439e4();
  FUN_1405be1b2(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  piVar1 = local_100;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(&local_98);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  *piVar1 = local_104;
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365e3c6 FUN_14365e3c6 body=1916 status=ok
// SIG undefined FUN_14365e3c6(void)

void FUN_14365e3c6(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar8 = FUN_1406917e6();
  if (cVar8 != '\0') {
    plVar9 = (longlong *)FUN_14001cc68(8,0x10);
    lVar10 = (**(code **)(*param_2 + 0x4c0))(param_2);
    *plVar9 = 0;
    if (lVar10 != 0) {
      FUN_1401924dc(lVar10);
      *plVar9 = lVar10;
    }
    lVar10 = param_2[2];
    puVar11 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar11,0);
    *puVar11 = &PTR_FUN_149e00300;
    if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
    }
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar11[9] = puVar11;
    puVar11[10] = puVar11;
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar7 = *(longlong *)(lVar6 + 0x2b8);
    if (lVar7 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(lVar7 + 0x30);
    }
    plVar2 = (longlong *)(lVar6 + 0x2b8);
    puVar11[0xf] = uVar13;
    puVar11[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = 2;
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar14 = (uint *)*puVar3;
    if (puVar14 != (uint *)0x0) goto LAB_14365e5a9;
    do {
      uVar15 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar15 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar15 | 1;
        __tlregdtor(&LAB_14365fa42);
      }
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar12 = *(undefined4 **)(lVar6 + 0x310);
      *(undefined8 *)(lVar6 + 0x310) = 0;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar12 = 0xffffffff;
      *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar3 = puVar12;
      FUN_140217a48(puVar3);
      puVar14 = (uint *)*puVar3;
LAB_14365e5a9:
      uVar18 = *(longlong *)(puVar14 + 0x10) + 7;
      uVar15 = puVar14[0x12];
      while( true ) {
        puVar19 = (undefined8 *)(uVar18 & 0xfffffffffffffff8);
        if (puVar19 + 0x18 <= puVar14 + 0x4000) {
          *(undefined8 **)(puVar14 + 0x10) = puVar19 + 0x18;
          puVar14[0x12] = uVar15 + 1;
          FUN_1447247dc(puVar19,0);
          *puVar19 = &PTR_FUN_14aa595b0;
          if (puVar11 == (undefined8 *)0x0) {
            puVar19[0x15] = plVar9;
            puVar19[0x16] = lVar10;
            puVar19[0x17] = 0;
          }
          else {
            LOCK();
            *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
            UNLOCK();
            puVar19[0x15] = plVar9;
            puVar19[0x16] = lVar10;
            puVar19[0x17] = puVar11;
            LOCK();
            *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
            UNLOCK();
            LOCK();
            piVar1 = (int *)(puVar11 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar11)(puVar11,1);
            }
          }
          if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
          }
          puVar19[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar19[9] = puVar19;
          puVar19[10] = puVar19;
          lVar10 = *plVar2;
          if (lVar10 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined8 *)(lVar10 + 0x30);
          }
          puVar19[0xf] = uVar13;
          puVar19[0x10] = 0xd80000527800b400;
          *(undefined4 *)((longlong)puVar19 + 0x1c) = 0;
          if (puVar19 == (undefined8 *)0x0) {
            local_78[0] = 1;
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
            UNLOCK();
            local_78[0] = 1;
            FUN_1447439e4(puVar19);
            LOCK();
            piVar1 = (int *)(puVar19 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar19)(puVar19,1);
            }
          }
          if (puVar11 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
            UNLOCK();
          }
          local_58 = (undefined1 *)0x0;
          local_50 = 1;
          local_80 = puVar11;
          FUN_144727e94(local_78,1,0);
          puVar16 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar16 = local_78;
          }
          FUN_144727e6e(puVar16,&local_80,1);
          if (local_80 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_80 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_80)(local_80,1);
            }
          }
          puVar14 = (uint *)*puVar3;
          if (puVar14 != (uint *)0x0) goto LAB_14365e86b;
          goto LAB_14365e7ed;
        }
        *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
        LOCK();
        uVar4 = *puVar14;
        *puVar14 = *puVar14 + uVar15 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar15) != 0xffffffff) break;
        puVar14 = (uint *)*puVar3;
        *puVar14 = 0xffffffff;
        *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar3 = puVar14;
        uVar18 = (longlong)puVar14 + 0x5f;
        uVar15 = 0;
      }
    } while( true );
  }
  goto LAB_14365e3f4;
LAB_14365e7ed:
  uVar15 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar15 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar15 | 1;
    __tlregdtor(&LAB_14365fa42);
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar12 = *(undefined4 **)(lVar10 + 0x310);
  *(undefined8 *)(lVar10 + 0x310) = 0;
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar12 = 0xffffffff;
  *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
  puVar12[0x12] = 0;
  *puVar3 = puVar12;
  FUN_140217a48(puVar3);
  puVar14 = (uint *)*puVar3;
LAB_14365e86b:
  puVar19 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar17 = (uint *)(puVar19 + 0x16);
  uVar15 = puVar14[0x12];
  if (puVar17 <= puVar14 + 0x4000) goto LAB_14365eab5;
  while( true ) {
    *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
    LOCK();
    uVar4 = *puVar14;
    *puVar14 = *puVar14 + uVar15 + 1;
    UNLOCK();
    if ((uVar4 ^ uVar15) != 0xffffffff) break;
    puVar14 = (uint *)*puVar3;
    *puVar14 = 0xffffffff;
    *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
    puVar14[0x12] = 0;
    *puVar3 = puVar14;
    puVar19 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
    puVar17 = (uint *)(puVar19 + 0x16);
    uVar15 = 0;
    if (puVar17 <= puVar14 + 0x4000) {
      uVar15 = 1;
      goto LAB_14365e8eb;
    }
  }
  goto LAB_14365e7ed;
LAB_14365eab5:
  uVar15 = uVar15 + 1;
LAB_14365e8eb:
  *(uint **)(puVar14 + 0x10) = puVar17;
  puVar14[0x12] = uVar15;
  FUN_1447247dc(puVar19,local_78);
  *puVar19 = &PTR_FUN_14aa595c0;
  puVar19[0x15] = plVar9;
  if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
  }
  puVar19[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar19[9] = puVar19;
  puVar19[10] = puVar19;
  lVar10 = *plVar2;
  if (lVar10 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(lVar10 + 0x30);
  }
  puVar19[0xf] = uVar13;
  puVar19[0x10] = 0xe80000527800b400;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = 3;
  if (puVar19 == (undefined8 *)0x0) {
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,1);
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
    UNLOCK();
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,1);
    FUN_1447439e4(puVar19);
    LOCK();
    piVar1 = (int *)(puVar19 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar19)(puVar19,1);
    }
  }
  iVar5 = *(int *)(param_3 + 0x28);
  *(uint *)(param_3 + 0x28) = iVar5 + 1U;
  if (*(uint *)(param_3 + 0x2c) < iVar5 + 1U) {
    FUN_14476a5c8(param_3,iVar5);
  }
  lVar10 = *(longlong *)(param_3 + 0x20);
  if (*(longlong *)(param_3 + 0x20) == 0) {
    lVar10 = param_3;
  }
  *(undefined8 **)(lVar10 + (longlong)iVar5 * 8) = puVar11;
  if (puVar11 == (undefined8 *)0x0) {
    puVar16 = local_78;
    if (local_58 != (undefined1 *)0x0) {
      puVar16 = local_58;
    }
    FUN_144717c65(puVar16,local_50);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
    puVar16 = local_78;
    if (local_58 != (undefined1 *)0x0) {
      puVar16 = local_58;
    }
    FUN_144717c65(puVar16,local_50);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    LOCK();
    piVar1 = (int *)(puVar11 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
LAB_14365e3f4:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365eb43 FUN_14365eb43 body=69 status=ok
// SIG undefined FUN_14365eb43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365eb43(void)

{
  _DAT_14cafb360 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365eb85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb368,1);
  return;
}



// FUNCTION 14365eb99 FUN_14365eb99 body=69 status=ok
// SIG undefined FUN_14365eb99(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365eb99(void)

{
  _DAT_14cafb380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365ebdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb388,1);
  return;
}



// FUNCTION 14365ebef FUN_14365ebef body=69 status=ok
// SIG undefined FUN_14365ebef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365ebef(void)

{
  _DAT_14cafb3a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365ec31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb3a8,1);
  return;
}



// FUNCTION 14365ec45 FUN_14365ec45 body=69 status=ok
// SIG undefined FUN_14365ec45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14365ec45(void)

{
  _DAT_14cafb3c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014365ec87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cafb3c8,1);
  return;
}



// FUNCTION 14365ec8a FUN_14365ec8a body=87 status=ok
// SIG undefined FUN_14365ec8a(void)

void FUN_14365ec8a(longlong *param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (1 < DAT_14cafb378) {
    (**(code **)(*param_1 + 0x378))(param_1,local_20);
    if (local_20[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365ece2 FUN_14365ece2 body=113 status=ok
// SIG undefined FUN_14365ece2(void)

void FUN_14365ece2(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0 && 1 < DAT_14cafb3b8) {
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



// FUNCTION 14365ed54 FUN_14365ed54 body=50 status=ok
// SIG undefined FUN_14365ed54(void)

void FUN_14365ed54(void)

{
  FUN_145955aca(&DAT_14cafc028);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cafc000);
  FUN_14583e258(&DAT_14cafb3d0);
  return;
}



// FUNCTION 14365ed86 FUN_14365ed86 body=50 status=ok
// SIG undefined FUN_14365ed86(void)

void FUN_14365ed86(void)

{
  FUN_145955aca(&DAT_14cafccf8);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
  FUN_14583e258(&DAT_14cafc0a0);
  return;
}



// FUNCTION 14365edb8 FUN_14365edb8 body=50 status=ok
// SIG undefined FUN_14365edb8(void)

void FUN_14365edb8(void)

{
  FUN_145955aca(&DAT_14cafd9c8);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
  FUN_14583e258(&DAT_14cafcd70);
  return;
}



// FUNCTION 14365edea FUN_14365edea body=408 status=ok
// SIG undefined FUN_14365edea(void)

void FUN_14365edea(undefined1 *param_1,int param_2,longlong *param_3,int *param_4,undefined8 param_5
                  ,undefined4 param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_158 [32];
  int *local_138;
  undefined8 local_130;
  undefined4 local_128;
  int local_114;
  undefined1 local_110 [208];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(param_1 + 0xd0);
  local_114 = param_2;
  if (lVar1 == 0) {
    memcpy(local_110,param_1,0xd8);
    local_40 = (**(code **)(*DAT_14ca83900 + 0x2f8))(DAT_14ca83900,local_110);
    local_114 = FUN_147405ca7(local_110);
    if (local_40 != 0) {
      lVar3 = *DAT_14ca83900;
      puVar5 = local_110;
      goto LAB_14365ee94;
    }
    uVar4 = 0;
  }
  else {
    lVar3 = *DAT_14ca83900;
    puVar5 = param_1;
LAB_14365ee94:
    uVar4 = (**(code **)(lVar3 + 0x300))(DAT_14ca83900,puVar5);
  }
  local_138 = &local_114;
  cVar2 = FUN_144b13b12(&DAT_14cafb3d0,uVar4,param_6,param_4);
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     ((cVar2 == '\x01' && DAT_14cafb358 == 2 && (local_114 - 3U < 2)))) {
    if (lVar1 != 0) {
      cVar2 = FUN_147cbdbd6(&DAT_14cafcd70,*(undefined8 *)(param_1 + 0xd0));
      if (cVar2 == '\0') goto LAB_14365eec2;
    }
    if (param_3 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*param_3 + 0x30))(param_3,DAT_14c760db4);
    }
    local_128 = param_6;
    local_130 = param_5;
    local_138 = param_4;
    FUN_14365ef83(param_1,2,local_114,uVar4);
  }
LAB_14365eec2:
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365ef83 FUN_14365ef83 body=1100 status=ok
// SIG undefined FUN_14365ef83(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14365ef83(longlong param_1,byte param_2,int param_3,longlong *param_4,longlong param_5,
                  longlong param_6,int param_7)

{
  undefined *puVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  undefined1 auStack_1098 [40];
  undefined8 local_1070;
  undefined2 *local_1068;
  undefined8 uStack_1060;
  undefined1 *local_1050;
  undefined1 *local_1048;
  ulonglong *local_1040;
  char local_1038;
  undefined1 local_1030 [4096];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1098;
  local_1050 = local_1030;
  local_1038 = '\0';
  local_1040 = &local_30;
  local_1048 = local_1050;
  FUN_140212e80(&local_1050,L"\n\nPSO PRECACHING MISS:");
  if (param_2 < 3) {
    puVar1 = &DAT_14aa5a8d8 + *(int *)(&DAT_14aa5a8d8 + (ulonglong)param_2 * 4);
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  FUN_140212e80(&local_1050,L"\n\tType:\t\t\t\t\t%s",puVar1);
  if (param_3 - 1U < 6) {
    pwVar3 = (wchar_t *)(&PTR_u_Precaching_14aa5a8e8)[param_3 - 1U];
  }
  else {
    pwVar3 = L"Unknown";
  }
  FUN_140212e80(&local_1050,L"\n\tPSOPrecachingState:\t\t%s",pwVar3);
  if (param_4 == (longlong *)0x0) {
    FUN_140212e80(&local_1050,L"\n\tMaterial:\t\t\t\t%s",L"Unknown");
  }
  else {
    (**(code **)(*param_4 + 0x378))(param_4,&local_1068);
    puVar2 = local_1068;
    if ((int)uStack_1060 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140212e80(&local_1050,L"\n\tMaterial:\t\t\t\t%s",puVar2);
    if (local_1068 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (param_5 == 0) {
    puVar2 = &DAT_149e01fe8;
  }
  else {
    puVar2 = *(undefined2 **)(param_5 + 8);
  }
  FUN_140212e80(&local_1050,L"\n\tVertexFactoryType:\t\t%s",puVar2);
  if (param_7 == -1) {
    pwVar3 = L"Unknown";
  }
  else {
    pwVar3 = *(wchar_t **)
              (&DAT_14cafe438 + (longlong)param_7 * 0x10 + (ulonglong)(2 < DAT_14c760db4) * 0x540);
  }
  FUN_140212e80(&local_1050,L"\n\tPassName:\t\t\t\t%s",pwVar3);
  if (param_6 == 0) {
    FUN_140212e80(&local_1050,L"\n\tOwner:\t\t\t\t\t%s",L"Unknown");
  }
  else {
    local_1070 = *(undefined8 *)(param_6 + 0x230);
    FUN_1400021e4(&local_1070,&local_1068);
    puVar2 = local_1068;
    if ((int)uStack_1060 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140212e80(&local_1050,L"\n\tOwner:\t\t\t\t\t%s",puVar2);
    if (local_1068 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140212e80(&local_1050,L"\n\tShader Hashes:");
  if (*(longlong *)(param_1 + 8) != 0) {
    local_1068 = (undefined2 *)0x0;
    uStack_1060 = 0;
    FUN_1407c8a86(*(longlong *)(param_1 + 8) + 0x88,0x14,&local_1068);
    puVar2 = local_1068;
    if ((int)uStack_1060 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140212e80(&local_1050,L"\n\t\t%s:\t\t%s",L"VertexShader",puVar2);
    if (local_1068 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_1068 = (undefined2 *)0x0;
    uStack_1060 = 0;
    FUN_1407c8a86(*(longlong *)(param_1 + 0x10) + 0x88,0x14,&local_1068);
    puVar2 = local_1068;
    if ((int)uStack_1060 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140212e80(&local_1050,L"\n\t\t%s:\t\t%s",L"PixelShader",puVar2);
    if (local_1068 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_1068 = (undefined2 *)0x0;
    uStack_1060 = 0;
    FUN_1407c8a86(*(longlong *)(param_1 + 0x28) + 0x88,0x14,&local_1068);
    puVar2 = local_1068;
    if ((int)uStack_1060 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140212e80(&local_1050,L"\n\t\t%s:\t\t%s",L"GeometryShader",puVar2);
    if (local_1068 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_1068 = (undefined2 *)0x0;
    uStack_1060 = 0;
    FUN_1407c8a86(*(longlong *)(param_1 + 0x18) + 0x88,0x14,&local_1068);
    puVar2 = local_1068;
    if ((int)uStack_1060 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140212e80(&local_1050,L"\n\t\t%s:\t\t%s",L"MeshShader",puVar2);
    if (local_1068 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_1068 = (undefined2 *)0x0;
    uStack_1060 = 0;
    FUN_1407c8a86(*(longlong *)(param_1 + 0x20) + 0x88,0x14,&local_1068);
    puVar2 = local_1068;
    if ((int)uStack_1060 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140212e80(&local_1050,L"\n\t\t%s:\t\t%s",L"AmplificationShader",puVar2);
    if (local_1068 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_1038 == '\x01') {
    FUN_1400020a8(local_1050);
  }
  if ((local_30 ^ (ulonglong)auStack_1098) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365f3d0 FUN_14365f3d0 body=486 status=ok
// SIG undefined FUN_14365f3d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14365f3d0(longlong param_1,int param_2,longlong *param_3,int param_4)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_1088 [32];
  undefined2 *local_1068;
  undefined8 uStack_1060;
  undefined1 *local_1050;
  undefined1 *local_1048;
  ulonglong *local_1040;
  char local_1038;
  undefined1 local_1030 [4096];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1088;
  local_1050 = local_1030;
  local_1038 = '\0';
  local_1040 = &local_30;
  local_1048 = local_1050;
  FUN_140212e80(&local_1050,L"\n\nPSO PRECACHING MISS:");
  FUN_140212e80(&local_1050,L"\n\tType:\t\t\t\t\t%s",L"Compute");
  if (param_2 - 1U < 6) {
    pwVar1 = (wchar_t *)(&PTR_u_Precaching_14aa5a8e8)[param_2 - 1U];
  }
  else {
    pwVar1 = L"Unknown";
  }
  FUN_140212e80(&local_1050,L"\n\tPSOPrecachingState:\t\t%s",pwVar1);
  if (param_3 == (longlong *)0x0) {
    FUN_140212e80(&local_1050,L"\n\tMaterial:\t\t\t\t%s",L"Unknown");
  }
  else {
    (**(code **)(*param_3 + 0x378))(param_3,&local_1068);
    puVar2 = local_1068;
    if ((int)uStack_1060 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140212e80(&local_1050,L"\n\tMaterial:\t\t\t\t%s",puVar2);
    if (local_1068 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (param_4 == -1) {
    pwVar1 = L"Unknown";
  }
  else {
    pwVar1 = *(wchar_t **)
              (&DAT_14cafe438 + (longlong)param_4 * 0x10 + (ulonglong)(2 < DAT_14c760db4) * 0x540);
  }
  FUN_140212e80(&local_1050,L"\n\tPassName:\t\t\t\t%s",pwVar1);
  local_1068 = (undefined2 *)0x0;
  uStack_1060 = 0;
  FUN_1407c8a86(param_1 + 0x88,0x14,&local_1068);
  puVar2 = local_1068;
  if ((int)uStack_1060 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140212e80(&local_1050,L"\n\tCompute Shader Hash:\t%s",puVar2);
  if (local_1068 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1038 == '\x01') {
    FUN_1400020a8(local_1050);
  }
  if ((local_30 ^ (ulonglong)auStack_1088) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365f5b8 FUN_14365f5b8 body=97 status=ok
// SIG undefined FUN_14365f5b8(void)

void FUN_14365f5b8(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    iVar1 = *(int *)(param_3 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_3 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_3 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_3 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = param_2;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 14365f61a FUN_14365f61a body=85 status=ok
// SIG undefined FUN_14365f61a(void)

void FUN_14365f61a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_2 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_2 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 14365f670 FUN_14365f670 body=336 status=ok
// SIG undefined FUN_14365f670(void)

void FUN_14365f670(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1417e9bbe(param_1,&local_28,param_2);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_28) {
    lVar4 = *plVar7;
    *plVar7 = local_28;
    local_28 = 0;
    if (lVar4 == 0) goto LAB_14365f771;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_28;
  if (local_28 != 0) {
    LOCK();
    puVar1 = (uint *)(local_28 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_28 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_28 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_14365f771:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14365f7c2 FUN_14365f7c2 body=223 status=ok
// SIG undefined FUN_14365f7c2(void)

void FUN_14365f7c2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x38),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x3c);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x3c) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x3c) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14365f8a2 FUN_14365f8a2 body=48 status=ok
// SIG undefined FUN_14365f8a2(void)

longlong FUN_14365f8a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14365f8d2 FUN_14365f8d2 body=48 status=ok
// SIG undefined FUN_14365f8d2(void)

longlong FUN_14365f8d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14365f902 FUN_14365f902 body=48 status=ok
// SIG undefined FUN_14365f902(void)

longlong FUN_14365f902(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_140df8d14(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14365fa6a FUN_14365fa6a body=282 status=ok
// SIG undefined FUN_14365fa6a(void)

undefined8 * FUN_14365fa6a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 14365fb84 FUN_14365fb84 body=282 status=ok
// SIG undefined FUN_14365fb84(void)

undefined8 * FUN_14365fb84(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 14365fc9e FUN_14365fc9e body=282 status=ok
// SIG undefined FUN_14365fc9e(void)

undefined8 * FUN_14365fc9e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 14365fdbe FUN_14365fdbe body=282 status=ok
// SIG undefined FUN_14365fdbe(void)

undefined8 * FUN_14365fdbe(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 14365fed8 FUN_14365fed8 body=201 status=ok
// SIG undefined FUN_14365fed8(void)

void FUN_14365fed8(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  plVar3 = (longlong *)*param_1;
  lVar8 = param_1[2];
  *plVar3 = param_1[1];
  lVar4 = DAT_14cb0d0e0;
  iVar1 = *(int *)(lVar8 + 8);
  lVar8 = 0xf0;
  if (1 < (longlong)iVar1) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar7 = 0;
    }
    else if (iVar2 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar7 = 1;
    }
    if ((*(int *)(lVar4 + uVar7 * 4) != 0) &&
       (lVar8 = 0x40,
       (&DAT_14ca814b8)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar1 * 2) * 0xf] == 1)) {
      lVar8 = 0xf0;
    }
  }
  plVar3[2] = lVar8 + *plVar3;
  return;
}



// FUNCTION 14365ffac FUN_14365ffac body=12 status=ok
// SIG undefined FUN_14365ffac(void)

void FUN_14365ffac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014365ffb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14365ffb8 FUN_14365ffb8 body=29 status=ok
// SIG undefined FUN_14365ffb8(void)

undefined8 FUN_14365ffb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14365ffd6 FUN_14365ffd6 body=282 status=ok
// SIG undefined FUN_14365ffd6(void)

undefined8 * FUN_14365ffd6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 1436600f0 FUN_1436600f0 body=288 status=ok
// SIG undefined FUN_1436600f0(void)

void FUN_1436600f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x15];
  lVar9 = param_1[0x17];
  *plVar4 = param_1[0x16];
  lVar5 = DAT_14cb0d0e0;
  iVar2 = *(int *)(lVar9 + 8);
  lVar9 = 0xf0;
  if (1 < (longlong)iVar2) {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar8 = 1;
    }
    if ((*(int *)(lVar5 + uVar8 * 4) != 0) &&
       (lVar9 = 0x40,
       (&DAT_14ca814b8)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar2 * 2) * 0xf] == 1)) {
      lVar9 = 0xf0;
    }
  }
  plVar4[2] = lVar9 + *plVar4;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436601e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143660210 FUN_143660210 body=1612 status=ok
// SIG undefined FUN_143660210(void)

void FUN_143660210(longlong param_1,int param_2,double *param_3,double *param_4,longlong *param_5)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  float *pfVar20;
  int iVar21;
  uint uVar22;
  double *pdVar23;
  uint in_R10D;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 auVar32 [16];
  double dVar34;
  double dVar36;
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_198 [32];
  longlong *local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar26 = *(longlong *)(param_1 + 0x60);
  lVar16 = (longlong)param_2;
  local_170 = param_1;
  if (*(int *)(lVar26 + 4 + lVar16 * 8) != 0) {
    pfVar20 = *(float **)(param_1 + 0x80);
    pdVar23 = (double *)(longlong)(int)pfVar20[lVar16 * 4 + 2];
    if (pdVar23 != (double *)0x0) {
      pfVar18 = *(float **)(pfVar20 + lVar16 * 4);
      pfVar20 = pfVar18 + (longlong)pdVar23 * 0x2c;
      dVar37 = *param_4;
      dVar38 = param_4[1];
      do {
        fVar42 = pfVar18[3];
        lVar26 = -(ulonglong)
                  ((double)fVar42 + param_4[5] <
                  ABS((double)(float)((ulonglong)*(undefined8 *)pfVar18 >> 0x20) - dVar38));
        lVar27 = -(ulonglong)(param_4[7] + 0.0 < ABS(0.0 - param_4[3]));
        auVar10._8_4_ = (int)lVar26;
        auVar10._0_8_ =
             -(ulonglong)
              ((double)fVar42 + param_4[4] < ABS((double)(float)*(undefined8 *)pfVar18 - dVar37));
        auVar10._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        uVar22 = movmskpd((int)pdVar23,auVar10);
        pdVar23 = (double *)(ulonglong)uVar22;
        auVar40._8_4_ = (int)lVar27;
        auVar40._0_8_ =
             -(ulonglong)((double)pfVar18[3] + param_4[6] < ABS((double)pfVar18[2] - param_4[2]));
        auVar40._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
        iVar24 = movmskpd(in_R10D,auVar40);
        in_R10D = iVar24 << 2 | uVar22;
        if (in_R10D == 0) {
          pdVar23 = (double *)param_5[4];
          fVar41 = (float)(((double)pfVar18[2] - pdVar23[2]) * ((double)pfVar18[2] - pdVar23[2]) +
                          ((double)*pfVar18 - *pdVar23) * ((double)*pfVar18 - *pdVar23) +
                          ((double)pfVar18[1] - pdVar23[1]) * ((double)pfVar18[1] - pdVar23[1]));
          if (fVar41 < fVar42 * fVar42) {
            fVar42 = 1.0 / (fVar42 * fVar42);
            fVar42 = (1.0 - fVar41 * fVar42) * fVar42;
            local_b8 = 0;
            uStack_b0 = 0;
            local_c8 = 0.0;
            dStack_c0 = 0.0;
            local_d8 = 0.0;
            uStack_d0 = 0.0;
            lVar26 = 0x10;
            do {
              pfVar1 = (float *)((longlong)pfVar18 + lVar26);
              fVar41 = pfVar1[1];
              fVar43 = pfVar1[2];
              fVar11 = pfVar1[3];
              *(float *)((longlong)&local_e8 + lVar26) = *pfVar1 * fVar42;
              *(float *)((longlong)&local_e8 + lVar26 + 4) = fVar41 * fVar42;
              *(float *)((longlong)&uStack_e0 + lVar26) = fVar43 * fVar42;
              *(float *)((longlong)&uStack_e0 + lVar26 + 4) = fVar11 * fVar42;
              lVar26 = lVar26 + 0x10;
            } while (lVar26 != 0x40);
            local_148._8_8_ = uStack_b0;
            local_148._0_8_ = local_b8;
            local_158 = local_c8;
            dStack_150 = dStack_c0;
            local_168 = local_d8;
            uStack_160 = uStack_d0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_c8 = 0.0;
            dStack_c0 = 0.0;
            local_d8 = 0.0;
            uStack_d0 = 0.0;
            lVar26 = 0x40;
            do {
              pfVar1 = (float *)((longlong)pfVar18 + lVar26);
              fVar41 = pfVar1[1];
              fVar43 = pfVar1[2];
              fVar11 = pfVar1[3];
              *(float *)((longlong)&local_118 + lVar26) = *pfVar1 * fVar42;
              *(float *)((longlong)&local_118 + lVar26 + 4) = fVar41 * fVar42;
              *(float *)((longlong)&uStack_110 + lVar26) = fVar43 * fVar42;
              *(float *)((longlong)&uStack_110 + lVar26 + 4) = fVar11 * fVar42;
              lVar26 = lVar26 + 0x10;
            } while (lVar26 != 0x70);
            local_118 = local_b8;
            uStack_110 = uStack_b0;
            local_128 = local_c8;
            dStack_120 = dStack_c0;
            uStack_130 = uStack_d0;
            local_138 = (undefined1  [8])local_d8;
            local_b8 = 0;
            uStack_b0 = 0;
            local_c8 = 0.0;
            dStack_c0 = 0.0;
            local_d8 = 0.0;
            uStack_d0 = 0.0;
            lVar26 = 0;
            do {
              pfVar1 = (float *)((longlong)pfVar18 + lVar26 + 0x70);
              fVar41 = pfVar1[1];
              fVar43 = pfVar1[2];
              fVar11 = pfVar1[3];
              *(float *)((longlong)&local_d8 + lVar26) = *pfVar1 * fVar42;
              *(float *)((longlong)&local_d8 + lVar26 + 4) = fVar41 * fVar42;
              *(float *)((longlong)&uStack_d0 + lVar26) = fVar43 * fVar42;
              *(float *)((longlong)&uStack_d0 + lVar26 + 4) = fVar11 * fVar42;
              lVar26 = lVar26 + 0x10;
            } while (lVar26 != 0x30);
            local_e8 = local_b8;
            uStack_e0 = uStack_b0;
            local_f8 = local_c8;
            uStack_f0 = dStack_c0;
            local_108 = local_d8;
            uStack_100 = uStack_d0;
            lVar26 = *param_5;
            lVar27 = 0;
            do {
              fVar41 = *(float *)((longlong)&local_168 + lVar27 + 4);
              fVar43 = *(float *)((longlong)&uStack_160 + lVar27);
              fVar11 = *(float *)((longlong)&uStack_160 + lVar27 + 4);
              pfVar1 = (float *)(lVar26 + lVar27);
              fVar12 = pfVar1[1];
              fVar13 = pfVar1[2];
              fVar14 = pfVar1[3];
              pfVar2 = (float *)(lVar26 + lVar27);
              *pfVar2 = *(float *)((longlong)&local_168 + lVar27) + *pfVar1;
              pfVar2[1] = fVar41 + fVar12;
              pfVar2[2] = fVar43 + fVar13;
              pfVar2[3] = fVar11 + fVar14;
              lVar27 = lVar27 + 0x10;
            } while (lVar27 != 0x30);
            lVar27 = 0x30;
            do {
              fVar41 = *(float *)((longlong)&local_168 + lVar27 + 4);
              fVar43 = *(float *)((longlong)&uStack_160 + lVar27);
              fVar11 = *(float *)((longlong)&uStack_160 + lVar27 + 4);
              pfVar1 = (float *)(lVar26 + lVar27);
              fVar12 = pfVar1[1];
              fVar13 = pfVar1[2];
              fVar14 = pfVar1[3];
              pfVar2 = (float *)(lVar26 + lVar27);
              *pfVar2 = *(float *)((longlong)&local_168 + lVar27) + *pfVar1;
              pfVar2[1] = fVar41 + fVar12;
              pfVar2[2] = fVar43 + fVar13;
              pfVar2[3] = fVar11 + fVar14;
              lVar27 = lVar27 + 0x10;
            } while (lVar27 != 0x60);
            lVar27 = 0x60;
            do {
              fVar41 = *(float *)((longlong)&local_168 + lVar27 + 4);
              fVar43 = *(float *)((longlong)&uStack_160 + lVar27);
              fVar11 = *(float *)((longlong)&uStack_160 + lVar27 + 4);
              pfVar1 = (float *)(lVar26 + lVar27);
              fVar12 = pfVar1[1];
              fVar13 = pfVar1[2];
              fVar14 = pfVar1[3];
              pfVar2 = (float *)(lVar26 + lVar27);
              *pfVar2 = *(float *)((longlong)&local_168 + lVar27) + *pfVar1;
              pfVar2[1] = fVar41 + fVar12;
              pfVar2[2] = fVar43 + fVar13;
              pfVar2[3] = fVar11 + fVar14;
              lVar27 = lVar27 + 0x10;
            } while (lVar27 != 0x90);
            bVar3 = *(byte *)(pfVar18 + 0x28);
            fVar41 = (float)*(byte *)((longlong)pfVar18 + 0xa1) / 255.0;
            fVar43 = (float)*(byte *)((longlong)pfVar18 + 0xa2) / 255.0;
            dVar37 = (double)fVar42;
            pdVar23 = (double *)param_5[1];
            *pdVar23 = (double)(fVar43 + fVar43 + -1.0) * dVar37 + *pdVar23;
            pdVar23[1] = (double)(fVar41 + fVar41 + -1.0) * dVar37 + pdVar23[1];
            pdVar23[2] = (double)((float)bVar3 / 255.0 + (float)bVar3 / 255.0 + -1.0) * dVar37 +
                         pdVar23[2];
            *(float *)param_5[2] = pfVar18[0x29] * fVar42 + *(float *)param_5[2];
            pdVar23 = (double *)param_5[3];
            *(float *)pdVar23 = fVar42 + *(float *)pdVar23;
            dVar37 = *param_4;
            dVar38 = param_4[1];
            in_R10D = 0x90;
          }
        }
        pfVar18 = pfVar18 + 0x2c;
      } while (pfVar18 != pfVar20);
      lVar26 = *(longlong *)(param_1 + 0x60);
    }
    iVar24 = *(int *)(lVar26 + lVar16 * 8);
    if (iVar24 != -1) {
      dVar34 = SUB168(*(undefined1 (*) [16])(param_3 + 2),0);
      dVar36 = SUB168(*(undefined1 (*) [16])(param_3 + 2),8);
      dVar38 = param_3[8];
      dVar37 = param_3[8];
      auVar39._8_8_ = dVar37;
      auVar39._0_8_ = dVar38;
      dVar33 = param_3[9];
      dVar29 = param_3[9];
      lVar16 = -(ulonglong)((param_3[1] + dVar29) - dVar37 < param_4[1] + param_4[5]);
      lVar27 = -(ulonglong)((dVar36 + dVar29) - dVar37 < param_4[3] + param_4[7]);
      auVar30._8_8_ = -(ulonglong)(param_4[1] - param_4[5] <= (param_3[1] - dVar29) + dVar37);
      auVar30._0_8_ = -(ulonglong)(*param_4 - param_4[4] <= (*param_3 - dVar33) + dVar38);
      lVar28 = -(ulonglong)(param_4[3] - param_4[7] <= (dVar36 - dVar29) + dVar37);
      auVar8._8_4_ = (int)lVar16;
      auVar8._0_8_ = -(ulonglong)((*param_3 + dVar33) - dVar38 < *param_4 + param_4[4]);
      auVar8._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
      iVar15 = movmskpd(param_2,auVar8);
      auVar9._8_4_ = (int)lVar27;
      auVar9._0_8_ = -(ulonglong)((dVar34 + dVar33) - dVar38 < param_4[2] + param_4[6]);
      auVar9._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      uVar22 = movmskpd((int)lVar26,auVar9);
      iVar17 = movmskpd(uVar22 & 1,auVar30);
      auVar4._8_4_ = (int)lVar28;
      auVar4._0_8_ = -(ulonglong)(param_4[2] - param_4[6] <= (dVar34 - dVar33) + dVar38);
      auVar4._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      iVar19 = movmskpd((int)pfVar20,auVar4);
      uVar25 = 0;
      auVar40 = pmovsxbd(auVar39,0x8040201);
      iVar21 = 0;
      do {
        if ((uVar25 ^ 0xffffffc7 | iVar19 * 0x20 + iVar17 * 8 | iVar15 + (uVar22 & 1) * 4) ==
            0xffffffff) {
          auVar31._4_4_ = iVar21;
          auVar31._0_4_ = iVar21;
          auVar31._8_4_ = iVar21;
          auVar31._12_4_ = iVar21;
          auVar31 = auVar31 & auVar40;
          dVar38 = param_3[9];
          dVar37 = param_3[9];
          dVar34 = (double)(float)-(uint)(auVar31._0_4_ == auVar40._0_4_);
          dVar36 = (double)(float)-(uint)(auVar31._4_4_ == auVar40._4_4_);
          dVar29 = (double)(float)-(uint)(auVar31._8_4_ == auVar40._8_4_);
          dVar33 = (double)(float)-(uint)(auVar31._12_4_ == auVar40._12_4_);
          uVar7 = (ulonglong)dVar37 & (ulonglong)dVar36;
          auVar35._0_8_ = ~(ulonglong)dVar34 & (ulonglong)-dVar38;
          auVar35._8_8_ = ~(ulonglong)dVar36 & (ulonglong)-dVar37;
          auVar6._8_4_ = (int)uVar7;
          auVar6._0_8_ = (ulonglong)dVar38 & (ulonglong)dVar34;
          auVar6._12_4_ = (int)(uVar7 >> 0x20);
          uVar7 = (ulonglong)dVar37 & (ulonglong)dVar33;
          auVar32._0_8_ = ~(ulonglong)dVar29 & (ulonglong)-dVar38;
          auVar32._8_8_ = ~(ulonglong)dVar33 & (ulonglong)-dVar37;
          auVar5._8_4_ = (int)uVar7;
          auVar5._0_8_ = (ulonglong)dVar38 & (ulonglong)dVar29;
          auVar5._12_4_ = (int)(uVar7 >> 0x20);
          local_168 = SUB168(auVar35 | auVar6,0) + *param_3;
          uStack_160 = SUB168(auVar35 | auVar6,8) + param_3[1];
          local_158 = (SUB168(auVar32 | auVar5,0) + param_3[2]) * 1.0;
          dStack_150 = (SUB168(auVar32 | auVar5,8) + param_3[3]) * 0.0;
          dStack_120 = param_3[8];
          local_148._8_4_ = SUB84(dStack_120,0);
          local_148._0_8_ = dStack_120;
          local_148._12_4_ = (int)((ulonglong)dStack_120 >> 0x20);
          unique0x100001ce = SUB84(dStack_120 * 0.0,0);
          local_138 = (undefined1  [8])(dStack_120 * 1.0);
          unique0x100001d2 = (int)((ulonglong)(dStack_120 * 0.0) >> 0x20);
          local_128 = dStack_120 * 0.5 * 1.0625;
          dStack_120 = dStack_120 - local_128;
          local_178 = param_5;
          FUN_143660210(local_170,iVar24 + iVar21,&local_168,param_4);
        }
        iVar21 = iVar21 + 1;
        uVar25 = uVar25 + 9;
      } while (iVar21 != 8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14366085e FUN_14366085e body=867 status=ok
// SIG undefined FUN_14366085e(void)

void FUN_14366085e(longlong param_1,int param_2,double *param_3,double *param_4)

{
  float fVar1;
  double dVar2;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  int iVar9;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_138 [40];
  longlong local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  double local_c8;
  double local_c0;
  ulonglong local_a0;
  double dVar3;
  ulonglong uVar10;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar10 = *(ulonglong *)(param_1 + 0x60);
  lVar17 = (longlong)param_2;
  if (*(int *)(uVar10 + 4 + lVar17 * 8) != 0) {
    uVar13 = *(ulonglong *)(param_1 + 0x80);
    lVar15 = lVar17 * 0x10;
    lVar16 = (longlong)*(int *)(uVar13 + 8 + lVar15);
    if (lVar16 != 0) {
      puVar19 = *(undefined8 **)(uVar13 + lVar15);
      lVar16 = lVar16 * 0xb0;
      do {
        fVar1 = *(float *)((longlong)puVar19 + 0xc);
        lVar21 = -(ulonglong)
                  ((double)fVar1 + param_4[5] <
                  ABS((double)(float)((ulonglong)*puVar19 >> 0x20) - param_4[1]));
        auVar28._8_8_ = -(ulonglong)(param_4[7] + 0.0 < ABS(0.0 - param_4[3]));
        auVar28._0_8_ =
             -(ulonglong)
              ((double)fVar1 + param_4[6] < ABS((double)*(float *)(puVar19 + 1) - param_4[2]));
        auVar31._8_4_ = (int)lVar21;
        auVar31._0_8_ =
             -(ulonglong)((double)fVar1 + param_4[4] < ABS((double)(float)*puVar19 - *param_4));
        auVar31._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        uVar8 = movmskpd((int)uVar10,auVar31);
        uVar10 = (ulonglong)uVar8;
        iVar11 = movmskpd((int)uVar13,auVar28);
        uVar8 = iVar11 << 2 | uVar8;
        uVar13 = (ulonglong)uVar8;
        if (uVar8 == 0) {
          lVar21 = (longlong)(int)DAT_14cafa770;
          uVar8 = DAT_14cafa770 + 1;
          if (DAT_14cafa774 < uVar8) {
            uVar13 = (ulonglong)DAT_14cafa770;
            DAT_14cafa770 = uVar8;
            local_110 = lVar17;
            FUN_147cc22c0();
            lVar17 = local_110;
            uVar8 = DAT_14cafa770;
          }
          DAT_14cafa770 = uVar8;
          uVar10 = DAT_14cafa768;
          *(undefined8 **)(DAT_14cafa768 + lVar21 * 8) = puVar19;
        }
        puVar19 = puVar19 + 0x16;
        lVar16 = lVar16 + -0xb0;
      } while (lVar16 != 0);
      uVar10 = *(ulonglong *)(param_1 + 0x60);
    }
    iVar11 = *(int *)(uVar10 + lVar17 * 8);
    if (iVar11 != -1) {
      dVar27 = SUB168(*(undefined1 (*) [16])(param_3 + 2),0);
      dVar29 = SUB168(*(undefined1 (*) [16])(param_3 + 2),8);
      dVar2 = param_3[8];
      dVar3 = param_3[8];
      auVar30._8_8_ = dVar3;
      auVar30._0_8_ = dVar2;
      dVar26 = param_3[9];
      dVar22 = param_3[9];
      lVar17 = -(ulonglong)((param_3[1] + dVar22) - dVar3 < param_4[1] + param_4[5]);
      lVar16 = -(ulonglong)((dVar29 + dVar22) - dVar3 < param_4[3] + param_4[7]);
      auVar23._8_8_ = -(ulonglong)(param_4[1] - param_4[5] <= (param_3[1] - dVar22) + dVar3);
      auVar23._0_8_ = -(ulonglong)(*param_4 - param_4[4] <= (*param_3 - dVar26) + dVar2);
      lVar21 = -(ulonglong)(param_4[3] - param_4[7] <= (dVar29 - dVar22) + dVar3);
      auVar6._8_4_ = (int)lVar17;
      auVar6._0_8_ = -(ulonglong)((*param_3 + dVar26) - dVar2 < *param_4 + param_4[4]);
      auVar6._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      iVar9 = movmskpd((int)uVar10,auVar6);
      auVar7._8_4_ = (int)lVar16;
      auVar7._0_8_ = -(ulonglong)((dVar27 + dVar26) - dVar2 < param_4[2] + param_4[6]);
      auVar7._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
      uVar8 = movmskpd((int)uVar13,auVar7);
      iVar12 = movmskpd(uVar8 & 1,auVar23);
      auVar4._8_4_ = (int)lVar21;
      auVar4._0_8_ = -(ulonglong)(param_4[2] - param_4[6] <= (dVar27 - dVar26) + dVar2);
      auVar4._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar14 = movmskpd((int)lVar15,auVar4);
      uVar18 = 0;
      auVar31 = pmovsxbd(auVar30,0x8040201);
      iVar20 = 0;
      do {
        if ((uVar18 ^ 0xffffffc7 | iVar14 * 0x20 + iVar12 * 8 | iVar9 + (uVar8 & 1) * 4) ==
            0xffffffff) {
          auVar24._4_4_ = iVar20;
          auVar24._0_4_ = iVar20;
          auVar24._8_4_ = iVar20;
          auVar24._12_4_ = iVar20;
          auVar24 = auVar24 & auVar31;
          dVar2 = param_3[9];
          dVar3 = param_3[9];
          dVar27 = (double)(float)-(uint)(auVar24._0_4_ == auVar31._0_4_);
          dVar29 = (double)(float)-(uint)(auVar24._4_4_ == auVar31._4_4_);
          dVar22 = (double)(float)-(uint)(auVar24._8_4_ == auVar31._8_4_);
          dVar26 = (double)(float)-(uint)(auVar24._12_4_ == auVar31._12_4_);
          uVar10 = (ulonglong)dVar3 & (ulonglong)dVar26;
          auVar25._0_8_ = ~(ulonglong)dVar22 & (ulonglong)-dVar2;
          auVar25._8_8_ = ~(ulonglong)dVar26 & (ulonglong)-dVar3;
          auVar5._8_4_ = (int)uVar10;
          auVar5._0_8_ = (ulonglong)dVar2 & (ulonglong)dVar22;
          auVar5._12_4_ = (int)(uVar10 >> 0x20);
          local_108 = (double)(~(ulonglong)dVar27 & (ulonglong)-dVar2 |
                              (ulonglong)dVar2 & (ulonglong)dVar27) + *param_3;
          dStack_100 = (double)(~(ulonglong)dVar29 & (ulonglong)-dVar3 |
                               (ulonglong)dVar3 & (ulonglong)dVar29) + param_3[1];
          local_f8 = (SUB168(auVar25 | auVar5,0) + param_3[2]) * 1.0;
          dStack_f0 = (SUB168(auVar25 | auVar5,8) + param_3[3]) * 0.0;
          local_c0 = param_3[8];
          local_e8._8_4_ = SUB84(local_c0,0);
          local_e8._0_8_ = local_c0;
          local_e8._12_4_ = (int)((ulonglong)local_c0 >> 0x20);
          local_d8._8_4_ = SUB84(local_c0 * 0.0,0);
          local_d8._0_8_ = local_c0 * 1.0;
          local_d8._12_4_ = (int)((ulonglong)(local_c0 * 0.0) >> 0x20);
          local_c8 = local_c0 * 0.5 * 1.0625;
          local_c0 = local_c0 - local_c8;
          FUN_14366085e(param_1,iVar11 + iVar20,&local_108,param_4);
        }
        iVar20 = iVar20 + 1;
        uVar18 = uVar18 + 9;
      } while (iVar20 != 8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143660bf0 FUN_143660bf0 body=56 status=ok
// SIG undefined FUN_143660bf0(void)

int FUN_143660bf0(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x40000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 2;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,4);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 143660c40 FUN_143660c40 body=260 status=ok
// SIG undefined FUN_143660c40(void)

void FUN_143660c40(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_1 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 8) + 0x50) + lVar5 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_1[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(&DAT_14ca85100,lVar1,0);
  puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  DAT_14ca852b8 = lVar1;
  if (DAT_14ca85108 < puVar4) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar4;
  *DAT_14ca85130 = puVar3;
  DAT_14ca85130 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(&DAT_14ca85100,lVar1,*param_1,&DAT_14cafde18,param_2);
  return;
}



// FUNCTION 143660d44 FUN_143660d44 body=74 status=ok
// SIG undefined FUN_143660d44(void)

void FUN_143660d44(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0xd4);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 8) + 0x50) + (longlong)iVar1 * 8)
    ;
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(param_1[1] + 8),iVar1,1);
    }
  }
  FUN_147cc384d(param_1,lVar2);
  return;
}



// FUNCTION 143660d8e FUN_143660d8e body=260 status=ok
// SIG undefined FUN_143660d8e(void)

void FUN_143660d8e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_1 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 8) + 0x50) + lVar5 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_1[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(&DAT_14ca85100,lVar1,0);
  puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  DAT_14ca852b8 = lVar1;
  if (DAT_14ca85108 < puVar4) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar4;
  *DAT_14ca85130 = puVar3;
  DAT_14ca85130 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(&DAT_14ca85100,lVar1,*param_1,&DAT_14cafdd90,param_2);
  return;
}



// FUNCTION 143660e92 FUN_143660e92 body=74 status=ok
// SIG undefined FUN_143660e92(void)

void FUN_143660e92(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0xd4);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 8) + 0x50) + (longlong)iVar1 * 8)
    ;
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(param_1[1] + 8),iVar1,1);
    }
  }
  FUN_147cc3a9e(param_1,lVar2);
  return;
}



// FUNCTION 143660edc FUN_143660edc body=260 status=ok
// SIG undefined FUN_143660edc(void)

void FUN_143660edc(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_1 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 8) + 0x50) + lVar5 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_1[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(&DAT_14ca85100,lVar1,0);
  puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  DAT_14ca852b8 = lVar1;
  if (DAT_14ca85108 < puVar4) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar4;
  *DAT_14ca85130 = puVar3;
  DAT_14ca85130 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(&DAT_14ca85100,lVar1,*param_1,&DAT_14cafdbf8,param_2);
  return;
}



// FUNCTION 143660fe0 FUN_143660fe0 body=74 status=ok
// SIG undefined FUN_143660fe0(void)

void FUN_143660fe0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0xd4);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 8) + 0x50) + (longlong)iVar1 * 8)
    ;
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(param_1[1] + 8),iVar1,1);
    }
  }
  FUN_147cc3e6f(param_1,lVar2);
  return;
}



// FUNCTION 143661048 FUN_143661048 body=12 status=ok
// SIG undefined FUN_143661048(void)

void FUN_143661048(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143661051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143661054 FUN_143661054 body=29 status=ok
// SIG undefined FUN_143661054(void)

undefined8 FUN_143661054(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143661072 FUN_143661072 body=282 status=ok
// SIG undefined FUN_143661072(void)

undefined8 * FUN_143661072(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 14366118c FUN_14366118c body=138 status=ok
// SIG undefined FUN_14366118c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366118c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147caf456(_DAT_000000a8,&DAT_14ca85100,_DAT_000000b0,_DAT_000000b8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147caf456(param_1[0x15],&DAT_14ca85100,param_1[0x16],param_1[0x17]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014366120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143661216 FUN_143661216 body=260 status=ok
// SIG undefined FUN_143661216(void)

void FUN_143661216(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_1 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 8) + 0x50) + lVar5 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_1[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(&DAT_14ca85100,lVar1,0);
  puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  DAT_14ca852b8 = lVar1;
  if (DAT_14ca85108 < puVar4) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar4;
  *DAT_14ca85130 = puVar3;
  DAT_14ca85130 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(&DAT_14ca85100,lVar1,*param_1,&DAT_14cafdc80,param_2);
  return;
}



// FUNCTION 14366131a FUN_14366131a body=74 status=ok
// SIG undefined FUN_14366131a(void)

void FUN_14366131a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0xd4);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 8) + 0x50) + (longlong)iVar1 * 8)
    ;
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(param_1[1] + 8),iVar1,1);
    }
  }
  FUN_147cc40c0(param_1,lVar2);
  return;
}



// FUNCTION 143661364 FUN_143661364 body=260 status=ok
// SIG undefined FUN_143661364(void)

void FUN_143661364(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_1 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 8) + 0x50) + lVar5 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_1[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(&DAT_14ca85100,lVar1,0);
  puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  DAT_14ca852b8 = lVar1;
  if (DAT_14ca85108 < puVar4) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar4;
  *DAT_14ca85130 = puVar3;
  DAT_14ca85130 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(&DAT_14ca85100,lVar1,*param_1,&DAT_14cafdd08,param_2);
  return;
}



// FUNCTION 143661468 FUN_143661468 body=74 status=ok
// SIG undefined FUN_143661468(void)

void FUN_143661468(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0xd4);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 8) + 0x50) + (longlong)iVar1 * 8)
    ;
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(param_1[1] + 8),iVar1,1);
    }
  }
  FUN_147cc4311(param_1,lVar2);
  return;
}



// FUNCTION 1436614b2 FUN_1436614b2 body=51 status=ok
// SIG undefined FUN_1436614b2(void)

void FUN_1436614b2(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001436614db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1436614f0 FUN_1436614f0 body=12 status=ok
// SIG undefined FUN_1436614f0(void)

void FUN_1436614f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436614f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436614fc FUN_1436614fc body=29 status=ok
// SIG undefined FUN_1436614fc(void)

undefined8 FUN_1436614fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14366151a FUN_14366151a body=282 status=ok
// SIG undefined FUN_14366151a(void)

undefined8 * FUN_14366151a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 143661634 FUN_143661634 body=98 status=ok
// SIG undefined FUN_143661634(void)

void FUN_143661634(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014366168c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143661696 FUN_143661696 body=288 status=ok
// SIG undefined FUN_143661696(void)

void FUN_143661696(longlong *param_1,char *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_180 [152];
  undefined **local_e8;
  longlong *local_90;
  longlong local_70;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*param_2 == '\0') {
    plVar1 = (longlong *)*param_3;
    lVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if (lVar2 != 0) {
      local_30 = (**(code **)(*plVar1 + 0x20))(plVar1);
      local_188 = CONCAT71(local_188._1_7_,1);
      local_38 = lVar2;
      FUN_147cc4872(local_180,&local_38,&local_188);
      local_188 = 0;
      FUN_147cacf85(local_180,&local_188);
      *(undefined8 *)(*param_1 + 0x38) = local_188;
      FUN_1400020a8(lVar2);
      FUN_14041e0ea(local_180);
      local_e8 = &PTR__purecall_149e35f70;
      if (local_90 != (longlong *)0x0) {
        if (*local_90 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_90);
      }
      if (local_70 != 0) {
        if (*(longlong *)(local_70 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_70);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436617d6 FUN_1436617d6 body=12 status=ok
// SIG undefined FUN_1436617d6(void)

void FUN_1436617d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436617df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436617e2 FUN_1436617e2 body=29 status=ok
// SIG undefined FUN_1436617e2(void)

undefined8 FUN_1436617e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143661800 FUN_143661800 body=29 status=ok
// SIG undefined FUN_143661800(void)

undefined8 FUN_143661800(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143661832 FUN_143661832 body=85 status=ok
// SIG undefined FUN_143661832(void)

void FUN_143661832(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa59c30;
  return;
}



// FUNCTION 143661888 FUN_143661888 body=85 status=ok
// SIG undefined FUN_143661888(void)

void FUN_143661888(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa59c30;
  return;
}



// FUNCTION 1436618de FUN_1436618de body=118 status=ok
// SIG undefined FUN_1436618de(void)

void FUN_1436618de(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa59c30;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143661945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143661954 FUN_143661954 body=81 status=ok
// SIG undefined FUN_143661954(void)

void FUN_143661954(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436619a6 FUN_1436619a6 body=83 status=ok
// SIG undefined FUN_1436619a6(void)

undefined8 FUN_1436619a6(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436619fa FUN_1436619fa body=29 status=ok
// SIG undefined FUN_1436619fa(void)

undefined8 FUN_1436619fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143661a2c FUN_143661a2c body=85 status=ok
// SIG undefined FUN_143661a2c(void)

void FUN_143661a2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa59ca0;
  return;
}



// FUNCTION 143661a82 FUN_143661a82 body=85 status=ok
// SIG undefined FUN_143661a82(void)

void FUN_143661a82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa59ca0;
  return;
}



// FUNCTION 143661ad8 FUN_143661ad8 body=118 status=ok
// SIG undefined FUN_143661ad8(void)

void FUN_143661ad8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa59ca0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143661b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143661b4e FUN_143661b4e body=81 status=ok
// SIG undefined FUN_143661b4e(void)

void FUN_143661b4e(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143661ba0 FUN_143661ba0 body=83 status=ok
// SIG undefined FUN_143661ba0(void)

undefined8 FUN_143661ba0(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143661bf4 FUN_143661bf4 body=29 status=ok
// SIG undefined FUN_143661bf4(void)

undefined8 FUN_143661bf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143661c26 FUN_143661c26 body=85 status=ok
// SIG undefined FUN_143661c26(void)

void FUN_143661c26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa59d10;
  return;
}



// FUNCTION 143661c7c FUN_143661c7c body=85 status=ok
// SIG undefined FUN_143661c7c(void)

void FUN_143661c7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa59d10;
  return;
}



// FUNCTION 143661cd2 FUN_143661cd2 body=118 status=ok
// SIG undefined FUN_143661cd2(void)

void FUN_143661cd2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa59d10;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143661d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143661d48 FUN_143661d48 body=81 status=ok
// SIG undefined FUN_143661d48(void)

void FUN_143661d48(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143661d9a FUN_143661d9a body=83 status=ok
// SIG undefined FUN_143661d9a(void)

undefined8 FUN_143661d9a(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143661e0a FUN_143661e0a body=12 status=ok
// SIG undefined FUN_143661e0a(void)

void FUN_143661e0a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143661e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143661e16 FUN_143661e16 body=29 status=ok
// SIG undefined FUN_143661e16(void)

undefined8 FUN_143661e16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143661e34 FUN_143661e34 body=282 status=ok
// SIG undefined FUN_143661e34(void)

undefined8 * FUN_143661e34(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 143661f4e FUN_143661f4e body=122 status=ok
// SIG undefined FUN_143661f4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143661f4e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147cbbd22(_DAT_000000a8,DAT_000000b0,DAT_000000b1);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147cbbd22(param_1[0x15],*(undefined1 *)(param_1 + 0x16),
                *(undefined1 *)((longlong)param_1 + 0xb1));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143661fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143661fe8 FUN_143661fe8 body=12 status=ok
// SIG undefined FUN_143661fe8(void)

void FUN_143661fe8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143661ff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143661ff4 FUN_143661ff4 body=29 status=ok
// SIG undefined FUN_143661ff4(void)

undefined8 FUN_143661ff4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143662012 FUN_143662012 body=282 status=ok
// SIG undefined FUN_143662012(void)

undefined8 * FUN_143662012(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 143662174 FUN_143662174 body=98 status=ok
// SIG undefined FUN_143662174(void)

void FUN_143662174(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(uint *)(param_1 + 1) != (uint)*(byte *)(lVar1 + 0x80)) {
    *(char *)(lVar1 + 0x80) = (char)*(uint *)(param_1 + 1);
    if (*(longlong *)(lVar1 + 0x218) != 0) {
      (**(code **)(**(longlong **)(lVar1 + 0x210) + 0x4c0))();
                    /* WARNING: Could not recover jumptable at 0x0001436621cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar1 + 0x210) + 0x4b8))
                (*(longlong **)(lVar1 + 0x210),*(undefined8 *)(lVar1 + 0x218),8);
      return;
    }
  }
  return;
}



// FUNCTION 1436621e0 FUN_1436621e0 body=12 status=ok
// SIG undefined FUN_1436621e0(void)

void FUN_1436621e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436621e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}


