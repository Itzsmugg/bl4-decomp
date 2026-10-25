// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1445b4dde FUN_1445b4dde body=758 status=ok
// SIG undefined FUN_1445b4dde(void)

void FUN_1445b4dde(longlong param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar9,&local_38);
            goto LAB_1445b4fb8;
          }
        }
        _Src = (longlong *)(lVar9 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar9,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar9);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1445b4fb8:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar9 = local_38 + 0x28;
  if (local_38 == 0) {
    lVar9 = 0;
  }
  uVar6 = Discord_AdditionalContent_Equals(param_1 + 0x28,lVar9);
  *param_3 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b50d5 FUN_1445b50d5 body=47 status=ok
// SIG undefined FUN_1445b50d5(void)

longlong FUN_1445b50d5(void)

{
  if (DAT_14cc239a8 == 0) {
    FUN_14000fc22(&DAT_14cc239a8,&PTR_FUN_14bdf9d80);
  }
  return DAT_14cc239a8;
}



// FUNCTION 1445b5104 FUN_1445b5104 body=46 status=ok
// SIG undefined FUN_1445b5104(void)

void FUN_1445b5104(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_AdditionalContent_Init(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}



// FUNCTION 1445b5132 FUN_1445b5132 body=47 status=ok
// SIG undefined FUN_1445b5132(void)

longlong FUN_1445b5132(void)

{
  if (DAT_14cc239b0 == 0) {
    FUN_14000fc22(&DAT_14cc239b0,&PTR_FUN_14bdf9e18);
  }
  return DAT_14cc239b0;
}



// FUNCTION 1445b5162 FUN_1445b5162 body=737 status=ok
// SIG undefined FUN_1445b5162(void)

void FUN_1445b5162(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  uStack_28 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_21 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x38);
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_29);
            goto LAB_1445b5330;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_29,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_29,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_29,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_29 = (undefined1)uVar2;
      uStack_28 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_29);
    }
  }
LAB_1445b5330:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_AdditionalContent_SetCount(param_1 + 0x28,local_29);
  if ((CONCAT17(uStack_21,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b5444 FUN_1445b5444 body=47 status=ok
// SIG undefined FUN_1445b5444(void)

longlong FUN_1445b5444(void)

{
  if (DAT_14cc239b8 == 0) {
    FUN_14000fc22(&DAT_14cc239b8,&PTR_FUN_14bdf9ea8);
  }
  return DAT_14cc239b8;
}



// FUNCTION 1445b5474 FUN_1445b5474 body=821 status=ok
// SIG undefined FUN_1445b5474(void)

void FUN_1445b5474(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *_Src;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  void **_Src_00;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar8,&local_38);
            goto LAB_1445b5645;
          }
        }
        _Src_00 = (void **)(lVar8 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar8,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar8);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(void **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1445b5645:
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar8 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar8 * 2);
  }
  FUN_1445ec12e(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b57aa FUN_1445b57aa body=47 status=ok
// SIG undefined FUN_1445b57aa(void)

longlong FUN_1445b57aa(void)

{
  if (DAT_14cc239c0 == 0) {
    FUN_14000fc22(&DAT_14cc239c0,&PTR_FUN_14bdf9f80);
  }
  return DAT_14cc239c0;
}



// FUNCTION 1445b57da FUN_1445b57da body=738 status=ok
// SIG undefined FUN_1445b57da(void)

void FUN_1445b57da(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  uStack_28 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_21 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x38);
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_29);
            goto LAB_1445b59a8;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_29,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_29,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_29,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_29 = (undefined1)uVar2;
      uStack_28 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_29);
    }
  }
LAB_1445b59a8:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_AdditionalContent_SetType(param_1 + 0x28,local_29);
  if ((CONCAT17(uStack_21,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b5abd FUN_1445b5abd body=47 status=ok
// SIG undefined FUN_1445b5abd(void)

longlong FUN_1445b5abd(void)

{
  if (DAT_14cc239c8 == 0) {
    FUN_14000fc22(&DAT_14cc239c8,&PTR_FUN_14bdfa000);
  }
  return DAT_14cc239c8;
}



// FUNCTION 1445b5aec FUN_1445b5aec body=139 status=ok
// SIG undefined FUN_1445b5aec(void)

void FUN_1445b5aec(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ec0be(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b5b78 FUN_1445b5b78 body=47 status=ok
// SIG undefined FUN_1445b5b78(void)

longlong FUN_1445b5b78(void)

{
  if (DAT_14cc239d0 == 0) {
    FUN_14000fc22(&DAT_14cc239d0,&PTR_FUN_14bdfa0d0);
  }
  return DAT_14cc239d0;
}



// FUNCTION 1445b5ba8 FUN_1445b5ba8 body=41 status=ok
// SIG undefined FUN_1445b5ba8(void)

void FUN_1445b5ba8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_AdditionalContent_Type(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b5bd1 FUN_1445b5bd1 body=47 status=ok
// SIG undefined FUN_1445b5bd1(void)

longlong FUN_1445b5bd1(void)

{
  if (DAT_14cc239d8 == 0) {
    FUN_14000fc22(&DAT_14cc239d8,&PTR_FUN_14bdfa1f8);
  }
  return DAT_14cc239d8;
}



// FUNCTION 1445b5c00 FUN_1445b5c00 body=798 status=ok
// SIG undefined FUN_1445b5c00(void)

void FUN_1445b5c00(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  uStack_28 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_88);
  uStack_21 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_88) >> 0x38);
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140a4831c;
      local_68 = 0x1000000008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_29);
            goto LAB_1445b5dce;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_29,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_29,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_29,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_29 = (undefined1)uVar2;
      uStack_28 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_29);
    }
  }
LAB_1445b5dce:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ec058(&local_40,local_29);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((CONCAT17(uStack_21,uStack_28) ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b5f20 FUN_1445b5f20 body=34 status=ok
// SIG undefined FUN_1445b5f20(void)

void FUN_1445b5f20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1445b5f48();
  FUN_14069c8d6(uVar1,&PTR_s_Count_14bdfa240,10);
  return;
}



// FUNCTION 1445b5f48 FUN_1445b5f48 body=220 status=ok
// SIG undefined FUN_1445b5f48(void)

longlong FUN_1445b5f48(void)

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
  if (DAT_14cc239e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1445b6025;
    local_40 = FUN_1445b6028;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/DiscordPartnerSDK",L"DiscordAdditionalContent",&DAT_14cc239e0,
                  FUN_1445b5f20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc239e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b6028 FUN_1445b6028 body=98 status=ok
// SIG undefined FUN_1445b6028(void)

void FUN_1445b6028(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14be0cf30;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1445b608a FUN_1445b608a body=47 status=ok
// SIG undefined FUN_1445b608a(void)

longlong FUN_1445b608a(void)

{
  if (DAT_14cc23a98 == 0) {
    FUN_14073dd9a(&DAT_14cc23a98,&PTR_LAB_14bdfb290);
  }
  return DAT_14cc23a98;
}



// FUNCTION 1445b60b9 FUN_1445b60b9 body=47 status=ok
// SIG undefined FUN_1445b60b9(void)

longlong FUN_1445b60b9(void)

{
  if (DAT_14cc239f8 == 0) {
    FUN_14000fc22(&DAT_14cc239f8,&PTR_FUN_14bdfa480);
  }
  return DAT_14cc239f8;
}



// FUNCTION 1445b60e8 FUN_1445b60e8 body=38 status=ok
// SIG undefined FUN_1445b60e8(void)

void FUN_1445b60e8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1445ec412();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b610e FUN_1445b610e body=47 status=ok
// SIG undefined FUN_1445b610e(void)

longlong FUN_1445b610e(void)

{
  if (DAT_14cc23a00 == 0) {
    FUN_14000fc22(&DAT_14cc23a00,&PTR_FUN_14bdfa508);
  }
  return DAT_14cc23a00;
}



// FUNCTION 1445b613e FUN_1445b613e body=100 status=ok
// SIG undefined FUN_1445b613e(void)

void FUN_1445b613e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  cVar1 = Discord_MessageHandle_ApplicationId(param_1 + 0x28);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_20;
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b61a3 FUN_1445b61a3 body=47 status=ok
// SIG undefined FUN_1445b61a3(void)

longlong FUN_1445b61a3(void)

{
  if (DAT_14cc23a08 == 0) {
    FUN_14000fc22(&DAT_14cc23a08,&PTR_FUN_14bdfa590);
  }
  return DAT_14cc23a08;
}



// FUNCTION 1445b61d2 FUN_1445b61d2 body=38 status=ok
// SIG undefined FUN_1445b61d2(void)

void FUN_1445b61d2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1445ec524();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b61f8 FUN_1445b61f8 body=47 status=ok
// SIG undefined FUN_1445b61f8(void)

longlong FUN_1445b61f8(void)

{
  if (DAT_14cc23a10 == 0) {
    FUN_14000fc22(&DAT_14cc23a10,&PTR_FUN_14bdfa628);
  }
  return DAT_14cc23a10;
}



// FUNCTION 1445b6228 FUN_1445b6228 body=42 status=ok
// SIG undefined FUN_1445b6228(void)

void FUN_1445b6228(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_MessageHandle_AuthorId(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b6252 FUN_1445b6252 body=47 status=ok
// SIG undefined FUN_1445b6252(void)

longlong FUN_1445b6252(void)

{
  if (DAT_14cc23a18 == 0) {
    FUN_14000fc22(&DAT_14cc23a18,&PTR_FUN_14bdfa6b0);
  }
  return DAT_14cc23a18;
}



// FUNCTION 1445b6282 FUN_1445b6282 body=38 status=ok
// SIG undefined FUN_1445b6282(void)

void FUN_1445b6282(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1445ec586();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b62a8 FUN_1445b62a8 body=47 status=ok
// SIG undefined FUN_1445b62a8(void)

longlong FUN_1445b62a8(void)

{
  if (DAT_14cc23a20 == 0) {
    FUN_14000fc22(&DAT_14cc23a20,&PTR_FUN_14bdfa738);
  }
  return DAT_14cc23a20;
}



// FUNCTION 1445b62d8 FUN_1445b62d8 body=42 status=ok
// SIG undefined FUN_1445b62d8(void)

void FUN_1445b62d8(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_MessageHandle_ChannelId(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b6302 FUN_1445b6302 body=47 status=ok
// SIG undefined FUN_1445b6302(void)

longlong FUN_1445b6302(void)

{
  if (DAT_14cc23a28 == 0) {
    FUN_14000fc22(&DAT_14cc23a28,&PTR_FUN_14bdfa7b8);
  }
  return DAT_14cc23a28;
}



// FUNCTION 1445b6332 FUN_1445b6332 body=139 status=ok
// SIG undefined FUN_1445b6332(void)

void FUN_1445b6332(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ec698(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b63be FUN_1445b63be body=47 status=ok
// SIG undefined FUN_1445b63be(void)

longlong FUN_1445b63be(void)

{
  if (DAT_14cc23a30 == 0) {
    FUN_14000fc22(&DAT_14cc23a30,&PTR_FUN_14bdfa8a0);
  }
  return DAT_14cc23a30;
}



// FUNCTION 1445b63ee FUN_1445b63ee body=98 status=ok
// SIG undefined FUN_1445b63ee(void)

void FUN_1445b63ee(longlong param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = 0;
  local_1c = 0;
  cVar1 = Discord_MessageHandle_DisclosureType(param_1 + 0x28);
  if (cVar1 != '\0') {
    uVar2 = (undefined1)local_1c;
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b6451 FUN_1445b6451 body=47 status=ok
// SIG undefined FUN_1445b6451(void)

longlong FUN_1445b6451(void)

{
  if (DAT_14cc23a38 == 0) {
    FUN_14000fc22(&DAT_14cc23a38,&PTR_FUN_14bdfa8e0);
  }
  return DAT_14cc23a38;
}



// FUNCTION 1445b6480 FUN_1445b6480 body=52 status=ok
// SIG undefined FUN_1445b6480(void)

void FUN_1445b6480(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x30) == 1) {
    Discord_MessageHandle_Drop(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1445b64b4 FUN_1445b64b4 body=47 status=ok
// SIG undefined FUN_1445b64b4(void)

longlong FUN_1445b64b4(void)

{
  if (DAT_14cc23a40 == 0) {
    FUN_14000fc22(&DAT_14cc23a40,&PTR_FUN_14bdfa978);
  }
  return DAT_14cc23a40;
}



// FUNCTION 1445b64e4 FUN_1445b64e4 body=42 status=ok
// SIG undefined FUN_1445b64e4(void)

void FUN_1445b64e4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_MessageHandle_EditedTimestamp(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b650e FUN_1445b650e body=47 status=ok
// SIG undefined FUN_1445b650e(void)

longlong FUN_1445b650e(void)

{
  if (DAT_14cc23a48 == 0) {
    FUN_14000fc22(&DAT_14cc23a48,&PTR_FUN_14bdfaa00);
  }
  return DAT_14cc23a48;
}



// FUNCTION 1445b653e FUN_1445b653e body=42 status=ok
// SIG undefined FUN_1445b653e(void)

void FUN_1445b653e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_MessageHandle_Id(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b6568 FUN_1445b6568 body=47 status=ok
// SIG undefined FUN_1445b6568(void)

longlong FUN_1445b6568(void)

{
  if (DAT_14cc23a50 == 0) {
    FUN_14000fc22(&DAT_14cc23a50,&PTR_FUN_14bdfaa90);
  }
  return DAT_14cc23a50;
}



// FUNCTION 1445b6598 FUN_1445b6598 body=38 status=ok
// SIG undefined FUN_1445b6598(void)

void FUN_1445b6598(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1445ec700();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b65be FUN_1445b65be body=47 status=ok
// SIG undefined FUN_1445b65be(void)

longlong FUN_1445b65be(void)

{
  if (DAT_14cc23a58 == 0) {
    FUN_14000fc22(&DAT_14cc23a58,&PTR_FUN_14bdfab98);
  }
  return DAT_14cc23a58;
}



// FUNCTION 1445b65ee FUN_1445b65ee body=124 status=ok
// SIG undefined FUN_1445b65ee(void)

void FUN_1445b65ee(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ec812(param_1,local_68);
  FUN_146b4993e(param_3,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b666b FUN_1445b666b body=47 status=ok
// SIG undefined FUN_1445b666b(void)

longlong FUN_1445b666b(void)

{
  if (DAT_14cc23a60 == 0) {
    FUN_14000fc22(&DAT_14cc23a60,&PTR_FUN_14bdfacb0);
  }
  return DAT_14cc23a60;
}



// FUNCTION 1445b669a FUN_1445b669a body=124 status=ok
// SIG undefined FUN_1445b669a(void)

void FUN_1445b669a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ec880(param_1,local_68);
  FUN_146b4993e(param_3,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b6717 FUN_1445b6717 body=47 status=ok
// SIG undefined FUN_1445b6717(void)

longlong FUN_1445b6717(void)

{
  if (DAT_14cc23a68 == 0) {
    FUN_14000fc22(&DAT_14cc23a68,&PTR_FUN_14bdfad40);
  }
  return DAT_14cc23a68;
}



// FUNCTION 1445b6746 FUN_1445b6746 body=139 status=ok
// SIG undefined FUN_1445b6746(void)

void FUN_1445b6746(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ec8ee(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b67d2 FUN_1445b67d2 body=47 status=ok
// SIG undefined FUN_1445b67d2(void)

longlong FUN_1445b67d2(void)

{
  if (DAT_14cc23a70 == 0) {
    FUN_14000fc22(&DAT_14cc23a70,&PTR_FUN_14bdfadd8);
  }
  return DAT_14cc23a70;
}



// FUNCTION 1445b6802 FUN_1445b6802 body=38 status=ok
// SIG undefined FUN_1445b6802(void)

void FUN_1445b6802(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1445ec956();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b6828 FUN_1445b6828 body=47 status=ok
// SIG undefined FUN_1445b6828(void)

longlong FUN_1445b6828(void)

{
  if (DAT_14cc23a78 == 0) {
    FUN_14000fc22(&DAT_14cc23a78,&PTR_FUN_14bdfae70);
  }
  return DAT_14cc23a78;
}



// FUNCTION 1445b6858 FUN_1445b6858 body=42 status=ok
// SIG undefined FUN_1445b6858(void)

void FUN_1445b6858(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_MessageHandle_RecipientId(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b6886 FUN_1445b6886 body=47 status=ok
// SIG undefined FUN_1445b6886(void)

longlong FUN_1445b6886(void)

{
  if (DAT_14cc23a80 == 0) {
    FUN_14000fc22(&DAT_14cc23a80,&PTR_FUN_14bdfaf08);
  }
  return DAT_14cc23a80;
}



// FUNCTION 1445b68b6 FUN_1445b68b6 body=41 status=ok
// SIG undefined FUN_1445b68b6(void)

void FUN_1445b68b6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_MessageHandle_SentFromGame(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b68df FUN_1445b68df body=47 status=ok
// SIG undefined FUN_1445b68df(void)

longlong FUN_1445b68df(void)

{
  if (DAT_14cc23a88 == 0) {
    FUN_14000fc22(&DAT_14cc23a88,&PTR_FUN_14bdfafa0);
  }
  return DAT_14cc23a88;
}



// FUNCTION 1445b690e FUN_1445b690e body=42 status=ok
// SIG undefined FUN_1445b690e(void)

void FUN_1445b690e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_MessageHandle_SentTimestamp(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b6938 FUN_1445b6938 body=34 status=ok
// SIG undefined FUN_1445b6938(void)

void FUN_1445b6938(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1445b6960();
  FUN_14069c8d6(uVar1,&PTR_s_AdditionalContent_14bdfafe0,0x13);
  return;
}



// FUNCTION 1445b6960 FUN_1445b6960 body=220 status=ok
// SIG undefined FUN_1445b6960(void)

longlong FUN_1445b6960(void)

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
  if (DAT_14cc23a90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1445b6a3d;
    local_40 = FUN_1445b6a40;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/DiscordPartnerSDK",L"DiscordMessageHandle",&DAT_14cc23a90,FUN_1445b6938)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc23a90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b6a40 FUN_1445b6a40 body=98 status=ok
// SIG undefined FUN_1445b6a40(void)

void FUN_1445b6a40(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14be0d1d0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1445b6aa2 FUN_1445b6aa2 body=47 status=ok
// SIG undefined FUN_1445b6aa2(void)

longlong FUN_1445b6aa2(void)

{
  if (DAT_14cc23af0 == 0) {
    FUN_14073dd9a(&DAT_14cc23af0,&PTR_LAB_14bdfb860);
  }
  return DAT_14cc23af0;
}



// FUNCTION 1445b6ad1 FUN_1445b6ad1 body=47 status=ok
// SIG undefined FUN_1445b6ad1(void)

longlong FUN_1445b6ad1(void)

{
  if (DAT_14cc23aa8 == 0) {
    FUN_14000fc22(&DAT_14cc23aa8,&PTR_FUN_14bdfb2d0);
  }
  return DAT_14cc23aa8;
}



// FUNCTION 1445b6b00 FUN_1445b6b00 body=52 status=ok
// SIG undefined FUN_1445b6b00(void)

void FUN_1445b6b00(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x30) == 1) {
    Discord_AudioDevice_Drop(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1445b6b39 FUN_1445b6b39 body=47 status=ok
// SIG undefined FUN_1445b6b39(void)

longlong FUN_1445b6b39(void)

{
  if (DAT_14cc23ab0 == 0) {
    FUN_14000fc22(&DAT_14cc23ab0,&PTR_FUN_14bdfb3a0);
  }
  return DAT_14cc23ab0;
}



// FUNCTION 1445b6b68 FUN_1445b6b68 body=758 status=ok
// SIG undefined FUN_1445b6b68(void)

void FUN_1445b6b68(longlong param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar9,&local_38);
            goto LAB_1445b6d42;
          }
        }
        _Src = (longlong *)(lVar9 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar9,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar9);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1445b6d42:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar9 = local_38 + 0x28;
  if (local_38 == 0) {
    lVar9 = 0;
  }
  uVar6 = Discord_AudioDevice_Equals(param_1 + 0x28,lVar9);
  *param_3 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b6e5f FUN_1445b6e5f body=47 status=ok
// SIG undefined FUN_1445b6e5f(void)

longlong FUN_1445b6e5f(void)

{
  if (DAT_14cc23ab8 == 0) {
    FUN_14000fc22(&DAT_14cc23ab8,&PTR_FUN_14bdfb420);
  }
  return DAT_14cc23ab8;
}



// FUNCTION 1445b6e8e FUN_1445b6e8e body=139 status=ok
// SIG undefined FUN_1445b6e8e(void)

void FUN_1445b6e8e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ec9ee(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b6f1e FUN_1445b6f1e body=47 status=ok
// SIG undefined FUN_1445b6f1e(void)

longlong FUN_1445b6f1e(void)

{
  if (DAT_14cc23ac0 == 0) {
    FUN_14000fc22(&DAT_14cc23ac0,&PTR_FUN_14bdfb4b8);
  }
  return DAT_14cc23ac0;
}



// FUNCTION 1445b6f4e FUN_1445b6f4e body=41 status=ok
// SIG undefined FUN_1445b6f4e(void)

void FUN_1445b6f4e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_AudioDevice_IsDefault(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b6f77 FUN_1445b6f77 body=47 status=ok
// SIG undefined FUN_1445b6f77(void)

longlong FUN_1445b6f77(void)

{
  if (DAT_14cc23ac8 == 0) {
    FUN_14000fc22(&DAT_14cc23ac8,&PTR_FUN_14bdfb538);
  }
  return DAT_14cc23ac8;
}



// FUNCTION 1445b6fa6 FUN_1445b6fa6 body=139 status=ok
// SIG undefined FUN_1445b6fa6(void)

void FUN_1445b6fa6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ecd04(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b7032 FUN_1445b7032 body=47 status=ok
// SIG undefined FUN_1445b7032(void)

longlong FUN_1445b7032(void)

{
  if (DAT_14cc23ad0 == 0) {
    FUN_14000fc22(&DAT_14cc23ad0,&PTR_FUN_14bdfb5b8);
  }
  return DAT_14cc23ad0;
}



// FUNCTION 1445b7062 FUN_1445b7062 body=821 status=ok
// SIG undefined FUN_1445b7062(void)

void FUN_1445b7062(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *_Src;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  void **_Src_00;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar8,&local_38);
            goto LAB_1445b7233;
          }
        }
        _Src_00 = (void **)(lVar8 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar8,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar8);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(void **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1445b7233:
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar8 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar8 * 2);
  }
  FUN_1445eca56(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b739c FUN_1445b739c body=47 status=ok
// SIG undefined FUN_1445b739c(void)

longlong FUN_1445b739c(void)

{
  if (DAT_14cc23ad8 == 0) {
    FUN_14000fc22(&DAT_14cc23ad8,&PTR_FUN_14bdfb650);
  }
  return DAT_14cc23ad8;
}



// FUNCTION 1445b73cc FUN_1445b73cc body=737 status=ok
// SIG undefined FUN_1445b73cc(void)

void FUN_1445b73cc(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
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
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_1445b759d;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
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
LAB_1445b759d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_AudioDevice_SetIsDefault(param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b76ae FUN_1445b76ae body=47 status=ok
// SIG undefined FUN_1445b76ae(void)

longlong FUN_1445b76ae(void)

{
  if (DAT_14cc23ae0 == 0) {
    FUN_14000fc22(&DAT_14cc23ae0,&PTR_FUN_14bdfb6d0);
  }
  return DAT_14cc23ae0;
}



// FUNCTION 1445b76de FUN_1445b76de body=821 status=ok
// SIG undefined FUN_1445b76de(void)

void FUN_1445b76de(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *_Src;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  void **_Src_00;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar8,&local_38);
            goto LAB_1445b78af;
          }
        }
        _Src_00 = (void **)(lVar8 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar8,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar8);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(void **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1445b78af:
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar8 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar8 * 2);
  }
  FUN_1445ecd6c(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b7a14 FUN_1445b7a14 body=34 status=ok
// SIG undefined FUN_1445b7a14(void)

void FUN_1445b7a14(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1445b7a3c();
  FUN_14069c8d6(uVar1,&PTR_DAT_14bdfb710,8);
  return;
}



// FUNCTION 1445b7a3c FUN_1445b7a3c body=220 status=ok
// SIG undefined FUN_1445b7a3c(void)

longlong FUN_1445b7a3c(void)

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
  if (DAT_14cc23ae8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1445b7b19;
    local_40 = FUN_1445b7b1c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/DiscordPartnerSDK",L"DiscordAudioDevice",&DAT_14cc23ae8,FUN_1445b7a14);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc23ae8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b7b1c FUN_1445b7b1c body=98 status=ok
// SIG undefined FUN_1445b7b1c(void)

void FUN_1445b7b1c(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14be0d470;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1445b7b7e FUN_1445b7b7e body=47 status=ok
// SIG undefined FUN_1445b7b7e(void)

longlong FUN_1445b7b7e(void)

{
  if (DAT_14cc23b20 == 0) {
    FUN_14073dd9a(&DAT_14cc23b20,&PTR_LAB_14bdfbac0);
  }
  return DAT_14cc23b20;
}



// FUNCTION 1445b7bad FUN_1445b7bad body=47 status=ok
// SIG undefined FUN_1445b7bad(void)

longlong FUN_1445b7bad(void)

{
  if (DAT_14cc23b00 == 0) {
    FUN_14000fc22(&DAT_14cc23b00,&PTR_FUN_14bdfb8a0);
  }
  return DAT_14cc23b00;
}



// FUNCTION 1445b7bdc FUN_1445b7bdc body=52 status=ok
// SIG undefined FUN_1445b7bdc(void)

void FUN_1445b7bdc(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x30) == 1) {
    Discord_UserMessageSummary_Drop(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1445b7c10 FUN_1445b7c10 body=47 status=ok
// SIG undefined FUN_1445b7c10(void)

longlong FUN_1445b7c10(void)

{
  if (DAT_14cc23b08 == 0) {
    FUN_14000fc22(&DAT_14cc23b08,&PTR_FUN_14bdfb938);
  }
  return DAT_14cc23b08;
}



// FUNCTION 1445b7c40 FUN_1445b7c40 body=42 status=ok
// SIG undefined FUN_1445b7c40(void)

void FUN_1445b7c40(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_UserMessageSummary_LastMessageId(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b7c6a FUN_1445b7c6a body=47 status=ok
// SIG undefined FUN_1445b7c6a(void)

longlong FUN_1445b7c6a(void)

{
  if (DAT_14cc23b10 == 0) {
    FUN_14000fc22(&DAT_14cc23b10,&PTR_FUN_14bdfb9c0);
  }
  return DAT_14cc23b10;
}



// FUNCTION 1445b7c9a FUN_1445b7c9a body=42 status=ok
// SIG undefined FUN_1445b7c9a(void)

void FUN_1445b7c9a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_UserMessageSummary_UserId(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b7cc4 FUN_1445b7cc4 body=34 status=ok
// SIG undefined FUN_1445b7cc4(void)

void FUN_1445b7cc4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1445b7cec();
  FUN_14069c8d6(uVar1,&PTR_DAT_14bdfba00,3);
  return;
}



// FUNCTION 1445b7cec FUN_1445b7cec body=220 status=ok
// SIG undefined FUN_1445b7cec(void)

longlong FUN_1445b7cec(void)

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
  if (DAT_14cc23b18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1445b7dc9;
    local_40 = FUN_1445b7dcc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/DiscordPartnerSDK",L"DiscordUserMessageSummary",&DAT_14cc23b18,
                  FUN_1445b7cc4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc23b18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b7dcc FUN_1445b7dcc body=98 status=ok
// SIG undefined FUN_1445b7dcc(void)

void FUN_1445b7dcc(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14be0d710;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1445b7e2e FUN_1445b7e2e body=47 status=ok
// SIG undefined FUN_1445b7e2e(void)

longlong FUN_1445b7e2e(void)

{
  if (DAT_14cc23b98 == 0) {
    FUN_14073dd9a(&DAT_14cc23b98,&PTR_LAB_14bdfc420);
  }
  return DAT_14cc23b98;
}



// FUNCTION 1445b7e5d FUN_1445b7e5d body=47 status=ok
// SIG undefined FUN_1445b7e5d(void)

longlong FUN_1445b7e5d(void)

{
  if (DAT_14cc23b30 == 0) {
    FUN_14000fc22(&DAT_14cc23b30,&PTR_FUN_14bdfbb48);
  }
  return DAT_14cc23b30;
}



// FUNCTION 1445b7e8c FUN_1445b7e8c body=139 status=ok
// SIG undefined FUN_1445b7e8c(void)

void FUN_1445b7e8c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ed39c(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b7f18 FUN_1445b7f18 body=47 status=ok
// SIG undefined FUN_1445b7f18(void)

longlong FUN_1445b7f18(void)

{
  if (DAT_14cc23b38 == 0) {
    FUN_14000fc22(&DAT_14cc23b38,&PTR_FUN_14bdfbbe0);
  }
  return DAT_14cc23b38;
}



// FUNCTION 1445b7f48 FUN_1445b7f48 body=100 status=ok
// SIG undefined FUN_1445b7f48(void)

void FUN_1445b7f48(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  cVar1 = Discord_ClientCreateOptions_CpuAffinityMask(param_1 + 0x28);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_20;
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b7fad FUN_1445b7fad body=47 status=ok
// SIG undefined FUN_1445b7fad(void)

longlong FUN_1445b7fad(void)

{
  if (DAT_14cc23b40 == 0) {
    FUN_14000fc22(&DAT_14cc23b40,&PTR_FUN_14bdfbc20);
  }
  return DAT_14cc23b40;
}



// FUNCTION 1445b7fdc FUN_1445b7fdc body=52 status=ok
// SIG undefined FUN_1445b7fdc(void)

void FUN_1445b7fdc(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x30) == 1) {
    Discord_ClientCreateOptions_Drop(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1445b8014 FUN_1445b8014 body=47 status=ok
// SIG undefined FUN_1445b8014(void)

longlong FUN_1445b8014(void)

{
  if (DAT_14cc23b48 == 0) {
    FUN_14000fc22(&DAT_14cc23b48,&PTR_FUN_14bdfbcd8);
  }
  return DAT_14cc23b48;
}



// FUNCTION 1445b8044 FUN_1445b8044 body=41 status=ok
// SIG undefined FUN_1445b8044(void)

void FUN_1445b8044(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_ClientCreateOptions_ExperimentalAndroidPreventCommsForBluetooth(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b806d FUN_1445b806d body=47 status=ok
// SIG undefined FUN_1445b806d(void)

longlong FUN_1445b806d(void)

{
  if (DAT_14cc23b50 == 0) {
    FUN_14000fc22(&DAT_14cc23b50,&PTR_FUN_14bdfbdc8);
  }
  return DAT_14cc23b50;
}



// FUNCTION 1445b809c FUN_1445b809c body=41 status=ok
// SIG undefined FUN_1445b809c(void)

void FUN_1445b809c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_ClientCreateOptions_ExperimentalAudioSystem(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445b80c5 FUN_1445b80c5 body=47 status=ok
// SIG undefined FUN_1445b80c5(void)

longlong FUN_1445b80c5(void)

{
  if (DAT_14cc23b58 == 0) {
    FUN_14000fc22(&DAT_14cc23b58,&PTR_FUN_14bdfbe08);
  }
  return DAT_14cc23b58;
}



// FUNCTION 1445b80f4 FUN_1445b80f4 body=46 status=ok
// SIG undefined FUN_1445b80f4(void)

void FUN_1445b80f4(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_ClientCreateOptions_Init(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}



// FUNCTION 1445b8122 FUN_1445b8122 body=47 status=ok
// SIG undefined FUN_1445b8122(void)

longlong FUN_1445b8122(void)

{
  if (DAT_14cc23b60 == 0) {
    FUN_14000fc22(&DAT_14cc23b60,&PTR_FUN_14bdfbe98);
  }
  return DAT_14cc23b60;
}



// FUNCTION 1445b8152 FUN_1445b8152 body=821 status=ok
// SIG undefined FUN_1445b8152(void)

void FUN_1445b8152(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *_Src;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  void **_Src_00;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar8,&local_38);
            goto LAB_1445b8323;
          }
        }
        _Src_00 = (void **)(lVar8 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar8,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar8);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(void **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1445b8323:
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar8 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar8 * 2);
  }
  FUN_1445ed404(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b8488 FUN_1445b8488 body=47 status=ok
// SIG undefined FUN_1445b8488(void)

longlong FUN_1445b8488(void)

{
  if (DAT_14cc23b68 == 0) {
    FUN_14000fc22(&DAT_14cc23b68,&PTR_FUN_14bdfbf38);
  }
  return DAT_14cc23b68;
}



// FUNCTION 1445b84b8 FUN_1445b84b8 body=743 status=ok
// SIG undefined FUN_1445b84b8(void)

void FUN_1445b84b8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_1445b868a;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1445b868a:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_38;
  Discord_ClientCreateOptions_SetCpuAffinityMask(param_1 + 0x28);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b87a4 FUN_1445b87a4 body=47 status=ok
// SIG undefined FUN_1445b87a4(void)

longlong FUN_1445b87a4(void)

{
  if (DAT_14cc23b70 == 0) {
    FUN_14000fc22(&DAT_14cc23b70,&PTR_FUN_14bdfbff0);
  }
  return DAT_14cc23b70;
}



// FUNCTION 1445b87d4 FUN_1445b87d4 body=737 status=ok
// SIG undefined FUN_1445b87d4(void)

void FUN_1445b87d4(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
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
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_1445b89a5;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
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
LAB_1445b89a5:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_ClientCreateOptions_SetExperimentalAndroidPreventCommsForBluetooth
            (param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b8ab6 FUN_1445b8ab6 body=47 status=ok
// SIG undefined FUN_1445b8ab6(void)

longlong FUN_1445b8ab6(void)

{
  if (DAT_14cc23b78 == 0) {
    FUN_14000fc22(&DAT_14cc23b78,&PTR_FUN_14bdfc0e0);
  }
  return DAT_14cc23b78;
}



// FUNCTION 1445b8ae6 FUN_1445b8ae6 body=738 status=ok
// SIG undefined FUN_1445b8ae6(void)

void FUN_1445b8ae6(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  uStack_28 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_21 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x38);
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_29);
            goto LAB_1445b8cb4;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_29,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_29,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_29,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_29 = (undefined1)uVar2;
      uStack_28 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_29);
    }
  }
LAB_1445b8cb4:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_ClientCreateOptions_SetExperimentalAudioSystem(param_1 + 0x28,local_29);
  if ((CONCAT17(uStack_21,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b8dc9 FUN_1445b8dc9 body=47 status=ok
// SIG undefined FUN_1445b8dc9(void)

longlong FUN_1445b8dc9(void)

{
  if (DAT_14cc23b80 == 0) {
    FUN_14000fc22(&DAT_14cc23b80,&PTR_FUN_14bdfc178);
  }
  return DAT_14cc23b80;
}



// FUNCTION 1445b8df8 FUN_1445b8df8 body=821 status=ok
// SIG undefined FUN_1445b8df8(void)

void FUN_1445b8df8(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *_Src;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  void **_Src_00;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar8,&local_38);
            goto LAB_1445b8fc9;
          }
        }
        _Src_00 = (void **)(lVar8 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar8,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar8);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(void **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1445b8fc9:
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar8 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar8 * 2);
  }
  FUN_1445ed0ee(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b912e FUN_1445b912e body=47 status=ok
// SIG undefined FUN_1445b912e(void)

longlong FUN_1445b912e(void)

{
  if (DAT_14cc23b88 == 0) {
    FUN_14000fc22(&DAT_14cc23b88,&PTR_FUN_14bdfc1f8);
  }
  return DAT_14cc23b88;
}



// FUNCTION 1445b915e FUN_1445b915e body=139 status=ok
// SIG undefined FUN_1445b915e(void)

void FUN_1445b915e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ed086(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b91ea FUN_1445b91ea body=34 status=ok
// SIG undefined FUN_1445b91ea(void)

void FUN_1445b91ea(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1445b9212();
  FUN_14069c8d6(uVar1,&PTR_s_ApiBase_14bdfc240,0xc);
  return;
}



// FUNCTION 1445b9212 FUN_1445b9212 body=220 status=ok
// SIG undefined FUN_1445b9212(void)

longlong FUN_1445b9212(void)

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
  if (DAT_14cc23b90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1445b92ef;
    local_40 = FUN_1445b92f2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/DiscordPartnerSDK",L"DiscordClientCreateOptions",&DAT_14cc23b90,
                  FUN_1445b91ea);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc23b90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b92f2 FUN_1445b92f2 body=98 status=ok
// SIG undefined FUN_1445b92f2(void)

void FUN_1445b92f2(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14be0d9b0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1445b9359 FUN_1445b9359 body=47 status=ok
// SIG undefined FUN_1445b9359(void)

longlong FUN_1445b9359(void)

{
  if (DAT_14cc24098 == 0) {
    FUN_14073dd9a(&DAT_14cc24098,&PTR_LAB_14be062b0);
  }
  return DAT_14cc24098;
}



// FUNCTION 1445b9388 FUN_1445b9388 body=47 status=ok
// SIG undefined FUN_1445b9388(void)

longlong FUN_1445b9388(void)

{
  if (DAT_14cc23ba8 == 0) {
    FUN_14000fc22(&DAT_14cc23ba8,&PTR_FUN_14bdfc470);
  }
  return DAT_14cc23ba8;
}



// FUNCTION 1445b93d1 FUN_1445b93d1 body=47 status=ok
// SIG undefined FUN_1445b93d1(void)

longlong FUN_1445b93d1(void)

{
  if (DAT_14cc23bb0 == 0) {
    FUN_14000fc22(&DAT_14cc23bb0,&PTR_FUN_14bdfc4c8);
  }
  return DAT_14cc23bb0;
}



// FUNCTION 1445b9419 FUN_1445b9419 body=47 status=ok
// SIG undefined FUN_1445b9419(void)

longlong FUN_1445b9419(void)

{
  if (DAT_14cc23bb8 == 0) {
    FUN_14000fc22(&DAT_14cc23bb8,&PTR_FUN_14bdfc5b8);
  }
  return DAT_14cc23bb8;
}



// FUNCTION 1445b9448 FUN_1445b9448 body=1303 status=ok
// SIG undefined FUN_1445b9448(void)

void FUN_1445b9448(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong *_Src;
  undefined8 *puVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_48);
            goto LAB_1445b95ff;
          }
        }
        _Src = (longlong *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,_Src,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,_Src,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar8);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445b95ff:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445b95ff;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445b95ff;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445b95ff;
    }
    local_48 = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_58);
            goto LAB_1445b97af;
          }
        }
        puVar9 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar8);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445b97af:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *puVar9;
  uVar5 = puVar9[1];
  lVar8 = local_48 + 0x28;
  if (local_48 == 0) {
    lVar8 = 0;
  }
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar1;
  local_78[1] = uVar5;
  Discord_Client_AcceptActivityInvite(param_1 + 0x28,lVar8,FUN_1445f9f06,&LAB_1445f3838);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b9960 FUN_1445b9960 body=47 status=ok
// SIG undefined FUN_1445b9960(void)

longlong FUN_1445b9960(void)

{
  if (DAT_14cc23bc0 == 0) {
    FUN_14000fc22(&DAT_14cc23bc0,&PTR_FUN_14bdfc6b0);
  }
  return DAT_14cc23bc0;
}



// FUNCTION 1445b9990 FUN_1445b9990 body=1292 status=ok
// SIG undefined FUN_1445b9990(void)

void FUN_1445b9990(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_1445b9b47;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445b9b47:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445b9b47;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445b9b47;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445b9b47;
    }
    local_48 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_1445b9cf7;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445b9cf7:
  uVar1 = local_48;
  puVar10 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = *puVar10;
  uVar7 = puVar10[1];
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar6;
  local_78[1] = uVar7;
  Discord_Client_AcceptDiscordFriendRequest(param_1 + 0x28,uVar1,FUN_1445fa8aa,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445b9e9d FUN_1445b9e9d body=47 status=ok
// SIG undefined FUN_1445b9e9d(void)

longlong FUN_1445b9e9d(void)

{
  if (DAT_14cc23bc8 == 0) {
    FUN_14000fc22(&DAT_14cc23bc8,&PTR_FUN_14bdfc798);
  }
  return DAT_14cc23bc8;
}



// FUNCTION 1445b9ecc FUN_1445b9ecc body=1292 status=ok
// SIG undefined FUN_1445b9ecc(void)

void FUN_1445b9ecc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_1445ba083;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445ba083:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445ba083;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445ba083;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445ba083;
    }
    local_48 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_1445ba233;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445ba233:
  uVar1 = local_48;
  puVar10 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = *puVar10;
  uVar7 = puVar10[1];
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar6;
  local_78[1] = uVar7;
  Discord_Client_AcceptGameFriendRequest(param_1 + 0x28,uVar1,FUN_1445fa956,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ba3d9 FUN_1445ba3d9 body=47 status=ok
// SIG undefined FUN_1445ba3d9(void)

longlong FUN_1445ba3d9(void)

{
  if (DAT_14cc23bd0 == 0) {
    FUN_14000fc22(&DAT_14cc23bd0,&PTR_FUN_14bdfc8e8);
  }
  return DAT_14cc23bd0;
}



// FUNCTION 1445ba408 FUN_1445ba408 body=1309 status=ok
// SIG undefined FUN_1445ba408(void)

void FUN_1445ba408(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  byte local_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_58._0_7_ = 0;
  uStack_58._7_1_ = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar11 = *(byte **)(param_2 + 0x20);
  if (pbVar11 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_58);
            goto LAB_1445ba5c6;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &uStack_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_58,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_58,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&uStack_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&uStack_58,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar10;
        puVar10 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar11 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar11];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar11 + 1);
      *(byte **)(param_2 + 0x20) = pbVar11 + 9;
      uStack_58._0_7_ = (undefined7)uVar1;
      uStack_58._7_1_ = (undefined1)((ulonglong)uVar1 >> 0x38);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_58);
    }
  }
LAB_1445ba5c6:
  puVar10 = *(undefined8 **)(param_2 + 0x38);
  local_59 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_140a4831c;
      local_88 = 0x1000000008001;
      local_80 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar11 = *(byte **)(param_2 + 0x20);
  if (pbVar11 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_59);
            goto LAB_1445ba779;
          }
        }
        pbVar11 = (byte *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (pbVar11 != &local_59) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_59,pbVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&local_59,pbVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_59,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_59,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar11 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar11];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_59);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_59);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar11 + 1);
      *(byte **)(param_2 + 0x20) = pbVar11 + 9;
      local_59 = (byte)uVar1;
      uStack_58._0_7_ = (undefined7)((ulonglong)uVar1 >> 8);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_59);
    }
  }
LAB_1445ba779:
  bVar7 = local_59;
  puVar9 = &uStack_58;
  if (puVar10 != (undefined8 *)0x0) {
    puVar9 = puVar10;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *puVar9;
  uVar6 = puVar9[1];
  puVar10 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar10 = uVar1;
  puVar10[1] = uVar6;
  local_88 = CONCAT44(local_88._4_4_,(uint)bVar7);
  Discord_Client_AddLogCallback(param_1 + 0x28,FUN_1445f8808,&LAB_1445f2a54,puVar10);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ba926 FUN_1445ba926 body=47 status=ok
// SIG undefined FUN_1445ba926(void)

longlong FUN_1445ba926(void)

{
  if (DAT_14cc23bd8 == 0) {
    FUN_14000fc22(&DAT_14cc23bd8,&PTR_FUN_14bdfca20);
  }
  return DAT_14cc23bd8;
}



// FUNCTION 1445ba956 FUN_1445ba956 body=1309 status=ok
// SIG undefined FUN_1445ba956(void)

void FUN_1445ba956(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  byte local_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_58._0_7_ = 0;
  uStack_58._7_1_ = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar11 = *(byte **)(param_2 + 0x20);
  if (pbVar11 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_58);
            goto LAB_1445bab14;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &uStack_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_58,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_58,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&uStack_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&uStack_58,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar10;
        puVar10 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar11 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar11];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar11 + 1);
      *(byte **)(param_2 + 0x20) = pbVar11 + 9;
      uStack_58._0_7_ = (undefined7)uVar1;
      uStack_58._7_1_ = (undefined1)((ulonglong)uVar1 >> 0x38);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_58);
    }
  }
LAB_1445bab14:
  puVar10 = *(undefined8 **)(param_2 + 0x38);
  local_59 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_140a4831c;
      local_88 = 0x1000000008001;
      local_80 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar11 = *(byte **)(param_2 + 0x20);
  if (pbVar11 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_59);
            goto LAB_1445bacc7;
          }
        }
        pbVar11 = (byte *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (pbVar11 != &local_59) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_59,pbVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&local_59,pbVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_59,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_59,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar11 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar11];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_59);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_59);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar11 + 1);
      *(byte **)(param_2 + 0x20) = pbVar11 + 9;
      local_59 = (byte)uVar1;
      uStack_58._0_7_ = (undefined7)((ulonglong)uVar1 >> 8);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_59);
    }
  }
LAB_1445bacc7:
  bVar7 = local_59;
  puVar9 = &uStack_58;
  if (puVar10 != (undefined8 *)0x0) {
    puVar9 = puVar10;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *puVar9;
  uVar6 = puVar9[1];
  puVar10 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar10 = uVar1;
  puVar10[1] = uVar6;
  local_88 = CONCAT44(local_88._4_4_,(uint)bVar7);
  Discord_Client_AddVoiceLogCallback(param_1 + 0x28,FUN_1445f8922,&LAB_1445f2a54,puVar10);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bae74 FUN_1445bae74 body=47 status=ok
// SIG undefined FUN_1445bae74(void)

longlong FUN_1445bae74(void)

{
  if (DAT_14cc23be0 == 0) {
    FUN_14000fc22(&DAT_14cc23be0,&PTR_FUN_14bdfcb10);
  }
  return DAT_14cc23be0;
}



// FUNCTION 1445baea4 FUN_1445baea4 body=1303 status=ok
// SIG undefined FUN_1445baea4(void)

void FUN_1445baea4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong *_Src;
  undefined8 *puVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_48);
            goto LAB_1445bb05b;
          }
        }
        _Src = (longlong *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,_Src,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,_Src,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar8);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445bb05b:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445bb05b;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445bb05b;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445bb05b;
    }
    local_48 = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_58);
            goto LAB_1445bb20b;
          }
        }
        puVar9 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar8);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445bb20b:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *puVar9;
  uVar5 = puVar9[1];
  lVar8 = local_48 + 0x28;
  if (local_48 == 0) {
    lVar8 = 0;
  }
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar1;
  local_78[1] = uVar5;
  Discord_Client_Authorize(param_1 + 0x28,lVar8,FUN_1445f5c86,&LAB_1445ee84a);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bb3bc FUN_1445bb3bc body=47 status=ok
// SIG undefined FUN_1445bb3bc(void)

longlong FUN_1445bb3bc(void)

{
  if (DAT_14cc23be8 == 0) {
    FUN_14000fc22(&DAT_14cc23be8,&PTR_FUN_14bdfcbf0);
  }
  return DAT_14cc23be8;
}



// FUNCTION 1445bb3ec FUN_1445bb3ec body=1292 status=ok
// SIG undefined FUN_1445bb3ec(void)

void FUN_1445bb3ec(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_1445bb5a3;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445bb5a3:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445bb5a3;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445bb5a3;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445bb5a3;
    }
    local_48 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_1445bb753;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445bb753:
  uVar1 = local_48;
  puVar10 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = *puVar10;
  uVar7 = puVar10[1];
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar6;
  local_78[1] = uVar7;
  Discord_Client_BlockUser(param_1 + 0x28,uVar1,FUN_1445faa02,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bb8f9 FUN_1445bb8f9 body=47 status=ok
// SIG undefined FUN_1445bb8f9(void)

longlong FUN_1445bb8f9(void)

{
  if (DAT_14cc23bf0 == 0) {
    FUN_14000fc22(&DAT_14cc23bf0,&PTR_FUN_14bdfcce0);
  }
  return DAT_14cc23bf0;
}



// FUNCTION 1445bb928 FUN_1445bb928 body=1292 status=ok
// SIG undefined FUN_1445bb928(void)

void FUN_1445bb928(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_1445bbadf;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445bbadf:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445bbadf;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445bbadf;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445bbadf;
    }
    local_48 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_1445bbc8f;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445bbc8f:
  uVar1 = local_48;
  puVar10 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = *puVar10;
  uVar7 = puVar10[1];
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar6;
  local_78[1] = uVar7;
  Discord_Client_CancelDiscordFriendRequest(param_1 + 0x28,uVar1,FUN_1445faaae,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bbe35 FUN_1445bbe35 body=47 status=ok
// SIG undefined FUN_1445bbe35(void)

longlong FUN_1445bbe35(void)

{
  if (DAT_14cc23bf8 == 0) {
    FUN_14000fc22(&DAT_14cc23bf8,&PTR_FUN_14bdfcdc8);
  }
  return DAT_14cc23bf8;
}



// FUNCTION 1445bbe64 FUN_1445bbe64 body=1292 status=ok
// SIG undefined FUN_1445bbe64(void)

void FUN_1445bbe64(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_1445bc01b;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445bc01b:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445bc01b;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445bc01b;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445bc01b;
    }
    local_48 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_1445bc1cb;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445bc1cb:
  uVar1 = local_48;
  puVar10 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = *puVar10;
  uVar7 = puVar10[1];
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar6;
  local_78[1] = uVar7;
  Discord_Client_CancelGameFriendRequest(param_1 + 0x28,uVar1,FUN_1445fab5a,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bc377 FUN_1445bc377 body=47 status=ok
// SIG undefined FUN_1445bc377(void)

longlong FUN_1445bc377(void)

{
  if (DAT_14cc23c00 == 0) {
    FUN_14000fc22(&DAT_14cc23c00,&PTR_FUN_14bdfceb8);
  }
  return DAT_14cc23c00;
}



// FUNCTION 1445bc3a6 FUN_1445bc3a6 body=747 status=ok
// SIG undefined FUN_1445bc3a6(void)

void FUN_1445bc3a6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_1445bc580;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1445bc580:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = Discord_Client_CanOpenMessageInDiscord(param_1 + 0x28,local_38);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bc692 FUN_1445bc692 body=47 status=ok
// SIG undefined FUN_1445bc692(void)

longlong FUN_1445bc692(void)

{
  if (DAT_14cc23c08 == 0) {
    FUN_14000fc22(&DAT_14cc23c08,&PTR_FUN_14bdfcf10);
  }
  return DAT_14cc23c08;
}



// FUNCTION 1445bc6db FUN_1445bc6db body=47 status=ok
// SIG undefined FUN_1445bc6db(void)

longlong FUN_1445bc6db(void)

{
  if (DAT_14cc23c10 == 0) {
    FUN_14000fc22(&DAT_14cc23c10,&PTR_FUN_14bdfcf70);
  }
  return DAT_14cc23c10;
}



// FUNCTION 1445bc723 FUN_1445bc723 body=47 status=ok
// SIG undefined FUN_1445bc723(void)

longlong FUN_1445bc723(void)

{
  if (DAT_14cc23c18 == 0) {
    FUN_14000fc22(&DAT_14cc23c18,&PTR_FUN_14bdfcfb0);
  }
  return DAT_14cc23c18;
}



// FUNCTION 1445bc76b FUN_1445bc76b body=47 status=ok
// SIG undefined FUN_1445bc76b(void)

longlong FUN_1445bc76b(void)

{
  if (DAT_14cc23c20 == 0) {
    FUN_14000fc22(&DAT_14cc23c20,&PTR_FUN_14bdfd058);
  }
  return DAT_14cc23c20;
}



// FUNCTION 1445bc79a FUN_1445bc79a body=115 status=ok
// SIG undefined FUN_1445bc79a(void)

void FUN_1445bc79a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_CreateAuthorizationCodeVerifier(param_1 + 0x28,&local_20);
  lVar1 = FUN_1445ee854(DAT_14c951640);
  *(undefined8 *)(lVar1 + 0x28) = local_20;
  *(undefined4 *)(lVar1 + 0x30) = 1;
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bc80e FUN_1445bc80e body=47 status=ok
// SIG undefined FUN_1445bc80e(void)

longlong FUN_1445bc80e(void)

{
  if (DAT_14cc23c28 == 0) {
    FUN_14000fc22(&DAT_14cc23c28,&PTR_FUN_14bdfd148);
  }
  return DAT_14cc23c28;
}



// FUNCTION 1445bc83e FUN_1445bc83e body=1139 status=ok
// SIG undefined FUN_1445bc83e(void)

void FUN_1445bc83e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  byte *pbVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,local_48);
            goto LAB_1445bc9d3;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_48) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_48,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_48,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = (undefined4)plVar7[6];
        local_78 = 0;
        FUN_1400746b0(plVar7,local_48,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_48,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445bc9d3:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445bc9d3;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445bc9d3;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445bc9d3;
    }
    local_48[0] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    plVar7 = (longlong *)0x0;
  }
  plVar8 = local_48;
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_58);
            goto LAB_1445bcb98;
          }
        }
        puVar9 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_58,puVar9,(int)plVar7[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = (undefined4)plVar7[6];
        local_78 = 0;
        FUN_1400746b0(plVar7,&local_58,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_58,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445bcb98:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445f2fe6(param_1,plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bccb2 FUN_1445bccb2 body=47 status=ok
// SIG undefined FUN_1445bccb2(void)

longlong FUN_1445bccb2(void)

{
  if (DAT_14cc23c30 == 0) {
    FUN_14000fc22(&DAT_14cc23c30,&PTR_FUN_14bdfd400);
  }
  return DAT_14cc23c30;
}



// FUNCTION 1445bcce2 FUN_1445bcce2 body=2403 status=ok
// SIG undefined FUN_1445bcce2(void)

void FUN_1445bcce2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8 [6];
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
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar10 = (undefined8 *)(param_2 + 0x38);
  local_f8[0] = 0;
  local_f8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_f8);
            goto LAB_1445bce9a;
          }
        }
        plVar11 = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar11 != local_f8) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_f8,plVar11,(int)plVar8[6]);
          }
          else {
            memcpy(local_f8,plVar11,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_120 = (undefined4)plVar8[6];
        local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,local_f8,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,local_f8,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar12;
        puVar12 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar8);
      *puVar10 = puVar6[1];
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_f8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_f8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_f8[0] = *(longlong *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_f8);
    }
  }
LAB_1445bce9a:
  plVar8 = local_f8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  *puVar10 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar11 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar11[3];
    if ((*(byte *)((longlong)plVar11 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar11 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar11 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar11 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar11);
          if (cVar5 != '\0') {
            (**(code **)(*plVar11 + 0xa0))(plVar11,lVar4,&local_98);
            goto LAB_1445bd089;
          }
        }
        puVar12 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar11 + 0x44));
        if (puVar12 != &local_98) {
          if ((*(byte *)((longlong)plVar11 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar11 + 0x100))(plVar11,&local_98,puVar12,(int)plVar11[6]);
          }
          else {
            memcpy(&local_98,puVar12,
                   (longlong)(int)plVar11[6] * (longlong)*(int *)((longlong)plVar11 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_120 = (undefined4)plVar11[6];
        local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
        FUN_1400746b0(plVar11,&local_98,lVar4,1);
      }
      else {
        (*pcVar2)(plVar11,&local_98,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar12;
        puVar12 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar11);
      *puVar10 = puVar6[1];
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_98);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_98);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_98 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_98);
    }
  }
LAB_1445bd089:
  puVar12 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(param_2 + 0x38);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  *puVar10 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar11 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar11[3];
    if ((*(byte *)((longlong)plVar11 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar11 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar11 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar11 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar11);
          if (cVar5 != '\0') {
            (**(code **)(*plVar11 + 0xa0))(plVar11,lVar4,local_f8 + 2);
            goto LAB_1445bd241;
          }
        }
        plVar9 = (longlong *)(lVar4 + *(int *)((longlong)plVar11 + 0x44));
        if (plVar9 != local_f8 + 2) {
          if ((*(byte *)((longlong)plVar11 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar11 + 0x100))(plVar11,local_f8 + 2,plVar9,(int)plVar11[6]);
          }
          else {
            memcpy(local_f8 + 2,plVar9,
                   (longlong)(int)plVar11[6] * (longlong)*(int *)((longlong)plVar11 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_120 = (undefined4)plVar11[6];
        local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
        FUN_1400746b0(plVar11,local_f8 + 2,lVar4,1);
      }
      else {
        (*pcVar2)(plVar11,local_f8 + 2,lVar4);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar6;
        puVar6 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar11);
      *puVar10 = puVar3[1];
    }
LAB_1445bd241:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar11 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_f8 + 2);
      goto LAB_1445bd241;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_f8 + 2);
      goto LAB_1445bd241;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_f8 + 2);
      goto LAB_1445bd241;
    }
    local_f8[2] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar11 = (longlong *)0x0;
  }
  plVar9 = local_f8 + 2;
  if (plVar11 != (longlong *)0x0) {
    plVar9 = plVar11;
  }
  local_108 = 0;
  uStack_100 = 0;
  *puVar10 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar11 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar11[3];
    if ((*(byte *)((longlong)plVar11 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar11 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar11 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar11 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar11);
          if (cVar5 != '\0') {
            (**(code **)(*plVar11 + 0xa0))(plVar11,lVar4,&local_108);
            goto LAB_1445bd410;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar11 + 0x44));
        if (puVar10 != &local_108) {
          if ((*(byte *)((longlong)plVar11 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar11 + 0x100))(plVar11,&local_108,puVar10,(int)plVar11[6]);
          }
          else {
            memcpy(&local_108,puVar10,
                   (longlong)(int)plVar11[6] * (longlong)*(int *)((longlong)plVar11 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_120 = (undefined4)plVar11[6];
        local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
        FUN_1400746b0(plVar11,&local_108,lVar4,1);
      }
      else {
        (*pcVar2)(plVar11,&local_108,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar11);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_108);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_108);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_108 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_108);
    }
  }
LAB_1445bd410:
  puVar10 = &local_108;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_118 = *puVar10;
  local_128 = &local_118;
  local_110 = puVar10[1];
  FUN_1445f329c(param_1,plVar8,puVar12,plVar9);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_f8 + 2);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_98);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bd646 FUN_1445bd646 body=47 status=ok
// SIG undefined FUN_1445bd646(void)

longlong FUN_1445bd646(void)

{
  if (DAT_14cc23c38 == 0) {
    FUN_14000fc22(&DAT_14cc23c38,&PTR_FUN_14bdfd540);
  }
  return DAT_14cc23c38;
}



// FUNCTION 1445bd676 FUN_1445bd676 body=1954 status=ok
// SIG undefined FUN_1445bd676(void)

void FUN_1445bd676(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = (undefined8 *)0x0;
      local_88 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar10 = *(byte **)(param_2 + 0x20);
  if (pbVar10 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar2)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_1445bd850;
          }
        }
        puVar11 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar11 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar10 + 1);
      *(byte **)(param_2 + 0x20) = pbVar10 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_48);
    }
  }
LAB_1445bd850:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = (undefined8 *)0x0;
      local_88 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar10 = *(byte **)(param_2 + 0x20);
  if (pbVar10 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar2)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_50);
            goto LAB_1445bd9e4;
          }
        }
        puVar11 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar11 != &local_50) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_50,puVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&local_50,puVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_50,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_50,lVar4);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445bd9e4:
    pbVar10 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_50);
      goto LAB_1445bd9e4;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_50);
      goto LAB_1445bd9e4;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_50);
      goto LAB_1445bd9e4;
    }
    local_50 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar2)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_68);
            goto LAB_1445bdb94;
          }
        }
        puVar11 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar11 != &local_68) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_68,puVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&local_68,puVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_68,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_68,lVar4);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar10 + 1);
      *(byte **)(param_2 + 0x20) = pbVar10 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
LAB_1445bdb94:
  uVar8 = local_48;
  uVar1 = local_50;
  puVar11 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = *puVar11;
  uVar7 = puVar11[1];
  local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_80 = uVar6;
  local_80[1] = uVar7;
  local_88 = &LAB_1445f1662;
  Discord_Client_DeleteUserMessage(param_1 + 0x28,uVar8,uVar1,FUN_1445f73c4);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bde19 FUN_1445bde19 body=47 status=ok
// SIG undefined FUN_1445bde19(void)

longlong FUN_1445bde19(void)

{
  if (DAT_14cc23c40 == 0) {
    FUN_14000fc22(&DAT_14cc23c40,&PTR_FUN_14bdfd580);
  }
  return DAT_14cc23c40;
}



// FUNCTION 1445bde61 FUN_1445bde61 body=47 status=ok
// SIG undefined FUN_1445bde61(void)

longlong FUN_1445bde61(void)

{
  if (DAT_14cc23c48 == 0) {
    FUN_14000fc22(&DAT_14cc23c48,&PTR_FUN_14bdfd5c0);
  }
  return DAT_14cc23c48;
}



// FUNCTION 1445bde90 FUN_1445bde90 body=52 status=ok
// SIG undefined FUN_1445bde90(void)

void FUN_1445bde90(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x30) == 1) {
    Discord_Client_Drop(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1445bdec4 FUN_1445bdec4 body=47 status=ok
// SIG undefined FUN_1445bdec4(void)

longlong FUN_1445bdec4(void)

{
  if (DAT_14cc23c50 == 0) {
    FUN_14000fc22(&DAT_14cc23c50,&PTR_FUN_14bdfd730);
  }
  return DAT_14cc23c50;
}



// FUNCTION 1445bdef4 FUN_1445bdef4 body=2487 status=ok
// SIG undefined FUN_1445bdef4(void)

void FUN_1445bdef4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  byte *pbVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1403a682c;
      local_90 = 0;
      local_98 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_38);
            goto LAB_1445be0ed;
          }
        }
        puVar9 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar9 != &local_38) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_38,puVar9,(int)plVar7[6]);
          }
          else {
            memcpy(&local_38,puVar9,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,&local_38,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_38,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_38);
    }
  }
LAB_1445be0ed:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1403a682c;
      local_90 = 0;
      local_98 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_40);
            goto LAB_1445be281;
          }
        }
        puVar9 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar9 != &local_40) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_40,puVar9,(int)plVar7[6]);
          }
          else {
            memcpy(&local_40,puVar9,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,&local_40,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_40,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445be281:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
      goto LAB_1445be281;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
      goto LAB_1445be281;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_40);
      goto LAB_1445be281;
    }
    local_40 = *(undefined8 *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,local_58);
            goto LAB_1445be3f6;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_58) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_58,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_58,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,local_58,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_58,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445be3f6:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_58);
      goto LAB_1445be3f6;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_58);
      goto LAB_1445be3f6;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_58);
      goto LAB_1445be3f6;
    }
    local_58[0] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    plVar7 = (longlong *)0x0;
  }
  plVar8 = local_58;
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_68);
            goto LAB_1445be5d3;
          }
        }
        puVar9 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar9 != &local_68) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_68,puVar9,(int)plVar7[6]);
          }
          else {
            memcpy(&local_68,puVar9,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,&local_68,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_68,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
LAB_1445be5d3:
  puVar9 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = *puVar9;
  local_98 = &local_78;
  local_70 = puVar9[1];
  FUN_1445f166c(param_1,local_38,local_40,plVar8);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445be8ac FUN_1445be8ac body=47 status=ok
// SIG undefined FUN_1445be8ac(void)

longlong FUN_1445be8ac(void)

{
  if (DAT_14cc23c58 == 0) {
    FUN_14000fc22(&DAT_14cc23c58,&PTR_FUN_14bdfd808);
  }
  return DAT_14cc23c58;
}



// FUNCTION 1445be8dc FUN_1445be8dc body=1292 status=ok
// SIG undefined FUN_1445be8dc(void)

void FUN_1445be8dc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_1445bea93;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445bea93:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445bea93;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445bea93;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445bea93;
    }
    local_48 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_1445bec43;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445bec43:
  uVar1 = local_48;
  puVar10 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = *puVar10;
  uVar7 = puVar10[1];
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar6;
  local_78[1] = uVar7;
  Discord_Client_EndCall(param_1 + 0x28,uVar1,FUN_1445f4d5a,&LAB_1445ede50);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bede9 FUN_1445bede9 body=47 status=ok
// SIG undefined FUN_1445bede9(void)

longlong FUN_1445bede9(void)

{
  if (DAT_14cc23c60 == 0) {
    FUN_14000fc22(&DAT_14cc23c60,&PTR_FUN_14bdfd8a0);
  }
  return DAT_14cc23c60;
}



// FUNCTION 1445bee18 FUN_1445bee18 body=641 status=ok
// SIG undefined FUN_1445bee18(void)

void FUN_1445bee18(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_58);
            goto LAB_1445befcd;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_58,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar4[6];
        local_68 = 0;
        FUN_1400746b0(plVar4,&local_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_58,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
LAB_1445befcd:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *puVar9;
  uVar7 = puVar9[1];
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = uVar2;
  puVar9[1] = uVar7;
  Discord_Client_EndCalls(param_1 + 0x28,FUN_1445f4dde,&LAB_1445ede5a,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bf09a FUN_1445bf09a body=47 status=ok
// SIG undefined FUN_1445bf09a(void)

longlong FUN_1445bf09a(void)

{
  if (DAT_14cc23c68 == 0) {
    FUN_14000fc22(&DAT_14cc23c68,&PTR_FUN_14bdfd9b8);
  }
  return DAT_14cc23c68;
}



// FUNCTION 1445bf0ca FUN_1445bf0ca body=798 status=ok
// SIG undefined FUN_1445bf0ca(void)

void FUN_1445bf0ca(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  uStack_28 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_88);
  uStack_21 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_88) >> 0x38);
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140a4831c;
      local_68 = 0x1000000008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_29);
            goto LAB_1445bf298;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_29,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_29,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_29,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_29 = (undefined1)uVar2;
      uStack_28 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_29);
    }
  }
LAB_1445bf298:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445edb8e(&local_40,local_29);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((CONCAT17(uStack_21,uStack_28) ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bf3e9 FUN_1445bf3e9 body=47 status=ok
// SIG undefined FUN_1445bf3e9(void)

longlong FUN_1445bf3e9(void)

{
  if (DAT_14cc23c70 == 0) {
    FUN_14000fc22(&DAT_14cc23c70,&PTR_FUN_14bdfdb10);
  }
  return DAT_14cc23c70;
}



// FUNCTION 1445bf418 FUN_1445bf418 body=1806 status=ok
// SIG undefined FUN_1445bf418(void)

void FUN_1445bf418(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_2 + 0x38);
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
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
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_48);
            goto LAB_1445bf5d6;
          }
        }
        plVar9 = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar9 != local_48) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_48,plVar9,(int)plVar8[6]);
          }
          else {
            memcpy(local_48,plVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar8[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,local_48,lVar4,1);
      }
      else {
        (*pcVar3)(plVar8,local_48,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48[0] = *(longlong *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_48);
    }
  }
LAB_1445bf5d6:
  plVar8 = local_48;
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar1;
  }
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1403a682c;
      local_90 = 0;
      local_98 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar9 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar9 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar9);
          if (cVar6 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar4,&local_50);
            goto LAB_1445bf77d;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar9 + 0x44));
        if (puVar10 != &local_50) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,&local_50,puVar10,(int)plVar9[6]);
          }
          else {
            memcpy(&local_50,puVar10,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar9[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,&local_50,lVar4,1);
      }
      else {
        (*pcVar3)(plVar9,&local_50,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar9);
      *plVar1 = puVar5[1];
    }
LAB_1445bf77d:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50);
      goto LAB_1445bf77d;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50);
      goto LAB_1445bf77d;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_50);
      goto LAB_1445bf77d;
    }
    local_50 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
  }
  local_68 = 0;
  uStack_60 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar4,&local_68);
            goto LAB_1445bf931;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar10 != &local_68) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_68,puVar10,(int)plVar1[6]);
          }
          else {
            memcpy(&local_68,puVar10,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar1[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_68,lVar4,1);
      }
      else {
        (*pcVar3)(plVar1,&local_68,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_68);
    }
  }
LAB_1445bf931:
  puVar10 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = *puVar10;
  local_70 = puVar10[1];
  FUN_1445ee904(param_1,plVar8,local_50);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445bfb27 FUN_1445bfb27 body=47 status=ok
// SIG undefined FUN_1445bfb27(void)

longlong FUN_1445bfb27(void)

{
  if (DAT_14cc23c78 == 0) {
    FUN_14000fc22(&DAT_14cc23c78,&PTR_FUN_14bdfdc88);
  }
  return DAT_14cc23c78;
}



// FUNCTION 1445bfb56 FUN_1445bfb56 body=1787 status=ok
// SIG undefined FUN_1445bfb56(void)

void FUN_1445bfb56(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  byte *pbVar6;
  longlong *plVar7;
  undefined1 *_Src;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [2];
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  
  uStack_30 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_a8);
  uStack_29 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_a8) >> 0x38);
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_140a4831c;
      local_88 = 0x1000000008001;
      local_80 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_31);
            goto LAB_1445bfd09;
          }
        }
        _Src = (undefined1 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (_Src != &local_31) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_31,_Src,(int)plVar7[6]);
          }
          else {
            memcpy(&local_31,_Src,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_31,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_31,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445bfd09:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_31);
      goto LAB_1445bfd09;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_31);
      goto LAB_1445bfd09;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_31);
      goto LAB_1445bfd09;
    }
    uVar1 = *(undefined8 *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    local_31 = (undefined1)uVar1;
    uStack_30 = (undefined7)((ulonglong)uVar1 >> 8);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,local_48);
            goto LAB_1445bfe7e;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_48) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_48,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_48,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,local_48,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_48,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445bfe7e:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445bfe7e;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445bfe7e;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445bfe7e;
    }
    local_48[0] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    plVar7 = (longlong *)0x0;
  }
  plVar8 = local_48;
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_58);
            goto LAB_1445c005b;
          }
        }
        puVar9 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_58,puVar9,(int)plVar7[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_58,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_58,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445c005b:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445eebc8(param_1,local_31,plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((CONCAT17(uStack_29,uStack_30) ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c0252 FUN_1445c0252 body=47 status=ok
// SIG undefined FUN_1445c0252(void)

longlong FUN_1445c0252(void)

{
  if (DAT_14cc23c80 == 0) {
    FUN_14000fc22(&DAT_14cc23c80,&PTR_FUN_14bdfdd10);
  }
  return DAT_14cc23c80;
}



// FUNCTION 1445c0282 FUN_1445c0282 body=42 status=ok
// SIG undefined FUN_1445c0282(void)

void FUN_1445c0282(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_GetApplicationId(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c02ac FUN_1445c02ac body=47 status=ok
// SIG undefined FUN_1445c02ac(void)

longlong FUN_1445c02ac(void)

{
  if (DAT_14cc23c88 == 0) {
    FUN_14000fc22(&DAT_14cc23c88,&PTR_FUN_14bdfdde8);
  }
  return DAT_14cc23c88;
}



// FUNCTION 1445c02dc FUN_1445c02dc body=744 status=ok
// SIG undefined FUN_1445c02dc(void)

void FUN_1445c02dc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_38);
            goto LAB_1445c04b6;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_38,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar3[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_38,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_38,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar7,param_2,&local_38);
    }
  }
LAB_1445c04b6:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1445ede64(param_1,local_38);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c05c5 FUN_1445c05c5 body=47 status=ok
// SIG undefined FUN_1445c05c5(void)

longlong FUN_1445c05c5(void)

{
  if (DAT_14cc23c90 == 0) {
    FUN_14000fc22(&DAT_14cc23c90,&PTR_FUN_14bdfdec0);
  }
  return DAT_14cc23c90;
}



// FUNCTION 1445c05f4 FUN_1445c05f4 body=139 status=ok
// SIG undefined FUN_1445c05f4(void)

void FUN_1445c05f4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445edf7e(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c0680 FUN_1445c0680 body=47 status=ok
// SIG undefined FUN_1445c0680(void)

longlong FUN_1445c0680(void)

{
  if (DAT_14cc23c98 == 0) {
    FUN_14000fc22(&DAT_14cc23c98,&PTR_FUN_14bdfdfa8);
  }
  return DAT_14cc23c98;
}



// FUNCTION 1445c06b0 FUN_1445c06b0 body=744 status=ok
// SIG undefined FUN_1445c06b0(void)

void FUN_1445c06b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_38);
            goto LAB_1445c088a;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_38,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar3[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_38,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_38,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar7,param_2,&local_38);
    }
  }
LAB_1445c088a:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1445f194c(param_1,local_38);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c0999 FUN_1445c0999 body=47 status=ok
// SIG undefined FUN_1445c0999(void)

longlong FUN_1445c0999(void)

{
  if (DAT_14cc23ca0 == 0) {
    FUN_14000fc22(&DAT_14cc23ca0,&PTR_FUN_14bdfe048);
  }
  return DAT_14cc23ca0;
}



// FUNCTION 1445c09c8 FUN_1445c09c8 body=641 status=ok
// SIG undefined FUN_1445c09c8(void)

void FUN_1445c09c8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_58);
            goto LAB_1445c0b7d;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_58,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar4[6];
        local_68 = 0;
        FUN_1400746b0(plVar4,&local_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_58,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
LAB_1445c0b7d:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *puVar9;
  uVar7 = puVar9[1];
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = uVar2;
  puVar9[1] = uVar7;
  Discord_Client_GetCurrentInputDevice(param_1 + 0x28,FUN_1445f4f12,&LAB_1445ee06c,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c0c4a FUN_1445c0c4a body=47 status=ok
// SIG undefined FUN_1445c0c4a(void)

longlong FUN_1445c0c4a(void)

{
  if (DAT_14cc23ca8 == 0) {
    FUN_14000fc22(&DAT_14cc23ca8,&PTR_FUN_14bdfe0e8);
  }
  return DAT_14cc23ca8;
}



// FUNCTION 1445c0c7a FUN_1445c0c7a body=641 status=ok
// SIG undefined FUN_1445c0c7a(void)

void FUN_1445c0c7a(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_58);
            goto LAB_1445c0e2f;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_58,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar4[6];
        local_68 = 0;
        FUN_1400746b0(plVar4,&local_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_58,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
LAB_1445c0e2f:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *puVar9;
  uVar7 = puVar9[1];
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = uVar2;
  puVar9[1] = uVar7;
  Discord_Client_GetCurrentOutputDevice(param_1 + 0x28,FUN_1445f4fbe,&LAB_1445ee076,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c0efc FUN_1445c0efc body=47 status=ok
// SIG undefined FUN_1445c0efc(void)

longlong FUN_1445c0efc(void)

{
  if (DAT_14cc23cb0 == 0) {
    FUN_14000fc22(&DAT_14cc23cb0,&PTR_FUN_14bdfe180);
  }
  return DAT_14cc23cb0;
}



// FUNCTION 1445c0f2c FUN_1445c0f2c body=115 status=ok
// SIG undefined FUN_1445c0f2c(void)

void FUN_1445c0f2c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_GetCurrentUser(param_1 + 0x28,&local_20);
  lVar1 = FUN_1445eaf93(DAT_14c951640);
  *(undefined8 *)(lVar1 + 0x28) = local_20;
  *(undefined4 *)(lVar1 + 0x30) = 1;
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c0fa0 FUN_1445c0fa0 body=47 status=ok
// SIG undefined FUN_1445c0fa0(void)

longlong FUN_1445c0fa0(void)

{
  if (DAT_14cc23cb8 == 0) {
    FUN_14000fc22(&DAT_14cc23cb8,&PTR_FUN_14bdfe220);
  }
  return DAT_14cc23cb8;
}



// FUNCTION 1445c0fd0 FUN_1445c0fd0 body=38 status=ok
// SIG undefined FUN_1445c0fd0(void)

void FUN_1445c0fd0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1445f48d2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c0ff6 FUN_1445c0ff6 body=47 status=ok
// SIG undefined FUN_1445c0ff6(void)

longlong FUN_1445c0ff6(void)

{
  if (DAT_14cc23cc0 == 0) {
    FUN_14000fc22(&DAT_14cc23cc0,&PTR_FUN_14bdfe2b8);
  }
  return DAT_14cc23cc0;
}



// FUNCTION 1445c1026 FUN_1445c1026 body=139 status=ok
// SIG undefined FUN_1445c1026(void)

void FUN_1445c1026(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445edbf4(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c10b2 FUN_1445c10b2 body=47 status=ok
// SIG undefined FUN_1445c10b2(void)

longlong FUN_1445c10b2(void)

{
  if (DAT_14cc23cc8 == 0) {
    FUN_14000fc22(&DAT_14cc23cc8,&PTR_FUN_14bdfe358);
  }
  return DAT_14cc23cc8;
}



// FUNCTION 1445c10e2 FUN_1445c10e2 body=139 status=ok
// SIG undefined FUN_1445c10e2(void)

void FUN_1445c10e2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445edc58(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c116e FUN_1445c116e body=47 status=ok
// SIG undefined FUN_1445c116e(void)

longlong FUN_1445c116e(void)

{
  if (DAT_14cc23cd0 == 0) {
    FUN_14000fc22(&DAT_14cc23cd0,&PTR_FUN_14bdfe3f8);
  }
  return DAT_14cc23cd0;
}



// FUNCTION 1445c119e FUN_1445c119e body=139 status=ok
// SIG undefined FUN_1445c119e(void)

void FUN_1445c119e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445edcbc(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c122a FUN_1445c122a body=47 status=ok
// SIG undefined FUN_1445c122a(void)

longlong FUN_1445c122a(void)

{
  if (DAT_14cc23cd8 == 0) {
    FUN_14000fc22(&DAT_14cc23cd8,&PTR_FUN_14bdfe4f0);
  }
  return DAT_14cc23cd8;
}



// FUNCTION 1445c125a FUN_1445c125a body=1292 status=ok
// SIG undefined FUN_1445c125a(void)

void FUN_1445c125a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_1445c1411;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445c1411:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445c1411;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445c1411;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445c1411;
    }
    local_48 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_1445c15c1;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445c15c1:
  uVar1 = local_48;
  puVar10 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = *puVar10;
  uVar7 = puVar10[1];
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar6;
  local_78[1] = uVar7;
  Discord_Client_GetDiscordClientConnectedUser(param_1 + 0x28,uVar1,FUN_1445fb382,&LAB_1445f4934);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c1767 FUN_1445c1767 body=47 status=ok
// SIG undefined FUN_1445c1767(void)

longlong FUN_1445c1767(void)

{
  if (DAT_14cc23ce0 == 0) {
    FUN_14000fc22(&DAT_14cc23ce0,&PTR_FUN_14bdfe5e8);
  }
  return DAT_14cc23ce0;
}



// FUNCTION 1445c1796 FUN_1445c1796 body=1292 status=ok
// SIG undefined FUN_1445c1796(void)

void FUN_1445c1796(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_1445c194d;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445c194d:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445c194d;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445c194d;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445c194d;
    }
    local_48 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar2)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_1445c1afd;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445c1afd:
  uVar1 = local_48;
  puVar10 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = *puVar10;
  uVar7 = puVar10[1];
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar6;
  local_78[1] = uVar7;
  Discord_Client_GetGuildChannels(param_1 + 0x28,uVar1,FUN_1445f8fa4,&LAB_1445f3612);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c1ca3 FUN_1445c1ca3 body=47 status=ok
// SIG undefined FUN_1445c1ca3(void)

longlong FUN_1445c1ca3(void)

{
  if (DAT_14cc23ce8 == 0) {
    FUN_14000fc22(&DAT_14cc23ce8,&PTR_FUN_14bdfe680);
  }
  return DAT_14cc23ce8;
}



// FUNCTION 1445c1cd2 FUN_1445c1cd2 body=641 status=ok
// SIG undefined FUN_1445c1cd2(void)

void FUN_1445c1cd2(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_58);
            goto LAB_1445c1e87;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_58,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar4[6];
        local_68 = 0;
        FUN_1400746b0(plVar4,&local_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_58,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
LAB_1445c1e87:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *puVar9;
  uVar7 = puVar9[1];
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = uVar2;
  puVar9[1] = uVar7;
  Discord_Client_GetInputDevices(param_1 + 0x28,FUN_1445f52f4,&LAB_1445ee080,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c1f54 FUN_1445c1f54 body=47 status=ok
// SIG undefined FUN_1445c1f54(void)

longlong FUN_1445c1f54(void)

{
  if (DAT_14cc23cf0 == 0) {
    FUN_14000fc22(&DAT_14cc23cf0,&PTR_FUN_14bdfe710);
  }
  return DAT_14cc23cf0;
}



// FUNCTION 1445c1f84 FUN_1445c1f84 body=43 status=ok
// SIG undefined FUN_1445c1f84(void)

void FUN_1445c1f84(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_GetInputVolume(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c1faf FUN_1445c1faf body=47 status=ok
// SIG undefined FUN_1445c1faf(void)

longlong FUN_1445c1faf(void)

{
  if (DAT_14cc23cf8 == 0) {
    FUN_14000fc22(&DAT_14cc23cf8,&PTR_FUN_14bdfe7f0);
  }
  return DAT_14cc23cf8;
}



// FUNCTION 1445c1fde FUN_1445c1fde body=744 status=ok
// SIG undefined FUN_1445c1fde(void)

void FUN_1445c1fde(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_38);
            goto LAB_1445c21b8;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_38,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar3[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_38,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_38,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar7,param_2,&local_38);
    }
  }
LAB_1445c21b8:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1445f361c(param_1,local_38);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c22c7 FUN_1445c22c7 body=47 status=ok
// SIG undefined FUN_1445c22c7(void)

longlong FUN_1445c22c7(void)

{
  if (DAT_14cc23d00 == 0) {
    FUN_14000fc22(&DAT_14cc23d00,&PTR_FUN_14bdfe8d0);
  }
  return DAT_14cc23d00;
}



// FUNCTION 1445c22f6 FUN_1445c22f6 body=139 status=ok
// SIG undefined FUN_1445c22f6(void)

void FUN_1445c22f6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445f367e(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c2382 FUN_1445c2382 body=47 status=ok
// SIG undefined FUN_1445c2382(void)

longlong FUN_1445c2382(void)

{
  if (DAT_14cc23d08 == 0) {
    FUN_14000fc22(&DAT_14cc23d08,&PTR_FUN_14bdfea08);
  }
  return DAT_14cc23d08;
}



// FUNCTION 1445c23b2 FUN_1445c23b2 body=1959 status=ok
// SIG undefined FUN_1445c23b2(void)

void FUN_1445c23b2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char cVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 *local_80;
  undefined *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_48 = 0;
  uStack_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = (undefined8 *)0x0;
      local_88 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar10 = *(byte **)(param_2 + 0x20);
  if (pbVar10 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar2)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_48);
            goto LAB_1445c258c;
          }
        }
        puVar11 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar11 != &uStack_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_48,puVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_48,puVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&uStack_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&uStack_48,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar12;
        puVar12 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar10 + 1);
      *(byte **)(param_2 + 0x20) = pbVar10 + 9;
      uStack_48 = (undefined4)uVar1;
      uStack_44 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_48);
    }
  }
LAB_1445c258c:
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_70 = FUN_1405ebbb2;
      local_78 = &DAT_14c9520b8;
      local_80 = (undefined8 *)0x0;
      local_88 = (undefined1 *)0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar10 = *(byte **)(param_2 + 0x20);
  if (pbVar10 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar2)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_4c);
            goto LAB_1445c271f;
          }
        }
        puVar11 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar11 != &local_4c) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_4c,puVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&local_4c,puVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_4c,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_4c,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar12;
        puVar12 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445c271f:
    pbVar10 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_4c);
      goto LAB_1445c271f;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_4c);
      goto LAB_1445c271f;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_4c);
      goto LAB_1445c271f;
    }
    uVar1 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    local_4c = (undefined4)uVar1;
    uStack_48 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar2)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_68);
            goto LAB_1445c28cf;
          }
        }
        puVar12 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar12 != &local_68) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_68,puVar12,(int)plVar3[6]);
          }
          else {
            memcpy(&local_68,puVar12,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_68,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_68,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar12;
        puVar12 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar10 + 1);
      *(byte **)(param_2 + 0x20) = pbVar10 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
LAB_1445c28cf:
  uVar8 = local_4c;
  puVar12 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *puVar12;
  uVar6 = puVar12[1];
  uVar7 = CONCAT44(uStack_44,uStack_48);
  local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_80 = uVar1;
  local_80[1] = uVar6;
  local_88 = &LAB_1445f19ae;
  Discord_Client_GetLobbyMessagesWithLimit(param_1 + 0x28,uVar7,uVar8,FUN_1445f77a6);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c2b5a FUN_1445c2b5a body=47 status=ok
// SIG undefined FUN_1445c2b5a(void)

longlong FUN_1445c2b5a(void)

{
  if (DAT_14cc23d10 == 0) {
    FUN_14000fc22(&DAT_14cc23d10,&PTR_FUN_14bdfeaf8);
  }
  return DAT_14cc23d10;
}



// FUNCTION 1445c2b8a FUN_1445c2b8a body=744 status=ok
// SIG undefined FUN_1445c2b8a(void)

void FUN_1445c2b8a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_38);
            goto LAB_1445c2d64;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_38,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar3[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_38,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_38,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar7,param_2,&local_38);
    }
  }
LAB_1445c2d64:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1445f19b8(param_1,local_38);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c2e73 FUN_1445c2e73 body=47 status=ok
// SIG undefined FUN_1445c2e73(void)

longlong FUN_1445c2e73(void)

{
  if (DAT_14cc23d18 == 0) {
    FUN_14000fc22(&DAT_14cc23d18,&PTR_FUN_14bdfeb98);
  }
  return DAT_14cc23d18;
}



// FUNCTION 1445c2ea2 FUN_1445c2ea2 body=641 status=ok
// SIG undefined FUN_1445c2ea2(void)

void FUN_1445c2ea2(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_58);
            goto LAB_1445c3057;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_58,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar4[6];
        local_68 = 0;
        FUN_1400746b0(plVar4,&local_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_58,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
LAB_1445c3057:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *puVar9;
  uVar7 = puVar9[1];
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = uVar2;
  puVar9[1] = uVar7;
  Discord_Client_GetOutputDevices(param_1 + 0x28,FUN_1445f5452,&LAB_1445ee08a,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c3124 FUN_1445c3124 body=47 status=ok
// SIG undefined FUN_1445c3124(void)

longlong FUN_1445c3124(void)

{
  if (DAT_14cc23d20 == 0) {
    FUN_14000fc22(&DAT_14cc23d20,&PTR_FUN_14bdfec28);
  }
  return DAT_14cc23d20;
}



// FUNCTION 1445c3154 FUN_1445c3154 body=43 status=ok
// SIG undefined FUN_1445c3154(void)

void FUN_1445c3154(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_GetOutputVolume(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c317f FUN_1445c317f body=47 status=ok
// SIG undefined FUN_1445c317f(void)

longlong FUN_1445c317f(void)

{
  if (DAT_14cc23d28 == 0) {
    FUN_14000fc22(&DAT_14cc23d28,&PTR_FUN_14bdfee10);
  }
  return DAT_14cc23d28;
}



// FUNCTION 1445c31ae FUN_1445c31ae body=2490 status=ok
// SIG undefined FUN_1445c31ae(void)

void FUN_1445c31ae(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  byte *pbVar6;
  longlong *plVar7;
  undefined7 *_Src;
  undefined1 *_Src_00;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  undefined1 local_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_38 = 0;
  uStack_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1403a682c;
      local_90 = 0;
      local_98 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&uStack_38);
            goto LAB_1445c33a7;
          }
        }
        _Src = (undefined7 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (_Src != &uStack_38) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&uStack_38,_Src,(int)plVar7[6]);
          }
          else {
            memcpy(&uStack_38,_Src,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,&uStack_38,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&uStack_38,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
      uStack_38 = (undefined7)uVar1;
      uStack_31 = (undefined1)((ulonglong)uVar1 >> 0x38);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_38);
    }
  }
LAB_1445c33a7:
  local_39 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_140a4831c;
      local_98 = (undefined8 *)0x1000000008001;
      local_90 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_39);
            goto LAB_1445c3537;
          }
        }
        _Src_00 = (undefined1 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (_Src_00 != &local_39) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_39,_Src_00,(int)plVar7[6]);
          }
          else {
            memcpy(&local_39,_Src_00,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,&local_39,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_39,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445c3537:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_39);
      goto LAB_1445c3537;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_39);
      goto LAB_1445c3537;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_39);
      goto LAB_1445c3537;
    }
    uVar1 = *(undefined8 *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    local_39 = (undefined1)uVar1;
    uStack_38 = (undefined7)((ulonglong)uVar1 >> 8);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,local_58);
            goto LAB_1445c36ac;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_58) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_58,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_58,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,local_58,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_58,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445c36ac:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_58);
      goto LAB_1445c36ac;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_58);
      goto LAB_1445c36ac;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_58);
      goto LAB_1445c36ac;
    }
    local_58[0] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    plVar7 = (longlong *)0x0;
  }
  plVar8 = local_58;
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_68);
            goto LAB_1445c3889;
          }
        }
        puVar9 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar9 != &local_68) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_68,puVar9,(int)plVar7[6]);
          }
          else {
            memcpy(&local_68,puVar9,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,&local_68,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_68,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
LAB_1445c3889:
  puVar9 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = *puVar9;
  local_98 = &local_78;
  local_70 = puVar9[1];
  FUN_1445eee8e(param_1,CONCAT17(uStack_31,uStack_38),local_39,plVar8);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c3b69 FUN_1445c3b69 body=47 status=ok
// SIG undefined FUN_1445c3b69(void)

longlong FUN_1445c3b69(void)

{
  if (DAT_14cc23d30 == 0) {
    FUN_14000fc22(&DAT_14cc23d30,&PTR_FUN_14bdfeef8);
  }
  return DAT_14cc23d30;
}



// FUNCTION 1445c3b98 FUN_1445c3b98 body=785 status=ok
// SIG undefined FUN_1445c3b98(void)

void FUN_1445c3b98(longlong param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar7,&local_40);
            goto LAB_1445c3d72;
          }
        }
        puVar8 = (undefined8 *)(lVar7 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_40) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_40,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_40,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_40,lVar7,1);
      }
      else {
        (*pcVar3)(plVar4,&local_40,lVar7);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
LAB_1445c3d72:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_GetRelationshipHandle(param_1 + 0x28,local_40,&local_38);
  lVar7 = FUN_1445eb5f2(DAT_14c951640);
  *(undefined8 *)(lVar7 + 0x28) = local_38;
  *(undefined4 *)(lVar7 + 0x30) = 1;
  *param_3 = lVar7;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c3eaa FUN_1445c3eaa body=47 status=ok
// SIG undefined FUN_1445c3eaa(void)

longlong FUN_1445c3eaa(void)

{
  if (DAT_14cc23d38 == 0) {
    FUN_14000fc22(&DAT_14cc23d38,&PTR_FUN_14bdfefd8);
  }
  return DAT_14cc23d38;
}



// FUNCTION 1445c3eda FUN_1445c3eda body=139 status=ok
// SIG undefined FUN_1445c3eda(void)

void FUN_1445c3eda(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445f3e90(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c3f66 FUN_1445c3f66 body=47 status=ok
// SIG undefined FUN_1445c3f66(void)

longlong FUN_1445c3f66(void)

{
  if (DAT_14cc23d40 == 0) {
    FUN_14000fc22(&DAT_14cc23d40,&PTR_FUN_14bdff158);
  }
  return DAT_14cc23d40;
}



// FUNCTION 1445c3f96 FUN_1445c3f96 body=812 status=ok
// SIG undefined FUN_1445c3f96(void)

void FUN_1445c3f96(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  
  uStack_30 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_88);
  uStack_29 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_88) >> 0x38);
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140a4831c;
      local_68 = 0x1000000008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_31);
            goto LAB_1445c416c;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_31) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_31,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_31,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_31,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_31,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_31 = (undefined1)uVar2;
      uStack_30 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_31);
    }
  }
LAB_1445c416c:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445f3f68(param_1,&local_48,local_31);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((CONCAT17(uStack_29,uStack_30) ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c42c8 FUN_1445c42c8 body=47 status=ok
// SIG undefined FUN_1445c42c8(void)

longlong FUN_1445c42c8(void)

{
  if (DAT_14cc23d48 == 0) {
    FUN_14000fc22(&DAT_14cc23d48,&PTR_FUN_14bdff1f0);
  }
  return DAT_14cc23d48;
}



// FUNCTION 1445c42f8 FUN_1445c42f8 body=41 status=ok
// SIG undefined FUN_1445c42f8(void)

void FUN_1445c42f8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_GetSelfDeafAll(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c4326 FUN_1445c4326 body=47 status=ok
// SIG undefined FUN_1445c4326(void)

longlong FUN_1445c4326(void)

{
  if (DAT_14cc23d50 == 0) {
    FUN_14000fc22(&DAT_14cc23d50,&PTR_FUN_14bdff288);
  }
  return DAT_14cc23d50;
}



// FUNCTION 1445c4356 FUN_1445c4356 body=41 status=ok
// SIG undefined FUN_1445c4356(void)

void FUN_1445c4356(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_GetSelfMuteAll(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c437f FUN_1445c437f body=47 status=ok
// SIG undefined FUN_1445c437f(void)

longlong FUN_1445c437f(void)

{
  if (DAT_14cc23d58 == 0) {
    FUN_14000fc22(&DAT_14cc23d58,&PTR_FUN_14bdff360);
  }
  return DAT_14cc23d58;
}



// FUNCTION 1445c43ae FUN_1445c43ae body=41 status=ok
// SIG undefined FUN_1445c43ae(void)

void FUN_1445c43ae(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_GetStatus(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c43d7 FUN_1445c43d7 body=47 status=ok
// SIG undefined FUN_1445c43d7(void)

longlong FUN_1445c43d7(void)

{
  if (DAT_14cc23d60 == 0) {
    FUN_14000fc22(&DAT_14cc23d60,&PTR_FUN_14bdff518);
  }
  return DAT_14cc23d60;
}



// FUNCTION 1445c4406 FUN_1445c4406 body=2926 status=ok
// SIG undefined FUN_1445c4406(void)

void FUN_1445c4406(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88 [7];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_b8 = FUN_1446ddbd2();
      local_b0 = FUN_1403a682c;
      local_c0 = (undefined8 *)0x0;
      local_c8 = (longlong *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&local_50);
            goto LAB_1445c45da;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar10 != &local_50) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_50,puVar10,(int)plVar8[6]);
          }
          else {
            memcpy(&local_50,puVar10,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,(int)plVar8[6]);
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,&local_50,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&local_50,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
    }
LAB_1445c45da:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_50);
      goto LAB_1445c45da;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_50);
      goto LAB_1445c45da;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_50);
      goto LAB_1445c45da;
    }
    local_50 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
  }
  puVar10 = (undefined8 *)(param_2 + 0x38);
  local_88[4] = 0;
  local_88[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_88 + 4);
            goto LAB_1445c4765;
          }
        }
        plVar11 = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar11 != local_88 + 4) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_88 + 4,plVar11,(int)plVar8[6]);
          }
          else {
            memcpy(local_88 + 4,plVar11,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,(int)plVar8[6]);
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,local_88 + 4,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,local_88 + 4,lVar4);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar6;
        puVar6 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar8);
      *puVar10 = puVar3[1];
    }
LAB_1445c4765:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_88 + 4);
      goto LAB_1445c4765;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_88 + 4);
      goto LAB_1445c4765;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_88 + 4);
      goto LAB_1445c4765;
    }
    local_88[4] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  plVar11 = local_88 + 4;
  if (plVar8 != (longlong *)0x0) {
    plVar11 = plVar8;
  }
  local_88[2] = 0;
  local_88[3] = 0;
  *puVar10 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_88 + 2);
            goto LAB_1445c48ee;
          }
        }
        plVar12 = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar12 != local_88 + 2) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_88 + 2,plVar12,(int)plVar8[6]);
          }
          else {
            memcpy(local_88 + 2,plVar12,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,(int)plVar8[6]);
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,local_88 + 2,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,local_88 + 2,lVar4);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar6;
        puVar6 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar8);
      *puVar10 = puVar3[1];
    }
LAB_1445c48ee:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_88 + 2);
      goto LAB_1445c48ee;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_88 + 2);
      goto LAB_1445c48ee;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_88 + 2);
      goto LAB_1445c48ee;
    }
    local_88[2] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  plVar12 = local_88 + 2;
  if (plVar8 != (longlong *)0x0) {
    plVar12 = plVar8;
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *puVar10 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_88);
            goto LAB_1445c4a74;
          }
        }
        plVar9 = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar9 != local_88) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_88,plVar9,(int)plVar8[6]);
          }
          else {
            memcpy(local_88,plVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,(int)plVar8[6]);
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,local_88,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,local_88,lVar4);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar6;
        puVar6 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar8);
      *puVar10 = puVar3[1];
    }
LAB_1445c4a74:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_88);
      goto LAB_1445c4a74;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_88);
      goto LAB_1445c4a74;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_88);
      goto LAB_1445c4a74;
    }
    local_88[0] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  plVar9 = local_88;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = plVar8;
  }
  local_98 = 0;
  uStack_90 = 0;
  *puVar10 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&local_98);
            goto LAB_1445c4c8f;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar10 != &local_98) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_98,puVar10,(int)plVar8[6]);
          }
          else {
            memcpy(&local_98,puVar10,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,(int)plVar8[6]);
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,&local_98,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&local_98,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_98);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_98);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_98 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_98);
    }
  }
LAB_1445c4c8f:
  puVar10 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = *puVar10;
  local_c0 = &local_a8;
  local_a0 = puVar10[1];
  local_c8 = plVar9;
  FUN_1445ef16e(param_1,local_50,plVar11,plVar12);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if (local_88[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c4f75 FUN_1445c4f75 body=47 status=ok
// SIG undefined FUN_1445c4f75(void)

longlong FUN_1445c4f75(void)

{
  if (DAT_14cc23d68 == 0) {
    FUN_14000fc22(&DAT_14cc23d68,&PTR_FUN_14bdff608);
  }
  return DAT_14cc23d68;
}



// FUNCTION 1445c4fa4 FUN_1445c4fa4 body=1303 status=ok
// SIG undefined FUN_1445c4fa4(void)

void FUN_1445c4fa4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong *_Src;
  undefined8 *puVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_48);
            goto LAB_1445c515b;
          }
        }
        _Src = (longlong *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,_Src,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,_Src,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_48,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar8);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445c515b:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445c515b;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445c515b;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445c515b;
    }
    local_48 = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar8,&local_58);
            goto LAB_1445c530b;
          }
        }
        puVar9 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_58,lVar8,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar8);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
LAB_1445c530b:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *puVar9;
  uVar5 = puVar9[1];
  lVar8 = local_48 + 0x28;
  if (local_48 == 0) {
    lVar8 = 0;
  }
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar1;
  local_78[1] = uVar5;
  Discord_Client_GetTokenFromDevice(param_1 + 0x28,lVar8,FUN_1445f65f8,&LAB_1445ef164);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c54bc FUN_1445c54bc body=47 status=ok
// SIG undefined FUN_1445c54bc(void)

longlong FUN_1445c54bc(void)

{
  if (DAT_14cc23d70 == 0) {
    FUN_14000fc22(&DAT_14cc23d70,&PTR_FUN_14bdff7d0);
  }
  return DAT_14cc23d70;
}



// FUNCTION 1445c54ec FUN_1445c54ec body=2490 status=ok
// SIG undefined FUN_1445c54ec(void)

void FUN_1445c54ec(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  byte *pbVar6;
  longlong *plVar7;
  undefined7 *_Src;
  undefined1 *_Src_00;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  undefined1 local_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_38 = 0;
  uStack_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&uStack_38);
            goto LAB_1445c56e5;
          }
        }
        _Src = (undefined7 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (_Src != &uStack_38) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&uStack_38,_Src,(int)plVar7[6]);
          }
          else {
            memcpy(&uStack_38,_Src,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,&uStack_38,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&uStack_38,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
      uStack_38 = (undefined7)uVar1;
      uStack_31 = (undefined1)((ulonglong)uVar1 >> 0x38);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_38);
    }
  }
LAB_1445c56e5:
  local_39 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_140a4831c;
      local_98 = (undefined8 *)0x1000000008001;
      local_90 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_39);
            goto LAB_1445c5875;
          }
        }
        _Src_00 = (undefined1 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (_Src_00 != &local_39) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_39,_Src_00,(int)plVar7[6]);
          }
          else {
            memcpy(&local_39,_Src_00,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,&local_39,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_39,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445c5875:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_39);
      goto LAB_1445c5875;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_39);
      goto LAB_1445c5875;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_39);
      goto LAB_1445c5875;
    }
    uVar1 = *(undefined8 *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    local_39 = (undefined1)uVar1;
    uStack_38 = (undefined7)((ulonglong)uVar1 >> 8);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,local_58);
            goto LAB_1445c59ea;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_58) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_58,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_58,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,local_58,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_58,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445c59ea:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_58);
      goto LAB_1445c59ea;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_58);
      goto LAB_1445c59ea;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_58);
      goto LAB_1445c59ea;
    }
    local_58[0] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    plVar7 = (longlong *)0x0;
  }
  plVar8 = local_58;
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_68);
            goto LAB_1445c5bc7;
          }
        }
        puVar9 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar9 != &local_68) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_68,puVar9,(int)plVar7[6]);
          }
          else {
            memcpy(&local_68,puVar9,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar7[6]);
        local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar7,&local_68,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_68,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
LAB_1445c5bc7:
  puVar9 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = *puVar9;
  local_98 = &local_78;
  local_70 = puVar9[1];
  FUN_1445ef902(param_1,CONCAT17(uStack_31,uStack_38),local_39,plVar8);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c5ea7 FUN_1445c5ea7 body=47 status=ok
// SIG undefined FUN_1445c5ea7(void)

longlong FUN_1445c5ea7(void)

{
  if (DAT_14cc23d78 == 0) {
    FUN_14000fc22(&DAT_14cc23d78,&PTR_FUN_14bdffa50);
  }
  return DAT_14cc23d78;
}



// FUNCTION 1445c5ed6 FUN_1445c5ed6 body=4206 status=ok
// SIG undefined FUN_1445c5ed6(void)

void FUN_1445c5ed6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  byte *pbVar7;
  longlong *plVar8;
  undefined7 *puVar9;
  undefined1 *_Src;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_108 [32];
  undefined7 *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [3];
  undefined1 local_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 uStack_80;
  longlong local_78 [5];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_d8 = (longlong *)FUN_1446ddbd2();
      local_d0 = FUN_1403a682c;
      local_e0 = 0;
      local_e8 = (undefined7 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar4,&local_50);
            goto LAB_1445c60aa;
          }
        }
        puVar11 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar11 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar11,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar11,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar1[6]);
        local_e8 = (undefined7 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_50,lVar4,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar4);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445c60aa:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50);
      goto LAB_1445c60aa;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50);
      goto LAB_1445c60aa;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_50);
      goto LAB_1445c60aa;
    }
    local_50 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
  }
  plVar1 = (longlong *)(param_2 + 0x38);
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
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
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_78 + 2);
            goto LAB_1445c6235;
          }
        }
        plVar12 = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar12 != local_78 + 2) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_78 + 2,plVar12,(int)plVar8[6]);
          }
          else {
            memcpy(local_78 + 2,plVar12,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar8[6]);
        local_e8 = (undefined7 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,local_78 + 2,lVar4,1);
      }
      else {
        (*pcVar3)(plVar8,local_78 + 2,lVar4);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *plVar1 = puVar5[1];
    }
LAB_1445c6235:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_78 + 2);
      goto LAB_1445c6235;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_78 + 2);
      goto LAB_1445c6235;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,local_78 + 2);
      goto LAB_1445c6235;
    }
    local_78[2] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  plVar12 = local_78 + 2;
  if (plVar8 != (longlong *)0x0) {
    plVar12 = plVar8;
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
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
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_78);
            goto LAB_1445c63d3;
          }
        }
        plVar13 = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar13 != local_78) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_78,plVar13,(int)plVar8[6]);
          }
          else {
            memcpy(local_78,plVar13,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar8[6]);
        local_e8 = (undefined7 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,local_78,lVar4,1);
      }
      else {
        (*pcVar3)(plVar8,local_78,lVar4);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *plVar1 = puVar5[1];
    }
LAB_1445c63d3:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_78);
      goto LAB_1445c63d3;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_78);
      goto LAB_1445c63d3;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,local_78);
      goto LAB_1445c63d3;
    }
    local_78[0] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  plVar13 = local_78;
  if (plVar8 != (longlong *)0x0) {
    plVar13 = plVar8;
  }
  uStack_88 = 0;
  uStack_81 = 0;
  uStack_80 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
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
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&uStack_88);
            goto LAB_1445c65f6;
          }
        }
        puVar9 = (undefined7 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar9 != &uStack_88) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&uStack_88,puVar9,(int)plVar8[6]);
          }
          else {
            memcpy(&uStack_88,puVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar8[6]);
        local_e8 = (undefined7 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,&uStack_88,lVar4,1);
      }
      else {
        (*pcVar3)(plVar8,&uStack_88,lVar4);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_88);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_88);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
      uStack_88 = (undefined7)uVar2;
      uStack_81 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_88);
    }
  }
LAB_1445c65f6:
  puVar9 = &uStack_88;
  if ((undefined7 *)*plVar1 != (undefined7 *)0x0) {
    puVar9 = (undefined7 *)*plVar1;
  }
  local_89 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_d8 = (longlong *)FUN_1446ddbd2();
      local_d0 = FUN_140a4831c;
      local_e8 = (undefined7 *)0x1000000008001;
      local_e0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
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
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&local_89);
            goto LAB_1445c679c;
          }
        }
        _Src = (undefined1 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != &local_89) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_89,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(&local_89,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar8[6]);
        local_e8 = (undefined7 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,&local_89,lVar4,1);
      }
      else {
        (*pcVar3)(plVar8,&local_89,lVar4);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *plVar1 = puVar5[1];
    }
LAB_1445c679c:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_89);
      goto LAB_1445c679c;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_89);
      goto LAB_1445c679c;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_89);
      goto LAB_1445c679c;
    }
    uVar2 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    local_89 = (undefined1)uVar2;
    uStack_88 = (undefined7)((ulonglong)uVar2 >> 8);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
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
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_a8);
            goto LAB_1445c6912;
          }
        }
        plVar10 = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar10 != local_a8) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_a8,plVar10,(int)plVar8[6]);
          }
          else {
            memcpy(local_a8,plVar10,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar8[6]);
        local_e8 = (undefined7 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,local_a8,lVar4,1);
      }
      else {
        (*pcVar3)(plVar8,local_a8,lVar4);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *plVar1 = puVar5[1];
    }
LAB_1445c6912:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_a8);
      goto LAB_1445c6912;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_a8);
      goto LAB_1445c6912;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,local_a8);
      goto LAB_1445c6912;
    }
    local_a8[0] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  plVar10 = local_a8;
  if (plVar8 != (longlong *)0x0) {
    plVar10 = plVar8;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar4,&local_b8);
            goto LAB_1445c6b00;
          }
        }
        puVar11 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar11 != &local_b8) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_b8,puVar11,(int)plVar1[6]);
          }
          else {
            memcpy(&local_b8,puVar11,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar1[6]);
        local_e8 = (undefined7 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_b8,lVar4,1);
      }
      else {
        (*pcVar3)(plVar1,&local_b8,lVar4);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_b8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_b8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_b8 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_b8);
    }
  }
LAB_1445c6b00:
  puVar11 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = *puVar11;
  local_d0 = (code *)&local_c8;
  local_c0 = puVar11[1];
  local_e0 = CONCAT71(local_e0._1_7_,local_89);
  local_e8 = puVar9;
  local_d8 = plVar10;
  FUN_1445efbe0(param_1,local_50,plVar12,plVar13);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (CONCAT17(uStack_81,uStack_88) != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c6f45 FUN_1445c6f45 body=47 status=ok
// SIG undefined FUN_1445c6f45(void)

longlong FUN_1445c6f45(void)

{
  if (DAT_14cc23d80 == 0) {
    FUN_14000fc22(&DAT_14cc23d80,&PTR_FUN_14bdffb28);
  }
  return DAT_14cc23d80;
}



// FUNCTION 1445c6f74 FUN_1445c6f74 body=744 status=ok
// SIG undefined FUN_1445c6f74(void)

void FUN_1445c6f74(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_38);
            goto LAB_1445c714e;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_38,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar3[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_38,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_38,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar7,param_2,&local_38);
    }
  }
LAB_1445c714e:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1445f493e(param_1,local_38);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c725d FUN_1445c725d body=47 status=ok
// SIG undefined FUN_1445c725d(void)

longlong FUN_1445c725d(void)

{
  if (DAT_14cc23d88 == 0) {
    FUN_14000fc22(&DAT_14cc23d88,&PTR_FUN_14bdffbc0);
  }
  return DAT_14cc23d88;
}



// FUNCTION 1445c728c FUN_1445c728c body=641 status=ok
// SIG undefined FUN_1445c728c(void)

void FUN_1445c728c(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_58);
            goto LAB_1445c7441;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_58,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar4[6];
        local_68 = 0;
        FUN_1400746b0(plVar4,&local_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_58,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
LAB_1445c7441:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *puVar9;
  uVar7 = puVar9[1];
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = uVar2;
  puVar9[1] = uVar7;
  Discord_Client_GetUserGuilds(param_1 + 0x28,FUN_1445f945c,&LAB_1445f3738,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c750e FUN_1445c750e body=47 status=ok
// SIG undefined FUN_1445c750e(void)

longlong FUN_1445c750e(void)

{
  if (DAT_14cc23d90 == 0) {
    FUN_14000fc22(&DAT_14cc23d90,&PTR_FUN_14bdffc60);
  }
  return DAT_14cc23d90;
}



// FUNCTION 1445c753e FUN_1445c753e body=641 status=ok
// SIG undefined FUN_1445c753e(void)

void FUN_1445c753e(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_58);
            goto LAB_1445c76f3;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_58,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_58,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar4[6];
        local_68 = 0;
        FUN_1400746b0(plVar4,&local_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_58,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
LAB_1445c76f3:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *puVar9;
  uVar7 = puVar9[1];
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = uVar2;
  puVar9[1] = uVar7;
  Discord_Client_GetUserMessageSummaries(param_1 + 0x28,FUN_1445f7bb6,&LAB_1445f1aca,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c77c0 FUN_1445c77c0 body=47 status=ok
// SIG undefined FUN_1445c77c0(void)

longlong FUN_1445c77c0(void)

{
  if (DAT_14cc23d98 == 0) {
    FUN_14000fc22(&DAT_14cc23d98,&PTR_FUN_14bdffd98);
  }
  return DAT_14cc23d98;
}



// FUNCTION 1445c77f0 FUN_1445c77f0 body=1959 status=ok
// SIG undefined FUN_1445c77f0(void)

void FUN_1445c77f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char cVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 *local_80;
  undefined *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_48 = 0;
  uStack_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = (undefined8 *)0x0;
      local_88 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar10 = *(byte **)(param_2 + 0x20);
  if (pbVar10 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar2)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_48);
            goto LAB_1445c79ca;
          }
        }
        puVar11 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar11 != &uStack_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_48,puVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_48,puVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&uStack_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&uStack_48,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar12;
        puVar12 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar10 + 1);
      *(byte **)(param_2 + 0x20) = pbVar10 + 9;
      uStack_48 = (undefined4)uVar1;
      uStack_44 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_48);
    }
  }
LAB_1445c79ca:
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_70 = FUN_1405ebbb2;
      local_78 = &DAT_14c9520b8;
      local_80 = (undefined8 *)0x0;
      local_88 = (undefined1 *)0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar10 = *(byte **)(param_2 + 0x20);
  if (pbVar10 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar2)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_4c);
            goto LAB_1445c7b5d;
          }
        }
        puVar11 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar11 != &local_4c) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_4c,puVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&local_4c,puVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_4c,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_4c,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar12;
        puVar12 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_1445c7b5d:
    pbVar10 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_4c);
      goto LAB_1445c7b5d;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_4c);
      goto LAB_1445c7b5d;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_4c);
      goto LAB_1445c7b5d;
    }
    uVar1 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    local_4c = (undefined4)uVar1;
    uStack_48 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar2)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_68);
            goto LAB_1445c7d0d;
          }
        }
        puVar12 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar12 != &local_68) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_68,puVar12,(int)plVar3[6]);
          }
          else {
            memcpy(&local_68,puVar12,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_68,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_68,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar12;
        puVar12 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar10 + 1);
      *(byte **)(param_2 + 0x20) = pbVar10 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
LAB_1445c7d0d:
  uVar8 = local_4c;
  puVar12 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *puVar12;
  uVar6 = puVar12[1];
  uVar7 = CONCAT44(uStack_44,uStack_48);
  local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_80 = uVar1;
  local_80[1] = uVar6;
  local_88 = &LAB_1445f1ad4;
  Discord_Client_GetUserMessagesWithLimit(param_1 + 0x28,uVar7,uVar8,FUN_1445f7de4);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c7f98 FUN_1445c7f98 body=47 status=ok
// SIG undefined FUN_1445c7f98(void)

longlong FUN_1445c7f98(void)

{
  if (DAT_14cc23da0 == 0) {
    FUN_14000fc22(&DAT_14cc23da0,&PTR_FUN_14bdffe28);
  }
  return DAT_14cc23da0;
}



// FUNCTION 1445c7fc8 FUN_1445c7fc8 body=139 status=ok
// SIG undefined FUN_1445c7fc8(void)

void FUN_1445c7fc8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445edd20(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c8054 FUN_1445c8054 body=47 status=ok
// SIG undefined FUN_1445c8054(void)

longlong FUN_1445c8054(void)

{
  if (DAT_14cc23da8 == 0) {
    FUN_14000fc22(&DAT_14cc23da8,&PTR_FUN_14bdffeb8);
  }
  return DAT_14cc23da8;
}



// FUNCTION 1445c8084 FUN_1445c8084 body=37 status=ok
// SIG undefined FUN_1445c8084(void)

void FUN_1445c8084(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_GetVersionMajor();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c80a9 FUN_1445c80a9 body=47 status=ok
// SIG undefined FUN_1445c80a9(void)

longlong FUN_1445c80a9(void)

{
  if (DAT_14cc23db0 == 0) {
    FUN_14000fc22(&DAT_14cc23db0,&PTR_FUN_14bdfff48);
  }
  return DAT_14cc23db0;
}



// FUNCTION 1445c80d8 FUN_1445c80d8 body=37 status=ok
// SIG undefined FUN_1445c80d8(void)

void FUN_1445c80d8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_GetVersionMinor();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c80fd FUN_1445c80fd body=47 status=ok
// SIG undefined FUN_1445c80fd(void)

longlong FUN_1445c80fd(void)

{
  if (DAT_14cc23db8 == 0) {
    FUN_14000fc22(&DAT_14cc23db8,&PTR_FUN_14bdfffd8);
  }
  return DAT_14cc23db8;
}



// FUNCTION 1445c812c FUN_1445c812c body=37 status=ok
// SIG undefined FUN_1445c812c(void)

void FUN_1445c812c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_GetVersionPatch();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c8151 FUN_1445c8151 body=47 status=ok
// SIG undefined FUN_1445c8151(void)

longlong FUN_1445c8151(void)

{
  if (DAT_14cc23dc0 == 0) {
    FUN_14000fc22(&DAT_14cc23dc0,&PTR_FUN_14be00018);
  }
  return DAT_14cc23dc0;
}



// FUNCTION 1445c8180 FUN_1445c8180 body=46 status=ok
// SIG undefined FUN_1445c8180(void)

void FUN_1445c8180(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_Init(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}



// FUNCTION 1445c81ae FUN_1445c81ae body=47 status=ok
// SIG undefined FUN_1445c81ae(void)

longlong FUN_1445c81ae(void)

{
  if (DAT_14cc23dc8 == 0) {
    FUN_14000fc22(&DAT_14cc23dc8,&DAT_14be00100);
  }
  return DAT_14cc23dc8;
}


