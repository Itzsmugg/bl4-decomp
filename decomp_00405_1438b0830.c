// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1438b0830 FUN_1438b0830 body=4160 status=ok
// SIG undefined FUN_1438b0830(void)

void FUN_1438b0830(longlong param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  char cVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  longlong *plVar13;
  undefined4 *_Src;
  int *_Src_00;
  undefined8 *puVar14;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1468d96f0;
    local_80 = 0;
    local_88 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar11 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar11;
      *(longlong *)(param_2 + 0x40) = lVar11;
      pcVar3 = *(code **)(*plVar13 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar13 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar9 = (*pcVar3)(plVar13), cVar9 == '\0')) {
          puVar14 = (undefined8 *)(lVar11 + *(int *)((longlong)plVar13 + 0x44));
          if (puVar14 != &local_40) {
            if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar13 + 0x100))(plVar13,&local_40,puVar14,(int)plVar13[6]);
            }
            else {
              memcpy(&local_40,puVar14,
                     (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar13 + 0xa0))(plVar13,lVar11,&local_40);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar13[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar13,&local_40,lVar11,1);
      }
      else {
        (*pcVar3)(plVar13,&local_40,lVar11);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar14;
        puVar14 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
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
  local_48 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1409e12a0;
    local_80 = 0;
    local_88 = 0xa001;
    FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
    atexit(FUN_142816ef9);
    _Init_thread_footer(&DAT_14c9520b0);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar11 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar11;
      *(longlong *)(param_2 + 0x40) = lVar11;
      pcVar3 = *(code **)(*plVar13 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar13 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar9 = (*pcVar3)(plVar13), cVar9 == '\0')) {
          puVar14 = (undefined8 *)(lVar11 + *(int *)((longlong)plVar13 + 0x44));
          if (puVar14 != &local_48) {
            if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar13 + 0x100))(plVar13,&local_48,puVar14,(int)plVar13[6]);
            }
            else {
              memcpy(&local_48,puVar14,
                     (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar13 + 0xa0))(plVar13,lVar11,&local_48);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar13[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar13,&local_48,lVar11,1);
      }
      else {
        (*pcVar3)(plVar13,&local_48,lVar11);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar14;
        puVar14 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  local_50 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1409e12a0;
    local_80 = 0;
    local_88 = 0xa001;
    FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
    atexit(FUN_142816ef9);
    _Init_thread_footer(&DAT_14c9520b0);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar11 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar11;
      *(longlong *)(param_2 + 0x40) = lVar11;
      pcVar3 = *(code **)(*plVar13 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar13 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar9 = (*pcVar3)(plVar13), cVar9 == '\0')) {
          puVar14 = (undefined8 *)(lVar11 + *(int *)((longlong)plVar13 + 0x44));
          if (puVar14 != &local_50) {
            if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar13 + 0x100))(plVar13,&local_50,puVar14,(int)plVar13[6]);
            }
            else {
              memcpy(&local_50,puVar14,
                     (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar13 + 0xa0))(plVar13,lVar11,&local_50);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar13[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar13,&local_50,lVar11,1);
      }
      else {
        (*pcVar3)(plVar13,&local_50,lVar11);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar14;
        puVar14 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_50 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_50);
    }
  }
  uStack_58 = 0;
  uStack_54 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1468d96f0;
    local_80 = 0;
    local_88 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar11 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar11;
      *(longlong *)(param_2 + 0x40) = lVar11;
      pcVar3 = *(code **)(*plVar13 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar13 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar9 = (*pcVar3)(plVar13), cVar9 == '\0')) {
          _Src = (undefined4 *)(lVar11 + *(int *)((longlong)plVar13 + 0x44));
          if (_Src != &uStack_58) {
            if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar13 + 0x100))(plVar13,&uStack_58,_Src,(int)plVar13[6]);
            }
            else {
              memcpy(&uStack_58,_Src,
                     (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar13 + 0xa0))(plVar13,lVar11,&uStack_58);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar13[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar13,&uStack_58,lVar11,1);
      }
      else {
        (*pcVar3)(plVar13,&uStack_58,lVar11);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar14;
        puVar14 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_58 = (undefined4)uVar2;
      uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_58);
    }
  }
  local_5c = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_14067a048;
    local_80 = 0;
    local_88 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar11 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar11;
      *(longlong *)(param_2 + 0x40) = lVar11;
      pcVar3 = *(code **)(*plVar13 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar13 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar9 = (*pcVar3)(plVar13), cVar9 == '\0')) {
          _Src_00 = (int *)(lVar11 + *(int *)((longlong)plVar13 + 0x44));
          if (_Src_00 != &local_5c) {
            if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar13 + 0x100))(plVar13,&local_5c,_Src_00,(int)plVar13[6]);
            }
            else {
              memcpy(&local_5c,_Src_00,
                     (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar13 + 0xa0))(plVar13,lVar11,&local_5c);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar13[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar13,&local_5c,lVar11,1);
      }
      else {
        (*pcVar3)(plVar13,&local_5c,lVar11);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar14;
        puVar14 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_5c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_5c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_5c = (int)uVar2;
      uStack_58 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_5c);
    }
  }
  iVar5 = local_5c;
  local_68 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1468d96f0;
    local_80 = 0;
    local_88 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar11 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar11;
      *(longlong *)(param_2 + 0x40) = lVar11;
      pcVar3 = *(code **)(*plVar13 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar13 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar9 = (*pcVar3)(), cVar9 == '\0')) {
          puVar14 = (undefined8 *)(lVar11 + *(int *)((longlong)plVar13 + 0x44));
          if (puVar14 != &local_68) {
            if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar13 + 0x100))(plVar13,&local_68,puVar14,(int)plVar13[6]);
            }
            else {
              memcpy(&local_68,puVar14,
                     (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar13 + 0xa0))(plVar13,lVar11,&local_68);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar13[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar13,&local_68,lVar11,1);
      }
      else {
        (*pcVar3)(plVar13,&local_68,lVar11);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar14;
        puVar14 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_68);
    }
  }
  uVar7 = local_40;
  uVar6 = local_48;
  uVar2 = local_50;
  uVar10 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(ulonglong *)(param_2 + 0x20) = uVar10;
  if (CONCAT44(uStack_54,uStack_58) == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      bVar8 = lVar11 != 0 & DAT_14c950c29;
      uVar10 = (ulonglong)bVar8;
      if (bVar8 == 1) {
        FUN_1456cec3c(lVar11);
      }
      else {
LAB_1438b1310:
        if (lVar11 == 0) goto LAB_1438b141b;
      }
      local_88 = CONCAT71(local_88._1_7_,iVar5 != 0);
      bVar8 = FUN_1438b539c(lVar11,uVar7,uVar6,uVar2);
      bVar12 = 1;
      goto LAB_1438b141d;
    }
  }
  else {
    lVar11 = (longlong)*(int *)(param_1 + 0x148);
    uVar10 = 0;
    if (lVar11 != 0) {
      plVar13 = *(longlong **)(param_1 + 0x140);
      uVar10 = lVar11 * 8;
      bVar8 = (byte)uVar10;
      lVar11 = lVar11 * 0x48;
      bVar12 = 0;
      do {
        if (*plVar13 == CONCAT44(uStack_54,uStack_58)) {
          if (plVar13 == (longlong *)0x0) goto LAB_1438b141b;
          lVar11 = plVar13[7];
          goto LAB_1438b1310;
        }
        plVar13 = plVar13 + 9;
        lVar11 = lVar11 + -0x48;
      } while (lVar11 != 0);
      goto LAB_1438b141d;
    }
  }
LAB_1438b141b:
  bVar8 = (byte)uVar10;
  bVar12 = 0;
LAB_1438b141d:
  *param_3 = bVar12 & bVar8;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438b1872 FUN_1438b1872 body=1522 status=ok
// SIG undefined FUN_1438b1872(void)

void FUN_1438b1872(longlong param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *_Src;
  undefined8 *puVar11;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(plVar10), cVar6 == '\0')) {
          _Src = (longlong *)(lVar8 + *(int *)((longlong)plVar10 + 0x44));
          if (_Src != &local_38) {
            if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar10 + 0x100))(plVar10,&local_38,_Src,(int)plVar10[6]);
            }
            else {
              memcpy(&local_38,_Src,
                     (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar10 + 0xa0))(plVar10,lVar8,&local_38);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar10[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_38,lVar8,1);
      }
      else {
        (*pcVar3)(plVar10,&local_38,lVar8);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar11;
        puVar11 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
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
  local_40 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(), cVar6 == '\0')) {
          puVar11 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar10 + 0x44));
          if (puVar11 != &local_40) {
            if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar10 + 0x100))(plVar10,&local_40,puVar11,(int)plVar10[6]);
            }
            else {
              memcpy(&local_40,puVar11,
                     (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar10 + 0xa0))(plVar10,lVar8,&local_40);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar10[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_40,lVar8,1);
      }
      else {
        (*pcVar3)(plVar10,&local_40,lVar8);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar11;
        puVar11 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
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
  uVar7 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(ulonglong *)(param_2 + 0x20) = uVar7;
  if (local_38 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      bVar5 = lVar8 != 0 & DAT_14c950c29;
      uVar7 = (ulonglong)bVar5;
      if (bVar5 == 1) {
        FUN_1456cec3c(lVar8);
      }
      else {
LAB_1438b1c5f:
        if (lVar8 == 0) goto LAB_1438b1cd8;
      }
      bVar5 = FUN_1438b3f78(lVar8);
      bVar9 = 1;
      goto LAB_1438b1cda;
    }
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x148);
    uVar7 = 0;
    if (lVar8 != 0) {
      plVar10 = *(longlong **)(param_1 + 0x140);
      uVar7 = lVar8 * 8;
      bVar5 = (byte)uVar7;
      lVar8 = lVar8 * 0x48;
      bVar9 = 0;
      do {
        if (*plVar10 == local_38) {
          if (plVar10 == (longlong *)0x0) goto LAB_1438b1cd8;
          lVar8 = plVar10[7];
          goto LAB_1438b1c5f;
        }
        plVar10 = plVar10 + 9;
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != 0);
      goto LAB_1438b1cda;
    }
  }
LAB_1438b1cd8:
  bVar5 = (byte)uVar7;
  bVar9 = 0;
LAB_1438b1cda:
  *param_3 = bVar9 & bVar5;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438b1e66 FUN_1438b1e66 body=1524 status=ok
// SIG undefined FUN_1438b1e66(void)

void FUN_1438b1e66(longlong param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *_Src;
  undefined8 *puVar11;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(plVar10), cVar6 == '\0')) {
          _Src = (longlong *)(lVar8 + *(int *)((longlong)plVar10 + 0x44));
          if (_Src != &local_38) {
            if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar10 + 0x100))(plVar10,&local_38,_Src,(int)plVar10[6]);
            }
            else {
              memcpy(&local_38,_Src,
                     (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar10 + 0xa0))(plVar10,lVar8,&local_38);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar10[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_38,lVar8,1);
      }
      else {
        (*pcVar3)(plVar10,&local_38,lVar8);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar11;
        puVar11 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
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
  local_40 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(), cVar6 == '\0')) {
          puVar11 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar10 + 0x44));
          if (puVar11 != &local_40) {
            if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar10 + 0x100))(plVar10,&local_40,puVar11,(int)plVar10[6]);
            }
            else {
              memcpy(&local_40,puVar11,
                     (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar10 + 0xa0))(plVar10,lVar8,&local_40);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar10[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_40,lVar8,1);
      }
      else {
        (*pcVar3)(plVar10,&local_40,lVar8);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar11;
        puVar11 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
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
  uVar7 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(ulonglong *)(param_2 + 0x20) = uVar7;
  if (local_38 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      bVar5 = lVar8 != 0 & DAT_14c950c29;
      uVar7 = (ulonglong)bVar5;
      if (bVar5 == 1) {
        FUN_1456cec3c(lVar8);
      }
      else {
LAB_1438b2253:
        if (lVar8 == 0) goto LAB_1438b22ce;
      }
      bVar5 = FUN_141053868(lVar8,0);
      bVar9 = 1;
      goto LAB_1438b22d0;
    }
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x148);
    uVar7 = 0;
    if (lVar8 != 0) {
      plVar10 = *(longlong **)(param_1 + 0x140);
      uVar7 = lVar8 * 8;
      bVar5 = (byte)uVar7;
      lVar8 = lVar8 * 0x48;
      bVar9 = 0;
      do {
        if (*plVar10 == local_38) {
          if (plVar10 == (longlong *)0x0) goto LAB_1438b22ce;
          lVar8 = plVar10[7];
          goto LAB_1438b2253;
        }
        plVar10 = plVar10 + 9;
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != 0);
      goto LAB_1438b22d0;
    }
  }
LAB_1438b22ce:
  bVar5 = (byte)uVar7;
  bVar9 = 0;
LAB_1438b22d0:
  *param_3 = bVar9 & bVar5;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438b245c FUN_1438b245c body=330 status=ok
// SIG undefined FUN_1438b245c(void)

void FUN_1438b245c(ulonglong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    lVar4 = *(longlong *)(param_1 + 0x140) + 0x38;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar4,0,0);
      lVar4 = lVar4 + 0x48;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
  }
  if ((param_1 == 0) || (-1 < *(char *)(param_1 + 0xb8))) {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
  if (DAT_14cad0160 != DAT_14cad018c) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14cad0190;
    if (DAT_14cad0198 != (undefined *)0x0) {
      puVar3 = DAT_14cad0198;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cad01a0 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    while (iVar1 != -1) {
      lVar5 = DAT_14cad0158 + (longlong)iVar1 * 0x20;
      if (*(ulonglong *)(DAT_14cad0158 + (longlong)iVar1 * 0x20) == param_1) {
        if (((lVar5 != 0) && (lVar5 != -8)) && ((longlong)*(int *)(lVar5 + 0x10) != 0)) {
          lVar4 = *(longlong *)(lVar5 + 8);
          lVar5 = (longlong)*(int *)(lVar5 + 0x10) << 5;
          do {
            (**(code **)(*param_2 + 0x88))(param_2,lVar4,0,0);
            lVar4 = lVar4 + 0x20;
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != 0);
        }
        break;
      }
      iVar1 = *(int *)(lVar5 + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001438b259f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
  return;
}



// FUNCTION 1438b25a6 FUN_1438b25a6 body=55 status=ok
// SIG undefined FUN_1438b25a6(void)

void FUN_1438b25a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb267d8 == 0) {
    uVar1 = FUN_141051039();
    DAT_14cb267d8 = FUN_14171c317(FUN_146449d6b,uVar1,L"EFaceFXBlendMode");
  }
  return;
}



// FUNCTION 1438b25f2 FUN_1438b25f2 body=327 status=ok
// SIG undefined FUN_1438b25f2(void)

void FUN_1438b25f2(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_58;
  longlong lStack_50;
  ulonglong local_48;
  longlong lStack_40;
  ulonglong local_38;
  longlong lStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = *param_2;
  local_e0 = 0;
  local_d8 = 1;
  local_d4 = 0xffffffffffffffff;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  (**(code **)(*param_1 + 0x30))(0,&local_e8);
  FUN_1474e40fa(&local_c8,param_2 + 4);
  if (lStack_30 != 0) {
    FUN_1400020a8();
  }
  FUN_144716785(lStack_40,local_38 & 0xffffffff);
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(lStack_50,local_48 & 0xffffffff);
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(lStack_60,local_58 & 0xffffffff);
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b273a FUN_1438b273a body=1268 status=ok
// SIG undefined FUN_1438b273a(void)

void FUN_1438b273a(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char cVar18;
  byte bVar19;
  int iVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong lVar25;
  double *pdVar26;
  double *pdVar27;
  longlong lVar28;
  uint *puVar29;
  double *pdVar30;
  uint *puVar31;
  float fVar32;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  longlong *local_d0;
  uint *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[3] == 0) {
    lVar28 = *(longlong *)(*param_2 + 0x6a0);
    FUN_14018c8cc(param_2 + 4,lVar28);
    param_2[0x10] = lVar28 + 0xb0;
  }
  else {
    lVar28 = param_1[4];
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(int *)((longlong)param_2 + 0x14) = (int)lVar28;
    plVar23 = (longlong *)param_1[3];
    if (*(code **)(*plVar23 + 0x30) == FUN_1447d4948) {
      FUN_1447d4948(plVar23,param_2);
    }
    else {
      (**(code **)(*plVar23 + 0x30))(plVar23,param_2);
    }
  }
  plVar23 = (longlong *)*param_2;
  if (plVar23 != (longlong *)0x0) {
    pcVar10 = *(code **)(*param_1 + 0x98);
    if (pcVar10 == (code *)&LAB_1400e9baa) {
      iVar20 = *(int *)((longlong)param_1 + 0xe4);
    }
    else if (pcVar10 == (code *)&LAB_1400e9bb2) {
      iVar20 = (int)param_1[5];
    }
    else if (pcVar10 == (code *)&LAB_1400e9bb6) {
      iVar20 = *(int *)((longlong)param_1 + 0x44);
    }
    else {
      iVar20 = (*pcVar10)(param_1);
    }
    if ((iVar20 == -1) || ((int)plVar23[0xd6] <= iVar20)) {
      bVar19 = *(byte *)(param_1 + 2);
      if ((bVar19 & 1) == 0) {
        uVar22 = (**(code **)(*param_1 + 8))(param_1);
        cVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23,uVar22,(longlong)param_1 + 0x11);
        bVar19 = (cVar18 * '\x02' | *(byte *)(param_1 + 2) & 0xfc) + 1;
        *(byte *)(param_1 + 2) = bVar19;
      }
      if (((bVar19 & 2) == 0) ||
         (cVar18 = (**(code **)(*plVar23 + 0xb8))(plVar23,*(undefined1 *)((longlong)param_1 + 0x11))
         , cVar18 != '\0')) {
        if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
          FUN_14126765c(param_1,*param_2);
        }
        iVar20 = (int)param_1[8];
        if (0 < iVar20) {
          fVar32 = *(float *)((longlong)param_1 + 0x84);
          if (1.0 <= fVar32) {
            fVar32 = 1.0;
          }
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          if ((((0.0 < fVar32) && (*(longlong *)(*param_2 + 0x148) != 0)) &&
              (lVar28 = param_1[0xc], lVar28 != 0)) && ((longlong)*(int *)(lVar28 + 0x148) != 0)) {
            plVar23 = *(longlong **)(lVar28 + 0x140);
            lVar28 = (longlong)*(int *)(lVar28 + 0x148) * 0x48;
            do {
              if (*plVar23 == *(longlong *)(*param_2 + 0x148)) {
                if ((plVar23 != (longlong *)0x0) && (lVar28 = plVar23[7], lVar28 != 0)) {
                  if ((*(byte *)(lVar28 + 0x18a) & 1) != 0) {
                    FUN_1438b5258(lVar28);
                    iVar20 = (int)param_1[8];
                  }
                  if (iVar20 != 0) {
                    puVar31 = (uint *)param_1[7];
                    puVar29 = puVar31 + (longlong)iVar20 * 0x18;
                    local_d0 = param_2 + 4;
                    local_c8 = puVar29;
                    local_c0 = lVar28;
                    do {
                      lVar21 = (longlong)(int)((longlong *)param_2[6])[1];
                      if (lVar21 != 0) {
                        pdVar30 = (double *)
                                  ((longlong)(int)puVar31[1] * 0x60 + *(longlong *)(lVar28 + 0xf0));
                        lVar21 = lVar21 * 2;
                        uVar24 = 0;
                        lVar25 = 0;
                        do {
                          if (*puVar31 == (uint)*(ushort *)(*(longlong *)param_2[6] + uVar24 * 2)) {
                            if ((int)uVar24 != -1) {
                              *(int *)param_1[9] = (int)uVar24;
                              lVar28 = param_1[9];
                              pdVar1 = (double *)(lVar28 + 0x10);
                              if (*(char *)((longlong)param_1 + 0x59) == '\0') {
                                pdVar26 = pdVar1;
                                for (lVar28 = 0xc; plVar23 = local_d0, lVar28 != 0;
                                    lVar28 = lVar28 + -1) {
                                  *pdVar26 = *pdVar30;
                                  pdVar30 = pdVar30 + 1;
                                  pdVar26 = pdVar26 + 1;
                                }
                              }
                              else {
                                local_b8 = lVar28;
                                if (*(char *)(param_2[7] + (lVar25 >> 0x20)) == '\0') {
                                  FUN_1447d5d8e(local_d0,uVar24 & 0xffffffff);
                                }
                                plVar23 = local_d0;
                                pdVar26 = (double *)((lVar25 >> 0x20) * 0x60 + *local_d0);
                                pdVar27 = pdVar1;
                                for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
                                  *pdVar27 = *pdVar26;
                                  pdVar26 = pdVar26 + 1;
                                  pdVar27 = pdVar27 + 1;
                                }
                                local_d8 = 2;
                                FUN_14045e902(&DAT_14c846480,local_d0,pdVar1,uVar24 & 0xffffffff);
                                dVar14 = *(double *)(local_b8 + 0x10);
                                dVar15 = *(double *)(local_b8 + 0x18);
                                dVar16 = *(double *)(local_b8 + 0x20);
                                dVar17 = *(double *)(local_b8 + 0x28);
                                dVar2 = pdVar30[10];
                                dVar9 = pdVar30[9];
                                *(double *)(local_b8 + 0x50) =
                                     *(double *)(local_b8 + 0x50) + pdVar30[8];
                                *(double *)(local_b8 + 0x58) = *(double *)(local_b8 + 0x58) + dVar9;
                                *(double *)(local_b8 + 0x60) = *(double *)(local_b8 + 0x60) + dVar2;
                                *(undefined8 *)(local_b8 + 0x68) = 0;
                                dVar2 = pdVar30[3];
                                dVar9 = pdVar30[3];
                                dVar3 = pdVar30[1];
                                dVar4 = pdVar30[1];
                                dVar5 = *pdVar30;
                                dVar6 = *pdVar30;
                                dVar7 = pdVar30[2];
                                dVar8 = pdVar30[2];
                                dVar13 = dVar14 * dVar8 * 1.0 +
                                         dVar17 * dVar4 + dVar6 * dVar16 * -1.0 + dVar9 * dVar15;
                                auVar12._8_4_ = SUB84(dVar13,0);
                                auVar12._0_8_ =
                                     dVar15 * dVar7 * -1.0 +
                                     dVar16 * dVar3 + dVar5 * dVar17 * 1.0 + dVar2 * dVar14;
                                auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                                *(undefined1 (*) [16])(local_b8 + 0x10) = auVar12;
                                *(double *)(local_b8 + 0x20) =
                                     dVar17 * dVar7 * 1.0 +
                                     ((dVar5 * dVar15 * 1.0 + dVar2 * dVar16) - dVar3 * dVar14);
                                *(double *)(local_b8 + 0x28) =
                                     dVar16 * dVar8 * -1.0 +
                                     ((dVar6 * dVar14 * -1.0 + dVar9 * dVar17) - dVar4 * dVar15);
                                dVar2 = pdVar30[6];
                                dVar9 = pdVar30[5] + *(double *)(local_b8 + 0x38);
                                auVar11._8_4_ = SUB84(dVar9,0);
                                auVar11._0_8_ = pdVar30[4] + *(double *)(local_b8 + 0x30);
                                auVar11._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                                *(undefined1 (*) [16])(local_b8 + 0x30) = auVar11;
                                *(double *)(local_b8 + 0x40) = dVar2 + *(double *)(local_b8 + 0x40);
                                *(double *)(local_b8 + 0x48) = *(double *)(local_b8 + 0x48) + 0.0;
                              }
                              local_d8 = 2;
                              FUN_14045df82(&DAT_14c846480,plVar23,pdVar1,uVar24 & 0xffffffff);
                              local_b0 = param_1[9];
                              local_a8 = (undefined4)param_1[10];
                              FUN_1447d4b66(plVar23,&local_b0,fVar32);
                              lVar28 = local_c0;
                              puVar29 = local_c8;
                            }
                            break;
                          }
                          lVar25 = lVar25 + 0x100000000;
                          uVar24 = uVar24 + 1;
                          lVar21 = lVar21 + -2;
                        } while (lVar21 != 0);
                      }
                      puVar31 = puVar31 + 0x18;
                    } while (puVar31 != puVar29);
                  }
                }
                break;
              }
              plVar23 = plVar23 + 9;
              lVar28 = lVar28 + -0x48;
            } while (lVar28 != 0);
          }
        }
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438b2c30 FUN_1438b2c30 body=240 status=ok
// SIG undefined FUN_1438b2c30(void)

longlong FUN_1438b2c30(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x148) < 1) {
      return 0;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
      goto LAB_1438b2c8d;
    }
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x148) == 0) {
      return 0;
    }
    plVar1 = *(longlong **)(param_1 + 0x140);
    lVar3 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    while (*plVar1 != param_3) {
      plVar1 = plVar1 + 9;
      lVar3 = lVar3 + -0x48;
      if (lVar3 == 0) {
        return 0;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    lVar3 = plVar1[7];
  }
  if (lVar3 == 0) {
    return 0;
  }
LAB_1438b2c8d:
  lVar2 = *(longlong *)(lVar3 + 0x180);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(lVar3 + 0x194);
    if (lVar2 == 0) {
      lVar3 = 0;
      lVar2 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x18c);
    }
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar2 = *(longlong *)(lVar2 + 0x50);
  }
  if (*param_2 == 0) {
    lVar4 = param_2[1];
  }
  else {
    lVar4 = param_2[1];
    if ((*param_2 == lVar3) && (lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1), lVar4 == lVar2))
    {
      return lVar3;
    }
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar4 == lVar2);
}



// FUNCTION 1438b2d3c FUN_1438b2d3c body=57 status=ok
// SIG undefined FUN_1438b2d3c(void)

void FUN_1438b2d3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb26578 == 0) {
    uVar1 = FUN_141051039();
    DAT_14cb26578 = FUN_140002ddd(FUN_14644937d,uVar1,L"AnimNode_BlendFaceFXAnimation");
  }
  return;
}



// FUNCTION 1438b2e36 FUN_1438b2e36 body=128 status=ok
// SIG undefined FUN_1438b2e36(void)

void FUN_1438b2e36(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1438b2f22 FUN_1438b2f22 body=31 status=ok
// SIG undefined FUN_1438b2f22(void)

undefined8 FUN_1438b2f22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438b2f9c FUN_1438b2f9c body=31 status=ok
// SIG undefined FUN_1438b2f9c(void)

undefined8 FUN_1438b2f9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438b3016 FUN_1438b3016 body=31 status=ok
// SIG undefined FUN_1438b3016(void)

undefined8 FUN_1438b3016(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438b308f FUN_1438b308f body=800 status=ok
// SIG undefined FUN_1438b308f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438b308f(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/FaceFX",0,0,&PTR_FUN_14acb9230);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14acb95d0;
  local_58 = 0;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acb95f0,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acb9b30,1,&PTR_FUN_14acb9b00);
  _DAT_14cb26600 = 0xffffffff;
  _DAT_14cb26604 = 0;
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acb9e10,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/FaceFX",0,0,&PTR_FUN_14acba290);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acba410,1,0);
  FUN_140056680(&DAT_14cb26668,L"FaceFXAnimSet_");
  atexit((_func_5014 *)&LAB_1438ae143);
  FUN_140056680(&DAT_14cb26678,L"Preload_");
  atexit((_func_5014 *)&LAB_1438ae154);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acba7f0,1,&PTR_FUN_14acba7c0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acbab50,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acbb070,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acbb220,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acbde30,1,&PTR_FUN_14acbde00);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14acbe270;
  local_58 = 0;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acbe290,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 6;
  FUN_14282b410(L"/Script/FaceFX",0,0,&PTR_FUN_14acbe9e0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acbebf0,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/FaceFX",&PTR_FUN_14acbef50,1,0);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb268c0);
  if (cVar1 == '\0') {
    _DAT_14cb268c0 = 0;
    uRam000000014cb268c8 = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b33b0 FUN_1438b33b0 body=69 status=ok
// SIG undefined FUN_1438b33b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438b33b0(void)

{
  _DAT_14cb268d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438b33f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb268e0,1);
  return;
}



// FUNCTION 1438b3424 FUN_1438b3424 body=126 status=ok
// SIG undefined FUN_1438b3424(void)

undefined8 FUN_1438b3424(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 **local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    uVar1 = 0;
  }
  else {
    local_38 = &local_28;
    local_28 = &LAB_14181b8c4;
    local_20 = &LAB_14181b8ca;
    local_18 = 0;
    local_30 = 0;
    FUN_144d5f7f0(*param_1,(longlong)*(int *)(param_1 + 1),1,&local_30);
    uVar1 = local_30;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b34a4 FUN_1438b34a4 body=115 status=ok
// SIG undefined FUN_1438b34a4(void)

undefined4 FUN_1438b34a4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_1438b3424(param_1 + 0x38);
  if (local_20 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_144d5fa00(local_20,param_2,param_3);
    uVar2 = FUN_144d5fa90(&local_20,0,0);
    uVar3 = CONCAT31((int3)((uVar2 | uVar1) >> 8),-1 < (int)(uVar2 | uVar1));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b3518 FUN_1438b3518 body=49 status=ok
// SIG undefined FUN_1438b3518(void)

void FUN_1438b3518(void)

{
  FUN_144760e21(DAT_14cb26a18,DAT_14cb26a20);
  if (DAT_14cb26a18 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1438b354a FUN_1438b354a body=401 status=ok
// SIG undefined FUN_1438b354a(void)

undefined8 FUN_1438b354a(longlong param_1,float param_2,byte *param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar2 = *(byte *)(param_1 + 0x18a);
  if (0.0 <= param_2 && (bVar2 & 4) != 0) {
    *(float *)(param_1 + 0x170) = param_2;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(byte *)(param_1 + 0x18a) = bVar2 & 0xbf | param_4 << 6;
    iVar3 = FUN_144d600c0(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),0);
    iVar4 = FUN_144d5fe90(*(undefined8 *)(param_1 + 200),&local_44,1);
    uVar1 = local_44;
    iVar5 = FUN_144d600c0(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                          *(undefined4 *)(param_1 + 0x170));
    *(byte *)(param_1 + 0x18a) = *(byte *)(param_1 + 0x18a) & 0xbf | bVar2 & 0x40;
    uVar6 = 0;
    if ((iVar3 < 0) || (iVar5 < 0)) goto LAB_1438b36b4;
    iVar3 = FUN_144d5ff60(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0x160),
                          (longlong)*(int *)(param_1 + 0x168));
    if (-1 < iVar3) {
      uVar6 = 1;
      bVar2 = 1;
      if ((-1 < iVar4 & (byte)((uVar1 & 8) >> 3)) == 0) {
        iVar3 = FUN_144d5fe90(*(undefined8 *)(param_1 + 200),&local_44,1);
        bVar2 = (byte)((local_44 & 8) >> 3) & -1 < iVar3;
      }
      *param_3 = bVar2;
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x170);
      *(byte *)(param_1 + 0x18a) = *(byte *)(param_1 + 0x18a) | 1;
      FUN_1438b36dc(param_1);
      FUN_1438b374c(param_1);
      goto LAB_1438b36b4;
    }
  }
  uVar6 = 0;
LAB_1438b36b4:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b36dc FUN_1438b36dc body=112 status=ok
// SIG undefined FUN_1438b36dc(void)

void FUN_1438b36dc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x128);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = FUN_140b0adb4();
    if (0 < (int)uVar1 && lVar2 != 0) {
      uVar3 = 0;
      do {
        FUN_147a0ae5e(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x120) + uVar3 * 8),
                      *(undefined4 *)
                       (*(longlong *)(param_1 + 0x160) +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x130) + uVar3 * 8) * 4),1);
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
  }
  return;
}



// FUNCTION 1438b374c FUN_1438b374c body=109 status=ok
// SIG undefined FUN_1438b374c(void)

void FUN_1438b374c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = FUN_140b0adb4();
    if (0 < (int)uVar1 && lVar2 != 0) {
      uVar3 = 0;
      do {
        FUN_14347fe0c(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x140) + uVar3 * 8),
                      *(undefined4 *)
                       (*(longlong *)(param_1 + 0x160) +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + uVar3 * 8) * 4));
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
  }
  return;
}



// FUNCTION 1438b37ba FUN_1438b37ba body=1041 status=ok
// SIG undefined FUN_1438b37ba(void)

void FUN_1438b37ba(longlong param_1,float param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + -0x28);
  lVar16 = *(longlong *)(param_1 + 0x88);
  lVar10 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x180))(plVar1);
  if (lVar10 != 0) {
    lVar10 = (**(code **)(*plVar1 + 0x180))(plVar1);
    if ((*(longlong *)(lVar10 + 0x30) != 0) &&
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x2b0) != 0)) {
      lVar10 = (**(code **)(*plVar1 + 0x180))(plVar1);
      if (*(longlong *)(lVar10 + 0x30) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x2b0);
      }
      if (*(longlong *)(lVar10 + 0x588) != 0) {
        *(undefined1 *)(param_1 + 400) = 1;
        goto LAB_1438b3b5e;
      }
    }
  }
  if (*(char *)(param_1 + 400) == '\x01') {
    if ((lVar16 != 0) &&
       (fVar17 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x40))(), 0.0 < fVar17)) {
      FUN_1438b3bcc(plVar1,fVar17 - *(float *)(param_1 + 0x154));
    }
    *(undefined1 *)(param_1 + 400) = 0;
    goto LAB_1438b3b5e;
  }
  fVar17 = *(float *)(param_1 + 0x148) + param_2;
  *(float *)(param_1 + 0x148) = fVar17;
  *(float *)(param_1 + 0x14c) = *(float *)(param_1 + 0x14c) + param_2;
  if ((lVar16 != 0) && (lVar10 = *(longlong *)(param_1 + 0x88), *(char *)(lVar10 + 0x14) == '\0')) {
    *(float *)(lVar10 + 0x10) = *(float *)(lVar10 + 0x10) + param_2;
    fVar17 = *(float *)(param_1 + 0x148);
  }
  iVar8 = FUN_144d600c0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),fVar17);
  if ((((iVar8 < 0) ||
       (iVar8 = FUN_144d5fe90(*(undefined8 *)(param_1 + 0xa0),&local_64,1), iVar8 < 0)) ||
      (local_64 == 0x31)) ||
     (iVar8 = FUN_144d5ff60(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x138),
                            (longlong)*(int *)(param_1 + 0x140)), iVar8 < 0)) goto LAB_1438b3b5e;
  iVar8 = FUN_144d5fe90(*(undefined8 *)(param_1 + 0xa0),&local_78,1);
  if ((-1 < iVar8) && ((local_78 & 8) != 0)) {
    local_80 = 0;
    if (lVar16 == 0) {
      uVar9 = 0;
    }
    else {
      fVar17 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x40))();
      if (0.0 < fVar17) {
        FUN_1438b3bcc(plVar1,fVar17 - *(float *)(param_1 + 0x154));
        goto LAB_1438b3b09;
      }
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))
                        (*(longlong **)(param_1 + 0x88),0,&local_80);
    }
    uVar6 = local_80;
    lVar16 = *(longlong *)(param_1 + 0x158);
    if (lVar16 == 0) {
      if (*(longlong *)(param_1 + 0x16c) == 0) {
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
      }
      else {
        local_78 = *(uint *)(param_1 + 0x164);
        uStack_74 = *(undefined4 *)(param_1 + 0x168);
        uStack_70 = *(undefined4 *)(param_1 + 0x16c);
        uStack_6c = *(undefined4 *)(param_1 + 0x170);
      }
    }
    else {
      local_78 = *(uint *)(lVar16 + 0x48);
      uStack_74 = *(undefined4 *)(lVar16 + 0x4c);
      uStack_70 = *(undefined4 *)(lVar16 + 0x50);
      uStack_6c = *(undefined4 *)(lVar16 + 0x54);
    }
    iVar8 = *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x1c) = iVar8 + 1;
    uVar11 = (ulonglong)*(int *)(param_1 + 0x10);
    if ((longlong)uVar11 < 1) {
      *(int *)(param_1 + 0x1c) = iVar8;
    }
    else {
      local_88 = (longlong *)(param_1 + 8);
      bVar14 = false;
      do {
        lVar16 = uVar11 * 0x10 + -8;
        uVar13 = uVar11;
        while (((*(int *)(*local_88 + lVar16) != 0 &&
                (plVar3 = *(longlong **)(*local_88 + -8 + lVar16), plVar3 != (longlong *)0x0)) &&
               (local_98 = uVar6,
               cVar7 = (**(code **)(*plVar3 + 0x60))(plVar3,plVar1,&local_78,uVar9), cVar7 != '\0'))
              ) {
          lVar16 = lVar16 + -0x10;
          bVar5 = uVar13 < 2;
          uVar13 = uVar13 - 1;
          if (bVar5) {
            iVar8 = *(int *)(param_1 + 0x1c) + -1;
            *(int *)(param_1 + 0x1c) = iVar8;
            if (bVar14) goto LAB_1438b3a93;
            goto LAB_1438b3b09;
          }
        }
        uVar11 = uVar13 - 1;
        bVar14 = true;
      } while (1 < uVar13);
      iVar8 = *(int *)(param_1 + 0x1c) + -1;
      *(int *)(param_1 + 0x1c) = iVar8;
LAB_1438b3a93:
      plVar3 = local_88;
      if (iVar8 < 1) {
        iVar8 = *(int *)(param_1 + 0x10);
        iVar12 = iVar8;
        if (0 < iVar8) {
          iVar15 = 0;
          do {
            if (((*(int *)(*local_88 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*local_88 + (longlong)iVar15 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar4 + 0x28))(), cVar7 != '\0')) {
              FUN_14005b288(plVar3,iVar15);
              FUN_14005b248(plVar3);
            }
            else {
              iVar15 = iVar15 + 1;
            }
            iVar12 = *(int *)(param_1 + 0x10);
          } while (iVar15 < iVar12);
        }
        iVar15 = 2;
        if (2 < iVar12 * 2) {
          iVar15 = iVar12 * 2;
        }
        *(int *)(param_1 + 0x18) = iVar15;
        if ((iVar15 < iVar8) && (*(int *)(param_1 + 0x14) != iVar12)) {
          FUN_14045812c(local_88);
        }
      }
    }
  }
LAB_1438b3b09:
  FUN_1438b36dc(plVar1);
  FUN_1438b374c(plVar1);
  bVar2 = *(byte *)(param_1 + 0x162);
  *(byte *)(param_1 + 0x162) = bVar2 | 1;
  if ((0.0 < param_2) && (*(float *)(param_1 + 0x150) <= *(float *)(param_1 + 0x14c))) {
    if ((bVar2 & 2) == 0) {
      FUN_141053868(plVar1,0);
    }
    else {
      FUN_1438b3bcc(plVar1,0);
    }
  }
LAB_1438b3b5e:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438b3bcc FUN_1438b3bcc body=330 status=ok
// SIG undefined FUN_1438b3bcc(void)

undefined4 FUN_1438b3bcc(longlong param_1,float param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [39];
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0.0 <= param_2) {
    bVar1 = *(byte *)(param_1 + 0x18a);
    if ((bVar1 & 2) == 0) {
      uVar5 = 0;
      if (((bVar1 & 4) == 0) ||
         (*(float *)(param_1 + 0x178) <= param_2 && param_2 != *(float *)(param_1 + 0x178)))
      goto LAB_1438b3bf0;
    }
    else if ((bVar1 & 4) == 0) goto LAB_1438b3bee;
    if ((*(longlong *)(param_1 + 0xc0) != 0) &&
       (((*(longlong *)(param_1 + 0xa8) != 0 && (*(longlong *)(param_1 + 0xd8) != 0)) &&
        (iVar4 = FUN_144d5fd40(*(longlong *)(param_1 + 0xc0),0xffffffff), -1 < iVar4)))) {
      *(undefined1 *)(param_1 + 0x188) = 2;
      uVar5 = 0;
      iVar4 = FUN_144d5fb60(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xd8),0);
      if (iVar4 < 0) goto LAB_1438b3bf0;
      *(undefined1 *)(param_1 + 0x188) = 0;
      if (*(float *)(param_1 + 0x178) < param_2) {
        param_2 = (float)FUN_1447c7e44(param_2);
      }
      uVar5 = 1;
      cVar3 = FUN_1438b354a(param_1,param_2,&local_31,1);
      if ((cVar3 == '\0') || (local_31 != '\x01')) {
        plVar2 = *(longlong **)(param_1 + 0xb0);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
        }
        goto LAB_1438b3bf0;
      }
      plVar2 = *(longlong **)(param_1 + 0xb0);
      if (plVar2 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2 + *(float *)(param_1 + 0x17c),0);
        goto LAB_1438b3bf0;
      }
    }
  }
LAB_1438b3bee:
  uVar5 = 0;
LAB_1438b3bf0:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1438b3d1c FUN_1438b3d1c body=603 status=ok
// SIG undefined FUN_1438b3d1c(void)

undefined8 FUN_1438b3d1c(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    cVar2 = (**(code **)(*param_2 + 0x2a0))();
    if ((((cVar2 != '\0') && ((*(byte *)(param_1 + 0x18a) & 4) != 0)) &&
        (*(longlong *)(param_1 + 0xa8) != 0)) && (*(longlong *)(param_1 + 0xc0) != 0)) {
      if (*(char *)(param_1 + 0x188) != '\x02') {
        FUN_141053868(param_1,0);
      }
      lVar4 = *(longlong *)(param_1 + 0x180);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x194);
        if (lVar4 == 0) {
          lVar4 = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0x18c);
        }
      }
      else {
        lVar5 = *(longlong *)(lVar4 + 0x48);
        lVar4 = *(longlong *)(lVar4 + 0x50);
      }
      if ((param_2[9] != lVar5) || (param_2[10] != lVar4)) {
        lVar4 = FUN_1438b3424(param_2 + 7);
        local_48 = lVar4;
        if ((lVar4 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
          iVar3 = FUN_144d5f000(*(longlong *)(param_1 + 0xc0),lVar4);
          if (-1 < iVar3) {
            if (*(longlong *)(param_1 + 0xd8) != 0) {
              FUN_144d5fa90(param_1 + 0xd8,0,0);
            }
            *(undefined8 *)(param_1 + 0x180) = 0;
            *(undefined8 *)(param_1 + 0x1a0) = 0;
            *(undefined8 *)(param_1 + 0x18c) = 0;
            *(undefined8 *)(param_1 + 0x194) = 0;
            *(longlong *)(param_1 + 0xd8) = lVar4;
            plVar1 = *(longlong **)(param_1 + 0xb0);
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
            }
            goto LAB_1438b3e60;
          }
        }
        FUN_147f8aa7a(param_1,param_2);
        uVar6 = 0;
        FUN_144d5fa90(&local_48,0,0);
        goto LAB_1438b3f35;
      }
LAB_1438b3e60:
      uVar6 = 0;
      local_2c = 0.0;
      local_30 = 0.0;
      iVar3 = FUN_144d5fa00(*(undefined8 *)(param_1 + 0xd8));
      if (iVar3 < 0) goto LAB_1438b3f35;
      *(float *)(param_1 + 0x178) = local_30 - local_2c;
      if (0.0 < local_30 - local_2c) {
        uVar6 = 0;
        iVar3 = FUN_144d5fb60(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xd8),0);
        if (-1 < iVar3) {
          *(undefined4 *)(param_1 + 0x174) = 0;
          *(longlong **)(param_1 + 0x180) = param_2;
          *(float *)(param_1 + 0x17c) = local_2c;
          *(undefined1 *)(param_1 + 0x188) = 0;
          *(byte *)(param_1 + 0x18a) = *(byte *)(param_1 + 0x18a) & 0xfd | param_3 * '\x02';
          *(undefined8 *)(param_1 + 0x1a0) = 0;
          *(undefined8 *)(param_1 + 0x18c) = 0;
          *(undefined8 *)(param_1 + 0x194) = 0;
          local_48 = param_2[9];
          uStack_40 = (undefined4)param_2[10];
          uStack_3c = *(undefined4 *)((longlong)param_2 + 0x54);
          FUN_1438b5aaa(param_1 + 0x60,param_1);
          uVar6 = 1;
        }
        goto LAB_1438b3f35;
      }
    }
  }
  uVar6 = 0;
LAB_1438b3f35:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b3f78 FUN_1438b3f78 body=105 status=ok
// SIG undefined FUN_1438b3f78(void)

ulonglong FUN_1438b3f78(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (((((*(byte *)(param_1 + 0x18a) & 4) != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
      (*(longlong *)(param_1 + 0xa8) != 0)) && (*(char *)(param_1 + 0x188) != '\0')) {
    iVar1 = FUN_144d5fce0(*(longlong *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x170));
    if (-1 < iVar1) {
      *(undefined1 *)(param_1 + 0x188) = 0;
      uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))();
      }
      goto LAB_1438b3fd9;
    }
  }
  uVar2 = 0;
LAB_1438b3fd9:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1438b3fe2 FUN_1438b3fe2 body=198 status=ok
// SIG undefined FUN_1438b3fe2(void)

undefined8 FUN_1438b3fe2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0xc0) == 0) || (*(longlong *)(param_1 + 0xa8) == 0)) {
LAB_1438b405d:
    uVar4 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x188) == '\0') {
      iVar3 = FUN_144d5fc80(*(longlong *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x170));
      if (iVar3 < 0) goto LAB_1438b405d;
    }
    *(undefined1 *)(param_1 + 0x188) = 1;
    plVar1 = *(longlong **)(param_1 + 0xb0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    }
    lVar2 = *(longlong *)(param_1 + 0x180);
    if (lVar2 == 0) {
      if (*(longlong *)(param_1 + 0x194) == 0) {
        local_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
      }
      else {
        local_28 = *(undefined4 *)(param_1 + 0x18c);
        uStack_24 = *(undefined4 *)(param_1 + 400);
        uStack_20 = *(undefined4 *)(param_1 + 0x194);
        uStack_1c = *(undefined4 *)(param_1 + 0x198);
      }
    }
    else {
      local_28 = *(undefined4 *)(lVar2 + 0x48);
      uStack_24 = *(undefined4 *)(lVar2 + 0x4c);
      uStack_20 = *(undefined4 *)(lVar2 + 0x50);
      uStack_1c = *(undefined4 *)(lVar2 + 0x54);
    }
    FUN_1438b5aaa(param_1 + 0x78,param_1,&local_28);
    uVar4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b40aa FUN_1438b40aa body=238 status=ok
// SIG undefined FUN_1438b40aa(void)

void FUN_1438b40aa(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  if ((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x18a) & 0x40) == 0)) &&
      (param_1[1] == *(longlong *)(lVar1 + 0xc0))) && (param_1[2] == *(longlong *)(lVar1 + 0xd8))) {
    FUN_1400b22c2(local_38);
    local_60 = *(undefined4 *)((longlong)param_1 + 0x24);
    local_68 = (undefined4)param_1[4];
    lVar2 = *(longlong *)(lVar1 + 0x180);
    if (lVar2 == 0) {
      if (*(longlong *)(lVar1 + 0x194) == 0) {
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
      }
      else {
        local_48 = *(undefined4 *)(lVar1 + 0x18c);
        uStack_44 = *(undefined4 *)(lVar1 + 400);
        uStack_40 = *(undefined4 *)(lVar1 + 0x194);
        uStack_3c = *(undefined4 *)(lVar1 + 0x198);
      }
    }
    else {
      local_48 = *(undefined4 *)(lVar2 + 0x48);
      uStack_44 = *(undefined4 *)(lVar2 + 0x4c);
      uStack_40 = *(undefined4 *)(lVar2 + 0x50);
      uStack_3c = *(undefined4 *)(lVar2 + 0x54);
    }
    local_58 = local_38;
    FUN_147f8ab40(lVar1 + 0x90,lVar1,&local_48,(int)param_1[3]);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b419a FUN_1438b419a body=4015 status=ok
// SIG undefined FUN_1438b419a(void)

ulonglong FUN_1438b419a(longlong param_1,longlong *param_2,char param_3,ulonglong param_4,
                       char param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  code *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  byte bVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  code **local_160;
  code **local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  int local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined8 local_c0;
  code *local_b8;
  longlong local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  code *local_78 [4];
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_2 != (longlong *)0x0) {
    cVar4 = (**(code **)(*param_2 + 0x2a0))(param_2);
    if (cVar4 != '\0') {
      FUN_1411876f6(param_1);
      *(longlong **)(param_1 + 0xa8) = param_2;
      plVar8 = param_2;
      if ((char)param_2[0xf] == '\x02') {
        cVar4 = '\x01';
      }
      else if ((char)param_2[0xf] == '\0') {
        plVar8 = (longlong *)FUN_1414c1ebe();
        lVar10 = plVar8[0x22];
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 1000))(plVar8);
          lVar10 = plVar8[0x22];
        }
        cVar4 = *(char *)(lVar10 + 0x28);
        plVar8 = *(longlong **)(param_1 + 0xa8);
      }
      else {
        cVar4 = '\0';
      }
      *(char *)(param_1 + 0x189) = cVar4;
      local_a8 = (code *)&LAB_14181b8c4;
      local_a0 = &LAB_14181b8ca;
      local_98 = 0;
      if ((longlong)(int)plVar8[10] < 1) {
LAB_1438b42be:
        if ((longlong)(int)plVar8[8] != 0) {
          local_160 = &local_b8;
          local_b8 = FUN_1438b40aa;
          puVar1 = (undefined8 *)(param_1 + 0xc0);
          local_158 = &local_a8;
          local_168 = puVar1;
          local_b0 = param_1;
          iVar5 = FUN_144d5f410(plVar8[7],(longlong)(int)plVar8[8],1,1);
          if (-1 < iVar5) {
            local_c0 = 0;
            iVar5 = FUN_144d5f620(*puVar1,0);
            if (-1 < iVar5) {
              iVar5 = *(int *)(param_1 + 0x168);
              *(uint *)(param_1 + 0x168) = iVar5 + (uint)local_c0;
              if ((uint)(*(int *)(param_1 + 0x16c) - iVar5) < (uint)local_c0) {
                FUN_14475e4ac(param_1 + 0x160);
              }
              local_d8 = 0;
              uStack_d0 = (ulonglong)(uint)local_c0;
              if ((uint)local_c0 != 0) {
                FUN_14479d316(&local_d8,0);
              }
              iVar5 = FUN_144d5f620(*puVar1,local_d8,&local_c0);
              if ((iVar5 < 0) ||
                 (iVar5 = FUN_144d5fdb0(*(undefined8 *)(param_1 + 0xc0),param_1 + 200), iVar5 < 0))
              {
LAB_1438b4ffd:
                FUN_1411876f6(param_1);
                uVar11 = 0;
              }
              else {
                if (*(longlong *)(param_1 + 0xd0) != 0) {
                  local_78[0] = (code *)0x0;
                  iVar5 = FUN_144d5f270(*(longlong *)(param_1 + 0xd0),0);
                  if (iVar5 < 0) goto LAB_1438b4ffd;
                  if (local_78[0] != (code *)0x0) {
                    iVar5 = *(int *)(param_1 + 0xe8);
                    *(uint *)(param_1 + 0xe8) = iVar5 + (uint)local_78[0];
                    pcVar9 = local_78[0];
                    if ((uint)(*(int *)(param_1 + 0xec) - iVar5) < (uint)local_78[0]) {
                      FUN_14181ba16(param_1 + 0xe0);
                      pcVar9 = (code *)((ulonglong)local_78[0] & 0xffffffff);
                    }
                    iVar5 = *(int *)(param_1 + 0x118);
                    *(uint *)(param_1 + 0x118) = iVar5 + (uint)pcVar9;
                    if ((uint)(*(int *)(param_1 + 0x11c) - iVar5) < (uint)pcVar9) {
                      FUN_14479d316(param_1 + 0x110);
                    }
                    iVar5 = FUN_144d5f270(*(undefined8 *)(param_1 + 0xd0),
                                          *(undefined8 *)(param_1 + 0x110),local_78);
                    if (iVar5 < 0) goto LAB_1438b4ffd;
                    iVar5 = *(int *)(param_1 + 0xf8);
                    uVar7 = (uint)local_78[0];
                    *(uint *)(param_1 + 0xf8) = iVar5 + uVar7;
                    if ((uint)(*(int *)(param_1 + 0xfc) - iVar5) < uVar7) {
                      FUN_144a2c682(param_1 + 0xf0);
                    }
                    memset((void *)((longlong)iVar5 * 0x60 + *(longlong *)(param_1 + 0xf0)),0,
                           (longlong)(int)uVar7 * 0x60);
                    if ((longlong)*(int *)(param_1 + 0x118) != 0) {
                      plVar15 = *(longlong **)(param_1 + 0x110);
                      plVar18 = plVar15 + *(int *)(param_1 + 0x118);
                      local_e0 = param_1 + 0x100;
                      local_108 = (longlong *)(param_1 + 0x1c0);
                      local_110 = param_1 + 0x1d0;
                      local_e8 = param_1 + 0x1f8;
                      local_118 = plVar18;
LAB_1438b4581:
                      if ((longlong)(int)plVar8[0xc] != 0) {
                        plVar17 = (longlong *)plVar8[0xb];
                        lVar10 = (longlong)(int)plVar8[0xc] << 4;
                        do {
                          if (*plVar17 == *plVar15) {
                            if (plVar17 != (longlong *)0x0) {
                              iVar5 = *(int *)(param_1 + 0x108);
                              *(uint *)(param_1 + 0x108) = iVar5 + 1U;
                              if (*(uint *)(param_1 + 0x10c) < iVar5 + 1U) {
                                FUN_1446f84a2(local_e0,iVar5);
                              }
                              *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar5 * 8) =
                                   plVar17[1];
                              if (*(int *)(param_1 + 500) != 0) {
                                iVar26 = *(int *)(param_1 + 0x1f0);
                                lVar10 = (longlong)iVar26;
                                iVar5 = *(int *)(*(longlong *)(param_1 + 0x1c0) + 4 + lVar10 * 0x18)
                                ;
                                *(int *)(param_1 + 0x1f0) = iVar5;
                                iVar6 = *(int *)(param_1 + 500) + -1;
                                *(int *)(param_1 + 500) = iVar6;
                                if (iVar6 != 0) {
                                  *(undefined4 *)
                                   (*(longlong *)(param_1 + 0x1c0) + (longlong)iVar5 * 0x18) =
                                       0xffffffff;
                                }
                                goto LAB_1438b46d1;
                              }
                              iVar26 = *(int *)(param_1 + 0x1c8);
                              *(int *)(param_1 + 0x1c8) = iVar26 + 1;
                              if (*(int *)(param_1 + 0x1cc) == iVar26) {
                                FUN_14482b872(local_108,iVar26);
                              }
                              uVar7 = *(uint *)(param_1 + 0x1e8);
                              uVar11 = (ulonglong)uVar7;
                              if (uVar7 == 0) {
                                iVar5 = -1;
                              }
                              else {
                                iVar5 = uVar7 + 0x1e;
                                if (-1 < (int)(uVar7 - 1)) {
                                  iVar5 = uVar7 - 1;
                                }
                                iVar5 = iVar5 >> 5;
                              }
                              iVar6 = uVar7 + 1;
                              uVar21 = uVar7 + 0x1f;
                              if (-1 < (int)uVar7) {
                                uVar21 = uVar7;
                              }
                              iVar25 = (int)uVar21 >> 5;
                              if (iVar25 == iVar5) {
                                *(int *)(param_1 + 0x1e8) = iVar6;
                                goto LAB_1438b46a8;
                              }
                              if ((int)uVar7 < *(int *)(param_1 + 0x1ec)) goto LAB_1438b48c0;
                              uVar7 = uVar7 + 0x20;
                              local_f8 = (ulonglong)uVar7;
                              local_100 = uVar11;
                              local_ec = iVar25;
                              if (uVar7 < 0xa0) {
                                iVar5 = 0x80;
                                goto LAB_1438b4a3d;
                              }
                              uVar7 = uVar7 >> 5;
                              local_f8 = (ulonglong)uVar7;
                              if (*(int *)(param_1 + 0x1ec) + 0x1fU < 0xa0) {
                                uVar21 = 4;
                                if (4 < uVar7) {
                                  uVar21 = uVar7;
                                }
                              }
                              else {
                                uVar21 = uVar7 + (uVar7 * 3 >> 3) + 0x10;
                              }
                              uVar12 = (ulonglong)(uVar21 * 4);
                              if (DAT_14c872d28 == (longlong *)0x0) goto LAB_1438b4a14;
                              if (*(code **)(*DAT_14c872d28 + 0x60) != (code *)&LAB_14489e5c8) {
                                uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                   (DAT_14c872d28,uVar12,0);
                                uVar11 = (ulonglong)*(uint *)(param_1 + 0x1e8);
                                goto LAB_1438b4a14;
                              }
                              uVar7 = (uint)(uVar12 + 0xf);
                              if (uVar21 < 0x1ffd) {
                                uVar12 = (ulonglong)
                                         (ushort)(&DAT_14c841d90)
                                                 [0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
                                goto LAB_1438b4a14;
                              }
                              uVar16 = (ulonglong)(uVar7 & 0xfffffff0);
                              if (0x7ff0 < uVar16) goto LAB_1438b4a95;
                              bVar20 = (&DAT_14c841e00)[uVar7 >> 4];
                              uVar19 = 0x32;
                              if (0x32 < bVar20) {
                                uVar19 = (ulonglong)bVar20;
                              }
                              uVar22 = 0x32 - (ulonglong)bVar20;
                              goto LAB_1438b4adb;
                            }
                            break;
                          }
                          plVar17 = plVar17 + 2;
                          lVar10 = lVar10 + -0x10;
                        } while (lVar10 != 0);
                      }
                      goto LAB_1438b4942;
                    }
                  }
                }
LAB_1438b4b18:
                bVar20 = (char)(param_4 & 0xffffffff) << 4 | param_3 << 3;
                lVar10 = CONCAT71((int7)((param_4 & 0xffffffff) >> 8),bVar20);
                *(byte *)(param_1 + 0x18a) =
                     param_5 << 5 | bVar20 | *(byte *)(param_1 + 0x18a) & 199;
                *(undefined4 *)(param_1 + 0x128) = 0;
                if (*(int *)(param_1 + 300) != 0) {
                  FUN_1402191ca(param_1 + 0x120,0);
                }
                *(undefined4 *)(param_1 + 0x138) = 0;
                if (*(int *)(param_1 + 0x13c) != 0) {
                  FUN_1448f21ac(param_1 + 0x130,0);
                }
                *(undefined4 *)(param_1 + 0x148) = 0;
                if (*(int *)(param_1 + 0x14c) != 0) {
                  FUN_1402191ca(param_1 + 0x140,0);
                }
                *(undefined4 *)(param_1 + 0x158) = 0;
                if (*(int *)(param_1 + 0x15c) != 0) {
                  FUN_1448f21ac(param_1 + 0x150,0);
                }
                FUN_140b0ad52(param_1);
                if (((*(byte *)(param_1 + 0x18a) & 0x10) == 0) &&
                   (lVar13 = FUN_140b0adb4(param_1), lVar13 != 0)) {
                  lVar10 = *(longlong *)(lVar13 + 0x658);
                  if (lVar10 == 0) {
                    lVar10 = *(longlong *)(lVar13 + 0x660);
                    if ((DAT_14c950c29 & lVar10 != 0) != 0) goto LAB_1438b513d;
                    if (lVar10 != 0) goto LAB_1438b4be1;
                  }
                  else {
                    if (DAT_14c950c29 == 1) {
LAB_1438b513d:
                      FUN_1456cec3c(lVar10);
                    }
LAB_1438b4be1:
                    if (DAT_14cb06da8 == 0) {
                      local_130 = local_78;
                      local_78[0] = FUN_1449e2820;
                      local_120 = FUN_14081d0ea;
                      local_128 = &LAB_1464003b0;
                      local_138 = &LAB_147d17bdf;
                      local_140 = &LAB_1417edf22;
                      local_148 = L"Engine";
                      local_150 = 0;
                      local_158 = (code **)CONCAT44(local_158._4_4_,0x10000000);
                      local_160 = (code **)CONCAT44(local_160._4_4_,8);
                      local_168 = (undefined8 *)CONCAT44(local_168._4_4_,0x588);
                      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                    }
                    if ((*(int *)(DAT_14cb06da8 + 0x38) <=
                         *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
                      iVar5 = *(int *)(lVar10 + 0x428) - *(int *)(lVar10 + 0x454);
                      if (iVar5 != 0) {
                        if (iVar5 < 0) goto LAB_1438b5049;
                        lVar13 = param_1 + 0x120;
                        if (*(int *)(param_1 + 300) < iVar5) {
                          FUN_1402191ca(lVar13,iVar5);
                        }
                        plVar8 = (longlong *)(param_1 + 0x130);
                        local_110 = lVar13;
                        if (*(int *)(param_1 + 0x13c) < iVar5) {
                          FUN_1448f21ac(plVar8,iVar5);
                        }
                        lVar13 = (longlong)(int)uStack_d0;
                        if (0 < lVar13) {
                          plVar18 = (longlong *)(lVar10 + 0x458);
                          lVar27 = 0;
                          local_118 = plVar8;
LAB_1438b4c89:
                          if ((longlong)(int)param_2[0xc] != 0) {
                            plVar15 = (longlong *)param_2[0xb];
                            lVar14 = (longlong)(int)param_2[0xc] << 4;
                            do {
                              if (*plVar15 == *(longlong *)(local_d8 + lVar27 * 8)) {
                                if ((plVar15 != (longlong *)0x0) &&
                                   (*(int *)(lVar10 + 0x428) != *(int *)(lVar10 + 0x454))) {
                                  lVar14 = plVar15[1];
                                  uVar7 = (uint)((ulonglong)lVar14 >> 0x10);
                                  uVar21 = (uint)lVar14 & 0xffff;
                                  plVar17 = *(longlong **)(lVar10 + 0x460);
                                  if (*(longlong **)(lVar10 + 0x460) == (longlong *)0x0) {
                                    plVar17 = plVar18;
                                  }
                                  iVar5 = *(int *)((longlong)plVar17 +
                                                  (ulonglong)
                                                  (*(int *)(lVar10 + 0x468) - 1U &
                                                  (int)((ulonglong)lVar14 >> 0x20) +
                                                  ((uint)lVar14 << 0x10 | uVar21) +
                                                  (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar21 >> 4))
                                                  * 4);
                                  if (iVar5 != -1) {
                                    goto LAB_1438b4d35;
                                  }
                                }
                                break;
                              }
                              plVar15 = plVar15 + 2;
                              lVar14 = lVar14 + -0x10;
                            } while (lVar14 != 0);
                          }
                          goto LAB_1438b4dd5;
                        }
                      }
                    }
                  }
                }
LAB_1438b4de1:
                uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
                if (param_5 == '\0') {
                  plVar8 = (longlong *)FUN_140b0adb4(param_1);
                  if (plVar8 != (longlong *)0x0) {
                    iVar5 = (**(code **)(*plVar8 + 0x7b0))(plVar8);
                    if (iVar5 != 0) {
                      if (iVar5 < 0) {
LAB_1438b5049:
                    /* WARNING: Subroutine does not return */
                        FUN_1456afac4(iVar5);
                      }
                      if (*(int *)(param_1 + 0x14c) < iVar5) {
                        FUN_1402191ca((longlong *)(param_1 + 0x140),iVar5);
                      }
                      local_118 = (longlong *)(param_1 + 0x150);
                      if (*(int *)(param_1 + 0x15c) < iVar5) {
                        FUN_1448f21ac(local_118,iVar5);
                      }
                      local_110 = (longlong)(int)uStack_d0;
                      if (0 < local_110) {
                        lVar10 = 0;
                        local_108 = (longlong *)(param_1 + 0x140);
LAB_1438b4e76:
                        if ((longlong)(int)param_2[0xc] != 0) {
                          plVar18 = (longlong *)param_2[0xb];
                          lVar13 = (longlong)(int)param_2[0xc] << 4;
                          do {
                            if (*plVar18 == *(longlong *)(local_d8 + lVar10 * 8)) {
                              if (plVar18 != (longlong *)0x0) {
                                if ((longlong)*(int *)(param_1 + 0x128) == 0) goto LAB_1438b4ee5;
                                lVar13 = 0;
                                goto LAB_1438b4ed2;
                              }
                              break;
                            }
                            plVar18 = plVar18 + 2;
                            lVar13 = lVar13 + -0x10;
                          } while (lVar13 != 0);
                        }
                        goto LAB_1438b4fed;
                      }
                      goto LAB_1438b5007;
                    }
                  }
                  goto LAB_1438b4ffd;
                }
              }
LAB_1438b5007:
              if (local_d8 != 0) {
                FUN_1400020a8();
              }
              goto LAB_1438b43a8;
            }
          }
        }
      }
      else {
        uVar7 = (cVar4 == '\x01') + 0x80000000;
        if (param_3 == '\0') {
          uVar7 = (uint)(cVar4 == '\x01');
        }
        local_168 = (undefined8 *)(param_1 + 0xd0);
        local_160 = &local_a8;
        iVar5 = FUN_144d5f090(plVar8[9],(longlong)(int)plVar8[10],1,uVar7);
        if (-1 < iVar5) goto LAB_1438b42be;
      }
      FUN_1411876f6(param_1);
    }
  }
  uVar11 = 0;
LAB_1438b43a8:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
  while (lVar10 = uVar19 + 1 + uVar22, uVar22 = uVar22 - 1, lVar10 != 0x33) {
LAB_1438b4adb:
    uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar22 & 0xffffffff];
    if (((&DAT_14c841d90)[uVar22 & 0xffffffff] & 0xf) == 0) goto LAB_1438b4a14;
  }
LAB_1438b4a95:
  uVar12 = (ulonglong)DAT_14c841df8;
  if (DAT_14c841df8 < 0x11) {
    uVar12 = 0x10;
  }
  uVar12 = -uVar12 & (uVar16 + uVar12) - 1;
LAB_1438b4a14:
  iVar6 = (int)(uVar12 >> 2);
  iVar5 = iVar6 << 5;
  if (iVar6 < (int)local_f8) {
    iVar5 = -0x20;
  }
LAB_1438b4a3d:
  *(int *)(param_1 + 0x1ec) = iVar5;
  FUN_1446efbd8(local_110,uVar11);
  iVar6 = *(int *)(param_1 + 0x1e8) + 1;
  uVar11 = local_100;
  iVar25 = local_ec;
LAB_1438b48c0:
  iVar5 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  *(int *)(param_1 + 0x1e8) = iVar6;
  if (iVar6 % 0x20 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x1e0);
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      lVar10 = local_110;
    }
    bVar20 = -(char)(iVar6 % 0x20);
    *(uint *)(lVar10 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)(lVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar20 & 0x1f)) >> (bVar20 & 0x1f)
    ;
  }
LAB_1438b46a8:
  lVar10 = (longlong)iVar26;
  lVar13 = *(longlong *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    lVar13 = local_110;
  }
  bVar20 = (byte)uVar11 & 0x1f;
  puVar2 = (uint *)(lVar13 + (longlong)iVar25 * 4);
  *puVar2 = *puVar2 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
LAB_1438b46d1:
  uVar7 = 1 << ((byte)iVar26 & 0x1f);
  lVar13 = *(longlong *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    lVar13 = local_110;
  }
  iVar5 = iVar26 + 0x1f;
  if (-1 < iVar26) {
    iVar5 = iVar26;
  }
  puVar2 = (uint *)(lVar13 + (longlong)(iVar5 >> 5) * 4);
  *puVar2 = *puVar2 | uVar7;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + lVar10 * 0x18);
  lVar10 = plVar17[1];
  *plVar3 = lVar10;
  plVar3[1] = (longlong)plVar17;
  *(undefined4 *)(plVar3 + 2) = 0xffffffff;
  uVar21 = (uint)((ulonglong)lVar10 >> 0x10);
  uVar24 = (uint)lVar10 & 0xffff;
  uVar21 = ((uint)lVar10 << 0x10 | uVar24) + (int)((ulonglong)lVar10 >> 0x20) +
           (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar24 >> 4);
  uVar24 = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 500);
  plVar18 = local_118;
  if (1 < uVar24) {
    lVar13 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar13 = local_e8;
    }
    iVar6 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x208) - 1U & uVar21) * 4);
    if (iVar6 != -1) {
      do {
        plVar17 = (longlong *)(*local_108 + (longlong)iVar6 * 0x18);
        if (*plVar17 == lVar10) {
          lVar10 = plVar3[1];
          *plVar17 = *plVar3;
          plVar17[1] = lVar10;
          lVar10 = *(longlong *)(param_1 + 0x1c0);
          if (*(int *)(param_1 + 500) != 0) {
            *(int *)(lVar10 + (longlong)*(int *)(param_1 + 0x1f0) * 0x18) = iVar26;
          }
          *(undefined4 *)(lVar10 + (longlong)iVar26 * 0x18) = 0xffffffff;
          if (*(int *)(param_1 + 500) < 1) {
            uVar23 = 0xffffffff;
          }
          else {
            uVar23 = *(undefined4 *)(param_1 + 0x1f0);
          }
          *(undefined4 *)(lVar10 + (longlong)iVar26 * 0x18 + 4) = uVar23;
          *(int *)(param_1 + 0x1f0) = iVar26;
          *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
          lVar10 = *(longlong *)(param_1 + 0x1e0);
          if (*(longlong *)(param_1 + 0x1e0) == 0) {
            lVar10 = local_110;
          }
          puVar2 = (uint *)(lVar10 + (longlong)(iVar5 >> 5) * 4);
          *puVar2 = *puVar2 & ~uVar7;
          goto LAB_1438b4942;
        }
        iVar6 = (int)plVar17[2];
      } while (iVar6 != -1);
    }
  }
  iVar5 = 1;
  if (3 < uVar24) {
    uVar11 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar10 & 0x1f);
  }
  if (((int)uVar24 < 1) || (iVar5 <= *(int *)(param_1 + 0x208))) {
    uVar21 = *(int *)(param_1 + 0x208) - 1U & uVar21;
    *(uint *)((longlong)plVar3 + 0x14) = uVar21;
    lVar10 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar10 = local_e8;
    }
    *(undefined4 *)(plVar3 + 2) =
         *(undefined4 *)
          (lVar10 + ((longlong)*(int *)(param_1 + 0x208) - 1U & (longlong)(int)uVar21) * 4);
    lVar10 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar10 = local_e8;
    }
    *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x208) - 1U & (longlong)(int)uVar21) * 4) =
         iVar26;
  }
  else {
    *(int *)(param_1 + 0x208) = iVar5;
    FUN_1438b5b58(local_108);
    plVar18 = local_118;
  }
LAB_1438b4942:
  plVar15 = plVar15 + 1;
  if (plVar15 == plVar18) goto LAB_1438b4b18;
  goto LAB_1438b4581;
  while (iVar5 = *(int *)(*(longlong *)(lVar10 + 0x420) + (longlong)iVar5 * 0x14 + 0xc), iVar5 != -1
        ) {
LAB_1438b4d35:
    if (*(longlong *)(*(longlong *)(lVar10 + 0x420) + (longlong)iVar5 * 0x14) == lVar14) {
      iVar5 = *(int *)(param_1 + 0x128);
      *(uint *)(param_1 + 0x128) = iVar5 + 1U;
      if (*(uint *)(param_1 + 300) < iVar5 + 1U) {
        local_108 = plVar18;
        FUN_1446f84a2(local_110,iVar5);
        plVar8 = local_118;
        plVar18 = local_108;
      }
      *(longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar5 * 8) = plVar15[1];
      iVar5 = *(int *)(param_1 + 0x138);
      *(uint *)(param_1 + 0x138) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x13c) < iVar5 + 1U) {
        FUN_14479d316(plVar8,iVar5);
        plVar8 = local_118;
      }
      *(longlong *)(*plVar8 + (longlong)iVar5 * 8) = lVar27;
      break;
    }
  }
LAB_1438b4dd5:
  lVar27 = lVar27 + 1;
  if (lVar27 == lVar13) goto LAB_1438b4de1;
  goto LAB_1438b4c89;
  while (lVar13 = lVar13 + 8, (longlong)*(int *)(param_1 + 0x128) * 8 != lVar13) {
LAB_1438b4ed2:
    if (*(longlong *)(*(longlong *)(param_1 + 0x120) + lVar13) == plVar18[1]) goto LAB_1438b4fed;
  }
LAB_1438b4ee5:
  iVar26 = 0;
  do {
    plVar15 = (longlong *)(**(code **)(*plVar8 + 0x610))(plVar8,iVar26);
    if (plVar15 != (longlong *)0x0) {
      local_8c = (undefined4)plVar18[1];
      local_88 = 0;
      local_84 = (undefined4)((ulonglong)plVar18[1] >> 0x20);
      local_80 = 0xffffffff;
      local_7c = 2;
      local_58 = 0xff;
      local_50 = 0xffffffff;
      local_4c = 0;
      local_168 = (undefined8 *)CONCAT44(local_168._4_4_,3);
      cVar4 = (**(code **)(*plVar15 + 0x3c0))(plVar15,0,&local_8c,local_78);
      if (cVar4 != '\0') {
        iVar26 = *(int *)(param_1 + 0x148);
        *(uint *)(param_1 + 0x148) = iVar26 + 1U;
        if (*(uint *)(param_1 + 0x14c) < iVar26 + 1U) {
          FUN_1446f84a2(local_108,iVar26);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar26 * 8) = plVar18[1];
        iVar26 = *(int *)(param_1 + 0x158);
        *(uint *)(param_1 + 0x158) = iVar26 + 1U;
        if (*(uint *)(param_1 + 0x15c) < iVar26 + 1U) {
          FUN_14479d316(local_118,iVar26);
        }
        *(longlong *)(*local_118 + (longlong)iVar26 * 8) = lVar10;
        break;
      }
    }
    iVar26 = iVar26 + 1;
  } while (iVar5 != iVar26);
LAB_1438b4fed:
  lVar10 = lVar10 + 1;
  if (lVar10 == local_110) goto LAB_1438b5007;
  goto LAB_1438b4e76;
}



// FUNCTION 1438b514a FUN_1438b514a body=269 status=ok
// SIG undefined FUN_1438b514a(void)

ulonglong FUN_1438b514a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(int *)(param_1 + 500) < *(int *)(param_1 + 0x1c8)) {
    lVar4 = *param_2;
    uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar5 = (uint)lVar4 & 0xffff;
    lVar3 = param_1 + 0x1f8;
    if (*(longlong *)(param_1 + 0x200) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x200);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x208) - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar6 * 0x18);
        if (*plVar7 == lVar4) goto LAB_1438b51de;
        iVar6 = (int)plVar7[2];
      } while (iVar6 != -1);
    }
    plVar7 = (longlong *)0x0;
LAB_1438b51de:
    plVar7 = (longlong *)plVar7[1];
LAB_1438b51e2:
    if ((plVar7 != (longlong *)0x0) && ((longlong)*(int *)(param_1 + 0x118) != 0)) {
      lVar4 = (longlong)*(int *)(param_1 + 0x118) << 3;
      uVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x110) + uVar2 * 8) == *plVar7) {
          if ((int)uVar2 == -1) {
            return 0xffffffff;
          }
          return uVar2 & 0xffffffff;
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0xa8);
    if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x60) != 0)) {
      plVar7 = *(longlong **)(lVar4 + 0x58);
      lVar4 = (longlong)*(int *)(lVar4 + 0x60) << 4;
      do {
        if (plVar7[1] == *param_2) goto LAB_1438b51e2;
        plVar7 = plVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1438b5258 FUN_1438b5258 body=324 status=ok
// SIG undefined FUN_1438b5258(void)

void FUN_1438b5258(longlong param_1)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  
  lVar18 = (longlong)*(int *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xd0) != 0 && 0 < lVar18) {
    iVar15 = FUN_144d601a0(*(longlong *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 200),
                           *(undefined8 *)(param_1 + 0xe0),lVar18);
    if (-1 < iVar15) {
      lVar16 = 0x50;
      lVar17 = 0;
      do {
        lVar7 = *(longlong *)(param_1 + 0xe0);
        fVar2 = *(float *)(lVar7 + 0x24 + lVar17);
        dVar19 = (double)*(float *)(lVar7 + 0x20 + lVar17);
        fVar3 = *(float *)(lVar7 + 0x1c + lVar17);
        lVar8 = *(longlong *)(param_1 + 0xf0);
        fVar4 = *(float *)(lVar7 + 8 + lVar17);
        dVar11 = (double)-*(float *)(lVar7 + 4 + lVar17);
        fVar5 = *(float *)(lVar7 + lVar17);
        dVar14 = (double)*(float *)(lVar7 + 0xc + lVar17);
        fVar6 = *(float *)(lVar7 + 0x18 + lVar17);
        dVar20 = (double)-*(float *)(lVar7 + 0x14 + lVar17);
        auVar13._8_4_ = SUB84(dVar20,0);
        auVar13._0_8_ = (double)*(float *)(lVar7 + 0x10 + lVar17);
        auVar13._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        *(undefined1 (*) [16])(lVar8 + -0x50 + lVar16) = auVar13;
        auVar10._8_4_ = SUB84(dVar14,0);
        auVar10._0_8_ = (double)fVar6;
        auVar10._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        *(undefined1 (*) [16])(lVar8 + -0x40 + lVar16) = auVar10;
        auVar12._8_4_ = SUB84(dVar11,0);
        auVar12._0_8_ = (double)fVar5;
        auVar12._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(lVar8 + -0x30 + lVar16) = auVar12;
        pdVar1 = (double *)(lVar8 + -0x20 + lVar16);
        *pdVar1 = (double)fVar4;
        pdVar1[1] = 0.0;
        auVar9._8_4_ = SUB84(dVar19,0);
        auVar9._0_8_ = (double)fVar3;
        auVar9._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        *(undefined1 (*) [16])(lVar8 + -0x10 + lVar16) = auVar9;
        *(double *)(lVar8 + lVar16) = (double)fVar2;
        ((double *)(lVar8 + lVar16))[1] = 0.0;
        lVar17 = lVar17 + 0x28;
        lVar16 = lVar16 + 0x60;
      } while (lVar18 * 0x28 != lVar17);
      *(byte *)(param_1 + 0x18a) = *(byte *)(param_1 + 0x18a) & 0xfe;
    }
  }
  return;
}



// FUNCTION 1438b539c FUN_1438b539c body=892 status=ok
// SIG undefined FUN_1438b539c(void)

undefined8
FUN_1438b539c(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_88 [40];
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && ((longlong)*(int *)(param_2 + 0x38) != 0)) {
    plVar7 = *(longlong **)(param_2 + 0x30);
    lVar4 = (longlong)*(int *)(param_2 + 0x38) << 5;
    do {
      if ((*plVar7 == param_3) && (plVar7[1] == param_4)) {
        if ((plVar7 != (longlong *)0x0) &&
           ((((*(byte *)(param_1 + 0x18a) & 4) != 0 && (*(longlong *)(param_1 + 0xa8) != 0)) &&
            (*(longlong *)(param_1 + 0xc0) != 0)))) {
          if (*(char *)(param_1 + 0x188) != '\x02') {
            FUN_141053868(param_1,0);
          }
          lVar4 = *(longlong *)(param_1 + 0x180);
          if (lVar4 == 0) {
            lVar4 = *(longlong *)(param_1 + 0x194);
            if (lVar4 == 0) {
              lVar4 = 0;
              lVar6 = 0;
            }
            else {
              lVar6 = *(longlong *)(param_1 + 0x18c);
            }
          }
          else {
            lVar6 = *(longlong *)(lVar4 + 0x48);
            lVar4 = *(longlong *)(lVar4 + 0x50);
          }
          if ((*plVar7 == lVar6) && (plVar7[1] == lVar4)) goto LAB_1438b562b;
          plVar1 = (longlong *)(param_1 + 0x1a8);
          *(undefined4 *)(param_1 + 0x1b0) = 0;
          if (*(int *)(param_1 + 0x1b4) != 0) {
            FUN_144893a1c(plVar1,0);
          }
          local_58 = (void *)0x0;
          uStack_50 = 0;
          if ((longlong)*(int *)(param_2 + 0x38) == 0) goto LAB_1438b5544;
          plVar5 = *(longlong **)(param_2 + 0x30);
          lVar4 = (longlong)*(int *)(param_2 + 0x38) << 5;
          goto LAB_1438b54d8;
        }
        break;
      }
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  goto LAB_1438b53fa;
  while( true ) {
    plVar5 = plVar5 + 4;
    lVar4 = lVar4 + -0x20;
    if (lVar4 == 0) break;
LAB_1438b54d8:
    if ((*plVar5 == param_3) && (plVar5[1] == param_4)) {
      if (plVar5 != (longlong *)0x0) {
        iVar3 = (int)plVar5[3];
        if ((-1 < (longlong)iVar3) && (iVar3 < (int)*(uint *)(param_2 + 0x48))) {
          uVar2 = *(uint *)((longlong)plVar5 + 0x1c);
          uVar8 = uVar2 + iVar3;
          if ((uVar8 != 0 && SCARRY4(uVar2,iVar3) == (int)uVar8 < 0) &&
             (uVar8 <= *(uint *)(param_2 + 0x48))) {
            lVar4 = *(longlong *)(param_2 + 0x40);
            uStack_50 = (ulonglong)uVar2;
            if (uVar2 != 0) {
              FUN_1447403be(&local_58,0);
              memcpy(local_58,(void *)(lVar4 + iVar3),(longlong)(int)uVar2);
            }
          }
        }
      }
      break;
    }
  }
LAB_1438b5544:
  if (plVar1 == &local_58) {
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    iVar3 = *(int *)(param_1 + 0x1b0);
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *(void **)(param_1 + 0x1a8) = local_58;
    local_58 = (void *)0x0;
    *(int *)(param_1 + 0x1b0) = (int)uStack_50;
    *(undefined4 *)(param_1 + 0x1b4) = uStack_50._4_4_;
    iVar3 = (int)uStack_50;
  }
  if (0 < iVar3) {
    lVar4 = FUN_1438b3424(plVar1);
    if ((lVar4 != 0 && *(longlong *)(param_1 + 0xc0) != 0) &&
       (iVar3 = FUN_144d5f000(*(longlong *)(param_1 + 0xc0),lVar4), -1 < iVar3)) {
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        FUN_144d5fa90(param_1 + 0xd8,0,0);
      }
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined8 *)(param_1 + 0x18c) = 0;
      *(undefined8 *)(param_1 + 0x194) = 0;
      *(longlong *)(param_1 + 0xd8) = lVar4;
      plVar1 = *(longlong **)(param_1 + 0xb0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,plVar7);
      }
LAB_1438b562b:
      uVar9 = 0;
      local_5c = 0.0;
      local_60 = 0.0;
      iVar3 = FUN_144d5fa00(*(undefined8 *)(param_1 + 0xd8));
      if (iVar3 < 0) goto LAB_1438b53fd;
      *(float *)(param_1 + 0x178) = local_60 - local_5c;
      if (0.0 < local_60 - local_5c) {
        uVar9 = 0;
        iVar3 = FUN_144d5fb60(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xd8),0);
        if (-1 < iVar3) {
          *(undefined4 *)(param_1 + 0x174) = 0;
          *(undefined8 *)(param_1 + 0x180) = 0;
          *(float *)(param_1 + 0x17c) = local_5c;
          *(undefined1 *)(param_1 + 0x188) = 0;
          *(byte *)(param_1 + 0x18a) = *(byte *)(param_1 + 0x18a) & 0xfd | param_5 * '\x02';
          *(longlong *)(param_1 + 0x1a0) = param_2;
          lVar4 = plVar7[1];
          *(longlong *)(param_1 + 0x18c) = *plVar7;
          *(longlong *)(param_1 + 0x194) = lVar4;
          if (*(longlong *)(param_1 + 0x194) == 0) {
            uVar10 = 0;
            uVar11 = 0;
            uVar12 = 0;
            uVar13 = 0;
          }
          else {
            uVar10 = *(undefined4 *)(param_1 + 0x18c);
            uVar11 = *(undefined4 *)(param_1 + 400);
            uVar12 = *(undefined4 *)(param_1 + 0x194);
            uVar13 = *(undefined4 *)(param_1 + 0x198);
          }
          local_58 = (void *)CONCAT44(uVar11,uVar10);
          uStack_50 = CONCAT44(uVar13,uVar12);
          FUN_1438b5aaa(param_1 + 0x60,param_1,&local_58);
          uVar9 = 1;
        }
        goto LAB_1438b53fd;
      }
    }
  }
LAB_1438b53fa:
  uVar9 = 0;
LAB_1438b53fd:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1438b5725 FUN_1438b5725 body=41 status=ok
// SIG undefined FUN_1438b5725(void)

void FUN_1438b5725(void)

{
  DAT_14cb26a98 = 0;
  if (DAT_14cb26a90 != 0) {
    FUN_1400020a8();
  }
  FUN_147f8a8fa();
  return;
}



// FUNCTION 1438b574e FUN_1438b574e body=341 status=ok
// SIG undefined FUN_1438b574e(void)

undefined8 FUN_1438b574e(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  uVar7 = *param_2;
  uVar3 = FUN_1447addd0(param_2 + 1,0x10);
  uVar8 = uVar3 >> 0xd ^ param_2[5] - uVar3;
  uVar9 = uVar8 << 8 ^ (-0x61c88647 - uVar8) - uVar3;
  uVar10 = uVar9 >> 0xd ^ (uVar3 - uVar8) - uVar9;
  uVar3 = uVar10 >> 0xc ^ (uVar8 - uVar9) - uVar10;
  uVar8 = uVar3 << 0x10 ^ (uVar9 - uVar10) - uVar3;
  uVar9 = uVar8 >> 5 ^ (uVar10 - uVar3) - uVar8;
  uVar10 = uVar9 >> 3 ^ (uVar3 - uVar8) - uVar9;
  uVar3 = uVar10 << 10 ^ (uVar8 - uVar9) - uVar10;
  uVar8 = uVar7 >> 0xd ^ (uVar3 >> 0xf ^ uVar9 - (uVar10 + uVar3)) - uVar7;
  uVar3 = uVar8 << 8 ^ (-0x61c88647 - uVar7) - uVar8;
  uVar7 = uVar3 >> 0xd ^ (uVar7 - uVar8) - uVar3;
  uVar8 = uVar7 >> 0xc ^ (uVar8 - uVar3) - uVar7;
  uVar9 = uVar8 << 0x10 ^ (uVar3 - uVar7) - uVar8;
  uVar7 = uVar9 >> 5 ^ (uVar7 - uVar8) - uVar9;
  uVar3 = uVar7 >> 3 ^ (uVar8 - uVar9) - uVar7;
  uVar8 = uVar3 << 10 ^ (uVar9 - uVar7) - uVar3;
  iVar4 = FUN_1407e4ee4(plVar2,uVar8 >> 0xf ^ uVar7 - (uVar3 + uVar8),param_2);
  if ((iVar4 == -1) ||
     (lVar1 = *plVar2 + (longlong)iVar4 * 0x28, puVar5 = (undefined8 *)(lVar1 + 0x18),
     puVar5 == (undefined8 *)0x0 || lVar1 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar5;
  }
  return uVar6;
}



// FUNCTION 1438b58a4 FUN_1438b58a4 body=516 status=ok
// SIG undefined FUN_1438b58a4(void)

undefined8 * FUN_1438b58a4(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  uint *local_40;
  undefined8 **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(param_1 + 0x10);
  uVar6 = *param_2;
  uVar3 = FUN_1447addd0(param_2 + 1,0x10);
  uVar7 = uVar3 >> 0xd ^ param_2[5] - uVar3;
  uVar8 = uVar7 << 8 ^ (-0x61c88647 - uVar7) - uVar3;
  uVar9 = uVar8 >> 0xd ^ (uVar3 - uVar7) - uVar8;
  uVar3 = uVar9 >> 0xc ^ (uVar7 - uVar8) - uVar9;
  uVar7 = uVar3 << 0x10 ^ (uVar8 - uVar9) - uVar3;
  uVar8 = uVar7 >> 5 ^ (uVar9 - uVar3) - uVar7;
  uVar9 = uVar8 >> 3 ^ (uVar3 - uVar7) - uVar8;
  uVar3 = uVar9 << 10 ^ (uVar7 - uVar8) - uVar9;
  uVar7 = uVar6 >> 0xd ^ (uVar3 >> 0xf ^ uVar8 - (uVar9 + uVar3)) - uVar6;
  uVar3 = uVar7 << 8 ^ (-0x61c88647 - uVar6) - uVar7;
  uVar6 = uVar3 >> 0xd ^ (uVar6 - uVar7) - uVar3;
  uVar7 = uVar6 >> 0xc ^ (uVar7 - uVar3) - uVar6;
  uVar8 = uVar7 << 0x10 ^ (uVar3 - uVar6) - uVar7;
  uVar6 = uVar8 >> 5 ^ (uVar6 - uVar7) - uVar8;
  uVar3 = uVar6 >> 3 ^ (uVar7 - uVar8) - uVar6;
  uVar7 = uVar3 << 10 ^ (uVar8 - uVar6) - uVar3;
  iVar4 = FUN_1407e4ee4(plVar2,uVar7 >> 0xf ^ uVar6 - (uVar3 + uVar7),param_2);
  if ((iVar4 == -1) ||
     (lVar1 = *plVar2 + (longlong)iVar4 * 0x28, puVar5 = (undefined8 *)(lVar1 + 0x18),
     puVar5 == (undefined8 *)0x0 || lVar1 == 0)) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    *puVar5 = &PTR_FUN_14acc1bd8;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined8 *)((longlong)puVar5 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    local_38 = &local_48;
    local_48 = puVar5;
    local_40 = param_2;
    FUN_1407e5144(*(undefined8 *)(param_1 + 0x10),local_2c,&local_40,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  else {
    puVar5 = (undefined8 *)*puVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b5aaa FUN_1438b5aaa body=173 status=ok
// SIG undefined FUN_1438b5aaa(void)

void FUN_1438b5aaa(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1438b5b41;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1438b5b41:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1438b5b58 FUN_1438b5b58 body=668 status=ok
// SIG undefined FUN_1438b5b58(void)

void FUN_1438b5b58(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1438b5bd5;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_1438b5bd5:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar16 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 1438b5df4 FUN_1438b5df4 body=434 status=ok
// SIG undefined FUN_1438b5df4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438b5df4(void)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 uStack_20;
  uint uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_141471170(&DAT_14cb268d8,L"FaceFX.PreferredAudioSystem",&DAT_14cb268d0,
                L"Sets the preferred audio system when playing audio within FaceFX. 0=UnrealAudioSystem (Default), 1=Wwise"
               );
  atexit(FUN_1438b33b0);
  FUN_140056680(&DAT_14cb268e8,L"FaceFXAnimSet_");
  atexit((_func_5014 *)&LAB_1438b33f5);
  FUN_140056680(&DAT_14cb268f8,L"Preload_");
  atexit((_func_5014 *)&LAB_1438b3406);
  local_28 = (undefined *)0x800000014acc1b2a;
  local_2c = 6;
  uStack_20 = FUN_14577453c();
  uStack_1c = CONCAT31(uStack_1c._1_3_,1);
  FUN_14171c728(&DAT_14cb26a04,&local_28);
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cb26a08);
  if (cVar1 == '\0') {
    _DAT_14cb26a08 = 0;
    uRam000000014cb26a10 = 0;
  }
  if (local_28 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_28 = &DAT_14a19662d;
  uStack_20 = 4;
  uStack_1c = uStack_1c & 0xffffff00;
  FUN_14001a6c0(&local_28,1);
  DAT_14cb26a18 = 0;
  _DAT_14cb26a20 = 0;
  _DAT_14cb26a28 = 2;
  atexit(FUN_1438b3518);
  local_28 = (undefined *)0x973f9249072be535;
  uStack_20 = 0x9cb7bf0f;
  uStack_1c = 0x985e0299;
  _DAT_14cb26a30 = 0x72be535;
  uRam000000014cb26a34 = 0x973f9249;
  uRam000000014cb26a38 = 0x9cb7bf0f;
  uRam000000014cb26a3c = 0x985e0299;
  FUN_141005458(&local_28,1,L"FaceFXAnimSet",0);
  atexit((_func_5014 *)&LAB_1438b5719);
  _DAT_14cb26a40 = 0xffffffff;
  _DAT_14cb26a44 = 0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b5fa8 FUN_1438b5fa8 body=55 status=ok
// SIG undefined FUN_1438b5fa8(void)

void FUN_1438b5fa8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb26ac8 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb26ac8 = FUN_14171c317(FUN_14644a5a9,uVar1,L"EPlayerMappableKeySlot");
  }
  return;
}



// FUNCTION 1438b5fe0 FUN_1438b5fe0 body=133 status=ok
// SIG undefined FUN_1438b5fe0(void)

void FUN_1438b5fe0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438b6022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1438b6065 FUN_1438b6065 body=55 status=ok
// SIG undefined FUN_1438b6065(void)

void FUN_1438b6065(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb26ca0 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb26ca0 = FUN_14171c317(FUN_14644af0c,uVar1,L"EInputActionValueType");
  }
  return;
}



// FUNCTION 1438b609c FUN_1438b609c body=55 status=ok
// SIG undefined FUN_1438b609c(void)

void FUN_1438b609c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb26cd0 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb26cd0 = FUN_14171c317(FUN_14644afa6,uVar1,L"EMappingQueryResult");
  }
  return;
}



// FUNCTION 1438b60d3 FUN_1438b60d3 body=55 status=ok
// SIG undefined FUN_1438b60d3(void)

void FUN_1438b60d3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb26ce8 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb26ce8 = FUN_14171c317(FUN_14644afd5,uVar1,L"EMappingQueryIssue");
  }
  return;
}



// FUNCTION 1438b610a FUN_1438b610a body=55 status=ok
// SIG undefined FUN_1438b610a(void)

void FUN_1438b610a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb26d30 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb26d30 = FUN_14171c317(FUN_14644b136,uVar1,L"EPlayerMappableKeySettingBehaviors");
  }
  return;
}



// FUNCTION 1438b6141 FUN_1438b6141 body=69 status=ok
// SIG undefined FUN_1438b6141(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438b6141(void)

{
  _DAT_14cb26e18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438b6183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb26e20,1);
  return;
}



// FUNCTION 1438b6186 FUN_1438b6186 body=205 status=ok
// SIG undefined FUN_1438b6186(void)

undefined8 * FUN_1438b6186(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_3 == 0 || param_2 == 0) {
    param_1[3] = 0;
    uVar4 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = uVar4;
    param_1[2] = DAT_14c8464f0;
  }
  else {
    if (*(longlong *)(param_2 + 0x188) != 0) {
      lVar5 = FUN_14119cfbe();
      lVar2 = *(longlong *)(param_2 + 0x188);
      if ((((lVar2 != 0) && (lVar5 != 0)) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        FUN_147f8e698(lVar2,param_1,param_3);
        return param_1;
      }
    }
    param_1[2] = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = uVar4;
    bVar1 = *(byte *)(param_3 + 0x48);
    *(byte *)(param_1 + 3) = bVar1;
    if (bVar1 < 2) {
      param_1[1] = 0;
    }
    else if (bVar1 != 2) {
      return param_1;
    }
    param_1[2] = 0;
  }
  return param_1;
}



// FUNCTION 1438b6253 FUN_1438b6253 body=59 status=ok
// SIG undefined FUN_1438b6253(void)

void FUN_1438b6253(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb26ef0;
  if (DAT_14cb26ef0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb26ef0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001438b6283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1438b628e FUN_1438b628e body=1252 status=ok
// SIG undefined FUN_1438b628e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438b628e(longlong param_1,undefined4 param_2)

{
  uint *_Dst;
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a0;
  undefined4 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88;
  uint local_80;
  code *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x20) != DAT_14c872be0) {
    *(longlong *)(param_1 + 0x20) = DAT_14c872be0;
    plVar4 = (longlong *)FUN_14032f648();
    lVar5 = plVar4[0x22];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      lVar5 = plVar4[0x22];
    }
    if ((*(byte *)(lVar5 + 0xe0) & 0x20) != 0) {
      FUN_147f8fb44(&local_90,0x10,1,0);
      uVar8 = (ulonglong)local_80;
      lVar5 = CONCAT44(uStack_8c,local_90);
      if ((-1 < (int)local_80) && ((int)local_80 < local_88)) {
        do {
          lVar5 = *(longlong *)(lVar5 + (uVar8 & 0xffffffff) * 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb270f0) && (FUN_144b3d300(&DAT_14cb270f0), DAT_14cb270f0 == -1)) {
            DAT_14cb270e0 = 0;
            _DAT_14cb270e8 = 0;
            atexit((_func_5014 *)&LAB_1438baaa6);
            _Init_thread_footer(&DAT_14cb270f0);
          }
          bVar12 = (longlong)_DAT_14cb270e8 < 0;
          _DAT_14cb270e8 = _DAT_14cb270e8 & 0xffffffff00000000;
          if (bVar12) {
            FUN_147ca7932(&DAT_14cb270e0);
          }
          iVar3 = *(int *)(lVar5 + 0x1a0);
          if (0 < iVar3) {
            uVar11 = 0;
            do {
              _Dst = (uint *)(*(longlong *)(lVar5 + 0x198) + (longlong)(int)uVar11 * 8);
              if (((((_Dst[1] == 0) || (uVar2 = *_Dst, (int)uVar2 < 0)) ||
                   (DAT_14c9647dc <= (int)uVar2)) ||
                  ((plVar4 = (longlong *)
                             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                   plVar4 == (longlong *)0x0 || (*(uint *)(plVar4 + 2) != _Dst[1])))) ||
                 (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || (lVar7 = *plVar4, lVar7 == 0)))) {
                if (~uVar11 + iVar3 != 0) {
                  memmove(_Dst,_Dst + 2,(longlong)(int)(~uVar11 + iVar3) << 3);
                  iVar3 = *(int *)(lVar5 + 0x1a0);
                }
                uVar11 = uVar11 - 1;
                *(int *)(lVar5 + 0x1a0) = iVar3 + -1;
                FUN_14575f3bc((longlong *)(lVar5 + 0x198));
              }
              else {
                lVar6 = (longlong)DAT_14cb270e8;
                uVar2 = DAT_14cb270e8 + 1;
                _DAT_14cb270e8 = CONCAT44(DAT_14cb270ec,uVar2);
                if (DAT_14cb270ec < uVar2) {
                  FUN_14575f3fc(&DAT_14cb270e0);
                }
                *(longlong *)(DAT_14cb270e0 + lVar6 * 8) = lVar7;
              }
              uVar11 = uVar11 + 1;
              iVar3 = *(int *)(lVar5 + 0x1a0);
            } while ((int)uVar11 < iVar3);
          }
          FUN_143778dc0(*(undefined8 *)(lVar5 + 0x180),param_2);
          lVar7 = *(longlong *)(lVar5 + 0x20);
          plVar4 = *(longlong **)(lVar5 + 0x180);
          if (lVar7 == 0) {
LAB_1438b6751:
            lVar7 = 0;
          }
          else {
            if (DAT_14cb10130 == 0) {
              local_78 = FUN_140754f84;
              local_b0 = FUN_14081d0ea;
              local_b8 = FUN_14081d0ea;
              local_c0 = &local_78;
              local_c8 = &LAB_147da9a76;
              local_d0 = FUN_1409f3105;
              local_d8 = L"Engine";
              local_e0 = 0;
              local_e8 = 0x10000000;
              local_f0 = 8;
              local_f8 = 0x990;
              FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
            }
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
            goto LAB_1438b6751;
          }
          if (((((*(longlong *)(lVar7 + 0x30) != 0) &&
                (lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + 0x2b0), lVar5 != 0)) &&
               (*(longlong *)(lVar5 + 0x588) != 0)) &&
              (*(double *)(lVar7 + 0x708) <= *(double *)(lVar7 + 0x6d0))) ||
             (((*(byte *)(lVar7 + 0x154) & 0x40) != 0 && (iVar3 = FUN_14490d72a(lVar7), iVar3 == 3))
             )) {
            bVar10 = 1;
          }
          else {
            if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
              lVar5 = 0;
              do {
                lVar6 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar5);
                if (*(longlong *)(lVar6 + 0x360) == lVar7) {
                  if ((lVar6 != 0) && (bVar10 = 1, (*(byte *)(lVar6 + 0x278) & 1) != 0))
                  goto LAB_1438b65d4;
                  break;
                }
                lVar5 = lVar5 + 8;
              } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar5);
            }
            cVar1 = FUN_144a80e00(lVar7);
            if (cVar1 == '\0') {
              bVar10 = 0;
            }
            else {
              bVar10 = *(byte *)(lVar7 + 0x155) >> 7;
            }
          }
LAB_1438b65d4:
          (**(code **)(*plVar4 + 0x2b0))(plVar4,&DAT_14cb270e0,param_2,bVar10);
          lVar5 = CONCAT44(uStack_8c,local_90);
          uVar8 = (longlong)(int)local_80;
          do {
            uVar9 = uVar8;
            uVar8 = uVar9 + 1;
            local_80 = (uint)uVar8;
            if ((longlong)local_88 <= (longlong)uVar8) break;
          } while (*(longlong *)(lVar5 + uVar8 * 8) == 0);
        } while ((-2 < (longlong)uVar9) && ((int)local_80 < local_88));
      }
      if (lVar5 != 0) {
        FUN_1400020a8();
      }
    }
    local_98 = &local_90;
    local_a0 = FUN_1438bae20;
    local_90 = param_2;
    FUN_14032f414();
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438b6773 FUN_1438b6773 body=55 status=ok
// SIG undefined FUN_1438b6773(void)

void FUN_1438b6773(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb26f40 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb26f40 = FUN_14171c317(FUN_14644bb31,uVar1,L"EInputMappingRebuildType");
  }
  return;
}



// FUNCTION 1438b67aa FUN_1438b67aa body=69 status=ok
// SIG undefined FUN_1438b67aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438b67aa(void)

{
  _DAT_14cb27030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438b67ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb27038,1);
  return;
}



// FUNCTION 1438b67f0 FUN_1438b67f0 body=185 status=ok
// SIG undefined FUN_1438b67f0(void)

void FUN_1438b67f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_14032f648();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    if ((*(byte *)(lVar3 + 0xe0) & 2) != 0) {
      FUN_14644c052(&local_30);
      FUN_145bcccbc(lVar1 + 0x30,param_1,local_30);
      FUN_14644c1a6(local_38);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b68c2 FUN_1438b68c2 body=147 status=ok
// SIG undefined FUN_1438b68c2(void)

void FUN_1438b68c2(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
    lVar1 = FUN_147fa1702(lVar1,param_2);
    if (lVar1 != 0) {
      local_48 = *param_3;
      uStack_44 = param_3[1];
      uStack_40 = param_3[2];
      uStack_3c = param_3[3];
      local_38 = param_3[4];
      uStack_34 = param_3[5];
      uStack_30 = param_3[6];
      uStack_2c = param_3[7];
      local_58 = param_5;
      (**(code **)(*param_1 + 0x60))(param_1,lVar1,&local_48,param_4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b6956 FUN_1438b6956 body=124 status=ok
// SIG undefined FUN_1438b6956(void)

void FUN_1438b6956(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
    lVar1 = FUN_147fa1702(lVar1,param_2);
    if (lVar1 != 0) {
      local_48 = *param_3;
      uStack_44 = param_3[1];
      uStack_40 = param_3[2];
      uStack_3c = param_3[3];
      local_38 = param_3[4];
      uStack_34 = param_3[5];
      uStack_30 = param_3[6];
      uStack_2c = param_3[7];
      (**(code **)(*param_1 + 0x70))(param_1,lVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b69d4 FUN_1438b69d4 body=71 status=ok
// SIG undefined FUN_1438b69d4(void)

void FUN_1438b69d4(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
    lVar1 = FUN_147fa1702(lVar1,param_2);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001438b6a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))(param_1,lVar1,*(code **)(*param_1 + 0x80));
      return;
    }
  }
  return;
}



// FUNCTION 1438b6a1c FUN_1438b6a1c body=190 status=ok
// SIG undefined FUN_1438b6a1c(void)

void FUN_1438b6a1c(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) goto LAB_1438b6a4b;
  lVar1 = FUN_147fa1702(lVar1,param_2);
  if (lVar1 == 0) goto LAB_1438b6a4b;
  local_48 = *param_3;
  local_30 = *(byte *)(lVar1 + 0x48);
  if (local_30 < 2) {
    local_40 = 0;
LAB_1438b6a9d:
    local_38 = 0;
  }
  else {
    local_40 = param_3[1];
    if (local_30 == 2) goto LAB_1438b6a9d;
    local_38 = param_3[2];
  }
  local_58 = param_5;
  (**(code **)(*param_1 + 0x40))(param_1,lVar1,&local_48,param_4);
LAB_1438b6a4b:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b6adc FUN_1438b6adc body=218 status=ok
// SIG undefined FUN_1438b6adc(void)

void FUN_1438b6adc(longlong *param_1,longlong param_2,undefined4 param_3,byte *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_44;
  longlong *local_40;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = param_3;
  if (param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x10))();
    if (lVar1 != 0) {
      local_50 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      local_40 = &local_50;
      local_38 = &local_44;
      FUN_140ffcdc4(lVar1 + 0x4f0,local_2c,&local_40,0);
      (**(code **)(*param_1 + 0xa8))(param_1,param_4,1);
    }
    if ((*param_4 & 4) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x328))(plVar2,param_2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438b6bb8 FUN_1438b6bb8 body=13824 status=ok
// SIG undefined FUN_1438b6bb8(void)

void FUN_1438b6bb8(longlong *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  ulonglong *puVar4;
  char cVar5;
  longlong ***ppplVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong **pplVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  int iVar25;
  longlong *plVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  ulonglong uVar29;
  undefined7 uVar30;
  int iVar31;
  longlong *plVar32;
  ulonglong uVar33;
  undefined4 uVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong *plVar37;
  longlong lVar38;
  int iVar39;
  longlong *plVar40;
  longlong *plVar41;
  longlong lVar42;
  uint uVar43;
  longlong *plVar44;
  longlong **pplVar45;
  longlong *plVar46;
  bool bVar47;
  char cVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  undefined1 auStack_598 [32];
  undefined8 local_578;
  undefined4 local_570;
  undefined4 local_568;
  longlong local_560;
  int local_554;
  longlong *local_550;
  uint local_544;
  longlong *local_540;
  ulonglong local_538;
  longlong *local_530;
  longlong local_528;
  longlong local_520;
  ulonglong local_518;
  longlong local_510;
  longlong local_508;
  longlong *local_500;
  longlong *local_4f8;
  int local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  ulonglong local_4e0;
  longlong *local_4d8;
  longlong *local_4d0;
  longlong *local_4c8;
  undefined8 uStack_4c0;
  longlong local_4b8;
  undefined8 uStack_4b0;
  longlong *local_4a8;
  undefined8 uStack_4a0;
  longlong *local_498;
  undefined8 uStack_490;
  longlong *local_480;
  int local_478;
  undefined4 local_474;
  byte local_46c;
  char local_46b;
  byte local_46a;
  char local_469;
  longlong **local_468;
  longlong **local_460;
  longlong local_458;
  longlong **local_450;
  longlong *local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  ulonglong uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  longlong local_418;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3fc;
  int local_3f4;
  undefined1 local_3f0 [8];
  undefined1 *local_3e8;
  int local_3e0;
  longlong *local_3d8;
  undefined8 uStack_3d0;
  uint local_3c8 [4];
  uint *local_3b8;
  uint local_3b0;
  undefined8 local_3ac;
  int local_3a4;
  longlong local_398;
  undefined4 local_390;
  longlong *local_388;
  longlong *plStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  uint *local_368;
  int local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  int iStack_354;
  undefined8 local_350;
  undefined8 *puStack_348;
  int local_340;
  longlong *local_338;
  longlong local_328 [4];
  undefined8 local_308;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_598;
  if (((char)param_1[0x29] != '\0') &&
     (local_540 = param_1, lVar10 = (**(code **)(*param_1 + 0x10))(), lVar10 != 0)) {
    local_480 = *(longlong **)(lVar10 + 0x540);
    *(undefined8 *)(lVar10 + 0x540) = 0;
    local_478 = *(int *)(lVar10 + 0x548);
    local_474 = *(undefined4 *)(lVar10 + 0x54c);
    *(undefined8 *)(lVar10 + 0x548) = 0;
    FUN_140dde5a8(lVar10);
    local_550 = (longlong *)(lVar10 + 0x4a0);
    local_560 = lVar10;
    if (*(int *)(lVar10 + 0x4a8) != *(int *)(lVar10 + 0x4d4)) {
      lVar36 = lVar10 + 0x4d8;
      if (*(longlong *)(lVar10 + 0x4e0) != 0) {
        lVar36 = *(longlong *)(lVar10 + 0x4e0);
      }
      iVar39 = *(int *)(lVar10 + 0x4e8);
      iVar16 = iVar39 + 3;
      if (-1 < iVar39) {
        iVar16 = iVar39;
      }
      if (*(int *)(lVar10 + 0x4a8) - *(int *)(lVar10 + 0x4d4) < iVar16 >> 2) {
        iVar39 = *(int *)(lVar10 + 0x4c8);
        if (iVar39 != 0) {
          puVar12 = *(uint **)(lVar10 + 0x4c0);
          if (*(uint **)(lVar10 + 0x4c0) == (uint *)0x0) {
            puVar12 = (uint *)(lVar10 + 0x4b0);
          }
          uVar43 = *puVar12;
          if (uVar43 == 0) {
            iVar16 = iVar39 + 0x1e;
            if (-1 < iVar39 + -1) {
              iVar16 = iVar39 + -1;
            }
            uVar29 = 0;
            uVar33 = (ulonglong)(uint)(iVar16 >> 5);
            if (iVar16 >> 5 < 1) {
              uVar33 = uVar29;
            }
            iVar16 = 0;
            do {
              if (uVar33 == uVar29) goto LAB_1438b6ccc;
              iVar16 = iVar16 + 0x20;
              uVar43 = puVar12[uVar29 + 1];
              uVar29 = uVar29 + 1;
            } while (uVar43 == 0);
          }
          else {
            uVar29 = 0;
            iVar16 = 0;
          }
          uVar27 = (ulonglong)(-uVar43 & uVar43);
          uVar33 = uVar27 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar31 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar31 < iVar39) {
            uVar43 = 0xffffffff;
            do {
              *(undefined4 *)
               (lVar36 + (longlong)
                         *(int *)(*(longlong *)(lVar10 + 0x4a0) + 0x24 + (longlong)iVar31 * 0x28) *
                         4) = 0xffffffff;
              uVar43 = ~(uint)uVar27 & uVar43;
              puVar12 = *(uint **)(lVar10 + 0x4c0);
              if (*(uint **)(lVar10 + 0x4c0) == (uint *)0x0) {
                puVar12 = (uint *)(lVar10 + 0x4b0);
              }
              iVar18 = *(int *)(lVar10 + 0x4c8);
              iVar31 = (int)uVar29;
              lVar19 = (longlong)iVar31;
              uVar17 = puVar12[lVar19] & uVar43;
              if (uVar17 == 0) {
                iVar25 = iVar18 + 0x1e;
                if (-1 < iVar18 + -1) {
                  iVar25 = iVar18 + -1;
                }
                iVar25 = iVar25 >> 5;
                iVar16 = iVar16 + 0x20;
                iVar9 = iVar25;
                if (iVar25 < iVar31) {
                  iVar9 = iVar31;
                }
                if (iVar31 < iVar25) {
                  lVar38 = 0;
                  do {
                    uVar17 = puVar12[lVar19 + lVar38 + 1];
                    if (uVar17 != 0) {
                      uVar29 = (ulonglong)(iVar31 + (int)lVar38 + 1);
                      uVar43 = 0xffffffff;
                      goto LAB_1438ba141;
                    }
                    iVar16 = iVar16 + 0x20;
                    lVar38 = lVar38 + 1;
                  } while (iVar9 - lVar19 != lVar38);
                  uVar43 = 0xffffffff;
                  iVar31 = iVar9;
                }
                uVar29 = (ulonglong)(iVar31 + 1);
                iVar31 = iVar18;
              }
              else {
LAB_1438ba141:
                uVar27 = (ulonglong)(-uVar17 & uVar17);
                uVar33 = uVar27 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar33 != 0) {
                  for (; uVar33 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                iVar31 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                if (iVar18 <= iVar31) {
                  iVar31 = iVar18;
                }
              }
            } while (iVar31 != iVar39);
          }
        }
      }
      else if (0 < iVar39) {
        lVar19 = 0;
        do {
          *(undefined4 *)(lVar36 + lVar19 * 4) = 0xffffffff;
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)(lVar10 + 0x4e8));
      }
LAB_1438b6ccc:
      iVar39 = *(int *)(lVar10 + 0x4c8);
      if (iVar39 == 0) {
        uVar29 = 0;
        uVar33 = 1;
        iVar16 = 0;
        iVar31 = 0;
      }
      else {
        puVar12 = *(uint **)(lVar10 + 0x4c0);
        if (*(uint **)(lVar10 + 0x4c0) == (uint *)0x0) {
          puVar12 = (uint *)(lVar10 + 0x4b0);
        }
        uVar43 = *puVar12;
        if (uVar43 == 0) {
          iVar16 = iVar39 + 0x1e;
          if (-1 < iVar39 + -1) {
            iVar16 = iVar39 + -1;
          }
          uVar29 = 0;
          uVar33 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar33 = uVar29;
          }
          iVar31 = 0;
          do {
            if (uVar33 == uVar29) goto LAB_1438b6e2a;
            iVar31 = iVar31 + 0x20;
            uVar43 = puVar12[uVar29 + 1];
            uVar29 = uVar29 + 1;
          } while (uVar43 == 0);
        }
        else {
          uVar29 = 0;
          iVar31 = 0;
        }
        uVar33 = (ulonglong)(-uVar43 & uVar43);
        uVar27 = uVar33 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        iVar16 = (iVar31 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        if (iVar39 <= iVar16) {
          iVar16 = iVar39;
        }
      }
      if (iVar16 < iVar39) {
        uVar43 = 0xffffffff;
        do {
          lVar36 = *local_550;
          lVar19 = (longlong)iVar16;
          FUN_144a65a1e(*(undefined8 *)(lVar36 + 8 + lVar19 * 0x28),
                        *(undefined4 *)(lVar36 + 0x10 + lVar19 * 0x28));
          if (*(longlong *)(lVar36 + 8 + lVar19 * 0x28) != 0) {
            FUN_1400020a8();
          }
          uVar43 = uVar43 & ~(uint)uVar33;
          puVar12 = *(uint **)(local_560 + 0x4c0);
          if (*(uint **)(local_560 + 0x4c0) == (uint *)0x0) {
            puVar12 = (uint *)(lVar10 + 0x4b0);
          }
          iVar39 = *(int *)(local_560 + 0x4c8);
          iVar16 = (int)uVar29;
          lVar36 = (longlong)iVar16;
          uVar17 = puVar12[lVar36] & uVar43;
          if (uVar17 == 0) {
            iVar18 = iVar39 + 0x1e;
            if (-1 < iVar39 + -1) {
              iVar18 = iVar39 + -1;
            }
            iVar18 = iVar18 >> 5;
            iVar25 = iVar18;
            if (iVar18 < iVar16) {
              iVar25 = iVar16;
            }
            if (iVar18 <= iVar16) break;
            lVar19 = 0;
            while( true ) {
              iVar31 = iVar31 + 0x20;
              uVar17 = puVar12[lVar36 + lVar19 + 1];
              if (uVar17 != 0) break;
              lVar19 = lVar19 + 1;
              if (iVar25 - lVar36 == lVar19) goto LAB_1438b6e2a;
            }
            uVar29 = (ulonglong)(iVar16 + (int)lVar19 + 1);
            uVar43 = 0xffffffff;
          }
          uVar33 = (ulonglong)(-uVar17 & uVar17);
          uVar27 = uVar33 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar16 = (iVar31 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        } while (iVar16 < iVar39);
      }
LAB_1438b6e2a:
      lVar10 = local_560;
      *(undefined4 *)(local_560 + 0x4a8) = 0;
      if (*(int *)(local_560 + 0x4ac) < 0) {
        FUN_140549ad6(local_550,0);
      }
      *(undefined8 *)(lVar10 + 0x4d0) = 0xffffffff;
      *(undefined4 *)(lVar10 + 0x4c8) = 0;
    }
    plVar11 = local_540 + 0x1f;
    if ((int)local_540[0x20] != *(int *)((longlong)local_540 + 300)) {
      FUN_147f9ac12(plVar11);
      *(undefined4 *)(local_540 + 0x20) = 0;
      if (*(int *)((longlong)local_540 + 0x104) < 0) {
        FUN_144727cd0(plVar11,0);
      }
      local_540[0x25] = 0xffffffff;
      *(undefined4 *)(local_540 + 0x24) = 0;
      lVar10 = local_560;
    }
    uVar29 = 0;
    local_3b8 = (uint *)0x0;
    local_3b0 = 0;
    local_3d8 = (longlong *)0x0;
    uStack_3d0 = 0;
    local_3ac = 0xffffffff00000080;
    local_3a4 = 0;
    local_398 = 0;
    local_390 = 0;
    FUN_140d2530e();
    lVar36 = FUN_140c7d608();
    if (lVar36 != 0) {
      local_468 = &local_388;
      local_368 = (uint *)0x0;
      local_360 = 0;
      local_388 = (longlong *)0x0;
      plStack_380 = (longlong *)0x0;
      uStack_35c = 0x80;
      uStack_358 = 0xffffffff;
      iStack_354 = 0;
      puStack_348 = (undefined8 *)0x0;
      local_340 = 0;
      uStack_420 = &local_468;
      local_428 = (longlong ***)&LAB_1438bb542;
      FUN_140ca888a(lVar36);
      iVar39 = local_360;
      local_4f8 = plVar11;
      if (local_360 == 0) {
        uVar33 = 1;
        iVar31 = 0;
        iVar16 = 0;
      }
      else {
        puVar12 = local_368;
        if (local_368 == (uint *)0x0) {
          puVar12 = (uint *)&local_378;
        }
        uVar43 = *puVar12;
        if (uVar43 == 0) {
          iVar16 = local_360 + 0x1e;
          if (-1 < local_360 + -1) {
            iVar16 = local_360 + -1;
          }
          uVar29 = 0;
          uVar33 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar33 = uVar29;
          }
          iVar31 = 0;
          do {
            if (uVar33 == uVar29) goto LAB_1438b6fb1;
            iVar31 = iVar31 + 0x20;
            uVar43 = puVar12[uVar29 + 1];
            uVar29 = uVar29 + 1;
          } while (uVar43 == 0);
        }
        else {
          uVar29 = 0;
          iVar31 = 0;
        }
        uVar33 = (ulonglong)(-uVar43 & uVar43);
        uVar27 = uVar33 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar16 = (iVar31 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (local_360 <= iVar16) {
          iVar16 = local_360;
        }
      }
      if (iVar16 != local_360) {
        uVar43 = 0xffffffff;
        do {
          plVar11 = (longlong *)local_388[(longlong)iVar16 * 3];
          if ((plVar11 != (longlong *)0x0) &&
             (plVar32 = local_388 + (longlong)iVar16 * 3, plVar32[1] != 0)) {
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(plVar11);
            }
            local_428 = (longlong ***)plVar11;
            if ((DAT_14c950c29 & 1) != 0) {
              FUN_1456cec3c(plVar11);
            }
            plVar11 = (longlong *)local_428;
            if (((DAT_14c950c29 & 1) != 0) && (local_428 != (longlong ***)0x0)) {
              FUN_1456cec3c(local_428);
            }
            uVar17 = ((uint)((ulonglong)plVar11 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar11 >> 4))
                     * -0x7a143595;
            uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
            iVar16 = FUN_140cdd232(&local_3d8,uVar17 >> 0x10 ^ uVar17,&local_428);
            plVar11 = (longlong *)0x0;
            if (iVar16 != -1) {
              plVar11 = local_3d8 + (longlong)iVar16 * 3;
            }
            if (plVar11 != (longlong *)0x0) {
              lVar10 = *plVar32;
              if ((DAT_14c950c29 == 1) && (lVar10 != 0)) {
                FUN_1456cec3c(lVar10);
              }
              local_428 = (longlong ***)lVar10;
              if (((DAT_14c950c29 & 1) != 0) && (lVar10 != 0)) {
                FUN_1456cec3c(lVar10);
              }
              FUN_140334d8a(&local_3d8,&local_428);
              local_428 = (longlong ***)(plVar32 + 1);
              uStack_420 = (longlong ***)(plVar11 + 1);
              FUN_147f9ad56(&local_3d8,&local_468,&local_428,0);
              local_428 = (longlong ***)plVar32;
              uStack_420 = (longlong ***)(plVar32 + 1);
              FUN_147f99984(local_4f8,&local_468,&local_428);
            }
          }
          uVar43 = uVar43 & ~(uint)uVar33;
          puVar12 = local_368;
          if (local_368 == (uint *)0x0) {
            puVar12 = (uint *)&local_378;
          }
          iVar16 = (int)uVar29;
          lVar10 = (longlong)iVar16;
          uVar17 = puVar12[lVar10] & uVar43;
          if (uVar17 == 0) {
            iVar18 = local_360 + 0x1e;
            if (-1 < local_360 + -1) {
              iVar18 = local_360 + -1;
            }
            iVar18 = iVar18 >> 5;
            iVar31 = iVar31 + 0x20;
            iVar25 = iVar18;
            if (iVar18 < iVar16) {
              iVar25 = iVar16;
            }
            if (iVar16 < iVar18) {
              lVar36 = 0;
              do {
                uVar17 = puVar12[lVar10 + lVar36 + 1];
                if (uVar17 != 0) {
                  uVar29 = (ulonglong)(iVar16 + (int)lVar36 + 1);
                  uVar43 = 0xffffffff;
                  goto LAB_1438b9e08;
                }
                iVar31 = iVar31 + 0x20;
                lVar36 = lVar36 + 1;
              } while (iVar25 - lVar10 != lVar36);
              uVar43 = 0xffffffff;
              iVar16 = iVar25;
            }
            uVar29 = (ulonglong)(iVar16 + 1);
            iVar16 = local_360;
          }
          else {
LAB_1438b9e08:
            uVar33 = (ulonglong)(-uVar17 & uVar17);
            uVar27 = uVar33 * 2 + 1;
            lVar10 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            iVar16 = (iVar31 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
            if (local_360 <= iVar16) {
              iVar16 = local_360;
            }
          }
        } while (iVar16 != iVar39);
      }
LAB_1438b6fb1:
      local_340 = 0;
      if (puStack_348 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140f0c3ca(&local_388);
      lVar10 = local_560;
    }
    if (local_3a4 < (int)uStack_3d0) {
      FUN_14181beea(&local_3d8);
      plVar11 = local_3d8;
      uVar43 = (int)uStack_3d0 - local_3a4;
      lVar10 = local_560;
      if (1 < (int)uVar43) {
        memset(&local_378,0,0x2f0);
        local_388 = plVar11;
        plStack_380 = plVar11 + (ulonglong)uVar43 * 3 + -3;
        fVar49 = logf((float)(int)uVar43);
        local_378 = CONCAT44(local_378._4_4_,(int)(longlong)(fVar49 + fVar49));
        pplVar20 = &local_388;
        do {
          plVar32 = *pplVar20;
          plVar46 = pplVar20[1];
          iVar39 = *(int *)(pplVar20 + 2);
          iVar16 = (int)((ulonglong)((longlong)plVar46 - (longlong)plVar32) >> 3) * -0x55555555;
          uVar43 = iVar16 + 1;
          plVar22 = plVar32;
          plVar11 = plVar46;
          if (iVar39 != 0) {
LAB_1438b709d:
            if (8 < (int)uVar43) {
              uVar29 = (ulonglong)(uVar43 >> 1);
              lVar10 = plVar32[uVar29 * 3 + 2];
              lVar36 = plVar32[uVar29 * 3];
              lVar19 = (plVar32 + uVar29 * 3)[1];
              plVar32[uVar29 * 3 + 2] = plVar32[2];
              lVar38 = plVar32[1];
              plVar32[uVar29 * 3] = *plVar32;
              (plVar32 + uVar29 * 3)[1] = lVar38;
              plVar32[2] = lVar10;
              *plVar32 = lVar36;
              plVar32[1] = lVar19;
              plVar40 = plVar11 + 3;
              plVar26 = plVar32;
              do {
                plVar7 = plVar26 + 3;
                plVar37 = plVar26 + 3;
                do {
                  plVar26 = plVar37;
                  plVar44 = plVar7;
                  if (plVar11 < plVar26) break;
                  plVar7 = plVar44 + 3;
                  plVar37 = plVar26 + 3;
                } while ((int)plVar32[1] <= (int)plVar26[1]);
                plVar7 = plVar40 + -6;
                do {
                  plVar37 = plVar40;
                  plVar41 = plVar7;
                  plVar40 = plVar37 + -3;
                  if (plVar40 <= plVar32) break;
                  plVar7 = plVar41 + -3;
                } while ((int)plVar37[-2] <= (int)plVar32[1]);
                if (plVar40 < plVar26) goto LAB_1438b718f;
                lVar10 = plVar26[2];
                lVar36 = *plVar26;
                lVar19 = plVar26[1];
                plVar26[2] = plVar37[-1];
                lVar38 = plVar37[-2];
                *plVar26 = *plVar40;
                plVar26[1] = lVar38;
                plVar37[-1] = lVar10;
                *plVar40 = lVar36;
                plVar37[-2] = lVar19;
              } while( true );
            }
            for (; plVar22 = plVar32, plVar46 = plVar32, plVar32 < plVar11; plVar11 = plVar11 + -3)
            {
              while (plVar40 = plVar22, plVar46 = plVar46 + 3, plVar46 <= plVar11) {
                plVar22 = plVar46;
                if ((int)plVar40[1] <= (int)plVar46[1]) {
                  plVar22 = plVar40;
                }
              }
              local_418 = plVar40[2];
              local_428 = (longlong ***)*plVar40;
              uStack_420 = (longlong ***)plVar40[1];
              plVar46 = (longlong *)local_428;
              ppplVar6 = uStack_420;
              plVar40[2] = plVar11[2];
              lVar10 = plVar11[1];
              *plVar40 = *plVar11;
              plVar40[1] = lVar10;
              plVar11[2] = local_418;
              local_428._4_4_ = (undefined4)((ulonglong)local_428 >> 0x20);
              uStack_420._4_4_ = (undefined4)((ulonglong)uStack_420 >> 0x20);
              *(undefined4 *)plVar11 = (undefined4)local_428;
              *(undefined4 *)((longlong)plVar11 + 4) = local_428._4_4_;
              *(int *)(plVar11 + 1) = (int)uStack_420;
              *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_420._4_4_;
              local_428 = (longlong ***)plVar46;
              uStack_420 = ppplVar6;
            }
            goto LAB_1438b7525;
          }
LAB_1438b7260:
          if (uVar43 != 0) {
            iVar39 = (iVar16 - (iVar16 + -1 >> 0x1f)) + -1 >> 1;
            iVar16 = iVar39;
joined_r0x0001438b7287:
            do {
              iVar31 = iVar39 * 2 + 1;
              if (iVar31 < (int)uVar43) {
                iVar18 = iVar39 * 2 + 2;
                if ((iVar18 < (int)uVar43) &&
                   ((int)plVar32[(longlong)iVar18 * 3 + 1] <= (int)plVar32[(longlong)iVar31 * 3 + 1]
                   )) {
                  iVar31 = iVar18;
                }
                if ((int)plVar32[(longlong)iVar31 * 3 + 1] < (int)plVar32[(longlong)iVar39 * 3 + 1])
                {
                  plVar11 = plVar32 + (longlong)iVar39 * 3;
                  plVar46 = plVar32 + (longlong)iVar31 * 3;
                  local_418 = plVar11[2];
                  local_428 = (longlong ***)*plVar11;
                  uStack_420 = (longlong ***)plVar11[1];
                  plVar22 = (longlong *)local_428;
                  ppplVar6 = uStack_420;
                  plVar11[2] = plVar46[2];
                  lVar10 = plVar46[1];
                  *plVar11 = *plVar46;
                  plVar11[1] = lVar10;
                  plVar46[2] = local_418;
                  local_428._4_4_ = (undefined4)((ulonglong)local_428 >> 0x20);
                  uStack_420._4_4_ = (undefined4)((ulonglong)uStack_420 >> 0x20);
                  *(undefined4 *)plVar46 = (undefined4)local_428;
                  *(undefined4 *)((longlong)plVar46 + 4) = local_428._4_4_;
                  *(int *)(plVar46 + 1) = (int)uStack_420;
                  *(undefined4 *)((longlong)plVar46 + 0xc) = uStack_420._4_4_;
                  iVar39 = iVar31;
                  local_428 = (longlong ***)plVar22;
                  uStack_420 = ppplVar6;
                  goto joined_r0x0001438b7287;
                }
              }
              bVar47 = iVar16 != 0;
              iVar39 = iVar16 + -1;
              iVar16 = iVar39;
            } while (bVar47);
            if (1 < (int)uVar43) {
              uVar29 = (ulonglong)uVar43 - 1;
              local_418 = plVar32[2];
              local_428 = (longlong ***)*plVar32;
              uStack_420 = (longlong ***)plVar32[1];
              plVar46 = (longlong *)local_428;
              ppplVar6 = uStack_420;
              plVar32[2] = plVar32[uVar29 * 3 + 2];
              lVar10 = (plVar32 + uVar29 * 3)[1];
              *plVar32 = plVar32[uVar29 * 3];
              plVar32[1] = lVar10;
              plVar32[uVar29 * 3 + 2] = local_418;
              local_428._4_4_ = (undefined4)((ulonglong)local_428 >> 0x20);
              uStack_420._4_4_ = (undefined4)((ulonglong)uStack_420 >> 0x20);
              plVar11 = plVar32 + uVar29 * 3;
              *(undefined4 *)plVar11 = (undefined4)local_428;
              *(undefined4 *)((longlong)plVar11 + 4) = local_428._4_4_;
              *(int *)(plVar11 + 1) = (int)uStack_420;
              *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_420._4_4_;
              local_428 = (longlong ***)plVar46;
              uStack_420 = ppplVar6;
              if (uVar43 != 2) {
                do {
                  iVar39 = 0;
                  iVar31 = 1;
                  iVar16 = 0;
                  do {
                    iVar39 = iVar39 + 2;
                    iVar18 = iVar31;
                    if (((longlong)iVar39 < (longlong)uVar29) &&
                       ((int)plVar32[(longlong)iVar39 * 3 + 1] <=
                        (int)plVar32[(longlong)iVar31 * 3 + 1])) {
                      iVar18 = iVar39;
                    }
                    if ((int)plVar32[(longlong)iVar16 * 3 + 1] <=
                        (int)plVar32[(longlong)iVar18 * 3 + 1]) break;
                    plVar11 = plVar32 + (longlong)iVar16 * 3;
                    plVar46 = plVar32 + (longlong)iVar18 * 3;
                    lVar10 = plVar11[2];
                    lVar36 = *plVar11;
                    lVar19 = plVar11[1];
                    plVar11[2] = plVar46[2];
                    lVar38 = plVar46[1];
                    *plVar11 = *plVar46;
                    plVar11[1] = lVar38;
                    plVar46[2] = lVar10;
                    *plVar46 = lVar36;
                    plVar46[1] = lVar19;
                    iVar39 = iVar18 * 2;
                    iVar31 = iVar18 * 2 + 1;
                    iVar16 = iVar18;
                  } while ((longlong)iVar31 < (longlong)uVar29);
                  uVar33 = uVar29 - 1;
                  local_418 = plVar32[2];
                  local_428 = (longlong ***)*plVar32;
                  uStack_420 = (longlong ***)plVar32[1];
                  plVar46 = (longlong *)local_428;
                  ppplVar6 = uStack_420;
                  plVar32[2] = plVar32[uVar33 * 3 + 2];
                  lVar10 = (plVar32 + uVar33 * 3)[1];
                  *plVar32 = plVar32[uVar33 * 3];
                  plVar32[1] = lVar10;
                  plVar32[uVar33 * 3 + 2] = local_418;
                  local_428._4_4_ = (undefined4)((ulonglong)local_428 >> 0x20);
                  uStack_420._4_4_ = (undefined4)((ulonglong)uStack_420 >> 0x20);
                  plVar11 = plVar32 + uVar33 * 3;
                  *(undefined4 *)plVar11 = (undefined4)local_428;
                  *(undefined4 *)((longlong)plVar11 + 4) = local_428._4_4_;
                  *(int *)(plVar11 + 1) = (int)uStack_420;
                  *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_420._4_4_;
                  bVar47 = 2 < uVar29;
                  uVar29 = uVar33;
                  local_428 = (longlong ***)plVar46;
                  uStack_420 = ppplVar6;
                } while (bVar47);
              }
            }
          }
LAB_1438b7525:
          pplVar20 = pplVar20 + -3;
          lVar10 = local_560;
        } while (&local_388 <= pplVar20);
      }
    }
    FUN_140ffd204(&local_3d8);
    local_408 = 0;
    local_400 = 0;
    local_428 = (longlong ***)0x0;
    uStack_420 = (longlong ***)0x0;
    local_3fc = 0xffffffff00000080;
    local_3f4 = 0;
    local_3e8 = (undefined1 *)0x0;
    local_3e0 = 0;
    lVar36 = lVar10 + 2000;
    local_498 = (longlong *)0x0;
    uStack_490 = 0;
    *(undefined4 *)(lVar10 + 0x7d8) = 0;
    if (*(int *)(lVar10 + 0x7dc) < 0) {
      FUN_147f9aef4(lVar36);
    }
    plVar11 = (longlong *)(**(code **)(*local_540 + 0x18))();
    local_538 = 0;
    if (plVar11 == (longlong *)0x0) {
      local_530 = (longlong *)0x0;
    }
    else {
      local_530 = (longlong *)(**(code **)(*plVar11 + 800))(plVar11,plVar11 + 0xe);
    }
    local_4a8 = (longlong *)0x0;
    uStack_4a0 = 0;
    if (local_3b0 == 0) {
      local_518 = 1;
      local_554 = 0;
      uVar43 = 0;
    }
    else {
      puVar12 = local_3b8;
      if (local_3b8 == (uint *)0x0) {
        puVar12 = local_3c8;
      }
      uVar43 = *puVar12;
      if (uVar43 == 0) {
        iVar39 = local_3b0 + 0x1e;
        if (-1 < (int)(local_3b0 - 1)) {
          iVar39 = local_3b0 - 1;
        }
        uVar29 = 0;
        uVar33 = (ulonglong)(uint)(iVar39 >> 5);
        if (iVar39 >> 5 < 1) {
          uVar33 = uVar29;
        }
        local_554 = 0;
        do {
          if (uVar33 == uVar29) goto LAB_1438b76ac;
          local_554 = local_554 + 0x20;
          uVar43 = puVar12[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (uVar43 == 0);
      }
      else {
        local_538 = 0;
        local_554 = 0;
        uVar29 = local_538;
      }
      local_538 = uVar29;
      local_518 = (ulonglong)(-uVar43 & uVar43);
      uVar29 = local_518 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar43 = (local_554 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)local_3b0 <= (int)uVar43) {
        uVar43 = local_3b0;
      }
    }
    if (uVar43 != local_3b0) {
      local_508 = lVar10 + 0x4d8;
      local_528 = lVar10 + 0x4b0;
      local_544 = 0xffffffff;
      local_520 = lVar36;
      local_4e0 = (ulonglong)local_3b0;
      do {
        local_4b8 = 0;
        uStack_4b0 = 0;
        lVar10 = local_3d8[(longlong)(int)uVar43 * 3];
        local_368 = (uint *)0x0;
        local_360 = 0;
        local_388 = (longlong *)0x0;
        plStack_380 = (longlong *)0x0;
        uStack_35c = 0x80;
        uStack_358 = 0xffffffff;
        iStack_354 = 0;
        puStack_348 = (undefined8 *)0x0;
        local_340 = 0;
        local_438 = (longlong *)0x0;
        uStack_430 = 0;
        local_448 = (longlong *)0x0;
        uStack_440 = (longlong *)0x0;
        iVar39 = *(int *)(lVar10 + 0x38);
        if (iVar39 < 0) {
LAB_1438b9f9e:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar39);
        }
        if (iVar39 == 0) {
LAB_1438b7c77:
          local_4c8 = (longlong *)0x0;
          uStack_4c0 = 0;
        }
        else {
          FUN_14181c28a(&local_448);
          if ((longlong)*(int *)(lVar10 + 0x38) == 0) goto LAB_1438b7c77;
          pplVar20 = *(longlong ***)(lVar10 + 0x30);
          lVar19 = (longlong)*(int *)(lVar10 + 0x38) * 0x50;
          do {
            if (pplVar20[4] != (longlong *)0x0) {
              local_4c8 = (longlong *)((ulonglong)local_4c8 & 0xffffffffffff0000);
              local_460 = &local_388;
              local_450 = &local_4c8;
              local_468 = pplVar20;
              local_458 = lVar36;
              FUN_1438babe8(&local_468,&local_46a,pplVar20);
              FUN_1438babe8(&local_468,&local_46c,pplVar20[4] + 10);
              cVar5 = local_469;
              cVar48 = local_46b;
              bVar47 = ((local_46c | local_46a) & 1) != 0;
              pplVar45 = &local_448;
              if (bVar47) {
                pplVar45 = (longlong **)&local_438;
              }
              iVar39 = *(int *)(pplVar45 + 1);
              lVar38 = (longlong)iVar39;
              puVar4 = &uStack_440;
              if (bVar47) {
                puVar4 = &uStack_430;
              }
              *(uint *)(pplVar45 + 1) = iVar39 + 1U;
              if (*(uint *)((longlong)puVar4 + 4) < iVar39 + 1U) {
                FUN_1405b89f8(pplVar45,iVar39);
              }
              bVar15 = cVar48 * '\x02';
              plVar11 = *pplVar45;
              FUN_1405b824a(plVar11 + lVar38 * 10,pplVar20);
              if (cVar5 != '\0') {
                bVar15 = 2;
              }
              *(byte *)(plVar11 + lVar38 * 10 + 8) =
                   *(byte *)(plVar11 + lVar38 * 10 + 8) & 0xfd | bVar15;
            }
            pplVar20 = pplVar20 + 10;
            lVar19 = lVar19 + -0x50;
          } while (lVar19 != 0);
          iVar39 = *(int *)(lVar10 + 0x38);
          local_4c8 = (longlong *)0x0;
          uStack_4c0 = 0;
          if (iVar39 < 0) goto LAB_1438b9f9e;
          if (iVar39 != 0) {
            FUN_14181c28a(&local_4c8);
          }
        }
        local_468 = &local_4c8;
        local_460 = &local_388;
        FUN_1438ba1ba(&local_468,&local_438);
        FUN_1438ba1ba(&local_468,&local_448);
        uVar29 = uStack_4c0;
        lVar10 = (longlong)(int)(float)uStack_430;
        if (lVar10 != 0) {
          iVar39 = (int)uStack_4c0;
          lVar36 = (longlong)(int)uStack_4c0;
          uStack_4c0 = CONCAT44(uStack_4c0._4_4_,(int)uStack_4c0 + (int)(float)uStack_430);
          if ((uint)(uStack_4c0._4_4_ - iVar39) < (uint)(float)uStack_430) {
            FUN_1405b89f8(&local_4c8,uVar29 & 0xffffffff);
          }
          memmove(local_4c8 + lVar36 * 10,local_438,lVar10 * 0x50);
          uStack_430 = uStack_430 & 0xffffffff00000000;
        }
        uVar29 = uStack_4c0;
        lVar10 = (longlong)(int)(uint)uStack_440;
        if (lVar10 != 0) {
          iVar39 = (int)uStack_4c0;
          lVar36 = (longlong)(int)uStack_4c0;
          uStack_4c0 = CONCAT44(uStack_4c0._4_4_,(int)uStack_4c0 + (uint)uStack_440);
          if ((uint)(uStack_4c0._4_4_ - iVar39) < (uint)uStack_440) {
            FUN_1405b89f8(&local_4c8,uVar29 & 0xffffffff);
          }
          memmove(local_4c8 + lVar36 * 10,local_448,lVar10 * 0x50);
          uStack_440 = (longlong *)((ulonglong)uStack_440 & 0xffffffff00000000);
        }
        FUN_140dde623(local_448,0);
        if (local_448 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_140dde623(local_438,uStack_430 & 0xffffffff);
        if (local_438 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_340 = 0;
        if (puStack_348 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        FUN_14181c214(&local_388);
        if ((longlong)(int)uStack_4c0 != 0) {
          local_4d0 = local_4c8 + (longlong)(int)uStack_4c0 * 10;
          plVar11 = local_4c8;
          do {
            uVar33 = uStack_4a0;
            FUN_144a65a1e(local_4a8,uStack_4a0 & 0xffffffff);
            uVar29 = uStack_4a0 >> 0x20;
            uStack_4a0 = uStack_4a0 & 0xffffffff00000000;
            if (((longlong)uVar33 < 0) && ((int)uVar29 != 0)) {
              FUN_145811e2e(&local_4a8,0);
            }
            bVar47 = local_530 == (longlong *)0x0;
            lVar10 = FUN_1402218d6(plVar11);
            if (lVar10 == 0 || bVar47) {
LAB_1438b7ef3:
              lVar10 = local_560;
              if (local_530 != (longlong *)0x0) {
LAB_1438b7efb:
                plVar32 = (longlong *)FUN_14032f648();
                lVar36 = plVar32[0x22];
                if (lVar36 == 0) {
                  (**(code **)(*plVar32 + 1000))(plVar32);
                  lVar36 = plVar32[0x22];
                }
                lVar10 = local_560;
                if ((*(byte *)(lVar36 + 0xe0) & 2) != 0) {
                  (**(code **)(*local_530 + 0x2c0))(local_530,plVar11,&local_4a8);
                }
              }
              lVar36 = (longlong)(int)uStack_4a0;
              if (lVar36 == 0) {
                uStack_4a0 = CONCAT44(uStack_4a0._4_4_,1);
                if (uStack_4a0._4_4_ == 0) {
                  FUN_14011bb82(&local_4a8,0);
                }
                *local_4a8 = plVar11[5];
                local_4a8[1] = plVar11[6];
                lVar36 = plVar11[7];
                local_4a8[2] = lVar36;
                if (lVar36 != 0) {
                  LOCK();
                  *(int *)(lVar36 + 8) = *(int *)(lVar36 + 8) + 1;
                  UNLOCK();
                }
                lVar36 = (longlong)(int)uStack_4a0;
                if (lVar36 == 0) goto LAB_1438b9302;
              }
              local_4d8 = local_4a8 + lVar36 * 3;
              local_500 = plVar11 + 5;
              plVar32 = local_4a8;
              do {
                *local_500 = *plVar32;
                lVar36 = plVar32[1];
                lVar19 = plVar32[2];
                if (lVar19 != 0) {
                  LOCK();
                  *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
                  UNLOCK();
                }
                plVar46 = (longlong *)plVar11[7];
                plVar11[6] = lVar36;
                plVar11[7] = lVar19;
                if (plVar46 != (longlong *)0x0) {
                  LOCK();
                  plVar22 = plVar46 + 1;
                  *(int *)plVar22 = (int)*plVar22 + -1;
                  UNLOCK();
                  if ((int)*plVar22 == 0) {
                    (**(code **)*plVar46)(plVar46);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar46 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar46 + 0x10))(plVar46);
                    }
                  }
                }
                uVar29 = plVar11[4];
                local_4f8 = plVar32;
                if (*(char *)(uVar29 + 0x42) == '\x01') {
                  if ((uVar29 != 0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(uVar29);
                  }
                  uVar43 = ((uint)(uVar29 >> 0x14) & 0xffff ^ (uint)(uVar29 >> 4)) * -0x7a143595;
                  uVar43 = (uVar43 >> 0xd ^ uVar43) * -0x3d4d51cb;
                  uVar43 = uVar43 >> 0x10 ^ uVar43;
                  iVar39 = *(int *)(lVar10 + 0x4a8);
                  if (iVar39 != *(int *)(lVar10 + 0x4d4)) {
                    lVar36 = *(longlong *)(lVar10 + 0x4e0);
                    if (*(longlong *)(lVar10 + 0x4e0) == 0) {
                      lVar36 = local_508;
                    }
                    iVar39 = *(int *)(lVar36 + (ulonglong)(*(int *)(lVar10 + 0x4e8) - 1U & uVar43) *
                                               4);
                    bVar15 = DAT_14c950c29;
                    while (iVar39 != -1) {
                      lVar36 = plVar11[4];
                      if (((bVar15 & 1) != 0) && (lVar36 != 0)) {
                        FUN_1456cec3c(lVar36);
                        bVar15 = DAT_14c950c29;
                      }
                      lVar38 = (longlong)iVar39;
                      lVar19 = *(longlong *)(*local_550 + lVar38 * 0x28);
                      if (((bVar15 & 1) != 0) && (lVar19 != 0)) {
                        FUN_1456cec3c(lVar19);
                        bVar15 = DAT_14c950c29;
                      }
                      if (((bVar15 & 1) != 0) && (lVar36 != 0)) {
                        FUN_1456cec3c(lVar36);
                        bVar15 = DAT_14c950c29;
                      }
                      lVar42 = *local_550;
                      if (lVar19 == lVar36) {
                        if (lVar42 + lVar38 * 0x28 != 0) {
                          lVar42 = lVar42 + lVar38 * 0x28;
                          goto LAB_1438b8455;
                        }
                        break;
                      }
                      iVar39 = *(int *)(lVar42 + 0x20 + lVar38 * 0x28);
                    }
                    iVar39 = *(int *)(lVar10 + 0x4d4);
                  }
                  if (iVar39 == 0) {
                    iVar16 = *(int *)(lVar10 + 0x4a8);
                    *(int *)(lVar10 + 0x4a8) = iVar16 + 1;
                    if (*(int *)(lVar10 + 0x4ac) == iVar16) {
                      FUN_140549c28(local_550,iVar16);
                    }
                    iVar39 = *(int *)(lVar10 + 0x4c8);
                    if (iVar39 == 0) {
                      iVar31 = -1;
                    }
                    else {
                      iVar31 = iVar39 + 0x1e;
                      if (-1 < iVar39 + -1) {
                        iVar31 = iVar39 + -1;
                      }
                      iVar31 = iVar31 >> 5;
                    }
                    iVar25 = iVar39 + 1;
                    iVar18 = iVar39 + 0x1f;
                    if (-1 < iVar39) {
                      iVar18 = iVar39;
                    }
                    if (iVar18 >> 5 == iVar31) {
                      *(int *)(lVar10 + 0x4c8) = iVar25;
                    }
                    else {
                      if (*(int *)(lVar10 + 0x4cc) <= iVar39) {
                        iVar31 = iVar39;
                        if (iVar39 + 0x20U < 0xa0) {
                          iVar25 = 0x80;
                        }
                        else {
                          uVar17 = iVar39 + 0x20U >> 5;
                          if (*(int *)(lVar10 + 0x4cc) + 0x1fU < 0xa0) {
                            uVar24 = 4;
                            if (4 < uVar17) {
                              uVar24 = uVar17;
                            }
                          }
                          else {
                            uVar24 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
                          }
                          uVar29 = (ulonglong)(uVar24 * 4);
                          if (DAT_14c872d28 != (longlong *)0x0) {
                            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                              uVar8 = (uint)(uVar29 + 0xf);
                              if (uVar24 < 0x1ffd) {
                                uVar29 = (ulonglong)
                                         (ushort)(&DAT_14c841d90)
                                                 [0x32 - (byte)(&DAT_14c841e00)[uVar29 + 0xf >> 4]];
                              }
                              else {
                                uVar33 = (ulonglong)(uVar8 & 0xfffffff0);
                                if (uVar33 < 0x7ff1) {
                                  bVar15 = (&DAT_14c841e00)[uVar8 >> 4];
                                  uVar27 = 0x32;
                                  if (0x32 < bVar15) {
                                    uVar27 = (ulonglong)bVar15;
                                  }
                                  uVar35 = 0x32 - (ulonglong)bVar15;
                                  do {
                                    uVar29 = (ulonglong)
                                             (ushort)(&DAT_14c841d90)[uVar35 & 0xffffffff];
                                    lVar10 = local_560;
                                    if (((&DAT_14c841d90)[uVar35 & 0xffffffff] & 0xf) == 0)
                                    goto LAB_1438b8c0a;
                                    lVar36 = uVar27 + 1 + uVar35;
                                    uVar35 = uVar35 - 1;
                                  } while (lVar36 != 0x33);
                                }
                                uVar29 = (ulonglong)DAT_14c841df8;
                                if (DAT_14c841df8 < 0x11) {
                                  uVar29 = 0x10;
                                }
                                uVar29 = -uVar29 & (uVar33 + uVar29) - 1;
                              }
                            }
                            else {
                              uVar29 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar29,0);
                              iVar31 = *(int *)(lVar10 + 0x4c8);
                            }
                          }
LAB_1438b8c0a:
                          iVar9 = (int)(uVar29 >> 2);
                          iVar25 = iVar9 << 5;
                          if (iVar9 < (int)uVar17) {
                            iVar25 = -0x20;
                          }
                        }
                        *(int *)(lVar10 + 0x4cc) = iVar25;
                        FUN_1446efbd8(local_528,iVar31);
                        iVar25 = *(int *)(lVar10 + 0x4c8) + 1;
                      }
                      iVar31 = iVar25 + 0x1f;
                      if (-1 < iVar25) {
                        iVar31 = iVar25;
                      }
                      *(int *)(lVar10 + 0x4c8) = iVar25;
                      if (iVar25 % 0x20 != 0) {
                        lVar36 = *(longlong *)(lVar10 + 0x4c0);
                        if (*(longlong *)(lVar10 + 0x4c0) == 0) {
                          lVar36 = local_528;
                        }
                        bVar15 = -(char)(iVar25 % 0x20);
                        *(uint *)(lVar36 + (longlong)(iVar31 >> 5) * 4) =
                             (uint)(*(int *)(lVar36 + (longlong)(iVar31 >> 5) * 4) <<
                                   (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
                      }
                    }
                    lVar19 = (longlong)iVar16;
                    lVar36 = *(longlong *)(lVar10 + 0x4c0);
                    if (*(longlong *)(lVar10 + 0x4c0) == 0) {
                      lVar36 = local_528;
                    }
                    bVar15 = (byte)iVar39 & 0x1f;
                    puVar12 = (uint *)(lVar36 + (longlong)(iVar18 >> 5) * 4);
                    *puVar12 = *puVar12 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
                    lVar36 = lVar10;
                  }
                  else {
                    iVar16 = *(int *)(lVar10 + 0x4d0);
                    lVar19 = (longlong)iVar16;
                    iVar31 = *(int *)(*(longlong *)(lVar10 + 0x4a0) + 4 + lVar19 * 0x28);
                    *(int *)(lVar10 + 0x4d0) = iVar31;
                    *(int *)(lVar10 + 0x4d4) = iVar39 + -1;
                    lVar36 = local_560;
                    if (iVar39 + -1 != 0) {
                      *(undefined4 *)(*(longlong *)(lVar10 + 0x4a0) + (longlong)iVar31 * 0x28) =
                           0xffffffff;
                    }
                  }
                  lVar10 = *(longlong *)(lVar36 + 0x4c0);
                  if (*(longlong *)(lVar36 + 0x4c0) == 0) {
                    lVar10 = local_528;
                  }
                  iVar39 = iVar16 + 0x1f;
                  if (-1 < iVar16) {
                    iVar39 = iVar16;
                  }
                  puVar12 = (uint *)(lVar10 + (longlong)(iVar39 >> 5) * 4);
                  *puVar12 = *puVar12 | 1 << ((byte)iVar16 & 0x1f);
                  lVar10 = *(longlong *)(lVar36 + 0x4a0);
                  lVar36 = plVar11[4];
                  *(longlong *)(lVar10 + lVar19 * 0x28) = lVar36;
                  if ((DAT_14c950c29 == 1) && (lVar36 != 0)) {
                    FUN_1456cec3c();
                  }
                  plVar32 = (longlong *)(lVar10 + lVar19 * 0x28);
                  plVar32[1] = 0;
                  plVar32[2] = 0;
                  *(undefined1 *)(plVar32 + 3) = 0;
                  FUN_144a65a1e(0,0);
                  lVar10 = local_560;
                  *(undefined4 *)(plVar32 + 4) = 0xffffffff;
                  iVar39 = *(int *)(local_560 + 0x4a8);
                  iVar31 = *(int *)(local_560 + 0x4d4);
                  iVar18 = iVar39;
                  if (iVar39 - iVar31 != 1) {
                    lVar36 = *plVar32;
                    if ((DAT_14c950c29 == 1) && (lVar36 != 0)) {
                      FUN_1456cec3c(lVar36);
                      iVar39 = *(int *)(lVar10 + 0x4a8);
                      iVar31 = *(int *)(lVar10 + 0x4d4);
                    }
                    iVar18 = iVar31;
                    if (iVar39 != iVar31) {
                      lVar19 = *(longlong *)(lVar10 + 0x4e0);
                      if (*(longlong *)(lVar10 + 0x4e0) == 0) {
                        lVar19 = local_508;
                      }
                      iVar25 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar10 + 0x4e8) - 1U & uVar43)
                                                 * 4);
                      iVar18 = iVar39;
                      bVar15 = DAT_14c950c29;
                      if (iVar25 != -1) {
                        do {
                          if (((bVar15 & 1) != 0) && (lVar36 != 0)) {
                            FUN_1456cec3c(lVar36);
                            bVar15 = DAT_14c950c29;
                          }
                          lVar19 = (longlong)iVar25;
                          lVar10 = *(longlong *)(*local_550 + lVar19 * 0x28);
                          if (((bVar15 & 1) != 0) && (lVar10 != 0)) {
                            FUN_1456cec3c(lVar10);
                            bVar15 = DAT_14c950c29;
                          }
                          if (((bVar15 & 1) != 0) && (lVar36 != 0)) {
                            FUN_1456cec3c(lVar36);
                            bVar15 = DAT_14c950c29;
                          }
                          lVar38 = *local_550;
                          if (lVar10 == lVar36) {
                            FUN_144a65a1e(*(undefined8 *)(lVar38 + 8 + lVar19 * 0x28),
                                          *(undefined4 *)(lVar38 + 0x10 + lVar19 * 0x28));
                            if (*(longlong *)(lVar38 + 8 + lVar19 * 0x28) != 0) {
                              FUN_1400020a8();
                            }
                            puVar2 = (undefined4 *)(lVar38 + lVar19 * 0x28);
                            lVar36 = *plVar32;
                            uVar34 = *(undefined4 *)((longlong)plVar32 + 4);
                            lVar19 = plVar32[1];
                            uVar28 = *(undefined4 *)((longlong)plVar32 + 0xc);
                            lVar10 = plVar32[3];
                            *(longlong *)(puVar2 + 4) = plVar32[2];
                            *(longlong *)(puVar2 + 6) = lVar10;
                            *puVar2 = (int)lVar36;
                            puVar2[1] = uVar34;
                            puVar2[2] = (int)lVar19;
                            puVar2[3] = uVar28;
                            FUN_147f9af24(local_550,iVar16);
                            lVar10 = local_560;
                            goto LAB_1438b843e;
                          }
                          iVar25 = *(int *)(lVar38 + 0x20 + lVar19 * 0x28);
                        } while (iVar25 != -1);
                        iVar31 = *(int *)(local_560 + 0x4d4);
                        lVar10 = local_560;
                        iVar18 = *(int *)(local_560 + 0x4a8);
                      }
                    }
                  }
                  uVar17 = iVar18 - iVar31;
                  iVar39 = 1;
                  if (3 < uVar17) {
                    uVar29 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
                    lVar36 = 0x3f;
                    if (uVar29 != 0) {
                      for (; uVar29 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                      }
                    }
                    iVar39 = 1 << ((byte)lVar36 & 0x1f);
                  }
                  if (((int)uVar17 < 1) || (iVar39 <= *(int *)(lVar10 + 0x4e8))) {
                    uVar43 = *(int *)(lVar10 + 0x4e8) - 1U & uVar43;
                    *(uint *)((longlong)plVar32 + 0x24) = uVar43;
                    lVar36 = *(longlong *)(lVar10 + 0x4e0);
                    if (*(longlong *)(lVar10 + 0x4e0) == 0) {
                      lVar36 = local_508;
                    }
                    *(undefined4 *)(plVar32 + 4) =
                         *(undefined4 *)
                          (lVar36 + ((longlong)*(int *)(lVar10 + 0x4e8) - 1U & (longlong)(int)uVar43
                                    ) * 4);
                    lVar36 = *(longlong *)(lVar10 + 0x4e0);
                    if (*(longlong *)(lVar10 + 0x4e0) == 0) {
                      lVar36 = local_508;
                    }
                    *(int *)(lVar36 + ((longlong)*(int *)(lVar10 + 0x4e8) - 1U &
                                      (longlong)(int)uVar43) * 4) = iVar16;
                  }
                  else {
                    *(int *)(lVar10 + 0x4e8) = iVar39;
                    FUN_14644c854(local_550);
                  }
LAB_1438b843e:
                  lVar42 = *local_550 + (longlong)iVar16 * 0x28;
LAB_1438b8455:
                  FUN_14011b67e(lVar42 + 8,local_500);
                  *(byte *)(lVar42 + 0x18) = *(byte *)(lVar42 + 0x18) | *(byte *)(plVar11[4] + 0x44)
                  ;
                  uVar29 = plVar11[4];
                }
                if (uVar29 != 0) {
                  if ((int)uStack_420 != local_3f4) {
                    lVar36 = *local_500;
                    uVar43 = (uint)((ulonglong)lVar36 >> 0x10);
                    uVar17 = (uint)lVar36 & 0xffff;
                    puVar21 = local_3e8;
                    if (local_3e8 == (undefined1 *)0x0) {
                      puVar21 = local_3f0;
                    }
                    for (iVar39 = *(int *)(puVar21 +
                                          (ulonglong)
                                          (local_3e0 - 1U &
                                          (int)((ulonglong)lVar36 >> 0x20) +
                                          ((uint)lVar36 << 0x10 | uVar17) +
                                          (uVar43 << 0x13 | uVar43 & 0xffff) + (uVar17 >> 4)) * 4);
                        iVar39 != -1; iVar39 = (int)local_428[(longlong)iVar39 * 4 + 3]) {
                      if (local_428[(longlong)iVar39 * 4] == (longlong **)lVar36)
                      goto LAB_1438b8884;
                    }
                  }
                  iVar39 = *(int *)(uVar29 + 0x58);
                  if ((longlong)iVar39 != 0) {
                    lVar10 = *(longlong *)(uVar29 + 0x50);
                    lVar36 = 0;
                    do {
                      lVar19 = *(longlong *)(lVar10 + lVar36);
                      if (lVar19 != 0) {
                        lVar38 = FUN_14148345e();
                        lVar19 = *(longlong *)(lVar19 + 0x10);
                        if ((*(int *)(lVar38 + 0x38) <= *(int *)(lVar19 + 0x38)) &&
                           (*(longlong *)
                             (*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(lVar38 + 0x38) * 8)
                            == lVar38 + 0x30)) {
                          uVar30 = (undefined7)((ulonglong)lVar10 >> 8);
                          uVar34 = 0;
                          goto LAB_1438b8620;
                        }
                      }
                      lVar36 = lVar36 + 8;
                    } while ((longlong)iVar39 * 8 != lVar36);
                  }
                  lVar36 = 0;
                  if ((longlong)(int)plVar11[1] != 0) {
                    lVar10 = *plVar11;
                    lVar36 = (longlong)(int)plVar11[1] * 8;
                    lVar19 = 0;
LAB_1438b8574:
                    lVar38 = *(longlong *)(lVar10 + lVar19);
                    if (lVar38 == 0) goto LAB_1438b859d;
                    lVar42 = FUN_14148345e();
                    lVar38 = *(longlong *)(lVar38 + 0x10);
                    if ((*(int *)(lVar38 + 0x38) < *(int *)(lVar42 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(lVar38 + 0x30) + (longlong)*(int *)(lVar42 + 0x38) * 8) !=
                        lVar42 + 0x30)) goto LAB_1438b859d;
                    uVar34 = (undefined4)CONCAT71((int7)((ulonglong)lVar36 >> 8),1);
                    uVar30 = (undefined7)((ulonglong)lVar10 >> 8);
LAB_1438b8620:
                    uVar28 = (undefined4)CONCAT71(uVar30,1);
                    lVar10 = local_560;
                    goto LAB_1438b8625;
                  }
LAB_1438b85a6:
                  uVar29 = uStack_4b0;
                  lVar10 = local_560;
                  uVar34 = (undefined4)CONCAT71((int7)((ulonglong)lVar36 >> 8),1);
                  if (*(char *)(plVar11[4] + 0x41) == '\x01') {
                    lVar36 = (longlong)(int)uStack_4b0;
                    uVar43 = (int)uStack_4b0 + 1;
                    uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar43);
                    if (uStack_4b0._4_4_ < uVar43) {
                      FUN_14011bb82(&local_4b8,uVar29 & 0xffffffff);
                    }
                    *(longlong *)(local_4b8 + lVar36 * 0x18) = plVar11[5];
                    *(longlong *)(local_4b8 + 8 + lVar36 * 0x18) = plVar11[6];
                    lVar19 = plVar11[7];
                    *(longlong *)(local_4b8 + 0x10 + lVar36 * 0x18) = lVar19;
                    if (lVar19 != 0) {
                      LOCK();
                      *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
                      UNLOCK();
                    }
                  }
                  uVar28 = 0;
LAB_1438b8625:
                  iVar16 = FUN_1405b8118(lVar10,plVar11);
                  iVar39 = (int)plVar11[3];
                  if (iVar39 < 0) goto LAB_1438b9f9e;
                  plVar32 = (longlong *)(*(longlong *)(lVar10 + 0x540) + (longlong)iVar16 * 0x50);
                  lVar36 = *(longlong *)(lVar10 + 0x540) + (longlong)iVar16 * 0x50;
                  plVar46 = (longlong *)(lVar36 + 0x10);
                  *(undefined4 *)(plVar32 + 3) = 0;
                  local_4e8 = uVar34;
                  if (*(int *)((longlong)plVar32 + 0x1c) != iVar39) {
                    FUN_1438bb54e(plVar46);
                  }
                  lVar19 = plVar11[3];
                  local_4e4 = uVar28;
                  if ((longlong)(int)lVar19 != 0) {
                    lVar38 = plVar11[2];
                    lVar42 = 0;
                    local_4ec = iVar16;
                    do {
                      lVar13 = *(longlong *)(lVar38 + lVar42);
                      if (lVar13 != 0) {
                        local_510 = lVar38;
                        uVar14 = FUN_1402a60e2();
                        uVar14 = FUN_14092e86f(uVar14);
                        local_568 = 0xfff00007;
                        local_570 = 0;
                        local_578 = 0;
                        uVar14 = FUN_14092e7b3(lVar13,uVar14,0);
                        iVar39 = (int)plVar32[3];
                        *(uint *)(plVar32 + 3) = iVar39 + 1U;
                        if (*(uint *)((longlong)plVar32 + 0x1c) < iVar39 + 1U) {
                          FUN_147f9af96(plVar46,iVar39);
                        }
                        *(undefined8 *)(*plVar46 + (longlong)iVar39 * 8) = uVar14;
                        lVar38 = local_510;
                      }
                      lVar42 = lVar42 + 8;
                      iVar16 = local_4ec;
                    } while ((longlong)(int)lVar19 * 8 != lVar42);
                  }
                  if ((DAT_14c950c29 == 1) && (iVar39 = (int)plVar32[3], 0 < iVar39)) {
                    lVar19 = plVar32[2];
                    lVar38 = 0;
                    do {
                      if (*(longlong *)(lVar19 + lVar38 * 8) != 0) {
                        FUN_1456cec3c();
                        iVar39 = (int)plVar32[3];
                      }
                      lVar38 = lVar38 + 1;
                    } while (lVar38 < iVar39);
                  }
                  if ((DAT_14cb27040 == 1) ||
                     ((DAT_14cb27040 != 2 && (cVar48 = FUN_14171cc3c(plVar32 + 5), cVar48 != '\0')))
                     ) {
                    local_438 = (longlong *)0x3f8000003e4ccccd;
                    uStack_430 = CONCAT35(uStack_430._5_3_,0x3f800000);
                    local_468 = (longlong **)plVar32[5];
                    local_460 = (longlong **)plVar32[6];
                    local_458 = plVar32[7];
                    if (local_458 != 0) {
                      LOCK();
                      *(int *)(local_458 + 8) = *(int *)(local_458 + 8) + 1;
                      UNLOCK();
                    }
                    cVar48 = FUN_1405af7e2(lVar10,&local_468);
                    if (cVar48 != '\0') {
                      local_448 = (longlong *)0x0;
                      uStack_440 = (longlong *)0x0;
                      if (0.0 < (float)local_438) {
                        lVar19 = FUN_140af3742();
                        lVar10 = local_560;
                        if ((longlong)(int)plVar32[3] != 0) {
                          plVar22 = (longlong *)plVar32[2];
                          lVar38 = (longlong)(int)plVar32[3] << 3;
                          do {
                            if (*plVar22 != 0) {
                              lVar42 = *(longlong *)(*plVar22 + 0x10);
                              if ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar42 + 0x38)) &&
                                 (*(longlong *)
                                   (*(longlong *)(lVar42 + 0x30) +
                                   (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
                                if (plVar22 != (longlong *)0x0) goto LAB_1438b8966;
                                break;
                              }
                            }
                            plVar22 = plVar22 + 1;
                            lVar38 = lVar38 + -8;
                          } while (lVar38 != 0);
                        }
                        lVar38 = (longlong)*(int *)(plVar32[4] + 0x68);
                        if (lVar38 != 0) {
                          plVar22 = *(longlong **)(plVar32[4] + 0x60);
                          lVar38 = lVar38 << 3;
                          do {
                            if (*plVar22 != 0) {
                              lVar42 = *(longlong *)(*plVar22 + 0x10);
                              if ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar42 + 0x38)) &&
                                 (*(longlong *)
                                   (*(longlong *)(lVar42 + 0x30) +
                                   (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
                                if (plVar22 != (longlong *)0x0) goto LAB_1438b8966;
                                break;
                              }
                            }
                            plVar22 = plVar22 + 1;
                            lVar38 = lVar38 + -8;
                          } while (lVar38 != 0);
                        }
                        lVar19 = FUN_147f93622(DAT_14c951640);
                        *(float *)(lVar19 + 0x28) = (float)local_438;
                        *(undefined1 *)(lVar19 + 0x30) = 0;
                        if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                          FUN_1456cec3c(lVar19);
                        }
                        uVar29 = (ulonglong)uStack_440;
                        lVar38 = (longlong)(int)(uint)uStack_440;
                        uVar43 = (uint)uStack_440 + 1;
                        uStack_440 = (longlong *)CONCAT44(uStack_440._4_4_,uVar43);
                        if (uStack_440._4_4_ < uVar43) {
                          FUN_1402a61c0(&local_448,uVar29 & 0xffffffff);
                        }
                        lVar10 = local_560;
                        local_448[lVar38] = lVar19;
                        if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                          FUN_1456cec3c(lVar19);
                        }
                      }
LAB_1438b8966:
                      if (((float)uStack_430 != 1.0) || (NAN((float)uStack_430))) {
                        lVar19 = FUN_145b65f46();
                        lVar10 = local_560;
                        if ((longlong)(int)plVar32[3] != 0) {
                          plVar22 = (longlong *)plVar32[2];
                          lVar38 = (longlong)(int)plVar32[3] << 3;
                          do {
                            if (*plVar22 != 0) {
                              lVar42 = *(longlong *)(*plVar22 + 0x10);
                              if ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar42 + 0x38)) &&
                                 (*(longlong *)
                                   (*(longlong *)(lVar42 + 0x30) +
                                   (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
                                if (plVar22 != (longlong *)0x0) goto LAB_1438b897f;
                                break;
                              }
                            }
                            plVar22 = plVar22 + 1;
                            lVar38 = lVar38 + -8;
                          } while (lVar38 != 0);
                        }
                        lVar38 = (longlong)*(int *)(plVar32[4] + 0x68);
                        if (lVar38 != 0) {
                          plVar22 = *(longlong **)(plVar32[4] + 0x60);
                          lVar38 = lVar38 << 3;
                          do {
                            if (*plVar22 != 0) {
                              lVar42 = *(longlong *)(*plVar22 + 0x10);
                              if ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar42 + 0x38)) &&
                                 (*(longlong *)
                                   (*(longlong *)(lVar42 + 0x30) +
                                   (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
                                if (plVar22 != (longlong *)0x0) goto LAB_1438b897f;
                                break;
                              }
                            }
                            plVar22 = plVar22 + 1;
                            lVar38 = lVar38 + -8;
                          } while (lVar38 != 0);
                        }
                        lVar19 = FUN_147f936d2(DAT_14c951640);
                        dVar3 = (double)(float)uStack_430;
                        dVar50 = DAT_14c846520 * dVar3;
                        dVar51 = DAT_14c846518 * dVar3;
                        *(double *)(lVar19 + 0x28) = dVar3 * DAT_14c846510;
                        *(double *)(lVar19 + 0x30) = dVar51;
                        *(double *)(lVar19 + 0x38) = dVar50;
                        if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                          FUN_1456cec3c(lVar19);
                        }
                        uVar29 = (ulonglong)uStack_440;
                        lVar38 = (longlong)(int)(uint)uStack_440;
                        uVar43 = (uint)uStack_440 + 1;
                        uStack_440 = (longlong *)CONCAT44(uStack_440._4_4_,uVar43);
                        if (uStack_440._4_4_ < uVar43) {
                          FUN_1402a61c0(&local_448,uVar29 & 0xffffffff);
                        }
                        lVar10 = local_560;
                        local_448[lVar38] = lVar19;
                        if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                          FUN_1456cec3c(lVar19);
                        }
                      }
LAB_1438b897f:
                      plVar22 = DAT_14c951640;
                      if ((local_438._4_4_ != 1.0) || (NAN(local_438._4_4_))) {
                        FUN_14058b40c(DAT_14c951640,
                                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                     );
                        local_388 = (longlong *)FUN_1414cc3cc();
                        local_338 = (longlong *)0x0;
                        local_308 = 0;
                        local_378 = 0;
                        uStack_370 = 0;
                        local_368 = (uint *)((ulonglong)local_368 & 0xffffffffffff0000);
                        local_350 = 0;
                        puStack_348 = (undefined8 *)0x0;
                        local_360 = 0;
                        uStack_35c = 0;
                        uStack_358 = 0;
                        iStack_354 = 0;
                        plStack_380 = plVar22;
                        lVar19 = FUN_1402710dd(&local_388);
                        if (puStack_348 != (undefined8 *)0x0) {
                          plVar22 = local_338;
                          if (local_338 == (longlong *)0x0) {
                            plVar22 = local_328;
                          }
                          (**(code **)(*plVar22 + 0x10))();
                        }
                        dVar3 = (double)local_438._4_4_;
                        dVar50 = DAT_14c846520 * dVar3;
                        dVar51 = DAT_14c846518 * dVar3;
                        *(double *)(lVar19 + 0x28) = dVar3 * DAT_14c846510;
                        *(double *)(lVar19 + 0x30) = dVar51;
                        *(double *)(lVar19 + 0x38) = dVar50;
                        if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                          FUN_1456cec3c(lVar19);
                        }
                        uVar29 = (ulonglong)uStack_440;
                        lVar38 = (longlong)(int)(uint)uStack_440;
                        uVar43 = (uint)uStack_440 + 1;
                        uStack_440 = (longlong *)CONCAT44(uStack_440._4_4_,uVar43);
                        if (uStack_440._4_4_ < uVar43) {
                          FUN_1402a61c0(&local_448,uVar29 & 0xffffffff);
                        }
                        local_448[lVar38] = lVar19;
                        if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                          FUN_1456cec3c(lVar19);
                        }
                      }
                      if ((uStack_430 & 0x100000000) != 0) {
                        lVar19 = FUN_145b65d72();
                        lVar10 = local_560;
                        if ((longlong)(int)plVar32[3] != 0) {
                          plVar22 = (longlong *)plVar32[2];
                          lVar38 = (longlong)(int)plVar32[3] << 3;
                          do {
                            if (*plVar22 != 0) {
                              lVar42 = *(longlong *)(*plVar22 + 0x10);
                              if ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar42 + 0x38)) &&
                                 (*(longlong *)
                                   (*(longlong *)(lVar42 + 0x30) +
                                   (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
                                if (plVar22 != (longlong *)0x0) goto LAB_1438b8ab1;
                                break;
                              }
                            }
                            plVar22 = plVar22 + 1;
                            lVar38 = lVar38 + -8;
                          } while (lVar38 != 0);
                        }
                        lVar38 = (longlong)*(int *)(plVar32[4] + 0x68);
                        if (lVar38 != 0) {
                          plVar22 = *(longlong **)(plVar32[4] + 0x60);
                          lVar38 = lVar38 << 3;
                          do {
                            if (*plVar22 != 0) {
                              lVar42 = *(longlong *)(*plVar22 + 0x10);
                              if ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar42 + 0x38)) &&
                                 (*(longlong *)
                                   (*(longlong *)(lVar42 + 0x30) +
                                   (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
                                if (plVar22 != (longlong *)0x0) goto LAB_1438b8ab1;
                                break;
                              }
                            }
                            plVar22 = plVar22 + 1;
                            lVar38 = lVar38 + -8;
                          } while (lVar38 != 0);
                        }
                        lVar19 = FUN_147f93782(DAT_14c951640);
                        if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                          FUN_1456cec3c(lVar19);
                        }
                        uVar29 = (ulonglong)uStack_440;
                        lVar38 = (longlong)(int)(uint)uStack_440;
                        uVar43 = (uint)uStack_440 + 1;
                        uStack_440 = (longlong *)CONCAT44(uStack_440._4_4_,uVar43);
                        if (uStack_440._4_4_ < uVar43) {
                          FUN_1402a61c0(&local_448,uVar29 & 0xffffffff);
                        }
                        lVar10 = local_560;
                        local_448[lVar38] = lVar19;
                        if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                          FUN_1456cec3c(lVar19);
                        }
                      }
LAB_1438b8ab1:
                      local_388 = (longlong *)*plVar46;
                      plStack_380 = *(longlong **)(lVar36 + 0x18);
                      *plVar46 = (longlong)local_448;
                      *(longlong **)(lVar36 + 0x18) = uStack_440;
                      local_448 = local_388;
                      uStack_440 = plStack_380;
                      FUN_14181bcd8(plVar46,&local_448);
                      if (local_448 != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                  }
                  iVar39 = (int)plVar11[1];
                  if (iVar39 < 0) goto LAB_1438b9f9e;
                  *(undefined4 *)(plVar32 + 1) = 0;
                  if (*(int *)((longlong)plVar32 + 0xc) != iVar39) {
                    FUN_1438bb696(plVar32);
                  }
                  lVar36 = plVar11[1];
                  if ((longlong)(int)lVar36 != 0) {
                    lVar19 = *plVar11;
                    lVar38 = 0;
                    do {
                      lVar42 = *(longlong *)(lVar19 + lVar38);
                      if (lVar42 != 0) {
                        local_510 = lVar19;
                        uVar14 = FUN_1402a5ec8();
                        uVar14 = FUN_14092e86f(uVar14);
                        local_568 = 0xfff00007;
                        local_570 = 0;
                        local_578 = 0;
                        uVar14 = FUN_14092e7b3(lVar42,uVar14,0);
                        iVar39 = (int)plVar32[1];
                        *(uint *)(plVar32 + 1) = iVar39 + 1U;
                        if (*(uint *)((longlong)plVar32 + 0xc) < iVar39 + 1U) {
                          FUN_147f9b01c(plVar32,iVar39);
                        }
                        *(undefined8 *)(*plVar32 + (longlong)iVar39 * 8) = uVar14;
                        lVar19 = local_510;
                      }
                      lVar38 = lVar38 + 8;
                    } while ((longlong)(int)lVar36 * 8 != lVar38);
                  }
                  if ((DAT_14c950c29 == 1) && (iVar39 = (int)plVar32[1], 0 < iVar39)) {
                    lVar36 = *plVar32;
                    lVar19 = 0;
                    do {
                      if (*(longlong *)(lVar36 + lVar19 * 8) != 0) {
                        FUN_1456cec3c();
                        iVar39 = (int)plVar32[1];
                      }
                      lVar19 = lVar19 + 1;
                    } while (lVar19 < iVar39);
                  }
                  uVar29 = uStack_490;
                  if ((char)local_4e4 != '\0') {
                    lVar36 = (longlong)(int)uStack_490;
                    uVar43 = (int)uStack_490 + 1;
                    uStack_490 = CONCAT44(uStack_490._4_4_,uVar43);
                    if (uStack_490._4_4_ < uVar43) {
                      FUN_1446f48e2(&local_498,uVar29 & 0xffffffff);
                    }
                    *(int *)((longlong)local_498 + lVar36 * 4) = iVar16;
                    if ((char)local_4e8 == '\0') {
                      lVar36 = (longlong)*(int *)(plVar11[4] + 0x58);
                      if (lVar36 != 0) {
                        lVar19 = *(longlong *)(plVar11[4] + 0x50);
                        lVar38 = 0;
                        do {
                          lVar42 = *(longlong *)(lVar19 + lVar38);
                          if (lVar42 != 0) {
                            lVar13 = FUN_14148345e();
                            if ((*(int *)(lVar13 + 0x38) <=
                                 *(int *)(*(longlong *)(lVar42 + 0x10) + 0x38)) &&
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar42 + 0x10) + 0x30) +
                                 (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
                              uVar14 = FUN_1402a5ec8();
                              uVar14 = FUN_14092e86f(uVar14);
                              local_568 = 0xfff00007;
                              local_570 = 0;
                              local_578 = 0;
                              lVar42 = FUN_14092e7b3(lVar42,uVar14,0);
                              if ((lVar42 != 0) && (DAT_14c950c29 != 0)) {
                                FUN_1456cec3c(lVar42);
                              }
                              iVar39 = (int)plVar32[1];
                              *(uint *)(plVar32 + 1) = iVar39 + 1U;
                              if (*(uint *)((longlong)plVar32 + 0xc) < iVar39 + 1U) {
                                FUN_14181c0b2(plVar32,iVar39);
                              }
                              *(longlong *)(*plVar32 + (longlong)iVar39 * 8) = lVar42;
                              if ((lVar42 != 0) && (DAT_14c950c29 != 0)) {
                                FUN_1456cec3c(lVar42);
                              }
                            }
                          }
                          lVar38 = lVar38 + 8;
                        } while (lVar36 * 8 != lVar38);
                      }
                    }
                  }
                }
LAB_1438b8884:
                plVar32 = local_4f8 + 3;
              } while (plVar32 != local_4d8);
            }
            else {
              if ((longlong)*(int *)(lVar10 + 0x60) == 0) goto LAB_1438b7efb;
              lVar36 = local_530[5];
              if (lVar36 != 0) {
                lVar19 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar10 + 0x58) + lVar19) == lVar36)
                  goto LAB_1438b7ef3;
                  lVar19 = lVar19 + 8;
                } while ((longlong)*(int *)(lVar10 + 0x60) * 8 != lVar19);
                if ((longlong)*(int *)(lVar10 + 0x70) != 0) {
                  lVar19 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar10 + 0x68) + lVar19) == lVar36)
                    goto LAB_1438b7ef3;
                    lVar19 = lVar19 + 8;
                  } while ((longlong)*(int *)(lVar10 + 0x70) * 8 != lVar19);
                }
              }
            }
LAB_1438b9302:
            plVar11 = plVar11 + 10;
          } while (plVar11 != local_4d0);
        }
        uVar43 = ((int)uStack_420 - local_3f4) + (int)uStack_4b0;
        if ((uint)((int)uStack_420 - local_3f4) < uVar43) {
          if ((int)uVar43 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar43);
          }
          FUN_14113c3d0(&local_428,uVar43);
          if (uVar43 < 4) {
            iVar39 = 1;
          }
          else {
            uVar43 = (uVar43 | 1) + 0xe;
            iVar39 = 0x1f;
            if (uVar43 != 0) {
              for (; uVar43 >> iVar39 == 0; iVar39 = iVar39 + -1) {
              }
            }
            iVar39 = 1 << ((byte)iVar39 & 0x1f);
          }
          if ((local_3e0 == 0) || (local_3e0 < iVar39)) {
            local_3e0 = iVar39;
            FUN_14113c126(&local_428);
          }
        }
        if ((int)uStack_4b0 == 0) {
          uVar29 = 0;
        }
        else {
          lVar10 = (longlong)(int)uStack_4b0 * 0x18;
          lVar36 = local_4b8;
          do {
            FUN_14086bd9e(&local_428,&local_388,lVar36,0);
            lVar36 = lVar36 + 0x18;
            lVar10 = lVar10 + -0x18;
          } while (lVar10 != 0);
          uVar29 = uStack_4b0 & 0xffffffff;
        }
        uVar33 = uStack_4b0;
        lVar36 = local_520;
        FUN_144a65a1e(local_4b8,uVar29);
        uVar29 = uStack_4b0 >> 0x20;
        uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
        if (((longlong)uVar33 < 0) && ((int)uVar29 != 0)) {
          FUN_145811e2e(&local_4b8,0);
        }
        FUN_140dde623(local_4c8,uStack_4c0 & 0xffffffff);
        uVar17 = (uint)local_4e0;
        if (local_4c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_144a65a1e(local_4b8,uStack_4b0 & 0xffffffff);
        if (local_4b8 != 0) {
          FUN_1400020a8();
        }
        local_544 = local_544 & ~(uint)local_518;
        puVar12 = local_3b8;
        if (local_3b8 == (uint *)0x0) {
          puVar12 = local_3c8;
        }
        iVar39 = (int)local_538;
        lVar10 = (longlong)iVar39;
        uVar43 = puVar12[lVar10] & local_544;
        if (uVar43 == 0) {
          iVar16 = local_3b0 + 0x1e;
          if (-1 < (int)(local_3b0 - 1)) {
            iVar16 = local_3b0 - 1;
          }
          iVar16 = iVar16 >> 5;
          local_554 = local_554 + 0x20;
          iVar31 = iVar16;
          if (iVar16 < iVar39) {
            iVar31 = iVar39;
          }
          if (iVar39 < iVar16) {
            lVar19 = 0;
            do {
              uVar43 = puVar12[lVar10 + lVar19 + 1];
              if (uVar43 != 0) {
                local_538 = (ulonglong)(iVar39 + (int)lVar19 + 1);
                local_544 = 0xffffffff;
                goto LAB_1438b9511;
              }
              local_554 = local_554 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar31 - lVar10 != lVar19);
            local_544 = 0xffffffff;
            lVar10 = (longlong)iVar31;
          }
          local_538 = lVar10 + 1;
          uVar17 = (uint)local_4e0;
          lVar36 = local_520;
          uVar43 = local_3b0;
        }
        else {
LAB_1438b9511:
          local_518 = (ulonglong)(-uVar43 & uVar43);
          uVar29 = local_518 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar43 = (local_554 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)local_3b0 <= (int)uVar43) {
            uVar43 = local_3b0;
          }
        }
      } while (uVar43 != uVar17);
    }
LAB_1438b76ac:
    plVar11 = (longlong *)(**(code **)(*local_540 + 0x10))();
    if (plVar11 != (longlong *)0x0) {
      if ((longlong)(int)uStack_490 != 0) {
        local_550 = (longlong *)((longlong)(int)uStack_490 * 4 + (longlong)local_498);
        uVar29 = (ulonglong)*(uint *)(plVar11 + 0xa9);
        plVar32 = local_498;
        do {
          iVar39 = (int)*plVar32;
          if (iVar39 + 1 < (int)uVar29) {
            lVar36 = (longlong)iVar39 * 0x50 + plVar11[0xa8];
            lVar10 = (longlong)iVar39 + 1;
            do {
              lVar19 = *(longlong *)(plVar11[0xa8] + 0x20 + lVar10 * 0x50);
              if ((lVar19 != 0) &&
                 (plVar46 = (longlong *)(plVar11[0xa8] + lVar10 * 0x50),
                 plVar46[5] == *(longlong *)(lVar36 + 0x28))) {
                lVar38 = plVar46[1];
                if ((longlong)(int)lVar38 != 0) {
                  lVar19 = *plVar46;
                  lVar42 = 0;
                  do {
                    cVar48 = FUN_140106e94(*(undefined8 *)(lVar19 + lVar42));
                    if (cVar48 == '\0') goto LAB_1438b7818;
                    lVar42 = lVar42 + 8;
                  } while ((longlong)(int)lVar38 * 8 != lVar42);
                  lVar19 = plVar46[4];
                }
                iVar39 = *(int *)(lVar19 + 0x58);
                if ((longlong)iVar39 != 0) {
                  lVar19 = *(longlong *)(lVar19 + 0x50);
                  lVar38 = 0;
                  do {
                    cVar48 = FUN_140106e94(*(undefined8 *)(lVar19 + lVar38));
                    if (cVar48 == '\0') goto LAB_1438b7818;
                    lVar38 = lVar38 + 8;
                  } while ((longlong)iVar39 * 8 != lVar38);
                }
                lVar19 = FUN_14644c260(DAT_14c951640);
                if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c(lVar19);
                }
                iVar39 = (int)plVar46[1];
                *(uint *)(plVar46 + 1) = iVar39 + 1U;
                if (*(uint *)((longlong)plVar46 + 0xc) < iVar39 + 1U) {
                  FUN_14181c0b2(plVar46,iVar39);
                }
                *(longlong *)(*plVar46 + (longlong)iVar39 * 8) = lVar19;
                if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c(lVar19);
                }
                *(undefined4 *)
                 (*(longlong *)(*plVar46 + (longlong)((int)plVar46[1] + -1) * 8) + 0x28) =
                     0x322bcc77;
LAB_1438b7818:
                FUN_14058b40c(plVar11,
                              L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                             );
                local_388 = (longlong *)FUN_1414cc4b2();
                local_338 = (longlong *)0x0;
                local_308 = 0;
                local_378 = 0;
                uStack_370 = 0;
                local_368 = (uint *)((ulonglong)local_368 & 0xffffffffffff0000);
                local_350 = 0;
                puStack_348 = (undefined8 *)0x0;
                local_360 = 0;
                uStack_35c = 0;
                uStack_358 = 0;
                iStack_354 = 0;
                plStack_380 = plVar11;
                lVar19 = FUN_1402710dd(&local_388);
                if (puStack_348 != (undefined8 *)0x0) {
                  plVar22 = local_338;
                  if (local_338 == (longlong *)0x0) {
                    plVar22 = local_328;
                  }
                  (**(code **)(*plVar22 + 0x10))();
                }
                lVar38 = *(longlong *)(lVar36 + 0x20);
                if (DAT_14c950c29 == 1) {
                  if (lVar38 == 0) {
                    lVar38 = 0;
                  }
                  else {
                    FUN_1456cec3c();
                    lVar38 = *(longlong *)(lVar36 + 0x20);
                  }
                }
                bVar15 = DAT_14c950c29;
                *(longlong *)(lVar19 + 0x50) = lVar38;
                if ((lVar19 != 0) && ((bVar15 & 1) != 0)) {
                  FUN_1456cec3c(lVar19);
                }
                iVar39 = (int)plVar46[1];
                *(uint *)(plVar46 + 1) = iVar39 + 1U;
                if (*(uint *)((longlong)plVar46 + 0xc) < iVar39 + 1U) {
                  FUN_14181c0b2(plVar46,iVar39);
                }
                *(longlong *)(*plVar46 + (longlong)iVar39 * 8) = lVar19;
                if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c(lVar19);
                }
              }
              lVar10 = lVar10 + 1;
              uVar29 = (ulonglong)(int)plVar11[0xa9];
            } while (lVar10 < (longlong)uVar29);
          }
          plVar32 = (longlong *)((longlong)plVar32 + 4);
        } while (plVar32 != local_550);
      }
    }
    lVar10 = local_560;
    uVar29 = 0;
    FUN_140f44cf4(local_560,0);
    lVar36 = local_560;
    if ((char)local_540[0x29] == '\x02') {
      FUN_147f9b0a2(lVar10 + 0x5a0);
    }
    else {
      local_368 = (uint *)0x0;
      local_360 = 0;
      local_388 = (longlong *)0x0;
      plStack_380 = (longlong *)0x0;
      uStack_35c = 0x80;
      uStack_358 = 0xffffffff;
      iStack_354 = 0;
      puStack_348 = (undefined8 *)0x0;
      local_340 = 0;
      iVar39 = *(int *)(lVar10 + 0x5c8);
      if (iVar39 == 0) {
        uVar33 = 1;
        iVar31 = 0;
        iVar16 = 0;
      }
      else {
        puVar12 = *(uint **)(lVar10 + 0x5c0);
        if (*(uint **)(lVar10 + 0x5c0) == (uint *)0x0) {
          puVar12 = (uint *)(lVar10 + 0x5b0);
        }
        uVar43 = *puVar12;
        if (uVar43 == 0) {
          iVar16 = iVar39 + 0x1e;
          if (-1 < iVar39 + -1) {
            iVar16 = iVar39 + -1;
          }
          uVar29 = 0;
          uVar33 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar33 = uVar29;
          }
          iVar31 = 0;
          do {
            if (uVar33 == uVar29) goto LAB_1438b95bb;
            iVar31 = iVar31 + 0x20;
            uVar43 = puVar12[uVar29 + 1];
            uVar29 = uVar29 + 1;
          } while (uVar43 == 0);
        }
        else {
          uVar29 = 0;
          iVar31 = 0;
        }
        uVar33 = (ulonglong)(-uVar43 & uVar43);
        uVar27 = uVar33 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar16 = (iVar31 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (iVar39 <= iVar16) {
          iVar16 = iVar39;
        }
      }
      if (iVar16 != iVar39) {
        uVar43 = 0xffffffff;
        do {
          local_468 = *(longlong ***)(*(longlong *)(lVar36 + 0x5a0) + (longlong)iVar16 * 0x70);
          FUN_140de8aee(&local_388,&local_438,&local_468);
          uVar43 = ~(uint)uVar33 & uVar43;
          puVar12 = *(uint **)(lVar36 + 0x5c0);
          if (*(uint **)(lVar36 + 0x5c0) == (uint *)0x0) {
            puVar12 = (uint *)(lVar10 + 0x5b0);
          }
          iVar18 = *(int *)(lVar36 + 0x5c8);
          iVar16 = (int)uVar29;
          lVar19 = (longlong)iVar16;
          uVar17 = puVar12[lVar19] & uVar43;
          if (uVar17 == 0) {
            iVar25 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar25 = iVar18 + -1;
            }
            iVar25 = iVar25 >> 5;
            iVar31 = iVar31 + 0x20;
            iVar9 = iVar25;
            if (iVar25 < iVar16) {
              iVar9 = iVar16;
            }
            if (iVar16 < iVar25) {
              lVar38 = 0;
              do {
                uVar17 = puVar12[lVar19 + lVar38 + 1];
                if (uVar17 != 0) {
                  uVar29 = (ulonglong)(iVar16 + (int)lVar38 + 1);
                  uVar43 = 0xffffffff;
                  goto LAB_1438b9c76;
                }
                iVar31 = iVar31 + 0x20;
                lVar38 = lVar38 + 1;
              } while (iVar9 - lVar19 != lVar38);
              uVar43 = 0xffffffff;
              iVar16 = iVar9;
            }
            uVar29 = (ulonglong)(iVar16 + 1);
            iVar16 = iVar18;
          }
          else {
LAB_1438b9c76:
            uVar33 = (ulonglong)(-uVar17 & uVar17);
            uVar27 = uVar33 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar16 = (iVar31 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if (iVar18 <= iVar16) {
              iVar16 = iVar18;
            }
          }
        } while (iVar16 != iVar39);
      }
LAB_1438b95bb:
      if ((longlong)*(int *)(local_560 + 0x548) != 0) {
        plVar11 = *(longlong **)(local_560 + 0x540);
        plVar32 = plVar11 + (longlong)*(int *)(local_560 + 0x548) * 10;
        local_550 = (longlong *)(local_560 + 0x318);
        do {
          if ((int)plStack_380 != iStack_354) {
            uVar29 = plVar11[4];
            uVar43 = ((uint)(uVar29 >> 0x14) & 0xffff ^ (uint)(uVar29 >> 4)) * -0x7a143595;
            uVar43 = (uVar43 >> 0xd ^ uVar43) * -0x3d4d51cb;
            puVar23 = puStack_348;
            if (puStack_348 == (undefined8 *)0x0) {
              puVar23 = &local_350;
            }
            iVar39 = *(int *)((longlong)puVar23 +
                             ((longlong)(int)(uVar43 >> 0x10 ^ uVar43) & (longlong)local_340 - 1U) *
                             4);
            if (iVar39 != -1) {
LAB_1438b966b:
              lVar10 = (longlong)iVar39;
              if (local_388[lVar10 * 2] != uVar29) goto code_r0x0001438b967c;
              lVar36 = (longlong)*(int *)((longlong)local_388 + lVar10 * 0x10 + 0xc);
              iVar16 = *(int *)((longlong)puVar23 + lVar36 * 4);
              if (iVar16 == iVar39) {
                plVar46 = (longlong *)((longlong)puVar23 + lVar36 * 4);
              }
              else {
                do {
                  plVar46 = local_388 + (longlong)iVar16 * 2 + 1;
                  iVar16 = (int)*plVar46;
                } while (iVar16 != iVar39);
              }
              *(int *)plVar46 = (int)local_388[lVar10 * 2 + 1];
              FUN_140de9094(&local_388);
            }
          }
LAB_1438b96c0:
          if ((*(char *)((longlong)local_540 + 0x149) == '\x01') &&
             (*(char *)(plVar11[4] + 0x48) == '\0')) {
            lVar10 = plVar11[5];
            plVar46 = (longlong *)plVar11[7];
            if (plVar46 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar46 + 1) = (int)plVar46[1] + 1;
              UNLOCK();
            }
            if (*(int *)(local_560 + 0x2e8) != *(int *)(local_560 + 0x314)) {
              uVar43 = (uint)((ulonglong)lVar10 >> 0x10);
              uVar17 = (uint)lVar10 & 0xffff;
              plVar22 = *(longlong **)(local_560 + 800);
              if (*(longlong **)(local_560 + 800) == (longlong *)0x0) {
                plVar22 = local_550;
              }
              iVar39 = *(int *)((longlong)plVar22 +
                               (ulonglong)
                               (*(int *)(local_560 + 0x328) - 1U &
                               (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar17) +
                               (uVar43 << 0x13 | uVar43 & 0xffff) + (uVar17 >> 4)) * 4);
              if (iVar39 != -1) {
                do {
                  lVar36 = *(longlong *)(local_560 + 0x2e0) + (longlong)iVar39 * 0x110;
                  if (*(longlong *)(*(longlong *)(local_560 + 0x2e0) + (longlong)iVar39 * 0x110) ==
                      lVar10) goto LAB_1438b99c2;
                  iVar39 = *(int *)(lVar36 + 0x108);
                } while (iVar39 != -1);
              }
            }
            lVar36 = 0;
LAB_1438b99c2:
            if (plVar46 != (longlong *)0x0) {
              LOCK();
              plVar22 = plVar46 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)*plVar46)(plVar46);
                LOCK();
                piVar1 = (int *)((longlong)plVar46 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar46 + 0x10))(plVar46);
                }
              }
            }
            if ((lVar36 != 0) && ((*(byte *)(lVar36 + 0x4c) & 1) != 0)) {
              *(byte *)(plVar11 + 8) = *(byte *)(plVar11 + 8) | 1;
            }
          }
          plVar46 = local_480;
          if ((longlong)local_478 != 0) {
            plVar40 = local_480 + (longlong)local_478 * 10;
            plVar22 = local_480;
            bVar15 = DAT_14c950c29;
            do {
              lVar10 = plVar22[4];
              if (((bVar15 & 1) != 0) && (lVar10 != 0)) {
                FUN_1456cec3c(lVar10);
                bVar15 = DAT_14c950c29;
              }
              if ((plVar11[4] == lVar10) && (plVar11[5] == plVar22[5])) {
                uVar43 = *(uint *)(plVar11 + 3);
                if (uVar43 == *(uint *)(plVar22 + 3)) {
                  if (0 < (int)uVar43) {
                    uVar29 = 0;
                    do {
                      lVar10 = *(longlong *)(plVar11[2] + uVar29 * 8);
                      lVar36 = *(longlong *)(plVar22[2] + uVar29 * 8);
                      cVar48 = ((lVar36 == 0) == (lVar10 == 0)) * '\x03' + '\x01';
                      if ((lVar10 != 0) && (lVar36 != 0)) {
                        cVar48 = *(longlong *)(lVar10 + 0x10) != *(longlong *)(lVar36 + 0x10);
                      }
                      if ((cVar48 != '\0') && (cVar48 != '\x04')) goto LAB_1438b9720;
                      uVar29 = uVar29 + 1;
                    } while (uVar43 != uVar29);
                  }
                  uVar43 = *(uint *)(plVar11 + 1);
                  if (uVar43 == *(uint *)(plVar22 + 1)) {
                    if ((int)uVar43 < 1) {
LAB_1438b983d:
                      uVar43 = (int)((longlong)plVar22 - (longlong)plVar46 >> 4) * -0x33333333;
                      if (uVar43 != 0xffffffff) {
                        lVar10 = (longlong)(int)uVar43;
                        FUN_14181bdaa(plVar11,local_480 + lVar10 * 10);
                        plVar22 = local_480;
                        plVar46 = (longlong *)local_480[lVar10 * 10 + 7];
                        if (plVar46 != (longlong *)0x0) {
                          LOCK();
                          plVar40 = plVar46 + 1;
                          *(int *)plVar40 = (int)*plVar40 + -1;
                          UNLOCK();
                          if ((int)*plVar40 == 0) {
                            (**(code **)*plVar46)(plVar46);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar46 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar46 + 0x10))(plVar46);
                            }
                          }
                        }
                        plVar46 = plVar22 + lVar10 * 10;
                        if (plVar46[2] != 0) {
                          FUN_1400020a8();
                        }
                        if (*plVar46 != 0) {
                          FUN_1400020a8();
                        }
                        iVar39 = ~uVar43 + local_478;
                        if (iVar39 != 0) {
                          if (0 < iVar39) {
                            iVar39 = 1;
                          }
                          memmove(plVar46,plVar22 + (longlong)(local_478 - iVar39) * 10,
                                  (longlong)iVar39 * 0x50);
                        }
                        local_478 = local_478 + -1;
                        FUN_14064b420(&local_480);
                      }
                      break;
                    }
                    uVar29 = 0;
                    while( true ) {
                      lVar10 = *(longlong *)(*plVar11 + uVar29 * 8);
                      lVar36 = *(longlong *)(*plVar22 + uVar29 * 8);
                      cVar48 = ((lVar36 == 0) == (lVar10 == 0)) * '\x03' + '\x01';
                      if ((lVar10 != 0) && (lVar36 != 0)) {
                        cVar48 = *(longlong *)(lVar10 + 0x10) != *(longlong *)(lVar36 + 0x10);
                      }
                      if ((cVar48 != '\0') && (cVar48 != '\x04')) break;
                      uVar29 = uVar29 + 1;
                      if (uVar43 == uVar29) goto LAB_1438b983d;
                    }
                  }
                }
              }
LAB_1438b9720:
              plVar22 = plVar22 + 10;
            } while (plVar22 != plVar40);
          }
          plVar11 = plVar11 + 10;
        } while (plVar11 != plVar32);
      }
      FUN_1438be990(local_560,&local_388);
      local_340 = 0;
      if (puStack_348 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14181c214(&local_388);
      lVar10 = local_560;
    }
    if ((longlong)*(int *)(lVar10 + 0x548) != 0) {
      lVar36 = *(longlong *)(lVar10 + 0x540);
      lVar19 = (longlong)*(int *)(lVar10 + 0x548) * 0x50;
      do {
        FUN_1405c1744(lVar10,lVar36);
        lVar36 = lVar36 + 0x50;
        lVar19 = lVar19 + -0x50;
      } while (lVar19 != 0);
    }
    *(undefined2 *)(local_540 + 0x29) = 0x100;
    *(undefined1 *)((longlong)local_540 + 0x14b) = 1;
    FUN_144a65a1e(local_4a8,uStack_4a0 & 0xffffffff);
    if (local_4a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_498 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_3e0 = 0;
    if (local_3e8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1405535a6(&local_428);
    local_390 = 0;
    if (local_398 != 0) {
      FUN_1400020a8();
    }
    FUN_141078e0c(&local_3d8);
    FUN_140dde623(local_480,local_478);
    if (local_480 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1438b718f:
  local_418 = plVar32[2];
  local_428 = (longlong ***)*plVar32;
  uStack_420 = (longlong ***)plVar32[1];
  plVar7 = (longlong *)local_428;
  ppplVar6 = uStack_420;
  plVar32[2] = plVar37[-1];
  lVar10 = plVar37[-2];
  *plVar32 = *plVar40;
  plVar32[1] = lVar10;
  plVar37[-1] = local_418;
  local_428._4_4_ = (undefined4)((ulonglong)local_428 >> 0x20);
  uStack_420._4_4_ = (undefined4)((ulonglong)uStack_420 >> 0x20);
  *(undefined4 *)plVar40 = (undefined4)local_428;
  *(undefined4 *)((longlong)plVar37 + -0x14) = local_428._4_4_;
  *(int *)(plVar37 + -2) = (int)uStack_420;
  *(undefined4 *)((longlong)plVar37 + -0xc) = uStack_420._4_4_;
  iVar39 = iVar39 + -1;
  plVar37 = plVar37 + -6;
  local_428 = (longlong ***)plVar7;
  uStack_420 = ppplVar6;
  if ((longlong)plVar41 - (longlong)plVar22 < (longlong)plVar46 - (longlong)plVar44) {
    if (plVar26 < plVar11) {
      *pplVar20 = plVar26;
      pplVar20[1] = plVar11;
      *(int *)(pplVar20 + 2) = iVar39;
      pplVar20 = pplVar20 + 3;
    }
    plVar46 = plVar41;
    plVar44 = plVar32;
    if (plVar40 <= plVar32 + 3) goto LAB_1438b7525;
  }
  else {
    if (plVar32 + 3 < plVar40) {
      *pplVar20 = plVar32;
      pplVar20[1] = plVar37;
      *(int *)(pplVar20 + 2) = iVar39;
      pplVar20 = pplVar20 + 3;
    }
    plVar46 = plVar11;
    plVar32 = plVar26;
    plVar37 = plVar11;
    if (plVar11 <= plVar26) goto LAB_1438b7525;
  }
  iVar16 = (int)((ulonglong)((longlong)plVar46 - (longlong)plVar44) >> 3) * -0x55555555;
  uVar43 = iVar16 + 1;
  plVar22 = plVar44;
  plVar11 = plVar37;
  if (iVar39 == 0) goto LAB_1438b7260;
  goto LAB_1438b709d;
LAB_1438b859d:
  lVar19 = lVar19 + 8;
  if (lVar36 == lVar19) goto LAB_1438b85a6;
  goto LAB_1438b8574;
code_r0x0001438b967c:
  iVar39 = (int)local_388[lVar10 * 2 + 1];
  if (iVar39 == -1) goto LAB_1438b96c0;
  goto LAB_1438b966b;
}



// FUNCTION 1438ba1ba FUN_1438ba1ba body=290 status=ok
// SIG undefined FUN_1438ba1ba(void)

void FUN_1438ba1ba(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  
  iVar4 = (int)param_2[1];
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      plVar1 = (longlong *)param_1[1];
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        lVar2 = *param_2;
        uVar3 = *(ulonglong *)(lVar2 + 0x20 + (longlong)iVar5 * 0x50);
        uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        plVar8 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar1[8];
        }
        iVar7 = *(int *)((longlong)plVar8 +
                        (ulonglong)((int)plVar1[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar7 != -1) {
          do {
            if (*(ulonglong *)(*plVar1 + (longlong)iVar7 * 0x10) == uVar3) {
              plVar1 = (longlong *)*param_1;
              iVar4 = (int)plVar1[1];
              *(uint *)(plVar1 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)plVar1 + 0xc) < iVar4 + 1U) {
                FUN_1405b89f8(plVar1,iVar4);
              }
              FUN_1405b824a((longlong)iVar4 * 0x50 + *plVar1,lVar2 + (longlong)iVar5 * 0x50);
              FUN_14064b366(param_2,iVar5);
              FUN_14064b420(param_2);
              iVar4 = (int)param_2[1];
              goto LAB_1438ba274;
            }
            iVar7 = *(int *)((longlong)iVar7 * 0x10 + *plVar1 + 8);
          } while (iVar7 != -1);
        }
      }
      iVar5 = iVar5 + 1;
LAB_1438ba274:
    } while (iVar5 < iVar4);
  }
  return;
}



// FUNCTION 1438ba2dc FUN_1438ba2dc body=41 status=ok
// SIG undefined FUN_1438ba2dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ba2dc(void)

{
  _DAT_14cb27090 = 0;
  if (DAT_14cb27088 != 0) {
    FUN_1400020a8();
  }
  FUN_1461716ae();
  return;
}



// FUNCTION 1438ba306 FUN_1438ba306 body=776 status=ok
// SIG undefined FUN_1438ba306(void)

undefined8 * FUN_1438ba306(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  void *_Src;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined8 *local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  lVar8 = param_2[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar2 = *param_2;
    lVar11 = 0;
    local_c0 = param_2;
    local_b8 = param_1;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar11);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_88);
        if (1 < (uint)local_80) {
          puVar6 = &DAT_149dfd133;
          if ((int)uStack_70 < 2) {
            puVar6 = &DAT_149e02088;
          }
          FUN_1400b22c2(&local_a8,puVar6);
          local_90 = (int)uStack_a0;
          if ((int)uStack_a0 < 2) {
            local_98 = (void *)0x0;
            local_90 = (uint)local_80;
            lVar10 = (longlong)(int)(uint)local_80;
            local_b0 = local_88;
            if (lVar10 == 0) {
              local_8c = 0;
            }
            else {
              FUN_1446dd670(&local_98,local_80 & 0xffffffff,0);
              memcpy(local_98,local_b0,lVar10 * 2);
            }
          }
          else {
            iVar9 = (uint)local_80 + -1;
            if ((uint)local_80 == 0) {
              iVar9 = 0;
            }
            local_98 = local_a8;
            local_8c = uStack_a0._4_4_;
            local_a8 = (void *)0x0;
            uStack_a0 = 0;
            if (local_90 + iVar9 < local_90) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4((longlong)iVar9);
            }
            if (local_8c < local_90 + iVar9) {
              FUN_1446f8c06(&local_98);
            }
            FUN_1400020e8(&local_98,local_88,iVar9);
          }
          FUN_1400020e8(&local_78,local_98);
          if (local_98 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar4 = local_b8;
      param_2 = local_c0;
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar11);
    param_1 = local_b8;
    if (1 < (int)uStack_70) {
      FUN_1400b22c2(&local_88);
      _Src = local_78;
      param_1 = local_b8;
      iVar9 = (uint)local_80;
      if ((int)(uint)local_80 < 2) {
        *puVar4 = 0;
        lVar8 = (longlong)(int)uStack_70;
        *(int *)(puVar4 + 1) = (int)uStack_70;
        if (lVar8 == 0) {
          *(undefined4 *)((longlong)local_b8 + 0xc) = 0;
          param_2 = local_c0;
        }
        else {
          FUN_1446dd670(local_b8,uStack_70 & 0xffffffff,0);
          memcpy((void *)*param_1,_Src,lVar8 * 2);
          param_2 = local_c0;
        }
      }
      else {
        iVar7 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar7 = 0;
        }
        *puVar4 = local_88;
        local_88 = (void *)0x0;
        *(uint *)(puVar4 + 1) = (uint)local_80;
        iVar5 = local_80._4_4_;
        *(int *)((longlong)puVar4 + 0xc) = local_80._4_4_;
        local_80 = 0;
        iVar1 = iVar7 + iVar9;
        if (iVar1 < iVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar7);
        }
        if (iVar5 < iVar1) {
          FUN_1446f8c06(puVar4);
        }
        FUN_1400020e8(puVar4,local_78,iVar7);
        param_1 = puVar4;
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1438ba556;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1438ba556:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ba610 FUN_1438ba610 body=1081 status=ok
// SIG undefined FUN_1438ba610(void)

void FUN_1438ba610(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint *_Dst;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar8 = *(longlong *)(param_2 + 0x188);
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
    }
    else if (lVar8 == 0) goto LAB_1438ba8d3;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(lVar8);
    }
    local_44 = 0;
    local_48 = *(uint *)(lVar8 + 0xc);
    if ((int)local_48 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((local_48 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    plVar1 = (longlong *)(param_1 + 0x198);
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar6;
      }
    }
    local_44 = iVar3;
    FUN_1413ef3b4(plVar1);
    iVar3 = *(int *)(param_1 + 0x1a0);
    if (0 < (longlong)iVar3) {
      iVar6 = -iVar3;
      uVar9 = (longlong)iVar3;
      do {
        lVar7 = *plVar1 + uVar9 * 8;
        _Dst = (uint *)(lVar7 + -8);
        iVar3 = *(int *)(lVar7 + -4);
        if ((((iVar3 == 0) || (uVar4 = *_Dst, (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4)) ||
           (((plVar5 = (longlong *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
             plVar5 == (longlong *)0x0 || ((int)plVar5[2] != iVar3)) ||
            (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (*plVar5 == 0)))))) {
          uVar4 = *(uint *)(param_1 + 0x1a0);
          if (uVar9 != uVar4) {
            memmove(_Dst,(void *)(*plVar1 + uVar9 * 8),(longlong)(int)(iVar6 + uVar4) << 3);
            uVar4 = *(uint *)(param_1 + 0x1a0);
          }
          *(uint *)(param_1 + 0x1a0) = uVar4 - 1;
          FUN_14575f3bc(plVar1);
        }
        else if (*(int *)(*plVar5 + 400) <= *(int *)(lVar8 + 400)) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar8);
          }
          uVar4 = *(uint *)(lVar8 + 0xc);
          if ((int)uVar4 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar3 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
            }
            LOCK();
            iVar3 = *(int *)(lVar8 + 0x10);
            bVar10 = iVar3 == 0;
            if (bVar10) {
              *(int *)(lVar8 + 0x10) = iVar6;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar10) {
              iVar3 = iVar6;
            }
          }
          iVar6 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar6 + 1U) {
            FUN_1459642ea(plVar1,iVar6);
          }
          lVar8 = (uVar9 & 0xffffffff) * 8;
          memmove((void *)(*plVar1 + lVar8 + 8),(void *)(*plVar1 + lVar8),
                  (ulonglong)(uint)(iVar6 - (int)uVar9) << 3);
          *(ulonglong *)(*plVar1 + lVar8) = CONCAT44(iVar3,uVar4);
          goto LAB_1438ba8d3;
        }
        iVar6 = iVar6 + 1;
        bVar10 = 1 < uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar10);
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar8);
    }
    uVar4 = *(uint *)(lVar8 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar3 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar6;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = uVar2 + 1;
    if (*(uint *)(param_1 + 0x1a4) < uVar2 + 1) {
      FUN_1459642ea(plVar1,(ulonglong)uVar2);
    }
    memmove((void *)((longlong)*(void **)(param_1 + 0x198) + 8),*(void **)(param_1 + 0x198),
            (ulonglong)uVar2 << 3);
    **(undefined8 **)(param_1 + 0x198) = CONCAT44(iVar3,uVar4);
    local_48 = CONCAT31(local_48._1_3_,1);
    (**(code **)(*(longlong *)(param_1 + 0x30) + 0xa8))(param_1 + 0x30,&local_48,1);
  }
LAB_1438ba8d3:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438baa52 FUN_1438baa52 body=84 status=ok
// SIG undefined FUN_1438baa52(void)

undefined8 FUN_1438baa52(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_14110c710();
  uVar5 = 0;
  if ((cVar1 != '\0') && (DAT_14c98e618 != 0)) {
    plVar2 = (longlong *)FUN_14032f648();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0xe0)) &
            0xffffffffffffff20;
    uVar5 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 5);
  }
  return uVar5;
}



// FUNCTION 1438baab8 FUN_1438baab8 body=28 status=ok
// SIG undefined FUN_1438baab8(void)

undefined8 FUN_1438baab8(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438baace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2a8))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1438babe8 FUN_1438babe8 body=446 status=ok
// SIG undefined FUN_1438babe8(void)

undefined2 * FUN_1438babe8(longlong *param_1,undefined2 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined2 *local_60;
  undefined1 local_54 [4];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = param_3[1];
  local_60 = param_2;
  if ((longlong)(int)lVar6 != 0) {
    lVar2 = *param_3;
    lVar10 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar10);
      if (lVar3 != 0) {
        lVar8 = FUN_14148345e();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
          local_50 = *(undefined8 *)(lVar3 + 0x50);
          FUN_140de8aee(param_1[1],local_54,&local_50);
          plVar4 = (longlong *)param_1[2];
          lVar8 = *(longlong *)(*param_1 + 0x20);
          if ((lVar8 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar8);
          }
          lVar9 = *(longlong *)(lVar3 + 0x50);
          if (((DAT_14c950c29 & 1) != 0) && (lVar9 != 0)) {
            FUN_1456cec3c(lVar9);
          }
          iVar1 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
            local_68 = lVar9;
            FUN_14644c6b8(plVar4,iVar1);
            lVar9 = local_68;
          }
          lVar5 = *plVar4;
          *(longlong *)(lVar5 + (longlong)iVar1 * 0x10) = lVar8;
          if ((lVar8 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar8);
          }
          bVar7 = DAT_14c950c29;
          *(longlong *)(lVar5 + (longlong)iVar1 * 0x10 + 8) = lVar9;
          if (((bVar7 & 1) != 0) && (lVar9 != 0)) {
            FUN_1456cec3c(lVar9);
          }
          *(undefined1 *)param_1[3] = 1;
        }
        *(byte *)(param_1[3] + 1) = *(byte *)(param_1[3] + 1) | *(byte *)(lVar3 + 0x2c);
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar10);
  }
  *local_60 = *(undefined2 *)param_1[3];
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_60;
}



// FUNCTION 1438bada8 FUN_1438bada8 body=109 status=ok
// SIG undefined FUN_1438bada8(void)

void FUN_1438bada8(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 200))(param_2,*param_1);
    if (cVar1 != '\0') {
      local_19 = *(char *)(param_1 + 1) * '\x02' + '\x01';
      (**(code **)(*param_2 + 0xa8))(param_2,&local_19,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438bae20 FUN_1438bae20 body=1825 status=ok
// SIG undefined FUN_1438bae20(void)

void FUN_1438bae20(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_148 [32];
  longlong *local_128;
  uint local_114;
  uint *local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong local_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  param_2 = (longlong *)*param_2;
  FUN_1438b6bb8(param_2);
  uVar1 = *param_1;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar4 != 0) {
    plVar5 = (longlong *)(**(code **)(*param_2 + 0xe8))(param_2);
    iVar2 = (int)plVar5[5];
    if (iVar2 != 0) {
      local_110 = (uint *)(plVar5 + 2);
      puVar6 = (uint *)plVar5[4];
      puVar16 = puVar6;
      if (puVar6 == (uint *)0x0) {
        puVar16 = local_110;
      }
      uVar13 = *puVar16;
      if (uVar13 == 0) {
        iVar15 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar15 = iVar2 + -1;
        }
        uVar18 = 0;
        uVar11 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar11 = uVar18;
        }
        iVar15 = 0;
        do {
          if (uVar11 == uVar18) goto LAB_1438bae8d;
          iVar15 = iVar15 + 0x20;
          uVar13 = puVar16[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar13 == 0);
      }
      else {
        iVar15 = 0;
        uVar18 = 0;
      }
      uVar14 = (ulonglong)(-uVar13 & uVar13);
      uVar11 = uVar14 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar3 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar3 < iVar2) {
        local_114 = 0xffffffff;
        iVar12 = iVar2;
        do {
          lVar17 = *(longlong *)(*plVar5 + (longlong)iVar3 * 0x50);
          if (lVar17 != 0) {
            lVar7 = *plVar5 + (longlong)iVar3 * 0x50;
            local_98 = *(undefined4 *)(lVar7 + 8);
            uStack_94 = *(undefined4 *)(lVar7 + 0xc);
            uStack_90 = *(undefined4 *)(lVar7 + 0x10);
            uStack_8c = *(undefined4 *)(lVar7 + 0x14);
            local_88 = *(undefined4 *)(lVar7 + 0x18);
            uStack_84 = *(undefined4 *)(lVar7 + 0x1c);
            uStack_80 = *(undefined4 *)(lVar7 + 0x20);
            uStack_7c = *(undefined4 *)(lVar7 + 0x24);
            local_a0 = lVar17;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c();
            }
            local_128 = (longlong *)(lVar7 + 0x28);
            FUN_14570e87e(lVar4,&local_a0,&local_98,lVar7 + 0x38);
            puVar6 = (uint *)plVar5[4];
            iVar12 = (int)plVar5[5];
          }
          local_114 = local_114 & ~(uint)uVar14;
          puVar16 = puVar6;
          if (puVar6 == (uint *)0x0) {
            puVar16 = local_110;
          }
          iVar3 = (int)uVar18;
          lVar17 = (longlong)iVar3;
          uVar13 = puVar16[lVar17] & local_114;
          if (uVar13 == 0) {
            iVar10 = iVar12 + 0x1e;
            if (-1 < iVar12 + -1) {
              iVar10 = iVar12 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar8 = iVar10;
            if (iVar10 < iVar3) {
              iVar8 = iVar3;
            }
            if (iVar3 < iVar10) {
              lVar7 = 0;
              do {
                uVar13 = puVar16[lVar17 + lVar7 + 1];
                if (uVar13 != 0) {
                  uVar18 = (ulonglong)(iVar3 + (int)lVar7 + 1);
                  local_114 = 0xffffffff;
                  goto LAB_1438bb09b;
                }
                iVar15 = iVar15 + 0x20;
                lVar7 = lVar7 + 1;
              } while (iVar8 - lVar17 != lVar7);
              local_114 = 0xffffffff;
              iVar3 = iVar8;
            }
            uVar18 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar12;
          }
          else {
LAB_1438bb09b:
            uVar14 = (ulonglong)(-uVar13 & uVar13);
            uVar11 = uVar14 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar3 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar12 <= iVar3) {
              iVar3 = iVar12;
            }
          }
        } while (iVar3 != iVar2);
      }
    }
LAB_1438bae8d:
    iVar2 = (int)param_2[6];
    if (iVar2 != 0) {
      puVar6 = (uint *)param_2[5];
      puVar16 = puVar6;
      if (puVar6 == (uint *)0x0) {
        puVar16 = (uint *)(param_2 + 3);
      }
      uVar13 = *puVar16;
      if (uVar13 == 0) {
        iVar15 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar15 = iVar2 + -1;
        }
        uVar18 = 0;
        uVar11 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar11 = uVar18;
        }
        iVar15 = 0;
        do {
          if (uVar11 == uVar18) goto LAB_1438bae9a;
          iVar15 = iVar15 + 0x20;
          uVar13 = puVar16[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar18 = 0;
        iVar15 = 0;
      }
      uVar14 = (ulonglong)(-uVar13 & uVar13);
      uVar11 = uVar14 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar3 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar3 < iVar2) {
        uVar13 = 0xffffffff;
        iVar12 = iVar2;
        do {
          iVar10 = *(int *)(param_2[1] + 4 + (longlong)iVar3 * 0x30);
          if (iVar10 != 0) {
            puVar16 = (uint *)(param_2[1] + (longlong)iVar3 * 0x30);
            uVar9 = *puVar16;
            if (((((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) &&
                 (plVar5 = (longlong *)
                           ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                 plVar5 != (longlong *)0x0)) &&
                (((int)plVar5[2] == iVar10 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) &&
               (lVar17 = *plVar5, lVar17 != 0)) {
              local_e8 = 0;
              lStack_e0 = 0;
              local_108 = 0;
              lStack_100 = 0;
              local_c8 = puVar16[2];
              uStack_c4 = puVar16[3];
              uStack_c0 = puVar16[4];
              uStack_bc = puVar16[5];
              local_b8 = puVar16[6];
              uStack_b4 = puVar16[7];
              uStack_b0 = puVar16[8];
              uStack_ac = puVar16[9];
              local_d0 = lVar17;
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c();
              }
              local_128 = &local_e8;
              FUN_14570e87e(lVar4,&local_d0,&local_c8,&local_108);
              if (local_108 != 0) {
                FUN_1400020a8();
              }
              if (local_e8 != 0) {
                FUN_1400020a8();
              }
              puVar6 = (uint *)param_2[5];
              iVar12 = (int)param_2[6];
            }
          }
          uVar13 = uVar13 & ~(uint)uVar14;
          puVar16 = puVar6;
          if (puVar6 == (uint *)0x0) {
            puVar16 = (uint *)(param_2 + 3);
          }
          iVar3 = (int)uVar18;
          lVar17 = (longlong)iVar3;
          uVar9 = puVar16[lVar17] & uVar13;
          if (uVar9 == 0) {
            iVar10 = iVar12 + 0x1e;
            if (-1 < iVar12 + -1) {
              iVar10 = iVar12 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar8 = iVar10;
            if (iVar10 < iVar3) {
              iVar8 = iVar3;
            }
            if (iVar3 < iVar10) {
              lVar7 = 0;
              do {
                uVar9 = puVar16[lVar17 + lVar7 + 1];
                if (uVar9 != 0) {
                  uVar18 = (ulonglong)(iVar3 + (int)lVar7 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_1438bb2da;
                }
                iVar15 = iVar15 + 0x20;
                lVar7 = lVar7 + 1;
              } while (iVar8 - lVar17 != lVar7);
              uVar13 = 0xffffffff;
              lVar17 = (longlong)iVar8;
            }
            uVar18 = lVar17 + 1U & 0xffffffff;
            iVar3 = iVar12;
          }
          else {
LAB_1438bb2da:
            uVar14 = (ulonglong)(-uVar9 & uVar9);
            uVar11 = uVar14 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar3 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar12 <= iVar3) {
              iVar3 = iVar12;
            }
          }
        } while (iVar3 != iVar2);
      }
    }
LAB_1438bae9a:
    iVar2 = (int)param_2[0x10];
    if (iVar2 != 0) {
      local_110 = (uint *)(param_2 + 0xd);
      puVar6 = (uint *)param_2[0xf];
      if ((uint *)param_2[0xf] == (uint *)0x0) {
        puVar6 = local_110;
      }
      uVar13 = *puVar6;
      if (uVar13 == 0) {
        iVar15 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar15 = iVar2 + -1;
        }
        uVar18 = 0;
        uVar11 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar11 = uVar18;
        }
        iVar15 = 0;
        do {
          if (uVar11 == uVar18) goto LAB_1438baeaa;
          iVar15 = iVar15 + 0x20;
          uVar13 = puVar6[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar18 = 0;
        iVar15 = 0;
      }
      uVar14 = (ulonglong)(-uVar13 & uVar13);
      uVar11 = uVar14 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar3 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar3 < iVar2) {
        local_114 = 0xffffffff;
        do {
          plVar5 = (longlong *)((longlong)iVar3 * 0x60 + param_2[0xb]);
          lVar17 = *(longlong *)(lVar4 + 0x20);
          if (lVar17 == 0) {
LAB_1438bb416:
            local_108 = *plVar5;
            lStack_100 = plVar5[1];
            local_f8 = plVar5[2];
            if (local_f8 != 0) {
              LOCK();
              *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
              UNLOCK();
            }
            FUN_147f93a7b(lVar4,&local_108,plVar5 + 3,uVar1);
          }
          else {
            lVar7 = FUN_144a75eb4();
            if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_1438bb416;
            local_e8 = *plVar5;
            lStack_e0 = plVar5[1];
            local_d8 = plVar5[2];
            if (local_d8 != 0) {
              LOCK();
              *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
              UNLOCK();
            }
            FUN_147f93895(lVar17,&local_e8,plVar5 + 3,uVar1);
          }
          plVar5[9] = plVar5[5];
          plVar5[10] = plVar5[6];
          *(int *)(plVar5 + 7) = (int)plVar5[3];
          *(undefined4 *)((longlong)plVar5 + 0x3c) = *(undefined4 *)((longlong)plVar5 + 0x1c);
          *(int *)(plVar5 + 8) = (int)plVar5[4];
          *(undefined4 *)((longlong)plVar5 + 0x44) = *(undefined4 *)((longlong)plVar5 + 0x24);
          local_114 = local_114 & ~(uint)uVar14;
          puVar6 = (uint *)param_2[0xf];
          if ((uint *)param_2[0xf] == (uint *)0x0) {
            puVar6 = local_110;
          }
          iVar12 = (int)param_2[0x10];
          iVar3 = (int)uVar18;
          lVar17 = (longlong)iVar3;
          uVar13 = puVar6[lVar17] & local_114;
          if (uVar13 == 0) {
            iVar10 = iVar12 + 0x1e;
            if (-1 < iVar12 + -1) {
              iVar10 = iVar12 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar8 = iVar10;
            if (iVar10 < iVar3) {
              iVar8 = iVar3;
            }
            if (iVar3 < iVar10) {
              lVar7 = 0;
              do {
                uVar13 = puVar6[lVar17 + lVar7 + 1];
                if (uVar13 != 0) {
                  uVar18 = (ulonglong)(iVar3 + (int)lVar7 + 1);
                  local_114 = 0xffffffff;
                  goto LAB_1438bb4e8;
                }
                iVar15 = iVar15 + 0x20;
                lVar7 = lVar7 + 1;
              } while (iVar8 - lVar17 != lVar7);
              local_114 = 0xffffffff;
              lVar17 = (longlong)iVar8;
            }
            uVar18 = lVar17 + 1U & 0xffffffff;
            iVar3 = iVar12;
          }
          else {
LAB_1438bb4e8:
            uVar14 = (ulonglong)(-uVar13 & uVar13);
            uVar11 = uVar14 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar3 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar12 <= iVar3) {
              iVar3 = iVar12;
            }
          }
        } while (iVar3 != iVar2);
      }
    }
  }
LAB_1438baeaa:
  if (*(char *)((longlong)param_2 + 0x14b) == '\x01') {
    (**(code **)(*param_2 + 0xe0))(param_2);
    *(undefined1 *)((longlong)param_2 + 0x14b) = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438bb54e FUN_1438bb54e body=328 status=ok
// SIG undefined FUN_1438bb54e(void)

void FUN_1438bb54e(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1438bb5b7;
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
LAB_1438bb5b7:
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



// FUNCTION 1438bb696 FUN_1438bb696 body=328 status=ok
// SIG undefined FUN_1438bb696(void)

void FUN_1438bb696(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1438bb6ff;
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
LAB_1438bb6ff:
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



// FUNCTION 1438bb7de FUN_1438bb7de body=47 status=ok
// SIG undefined FUN_1438bb7de(void)

void FUN_1438bb7de(longlong param_1,int param_2)

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



// FUNCTION 1438bb80e FUN_1438bb80e body=57 status=ok
// SIG undefined FUN_1438bb80e(void)

undefined8 FUN_1438bb80e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = FUN_14148345e();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1438bb848 FUN_1438bb848 body=363 status=ok
// SIG undefined FUN_1438bb848(void)

void FUN_1438bb848(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1438bb8de;
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
LAB_1438bb8de:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1438bb9b3 FUN_1438bb9b3 body=849 status=ok
// SIG undefined FUN_1438bb9b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438bb9b3(void)

{
  uint uVar1;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14acc58f0;
  local_78 = 5;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acc59e0,2,&PTR_FUN_14acc5910);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14acc5b30;
  local_78 = 1;
  FUN_14282b410(L"/Script/EnhancedInput",0,0,&PTR_FUN_14acc5b50);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14acc5e90;
  local_78 = 1;
  FUN_14282b410(L"/Script/EnhancedInput",0,0,&PTR_FUN_14acc5ed0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/EnhancedInput",0,0,&PTR_FUN_14acc5fc0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14acc65e0;
  local_78 = 2;
  FUN_14282b410(L"/Script/EnhancedInput",0,0,&PTR_FUN_14acc6600);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acc7050,2,&PTR_FUN_14acc7020);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acc7a30,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acc8580,1,&PTR_FUN_14acc8550);
  local_78 = CONCAT44(local_78._4_4_,1);
  FUN_14153156c(&DAT_14cb26e18,L"EnhancedInput.bShouldLogAllWorldSubsystemInputs",&DAT_14cb26e28,
                L"Should each InputKey call to the World subsystem be logged?");
  atexit(FUN_1438b6141);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acca010,1,0);
  local_58 = "ComboKey";
  local_50 = 8;
  local_4c = 0;
  uVar1 = FUN_14001a6c0(&local_58,1);
  _DAT_14cb26ee0 = (ulonglong)uVar1;
  _DAT_14cb26ee8 = 0;
  DAT_14cb26ef0 = 0;
  atexit(FUN_1438b6253);
  local_58 = (char *)0x800000014acca042;
  local_44 = 0xd;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14644b93e(&local_58);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14accad50,2,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14accd500;
  local_78 = 1;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14accd550,1,&PTR_FUN_14accd520);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb27030,L"input.GlobalAxisConfigMode",&DAT_14cb27040,
                L"Whether or not to apply Global Axis Config settings. 0 = Default (Mouse Only), 1 = All, 2 = None"
               );
  atexit(FUN_1438b67aa);
  DAT_14cb27068 = 0;
  DAT_14cb27070 = 0;
  DAT_14cb27048 = 0;
  _DAT_14cb27050 = 0;
  _DAT_14cb27074 = 0xffffffff00000080;
  _DAT_14cb2707c = 0;
  DAT_14cb27088 = 0;
  _DAT_14cb27090 = 0;
  atexit(FUN_1438ba2dc);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acce850,2,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438bbd08 FUN_1438bbd08 body=69 status=ok
// SIG undefined FUN_1438bbd08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438bbd08(void)

{
  _DAT_14cb27178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438bbd4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb27180,1);
  return;
}



// FUNCTION 1438bbd4d FUN_1438bbd4d body=69 status=ok
// SIG undefined FUN_1438bbd4d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438bbd4d(void)

{
  _DAT_14cb27188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438bbd8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb27190,1);
  return;
}



// FUNCTION 1438bbd92 FUN_1438bbd92 body=69 status=ok
// SIG undefined FUN_1438bbd92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438bbd92(void)

{
  _DAT_14cb27198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438bbdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb271a0,1);
  return;
}



// FUNCTION 1438bbdd8 FUN_1438bbdd8 body=10588 status=ok
// SIG undefined FUN_1438bbdd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438bbdd8(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4,
                  undefined8 param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined5 uVar10;
  bool bVar11;
  char cVar12;
  undefined1 uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  double *pdVar19;
  undefined8 *puVar20;
  uint *puVar21;
  ulonglong *puVar22;
  longlong *plVar23;
  longlong lVar24;
  byte *pbVar25;
  uint *puVar26;
  byte bVar27;
  int iVar28;
  int iVar29;
  longlong *plVar30;
  longlong lVar31;
  longlong *plVar32;
  ulonglong *puVar33;
  ulonglong uVar34;
  longlong *plVar35;
  uint uVar36;
  undefined8 *puVar37;
  ulonglong uVar38;
  byte bVar39;
  longlong *plVar40;
  int iVar41;
  undefined4 *puVar42;
  ulonglong uVar43;
  undefined4 *puVar44;
  uint uVar45;
  double *pdVar46;
  int iVar47;
  longlong lVar48;
  ulonglong *puVar49;
  bool bVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  undefined8 uVar57;
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 *local_270;
  undefined8 *local_268;
  byte local_260;
  longlong *local_258;
  char local_249;
  longlong *local_248;
  uint *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  longlong *local_220;
  ulonglong *local_218;
  ulonglong local_210;
  uint *local_208;
  longlong *local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  ulonglong *local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulonglong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  char local_151;
  ulonglong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  ulonglong *puStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  uVar58 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_218 = (ulonglong *)(param_1 + 0xbe);
  local_249 = param_4;
  FUN_1438be736();
  lVar18 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar18 == 0) {
    fVar51 = *(float *)((longlong)param_1 + 0x83c);
    dVar2 = (double)(fVar51 + 0.016666668);
  }
  else {
    dVar2 = *(double *)(lVar18 + 0x6e0);
    fVar51 = *(float *)((longlong)param_1 + 0x83c);
  }
  fVar59 = (float)dVar2;
  *(float *)(param_1 + 0x108) = fVar59 - fVar51;
  fVar51 = (float)FUN_1402660b2();
  if ((fVar51 != 0.0) || (NAN(fVar51))) {
    fVar51 = (float)param_3 / fVar51;
  }
  else {
    fVar51 = *(float *)(param_1 + 0x108);
    uVar58 = 0;
  }
  local_258 = param_1;
  local_220 = param_2;
  if ((longlong)(int)param_1[0xa9] != 0) {
    puVar37 = (undefined8 *)param_1[0xa8];
    plVar30 = puVar37 + (longlong)(int)param_1[0xa9] * 10;
    local_238 = param_1 + 99;
    puVar21 = (uint *)(param_1 + 0x5e);
    local_240 = (uint *)(param_1 + 0x103);
    local_228 = param_1 + 0xe3;
    local_248 = plVar30;
    do {
      if (puVar37[4] != 0) {
        lVar18 = puVar37[5];
        if (lVar18 == DAT_14c966e68) {
          iVar17 = (int)param_1[0x61];
          if (iVar17 == 0) {
            uVar43 = 0;
            uVar38 = 1;
            iVar47 = 0;
            iVar15 = 0;
          }
          else {
            puVar26 = (uint *)param_1[0x60];
            if ((uint *)param_1[0x60] == (uint *)0x0) {
              puVar26 = puVar21;
            }
            uVar45 = *puVar26;
            if (uVar45 == 0) {
              iVar15 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar15 = iVar17 + -1;
              }
              uVar43 = 0;
              uVar38 = (ulonglong)(uint)(iVar15 >> 5);
              if (iVar15 >> 5 < 1) {
                uVar38 = uVar43;
              }
              iVar47 = 0;
              do {
                if (uVar38 == uVar43) goto LAB_1438bc0a4;
                iVar47 = iVar47 + 0x20;
                uVar45 = puVar26[uVar43 + 1];
                uVar43 = uVar43 + 1;
              } while (uVar45 == 0);
            }
            else {
              uVar43 = 0;
              iVar47 = 0;
            }
            uVar38 = (ulonglong)(-uVar45 & uVar45);
            uVar34 = uVar38 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar15 = (iVar47 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar15) {
              iVar15 = iVar17;
            }
          }
          if (iVar15 != iVar17) {
            uVar45 = 0xffffffff;
            do {
              plVar40 = (longlong *)((longlong)iVar15 * 0x110 + param_1[0x5c]);
              cVar12 = FUN_14171cd44(plVar40);
              param_1 = local_258;
              if (cVar12 != '\0') {
                plVar30 = local_248;
                if ((*(longlong *)((longlong)local_258 + 0x834) == 0) && (0 < (int)plVar40[0xb])) {
                  pdVar46 = (double *)(plVar40 + 3);
                  *(longlong *)((longlong)local_258 + 0x834) = *plVar40;
                  goto LAB_1438bc0ac;
                }
                if (*plVar40 == *(longlong *)((longlong)local_258 + 0x834)) {
                  pdVar46 = (double *)(plVar40 + 3);
                  if (0 < (int)plVar40[0xd]) {
                    *(undefined8 *)((longlong)local_258 + 0x834) = 0;
                  }
                  goto LAB_1438bc0ac;
                }
              }
              uVar45 = uVar45 & ~(uint)uVar38;
              puVar26 = (uint *)local_258[0x60];
              if ((uint *)local_258[0x60] == (uint *)0x0) {
                puVar26 = puVar21;
              }
              iVar29 = (int)local_258[0x61];
              iVar15 = (int)uVar43;
              lVar18 = (longlong)iVar15;
              uVar16 = puVar26[lVar18] & uVar45;
              if (uVar16 == 0) {
                iVar41 = iVar29 + 0x1e;
                if (-1 < iVar29 + -1) {
                  iVar41 = iVar29 + -1;
                }
                iVar41 = iVar41 >> 5;
                iVar47 = iVar47 + 0x20;
                iVar28 = iVar41;
                if (iVar41 < iVar15) {
                  iVar28 = iVar15;
                }
                if (iVar15 < iVar41) {
                  lVar31 = 0;
                  do {
                    uVar16 = puVar26[lVar18 + lVar31 + 1];
                    if (uVar16 != 0) {
                      uVar43 = (ulonglong)(iVar15 + (int)lVar31 + 1);
                      uVar45 = 0xffffffff;
                      goto LAB_1438bc23c;
                    }
                    iVar47 = iVar47 + 0x20;
                    lVar31 = lVar31 + 1;
                  } while (iVar28 - lVar18 != lVar31);
                  uVar45 = 0xffffffff;
                  iVar15 = iVar28;
                }
                uVar43 = (ulonglong)(iVar15 + 1);
                iVar15 = iVar29;
              }
              else {
LAB_1438bc23c:
                uVar38 = (ulonglong)(-uVar16 & uVar16);
                uVar34 = uVar38 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar34 != 0) {
                  for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar15 = (iVar47 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if (iVar29 <= iVar15) {
                  iVar15 = iVar29;
                }
              }
            } while (iVar15 != iVar17);
          }
LAB_1438bc0a4:
          pdVar46 = (double *)0x0;
          plVar30 = local_248;
        }
        else {
          plVar40 = (longlong *)puVar37[7];
          if (plVar40 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar40 + 1) = (int)plVar40[1] + 1;
            UNLOCK();
          }
          if ((int)param_1[0x5d] != *(int *)((longlong)param_1 + 0x314)) {
            uVar45 = (uint)((ulonglong)lVar18 >> 0x10);
            uVar16 = (uint)lVar18 & 0xffff;
            plVar32 = (longlong *)param_1[100];
            if ((longlong *)param_1[100] == (longlong *)0x0) {
              plVar32 = local_238;
            }
            iVar17 = *(int *)((longlong)plVar32 +
                             (ulonglong)
                             ((int)param_1[0x65] - 1U &
                             (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar16) +
                             (uVar45 << 0x13 | uVar45 & 0xffff) + (uVar16 >> 4)) * 4);
            if (iVar17 != -1) {
              do {
                lVar31 = param_1[0x5c] + (longlong)iVar17 * 0x110;
                if (*(longlong *)(param_1[0x5c] + (longlong)iVar17 * 0x110) == lVar18)
                goto LAB_1438bc072;
                iVar17 = *(int *)(lVar31 + 0x108);
              } while (iVar17 != -1);
            }
          }
          lVar31 = 0;
LAB_1438bc072:
          if (plVar40 != (longlong *)0x0) {
            LOCK();
            plVar32 = plVar40 + 1;
            *(int *)plVar32 = (int)*plVar32 + -1;
            UNLOCK();
            if ((int)*plVar32 == 0) {
              (**(code **)*plVar40)(plVar40);
              LOCK();
              piVar1 = (int *)((longlong)plVar40 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              param_1 = local_258;
              if (*piVar1 == 0) {
                (**(code **)(*plVar40 + 0x10))(plVar40);
                param_1 = local_258;
              }
            }
          }
          pdVar46 = (double *)(lVar31 + 0x18);
          if (lVar31 == 0) {
            pdVar46 = (double *)0x0;
          }
        }
LAB_1438bc0ac:
        pdVar19 = (double *)&DAT_14c8464e0;
        if (pdVar46 != (double *)0x0) {
          pdVar19 = pdVar46;
        }
        dVar2 = *pdVar19;
        uVar53 = SUB84(dVar2,0);
        uVar54 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = pdVar19[1];
        uVar56 = SUB84(dVar3,0);
        uVar60 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = pdVar19[2];
        uVar61 = SUB84(dVar4,0);
        uVar62 = (undefined4)((ulonglong)dVar4 >> 0x20);
        if ((pdVar46 != (double *)0x0) && ((*(byte *)(puVar37 + 8) & 1) != 0)) {
          if ((*(byte *)((longlong)pdVar46 + 0x34) & 1) != 0) goto LAB_1438bc554;
          *(byte *)(puVar37 + 8) = *(byte *)(puVar37 + 8) & 0xfe;
        }
        if ((int)param_1[0xfd] != *(int *)((longlong)param_1 + 0x814)) {
          lVar18 = puVar37[5];
          uVar45 = (uint)((ulonglong)lVar18 >> 0x10);
          uVar16 = (uint)lVar18 & 0xffff;
          puVar26 = (uint *)param_1[0x104];
          if ((uint *)param_1[0x104] == (uint *)0x0) {
            puVar26 = local_240;
          }
          uVar45 = puVar26[(int)param_1[0x105] - 1U &
                           (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar16) +
                           (uVar45 << 0x13 | uVar45 & 0xffff) + (uVar16 >> 4)];
          if (uVar45 != 0xffffffff) {
            do {
              plVar40 = (longlong *)(param_1[0xfc] + (longlong)(int)uVar45 * 0x28);
              if (*plVar40 == lVar18) {
                if (plVar40 != (longlong *)0x0) {
                  bVar14 = *(byte *)(plVar40 + 3);
                  goto LAB_1438bc28c;
                }
                break;
              }
              uVar45 = *(uint *)(plVar40 + 4);
            } while (uVar45 != 0xffffffff);
          }
        }
        bVar14 = 0;
LAB_1438bc28c:
        if (pdVar46 == (double *)0x0) {
          bVar50 = false;
        }
        else {
          bVar50 = true;
          if (((*(byte *)((longlong)pdVar46 + 0x34) & 1) == 0) && (*(int *)(pdVar46 + 8) == 0)) {
            bVar50 = *(int *)(pdVar46 + 0xc) != 0;
          }
        }
        lVar18 = puVar37[6];
        if (lVar18 == 0) {
          local_e8 = puVar37[5];
          puStack_e0 = (ulonglong *)0x0;
          local_d8 = puVar37[7];
          if (local_d8 != 0) {
            LOCK();
            *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
            UNLOCK();
          }
          FUN_1402df5c4(&local_f8,&local_e8);
          plVar32 = plStack_f0;
          puVar37[6] = local_f8;
          local_f8 = 0;
          plVar40 = (longlong *)puVar37[7];
          if (plStack_f0 == plVar40) {
LAB_1438bc577:
            plVar40 = plStack_f0;
            if (plStack_f0 != (longlong *)0x0) {
              LOCK();
              plVar32 = plStack_f0 + 1;
              *(int *)plVar32 = (int)*plVar32 + -1;
              UNLOCK();
              if ((int)*plVar32 == 0) {
                (**(code **)*plStack_f0)(plStack_f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar40 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar40 + 0x10))(plVar40);
                }
              }
            }
          }
          else {
            plStack_f0 = (longlong *)0x0;
            puVar37[7] = plVar32;
            if (plVar40 != (longlong *)0x0) {
              LOCK();
              plVar32 = plVar40 + 1;
              *(int *)plVar32 = (int)*plVar32 + -1;
              UNLOCK();
              plVar30 = local_248;
              if ((int)*plVar32 == 0) {
                (**(code **)*plVar40)(plVar40);
                LOCK();
                piVar1 = (int *)((longlong)plVar40 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar30 = local_248;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar40 + 0x10))(plVar40);
                  plVar30 = local_248;
                }
              }
              goto LAB_1438bc577;
            }
          }
          lVar18 = puVar37[6];
          param_1 = local_258;
          if (lVar18 != 0) goto LAB_1438bc2bc;
LAB_1438bc3da:
          bVar11 = false;
        }
        else {
LAB_1438bc2bc:
          if (2 < (byte)(*(char *)(lVar18 + 0x42) - 2U)) goto LAB_1438bc3da;
          bVar11 = 0.0 < dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
        }
        bVar39 = bVar50 | bVar11;
        bVar27 = bVar14 | bVar39;
        if (bVar39 != 0) {
          bVar27 = 2;
        }
        if (bVar14 == 0) {
          bVar27 = bVar14 | bVar39;
        }
        if ((int)param_1[0xdd] != *(int *)((longlong)param_1 + 0x714)) {
          lVar18 = puVar37[5];
          uVar45 = (uint)((ulonglong)lVar18 >> 0x10);
          uVar16 = (uint)lVar18 & 0xffff;
          plVar40 = (longlong *)param_1[0xe4];
          if ((longlong *)param_1[0xe4] == (longlong *)0x0) {
            plVar40 = local_228;
          }
          iVar17 = *(int *)((longlong)plVar40 +
                           (ulonglong)
                           ((int)param_1[0xe5] - 1U &
                           (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar16) +
                           (uVar45 << 0x13 | uVar45 & 0xffff) + (uVar16 >> 4)) * 4);
          if (iVar17 != -1) {
            do {
              lVar31 = param_1[0xdc] + (longlong)iVar17 * 0x38;
              if (*(longlong *)(param_1[0xdc] + (longlong)iVar17 * 0x38) == lVar18)
              goto LAB_1438bc481;
              iVar17 = *(int *)(lVar31 + 0x30);
            } while (iVar17 != -1);
          }
        }
        lVar31 = 0;
LAB_1438bc481:
        puVar20 = (undefined8 *)(lVar31 + 0x18);
        if (lVar31 == 0) {
          puVar20 = (undefined8 *)0x0;
        }
        if ((((((bVar39 == 1 && puVar20 != (undefined8 *)0x0) && (*(int *)(pdVar46 + 8) != 0)) &&
              (*(int *)(pdVar46 + 10) != 0)) && ((dVar2 == 0.0 && (!NAN(dVar2))))) &&
            ((dVar3 == 0.0 && ((!NAN(dVar3) && (dVar4 == 0.0)))))) && (!NAN(dVar4))) {
          uVar53 = (undefined4)*puVar20;
          uVar54 = (undefined4)((ulonglong)*puVar20 >> 0x20);
          uVar56 = (undefined4)puVar20[1];
          uVar60 = (undefined4)((ulonglong)puVar20[1] >> 0x20);
          uVar61 = (undefined4)puVar20[2];
          uVar62 = (undefined4)((ulonglong)puVar20[2] >> 0x20);
        }
        bVar14 = *(byte *)(puVar37 + 8);
        local_118 = CONCAT44(uVar54,uVar53);
        local_110 = CONCAT44(uVar60,uVar56);
        local_108 = CONCAT44(uVar62,uVar61);
        local_100 = 3;
        local_120 = puVar37[4];
        if ((DAT_14c950c29 == 1) && (local_120 != 0)) {
          FUN_1456cec3c();
          param_1 = local_258;
        }
        local_270 = puVar37 + 2;
        local_260 = (bVar14 & 2) >> 1;
        local_278 = CONCAT71(local_278._1_7_,bVar27);
        local_268 = puVar37;
        FUN_144936c78(param_1,&local_120,CONCAT44(uVar58,fVar51),&local_118);
        param_1 = local_258;
      }
LAB_1438bc554:
      puVar37 = puVar37 + 10;
    } while (puVar37 != plVar30);
  }
  local_248 = param_1 + 0xf0;
  iVar17 = (int)param_1[0xf5];
  plVar30 = param_1;
  if (iVar17 == 0) {
    uVar43 = 1;
    iVar47 = 0;
    uVar38 = 0;
    iVar15 = 0;
  }
  else {
    puVar21 = (uint *)param_1[0xf4];
    if ((uint *)param_1[0xf4] == (uint *)0x0) {
      puVar21 = (uint *)(param_1 + 0xf2);
    }
    uVar45 = *puVar21;
    if (uVar45 == 0) {
      iVar15 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar15 = iVar17 + -1;
      }
      uVar38 = 0;
      uVar43 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar43 = uVar38;
      }
      iVar47 = 0;
      do {
        if (uVar43 == uVar38) goto LAB_1438bc90f;
        iVar47 = iVar47 + 0x20;
        uVar45 = puVar21[uVar38 + 1];
        uVar38 = uVar38 + 1;
      } while (uVar45 == 0);
    }
    else {
      iVar47 = 0;
      uVar38 = 0;
    }
    uVar43 = (ulonglong)(-uVar45 & uVar45);
    uVar34 = uVar43 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar15 = (iVar47 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar15) {
      iVar15 = iVar17;
    }
  }
  if (iVar15 < iVar17) {
    uVar45 = 0xffffffff;
    do {
      uVar34 = *(ulonglong *)(*local_248 + (longlong)iVar15 * 0x10);
      if ((DAT_14c950c29 == 1) && (uVar34 != 0)) {
        FUN_1456cec3c(uVar34);
LAB_1438bc708:
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar34);
        }
        local_e8 = uVar34;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar34);
        }
        if (((DAT_14c950c29 & 1) != 0) && (uVar34 != 0)) {
          FUN_1456cec3c(uVar34);
        }
        uVar16 = ((uint)(uVar34 >> 0x14) & 0xffff ^ (uint)(uVar34 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        iVar17 = FUN_140949712(param_1 + 0xe6,uVar16 >> 0x10 ^ uVar16,&local_e8);
        if (iVar17 == -1) {
          local_e8 = 0;
          puStack_e0 = (ulonglong *)0x0;
          local_f8 = 0;
          plStack_f0 = (longlong *)0x0;
          local_130 = 0;
          local_148 = (undefined4)DAT_14c8464e0;
          uStack_144 = DAT_14c8464e0._4_4_;
          uStack_140 = (undefined4)DAT_14c8464e8;
          uStack_13c = DAT_14c8464e8._4_4_;
          local_138 = DAT_14c8464f0;
          local_150 = uVar34;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(uVar34);
          }
          local_268 = &local_e8;
          local_270 = &local_f8;
          local_260 = 0;
          local_278 = CONCAT71(local_278._1_7_,1);
          FUN_144936c78(local_258,&local_150,CONCAT44(uVar58,fVar51),&local_148);
          goto LAB_1438bc8fd;
        }
      }
      else {
        if (uVar34 != 0) goto LAB_1438bc708;
LAB_1438bc8fd:
        FUN_14644e2de(local_248,iVar15);
      }
      uVar45 = uVar45 & ~(uint)uVar43;
      puVar21 = (uint *)local_258[0xf4];
      if ((uint *)local_258[0xf4] == (uint *)0x0) {
        puVar21 = (uint *)(param_1 + 0xf2);
      }
      iVar17 = (int)local_258[0xf5];
      iVar15 = (int)uVar38;
      lVar18 = (longlong)iVar15;
      uVar16 = puVar21[lVar18] & uVar45;
      plVar30 = local_258;
      if (uVar16 == 0) {
        iVar29 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar29 = iVar17 + -1;
        }
        iVar29 = iVar29 >> 5;
        iVar41 = iVar29;
        if (iVar29 < iVar15) {
          iVar41 = iVar15;
        }
        if (iVar29 <= iVar15) break;
        lVar31 = 0;
        while( true ) {
          iVar47 = iVar47 + 0x20;
          uVar16 = puVar21[lVar18 + lVar31 + 1];
          if (uVar16 != 0) break;
          lVar31 = lVar31 + 1;
          if (iVar41 - lVar18 == lVar31) goto LAB_1438bc90f;
        }
        uVar38 = (ulonglong)(iVar15 + (int)lVar31 + 1);
        uVar45 = 0xffffffff;
      }
      uVar43 = (ulonglong)(-uVar16 & uVar16);
      uVar34 = uVar43 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar15 = (iVar47 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar17);
  }
LAB_1438bc90f:
  plVar40 = plVar30 + 0xe6;
  uVar45 = *(uint *)(plVar30 + 0xeb);
  if (uVar45 == 0) {
    uVar38 = 1;
    uVar43 = 0;
    iVar17 = 0;
    uVar16 = 0;
  }
  else {
    puVar21 = (uint *)plVar30[0xea];
    if ((uint *)plVar30[0xea] == (uint *)0x0) {
      puVar21 = (uint *)(plVar30 + 0xe8);
    }
    uVar16 = *puVar21;
    if (uVar16 == 0) {
      iVar17 = uVar45 + 0x1e;
      if (-1 < (int)(uVar45 - 1)) {
        iVar17 = uVar45 - 1;
      }
      uVar43 = 0;
      uVar38 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar38 = uVar43;
      }
      iVar17 = 0;
      do {
        if (uVar38 == uVar43) goto LAB_1438bc9ae;
        iVar17 = iVar17 + 0x20;
        uVar16 = puVar21[uVar43 + 1];
        uVar43 = uVar43 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar43 = 0;
      iVar17 = 0;
    }
    uVar38 = (ulonglong)(-uVar16 & uVar16);
    uVar34 = uVar38 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar16 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar45 <= (int)uVar16) {
      uVar16 = uVar45;
    }
  }
  if (uVar16 != uVar45) {
    uVar36 = 0xffffffff;
    local_240 = (uint *)(plVar30 + 0xe8);
    local_238 = (longlong *)(ulonglong)uVar45;
    local_228 = plVar40;
    do {
      lVar18 = *plVar40;
      uVar34 = *(ulonglong *)(lVar18 + (longlong)(int)uVar16 * 0x20);
      local_e8 = uVar34;
      if ((DAT_14c950c29 == 1) && (uVar34 != 0)) {
        FUN_1456cec3c(uVar34);
LAB_1438bcb68:
        lVar18 = lVar18 + (longlong)(int)uVar16 * 0x20;
        local_151 = '\0';
        FUN_14644cc90(local_248,&local_f8,&local_e8,&local_151);
        lVar31 = (longlong)*(int *)(lVar18 + 0x10);
        if (lVar31 != 0) {
          cVar12 = local_151 + '\x01';
          puVar44 = *(undefined4 **)(lVar18 + 8);
          puVar42 = puVar44 + lVar31 * 0x10;
          do {
            local_178 = *puVar44;
            uStack_174 = puVar44[1];
            uStack_170 = puVar44[2];
            uStack_16c = puVar44[3];
            local_168 = puVar44[4];
            uStack_164 = puVar44[5];
            uStack_160 = puVar44[6];
            uStack_15c = puVar44[7];
            local_180 = uVar34;
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(uVar34);
            }
            local_270 = (undefined8 *)(puVar44 + 0xc);
            local_268 = (undefined8 *)(puVar44 + 8);
            local_278 = CONCAT71(local_278._1_7_,cVar12);
            local_260 = 0;
            FUN_144936c78(local_258,&local_180,CONCAT44(uVar58,fVar51),&local_178);
            puVar44 = puVar44 + 0x10;
          } while (puVar44 != puVar42);
        }
        uVar45 = *(uint *)(local_258 + 0xeb);
        plVar30 = local_258;
        plVar40 = local_228;
      }
      else if (uVar34 != 0) goto LAB_1438bcb68;
      uVar36 = uVar36 & ~(uint)uVar38;
      puVar21 = (uint *)plVar30[0xea];
      if ((uint *)plVar30[0xea] == (uint *)0x0) {
        puVar21 = local_240;
      }
      iVar15 = (int)uVar43;
      lVar18 = (longlong)iVar15;
      uVar16 = puVar21[lVar18] & uVar36;
      if (uVar16 == 0) {
        iVar47 = uVar45 + 0x1e;
        if (-1 < (int)(uVar45 - 1)) {
          iVar47 = uVar45 - 1;
        }
        iVar47 = iVar47 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar29 = iVar47;
        if (iVar47 < iVar15) {
          iVar29 = iVar15;
        }
        if (iVar15 < iVar47) {
          lVar31 = 0;
          do {
            uVar16 = puVar21[lVar18 + lVar31 + 1];
            if (uVar16 != 0) {
              uVar43 = (ulonglong)(iVar15 + (int)lVar31 + 1);
              uVar36 = 0xffffffff;
              goto LAB_1438bcb29;
            }
            iVar17 = iVar17 + 0x20;
            lVar31 = lVar31 + 1;
          } while (iVar29 - lVar18 != lVar31);
          uVar36 = 0xffffffff;
          lVar18 = (longlong)iVar29;
        }
        uVar43 = lVar18 + 1U & 0xffffffff;
        plVar30 = local_258;
        uVar16 = uVar45;
      }
      else {
LAB_1438bcb29:
        uVar38 = (ulonglong)(-uVar16 & uVar16);
        uVar34 = uVar38 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar16 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar45 <= (int)uVar16) {
          uVar16 = uVar45;
        }
      }
    } while (uVar16 != (uint)local_238);
  }
LAB_1438bc9ae:
  if ((int)plVar30[0xe7] != *(int *)((longlong)plVar30 + 0x764)) {
    FUN_147fa2f4a(plVar40);
    FUN_14644e338(plVar40);
    plVar30 = local_258;
  }
  local_248 = plVar30 + 0xb4;
  local_208 = (uint *)(plVar30 + 0xb6);
  uVar45 = *(uint *)(plVar30 + 0xb9);
  puVar21 = (uint *)(ulonglong)uVar45;
  if (uVar45 == 0) {
    uVar38 = 1;
    uVar43 = 0;
    iVar17 = 0;
    uVar16 = 0;
  }
  else {
    puVar26 = (uint *)plVar30[0xb8];
    if ((uint *)plVar30[0xb8] == (uint *)0x0) {
      puVar26 = local_208;
    }
    uVar16 = *puVar26;
    if (uVar16 == 0) {
      iVar17 = uVar45 + 0x1e;
      if (-1 < (int)(uVar45 - 1)) {
        iVar17 = uVar45 - 1;
      }
      uVar43 = 0;
      uVar38 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar38 = uVar43;
      }
      iVar17 = 0;
      do {
        if (uVar38 == uVar43) goto LAB_1438bcc77;
        iVar17 = iVar17 + 0x20;
        uVar16 = puVar26[uVar43 + 1];
        uVar43 = uVar43 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar43 = 0;
      iVar17 = 0;
    }
    uVar38 = (ulonglong)(-uVar16 & uVar16);
    uVar34 = uVar38 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar16 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar45 <= (int)uVar16) {
      uVar16 = uVar45;
    }
  }
  if (uVar16 != uVar45) {
    local_238 = plVar30 + 0xc5;
    uVar45 = 0xffffffff;
    local_240 = puVar21;
    do {
      lVar18 = *local_248;
      uVar34 = *(ulonglong *)(lVar18 + (longlong)(int)uVar16 * 0x70);
      if ((DAT_14c950c29 == 1) && (uVar34 != 0)) {
        FUN_1456cec3c();
        plVar30 = local_258;
      }
      if (((DAT_14c950c29 & 1) != 0) && (uVar34 != 0)) {
        FUN_1456cec3c();
        plVar30 = local_258;
      }
      if (((DAT_14c950c29 & 1) != 0) && (uVar34 != 0)) {
        FUN_1456cec3c();
        plVar30 = local_258;
      }
      lVar18 = lVar18 + (longlong)(int)uVar16 * 0x70;
      if ((int)plVar30[0xbf] == *(int *)((longlong)plVar30 + 0x624)) {
LAB_1438bda2a:
        bVar27 = 0;
      }
      else {
        uVar16 = ((uint)(uVar34 >> 0x14) & 0xffff ^ (uint)(uVar34 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        plVar40 = (longlong *)plVar30[0xc6];
        if ((longlong *)plVar30[0xc6] == (longlong *)0x0) {
          plVar40 = local_238;
        }
        iVar15 = *(int *)((longlong)plVar40 +
                         (ulonglong)((int)plVar30[199] - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
        bVar14 = DAT_14c950c29;
        if (iVar15 == -1) goto LAB_1438bda2a;
        do {
          if (((bVar14 & 1) != 0) && (uVar34 != 0)) {
            FUN_1456cec3c(uVar34);
            plVar30 = local_258;
            bVar14 = DAT_14c950c29;
          }
          uVar9 = *(ulonglong *)(*local_218 + (longlong)iVar15 * 0x10);
          if (((bVar14 & 1) != 0) && (uVar9 != 0)) {
            FUN_1456cec3c(uVar9);
            plVar30 = local_258;
            bVar14 = DAT_14c950c29;
          }
          if (((bVar14 & 1) != 0) && (uVar34 != 0)) {
            FUN_1456cec3c(uVar34);
            plVar30 = local_258;
            bVar14 = DAT_14c950c29;
          }
          if (uVar9 == uVar34) {
            dVar2 = *(double *)(lVar18 + 0x40);
            dVar3 = *(double *)(lVar18 + 0x48);
            dVar4 = *(double *)(lVar18 + 0x50);
            local_1a8 = *(undefined4 *)(lVar18 + 0x40);
            uStack_1a4 = *(undefined4 *)(lVar18 + 0x44);
            uStack_1a0 = *(undefined4 *)(lVar18 + 0x48);
            uStack_19c = *(undefined4 *)(lVar18 + 0x4c);
            local_198 = *(undefined4 *)(lVar18 + 0x50);
            uStack_194 = *(undefined4 *)(lVar18 + 0x54);
            uStack_190 = *(undefined4 *)(lVar18 + 0x58);
            uStack_18c = *(undefined4 *)(lVar18 + 0x5c);
            local_278._0_4_ = fVar51;
            FUN_1402a4dc8(plVar30,&local_e8,lVar18 + 0x30,&local_1a8);
            puVar21 = local_240;
            *(longlong *)(lVar18 + 0x50) = local_d8;
            *(undefined8 *)(lVar18 + 0x58) = uStack_d0;
            *(ulonglong *)(lVar18 + 0x40) = local_e8;
            *(ulonglong **)(lVar18 + 0x48) = puStack_e0;
            dVar5 = *(double *)(lVar18 + 0x40);
            dVar6 = *(double *)(lVar18 + 0x48);
            dVar7 = *(double *)(lVar18 + 0x50);
            if ((((dVar5 != dVar2) || (NAN(dVar5) || NAN(dVar2))) || (dVar6 != dVar3)) ||
               (NAN(dVar6) || NAN(dVar3))) {
LAB_1438bdcbd:
              *(char *)(lVar18 + 0x11) =
                   (9.99999905104687e-09 <= dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6) * '\x02';
            }
            else if ((dVar7 != dVar4) || (NAN(dVar7) || NAN(dVar4))) goto LAB_1438bdcbd;
            pbVar25 = (byte *)(lVar18 + 0x11);
            if (*(char *)(lVar18 + 0x13) == '\x01') {
              if (*(char *)(lVar18 + 0x18) == '\0') {
                if (((*(char *)(lVar18 + 0x16) == '\x01') && (*(char *)(lVar18 + 0x15) != '\x01'))
                   || (bVar27 = 2, *(char *)(lVar18 + 0x17) == '\0')) {
                  pbVar25 = (byte *)(lVar18 + 0x14);
                  goto LAB_1438bdd33;
                }
              }
              else {
                bVar27 = 0;
              }
            }
            else {
LAB_1438bdd33:
              bVar27 = *pbVar25;
            }
            local_1c8 = *(undefined4 *)(lVar18 + 0x40);
            uStack_1c4 = *(undefined4 *)(lVar18 + 0x44);
            uStack_1c0 = *(undefined4 *)(lVar18 + 0x48);
            uStack_1bc = *(undefined4 *)(lVar18 + 0x4c);
            local_1b8 = *(undefined4 *)(lVar18 + 0x50);
            uStack_1b4 = *(undefined4 *)(lVar18 + 0x54);
            uStack_1b0 = *(undefined4 *)(lVar18 + 0x58);
            uStack_1ac = *(undefined4 *)(lVar18 + 0x5c);
            local_278 = CONCAT44(local_278._4_4_,fVar51);
            bVar14 = FUN_1402a5434((byte *)(lVar18 + 0x11),local_258,lVar18 + 0x20,&local_1c8);
            if (bVar14 < bVar27) {
              bVar27 = bVar14;
            }
            if (*(char *)(lVar18 + 0x19) == '\0') {
              bVar27 = bVar14;
            }
            plVar30 = local_258;
            if ((local_249 != '\0') && (*(char *)(uVar34 + 0x40) == '\0')) {
              bVar27 = 0;
            }
            break;
          }
          iVar15 = *(int *)(*local_218 + 8 + (longlong)iVar15 * 0x10);
          bVar27 = 0;
          puVar21 = local_240;
        } while (iVar15 != -1);
      }
      cVar12 = *(char *)(lVar18 + 0x10);
      if (cVar12 == '\0') {
        if (bVar27 == 1) {
          *(undefined1 *)(lVar18 + 0x1a) = 2;
          uVar13 = 2;
        }
        else {
          *(char *)(lVar18 + 0x1a) = (bVar27 == 2) * '\x05';
          if (bVar27 == 2) {
LAB_1438bda51:
            uVar13 = 1;
            fVar52 = fVar51;
            goto LAB_1438bda5d;
          }
          uVar13 = 0;
        }
LAB_1438bda5a:
        fVar52 = 0.0;
      }
      else {
        if (cVar12 == '\x02') {
          if (bVar27 == 2) {
LAB_1438bdd11:
            *(undefined1 *)(lVar18 + 0x1a) = 6;
            goto LAB_1438bda51;
          }
          if (bVar27 == 0) {
            *(undefined1 *)(lVar18 + 0x1a) = 1;
            uVar13 = 0x10;
            goto LAB_1438bda5a;
          }
          if (bVar27 == 1) goto LAB_1438bdda5;
        }
        else if (cVar12 == '\x01') {
          if (bVar27 == 1) {
LAB_1438bdda5:
            *(undefined1 *)(lVar18 + 0x1a) = 3;
            uVar13 = 4;
            goto LAB_1438bda5a;
          }
          if (bVar27 == 2) goto LAB_1438bdd11;
          if (bVar27 == 0) {
            *(undefined1 *)(lVar18 + 0x1a) = 4;
            uVar13 = 8;
            goto LAB_1438bda5a;
          }
        }
        *(undefined1 *)(lVar18 + 0x1a) = 0;
        fVar52 = 0.0;
        uVar13 = 0;
      }
LAB_1438bda5d:
      *(undefined1 *)(lVar18 + 0x1b) = uVar13;
      *(byte *)(lVar18 + 0x10) = bVar27;
      fVar55 = 0.0;
      if (bVar27 != 0) {
        fVar55 = fVar51;
      }
      *(float *)(lVar18 + 0x60) = fVar55 + *(float *)(lVar18 + 0x60);
      *(float *)(lVar18 + 100) = fVar52 + *(float *)(lVar18 + 100);
      if (bVar27 == 2) {
        *(float *)(lVar18 + 0x1c) = fVar59;
      }
      uVar45 = uVar45 & ~(uint)uVar38;
      puVar26 = (uint *)plVar30[0xb8];
      if ((uint *)plVar30[0xb8] == (uint *)0x0) {
        puVar26 = local_208;
      }
      uVar36 = *(uint *)(plVar30 + 0xb9);
      iVar15 = (int)uVar43;
      lVar18 = (longlong)iVar15;
      uVar16 = puVar26[lVar18] & uVar45;
      if (uVar16 == 0) {
        iVar47 = uVar36 + 0x1e;
        if (-1 < (int)(uVar36 - 1)) {
          iVar47 = uVar36 - 1;
        }
        iVar47 = iVar47 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar29 = iVar47;
        if (iVar47 < iVar15) {
          iVar29 = iVar15;
        }
        if (iVar15 < iVar47) {
          lVar31 = 0;
          do {
            uVar16 = puVar26[lVar18 + lVar31 + 1];
            if (uVar16 != 0) {
              uVar43 = (ulonglong)(iVar15 + (int)lVar31 + 1);
              uVar45 = 0xffffffff;
              goto LAB_1438bdb19;
            }
            iVar17 = iVar17 + 0x20;
            lVar31 = lVar31 + 1;
          } while (iVar29 - lVar18 != lVar31);
          uVar45 = 0xffffffff;
          iVar15 = iVar29;
        }
        uVar43 = (ulonglong)(iVar15 + 1);
        puVar21 = local_240;
        plVar30 = local_258;
        uVar16 = uVar36;
      }
      else {
LAB_1438bdb19:
        uVar38 = (ulonglong)(-uVar16 & uVar16);
        uVar34 = uVar38 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar16 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar36 <= (int)uVar16) {
          uVar16 = uVar36;
        }
      }
    } while (uVar16 != (uint)puVar21);
  }
LAB_1438bcc77:
  FUN_14011bae6(plVar30);
  FUN_1417f7d46(plVar30);
  FUN_14011b712(plVar30);
  FUN_1417f7de2();
  uVar45 = *(uint *)(local_220 + 1);
  uVar38 = (ulonglong)uVar45;
  uVar16 = uVar45 - 1;
  plVar40 = local_220;
  if ((int)uVar45 < 1) {
LAB_1438bde16:
    if (-1 < (int)uVar16) {
      uVar38 = (ulonglong)uVar16;
      do {
        lVar18 = *(longlong *)(*plVar40 + uVar38 * 8);
        if (lVar18 != 0) {
          lVar31 = FUN_14119cfbe();
          plVar30 = local_258;
          if (((*(int *)(lVar31 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar31 + 0x38) * 8) == lVar31 + 0x30)) &&
             (iVar17 = *(int *)(lVar18 + 0x1b0), (longlong)iVar17 != 0)) {
            lVar18 = *(longlong *)(lVar18 + 0x1a8);
            lVar31 = 0;
            do {
              *(undefined8 *)(lVar18 + 0x28 + lVar31) = DAT_14c8464f0;
              uVar54 = DAT_14c8464e8._4_4_;
              uVar53 = (undefined4)DAT_14c8464e8;
              uVar58 = DAT_14c8464e0._4_4_;
              puVar44 = (undefined4 *)(lVar18 + 0x18 + lVar31);
              *puVar44 = (undefined4)DAT_14c8464e0;
              puVar44[1] = uVar58;
              puVar44[2] = uVar53;
              puVar44[3] = uVar54;
              lVar31 = lVar31 + 0x38;
            } while ((longlong)iVar17 * 0x38 - lVar31 != 0);
          }
        }
        bVar50 = 0 < (longlong)uVar38;
        uVar38 = uVar38 - 1;
      } while (bVar50);
    }
  }
  else {
    local_230 = plVar30 + 200;
    local_1f0 = plVar30 + 0x9b;
    local_200 = plVar30 + 99;
    local_238 = plVar30 + 0xcf;
    puVar21 = (uint *)(ulonglong)uVar16;
    do {
      plVar32 = *(longlong **)(*plVar40 + (longlong)puVar21 * 8);
      local_240 = puVar21;
      if (plVar32 != (longlong *)0x0) {
        lVar18 = FUN_14119cfbe();
        plVar30 = local_258;
        if (((*(int *)(lVar18 + 0x38) <= *(int *)(plVar32[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar32[2] + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8)
             == lVar18 + 0x30)) && ((*(uint *)(plVar32 + 1) >> 0x1e & 1) == 0)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb271b8) && (FUN_144b3d300(&DAT_14cb271b8), DAT_14cb271b8 == -1)) {
            DAT_14cb271a8 = (ulonglong *)0x0;
            _DAT_14cb271b0 = 0;
            atexit(FUN_1438be95e);
            _Init_thread_footer(&DAT_14cb271b8);
          }
          plVar30 = local_258;
          local_228 = plVar32;
          if ((longlong)(int)plVar32[0x34] != 0) {
            plVar35 = (longlong *)plVar32[0x33];
            plVar40 = plVar35 + (int)plVar32[0x34];
            do {
              iVar17 = *(int *)(*plVar35 + 0x14);
              if (((iVar17 == 0) || (uVar45 = *(uint *)(*plVar35 + 0x10), (int)uVar45 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar45 ||
                  (((plVar32 = (longlong *)
                               ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8)),
                    plVar32 == (longlong *)0x0 || ((int)plVar32[2] != iVar17)) ||
                   ((*(uint *)(plVar32 + 1) & 0x10200000) != 0)))))) {
                local_1d0 = 0;
              }
              else {
                local_1d0 = *plVar32;
                if ((local_1d0 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c();
                  plVar30 = local_258;
                }
              }
              puVar22 = (ulonglong *)FUN_144a7a2cc(plVar30);
              plVar30 = local_258;
              if (puVar22 != (ulonglong *)0x0) {
                plVar30 = (longlong *)*plVar35;
                cVar12 = (char)plVar30[3];
                if (*(char *)((longlong)puVar22 + 0x13) == cVar12) {
                  if (cVar12 == '\x02') {
LAB_1438bcfe3:
                    (**(code **)(*plVar30 + 0x10))(plVar30,&local_e8);
                    uVar43 = _DAT_14cb271b0;
                    iVar17 = DAT_14cb271b0;
                    uVar34 = _DAT_14cb271b0 & 0xffffffff;
                    _DAT_14cb271b0 = CONCAT44(DAT_14cb271b4,DAT_14cb271b0 + 1);
                    if (DAT_14cb271b4 == iVar17) {
                      FUN_141053524(&DAT_14cb271a8,uVar43 & 0xffffffff);
                    }
                    puVar33 = DAT_14cb271a8;
                    memmove(DAT_14cb271a8 + 1,DAT_14cb271a8,uVar34 << 3);
                    *puVar33 = local_e8;
                  }
                  else {
                    (**(code **)(*plVar30 + 0x10))(plVar30,&local_e8);
                    uVar43 = _DAT_14cb271b0;
                    lVar18 = (longlong)DAT_14cb271b0;
                    uVar45 = DAT_14cb271b0 + 1;
                    _DAT_14cb271b0 = CONCAT44(DAT_14cb271b4,uVar45);
                    if (DAT_14cb271b4 < uVar45) {
                      FUN_141053524(&DAT_14cb271a8,uVar43 & 0xffffffff);
                    }
                    DAT_14cb271a8[lVar18] = local_e8;
                    if (cVar12 == '\x01') {
                      uVar43 = *puVar22;
                      if ((uVar43 != 0) && (DAT_14c950c29 != 0)) {
                        FUN_1456cec3c(uVar43);
                      }
                      FUN_1402a5b14(local_230,&local_e8);
                      puVar33 = puStack_e0;
                      *puStack_e0 = uVar43;
                      if (DAT_14c950c29 == 1 && uVar43 != 0) {
                        FUN_1456cec3c(uVar43);
                        uVar43 = *puVar33;
                      }
                      bVar14 = DAT_14c950c29;
                      *(undefined4 *)(puVar33 + 1) = 0xffffffff;
                      local_f8 = CONCAT44(local_f8._4_4_,(undefined4)local_e8);
                      if (((bVar14 & 1) != 0) && (uVar43 != 0)) {
                        FUN_1456cec3c(uVar43);
                      }
                      uVar45 = ((uint)(uVar43 >> 0x14) & 0xffff ^ (uint)(uVar43 >> 4)) * -0x7a143595
                      ;
                      uVar45 = (uVar45 >> 0xd ^ uVar45) * -0x3d4d51cb;
                      uVar45 = uVar45 >> 0x10 ^ uVar45;
                      local_278 = 0;
                      cVar12 = FUN_1402a5300(local_230,uVar45,puVar33,&local_f8);
                      if (cVar12 == '\0') {
                        uVar16 = (int)local_258[0xc9] - *(int *)((longlong)local_258 + 0x674);
                        iVar17 = 1;
                        if (3 < uVar16) {
                          uVar43 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
                          lVar18 = 0x3f;
                          if (uVar43 != 0) {
                            for (; uVar43 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                            }
                          }
                          iVar17 = 1 << ((byte)lVar18 & 0x1f);
                        }
                        if (((int)uVar16 < 1) || (iVar17 <= (int)local_258[0xd1])) {
                          uVar45 = (int)local_258[0xd1] - 1U & uVar45;
                          *(uint *)((longlong)puVar33 + 0xc) = uVar45;
                          plVar30 = (longlong *)local_258[0xd0];
                          if ((longlong *)local_258[0xd0] == (longlong *)0x0) {
                            plVar30 = local_238;
                          }
                          *(undefined4 *)(puVar33 + 1) =
                               *(undefined4 *)
                                ((longlong)plVar30 +
                                ((longlong)(int)local_258[0xd1] - 1U & (longlong)(int)uVar45) * 4);
                          plVar30 = (longlong *)local_258[0xd0];
                          if ((longlong *)local_258[0xd0] == (longlong *)0x0) {
                            plVar30 = local_238;
                          }
                          *(undefined4 *)
                           ((longlong)plVar30 +
                           ((longlong)(int)local_258[0xd1] - 1U & (longlong)(int)uVar45) * 4) =
                               (undefined4)local_f8;
                        }
                        else {
                          *(int *)(local_258 + 0xd1) = iVar17;
                          FUN_1402a6322(local_230);
                        }
                      }
                    }
                  }
                }
                else if ((cVar12 == '\x02') && (*(char *)((longlong)puVar22 + 0x12) == '\x05'))
                goto LAB_1438bcfe3;
                uVar43 = *puVar22;
                if (uVar43 != 0 && DAT_14c950c29 == 1) {
                  FUN_1456cec3c(uVar43);
                }
                if ((~DAT_14c950c29 & 1) == 0 && uVar43 != 0) {
                  FUN_1456cec3c(uVar43);
                }
                if ((uVar43 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                  FUN_1456cec3c(uVar43);
                }
                plVar30 = local_258;
                if ((int)local_258[0x95] != *(int *)((longlong)local_258 + 0x4d4)) {
                  uVar45 = ((uint)(uVar43 >> 0x14) & 0xffff ^ (uint)(uVar43 >> 4)) * -0x7a143595;
                  uVar45 = (uVar45 >> 0xd ^ uVar45) * -0x3d4d51cb;
                  plVar32 = (longlong *)local_258[0x9c];
                  if ((longlong *)local_258[0x9c] == (longlong *)0x0) {
                    plVar32 = local_1f0;
                  }
                  iVar17 = *(int *)((longlong)plVar32 +
                                   (ulonglong)
                                   ((int)local_258[0x9d] - 1U & (uVar45 >> 0x10 ^ uVar45)) * 4);
                  bVar14 = DAT_14c950c29;
                  while (iVar17 != -1) {
                    if ((uVar43 != 0) && ((bVar14 & 1) != 0)) {
                      FUN_1456cec3c(uVar43);
                      plVar30 = local_258;
                      bVar14 = DAT_14c950c29;
                    }
                    lVar18 = (longlong)iVar17;
                    uVar34 = *(ulonglong *)(plVar30[0x94] + lVar18 * 0x28);
                    if (((bVar14 & 1) != 0) && (uVar34 != 0)) {
                      FUN_1456cec3c(uVar34);
                      plVar30 = local_258;
                      bVar14 = DAT_14c950c29;
                    }
                    if ((uVar43 != 0) && ((bVar14 & 1) != 0)) {
                      FUN_1456cec3c(uVar43);
                      plVar30 = local_258;
                      bVar14 = DAT_14c950c29;
                    }
                    lVar31 = plVar30[0x94];
                    if (uVar34 == uVar43) {
                      if ((((lVar31 + lVar18 * 0x28 + 8U & 0xfffffffffffffff7) != 0) &&
                          (lVar31 = lVar31 + lVar18 * 0x28,
                          (*(byte *)((longlong)puVar22 + 0x13) & *(byte *)(lVar31 + 0x18)) != 0)) &&
                         ((longlong)*(int *)(lVar31 + 0x10) != 0)) {
                        plVar23 = *(longlong **)(lVar31 + 8);
                        plVar32 = plVar23 + (longlong)*(int *)(lVar31 + 0x10) * 3;
                        do {
                          if ((int)plVar30[0x5d] != *(int *)((longlong)plVar30 + 0x314)) {
                            lVar18 = *plVar23;
                            uVar45 = (uint)((ulonglong)lVar18 >> 0x10);
                            uVar16 = (uint)lVar18 & 0xffff;
                            plVar30 = (longlong *)local_258[100];
                            if ((longlong *)local_258[100] == (longlong *)0x0) {
                              plVar30 = local_200;
                            }
                            iVar17 = *(int *)((longlong)plVar30 +
                                             (ulonglong)
                                             ((int)local_258[0x65] - 1U &
                                             (int)((ulonglong)lVar18 >> 0x20) +
                                             ((uint)lVar18 << 0x10 | uVar16) +
                                             (uVar45 << 0x13 | uVar45 & 0xffff) + (uVar16 >> 4)) * 4
                                             );
                            plVar30 = local_258;
                            if (iVar17 != -1) {
                              do {
                                lVar31 = local_258[0x5c] + (longlong)iVar17 * 0x110;
                                if (*(longlong *)(local_258[0x5c] + (longlong)iVar17 * 0x110) ==
                                    lVar18) {
                                  if (lVar31 != -0x18 && lVar31 != 0) {
                                    *(byte *)(lVar31 + 0x4c) = *(byte *)(lVar31 + 0x4c) | 4;
                                  }
                                  break;
                                }
                                iVar17 = *(int *)(lVar31 + 0x108);
                              } while (iVar17 != -1);
                            }
                          }
                          plVar23 = plVar23 + 3;
                        } while (plVar23 != plVar32);
                      }
                      break;
                    }
                    iVar17 = *(int *)(lVar31 + 0x20 + lVar18 * 0x28);
                  }
                }
              }
              plVar35 = plVar35 + 1;
            } while (plVar35 != plVar40);
          }
          local_1f8 = uVar38;
          if ((longlong)DAT_14cb271b0 != 0) {
            local_218 = DAT_14cb271a8 + DAT_14cb271b0;
            puVar22 = DAT_14cb271a8;
            do {
              iVar17 = *(int *)(*puVar22 + 0x14);
              if (iVar17 == 0) {
LAB_1438bd6b4:
                bVar50 = false;
                uVar38 = 0;
              }
              else {
                uVar45 = *(uint *)(*puVar22 + 0x10);
                uVar38 = 0;
                bVar50 = false;
                if ((-1 < (int)uVar45) && ((int)uVar45 < DAT_14c9647dc)) {
                  puVar33 = (ulonglong *)
                            ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8));
                  if ((puVar33 == (ulonglong *)0x0) ||
                     (((int)puVar33[2] != iVar17 || ((puVar33[1] & 0x10200000) != 0))))
                  goto LAB_1438bd6b4;
                  uVar38 = *puVar33;
                  bVar50 = uVar38 != 0;
                  if ((bVar50) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(uVar38);
                    bVar50 = true;
                    plVar30 = local_258;
                  }
                }
              }
              if ((DAT_14c762764 == 0) || ((longlong)(int)plVar30[0xfb] == 0)) {
LAB_1438bd613:
                local_1d8 = uVar38;
                if ((bVar50 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c(uVar38);
                  plVar30 = local_258;
                }
                lVar18 = FUN_144a7a2cc(plVar30,&local_1d8);
                plVar30 = local_258;
                if (lVar18 != 0) {
                  if (*(char *)(lVar18 + 0x12) == '\x05') {
                    uVar13 = *(undefined1 *)(lVar18 + 0x13);
                    *(undefined1 *)(lVar18 + 0x13) = *(undefined1 *)(*puVar22 + 0x18);
                    (**(code **)(*(longlong *)*puVar22 + 8))((longlong *)*puVar22,lVar18);
                    *(undefined1 *)(lVar18 + 0x13) = uVar13;
                    plVar30 = local_258;
                  }
                  else {
                    (**(code **)(*(longlong *)*puVar22 + 8))((longlong *)*puVar22,lVar18);
                    plVar30 = local_258;
                  }
                }
              }
              else {
                puVar33 = (ulonglong *)plVar30[0xfa];
                puVar49 = puVar33 + (longlong)(int)plVar30[0xfb] * 2;
                bVar11 = true;
                local_1e8 = puVar22;
                do {
                  uVar43 = puVar33[1];
                  if (uVar43 != 0) {
                    if ((DAT_14c950c29 & bVar50) == 1) {
                      FUN_1456cec3c(uVar38);
                      uVar43 = puVar33[1];
                      plVar30 = local_258;
                    }
                    if (uVar43 == uVar38) {
                      uVar43 = *puVar33;
                      if ((uVar43 != 0 & DAT_14c950c29) == 1) {
                        FUN_1456cec3c(uVar43);
                        plVar30 = local_258;
                      }
                      if ((uVar43 != 0 & DAT_14c950c29) == 1) {
                        FUN_1456cec3c(uVar43);
                        plVar30 = local_258;
                      }
                      if ((int)plVar30[0xc9] != *(int *)((longlong)plVar30 + 0x674)) {
                        uVar45 = ((uint)(uVar43 >> 0x14) & 0xffff ^ (uint)(uVar43 >> 4)) *
                                 -0x7a143595;
                        uVar45 = (uVar45 >> 0xd ^ uVar45) * -0x3d4d51cb;
                        plVar40 = (longlong *)plVar30[0xd0];
                        if ((longlong *)plVar30[0xd0] == (longlong *)0x0) {
                          plVar40 = local_238;
                        }
                        bVar14 = DAT_14c950c29;
                        for (iVar17 = *(int *)((longlong)plVar40 +
                                              (ulonglong)
                                              ((int)plVar30[0xd1] - 1U & (uVar45 >> 0x10 ^ uVar45))
                                              * 4); iVar17 != -1;
                            iVar17 = *(int *)(*local_230 + 8 + (longlong)iVar17 * 0x10)) {
                          if ((uVar43 != 0 & bVar14) == 1) {
                            FUN_1456cec3c(uVar43);
                            plVar30 = local_258;
                            bVar14 = DAT_14c950c29;
                          }
                          uVar34 = *(ulonglong *)(*local_230 + (longlong)iVar17 * 0x10);
                          if (((bVar14 & 1) != 0) && (uVar34 != 0)) {
                            local_210 = uVar34;
                            FUN_1456cec3c(uVar34);
                            uVar34 = local_210;
                            plVar30 = local_258;
                            bVar14 = DAT_14c950c29;
                          }
                          if ((uVar43 != 0 & bVar14) == 1) {
                            local_210 = uVar34;
                            FUN_1456cec3c(uVar43);
                            uVar34 = local_210;
                            plVar30 = local_258;
                            bVar14 = DAT_14c950c29;
                          }
                          if (uVar34 == uVar43) goto LAB_1438bd4ed;
                        }
                      }
                      iVar17 = -1;
LAB_1438bd4ed:
                      bVar11 = (bool)(bVar11 & iVar17 == -1);
                    }
                  }
                  puVar33 = puVar33 + 2;
                } while (puVar33 != puVar49);
                puVar22 = local_1e8;
                if (bVar11) goto LAB_1438bd613;
              }
              puVar22 = puVar22 + 1;
            } while (puVar22 != local_218);
          }
          plVar40 = local_220;
          plVar32 = local_228;
          uVar43 = _DAT_14cb271b0;
          FUN_140ffc04b(DAT_14cb271a8);
          uVar38 = _DAT_14cb271b0 >> 0x20;
          _DAT_14cb271b0 = _DAT_14cb271b0 & 0xffffffff00000000;
          if (((longlong)uVar43 < 0) && ((int)uVar38 != 0)) {
            FUN_147f9883e(&DAT_14cb271a8);
          }
          FUN_1438be736();
          lVar18 = plVar32[0x36];
          plVar30 = local_258;
          if ((longlong)(int)lVar18 != 0) {
            lVar31 = plVar32[0x35];
            lVar48 = 0;
            do {
              iVar17 = *(int *)(lVar31 + 0x14 + lVar48);
              if (((((iVar17 != 0) && (uVar45 = *(uint *)(lVar31 + 0x10 + lVar48), -1 < (int)uVar45)
                    ) && ((int)uVar45 < DAT_14c9647dc)) &&
                  ((plVar35 = (longlong *)
                              ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8)),
                   plVar35 != (longlong *)0x0 && ((int)plVar35[2] == iVar17)))) &&
                 (((*(uint *)(plVar35 + 1) & 0x10200000) == 0 && (lVar8 = *plVar35, lVar8 != 0)))) {
                local_1e0 = lVar8;
                if (DAT_14c950c29 == 1) {
                  FUN_1456cec3c(lVar8);
                }
                lVar24 = FUN_144a7a2cc();
                plVar30 = local_258;
                if (lVar24 == 0) {
                  bVar14 = *(byte *)(lVar8 + 0x48);
                  if (bVar14 < 2) {
                    uVar54 = 0;
                    uVar56 = 0;
                    uVar58 = 0;
                    uVar53 = 0;
                  }
                  else {
                    uVar58 = (undefined4)DAT_14c8464e8;
                    uVar53 = DAT_14c8464e8._4_4_;
                    if (bVar14 == 2) {
                      uVar54 = 0;
                      uVar56 = 0;
                    }
                    else {
                      uVar54 = (undefined4)DAT_14c8464f0;
                      uVar56 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                    }
                  }
                  *(ulonglong *)(lVar31 + 0x18 + lVar48) =
                       CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  *(ulonglong *)(lVar31 + 0x20 + lVar48) = CONCAT44(uVar53,uVar58);
                  *(ulonglong *)(lVar31 + 0x28 + lVar48) = CONCAT44(uVar56,uVar54);
                  *(byte *)(lVar31 + 0x30 + lVar48) = bVar14;
                }
                else {
                  if (*(char *)(lVar24 + 0x13) == '\x01') {
                    bVar14 = *(byte *)(lVar24 + 0x50);
                    uVar10 = CONCAT14(local_e8._7_1_,*(undefined4 *)(lVar24 + 0x54));
                    local_e8 = CONCAT44((int)((uint5)uVar10 >> 8),*(undefined4 *)(lVar24 + 0x51));
                    uVar58 = (int)*(undefined8 *)(lVar24 + 0x38);
                    uVar53 = (int)((ulonglong)*(undefined8 *)(lVar24 + 0x38) >> 0x20);
                    uVar54 = (int)*(undefined8 *)(lVar24 + 0x40);
                    uVar56 = (int)((ulonglong)*(undefined8 *)(lVar24 + 0x40) >> 0x20);
                    uVar57 = *(undefined8 *)(lVar24 + 0x48);
                  }
                  else {
                    bVar14 = *(byte *)(lVar24 + 0x50);
                    uVar58 = (undefined4)DAT_14c8464e0;
                    uVar53 = DAT_14c8464e0._4_4_;
                    if (bVar14 < 2) {
                      uVar54 = 0;
                      uVar56 = 0;
                    }
                    else {
                      uVar54 = (undefined4)DAT_14c8464e8;
                      uVar56 = DAT_14c8464e8._4_4_;
                      uVar57 = DAT_14c8464f0;
                      if (bVar14 != 2) goto LAB_1438bd889;
                    }
                    uVar57 = 0;
                  }
LAB_1438bd889:
                  *(ulonglong *)(lVar31 + 0x18 + lVar48) = CONCAT44(uVar53,uVar58);
                  *(ulonglong *)(lVar31 + 0x20 + lVar48) = CONCAT44(uVar56,uVar54);
                  *(undefined8 *)(lVar31 + 0x28 + lVar48) = uVar57;
                  *(byte *)(lVar31 + 0x30 + lVar48) = bVar14;
                  uVar58 = (undefined4)local_e8;
                  *(undefined4 *)(lVar31 + 0x31 + lVar48) = uVar58;
                  *(undefined4 *)(lVar31 + 0x34 + lVar48) = local_e8._3_4_;
                }
              }
              lVar48 = lVar48 + 0x38;
            } while ((longlong)(int)lVar18 * 0x38 - lVar48 != 0);
          }
          if ((*(byte *)((longlong)plVar32 + 0x194) & 1) != 0) {
            uVar16 = (int)local_1f8 - 2;
            goto LAB_1438bde16;
          }
        }
      }
      uVar38 = (ulonglong)local_240 & 0xffffffff;
      puVar21 = (uint *)((longlong)local_240 + -1);
    } while (0 < (longlong)local_240);
  }
  iVar17 = (int)plVar30[0xb9];
  if (iVar17 == 0) {
    uVar43 = 1;
    uVar38 = 0;
    iVar47 = 0;
    iVar15 = 0;
  }
  else {
    puVar21 = (uint *)plVar30[0xb8];
    if ((uint *)plVar30[0xb8] == (uint *)0x0) {
      puVar21 = local_208;
    }
    uVar45 = *puVar21;
    if (uVar45 == 0) {
      iVar15 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar15 = iVar17 + -1;
      }
      uVar38 = 0;
      uVar43 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar43 = uVar38;
      }
      iVar47 = 0;
      do {
        if (uVar43 == uVar38) goto LAB_1438bdf3e;
        iVar47 = iVar47 + 0x20;
        uVar45 = puVar21[uVar38 + 1];
        uVar38 = uVar38 + 1;
      } while (uVar45 == 0);
    }
    else {
      uVar38 = 0;
      iVar47 = 0;
    }
    uVar43 = (ulonglong)(-uVar45 & uVar45);
    uVar34 = uVar43 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar15 = (iVar47 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar15) {
      iVar15 = iVar17;
    }
  }
  if (iVar15 != iVar17) {
    uVar45 = 0xffffffff;
    do {
      lVar18 = *local_248 + (longlong)iVar15 * 0x70;
      bVar14 = *(byte *)(*local_248 + 0x1b + (longlong)iVar15 * 0x70);
      if (bVar14 < 8) {
        if (bVar14 == 0) {
LAB_1438be01d:
          *(undefined4 *)(lVar18 + 0x60) = 0;
        }
        if (bVar14 != 1) goto LAB_1438be02a;
      }
      else {
        if ((bVar14 == 0x10) || (bVar14 == 8)) goto LAB_1438be01d;
LAB_1438be02a:
        *(undefined4 *)(lVar18 + 100) = 0;
      }
      *(undefined8 *)(lVar18 + 0x11) = 0x1000000000000;
      *(undefined1 *)(lVar18 + 0x19) = 0;
      uVar45 = uVar45 & ~(uint)uVar43;
      puVar21 = (uint *)local_258[0xb8];
      if ((uint *)local_258[0xb8] == (uint *)0x0) {
        puVar21 = local_208;
      }
      iVar29 = (int)local_258[0xb9];
      iVar15 = (int)uVar38;
      lVar18 = (longlong)iVar15;
      uVar16 = puVar21[lVar18] & uVar45;
      if (uVar16 == 0) {
        iVar41 = iVar29 + 0x1e;
        if (-1 < iVar29 + -1) {
          iVar41 = iVar29 + -1;
        }
        iVar41 = iVar41 >> 5;
        iVar47 = iVar47 + 0x20;
        iVar28 = iVar41;
        if (iVar41 < iVar15) {
          iVar28 = iVar15;
        }
        if (iVar15 < iVar41) {
          lVar31 = 0;
          do {
            uVar16 = puVar21[lVar18 + lVar31 + 1];
            if (uVar16 != 0) {
              uVar38 = (ulonglong)(iVar15 + (int)lVar31 + 1);
              uVar45 = 0xffffffff;
              goto LAB_1438be0bd;
            }
            iVar47 = iVar47 + 0x20;
            lVar31 = lVar31 + 1;
          } while (iVar28 - lVar18 != lVar31);
          uVar45 = 0xffffffff;
          lVar18 = (longlong)iVar28;
        }
        uVar38 = lVar18 + 1U & 0xffffffff;
        iVar15 = iVar29;
      }
      else {
LAB_1438be0bd:
        uVar43 = (ulonglong)(-uVar16 & uVar16);
        uVar34 = uVar43 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar15 = (iVar47 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar29 <= iVar15) {
          iVar15 = iVar29;
        }
      }
    } while (iVar15 != iVar17);
  }
LAB_1438bdf3e:
  plVar30 = local_258 + 0xd2;
  puVar21 = (uint *)(local_258 + 0xd4);
  iVar17 = (int)local_258[0xd7];
  if (iVar17 == 0) {
    uVar43 = 1;
    uVar38 = 0;
    iVar47 = 0;
    iVar15 = 0;
  }
  else {
    puVar26 = (uint *)local_258[0xd6];
    if ((uint *)local_258[0xd6] == (uint *)0x0) {
      puVar26 = puVar21;
    }
    uVar45 = *puVar26;
    if (uVar45 == 0) {
      iVar15 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar15 = iVar17 + -1;
      }
      uVar38 = 0;
      uVar43 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar43 = uVar38;
      }
      iVar47 = 0;
      do {
        if (uVar43 == uVar38) goto LAB_1438be114;
        iVar47 = iVar47 + 0x20;
        uVar45 = puVar26[uVar38 + 1];
        uVar38 = uVar38 + 1;
      } while (uVar45 == 0);
    }
    else {
      uVar38 = 0;
      iVar47 = 0;
    }
    uVar43 = (ulonglong)(-uVar45 & uVar45);
    uVar34 = uVar43 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar15 = (iVar47 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar15) {
      iVar15 = iVar17;
    }
  }
  if (iVar15 != iVar17) {
    uVar45 = 0xffffffff;
    do {
      uVar34 = *(ulonglong *)(*plVar30 + (longlong)iVar15 * 0x10);
      if (uVar34 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar34);
      }
      local_e8 = uVar34;
      if ((uVar34 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(uVar34);
      }
      FUN_140c7abd2(local_248,&local_e8);
      uVar45 = uVar45 & ~(uint)uVar43;
      puVar26 = (uint *)local_258[0xd6];
      if ((uint *)local_258[0xd6] == (uint *)0x0) {
        puVar26 = puVar21;
      }
      iVar29 = (int)local_258[0xd7];
      iVar15 = (int)uVar38;
      lVar18 = (longlong)iVar15;
      uVar16 = puVar26[lVar18] & uVar45;
      if (uVar16 == 0) {
        iVar41 = iVar29 + 0x1e;
        if (-1 < iVar29 + -1) {
          iVar41 = iVar29 + -1;
        }
        iVar41 = iVar41 >> 5;
        iVar47 = iVar47 + 0x20;
        iVar28 = iVar41;
        if (iVar41 < iVar15) {
          iVar28 = iVar15;
        }
        if (iVar15 < iVar41) {
          lVar31 = 0;
          do {
            uVar16 = puVar26[lVar18 + lVar31 + 1];
            if (uVar16 != 0) {
              uVar38 = (ulonglong)(iVar15 + (int)lVar31 + 1);
              uVar45 = 0xffffffff;
              goto LAB_1438be4c1;
            }
            iVar47 = iVar47 + 0x20;
            lVar31 = lVar31 + 1;
          } while (iVar28 - lVar18 != lVar31);
          uVar45 = 0xffffffff;
          iVar15 = iVar28;
        }
        uVar38 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar29;
      }
      else {
LAB_1438be4c1:
        uVar43 = (ulonglong)(-uVar16 & uVar16);
        uVar34 = uVar43 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar15 = (iVar47 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar29 <= iVar15) {
          iVar15 = iVar29;
        }
      }
    } while (iVar15 != iVar17);
  }
LAB_1438be114:
  FUN_1438be736(plVar30);
  *(float *)((longlong)local_258 + 0x83c) = fVar59;
  plVar30 = local_258;
  if ((int)local_258[0xdd] != *(int *)((longlong)local_258 + 0x714)) {
    plVar40 = local_258 + 0xe3;
    if ((longlong *)local_258[0xe4] != (longlong *)0x0) {
      plVar40 = (longlong *)local_258[0xe4];
    }
    iVar17 = (int)local_258[0xe5];
    iVar15 = iVar17 + 3;
    if (-1 < iVar17) {
      iVar15 = iVar17;
    }
    if ((int)local_258[0xdd] - *(int *)((longlong)local_258 + 0x714) < iVar15 >> 2) {
      iVar17 = (int)local_258[0xe1];
      if (iVar17 != 0) {
        puVar21 = (uint *)local_258[0xe0];
        if ((uint *)local_258[0xe0] == (uint *)0x0) {
          puVar21 = (uint *)(local_258 + 0xde);
        }
        uVar45 = *puVar21;
        if (uVar45 == 0) {
          iVar15 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar15 = iVar17 + -1;
          }
          uVar38 = 0;
          uVar43 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar43 = uVar38;
          }
          iVar15 = 0;
          do {
            if (uVar43 == uVar38) goto LAB_1438be19e;
            iVar15 = iVar15 + 0x20;
            uVar45 = puVar21[uVar38 + 1];
            uVar38 = uVar38 + 1;
          } while (uVar45 == 0);
        }
        else {
          uVar38 = 0;
          iVar15 = 0;
        }
        uVar34 = (ulonglong)(-uVar45 & uVar45);
        uVar43 = uVar34 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar43 != 0) {
          for (; uVar43 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar47 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar47 < iVar17) {
          uVar45 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)plVar40 +
             (longlong)*(int *)(local_258[0xdc] + 0x34 + (longlong)iVar47 * 0x38) * 4) = 0xffffffff;
            uVar45 = ~(uint)uVar34 & uVar45;
            puVar21 = (uint *)local_258[0xe0];
            if ((uint *)local_258[0xe0] == (uint *)0x0) {
              puVar21 = (uint *)(local_258 + 0xde);
            }
            iVar29 = (int)local_258[0xe1];
            iVar47 = (int)uVar38;
            lVar18 = (longlong)iVar47;
            uVar16 = puVar21[lVar18] & uVar45;
            if (uVar16 == 0) {
              iVar41 = iVar29 + 0x1e;
              if (-1 < iVar29 + -1) {
                iVar41 = iVar29 + -1;
              }
              iVar41 = iVar41 >> 5;
              iVar15 = iVar15 + 0x20;
              iVar28 = iVar41;
              if (iVar41 < iVar47) {
                iVar28 = iVar47;
              }
              if (iVar47 < iVar41) {
                lVar31 = 0;
                do {
                  uVar16 = puVar21[lVar18 + lVar31 + 1];
                  if (uVar16 != 0) {
                    uVar38 = (ulonglong)(iVar47 + (int)lVar31 + 1);
                    uVar45 = 0xffffffff;
                    goto LAB_1438be6bd;
                  }
                  iVar15 = iVar15 + 0x20;
                  lVar31 = lVar31 + 1;
                } while (iVar28 - lVar18 != lVar31);
                uVar45 = 0xffffffff;
                iVar47 = iVar28;
              }
              uVar38 = (ulonglong)(iVar47 + 1);
              iVar47 = iVar29;
            }
            else {
LAB_1438be6bd:
              uVar34 = (ulonglong)(-uVar16 & uVar16);
              uVar43 = uVar34 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar43 != 0) {
                for (; uVar43 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar47 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar29 <= iVar47) {
                iVar47 = iVar29;
              }
            }
          } while (iVar47 != iVar17);
        }
      }
    }
    else if (0 < iVar17) {
      lVar18 = 0;
      do {
        *(undefined4 *)((longlong)plVar40 + lVar18 * 4) = 0xffffffff;
        lVar18 = lVar18 + 1;
      } while (lVar18 < (int)local_258[0xe5]);
    }
LAB_1438be19e:
    plVar40 = local_258 + 0xdc;
    puVar21 = (uint *)(local_258 + 0xde);
    iVar17 = (int)local_258[0xe1];
    if (iVar17 == 0) {
      uVar43 = 0;
      uVar38 = 1;
      iVar15 = 0;
      iVar47 = 0;
    }
    else {
      puVar26 = (uint *)local_258[0xe0];
      if ((uint *)local_258[0xe0] == (uint *)0x0) {
        puVar26 = puVar21;
      }
      uVar45 = *puVar26;
      if (uVar45 == 0) {
        iVar15 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar15 = iVar17 + -1;
        }
        uVar43 = 0;
        uVar38 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar38 = uVar43;
        }
        iVar47 = 0;
        do {
          if (uVar38 == uVar43) goto LAB_1438be336;
          iVar47 = iVar47 + 0x20;
          uVar45 = puVar26[uVar43 + 1];
          uVar43 = uVar43 + 1;
        } while (uVar45 == 0);
      }
      else {
        uVar43 = 0;
        iVar47 = 0;
      }
      uVar38 = (ulonglong)(-uVar45 & uVar45);
      uVar34 = uVar38 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar15 = (iVar47 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar17 <= iVar15) {
        iVar15 = iVar17;
      }
    }
    if (iVar15 < iVar17) {
      uVar45 = 0xffffffff;
      do {
        plVar32 = *(longlong **)(*plVar40 + 0x10 + (longlong)iVar15 * 0x38);
        if (plVar32 != (longlong *)0x0) {
          LOCK();
          plVar35 = plVar32 + 1;
          *(int *)plVar35 = (int)*plVar35 + -1;
          UNLOCK();
          if ((int)*plVar35 == 0) {
            (**(code **)*plVar32)(plVar32);
            LOCK();
            piVar1 = (int *)((longlong)plVar32 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar30 = local_258;
            if (*piVar1 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
              plVar30 = local_258;
            }
          }
        }
        uVar45 = uVar45 & ~(uint)uVar38;
        puVar26 = (uint *)plVar30[0xe0];
        if ((uint *)plVar30[0xe0] == (uint *)0x0) {
          puVar26 = puVar21;
        }
        iVar17 = (int)plVar30[0xe1];
        iVar15 = (int)uVar43;
        lVar18 = (longlong)iVar15;
        uVar16 = puVar26[lVar18] & uVar45;
        if (uVar16 == 0) {
          iVar29 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar29 = iVar17 + -1;
          }
          iVar29 = iVar29 >> 5;
          iVar41 = iVar29;
          if (iVar29 < iVar15) {
            iVar41 = iVar15;
          }
          if (iVar29 <= iVar15) break;
          lVar31 = 0;
          while( true ) {
            iVar47 = iVar47 + 0x20;
            uVar16 = (puVar26 + lVar18 + 1)[lVar31];
            if (uVar16 != 0) break;
            lVar31 = lVar31 + 1;
            if (iVar41 - lVar18 == lVar31) goto LAB_1438be336;
          }
          uVar43 = (ulonglong)(iVar15 + (int)lVar31 + 1);
          uVar45 = 0xffffffff;
        }
        uVar38 = (ulonglong)(-uVar16 & uVar16);
        uVar34 = uVar38 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar15 = (iVar47 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      } while (iVar15 < iVar17);
    }
LAB_1438be336:
    *(undefined4 *)(plVar30 + 0xdd) = 0;
    if (*(int *)((longlong)plVar30 + 0x6ec) < 0) {
      FUN_144748838(plVar40,0);
      plVar30 = local_258;
    }
    plVar30[0xe2] = 0xffffffff;
    *(undefined4 *)(plVar30 + 0xe1) = 0;
  }
  *(byte *)(plVar30 + 0x106) = *(byte *)(plVar30 + 0x106) & 0xfe;
  local_278 = param_5;
  FUN_143775652(plVar30,local_220,param_3,local_249);
  if ((local_c0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438be736 FUN_1438be736 body=552 status=ok
// SIG undefined FUN_1438be736(void)

void FUN_1438be736(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = (int)param_1[9];
    iVar13 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar13 = iVar2;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar13 >> 2) {
      iVar2 = (int)param_1[5];
      if (iVar2 == 0) {
        uVar10 = 0;
        uVar12 = 1;
        iVar13 = 0;
        iVar9 = 0;
      }
      else {
        puVar11 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 2);
        }
        uVar8 = *puVar11;
        if (uVar8 == 0) {
          iVar13 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar13 = iVar2 + -1;
          }
          uVar10 = 0;
          uVar12 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar12 = uVar10;
          }
          iVar9 = 0;
          do {
            if (uVar12 == uVar10) goto LAB_1438be8d2;
            iVar9 = iVar9 + 0x20;
            uVar8 = puVar11[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar10 = 0;
          iVar9 = 0;
        }
        uVar12 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar12 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar13) {
          iVar13 = iVar2;
        }
      }
      if (iVar13 != iVar2) {
        uVar8 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0xc + (longlong)iVar13 * 0x10) * 4) =
               0xffffffff;
          uVar8 = ~(uint)uVar12 & uVar8;
          puVar11 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 2);
          }
          iVar3 = (int)param_1[5];
          iVar13 = (int)uVar10;
          lVar15 = (longlong)iVar13;
          uVar7 = puVar11[lVar15] & uVar8;
          if (uVar7 == 0) {
            iVar5 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar5 = iVar3 + -1;
            }
            iVar5 = iVar5 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar6 = iVar5;
            if (iVar5 < iVar13) {
              iVar6 = iVar13;
            }
            if (iVar13 < iVar5) {
              lVar14 = 0;
              do {
                uVar7 = puVar11[lVar15 + lVar14 + 1];
                if (uVar7 != 0) {
                  uVar10 = (ulonglong)(iVar13 + (int)lVar14 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_1438be89d;
                }
                iVar9 = iVar9 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar6 - lVar15 != lVar14);
              uVar8 = 0xffffffff;
              iVar13 = iVar6;
            }
            uVar10 = (ulonglong)(iVar13 + 1);
            iVar13 = iVar3;
          }
          else {
LAB_1438be89d:
            uVar12 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar12 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar13) {
              iVar13 = iVar3;
            }
          }
        } while (iVar13 != iVar2);
      }
    }
    else if (0 < iVar2) {
      lVar15 = 0;
      do {
        *(undefined4 *)((longlong)plVar4 + lVar15 * 4) = 0xffffffff;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)param_1[9]);
    }
LAB_1438be8d2:
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1438be95e FUN_1438be95e body=49 status=ok
// SIG undefined FUN_1438be95e(void)

void FUN_1438be95e(void)

{
  FUN_140ffc04b(DAT_14cb271a8,DAT_14cb271b0);
  if (DAT_14cb271a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1438be990 FUN_1438be990 body=2452 status=ok
// SIG undefined FUN_1438be990(void)

void FUN_1438be990(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong *local_70;
  uint *local_68;
  longlong local_60;
  undefined1 local_54 [4];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (uint *)(param_2 + 2);
  uVar5 = *(uint *)(param_2 + 5);
  uVar22 = (ulonglong)uVar5;
  local_78 = uVar22;
  local_70 = param_2;
  if (DAT_14c76276c == 0) {
    if (uVar5 == 0) {
      uVar23 = 1;
      uVar26 = 0;
      iVar15 = 0;
      uVar24 = 0;
    }
    else {
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = local_68;
      }
      uVar9 = *puVar7;
      if (uVar9 == 0) {
        iVar15 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar15 = uVar5 - 1;
        }
        uVar26 = 0;
        uVar24 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar24 = uVar26;
        }
        iVar15 = 0;
        do {
          if (uVar24 == uVar26) goto LAB_1438bf0c2;
          iVar15 = iVar15 + 0x20;
          uVar9 = puVar7[uVar26 + 1];
          uVar26 = uVar26 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar26 = 0;
        iVar15 = 0;
      }
      uVar23 = (ulonglong)(-uVar9 & uVar9);
      uVar24 = uVar23 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      uVar9 = (iVar15 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      uVar24 = (ulonglong)uVar9;
      if ((int)uVar5 <= (int)uVar9) {
        uVar24 = uVar22;
      }
    }
    if ((uint)uVar24 != uVar5) {
      uVar5 = 0xffffffff;
      do {
        lVar21 = *(longlong *)(*param_2 + (longlong)(int)uVar24 * 0x10);
        if (lVar21 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar21);
        }
        local_50 = lVar21;
        if ((lVar21 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(lVar21);
        }
        FUN_140c7abd2(param_1 + 0x5a0,&local_50);
        uVar5 = uVar5 & ~(uint)uVar23;
        puVar7 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar7 = local_68;
        }
        uVar9 = *(uint *)(param_2 + 5);
        iVar20 = (int)uVar26;
        lVar21 = (longlong)iVar20;
        uVar25 = puVar7[lVar21] & uVar5;
        if (uVar25 == 0) {
          iVar16 = uVar9 + 0x1e;
          if (-1 < (int)(uVar9 - 1)) {
            iVar16 = uVar9 - 1;
          }
          iVar16 = iVar16 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar16;
          if (iVar16 < iVar20) {
            iVar13 = iVar20;
          }
          if (iVar20 < iVar16) {
            lVar19 = 0;
            do {
              uVar25 = puVar7[lVar21 + lVar19 + 1];
              if (uVar25 != 0) {
                uVar26 = (ulonglong)(iVar20 + (int)lVar19 + 1);
                uVar5 = 0xffffffff;
                goto LAB_1438bf1c6;
              }
              iVar15 = iVar15 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar13 - lVar21 != lVar19);
            uVar5 = 0xffffffff;
            iVar20 = iVar13;
          }
          uVar26 = (ulonglong)(iVar20 + 1);
          param_2 = local_70;
          uVar25 = uVar9;
        }
        else {
LAB_1438bf1c6:
          uVar23 = (ulonglong)(-uVar25 & uVar25);
          uVar22 = uVar23 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          uVar25 = (iVar15 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if ((int)uVar9 <= (int)uVar25) {
            uVar25 = uVar9;
          }
        }
        uVar24 = (ulonglong)uVar25;
      } while (uVar25 != (uint)local_78);
    }
  }
  else {
    if (uVar5 == 0) {
      uVar24 = 1;
      iVar15 = 0;
      uVar23 = 0;
      uVar9 = 0;
    }
    else {
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = local_68;
      }
      uVar9 = *puVar7;
      if (uVar9 == 0) {
        iVar15 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar15 = uVar5 - 1;
        }
        uVar23 = 0;
        uVar24 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar24 = uVar23;
        }
        iVar15 = 0;
        do {
          if (uVar24 == uVar23) goto LAB_1438beae7;
          iVar15 = iVar15 + 0x20;
          uVar9 = puVar7[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar9 == 0);
      }
      else {
        iVar15 = 0;
        uVar23 = 0;
      }
      uVar24 = (ulonglong)(-uVar9 & uVar9);
      uVar26 = uVar24 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      uVar9 = (iVar15 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if ((int)uVar5 <= (int)uVar9) {
        uVar9 = uVar5;
      }
    }
    if (uVar9 != uVar5) {
      local_60 = param_1 + 0x5d8;
      uVar5 = 0xffffffff;
      bVar8 = DAT_14c950c29;
      do {
        uVar26 = *(ulonglong *)(*local_70 + (longlong)(int)uVar9 * 0x10);
        if ((uVar26 != 0) && ((bVar8 & 1) != 0)) {
          FUN_1456cec3c(uVar26);
          uVar22 = local_78;
          bVar8 = DAT_14c950c29;
        }
        if ((uVar26 != 0) && ((bVar8 & 1) != 0)) {
          FUN_1456cec3c(uVar26);
          uVar22 = local_78;
          bVar8 = DAT_14c950c29;
        }
        if ((uVar26 != 0) && ((bVar8 & 1) != 0)) {
          FUN_1456cec3c(uVar26);
          uVar22 = local_78;
          bVar8 = DAT_14c950c29;
        }
        if (*(int *)(param_1 + 0x5a8) != *(int *)(param_1 + 0x5d4)) {
          uVar9 = ((uint)(uVar26 >> 0x14) & 0xffff ^ (uint)(uVar26 >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          lVar21 = *(longlong *)(param_1 + 0x5e0);
          if (*(longlong *)(param_1 + 0x5e0) == 0) {
            lVar21 = local_60;
          }
          iVar20 = *(int *)(lVar21 + (ulonglong)
                                     (*(int *)(param_1 + 0x5e8) - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4)
          ;
          while (iVar20 != -1) {
            if ((uVar26 != 0) && ((bVar8 & 1) != 0)) {
              FUN_1456cec3c(uVar26);
              uVar22 = local_78;
              bVar8 = DAT_14c950c29;
            }
            lVar21 = (longlong)iVar20 * 0x70;
            uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x5a0) + lVar21);
            if (((bVar8 & 1) != 0) && (uVar2 != 0)) {
              FUN_1456cec3c(uVar2);
              uVar22 = local_78;
              bVar8 = DAT_14c950c29;
            }
            if ((uVar26 != 0) && ((bVar8 & 1) != 0)) {
              FUN_1456cec3c(uVar26);
              uVar22 = local_78;
              bVar8 = DAT_14c950c29;
            }
            lVar19 = *(longlong *)(param_1 + 0x5a0);
            if (uVar2 == uVar26) {
              if ((lVar19 + lVar21 + 8U & 0xfffffffffffffff7) != 0) {
                lVar19 = lVar19 + lVar21;
                *(undefined8 *)(lVar19 + 0x50) = DAT_14c8464f0;
                uVar4 = DAT_14c8464e8._4_4_;
                uVar3 = (undefined4)DAT_14c8464e8;
                uVar6 = DAT_14c8464e0._4_4_;
                *(undefined4 *)(lVar19 + 0x40) = (undefined4)DAT_14c8464e0;
                *(undefined4 *)(lVar19 + 0x44) = uVar6;
                *(undefined4 *)(lVar19 + 0x48) = uVar3;
                *(undefined4 *)(lVar19 + 0x4c) = uVar4;
              }
              break;
            }
            iVar20 = *(int *)(lVar19 + 0x68 + lVar21);
          }
        }
        uVar5 = uVar5 & ~(uint)uVar24;
        puVar7 = (uint *)local_70[4];
        if ((uint *)local_70[4] == (uint *)0x0) {
          puVar7 = local_68;
        }
        uVar25 = *(uint *)(local_70 + 5);
        iVar20 = (int)uVar23;
        lVar21 = (longlong)iVar20;
        uVar9 = puVar7[lVar21] & uVar5;
        if (uVar9 == 0) {
          iVar16 = uVar25 + 0x1e;
          if (-1 < (int)(uVar25 - 1)) {
            iVar16 = uVar25 - 1;
          }
          iVar16 = iVar16 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar16;
          if (iVar16 < iVar20) {
            iVar13 = iVar20;
          }
          uVar22 = local_78;
          if (iVar20 < iVar16) {
            lVar19 = 0;
            do {
              uVar9 = puVar7[lVar21 + lVar19 + 1];
              if (uVar9 != 0) {
                uVar23 = (ulonglong)(iVar20 + (int)lVar19 + 1);
                uVar5 = 0xffffffff;
                goto LAB_1438bf019;
              }
              iVar15 = iVar15 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar13 - lVar21 != lVar19);
            uVar5 = 0xffffffff;
            lVar21 = (longlong)iVar13;
          }
          uVar23 = lVar21 + 1U & 0xffffffff;
          uVar9 = uVar25;
        }
        else {
LAB_1438bf019:
          uVar24 = (ulonglong)(-uVar9 & uVar9);
          uVar26 = uVar24 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          uVar9 = (iVar15 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if ((int)uVar25 <= (int)uVar9) {
            uVar9 = uVar25;
          }
        }
      } while (uVar9 != (uint)uVar22);
    }
LAB_1438beae7:
    plVar17 = local_70;
    plVar1 = (longlong *)(param_1 + 0x690);
    FUN_1438be736(plVar1);
    iVar15 = *(int *)(param_1 + 0x698);
    uVar5 = iVar15 - *(int *)(param_1 + 0x6c4);
    uVar9 = ((int)plVar17[1] - *(int *)((longlong)plVar17 + 0x34)) + uVar5;
    if (uVar5 < uVar9) {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar9);
      }
      uVar5 = uVar9 - iVar15;
      if (uVar5 != 0 && iVar15 <= (int)uVar9) {
        iVar20 = *(int *)(param_1 + 0x69c);
        iVar16 = iVar15;
        if (iVar20 < (int)uVar9) {
          FUN_14474875a(plVar1);
          iVar16 = *(int *)(param_1 + 0x698);
          iVar20 = *(int *)(param_1 + 0x69c);
        }
        *(uint *)(param_1 + 0x698) = iVar16 + uVar5;
        if ((uint)(iVar20 - iVar16) < uVar5) {
          FUN_1446efaca(plVar1);
        }
        plVar17 = local_70;
        if (iVar16 < (int)uVar9) {
          lVar21 = *plVar1;
          uVar22 = (ulonglong)uVar9;
          iVar20 = *(int *)(param_1 + 0x6c4);
          puVar14 = (undefined4 *)(uVar22 * 0x10 + lVar21 + -0xc);
          do {
            iVar13 = (int)uVar22;
            if (iVar20 != 0) {
              *(int *)(lVar21 + (longlong)*(int *)(param_1 + 0x6c0) * 0x10) = iVar13 + -1;
            }
            puVar14[-1] = 0xffffffff;
            if (*(int *)(param_1 + 0x6c4) < 1) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = *(undefined4 *)(param_1 + 0x6c0);
            }
            uVar22 = uVar22 - 1;
            *puVar14 = uVar6;
            *(int *)(param_1 + 0x6c0) = iVar13 + -1;
            iVar20 = *(int *)(param_1 + 0x6c4) + 1;
            *(int *)(param_1 + 0x6c4) = iVar20;
            puVar14 = puVar14 + -4;
          } while ((longlong)iVar16 < (longlong)uVar22);
        }
        if (iVar15 == 0) {
          *(uint *)(param_1 + 0x6b8) = uVar5;
          uVar25 = uVar5 + 0x1f >> 5;
          if (*(int *)(param_1 + 0x6bc) + 0x1fU >> 5 < uVar25) {
            if ((0x80 < uVar5) || (*(longlong *)(param_1 + 0x6b0) != 0)) {
              uVar18 = 0;
              if (0x80 < uVar5) {
                uVar18 = uVar25;
              }
              FUN_1446efa72(param_1 + 0x6b0,0,uVar18,4);
            }
            *(uint *)(param_1 + 0x6bc) = uVar5 + 0x1f & 0xffffffe0;
          }
          pvVar12 = *(void **)(param_1 + 0x6b0);
          if (*(void **)(param_1 + 0x6b0) == (void *)0x0) {
            pvVar12 = (void *)(param_1 + 0x6a0);
          }
          if (uVar5 < 0x101) {
            uVar25 = uVar25 + (uVar25 == 0);
          }
          memset(pvVar12,0,(ulonglong)(uVar25 << 2));
          iVar15 = *(int *)(param_1 + 0x6b8);
          iVar20 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar20 = iVar15;
          }
          plVar17 = local_70;
          if (iVar15 % 0x20 != 0) {
            pvVar12 = (void *)(param_1 + 0x6a0);
            if (*(void **)(param_1 + 0x6b0) != (void *)0x0) {
              pvVar12 = *(void **)(param_1 + 0x6b0);
            }
            bVar8 = -(char)(iVar15 % 0x20);
            *(uint *)((longlong)pvVar12 + (longlong)(iVar20 >> 5) * 4) =
                 (uint)(*(int *)((longlong)pvVar12 + (longlong)(iVar20 >> 5) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
          }
        }
        else if (-1 < (int)uVar5) {
          uVar6 = FUN_144a54ea4(param_1 + 0x6a0,uVar5);
          FUN_1447c6044(param_1 + 0x6a0,uVar6,uVar5,0);
        }
      }
      iVar15 = 1;
      if (3 < uVar9) {
        uVar5 = (uVar9 | 1) + 0xe;
        iVar15 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
          }
        }
        iVar15 = 1 << ((byte)iVar15 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x6d8) == 0) || (*(int *)(param_1 + 0x6d8) < iVar15)) {
        *(int *)(param_1 + 0x6d8) = iVar15;
        FUN_1402a6322(plVar1);
      }
    }
    iVar15 = (int)plVar17[5];
    if (iVar15 == 0) {
      uVar24 = 1;
      uVar22 = 0;
      iVar20 = 0;
      iVar16 = 0;
    }
    else {
      puVar7 = (uint *)plVar17[4];
      if ((uint *)plVar17[4] == (uint *)0x0) {
        puVar7 = local_68;
      }
      uVar5 = *puVar7;
      if (uVar5 == 0) {
        iVar20 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar20 = iVar15 + -1;
        }
        uVar22 = 0;
        uVar24 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar24 = uVar22;
        }
        iVar16 = 0;
        do {
          if (uVar24 == uVar22) goto LAB_1438bf0c2;
          iVar16 = iVar16 + 0x20;
          uVar5 = puVar7[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar22 = 0;
        iVar16 = 0;
      }
      uVar24 = (ulonglong)(-uVar5 & uVar5);
      uVar23 = uVar24 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar20 = (iVar16 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar15 <= iVar20) {
        iVar20 = iVar15;
      }
    }
    if (iVar20 != iVar15) {
      uVar5 = 0xffffffff;
      do {
        local_50 = *(longlong *)(*plVar17 + (longlong)iVar20 * 0x10);
        if ((local_50 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c();
        }
        FUN_1402a517e(plVar1,local_54,&local_50);
        uVar5 = uVar5 & ~(uint)uVar24;
        puVar7 = (uint *)plVar17[4];
        if ((uint *)plVar17[4] == (uint *)0x0) {
          puVar7 = local_68;
        }
        iVar13 = (int)plVar17[5];
        iVar20 = (int)uVar22;
        lVar21 = (longlong)iVar20;
        uVar9 = puVar7[lVar21] & uVar5;
        if (uVar9 == 0) {
          iVar10 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar10 = iVar13 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar20) {
            iVar11 = iVar20;
          }
          if (iVar20 < iVar10) {
            lVar19 = 0;
            do {
              uVar9 = puVar7[lVar21 + lVar19 + 1];
              if (uVar9 != 0) {
                uVar22 = (ulonglong)(iVar20 + (int)lVar19 + 1);
                uVar5 = 0xffffffff;
                goto LAB_1438bede3;
              }
              iVar16 = iVar16 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar11 - lVar21 != lVar19);
            uVar5 = 0xffffffff;
            iVar20 = iVar11;
          }
          uVar22 = (ulonglong)(iVar20 + 1);
          plVar17 = local_70;
          iVar20 = iVar13;
        }
        else {
LAB_1438bede3:
          uVar24 = (ulonglong)(-uVar9 & uVar9);
          uVar23 = uVar24 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar20 = (iVar16 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar13 <= iVar20) {
            iVar20 = iVar13;
          }
        }
      } while (iVar20 != iVar15);
    }
  }
LAB_1438bf0c2:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438bf325 FUN_1438bf325 body=55 status=ok
// SIG undefined FUN_1438bf325(void)

void FUN_1438bf325(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb271c8 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb271c8 = FUN_14171c317(FUN_14644ce1e,uVar1,L"EInputActionAccumulationBehavior");
  }
  return;
}



// FUNCTION 1438bf35d FUN_1438bf35d body=55 status=ok
// SIG undefined FUN_1438bf35d(void)

void FUN_1438bf35d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb272c0 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb272c0 = FUN_14171c317(FUN_14644d1fb,uVar1,L"ENormalizeInputSmoothingType");
  }
  return;
}



// FUNCTION 1438bf394 FUN_1438bf394 body=55 status=ok
// SIG undefined FUN_1438bf394(void)

void FUN_1438bf394(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb272f0 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb272f0 = FUN_14171c317(FUN_14644d2ba,uVar1,L"EDeadZoneType");
  }
  return;
}



// FUNCTION 1438bf3cb FUN_1438bf3cb body=109 status=ok
// SIG undefined FUN_1438bf3cb(void)

void FUN_1438bf3cb(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14acd4730;
  puVar1[5] = 0x3f8000003e4ccccd;
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



// FUNCTION 1438bf438 FUN_1438bf438 body=113 status=ok
// SIG undefined FUN_1438bf438(void)

void FUN_1438bf438(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14acd4ac0;
  uVar2 = DAT_14c846518;
  puVar1[5] = DAT_14c846510;
  puVar1[6] = uVar2;
  puVar1[7] = DAT_14c846520;
  return;
}



// FUNCTION 1438bf4a9 FUN_1438bf4a9 body=91 status=ok
// SIG undefined FUN_1438bf4a9(void)

void FUN_1438bf4a9(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14acd4e10;
  return;
}



// FUNCTION 1438bf504 FUN_1438bf504 body=101 status=ok
// SIG undefined FUN_1438bf504(void)

void FUN_1438bf504(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14acd5230;
  *(undefined2 *)(puVar1 + 5) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0x2a) = 1;
  return;
}



// FUNCTION 1438bf569 FUN_1438bf569 body=55 status=ok
// SIG undefined FUN_1438bf569(void)

void FUN_1438bf569(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb273b0 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb273b0 = FUN_14171c317(FUN_14644d4f5,uVar1,L"EFOVScalingType");
  }
  return;
}



// FUNCTION 1438bf5a0 FUN_1438bf5a0 body=55 status=ok
// SIG undefined FUN_1438bf5a0(void)

void FUN_1438bf5a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb273f8 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb273f8 = FUN_14171c317(FUN_14644d5d3,uVar1,L"EInputAxisSwizzle");
  }
  return;
}



// FUNCTION 1438bf5d7 FUN_1438bf5d7 body=95 status=ok
// SIG undefined FUN_1438bf5d7(void)

void FUN_1438bf5d7(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14acd69f0;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



// FUNCTION 1438bf6ce FUN_1438bf6ce body=1231 status=ok
// SIG undefined FUN_1438bf6ce(void)

void FUN_1438bf6ce(longlong param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  char cVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  cVar3 = *(char *)(param_4 + 3);
  if (cVar3 == '\0') {
    dVar9 = *param_4;
    dVar1 = param_4[1];
    dVar2 = param_4[3];
    param_2[2] = param_4[2];
    param_2[3] = dVar2;
    *param_2 = dVar9;
    param_2[1] = dVar1;
    return;
  }
  dVar9 = *param_4;
  dVar1 = param_4[1];
  dVar2 = param_4[2];
  cVar4 = *(char *)(param_1 + 0x30);
  dVar5 = dVar2;
  dVar6 = dVar1;
  dVar11 = dVar9;
  if (cVar4 == '\x01') {
    if (cVar3 == '\x03') {
      dVar8 = dVar2 * dVar2 + dVar9 * dVar9 + dVar1 * dVar1;
      if (((dVar8 != 1.0) || (NAN(dVar8))) &&
         (dVar5 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar11 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar8)) {
        dVar11 = 1.0 / SQRT(dVar8);
        dVar5 = dVar2 * dVar11;
        dVar6 = dVar1 * dVar11;
        dVar11 = dVar9 * dVar11;
      }
    }
    else {
      if (cVar3 != '\x02') {
        fVar10 = (float)dVar9;
        fVar7 = ABS(fVar10) - *(float *)(param_1 + 0x28);
        fVar13 = 0.0;
        if (0.0 <= fVar7) {
          fVar13 = fVar7;
        }
        fVar13 = fVar13 / (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x28));
        fVar7 = 1.0;
        if (fVar13 <= 1.0) {
          fVar7 = fVar13;
        }
        dVar9 = (double)((float)(-(uint)(0.0 < fVar10) & 0x3f800000 |
                                ~-(uint)(0.0 < fVar10) & -(uint)(fVar10 < 0.0) & 0xbf800000) * fVar7
                        );
        goto LAB_1438bf7ea;
      }
      dVar8 = dVar9 * dVar9 + dVar1 * dVar1;
      if ((dVar8 != 1.0) || (NAN(dVar8))) {
        dVar5 = DAT_14c8464f0;
        dVar6 = DAT_14c8464e8;
        dVar11 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar8) {
          dVar5 = 0.0;
          dVar6 = dVar1 * (1.0 / SQRT(dVar8));
          dVar11 = dVar9 * (1.0 / SQRT(dVar8));
        }
      }
      else {
        dVar5 = (double)((ulonglong)dVar2 & -(ulonglong)(dVar2 == 0.0));
      }
    }
    fVar10 = ABS((float)SQRT(dVar8)) - *(float *)(param_1 + 0x28);
    fVar13 = 0.0;
    if (0.0 <= fVar10) {
      fVar13 = fVar10;
    }
    fVar13 = fVar13 / (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x28));
    fVar10 = 1.0;
    if (fVar13 <= 1.0) {
      fVar10 = fVar13;
    }
    fVar13 = fVar10 * (float)(-(uint)(0.0 < (float)SQRT(dVar8)) & 0x3f800000);
LAB_1438bf7d7:
    dVar9 = (double)fVar13;
  }
  else {
    if (cVar4 != '\x02') {
      if (cVar4 == '\0') {
        fVar7 = (float)dVar9;
        fVar13 = *(float *)(param_1 + 0x28);
        fVar10 = 0.0;
        if (0.0 <= ABS(fVar7) - fVar13) {
          fVar10 = ABS(fVar7) - fVar13;
        }
        fVar12 = *(float *)(param_1 + 0x2c) - fVar13;
        fVar14 = 1.0;
        if (fVar10 / fVar12 <= 1.0) {
          fVar14 = fVar10 / fVar12;
        }
        dVar9 = (double)((float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                                ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000) * fVar14)
        ;
        fVar7 = (float)dVar1;
        fVar10 = 0.0;
        if (0.0 <= ABS(fVar7) - fVar13) {
          fVar10 = ABS(fVar7) - fVar13;
        }
        fVar14 = 1.0;
        if (fVar10 / fVar12 <= 1.0) {
          fVar14 = fVar10 / fVar12;
        }
        dVar1 = (double)((float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                                ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000) * fVar14)
        ;
        fVar7 = (float)dVar2;
        fVar10 = 0.0;
        if (0.0 <= ABS(fVar7) - fVar13) {
          fVar10 = ABS(fVar7) - fVar13;
        }
        fVar13 = 1.0;
        if (fVar10 / fVar12 <= 1.0) {
          fVar13 = fVar10 / fVar12;
        }
        dVar2 = (double)((float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                                ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000) * fVar13)
        ;
      }
      goto LAB_1438bf7ea;
    }
    if (cVar3 == '\x02') {
      dVar8 = dVar9 * dVar9 + dVar1 * dVar1;
      if ((dVar8 != 1.0) || (NAN(dVar8))) {
        dVar5 = DAT_14c8464f0;
        dVar6 = DAT_14c8464e8;
        dVar11 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar8) {
          dVar5 = 0.0;
          dVar6 = dVar1 * (1.0 / SQRT(dVar8));
          dVar11 = dVar9 * (1.0 / SQRT(dVar8));
        }
      }
      else {
        dVar5 = (double)((ulonglong)dVar2 & -(ulonglong)(dVar2 == 0.0));
      }
    }
    else {
      if (cVar3 != '\x03') {
        fVar13 = (float)dVar9;
        dVar9 = 0.0;
        if (*(float *)(param_1 + 0x28) <= fVar13) {
          if (*(float *)(param_1 + 0x2c) <= fVar13) {
            fVar13 = *(float *)(param_1 + 0x2c);
          }
          dVar9 = (double)fVar13;
        }
        goto LAB_1438bf7ea;
      }
      dVar8 = dVar2 * dVar2 + dVar9 * dVar9 + dVar1 * dVar1;
      if (((dVar8 != 1.0) || (NAN(dVar8))) &&
         (dVar5 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar11 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar8)) {
        dVar11 = 1.0 / SQRT(dVar8);
        dVar5 = dVar2 * dVar11;
        dVar6 = dVar1 * dVar11;
        dVar11 = dVar9 * dVar11;
      }
    }
    fVar13 = (float)SQRT(dVar8);
    dVar9 = 0.0;
    if (*(float *)(param_1 + 0x28) <= fVar13) {
      if (*(float *)(param_1 + 0x2c) <= fVar13) {
        fVar13 = *(float *)(param_1 + 0x2c);
      }
      goto LAB_1438bf7d7;
    }
  }
  dVar2 = dVar5 * dVar9;
  dVar1 = dVar6 * dVar9;
  dVar9 = dVar11 * dVar9;
LAB_1438bf7ea:
  *param_2 = dVar9;
  param_2[1] = dVar1;
  param_2[2] = dVar2;
  *(undefined1 *)(param_2 + 3) = 3;
  return;
}



// FUNCTION 1438bfb9d FUN_1438bfb9d body=55 status=ok
// SIG undefined FUN_1438bfb9d(void)

void FUN_1438bfb9d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27428 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb27428 = FUN_14171c317(FUN_14644d631,uVar1,L"ETriggerState");
  }
  return;
}



// FUNCTION 1438bfbd4 FUN_1438bfbd4 body=55 status=ok
// SIG undefined FUN_1438bfbd4(void)

void FUN_1438bfbd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27440 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb27440 = FUN_14171c317(FUN_14644cec3,uVar1,L"ETriggerEvent");
  }
  return;
}



// FUNCTION 1438bfc0b FUN_1438bfc0b body=55 status=ok
// SIG undefined FUN_1438bfc0b(void)

void FUN_1438bfc0b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27458 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb27458 = FUN_14171c317(FUN_14644d660,uVar1,L"ETriggerType");
  }
  return;
}



// FUNCTION 1438bfc42 FUN_1438bfc42 body=55 status=ok
// SIG undefined FUN_1438bfc42(void)

void FUN_1438bfc42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27470 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb27470 = FUN_14171c317(FUN_14644d68f,uVar1,L"ETriggerEventsSupported");
  }
  return;
}



// FUNCTION 1438bfc79 FUN_1438bfc79 body=137 status=ok
// SIG undefined FUN_1438bfc79(void)

void FUN_1438bfc79(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14acd76e0;
  *(undefined4 *)(puVar1 + 5) = 0x3f000000;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[6] = DAT_14c8464e0;
  puVar1[7] = uVar2;
  puVar1[8] = DAT_14c8464f0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *puVar1 = &PTR_FUN_14acd81a0;
  return;
}



// FUNCTION 1438bfd02 FUN_1438bfd02 body=137 status=ok
// SIG undefined FUN_1438bfd02(void)

void FUN_1438bfd02(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14acd76e0;
  *(undefined4 *)(puVar1 + 5) = 0x3f000000;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[6] = DAT_14c8464e0;
  puVar1[7] = uVar2;
  puVar1[8] = DAT_14c8464f0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *puVar1 = &PTR_FUN_14acd8500;
  return;
}



// FUNCTION 1438bfd8b FUN_1438bfd8b body=160 status=ok
// SIG undefined FUN_1438bfd8b(void)

void FUN_1438bfd8b(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14acd76e0;
  *(undefined4 *)(puVar1 + 5) = 0x3f000000;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[6] = DAT_14c8464e0;
  puVar1[7] = uVar2;
  puVar1[8] = DAT_14c8464f0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x54) = 0;
  *puVar1 = &PTR_FUN_14acd8900;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  return;
}



// FUNCTION 1438bfe2b FUN_1438bfe2b body=154 status=ok
// SIG undefined FUN_1438bfe2b(void)

void FUN_1438bfe2b(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14acd76e0;
  *(undefined4 *)(puVar1 + 5) = 0x3f000000;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[6] = DAT_14c8464e0;
  puVar1[7] = uVar2;
  puVar1[8] = DAT_14c8464f0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x54) = 0;
  *puVar1 = &PTR_FUN_14acd9050;
  *(undefined4 *)(puVar1 + 0xb) = 0x3e4ccccd;
  return;
}



// FUNCTION 1438bfec5 FUN_1438bfec5 body=145 status=ok
// SIG undefined FUN_1438bfec5(void)

void FUN_1438bfec5(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14acd76e0;
  *(undefined4 *)(puVar1 + 5) = 0x3f000000;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[6] = DAT_14c8464e0;
  puVar1[7] = uVar2;
  puVar1[8] = DAT_14c8464f0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *puVar1 = &PTR_FUN_14acd9840;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1438bff56 FUN_1438bff56 body=145 status=ok
// SIG undefined FUN_1438bff56(void)

void FUN_1438bff56(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14acd76e0;
  *(undefined4 *)(puVar1 + 5) = 0x3f000000;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[6] = DAT_14c8464e0;
  puVar1[7] = uVar2;
  puVar1[8] = DAT_14c8464f0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR_FUN_14acd9ba0;
  return;
}



// FUNCTION 1438bffe7 FUN_1438bffe7 body=69 status=ok
// SIG undefined FUN_1438bffe7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438bffe7(void)

{
  _DAT_14cb275f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438c0029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb27600,1);
  return;
}



// FUNCTION 1438c002c FUN_1438c002c body=743 status=ok
// SIG undefined FUN_1438c002c(void)

ulonglong FUN_1438c002c(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  byte bVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  longlong *plVar12;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x60) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x58);
    lVar7 = plVar6[(longlong)*(int *)(param_1 + 0x50) * 2];
    if (lVar7 != 0) {
      if ((longlong)*(int *)(param_1 + 0x70) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x68);
        plVar12 = plVar6 + (longlong)*(int *)(param_1 + 0x70) * 2;
        do {
          lVar5 = *plVar6;
          if ((lVar5 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar5);
          }
          if ((lVar5 != 0) && (lVar5 != lVar7)) {
            bVar1 = *(byte *)(plVar6 + 1);
            local_68 = lVar5;
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar5);
            }
            lVar5 = FUN_144a7a2cc(param_2,&local_68);
            if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x13) & bVar1) != 0)) {
              *(undefined4 *)(param_1 + 0x50) = 0;
              plVar6 = *(longlong **)(param_1 + 0x58);
              lVar7 = *plVar6;
              goto LAB_1438c0114;
            }
          }
          plVar6 = plVar6 + 2;
        } while (plVar6 != plVar12);
        plVar6 = *(longlong **)(param_1 + 0x58);
      }
LAB_1438c0114:
      if ((longlong)*(int *)(param_1 + 0x60) != 0) {
        plVar12 = plVar6 + (longlong)*(int *)(param_1 + 0x60) * 2;
        do {
          lVar5 = *plVar6;
          if ((DAT_14c950c29 == 1) && (lVar5 != 0)) {
            FUN_1456cec3c(lVar5);
          }
          if ((lVar5 != 0) && (lVar5 != lVar7)) {
            lVar2 = plVar6[1];
            local_70 = lVar5;
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar5);
            }
            lVar5 = FUN_144a7a2cc(param_2,&local_70);
            if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x13) & (byte)lVar2) != 0)) {
              *(undefined4 *)(param_1 + 0x50) = 0;
              plVar6 = *(longlong **)(param_1 + 0x58);
              goto LAB_1438c01c3;
            }
          }
          plVar6 = plVar6 + 2;
        } while (plVar6 != plVar12);
      }
      if (0 < (longlong)*(int *)(param_1 + 0x50)) {
        param_4 = param_4 + *(float *)(param_1 + 0x54);
        *(float *)(param_1 + 0x54) = param_4;
        plVar6 = *(longlong **)(param_1 + 0x58);
        if (*(float *)((longlong)plVar6 + (longlong)*(int *)(param_1 + 0x50) * 0x10 + 0xc) <=
            param_4) {
          *(undefined4 *)(param_1 + 0x50) = 0;
LAB_1438c01c3:
          lVar7 = *plVar6;
        }
      }
      local_78 = lVar7;
      if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar7);
      }
      lVar5 = FUN_144a7a2cc(param_2,&local_78);
      iVar8 = *(int *)(param_1 + 0x50);
      uVar11 = (undefined7)((ulonglong)lVar7 >> 8);
      if ((lVar5 != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x58) + 8 + (longlong)iVar8 * 0x10) &
          *(byte *)(lVar5 + 0x13)) != 0)) {
        iVar8 = iVar8 + 1;
        *(int *)(param_1 + 0x50) = iVar8;
        *(undefined4 *)(param_1 + 0x54) = 0;
        if (*(int *)(param_1 + 0x60) <= iVar8) {
          *(undefined4 *)(param_1 + 0x50) = 0;
          uVar10 = CONCAT71(uVar11,2);
          goto LAB_1438c02b8;
        }
      }
      lVar7 = DAT_14cb27608;
      uVar10 = CONCAT71(uVar11,1);
      if (0 < iVar8) goto LAB_1438c02b8;
      iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
        uVar9 = 0;
      }
      else if (iVar8 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar3 != DVar4);
      }
      else {
        uVar9 = 1;
      }
      if (*(char *)(lVar7 + uVar9) == '\x01') {
        local_80 = **(longlong **)(param_1 + 0x58);
        if ((local_80 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        lVar7 = FUN_144a7a2cc(param_2,&local_80);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x13) != '\0')) goto LAB_1438c02b8;
      }
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  uVar10 = 0;
LAB_1438c02b8:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1438c0375 FUN_1438c0375 body=170 status=ok
// SIG undefined FUN_1438c0375(void)

void FUN_1438c0375(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined4 local_34;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  iVar1 = *(int *)(param_1 + 1);
  uVar2 = *param_1;
  local_38 = iVar1;
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_140b856de(&local_40,iVar1,0);
    FUN_140b8566a(local_40,uVar2,iVar1);
  }
  local_28 = &local_40;
  local_30 = FUN_1438c5bb2;
  FUN_14032f414();
  FUN_1447a1747(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c0420 FUN_1438c0420 body=69 status=ok
// SIG undefined FUN_1438c0420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438c0420(void)

{
  _DAT_14cb276d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438c0462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb276d8,1);
  return;
}



// FUNCTION 1438c0465 FUN_1438c0465 body=170 status=ok
// SIG undefined FUN_1438c0465(void)

void FUN_1438c0465(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined4 local_34;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  iVar1 = *(int *)(param_1 + 1);
  uVar2 = *param_1;
  local_38 = iVar1;
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_140b856de(&local_40,iVar1,0);
    FUN_140b8566a(local_40,uVar2,iVar1);
  }
  local_28 = &local_40;
  local_30 = FUN_1438c5bf4;
  FUN_14032f414();
  FUN_1447a1747(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c0510 FUN_1438c0510 body=69 status=ok
// SIG undefined FUN_1438c0510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438c0510(void)

{
  _DAT_14cb276e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438c0552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb276e8,1);
  return;
}



// FUNCTION 1438c0555 FUN_1438c0555 body=140 status=ok
// SIG undefined FUN_1438c0555(void)

void FUN_1438c0555(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb27748;
  if (DAT_14cb27748 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb27748 + 1;
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
  plVar3 = DAT_14cb27730;
  if (DAT_14cb27730 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb27730 + 1;
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
  if (DAT_14cb27708 != (longlong *)0x0) {
    (**(code **)(*DAT_14cb27708 + 0x10))();
  }
  if (DAT_14cb276f8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438c05a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14cb276f8 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1438c05e2 FUN_1438c05e2 body=12 status=ok
// SIG undefined FUN_1438c05e2(void)

undefined8 FUN_1438c05e2(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x48) >> 8),
                  *(longlong *)(param_1 + 0x48) != *(longlong *)(param_1 + 0x30));
}



// FUNCTION 1438c05ee FUN_1438c05ee body=10 status=ok
// SIG undefined FUN_1438c05ee(void)

undefined8 * FUN_1438c05ee(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 1438c05f8 FUN_1438c05f8 body=4 status=ok
// SIG undefined FUN_1438c05f8(void)

undefined1 FUN_1438c05f8(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



// FUNCTION 1438c05fc FUN_1438c05fc body=8 status=ok
// SIG undefined FUN_1438c05fc(void)

undefined8 FUN_1438c05fc(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// FUNCTION 1438c0604 FUN_1438c0604 body=952 status=ok
// SIG undefined FUN_1438c0604(void)

void FUN_1438c0604(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint *puVar26;
  ulonglong uVar27;
  
  iVar4 = *(int *)(param_1 + 0x70);
  if (iVar4 == 0) {
    uVar18 = 1;
    uVar15 = 0;
    iVar17 = 0;
    iVar11 = 0;
  }
  else {
    puVar26 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar26 = (uint *)(param_1 + 0x58);
    }
    uVar23 = *puVar26;
    if (uVar23 == 0) {
      iVar11 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar11 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar18 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar18 = uVar15;
      }
      iVar17 = 0;
      do {
        if (uVar18 == uVar15) {
          return;
        }
        iVar17 = iVar17 + 0x20;
        uVar23 = puVar26[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar15 = 0;
      iVar17 = 0;
    }
    uVar18 = (ulonglong)(-uVar23 & uVar23);
    uVar25 = uVar18 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar11 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar11) {
      iVar11 = iVar4;
    }
  }
  if (iVar11 != iVar4) {
    uVar23 = 0xffffffff;
    iVar8 = iVar4;
    do {
      lVar22 = *(longlong *)(param_1 + 0x48) + (longlong)iVar11 * 0x60;
      lVar20 = *(longlong *)(param_1 + 0x48) + (longlong)iVar11 * 0x60;
      puVar26 = (uint *)(lVar20 + 0x18);
      iVar11 = *(int *)(lVar20 + 0x30);
      if (iVar11 == 0) {
        uVar27 = 1;
        uVar25 = 0;
        iVar16 = 0;
        iVar12 = 0;
      }
      else {
        puVar13 = *(uint **)(lVar22 + 0x28);
        if (*(uint **)(lVar22 + 0x28) == (uint *)0x0) {
          puVar13 = puVar26;
        }
        uVar24 = *puVar13;
        if (uVar24 == 0) {
          iVar12 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar12 = iVar11 + -1;
          }
          uVar25 = 0;
          uVar27 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar27 = uVar25;
          }
          iVar16 = 0;
          do {
            if (uVar27 == uVar25) goto LAB_1438c08d5;
            iVar16 = iVar16 + 0x20;
            uVar24 = puVar13[uVar25 + 1];
            uVar25 = uVar25 + 1;
          } while (uVar24 == 0);
        }
        else {
          uVar25 = 0;
          iVar16 = 0;
        }
        uVar27 = (ulonglong)(-uVar24 & uVar24);
        uVar3 = uVar27 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar12 = (iVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar12) {
          iVar12 = iVar11;
        }
      }
      if (iVar12 != iVar11) {
        uVar24 = 0xffffffff;
        do {
          lVar21 = *(longlong *)(lVar22 + 8);
          lVar19 = (longlong)iVar12 * 0x90;
          lVar20 = lVar21 + lVar19;
          lVar5 = *(longlong *)(lVar21 + 0x30 + lVar19);
          if (*(longlong *)(lVar21 + 0x48 + lVar19) != lVar5) {
            *(byte *)(lVar20 + 0x29) = *(byte *)(lVar20 + 0x29) | 1;
          }
          *(longlong *)(lVar20 + 0x48) = lVar5;
          uVar6 = *(undefined8 *)(lVar20 + 0x38);
          lVar21 = *(longlong *)(lVar20 + 0x40);
          if (lVar21 != 0) {
            LOCK();
            *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
            UNLOCK();
          }
          plVar7 = *(longlong **)(lVar20 + 0x58);
          *(undefined8 *)(lVar20 + 0x50) = uVar6;
          *(longlong *)(lVar20 + 0x58) = lVar21;
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
          uVar24 = uVar24 & ~(uint)uVar27;
          puVar13 = *(uint **)(lVar22 + 0x28);
          if (*(uint **)(lVar22 + 0x28) == (uint *)0x0) {
            puVar13 = puVar26;
          }
          iVar8 = *(int *)(lVar22 + 0x30);
          iVar12 = (int)uVar25;
          lVar20 = (longlong)iVar12;
          uVar14 = puVar13[lVar20] & uVar24;
          if (uVar14 == 0) {
            iVar9 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar9 = iVar8 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar16 = iVar16 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar12) {
              iVar10 = iVar12;
            }
            if (iVar12 < iVar9) {
              lVar21 = 0;
              do {
                uVar14 = puVar13[lVar20 + lVar21 + 1];
                if (uVar14 != 0) {
                  uVar25 = (ulonglong)(iVar12 + (int)lVar21 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_1438c0853;
                }
                iVar16 = iVar16 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar10 - lVar20 != lVar21);
              uVar24 = 0xffffffff;
              iVar12 = iVar10;
            }
            uVar25 = (ulonglong)(iVar12 + 1);
            iVar12 = iVar8;
          }
          else {
LAB_1438c0853:
            uVar27 = (ulonglong)(-uVar14 & uVar14);
            uVar3 = uVar27 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar12 = (iVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if (iVar8 <= iVar12) {
              iVar12 = iVar8;
            }
          }
        } while (iVar12 != iVar11);
        iVar8 = *(int *)(param_1 + 0x70);
      }
LAB_1438c08d5:
      uVar23 = uVar23 & ~(uint)uVar18;
      puVar26 = *(uint **)(param_1 + 0x68);
      if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
        puVar26 = (uint *)(param_1 + 0x58);
      }
      iVar11 = (int)uVar15;
      lVar22 = (longlong)iVar11;
      uVar24 = puVar26[lVar22] & uVar23;
      if (uVar24 == 0) {
        iVar12 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar12 = iVar8 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar16 = iVar12;
        if (iVar12 < iVar11) {
          iVar16 = iVar11;
        }
        if (iVar11 < iVar12) {
          lVar20 = 0;
          do {
            uVar24 = puVar26[lVar22 + lVar20 + 1];
            if (uVar24 != 0) {
              uVar15 = (ulonglong)(iVar11 + (int)lVar20 + 1);
              uVar23 = 0xffffffff;
              goto LAB_1438c095b;
            }
            iVar17 = iVar17 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar16 - lVar22 != lVar20);
          uVar23 = 0xffffffff;
          iVar11 = iVar16;
        }
        uVar15 = (ulonglong)(iVar11 + 1);
        iVar11 = iVar8;
      }
      else {
LAB_1438c095b:
        uVar18 = (ulonglong)(-uVar24 & uVar24);
        uVar25 = uVar18 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar11 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar11) {
          iVar11 = iVar8;
        }
      }
    } while (iVar11 != iVar4);
  }
  return;
}



// FUNCTION 1438c09c2 FUN_1438c09c2 body=617 status=ok
// SIG undefined FUN_1438c09c2(void)

undefined4 FUN_1438c09c2(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  
  iVar2 = *(int *)((longlong)param_3 + 0xc);
  FUN_144a65a1e(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_145811e2e(param_3,0);
  }
  plVar5 = (longlong *)FUN_14107a796(param_1,param_2);
  if (plVar5 != (longlong *)0x0) {
    iVar2 = (int)plVar5[5];
    if (iVar2 == 0) {
      uVar15 = 1;
      uVar10 = 0;
      iVar13 = 0;
      iVar4 = 0;
    }
    else {
      puVar6 = (uint *)plVar5[4];
      if ((uint *)plVar5[4] == (uint *)0x0) {
        puVar6 = (uint *)(plVar5 + 2);
      }
      uVar16 = *puVar6;
      if (uVar16 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar10 = 0;
        uVar15 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar15 = uVar10;
        }
        iVar13 = 0;
        do {
          if (uVar15 == uVar10) goto LAB_1438c0aa1;
          iVar13 = iVar13 + 0x20;
          uVar16 = puVar6[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar10 = 0;
        iVar13 = 0;
      }
      uVar15 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar15 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar4 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        lVar17 = *plVar5;
        lVar12 = (longlong)iVar4 * 0x90;
        lVar14 = 0x48;
        if (*(longlong *)(lVar17 + 0x48 + lVar12) == *(longlong *)(lVar17 + 0x30 + lVar12)) {
          lVar14 = 0x30;
        }
        iVar4 = (int)param_3[1];
        lVar11 = (longlong)iVar4;
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_14011bb82(param_3,iVar4);
        }
        lVar17 = lVar17 + lVar12;
        lVar12 = *param_3;
        *(undefined8 *)(lVar12 + lVar11 * 0x18) = *(undefined8 *)(lVar17 + lVar14);
        *(undefined8 *)(lVar12 + 8 + lVar11 * 0x18) = *(undefined8 *)(lVar17 + 8 + lVar14);
        lVar17 = *(longlong *)(lVar17 + 0x10 + lVar14);
        *(longlong *)(lVar12 + 0x10 + lVar11 * 0x18) = lVar17;
        if (lVar17 != 0) {
          LOCK();
          *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
          UNLOCK();
        }
        uVar16 = uVar16 & ~(uint)uVar15;
        puVar6 = (uint *)plVar5[4];
        if ((uint *)plVar5[4] == (uint *)0x0) {
          puVar6 = (uint *)(plVar5 + 2);
        }
        iVar3 = (int)plVar5[5];
        iVar4 = (int)uVar10;
        lVar17 = (longlong)iVar4;
        uVar9 = puVar6[lVar17] & uVar16;
        if (uVar9 == 0) {
          iVar7 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar7 = iVar3 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar4) {
            iVar8 = iVar4;
          }
          if (iVar4 < iVar7) {
            lVar12 = 0;
            do {
              uVar9 = puVar6[lVar17 + lVar12 + 1];
              if (uVar9 != 0) {
                uVar10 = (ulonglong)(iVar4 + (int)lVar12 + 1);
                uVar16 = 0xffffffff;
                goto LAB_1438c0bcb;
              }
              iVar13 = iVar13 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar8 - lVar17 != lVar12);
            uVar16 = 0xffffffff;
            iVar4 = iVar8;
          }
          uVar10 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar3;
        }
        else {
LAB_1438c0bcb:
          uVar15 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar15 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar4 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar4) {
            iVar4 = iVar3;
          }
        }
      } while (iVar4 != iVar2);
    }
  }
LAB_1438c0aa1:
  return (int)param_3[1];
}



// FUNCTION 1438c0c2c FUN_1438c0c2c body=2183 status=ok
// SIG undefined FUN_1438c0c2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1438c0c2c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong local_68;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == (longlong *)0x0) goto LAB_1438c0c56;
  uVar4 = (**(code **)(*param_1 + 0x328))();
  cVar3 = FUN_1463cc9c8(&DAT_14cb27688,uVar4);
  if (cVar3 == '\0') {
LAB_1438c0cab:
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x328))(param_1);
    plVar9 = (longlong *)FUN_147abc87a(&DAT_14cb27688,uVar4);
    if (plVar9 == (longlong *)0x0) goto LAB_1438c0cab;
    lVar8 = FUN_141272d48();
    if ((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_1438c0cab;
  }
  plVar6 = (longlong *)FUN_14032f648();
  lVar8 = plVar6[0x22];
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
    lVar8 = plVar6[0x22];
  }
  if ((((((*(int *)(lVar8 + 0x6c) == 0) || (uVar1 = *(uint *)(lVar8 + 0x68), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       ((plVar6 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(lVar8 + 0x6c))))) ||
      ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) || (lVar10 = *plVar6, lVar10 == 0)) {
    if (*(longlong *)(lVar8 + 0x70) != 0) {
      lVar10 = FUN_140007850(lVar8 + 0x70);
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      lVar7 = DAT_14c9647c8;
      if ((lVar10 == 0) || (cVar3 == '\0')) {
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar10 + 0xc);
          *(uint *)(lVar8 + 0x68) = uVar1;
          if (DAT_14c9647dc <= (int)uVar1) goto LAB_1438c1018;
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_1438c0efd;
        }
        *(undefined8 *)(lVar8 + 0x68) = 0;
      }
      else {
        uVar1 = *(uint *)(lVar10 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(lVar8 + 0x68) = uVar1;
            lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(lVar7 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_1438c0efd:
            iVar5 = *(int *)(lVar7 + 0x10);
            if (*(int *)(lVar7 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar5 = *(int *)(lVar7 + 0x10);
              bVar13 = iVar5 == 0;
              if (bVar13) {
                *(int *)(lVar7 + 0x10) = iVar12;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar13) {
                iVar5 = iVar12;
              }
            }
            *(int *)(lVar8 + 0x6c) = iVar5;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar8 + 0x68) = uVar1;
LAB_1438c1018:
          lVar7 = 0;
          goto LAB_1438c0efd;
        }
        if ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0) goto LAB_1438c0d39;
      }
    }
LAB_1438c0f2f:
    lVar10 = FUN_141272d48();
    if (lVar10 != 0) {
LAB_1438c0f40:
      if ((plVar9 != (longlong *)0x0) && (plVar9[2] == lVar10)) {
LAB_1438c0f4b:
        (**(code **)(*plVar9 + 0x2a0))(plVar9,param_1);
        (**(code **)(*plVar9 + 0x2a8))(plVar9);
        goto LAB_1438c0c58;
      }
      local_68 = lVar10;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar10);
      }
      plVar9 = (longlong *)FUN_1461a89fa(&local_68);
      if (plVar9 != (longlong *)0x0) {
        lVar8 = FUN_141272d48();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30)) goto LAB_1438c0f4b;
      }
    }
  }
  else {
LAB_1438c0d39:
    if (DAT_14c949118 == 0) {
      local_60 = FUN_140631fbe;
      lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar7;
      FUN_1446f470e(local_58,L"Class",1);
      local_88 = &LAB_146891e90;
      local_90 = (code *)&LAB_146273097;
      local_a0 = L"Engine";
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
      local_a8 = 0x20;
      local_b0 = 0x10000000;
      local_b8._0_4_ = 8;
      local_80 = &local_60;
      FUN_14574b4b2(lVar7);
      DAT_14c949118 = lVar7;
      if (DAT_14c951858 == 0) {
        local_80 = &local_50;
        local_50 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_14081d0ea;
        local_88 = &LAB_1468c5283;
        local_90 = FUN_142809da0;
        local_98 = L"Engine";
        local_a0 = (wchar_t *)0x400000000;
        local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
        local_b0 = 8;
        local_b8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar2 = DAT_14c951858;
      lVar7 = DAT_14c949118;
      uVar11 = FUN_1449e2fb2();
      local_b8 = L"Class";
      FUN_14574b446(uVar11,lVar7,lVar2,L"/Script/CoreUObject");
    }
    if ((((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
        (lVar7 = FUN_141272d48(), lVar7 == 0)) ||
       ((*(int *)(lVar10 + 0x38) < *(int *)(lVar7 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
         lVar7 + 0x30)))) goto LAB_1438c0f2f;
    if ((((*(int *)(lVar8 + 0x6c) != 0) && (uVar1 = *(uint *)(lVar8 + 0x68), -1 < (int)uVar1)) &&
        (((int)uVar1 < DAT_14c9647dc &&
         (((plVar6 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(lVar8 + 0x6c))) &&
          ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))))) && (lVar10 = *plVar6, lVar10 != 0)) {
LAB_1438c0dfe:
      if (DAT_14c949118 == 0) {
        local_60 = FUN_140631fbe;
        lVar8 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar8;
        FUN_1446f470e(local_58,L"Class",1);
        local_88 = &LAB_146891e90;
        local_90 = (code *)&LAB_146273097;
        local_a0 = L"Engine";
        local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
        local_a8 = 0x20;
        local_b0 = 0x10000000;
        local_b8._0_4_ = 8;
        local_80 = &local_60;
        FUN_14574b4b2(lVar8);
        DAT_14c949118 = lVar8;
        if (DAT_14c951858 == 0) {
          local_80 = &local_50;
          local_50 = FUN_1449e2820;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_14081d0ea;
          local_88 = &LAB_1468c5283;
          local_90 = FUN_142809da0;
          local_98 = L"Engine";
          local_a0 = (wchar_t *)0x400000000;
          local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
          local_b0 = 8;
          local_b8._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar7 = DAT_14c951858;
        lVar8 = DAT_14c949118;
        uVar11 = FUN_1449e2fb2();
        local_b8 = L"Class";
        FUN_14574b446(uVar11,lVar8,lVar7,L"/Script/CoreUObject");
      }
      if (((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
         ((lVar8 = FUN_141272d48(), lVar8 == 0 ||
          ((*(int *)(lVar10 + 0x38) < *(int *)(lVar8 + 0x38) ||
           (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
            lVar8 + 0x30)))))) goto LAB_1438c0c56;
      goto LAB_1438c0f40;
    }
    if (*(longlong *)(lVar8 + 0x70) != 0) {
      lVar10 = FUN_140007850(lVar8 + 0x70);
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      lVar7 = DAT_14c9647c8;
      if ((lVar10 == 0) || (cVar3 == '\0')) {
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar10 + 0xc);
          *(uint *)(lVar8 + 0x68) = uVar1;
          if (DAT_14c9647dc <= (int)uVar1) goto LAB_1438c1121;
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_1438c10c3;
        }
        *(undefined8 *)(lVar8 + 0x68) = 0;
      }
      else {
        uVar1 = *(uint *)(lVar10 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(lVar8 + 0x68) = uVar1;
            lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(lVar7 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_1438c10c3:
            iVar5 = *(int *)(lVar7 + 0x10);
            if (*(int *)(lVar7 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar5 = *(int *)(lVar7 + 0x10);
              bVar13 = iVar5 == 0;
              if (bVar13) {
                *(int *)(lVar7 + 0x10) = iVar12;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar13) {
                iVar5 = iVar12;
              }
            }
            *(int *)(lVar8 + 0x6c) = iVar5;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar8 + 0x68) = uVar1;
LAB_1438c1121:
          lVar7 = 0;
          goto LAB_1438c10c3;
        }
        if ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0) goto LAB_1438c0dfe;
      }
    }
  }
LAB_1438c0c56:
  plVar9 = (longlong *)0x0;
LAB_1438c0c58:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 1438c14c0 FUN_1438c14c0 body=123 status=ok
// SIG undefined FUN_1438c14c0(void)

void FUN_1438c14c0(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0xcc) != 0) && (uVar1 = *(uint *)(param_1 + 200), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0xcc))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
      uVar2 = (**(code **)(*(longlong *)*plVar3 + 0x328))();
      FUN_147abfece(param_1,&DAT_14cb27688,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1438c153c FUN_1438c153c body=582 status=ok
// SIG undefined FUN_1438c153c(void)

void FUN_1438c153c(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(int *)(param_1 + 0xcc) != 0) && (uVar1 = *(uint *)(param_1 + 200), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0xcc))) &&
      (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
       (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))))) {
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar2 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_14a8e9e80;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_48[2] = lVar4;
    *local_48 = &PTR_FUN_14acdd360;
    local_48[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_48 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar6 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar6 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = &LAB_147fa1634;
    local_58 = 0;
    local_50 = 0;
    FUN_147aafa62(&local_58,&local_48);
    uVar3 = (**(code **)(*plVar5 + 0x328))(plVar5);
    FUN_147ac7764(param_1,&DAT_14cb27688,uVar3,&local_58);
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_1438c15a7;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1438c15a7:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438c1786 FUN_1438c1786 body=4532 status=ok
// SIG undefined FUN_1438c1786(void)

void FUN_1438c1786(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined **ppuVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined **ppuVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  ulonglong *puVar26;
  undefined **ppuVar27;
  ushort uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  uint *puVar32;
  ulonglong *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined2 *puVar36;
  ulonglong uVar37;
  undefined1 auStack_338 [32];
  wchar_t *local_318;
  uint local_310;
  undefined8 local_308;
  wchar_t *pwStack_300;
  wchar_t *local_2f8;
  code *local_2f0;
  undefined1 *local_2e8;
  undefined ***local_2e0;
  code *local_2d8;
  code *local_2d0;
  int local_2c4;
  longlong *local_2c0;
  undefined **local_2b8;
  longlong *local_2b0;
  uint *local_2a8;
  int local_29c;
  longlong *local_298;
  ulonglong local_290;
  ulonglong local_288;
  uint local_27c;
  uint local_278;
  uint local_274;
  ulonglong local_270;
  ulonglong local_268;
  uint *local_260;
  uint *local_258;
  longlong local_250;
  ulonglong local_248;
  ulonglong local_240;
  undefined8 local_238;
  int iStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined **local_218;
  undefined8 uStack_210;
  undefined4 local_1fc;
  undefined **local_1f8;
  undefined **local_1f0;
  longlong *local_1e8;
  undefined ***pppuStack_1e0;
  undefined ****local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  ulonglong local_180;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_1d8 = &pppuStack_1e0;
  local_1f0 = &PTR_FUN_149e37810;
  pppuStack_1e0 = &local_1f0;
  local_298 = param_2;
  local_1e8 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_1d8);
  plVar1 = local_298;
  for (plVar19 = param_1; plVar19 != (longlong *)0x0; plVar19 = (longlong *)plVar19[4]) {
    if ((*(uint *)(plVar19 + 1) & 0x30) != 0) goto LAB_1438c1817;
  }
  if ((*(byte *)((longlong)local_298 + 0x2b) & 8) == 0) {
    local_1fc = 1;
    puVar33 = (ulonglong *)local_298[1];
    puVar4 = (undefined4 *)*puVar33 + 1;
    local_2c0 = param_1;
    if ((undefined4 *)puVar33[1] < puVar4) {
      if ((*(byte *)((longlong)local_298 + 0x2a) & 2) == 0) {
        (**(code **)(*local_298 + 0x170))(local_298,&local_1fc,4);
      }
      else {
        FUN_14572512c(local_298,&local_1fc);
      }
    }
    else {
      local_1fc = *(undefined4 *)*puVar33;
      *puVar33 = (ulonglong)puVar4;
    }
    local_218 = (undefined **)0x0;
    uStack_210 = 0;
    if ((*(byte *)(plVar1 + 5) & 4) != 0) {
      local_260 = (uint *)(local_2c0 + 0x11);
      uVar22 = *(uint *)(local_2c0 + 0x14);
      if (uVar22 == 0) {
        local_288 = 1;
        local_2c4 = 0;
        uVar35 = 0;
        uVar16 = 0;
      }
      else {
        puVar7 = (uint *)local_2c0[0x13];
        if ((uint *)local_2c0[0x13] == (uint *)0x0) {
          puVar7 = local_260;
        }
        uVar16 = *puVar7;
        if (uVar16 == 0) {
          iVar24 = uVar22 + 0x1e;
          if (-1 < (int)(uVar22 - 1)) {
            iVar24 = uVar22 - 1;
          }
          uVar35 = 0;
          uVar37 = (ulonglong)(uint)(iVar24 >> 5);
          if (iVar24 >> 5 < 1) {
            uVar37 = uVar35;
          }
          local_2c4 = 0;
          do {
            if (uVar37 == uVar35) goto LAB_1438c198c;
            local_2c4 = local_2c4 + 0x20;
            uVar16 = puVar7[uVar35 + 1];
            uVar35 = uVar35 + 1;
          } while (uVar16 == 0);
        }
        else {
          local_2c4 = 0;
          uVar35 = 0;
        }
        local_288 = (ulonglong)(-uVar16 & uVar16);
        uVar37 = local_288 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar16 = (local_2c4 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar22 <= (int)uVar16) {
          uVar16 = uVar22;
        }
      }
      if (uVar16 != uVar22) {
        uVar25 = 0xffffffff;
        local_290 = (ulonglong)uVar22;
        do {
          plVar19 = local_2c0;
          local_1f0 = *(undefined ***)(local_2c0[0xf] + (longlong)(int)uVar16 * 0x18);
          lVar18 = *(longlong *)(local_2c0[0xf] + 8 + (longlong)(int)uVar16 * 0x18);
          local_1e8 = (longlong *)0x0;
          pppuStack_1e0 = (undefined ***)0x0;
          local_27c = uVar25;
          local_270 = uVar35;
          FUN_1401031ac(*(undefined8 *)(lVar18 + 0x10),0);
          local_1d8 = (undefined ****)0x0;
          uStack_1d0 = 0;
          FUN_1401031ac(lVar18,plVar19);
          puVar7 = (uint *)(lVar18 + 0x58);
          local_1c8 = 0;
          uStack_1c0 = 0;
          uVar22 = *(uint *)(lVar18 + 0x70);
          uVar37 = 1;
          uVar35 = 0;
          iVar24 = 0;
          uVar16 = 0;
          if (uVar22 != 0) {
            puVar23 = *(uint **)(lVar18 + 0x68);
            if (*(uint **)(lVar18 + 0x68) == (uint *)0x0) {
              puVar23 = puVar7;
            }
            uVar16 = *puVar23;
            if (uVar16 == 0) {
              iVar24 = uVar22 + 0x1e;
              if (-1 < (int)(uVar22 - 1)) {
                iVar24 = uVar22 - 1;
              }
              uVar35 = 0;
              uVar37 = (ulonglong)(uint)(iVar24 >> 5);
              if (iVar24 >> 5 < 1) {
                uVar37 = 0;
              }
              iVar24 = 0;
              do {
                if (uVar37 == uVar35) goto LAB_1438c23d2;
                iVar24 = iVar24 + 0x20;
                uVar16 = puVar23[uVar35 + 1];
                uVar35 = uVar35 + 1;
              } while (uVar16 == 0);
            }
            else {
              uVar35 = 0;
            }
            uVar37 = (ulonglong)(-uVar16 & uVar16);
            uVar34 = uVar37 * 2 + 1;
            lVar30 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            uVar16 = (iVar24 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
            if ((int)uVar22 <= (int)uVar16) {
              uVar16 = uVar22;
            }
          }
          if (uVar16 != uVar22) {
            uVar25 = 0xffffffff;
            local_268 = (ulonglong)uVar22;
            local_258 = puVar7;
            local_250 = lVar18;
            do {
              lVar30 = *(longlong *)(lVar18 + 0x48) + (longlong)(int)uVar16 * 0x60;
              plVar19 = (longlong *)(lVar30 + 8);
              lVar31 = *(longlong *)(lVar18 + 0x48) + (longlong)(int)uVar16 * 0x60;
              puVar23 = (uint *)(lVar31 + 0x18);
              uVar16 = *(uint *)(lVar31 + 0x30);
              ppuVar8 = (undefined **)(ulonglong)uVar16;
              local_2b8 = ppuVar8;
              local_2b0 = plVar19;
              local_29c = iVar24;
              local_240 = uVar35;
              if (uVar16 == 0) {
                uVar35 = 1;
                puVar32 = (uint *)0x0;
                iVar24 = 0;
                ppuVar15 = (undefined **)0x0;
              }
              else {
                puVar14 = *(uint **)(lVar30 + 0x28);
                if (puVar14 == (uint *)0x0) {
                  puVar14 = puVar23;
                }
                uVar12 = *puVar14;
                if (uVar12 == 0) {
                  iVar24 = uVar16 + 0x1e;
                  if (-1 < (int)(uVar16 - 1)) {
                    iVar24 = uVar16 - 1;
                  }
                  puVar32 = (uint *)0x0;
                  puVar20 = (uint *)(ulonglong)(uint)(iVar24 >> 5);
                  if (iVar24 >> 5 < 1) {
                    puVar20 = puVar32;
                  }
                  iVar24 = 0;
                  do {
                    if (puVar20 == puVar32) goto LAB_1438c2813;
                    iVar24 = iVar24 + 0x20;
                    uVar12 = puVar14[(longlong)puVar32 + 1];
                    puVar32 = (uint *)((longlong)puVar32 + 1);
                  } while (uVar12 == 0);
                }
                else {
                  puVar32 = (uint *)0x0;
                  iVar24 = 0;
                }
                uVar35 = (ulonglong)(-uVar12 & uVar12);
                uVar34 = uVar35 * 2 + 1;
                lVar30 = 0x3f;
                if (uVar34 != 0) {
                  for (; uVar34 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                  }
                }
                uVar12 = (iVar24 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
                ppuVar15 = (undefined **)(ulonglong)uVar12;
                if ((int)uVar16 <= (int)uVar12) {
                  ppuVar15 = ppuVar8;
                }
              }
              if ((uint)ppuVar15 != uVar16) {
                uVar22 = 0xffffffff;
                ppuVar27 = ppuVar8;
                local_278 = uVar25;
                local_248 = uVar37;
                do {
                  uVar37 = uStack_1c0;
                  lVar18 = (longlong)(int)ppuVar15 * 0x90;
                  puVar3 = (undefined8 *)(*plVar19 + lVar18);
                  if ((*(byte *)(*plVar19 + 0x29 + lVar18) & 1) == 0) {
                    lVar18 = puVar3[9];
                    if (lVar18 != puVar3[6]) goto LAB_1438c2660;
                  }
                  else {
                    lVar18 = puVar3[9];
LAB_1438c2660:
                    uVar6 = *puVar3;
                    local_228 = puVar3[0xe];
                    local_238 = (undefined2 *)puVar3[0xc];
                    iStack_230 = *(int *)(puVar3 + 0xd);
                    uStack_22c = *(undefined4 *)((longlong)puVar3 + 0x6c);
                    uVar5 = *(undefined1 *)(puVar3 + 5);
                    lVar30 = (longlong)(int)uStack_1c0;
                    uVar16 = (int)uStack_1c0 + 1;
                    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
                    local_2a8 = puVar32;
                    if (uStack_1c0._4_4_ < uVar16) {
                      local_274 = uVar22;
                      FUN_147fa34b8(&local_1c8,uVar37 & 0xffffffff);
                      plVar19 = local_2b0;
                      uVar22 = local_274;
                    }
                    lVar30 = lVar30 * 0x2c;
                    *(undefined8 *)(local_1c8 + lVar30) = uVar6;
                    *(longlong *)(local_1c8 + 8 + lVar30) = lVar18;
                    puVar4 = (undefined4 *)(local_1c8 + 0x10 + lVar30);
                    *puVar4 = (undefined4)local_238;
                    puVar4[1] = local_238._4_4_;
                    puVar4[2] = iStack_230;
                    puVar4[3] = uStack_22c;
                    *(undefined8 *)(local_1c8 + 0x20 + lVar30) = local_228;
                    *(undefined1 *)(local_1c8 + 0x28 + lVar30) = uVar5;
                    *(byte *)((longlong)puVar3 + 0x29) = *(byte *)((longlong)puVar3 + 0x29) & 0xfe;
                    ppuVar8 = (undefined **)(ulonglong)*(uint *)(plVar19 + 5);
                    ppuVar27 = local_2b8;
                    puVar32 = local_2a8;
                  }
                  uVar22 = uVar22 & ~(uint)uVar35;
                  puVar7 = (uint *)plVar19[4];
                  if ((uint *)plVar19[4] == (uint *)0x0) {
                    puVar7 = puVar23;
                  }
                  iVar21 = (int)puVar32;
                  lVar18 = (longlong)iVar21;
                  uVar16 = puVar7[lVar18] & uVar22;
                  iVar17 = (int)ppuVar8;
                  if (uVar16 == 0) {
                    iVar13 = iVar17 + 0x1e;
                    if (-1 < iVar17 + -1) {
                      iVar13 = iVar17 + -1;
                    }
                    iVar13 = iVar13 >> 5;
                    iVar24 = iVar24 + 0x20;
                    iVar10 = iVar13;
                    if (iVar13 < iVar21) {
                      iVar10 = iVar21;
                    }
                    if (iVar21 < iVar13) {
                      lVar30 = 0;
                      do {
                        uVar16 = puVar7[lVar18 + lVar30 + 1];
                        if (uVar16 != 0) {
                          puVar32 = (uint *)(ulonglong)(iVar21 + (int)lVar30 + 1);
                          uVar22 = 0xffffffff;
                          goto LAB_1438c2779;
                        }
                        iVar24 = iVar24 + 0x20;
                        lVar30 = lVar30 + 1;
                      } while (iVar10 - lVar18 != lVar30);
                      uVar22 = 0xffffffff;
                      iVar21 = iVar10;
                    }
                    puVar32 = (uint *)(ulonglong)(iVar21 + 1);
                    ppuVar15 = ppuVar8;
                    ppuVar27 = local_2b8;
                    plVar19 = local_2b0;
                  }
                  else {
LAB_1438c2779:
                    uVar35 = (ulonglong)(-uVar16 & uVar16);
                    uVar37 = uVar35 * 2 + 1;
                    lVar18 = 0x3f;
                    if (uVar37 != 0) {
                      for (; uVar37 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                      }
                    }
                    uVar16 = (iVar24 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                    ppuVar15 = (undefined **)(ulonglong)uVar16;
                    if (iVar17 <= (int)uVar16) {
                      ppuVar15 = ppuVar8;
                    }
                  }
                } while ((int)ppuVar15 != (int)ppuVar27);
                uVar22 = *(uint *)(local_250 + 0x70);
                lVar18 = local_250;
                puVar7 = local_258;
                uVar37 = local_248;
                uVar25 = local_278;
              }
LAB_1438c2813:
              uVar25 = uVar25 & ~(uint)uVar37;
              puVar23 = *(uint **)(lVar18 + 0x68);
              if (*(uint **)(lVar18 + 0x68) == (uint *)0x0) {
                puVar23 = puVar7;
              }
              iVar21 = (int)local_240;
              lVar30 = (longlong)iVar21;
              uVar16 = puVar23[lVar30] & uVar25;
              uVar35 = local_240;
              iVar24 = local_29c;
              if (uVar16 == 0) {
                iVar17 = uVar22 + 0x1e;
                if (-1 < (int)(uVar22 - 1)) {
                  iVar17 = uVar22 - 1;
                }
                iVar17 = iVar17 >> 5;
                iVar24 = local_29c + 0x20;
                iVar13 = iVar17;
                if (iVar17 < iVar21) {
                  iVar13 = iVar21;
                }
                if (iVar21 < iVar17) {
                  lVar31 = 0;
                  do {
                    uVar16 = puVar23[lVar30 + lVar31 + 1];
                    if (uVar16 != 0) {
                      uVar25 = 0xffffffff;
                      uVar35 = (ulonglong)(iVar21 + (int)lVar31 + 1);
                      goto LAB_1438c289c;
                    }
                    iVar24 = iVar24 + 0x20;
                    lVar31 = lVar31 + 1;
                  } while (iVar13 - lVar30 != lVar31);
                  uVar25 = 0xffffffff;
                  iVar21 = iVar13;
                }
                uVar35 = (ulonglong)(iVar21 + 1);
                uVar16 = uVar22;
              }
              else {
LAB_1438c289c:
                uVar37 = (ulonglong)(-uVar16 & uVar16);
                uVar34 = uVar37 * 2 + 1;
                lVar30 = 0x3f;
                if (uVar34 != 0) {
                  for (; uVar34 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                  }
                }
                uVar16 = (iVar24 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
                if ((int)uVar22 <= (int)uVar16) {
                  uVar16 = uVar22;
                }
              }
            } while (uVar16 != (uint)local_268);
          }
LAB_1438c23d2:
          uVar35 = uStack_210;
          lVar18 = (longlong)(int)uStack_210;
          uVar22 = (int)uStack_210 + 1;
          uStack_210 = CONCAT44(uStack_210._4_4_,uVar22);
          if (uStack_210._4_4_ < uVar22) {
            FUN_147fa3636(&local_218,uVar35 & 0xffffffff);
          }
          FUN_147fa3548(local_218 + lVar18 * 7,&local_1f0);
          FUN_147fa1642(&local_1f0);
          uVar25 = local_27c & ~(uint)local_288;
          puVar7 = (uint *)local_2c0[0x13];
          if ((uint *)local_2c0[0x13] == (uint *)0x0) {
            puVar7 = local_260;
          }
          uVar22 = *(uint *)(local_2c0 + 0x14);
          iVar24 = (int)local_270;
          lVar18 = (longlong)iVar24;
          uVar16 = puVar7[lVar18] & uVar25;
          uVar35 = local_270;
          if (uVar16 == 0) {
            iVar21 = uVar22 + 0x1e;
            if (-1 < (int)(uVar22 - 1)) {
              iVar21 = uVar22 - 1;
            }
            iVar21 = iVar21 >> 5;
            local_2c4 = local_2c4 + 0x20;
            iVar17 = iVar21;
            if (iVar21 < iVar24) {
              iVar17 = iVar24;
            }
            if (iVar24 < iVar21) {
              lVar30 = 0;
              do {
                uVar16 = (puVar7 + lVar18 + 1)[lVar30];
                if (uVar16 != 0) {
                  uVar35 = (ulonglong)(iVar24 + (int)lVar30 + 1);
                  uVar25 = 0xffffffff;
                  goto LAB_1438c24ce;
                }
                local_2c4 = local_2c4 + 0x20;
                lVar30 = lVar30 + 1;
              } while (iVar17 - lVar18 != lVar30);
              uVar25 = 0xffffffff;
              iVar24 = iVar17;
            }
            uVar35 = (ulonglong)(iVar24 + 1);
            uVar16 = uVar22;
          }
          else {
LAB_1438c24ce:
            local_288 = (ulonglong)(-uVar16 & uVar16);
            uVar37 = local_288 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            uVar16 = (local_2c4 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if ((int)uVar22 <= (int)uVar16) {
              uVar16 = uVar22;
            }
          }
        } while (uVar16 != (uint)local_290);
      }
    }
LAB_1438c198c:
    plVar19 = local_298;
    FUN_147fa3728(local_298,&local_218);
    if ((*(byte *)(plVar19 + 5) & 1) != 0) {
      if ((longlong)(int)uStack_210 != 0) {
        ppuVar15 = local_218 + (longlong)(int)uStack_210 * 7;
        local_2b0 = local_2c0 + 0xf;
        local_2a8 = (uint *)(local_2c0 + 0x1c);
        ppuVar8 = local_218;
        local_2b8 = ppuVar15;
        do {
          puVar36 = &DAT_149dfb77a;
          if (*(int *)(ppuVar8 + 2) != 0) {
            puVar36 = (undefined2 *)ppuVar8[1];
          }
          if (DAT_14c949118 == 0) {
            local_1f8 = (undefined **)FUN_140631fbe;
            lVar18 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar18;
            FUN_1446f470e(&local_238,L"Class",1);
            local_2e0 = &local_1f8;
            local_2e8 = &LAB_146891e90;
            local_2f0 = (code *)&LAB_146273097;
            pwStack_300 = L"Engine";
            local_2f8 = (wchar_t *)CONCAT44(local_2f8._4_4_,199);
            local_308 = 0x20;
            local_310 = 0x10000000;
            local_318._0_4_ = 8;
            FUN_14574b4b2(lVar18);
            DAT_14c949118 = lVar18;
            if (DAT_14c951858 == 0) {
              local_1f0 = (undefined **)FUN_1449e2820;
              local_2d0 = FUN_14081d0ea;
              local_2d8 = FUN_14081d0ea;
              local_2e0 = &local_1f0;
              local_2e8 = &LAB_1468c5283;
              local_2f0 = FUN_142809da0;
              local_2f8 = L"Engine";
              pwStack_300 = (wchar_t *)0x400000000;
              local_308 = CONCAT44(local_308._4_4_,0x10000000);
              local_310 = 8;
              local_318._0_4_ = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar30 = DAT_14c951858;
            lVar18 = DAT_14c949118;
            uVar6 = FUN_1449e2fb2();
            local_318 = L"Class";
            FUN_14574b446(uVar6,lVar18,lVar30,L"/Script/CoreUObject");
          }
          lVar18 = FUN_140277b32(DAT_14c949118,0,puVar36,0);
          if (lVar18 != 0) {
            local_308 = 0;
            pwStack_300 = (wchar_t *)0x0;
            local_310 = local_310 & 0xffffff00;
            local_318 = (wchar_t *)0x0;
            puVar36 = (undefined2 *)FUN_1457f970c(local_2c0,lVar18,0);
            local_238 = puVar36;
            if ((puVar36 != (undefined2 *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(puVar36);
            }
            local_1e8 = &local_238;
            local_1f0 = ppuVar8;
            FUN_1457f97fc(local_2b0,&local_1f8,&local_1f0);
            if ((longlong)*(int *)(ppuVar8 + 6) != 0) {
              puVar33 = (ulonglong *)ppuVar8[5];
              puVar26 = (ulonglong *)((longlong)*(int *)(ppuVar8 + 6) * 0x2c + (longlong)puVar33);
              do {
                uVar35 = *puVar33;
                uVar22 = (uint)(uVar35 >> 0x10);
                uVar16 = (uint)uVar35 & 0xffff;
                uVar6 = FUN_140f5d5c6(puVar36 + 0x24,
                                      ((uint)uVar35 << 0x10 | uVar16) + (int)(uVar35 >> 0x20) +
                                      (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar16 >> 4),puVar33);
                FUN_14644deda(&local_1f0);
                plVar19 = local_198;
                local_1f0 = (undefined **)*puVar33;
                local_1a8 = puVar33[1];
                local_1a0 = 0;
                if (local_198 != (longlong *)0x0) {
                  local_198 = (longlong *)0x0;
                  LOCK();
                  plVar1 = plVar19 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                    }
                  }
                }
                local_1c8 = CONCAT71(local_1c8._1_7_,(char)puVar33[5]);
                local_180 = puVar33[4];
                local_190 = (undefined4)puVar33[2];
                uStack_18c = *(undefined4 *)((longlong)puVar33 + 0x14);
                uStack_188 = (undefined4)puVar33[3];
                uStack_184 = *(undefined4 *)((longlong)puVar33 + 0x1c);
                FUN_147fa3d40(uVar6,&local_238,&local_1f0);
                plVar19 = local_198;
                if (local_198 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_198 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_198)(local_198);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                    }
                  }
                }
                plVar19 = local_1b0;
                if (local_1b0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_1b0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_1b0)(local_1b0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                    }
                  }
                }
                if (local_1d8 != (undefined ****)0x0) {
                  (*(code *)(*local_1d8)[2])();
                }
                if (local_1e8 != (longlong *)0x0) {
                  (**(code **)(*local_1e8 + 0x10))();
                }
                puVar33 = (ulonglong *)((longlong)puVar33 + 0x2c);
              } while (puVar33 != puVar26);
            }
            iVar24 = (int)local_2c0[0x1f];
            if (iVar24 == 0) {
              uVar37 = 1;
              uVar35 = 0;
              iVar17 = 0;
              iVar21 = 0;
            }
            else {
              puVar7 = (uint *)local_2c0[0x1e];
              if ((uint *)local_2c0[0x1e] == (uint *)0x0) {
                puVar7 = local_2a8;
              }
              uVar22 = *puVar7;
              if (uVar22 == 0) {
                iVar21 = iVar24 + 0x1e;
                if (-1 < iVar24 + -1) {
                  iVar21 = iVar24 + -1;
                }
                uVar35 = 0;
                uVar37 = (ulonglong)(uint)(iVar21 >> 5);
                if (iVar21 >> 5 < 1) {
                  uVar37 = uVar35;
                }
                iVar17 = 0;
                do {
                  if (uVar37 == uVar35) goto LAB_1438c1f8d;
                  iVar17 = iVar17 + 0x20;
                  uVar22 = puVar7[uVar35 + 1];
                  uVar35 = uVar35 + 1;
                } while (uVar22 == 0);
              }
              else {
                uVar35 = 0;
                iVar17 = 0;
              }
              uVar37 = (ulonglong)(-uVar22 & uVar22);
              uVar34 = uVar37 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar34 != 0) {
                for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar21 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar24 <= iVar21) {
                iVar21 = iVar24;
              }
            }
            if (iVar21 != iVar24) {
              uVar22 = 0xffffffff;
              puVar7 = local_2a8;
              do {
                (**(code **)(*local_2c0 + 0x338))
                          (local_2c0,puVar36,
                           *(undefined8 *)(local_2c0[0x1a] + (longlong)iVar21 * 0x10));
                uVar22 = ~(uint)uVar37 & uVar22;
                puVar23 = (uint *)local_2c0[0x1e];
                if ((uint *)local_2c0[0x1e] == (uint *)0x0) {
                  puVar23 = puVar7;
                }
                iVar13 = (int)local_2c0[0x1f];
                iVar21 = (int)uVar35;
                lVar18 = (longlong)iVar21;
                uVar16 = puVar23[lVar18] & uVar22;
                if (uVar16 == 0) {
                  iVar10 = iVar13 + 0x1e;
                  if (-1 < iVar13 + -1) {
                    iVar10 = iVar13 + -1;
                  }
                  iVar10 = iVar10 >> 5;
                  iVar17 = iVar17 + 0x20;
                  iVar11 = iVar10;
                  if (iVar10 < iVar21) {
                    iVar11 = iVar21;
                  }
                  if (iVar21 < iVar10) {
                    lVar30 = 0;
                    do {
                      uVar16 = puVar23[lVar18 + lVar30 + 1];
                      if (uVar16 != 0) {
                        uVar35 = (ulonglong)(iVar21 + (int)lVar30 + 1);
                        uVar22 = 0xffffffff;
                        goto LAB_1438c20c4;
                      }
                      iVar17 = iVar17 + 0x20;
                      lVar30 = lVar30 + 1;
                    } while (iVar11 - lVar18 != lVar30);
                    uVar22 = 0xffffffff;
                    lVar18 = (longlong)iVar11;
                  }
                  uVar35 = lVar18 + 1U & 0xffffffff;
                  puVar7 = local_2a8;
                  iVar21 = iVar13;
                }
                else {
LAB_1438c20c4:
                  uVar37 = (ulonglong)(-uVar16 & uVar16);
                  uVar34 = uVar37 * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar34 != 0) {
                    for (; uVar34 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  iVar21 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                  if (iVar13 <= iVar21) {
                    iVar21 = iVar13;
                  }
                }
              } while (iVar21 != iVar24);
            }
LAB_1438c1f8d:
            ppuVar15 = local_2b8;
            if ((((*(int *)((longlong)local_2c0 + 0xcc) != 0) &&
                 (uVar22 = *(uint *)(local_2c0 + 0x19), -1 < (int)uVar22)) &&
                ((int)uVar22 < DAT_14c9647dc)) &&
               (((plVar19 = (longlong *)
                            ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
                 plVar19 != (longlong *)0x0 &&
                 ((int)plVar19[2] == *(int *)((longlong)local_2c0 + 0xcc))) &&
                (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 && (*plVar19 != 0)))))) {
              *(undefined4 *)(puVar36 + 0x18) = *(undefined4 *)(*plVar19 + 0x100);
            }
          }
          ppuVar8 = ppuVar8 + 7;
        } while (ppuVar8 != ppuVar15);
      }
    }
    FUN_140056680(&local_238,L"ObjectEnd");
    plVar19 = local_298;
    puVar7 = (uint *)(local_2c0 + 0x11);
    iVar24 = (int)local_2c0[0x14];
    if (iVar24 == 0) {
      uVar34 = 1;
      uVar35 = 0;
      iVar21 = 0;
      iVar17 = 0;
    }
    else {
      puVar23 = (uint *)local_2c0[0x13];
      if ((uint *)local_2c0[0x13] == (uint *)0x0) {
        puVar23 = puVar7;
      }
      uVar22 = *puVar23;
      if (uVar22 == 0) {
        iVar21 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar21 = iVar24 + -1;
        }
        uVar35 = 0;
        uVar37 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar37 = uVar35;
        }
        iVar21 = 0;
        do {
          if (uVar37 == uVar35) goto LAB_1438c1a65;
          iVar21 = iVar21 + 0x20;
          uVar22 = puVar23[uVar35 + 1];
          uVar35 = uVar35 + 1;
        } while (uVar22 == 0);
      }
      else {
        uVar35 = 0;
        iVar21 = 0;
      }
      uVar34 = (ulonglong)(-uVar22 & uVar22);
      uVar37 = uVar34 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar17 = (iVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar24 <= iVar17) {
        iVar17 = iVar24;
      }
    }
    if (iVar17 != iVar24) {
      uVar22 = 0xffffffff;
      do {
        local_1f0 = &PTR_FUN_149e37810;
        local_1e8 = plVar19;
        pppuStack_1e0 = &local_1f0;
        local_1d8 = &pppuStack_1e0;
        switchD_143c3d4dc::caseD_20(*(undefined8 *)(local_2c0[0xf] + 8 + (longlong)iVar17 * 0x18));
        FUN_14021219d(plVar19);
        puVar36 = &DAT_149dfb77a;
        if (iStack_230 != 0) {
          puVar36 = local_238;
        }
        lVar18 = 0;
        while( true ) {
          uVar9 = *(ushort *)((longlong)puVar36 + lVar18);
          uVar37 = (ulonglong)uVar9;
          uVar28 = *(ushort *)((longlong)L"ObjectEnd" + lVar18);
          if (uVar9 != uVar28) break;
          if (uVar9 == 0) goto LAB_1438c1b77;
LAB_1438c1b41:
          lVar18 = lVar18 + 2;
        }
        if ((uVar28 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar37];
          uVar29 = (ulonglong)uVar28;
          uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar29];
          if ((&DAT_149e05da0)[uVar37] == (&DAT_149e05da0)[uVar29]) goto LAB_1438c1b41;
        }
        if (uVar9 != uVar28) break;
LAB_1438c1b77:
        uVar22 = uVar22 & ~(uint)uVar34;
        puVar23 = (uint *)local_2c0[0x13];
        if ((uint *)local_2c0[0x13] == (uint *)0x0) {
          puVar23 = puVar7;
        }
        iVar13 = (int)local_2c0[0x14];
        iVar17 = (int)uVar35;
        lVar18 = (longlong)iVar17;
        uVar16 = puVar23[lVar18] & uVar22;
        if (uVar16 == 0) {
          iVar10 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar10 = iVar13 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar17) {
            iVar11 = iVar17;
          }
          if (iVar17 < iVar10) {
            lVar30 = 0;
            do {
              uVar16 = puVar23[lVar18 + lVar30 + 1];
              if (uVar16 != 0) {
                uVar35 = (ulonglong)(iVar17 + (int)lVar30 + 1);
                uVar22 = 0xffffffff;
                goto LAB_1438c1bf2;
              }
              iVar21 = iVar21 + 0x20;
              lVar30 = lVar30 + 1;
            } while (iVar11 - lVar18 != lVar30);
            uVar22 = 0xffffffff;
            iVar17 = iVar11;
          }
          uVar35 = (ulonglong)(iVar17 + 1);
          iVar17 = iVar13;
        }
        else {
LAB_1438c1bf2:
          uVar34 = (ulonglong)(-uVar16 & uVar16);
          uVar37 = uVar34 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar17 = (iVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar13 <= iVar17) {
            iVar17 = iVar13;
          }
        }
      } while (iVar17 != iVar24);
    }
LAB_1438c1a65:
    if (local_238 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_147fa3492(local_218,uStack_210 & 0xffffffff);
    if (local_218 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1438c1817:
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438c293c FUN_1438c293c body=2710 status=ok
// SIG undefined FUN_1438c293c(void)

void FUN_1438c293c(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  int local_140;
  longlong local_138;
  int local_12c;
  longlong *local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined1 local_100;
  byte local_ff;
  byte local_e8;
  undefined7 uStack_e7;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_98;
  int local_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar10 = DAT_14cb276b0;
  if ((uint)*(ushort *)((longlong)param_2 + 2) < DAT_14c87eb08 + 1U) {
    plVar10 = param_2 + 6;
    if (param_2[6] == 0) {
      plVar10 = param_1 + 0xe;
    }
    plVar8 = (longlong *)(**(code **)(*param_1 + 800))(param_1,plVar10);
    plVar10 = DAT_14cb276b8;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x2d8))(plVar8,param_2);
      if (lVar9 != 0) {
        lVar19 = *(longlong *)(lVar9 + 0x48);
        if (param_2[2] != lVar19) {
          *(byte *)(lVar9 + 0x29) = *(byte *)(lVar9 + 0x29) | 1;
          lVar19 = param_2[2];
        }
        *(longlong *)(lVar9 + 0x48) = lVar19;
        uVar4 = param_2[3];
        lVar19 = param_2[4];
        if (lVar19 != 0) {
          LOCK();
          *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
          UNLOCK();
        }
        plVar10 = *(longlong **)(lVar9 + 0x58);
        *(undefined8 *)(lVar9 + 0x50) = uVar4;
        *(longlong *)(lVar9 + 0x58) = lVar19;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar10 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        (**(code **)(*param_1 + 0x2c8))(param_1,lVar9,param_2,0);
        if (((*(byte *)(param_2 + 7) & 2) == 0) || (param_1[5] != 0)) {
          local_128 = param_1;
          FUN_1447cd2ec(param_1 + 6);
        }
        else {
          lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
          if (lVar9 != 0) {
            if (param_1 == (longlong *)0x0) {
              uVar16 = 0;
              iVar7 = 0;
            }
            else {
              uVar16 = *(uint *)((longlong)param_1 + 0xc);
              if ((int)uVar16 < DAT_14c9647dc) {
                lVar19 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
              }
              else {
                lVar19 = 0;
              }
              iVar7 = *(int *)(lVar19 + 0x10);
              if (*(int *)(lVar19 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar15 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar20) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar15);
                }
                LOCK();
                iVar7 = *(int *)(lVar19 + 0x10);
                bVar20 = iVar7 == 0;
                if (bVar20) {
                  *(int *)(lVar19 + 0x10) = iVar15;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar20) {
                  iVar7 = iVar15;
                }
              }
            }
            if (*(longlong *)(lVar9 + 0x1f0) == 0) {
              puVar12 = (undefined8 *)(lVar9 + 0x458);
            }
            else {
              puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
            }
            uVar4 = *puVar12;
            local_98 = (longlong *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            plVar10 = local_98;
            local_90 = 3;
            *local_98 = (longlong)&PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar19 = DAT_14c758608 + 1;
            lVar9 = DAT_14c758608 + 1;
            if (lVar19 == 0) {
              LOCK();
              UNLOCK();
              lVar19 = DAT_14c758608 + 2;
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            local_98[2] = lVar19;
            *local_98 = (longlong)&PTR_FUN_14acdd3d0;
            local_98[3] = 0;
            iVar15 = 0;
            if (param_1 != (longlong *)0x0) {
              uVar3 = *(uint *)((longlong)param_1 + 0xc);
              *(uint *)(local_98 + 3) = uVar3;
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar9 = 0;
              }
              iVar15 = *(int *)(lVar9 + 0x10);
              if (*(int *)(lVar9 + 0x10) == 0) {
                LOCK();
                iVar15 = DAT_14c964868 + 1;
                UNLOCK();
                iVar17 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar15;
                if (bVar20) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar17);
                }
                LOCK();
                iVar15 = *(int *)(lVar9 + 0x10);
                bVar20 = iVar15 == 0;
                if (bVar20) {
                  *(int *)(lVar9 + 0x10) = iVar17;
                  iVar15 = 0;
                }
                UNLOCK();
                if (bVar20) {
                  iVar15 = iVar17;
                }
              }
            }
            *(int *)((longlong)plVar10 + 0x1c) = iVar15;
            plVar10[4] = CONCAT44(iVar7,uVar16);
            local_128 = (longlong *)0x0;
            local_120 = (longlong *)((ulonglong)local_120._4_4_ << 0x20);
            FUN_14487d8d8(&local_128,&local_98);
            local_e8 = 1;
            FUN_14016fdb0(uVar4,&local_148,&local_128);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_e8])(&local_128);
            param_1[5] = (longlong)local_148;
            if (local_90 != 0) {
              if (local_98 == (longlong *)0x0) goto LAB_1438c2a5a;
              (**(code **)*local_98)(local_98,0);
              FUN_1446efa72(&local_98,0,0,0x10);
              local_90 = 0;
            }
            if (local_98 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        goto LAB_1438c2a5a;
      }
      plVar8 = (longlong *)FUN_14107a796(plVar8,*param_2);
      plVar10 = DAT_14cb276c8;
      if (plVar8 != (longlong *)0x0) {
        if (((int)plVar8[1] <= *(int *)((longlong)plVar8 + 0x34)) ||
           ((*(byte *)(param_2 + 7) & 1) == 0)) goto LAB_1438c2a5a;
        iVar7 = (int)plVar8[5];
        iVar15 = 0;
        if (iVar7 != 0) {
          puVar13 = (uint *)(plVar8 + 2);
          if ((uint *)plVar8[4] != (uint *)0x0) {
            puVar13 = (uint *)plVar8[4];
          }
          uVar16 = *puVar13;
          if (uVar16 == 0) {
            iVar15 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar15 = iVar7 + -1;
            }
            uVar18 = 0;
            uVar14 = (ulonglong)(uint)(iVar15 >> 5);
            if (iVar15 >> 5 < 1) {
              uVar14 = uVar18;
            }
            do {
              puVar13 = puVar13 + 1;
              iVar15 = iVar7;
              if (uVar14 * 0x20 == uVar18) goto LAB_1438c2b36;
              uVar16 = *puVar13;
              uVar18 = uVar18 + 0x20;
            } while (uVar16 == 0);
          }
          else {
            uVar18 = 0;
          }
          uVar14 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar15 = ((int)uVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if (iVar7 <= iVar15) {
            iVar15 = iVar7;
          }
        }
LAB_1438c2b36:
        FUN_14644deda(&local_128);
        local_128 = (longlong *)*param_2;
        local_100 = *(undefined1 *)(param_2 + 1);
        local_ff = local_ff | 1;
        if (((param_2[5] != 0) && (lVar9 = FUN_140313a2a(), lVar9 != 0)) &&
           ((longlong)*(int *)(lVar9 + 0x60) != 0)) {
          puVar11 = *(undefined4 **)(lVar9 + 0x58);
          lVar9 = (longlong)*(int *)(lVar9 + 0x60) * 0x18;
          do {
            if (*(longlong *)(puVar11 + 2) == param_2[5]) {
              if (puVar11 != (undefined4 *)0x0) {
                local_b8 = *(undefined8 *)(puVar11 + 4);
                local_c8 = *puVar11;
                uStack_c4 = puVar11[1];
                uStack_c0 = puVar11[2];
                uStack_bc = puVar11[3];
              }
              break;
            }
            puVar11 = puVar11 + 6;
            lVar9 = lVar9 + -0x18;
          } while (lVar9 != 0);
        }
        plVar10 = local_d0;
        lVar9 = param_2[2];
        if (lVar9 != local_e0) {
          local_ff = local_ff | 1;
        }
        local_d8 = param_2[3];
        plVar5 = (longlong *)param_2[4];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_e0 = lVar9;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_d0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            puVar12 = (undefined8 *)*local_d0;
            local_d0 = plVar5;
            (*(code *)*puVar12)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar5 = local_d0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              plVar5 = local_d0;
            }
          }
        }
        local_d0 = plVar5;
        plVar5 = local_120;
        lVar9 = *plVar8;
        lVar19 = (longlong)iVar15 * 0x90;
        plVar10 = *(longlong **)(lVar9 + lVar19 + 8);
        if (local_120 != plVar10) {
          local_120 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        plVar5 = local_110;
        local_118 = *(undefined4 *)(lVar9 + lVar19 + 0x10);
        lVar9 = *plVar8;
        plVar10 = *(longlong **)(lVar9 + 0x18 + lVar19);
        if (local_110 != plVar10) {
          local_110 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        lVar6 = (longlong)iVar15 * 0x90;
        local_108 = *(undefined4 *)(lVar9 + 0x20 + lVar6);
        lVar9 = *plVar8;
        local_b0 = *(longlong *)(lVar9 + 0x78 + lVar6);
        if (DAT_14c950c29 == 1) {
          if (local_b0 == 0) {
            local_b0 = 0;
          }
          else {
            FUN_1456cec3c();
            local_b0 = *(longlong *)(lVar9 + lVar6 + 0x78);
          }
        }
        lVar9 = *plVar8;
        local_a8 = *(longlong *)(lVar9 + 0x80 + lVar19);
        if ((DAT_14c950c29 & 1) != 0) {
          if (local_a8 == 0) {
            local_a8 = 0;
          }
          else {
            FUN_1456cec3c();
            local_a8 = *(longlong *)(lVar9 + lVar19 + 0x80);
          }
        }
        FUN_147fa3d40(plVar8,&local_12c,&local_128,0);
        (**(code **)(*param_1 + 0x2c8))(param_1,(longlong)local_12c * 0x90 + *plVar8,param_2,0);
        if (((*(byte *)(param_2 + 7) & 2) == 0) || (param_1[5] != 0)) {
          local_98 = param_1;
          FUN_1447cd2ec(param_1 + 6);
        }
        else {
          lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
          if (lVar9 != 0) {
            if (param_1 == (longlong *)0x0) {
              uVar16 = 0;
              iVar7 = 0;
            }
            else {
              uVar16 = *(uint *)((longlong)param_1 + 0xc);
              if ((int)uVar16 < DAT_14c9647dc) {
                lVar19 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
              }
              else {
                lVar19 = 0;
              }
              iVar7 = *(int *)(lVar19 + 0x10);
              if (*(int *)(lVar19 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar15 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar20) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar15);
                }
                LOCK();
                iVar7 = *(int *)(lVar19 + 0x10);
                bVar20 = iVar7 == 0;
                if (bVar20) {
                  *(int *)(lVar19 + 0x10) = iVar15;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar20) {
                  iVar7 = iVar15;
                }
              }
            }
            if (*(longlong *)(lVar9 + 0x1f0) == 0) {
              puVar12 = (undefined8 *)(lVar9 + 0x458);
            }
            else {
              puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
            }
            uVar4 = *puVar12;
            local_148 = (undefined8 *)0x0;
            local_140 = 0;
            FUN_1446efa72(&local_148,0,3,0x10);
            puVar12 = local_148;
            local_140 = 3;
            *local_148 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar19 = DAT_14c758608 + 1;
            lVar9 = DAT_14c758608 + 1;
            if (lVar19 == 0) {
              LOCK();
              UNLOCK();
              lVar19 = DAT_14c758608 + 2;
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            local_148[2] = lVar19;
            *local_148 = &PTR_FUN_14acdd440;
            local_148[3] = 0;
            iVar15 = 0;
            if (param_1 != (longlong *)0x0) {
              uVar3 = *(uint *)((longlong)param_1 + 0xc);
              *(uint *)(local_148 + 3) = uVar3;
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar9 = 0;
              }
              iVar15 = *(int *)(lVar9 + 0x10);
              if (*(int *)(lVar9 + 0x10) == 0) {
                LOCK();
                iVar15 = DAT_14c964868 + 1;
                UNLOCK();
                iVar17 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar15;
                if (bVar20) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar17);
                }
                LOCK();
                iVar15 = *(int *)(lVar9 + 0x10);
                bVar20 = iVar15 == 0;
                if (bVar20) {
                  *(int *)(lVar9 + 0x10) = iVar17;
                  iVar15 = 0;
                }
                UNLOCK();
                if (bVar20) {
                  iVar15 = iVar17;
                }
              }
            }
            *(int *)((longlong)puVar12 + 0x1c) = iVar15;
            puVar12[4] = CONCAT44(iVar7,uVar16);
            local_98 = (longlong *)0x0;
            local_90 = 0;
            FUN_14487d8d8(&local_98,&local_148);
            local_58 = 1;
            FUN_14016fdb0(uVar4,&local_138,&local_98);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
            param_1[5] = local_138;
            if (local_140 != 0) {
              if (local_148 == (undefined8 *)0x0) goto LAB_1438c2fa7;
              (**(code **)*local_148)(local_148,0);
              FUN_1446efa72(&local_148,0,0,0x10);
              local_140 = 0;
            }
            if (local_148 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
LAB_1438c2fa7:
        plVar10 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_d0 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        plVar10 = (longlong *)CONCAT71(uStack_e7,local_e8);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar10 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        if (local_110 != (longlong *)0x0) {
          (**(code **)(*local_110 + 0x10))();
        }
        if (local_120 != (longlong *)0x0) {
          (**(code **)(*local_120 + 0x10))();
        }
        goto LAB_1438c2a5a;
      }
    }
  }
  local_128 = plVar10;
  FUN_140608954(param_3);
LAB_1438c2a5a:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438c33d4 FUN_1438c33d4 body=1058 status=ok
// SIG undefined FUN_1438c33d4(void)

void FUN_1438c33d4(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  int local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = DAT_14cb276b0;
  if ((uint)*(ushort *)(param_2 + 2) < DAT_14c87eb08 + 1U) {
    plVar7 = (longlong *)(param_2 + 0x30);
    if (*(longlong *)(param_2 + 0x30) == 0) {
      plVar7 = param_1 + 0xe;
    }
    plVar5 = (longlong *)(**(code **)(*param_1 + 800))(param_1,plVar7);
    plVar7 = DAT_14cb276b8;
    if ((plVar5 != (longlong *)0x0) &&
       (lVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,param_2), plVar7 = DAT_14cb276c0, lVar6 != 0))
    {
      if (*(longlong *)(lVar6 + 0x48) != *(longlong *)(lVar6 + 0x30)) {
        *(byte *)(lVar6 + 0x29) = *(byte *)(lVar6 + 0x29) | 1;
      }
      *(longlong *)(lVar6 + 0x48) = *(longlong *)(lVar6 + 0x30);
      uVar3 = *(undefined8 *)(lVar6 + 0x38);
      lVar12 = *(longlong *)(lVar6 + 0x40);
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        UNLOCK();
      }
      plVar7 = *(longlong **)(lVar6 + 0x58);
      *(undefined8 *)(lVar6 + 0x50) = uVar3;
      *(longlong *)(lVar6 + 0x58) = lVar12;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar7 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      if ((*(byte *)(lVar6 + 0x29) & 1) != 0) {
        (**(code **)(*param_1 + 0x2c8))(param_1,lVar6,param_2,1);
        if (((*(byte *)(param_2 + 0x38) & 2) == 0) || (param_1[5] != 0)) {
          local_98 = param_1;
          FUN_1447cd2ec(param_1 + 6);
        }
        else {
          lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
          if (lVar6 != 0) {
            if (param_1 == (longlong *)0x0) {
              uVar10 = 0;
              iVar4 = 0;
            }
            else {
              uVar10 = *(uint *)((longlong)param_1 + 0xc);
              if ((int)uVar10 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar4 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                iVar9 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar9);
                }
                LOCK();
                iVar4 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar4 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar9;
                  iVar4 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar4 = iVar9;
                }
              }
            }
            if (*(longlong *)(lVar6 + 0x1f0) == 0) {
              puVar8 = (undefined8 *)(lVar6 + 0x458);
            }
            else {
              puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
            }
            uVar3 = *puVar8;
            local_b0 = (undefined8 *)0x0;
            local_a8 = 0;
            FUN_1446efa72(&local_b0,0,3,0x10);
            puVar8 = local_b0;
            local_a8 = 3;
            *local_b0 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar12 == 0) {
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_b0[2] = lVar12;
            *local_b0 = &PTR_FUN_14acdd4b0;
            local_b0[3] = 0;
            iVar9 = 0;
            if (param_1 != (longlong *)0x0) {
              uVar2 = *(uint *)((longlong)param_1 + 0xc);
              *(uint *)(local_b0 + 3) = uVar2;
              if ((int)uVar2 < DAT_14c9647dc) {
                lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              }
              else {
                lVar6 = 0;
              }
              iVar9 = *(int *)(lVar6 + 0x10);
              if (*(int *)(lVar6 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar11 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar11);
                }
                LOCK();
                iVar9 = *(int *)(lVar6 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar6 + 0x10) = iVar11;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar11;
                }
              }
            }
            *(int *)((longlong)puVar8 + 0x1c) = iVar9;
            puVar8[4] = CONCAT44(iVar4,uVar10);
            local_98 = (longlong *)0x0;
            local_90 = 0;
            FUN_14487d8d8(&local_98,&local_b0);
            local_58 = 1;
            FUN_14016fdb0(uVar3,&local_a0,&local_98);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
            param_1[5] = local_a0;
            if (local_a8 != 0) {
              if (local_b0 == (undefined8 *)0x0) goto LAB_1438c34f7;
              (**(code **)*local_b0)(local_b0,0);
              FUN_1446efa72(&local_b0,0,0,0x10);
              local_a8 = 0;
            }
            if (local_b0 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
      goto LAB_1438c34f7;
    }
  }
  local_98 = plVar7;
  FUN_140608954(param_3);
LAB_1438c34f7:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438c37f8 FUN_1438c37f8 body=945 status=ok
// SIG undefined FUN_1438c37f8(void)

void FUN_1438c37f8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  uint *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar9 = DAT_14cb276b0;
  if ((uint)*(ushort *)((longlong)param_2 + 2) < DAT_14c87eb08 + 1U) {
    plVar9 = param_2 + 6;
    if (param_2[6] == 0) {
      plVar9 = param_1 + 0xe;
    }
    lVar8 = (**(code **)(*param_1 + 800))(param_1,plVar9);
    plVar9 = DAT_14cb276b8;
    if ((lVar8 != 0) && (plVar9 = DAT_14cb276c0, *(int *)(lVar8 + 0x50) != *(int *)(lVar8 + 0x7c)))
    {
      lVar16 = *param_2;
      uVar4 = (uint)((ulonglong)lVar16 >> 0x10);
      uVar7 = (uint)lVar16 & 0xffff;
      lVar13 = lVar8 + 0x80;
      if (*(longlong *)(lVar8 + 0x88) != 0) {
        lVar13 = *(longlong *)(lVar8 + 0x88);
      }
      iVar20 = *(int *)(lVar13 + (ulonglong)
                                 (*(int *)(lVar8 + 0x90) - 1U &
                                 (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar7) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar20 != -1) {
        do {
          lVar13 = *(longlong *)(lVar8 + 0x48) + (longlong)iVar20 * 0x60;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x48) + (longlong)iVar20 * 0x60) == lVar16) {
            plVar19 = (longlong *)(lVar13 + 8);
            if (plVar19 != (longlong *)0x0 && lVar13 != 0) {
              uVar4 = *(uint *)(lVar13 + 0x30);
              if (uVar4 == 0) {
                uVar15 = 1;
                uVar18 = 0;
                iVar20 = 0;
                uVar7 = 0;
                goto LAB_1438c39d2;
              }
              puVar10 = *(uint **)(lVar13 + 0x28);
              if (*(uint **)(lVar13 + 0x28) == (uint *)0x0) {
                puVar10 = (uint *)(lVar13 + 0x18);
              }
              uVar7 = *puVar10;
              if (uVar7 != 0) {
                uVar18 = 0;
                iVar20 = 0;
                goto LAB_1438c399f;
              }
              iVar20 = uVar4 + 0x1e;
              if (-1 < (int)(uVar4 - 1)) {
                iVar20 = uVar4 - 1;
              }
              uVar18 = 0;
              uVar15 = (ulonglong)(uint)(iVar20 >> 5);
              if (iVar20 >> 5 < 1) {
                uVar15 = uVar18;
              }
              iVar20 = 0;
              goto LAB_1438c398a;
            }
            break;
          }
          iVar20 = *(int *)(lVar13 + 0x58);
        } while (iVar20 != -1);
      }
    }
  }
  local_50 = plVar9;
  FUN_140608954(param_3);
  goto LAB_1438c3924;
  while( true ) {
    iVar20 = iVar20 + 0x20;
    uVar7 = puVar10[uVar18 + 1];
    uVar18 = uVar18 + 1;
    if (uVar7 != 0) break;
LAB_1438c398a:
    if (uVar15 == uVar18) goto LAB_1438c3924;
  }
LAB_1438c399f:
  uVar15 = (ulonglong)(-uVar7 & uVar7);
  uVar1 = uVar15 * 2 + 1;
  lVar8 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  uVar7 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
  if ((int)uVar4 <= (int)uVar7) {
    uVar7 = uVar4;
  }
LAB_1438c39d2:
  if (uVar7 != uVar4) {
    local_60 = param_1 + 6;
    uVar21 = 0xffffffff;
    local_78 = plVar19;
    local_68 = (ulonglong)uVar4;
    local_58 = (uint *)(lVar13 + 0x18);
    do {
      lVar16 = *plVar19;
      lVar14 = (longlong)(int)uVar7 * 0x90;
      lVar8 = lVar16 + lVar14;
      lVar5 = *(longlong *)(lVar16 + 0x30 + lVar14);
      if (*(longlong *)(lVar16 + 0x48 + lVar14) != lVar5) {
        *(byte *)(lVar8 + 0x29) = *(byte *)(lVar8 + 0x29) | 1;
      }
      *(longlong *)(lVar8 + 0x48) = lVar5;
      uVar6 = *(undefined8 *)(lVar8 + 0x38);
      lVar16 = *(longlong *)(lVar8 + 0x40);
      if (lVar16 != 0) {
        LOCK();
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        UNLOCK();
      }
      plVar9 = *(longlong **)(lVar8 + 0x58);
      *(undefined8 *)(lVar8 + 0x50) = uVar6;
      *(longlong *)(lVar8 + 0x58) = lVar16;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          local_70 = uVar18;
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          uVar18 = local_70;
          plVar19 = local_78;
          if (*piVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            uVar18 = local_70;
            plVar19 = local_78;
          }
        }
      }
      if ((*(byte *)(lVar8 + 0x29) & 1) != 0) {
        (**(code **)(*param_1 + 0x2c8))(param_1,lVar8,param_2,1);
        local_50 = param_1;
        FUN_1447cd2ec(local_60,&local_50);
        plVar19 = local_78;
      }
      uVar21 = uVar21 & ~(uint)uVar15;
      puVar10 = *(uint **)(lVar13 + 0x28);
      if (*(uint **)(lVar13 + 0x28) == (uint *)0x0) {
        puVar10 = local_58;
      }
      uVar4 = *(uint *)(lVar13 + 0x30);
      iVar17 = (int)uVar18;
      lVar8 = (longlong)iVar17;
      uVar7 = puVar10[lVar8] & uVar21;
      if (uVar7 == 0) {
        iVar11 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar11 = uVar4 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar17) {
          iVar12 = iVar17;
        }
        if (iVar17 < iVar11) {
          lVar16 = 0;
          do {
            uVar7 = (puVar10 + lVar8 + 1)[lVar16];
            if (uVar7 != 0) {
              uVar18 = (ulonglong)(iVar17 + (int)lVar16 + 1);
              uVar21 = 0xffffffff;
              goto LAB_1438c3b10;
            }
            iVar20 = iVar20 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar12 - lVar8 != lVar16);
          uVar21 = 0xffffffff;
          iVar17 = iVar12;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        plVar19 = local_78;
        uVar7 = uVar4;
      }
      else {
LAB_1438c3b10:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar15 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar7 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar7) {
          uVar7 = uVar4;
        }
      }
    } while (uVar7 != (uint)local_68);
  }
LAB_1438c3924:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438c3baa FUN_1438c3baa body=296 status=ok
// SIG undefined FUN_1438c3baa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1438c3baa(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  lVar2 = (**(code **)(*param_1 + 800))(param_1,param_1 + 0xe);
  if (lVar2 == 0) {
    puVar3 = &DAT_14cb27778;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb277c8) {
      FUN_144b3d300(&DAT_14cb277c8);
      if (DAT_14cb277c8 == -1) {
        _DAT_14cb27798 = 0;
        _DAT_14cb277a0 = 0;
        _DAT_14cb27778 = 0;
        uRam000000014cb27780 = 0;
        _DAT_14cb277a4 = 0xffffffff00000080;
        _DAT_14cb277ac = 0;
        DAT_14cb277b8 = 0;
        _DAT_14cb277c0 = 0;
        atexit(FUN_1438c3cd3);
        _Init_thread_footer(&DAT_14cb277c8);
      }
    }
  }
  else {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    puVar3 = (undefined *)
             FUN_140f5d5c6(lVar2 + 0x48,
                           ((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4),&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c3cd3 FUN_1438c3cd3 body=47 status=ok
// SIG undefined FUN_1438c3cd3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438c3cd3(void)

{
  _DAT_14cb277c0 = 0;
  if (DAT_14cb277b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140d979a6(&DAT_14cb27778);
  return;
}



// FUNCTION 1438c3d02 FUN_1438c3d02 body=379 status=ok
// SIG undefined FUN_1438c3d02(void)

longlong FUN_1438c3d02(longlong *param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2f8))();
  iVar2 = (int)plVar3[5];
  if (iVar2 == 0) {
    uVar7 = 1;
    uVar11 = 0;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)plVar3[4];
    if ((uint *)plVar3[4] == (uint *)0x0) {
      puVar10 = (uint *)(plVar3 + 2);
    }
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar7 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar7 = 0;
      }
      uVar11 = 0;
      iVar12 = 0;
      do {
        if (uVar7 == uVar11) {
          return 0;
        }
        iVar12 = iVar12 + 0x20;
        uVar8 = puVar10[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar7 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar7 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar4 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    puVar10 = (uint *)(plVar3 + 2);
    if ((uint *)plVar3[4] != (uint *)0x0) {
      puVar10 = (uint *)plVar3[4];
    }
    iVar13 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar13 = iVar2 + -1;
    }
    iVar13 = iVar13 >> 5;
    uVar8 = 0xffffffff;
    do {
      if (*(char *)(*plVar3 + 0x28 + (longlong)iVar4 * 0x90) == param_3) {
        return *plVar3 + (longlong)iVar4 * 0x90;
      }
      uVar8 = uVar8 & ~(uint)uVar7;
      iVar4 = (int)uVar11;
      lVar14 = (longlong)iVar4;
      uVar5 = puVar10[lVar14] & uVar8;
      if (uVar5 == 0) {
        iVar6 = iVar13;
        if (iVar13 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar13 <= iVar4) {
          return 0;
        }
        lVar9 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar10[lVar14 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar6 - lVar14 == lVar9) {
            return 0;
          }
        }
        uVar11 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar8 = 0xffffffff;
      }
      uVar7 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar7 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar4 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar2);
  }
  return 0;
}



// FUNCTION 1438c3e7e FUN_1438c3e7e body=419 status=ok
// SIG undefined FUN_1438c3e7e(void)

undefined8 FUN_1438c3e7e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    uVar1 = *(uint *)(param_1 + 0x19);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1438c4003;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       ((((int)plVar3[2] == *(int *)((longlong)param_1 + 0xcc) &&
         ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)))) {
      plVar3 = (longlong *)(**(code **)(*param_1 + 800))(param_1,param_1 + 0xe);
      lVar2 = *param_2;
      if ((lVar2 != param_1[0xe]) && ((int)param_1[0x10] != *(int *)((longlong)param_1 + 0xac))) {
        uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar7 = (uint)lVar2 & 0xffff;
        plVar5 = param_1 + 0x16;
        if ((longlong *)param_1[0x17] != (longlong *)0x0) {
          plVar5 = (longlong *)param_1[0x17];
        }
        iVar8 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)param_1[0x18] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            plVar5 = (longlong *)(param_1[0xf] + (longlong)iVar8 * 0x18);
            if (*plVar5 == lVar2) {
              plVar6 = plVar5 + 1;
              if (plVar6 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
                if (plVar3 != (longlong *)0x0) {
                  (**(code **)(*plVar3 + 0x2f8))(plVar3);
                }
                (**(code **)(*(longlong *)*plVar6 + 0x2f0))();
                param_1[0xe] = *param_2;
                local_28 = *plVar6;
                FUN_1447cd2ec(param_1 + 10);
                uVar4 = 1;
                goto LAB_1438c4003;
              }
              break;
            }
            iVar8 = (int)plVar5[2];
          } while (iVar8 != -1);
        }
      }
    }
  }
  uVar4 = 0;
LAB_1438c4003:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1438c4022 FUN_1438c4022 body=6863 status=ok
// SIG undefined FUN_1438c4022(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1438c4022(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint *puVar25;
  void *_Dst;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  byte *pbVar29;
  longlong lVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  bool bVar34;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong *local_160;
  byte *local_158;
  longlong *local_150;
  uint local_144;
  uint *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  char local_110;
  undefined7 uStack_10f;
  longlong local_108;
  undefined4 local_fc;
  undefined4 local_f8 [2];
  undefined8 *local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  uVar8 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = param_3;
  local_130 = param_2;
  local_60 = uVar8;
  if (param_3 == 0) goto LAB_1438c5a95;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb27820) && (FUN_144b3d300(&DAT_14cb27820), DAT_14cb27820 == -1)) {
    DAT_14cb277f0 = (uint *)0x0;
    DAT_14cb277f8 = 0;
    DAT_14cb277d0 = 0;
    _DAT_14cb277d8 = 0;
    DAT_14cb277fc = 0x80;
    DAT_14cb27800 = -1;
    DAT_14cb27804 = 0;
    DAT_14cb27810 = (undefined4 *)0x0;
    DAT_14cb27818 = 0;
    atexit(FUN_1438c5af2);
    _Init_thread_footer(&DAT_14cb27820);
  }
  iVar21 = DAT_14cb277f8;
  local_160 = param_1;
  if (DAT_14cb277d8 != DAT_14cb27804) {
    puVar18 = &DAT_14cb27808;
    if (DAT_14cb27810 != (undefined4 *)0x0) {
      puVar18 = DAT_14cb27810;
    }
    iVar11 = DAT_14cb27818 + 3;
    if (-1 < DAT_14cb27818) {
      iVar11 = DAT_14cb27818;
    }
    if (DAT_14cb277d8 - DAT_14cb27804 < iVar11 >> 2) {
      if (DAT_14cb277f8 != 0) {
        puVar16 = DAT_14cb277f0;
        if (DAT_14cb277f0 == (uint *)0x0) {
          puVar16 = &DAT_14cb277e0;
        }
        uVar31 = *puVar16;
        if (uVar31 == 0) {
          iVar11 = DAT_14cb277f8 + 0x1e;
          if (-1 < DAT_14cb277f8 + -1) {
            iVar11 = DAT_14cb277f8 + -1;
          }
          uVar8 = 0;
          uVar33 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar33 = uVar8;
          }
          iVar11 = 0;
          do {
            if (uVar33 == uVar8) goto LAB_1438c40ef;
            iVar11 = iVar11 + 0x20;
            uVar31 = puVar16[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar31 == 0);
        }
        else {
          uVar8 = 0;
          iVar11 = 0;
        }
        uVar20 = (ulonglong)(-uVar31 & uVar31);
        uVar33 = uVar20 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar13 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar13 < DAT_14cb277f8) {
          uVar31 = 0xffffffff;
          do {
            puVar18[*(int *)(DAT_14cb277d0 + 0x6c + (longlong)iVar13 * 0x70)] = 0xffffffff;
            uVar31 = ~(uint)uVar20 & uVar31;
            puVar16 = DAT_14cb277f0;
            if (DAT_14cb277f0 == (uint *)0x0) {
              puVar16 = &DAT_14cb277e0;
            }
            iVar13 = (int)uVar8;
            lVar15 = (longlong)iVar13;
            uVar12 = puVar16[lVar15] & uVar31;
            if (uVar12 == 0) {
              iVar14 = DAT_14cb277f8 + 0x1e;
              if (-1 < DAT_14cb277f8 + -1) {
                iVar14 = DAT_14cb277f8 + -1;
              }
              iVar14 = iVar14 >> 5;
              iVar11 = iVar11 + 0x20;
              iVar7 = iVar14;
              if (iVar14 < iVar13) {
                iVar7 = iVar13;
              }
              if (iVar13 < iVar14) {
                lVar30 = 0;
                do {
                  uVar12 = puVar16[lVar15 + lVar30 + 1];
                  if (uVar12 != 0) {
                    uVar8 = (ulonglong)(iVar13 + (int)lVar30 + 1);
                    uVar31 = 0xffffffff;
                    goto LAB_1438c4425;
                  }
                  iVar11 = iVar11 + 0x20;
                  lVar30 = lVar30 + 1;
                } while (iVar7 - lVar15 != lVar30);
                uVar31 = 0xffffffff;
                iVar13 = iVar7;
              }
              uVar8 = (ulonglong)(iVar13 + 1);
              iVar13 = DAT_14cb277f8;
            }
            else {
LAB_1438c4425:
              uVar20 = (ulonglong)(-uVar12 & uVar12);
              uVar33 = uVar20 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar33 != 0) {
                for (; uVar33 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar13 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              if (DAT_14cb277f8 <= iVar13) {
                iVar13 = DAT_14cb277f8;
              }
            }
          } while (iVar13 != iVar21);
        }
        goto LAB_1438c40ef;
      }
    }
    else {
      if (0 < DAT_14cb27818) {
        lVar15 = 0;
        do {
          puVar18[lVar15] = 0xffffffff;
          lVar15 = lVar15 + 1;
        } while (lVar15 < DAT_14cb27818);
      }
LAB_1438c40ef:
      if (DAT_14cb277f8 != 0) {
        puVar16 = DAT_14cb277f0;
        if (DAT_14cb277f0 == (uint *)0x0) {
          puVar16 = &DAT_14cb277e0;
        }
        uVar31 = *puVar16;
        if (uVar31 == 0) {
          iVar21 = DAT_14cb277f8 + 0x1e;
          if (-1 < DAT_14cb277f8 + -1) {
            iVar21 = DAT_14cb277f8 + -1;
          }
          uVar8 = 0;
          uVar33 = (ulonglong)(uint)(iVar21 >> 5);
          if (iVar21 >> 5 < 1) {
            uVar33 = uVar8;
          }
          iVar21 = 0;
          do {
            if (uVar33 == uVar8) goto LAB_1438c446c;
            iVar21 = iVar21 + 0x20;
            uVar31 = puVar16[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar31 == 0);
        }
        else {
          uVar8 = 0;
          iVar21 = 0;
        }
        uVar20 = (ulonglong)(-uVar31 & uVar31);
        uVar33 = uVar20 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar11 = (iVar21 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar11 < DAT_14cb277f8) {
          uVar31 = 0xffffffff;
          do {
            lVar15 = DAT_14cb277d0;
            lVar30 = (longlong)iVar11 * 0x70;
            *(undefined4 *)(DAT_14cb277d0 + 0x60 + lVar30) = 0;
            if (*(longlong *)(lVar15 + 0x58 + lVar30) != 0) {
              FUN_1400020a8();
            }
            FUN_1415c5f06(lVar15 + lVar30 + 0x18);
            uVar31 = uVar31 & ~(uint)uVar20;
            puVar16 = DAT_14cb277f0;
            if (DAT_14cb277f0 == (uint *)0x0) {
              puVar16 = &DAT_14cb277e0;
            }
            iVar11 = (int)uVar8;
            lVar15 = (longlong)iVar11;
            uVar12 = puVar16[lVar15] & uVar31;
            if (uVar12 == 0) {
              iVar13 = DAT_14cb277f8 + 0x1e;
              if (-1 < DAT_14cb277f8 + -1) {
                iVar13 = DAT_14cb277f8 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar14 = iVar13;
              if (iVar13 < iVar11) {
                iVar14 = iVar11;
              }
              if (iVar13 <= iVar11) break;
              lVar30 = 0;
              while( true ) {
                iVar21 = iVar21 + 0x20;
                uVar12 = puVar16[lVar15 + lVar30 + 1];
                if (uVar12 != 0) break;
                lVar30 = lVar30 + 1;
                if (iVar14 - lVar15 == lVar30) goto LAB_1438c446c;
              }
              uVar8 = (ulonglong)(iVar11 + (int)lVar30 + 1);
              uVar31 = 0xffffffff;
            }
            uVar20 = (ulonglong)(-uVar12 & uVar12);
            uVar33 = uVar20 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar33 != 0) {
              for (; uVar33 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar11 = (iVar21 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          } while (iVar11 < DAT_14cb277f8);
        }
      }
    }
LAB_1438c446c:
    param_1 = local_160;
    bVar34 = (longlong)_DAT_14cb277d8 < 0;
    _DAT_14cb277d8 = _DAT_14cb277d8 & 0xffffffff00000000;
    if (bVar34) {
      FUN_140875b54(&DAT_14cb277d0,0);
    }
    DAT_14cb27800 = -1;
    DAT_14cb27804 = 0;
    DAT_14cb277f8 = 0;
  }
  uVar8 = 0;
  if ((longlong)*(int *)(local_138 + 0x38) != 0) {
    lVar15 = *(longlong *)(local_138 + 0x30);
    local_128 = (longlong)*(int *)(local_138 + 0x38) * 0x50 + lVar15;
    local_130 = local_130 + 0x48;
    do {
      lVar30 = FUN_1402218d6(lVar15);
      if (lVar30 != 0) {
        FUN_14022188c(lVar15,&local_108);
        uVar31 = (uint)((ulonglong)local_108 >> 0x10);
        uVar12 = (uint)local_108 & 0xffff;
        local_150 = (longlong *)
                    FUN_140f5d5c6(local_130,
                                  ((uint)local_108 << 0x10 | uVar12) +
                                  (int)((ulonglong)local_108 >> 0x20) +
                                  (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar12 >> 4),&local_108);
        (**(code **)(*param_1 + 0x340))(param_1,&local_120,lVar15);
        uVar31 = FUN_140e96087(&local_120);
        iVar11 = FUN_1438c6c5e(uVar31,&local_120);
        iVar21 = DAT_14cb27800;
        uVar8 = _DAT_14cb277d8;
        if ((iVar11 == -1) || (DAT_14cb277d0 + (longlong)iVar11 * 0x70 == 0)) {
          if (DAT_14cb27804 == 0) {
            iVar21 = DAT_14cb277d8;
            _DAT_14cb277d8 = CONCAT44(DAT_14cb277dc,DAT_14cb277d8 + 1);
            if (DAT_14cb277dc == iVar21) {
              FUN_140275bcc(&DAT_14cb277d0,uVar8 & 0xffffffff);
            }
            iVar11 = DAT_14cb277f8;
            if (DAT_14cb277f8 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = DAT_14cb277f8 + 0x1e;
              if (-1 < DAT_14cb277f8 + -1) {
                iVar13 = DAT_14cb277f8 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            iVar14 = DAT_14cb277f8 + 1;
            iVar7 = DAT_14cb277f8 + 0x1f;
            if (-1 < DAT_14cb277f8) {
              iVar7 = DAT_14cb277f8;
            }
            if (iVar7 >> 5 != iVar13) {
              if (DAT_14cb277fc <= DAT_14cb277f8) {
                if (DAT_14cb277f8 + 0x20U < 0xa0) {
                  DAT_14cb277fc = 0x80;
                }
                else {
                  uVar12 = DAT_14cb277f8 + 0x20U >> 5;
                  if (DAT_14cb277fc + 0x1fU < 0xa0) {
                    uVar32 = 4;
                    if (4 < uVar12) {
                      uVar32 = uVar12;
                    }
                  }
                  else {
                    uVar32 = uVar12 + (uVar12 * 3 >> 3) + 0x10;
                  }
                  uVar8 = (ulonglong)(uVar32 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar22 = (uint)(uVar8 + 0xf);
                      if (uVar32 < 0x1ffd) {
                        uVar8 = (ulonglong)
                                (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar22 >> 4]]
                        ;
                      }
                      else {
                        uVar33 = uVar8 + 0xf & 0xfffffffffffffff0;
                        param_1 = local_160;
                        if (uVar33 < 0x7ff1) {
                          bVar6 = (&DAT_14c841e00)[uVar22 >> 4];
                          uVar20 = 0x32;
                          if (0x32 < bVar6) {
                            uVar20 = (ulonglong)bVar6;
                          }
                          uVar27 = 0x32 - (ulonglong)bVar6;
                          do {
                            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar27 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar27 & 0xffffffff] & 0xf) == 0)
                            goto LAB_1438c54ef;
                            lVar30 = uVar20 + 1 + uVar27;
                            uVar27 = uVar27 - 1;
                          } while (lVar30 != 0x33);
                        }
                        uVar8 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar8 = 0x10;
                        }
                        uVar8 = -uVar8 & (uVar33 + uVar8) - 1;
                      }
                    }
                    else {
                      uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
                    }
                  }
LAB_1438c54ef:
                  iVar13 = (int)(uVar8 >> 2);
                  DAT_14cb277fc = iVar13 << 5;
                  if (iVar13 < (int)uVar12) {
                    DAT_14cb277fc = -0x20;
                  }
                }
                FUN_1446efbd8(&DAT_14cb277e0,DAT_14cb277f8);
                iVar14 = DAT_14cb277f8 + 1;
              }
              iVar13 = iVar14 + 0x1f;
              if (-1 < iVar14) {
                iVar13 = iVar14;
              }
              if (iVar14 % 0x20 != 0) {
                puVar16 = DAT_14cb277f0;
                if (DAT_14cb277f0 == (uint *)0x0) {
                  puVar16 = &DAT_14cb277e0;
                }
                bVar6 = -(char)(iVar14 % 0x20);
                DAT_14cb277f8 = iVar14;
                puVar16[iVar13 >> 5] = (puVar16[iVar13 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
                iVar14 = DAT_14cb277f8;
              }
            }
            DAT_14cb277f8 = iVar14;
            lVar30 = (longlong)iVar21;
            puVar16 = DAT_14cb277f0;
            if (DAT_14cb277f0 == (uint *)0x0) {
              puVar16 = &DAT_14cb277e0;
            }
            bVar6 = (byte)iVar11 & 0x1f;
            puVar16[iVar7 >> 5] = puVar16[iVar7 >> 5] & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          }
          else {
            lVar30 = (longlong)DAT_14cb27800;
            DAT_14cb27800 = *(int *)(DAT_14cb277d0 + 4 + lVar30 * 0x70);
            DAT_14cb27804 = DAT_14cb27804 + -1;
            param_1 = local_160;
            if (DAT_14cb27804 != 0) {
              *(undefined4 *)(DAT_14cb277d0 + (longlong)DAT_14cb27800 * 0x70) = 0xffffffff;
            }
          }
          puVar16 = DAT_14cb277f0;
          if (DAT_14cb277f0 == (uint *)0x0) {
            puVar16 = &DAT_14cb277e0;
          }
          iVar11 = iVar21 + 0x1f;
          if (-1 < iVar21) {
            iVar11 = iVar21;
          }
          puVar16[iVar11 >> 5] = puVar16[iVar11 >> 5] | 1 << ((byte)iVar21 & 0x1f);
          _Src = (void *)(DAT_14cb277d0 + lVar30 * 0x70);
          local_c8 = 0;
          uStack_b0 = 0;
          local_d8 = 0;
          plStack_d0 = (longlong *)0x0;
          local_e8 = 0;
          plStack_e0 = (longlong *)0x0;
          uStack_c0 = 0x8000000000;
          local_b8 = 0xffffffff;
          puVar3 = (undefined8 *)(DAT_14cb277d0 + 0x18 + lVar30 * 0x70);
          puVar3[-1] = CONCAT71(uStack_10f,local_110);
          *(undefined4 *)(puVar3 + -3) = local_120;
          *(undefined4 *)((longlong)puVar3 + -0x14) = uStack_11c;
          *(undefined4 *)(puVar3 + -2) = uStack_118;
          *(undefined4 *)((longlong)puVar3 + -0xc) = uStack_114;
          puVar3[4] = 0;
          *(undefined4 *)(puVar3 + 5) = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined8 *)((longlong)puVar3 + 0x2c) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
          if (puVar3 != &local_e8) {
            *(undefined4 *)((longlong)_Src + 0x28) = 0;
            *(undefined4 *)((longlong)_Src + 0x2c) = 0;
            *(undefined4 *)((longlong)_Src + 0x30) = 0;
            *(undefined4 *)((longlong)_Src + 0x34) = 0;
            uStack_c0 = 0;
          }
          *(undefined4 *)((longlong)_Src + 0x50) = 0;
          *(undefined8 *)((longlong)_Src + 0x58) = 0;
          plStack_a8 = (longlong *)0x0;
          *(undefined4 *)((longlong)_Src + 0x60) = 0;
          uStack_a0 = 0;
          FUN_1415c5f06();
          *(undefined4 *)((longlong)_Src + 0x68) = 0xffffffff;
          uVar12 = DAT_14cb277d8 - DAT_14cb27804;
          iVar11 = 1;
          if (uVar12 == 1) {
LAB_1438c5002:
            if (((int)uVar12 < 1) || (iVar11 <= DAT_14cb27818)) {
              uVar31 = DAT_14cb27818 - 1U & uVar31;
              *(uint *)((longlong)_Src + 0x6c) = uVar31;
              puVar18 = DAT_14cb27810;
              if (DAT_14cb27810 == (undefined4 *)0x0) {
                puVar18 = &DAT_14cb27808;
              }
              *(undefined4 *)((longlong)_Src + 0x68) =
                   puVar18[(longlong)DAT_14cb27818 - 1U & (longlong)(int)uVar31];
              puVar18 = DAT_14cb27810;
              if (DAT_14cb27810 == (undefined4 *)0x0) {
                puVar18 = &DAT_14cb27808;
              }
              puVar18[(longlong)DAT_14cb27818 - 1U & (longlong)(int)uVar31] = iVar21;
            }
            else {
              DAT_14cb27818 = iVar11;
              FUN_14644e46e();
            }
          }
          else {
            iVar13 = FUN_1438c6c5e(uVar31,_Src);
            lVar30 = DAT_14cb277d0;
            if (iVar13 == -1) {
              param_1 = local_160;
              if (3 < uVar12) {
                uVar8 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
                lVar30 = 0x3f;
                if (uVar8 != 0) {
                  for (; uVar8 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                  }
                }
                iVar11 = 1 << ((byte)lVar30 & 0x1f);
              }
              goto LAB_1438c5002;
            }
            lVar9 = (longlong)iVar13 * 0x70;
            *(undefined4 *)(DAT_14cb277d0 + 0x60 + lVar9) = 0;
            if (*(longlong *)(lVar30 + 0x58 + lVar9) != 0) {
              FUN_1400020a8();
            }
            _Dst = (void *)(lVar30 + lVar9);
            FUN_1415c5f06((longlong)_Dst + 0x18);
            memmove(_Dst,_Src,0x68);
            FUN_147fa3ffa(iVar21);
            param_1 = local_160;
          }
          lVar30 = DAT_14cb277d0 + (longlong)iVar21 * 0x70;
        }
        else {
          lVar30 = DAT_14cb277d0 + (longlong)iVar11 * 0x70;
        }
        plVar23 = (longlong *)(lVar30 + 0x18);
        uVar31 = (uint)((ulonglong)local_108 >> 0x10);
        uVar12 = (uint)local_108 & 0xffff;
        uVar32 = ((uint)local_108 << 0x10 | uVar12) + (int)((ulonglong)local_108 >> 0x20) +
                 (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar12 >> 4);
        uVar12 = *(uint *)(lVar30 + 0x20);
        uVar31 = *(uint *)(lVar30 + 0x4c);
        if (uVar12 != uVar31) {
          lVar9 = lVar30 + 0x50;
          if (*(longlong *)(lVar30 + 0x58) != 0) {
            lVar9 = *(longlong *)(lVar30 + 0x58);
          }
          iVar21 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar30 + 0x60) - 1U & uVar32) * 4);
          if (iVar21 != -1) {
            do {
              plVar24 = (longlong *)(*plVar23 + (longlong)iVar21 * 0x14);
              if (*plVar24 == local_108) {
                if (plVar24 != (longlong *)0x0) goto LAB_1438c47b2;
                break;
              }
              iVar21 = *(int *)((longlong)plVar24 + 0xc);
            } while (iVar21 != -1);
          }
        }
        if (uVar31 == 0) {
          *(uint *)(lVar30 + 0x20) = uVar12 + 1;
          if (*(uint *)(lVar30 + 0x24) == uVar12) {
            FUN_140171ad2(plVar23,uVar12);
          }
          iVar21 = *(int *)(lVar30 + 0x40);
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
          lVar19 = lVar30 + 0x28;
          iVar14 = iVar21 + 1;
          iVar13 = iVar21 + 0x1f;
          if (-1 < iVar21) {
            iVar13 = iVar21;
          }
          if (iVar13 >> 5 == iVar11) {
            *(int *)(lVar30 + 0x40) = iVar14;
          }
          else {
            if (*(int *)(lVar30 + 0x44) <= iVar21) {
              iVar11 = iVar21;
              if (iVar21 + 0x20U < 0xa0) {
                iVar14 = 0x80;
              }
              else {
                uVar31 = iVar21 + 0x20U >> 5;
                pbVar29 = (byte *)(ulonglong)uVar31;
                if (*(int *)(lVar30 + 0x44) + 0x1fU < 0xa0) {
                  uVar22 = 4;
                  if (4 < uVar31) {
                    uVar22 = uVar31;
                  }
                }
                else {
                  uVar22 = uVar31 + (uVar31 * 3 >> 3) + 0x10;
                }
                uVar8 = (ulonglong)(uVar22 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar31 = (uint)(uVar8 + 0xf);
                    if (uVar22 < 0x1ffd) {
                      uVar8 = (ulonglong)
                              (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar31 >> 4]];
                    }
                    else {
                      uVar33 = uVar8 + 0xf & 0xfffffffffffffff0;
                      param_1 = local_160;
                      if (uVar33 < 0x7ff1) {
                        bVar6 = (&DAT_14c841e00)[uVar31 >> 4];
                        uVar20 = 0x32;
                        if (0x32 < bVar6) {
                          uVar20 = (ulonglong)bVar6;
                        }
                        uVar27 = 0x32 - (ulonglong)bVar6;
                        do {
                          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar27 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar27 & 0xffffffff] & 0xf) == 0)
                          goto LAB_1438c541c;
                          lVar9 = uVar20 + 1 + uVar27;
                          uVar27 = uVar27 - 1;
                        } while (lVar9 != 0x33);
                      }
                      uVar8 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar8 = 0x10;
                      }
                      uVar8 = -uVar8 & (uVar33 + uVar8) - 1;
                    }
                  }
                  else {
                    local_158 = pbVar29;
                    uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
                    pbVar29 = local_158;
                    iVar11 = *(int *)(lVar30 + 0x40);
                  }
                }
LAB_1438c541c:
                iVar7 = (int)(uVar8 >> 2);
                iVar14 = iVar7 << 5;
                if (iVar7 < (int)pbVar29) {
                  iVar14 = -0x20;
                }
              }
              *(int *)(lVar30 + 0x44) = iVar14;
              FUN_1446efbd8(lVar19,iVar11);
              iVar14 = *(int *)(lVar30 + 0x40) + 1;
            }
            iVar11 = iVar14 + 0x1f;
            if (-1 < iVar14) {
              iVar11 = iVar14;
            }
            *(int *)(lVar30 + 0x40) = iVar14;
            if (iVar14 % 0x20 != 0) {
              lVar9 = *(longlong *)(lVar30 + 0x38);
              if (*(longlong *)(lVar30 + 0x38) == 0) {
                lVar9 = lVar19;
              }
              bVar6 = -(char)(iVar14 % 0x20);
              *(uint *)(lVar9 + (longlong)(iVar11 >> 5) * 4) =
                   (uint)(*(int *)(lVar9 + (longlong)(iVar11 >> 5) * 4) << (bVar6 & 0x1f)) >>
                   (bVar6 & 0x1f);
            }
          }
          lVar9 = (longlong)(int)uVar12;
          if (*(longlong *)(lVar30 + 0x38) != 0) {
            lVar19 = *(longlong *)(lVar30 + 0x38);
          }
          bVar6 = (byte)iVar21 & 0x1f;
          puVar16 = (uint *)(lVar19 + (longlong)(iVar13 >> 5) * 4);
          *puVar16 = *puVar16 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        }
        else {
          uVar12 = *(uint *)(lVar30 + 0x48);
          lVar9 = (longlong)(int)uVar12;
          iVar21 = *(int *)(*plVar23 + 4 + lVar9 * 0x14);
          *(int *)(lVar30 + 0x48) = iVar21;
          *(uint *)(lVar30 + 0x4c) = uVar31 - 1;
          param_1 = local_160;
          if (uVar31 - 1 != 0) {
            *(undefined4 *)(*plVar23 + (longlong)iVar21 * 0x14) = 0xffffffff;
          }
        }
        puVar25 = (uint *)(ulonglong)uVar12;
        puVar16 = (uint *)(lVar30 + 0x28);
        puVar17 = *(uint **)(lVar30 + 0x38);
        if (*(uint **)(lVar30 + 0x38) == (uint *)0x0) {
          puVar17 = puVar16;
        }
        uVar31 = uVar12 + 0x1f;
        if (-1 < (int)uVar12) {
          uVar31 = uVar12;
        }
        puVar17[(int)uVar31 >> 5] = puVar17[(int)uVar31 >> 5] | 1 << ((byte)uVar12 & 0x1f);
        plVar24 = (longlong *)(*plVar23 + lVar9 * 0x14);
        *plVar24 = local_108;
        *(undefined1 *)(plVar24 + 1) = 0;
        *(undefined4 *)((longlong)plVar24 + 0xc) = 0xffffffff;
        uVar31 = *(int *)(lVar30 + 0x20) - *(int *)(lVar30 + 0x4c);
        if ((uVar31 != 0) && (uVar31 != 1)) {
          lVar9 = lVar30 + 0x50;
          if (*(longlong *)(lVar30 + 0x58) != 0) {
            lVar9 = *(longlong *)(lVar30 + 0x58);
          }
          iVar21 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar30 + 0x60) - 1U & uVar32) * 4);
          if (iVar21 != -1) {
            do {
              plVar2 = (longlong *)(*plVar23 + (longlong)iVar21 * 0x14);
              if (*plVar2 == local_108) {
                lVar30 = *plVar24;
                *(int *)(plVar2 + 1) = (int)plVar24[1];
                *plVar2 = lVar30;
                FUN_147fa407a(plVar23,puVar25);
                goto LAB_1438c47a0;
              }
              iVar21 = *(int *)((longlong)plVar2 + 0xc);
            } while (iVar21 != -1);
          }
        }
        if (uVar31 < 4) {
          uVar22 = 1;
        }
        else {
          uVar8 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
          lVar9 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar22 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((int)uVar31 < 1) || ((int)uVar22 <= *(int *)(lVar30 + 0x60))) {
          uVar32 = *(int *)(lVar30 + 0x60) - 1U & uVar32;
          *(uint *)(plVar24 + 2) = uVar32;
          lVar9 = *(longlong *)(lVar30 + 0x58);
          if (*(longlong *)(lVar30 + 0x58) == 0) {
            lVar9 = lVar30 + 0x50;
          }
          *(undefined4 *)((longlong)plVar24 + 0xc) =
               *(undefined4 *)
                (lVar9 + ((longlong)*(int *)(lVar30 + 0x60) - 1U & (longlong)(int)uVar32) * 4);
          lVar9 = *(longlong *)(lVar30 + 0x58);
          if (*(longlong *)(lVar30 + 0x58) == 0) {
            lVar9 = lVar30 + 0x50;
          }
          *(uint *)(lVar9 + ((longlong)*(int *)(lVar30 + 0x60) - 1U & (longlong)(int)uVar32) * 4) =
               uVar12;
        }
        else {
          *(uint *)(lVar30 + 0x60) = uVar22;
          plVar24 = (longlong *)(lVar30 + 0x58);
          if (*(longlong *)(lVar30 + 0x58) != 0) {
            FUN_1446efa72(plVar24,0,0,4);
            uVar22 = *(uint *)(lVar30 + 0x60);
          }
          lVar9 = lVar30 + 0x50;
          if (uVar22 == 1) {
            if (*plVar24 != 0) {
              FUN_1446efa72(plVar24,0,0,4);
            }
LAB_1438c50af:
            uVar31 = 0;
            do {
              lVar19 = *(longlong *)(lVar30 + 0x58);
              if (*(longlong *)(lVar30 + 0x58) == 0) {
                lVar19 = lVar9;
              }
              *(undefined4 *)
               (lVar19 + (ulonglong)(*(int *)(lVar30 + 0x60) + 0x7fffffffU & uVar31) * 4) =
                   0xffffffff;
              uVar31 = uVar31 + 1;
            } while (uVar22 != uVar31);
          }
          else {
            if (uVar22 == 0) goto LAB_1438c47a0;
            FUN_1446efa72(plVar24,0,uVar22,4);
            if (0 < (int)uVar22) goto LAB_1438c50af;
          }
          iVar21 = *(int *)(lVar30 + 0x40);
          if (iVar21 == 0) {
            uVar8 = 0;
            uVar33 = 1;
            iVar13 = 0;
            iVar11 = 0;
          }
          else {
            puVar17 = *(uint **)(lVar30 + 0x38);
            if (*(uint **)(lVar30 + 0x38) == (uint *)0x0) {
              puVar17 = puVar16;
            }
            uVar31 = *puVar17;
            if (uVar31 == 0) {
              iVar11 = iVar21 + 0x1e;
              if (-1 < iVar21 + -1) {
                iVar11 = iVar21 + -1;
              }
              uVar8 = 0;
              uVar33 = (ulonglong)(uint)(iVar11 >> 5);
              if (iVar11 >> 5 < 1) {
                uVar33 = uVar8;
              }
              iVar11 = 0;
              do {
                if (uVar33 == uVar8) goto LAB_1438c47a0;
                iVar11 = iVar11 + 0x20;
                uVar31 = puVar17[uVar8 + 1];
                uVar8 = uVar8 + 1;
              } while (uVar31 == 0);
            }
            else {
              uVar8 = 0;
              iVar11 = 0;
            }
            uVar33 = (ulonglong)(-uVar31 & uVar31);
            uVar20 = uVar33 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar13 = (iVar11 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if (iVar21 <= iVar13) {
              iVar13 = iVar21;
            }
          }
          if (iVar13 < iVar21) {
            uVar31 = 0xffffffff;
            do {
              local_158 = (byte *)CONCAT44(local_158._4_4_,iVar11);
              lVar19 = *plVar23;
              lVar28 = (longlong)iVar13;
              uVar10 = *(undefined8 *)(lVar19 + lVar28 * 0x14);
              uVar32 = (uint)((ulonglong)uVar10 >> 0x10);
              uVar22 = (uint)uVar10 & 0xffff;
              uVar20 = (longlong)
                       (int)(((uint)uVar10 << 0x10 | uVar22) + (int)((ulonglong)uVar10 >> 0x20) +
                             (uVar32 << 0x13 | uVar32 & 0xffff) + (uVar22 >> 4)) &
                       (longlong)*(int *)(lVar30 + 0x60) - 1U;
              iVar21 = (int)uVar20;
              *(int *)(lVar19 + 0x10 + lVar28 * 0x14) = iVar21;
              lVar26 = *(longlong *)(lVar30 + 0x58);
              if (*(longlong *)(lVar30 + 0x58) == 0) {
                lVar26 = lVar9;
              }
              *(undefined4 *)(lVar19 + 0xc + lVar28 * 0x14) =
                   *(undefined4 *)(lVar26 + ((longlong)*(int *)(lVar30 + 0x60) - 1U & uVar20) * 4);
              lVar19 = *(longlong *)(lVar30 + 0x58);
              if (*(longlong *)(lVar30 + 0x58) == 0) {
                lVar19 = lVar9;
              }
              *(int *)(lVar19 + ((longlong)iVar21 & (longlong)*(int *)(lVar30 + 0x60) - 1U) * 4) =
                   iVar13;
              uVar31 = ~(uint)uVar33 & uVar31;
              puVar17 = *(uint **)(lVar30 + 0x38);
              if (*(uint **)(lVar30 + 0x38) == (uint *)0x0) {
                puVar17 = puVar16;
              }
              iVar21 = *(int *)(lVar30 + 0x40);
              iVar13 = (int)uVar8;
              lVar19 = (longlong)iVar13;
              uVar32 = puVar17[lVar19] & uVar31;
              param_1 = local_160;
              local_140 = puVar25;
              if (uVar32 == 0) {
                iVar14 = iVar21 + 0x1e;
                if (-1 < iVar21 + -1) {
                  iVar14 = iVar21 + -1;
                }
                iVar14 = iVar14 >> 5;
                iVar7 = iVar14;
                if (iVar14 < iVar13) {
                  iVar7 = iVar13;
                }
                if (iVar14 <= iVar13) break;
                lVar26 = 0;
                while( true ) {
                  iVar11 = iVar11 + 0x20;
                  uVar32 = puVar17[lVar19 + lVar26 + 1];
                  if (uVar32 != 0) break;
                  lVar26 = lVar26 + 1;
                  if (iVar7 - lVar19 == lVar26) goto LAB_1438c47a0;
                }
                uVar8 = (ulonglong)(iVar13 + (int)lVar26 + 1);
                uVar31 = 0xffffffff;
              }
              uVar33 = (ulonglong)(-uVar32 & uVar32);
              uVar20 = uVar33 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              iVar13 = (iVar11 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            } while (iVar13 < iVar21);
          }
        }
LAB_1438c47a0:
        plVar24 = (longlong *)(*plVar23 + (longlong)(int)uVar12 * 0x14);
LAB_1438c47b2:
        plVar23 = local_150;
        pbVar29 = (byte *)(plVar24 + 1);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb27838) &&
           (FUN_144b3d300(&DAT_14cb27838), DAT_14cb27838 == -1)) {
          DAT_14cb27828 = 0;
          _DAT_14cb27830 = 0;
          atexit((_func_5014 *)&LAB_1438c5b1b);
          _Init_thread_footer(&DAT_14cb27838);
        }
        bVar34 = (longlong)_DAT_14cb27830 < 0;
        _DAT_14cb27830 = _DAT_14cb27830 & 0xffffffff00000000;
        if (bVar34) {
          FUN_147fa40ec();
        }
        iVar21 = (int)plVar23[5];
        local_158 = pbVar29;
        if (iVar21 == 0) {
          uVar8 = 1;
          uVar33 = 0;
          iVar13 = 0;
          iVar11 = 0;
        }
        else {
          puVar16 = (uint *)plVar23[4];
          if ((uint *)plVar23[4] == (uint *)0x0) {
            puVar16 = (uint *)(plVar23 + 2);
          }
          uVar31 = *puVar16;
          if (uVar31 == 0) {
            iVar11 = iVar21 + 0x1e;
            if (-1 < iVar21 + -1) {
              iVar11 = iVar21 + -1;
            }
            uVar33 = 0;
            uVar8 = (ulonglong)(uint)(iVar11 >> 5);
            if (iVar11 >> 5 < 1) {
              uVar8 = uVar33;
            }
            iVar13 = 0;
            do {
              if (uVar8 == uVar33) goto LAB_1438c49bd;
              iVar13 = iVar13 + 0x20;
              uVar31 = puVar16[uVar33 + 1];
              uVar33 = uVar33 + 1;
            } while (uVar31 == 0);
          }
          else {
            uVar33 = 0;
            iVar13 = 0;
          }
          uVar8 = (ulonglong)(-uVar31 & uVar31);
          uVar20 = uVar8 * 2 + 1;
          lVar30 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          iVar11 = (iVar13 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
          if (iVar21 <= iVar11) {
            iVar11 = iVar21;
          }
        }
        if (iVar11 < iVar21) {
          uVar31 = 0xffffffff;
          local_144 = 0;
          local_140 = (uint *)(plVar23 + 2);
          do {
            lVar30 = *local_150 + (longlong)iVar11 * 0x90;
            if ((*(byte *)(*local_150 + 0x28 + (longlong)iVar11 * 0x90) == *local_158) &&
               (*(char *)(lVar30 + 0x70) == local_110)) {
              uVar10 = FUN_147fa0716(lVar30,lVar15);
              local_144 = (uint)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
            }
            FUN_147fa05bc(lVar30,lVar15);
            uVar20 = _DAT_14cb27830;
            lVar30 = (longlong)DAT_14cb27830;
            uVar12 = DAT_14cb27830 + 1;
            _DAT_14cb27830 = CONCAT44(DAT_14cb27834,uVar12);
            if (DAT_14cb27834 < uVar12) {
              FUN_141761b76(&DAT_14cb27828,uVar20 & 0xffffffff);
            }
            *(int *)(DAT_14cb27828 + lVar30 * 4) = iVar11;
            uVar31 = uVar31 & ~(uint)uVar8;
            puVar16 = (uint *)local_150[4];
            if ((uint *)local_150[4] == (uint *)0x0) {
              puVar16 = local_140;
            }
            iVar21 = (int)local_150[5];
            iVar11 = (int)uVar33;
            lVar30 = (longlong)iVar11;
            uVar12 = puVar16[lVar30] & uVar31;
            if (uVar12 == 0) {
              iVar14 = iVar21 + 0x1e;
              if (-1 < iVar21 + -1) {
                iVar14 = iVar21 + -1;
              }
              iVar14 = iVar14 >> 5;
              iVar7 = iVar14;
              if (iVar14 < iVar11) {
                iVar7 = iVar11;
              }
              if (iVar14 <= iVar11) break;
              lVar9 = 0;
              while( true ) {
                iVar13 = iVar13 + 0x20;
                uVar12 = puVar16[lVar30 + lVar9 + 1];
                if (uVar12 != 0) break;
                lVar9 = lVar9 + 1;
                if (iVar7 - lVar30 == lVar9) goto LAB_1438c49b2;
              }
              uVar33 = (ulonglong)(iVar11 + (int)lVar9 + 1);
              uVar31 = 0xffffffff;
            }
            uVar8 = (ulonglong)(-uVar12 & uVar12);
            uVar20 = uVar8 * 2 + 1;
            lVar30 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            iVar11 = (iVar13 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
          } while (iVar11 < iVar21);
LAB_1438c49b2:
          if ((local_144 & 1) == 0) goto LAB_1438c49bd;
        }
        else {
LAB_1438c49bd:
          bVar6 = *local_158;
          FUN_14022188c(lVar15,&local_e8);
          lVar30 = FUN_1402218d6(lVar15);
          if (lVar30 == 0) {
            plVar23 = (longlong *)&DAT_14c844840;
            if (*(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
                < DAT_14c844850) {
              FUN_144b3d300(&DAT_14c844850);
              plVar23 = (longlong *)&DAT_14c844840;
              if (DAT_14c844850 == -1) {
                DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                DAT_14c844840[1] = 0;
                *DAT_14c844840 = &PTR_FUN_149e19310;
                DAT_14c844840[2] = 0xffffffffffffffff;
                DAT_14c844840[3] = 0;
                DAT_14c844840[4] = 0;
                DAT_14c844840[5] = 0;
                if (DAT_14c844840 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                  UNLOCK();
                }
                DAT_14c844848 = 0;
                atexit(FUN_142760bef);
                _Init_thread_footer(&DAT_14c844850);
                plVar23 = (longlong *)&DAT_14c844840;
                param_1 = local_160;
              }
            }
          }
          else {
            plVar23 = (longlong *)(lVar30 + 0x38);
          }
          plStack_e0 = (longlong *)*plVar23;
          if (plStack_e0 != (longlong *)0x0) {
            (**(code **)(*plStack_e0 + 8))();
          }
          local_d8 = CONCAT44(local_d8._4_4_,(int)plVar23[1]);
          lVar30 = FUN_1402218d6(lVar15);
          plVar23 = local_150;
          if (lVar30 == 0) {
            plVar24 = (longlong *)&DAT_14c844840;
            if (*(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
                < DAT_14c844850) {
              FUN_144b3d300(&DAT_14c844850);
              plVar24 = (longlong *)&DAT_14c844840;
              if (DAT_14c844850 == -1) {
                DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                DAT_14c844840[1] = 0;
                *DAT_14c844840 = &PTR_FUN_149e19310;
                DAT_14c844840[2] = 0xffffffffffffffff;
                DAT_14c844840[3] = 0;
                DAT_14c844840[4] = 0;
                DAT_14c844840[5] = 0;
                if (DAT_14c844840 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                  UNLOCK();
                }
                DAT_14c844848 = 0;
                atexit(FUN_142760bef);
                _Init_thread_footer(&DAT_14c844850);
                plVar24 = (longlong *)&DAT_14c844840;
                param_1 = local_160;
                plVar23 = local_150;
              }
            }
          }
          else {
            plVar24 = (longlong *)(lVar30 + 0x48);
          }
          plStack_d0 = (longlong *)*plVar24;
          if (plStack_d0 != (longlong *)0x0) {
            (**(code **)(*plStack_d0 + 8))();
          }
          local_c8 = CONCAT44(local_c8._4_4_,(int)plVar24[1]);
          uStack_c0 = CONCAT62(uStack_c0._2_6_,CONCAT11(uStack_c0._1_1_,bVar6)) & 0xfffffffffffffcff
          ;
          local_b8 = *(undefined8 *)(lVar15 + 0x28);
          uStack_b0 = *(undefined8 *)(lVar15 + 0x30);
          plStack_a8 = *(longlong **)(lVar15 + 0x38);
          if (plStack_a8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plStack_a8 + 8) = *(int *)((longlong)plStack_a8 + 8) + 1;
            UNLOCK();
          }
          uStack_a0 = *(undefined8 *)(lVar15 + 0x28);
          local_98 = *(undefined8 *)(lVar15 + 0x30);
          plStack_90 = *(longlong **)(lVar15 + 0x38);
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plStack_90 + 8) = *(int *)((longlong)plStack_90 + 8) + 1;
            UNLOCK();
          }
          local_78 = CONCAT71(uStack_10f,local_110);
          local_88 = local_120;
          uStack_84 = uStack_11c;
          uStack_80 = uStack_118;
          uStack_7c = uStack_114;
          local_70 = *(longlong *)(lVar15 + 0x20);
          if ((DAT_14c950c29 == 1) && (local_70 != 0)) {
            FUN_1456cec3c();
          }
          local_68 = 0;
          lVar9 = FUN_1402218d6(lVar15);
          lVar30 = local_68;
          if ((lVar9 != 0) && (lVar30 = *(longlong *)(lVar9 + 0x28), DAT_14c950c29 == 1)) {
            if (*(longlong *)(lVar9 + 0x28) == 0) {
              param_1 = local_160;
              plVar23 = local_150;
              lVar30 = 0;
            }
            else {
              FUN_1456cec3c();
              param_1 = local_160;
              plVar23 = local_150;
              lVar30 = *(longlong *)(lVar9 + 0x28);
            }
          }
          local_68 = lVar30;
          FUN_140f208a0(plVar23,local_f8);
          puVar3 = local_f0;
          *local_f0 = local_e8;
          FUN_14023423e(local_f0 + 1,&plStack_e0);
          FUN_14023423e(puVar3 + 3,&plStack_d0);
          *(undefined2 *)(puVar3 + 5) = (undefined2)uStack_c0;
          puVar3[6] = local_b8;
          puVar3[7] = uStack_b0;
          puVar3[8] = plStack_a8;
          uStack_b0 = 0;
          plStack_a8 = (longlong *)0x0;
          puVar3[9] = uStack_a0;
          puVar3[10] = local_98;
          puVar3[0xb] = plStack_90;
          local_98 = 0;
          plStack_90 = (longlong *)0x0;
          puVar3[0xe] = local_78;
          *(undefined4 *)(puVar3 + 0xc) = local_88;
          *(undefined4 *)((longlong)puVar3 + 100) = uStack_84;
          *(undefined4 *)(puVar3 + 0xd) = uStack_80;
          *(undefined4 *)((longlong)puVar3 + 0x6c) = uStack_7c;
          puVar3[0xf] = local_70;
          if ((local_70 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          bVar6 = DAT_14c950c29;
          puVar3[0x10] = local_68;
          if ((local_68 != 0 & bVar6) == 1) {
            FUN_1456cec3c();
          }
          *(undefined4 *)(puVar3 + 0x11) = 0xffffffff;
          local_fc = local_f8[0];
          uVar31 = FUN_140e95df5(puVar3);
          local_168 = 0;
          cVar5 = FUN_1438c5cb0(plVar23,uVar31,puVar3,&local_fc);
          if (cVar5 == '\0') {
            uVar12 = (int)plVar23[1] - *(int *)((longlong)plVar23 + 0x34);
            iVar21 = 1;
            if (3 < uVar12) {
              uVar8 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
              lVar30 = 0x3f;
              if (uVar8 != 0) {
                for (; uVar8 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                }
              }
              iVar21 = 1 << ((byte)lVar30 & 0x1f);
            }
            if (((int)uVar12 < 1) || (iVar21 <= (int)plVar23[9])) {
              uVar31 = (int)plVar23[9] - 1U & uVar31;
              *(uint *)((longlong)puVar3 + 0x8c) = uVar31;
              plVar24 = (longlong *)plVar23[8];
              if ((longlong *)plVar23[8] == (longlong *)0x0) {
                plVar24 = plVar23 + 7;
              }
              *(undefined4 *)(puVar3 + 0x11) =
                   *(undefined4 *)
                    ((longlong)plVar24 +
                    ((longlong)(int)plVar23[9] - 1U & (longlong)(int)uVar31) * 4);
              plVar24 = plVar23 + 7;
              if ((longlong *)plVar23[8] != (longlong *)0x0) {
                plVar24 = (longlong *)plVar23[8];
              }
              *(undefined4 *)
               ((longlong)plVar24 + ((longlong)(int)plVar23[9] - 1U & (longlong)(int)uVar31) * 4) =
                   local_fc;
            }
            else {
              *(int *)(plVar23 + 9) = iVar21;
              FUN_140e95b44(plVar23);
            }
          }
          plVar23 = plStack_90;
          uVar4 = local_fc;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar24 = plStack_90 + 1;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)*plVar24 == 0) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
          }
          plVar23 = plStack_a8;
          if (plStack_a8 != (longlong *)0x0) {
            LOCK();
            plVar24 = plStack_a8 + 1;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)*plVar24 == 0) {
              (**(code **)*plStack_a8)(plStack_a8);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
          }
          if (plStack_d0 != (longlong *)0x0) {
            (**(code **)(*plStack_d0 + 0x10))();
          }
          if (plStack_e0 != (longlong *)0x0) {
            (**(code **)(*plStack_e0 + 0x10))();
          }
          uVar8 = _DAT_14cb27830;
          lVar30 = (longlong)DAT_14cb27830;
          uVar31 = DAT_14cb27830 + 1;
          _DAT_14cb27830 = CONCAT44(DAT_14cb27834,uVar31);
          if (DAT_14cb27834 < uVar31) {
            FUN_141761b76(&DAT_14cb27828,uVar8 & 0xffffffff);
          }
          *(undefined4 *)(DAT_14cb27828 + lVar30 * 4) = uVar4;
        }
        plVar23 = local_150;
        lVar30 = DAT_14cb27828;
        lVar9 = (longlong)DAT_14cb27830;
        if (lVar9 != 0) {
          lVar19 = 0;
          do {
            if ((longlong)*(int *)(lVar30 + lVar19) != -1) {
              (**(code **)(*param_1 + 0x2d0))
                        (param_1,(longlong)*(int *)(lVar30 + lVar19) * 0x90 + *plVar23,lVar15);
            }
            lVar19 = lVar19 + 4;
          } while (lVar9 * 4 != lVar19);
        }
        bVar6 = *local_158 + 1;
        if (7 < bVar6) {
          bVar6 = 8;
        }
        *local_158 = bVar6;
      }
      uVar8 = 0;
      lVar15 = lVar15 + 0x50;
    } while (lVar15 != local_128);
  }
LAB_1438c5a95:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar8 >> 8),local_138 != 0);
}



// FUNCTION 1438c5af2 FUN_1438c5af2 body=41 status=ok
// SIG undefined FUN_1438c5af2(void)

void FUN_1438c5af2(void)

{
  DAT_14cb27818 = 0;
  if (DAT_14cb27810 != 0) {
    FUN_1400020a8();
  }
  FUN_146041a56();
  return;
}



// FUNCTION 1438c5bb2 FUN_1438c5bb2 body=66 status=ok
// SIG undefined FUN_1438c5bb2(void)

void FUN_1438c5bb2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x18))();
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 800))(plVar1,plVar1 + 0xe);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438c5be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2a8))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1438c5bf4 FUN_1438c5bf4 body=41 status=ok
// SIG undefined FUN_1438c5bf4(void)

void FUN_1438c5bf4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x18))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438c5c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1438c5c1e FUN_1438c5c1e body=64 status=ok
// SIG undefined FUN_1438c5c1e(void)

void FUN_1438c5c1e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1405b89f8(param_1,iVar1);
  }
  FUN_1405b824a((longlong)iVar1 * 0x50 + *param_1,param_2);
  return;
}



// FUNCTION 1438c5c5e FUN_1438c5c5e body=82 status=ok
// SIG undefined FUN_1438c5c5e(void)

void FUN_1438c5c5e(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_2 + 0x20) != param_1[1]) {
    return;
  }
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1405b89f8(param_1,iVar1);
  }
  FUN_1405b824a((longlong)iVar1 * 0x50 + *param_1,param_2);
  return;
}



// FUNCTION 1438c5cb0 FUN_1438c5cb0 body=137 status=ok
// SIG undefined FUN_1438c5cb0(void)

void FUN_1438c5cb0(longlong *param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  void *_Dst;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar2 = FUN_147fa3e7c();
    if (iVar2 != -1) {
      _Dst = (void *)((longlong)iVar2 * 0x90 + *param_1);
      FUN_1438b5fe0(_Dst);
      memmove(_Dst,param_3,0x88);
      FUN_147fa3eee(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_1438c5cd1;
    }
  }
  uVar1 = 0;
LAB_1438c5cd1:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1438c5d3a FUN_1438c5d3a body=29 status=ok
// SIG undefined FUN_1438c5d3a(void)

undefined8 FUN_1438c5d3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438c5ed6 FUN_1438c5ed6 body=93 status=ok
// SIG undefined FUN_1438c5ed6(void)

void FUN_1438c5ed6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acdd3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1438c5f34 FUN_1438c5f34 body=93 status=ok
// SIG undefined FUN_1438c5f34(void)

void FUN_1438c5f34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acdd3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1438c5f92 FUN_1438c5f92 body=126 status=ok
// SIG undefined FUN_1438c5f92(void)

void FUN_1438c5f92(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acdd3d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438c6001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438c601a FUN_1438c601a body=269 status=ok
// SIG undefined FUN_1438c601a(void)

undefined8 FUN_1438c601a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1438c6121;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1438c6121;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1438c6121:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1438c60d5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1438c6128(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1438c60d5;
    }
  }
  uVar6 = 0;
LAB_1438c60d5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c6128 FUN_1438c6128 body=284 status=ok
// SIG undefined FUN_1438c6128(void)

void FUN_1438c6128(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((puVar2 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          puVar2 == (undefined8 *)0x0 || (*(uint *)(puVar2 + 2) != param_1[1])))) ||
     ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)) goto LAB_1438c6216;
  if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
    local_18 = *puVar2;
  }
  else {
    local_18 = 0;
  }
  FUN_1447cd2ec();
  if (param_1[1] == 0) {
LAB_1438c6233:
    lVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_1438c6233;
      lVar3 = *plVar4;
    }
  }
  *(undefined8 *)(lVar3 + 0x28) = 0;
LAB_1438c6216:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c6246 FUN_1438c6246 body=29 status=ok
// SIG undefined FUN_1438c6246(void)

undefined8 FUN_1438c6246(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438c63e2 FUN_1438c63e2 body=93 status=ok
// SIG undefined FUN_1438c63e2(void)

void FUN_1438c63e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acdd440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1438c6440 FUN_1438c6440 body=93 status=ok
// SIG undefined FUN_1438c6440(void)

void FUN_1438c6440(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acdd440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1438c649e FUN_1438c649e body=126 status=ok
// SIG undefined FUN_1438c649e(void)

void FUN_1438c649e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acdd440;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438c650d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438c6526 FUN_1438c6526 body=269 status=ok
// SIG undefined FUN_1438c6526(void)

undefined8 FUN_1438c6526(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1438c662d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1438c662d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1438c662d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1438c65e1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1438c6634(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1438c65e1;
    }
  }
  uVar6 = 0;
LAB_1438c65e1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c6634 FUN_1438c6634 body=284 status=ok
// SIG undefined FUN_1438c6634(void)

void FUN_1438c6634(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((puVar2 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          puVar2 == (undefined8 *)0x0 || (*(uint *)(puVar2 + 2) != param_1[1])))) ||
     ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)) goto LAB_1438c6722;
  if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
    local_18 = *puVar2;
  }
  else {
    local_18 = 0;
  }
  FUN_1447cd2ec();
  if (param_1[1] == 0) {
LAB_1438c673f:
    lVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_1438c673f;
      lVar3 = *plVar4;
    }
  }
  *(undefined8 *)(lVar3 + 0x28) = 0;
LAB_1438c6722:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c6752 FUN_1438c6752 body=29 status=ok
// SIG undefined FUN_1438c6752(void)

undefined8 FUN_1438c6752(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438c68ee FUN_1438c68ee body=93 status=ok
// SIG undefined FUN_1438c68ee(void)

void FUN_1438c68ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acdd4b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1438c694c FUN_1438c694c body=93 status=ok
// SIG undefined FUN_1438c694c(void)

void FUN_1438c694c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acdd4b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1438c69aa FUN_1438c69aa body=126 status=ok
// SIG undefined FUN_1438c69aa(void)

void FUN_1438c69aa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acdd4b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438c6a19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438c6a32 FUN_1438c6a32 body=269 status=ok
// SIG undefined FUN_1438c6a32(void)

undefined8 FUN_1438c6a32(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1438c6b39;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1438c6b39;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1438c6b39:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1438c6aed;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1438c6b40(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1438c6aed;
    }
  }
  uVar6 = 0;
LAB_1438c6aed:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c6b40 FUN_1438c6b40 body=284 status=ok
// SIG undefined FUN_1438c6b40(void)

void FUN_1438c6b40(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((puVar2 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          puVar2 == (undefined8 *)0x0 || (*(uint *)(puVar2 + 2) != param_1[1])))) ||
     ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)) goto LAB_1438c6c2e;
  if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
    local_18 = *puVar2;
  }
  else {
    local_18 = 0;
  }
  FUN_1447cd2ec();
  if (param_1[1] == 0) {
LAB_1438c6c4b:
    lVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_1438c6c4b;
      lVar3 = *plVar4;
    }
  }
  *(undefined8 *)(lVar3 + 0x28) = 0;
LAB_1438c6c2e:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c6c5e FUN_1438c6c5e body=129 status=ok
// SIG undefined FUN_1438c6c5e(void)

int FUN_1438c6c5e(uint param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if (DAT_14cb277d8 != DAT_14cb27804) {
    puVar3 = &DAT_14cb27808;
    if (DAT_14cb27810 != (undefined4 *)0x0) {
      puVar3 = DAT_14cb27810;
    }
    iVar2 = puVar3[DAT_14cb27818 - 1U & param_1];
    if (iVar2 != -1) {
      do {
        lVar4 = (longlong)iVar2 * 0x70;
        if ((((*param_2 == *(longlong *)(DAT_14cb277d0 + lVar4)) &&
             (lVar1 = DAT_14cb277d0 + lVar4, param_2[1] == *(longlong *)(lVar1 + 8))) &&
            (*(int *)((longlong)param_2 + 0x14) == *(int *)(lVar1 + 0x14))) &&
           ((char)param_2[2] == *(char *)(lVar1 + 0x10))) {
          return iVar2;
        }
        iVar2 = *(int *)(DAT_14cb277d0 + 0x68 + lVar4);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1438c6cdf FUN_1438c6cdf body=2401 status=ok
// SIG undefined FUN_1438c6cdf(void)

void FUN_1438c6cdf(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 local_74 [4];
  longlong local_70 [2];
  wchar_t *local_60;
  int local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = (longlong *)0x3;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acd1900,1,&PTR_FUN_14acd1880);
  local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb27178,L"EnhancedInput.OnlyTriggerLastActionInChord",&DAT_14c762764,
                L"Should only the last action in a ChordedAction trigger be fired? If this is disabled, then the dependant chords will be fired as well"
               );
  atexit(FUN_1438bbd08);
  local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb27188,L"EnhancedInput.EnableDefaultMappingContexts",&DAT_14c762768,
                L"Should the UEnhancedInputDeveloperSettings::DefaultMappingContexts be applied to every UEnhancedPlayerInput?"
               );
  atexit(FUN_1438bbd4d);
  local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb27198,L"EnhancedInput.ReconcileRemovedMappingDelegates",&DAT_14c76276c,
                L"When the mappings are rebuilt, they have been \'in process\'. If this is true, we will set their value to zero so that they fire the \'Canceled\' event on their next evaluation."
               );
  atexit(FUN_1438bbd92);
  uStack_88 = 1;
  ppuStack_90 = &PTR_FUN_14acd2940;
  local_98 = (longlong *)0x1;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acd2990,1,&PTR_FUN_14acd2960);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = (longlong *)0x1;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acd2fc0,1,&PTR_FUN_14acd2f90);
  uStack_88 = 0;
  local_98 = (longlong *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acd3840,1,0);
  FUN_1446f470e(&DAT_14cb27278,L"__EnhancedInput_Internal_HasBeenUpgraded__",1);
  FUN_1446f470e(&DAT_14cb27280,L"GetVisualizationColor",1);
  FUN_1446f470e(&DAT_14cb27290,L"ModifyRaw",1);
  uStack_88 = 4;
  ppuStack_90 = &PTR_FUN_14acd6ca0;
  local_98 = (longlong *)0x0;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acd6d20,0xc,0);
  FUN_1446f470e(&DAT_14cb27480,L"GetTriggerType",1);
  FUN_1446f470e(&DAT_14cb27498,L"UpdateState",1);
  uStack_88 = 4;
  ppuStack_90 = &PTR_FUN_14acda680;
  local_98 = (longlong *)0x2;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acda750,0xc,&PTR_FUN_14acda700);
  local_60 = (wchar_t *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cb275f8,L"EnhancedInput.Triggers.bCheckInitalStateForComboTrigger",&local_60,
                L"When true, combo triggers will check initial state (First input action in the combo array) and return \'Ongoing\' if the Combo Step Completion State is met. Note: Setting this to true was Combo trigger behavior as of 5.4 and before."
               );
  atexit(FUN_1438bffe7);
  uStack_88 = 0;
  local_98 = (longlong *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acdb8e0,1,0);
  uStack_88 = 0;
  local_98 = (longlong *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EnhancedInput",&PTR_FUN_14acdbdc0,1,0);
  DAT_14cb2784c = 0;
  DAT_14cb27854 = 1;
  DAT_14cb27858 = 2;
  DAT_14cb27850 = 3;
  FUN_140056680(&DAT_14cb27688,L"EnhancedInputUserSettings");
  atexit((_func_5014 *)&LAB_1438c0314);
  FUN_140056680(local_70,&DAT_149dfb77a);
  local_60 = L"InputUserSettings.Profiles.Default";
  local_58 = 0x22;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  local_60 = L"EnhancedInput";
  local_58 = 0xd;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = L"EnhancedInput";
  local_58 = 0xd;
  local_54 = 0;
  uVar4 = FUN_14001a6c0(&local_60,1);
  ppuStack_90 = (undefined **)((ulonglong)ppuStack_90 & 0xffffffff00000000);
  local_98 = local_70;
  FUN_14125750c(&DAT_14cb27698,uVar4,uVar3,uVar2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1438c0325);
  local_60 = L"Default_Profile_name";
  local_58 = 0x14;
  FUN_1446e940c(local_70,&local_60);
  local_60 = L"EnhancedInputMappableUserSettings";
  local_58 = 0x21;
  FUN_1446e940c(local_74,&local_60);
  local_60 = L"Default Profile";
  local_58 = 0xf;
  FUN_140208c1e(&DAT_14cb276a0,local_74,local_70,&local_60);
  atexit((_func_5014 *)&LAB_1438c0331);
  FUN_140056680(local_70,&DAT_149dfb77a);
  local_60 = L"InputUserSettings.FailureReasons.InvalidMappingName";
  local_58 = 0x33;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  local_60 = L"EnhancedInput";
  local_58 = 0xd;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = L"EnhancedInput";
  local_58 = 0xd;
  local_54 = 0;
  uVar4 = FUN_14001a6c0(&local_60,1);
  ppuStack_90 = (undefined **)((ulonglong)ppuStack_90 & 0xffffffff00000000);
  local_98 = local_70;
  FUN_14125750c(&DAT_14cb276b0,uVar4,uVar3,uVar2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1438c0345);
  FUN_140056680(local_70,&DAT_149dfb77a);
  local_60 = L"InputUserSettings.FailureReasons.NoKeyProfile";
  local_58 = 0x2d;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  local_60 = L"EnhancedInput";
  local_58 = 0xd;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = L"EnhancedInput";
  local_58 = 0xd;
  local_54 = 0;
  uVar4 = FUN_14001a6c0(&local_60,1);
  ppuStack_90 = (undefined **)((ulonglong)ppuStack_90 & 0xffffffff00000000);
  local_98 = local_70;
  FUN_14125750c(&DAT_14cb276b8,uVar4,uVar3,uVar2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1438c0351);
  FUN_140056680(local_70,&DAT_149dfb77a);
  local_60 = L"InputUserSettings.FailureReasons.NoMatchingMappings";
  local_58 = 0x33;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  local_60 = L"EnhancedInput";
  local_58 = 0xd;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = L"EnhancedInput";
  local_58 = 0xd;
  local_54 = 0;
  uVar4 = FUN_14001a6c0(&local_60,1);
  ppuStack_90 = (undefined **)((ulonglong)ppuStack_90 & 0xffffffff00000000);
  local_98 = local_70;
  FUN_14125750c(&DAT_14cb276c0,uVar4,uVar3,uVar2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1438c035d);
  FUN_140056680(local_70,&DAT_149dfb77a);
  local_60 = L"InputUserSettings.FailureReasons.NoMappingRowFound";
  local_58 = 0x32;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  local_60 = L"EnhancedInput";
  local_58 = 0xd;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = L"EnhancedInput";
  local_58 = 0xd;
  local_54 = 0;
  uVar4 = FUN_14001a6c0(&local_60,1);
  ppuStack_90 = (undefined **)((ulonglong)ppuStack_90 & 0xffffffff00000000);
  local_98 = local_70;
  FUN_14125750c(&DAT_14cb276c8,uVar4,uVar3,uVar2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1438c0369);
  local_60 = (wchar_t *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 8) = lVar5;
  *(undefined ***)local_60 = &PTR_FUN_149e00260;
  *(code **)(local_60 + 0xc) = FUN_1438c0375;
  local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_1415c7246(&DAT_14cb276d0,L"EnhancedInput.DumpKeyProfileToLog",&DAT_149dfb77a,&local_60);
  if (local_58 == 0) {
LAB_1438c74c7:
    if (local_60 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_1438c74c7;
  }
  atexit(FUN_1438c0420);
  local_60 = (wchar_t *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 8) = lVar5;
  *(undefined ***)local_60 = &PTR_FUN_149e00260;
  *(code **)(local_60 + 0xc) = FUN_1438c0465;
  local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_1415c7246(&DAT_14cb276e0,L"EnhancedInput.SaveKeyProfilesToSlot",
                L"Save the user input settings object with the Save Game to slot system",&local_60);
  if (local_58 != 0) {
    if (local_60 == (wchar_t *)0x0) goto LAB_1438c75b3;
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1438c75b3:
  atexit(FUN_1438c0510);
  FUN_14644deda(&DAT_14cb276f0);
  atexit(FUN_1438c0555);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c7644 FUN_1438c7644 body=55 status=ok
// SIG undefined FUN_1438c7644(void)

void FUN_1438c7644(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27928 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27928 = FUN_14171c317(FUN_14644eaed,uVar1,L"EStateTreeBreakpointType");
  }
  return;
}



// FUNCTION 1438c767b FUN_1438c767b body=55 status=ok
// SIG undefined FUN_1438c767b(void)

void FUN_1438c767b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27940 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27940 = FUN_14171c317(FUN_14644eb1c,uVar1,L"EStateTreeUpdatePhase");
  }
  return;
}



// FUNCTION 1438c76b2 FUN_1438c76b2 body=55 status=ok
// SIG undefined FUN_1438c76b2(void)

void FUN_1438c76b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27958 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27958 = FUN_14171c317(FUN_14644eb4b,uVar1,L"EStateTreeRunStatus");
  }
  return;
}



// FUNCTION 1438c76e9 FUN_1438c76e9 body=55 status=ok
// SIG undefined FUN_1438c76e9(void)

void FUN_1438c76e9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27970 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27970 = FUN_14171c317(FUN_14644eb7c,uVar1,L"EStateTreeStateChangeType");
  }
  return;
}



// FUNCTION 1438c7720 FUN_1438c7720 body=55 status=ok
// SIG undefined FUN_1438c7720(void)

void FUN_1438c7720(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27988 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27988 = FUN_14171c317(FUN_14644ebab,uVar1,L"EStateTreeConditionEvaluationMode");
  }
  return;
}



// FUNCTION 1438c7757 FUN_1438c7757 body=55 status=ok
// SIG undefined FUN_1438c7757(void)

void FUN_1438c7757(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27a00 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27a00 = FUN_14171c317(FUN_14644ee25,uVar1,L"EStateTreeTransitionSourceType");
  }
  return;
}



// FUNCTION 1438c778e FUN_1438c778e body=55 status=ok
// SIG undefined FUN_1438c778e(void)

void FUN_1438c778e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27a90 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27a90 = FUN_14171c317(FUN_14644f131,uVar1,L"EStateTreeRecordTransitions");
  }
  return;
}



// FUNCTION 1438c77c5 FUN_1438c77c5 body=55 status=ok
// SIG undefined FUN_1438c77c5(void)

void FUN_1438c77c5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27cb8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27cb8 = FUN_14171c317(FUN_14644fdbd,uVar1,L"EStateTreeLinkerStatus");
  }
  return;
}



// FUNCTION 1438c77fc FUN_1438c77fc body=55 status=ok
// SIG undefined FUN_1438c77fc(void)

void FUN_1438c77fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27ce8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27ce8 = FUN_14171c317(FUN_14644fdec,uVar1,L"EStateTreeNodeFormatting");
  }
  return;
}



// FUNCTION 1438c7833 FUN_1438c7833 body=55 status=ok
// SIG undefined FUN_1438c7833(void)

void FUN_1438c7833(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27d30 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27d30 = FUN_14171c317(FUN_14644ff41,uVar1,L"EStateTreePropertyRefType");
  }
  return;
}



// FUNCTION 1438c786a FUN_1438c786a body=55 status=ok
// SIG undefined FUN_1438c786a(void)

void FUN_1438c786a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27da8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27da8 = FUN_14171c317(FUN_14645017d,uVar1,L"EStateTreeTraceStatus");
  }
  return;
}



// FUNCTION 1438c78a1 FUN_1438c78a1 body=55 status=ok
// SIG undefined FUN_1438c78a1(void)

void FUN_1438c78a1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27dc0 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27dc0 = FUN_14171c317(FUN_1464501ac,uVar1,L"EStateTreeTraceEventType");
  }
  return;
}



// FUNCTION 1438c78d8 FUN_1438c78d8 body=55 status=ok
// SIG undefined FUN_1438c78d8(void)

void FUN_1438c78d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27f10 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27f10 = FUN_14171c317(FUN_146450549,uVar1,L"EStateTreeBlueprintPropertyCategory");
  }
  return;
}



// FUNCTION 1438c790f FUN_1438c790f body=393 status=ok
// SIG undefined FUN_1438c790f(void)

undefined8
FUN_1438c790f(ushort *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
             longlong *param_5)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *param_1;
  if (uVar1 != 0xffff) {
    lVar3 = *param_3;
    if ((*(uint *)(lVar3 + 0x110) != (uint)uVar1 &&
         (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0x110)) &&
       (lVar5 = (ulonglong)((uint)uVar1 * 0x30) + *(longlong *)(lVar3 + 0x108), lVar5 != 0)) {
      local_60 = *(undefined4 *)(lVar5 + 0x28);
      local_90 = &local_60;
      local_5c = *(undefined2 *)(lVar5 + 0x2c);
      local_98 = param_3;
      FUN_147facacc(&local_58,param_2,0);
      cVar2 = FUN_147fba8e5(*(undefined8 *)(lVar5 + 0x18));
      if (cVar2 == '\0') {
        if (param_5 != (longlong *)0x0) {
          *param_5 = *(longlong *)(lVar5 + 0x18);
        }
        local_48 = CONCAT44(uStack_54,local_58);
        uStack_40 = uStack_50;
        uStack_3c = uStack_4c;
        uVar4 = FUN_147fb8dac(lVar3 + 0xb8,&local_48,lVar5);
        goto LAB_1438c7959;
      }
      if (param_4 != (undefined8 *)0x0) {
        local_78 = local_58;
        uStack_74 = uStack_54;
        uStack_70 = uStack_50;
        uStack_6c = uStack_4c;
        cVar2 = FUN_147faa6b0(*(undefined8 *)(lVar5 + 0x18));
        if (cVar2 != '\0') {
          local_48 = CONCAT44(uStack_74,local_78);
          uStack_40 = uStack_70;
          uStack_3c = uStack_6c;
          lVar3 = FUN_147fb8dac(lVar3 + 0xb8,&local_48,lVar5,*(undefined8 *)(lVar5 + 0x18));
          if (lVar3 != 0) {
            local_48 = 0;
            local_88 = *(undefined8 *)(param_2 + 0x10);
            local_80 = *(undefined4 *)(param_2 + 0x18);
            lVar5 = FUN_147faccd2(*param_4,*(undefined2 *)(param_4 + 1));
            if (lVar5 != 0) {
              local_98 = param_5;
              uVar4 = FUN_1438c790f(lVar3,param_2,lVar5,local_48);
              goto LAB_1438c7959;
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_1438c7959:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438c7d2c FUN_1438c7d2c body=1169 status=ok
// SIG undefined FUN_1438c7d2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438c7d2c(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  FUN_14282b410(L"/Script/StateTreeModule",&PTR_FUN_14acdd950,1,0,0,0,0);
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acdda80,1,0,0);
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acde090,6,0,0);
  FUN_14098d3d2(FUN_1438c7644,L"/Script/StateTreeModule",L"EStateTreeBreakpointType",&DAT_14cb27920)
  ;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14ace03e0,0xb,&PTR_FUN_14ace0320,6);
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14ace0ca0,8,0,0);
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14ace0f50,2,0,0);
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14ace1200,2,0,0);
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14ace1920,8,0,0);
  FUN_14098d3d2(FUN_1438c77c5,L"/Script/StateTreeModule",L"EStateTreeLinkerStatus",&DAT_14cb27cb0);
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14ace1d70,1,&PTR_FUN_14ace1d50,1);
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14ace2220,2,&PTR_FUN_14ace2200,1);
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14ace2550,2,0,0);
  FUN_14282b410(L"/Script/StateTreeModule",&PTR_FUN_14ace2960,1,0,0,0,0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14ace2ba0 + lVar1),L"/Script/StateTreeModule",
                  *(undefined8 *)((longlong)&PTR_u_EStateTreeTraceStatus_14ace2ba8 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_14ace2bb0 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x40);
  FUN_1446f470e(&DAT_14cb27dd0,L"ReceiveTestCondition",1);
  FUN_14282b410(L"/Script/StateTreeModule",&PTR_FUN_14ace3150,1,&PTR_FUN_14ace3120,1,0,0);
  FUN_1446f470e(&DAT_14cb27e10,L"ReceiveGetScore",1);
  FUN_14282b410(L"/Script/StateTreeModule",&PTR_FUN_14ace36e0,1,&PTR_FUN_14ace36b0,1,0,0);
  FUN_1446f470e(&DAT_14cb27e50,L"ReceiveTick",1);
  FUN_1446f470e(&DAT_14cb27e60,L"ReceiveTreeStart",1);
  FUN_1446f470e(&DAT_14cb27e70,L"ReceiveTreeStop",1);
  FUN_14282b410(L"/Script/StateTreeModule",&PTR_FUN_14ace3d40,1,&PTR_FUN_14ace3d10,1,0,0);
  _DAT_14cb27eb0 = 0x47efffffe0000000;
  _DAT_14cb27eb8 = 0x47efffffe0000000;
  _DAT_14cb27ec0 = 0x47efffffe0000000;
  _DAT_14cb27ed0 = 0x47efffffe0000000;
  _DAT_14cb27ed8 = 0x47efffffe0000000;
  _DAT_14cb27ee0 = 0x47efffffe0000000;
  _DAT_14cb27ee8 = 0x47efffffe0000000;
  _DAT_14cb27ef0 = 0x47efffffe0000000;
  _DAT_14cb27ef8 = 0x47efffffe0000000;
  _DAT_14cb27f00 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cb27f38,L"ReceiveGetDescription",1);
  FUN_14282b410(L"/Script/StateTreeModule",&PTR_FUN_14ace4850,1,0,0,&PTR_FUN_14ace4830,1);
  FUN_1446f470e(&DAT_14cb27f78,L"ReceiveEnterState",1);
  FUN_1446f470e(&DAT_14cb27f88,L"ReceiveExitState",1);
  FUN_1446f470e(&DAT_14cb27f98,L"ReceiveLatentEnterState",1);
  FUN_1446f470e(&DAT_14cb27fa8,L"ReceiveLatentTick",1);
  FUN_1446f470e(&DAT_14cb27fb8,L"ReceiveStateCompleted",1);
  FUN_1446f470e(&DAT_14cb27fc8,L"ReceiveTick",1);
  FUN_14282b410(L"/Script/StateTreeModule",&PTR_FUN_14ace5650,1,&PTR_FUN_14ace5620,1,0,0);
  return;
}



// FUNCTION 1438c81c0 FUN_1438c81c0 body=74 status=ok
// SIG undefined FUN_1438c81c0(void)

void FUN_1438c81c0(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_20();
  (**(code **)(**(longlong **)(*param_2 + 8) + 0x218))(*(longlong **)(*param_2 + 8),&DAT_14acf2e18);
  if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x2b) & 4) == 0) {
    return;
  }
  FUN_1438c8412(param_1);
  return;
}



// FUNCTION 1438c8216 FUN_1438c8216 body=506 status=ok
// SIG undefined FUN_1438c8216(void)

void FUN_1438c8216(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_98 = 0;
    uStack_90 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_49);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (0 < *(int *)((longlong)param_1 + 0x6c)) {
    iVar10 = 0;
    iVar9 = -0x10;
    do {
      lVar6 = param_1[0xc];
      lVar3 = (longlong)((int)param_1[0xd] + iVar9);
      lVar1 = *(longlong *)(lVar6 + lVar3);
      plVar4 = (longlong *)FUN_147fb3dc9(lVar1,*(int *)(lVar6 + 8 + lVar3) + lVar6);
      if ((plVar4 != (longlong *)0x0) && (*(short *)((longlong)plVar4 + 0x12) != -1)) {
        cVar2 = FUN_147fab240(lVar1);
        if ((cVar2 == '\0') && (cVar2 = FUN_147fab2a0(lVar1), cVar2 == '\0')) {
          lVar6 = FUN_146453aea();
          lVar3 = 0x70;
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) goto LAB_1438c82d3;
        }
        else {
LAB_1438c82d3:
          lVar3 = 0x80;
        }
        lVar6 = *(longlong *)
                 (**(longlong **)((longlong)param_1 + lVar3) +
                 (longlong)
                 (int)((uint)*(ushort *)((longlong)plVar4 + 0x12) * -0x10 +
                       (int)(*(longlong **)((longlong)param_1 + lVar3))[1] + -0x10));
        lVar5 = FUN_146452f9c();
        lVar1 = **(longlong **)((longlong)param_1 + lVar3);
        lVar3 = (longlong)
                (int)((int)(*(longlong **)((longlong)param_1 + lVar3))[1] +
                      (uint)*(ushort *)((longlong)plVar4 + 0x12) * -0x10 + -0x10);
        plVar7 = (longlong *)(*(int *)(lVar1 + 8 + lVar3) + lVar1);
        if (lVar6 == lVar5) {
          local_58 = *plVar7;
          puVar8 = &local_60;
          if (local_58 == 0) {
            local_60 = 0;
          }
          else {
            local_60 = *(undefined8 *)(local_58 + 0x10);
          }
        }
        else {
          local_70 = *(undefined8 *)(lVar1 + lVar3);
          puVar8 = &local_70;
          local_68 = plVar7;
        }
        (**(code **)(*plVar4 + 0x20))(plVar4,puVar8);
      }
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + -0x10;
    } while (iVar10 < *(int *)((longlong)param_1 + 0x6c));
  }
  local_88 = 0x28e21331;
  uStack_84 = 0x501f4723;
  uStack_80 = 0x8110fa64;
  uStack_7c = 0xea10da1e;
  iVar9 = FUN_1448a256a(param_1);
  if (0x11 < iVar9) {
    FUN_1438c8412(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438c8412 FUN_1438c8412 body=5953 status=ok
// SIG undefined FUN_1438c8412(void)

void FUN_1438c8412(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  code *pcVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  int iVar19;
  short **ppsVar20;
  uint uVar21;
  undefined8 *puVar22;
  int iVar23;
  short *psVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auStack_258 [32];
  wchar_t *local_238;
  undefined4 local_230;
  undefined8 local_228;
  wchar_t *local_220;
  wchar_t *local_218;
  code *local_210;
  undefined1 *local_208;
  code **local_200;
  code *local_1f8;
  code *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  char local_1b8;
  longlong local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined4 local_190;
  ushort local_18c;
  undefined8 local_188;
  longlong lStack_180;
  undefined4 local_174;
  ushort local_170;
  undefined1 local_16e;
  undefined4 local_16c;
  short *local_168;
  undefined8 *puStack_160;
  code *local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  code *local_108;
  short **ppsStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_147fab300();
  iVar23 = *(int *)(param_1 + 0x6c);
  if (iVar23 == 0) {
    local_1c0 = *(undefined8 *)(param_1 + 0x38);
LAB_1438c892d:
    uStack_1a8 = 0;
    local_1b0 = 0;
    local_1b8 = '\0';
    iVar23 = 0;
  }
  else {
    bVar4 = true;
    iVar19 = -0x10;
    do {
      lVar11 = *(longlong *)(param_1 + 0x60);
      lVar9 = (longlong)(*(int *)(param_1 + 0x68) + iVar19);
      lVar25 = *(int *)(lVar11 + 8 + lVar9) + lVar11;
      uVar13 = *(undefined8 *)(lVar11 + lVar9);
      plVar10 = (longlong *)FUN_147fb1f42(uVar13,lVar25);
      if ((plVar10 != (longlong *)0x0) && (*(short *)((longlong)plVar10 + 0x12) != -1)) {
        lVar11 = FUN_147fb1f95(uVar13,lVar25);
        if ((lVar11 == 0) && (lVar11 = FUN_147fb2035(uVar13,lVar25), lVar11 == 0)) {
          lVar11 = FUN_147fb20d5(uVar13,lVar25);
          lVar9 = 0x70;
          if (lVar11 != 0) goto LAB_1438c84d7;
        }
        else {
LAB_1438c84d7:
          lVar9 = 0x80;
        }
        lVar11 = *(longlong *)
                  (**(longlong **)(param_1 + lVar9) +
                  (longlong)
                  (int)((uint)*(ushort *)((longlong)plVar10 + 0x12) * -0x10 +
                        (int)(*(longlong **)(param_1 + lVar9))[1] + -0x10));
        lVar18 = FUN_146452f9c();
        lVar25 = **(longlong **)(param_1 + lVar9);
        plVar15 = (longlong *)
                  ((int)((int)(*(longlong **)(param_1 + lVar9))[1] +
                         (uint)*(ushort *)((longlong)plVar10 + 0x12) * -0x10 + -0x10) + lVar25);
        if (lVar11 == lVar18) {
          lVar11 = *(longlong *)(lVar25 + (int)plVar15[1]);
          if (lVar11 != 0) {
            plVar15 = (longlong *)(lVar11 + 0x10);
            goto LAB_1438c8537;
          }
LAB_1438c859f:
          lVar11 = 0;
        }
        else {
LAB_1438c8537:
          lVar11 = *plVar15;
          if (lVar11 == 0) goto LAB_1438c859f;
          if (DAT_14c949118 == 0) {
            local_108 = FUN_140631fbe;
            lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar9;
            FUN_1446f470e(&local_b8,L"Class",1);
            local_200 = &local_108;
            local_208 = &LAB_146891e90;
            local_210 = (code *)&LAB_146273097;
            local_220 = L"Engine";
            local_218 = (wchar_t *)CONCAT44(local_218._4_4_,199);
            local_228 = 0x20;
            local_230 = 0x10000000;
            local_238 = (wchar_t *)CONCAT44(local_238._4_4_,8);
            FUN_14574b4b2(lVar9);
            DAT_14c949118 = lVar9;
            local_1e8 = (longlong *)FUN_144a7a812();
            lVar9 = DAT_14c949118;
            uVar13 = FUN_1449e2fb2();
            local_238 = L"Class";
            FUN_14574b446(uVar13,lVar9,local_1e8,L"/Script/CoreUObject");
          }
          lVar9 = *(longlong *)(lVar11 + 0x10);
          iVar8 = *(int *)(lVar9 + 0x38);
          if ((iVar8 < *(int *)(DAT_14c949118 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) !=
              DAT_14c949118 + 0x30)) {
            if (DAT_14c948fa0 == (longlong *)0x0) {
              local_158 = (code *)&DAT_1427db2a2;
              plVar15 = (longlong *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c948fa0 = plVar15;
              FUN_1446f470e(&local_108,L"ScriptStruct",1);
              local_200 = &local_158;
              local_208 = &LAB_1468915ce;
              local_210 = FUN_1427dc742;
              local_220 = L"Engine";
              local_218 = (wchar_t *)CONCAT44(local_218._4_4_,199);
              local_228 = 0x10;
              local_230 = 0x10000020;
              local_238._0_4_ = 8;
              FUN_14574b4b2(plVar15);
              local_1e8 = plVar15;
              if (DAT_14c927740 == 0) {
                local_b8 = FUN_1449e2820;
                local_1f0 = FUN_14081d0ea;
                local_1f8 = FUN_14081d0ea;
                local_200 = &local_b8;
                local_208 = &LAB_146856450;
                local_210 = FUN_1427b121c;
                local_218 = L"Engine";
                local_220 = (wchar_t *)0x0;
                local_228 = CONCAT44(local_228._4_4_,0x10000021);
                local_230 = 8;
                local_238._0_4_ = 0x28;
                DAT_14c948fa0 = plVar15;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                local_1e8 = DAT_14c948fa0;
              }
              lVar9 = DAT_14c927740;
              DAT_14c948fa0 = local_1e8;
              uVar13 = FUN_1449e2fb2();
              local_238 = L"ScriptStruct";
              FUN_14574b446(uVar13,local_1e8,lVar9,L"/Script/CoreUObject");
              lVar9 = *(longlong *)(lVar11 + 0x10);
              iVar8 = *(int *)(lVar9 + 0x38);
            }
            if ((((int)DAT_14c948fa0[7] <= iVar8) &&
                (*(longlong **)(*(longlong *)(lVar9 + 0x30) + (longlong)(int)DAT_14c948fa0[7] * 8)
                 == DAT_14c948fa0 + 6)) && ((*(uint *)(lVar11 + 0xb0) >> 0x18 & 1) != 0))
            goto LAB_1438c85c4;
          }
          else if (*(int *)(lVar11 + 0xd4) < 0) {
LAB_1438c85c4:
            bVar4 = false;
          }
        }
        lVar9 = (**(code **)(*plVar10 + 8))(plVar10);
        bVar4 = (bool)(bVar4 & lVar11 == lVar9);
      }
      iVar19 = iVar19 + -0x10;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    if (!bVar4) goto LAB_1438c89a7;
    local_1c0 = *(undefined8 *)(param_1 + 0x38);
    local_1b8 = '\0';
    local_1b0 = 0;
    uStack_1a8 = 0;
    if (*(int *)(param_1 + 0x6c) < 1) goto LAB_1438c892d;
    iVar23 = 0;
    iVar19 = -0x10;
    do {
      lVar11 = *(longlong *)(param_1 + 0x60);
      lVar9 = (longlong)(*(int *)(param_1 + 0x68) + iVar19);
      plVar10 = (longlong *)
                FUN_147fb3dc9(*(undefined8 *)(lVar11 + lVar9),*(int *)(lVar11 + 8 + lVar9) + lVar11)
      ;
      if ((plVar10 != (longlong *)0x0) &&
         ((cVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_1c0), cVar6 == '\0' ||
          (local_1b8 == '\x01')))) goto LAB_1438c8995;
      iVar23 = iVar23 + 1;
      iVar19 = iVar19 + -0x10;
    } while (iVar23 < *(int *)(param_1 + 0x6c));
    iVar23 = (int)uStack_1a8;
  }
  lVar11 = local_1b0;
  *(int *)(param_1 + 0x188) = iVar23;
  if (*(int *)(param_1 + 0x18c) == 0 && iVar23 == 0) {
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  else {
    FUN_147fb3e4c(param_1 + 0x180,iVar23);
    FUN_145cce7de(*(undefined8 *)(param_1 + 0x180),lVar11,iVar23);
  }
  if ((0 < *(int *)(param_1 + 0x48)) && (lVar11 = (longlong)*(int *)(param_1 + 0x6c), 0 < lVar11)) {
    iVar23 = *(int *)(param_1 + 0x68);
    lVar9 = *(longlong *)(param_1 + 0x60);
    do {
      iVar23 = iVar23 + -0x10;
      if ((*(int *)(lVar9 + 8 + (longlong)iVar23) + lVar9 == 0) ||
         (*(longlong *)(lVar9 + iVar23) == 0)) goto LAB_1438c8995;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  cVar6 = FUN_147fb63a6(*(undefined8 *)(param_1 + 0x70));
  if ((cVar6 != '\0') && (cVar6 = FUN_147fb63a6(*(undefined8 *)(param_1 + 0x80)), cVar6 != '\0')) {
    lVar11 = *(longlong *)(param_1 + 0xb8);
    lVar9 = *(longlong *)(param_1 + 200);
    lVar25 = (longlong)*(int *)(param_1 + 0xc0);
    iVar23 = 0;
    local_1d0 = (longlong)*(int *)(param_1 + 0xd0);
    local_1c8 = *(longlong **)(param_1 + 0xd8);
    local_1e8 = (longlong *)(longlong)*(int *)(param_1 + 0xe0);
    local_98 = 0;
    local_90 = 0;
    local_b8 = (code *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_1d8 = lVar9;
    if (lVar25 != 0) {
      local_1e0 = lVar25 * 8;
      lVar25 = lVar25 * 0x18;
      pcVar14 = (code *)(lVar11 + 0x10);
      do {
        local_168 = (short *)CONCAT44(local_168._4_4_,iVar23);
        ppsStack_100 = &local_168;
        local_108 = pcVar14;
        FUN_147fb3ec0(&local_b8,&local_158,&local_108);
        lVar9 = local_1d8;
        iVar23 = iVar23 + 1;
        pcVar14 = pcVar14 + 0x18;
        lVar25 = lVar25 + -0x18;
      } while (lVar25 != 0);
      lVar25 = local_1e0 * 3;
      lVar18 = 0;
      do {
        plVar10 = *(longlong **)(lVar11 + lVar18);
        if (plVar10 != (longlong *)0x0) {
          if (DAT_14c949118 == 0) {
            local_158 = FUN_140631fbe;
            lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar12;
            FUN_1446f470e(&local_108,L"Class",1);
            local_208 = &LAB_146891e90;
            local_210 = (code *)&LAB_146273097;
            local_220 = L"Engine";
            local_218 = (wchar_t *)CONCAT44(local_218._4_4_,199);
            local_228 = 0x20;
            local_230 = 0x10000000;
            local_238 = (wchar_t *)CONCAT44(local_238._4_4_,8);
            local_200 = &local_158;
            FUN_14574b4b2(lVar12);
            DAT_14c949118 = lVar12;
            local_1e0 = FUN_144a7a812();
            lVar12 = DAT_14c949118;
            uVar13 = FUN_1449e2fb2();
            local_238 = L"Class";
            FUN_14574b446(uVar13,lVar12,local_1e0,L"/Script/CoreUObject");
            plVar10 = *(longlong **)(lVar11 + lVar18);
            if (plVar10 == (longlong *)0x0) goto LAB_1438c947e;
          }
          if ((((DAT_14c949118 != 0) && (lVar12 = plVar10[2], lVar12 != 0)) &&
              (*(int *)(DAT_14c949118 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
             ((*(longlong *)
                (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
               DAT_14c949118 + 0x30 && (*(int *)((longlong)plVar10 + 0xd4) < 0)))) {
            lVar12 = (**(code **)(*plVar10 + 0x358))();
            if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar12);
            }
            *(longlong *)(lVar11 + lVar18) = lVar12;
          }
        }
LAB_1438c947e:
        lVar18 = lVar18 + 0x18;
      } while (lVar25 != lVar18);
    }
    if ((int)local_1d0 != 0) {
      lVar18 = local_1d0 << 5;
      lVar25 = 0;
      do {
        plVar10 = *(longlong **)(lVar9 + lVar25);
        if (plVar10 != (longlong *)0x0) {
          if (DAT_14c949118 == 0) {
            local_158 = FUN_140631fbe;
            lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar12;
            FUN_1446f470e(&local_108,L"Class",1);
            local_200 = &local_158;
            local_208 = &LAB_146891e90;
            local_210 = (code *)&LAB_146273097;
            local_220 = L"Engine";
            local_218 = (wchar_t *)CONCAT44(local_218._4_4_,199);
            local_228 = 0x20;
            local_230 = 0x10000000;
            local_238 = (wchar_t *)CONCAT44(local_238._4_4_,8);
            FUN_14574b4b2(lVar12);
            DAT_14c949118 = lVar12;
            local_1e0 = FUN_144a7a812();
            lVar12 = DAT_14c949118;
            uVar13 = FUN_1449e2fb2();
            local_238 = L"Class";
            FUN_14574b446(uVar13,lVar12,local_1e0,L"/Script/CoreUObject");
            plVar10 = *(longlong **)(lVar9 + lVar25);
            if (plVar10 == (longlong *)0x0) goto LAB_1438c9610;
          }
          if (((DAT_14c949118 != 0) && (lVar12 = plVar10[2], lVar12 != 0)) &&
             ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(lVar12 + 0x38) &&
              ((*(longlong *)
                 (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
                DAT_14c949118 + 0x30 && (*(int *)((longlong)plVar10 + 0xd4) < 0)))))) {
            lVar12 = (**(code **)(*plVar10 + 0x358))();
            if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar12);
            }
            *(longlong *)(lVar9 + lVar25) = lVar12;
          }
        }
LAB_1438c9610:
        lVar25 = lVar25 + 0x20;
      } while (lVar18 != lVar25);
    }
    if ((int)local_1e8 != 0) {
      plVar10 = local_1c8 + (longlong)local_1e8 * 5;
      plVar15 = local_1c8;
      do {
        lVar9 = plVar15[1];
        if ((longlong)(int)lVar9 != 0) {
          lVar25 = *plVar15;
          lVar18 = 0;
          do {
            plVar3 = *(longlong **)(lVar25 + 0x10 + lVar18);
            if (plVar3 != (longlong *)0x0) {
              if (DAT_14c949118 == 0) {
                local_158 = FUN_140631fbe;
                DAT_14c949118 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                local_1e8 = (longlong *)DAT_14c949118;
                FUN_1446f470e(&local_108,L"Class",1);
                local_200 = &local_158;
                local_208 = &LAB_146891e90;
                local_210 = (code *)&LAB_146273097;
                local_220 = L"Engine";
                local_218 = (wchar_t *)CONCAT44(local_218._4_4_,199);
                local_228 = 0x20;
                local_230 = 0x10000000;
                local_238 = (wchar_t *)CONCAT44(local_238._4_4_,8);
                FUN_14574b4b2(local_1e8);
                DAT_14c949118 = (longlong)local_1e8;
                local_1e8 = (longlong *)FUN_144a7a812();
                local_1e0 = DAT_14c949118;
                uVar13 = FUN_1449e2fb2();
                local_238 = L"Class";
                FUN_14574b446(uVar13,local_1e0,local_1e8,L"/Script/CoreUObject");
              }
              if (((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8)
                   == DAT_14c949118 + 0x30)) && (*(int *)((longlong)plVar3 + 0xd4) < 0)) {
                lVar12 = (**(code **)(*plVar3 + 0x358))(plVar3);
                if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar12);
                }
                *(longlong *)(lVar25 + 0x10 + lVar18) = lVar12;
              }
            }
            lVar18 = lVar18 + 0x18;
          } while ((longlong)(int)lVar9 * 0x18 != lVar18);
        }
        lVar9 = plVar15[3];
        if ((longlong)(int)lVar9 != 0) {
          lVar25 = plVar15[2];
          lVar18 = 0;
          do {
            plVar3 = *(longlong **)(lVar25 + 0x10 + lVar18);
            if (plVar3 != (longlong *)0x0) {
              if (DAT_14c949118 == 0) {
                local_158 = FUN_140631fbe;
                DAT_14c949118 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                local_1e8 = (longlong *)DAT_14c949118;
                FUN_1446f470e(&local_108,L"Class",1);
                local_200 = &local_158;
                local_208 = &LAB_146891e90;
                local_210 = (code *)&LAB_146273097;
                local_220 = L"Engine";
                local_218 = (wchar_t *)CONCAT44(local_218._4_4_,199);
                local_228 = 0x20;
                local_230 = 0x10000000;
                local_238 = (wchar_t *)CONCAT44(local_238._4_4_,8);
                FUN_14574b4b2(local_1e8);
                DAT_14c949118 = (longlong)local_1e8;
                local_1e8 = (longlong *)FUN_144a7a812();
                local_1e0 = DAT_14c949118;
                uVar13 = FUN_1449e2fb2();
                local_238 = L"Class";
                FUN_14574b446(uVar13,local_1e0,local_1e8,L"/Script/CoreUObject");
              }
              if (((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8)
                   == DAT_14c949118 + 0x30)) && (*(int *)((longlong)plVar3 + 0xd4) < 0)) {
                lVar12 = (**(code **)(*plVar3 + 0x358))(plVar3);
                if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar12);
                }
                *(longlong *)(lVar25 + 0x10 + lVar18) = lVar12;
              }
            }
            lVar18 = lVar18 + 0x18;
          } while ((longlong)(int)lVar9 * 0x18 != lVar18);
        }
        plVar15 = plVar15 + 5;
      } while (plVar15 != plVar10);
    }
    local_16e = 9;
    local_16c = 0xffffffff;
    iVar23 = FUN_147fb212a(&local_b8,0xfdd0aca9);
    if (((iVar23 != -1) &&
        (pcVar14 = local_b8 + (longlong)iVar23 * 0x14,
        pcVar14 + 8 != (code *)0x0 && pcVar14 != (code *)0x0)) &&
       (plVar10 = (longlong *)((longlong)*(int *)(pcVar14 + 8) * 0x18 + lVar11),
       plVar10 != (longlong *)0x0)) {
      lVar9 = FUN_145814b44(param_1 + 0x160);
      if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar9);
      }
      *plVar10 = lVar9;
    }
    local_1e8 = (longlong *)(param_1 + 0x70);
    iVar23 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar23 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x40);
      lVar25 = 0;
      do {
        uVar7 = (uint)*(ushort *)(lVar9 + 0x38 + lVar25);
        if ((byte)(*(char *)(lVar9 + 0x4a + lVar25) - 2U) < 3) {
          if (uVar7 == 0xffff) goto LAB_1438c9af2;
LAB_1438c9764:
          lVar18 = *(longlong *)*local_1e8;
          iVar19 = *(int *)(lVar18 + 8 +
                           (longlong)(int)(uVar7 * -0x10 + (int)((longlong *)*local_1e8)[1] + -0x10)
                           );
          uVar7 = *(uint *)(lVar9 + 0x3a + lVar25);
          local_170 = *(ushort *)(lVar9 + 0x3e + lVar25);
          local_174._2_2_ = (ushort)(uVar7 >> 0x10);
          uVar21 = (local_174._2_2_ >> 2) + 0x9e3779b9 +
                   (uint)local_174._2_2_ * 0x40 + (uVar7 & 0xff) ^ (uint)local_174._2_2_;
          local_174 = uVar7;
          iVar8 = FUN_147fb212a(&local_b8,
                                (uVar21 >> 2) + 0x9e3779b9 + uVar21 * 0x40 + (uint)local_170 ^
                                uVar21);
          if (iVar8 == -1) goto LAB_1438c9af2;
          uVar26 = 0;
          if ((local_b8 + (longlong)iVar8 * 0x14 == (code *)0x0) ||
             (uVar26 = 0, local_b8 + (longlong)iVar8 * 0x14 + 8 == (code *)0x0)) goto LAB_1438c9af5;
          plVar10 = (longlong *)
                    ((longlong)*(int *)(local_b8 + (longlong)iVar8 * 0x14 + 8) * 0x18 + lVar11);
          if (plVar10 == (longlong *)0x0) goto LAB_1438c9af2;
          lVar18 = lVar18 + iVar19;
          lVar12 = FUN_145814b44(lVar18);
          if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar12);
          }
          lVar5 = local_1d8;
          *plVar10 = lVar12;
          uVar1 = *(ushort *)(lVar9 + 0x40 + lVar25);
          if (uVar1 != 0xffff) {
            lVar18 = FUN_145814b44(lVar18);
            if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar18);
            }
            *(longlong *)((ulonglong)uVar1 * 0x20 + lVar5) = lVar18;
          }
        }
        else if (uVar7 != 0xffff) goto LAB_1438c9764;
        lVar25 = lVar25 + 0x58;
      } while ((longlong)iVar23 * 0x58 - lVar25 != 0);
      iVar23 = *(int *)(param_1 + 0x48);
      if ((longlong)iVar23 != 0) {
        lVar11 = *(longlong *)(param_1 + 0x40);
        lVar9 = 0;
        do {
          cVar6 = *(char *)(lVar11 + 0x4a + lVar9);
          if (cVar6 == '\x03') {
            lVar25 = *(longlong *)(lVar11 + 0x20 + lVar9);
            if (lVar25 != 0) {
              lVar25 = lVar25 + 0x160;
              lVar18 = *(longlong *)*local_1e8;
              lVar18 = *(int *)(lVar18 + 8 +
                               (longlong)
                               (int)((uint)*(ushort *)(lVar11 + 0x38 + lVar9) * -0x10 +
                                     (int)((longlong *)*local_1e8)[1] + -0x10)) + lVar18;
              goto LAB_1438c9add;
            }
          }
          else if ((cVar6 == '\x02') &&
                  (uVar26 = (ulonglong)*(ushort *)(lVar11 + 0x28 + lVar9), uVar26 != 0xffff)) {
            uVar1 = *(ushort *)(lVar11 + 0x38 + lVar9);
            if ((uVar1 == 0xffff) ||
               (uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x40) + 0x38 + uVar26 * 0x58),
               uVar2 == 0xffff)) goto LAB_1438c9af2;
            iVar19 = (int)((longlong *)*local_1e8)[1];
            lVar25 = *(longlong *)*local_1e8;
            lVar18 = *(int *)(lVar25 + 8 + (longlong)(int)((uint)uVar1 * -0x10 + iVar19 + -0x10)) +
                     lVar25;
            lVar25 = *(int *)(lVar25 + 8 + (longlong)(int)((uint)uVar2 * -0x10 + iVar19 + -0x10)) +
                     lVar25;
LAB_1438c9add:
            lVar25 = FUN_145814b44(lVar25);
            lVar18 = FUN_145814b44(lVar18);
            if (lVar25 != lVar18) goto LAB_1438c9af2;
          }
          lVar9 = lVar9 + 0x58;
        } while ((longlong)iVar23 * 0x58 - lVar9 != 0);
      }
    }
    lVar11 = local_1a0;
    local_e8 = 0;
    local_e0 = 0;
    local_108 = (code *)0x0;
    ppsStack_100 = (short **)0x0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_138 = 0;
    local_130 = 0;
    local_158 = (code *)0x0;
    uStack_150 = 0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    local_118 = (undefined1 *)0x0;
    local_110 = 0;
    local_188 = *(undefined8 *)(param_1 + 0x160);
    lStack_180 = *(longlong *)(param_1 + 0x168);
    local_168 = (short *)&local_1a0;
    local_1a0 = CONCAT71(local_1a0._1_7_,9);
    uVar13 = local_1a0;
    local_1a0._6_2_ = SUB82(lVar11,6);
    local_1a0._0_6_ = CONCAT42(0xffffffff,(short)uVar13);
    puStack_160 = &local_188;
    FUN_147fb43c6(&local_108,&local_190);
    if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
      puVar22 = *(undefined8 **)(param_1 + 0xa8);
      puVar16 = puVar22 + (longlong)*(int *)(param_1 + 0xb0) * 3;
      do {
        local_188 = *puVar22;
        lStack_180 = 0;
        local_168 = (short *)(puVar22 + 2);
        puStack_160 = &local_188;
        FUN_147fb48d0(&local_108,&local_1a0);
        puVar22 = puVar22 + 3;
      } while (puVar22 != puVar16);
    }
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      lVar11 = (longlong)*(int *)(param_1 + 0x48) * 0x58;
      psVar24 = (short *)(*(longlong *)(param_1 + 0x40) + 0x40);
      do {
        if ((char)psVar24[-3] != '\0') {
          local_168 = psVar24 + -3;
          lVar9 = *(longlong *)*local_1e8;
          lVar25 = (longlong)
                   *(int *)(lVar9 + 8 +
                           (longlong)
                           (int)((uint)(ushort)psVar24[-4] * -0x10 +
                                 (int)((longlong *)*local_1e8)[1] + -0x10));
          puVar16 = (undefined8 *)(lVar9 + lVar25);
          local_188 = *puVar16;
          lStack_180 = puVar16[1];
          puStack_160 = &local_188;
          FUN_147fb48d0(&local_108,&local_1a0);
          if (*psVar24 != -1) {
            puVar16 = (undefined8 *)(lVar9 + lVar25);
            local_188 = *puVar16;
            lStack_180 = puVar16[1];
            local_168 = psVar24;
            puStack_160 = &local_188;
            FUN_147fb4a30(&local_158,&local_1a0);
          }
        }
        psVar24 = psVar24 + 0x2c;
        lVar11 = lVar11 + -0x58;
      } while (lVar11 != 0);
    }
    iVar23 = *(int *)(param_1 + 0x6c);
    if (iVar23 != 0) {
      plVar10 = (longlong *)(param_1 + 0x80);
      iVar19 = -0x10;
      do {
        lVar11 = *(longlong *)(param_1 + 0x60);
        lVar9 = (longlong)(*(int *)(param_1 + 0x68) + iVar19);
        iVar8 = *(int *)(lVar11 + 8 + lVar9);
        lVar9 = *(longlong *)(lVar11 + lVar9);
        cVar6 = FUN_147fab240(lVar9);
        plVar15 = plVar10;
        if ((((cVar6 == '\0') && (cVar6 = FUN_147fab2a0(lVar9), cVar6 == '\0')) &&
            (lVar25 = FUN_146453aea(), plVar15 = local_1e8, lVar25 != 0)) &&
           ((*(int *)(lVar25 + 0x38) <= *(int *)(lVar9 + 0x38) &&
            (plVar15 = plVar10,
            *(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar25 + 0x38) * 8) !=
            lVar25 + 0x30)))) {
          plVar15 = local_1e8;
        }
        lVar11 = lVar11 + iVar8;
        if ((*(byte *)(lVar11 + 0x14) < 7) &&
           ((0x54U >> (*(byte *)(lVar11 + 0x14) & 0x1f) & 1) != 0)) {
          lVar9 = *(longlong *)*plVar15;
          lStack_180 = *(longlong *)
                        (lVar9 + *(int *)(lVar9 + 8 +
                                         (longlong)
                                         (int)((int)((longlong *)*plVar15)[1] +
                                               (uint)*(ushort *)(lVar11 + 0x12) * -0x10 + -0x10)));
          if (lStack_180 != 0) {
            puVar16 = (undefined8 *)(lStack_180 + 0x10);
            goto LAB_1438c90c8;
          }
          local_188 = 0;
          lStack_180 = 0;
        }
        else {
          lStack_180 = *(longlong *)*plVar15;
          lVar9 = (longlong)
                  (int)((int)((longlong *)*plVar15)[1] + (uint)*(ushort *)(lVar11 + 0x12) * -0x10 +
                       -0x10);
          puVar16 = (undefined8 *)(lStack_180 + lVar9);
          lStack_180 = *(int *)(lStack_180 + 8 + lVar9) + lStack_180;
LAB_1438c90c8:
          local_188 = *puVar16;
        }
        local_168 = (short *)(lVar11 + 0x14);
        puStack_160 = &local_188;
        FUN_147fb4eca(&local_108,&local_1a0);
        if (*(short *)(lVar11 + 0x10) != -1) {
          local_168 = (short *)(lVar11 + 0x10);
          puStack_160 = &local_188;
          FUN_147fb502a(&local_158,&local_1a0);
        }
        iVar19 = iVar19 + -0x10;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
    if ((int)local_1d0 < 1) {
      ppsVar20 = (short **)&DAT_00000001;
    }
    else {
      local_1c8 = local_1c8 + 2;
      lVar9 = 0;
      ppsVar20 = (short **)0x0;
      lVar11 = local_1d8;
      while ((int)uStack_150 != local_124) {
        puVar17 = local_118;
        if (local_118 == (undefined1 *)0x0) {
          puVar17 = local_120;
        }
        iVar23 = *(int *)(puVar17 + (ulonglong)(local_110 - 1U & (uint)lVar9 & 0xffff) * 4);
        if (iVar23 == -1) break;
        lVar25 = lVar9 * 0x20 + lVar11;
        while (pcVar14 = local_158 + (longlong)iVar23 * 0x20,
              *(short *)(local_158 + (longlong)iVar23 * 0x20) != (short)lVar9) {
          iVar23 = *(int *)(pcVar14 + 0x18);
          if (iVar23 == -1) goto LAB_1438c9995;
        }
        if ((((pcVar14 == (code *)0x0) || (pcVar14 == (code *)0xfffffffffffffff8)) ||
            (lVar18 = *(longlong *)(pcVar14 + 0x10), lVar18 == 0)) ||
           (lVar12 = *(longlong *)(pcVar14 + 8), lVar12 == 0)) break;
        local_168 = (short *)0x0;
        puStack_160 = (undefined8 *)0x0;
        uVar26 = (ulonglong)*(ushort *)(lVar25 + 0x18);
        if (*(ushort *)(lVar25 + 0x18) != *(ushort *)(lVar25 + 0x1a)) {
          local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,(int)ppsVar20);
          plVar10 = local_1c8 + uVar26 * 5;
          do {
            if ((*(byte *)(plVar10 + 2) & 0xfe) != 0xc) {
              uVar7 = *(uint *)(plVar10 + 2);
              local_18c = *(ushort *)((longlong)plVar10 + 0x14);
              local_190._2_2_ = (ushort)(uVar7 >> 0x10);
              uVar21 = (uint)(local_190._2_2_ >> 2) + (uint)local_190._2_2_ * 0x40 + (uVar7 & 0xff)
                       + 0x9e3779b9 ^ (uint)local_190._2_2_;
              local_190 = uVar7;
              iVar23 = FUN_147fb2194(&local_108,
                                     (uVar21 >> 2) + 0x9e3779b9 + uVar21 * 0x40 + (uint)local_18c ^
                                     uVar21,&local_190);
              pcVar14 = local_108 + (longlong)iVar23 * 0x20;
              if (pcVar14 == (code *)0x0 || iVar23 == -1) {
                lStack_180 = 0;
                local_188 = 0;
              }
              else {
                local_188 = *(undefined8 *)(pcVar14 + 8);
                lStack_180 = *(longlong *)(pcVar14 + 0x10);
              }
              cVar6 = FUN_147fb967a(plVar10 + -2,&local_188,&local_168);
              if (cVar6 != '\0') goto LAB_1438c9323;
LAB_1438c997e:
              if (local_168 != (short *)0x0) {
                FUN_1400020a8();
              }
              ppsVar20 = (short **)((ulonglong)local_1e8 & 0xffffffff);
              goto LAB_1438c9995;
            }
LAB_1438c9323:
            ppsVar20 = &local_168;
            local_1a0 = lVar12;
            local_198 = lVar18;
            cVar6 = FUN_147fb967a(plVar10,&local_1a0,ppsVar20);
            if (cVar6 == '\0') goto LAB_1438c997e;
            uVar26 = uVar26 + 1;
            plVar10 = plVar10 + 5;
          } while (uVar26 != *(ushort *)(lVar25 + 0x1a));
          lVar11 = local_1d8;
          if (local_168 != (short *)0x0) {
            FUN_1400020a8();
            lVar11 = local_1d8;
          }
        }
        lVar9 = lVar9 + 1;
        ppsVar20 = (short **)CONCAT71((int7)((ulonglong)ppsVar20 >> 8),local_1d0 <= lVar9);
        if (lVar9 == local_1d0) break;
      }
    }
LAB_1438c9995:
    local_110 = 0;
    if (local_118 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_147fb21fe(&local_158);
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_147fb228c(&local_108);
    uVar26 = (ulonglong)ppsVar20 & 0xffffffff;
    goto LAB_1438c9af5;
  }
  goto LAB_1438c8995;
LAB_1438c9af2:
  uVar26 = 0;
LAB_1438c9af5:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_147fb231a(&local_b8);
  if (((uVar26 & 1) != 0) && (cVar6 = FUN_1438d407c(param_1 + 0xb8), cVar6 != '\0')) {
    *(undefined1 *)(param_1 + 400) = 1;
  }
LAB_1438c8995:
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
LAB_1438c89a7:
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438c9b54 FUN_1438c9b54 body=55 status=ok
// SIG undefined FUN_1438c9b54(void)

void FUN_1438c9b54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28448 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28448 = FUN_14171c317(FUN_146452857,uVar1,L"EStateTreeLoopEvents");
  }
  return;
}



// FUNCTION 1438c9b8c FUN_1438c9b8c body=443 status=ok
// SIG undefined FUN_1438c9b8c(void)

undefined8 *
FUN_1438c9b8c(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,char param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *param_1 = &PTR_FUN_14aceedb0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  FUN_147fb5290(param_1 + 10,param_5);
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 4;
  *(undefined8 *)((longlong)param_1 + 0x9a) = 0x1ffffffffffff;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xbe) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xf2) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (*(int *)(param_3 + 0x48) < 1) {
    return param_1;
  }
  if (*(char *)(param_3 + 400) != '\x01') {
    return param_1;
  }
  if (*(char *)(param_3 + 0x128) != '\x01') {
    return param_1;
  }
  FUN_147fab6c0(param_1 + 8,*(undefined2 *)(param_1[2] + 0x170));
  lVar3 = *(longlong *)param_1[3];
  param_1[4] = lVar3;
  uVar4 = *(undefined8 *)(lVar3 + 0x58);
  plVar5 = *(longlong **)(lVar3 + 0x60);
  if (plVar5 == (longlong *)0x0) {
    param_1[5] = uVar4;
    plVar6 = (longlong *)param_1[6];
    if (plVar6 == (longlong *)0x0) goto LAB_1438c9d37;
    param_1[6] = 0;
LAB_1438c9d01:
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1438c9d37;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[5] = uVar4;
    plVar6 = (longlong *)param_1[6];
    if (plVar5 != plVar6) {
      param_1[6] = plVar5;
      if (plVar6 == (longlong *)0x0) goto LAB_1438c9d37;
      goto LAB_1438c9d01;
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1438c9d37;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar5;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1438c9d37:
  *(bool *)(param_1 + 0x21) = param_6 == '\x01';
  return param_1;
}



// FUNCTION 1438c9d48 FUN_1438c9d48 body=295 status=ok
// SIG undefined FUN_1438c9d48(void)

longlong FUN_1438c9d48(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  
  FUN_1438c9b8c(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4,param_2 + 0x50,0);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x10) !=
      *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38) + 0x10)) {
    return param_1;
  }
  iVar4 = *(int *)(lVar5 + 0xb0);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(lVar5 + 0xa8);
    lVar11 = 0;
    do {
      lVar13 = (ulonglong)*(ushort *)(lVar5 + 0x12 + lVar11) * 0x10;
      puVar2 = (undefined4 *)(*(longlong *)(param_2 + 0x40) + lVar13);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x40) + lVar13);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      lVar11 = lVar11 + 0x18;
    } while ((longlong)iVar4 * 0x18 != lVar11);
  }
  uVar6 = *(undefined8 *)(**(longlong **)(param_1 + 0x18) + 0x58);
  plVar7 = *(longlong **)(**(longlong **)(param_1 + 0x18) + 0x60);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    plVar12 = *(longlong **)(param_1 + 0x30);
    if (plVar12 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    plVar12 = *(longlong **)(param_1 + 0x30);
    if (plVar7 == plVar12) {
      LOCK();
      plVar12 = plVar7 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 != 0) {
        return param_1;
      }
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar4 = *piVar1;
      UNLOCK();
      goto joined_r0x0001438c9e3a;
    }
    *(longlong **)(param_1 + 0x30) = plVar7;
    if (plVar12 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar7 = plVar12 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 != 0) {
    return param_1;
  }
  (**(code **)*plVar12)(plVar12);
  LOCK();
  piVar1 = (int *)((longlong)plVar12 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar4 = *piVar1;
  UNLOCK();
  plVar7 = plVar12;
joined_r0x0001438c9e3a:
  if (iVar4 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return param_1;
}



// FUNCTION 1438c9e70 FUN_1438c9e70 body=2377 status=ok
// SIG undefined FUN_1438c9e70(void)

ulonglong FUN_1438c9e70(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  short sVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  short *psVar12;
  longlong lVar13;
  undefined8 unaff_RDI;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_758 [32];
  undefined4 *local_738;
  undefined1 local_730;
  undefined1 local_71c;
  undefined1 local_71b;
  undefined2 local_71a;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 local_700;
  longlong local_6f8;
  longlong local_6f0;
  ulonglong local_6e8;
  longlong *local_6e0;
  LARGE_INTEGER *local_6d8;
  undefined4 *local_6d0;
  longlong local_6c8;
  longlong local_6c0;
  longlong *local_6b8;
  longlong local_6b0;
  undefined1 local_6a8 [16];
  undefined1 local_698 [16];
  undefined1 local_688;
  undefined1 uStack_687;
  undefined2 uStack_686;
  undefined2 uStack_684;
  undefined2 uStack_682;
  undefined2 uStack_680;
  undefined8 local_678;
  undefined2 local_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined8 local_658;
  undefined4 local_650;
  LARGE_INTEGER local_648;
  LARGE_INTEGER LStack_640;
  undefined4 local_630;
  undefined2 local_62c;
  LARGE_INTEGER local_628;
  LARGE_INTEGER LStack_620;
  LARGE_INTEGER local_618;
  LARGE_INTEGER LStack_610;
  undefined4 local_600;
  undefined2 local_5fc;
  LARGE_INTEGER local_5f8;
  LARGE_INTEGER LStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  ulonglong local_478;
  undefined1 local_470 [1024];
  ulonglong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_758;
  lVar17 = *(longlong *)(param_1 + 0x10);
  uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((((*(int *)(lVar17 + 0x48) < 1) || (*(char *)(lVar17 + 400) != '\x01')) ||
      (*(char *)(lVar17 + 0x128) != '\x01')) ||
     (lVar17 = *(longlong *)(param_1 + 0x20), *(char *)(lVar17 + 0x37) != '\0')) goto LAB_1438c9eca;
  if (*(char *)(lVar17 + 0x35) == '\0') {
    FUN_1438ca7ba(param_1,3);
  }
  FUN_1459cb4b6(**(undefined8 **)(param_1 + 0x18));
  if ((param_2 == 0) || (cVar7 = FUN_147fabb1a(param_1,param_2), cVar7 == '\0')) {
    FUN_147fabb1a(param_1,*(longlong *)(param_1 + 0x10) + 0x160);
  }
  plVar9 = (longlong *)FUN_147fabb66(lVar17 + 0x10);
  lVar11 = *(longlong *)(param_1 + 0x10);
  if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar11);
  }
  *plVar9 = lVar11;
  *(undefined2 *)(plVar9 + 1) = DAT_14cb28a80;
  *(undefined4 *)((longlong)plVar9 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)plVar9 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)plVar9 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)plVar9 + 0x16) = 0xffffffff;
  *(undefined2 *)((longlong)plVar9 + 0x1a) = 0;
  *(byte *)((longlong)plVar9 + 0x2f) = *(byte *)((longlong)plVar9 + 0x2f) | 1;
  local_658 = *(undefined8 *)(lVar17 + 0x10);
  local_650 = *(undefined4 *)(lVar17 + 0x18);
  local_668 = 0;
  local_660 = 0;
  FUN_147fabba6(param_1);
  if (param_3 == 0xffffffff) {
    QueryPerformanceCounter(&local_5f8);
    param_3 = local_5f8.s.LowPart;
  }
  *(undefined4 *)(lVar17 + 0x40) = param_3;
  *(undefined4 *)(lVar17 + 0x44) = param_3;
  cVar7 = FUN_147fac7ee(param_1);
  if (cVar7 == '\0') goto LAB_1438c9eca;
  *(undefined1 *)(lVar17 + 0x37) = 1;
  lVar11 = *(longlong *)(param_1 + 0x20);
  iVar14 = *(int *)(lVar11 + 0x18);
  local_6b8 = plVar9;
  if (iVar14 < 1) {
LAB_1438ca54f:
    FUN_1438ca8fa(param_1,0,0);
    *(undefined2 *)(lVar17 + 0x34) = 4;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb284a4) && (FUN_144b3d300(&DAT_14cb284a4), DAT_14cb284a4 == -1)) {
      DAT_14cb284a0 = 0;
      _Init_thread_footer(&DAT_14cb284a4);
    }
    local_478 = 0x800000000;
    local_70 = 0x800000000;
    local_730 = 0;
    local_738 = (undefined4 *)0x0;
    cVar7 = FUN_1438cae0e(param_1,local_6b8,DAT_14cb284a0);
    uVar6 = local_478;
    if (cVar7 != '\0') {
      uVar10 = local_478 & 0xffffffff;
      lVar11 = (longlong)(int)((uint)local_478 - 1) * 0x30;
      bVar3 = *(byte *)((longlong)&uStack_5e0 + lVar11 + 2);
      psVar12 = &DAT_14acfe058;
      if (bVar3 != 0) {
        psVar12 = (short *)((longlong)&LStack_5f0 + (ulonglong)(bVar3 - 1) * 2 + lVar11 + 2);
      }
      if ((ushort)(*psVar12 + 4U) < 3) {
        *(char *)(lVar17 + 0x35) = (char)(0x20103 >> (((byte)*psVar12 & 3) << 3));
      }
      else {
        local_698 = (undefined1  [16])0x0;
        uStack_686 = 0xffff;
        uStack_682 = 0xffff;
        uStack_680 = 1;
        local_678 = 0;
        local_670 = 0xffff;
        uStack_684 = DAT_14cb284a0;
        local_688 = *(undefined1 *)(lVar17 + 0x34);
        local_6a8 = ZEXT416((uint)local_478) << 0x40;
        if ((uint)local_478 == 0) {
          local_698._0_8_ = 0;
          local_698._8_4_ = 0;
        }
        else {
          FUN_147fa6b62(local_6a8,local_478 & 0xffffffff,0);
          FUN_147fa6bd5(local_6a8._0_8_,&local_5f8,uVar6 & 0xffffffff);
        }
        uVar6 = local_70;
        iVar14 = (int)local_70;
        uVar10 = local_70 & 0xffffffff;
        FUN_147fa6f11(local_698._0_8_,local_698._8_4_);
        local_698._8_4_ = iVar14;
        if (local_698._12_4_ == 0 && iVar14 == 0) {
          local_698._12_4_ = 0;
        }
        else {
          FUN_147faa3b0(local_698,uVar10);
          FUN_147faa412(local_698._0_8_,local_470,uVar6 & 0xffffffff);
        }
        cVar7 = FUN_1438cb4c2(param_1,local_6a8);
        *(char *)(lVar17 + 0x34) = cVar7;
        if (cVar7 != '\0') {
          FUN_1438cc07c(param_1);
        }
        FUN_147fa6ed6(local_6a8);
      }
    }
    if (*(char *)(lVar17 + 0x34) == '\x04') {
      *(undefined1 *)(lVar17 + 0x35) = 1;
    }
    FUN_147fa6f11(local_470,local_70 & 0xffffffff);
    uVar10 = CONCAT71((int7)(uVar10 >> 8),*(undefined1 *)(lVar17 + 0x35));
  }
  else {
    local_6d0 = (undefined4 *)(param_1 + 0xf2);
    local_6d8 = (LARGE_INTEGER *)(param_1 + 0xf8);
    lVar15 = 0;
    local_71a = 0xffff;
    local_6e8 = 0;
    local_6f0 = lVar11;
    local_6c0 = lVar17 + 0x10;
    local_6b0 = lVar17;
    do {
      lVar17 = *(longlong *)(lVar11 + 0x10) + -0x30 + lVar15 * 0x30;
      lVar13 = lVar17;
      if (lVar15 == 0) {
        lVar13 = 0;
      }
      if ((*(byte *)(lVar17 + 0x5f) & 1) != 0) {
        plVar9 = (longlong *)(*(longlong *)(lVar11 + 0x10) + lVar15 * 0x30);
        FUN_147fab5e0(local_6a8,param_1,lVar13,plVar9);
        local_6c8 = *plVar9;
        local_6f8 = lVar13;
        if (*(short *)(local_6c8 + 0x176) != 0) {
          uVar8 = (uint)*(ushort *)(local_6c8 + 0x174);
          iVar14 = ~uVar8 << 4;
          local_6e0 = plVar9;
          do {
            lVar17 = *(longlong *)(local_6c8 + 0x60);
            lVar11 = (longlong)
                     *(int *)(lVar17 + 8 + (longlong)(*(int *)(local_6c8 + 0x68) + iVar14));
            local_600 = *(undefined4 *)(lVar17 + 0x14 + lVar11);
            local_5fc = *(undefined2 *)(lVar17 + 0x18 + lVar11);
            local_738 = &local_600;
            FUN_147fac964(param_1,&local_5f8,local_6f8,local_6e0);
            uVar1 = *(undefined1 *)(param_1 + 0xf2);
            uVar2 = *(undefined1 *)(param_1 + 0xf3);
            local_700 = CONCAT62(local_700._2_6_,*(undefined2 *)(param_1 + 0xf4));
            local_708 = CONCAT62(local_708._2_6_,*(undefined2 *)(param_1 + 0xf6));
            local_710 = *(undefined8 *)(param_1 + 0xf8);
            local_718 = *(undefined8 *)(param_1 + 0x100);
            uVar5 = *(undefined4 *)(lVar17 + 0x14 + lVar11);
            *(undefined2 *)(local_6d0 + 1) = *(undefined2 *)(lVar17 + 0x18 + lVar11);
            *local_6d0 = uVar5;
            *local_6d8 = local_5f8;
            local_6d8[1] = LStack_5f0;
            sVar4 = *(short *)(lVar17 + 0x10 + lVar11);
            if (sVar4 != -1) {
              local_618 = local_5f8;
              LStack_610 = LStack_5f0;
              local_738 = (undefined4 *)CONCAT62(local_738._2_6_,sVar4);
              FUN_147fad2b0(param_1,local_6f8,local_6e0,&local_618);
            }
            (**(code **)(*(longlong *)(lVar17 + lVar11) + 0x28))
                      ((longlong *)(lVar17 + lVar11),param_1);
            *(undefined1 *)(param_1 + 0xf2) = uVar1;
            *(undefined1 *)(param_1 + 0xf3) = uVar2;
            *(undefined2 *)(param_1 + 0xf4) = (undefined2)local_700;
            *(undefined2 *)(param_1 + 0xf6) = (undefined2)local_708;
            *(undefined8 *)(param_1 + 0xf8) = local_710;
            *(undefined8 *)(param_1 + 0x100) = local_718;
            uVar8 = uVar8 + 1;
            iVar14 = iVar14 + -0x10;
            plVar9 = local_6e0;
          } while (uVar8 < (uint)*(ushort *)(local_6c8 + 0x176) +
                           (uint)*(ushort *)(local_6c8 + 0x174));
        }
        local_5c8 = 0;
        local_5e8 = 0;
        uStack_5e0 = 0;
        local_5f8.QuadPart = 0;
        LStack_5f0.QuadPart = 0;
        local_5d8 = 0xffffffffffff0004;
        uStack_5d0 = 1;
        uStack_5c0 = 0xffff;
        if (*(short *)(local_6c8 + 0x17a) != 0) {
          uVar8 = (uint)*(ushort *)(local_6c8 + 0x178);
          iVar14 = ~uVar8 << 4;
          do {
            lVar17 = *(longlong *)(local_6c8 + 0x60);
            lVar11 = (longlong)
                     *(int *)(lVar17 + 8 + (longlong)(*(int *)(local_6c8 + 0x68) + iVar14));
            local_630 = *(undefined4 *)(lVar17 + 0x14 + lVar11);
            local_62c = *(undefined2 *)(lVar17 + 0x18 + lVar11);
            local_738 = &local_630;
            FUN_147fac964(param_1,&local_628,local_6f8,plVar9);
            local_71c = *(undefined1 *)(param_1 + 0xf2);
            local_71b = *(undefined1 *)(param_1 + 0xf3);
            local_718 = CONCAT62(local_718._2_6_,*(undefined2 *)(param_1 + 0xf4));
            local_710 = CONCAT62(local_710._2_6_,*(undefined2 *)(param_1 + 0xf6));
            local_708 = *(undefined8 *)(param_1 + 0xf8);
            local_700 = *(undefined8 *)(param_1 + 0x100);
            uVar5 = *(undefined4 *)(lVar17 + 0x14 + lVar11);
            *(undefined2 *)(local_6d0 + 1) = *(undefined2 *)(lVar17 + 0x18 + lVar11);
            *local_6d0 = uVar5;
            *local_6d8 = local_628;
            local_6d8[1] = LStack_620;
            sVar4 = *(short *)(lVar17 + 0x10 + lVar11);
            if (sVar4 != -1) {
              local_648 = local_628;
              LStack_640 = LStack_620;
              local_738 = (undefined4 *)CONCAT62(local_738._2_6_,sVar4);
              FUN_147fad2b0(param_1,local_6f8,plVar9,&local_648);
            }
            plVar16 = (longlong *)(lVar17 + lVar11);
            if (((*(byte *)(plVar16 + 4) & 0x40) != 0) &&
               (uVar10 = (**(code **)(*plVar16 + 0x28))(plVar16,param_1,&local_5f8),
               (char)uVar10 != '\0')) {
              *(undefined1 *)(param_1 + 0xf2) = local_71c;
              *(undefined1 *)(param_1 + 0xf3) = local_71b;
              *(undefined2 *)(param_1 + 0xf4) = (undefined2)local_718;
              *(undefined2 *)(param_1 + 0xf6) = (undefined2)local_710;
              *(undefined8 *)(param_1 + 0xf8) = local_708;
              *(undefined8 *)(param_1 + 0x100) = local_700;
              local_71a = (undefined2)uVar8;
              local_6e8 = uVar10;
              break;
            }
            *(undefined1 *)(param_1 + 0xf2) = local_71c;
            *(undefined1 *)(param_1 + 0xf3) = local_71b;
            *(undefined2 *)(param_1 + 0xf4) = (undefined2)local_718;
            *(undefined2 *)(param_1 + 0xf6) = (undefined2)local_710;
            *(undefined8 *)(param_1 + 0xf8) = local_708;
            *(undefined8 *)(param_1 + 0x100) = local_700;
            uVar8 = uVar8 + 1;
            iVar14 = iVar14 + -0x10;
          } while (uVar8 < (uint)*(ushort *)(local_6c8 + 0x17a) +
                           (uint)*(ushort *)(local_6c8 + 0x178));
        }
        lVar11 = local_6f0;
        FUN_147fa6ed6(&local_5f8);
        *(undefined8 *)(local_6a8._0_8_ + 200) = local_698._8_8_;
        *(ulonglong *)(local_6a8._0_8_ + 0xc0) =
             CONCAT26(uStack_682,
                      CONCAT24(uStack_684,CONCAT22(uStack_686,CONCAT11(uStack_687,local_688))));
        *(undefined8 *)(local_6a8._0_8_ + 0xd0) = local_698._0_8_;
        iVar14 = *(int *)(lVar11 + 0x18);
      }
      lVar17 = local_6b0;
      uVar10 = local_6e8;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar14);
    cVar7 = (char)local_6e8;
    if (cVar7 == '\0') goto LAB_1438ca54f;
    FUN_1438cc55a(param_1,local_6e8 & 0xffffffff,local_71a);
    *(undefined4 *)(lVar17 + 0x18) = 0;
    if (*(int *)(lVar17 + 0x1c) < 0) {
      FUN_147fb3c46(local_6c0,0);
    }
    *(char *)(lVar17 + 0x35) = cVar7;
  }
  *(undefined1 *)(lVar17 + 0x37) = 0;
  if (*(char *)(lVar17 + 0x36) != '\x04') {
    uVar8 = FUN_1438ca7ba(param_1);
    uVar10 = (ulonglong)uVar8;
  }
LAB_1438c9eca:
  if ((local_60 ^ (ulonglong)auStack_758) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1438ca7ba FUN_1438ca7ba body=319 status=ok
// SIG undefined FUN_1438ca7ba(void)

ulonglong FUN_1438ca7ba(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined4 local_42;
  undefined8 local_38;
  undefined2 local_30;
  ulonglong local_28;
  undefined7 uVar4;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if ((((0 < *(int *)(lVar1 + 0x48)) && (*(char *)(lVar1 + 400) == '\x01')) &&
      (*(char *)(lVar1 + 0x128) == '\x01')) && (cVar2 = FUN_147fac7ee(), cVar2 != '\0')) {
    uVar5 = 3;
    if ((param_2 & 0xfb) != 0) {
      uVar5 = param_2 & 0xff;
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    cVar2 = (char)uVar5;
    if (*(char *)(lVar1 + 0x37) == '\0') {
      *(undefined1 *)(lVar1 + 0x37) = 2;
      uVar3 = CONCAT71(uVar4,*(char *)(lVar1 + 0x35));
      if (*(char *)(lVar1 + 0x35) == '\0') {
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_46 = 0xffff;
        local_42 = 0x1ffff;
        local_38 = 0;
        local_30 = 0xffff;
        local_44 = DAT_14cb28a82;
        if (((cVar2 != '\x01') && (local_44 = DAT_14cb28a18, (int)uVar5 != 3)) &&
           (local_44 = 0xffff, (int)uVar5 == 2)) {
          local_44 = DAT_14cb28a84;
        }
        local_48 = cVar2;
        FUN_1438cca60(param_1);
        *(undefined4 *)(lVar1 + 0x18) = 0;
        if (*(int *)(lVar1 + 0x1c) < 0) {
          FUN_147fb3c46(lVar1 + 0x10,0);
        }
        FUN_147fa6ed6(&local_68);
        uVar3 = uVar5;
      }
      FUN_1459cb4b6(**(undefined8 **)(param_1 + 0x18));
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
    else {
      *(char *)(lVar1 + 0x36) = cVar2;
      uVar3 = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1438ca8fa FUN_1438ca8fa body=1298 status=ok
// SIG undefined FUN_1438ca8fa(void)

uint FUN_1438ca8fa(longlong param_1,undefined4 param_2,char param_3)

{
  short sVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined2 local_12e;
  uint local_12c;
  undefined1 local_127;
  undefined1 local_126;
  char local_125;
  uint local_124;
  undefined8 local_120;
  undefined2 local_112;
  ulonglong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar14 = *(longlong *)(param_1 + 0x20);
  iVar16 = *(int *)(lVar14 + 0x18);
  local_125 = param_3;
  if (iVar16 < 1) {
    local_124 = 0;
  }
  else {
    local_e0 = (undefined4 *)(param_1 + 0xf2);
    local_e8 = (undefined4 *)(param_1 + 0xf8);
    lVar8 = 0;
    local_124 = 0;
    local_f0 = lVar14;
    do {
      lVar15 = *(longlong *)(lVar14 + 0x10) + -0x30 + lVar8 * 0x30;
      lVar12 = lVar15;
      if (lVar8 == 0) {
        lVar12 = 0;
      }
      if ((*(byte *)(lVar15 + 0x5f) & 1) != 0) {
        plVar7 = (longlong *)(*(longlong *)(lVar14 + 0x10) + lVar8 * 0x30);
        FUN_147fab5e0(local_88,param_1,lVar12,plVar7);
        local_108 = *plVar7;
        if (*(short *)(local_108 + 0x176) != 0) {
          uVar5 = (uint)*(ushort *)(local_108 + 0x174);
          iVar16 = ~(uint)*(ushort *)(local_108 + 0x174) << 4;
          do {
            lVar14 = *(longlong *)(local_108 + 0x60);
            lVar15 = (longlong)
                     *(int *)(lVar14 + 8 + (longlong)(*(int *)(local_108 + 0x68) + iVar16));
            local_a0 = *(undefined4 *)(lVar14 + 0x14 + lVar15);
            local_9c = *(undefined2 *)(lVar14 + 0x18 + lVar15);
            local_138 = &local_a0;
            FUN_147fac964(param_1,&local_98,lVar12,plVar7);
            local_12c = CONCAT31(local_12c._1_3_,*(undefined1 *)(param_1 + 0xf2));
            local_12e = CONCAT11(local_12e._1_1_,*(undefined1 *)(param_1 + 0xf3));
            local_120 = CONCAT62(local_120._2_6_,*(undefined2 *)(param_1 + 0xf4));
            local_f8 = CONCAT62(local_f8._2_6_,*(undefined2 *)(param_1 + 0xf6));
            local_110 = *(ulonglong *)(param_1 + 0xf8);
            local_100 = *(ulonglong *)(param_1 + 0x100);
            uVar4 = *(undefined4 *)(lVar14 + 0x14 + lVar15);
            *(undefined2 *)(local_e0 + 1) = *(undefined2 *)(lVar14 + 0x18 + lVar15);
            *local_e0 = uVar4;
            *local_e8 = local_98;
            local_e8[1] = uStack_94;
            local_e8[2] = uStack_90;
            local_e8[3] = uStack_8c;
            sVar1 = *(short *)(lVar14 + 0x10 + lVar15);
            if (sVar1 != -1) {
              local_b8 = local_98;
              uStack_b4 = uStack_94;
              uStack_b0 = uStack_90;
              uStack_ac = uStack_8c;
              local_138 = (undefined4 *)CONCAT62(local_138._2_6_,sVar1);
              FUN_147fad2b0(param_1,lVar12,plVar7,&local_b8);
            }
            (**(code **)(*(longlong *)(lVar14 + lVar15) + 0x38))
                      ((longlong *)(lVar14 + lVar15),param_1,param_2);
            *(undefined1 *)(param_1 + 0xf2) = (undefined1)local_12c;
            *(undefined1 *)(param_1 + 0xf3) = (undefined1)local_12e;
            *(undefined2 *)(param_1 + 0xf4) = (undefined2)local_120;
            *(undefined2 *)(param_1 + 0xf6) = (undefined2)local_f8;
            *(ulonglong *)(param_1 + 0xf8) = local_110;
            *(ulonglong *)(param_1 + 0x100) = local_100;
            uVar5 = uVar5 + 1;
            iVar16 = iVar16 + -0x10;
          } while (uVar5 < (uint)*(ushort *)(local_108 + 0x176) +
                           (uint)*(ushort *)(local_108 + 0x174));
        }
        lVar14 = local_f0;
        if (local_125 != '\0') {
          lVar15 = *(longlong *)(param_1 + 0x28);
          if (lVar15 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (undefined4)CONCAT71((int7)((ulonglong)lVar15 >> 8),*(int *)(lVar15 + 8) != 0);
          }
          if (*(short *)(local_108 + 0x17a) != 0) {
            uVar5 = (uint)*(ushort *)(local_108 + 0x178);
            iVar16 = ~(uint)*(ushort *)(local_108 + 0x178) << 4;
            local_110 = CONCAT71(local_110._1_7_,1);
            local_100 = CONCAT44(local_100._4_4_,uVar4) ^ 1;
            do {
              lVar15 = *(longlong *)(local_108 + 0x60);
              lVar6 = (longlong)
                      *(int *)(lVar15 + 8 + (longlong)(*(int *)(local_108 + 0x68) + iVar16));
              local_c0 = *(undefined4 *)(lVar15 + 0x14 + lVar6);
              local_bc = *(undefined2 *)(lVar15 + 0x18 + lVar6);
              local_138 = &local_c0;
              local_12c = uVar5;
              FUN_147fac964(param_1,&local_98,lVar12,plVar7);
              uVar9 = *(undefined1 *)(param_1 + 0xf2);
              uVar10 = *(undefined1 *)(param_1 + 0xf3);
              uVar11 = *(undefined2 *)(param_1 + 0xf4);
              local_12e = *(undefined2 *)(param_1 + 0xf6);
              local_120 = *(undefined8 *)(param_1 + 0xf8);
              local_f8 = *(undefined8 *)(param_1 + 0x100);
              uVar4 = *(undefined4 *)(lVar15 + 0x14 + lVar6);
              *(undefined2 *)(local_e0 + 1) = *(undefined2 *)(lVar15 + 0x18 + lVar6);
              *local_e0 = uVar4;
              *local_e8 = local_98;
              local_e8[1] = uStack_94;
              local_e8[2] = uStack_90;
              local_e8[3] = uStack_8c;
              bVar3 = *(byte *)(lVar15 + 0x20 + lVar6);
              if (((bVar3 & 0x40) != 0) && ((local_110 & 1) != 0)) {
                if ((bVar3 & 2) == 0 && (char)local_100 == '\0') {
                  bVar2 = bVar3 & 4;
                }
                else {
                  bVar2 = bVar3 & 2;
                }
                if (bVar2 == 0) {
                  local_110 = CONCAT71(local_110._1_7_,1);
                }
                else {
                  plVar13 = (longlong *)(lVar15 + lVar6);
                  local_127 = uVar10;
                  local_126 = uVar9;
                  local_112 = uVar11;
                  if ((bVar3 & 8) != 0 && (short)plVar13[2] != -1) {
                    local_d8 = local_98;
                    uStack_d4 = uStack_94;
                    uStack_d0 = uStack_90;
                    uStack_cc = uStack_8c;
                    local_138 = (undefined4 *)CONCAT62(local_138._2_6_,(short)plVar13[2]);
                    FUN_147fad2b0(param_1,lVar12,plVar7,&local_d8);
                  }
                  bVar3 = (**(code **)(*plVar13 + 0x50))(plVar13,param_1,param_2);
                  local_124 = local_124 & 0xff;
                  if (bVar3 != 0) {
                    local_124 = (uint)bVar3;
                  }
                  local_110 = CONCAT71(local_110._1_7_,bVar3 != 1);
                  uVar10 = local_127;
                  uVar9 = local_126;
                  uVar11 = local_112;
                }
              }
              *(undefined1 *)(param_1 + 0xf2) = uVar9;
              *(undefined1 *)(param_1 + 0xf3) = uVar10;
              *(undefined2 *)(param_1 + 0xf4) = uVar11;
              *(undefined2 *)(param_1 + 0xf6) = local_12e;
              *(undefined8 *)(param_1 + 0xf8) = local_120;
              *(undefined8 *)(param_1 + 0x100) = local_f8;
              uVar5 = local_12c + 1;
              iVar16 = iVar16 + -0x10;
            } while (uVar5 < (uint)*(ushort *)(local_108 + 0x17a) +
                             (uint)*(ushort *)(local_108 + 0x178));
          }
        }
        *(undefined8 *)(local_88[0] + 200) = local_70;
        *(undefined8 *)(local_88[0] + 0xc0) = local_68;
        *(undefined8 *)(local_88[0] + 0xd0) = local_78;
        iVar16 = *(int *)(lVar14 + 0x18);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return local_124;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438cae0e FUN_1438cae0e body=1714 status=ok
// SIG undefined FUN_1438cae0e(void)

ulonglong FUN_1438cae0e(longlong param_1,longlong *param_2,ushort param_3,undefined1 *param_4,
                       undefined8 param_5,char param_6)

{
  longlong lVar1;
  longlong *plVar2;
  short sVar3;
  longlong lVar4;
  uint uVar5;
  short *psVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  short *psVar10;
  undefined1 *puVar11;
  ushort uVar12;
  int iVar13;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStack_6a8 [32];
  ushort **local_688;
  undefined1 *local_680;
  undefined8 local_678;
  undefined1 *local_668;
  ulonglong local_660;
  undefined1 *local_658;
  ushort *local_650;
  undefined1 *local_648;
  ushort *local_640;
  undefined4 local_638;
  ushort *local_630;
  int local_628;
  undefined8 local_620;
  int local_618;
  longlong local_610;
  int local_608;
  ushort local_5fa;
  undefined1 local_5f8 [384];
  undefined8 local_478;
  undefined1 local_470 [1024];
  undefined8 local_70;
  short local_68 [8];
  short *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  int iVar14;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  lVar8 = *(longlong *)(param_1 + 0x20);
  uVar16 = 0;
  if (param_3 == 0xffff || *(int *)(lVar8 + 0x18) == 0) {
LAB_1438caff8:
    if ((local_48 ^ (ulonglong)auStack_6a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar16;
  }
  local_58 = (short *)0x0;
  local_4c = 8;
  uVar12 = param_3;
  while( true ) {
    local_50 = (int)uVar16 + 1;
    if (local_4c < local_50) {
      FUN_147fb5a58(local_68,uVar16);
    }
    psVar6 = local_58;
    if (local_58 == (short *)0x0) {
      psVar6 = local_68;
    }
    psVar6[(int)uVar16] = uVar12;
    lVar15 = *param_2;
    uVar12 = *(ushort *)(*(longlong *)(lVar15 + 0x40) + 0x2a + (ulonglong)uVar12 * 0x58);
    uVar16 = (ulonglong)local_50;
    if (uVar12 == 0xffff) break;
    if (local_50 == 8) goto LAB_1438cafe3;
  }
  psVar6 = local_58;
  if (local_58 == (short *)0x0) {
    psVar6 = local_68;
  }
  if (1 < (int)local_50) {
    uVar5 = local_50 >> 1;
    lVar15 = 0;
    psVar10 = psVar6;
    do {
      sVar3 = *psVar10;
      *psVar10 = psVar6[uVar16 + lVar15 + -1];
      psVar6[uVar16 + lVar15 + -1] = sVar3;
      lVar15 = lVar15 + -1;
      psVar10 = psVar10 + 1;
    } while (-lVar15 != (ulonglong)uVar5);
    lVar15 = *param_2;
  }
  psVar6 = local_58;
  if (local_58 == (short *)0x0) {
    psVar6 = local_68;
  }
  uVar5 = *(uint *)(lVar8 + 0x18);
  uVar18 = 0xffffffff;
  do {
    lVar19 = (longlong)(int)(uVar5 - 1) * -0x30 + -0x30;
    lVar17 = (ulonglong)uVar5 * 0x30;
    iVar13 = uVar5 + 1;
    do {
      iVar14 = iVar13;
      iVar13 = iVar14 + -1;
      if (iVar13 < 1) {
        if (uVar18 == 0xffffffff) goto LAB_1438cafe3;
        local_618 = uVar18 + 1;
        local_620 = *(undefined8 *)(lVar8 + 0x10);
        FUN_147fae456(local_5f8);
        if (local_5f8 == param_4) {
          uVar16 = local_70 & 0xffffffff;
        }
        else {
          memcpy(param_4,local_5f8,0x180);
          *(undefined4 *)(param_4 + 0x180) = (undefined4)local_478;
          *(undefined4 *)(param_4 + 0x184) = local_478._4_4_;
          local_478 = 0x800000000;
          local_668 = param_4 + 0x188;
          FUN_147fa6f11(local_668,*(undefined4 *)(param_4 + 0x588));
          memcpy(local_668,local_470,0x400);
          *(undefined4 *)(param_4 + 0x588) = (undefined4)local_70;
          *(undefined4 *)(param_4 + 0x58c) = local_70._4_4_;
          local_70 = 0x800000000;
          uVar16 = 0;
        }
        FUN_147fa6f11(local_470,uVar16);
        local_668 = (undefined1 *)((longlong)(int)uVar18 * 0x30 + *(longlong *)(lVar8 + 0x10));
        local_660 = (ulonglong)*(int *)(param_4 + 0x180);
        puVar11 = param_4 + local_660 * 0x30;
        local_658 = param_4 + local_660 * 0x30 + -0x30;
        uVar5 = 0;
        goto LAB_1438cb14b;
      }
      lVar4 = *(longlong *)(lVar8 + 0x10);
      lVar19 = lVar19 + 0x30;
      lVar1 = lVar17 + -0x30;
      plVar2 = (longlong *)(lVar4 + -0x30 + lVar17);
      lVar17 = lVar1;
    } while (*plVar2 != lVar15);
    uVar5 = iVar14 - 2;
    uVar18 = uVar5;
  } while (*(short *)(lVar4 + 8 + lVar1) != *psVar6);
  if (iVar13 == 0) {
LAB_1438cafe3:
    uVar16 = 0;
    goto LAB_1438cafe6;
  }
  local_610 = lVar4;
  local_608 = iVar13;
  FUN_147fae456(local_5f8);
  if (local_5f8 == param_4) {
    uVar16 = local_70 & 0xffffffff;
  }
  else {
    memcpy(param_4,local_5f8,0x180);
    *(undefined4 *)(param_4 + 0x180) = (undefined4)local_478;
    *(undefined4 *)(param_4 + 0x184) = local_478._4_4_;
    local_478 = 0x800000000;
    local_668 = param_4 + 0x188;
    FUN_147fa6f11(local_668,*(undefined4 *)(param_4 + 0x588));
    memcpy(local_668,local_470,0x400);
    *(undefined4 *)(param_4 + 0x588) = (undefined4)local_70;
    *(undefined4 *)(param_4 + 0x58c) = local_70._4_4_;
    local_70 = 0x800000000;
    uVar16 = 0;
  }
  FUN_147fa6f11(local_470,uVar16);
  local_668 = (undefined1 *)(*(longlong *)(lVar8 + 0x10) - lVar19);
  local_660 = (ulonglong)*(uint *)(param_4 + 0x180);
  lVar8 = (longlong)(int)*(uint *)(param_4 + 0x180) * 0x30;
  puVar11 = param_4 + lVar8;
  uVar9 = (uint)(byte)param_4[lVar8 + -0x16];
  uVar18 = local_50;
  if ((int)(uint)(byte)param_4[lVar8 + -0x16] <= (int)local_50) {
    uVar18 = uVar9;
  }
  uVar5 = 1;
  if (1 < (int)uVar18) {
    uVar5 = uVar18;
  }
  uVar5 = uVar5 - 1;
  if (0 < (int)uVar18) {
    psVar6 = local_58;
    if (local_58 == (short *)0x0) {
      psVar6 = local_68;
    }
    uVar16 = 0;
    do {
      if (*(short *)(puVar11 + uVar16 * 2 + -0x26) != psVar6[uVar16]) {
        uVar5 = (uint)uVar16;
        break;
      }
      uVar16 = uVar16 + 1;
    } while (uVar18 != uVar16);
  }
  local_658 = param_4 + lVar8 + -0x30;
  if ((int)uVar9 < (int)uVar5) {
    memset(param_4 + (ulonglong)uVar9 * 2 + lVar8 + -0x26,0xff,
           ((ulonglong)uVar5 - (ulonglong)uVar9) * 2);
  }
LAB_1438cb14b:
  puVar11[-0x16] = (char)uVar5;
  puVar11[-2] = (char)uVar5;
  local_478 = 0x800000000;
  local_70 = 0x800000000;
  if (param_6 == '\x01') {
    FUN_147fb3972(local_5f8,param_4);
    FUN_147fb39ce(local_470,param_4 + 0x188);
  }
  uVar7 = local_660 & 0xffffffff;
  puVar11 = (undefined1 *)0x0;
  if (1 < (int)local_660) {
    puVar11 = param_4 + uVar7 * 0x30 + -0x60;
  }
  local_628 = local_50 - uVar5;
  psVar6 = local_58;
  if (local_58 == (short *)0x0) {
    psVar6 = local_68;
  }
  local_630 = (ushort *)(psVar6 + (int)uVar5);
  local_688 = &local_630;
  local_678 = param_5;
  local_680 = param_4;
  uVar5 = FUN_1438d048e(param_1,puVar11,local_658,local_668);
  uVar16 = (ulonglong)uVar5;
  if ((param_6 == '\x01') && ((char)uVar5 == '\0')) {
    if (1 < (longlong)(int)local_50) {
      psVar6 = local_68;
      if (local_58 != (short *)0x0) {
        psVar6 = local_58;
      }
      if ((ulonglong)(ushort)psVar6[(longlong)(int)local_50 + -2] != 0xffff) {
        lVar8 = *(longlong *)(*param_2 + 0x40);
        lVar15 = (ulonglong)(ushort)psVar6[(longlong)(int)local_50 + -2] * 0x58;
        uVar12 = *(ushort *)(lVar8 + 0x2e + (ulonglong)param_3 * 0x58);
        if (uVar12 < *(ushort *)(lVar8 + 0x2e + lVar15)) {
          local_650 = (ushort *)(lVar15 + lVar8 + 0x2e);
          local_648 = param_4 + 0x188;
          puVar11 = (undefined1 *)0x0;
          if (1 < (int)local_660) {
            puVar11 = param_4 + uVar7 * 0x30 + -0x60;
          }
          while( true ) {
            FUN_147fb3972(param_4,local_5f8);
            FUN_147fb39ce(local_648,local_470);
            local_640 = &local_5fa;
            local_638 = 1;
            local_678 = 0;
            local_688 = &local_640;
            local_680 = param_4;
            local_5fa = uVar12;
            uVar5 = FUN_1438d048e(param_1,puVar11,local_658,local_668);
            uVar16 = (ulonglong)uVar5;
            if ((char)uVar5 != '\0') break;
            uVar12 = *(ushort *)(*(longlong *)(*param_2 + 0x40) + 0x2e + (ulonglong)uVar12 * 0x58);
            if (*local_650 <= uVar12) break;
          }
          goto LAB_1438cb344;
        }
      }
    }
    uVar16 = 0;
  }
LAB_1438cb344:
  FUN_147fa6f11(local_470,local_70 & 0xffffffff);
LAB_1438cafe6:
  if (local_58 != (short *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1438caff8;
}



// FUNCTION 1438cb4c2 FUN_1438cb4c2 body=3000 status=ok
// SIG undefined FUN_1438cb4c2(void)

ulonglong FUN_1438cb4c2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort *puVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  longlong lVar23;
  int *piVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined2 uVar27;
  byte bVar28;
  longlong *plVar29;
  uint uVar30;
  undefined1 auStack_288 [32];
  undefined4 *local_268;
  undefined2 local_256;
  uint local_254;
  longlong *local_250;
  longlong local_248;
  undefined4 local_23c;
  longlong local_238;
  longlong local_230;
  longlong *local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong local_210;
  ulonglong local_208;
  longlong *local_200;
  undefined4 *local_1f8;
  undefined4 *local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_170;
  undefined2 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined2 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong local_140 [2];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  ushort local_e2;
  char local_e0;
  undefined7 uStack_df;
  undefined2 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ushort local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar22 = (int)param_2[1];
  uVar13 = CONCAT71((int7)(local_60 >> 8),1);
  if (iVar22 != 0) {
    local_230 = *(longlong *)(param_1 + 0x20);
    local_228 = (longlong *)(local_230 + 0x10);
    if (*(char *)(param_1 + 0x108) == '\x01') {
      FUN_147fb5d42(&local_108,param_2);
      iVar22 = *(int *)(param_1 + 0x118);
      *(uint *)(param_1 + 0x118) = iVar22 + 1U;
      if (*(uint *)(param_1 + 0x11c) < iVar22 + 1U) {
        FUN_147fb5802((longlong *)(param_1 + 0x110),iVar22);
      }
      lVar23 = *(longlong *)(param_1 + 0x110);
      lVar18 = (longlong)iVar22 * 0x38;
      *(undefined8 *)(lVar23 + lVar18) = 0;
      *(undefined8 *)(lVar23 + lVar18) = local_108;
      local_108 = 0;
      *(undefined4 *)(lVar23 + 8 + lVar18) = (undefined4)local_100;
      *(undefined4 *)(lVar23 + 0xc + lVar18) = local_100._4_4_;
      local_100 = 0;
      *(undefined8 *)(lVar23 + 0x10 + lVar18) = 0;
      *(undefined8 *)(lVar23 + 0x10 + lVar18) = local_f8;
      local_f8 = 0;
      *(undefined4 *)(lVar23 + 0x18 + lVar18) = (undefined4)local_f0;
      *(undefined4 *)(lVar23 + 0x1c + lVar18) = local_f0._4_4_;
      local_f0 = 0;
      *(undefined1 *)(lVar23 + 0x24 + lVar18) = local_e4;
      *(undefined4 *)(lVar23 + 0x20 + lVar18) = local_e8;
      *(longlong *)(lVar23 + 0x28 + lVar18) = CONCAT71(uStack_df,local_e0);
      if ((CONCAT71(uStack_df,local_e0) != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      *(undefined2 *)(lVar23 + lVar18 + 0x30) = local_d8;
      FUN_147fa7290();
      iVar22 = (int)param_2[1];
    }
    lVar23 = local_230;
    local_88 = *param_2;
    local_98 = *(undefined8 *)(local_230 + 0x10);
    local_90 = *(undefined4 *)(local_230 + 0x18);
    local_80 = iVar22;
    FUN_147fabba6(param_1);
    local_a8 = param_2[2];
    local_a0 = (undefined4)param_2[3];
    local_b8 = *param_2;
    local_b0 = (undefined4)param_2[1];
    local_c8 = *(undefined8 *)(lVar23 + 0x10);
    local_c0 = *(undefined4 *)(lVar23 + 0x18);
    FUN_147fadbbc(param_1);
    *(short *)(lVar23 + 0x3c) = *(short *)(lVar23 + 0x3c) + 1;
    *(undefined4 *)(lVar23 + 0x38) = 0xffffffff;
    *(undefined4 *)(lVar23 + 0x30) = 0xffffffff;
    FUN_147fae08a(&local_108,param_2);
    local_118 = 0;
    uStack_110 = 0;
    FUN_147fae158(&local_118,local_228);
    *(undefined4 *)(lVar23 + 0x18) = 0;
    if (*(int *)(lVar23 + 0x1c) < 0) {
      FUN_147fb3c46(local_228,0);
    }
    if ((int)param_2[1] < 1) {
      uVar30 = 0;
    }
    else {
      local_1f0 = (undefined4 *)(param_1 + 0xf2);
      local_1f8 = (undefined4 *)(param_1 + 0xf8);
      local_238 = 0;
      uVar13 = 0;
      local_254 = 0;
      local_200 = param_2;
      do {
        iVar22 = *(int *)(local_230 + 0x18);
        if ((longlong)iVar22 == 0) {
          local_248 = 0;
        }
        else {
          local_248 = (longlong)(iVar22 + -1) * 0x30 + *local_228;
        }
        lVar23 = local_238 * 0x30;
        plVar29 = (longlong *)(*param_2 + lVar23);
        *(uint *)(local_230 + 0x18) = iVar22 + 1U;
        if (*(uint *)(local_230 + 0x1c) < iVar22 + 1U) {
          FUN_147fb5440(local_228,iVar22);
        }
        lVar18 = *local_228;
        lVar20 = (longlong)iVar22 * 0x30;
        lVar19 = *plVar29;
        *(longlong *)(lVar18 + lVar20) = lVar19;
        if ((lVar19 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_250 = (longlong *)(lVar18 + lVar20);
        lVar18 = plVar29[1];
        uVar8 = *(undefined4 *)((longlong)plVar29 + 0xc);
        lVar19 = plVar29[2];
        uVar9 = *(undefined4 *)((longlong)plVar29 + 0x14);
        uVar10 = *(undefined4 *)((longlong)plVar29 + 0x1c);
        lVar20 = plVar29[4];
        uVar11 = *(undefined4 *)((longlong)plVar29 + 0x24);
        *(int *)(local_250 + 3) = (int)plVar29[3];
        *(undefined4 *)((longlong)local_250 + 0x1c) = uVar10;
        *(int *)(local_250 + 4) = (int)lVar20;
        *(undefined4 *)((longlong)local_250 + 0x24) = uVar11;
        local_250[5] = plVar29[5];
        *(int *)(local_250 + 1) = (int)lVar18;
        *(undefined4 *)((longlong)local_250 + 0xc) = uVar8;
        *(int *)(local_250 + 2) = (int)lVar19;
        *(undefined4 *)((longlong)local_250 + 0x14) = uVar9;
        *(undefined1 *)((longlong)local_250 + 0x1a) = 0;
        local_78 = 0xffffffff;
        uStack_74 = 0xffffffff;
        uStack_70 = 0xffffffff;
        uStack_6c = 0xffffffff;
        local_68 = local_68 & 0xff00;
        if (local_238 < (int)uStack_110) {
          plVar21 = (longlong *)(local_118 + lVar23);
          lVar18 = *plVar29;
          if ((lVar18 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar18);
          }
          if ((*plVar21 == lVar18) && ((short)plVar21[1] == (short)plVar29[1])) {
            puVar1 = (undefined4 *)(local_118 + 10 + lVar23);
            local_78 = *puVar1;
            uStack_74 = puVar1[1];
            uStack_70 = puVar1[2];
            uStack_6c = puVar1[3];
            local_68 = *(ushort *)(local_118 + 0x1a + lVar23);
          }
        }
        plVar21 = local_250;
        FUN_147fab5e0(local_140,param_1,local_248,local_250);
        if (*(char *)((longlong)plVar29 + 0x1a) != '\0') {
          local_1d0 = plVar21 + 1;
          local_1c8 = *plVar29;
          local_256 = *(undefined2 *)(param_1 + 0xd8);
          uVar17 = 0;
          local_1e8 = plVar29;
          do {
            lVar23 = local_248;
            uVar15 = *(ushort *)((longlong)plVar29 + uVar17 * 2 + 10);
            uVar16 = (ulonglong)uVar15;
            puVar14 = (ushort *)((longlong)&local_78 + uVar17 * 2);
            if ((byte)local_68 <= uVar17) {
              puVar14 = &DAT_14acfe058;
            }
            uVar5 = *puVar14;
            lVar18 = *(longlong *)(local_1c8 + 0x40);
            *(ushort *)(param_1 + 0xd8) = uVar15;
            local_1c0 = uVar17;
            if ((*(byte *)(lVar18 + 0x54 + uVar16 * 0x58) & 1) != 0) {
              bVar28 = *(byte *)((longlong)plVar21 + 0x1a);
              if (7 < (ulonglong)bVar28) {
LAB_1438cbfa3:
                *(undefined2 *)(param_1 + 0xd8) = local_256;
                break;
              }
              *(byte *)((longlong)plVar21 + 0x1a) = bVar28 + 1;
              *(ushort *)((longlong)plVar21 + (ulonglong)bVar28 * 2 + 10) = uVar15;
            }
            lVar18 = lVar18 + uVar16 * 0x58;
            *(undefined1 *)((longlong)plVar21 + 0x2e) = *(undefined1 *)((longlong)plVar21 + 0x1a);
            if ((((*(byte *)(lVar18 + 0x4a) & 0xfe) == 2) && (*(char *)(lVar18 + 0x3a) != '\0')) &&
               (*(short *)(lVar18 + 0x40) != -1)) {
              local_158 = *(undefined4 *)(lVar18 + 0x3a);
              local_154 = *(undefined2 *)(lVar18 + 0x3e);
              local_268 = &local_158;
              FUN_147fac964(param_1,&local_150,local_248,local_250);
              plVar21 = local_250;
              local_168 = local_150;
              uStack_164 = uStack_14c;
              uStack_160 = uStack_148;
              uStack_15c = uStack_144;
              local_268 = (undefined4 *)CONCAT62(local_268._2_6_,*(undefined2 *)(lVar18 + 0x40));
              FUN_147fad2b0(param_1,lVar23,local_250,&local_168);
            }
            lVar23 = param_2[6];
            local_210 = lVar18;
            if ((lVar23 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar23);
            }
            if ((*plVar21 == lVar23) && ((short)*local_1d0 == (short)param_2[7])) {
              uVar17 = (ulonglong)
                       CONCAT11((char)((ushort)(short)*local_1d0 >> 8),
                                uVar15 == *(ushort *)((longlong)param_2 + 0x24));
            }
            else {
              uVar17 = 0;
            }
            bVar28 = (byte)(uVar13 & 0xffffffffffffff01) | (byte)uVar17;
            local_1e0 = CONCAT71((int7)((uVar13 & 0xffffffffffffff01) >> 8),bVar28);
            lVar23 = local_210;
            local_e2 = uVar15;
            if ((uVar5 == uVar15) && (bVar28 == 0)) {
              local_e0 = '\x02';
LAB_1438cba26:
              local_23c = 0;
            }
            else {
              local_e0 = (uVar5 == uVar15) + '\x01';
              if ((*(byte *)(local_210 + 0x54) & 1) == 0) goto LAB_1438cba26;
              local_23c = (undefined4)CONCAT71((int7)(uVar17 >> 8),1);
              if (((*(byte *)(local_210 + 0x4c) & 2) != 0) &&
                 (bVar28 = *(byte *)(local_210 + 0x44), bVar28 != 0)) {
                uVar15 = *(ushort *)(local_210 + 0x30);
                uVar30 = (uint)uVar15;
                iVar22 = ~(uint)uVar15 << 4;
                local_208 = uVar16;
                do {
                  lVar18 = *(longlong *)(*plVar21 + 0x60);
                  lVar19 = (longlong)
                           *(int *)(lVar18 + 8 + (longlong)(*(int *)(*plVar21 + 0x68) + iVar22));
                  bVar4 = *(byte *)(lVar18 + 0x23 + lVar19);
                  if ((bVar4 & 1) != 0) {
                    if (local_e0 == '\x02') {
                      if ((bVar4 & 2) != 0) goto LAB_1438cbd22;
                    }
                    else if (local_e0 == '\x01') {
LAB_1438cbd22:
                      plVar29 = (longlong *)(lVar18 + lVar19);
                      local_170 = *(undefined4 *)((longlong)plVar29 + 0x14);
                      local_16c = (undefined2)plVar29[3];
                      local_268 = &local_170;
                      FUN_147fac964(param_1,&local_150,local_248,plVar21);
                      uVar2 = *(undefined1 *)(param_1 + 0xf2);
                      uVar3 = *(undefined1 *)(param_1 + 0xf3);
                      uVar6 = *(undefined2 *)(param_1 + 0xf4);
                      uVar27 = *(undefined2 *)(param_1 + 0xf6);
                      local_218 = *(undefined8 *)(param_1 + 0xf8);
                      local_220 = *(undefined8 *)(param_1 + 0x100);
                      uVar8 = *(undefined4 *)((longlong)plVar29 + 0x14);
                      *(short *)(local_1f0 + 1) = (short)plVar29[3];
                      *local_1f0 = uVar8;
                      *local_1f8 = local_150;
                      local_1f8[1] = uStack_14c;
                      local_1f8[2] = uStack_148;
                      local_1f8[3] = uStack_144;
                      if ((short)plVar29[2] != -1) {
                        local_188 = local_150;
                        uStack_184 = uStack_14c;
                        uStack_180 = uStack_148;
                        uStack_17c = uStack_144;
                        local_268 = (undefined4 *)CONCAT62(local_268._2_6_,(short)plVar29[2]);
                        FUN_147fad2b0(param_1,local_248,local_250,&local_188);
                      }
                      (**(code **)(*plVar29 + 0x30))(plVar29,param_1,local_200);
                      if ((short)plVar29[2] != -1) {
                        local_198 = local_150;
                        uStack_194 = uStack_14c;
                        uStack_190 = uStack_148;
                        uStack_18c = uStack_144;
                        FUN_147fb95a6(*local_250 + 0xb8,(short)plVar29[2],&local_198);
                      }
                      *(undefined1 *)(param_1 + 0xf2) = uVar2;
                      *(undefined1 *)(param_1 + 0xf3) = uVar3;
                      *(undefined2 *)(param_1 + 0xf4) = uVar6;
                      *(undefined2 *)(param_1 + 0xf6) = uVar27;
                      *(undefined8 *)(param_1 + 0xf8) = local_218;
                      *(undefined8 *)(param_1 + 0x100) = local_220;
                      uVar15 = *(ushort *)(local_210 + 0x30);
                      bVar28 = *(byte *)(local_210 + 0x44);
                      plVar21 = local_250;
                      lVar23 = local_210;
                      plVar29 = local_1e8;
                    }
                  }
                  uVar30 = uVar30 + 1;
                  iVar22 = iVar22 + -0x10;
                  uVar16 = local_208;
                } while (uVar30 < (uint)bVar28 + (uint)uVar15);
              }
            }
            if (*(char *)(lVar23 + 0x47) != '\0') {
              uVar30 = (uint)*(ushort *)(lVar23 + 0x36);
              iVar22 = ~uVar30 << 4;
              local_208 = uVar16;
              do {
                lVar23 = *(longlong *)(*plVar29 + 0x60);
                lVar18 = (longlong)
                         *(int *)(lVar23 + 8 + (longlong)(*(int *)(*plVar29 + 0x68) + iVar22));
                local_1a0 = *(undefined4 *)(lVar23 + 0x14 + lVar18);
                local_19c = *(undefined2 *)(lVar23 + 0x18 + lVar18);
                local_268 = &local_1a0;
                FUN_147fac964(param_1,&local_150,local_248,plVar21);
                uVar2 = *(undefined1 *)(param_1 + 0xf2);
                uVar3 = *(undefined1 *)(param_1 + 0xf3);
                uVar6 = *(undefined2 *)(param_1 + 0xf4);
                uVar27 = *(undefined2 *)(param_1 + 0xf6);
                uVar26 = *(undefined8 *)(param_1 + 0xf8);
                uVar25 = *(undefined8 *)(param_1 + 0x100);
                uVar8 = *(undefined4 *)(lVar23 + 0x14 + lVar18);
                *(undefined2 *)(local_1f0 + 1) = *(undefined2 *)(lVar23 + 0x18 + lVar18);
                *local_1f0 = uVar8;
                *local_1f8 = local_150;
                local_1f8[1] = uStack_14c;
                local_1f8[2] = uStack_148;
                local_1f8[3] = uStack_144;
                sVar7 = *(short *)(lVar23 + 0x10 + lVar18);
                if (sVar7 != -1) {
                  local_1b8 = local_150;
                  uStack_1b4 = uStack_14c;
                  uStack_1b0 = uStack_148;
                  uStack_1ac = uStack_144;
                  local_268 = (undefined4 *)CONCAT62(local_268._2_6_,sVar7);
                  local_220 = CONCAT62(local_220._2_6_,uVar27);
                  local_218 = uVar25;
                  local_1d8 = uVar26;
                  FUN_147fad2b0(param_1,local_248,local_250,&local_1b8);
                  uVar25 = local_218;
                  uVar26 = local_1d8;
                  uVar27 = (undefined2)local_220;
                }
                lVar19 = local_210;
                plVar29 = (longlong *)(lVar23 + lVar18);
                if ((*(byte *)(plVar29 + 4) & 0x40) != 0) {
                  if (local_e0 == '\x01') {
                    bVar28 = 1;
                  }
                  else {
                    if (local_e0 != '\x02') goto LAB_1438cbbaf;
                    bVar28 = *(byte *)(plVar29 + 4) & 1;
                  }
                  if ((bVar28 & (byte)local_23c) == 1) {
                    local_220 = CONCAT62(local_220._2_6_,uVar27);
                    local_218 = uVar25;
                    uVar12 = (**(code **)(*plVar29 + 0x28))(plVar29,param_1,&local_108);
                    uVar25 = local_218;
                    uVar27 = (undefined2)local_220;
                    if ((char)uVar12 != '\0') {
                      if (*(short *)(local_230 + 0x3a) == -1) {
                        *(short *)(local_230 + 0x38) = (short)local_238;
                        *(short *)(local_230 + 0x3a) = (short)local_208;
                      }
                      local_254 = uVar12;
                      if ((char)uVar12 == '\x01') {
                        *(short *)(local_230 + 0x30) = (short)local_238;
                        *(short *)(local_230 + 0x32) = (short)uVar30;
                        *(undefined1 *)(param_1 + 0xf2) = uVar2;
                        *(undefined1 *)(param_1 + 0xf3) = uVar3;
                        *(undefined2 *)(param_1 + 0xf4) = uVar6;
                        *(undefined2 *)(param_1 + 0xf6) = (undefined2)local_220;
                        *(undefined8 *)(param_1 + 0xf8) = uVar26;
                        *(undefined8 *)(param_1 + 0x100) = local_218;
                        local_254 = (uint)CONCAT71((int7)((ulonglong)local_230 >> 8),1);
                        uVar13 = local_1e0;
                        param_2 = local_200;
                        goto LAB_1438cbfa3;
                      }
                    }
                  }
                }
LAB_1438cbbaf:
                *(undefined1 *)(param_1 + 0xf2) = uVar2;
                *(undefined1 *)(param_1 + 0xf3) = uVar3;
                *(undefined2 *)(param_1 + 0xf4) = uVar6;
                *(undefined2 *)(param_1 + 0xf6) = uVar27;
                *(undefined8 *)(param_1 + 0xf8) = uVar26;
                *(undefined8 *)(param_1 + 0x100) = uVar25;
                uVar30 = uVar30 + 1;
                iVar22 = iVar22 + -0x10;
                plVar21 = local_250;
                plVar29 = local_1e8;
              } while (uVar30 < (uint)*(byte *)(lVar19 + 0x47) + (uint)*(ushort *)(lVar19 + 0x36));
            }
            *(undefined2 *)(param_1 + 0xd8) = local_256;
            uVar17 = local_1c0 + 1;
            uVar13 = local_1e0;
            param_2 = local_200;
          } while (uVar17 < *(byte *)((longlong)plVar29 + 0x1a));
        }
        *(undefined8 *)(local_140[0] + 200) = local_128;
        *(undefined8 *)(local_140[0] + 0xc0) = local_120;
        *(undefined8 *)(local_140[0] + 0xd0) = local_130;
        local_238 = local_238 + 1;
        uVar30 = local_254;
      } while ((local_238 < (int)param_2[1]) && ((char)local_254 != '\x01'));
    }
    uVar13 = (ulonglong)uVar30;
    if (local_118 != 0) {
      piVar24 = (int *)((local_118 + -8) - (ulonglong)*(uint *)(local_118 + -8));
      LOCK();
      *piVar24 = *piVar24 + -1;
      UNLOCK();
      if (*piVar24 == 0) {
        if (*(longlong *)(piVar24 + 0x10) - (longlong)piVar24 == 0x10000) {
          lVar23 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar23 = FUN_145bdc178();
          }
          FUN_140028df4(lVar23,piVar24);
        }
        else {
          FUN_144705e74(piVar24);
        }
      }
    }
    FUN_147fa6ed6(&local_108);
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1438cc07c FUN_1438cc07c body=1245 status=ok
// SIG undefined FUN_1438cc07c(void)

void FUN_1438cc07c(longlong param_1)

{
  ulonglong uVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined2 uVar16;
  undefined1 uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined2 local_11a;
  longlong local_118;
  longlong local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (0 < (longlong)*(int *)(lVar7 + 0x18)) {
    local_100 = (undefined4 *)(param_1 + 0xf2);
    local_108 = (undefined4 *)(param_1 + 0xf8);
    uVar11 = (longlong)*(int *)(lVar7 + 0x18);
    do {
      uVar1 = uVar11 - 1;
      local_118 = *(longlong *)(lVar7 + 0x10) + -0x60 + uVar11 * 0x30;
      if (uVar11 == 1) {
        local_118 = 0;
      }
      lVar19 = *(longlong *)(lVar7 + 0x10) + uVar11 * 0x30;
      plVar18 = (longlong *)(lVar19 + -0x30);
      local_f8 = *plVar18;
      local_f0 = uVar11;
      FUN_147fab5e0(local_70,param_1,local_118,plVar18);
      local_e8 = uVar1;
      if ((uVar1 <= *(ushort *)(lVar7 + 0x30)) &&
         (uVar11 = (ulonglong)*(byte *)(lVar19 + -0x16), uVar11 != 0)) {
        local_110 = lVar19 + -0x26;
        local_11c = *(undefined2 *)(param_1 + 0xd8);
        local_d0 = plVar18;
        do {
          uVar4 = *(ushort *)(local_110 + -2 + uVar11 * 2);
          lVar14 = *(longlong *)(local_f8 + 0x40);
          lVar12 = (ulonglong)uVar4 * 0x58;
          lVar19 = lVar14 + lVar12;
          *(ushort *)(param_1 + 0xd8) = uVar4;
          bVar2 = *(byte *)(lVar14 + 0x47 + lVar12);
          local_c0 = uVar11;
          if (bVar2 != 0) {
            uVar10 = (uint)*(ushort *)(lVar19 + 0x36);
            uVar15 = (uint)bVar2 + (uint)*(ushort *)(lVar19 + 0x36);
            iVar13 = uVar15 * -0x10;
            local_c8 = lVar19;
            do {
              uVar15 = uVar15 - 1;
              if (uVar15 <= *(ushort *)(lVar7 + 0x32)) {
                lVar19 = *(longlong *)(local_f8 + 0x60);
                lVar14 = (longlong)
                         *(int *)(lVar19 + 8 + (longlong)(*(int *)(local_f8 + 0x68) + iVar13));
                local_88 = *(undefined4 *)(lVar19 + 0x14 + lVar14);
                local_84 = *(undefined2 *)(lVar19 + 0x18 + lVar14);
                local_128 = &local_88;
                FUN_147fac964(param_1,&local_80,local_118,plVar18);
                uVar17 = *(undefined1 *)(param_1 + 0xf2);
                uVar3 = *(undefined1 *)(param_1 + 0xf3);
                uVar16 = *(undefined2 *)(param_1 + 0xf4);
                uVar5 = *(undefined2 *)(param_1 + 0xf6);
                uVar8 = *(undefined8 *)(param_1 + 0xf8);
                uVar9 = *(undefined8 *)(param_1 + 0x100);
                uVar6 = *(undefined4 *)(lVar19 + 0x14 + lVar14);
                *(undefined2 *)(local_100 + 1) = *(undefined2 *)(lVar19 + 0x18 + lVar14);
                *local_100 = uVar6;
                *local_108 = local_80;
                local_108[1] = uStack_7c;
                local_108[2] = uStack_78;
                local_108[3] = uStack_74;
                if ((*(byte *)(lVar19 + 0x20 + lVar14) & 0x40) != 0) {
                  local_120 = CONCAT11(local_120._1_1_,uVar17);
                  local_11e = uVar16;
                  (**(code **)(*(longlong *)(lVar19 + lVar14) + 0x48))
                            ((longlong *)(lVar19 + lVar14),param_1,
                             CONCAT11((char)((ushort)uVar16 >> 8),*(undefined1 *)(lVar7 + 0x34)),
                             local_110);
                  uVar17 = (undefined1)local_120;
                  uVar16 = local_11e;
                }
                *(undefined1 *)(param_1 + 0xf2) = uVar17;
                *(undefined1 *)(param_1 + 0xf3) = uVar3;
                *(undefined2 *)(param_1 + 0xf4) = uVar16;
                *(undefined2 *)(param_1 + 0xf6) = uVar5;
                *(undefined8 *)(param_1 + 0xf8) = uVar8;
                *(undefined8 *)(param_1 + 0x100) = uVar9;
                uVar10 = (uint)*(ushort *)(local_c8 + 0x36);
                plVar18 = local_d0;
                lVar19 = local_c8;
              }
              iVar13 = iVar13 + 0x10;
            } while (uVar10 < uVar15);
          }
          if (((*(byte *)(lVar19 + 0x4c) & 2) != 0) && (*(byte *)(lVar19 + 0x44) != 0)) {
            uVar10 = (uint)*(ushort *)(lVar19 + 0x30);
            uVar15 = (uint)*(byte *)(lVar19 + 0x44) + (uint)*(ushort *)(lVar19 + 0x30);
            iVar13 = uVar15 * -0x10;
            do {
              lVar14 = *(longlong *)(*plVar18 + 0x60);
              lVar12 = (longlong)
                       *(int *)(lVar14 + 8 + (longlong)(*(int *)(*plVar18 + 0x68) + iVar13));
              if ((*(byte *)(lVar14 + 0x23 + lVar12) & 1) != 0) {
                plVar20 = (longlong *)(lVar14 + lVar12);
                local_90 = *(undefined4 *)((longlong)plVar20 + 0x14);
                local_8c = (undefined2)plVar20[3];
                local_128 = &local_90;
                FUN_147fac964(param_1,&local_80,local_118,plVar18);
                uVar17 = *(undefined1 *)(param_1 + 0xf2);
                local_11e = CONCAT11(local_11e._1_1_,*(undefined1 *)(param_1 + 0xf3));
                local_120 = *(undefined2 *)(param_1 + 0xf4);
                local_11a = *(undefined2 *)(param_1 + 0xf6);
                local_d8 = *(undefined8 *)(param_1 + 0xf8);
                local_e0 = *(undefined8 *)(param_1 + 0x100);
                uVar6 = *(undefined4 *)((longlong)plVar20 + 0x14);
                *(short *)(local_100 + 1) = (short)plVar20[3];
                *local_100 = uVar6;
                *local_108 = local_80;
                local_108[1] = uStack_7c;
                local_108[2] = uStack_78;
                local_108[3] = uStack_74;
                if ((short)plVar20[2] != -1) {
                  local_a8 = local_80;
                  uStack_a4 = uStack_7c;
                  uStack_a0 = uStack_78;
                  uStack_9c = uStack_74;
                  local_128 = (undefined4 *)CONCAT62(local_128._2_6_,(short)plVar20[2]);
                  FUN_147fad2b0(param_1,local_118,plVar18,&local_a8);
                }
                (**(code **)(*plVar20 + 0x40))
                          (plVar20,param_1,*(undefined1 *)(lVar7 + 0x34),local_110);
                if ((short)plVar20[2] != -1) {
                  local_b8 = local_80;
                  uStack_b4 = uStack_7c;
                  uStack_b0 = uStack_78;
                  uStack_ac = uStack_74;
                  FUN_147fb95a6(*plVar18 + 0xb8,(short)plVar20[2],&local_b8);
                }
                *(undefined1 *)(param_1 + 0xf2) = uVar17;
                *(undefined1 *)(param_1 + 0xf3) = (undefined1)local_11e;
                *(undefined2 *)(param_1 + 0xf4) = local_120;
                *(undefined2 *)(param_1 + 0xf6) = local_11a;
                *(undefined8 *)(param_1 + 0xf8) = local_d8;
                *(undefined8 *)(param_1 + 0x100) = local_e0;
                uVar10 = (uint)*(ushort *)(lVar19 + 0x30);
              }
              uVar15 = uVar15 - 1;
              iVar13 = iVar13 + 0x10;
            } while (uVar10 < uVar15);
          }
          uVar11 = local_c0 - 1;
          *(undefined2 *)(param_1 + 0xd8) = local_11c;
        } while (1 < (longlong)local_c0);
      }
      *(undefined8 *)(local_70[0] + 200) = local_58;
      *(undefined8 *)(local_70[0] + 0xc0) = local_50;
      *(undefined8 *)(local_70[0] + 0xd0) = local_60;
      uVar11 = local_e8;
    } while (1 < (longlong)local_f0);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438cc55a FUN_1438cc55a body=1285 status=ok
// SIG undefined FUN_1438cc55a(void)

void FUN_1438cc55a(longlong param_1,char param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined2 uVar4;
  longlong lVar5;
  int iVar6;
  undefined2 uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined1 local_10f;
  undefined1 local_10e;
  char local_10d;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8 [4];
  char local_b8;
  undefined1 uStack_b7;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar13 = *(longlong *)(param_1 + 0x20);
  uVar9 = *(uint *)(lVar13 + 0x18);
  local_10d = param_2;
  local_10c = param_3;
  if (0 < (int)uVar9) {
    local_f0 = (undefined4 *)(param_1 + 0xf2);
    local_f8 = (undefined4 *)(param_1 + 0xf8);
    lVar15 = 0;
    local_e0 = lVar13;
    do {
      lVar14 = *(longlong *)(lVar13 + 0x10) + -0x30 + lVar15 * 0x30;
      lVar5 = lVar14;
      if (lVar15 == 0) {
        lVar5 = 0;
      }
      if ((*(byte *)(lVar14 + 0x5f) & 1) != 0) {
        plVar8 = (longlong *)(*(longlong *)(lVar13 + 0x10) + lVar15 * 0x30);
        FUN_147fab5e0(local_d8,param_1,lVar5,plVar8);
        local_e8 = *plVar8;
        if (*(short *)(local_e8 + 0x176) != 0) {
          uVar9 = (uint)*(ushort *)(local_e8 + 0x174);
          iVar6 = ~uVar9 << 4;
          do {
            lVar13 = *(longlong *)(local_e8 + 0x60);
            lVar14 = (longlong)*(int *)(lVar13 + 8 + (longlong)(*(int *)(local_e8 + 0x68) + iVar6));
            local_60 = *(undefined4 *)(lVar13 + 0x14 + lVar14);
            local_5c = *(undefined2 *)(lVar13 + 0x18 + lVar14);
            local_118 = &local_60;
            FUN_147fac964(param_1,&local_58,lVar5,plVar8);
            uVar11 = *(undefined1 *)(param_1 + 0xf2);
            uVar12 = *(undefined1 *)(param_1 + 0xf3);
            uVar7 = *(undefined2 *)(param_1 + 0xf4);
            uVar4 = *(undefined2 *)(param_1 + 0xf6);
            local_100 = *(undefined8 *)(param_1 + 0xf8);
            local_108 = *(undefined8 *)(param_1 + 0x100);
            uVar2 = *(undefined4 *)(lVar13 + 0x14 + lVar14);
            *(undefined2 *)(local_f0 + 1) = *(undefined2 *)(lVar13 + 0x18 + lVar14);
            *local_f0 = uVar2;
            *local_f8 = local_58;
            local_f8[1] = uStack_54;
            local_f8[2] = uStack_50;
            local_f8[3] = uStack_4c;
            sVar1 = *(short *)(lVar13 + 0x10 + lVar14);
            if (sVar1 != -1) {
              local_78 = local_58;
              uStack_74 = uStack_54;
              uStack_70 = uStack_50;
              uStack_6c = uStack_4c;
              local_118 = (undefined4 *)CONCAT62(local_118._2_6_,sVar1);
              local_10f = uVar12;
              local_10e = uVar11;
              FUN_147fad2b0(param_1,lVar5,plVar8,&local_78);
              uVar11 = local_10e;
              uVar12 = local_10f;
            }
            *(undefined1 *)(param_1 + 0xf2) = uVar11;
            *(undefined1 *)(param_1 + 0xf3) = uVar12;
            *(undefined2 *)(param_1 + 0xf4) = uVar7;
            *(undefined2 *)(param_1 + 0xf6) = uVar4;
            *(undefined8 *)(param_1 + 0xf8) = local_100;
            *(undefined8 *)(param_1 + 0x100) = local_108;
            uVar9 = uVar9 + 1;
            iVar6 = iVar6 + -0x10;
          } while (uVar9 < (uint)*(ushort *)(local_e8 + 0x176) + (uint)*(ushort *)(local_e8 + 0x174)
                  );
        }
        if (*(short *)(local_e8 + 0x17a) != 0) {
          uVar9 = (uint)*(ushort *)(local_e8 + 0x178);
          iVar6 = ~(uint)*(ushort *)(local_e8 + 0x178) << 4;
          do {
            lVar13 = *(longlong *)(local_e8 + 0x60);
            lVar14 = (longlong)*(int *)(lVar13 + 8 + (longlong)(*(int *)(local_e8 + 0x68) + iVar6));
            local_80 = *(undefined4 *)(lVar13 + 0x14 + lVar14);
            local_7c = *(undefined2 *)(lVar13 + 0x18 + lVar14);
            local_118 = &local_80;
            FUN_147fac964(param_1,&local_58,lVar5,plVar8);
            uVar11 = *(undefined1 *)(param_1 + 0xf2);
            uVar12 = *(undefined1 *)(param_1 + 0xf3);
            uVar7 = *(undefined2 *)(param_1 + 0xf4);
            uVar4 = *(undefined2 *)(param_1 + 0xf6);
            local_100 = *(undefined8 *)(param_1 + 0xf8);
            local_108 = *(undefined8 *)(param_1 + 0x100);
            uVar2 = *(undefined4 *)(lVar13 + 0x14 + lVar14);
            *(undefined2 *)(local_f0 + 1) = *(undefined2 *)(lVar13 + 0x18 + lVar14);
            *local_f0 = uVar2;
            *local_f8 = local_58;
            local_f8[1] = uStack_54;
            local_f8[2] = uStack_50;
            local_f8[3] = uStack_4c;
            sVar1 = *(short *)(lVar13 + 0x10 + lVar14);
            if ((sVar1 != -1) && ((*(byte *)(lVar13 + lVar14 + 0x20) & 0x10) != 0)) {
              local_98 = local_58;
              uStack_94 = uStack_54;
              uStack_90 = uStack_50;
              uStack_8c = uStack_4c;
              local_118 = (undefined4 *)CONCAT62(local_118._2_6_,sVar1);
              local_10f = uVar12;
              local_10e = uVar11;
              FUN_147fad2b0(param_1,lVar5,plVar8,&local_98);
              uVar11 = local_10e;
              uVar12 = local_10f;
            }
            *(undefined1 *)(param_1 + 0xf2) = uVar11;
            *(undefined1 *)(param_1 + 0xf3) = uVar12;
            *(undefined2 *)(param_1 + 0xf4) = uVar7;
            *(undefined2 *)(param_1 + 0xf6) = uVar4;
            *(undefined8 *)(param_1 + 0xf8) = local_100;
            *(undefined8 *)(param_1 + 0x100) = local_108;
            uVar9 = uVar9 + 1;
            iVar6 = iVar6 + -0x10;
          } while (uVar9 < (uint)*(ushort *)(local_e8 + 0x17a) + (uint)*(ushort *)(local_e8 + 0x178)
                  );
        }
        *(longlong *)(local_d8[0] + 200) = local_d8[3];
        *(ulonglong *)(local_d8[0] + 0xc0) =
             CONCAT26(uStack_b2,CONCAT24(uStack_b4,CONCAT22(uStack_b6,CONCAT11(uStack_b7,local_b8)))
                     );
        *(longlong *)(local_d8[0] + 0xd0) = local_d8[2];
        uVar9 = *(uint *)(local_e0 + 0x18);
        lVar13 = local_e0;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uVar9);
  }
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  uStack_b6 = 0xffff;
  uStack_b2 = 0xffff;
  uStack_b0 = 1;
  local_a8 = 0;
  local_a0 = 0xffff;
  uStack_b4 = DAT_14cb28a82;
  if (((local_10d != '\x01') && (uStack_b4 = DAT_14cb28a18, local_10d != '\x03')) &&
     (uStack_b4 = 0xffff, local_10d == '\x02')) {
    uStack_b4 = DAT_14cb28a84;
  }
  uVar7 = (undefined2)local_10c;
  local_b8 = local_10d;
  if (0 < (int)uVar9) {
    uVar10 = (ulonglong)uVar9 + 1;
    lVar15 = (ulonglong)uVar9 * 0x30;
    bVar3 = true;
    do {
      lVar15 = lVar15 + -0x30;
      lVar14 = *(longlong *)(lVar13 + 0x10);
      if ((*(byte *)(lVar14 + 0x2f + lVar15) & 1) != 0) {
        lVar5 = lVar14 + -0x30 + lVar15;
        if (lVar15 == 0) {
          lVar5 = 0;
        }
        uVar4 = 0xffff;
        if (bVar3) {
          uVar4 = uVar7;
        }
        local_118 = (undefined4 *)CONCAT62(local_118._2_6_,uVar4);
        FUN_1438cf788(param_1,lVar5,lVar14 + lVar15,local_d8);
        bVar3 = false;
      }
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
  }
  FUN_147fa6ed6(local_d8);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438cca60 FUN_1438cca60 body=3687 status=ok
// SIG undefined FUN_1438cca60(void)

void FUN_1438cca60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ushort *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  int *piVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong *plVar28;
  bool bVar29;
  undefined1 auStack_238 [32];
  undefined4 *local_218;
  longlong local_208;
  undefined2 local_1fa;
  longlong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  undefined4 *local_1d8;
  ulonglong local_1d0;
  undefined4 *local_1c8;
  longlong *local_1c0;
  undefined4 *local_1b8;
  undefined4 *local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_160;
  undefined2 local_15c;
  undefined4 local_158;
  undefined2 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118 [2];
  undefined8 local_108;
  undefined8 local_100;
  undefined6 local_f8;
  undefined2 uStack_f2;
  char local_f0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined2 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar13 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(lVar13 + 0x18) != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_208 = param_1;
    local_1c0 = param_2;
    if (0 < *(int *)(lVar13 + 0x18)) {
      local_1b0 = (undefined4 *)(param_1 + 0xf2);
      local_1d8 = (undefined4 *)(param_1 + 0xf8);
      puVar17 = (undefined4 *)0x0;
      local_1e0 = (longlong *)0x0;
      do {
        lVar25 = (longlong)puVar17 * 0x30;
        plVar1 = (longlong *)(*(longlong *)(lVar13 + 0x10) + lVar25);
        local_1e8 = *(longlong *)(lVar13 + 0x10) + -0x30 + lVar25;
        local_1f8 = *(longlong *)(local_1e8 + 0x30);
        if (puVar17 == (undefined4 *)0x0) {
          local_1e8 = 0;
        }
        FUN_147fab5e0(local_118,param_1,local_1e8,plVar1);
        local_1b8 = puVar17;
        if ((longlong)puVar17 < (longlong)(int)local_1c0[1]) {
          lVar26 = *local_1c0;
          lVar8 = *plVar1;
          if ((DAT_14c950c29 == 1) && (lVar8 != 0)) {
            FUN_1456cec3c(lVar8);
          }
          if ((*(longlong *)(lVar26 + lVar25) == lVar8) &&
             ((short)((longlong *)(lVar26 + lVar25))[1] == (short)plVar1[1])) {
            local_1a8 = lVar25 + *local_1c0;
          }
          else {
            local_1a8 = 0;
          }
        }
        else {
          local_1a8 = 0;
        }
        uVar27 = uStack_50;
        bVar29 = local_1a8 == 0;
        bVar16 = *(byte *)((longlong)plVar1 + 0x2f);
        lVar25 = (longlong)(int)uStack_50;
        uVar11 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar11);
        if (uStack_50._4_4_ < uVar11) {
          FUN_1438d33e2(&local_58,uVar27 & 0xffffffff);
        }
        *(undefined1 *)(local_58 + lVar25 * 2) = 1;
        bVar16 = bVar29 & bVar16;
        *(byte *)(local_58 + 1 + lVar25 * 2) = bVar16;
        param_1 = local_208;
        if (bVar16 != 0) {
          if (*(short *)(local_1f8 + 0x176) != 0) {
            uVar11 = (uint)*(ushort *)(local_1f8 + 0x174);
            iVar18 = ~(uint)*(ushort *)(local_1f8 + 0x174) << 4;
            do {
              lVar25 = *(longlong *)(local_1f8 + 0x60);
              lVar26 = (longlong)
                       *(int *)(lVar25 + 8 + (longlong)(*(int *)(local_1f8 + 0x68) + iVar18));
              local_60 = *(undefined4 *)(lVar25 + 0x14 + lVar26);
              local_5c = *(undefined2 *)(lVar25 + 0x18 + lVar26);
              local_218 = &local_60;
              FUN_147fac964(local_208,&local_140,local_1e8,plVar1);
              param_1 = local_208;
              uVar22 = *(undefined1 *)(local_208 + 0xf2);
              uVar23 = *(undefined1 *)(local_208 + 0xf3);
              uVar2 = *(undefined2 *)(local_208 + 0xf4);
              uVar3 = *(undefined2 *)(local_208 + 0xf6);
              uVar9 = *(undefined8 *)(local_208 + 0xf8);
              puVar17 = *(undefined4 **)(local_208 + 0x100);
              uVar7 = *(undefined4 *)(lVar25 + 0x14 + lVar26);
              *(undefined2 *)(local_1b0 + 1) = *(undefined2 *)(lVar25 + 0x18 + lVar26);
              *local_1b0 = uVar7;
              *local_1d8 = local_140;
              local_1d8[1] = uStack_13c;
              local_1d8[2] = uStack_138;
              local_1d8[3] = uStack_134;
              sVar4 = *(short *)(lVar25 + 0x10 + lVar26);
              if (sVar4 != -1) {
                local_78 = local_140;
                uStack_74 = uStack_13c;
                uStack_70 = uStack_138;
                uStack_6c = uStack_134;
                local_218 = (undefined4 *)CONCAT62(local_218._2_6_,sVar4);
                local_1f0 = CONCAT71(local_1f0._1_7_,uVar22);
                local_1d0 = CONCAT71(local_1d0._1_7_,uVar23);
                local_1c8 = puVar17;
                FUN_147fad2b0(local_208,local_1e8,plVar1,&local_78);
                puVar17 = local_1c8;
                uVar22 = (undefined1)local_1f0;
                uVar23 = (undefined1)local_1d0;
              }
              *(undefined1 *)(param_1 + 0xf2) = uVar22;
              *(undefined1 *)(param_1 + 0xf3) = uVar23;
              *(undefined2 *)(param_1 + 0xf4) = uVar2;
              *(undefined2 *)(param_1 + 0xf6) = uVar3;
              *(undefined8 *)(param_1 + 0xf8) = uVar9;
              *(undefined4 **)(param_1 + 0x100) = puVar17;
              uVar11 = uVar11 + 1;
              iVar18 = iVar18 + -0x10;
            } while (uVar11 < (uint)*(ushort *)(local_1f8 + 0x176) +
                              (uint)*(ushort *)(local_1f8 + 0x174));
          }
          if (*(short *)(local_1f8 + 0x17a) != 0) {
            uVar11 = (uint)*(ushort *)(local_1f8 + 0x178);
            iVar18 = ~(uint)*(ushort *)(local_1f8 + 0x178) << 4;
            do {
              lVar25 = *(longlong *)(local_1f8 + 0x60);
              lVar26 = (longlong)
                       *(int *)(lVar25 + 8 + (longlong)(*(int *)(local_1f8 + 0x68) + iVar18));
              local_80 = *(undefined4 *)(lVar25 + 0x14 + lVar26);
              local_7c = *(undefined2 *)(lVar25 + 0x18 + lVar26);
              local_218 = &local_80;
              FUN_147fac964(param_1,&local_140,local_1e8,plVar1);
              uVar22 = *(undefined1 *)(param_1 + 0xf2);
              uVar23 = *(undefined1 *)(param_1 + 0xf3);
              uVar2 = *(undefined2 *)(param_1 + 0xf4);
              uVar3 = *(undefined2 *)(param_1 + 0xf6);
              uVar9 = *(undefined8 *)(param_1 + 0xf8);
              local_1f0 = *(ulonglong *)(param_1 + 0x100);
              uVar7 = *(undefined4 *)(lVar25 + 0x14 + lVar26);
              *(undefined2 *)(local_1b0 + 1) = *(undefined2 *)(lVar25 + 0x18 + lVar26);
              *local_1b0 = uVar7;
              *local_1d8 = local_140;
              local_1d8[1] = uStack_13c;
              local_1d8[2] = uStack_138;
              local_1d8[3] = uStack_134;
              sVar4 = *(short *)(lVar25 + 0x10 + lVar26);
              if ((sVar4 != -1) && ((*(byte *)(lVar25 + lVar26 + 0x20) & 0x10) != 0)) {
                local_98 = local_140;
                uStack_94 = uStack_13c;
                uStack_90 = uStack_138;
                uStack_8c = uStack_134;
                local_218 = (undefined4 *)CONCAT62(local_218._2_6_,sVar4);
                local_1d0 = CONCAT71(local_1d0._1_7_,uVar22);
                local_1c8 = (undefined4 *)CONCAT71(local_1c8._1_7_,uVar23);
                FUN_147fad2b0(param_1,local_1e8,plVar1,&local_98);
                uVar22 = (undefined1)local_1d0;
                uVar23 = local_1c8._0_1_;
              }
              *(undefined1 *)(param_1 + 0xf2) = uVar22;
              *(undefined1 *)(param_1 + 0xf3) = uVar23;
              *(undefined2 *)(param_1 + 0xf4) = uVar2;
              *(undefined2 *)(param_1 + 0xf6) = uVar3;
              *(undefined8 *)(param_1 + 0xf8) = uVar9;
              *(ulonglong *)(param_1 + 0x100) = local_1f0;
              uVar11 = uVar11 + 1;
              iVar18 = iVar18 + -0x10;
            } while (uVar11 < (uint)*(ushort *)(local_1f8 + 0x17a) +
                              (uint)*(ushort *)(local_1f8 + 0x178));
          }
        }
        if (*(char *)((longlong)plVar1 + 0x1a) != '\0') {
          local_1d0 = local_1a8 + 10;
          uVar27 = 0;
          lVar25 = local_1f8;
          do {
            lVar26 = local_1e8;
            puVar12 = &DAT_14acfe058;
            if ((local_1a8 != 0) &&
               (puVar12 = (ushort *)(local_1d0 + uVar27 * 2), *(byte *)(local_1a8 + 0x1a) <= uVar27)
               ) {
              puVar12 = &DAT_14acfe058;
            }
            uVar5 = *(ushort *)((longlong)plVar1 + uVar27 * 2 + 10);
            uVar6 = *puVar12;
            lVar10 = *(longlong *)(lVar25 + 0x40);
            lVar8 = lVar10 + (ulonglong)uVar5 * 0x58;
            local_1f0 = CONCAT62(local_1f0._2_6_,*(undefined2 *)(param_1 + 0xd8));
            *(ushort *)(param_1 + 0xd8) = uVar5;
            if ((((*(byte *)(lVar10 + 0x4a + (ulonglong)uVar5 * 0x58) & 0xfe) == 2) &&
                (*(char *)(lVar8 + 0x3a) != '\0')) && (*(short *)(lVar8 + 0x40) != -1)) {
              local_a0 = *(undefined4 *)(lVar8 + 0x3a);
              local_9c = *(undefined2 *)(lVar8 + 0x3e);
              local_218 = &local_a0;
              FUN_147fac964(param_1,&local_140,local_1e8,plVar1);
              local_b8 = local_140;
              uStack_b4 = uStack_13c;
              uStack_b0 = uStack_138;
              uStack_ac = uStack_134;
              local_218 = (undefined4 *)CONCAT62(local_218._2_6_,*(undefined2 *)(lVar8 + 0x40));
              FUN_147fad2b0(param_1,lVar26,plVar1,&local_b8);
              lVar25 = local_1f8;
            }
            lVar26 = local_1c0[6];
            if ((lVar26 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar26);
              lVar25 = local_1f8;
            }
            uVar14 = uStack_50;
            if ((*plVar1 == lVar26) && ((short)plVar1[1] == (short)local_1c0[7])) {
              bVar29 = uVar5 == *(ushort *)((longlong)local_1c0 + 0x24);
            }
            else {
              bVar29 = false;
            }
            lVar26 = (longlong)(int)uStack_50;
            uVar11 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar11);
            if (uStack_50._4_4_ < uVar11) {
              FUN_1438d33e2(&local_58,uVar14 & 0xffffffff);
              lVar25 = local_1f8;
            }
            bVar16 = (byte)local_1e0;
            local_1e0 = (longlong *)CONCAT71((int7)((ulonglong)local_1e0 >> 8),bVar16 | bVar29);
            *(char *)(local_58 + lVar26 * 2) = '\x02' - (uVar6 != uVar5);
            *(byte *)(local_58 + 1 + lVar26 * 2) = uVar6 != uVar5 | bVar16 & 1 | bVar29;
            if (*(char *)(lVar8 + 0x47) != '\0') {
              uVar11 = (uint)*(ushort *)(lVar8 + 0x36);
              iVar18 = ~(uint)*(ushort *)(lVar8 + 0x36) << 4;
              do {
                lVar26 = *(longlong *)(lVar25 + 0x60);
                lVar25 = (longlong)
                         *(int *)(lVar26 + 8 + (longlong)(*(int *)(lVar25 + 0x68) + iVar18));
                local_c0 = *(undefined4 *)(lVar26 + 0x14 + lVar25);
                local_bc = *(undefined2 *)(lVar26 + 0x18 + lVar25);
                local_218 = &local_c0;
                FUN_147fac964(local_208,&local_140,local_1e8,plVar1);
                sVar4 = *(short *)(lVar26 + 0x10 + lVar25);
                if ((sVar4 != -1) && ((*(byte *)(lVar26 + lVar25 + 0x20) & 0x10) != 0)) {
                  local_d8 = local_140;
                  uStack_d4 = uStack_13c;
                  uStack_d0 = uStack_138;
                  uStack_cc = uStack_134;
                  local_218 = (undefined4 *)CONCAT62(local_218._2_6_,sVar4);
                  FUN_147fad2b0(local_208,local_1e8,plVar1,&local_d8);
                }
                uVar11 = uVar11 + 1;
                iVar18 = iVar18 + -0x10;
                lVar25 = local_1f8;
              } while (uVar11 < (uint)*(byte *)(lVar8 + 0x47) + (uint)*(ushort *)(lVar8 + 0x36));
            }
            *(undefined2 *)(local_208 + 0xd8) = (undefined2)local_1f0;
            uVar27 = uVar27 + 1;
            param_1 = local_208;
          } while (uVar27 < *(byte *)((longlong)plVar1 + 0x1a));
        }
        *(undefined8 *)(local_118[0] + 200) = local_100;
        *(ulonglong *)(local_118[0] + 0xc0) = CONCAT26(uStack_f2,local_f8);
        *(undefined8 *)(local_118[0] + 0xd0) = local_108;
        puVar17 = (undefined4 *)((longlong)local_1b8 + 1);
      } while ((longlong)puVar17 < (longlong)*(int *)(lVar13 + 0x18));
    }
    FUN_147fae08a(local_118,local_1c0);
    lVar25 = (longlong)*(int *)(lVar13 + 0x18);
    if (0 < lVar25) {
      uVar27 = uStack_50 & 0xffffffff;
      plVar1 = (longlong *)(lVar13 + 0x20);
      local_1c8 = (undefined4 *)(param_1 + 0xf2);
      local_1b8 = (undefined4 *)(param_1 + 0xf8);
      do {
        local_1d8 = (undefined4 *)(*(longlong *)(lVar13 + 0x10) + -0x60 + lVar25 * 0x30);
        if (lVar25 == 1) {
          local_1d8 = (undefined4 *)0x0;
        }
        plVar28 = (longlong *)(*(longlong *)(lVar13 + 0x10) + -0x30 + lVar25 * 0x30);
        local_1e8 = *plVar28;
        local_1a0 = lVar25;
        FUN_147fab5e0(&local_140,param_1,local_1d8,plVar28);
        uVar14 = (ulonglong)*(byte *)((longlong)plVar28 + 0x1a);
        uVar11 = (int)uVar27 - 1;
        uVar27 = (ulonglong)uVar11;
        if (uVar14 != 0) {
          uVar27 = (ulonglong)(int)uVar11;
          local_1e0 = plVar28;
          do {
            uVar5 = *(ushort *)((longlong)plVar28 + uVar14 * 2 + 8);
            uVar24 = (ulonglong)uVar5;
            lVar25 = uVar24 * 0x58 + *(longlong *)(local_1e8 + 0x40);
            local_f0 = *(char *)(local_58 + uVar27 * 2);
            uVar15 = uVar14;
            if (*(char *)(local_58 + 1 + uVar27 * 2) == '\x01') {
              local_1b0 = (undefined4 *)CONCAT62(local_1b0._2_6_,*(undefined2 *)(param_1 + 0xd8));
              *(ushort *)(param_1 + 0xd8) = uVar5;
              lVar26 = *plVar28;
              local_1f8 = lVar25;
              local_1f0 = uVar24;
              local_1d0 = uVar14;
              local_1a8 = uVar27;
              if ((DAT_14c950c29 == 1) && (lVar26 != 0)) {
                FUN_1456cec3c(lVar26);
              }
              if (0 < *(int *)(lVar13 + 0x28)) {
                uVar5 = *(ushort *)(local_1f8 + 0x34);
                bVar16 = *(byte *)(local_1f8 + 0x46);
                uVar27 = 0;
                bVar29 = false;
                do {
                  while( true ) {
                    plVar28 = (longlong *)(uVar27 * 0x28 + *plVar1);
                    if ((DAT_14c950c29 == 1) && (lVar26 != 0)) {
                      FUN_1456cec3c(lVar26);
                    }
                    if (((*plVar28 != lVar26) || (uVar6 = *(ushort *)(plVar28 + 1), uVar6 < uVar5))
                       || ((uint)bVar16 + (uint)uVar5 <= (uint)uVar6)) break;
                    FUN_147fb36a4(plVar1,uVar27 & 0xffffffff);
                    bVar29 = true;
                    if ((longlong)*(int *)(lVar13 + 0x28) <= (longlong)uVar27) goto LAB_1438cd83d;
                  }
                  uVar27 = uVar27 + 1;
                } while ((longlong)uVar27 < (longlong)*(int *)(lVar13 + 0x28));
                if (bVar29) {
LAB_1438cd83d:
                  FUN_147fb3730(plVar1);
                }
              }
              uStack_f2 = (undefined2)local_1f0;
              lVar25 = local_1f8;
              param_1 = local_208;
              plVar28 = local_1e0;
              if (*(byte *)(local_1f8 + 0x47) != 0) {
                uVar11 = (uint)*(ushort *)(local_1f8 + 0x36);
                uVar19 = (uint)*(byte *)(local_1f8 + 0x47) + (uint)*(ushort *)(local_1f8 + 0x36);
                iVar18 = uVar19 * -0x10;
                do {
                  uVar19 = uVar19 - 1;
                  if (uVar19 <= *(ushort *)(lVar13 + 0x32)) {
                    lVar25 = *(longlong *)(local_1e8 + 0x60);
                    lVar26 = (longlong)
                             *(int *)(lVar25 + 8 + (longlong)(*(int *)(local_1e8 + 0x68) + iVar18));
                    local_158 = *(undefined4 *)(lVar25 + 0x14 + lVar26);
                    local_154 = *(undefined2 *)(lVar25 + 0x18 + lVar26);
                    local_218 = &local_158;
                    FUN_147fac964(param_1,&local_150,local_1d8,plVar28);
                    uVar22 = *(undefined1 *)(param_1 + 0xf2);
                    uVar23 = *(undefined1 *)(param_1 + 0xf3);
                    uVar2 = *(undefined2 *)(param_1 + 0xf4);
                    uVar3 = *(undefined2 *)(param_1 + 0xf6);
                    uVar9 = *(undefined8 *)(param_1 + 0xf8);
                    local_1f0 = *(ulonglong *)(param_1 + 0x100);
                    uVar7 = *(undefined4 *)(lVar25 + 0x14 + lVar26);
                    *(undefined2 *)(local_1c8 + 1) = *(undefined2 *)(lVar25 + 0x18 + lVar26);
                    *local_1c8 = uVar7;
                    *local_1b8 = local_150;
                    local_1b8[1] = uStack_14c;
                    local_1b8[2] = uStack_148;
                    local_1b8[3] = uStack_144;
                    bVar16 = *(byte *)(lVar25 + 0x20 + lVar26);
                    if (((bVar16 & 0x40) != 0) &&
                       ((local_f0 == '\x01' || ((local_f0 == '\x02' && ((bVar16 & 1) != 0)))))) {
                      local_1fa = CONCAT11(local_1fa._1_1_,uVar22);
                      (**(code **)(*(longlong *)(lVar25 + lVar26) + 0x38))
                                ((longlong *)(lVar25 + lVar26),local_208,local_118);
                      uVar22 = (undefined1)local_1fa;
                    }
                    *(undefined1 *)(local_208 + 0xf2) = uVar22;
                    *(undefined1 *)(local_208 + 0xf3) = uVar23;
                    *(undefined2 *)(local_208 + 0xf4) = uVar2;
                    *(undefined2 *)(local_208 + 0xf6) = uVar3;
                    *(undefined8 *)(local_208 + 0xf8) = uVar9;
                    *(ulonglong *)(local_208 + 0x100) = local_1f0;
                    uVar11 = (uint)*(ushort *)(local_1f8 + 0x36);
                    lVar25 = local_1f8;
                    param_1 = local_208;
                    plVar28 = local_1e0;
                  }
                  iVar18 = iVar18 + 0x10;
                } while (uVar11 < uVar19);
              }
              if (((*(byte *)(lVar25 + 0x4c) & 2) != 0) && (*(byte *)(lVar25 + 0x44) != 0)) {
                uVar11 = (uint)*(ushort *)(lVar25 + 0x30);
                uVar19 = (uint)*(byte *)(lVar25 + 0x44) + (uint)*(ushort *)(lVar25 + 0x30);
                iVar18 = uVar19 * -0x10;
                do {
                  lVar25 = *(longlong *)(*plVar28 + 0x60);
                  lVar26 = (longlong)
                           *(int *)(lVar25 + 8 + (longlong)(*(int *)(*plVar28 + 0x68) + iVar18));
                  bVar16 = *(byte *)(lVar25 + 0x23 + lVar26);
                  if ((bVar16 & 1) != 0) {
                    if (local_f0 == '\x02') {
                      if ((bVar16 & 2) != 0) goto LAB_1438cd67c;
                    }
                    else if (local_f0 == '\x01') {
LAB_1438cd67c:
                      plVar20 = (longlong *)(lVar25 + lVar26);
                      local_160 = *(undefined4 *)((longlong)plVar20 + 0x14);
                      local_15c = (undefined2)plVar20[3];
                      local_218 = &local_160;
                      FUN_147fac964(param_1,&local_150,local_1d8,plVar28);
                      local_1f0 = CONCAT71(local_1f0._1_7_,*(undefined1 *)(param_1 + 0xf2));
                      uVar22 = *(undefined1 *)(param_1 + 0xf3);
                      uVar2 = *(undefined2 *)(param_1 + 0xf4);
                      local_1fa = *(undefined2 *)(param_1 + 0xf6);
                      local_190 = *(undefined8 *)(param_1 + 0xf8);
                      local_198 = *(undefined8 *)(param_1 + 0x100);
                      uVar7 = *(undefined4 *)((longlong)plVar20 + 0x14);
                      *(short *)(local_1c8 + 1) = (short)plVar20[3];
                      *local_1c8 = uVar7;
                      *local_1b8 = local_150;
                      local_1b8[1] = uStack_14c;
                      local_1b8[2] = uStack_148;
                      local_1b8[3] = uStack_144;
                      if ((short)plVar20[2] != -1) {
                        local_178 = local_150;
                        uStack_174 = uStack_14c;
                        uStack_170 = uStack_148;
                        uStack_16c = uStack_144;
                        local_218 = (undefined4 *)CONCAT62(local_218._2_6_,(short)plVar20[2]);
                        FUN_147fad2b0(param_1,local_1d8,local_1e0,&local_178);
                      }
                      (**(code **)(*plVar20 + 0x38))(plVar20,param_1,local_1c0);
                      if ((short)plVar20[2] != -1) {
                        local_188 = local_150;
                        uStack_184 = uStack_14c;
                        uStack_180 = uStack_148;
                        uStack_17c = uStack_144;
                        FUN_147fb95a6(*local_1e0 + 0xb8,(short)plVar20[2],&local_188);
                      }
                      *(undefined1 *)(param_1 + 0xf2) = (undefined1)local_1f0;
                      *(undefined1 *)(param_1 + 0xf3) = uVar22;
                      *(undefined2 *)(param_1 + 0xf4) = uVar2;
                      *(undefined2 *)(param_1 + 0xf6) = local_1fa;
                      *(undefined8 *)(param_1 + 0xf8) = local_190;
                      *(undefined8 *)(param_1 + 0x100) = local_198;
                      uVar11 = (uint)*(ushort *)(local_1f8 + 0x30);
                      plVar28 = local_1e0;
                    }
                  }
                  uVar19 = uVar19 - 1;
                  iVar18 = iVar18 + 0x10;
                } while (uVar11 < uVar19);
              }
              *(undefined2 *)(param_1 + 0xd8) = local_1b0._0_2_;
              uVar15 = local_1d0;
              uVar27 = local_1a8;
            }
            uVar14 = uVar15 - 1;
            uVar27 = uVar27 - 1;
          } while (1 < (longlong)uVar15);
        }
        if (*(char *)(local_58 + 1 + (longlong)(int)uVar27 * 2) != '\0') {
          local_f0 = *(char *)(local_58 + (longlong)(int)uVar27 * 2);
          local_218 = (undefined4 *)CONCAT62(local_218._2_6_,0xffff);
          FUN_1438cf788(param_1,local_1d8,plVar28,local_118);
        }
        lVar25 = local_1a0 + -1;
        lVar26 = CONCAT44(uStack_13c,local_140);
        *(undefined8 *)(lVar26 + 200) = local_128;
        *(undefined8 *)(lVar26 + 0xc0) = local_120;
        *(undefined8 *)(lVar26 + 0xd0) = local_130;
      } while (1 < local_1a0);
    }
    FUN_147fa6ed6(local_118);
    if (local_58 != 0) {
      piVar21 = (int *)((local_58 + -8) - (ulonglong)*(uint *)(local_58 + -8));
      LOCK();
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (*piVar21 == 0) {
        if (*(longlong *)(piVar21 + 0x10) - (longlong)piVar21 == 0x10000) {
          lVar13 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar13 = FUN_145bdc178();
          }
          FUN_140028df4(lVar13,piVar21);
        }
        else {
          FUN_144705e74(piVar21);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438cd8c8 FUN_1438cd8c8 body=88 status=ok
// SIG undefined FUN_1438cd8c8(void)

ulonglong FUN_1438cd8c8(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined7 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (((0 < *(int *)(lVar1 + 0x48)) && (*(char *)(lVar1 + 400) == '\x01')) &&
     (*(char *)(lVar1 + 0x128) == '\x01')) {
    cVar2 = FUN_147fac7ee();
    if (cVar2 != '\0') {
      lVar1 = *(longlong *)(param_1 + 0x20);
      uVar3 = CONCAT71(uVar4,*(char *)(lVar1 + 0x35));
      if ((*(char *)(lVar1 + 0x35) == '\0') &&
         (uVar3 = CONCAT71(uVar4,1), *(char *)(lVar1 + 0x37) == '\0')) {
        *(undefined1 *)(lVar1 + 0x37) = 5;
        uVar3 = 0;
      }
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1438cd920 FUN_1438cd920 body=92 status=ok
// SIG undefined FUN_1438cd920(void)

undefined8 FUN_1438cd920(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1438cd8c8();
  if ((char)uVar2 == '\0') {
    FUN_1438cd97c(param_1,param_2);
    FUN_1438cda10(param_1);
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(undefined1 *)(lVar1 + 0x37) = 0;
    if (*(char *)(lVar1 + 0x36) != '\x04') {
      uVar2 = FUN_1438ca7ba(param_1);
      return uVar2;
    }
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x35));
  }
  return uVar2;
}



// FUNCTION 1438cd97c FUN_1438cd97c body=147 status=ok
// SIG undefined FUN_1438cd97c(void)

void FUN_1438cd97c(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar1 = *(int *)(lVar2 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x20);
    lVar5 = 0;
    do {
      *(float *)(lVar3 + 0xc + lVar5) = *(float *)(lVar3 + 0xc + lVar5) - param_2;
      lVar5 = lVar5 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar5);
  }
  cVar4 = FUN_1438ca8fa(param_1,param_2,1);
  if (cVar4 == '\0') {
    if (*(char *)(lVar2 + 0x34) == '\0') {
      cVar4 = FUN_1438cdb94(param_1,param_2);
      *(char *)(lVar2 + 0x34) = cVar4;
      if (cVar4 != '\0') {
        FUN_1438cc07c(param_1);
        return;
      }
    }
  }
  else {
    *(char *)(lVar2 + 0x36) = cVar4;
  }
  return;
}



// FUNCTION 1438cda10 FUN_1438cda10 body=240 status=ok
// SIG undefined FUN_1438cda10(void)

void FUN_1438cda10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(char *)(lVar2 + 0x36) != '\x04') {
    return;
  }
  lVar1 = param_1 + 0x78;
  iVar5 = 4;
  do {
    cVar3 = FUN_1438ce064(param_1);
    if (cVar3 != '\0') {
      *(undefined8 *)(param_1 + 0xb8) = 0xffffffff0000;
      FUN_1438cca60(param_1,lVar1);
      if ((ushort)((short)*(int *)(param_1 + 0x9c) + 4U) < 3) {
        uVar4 = 0x20103 >> ((byte)(*(int *)(param_1 + 0x9c) << 3) & 0x1f);
        *(char *)(lVar2 + 0x35) = (char)uVar4;
        FUN_1438cc55a(param_1,uVar4,0xffff);
        *(undefined4 *)(lVar2 + 0x18) = 0;
        if (-1 < *(int *)(lVar2 + 0x1c)) {
          return;
        }
        FUN_147fb3c46(lVar2 + 0x10,0);
        return;
      }
      cVar3 = FUN_1438cb4c2(param_1,lVar1);
      FUN_147fac8ea(lVar1);
      *(char *)(lVar2 + 0x34) = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      FUN_1438cc07c(param_1);
    }
    bVar6 = iVar5 != 0;
    iVar5 = iVar5 + -1;
    if (*(char *)(lVar2 + 0x34) == '\0') {
      return;
    }
  } while (bVar6);
  return;
}



// FUNCTION 1438cdb00 FUN_1438cdb00 body=84 status=ok
// SIG undefined FUN_1438cdb00(void)

undefined8 FUN_1438cdb00(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1438cd8c8();
  if ((char)uVar2 == '\0') {
    FUN_1438cd97c(param_1,param_2);
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(undefined1 *)(lVar1 + 0x37) = 0;
    if (*(char *)(lVar1 + 0x36) != '\x04') {
      uVar2 = FUN_1438ca7ba(param_1);
      return uVar2;
    }
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x35));
  }
  return uVar2;
}



// FUNCTION 1438cdb54 FUN_1438cdb54 body=63 status=ok
// SIG undefined FUN_1438cdb54(void)

undefined8 FUN_1438cdb54(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1438cd8c8();
  if ((char)uVar2 == '\0') {
    FUN_1438cda10(param_1);
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(undefined1 *)(lVar1 + 0x37) = 0;
    if (*(char *)(lVar1 + 0x36) != '\x04') {
      uVar2 = FUN_1438ca7ba(param_1);
      return uVar2;
    }
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x35));
  }
  return uVar2;
}



// FUNCTION 1438cdb94 FUN_1438cdb94 body=1231 status=ok
// SIG undefined FUN_1438cdb94(void)

ulonglong FUN_1438cdb94(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  longlong lVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  byte local_141;
  bool local_140;
  undefined1 local_13f;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  ulonglong local_138;
  longlong local_130;
  int local_124;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar14 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(lVar14 + 0x18) == 0) {
    uVar12 = 1;
    goto LAB_1438ce02e;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_140 = true;
  }
  else {
    local_140 = *(int *)(*(longlong *)(param_1 + 0x28) + 8) == 0;
  }
  *(undefined4 *)(lVar14 + 0x38) = 0xffffffff;
  if (*(int *)(lVar14 + 0x18) < 1) {
    *(undefined2 *)(lVar14 + 0x38) = 0;
LAB_1438ce01d:
    puVar8 = &DAT_14acfe058;
  }
  else {
    local_e8 = (undefined4 *)(param_1 + 0xf2);
    local_f0 = (undefined4 *)(param_1 + 0xf8);
    local_141 = 1;
    lVar10 = 0;
    local_138 = 0;
    iVar18 = 0;
    local_118 = lVar14;
    do {
      lVar14 = *(longlong *)(local_118 + 0x10) + lVar10 * 0x30;
      lVar1 = *(longlong *)(local_118 + 0x10) + -0x30 + lVar10 * 0x30;
      local_130 = lVar1;
      if (lVar10 == 0) {
        local_130 = 0;
      }
      local_108 = *(longlong *)(lVar1 + 0x30);
      local_120 = lVar10;
      FUN_147fab5e0(local_88,param_1,local_130,lVar14);
      if (*(char *)(lVar1 + 0x4a) != '\0') {
        local_13a = *(undefined2 *)(param_1 + 0xd8);
        uVar12 = 0;
        local_110 = lVar14;
        do {
          lVar11 = local_130;
          uVar4 = *(ushort *)(lVar14 + 10 + uVar12 * 2);
          lVar1 = *(longlong *)(local_108 + 0x40);
          lVar9 = (ulonglong)uVar4 * 0x58;
          lVar10 = lVar1 + lVar9;
          *(ushort *)(param_1 + 0xd8) = uVar4;
          if ((((*(byte *)(lVar1 + 0x4a + lVar9) & 0xfe) == 2) && (*(char *)(lVar10 + 0x3a) != '\0')
              ) && (*(short *)(lVar10 + 0x40) != -1)) {
            local_a0 = *(undefined4 *)(lVar10 + 0x3a);
            local_9c = *(undefined2 *)(lVar10 + 0x3e);
            local_158 = &local_a0;
            FUN_147fac964(param_1,&local_98,local_130,lVar14);
            local_b8 = local_98;
            uStack_b4 = uStack_94;
            uStack_b0 = uStack_90;
            uStack_ac = uStack_8c;
            local_158 = (undefined4 *)CONCAT62(local_158._2_6_,*(undefined2 *)(lVar10 + 0x40));
            FUN_147fad2b0(param_1,lVar11,lVar14,&local_b8);
          }
          local_124 = iVar18;
          if (*(char *)(lVar10 + 0x47) == '\0') {
            uVar7 = 0;
          }
          else {
            uVar19 = (uint)*(ushort *)(lVar10 + 0x36);
            iVar18 = ~uVar19 << 4;
            local_100 = (ulonglong)uVar4;
            do {
              lVar1 = *(longlong *)(local_108 + 0x60);
              lVar11 = (longlong)
                       *(int *)(lVar1 + 8 + (longlong)(*(int *)(local_108 + 0x68) + iVar18));
              local_c0 = *(undefined4 *)(lVar1 + 0x14 + lVar11);
              local_bc = *(undefined2 *)(lVar1 + 0x18 + lVar11);
              local_158 = &local_c0;
              FUN_147fac964(param_1,&local_98,local_130,lVar14);
              uVar2 = *(undefined1 *)(param_1 + 0xf2);
              uVar13 = *(undefined1 *)(param_1 + 0xf3);
              uVar15 = *(undefined2 *)(param_1 + 0xf4);
              uVar16 = *(undefined2 *)(param_1 + 0xf6);
              uVar17 = *(undefined8 *)(param_1 + 0xf8);
              local_e0 = *(undefined8 *)(param_1 + 0x100);
              uVar5 = *(undefined4 *)(lVar1 + 0x14 + lVar11);
              *(undefined2 *)(local_e8 + 1) = *(undefined2 *)(lVar1 + 0x18 + lVar11);
              *local_e8 = uVar5;
              *local_f0 = local_98;
              local_f0[1] = uStack_94;
              local_f0[2] = uStack_90;
              local_f0[3] = uStack_8c;
              bVar3 = *(byte *)(lVar1 + 0x20 + lVar11);
              if (((bVar3 & 0x40) != 0) && ((local_141 & 1) != 0)) {
                if ((bVar3 & 2) == 0 && local_140 == false) {
                  bVar6 = bVar3 & 4;
                }
                else {
                  bVar6 = bVar3 & 2;
                }
                if (bVar6 == 0) {
                  local_141 = 1;
                }
                else {
                  plVar20 = (longlong *)(lVar1 + lVar11);
                  local_13f = uVar13;
                  local_13e = uVar16;
                  local_13c = uVar15;
                  local_f8 = uVar17;
                  if ((bVar3 & 8) != 0 && (short)plVar20[2] != -1) {
                    local_d8 = local_98;
                    uStack_d4 = uStack_94;
                    uStack_d0 = uStack_90;
                    uStack_cc = uStack_8c;
                    local_158 = (undefined4 *)CONCAT62(local_158._2_6_,(short)plVar20[2]);
                    FUN_147fad2b0(param_1,local_130,local_110,&local_d8);
                  }
                  uVar7 = (**(code **)(*plVar20 + 0x50))(plVar20,param_1,param_2);
                  if ((char)uVar7 != '\0') {
                    if (*(short *)(local_118 + 0x3a) == -1) {
                      *(short *)(local_118 + 0x38) = (short)local_120;
                      *(short *)(local_118 + 0x3a) = (short)local_100;
                    }
                    local_138 = (ulonglong)uVar7;
                  }
                  local_141 = (char)uVar7 != '\x01';
                  uVar17 = local_f8;
                  uVar13 = local_13f;
                  uVar15 = local_13c;
                  uVar16 = local_13e;
                }
              }
              *(undefined1 *)(param_1 + 0xf2) = uVar2;
              *(undefined1 *)(param_1 + 0xf3) = uVar13;
              *(undefined2 *)(param_1 + 0xf4) = uVar15;
              *(undefined2 *)(param_1 + 0xf6) = uVar16;
              *(undefined8 *)(param_1 + 0xf8) = uVar17;
              *(undefined8 *)(param_1 + 0x100) = local_e0;
              uVar19 = uVar19 + 1;
              uVar7 = (uint)*(byte *)(lVar10 + 0x47);
              iVar18 = iVar18 + -0x10;
              lVar14 = local_110;
            } while (uVar19 < (uint)*(ushort *)(lVar10 + 0x36) + (uint)*(byte *)(lVar10 + 0x47));
          }
          iVar18 = local_124 + uVar7;
          *(undefined2 *)(param_1 + 0xd8) = local_13a;
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(byte *)(lVar14 + 0x1a));
      }
      *(undefined8 *)(local_88[0] + 200) = local_70;
      *(undefined8 *)(local_88[0] + 0xc0) = local_68;
      *(undefined8 *)(local_88[0] + 0xd0) = local_78;
      lVar10 = local_120 + 1;
    } while (lVar10 < *(int *)(local_118 + 0x18));
    uVar12 = local_138;
    if (iVar18 != 0) goto LAB_1438ce02e;
    *(undefined2 *)(local_118 + 0x38) = 0;
    lVar14 = local_118;
    if (*(int *)(local_118 + 0x18) < 1) goto LAB_1438ce01d;
    bVar3 = *(byte *)(*(longlong *)(local_118 + 0x10) + 0x1a);
    puVar8 = &DAT_14acfe058;
    if (bVar3 != 0) {
      puVar8 = (undefined2 *)(*(longlong *)(local_118 + 0x10) + 10 + (ulonglong)(bVar3 - 1) * 2);
    }
  }
  uVar15 = *puVar8;
  *(undefined2 *)(lVar14 + 0x3a) = uVar15;
  uVar12 = CONCAT71((uint7)(byte)((ushort)uVar15 >> 8),2);
LAB_1438ce02e:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ce064 FUN_1438ce064 body=5149 status=ok
// SIG undefined FUN_1438ce064(void)

ulonglong FUN_1438ce064(longlong *param_1)

{
  ushort *puVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  ushort *puVar21;
  short *psVar22;
  ushort uVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  ushort *puVar30;
  int iVar31;
  ushort *puVar32;
  ushort *puVar33;
  ulonglong uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  longlong lVar39;
  ushort *puVar40;
  undefined8 *puVar41;
  float fVar42;
  undefined1 auStack_348 [32];
  longlong *local_328;
  undefined1 local_320;
  ushort *local_310;
  longlong local_308;
  undefined1 local_2f9;
  longlong *local_2f8;
  ulonglong local_2f0;
  ushort *local_2e8;
  longlong local_2e0;
  longlong *local_2d8;
  ushort *local_2d0;
  longlong local_2c8;
  ushort *local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  undefined4 *local_2a8;
  ushort *local_2a0;
  ushort *local_298;
  longlong local_290;
  longlong *local_288;
  undefined4 local_280;
  undefined2 local_27c;
  longlong local_278 [2];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  longlong lStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  ushort *local_210;
  undefined8 local_208;
  undefined8 *local_110;
  int local_108;
  ushort local_100 [48];
  ushort *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_2f9 = (undefined1)param_1[0x1e];
  *(undefined1 *)(param_1 + 0x1e) = 1;
  local_308 = param_1[4];
  local_288 = param_1 + 0xf;
  FUN_147fac8ea();
  lVar39 = *(longlong *)param_1[3];
  if ((longlong)*(int *)(lVar39 + 0x78) != 0) {
    lVar25 = *(longlong *)(lVar39 + 0x70);
    lVar39 = lVar25 + (longlong)*(int *)(lVar39 + 0x78) * 0x18;
    do {
      if ((longlong)*(int *)(local_308 + 0x18) != 0) {
        lVar17 = *(longlong *)(local_308 + 0x10);
        lVar13 = 0;
        do {
          if ((*(longlong *)(lVar17 + lVar13) == *(longlong *)(lVar25 + 8)) &&
             (*(short *)(lVar17 + 8 + lVar13) == *(short *)(lVar25 + 0x10))) {
            iVar35 = (int)(lVar13 >> 4) * -0x55555555;
            if ((iVar35 != -1) && (lVar17 = lVar17 + (longlong)iVar35 * 0x30, lVar17 != 0)) {
              local_320 = 0;
              local_328 = (longlong *)0x0;
              cVar8 = FUN_1438cf482(param_1,lVar17,*(undefined2 *)(lVar25 + 0x12),
                                    CONCAT71((int7)((ulonglong)*(longlong *)(lVar25 + 8) >> 8),
                                             *(undefined1 *)(lVar25 + 0x14)));
              if (cVar8 != '\0') {
                param_1[0x17] =
                     (ulonglong)*(ushort *)(lVar25 + 0x12) << 0x20 |
                     (ulonglong)*(byte *)(lVar25 + 0x14) << 0x30 | 0xffff0002;
              }
            }
            break;
          }
          lVar27 = lVar17 + lVar13;
          lVar13 = lVar13 + 0x30;
        } while (lVar27 + 0x30 != (longlong)*(int *)(local_308 + 0x18) * 0x30 + lVar17);
      }
      lVar25 = lVar25 + 0x18;
    } while (lVar25 != lVar39);
    lVar39 = *(longlong *)param_1[3];
  }
  local_2f8 = param_1;
  if (*(int *)(lVar39 + 0x7c) < 0) {
    *(undefined4 *)(lVar39 + 0x78) = 0;
    FUN_147fc0120(lVar39 + 0x70,0);
  }
  else {
    *(undefined4 *)(lVar39 + 0x78) = 0;
  }
  local_2d8 = (longlong *)(local_308 + 0x10);
  local_a0 = (ushort *)0x0;
  local_98 = 0x1000000000;
  puVar32 = (ushort *)(longlong)*(int *)(local_308 + 0x18);
  if ((longlong)puVar32 < 1) {
LAB_1438ce70c:
  }
  else {
    do {
      puVar33 = (ushort *)((longlong)puVar32 + -1);
      lVar39 = *local_2d8;
      lVar17 = (longlong)puVar33 * 0x30;
      puVar21 = (ushort *)(lVar39 + lVar17);
      lVar25 = *(longlong *)(lVar39 + lVar17);
      uVar34 = (ulonglong)*(byte *)(lVar39 + 0x1a + lVar17);
      local_310 = puVar33;
      puVar30 = puVar21;
      lVar39 = lVar25;
      local_2d0 = puVar32;
      if (uVar34 != 0) {
        do {
          local_2e0 = lVar39;
          local_2e8 = puVar30;
          uVar23 = puVar21[uVar34 + 4];
          if ((*(byte *)(*(longlong *)(lVar25 + 0x40) + 0x54 + (ulonglong)uVar23 * 0x58) & 1) != 0)
          {
            lVar39 = *(longlong *)(lVar25 + 0x40) + (ulonglong)uVar23 * 0x58;
            local_2f0 = uVar34;
            if (((*(byte *)(lVar39 + 0x4c) & 1) != 0) &&
               (bVar10 = *(byte *)(lVar39 + 0x47), bVar10 != 0)) {
              uVar11 = *(ushort *)(lVar39 + 0x36);
              uVar12 = (uint)uVar11;
              uVar38 = (uint)uVar11 + (uint)bVar10;
              iVar35 = uVar38 * -0x10;
              uVar11 = uVar11 + bVar10;
              do {
                uVar34 = local_98;
                uVar11 = uVar11 - 1;
                lVar17 = *(longlong *)(lVar25 + 0x60);
                lVar13 = (longlong)
                         *(int *)(lVar17 + 8 + (longlong)(*(int *)(lVar25 + 0x68) + iVar35));
                if ((*(byte *)(lVar17 + 0x20 + lVar13) & 0x20) != 0) {
                  lVar27 = (longlong)(int)local_98;
                  uVar12 = (int)local_98 + 1;
                  local_98 = CONCAT44(local_98._4_4_,uVar12);
                  if (local_98._4_4_ < uVar12) {
                    FUN_1438d35ee(local_100,uVar34 & 0xffffffff);
                    puVar33 = local_310;
                    lVar25 = local_2e0;
                  }
                  puVar32 = local_a0;
                  if (local_a0 == (ushort *)0x0) {
                    puVar32 = local_100;
                  }
                  uVar15 = *(undefined1 *)(lVar17 + 0x21 + lVar13);
                  puVar32[lVar27 * 3] = uVar23;
                  puVar32[lVar27 * 3 + 1] = uVar11;
                  *(char *)(puVar32 + lVar27 * 3 + 2) = (char)puVar33;
                  *(undefined1 *)((longlong)puVar32 + lVar27 * 6 + 5) = uVar15;
                  uVar12 = (uint)*(ushort *)(lVar39 + 0x36);
                }
                uVar38 = uVar38 - 1;
                iVar35 = iVar35 + 0x10;
              } while (uVar12 < uVar38);
            }
            uVar18 = local_98;
            puVar21 = local_2e8;
            uVar34 = local_2f0;
            if (*(char *)(lVar39 + 0x46) != '\0') {
              lVar39 = (longlong)(int)local_98;
              uVar12 = (int)local_98 + 1;
              local_98 = CONCAT44(local_98._4_4_,uVar12);
              if (local_98._4_4_ < uVar12) {
                FUN_1438d35ee(local_100,uVar18 & 0xffffffff);
                puVar33 = local_310;
              }
              puVar32 = local_a0;
              if (local_a0 == (ushort *)0x0) {
                puVar32 = local_100;
              }
              puVar32[lVar39 * 3] = uVar23;
              puVar32[lVar39 * 3 + 1] = 0xffff;
              *(char *)(puVar32 + lVar39 * 3 + 2) = (char)puVar33;
              *(undefined1 *)((longlong)puVar32 + lVar39 * 6 + 5) = 2;
            }
          }
          bVar7 = 1 < (longlong)uVar34;
          uVar34 = uVar34 - 1;
          puVar30 = local_2e8;
          lVar39 = local_2e0;
        } while (bVar7);
      }
      if (((*(byte *)((longlong)puVar21 + 0x2f) & 1) != 0) &&
         (lVar39 = *(longlong *)puVar21, *(char *)(lVar39 + 0x17c) == '\x01')) {
        uVar12 = (uint)*(ushort *)(lVar25 + 0x17a) + (uint)*(ushort *)(lVar25 + 0x178);
        if (*(ushort *)(lVar39 + 0x178) < uVar12) {
          iVar35 = uVar12 * -0x10;
          uVar23 = *(ushort *)(lVar25 + 0x178) + *(ushort *)(lVar25 + 0x17a);
          do {
            uVar34 = local_98;
            uVar23 = uVar23 - 1;
            lVar17 = *(longlong *)(lVar25 + 0x60);
            lVar13 = (longlong)*(int *)(lVar17 + 8 + (longlong)(*(int *)(lVar25 + 0x68) + iVar35));
            if ((*(byte *)(lVar17 + 0x20 + lVar13) & 0x20) != 0) {
              lVar39 = (longlong)(int)local_98;
              uVar38 = (int)local_98 + 1;
              local_98 = CONCAT44(local_98._4_4_,uVar38);
              if (local_98._4_4_ < uVar38) {
                FUN_1438d35ee(local_100,uVar34 & 0xffffffff);
                puVar33 = local_310;
              }
              puVar32 = local_a0;
              if (local_a0 == (ushort *)0x0) {
                puVar32 = local_100;
              }
              uVar15 = *(undefined1 *)(lVar17 + 0x21 + lVar13);
              puVar32[lVar39 * 3] = 0xffff;
              puVar32[lVar39 * 3 + 1] = uVar23;
              *(char *)(puVar32 + lVar39 * 3 + 2) = (char)puVar33;
              *(undefined1 *)((longlong)puVar32 + lVar39 * 6 + 5) = uVar15;
              lVar39 = *(longlong *)puVar21;
            }
            uVar12 = uVar12 - 1;
            iVar35 = iVar35 + 0x10;
          } while (*(ushort *)(lVar39 + 0x178) < uVar12);
        }
      }
      puVar32 = puVar33;
    } while (1 < (longlong)local_2d0);
    iVar35 = (int)local_98;
    uVar34 = (ulonglong)(int)local_98;
    puVar32 = local_100;
    if (local_a0 != (ushort *)0x0) {
      puVar32 = local_a0;
    }
    if (0 < (longlong)uVar34) {
      uVar18 = 0;
      puVar21 = puVar32;
      do {
        if ((uVar18 + 1 < uVar34) &&
           (*(byte *)((longlong)puVar21 + 5) < *(byte *)((longlong)puVar21 + 0xb))) {
          uVar23 = puVar21[2];
          local_250._0_6_ = CONCAT24(uVar23,(undefined4)local_250);
          uVar4 = *(undefined4 *)puVar21;
          local_250 = CONCAT44(local_250._4_4_,uVar4);
          puVar21[2] = puVar21[5];
          *(undefined4 *)puVar21 = *(undefined4 *)(puVar21 + 3);
          puVar21[5] = uVar23;
          *(undefined4 *)(puVar21 + 3) = uVar4;
        }
        uVar18 = uVar18 + 2;
        puVar21 = puVar21 + 6;
      } while (uVar18 < uVar34);
      local_2e8 = puVar32;
      if (2 < iVar35) {
        iVar20 = 2;
        do {
          iVar16 = iVar20 * 2;
          local_310 = (ushort *)CONCAT44(local_310._4_4_,iVar16);
          local_2e0 = (longlong)iVar16;
          lVar39 = 0;
          do {
            iVar31 = iVar35 - (int)lVar39;
            if (iVar16 <= iVar31) {
              iVar31 = iVar16;
            }
            if (iVar20 < iVar31 && 0 < iVar20) {
              iVar24 = 0;
              iVar26 = iVar20;
              while( true ) {
                lVar25 = (longlong)iVar26 * 6 + lVar39 * 6;
                iVar37 = 0;
                uVar12 = iVar26 - iVar24;
                if (uVar12 != 0 && iVar24 <= iVar26) {
                  iVar37 = 0;
                  uVar18 = (ulonglong)uVar12;
                  do {
                    uVar18 = uVar18 >> 1;
                    iVar36 = (uint)uVar18 + iVar37;
                    if (*(byte *)((longlong)puVar32 + lVar25 + 5) <=
                        *(byte *)((longlong)puVar32 +
                                 (longlong)iVar36 * 6 + (longlong)iVar24 * 6 + lVar39 * 6 + 5)) {
                      iVar37 = iVar36 + (uVar12 & 1);
                    }
                    bVar7 = 1 < uVar12;
                    uVar12 = (uint)uVar18;
                  } while (bVar7);
                }
                iVar37 = iVar37 + iVar24;
                iVar24 = iVar26 - iVar37;
                if (iVar24 == 0 || iVar26 < iVar37) break;
                uVar12 = iVar31 - iVar26;
                if (uVar12 == 0 || iVar31 < iVar26) {
                  iVar36 = 0;
                }
                else {
                  puVar21 = puVar32 + lVar39 * 3 + (longlong)iVar37 * 3;
                  iVar36 = 0;
                  uVar18 = (ulonglong)uVar12;
                  do {
                    uVar18 = uVar18 >> 1;
                    uVar38 = (uint)uVar18 + iVar36;
                    if (*(byte *)((longlong)puVar21 + 5) <
                        *(byte *)((longlong)puVar32 + (ulonglong)uVar38 * 6 + lVar25 + 5)) {
                      iVar36 = uVar38 + (uVar12 & 1);
                    }
                    bVar7 = 1 < uVar12;
                    uVar12 = (uint)uVar18;
                  } while (bVar7);
                  iVar26 = iVar26 + iVar36;
                  if (0 < iVar36) {
                    puVar33 = puVar21 + (longlong)(iVar26 - iVar37) * 3;
                    puVar30 = puVar21 + (longlong)iVar24 * 3;
                    puVar40 = puVar21 + (longlong)iVar24 * 3;
                    do {
                      while( true ) {
                        puVar1 = puVar30 + 3;
                        uVar23 = puVar21[2];
                        uVar4 = *(undefined4 *)puVar21;
                        local_250 = CONCAT44(CONCAT22(local_250._6_2_,uVar23),uVar4);
                        puVar21[2] = puVar30[2];
                        *(undefined4 *)puVar21 = *(undefined4 *)puVar30;
                        puVar21 = puVar21 + 3;
                        puVar30[2] = uVar23;
                        *(undefined4 *)puVar30 = uVar4;
                        if (puVar1 == puVar33) break;
                        puVar30 = puVar1;
                        if (puVar21 == puVar40) {
                          puVar40 = puVar1;
                        }
                      }
                      puVar30 = puVar40;
                    } while (puVar21 != puVar40);
                  }
                }
                if ((iVar31 <= iVar26) || (iVar24 = iVar37 + iVar36 + 1, iVar26 <= iVar24)) break;
              }
            }
            lVar39 = lVar39 + local_2e0;
          } while (lVar39 < (longlong)uVar34);
          iVar20 = iVar16;
          local_2f0 = uVar34;
        } while (iVar16 < iVar35);
      }
      goto LAB_1438ce70c;
    }
  }
  puVar32 = local_100;
  if (local_a0 != (ushort *)0x0) {
    puVar32 = local_a0;
  }
  plVar14 = local_2f8;
  if ((int)local_98 != 0) {
    puVar21 = puVar32 + (longlong)(int)local_98 * 3;
    local_2a8 = (undefined4 *)((longlong)local_2f8 + 0xf2);
    local_2b0 = local_2f8 + 0x1f;
    local_290 = local_308 + 0x20;
    do {
      uVar34 = (ulonglong)((uint)(byte)puVar32[2] * 0x30);
      local_310 = (ushort *)(*local_2d8 + uVar34);
      puVar33 = (ushort *)(*local_2d8 + -0x30 + uVar34);
      local_2e8 = (ushort *)0x0;
      if ((byte)puVar32[2] != 0) {
        local_2e8 = puVar33;
      }
      lVar39 = *(longlong *)(puVar33 + 0x18);
      FUN_147fab5e0(local_278,plVar14);
      uVar23 = *puVar32;
      local_2c0 = (ushort *)CONCAT62(local_2c0._2_6_,(short)plVar14[0x1b]);
      *(ushort *)(plVar14 + 0x1b) = uVar23;
      if (puVar32[1] == 0xffff) {
        if (uVar23 != 0xffff) {
          if (*(char *)(*(longlong *)(lVar39 + 0x40) + 0x46 + (ulonglong)uVar23 * 0x58) != '\0') {
            lVar25 = *(longlong *)(lVar39 + 0x40) + (ulonglong)uVar23 * 0x58;
            uVar23 = 0;
            local_2c8 = lVar39;
            local_2b8 = lVar25;
            local_2a0 = puVar21;
            local_298 = puVar32;
            do {
              uVar11 = *(short *)(lVar25 + 0x34) + uVar23;
              local_2f0 = (ulonglong)uVar11;
              lVar17 = (longlong)(short)uVar11 * 0x20;
              if ((((*(byte *)(*(longlong *)(lVar39 + 0x50) + 0x1c + lVar17) & 1) != 0) &&
                  (lVar17 = *(longlong *)(lVar39 + 0x50) + lVar17,
                  *(byte *)((longlong)plVar14 + 0xa1) < *(byte *)(lVar17 + 0x19))) &&
                 ((*(byte *)(lVar17 + 0x18) & 3) == 0)) {
                if ((*(short *)(lVar17 + 0x14) != 0) || (*(short *)(lVar17 + 0x16) != 0)) {
                  FUN_147fae2e0(local_2d8,&local_250,*(undefined8 *)local_310,local_2f0);
                  puVar28 = local_110;
                  if (local_110 == (undefined8 *)0x0) {
                    puVar28 = &local_250;
                  }
                  if ((longlong)local_108 != 0) {
                    plVar29 = puVar28 + 2;
                    lVar39 = (longlong)local_108 * 0x28;
                    do {
                      local_320 = *(undefined1 *)(lVar17 + 0x1a);
                      local_328 = plVar29;
                      cVar8 = FUN_1438cf482(plVar14,local_310,*(undefined2 *)(lVar17 + 0x12),
                                            *(undefined1 *)(lVar17 + 0x19));
                      if (cVar8 != '\0') {
                        if (((*plVar29 != 0) && ((*(byte *)(lVar17 + 0x1c) & 2) != 0)) &&
                           (plVar14[5] != 0)) {
                          FUN_147fab4de(plVar14[5],plVar29);
                        }
                        plVar14[0x17] =
                             (ulonglong)(uint)((int)local_2f0 << 0x10) +
                             ((ulonglong)*(ushort *)(lVar17 + 0x12) << 0x20 |
                             (ulonglong)*(byte *)(lVar17 + 0x19) << 0x30) + 1;
                        FUN_147fae3d8(&local_250);
                        lVar25 = local_2b8;
                        lVar39 = local_2c8;
                        goto LAB_1438ced92;
                      }
                      plVar29 = plVar29 + 5;
                      lVar39 = lVar39 + -0x28;
                    } while (lVar39 != 0);
                  }
                  FUN_147fae3d8(&local_250);
                  lVar39 = local_2c8;
                }
                local_210 = (ushort *)0x0;
                local_208 = 0x800000000;
                if (*(char *)(lVar17 + 0x18) == '\x04') {
                  local_208 = 0x800000001;
                  local_250 = 0;
                  local_2d0 = (ushort *)&lStack_248;
                  puVar32 = (ushort *)&local_250;
LAB_1438ce9ed:
                  local_2e0 = CONCAT44(local_2e0._4_4_,(int)(short)local_2f0);
                  do {
                    plVar29 = *(longlong **)puVar32;
                    if (plVar29 == (longlong *)0x0) {
                      lVar39 = 0;
                    }
                    else {
                      lVar39 = *plVar29;
                    }
                    plVar14[0x1c] = lVar39;
                    local_328 = (longlong *)CONCAT44(local_328._4_4_,(uint)*(byte *)(lVar17 + 0x1b))
                    ;
                    cVar8 = FUN_1438cfd70(plVar14,local_2e8,local_310,*(undefined2 *)(lVar17 + 0x10)
                                         );
                    plVar14[0x1c] = 0;
                    if (cVar8 != '\0') {
                      if ((*(short *)(lVar17 + 0x14) != 0) || (*(short *)(lVar17 + 0x16) != 0)) {
                        uVar12 = 0;
                        if ((plVar29 != (longlong *)0x0) &&
                           (puVar28 = (undefined8 *)*plVar29, puVar28 != (undefined8 *)0x0)) {
                          uVar6 = *puVar28;
                          uVar12 = (uint)((ulonglong)uVar6 >> 0x10);
                          uVar38 = (uint)uVar6 & 0xffff;
                          uVar12 = ((uint)uVar6 << 0x10 | uVar38) + (int)((ulonglong)uVar6 >> 0x20)
                                   + (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar38 >> 4);
                          if ((longlong *)puVar28[1] != (longlong *)0x0 && puVar28[2] != 0) {
                            iVar35 = (**(code **)(*(longlong *)puVar28[1] + 0x360))();
                            uVar12 = iVar35 + (uVar12 >> 2) + uVar12 * 0x40 + 0x9e3779b9 ^ uVar12;
                          }
                        }
                        lVar39 = *(longlong *)local_310;
                        if ((DAT_14c950c29 == 1) && (lVar39 != 0)) {
                          FUN_1456cec3c(lVar39);
                        }
                        if (((DAT_14c950c29 & 1) != 0) && (lVar39 != 0)) {
                          FUN_1456cec3c(lVar39);
                        }
                        if (((DAT_14c950c29 & 1) != 0) && (lVar39 != 0)) {
                          FUN_1456cec3c(lVar39);
                        }
                        if ((longlong)*(int *)(local_308 + 0x28) != 0) {
                          plVar14 = *(longlong **)(local_308 + 0x20);
                          lVar25 = (longlong)*(int *)(local_308 + 0x28) * 0x28;
                          bVar10 = DAT_14c950c29;
                          do {
                            if (((bVar10 & 1) != 0) && (lVar39 != 0)) {
                              FUN_1456cec3c(lVar39);
                              bVar10 = DAT_14c950c29;
                            }
                            if (((*plVar14 == lVar39) &&
                                ((uint)local_2e0 == *(ushort *)(plVar14 + 1))) &&
                               (*(uint *)(plVar14 + 4) == uVar12)) {
                              if (plVar14 != (longlong *)0x0) goto LAB_1438cec09;
                              break;
                            }
                            plVar14 = plVar14 + 5;
                            lVar25 = lVar25 + -0x28;
                          } while (lVar25 != 0);
                        }
                        iVar35 = (uint)*(ushort *)(lVar17 + 0x14) - (uint)*(ushort *)(lVar17 + 0x16)
                        ;
                        iVar20 = 0;
                        if (iVar35 < 1) {
                          iVar35 = 0;
                        }
                        iVar16 = ((uint)*(ushort *)(lVar17 + 0x16) +
                                 (uint)*(ushort *)(lVar17 + 0x14)) - iVar35;
                        if (-1 < iVar16) {
                          uVar38 = *(int *)(local_308 + 0x44) * 0xbb38435 + 0x3619636b;
                          *(uint *)(local_308 + 0x44) = uVar38;
                          iVar20 = (int)((float)(iVar16 + 1) *
                                        ((float)(uVar38 >> 9 | 0x3f800000) + -1.0));
                        }
                        fVar42 = (float)(iVar20 + iVar35) / 100.0;
                        if (0.0 < fVar42) {
                          plVar14 = (longlong *)FUN_147fae416(local_290);
                          lVar39 = *(longlong *)local_310;
                          if (DAT_14c950c29 == 1) {
                            if (lVar39 == 0) {
                              lVar39 = 0;
                            }
                            else {
                              FUN_1456cec3c();
                              lVar39 = *(longlong *)local_310;
                            }
                          }
                          *plVar14 = lVar39;
                          *(short *)(plVar14 + 1) = (short)local_2f0;
                          *(float *)((longlong)plVar14 + 0xc) = fVar42;
                          if ((plVar29 != (longlong *)0x0) && (*plVar29 != 0)) {
                            FUN_147fa66b6(plVar14 + 2,plVar29);
                            *(uint *)(plVar14 + 4) = uVar12;
                          }
                          (**(code **)(*local_2f8 + 0x10))(local_2f8,plVar14);
                          goto LAB_1438cec09;
                        }
                      }
                      local_320 = *(undefined1 *)(lVar17 + 0x1a);
                      local_328 = plVar29;
                      cVar8 = FUN_1438cf482(local_2f8,local_310,*(undefined2 *)(lVar17 + 0x12),
                                            *(undefined1 *)(lVar17 + 0x19));
                      plVar14 = local_2f8;
                      if (cVar8 != '\0') {
                        if (((plVar29 != (longlong *)0x0) && ((*(byte *)(lVar17 + 0x1c) & 2) != 0))
                           && (local_2f8[5] != 0)) {
                          FUN_147fab4de(local_2f8[5],plVar29);
                        }
                        plVar14[0x17] =
                             (ulonglong)(uint)((int)local_2f0 << 0x10) +
                             ((ulonglong)*(ushort *)(lVar17 + 0x12) << 0x20 |
                             (ulonglong)*(byte *)(lVar17 + 0x19) << 0x30) + 1;
                        break;
                      }
                    }
LAB_1438cec09:
                    puVar32 = puVar32 + 4;
                    plVar14 = local_2f8;
                  } while (puVar32 != local_2d0);
                }
                else {
                  lVar25 = local_2b8;
                  if (*(char *)(lVar17 + 0x18) != '\b') goto LAB_1438ced92;
                  puVar28 = (undefined8 *)plVar14[5];
                  if ((puVar28 != (undefined8 *)0x0) && ((longlong)*(int *)(puVar28 + 1) != 0)) {
                    puVar41 = (undefined8 *)*puVar28;
                    lVar39 = (longlong)*(int *)(puVar28 + 1) << 4;
                    do {
                      cVar8 = FUN_147fbacde(lVar17,*puVar41);
                      uVar34 = local_208;
                      if (cVar8 != '\0') {
                        lVar25 = (longlong)(int)local_208;
                        uVar12 = (int)local_208 + 1;
                        local_208 = CONCAT44(local_208._4_4_,uVar12);
                        if (local_208._4_4_ < uVar12) {
                          FUN_147fb58b8(&local_250,uVar34 & 0xffffffff);
                        }
                        puVar32 = local_210;
                        if (local_210 == (ushort *)0x0) {
                          puVar32 = (ushort *)&local_250;
                        }
                        *(undefined8 **)(puVar32 + lVar25 * 4) = puVar41;
                      }
                      puVar41 = puVar41 + 2;
                      lVar39 = lVar39 + -0x10;
                    } while (lVar39 != 0);
                    puVar32 = local_210;
                    if (local_210 == (ushort *)0x0) {
                      puVar32 = (ushort *)&local_250;
                    }
                    plVar14 = local_2f8;
                    if ((longlong)(int)local_208 != 0) {
                      local_2d0 = puVar32 + (longlong)(int)local_208 * 4;
                      goto LAB_1438ce9ed;
                    }
                  }
                }
                puVar32 = local_298;
                puVar21 = local_2a0;
                lVar39 = local_2c8;
                lVar25 = local_2b8;
                if (local_210 != (ushort *)0x0) {
                  FUN_1400020a8();
                  lVar25 = local_2b8;
                }
              }
LAB_1438ced92:
              uVar23 = uVar23 + 1;
            } while (uVar23 < *(byte *)(lVar25 + 0x46));
          }
        }
      }
      else {
        lVar25 = *(longlong *)(lVar39 + 0x60);
        lVar39 = (longlong)
                 *(int *)(lVar25 + 8 +
                         (longlong)(int)(*(int *)(lVar39 + 0x68) + (uint)puVar32[1] * -0x10 + -0x10)
                         );
        if ((*(byte *)(lVar25 + 0x20 + lVar39) & 0x40) != 0) {
          plVar29 = (longlong *)(lVar25 + lVar39);
          local_280 = *(undefined4 *)((longlong)plVar29 + 0x14);
          local_27c = (undefined2)plVar29[3];
          local_328 = (longlong *)&local_280;
          FUN_147fac964(plVar14,&local_250,local_2e8,local_310);
          uVar2 = *(undefined2 *)((longlong)plVar14 + 0xf2);
          uVar4 = *(undefined4 *)((longlong)plVar14 + 0xf4);
          lVar39 = plVar14[0x1f];
          lVar25 = plVar14[0x20];
          uVar5 = *(undefined4 *)((longlong)plVar29 + 0x14);
          *(short *)(local_2a8 + 1) = (short)plVar29[3];
          *local_2a8 = uVar5;
          *local_2b0 = local_250;
          local_2b0[1] = lStack_248;
          (**(code **)(*plVar29 + 0x58))(plVar29,plVar14);
          *(undefined2 *)((longlong)plVar14 + 0xf2) = uVar2;
          *(undefined4 *)((longlong)plVar14 + 0xf4) = uVar4;
          plVar14[0x1f] = lVar39;
          plVar14[0x20] = lVar25;
        }
      }
      *(undefined2 *)(plVar14 + 0x1b) = local_2c0._0_2_;
      *(undefined8 *)(local_278[0] + 200) = local_260;
      *(undefined8 *)(local_278[0] + 0xc0) = local_258;
      *(undefined8 *)(local_278[0] + 0xd0) = local_268;
      puVar32 = puVar32 + 3;
    } while (puVar32 != puVar21);
  }
  if (*(char *)(*(longlong *)plVar14[3] + 0x68) != '\0') {
    FUN_1459cb546(plVar14[5]);
  }
  if ((*(char *)((longlong)plVar14 + 0xa1) == '\0') && (*(char *)(local_308 + 0x34) != '\0')) {
    uVar12 = (uint)*(ushort *)(local_308 + 0x38);
    if (*(ushort *)(local_308 + 0x38) == 0xffff) {
      if (0 < *(int *)(local_308 + 0x18)) {
        uVar12 = *(int *)(local_308 + 0x18) - 1;
        goto LAB_1438cefab;
      }
    }
    else {
LAB_1438cefab:
      local_2c0 = (ushort *)(ulonglong)uVar12;
      uVar34 = (longlong)local_2c0 * 0x30 + 8;
      puVar32 = local_2c0;
      do {
        lVar25 = *local_2d8;
        lVar39 = lVar25 + (longlong)puVar32 * 0x30;
        local_2e8 = (ushort *)((longlong)puVar32 + -1);
        puVar21 = (ushort *)(lVar25 + -0x30 + (longlong)puVar32 * 0x30);
        local_310 = puVar21;
        if (puVar32 == (ushort *)0x0) {
          local_310 = (ushort *)0x0;
        }
        lVar17 = *(longlong *)(puVar21 + 0x18);
        FUN_147fab5e0(&local_250,plVar14,local_310,lVar39);
        uVar18 = (ulonglong)((byte)puVar21[0x25] - 1);
        local_2f0 = uVar34;
        local_2d0 = puVar32;
        if ((puVar32 == local_2c0) && (*(short *)(local_308 + 0x3a) != -1)) {
          uVar19 = (ulonglong)(byte)puVar21[0x25];
          do {
            if ((longlong)uVar19 < 1) goto LAB_1438cf17f;
            uVar18 = uVar19 - 1;
            lVar13 = uVar19 * 2;
            uVar19 = uVar18;
          } while (*(short *)(lVar25 + uVar34 + lVar13) != *(short *)(local_308 + 0x3a));
        }
        cVar8 = *(char *)(local_308 + 0x34);
        if (-1 < (int)uVar18) {
          uVar18 = uVar18 & 0xffffffff;
          local_2e0 = CONCAT62(local_2e0._2_6_,(short)plVar14[0x1b]);
          do {
            uVar23 = *(ushort *)(lVar39 + 10 + uVar18 * 2);
            lVar25 = *(longlong *)(lVar17 + 0x40);
            lVar13 = (ulonglong)uVar23 * 0x58;
            *(ushort *)(plVar14 + 0x1b) = uVar23;
            if (*(char *)(lVar25 + 0x46 + lVar13) != '\0') {
              lVar25 = lVar25 + lVar13;
              iVar35 = 0;
              do {
                iVar20 = *(int *)(lVar25 + 0x34);
                lVar13 = *(longlong *)(lVar17 + 0x50);
                lVar27 = (longlong)(short)((short)iVar20 + (short)iVar35) * 0x20;
                if (((*(byte *)(lVar13 + 0x1c + lVar27) & 1) != 0) &&
                   (lVar13 = lVar13 + lVar27,
                   (*(byte *)(lVar13 + 0x18) & 2U - (cVar8 == '\x02')) != 0)) {
                  local_328 = (longlong *)CONCAT44(local_328._4_4_,(uint)*(byte *)(lVar13 + 0x1b));
                  cVar9 = FUN_1438cfd70(local_2f8,local_310,lVar39,*(undefined2 *)(lVar13 + 0x10));
                  if (cVar9 != '\0') {
                    local_320 = *(undefined1 *)(lVar13 + 0x1a);
                    local_328 = (longlong *)0x0;
                    cVar9 = FUN_1438cf482(local_2f8,lVar39,*(undefined2 *)(lVar13 + 0x12),2);
                    if (cVar9 != '\0') {
                      local_2f8[0x17] =
                           ((ulonglong)*(ushort *)(lVar13 + 0x12) << 0x20 |
                           (ulonglong)*(byte *)(lVar13 + 0x19) << 0x30) +
                           (ulonglong)(uint)((iVar35 + iVar20) * 0x10000) + 1;
                      break;
                    }
                  }
                }
                iVar35 = iVar35 + 1;
              } while ((ushort)iVar35 < (ushort)*(byte *)(lVar25 + 0x46));
            }
            *(undefined2 *)(local_2f8 + 0x1b) = (undefined2)local_2e0;
            plVar14 = local_2f8;
          } while ((0 < (longlong)uVar18) &&
                  (uVar18 = uVar18 - 1, *(char *)((longlong)local_2f8 + 0xa1) == '\0'));
        }
LAB_1438cf17f:
        *(undefined8 *)(local_250 + 200) = local_238;
        *(undefined8 *)(local_250 + 0xc0) = local_230;
        *(undefined8 *)(local_250 + 0xd0) = local_240;
        uVar34 = local_2f0 - 0x30;
        puVar32 = local_2e8;
      } while (0 < (longlong)local_2d0);
      if (*(char *)((longlong)plVar14 + 0xa1) != '\0') goto LAB_1438cf1dc;
    }
    lVar39 = *local_2d8;
    FUN_147fab5e0(&local_250,plVar14,0,lVar39);
    uVar23 = DAT_14cb28a80;
    lVar25 = plVar14[0x1b];
    *(ushort *)(plVar14 + 0x1b) = DAT_14cb28a80;
    local_320 = 0;
    local_328 = (longlong *)0x0;
    uVar12 = FUN_1438cf482(plVar14,lVar39,uVar23,2);
    if ((char)uVar12 == '\0') {
      FUN_147fae1ee(plVar14,lVar39,DAT_14cb28a82,5);
    }
    else {
      plVar14[0x17] = (ulonglong)DAT_14cb28a80 << 0x20 | 0x20000ffff0003;
    }
    *(short *)(plVar14 + 0x1b) = (short)lVar25;
    *(undefined8 *)(local_250 + 200) = local_238;
    *(undefined8 *)(local_250 + 0xc0) = local_230;
    *(undefined8 *)(local_250 + 0xd0) = local_240;
    uVar34 = (ulonglong)uVar12 ^ 1;
  }
  else {
LAB_1438cf1dc:
    uVar34 = 0;
  }
  if ((((char)uVar34 == '\0') &&
      (0xfffc < (ushort)((short)*(undefined4 *)((longlong)plVar14 + 0x9c) + 1U))) &&
     (iVar35 = *(int *)(local_308 + 0x18), (longlong)iVar35 != 0)) {
    lVar39 = *(longlong *)(local_308 + 0x10);
    uVar18 = 0;
    bVar10 = DAT_14c950c29;
    do {
      uVar34 = plVar14[0x15];
      if ((uVar34 != 0 & bVar10) == 1) {
        FUN_1456cec3c(uVar34);
        bVar10 = DAT_14c950c29;
      }
      if ((*(ulonglong *)(lVar39 + uVar18) == uVar34) &&
         (*(short *)(lVar39 + 8 + uVar18) == (short)plVar14[0x16])) {
        iVar35 = (int)(uVar18 >> 4) * -0x55555555;
        if (0 < iVar35) {
          uVar12 = iVar35 - 1;
          lVar39 = (ulonglong)uVar12 * 0x30;
          bVar10 = *(byte *)(*local_2d8 + 0x1a + lVar39);
          psVar22 = &DAT_14acfe058;
          if (bVar10 != 0) {
            psVar22 = (short *)(*local_2d8 + lVar39 + 10 + (ulonglong)(bVar10 - 1) * 2);
          }
          sVar3 = *psVar22;
          if (sVar3 != -1) {
            uVar15 = 4;
            if ((ushort)((short)*(undefined4 *)((longlong)plVar14 + 0x9c) + 4U) < 3) {
              uVar15 = (char)(0x20103 >>
                             ((char)*(undefined4 *)((longlong)plVar14 + 0x9c) * '\b' + 0x20U & 0x1f)
                             );
            }
            *(short *)(local_308 + 0x38) = (short)uVar12;
            *(short *)(local_308 + 0x3a) = sVar3;
            *(undefined1 *)(local_308 + 0x34) = uVar15;
            FUN_147fac8ea(local_288);
            uVar34 = 0;
            goto LAB_1438cf2c1;
          }
        }
        break;
      }
      uVar18 = uVar18 + 0x30;
    } while ((longlong)iVar35 * 0x30 != uVar18);
  }
  uVar34 = CONCAT71((int7)(uVar34 >> 8),*(short *)((longlong)plVar14 + 0x9c) != -1);
LAB_1438cf2c1:
  if (local_a0 != (ushort *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(plVar14 + 0x1e) = local_2f9;
  if ((local_90 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar34 & 0xffffffff;
}



// FUNCTION 1438cf482 FUN_1438cf482 body=611 status=ok
// SIG undefined FUN_1438cf482(void)

undefined4
FUN_1438cf482(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_618 [32];
  undefined8 local_5f8;
  undefined1 local_5f0;
  undefined4 local_5e4;
  longlong *local_5e0;
  undefined1 local_5d8 [384];
  ulonglong local_458;
  undefined1 local_450 [1024];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_618;
  if (*(byte *)(param_1 + 0xa1) < (byte)param_4) {
    if (2 < (ushort)((short)param_3 + 4U)) {
      if ((short)param_3 != -1) {
        local_458 = 0x800000000;
        local_50 = 0x800000000;
        local_5f0 = param_6;
        local_5f8 = param_5;
        local_5e4 = FUN_1438cae0e(param_1,param_2,param_3);
        if ((char)local_5e4 != '\0') {
          plVar1 = (longlong *)(param_1 + 0x78);
          FUN_147fae1ee(param_1,param_2,param_3,param_4);
          uVar10 = local_458;
          *(int *)(param_1 + 0x80) = (int)local_458;
          if (*(int *)(param_1 + 0x84) == 0 && (int)local_458 == 0) {
            *(undefined4 *)(param_1 + 0x84) = 0;
          }
          else {
            FUN_147fa6b62(plVar1,local_458 & 0xffffffff);
            FUN_147fa6bd5(*plVar1,local_5d8,uVar10 & 0xffffffff);
          }
          uVar10 = local_50;
          iVar4 = (int)local_50;
          plVar7 = (longlong *)(param_1 + 0x88);
          FUN_147fa6f11(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
          *(int *)(param_1 + 0x90) = iVar4;
          local_5e0 = plVar7;
          if (*(int *)(param_1 + 0x94) == 0 && iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x94) = 0;
          }
          else {
            FUN_147faa3b0(plVar7,uVar10 & 0xffffffff);
            FUN_147faa412(*plVar7,local_450,uVar10 & 0xffffffff);
          }
          iVar4 = *(int *)(param_1 + 0x80);
          if (0 < iVar4) {
            lVar8 = 0;
            lVar9 = 0;
            plVar7 = local_5e0;
            do {
              bVar2 = *(byte *)(*plVar1 + 0x1a + lVar9 * 0x30);
              if (bVar2 != 0) {
                plVar5 = (longlong *)(*plVar1 + lVar9 * 0x30);
                plVar11 = (longlong *)(*plVar7 + lVar8);
                lVar6 = 0x54;
                uVar10 = 0;
                do {
                  if (((*plVar11 != 0) &&
                      ((*(byte *)(*(longlong *)(*plVar5 + 0x40) + lVar6) & 2) != 0)) &&
                     (*(longlong *)(param_1 + 0x28) != 0)) {
                    FUN_147fab4de(*(longlong *)(param_1 + 0x28),plVar11);
                    bVar2 = *(byte *)((longlong)plVar5 + 0x1a);
                    plVar7 = local_5e0;
                  }
                  uVar10 = uVar10 + 1;
                  lVar6 = lVar6 + 0x58;
                  plVar11 = plVar11 + 2;
                } while (uVar10 < bVar2);
                iVar4 = *(int *)(param_1 + 0x80);
              }
              lVar9 = lVar9 + 1;
              lVar8 = lVar8 + 0x80;
            } while (lVar9 < iVar4);
          }
        }
        FUN_147fa6f11(local_450,local_50 & 0xffffffff);
        uVar3 = local_5e4;
        goto LAB_1438cf4b2;
      }
      param_3 = 0xffff;
    }
    FUN_147fae1ee(param_1,param_2,param_3,param_4);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
LAB_1438cf4b2:
  if ((local_48 ^ (ulonglong)auStack_618) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1438cf6e6 FUN_1438cf6e6 body=162 status=ok
// SIG undefined FUN_1438cf6e6(void)

longlong * FUN_1438cf6e6(longlong *param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = (longlong)*(int *)((undefined8 *)*param_1 + 1);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)*param_1;
    lVar4 = lVar4 * 0x28;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *param_2;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      if ((((*plVar5 == lVar1) && ((short)plVar5[1] == (short)param_2[1])) &&
          (*(char *)((longlong)plVar5 + 10) == *param_3)) &&
         ((*(short *)((longlong)plVar5 + 0xc) == *(short *)(param_3 + 2) &&
          (*(short *)((longlong)plVar5 + 0xe) == *(short *)(param_3 + 4))))) goto LAB_1438cf771;
      plVar5 = plVar5 + 5;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_1438cf771:
  plVar3 = plVar5 + 3;
  if (plVar5 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 1438cf788 FUN_1438cf788 body=817 status=ok
// SIG undefined FUN_1438cf788(void)

void FUN_1438cf788(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  ushort param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined2 uVar12;
  uint uVar13;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined1 local_db;
  undefined2 local_da;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c0 = param_2;
  local_b0 = param_4;
  FUN_147fab5e0(local_88,param_1,param_2,param_3);
  lVar5 = *param_3;
  local_b8 = param_3;
  if (*(ushort *)(lVar5 + 0x17a) != 0) {
    uVar13 = (uint)*(ushort *)(lVar5 + 0x178) + (uint)*(ushort *)(lVar5 + 0x17a);
    local_c8 = (undefined4 *)(param_1 + 0xf2);
    local_d0 = (undefined4 *)(param_1 + 0xf8);
    local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,(uint)param_5);
    iVar9 = uVar13 * -0x10;
    do {
      uVar13 = uVar13 - 1;
      lVar6 = *(longlong *)(lVar5 + 0x60);
      lVar11 = (longlong)*(int *)(lVar6 + 8 + (longlong)(*(int *)(lVar5 + 0x68) + iVar9));
      local_a0 = *(undefined4 *)(lVar6 + 0x14 + lVar11);
      local_9c = *(undefined2 *)(lVar6 + 0x18 + lVar11);
      local_e8 = &local_a0;
      FUN_147fac964(param_1,&local_98,local_c0,local_b8);
      uVar1 = *(undefined1 *)(param_1 + 0xf2);
      uVar10 = *(undefined1 *)(param_1 + 0xf3);
      uVar12 = *(undefined2 *)(param_1 + 0xf4);
      uVar2 = *(undefined2 *)(param_1 + 0xf6);
      uVar7 = *(undefined8 *)(param_1 + 0xf8);
      uVar8 = *(undefined8 *)(param_1 + 0x100);
      uVar3 = *(undefined4 *)(lVar6 + 0x14 + lVar11);
      *(undefined2 *)(local_c8 + 1) = *(undefined2 *)(lVar6 + 0x18 + lVar11);
      *local_c8 = uVar3;
      *local_d0 = local_98;
      local_d0[1] = uStack_94;
      local_d0[2] = uStack_90;
      local_d0[3] = uStack_8c;
      if (((*(byte *)(lVar6 + 0x20 + lVar11) & 0x40) != 0) && (uVar13 <= (uint)local_d8)) {
        local_db = uVar10;
        local_da = uVar12;
        (**(code **)(*(longlong *)(lVar6 + lVar11) + 0x38))
                  ((longlong *)(lVar6 + lVar11),param_1,local_b0);
        uVar10 = local_db;
        uVar12 = local_da;
      }
      *(undefined1 *)(param_1 + 0xf2) = uVar1;
      *(undefined1 *)(param_1 + 0xf3) = uVar10;
      *(undefined2 *)(param_1 + 0xf4) = uVar12;
      *(undefined2 *)(param_1 + 0xf6) = uVar2;
      *(undefined8 *)(param_1 + 0xf8) = uVar7;
      *(undefined8 *)(param_1 + 0x100) = uVar8;
      iVar9 = iVar9 + 0x10;
    } while (*(ushort *)(lVar5 + 0x178) < uVar13);
  }
  if (*(ushort *)(lVar5 + 0x176) != 0) {
    uVar13 = (uint)*(ushort *)(lVar5 + 0x174) + (uint)*(ushort *)(lVar5 + 0x176);
    local_d0 = (undefined4 *)(param_1 + 0xf2);
    local_d8 = (undefined4 *)(param_1 + 0xf8);
    iVar9 = uVar13 * -0x10;
    do {
      uVar13 = uVar13 - 1;
      lVar6 = *(longlong *)(lVar5 + 0x60);
      lVar11 = (longlong)*(int *)(lVar6 + 8 + (longlong)(*(int *)(lVar5 + 0x68) + iVar9));
      local_c8 = (undefined4 *)(lVar6 + lVar11);
      local_a8 = *(undefined4 *)(lVar6 + 0x14 + lVar11);
      local_a4 = *(undefined2 *)(lVar6 + 0x18 + lVar11);
      local_e8 = &local_a8;
      FUN_147fac964(param_1,&local_98,local_c0,local_b8);
      uVar12 = *(undefined2 *)(param_1 + 0xf2);
      uVar3 = *(undefined4 *)(param_1 + 0xf4);
      uVar7 = *(undefined8 *)(param_1 + 0xf8);
      uVar8 = *(undefined8 *)(param_1 + 0x100);
      uVar4 = *(undefined4 *)(lVar6 + 0x14 + lVar11);
      *(undefined2 *)(local_d0 + 1) = *(undefined2 *)(lVar6 + 0x18 + lVar11);
      *local_d0 = uVar4;
      *local_d8 = local_98;
      local_d8[1] = uStack_94;
      local_d8[2] = uStack_90;
      local_d8[3] = uStack_8c;
      (**(code **)(*(longlong *)(lVar6 + lVar11) + 0x30))(local_c8,param_1);
      *(undefined2 *)(param_1 + 0xf2) = uVar12;
      *(undefined4 *)(param_1 + 0xf4) = uVar3;
      *(undefined8 *)(param_1 + 0xf8) = uVar7;
      *(undefined8 *)(param_1 + 0x100) = uVar8;
      iVar9 = iVar9 + 0x10;
    } while (*(ushort *)(lVar5 + 0x174) < uVar13);
  }
  *(undefined8 *)(local_88[0] + 200) = local_70;
  *(undefined8 *)(local_88[0] + 0xc0) = local_68;
  *(undefined8 *)(local_88[0] + 0xd0) = local_78;
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438cfaba FUN_1438cfaba body=692 status=ok
// SIG undefined FUN_1438cfaba(void)

void FUN_1438cfaba(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_f8 [44];
  undefined2 local_cc;
  undefined2 local_ca;
  undefined4 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined4 local_62;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_66 = 0xffff;
  local_62 = 0x1ffff;
  local_58 = 0;
  local_50 = 0xffff;
  local_64 = DAT_14cb28a18;
  local_68 = 3;
  lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x50);
  if (0 < lVar8) {
    local_c8 = (undefined4 *)(param_1 + 0xf2);
    uVar9 = lVar8 + 1;
    plVar7 = (longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x48) + lVar8 * 0x28 + -0x10);
    do {
      lVar8 = *param_2;
      if ((lVar8 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar8);
      }
      if ((((plVar7[-3] == lVar8) && ((short)plVar7[-2] == (short)param_2[1])) &&
          ((short)plVar7[-1] != -1)) && ((plVar7[1] != 0 && (*plVar7 != 0)))) {
        plVar5 = (longlong *)FUN_147fae1a2(plVar7);
        if (plVar5 == (longlong *)0x0) {
          lVar8 = plVar7[1];
          plVar5 = plVar7;
LAB_1438cfbec:
          lVar6 = *plVar5;
        }
        else {
          lVar8 = *plVar5;
          if (lVar8 != 0) {
            plVar5 = (longlong *)(lVar8 + 0x10);
            goto LAB_1438cfbec;
          }
          lVar6 = 0;
          lVar8 = 0;
        }
        FUN_147fab5e0(local_b0,param_1,0,param_2);
        uVar1 = *(undefined1 *)(param_1 + 0xf2);
        uVar2 = *(undefined1 *)(param_1 + 0xf3);
        local_ca = *(undefined2 *)(param_1 + 0xf4);
        local_cc = *(undefined2 *)(param_1 + 0xf6);
        local_b8 = *(undefined8 *)(param_1 + 0xf8);
        local_c0 = *(undefined8 *)(param_1 + 0x100);
        uVar3 = *(undefined4 *)((longlong)plVar7 + -0xe);
        *(undefined2 *)(local_c8 + 1) = *(undefined2 *)((longlong)plVar7 + -10);
        *local_c8 = uVar3;
        *(longlong *)(param_1 + 0xf8) = lVar6;
        *(longlong *)(param_1 + 0x100) = lVar8;
        lVar8 = *(longlong *)(*param_2 + 0x60);
        lVar6 = (longlong)
                (int)((uint)*(ushort *)(plVar7 + -1) * -0x10 + *(int *)(*param_2 + 0x68) + -0x10);
        lVar10 = *(int *)(lVar8 + 8 + lVar6) + lVar8;
        uVar4 = *(undefined8 *)(lVar8 + lVar6);
        plVar5 = (longlong *)FUN_147fb3438(uVar4,lVar10);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)FUN_147fb348b(uVar4,lVar10);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_1);
          }
        }
        else {
          (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
        }
        *(undefined1 *)(param_1 + 0xf2) = uVar1;
        *(undefined1 *)(param_1 + 0xf3) = uVar2;
        *(undefined2 *)(param_1 + 0xf4) = local_ca;
        *(undefined2 *)(param_1 + 0xf6) = local_cc;
        *(undefined8 *)(param_1 + 0xf8) = local_b8;
        *(undefined8 *)(param_1 + 0x100) = local_c0;
        *(undefined8 *)(local_b0[0] + 200) = local_98;
        *(undefined8 *)(local_b0[0] + 0xc0) = local_90;
        *(undefined8 *)(local_b0[0] + 0xd0) = local_a0;
      }
      uVar9 = uVar9 - 1;
      plVar7 = plVar7 + -5;
    } while (1 < uVar9);
  }
  FUN_147fa6ed6(&local_88);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438cfd70 FUN_1438cfd70 body=850 status=ok
// SIG undefined FUN_1438cfd70(void)

ulonglong FUN_1438cfd70(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                       int param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  int iVar17;
  byte bVar18;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined2 local_d2;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 *local_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte local_58 [8];
  char local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c0 = param_3;
  local_b8 = param_2;
  local_a0 = param_4;
  if (param_5 == 0) {
    uVar9 = CONCAT71((int7)(local_48 >> 8),1);
  }
  else {
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = 0;
    local_58[4] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_a8 = (undefined4 *)(param_1 + 0xf2);
    local_b0 = (undefined4 *)(param_1 + 0xf8);
    uVar12 = 0;
    iVar17 = 0;
    do {
      lVar6 = *(longlong *)(*local_c0 + 0x60);
      lVar16 = (longlong)
               *(int *)(lVar6 + 8 +
                       (longlong)
                       (((int)local_a0 + iVar17) * -0x10 + *(int *)(*local_c0 + 0x68) + -0x10));
      plVar1 = (longlong *)(lVar6 + lVar16);
      local_70 = *(undefined4 *)(lVar6 + 0x14 + lVar16);
      local_6c = *(undefined2 *)(lVar6 + 0x18 + lVar16);
      local_e8 = &local_70;
      FUN_147fac964(param_1,&local_68,local_b8);
      uVar2 = *(undefined1 *)(param_1 + 0xf2);
      uVar3 = *(undefined1 *)(param_1 + 0xf3);
      local_d2 = *(undefined2 *)(param_1 + 0xf4);
      uVar4 = *(undefined2 *)(param_1 + 0xf6);
      uVar15 = *(undefined8 *)(param_1 + 0xf8);
      uVar14 = *(undefined8 *)(param_1 + 0x100);
      uVar5 = *(undefined4 *)(lVar6 + 0x14 + lVar16);
      *(undefined2 *)(local_a8 + 1) = *(undefined2 *)(lVar6 + 0x18 + lVar16);
      *local_a8 = uVar5;
      *local_b0 = local_68;
      local_b0[1] = uStack_64;
      local_b0[2] = uStack_60;
      local_b0[3] = uStack_5c;
      cVar7 = *(char *)(lVar6 + 0x22 + lVar16);
      if (cVar7 == '\0') {
        local_d0 = uVar15;
        local_c8 = uVar14;
        if ((short)plVar1[2] != -1) {
          local_88 = local_68;
          uStack_84 = uStack_64;
          uStack_80 = uStack_60;
          uStack_7c = uStack_5c;
          local_e8 = (undefined4 *)CONCAT62(local_e8._2_6_,(short)plVar1[2]);
          cVar7 = FUN_147fad612(param_1,local_b8,local_c0,&local_88);
          if (cVar7 == '\0') {
            *(undefined1 *)(param_1 + 0xf2) = uVar2;
            *(undefined1 *)(param_1 + 0xf3) = uVar3;
            *(undefined2 *)(param_1 + 0xf4) = local_d2;
            *(undefined2 *)(param_1 + 0xf6) = uVar4;
            *(undefined8 *)(param_1 + 0xf8) = local_d0;
            *(undefined8 *)(param_1 + 0x100) = local_c8;
            uVar9 = 0;
            goto LAB_1438d0056;
          }
        }
        bVar18 = (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
        uVar14 = local_c8;
        uVar15 = local_d0;
        if ((short)plVar1[2] != -1) {
          local_98 = local_68;
          uStack_94 = uStack_64;
          uStack_90 = uStack_60;
          uStack_8c = uStack_5c;
          FUN_147fb95a6(*local_c0 + 0xb8,(short)plVar1[2],&local_98);
          uVar14 = local_c8;
          uVar15 = local_d0;
        }
      }
      else {
        bVar18 = cVar7 == '\x01';
      }
      cVar7 = *(char *)((longlong)plVar1 + 0x21);
      iVar10 = 0;
      if ('\0' < cVar7) {
        iVar10 = (int)cVar7;
      }
      cVar11 = (char)iVar17;
      if (iVar17 != 0) {
        cVar11 = (char)(int)plVar1[4];
      }
      iVar8 = -(int)cVar7;
      local_50[uVar12] = cVar11;
      local_58[uVar12 + iVar10 + 1] = bVar18;
      if (iVar8 < 1) {
        iVar8 = 0;
      }
      iVar8 = iVar8 + 1;
      uVar13 = uVar12 + iVar10;
      do {
        uVar12 = uVar13;
        uVar13 = uVar12 + 1;
        cVar7 = local_50[uVar12];
        if (cVar7 == '\x02') {
          local_58[uVar12] = local_58[uVar12] | local_58[uVar13];
        }
        else if (cVar7 == '\x01') {
          local_58[uVar12] = local_58[uVar12] & local_58[uVar13];
        }
        else if (cVar7 == '\0') {
          local_58[uVar12] = local_58[uVar13];
        }
        local_50[uVar12] = '\0';
        iVar8 = iVar8 + -1;
        uVar13 = uVar12 - 1;
      } while (iVar8 != 0);
      *(undefined1 *)(param_1 + 0xf2) = uVar2;
      *(undefined1 *)(param_1 + 0xf3) = uVar3;
      *(undefined2 *)(param_1 + 0xf4) = local_d2;
      *(undefined2 *)(param_1 + 0xf6) = uVar4;
      *(undefined8 *)(param_1 + 0xf8) = uVar15;
      *(undefined8 *)(param_1 + 0x100) = uVar14;
      iVar17 = iVar17 + 1;
    } while (iVar17 != param_5);
    uVar9 = (ulonglong)CONCAT11((char)((ushort)local_d2 >> 8),local_58[0]);
  }
LAB_1438d0056:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 1438d00c4 FUN_1438d00c4 body=968 status=ok
// SIG undefined FUN_1438d00c4(void)

void FUN_1438d00c4(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  int param_5,float param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined2 local_122;
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  char local_b0 [8];
  float local_a8 [6];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_120 = param_3;
  local_118 = param_2;
  local_f0 = param_4;
  if (param_5 == 0) {
    fVar16 = 0.0;
  }
  else {
    local_b0[0] = '\0';
    local_b0[1] = '\0';
    local_b0[2] = '\0';
    local_b0[3] = '\0';
    local_b0[4] = 0;
    local_a8[4] = 0.0;
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    local_a8[3] = 0.0;
    local_f8 = (undefined4 *)(param_1 + 0xf2);
    local_100 = (undefined4 *)(param_1 + 0xf8);
    uVar12 = 0;
    iVar14 = 0;
    do {
      lVar6 = *(longlong *)(*local_120 + 0x60);
      lVar15 = (longlong)
               *(int *)(lVar6 + 8 +
                       (longlong)
                       (((int)local_f0 + iVar14) * -0x10 + *(int *)(*local_120 + 0x68) + -0x10));
      local_c8 = *(undefined4 *)(lVar6 + 0x14 + lVar15);
      local_c4 = *(undefined2 *)(lVar6 + 0x18 + lVar15);
      local_138 = &local_c8;
      FUN_147fac964(param_1,&local_c0,local_118);
      uVar1 = *(undefined1 *)(param_1 + 0xf2);
      uVar2 = *(undefined1 *)(param_1 + 0xf3);
      uVar3 = *(undefined2 *)(param_1 + 0xf4);
      local_122 = *(undefined2 *)(param_1 + 0xf6);
      local_110 = *(undefined8 *)(param_1 + 0xf8);
      local_108 = *(undefined8 *)(param_1 + 0x100);
      uVar5 = *(undefined4 *)(lVar6 + 0x14 + lVar15);
      *(undefined2 *)(local_f8 + 1) = *(undefined2 *)(lVar6 + 0x18 + lVar15);
      *local_f8 = uVar5;
      *local_100 = local_c0;
      local_100[1] = uStack_bc;
      local_100[2] = uStack_b8;
      local_100[3] = uStack_b4;
      sVar4 = *(short *)(lVar6 + 0x10 + lVar15);
      if (sVar4 != -1) {
        local_d8 = local_c0;
        uStack_d4 = uStack_bc;
        uStack_d0 = uStack_b8;
        uStack_cc = uStack_b4;
        local_138 = (undefined4 *)CONCAT62(local_138._2_6_,sVar4);
        cVar7 = FUN_147fad612(param_1,local_118,local_120,&local_d8);
        if (cVar7 == '\0') {
          *(undefined1 *)(param_1 + 0xf2) = uVar1;
          *(undefined1 *)(param_1 + 0xf3) = uVar2;
          *(undefined2 *)(param_1 + 0xf4) = uVar3;
          *(undefined2 *)(param_1 + 0xf6) = local_122;
          *(undefined8 *)(param_1 + 0xf8) = local_110;
          *(undefined8 *)(param_1 + 0x100) = local_108;
          fVar16 = 0.0;
          goto LAB_1438d03f3;
        }
      }
      plVar11 = (longlong *)(lVar6 + lVar15);
      fVar16 = (float)(**(code **)(*plVar11 + 0x28))(plVar11,param_1);
      if (1.0 <= fVar16) {
        fVar16 = 1.0;
      }
      if ((short)plVar11[2] != -1) {
        local_e8 = local_c0;
        uStack_e4 = uStack_bc;
        uStack_e0 = uStack_b8;
        uStack_dc = uStack_b4;
        FUN_147fb95a6(*local_120 + 0xb8,(short)plVar11[2],&local_e8);
      }
      cVar7 = *(char *)((longlong)plVar11 + 0x21);
      iVar9 = 0;
      if ('\0' < cVar7) {
        iVar9 = (int)cVar7;
      }
      cVar10 = (char)iVar14;
      if (iVar14 != 0) {
        cVar10 = (char)(int)plVar11[4];
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      iVar8 = -(int)cVar7;
      local_b0[uVar12] = cVar10;
      local_a8[uVar12 + iVar9 + 1] = fVar16;
      if (iVar8 < 1) {
        iVar8 = 0;
      }
      iVar8 = iVar8 + 1;
      uVar13 = uVar12 + iVar9;
      do {
        uVar12 = uVar13;
        uVar13 = uVar12 + 1;
        cVar7 = local_b0[uVar12];
        if (cVar7 == '\x02') {
          fVar16 = local_a8[uVar12];
          if (local_a8[uVar12] <= local_a8[uVar13]) {
            fVar16 = local_a8[uVar13];
          }
LAB_1438d031a:
          local_a8[uVar12] = fVar16;
        }
        else {
          if (cVar7 == '\x01') {
            fVar16 = local_a8[uVar12];
            if (local_a8[uVar13] <= local_a8[uVar12]) {
              fVar16 = local_a8[uVar13];
            }
            goto LAB_1438d031a;
          }
          if (cVar7 == '\0') {
            fVar16 = local_a8[uVar13];
            goto LAB_1438d031a;
          }
        }
        local_b0[uVar12] = '\0';
        iVar8 = iVar8 + -1;
        uVar13 = uVar12 - 1;
      } while (iVar8 != 0);
      *(undefined1 *)(param_1 + 0xf2) = uVar1;
      *(undefined1 *)(param_1 + 0xf3) = uVar2;
      *(undefined2 *)(param_1 + 0xf4) = uVar3;
      *(undefined2 *)(param_1 + 0xf6) = local_122;
      *(undefined8 *)(param_1 + 0xf8) = local_110;
      *(undefined8 *)(param_1 + 0x100) = local_108;
      iVar14 = iVar14 + 1;
    } while (iVar14 != param_5);
    fVar16 = local_a8[0];
LAB_1438d03f3:
    fVar16 = fVar16 * param_6;
  }
  if ((local_90 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar16);
  }
  return;
}



// FUNCTION 1438d048e FUN_1438d048e body=8872 status=ok
// SIG undefined FUN_1438d048e(void)

ulonglong FUN_1438d048e(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                       ushort *param_5,ushort *param_6,longlong *param_7)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort **ppuVar4;
  undefined2 uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  undefined8 uVar13;
  ushort uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  ushort *puVar18;
  ushort uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  int iVar26;
  ushort *puVar27;
  ulonglong uVar28;
  undefined7 uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  longlong *plVar32;
  bool bVar33;
  bool bVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auStack_d68 [32];
  ushort **local_d48;
  ushort *local_d40;
  longlong *local_d38;
  undefined2 local_d2a;
  undefined8 local_d28;
  undefined2 local_d1c;
  byte local_d19;
  undefined8 *local_d18;
  longlong local_d10;
  undefined4 local_d04;
  longlong local_d00;
  undefined4 *local_cf8;
  undefined1 local_cea;
  undefined1 local_ce9;
  ulonglong local_ce8;
  ushort *local_ce0;
  longlong *local_cd8;
  undefined2 local_cca;
  char *local_cc8;
  longlong local_cc0;
  ushort *local_cb8;
  int local_cac;
  undefined8 local_ca8;
  ushort *local_ca0;
  longlong *local_c98;
  undefined4 *local_c90;
  undefined8 local_c88;
  ushort *local_c80;
  longlong *local_c78;
  undefined8 *local_c70;
  ushort *local_c68;
  undefined4 local_c60;
  ushort *local_c58;
  undefined4 local_c50;
  ushort *local_c48;
  undefined4 local_c40;
  ushort *local_c38;
  undefined4 local_c30;
  ushort *local_c28;
  undefined4 local_c20;
  ushort *local_c18;
  undefined4 local_c10;
  ushort *local_c08;
  int local_c00;
  longlong local_bf8;
  longlong lStack_bf0;
  undefined4 local_be8;
  undefined2 local_be4;
  undefined8 local_be0;
  longlong local_bd8;
  undefined4 local_bd0;
  undefined2 local_bcc;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined4 local_bb8;
  undefined2 local_bb4;
  longlong local_bb0 [2];
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  longlong local_b88;
  longlong lStack_b80;
  undefined4 local_b78;
  undefined2 local_b74;
  undefined8 local_b70;
  longlong local_b68;
  longlong local_b60;
  longlong lStack_b58;
  undefined4 local_b50;
  undefined2 local_b4c;
  longlong local_b48;
  longlong lStack_b40;
  undefined4 local_b30;
  undefined2 local_b2c;
  undefined8 local_b28;
  longlong local_b20;
  longlong local_b18;
  longlong lStack_b10;
  undefined4 local_b08;
  undefined2 local_b04;
  ushort local_b00;
  undefined6 uStack_afe;
  undefined8 local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  longlong lStack_ad0;
  undefined8 *local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 *local_a98;
  undefined8 local_a90;
  undefined8 local_958;
  undefined1 local_950 [1024];
  ulonglong local_550;
  undefined8 local_540;
  ushort local_538;
  undefined4 uStack_536;
  undefined2 uStack_532;
  undefined2 uStack_530;
  undefined4 uStack_52e;
  undefined2 uStack_52a;
  undefined2 uStack_528;
  undefined1 uStack_526;
  undefined1 uStack_525;
  undefined4 uStack_524;
  undefined2 uStack_520;
  undefined2 uStack_51e;
  undefined2 uStack_51c;
  undefined2 uStack_51a;
  undefined4 local_518;
  undefined2 uStack_514;
  undefined1 uStack_512;
  byte bStack_511;
  ushort *local_340;
  undefined8 local_338;
  ushort *local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  ushort *local_300;
  ushort local_2f8;
  undefined4 local_2f6;
  undefined4 uStack_2f2;
  undefined4 uStack_2ee;
  undefined4 uStack_2ea;
  undefined1 local_2e6;
  undefined2 local_2e4;
  undefined2 local_2e2;
  undefined2 local_2e0;
  undefined4 local_2de;
  undefined2 local_2da;
  undefined4 local_2d8;
  undefined2 local_2d4;
  undefined1 local_2d2;
  undefined1 local_2d1;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 extraout_XMM0_Qb;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_d68;
  uVar19 = **(ushort **)param_5;
  if ((ulonglong)uVar19 == 0xffff) {
    puVar18 = (ushort *)0x0;
    goto LAB_1438d050c;
  }
  local_cc0 = *(longlong *)(param_1 + 0x20);
  FUN_147fab5e0(local_bb0,param_1,param_2,param_3);
  uVar25 = *(undefined2 *)(param_1 + 0xd8);
  *(ushort *)(param_1 + 0xd8) = uVar19;
  auVar36._0_8_ = *(undefined8 *)(param_1 + 0xe8);
  *(ushort **)(param_1 + 0xe8) =
       param_6 + ((longlong)(*(int *)(param_6 + 0x2c4) + -1) * 0x10 + 0x31) * 4;
  local_cb8 = (ushort *)*param_3;
  lVar9 = (ulonglong)uVar19 * 0x58;
  if (((*(byte *)(*(longlong *)(local_cb8 + 0x20) + 0x54 + lVar9) & 1) != 0) &&
     (lVar9 = *(longlong *)(local_cb8 + 0x20) + lVar9, *(char *)(lVar9 + 0x4b) != '\0')) {
    local_ca0 = *(ushort **)(lVar9 + 0x20);
    local_d28 = auVar36._0_8_;
    local_d00 = lVar9;
    if ((*(char *)(lVar9 + 0x4a) == '\x03') &&
       ((plVar32 = *(longlong **)(param_1 + 0x38), plVar32 != (longlong *)0x0 &&
        ((longlong)(int)plVar32[1] != 0)))) {
      puVar30 = (undefined8 *)(*plVar32 + 8);
      lVar17 = (longlong)(int)plVar32[1] * 0x30;
      do {
        if (puVar30[-1] == *(longlong *)(lVar9 + 0x18)) {
          local_ca0 = (ushort *)*puVar30;
          cVar6 = FUN_147fbaace(puVar30);
          if (cVar6 != '\0') {
            FUN_147fba96c(puVar30);
          }
          plVar32 = puVar30 + 1;
          goto LAB_1438d0668;
        }
        puVar30 = puVar30 + 6;
        lVar17 = lVar17 + -0x30;
      } while (lVar17 != 0);
    }
    plVar32 = (longlong *)0x0;
LAB_1438d0668:
    local_cc8 = (char *)(local_d00 + 0x3a);
    local_d10 = param_4;
    if (*(char *)(local_d00 + 0x3a) != '\0') {
      local_bb8 = *(undefined4 *)local_cc8;
      local_d48 = (ushort **)&local_bb8;
      local_bb4 = *(undefined2 *)(local_d00 + 0x3e);
      FUN_147facf94(param_1,&local_ad8,param_2,param_3);
      if ((lStack_ad0 == 0) || (local_ad8 == 0)) {
        if (plVar32 == (longlong *)0x0) {
          lVar9 = **(longlong **)(*param_3 + 0x70);
          lVar17 = (longlong)
                   (int)((uint)*(ushort *)(local_d00 + 0x38) * -0x10 +
                         (int)(*(longlong **)(*param_3 + 0x70))[1] + -0x10);
          local_bd8 = *(int *)(lVar9 + 8 + lVar17) + lVar9;
          local_be0 = *(undefined8 *)(lVar9 + lVar17);
          local_d40 = (ushort *)&local_be0;
          local_be8 = *(undefined4 *)local_cc8;
          local_d48 = (ushort **)&local_be8;
          local_be4 = *(undefined2 *)(local_cc8 + 4);
          FUN_147fad1e0(param_1,&local_2d0,param_3,0xffff);
          local_ad8 = *local_2c8;
          lStack_ad0 = local_2c8[1];
          param_4 = local_d10;
        }
        else {
          local_bc8 = FUN_1464543dc();
          local_d40 = (ushort *)&local_bc8;
          local_bc0 = 0;
          local_bd0 = *(undefined4 *)local_cc8;
          local_d48 = (ushort **)&local_bd0;
          local_bcc = *(undefined2 *)(local_cc8 + 4);
          local_cd8 = param_3;
          FUN_147fad1e0(param_1,&local_2d0,param_3,0xffff);
          if (local_2c8 != plVar32) {
            FUN_1401fa0f0(local_2c8,*plVar32,plVar32[1]);
          }
          local_ad8 = *local_2c8;
          lStack_ad0 = local_2c8[1];
          param_4 = local_d10;
          param_3 = local_cd8;
        }
      }
      if ((((lStack_ad0 != 0) && (local_ad8 != 0)) && (*local_cc8 != '\0')) &&
         (*(short *)(local_d00 + 0x40) != -1)) {
        local_bf8 = local_ad8;
        lStack_bf0 = lStack_ad0;
        local_d48 = (ushort **)CONCAT62(local_d48._2_6_,*(short *)(local_d00 + 0x40));
        FUN_147fad612(param_1,param_2,param_3);
      }
    }
    local_cac = *(int *)(param_5 + 4);
    local_d19 = (*(byte *)(local_d00 + 0x4c) & 4) >> 2 | local_cac < 2;
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0x4000000000;
    if (*(short *)(local_d00 + 0x42) == -1) {
      local_c8 = 0x4000000001;
      local_2d0 = 0;
      local_c8._0_4_ = 1;
      auVar36._0_8_ = local_d28;
    }
    else {
      if ((param_7 == (longlong *)0x0) || (*param_7 == 0 || 1 < local_cac)) {
        puVar30 = *(undefined8 **)(param_1 + 0x28);
        if ((puVar30 != (undefined8 *)0x0) && ((longlong)*(int *)(puVar30 + 1) != 0)) {
          puVar10 = (undefined8 *)*puVar30;
          lVar9 = (longlong)*(int *)(puVar30 + 1) << 4;
          do {
            cVar6 = FUN_147fbacde(local_d00,*puVar10);
            uVar21 = local_c8;
            if (cVar6 != '\0') {
              lVar17 = (longlong)(int)local_c8;
              uVar8 = (int)local_c8 + 1;
              local_c8 = CONCAT44(local_c8._4_4_,uVar8);
              if (local_c8._4_4_ < uVar8) {
                FUN_147fb5b48(&local_2d0,uVar21 & 0xffffffff);
              }
              puVar30 = local_d0;
              if (local_d0 == (undefined8 *)0x0) {
                puVar30 = &local_2d0;
              }
              puVar30[lVar17] = puVar10;
            }
            puVar10 = puVar10 + 2;
            lVar9 = lVar9 + -0x10;
          } while (lVar9 != 0);
        }
        param_4 = local_d10;
        auVar36._0_8_ = local_d28;
        if (local_d19 == 0) {
          if ((int)local_c8 != 0) goto LAB_1438d080d;
          local_c8 = CONCAT44(local_c8._4_4_,1);
          if (local_c8._4_4_ == 0) {
            FUN_147fb5b48(&local_2d0,0);
          }
          puVar30 = local_d0;
          if (local_d0 == (undefined8 *)0x0) {
            puVar30 = &local_2d0;
          }
          *puVar30 = 0;
        }
      }
      else {
        cVar6 = FUN_147fbacde();
        uVar21 = local_c8;
        auVar36._0_8_ = local_d28;
        if (cVar6 != '\0') {
          lVar9 = (longlong)(int)local_c8;
          uVar8 = (int)local_c8 + 1;
          local_c8 = CONCAT44(local_c8._4_4_,uVar8);
          if (local_c8._4_4_ < uVar8) {
            FUN_147fb5b48(&local_2d0,uVar21 & 0xffffffff);
          }
          puVar30 = local_d0;
          if (local_d0 == (undefined8 *)0x0) {
            puVar30 = &local_2d0;
          }
          puVar30[lVar9] = param_7;
          auVar36._0_8_ = local_d28;
        }
      }
      if ((int)local_c8 == 0) goto LAB_1438d24f5;
    }
LAB_1438d080d:
    bVar7 = *(byte *)((longlong)param_3 + 0x1a);
    if ((ulonglong)bVar7 < 8) {
      *(byte *)((longlong)param_3 + 0x1a) = bVar7 + 1;
      *(ushort *)((longlong)param_3 + (ulonglong)bVar7 * 2 + 10) = uVar19;
      local_ce9 = *(undefined1 *)((longlong)param_3 + 0x2e);
      if ((param_4 != 0) && ((short)param_3[4] != -1)) {
        bVar7 = *(byte *)((longlong)param_3 + 0x1a);
        puVar18 = &DAT_14acfe058;
        if ((bVar7 != 0) && (bVar7 <= *(byte *)(param_4 + 0x1a))) {
          puVar18 = (ushort *)(param_4 + 10 + (ulonglong)(bVar7 - 1) * 2);
        }
        if (*puVar18 == uVar19) {
          *(byte *)((longlong)param_3 + 0x2e) = bVar7;
        }
      }
      local_c80 = param_6 + 0xc4;
      puVar30 = local_d0;
      if (local_d0 == (undefined8 *)0x0) {
        puVar30 = &local_2d0;
      }
      local_c70 = puVar30 + (int)local_c8;
      local_c78 = param_3 + 5;
      local_c90 = (undefined4 *)(param_1 + 0xf2);
      local_c98 = (longlong *)(param_1 + 0xf8);
      local_ce8 = 0;
LAB_1438d08fc:
      puVar27 = (ushort *)*puVar30;
      local_d18 = puVar30;
      if (puVar27 != (ushort *)0x0) {
        FUN_147fa66b6((ulonglong)*(byte *)(local_d00 + 0x49) * 0x10 + *(longlong *)(param_1 + 0xe8),
                      puVar27);
      }
      uVar29 = (undefined7)((ulonglong)param_5 >> 8);
      puVar18 = param_5;
      if (local_d19 == 0) {
LAB_1438d0a3d:
        local_c00 = *(int *)(param_5 + 4);
        iVar26 = 1;
        if (local_c00 < 1) {
          iVar26 = local_c00;
        }
        local_c00 = local_c00 - iVar26;
        if (local_c00 < 1) {
          local_c00 = 0;
        }
        local_c08 = (ushort *)((longlong)iVar26 * 2 + *(longlong *)param_5);
        local_d38 = param_7;
        local_d40 = param_6;
        local_d48 = &local_c08;
        cVar6 = FUN_1438d048e(param_1,param_2,param_3,param_4);
        puVar30 = local_d18;
        if (cVar6 == '\0') goto LAB_1438d223e;
        puVar18 = (ushort *)CONCAT71(uVar29,1);
        goto switchD_1438d0c51_caseD_1;
      }
      local_d48 = (ushort **)CONCAT44(local_d48._4_4_,(uint)*(byte *)(local_d00 + 0x44));
      cVar6 = FUN_1438cfd70(param_1,param_2,param_3,*(undefined2 *)(local_d00 + 0x30));
      puVar12 = local_cb8;
      lVar9 = local_cc0;
      puVar30 = local_d18;
      if (cVar6 == '\0') goto LAB_1438d223e;
      if (1 < local_cac) goto LAB_1438d0a3d;
      if (*(char *)(local_d00 + 0x4a) == '\x03') {
        iVar26 = *(int *)(param_6 + 0xc0);
        if ((iVar26 == 8 || local_ca0 == (ushort *)0x0) ||
           (cVar6 = FUN_147fab1d6(local_ca0,*(undefined8 *)(param_1 + 0x10)), puVar27 = local_ca0,
           cVar6 == '\0')) goto LAB_1438d24d5;
        local_540 = (ushort *)0x0;
        local_538 = DAT_14cb28a80;
        uStack_536 = 0xffffffff;
        uStack_532 = 0xffff;
        uStack_530 = 0xffff;
        uStack_52e = 0xffffffff;
        uStack_52a = 0xffff;
        uStack_528 = 0xffff;
        uStack_526 = 0;
        uStack_524 = 0xffffffff;
        uStack_520 = 0xffff;
        uStack_51a = 0xffff;
        uStack_51e = 0;
        uStack_51c = 0xffff;
        local_518 = 0xffff0000;
        uStack_514 = 0xffff;
        uStack_512 = 0;
        bStack_511 = bStack_511 & 0xfe;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(local_ca0);
          iVar26 = *(int *)(param_6 + 0xc0);
        }
        local_540 = puVar27;
        bStack_511 = bStack_511 | 1;
        bVar7 = DAT_14c950c29;
        local_d2a = uVar25;
        local_538 = DAT_14cb28a80;
        if (iVar26 != 0) {
          lVar9 = (longlong)iVar26 * 0x30;
          puVar27 = param_6;
          do {
            puVar12 = local_540;
            if ((local_540 != (ushort *)0x0 & bVar7) == 1) {
              FUN_1456cec3c(local_540);
              bVar7 = DAT_14c950c29;
            }
            if ((*(ushort **)puVar27 == puVar12) && (puVar27[4] == local_538)) {
              auVar36._0_8_ = local_d28;
              uVar25 = local_d2a;
              if (puVar27 != (ushort *)0x0) goto LAB_1438d24d5;
              break;
            }
            puVar27 = puVar27 + 0x18;
            lVar9 = lVar9 + -0x30;
          } while (lVar9 != 0);
        }
        puVar18 = local_540;
        if ((local_540 != (ushort *)0x0 & bVar7) == 1) {
          FUN_1456cec3c(local_540);
          bVar7 = DAT_14c950c29;
        }
        uVar19 = local_538;
        if ((puVar18 != (ushort *)0x0 & bVar7) == 1) {
          FUN_1456cec3c(puVar18);
        }
        if ((longlong)*(int *)(local_cc0 + 0x18) != 0) {
          puVar30 = *(undefined8 **)(local_cc0 + 0x10);
          lVar9 = (longlong)*(int *)(local_cc0 + 0x18) * 0x30;
          bVar7 = DAT_14c950c29;
          do {
            if ((puVar18 != (ushort *)0x0 & bVar7) == 1) {
              FUN_1456cec3c(puVar18);
              bVar7 = DAT_14c950c29;
            }
            if (((ushort *)*puVar30 == puVar18) && (*(ushort *)(puVar30 + 1) == uVar19)) {
              if (puVar30 != (undefined8 *)0x0) {
                uStack_520 = *(undefined2 *)(puVar30 + 4);
                uStack_51a = *(undefined2 *)((longlong)puVar30 + 0x26);
                uStack_51e = (undefined2)*(undefined4 *)((longlong)puVar30 + 0x22);
                uStack_51c = (undefined2)((uint)*(undefined4 *)((longlong)puVar30 + 0x22) >> 0x10);
                uStack_514 = *(undefined2 *)((longlong)puVar30 + 0x2c);
                local_518 = *(undefined4 *)(puVar30 + 5);
                uStack_524 = *(undefined4 *)((longlong)puVar30 + 0x1c);
                bVar33 = false;
                goto LAB_1438d214f;
              }
              break;
            }
            puVar30 = puVar30 + 6;
            lVar9 = lVar9 + -0x30;
          } while (lVar9 != 0);
        }
        uStack_514 = *(undefined2 *)(local_cc8 + 4);
        local_518 = *(undefined4 *)local_cc8;
        FUN_147fad998(param_1,&local_ad8,local_540);
        uStack_524 = CONCAT22(uStack_524._2_2_,(short)local_ad8);
        auVar36._0_8_ = local_d28;
        uVar25 = local_d2a;
        if ((short)local_ad8 == -1) goto LAB_1438d24d5;
        uStack_51a = *(undefined2 *)
                      (*(longlong *)(local_540 + 0x20) + 0x3e + (ulonglong)local_538 * 0x58);
        uVar22 = *(undefined4 *)
                  (*(longlong *)(local_540 + 0x20) + 0x3a + (ulonglong)local_538 * 0x58);
        uStack_51e = (undefined2)uVar22;
        uStack_51c = (undefined2)((uint)uVar22 >> 0x10);
        if ((bStack_511 & 1) != 0) {
          FUN_147fab5e0(&local_b00,param_1,0,&local_540);
          puVar18 = local_540;
          if (local_540[0xbb] != 0) {
            uVar8 = (uint)local_540[0xba];
            iVar26 = ~(uint)local_540[0xba] << 4;
            local_cd8 = param_3;
            local_ca8 = param_2;
            do {
              lVar9 = *(longlong *)(puVar18 + 0x30);
              lVar17 = (longlong)*(int *)(lVar9 + 8 + (longlong)(*(int *)(puVar18 + 0x34) + iVar26))
              ;
              plVar32 = (longlong *)(lVar9 + lVar17);
              puVar23 = (undefined4 *)(lVar9 + 0x14 + lVar17);
              local_b08 = *puVar23;
              local_b04 = *(undefined2 *)(puVar23 + 1);
              local_d48 = (ushort **)&local_b08;
              FUN_147facf94(param_1,&local_ad8,0,&local_540);
              bVar33 = lStack_ad0 == 0;
              bVar34 = local_ad8 == 0;
              if (bVar34 || bVar33) {
                lVar9 = **(longlong **)(local_540 + 0x38);
                lVar17 = (longlong)
                         (int)((uint)*(ushort *)((longlong)plVar32 + 0x12) * -0x10 +
                               (int)(*(longlong **)(local_540 + 0x38))[1] + -0x10);
                local_b20 = *(int *)(lVar9 + 8 + lVar17) + lVar9;
                local_b28 = *(undefined8 *)(lVar9 + lVar17);
                local_b30 = *puVar23;
                local_b2c = *(undefined2 *)(puVar23 + 1);
                local_d40 = (ushort *)&local_b28;
                local_d48 = (ushort **)&local_b30;
                FUN_147fad1e0(param_1,&local_b18,&local_540,uVar8);
                local_ad8 = local_b18;
                lStack_ad0 = lStack_b10;
              }
              uVar2 = *(undefined1 *)(param_1 + 0xf2);
              uVar3 = *(undefined1 *)(param_1 + 0xf3);
              uVar24 = *(undefined2 *)(param_1 + 0xf4);
              uVar25 = *(undefined2 *)(param_1 + 0xf6);
              local_cf8 = *(undefined4 **)(param_1 + 0xf8);
              local_ce0 = *(ushort **)(param_1 + 0x100);
              uVar22 = *puVar23;
              *(undefined2 *)(local_c90 + 1) = *(undefined2 *)(puVar23 + 1);
              *local_c90 = uVar22;
              *local_c98 = local_ad8;
              local_c98[1] = lStack_ad0;
              if ((short)plVar32[2] != -1) {
                local_b48 = local_ad8;
                lStack_b40 = lStack_ad0;
                local_d48 = (ushort **)CONCAT62(local_d48._2_6_,(short)plVar32[2]);
                local_d04 = CONCAT31(local_d04._1_3_,uVar2);
                local_d1c = CONCAT11(local_d1c._1_1_,uVar3);
                FUN_147fad2b0(param_1,0,&local_540,&local_b48);
                param_3 = local_cd8;
                uVar2 = (undefined1)local_d04;
                uVar3 = (undefined1)local_d1c;
              }
              param_2 = local_ca8;
              if (bVar34 || bVar33) {
                local_d04 = CONCAT22(local_d04._2_2_,uVar24);
                (**(code **)(*plVar32 + 0x28))(plVar32,param_1);
                param_3 = local_cd8;
                uVar24 = (undefined2)local_d04;
              }
              *(undefined1 *)(param_1 + 0xf2) = uVar2;
              *(undefined1 *)(param_1 + 0xf3) = uVar3;
              *(undefined2 *)(param_1 + 0xf4) = uVar24;
              *(undefined2 *)(param_1 + 0xf6) = uVar25;
              *(undefined4 **)(param_1 + 0xf8) = local_cf8;
              *(ushort **)(param_1 + 0x100) = local_ce0;
              uVar8 = uVar8 + 1;
              iVar26 = iVar26 + -0x10;
            } while (uVar8 < (uint)puVar18[0xbb] + (uint)puVar18[0xba]);
          }
          local_aa8 = 0;
          local_ac8 = (undefined8 *)0x0;
          uStack_ac0 = 0;
          local_ad8 = 0;
          lStack_ad0 = 0;
          local_ab8 = 0xffffffffffff0004;
          uStack_ab0 = 1;
          uStack_aa0 = 0xffff;
          uVar19 = puVar18[0xbd];
          bVar33 = true;
          if (uVar19 != 0) {
            uVar14 = puVar18[0xbc];
            uVar8 = (uint)uVar14;
            iVar26 = ~uVar8 << 4;
            do {
              lVar9 = *(longlong *)(puVar18 + 0x30);
              lVar17 = (longlong)*(int *)(lVar9 + 8 + (longlong)(*(int *)(puVar18 + 0x34) + iVar26))
              ;
              if ((*(byte *)(lVar9 + 0x20 + lVar17) & 0x40) != 0) {
                plVar32 = (longlong *)(lVar9 + lVar17);
                local_cf8 = (undefined4 *)((longlong)plVar32 + 0x14);
                local_b50 = *(undefined4 *)((longlong)plVar32 + 0x14);
                local_b4c = (undefined2)plVar32[3];
                local_d48 = (ushort **)&local_b50;
                FUN_147facf94(param_1,&local_b18,0,&local_540);
                bVar33 = lStack_b10 == 0;
                bVar34 = local_b18 == 0;
                if (bVar34 || bVar33) {
                  lVar9 = **(longlong **)(local_540 + 0x38);
                  lVar17 = (longlong)
                           (int)((uint)*(ushort *)((longlong)plVar32 + 0x12) * -0x10 +
                                 (int)(*(longlong **)(local_540 + 0x38))[1] + -0x10);
                  local_b68 = *(int *)(lVar9 + 8 + lVar17) + lVar9;
                  local_b70 = *(undefined8 *)(lVar9 + lVar17);
                  local_b78 = *local_cf8;
                  local_b74 = *(undefined2 *)(local_cf8 + 1);
                  local_d40 = (ushort *)&local_b70;
                  local_d48 = (ushort **)&local_b78;
                  FUN_147fad1e0(param_1,&local_b60,&local_540,uVar8);
                  local_b18 = local_b60;
                  lStack_b10 = lStack_b58;
                }
                local_d04 = CONCAT31(local_d04._1_3_,*(undefined1 *)(param_1 + 0xf2));
                local_ce0 = (ushort *)CONCAT71(local_ce0._1_7_,*(undefined1 *)(param_1 + 0xf3));
                uVar25 = *(undefined2 *)(param_1 + 0xf4);
                uVar24 = *(undefined2 *)(param_1 + 0xf6);
                auVar36._0_8_ = *(undefined8 *)(param_1 + 0xf8);
                puVar23 = *(undefined4 **)(param_1 + 0x100);
                uVar22 = *local_cf8;
                *(undefined2 *)(local_c90 + 1) = *(undefined2 *)(local_cf8 + 1);
                *local_c90 = uVar22;
                *local_c98 = local_b18;
                local_c98[1] = lStack_b10;
                if ((short)plVar32[2] != -1) {
                  local_b88 = local_b18;
                  lStack_b80 = lStack_b10;
                  local_d48 = (ushort **)CONCAT62(local_d48._2_6_,(short)plVar32[2]);
                  local_d1c = uVar25;
                  local_cf8 = puVar23;
                  local_cca = uVar24;
                  local_c88 = auVar36._0_8_;
                  FUN_147fad2b0(param_1,0,&local_540,&local_b88);
                  puVar23 = local_cf8;
                  auVar36._0_8_ = local_c88;
                  uVar25 = local_d1c;
                  uVar24 = local_cca;
                }
                if ((bVar34 || bVar33) &&
                   (local_d1c = uVar25, local_cf8 = puVar23,
                   cVar6 = (**(code **)(*plVar32 + 0x28))(plVar32,param_1,&local_ad8),
                   puVar23 = local_cf8, uVar25 = local_d1c, cVar6 != '\0')) {
                  *(undefined1 *)(param_1 + 0xf2) = (undefined1)local_d04;
                  *(undefined1 *)(param_1 + 0xf3) = local_ce0._0_1_;
                  *(undefined2 *)(param_1 + 0xf4) = local_d1c;
                  *(undefined2 *)(param_1 + 0xf6) = uVar24;
                  *(undefined8 *)(param_1 + 0xf8) = auVar36._0_8_;
                  *(undefined4 **)(param_1 + 0x100) = local_cf8;
                  bVar33 = false;
                  goto LAB_1438d1d51;
                }
                *(undefined1 *)(param_1 + 0xf2) = (undefined1)local_d04;
                *(undefined1 *)(param_1 + 0xf3) = local_ce0._0_1_;
                *(undefined2 *)(param_1 + 0xf4) = uVar25;
                *(undefined2 *)(param_1 + 0xf6) = uVar24;
                *(undefined8 *)(param_1 + 0xf8) = auVar36._0_8_;
                *(undefined4 **)(param_1 + 0x100) = puVar23;
                uVar14 = puVar18[0xbc];
                uVar19 = puVar18[0xbd];
              }
              uVar8 = uVar8 + 1;
              iVar26 = iVar26 + -0x10;
            } while (uVar8 < (uint)uVar19 + (uint)uVar14);
            bVar33 = true;
          }
LAB_1438d1d51:
          FUN_147fa6ed6(&local_ad8);
          lVar9 = CONCAT62(uStack_afe,local_b00);
          *(undefined8 *)(lVar9 + 200) = local_ae8;
          *(undefined8 *)(lVar9 + 0xc0) = local_ae0;
          *(undefined8 *)(lVar9 + 0xd0) = local_af0;
          puVar18 = &local_538;
          if (bVar33) {
            bVar33 = true;
            puVar30 = (undefined8 *)0x0;
            bVar7 = DAT_14c950c29;
LAB_1438d214f:
            uVar25 = local_d2a;
            puVar18 = &local_538;
            local_330 = local_540;
            if ((local_540 != (ushort *)0x0 & bVar7) == 1) {
              FUN_1456cec3c();
            }
            local_308 = CONCAT17(bStack_511,CONCAT16(uStack_512,CONCAT24(uStack_514,local_518)));
            local_328 = CONCAT26(uStack_532,CONCAT42(uStack_536,local_538));
            uStack_320 = CONCAT26(uStack_52a,CONCAT42(uStack_52e,uStack_530));
            local_318 = CONCAT13(uStack_525,CONCAT12(uStack_526,uStack_528));
            uStack_310 = CONCAT22(uStack_51e,uStack_520);
            uStack_30c = CONCAT22(uStack_51a,uStack_51c);
            uStack_314 = uStack_524;
            FUN_147fae4bc(param_6,&local_330);
            local_ad8 = CONCAT62(local_ad8._2_6_,local_538);
            local_c28 = (ushort *)&local_ad8;
            local_c20 = 1;
            local_d48 = &local_c28;
            local_d38 = (longlong *)0x0;
            local_d40 = param_6;
            uVar13 = FUN_1438d048e(param_1,param_3,
                                   param_6 + (longlong)(*(int *)(param_6 + 0xc0) + -1) * 0x18,
                                   puVar30);
            auVar36._0_8_ = local_d28;
            if ((char)uVar13 == '\0') {
              if (bVar33) {
                FUN_1438cfaba(param_1,&local_540);
              }
              FUN_147fae542(param_6);
              param_4 = local_d10;
              puVar30 = local_d18;
              goto LAB_1438d223e;
            }
            local_ce8 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
            goto LAB_1438d24d5;
          }
        }
        uVar25 = local_d2a;
        FUN_1438cfaba(param_1,&local_540);
        auVar36._0_8_ = local_d28;
        goto LAB_1438d24d5;
      }
      if (*(char *)(local_d00 + 0x4a) == '\x02') {
        uVar19 = *(ushort *)(local_d00 + 0x28);
        if (uVar19 != 0xffff) {
          iVar26 = *(int *)(param_6 + 0xc0);
          if (iVar26 == 8) goto LAB_1438d24d5;
          local_ad8 = CONCAT26(local_ad8._6_2_,0xffffffff0000);
          local_540 = (ushort *)CONCAT26(local_540._6_2_,0xffff00000000);
          local_540 = (ushort *)CONCAT44(local_540._4_4_,0xffff0000);
          puVar18 = (ushort *)*param_3;
          if (DAT_14c950c29 == 1) {
            if (puVar18 == (ushort *)0x0) {
              puVar18 = (ushort *)0x0;
            }
            else {
              FUN_1456cec3c(puVar18);
              puVar18 = (ushort *)*param_3;
              uVar19 = *(ushort *)(local_d00 + 0x28);
              iVar26 = *(int *)(param_6 + 0xc0);
            }
          }
          local_cf8 = (undefined4 *)
                      CONCAT62(local_cf8._2_6_,*(undefined2 *)((longlong)param_3 + 0x1c));
          bVar7 = DAT_14c950c29;
          if (iVar26 != 0) {
            lVar9 = (longlong)iVar26 * 0x30;
            puVar27 = param_6;
            do {
              if ((puVar18 != (ushort *)0x0 & bVar7) == 1) {
                FUN_1456cec3c(puVar18);
                bVar7 = DAT_14c950c29;
              }
              if ((*(ushort **)puVar27 == puVar18) && (puVar27[4] == uVar19)) {
                auVar36._0_8_ = local_d28;
                if (puVar27 != (ushort *)0x0) goto LAB_1438d24d5;
                break;
              }
              puVar27 = puVar27 + 0x18;
              lVar9 = lVar9 + -0x30;
            } while (lVar9 != 0);
          }
          if ((puVar18 != (ushort *)0x0 & bVar7) == 1) {
            FUN_1456cec3c(puVar18);
            bVar7 = DAT_14c950c29;
          }
          if ((puVar18 != (ushort *)0x0 & bVar7) == 1) {
            FUN_1456cec3c(puVar18);
            bVar7 = DAT_14c950c29;
          }
          local_d2a = uVar25;
          if ((longlong)*(int *)(local_cc0 + 0x18) != 0) {
            puVar30 = *(undefined8 **)(local_cc0 + 0x10);
            lVar9 = (longlong)*(int *)(local_cc0 + 0x18) * 0x30;
            do {
              if ((puVar18 != (ushort *)0x0 & bVar7) == 1) {
                FUN_1456cec3c(puVar18);
                bVar7 = DAT_14c950c29;
              }
              if (((ushort *)*puVar30 == puVar18) && (*(ushort *)(puVar30 + 1) == uVar19)) {
                if (puVar30 != (undefined8 *)0x0) {
                  uVar25 = *(undefined2 *)((longlong)puVar30 + 0x1e);
                  uVar24 = *(undefined2 *)(puVar30 + 4);
                  local_ad8 = CONCAT44(CONCAT22(local_ad8._6_2_,
                                                *(undefined2 *)((longlong)puVar30 + 0x26)),
                                       *(undefined4 *)((longlong)puVar30 + 0x22));
                  local_540 = (ushort *)CONCAT26(local_540._6_2_,*(undefined6 *)(puVar30 + 5));
                  goto LAB_1438d1e10;
                }
                break;
              }
              puVar30 = puVar30 + 6;
              lVar9 = lVar9 + -0x30;
            } while (lVar9 != 0);
          }
          local_540 = (ushort *)
                      CONCAT44(CONCAT22(local_540._6_2_,*(undefined2 *)((longlong)local_c78 + 4)),
                               (int)*local_c78);
          uVar25 = *(undefined2 *)((longlong)param_3 + 0x1e);
          local_ad8 = CONCAT44(CONCAT22(local_ad8._6_2_,*(undefined2 *)(local_cc8 + 4)),
                               *(undefined4 *)local_cc8);
          uVar24 = 0xffff;
          puVar30 = (undefined8 *)0x0;
LAB_1438d1e10:
          local_300 = puVar18;
          if ((puVar18 != (ushort *)0x0 & bVar7) == 1) {
            FUN_1456cec3c(puVar18);
          }
          puVar18 = (ushort *)
                    (CONCAT71((int7)((ulonglong)puVar18 >> 8),local_cea) & 0xfffffffffffffffe);
          local_2f6 = 0xffffffff;
          uStack_2f2 = 0xffffffff;
          uStack_2ee = 0xffffffff;
          uStack_2ea = 0xffffffff;
          local_2e6 = 0;
          local_2e4 = local_cf8._0_2_;
          local_2da = local_ad8._4_2_;
          local_2de = (undefined4)local_ad8;
          local_2d4 = local_540._4_2_;
          local_2d8 = (undefined4)local_540;
          local_2d2 = 0;
          local_2f8 = uVar19;
          local_2e2 = uVar25;
          local_2e0 = uVar24;
          local_2d1 = (char)puVar18;
          FUN_147fae4bc(param_6,&local_300);
          local_c18 = &local_b00;
          local_c10 = 1;
          local_d40 = param_6;
          local_d48 = &local_c18;
          local_d38 = (longlong *)0x0;
          local_b00 = uVar19;
          auVar36._0_8_ =
               FUN_1438d048e(param_1,param_3,
                             param_6 + (longlong)(*(int *)(param_6 + 0xc0) + -1) * 0x18,puVar30);
          if ((char)auVar36._0_8_ != '\0') {
            local_ce8 = CONCAT71((int7)((ulonglong)auVar36._0_8_ >> 8),1);
            auVar36._0_8_ = local_d28;
            uVar25 = local_d2a;
            goto LAB_1438d24d5;
          }
          local_cea = (char)puVar18;
          FUN_147fae542(param_6);
          param_4 = local_d10;
          puVar30 = local_d18;
          auVar36._0_8_ = local_d28;
          uVar25 = local_d2a;
        }
      }
      else {
        if (5 < *(byte *)(local_d00 + 0x4b) - 1) goto LAB_1438d223e;
        puVar18 = (ushort *)CONCAT71(uVar29,1);
        uVar24 = local_d2a;
        switch((uint)*(byte *)(local_d00 + 0x4b)) {
        case 1:
          goto switchD_1438d0c51_caseD_1;
        case 2:
          uVar19 = *(ushort *)(local_d00 + 0x2c);
          if (uVar19 < *(ushort *)(local_d00 + 0x2e)) {
            do {
              local_ad8 = CONCAT62(local_ad8._2_6_,uVar19);
              local_c38 = (ushort *)&local_ad8;
              local_c30 = 1;
              local_d40 = param_6;
              local_d48 = &local_c38;
              local_d38 = (longlong *)0x0;
              cVar6 = FUN_1438d048e(param_1,param_2,param_3,local_d10);
              if (cVar6 != '\0') goto switchD_1438d0c51_caseD_1;
              uVar19 = *(ushort *)
                        (*(longlong *)(local_cb8 + 0x20) + 0x2e + (ulonglong)uVar19 * 0x58);
              param_4 = local_d10;
              puVar30 = local_d18;
            } while (uVar19 < *(ushort *)(local_d00 + 0x2e));
            goto joined_r0x0001438d2302;
          }
          goto switchD_1438d0c51_caseD_1;
        case 3:
          if (*(ushort *)(local_d00 + 0x2e) <= *(ushort *)(local_d00 + 0x2c))
          goto switchD_1438d0c51_caseD_1;
          local_ac8 = (undefined8 *)0x0;
          uStack_ac0 = 0x800000000;
          uVar19 = *(ushort *)(local_d00 + 0x2c);
          lVar17 = local_d00;
          param_4 = local_d10;
          puVar10 = local_ac8;
          if (uVar19 < *(ushort *)(local_d00 + 0x2e)) {
            do {
              uVar21 = uStack_ac0;
              lVar15 = (longlong)(int)uStack_ac0;
              uVar8 = (int)uStack_ac0 + 1;
              uStack_ac0 = CONCAT44(uStack_ac0._4_4_,uVar8);
              if (uStack_ac0._4_4_ < uVar8) {
                FUN_1400a132a(&local_ad8,uVar21 & 0xffffffff);
                lVar17 = local_d00;
              }
              puVar30 = local_ac8;
              if (local_ac8 == (undefined8 *)0x0) {
                puVar30 = &local_ad8;
              }
              *(ushort *)((longlong)puVar30 + lVar15 * 2) = uVar19;
              uVar19 = *(ushort *)(*(longlong *)(puVar12 + 0x20) + 0x2e + (ulonglong)uVar19 * 0x58);
            } while (uVar19 < *(ushort *)(lVar17 + 0x2e));
            iVar26 = (int)uStack_ac0;
            while (auVar36._0_8_ = local_d28, uVar24 = local_d2a, puVar30 = local_d18,
                  puVar18 = puVar12, param_4 = local_d10, puVar10 = local_ac8, iVar26 != 0) {
              if (iVar26 < 1) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(int *)(lVar9 + 0x44) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar9 + 0x44) = uVar8;
                uVar8 = (uint)((float)iVar26 * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0));
              }
              puVar30 = local_ac8;
              if (local_ac8 == (undefined8 *)0x0) {
                puVar30 = &local_ad8;
              }
              local_540._2_6_ = (undefined6)((ulonglong)local_540 >> 0x10);
              local_540 = (ushort *)
                          CONCAT62(local_540._2_6_,
                                   *(undefined2 *)((longlong)puVar30 + (longlong)(int)uVar8 * 2));
              local_c48 = (ushort *)&local_540;
              local_c40 = 1;
              local_d40 = param_6;
              local_d48 = &local_c48;
              local_d38 = (longlong *)0x0;
              auVar36._0_8_ = FUN_1438d048e(param_1,param_2,param_3,local_d10);
              if ((char)auVar36._0_8_ != '\0') {
                local_ce8 = CONCAT71((int7)((ulonglong)auVar36._0_8_ >> 8),1);
                auVar36._0_8_ = local_d28;
                uVar24 = local_d2a;
                puVar30 = local_d18;
                puVar18 = param_6;
                param_4 = local_d10;
                puVar10 = local_ac8;
                break;
              }
              iVar26 = ~uVar8 + (int)uStack_ac0;
              if (iVar26 != 0) {
                if (0 < iVar26) {
                  iVar26 = 1;
                }
                puVar30 = local_ac8;
                if (local_ac8 == (undefined8 *)0x0) {
                  puVar30 = &local_ad8;
                }
                memmove((void *)((longlong)puVar30 + (longlong)(int)uVar8 * 2),
                        (void *)((longlong)puVar30 + (longlong)((int)uStack_ac0 - iVar26) * 2),
                        (longlong)iVar26 * 2);
              }
              iVar26 = (int)uStack_ac0 + -1;
              uStack_ac0 = CONCAT44(uStack_ac0._4_4_,iVar26);
              puVar12 = param_6;
            }
          }
          break;
        case 4:
          if (*(ushort *)(local_d00 + 0x2e) <= *(ushort *)(local_d00 + 0x2c))
          goto switchD_1438d0c51_caseD_1;
          local_ac8 = (undefined8 *)0x0;
          uStack_ac0 = 0x800000000;
          uVar19 = *(ushort *)(local_d00 + 0x2c);
          lVar9 = local_d00;
          param_4 = local_d10;
          puVar10 = local_ac8;
          if (uVar19 < *(ushort *)(local_d00 + 0x2e)) {
            do {
              uVar21 = uStack_ac0;
              lVar17 = (longlong)(int)uStack_ac0;
              uVar8 = (int)uStack_ac0 + 1;
              uStack_ac0 = CONCAT44(uStack_ac0._4_4_,uVar8);
              if (uStack_ac0._4_4_ < uVar8) {
                FUN_1400a132a(&local_ad8,uVar21 & 0xffffffff);
                lVar9 = local_d00;
              }
              puVar10 = local_ac8;
              if (local_ac8 == (undefined8 *)0x0) {
                puVar10 = &local_ad8;
              }
              *(ushort *)((longlong)puVar10 + lVar17 * 2) = uVar19;
              uVar19 = *(ushort *)(*(longlong *)(puVar12 + 0x20) + 0x2e + (ulonglong)uVar19 * 0x58);
            } while (uVar19 < *(ushort *)(lVar9 + 0x2e));
            uVar5 = uVar25;
            iVar26 = (int)uStack_ac0;
            uVar24 = local_d2a;
            param_4 = local_d10;
            puVar27 = local_cb8;
            while( true ) {
              local_d2a = uVar5;
              auVar36._0_8_ = local_d28;
              local_cb8 = puVar27;
              puVar18 = puVar12;
              puVar10 = local_ac8;
              if ((iVar26 == 0) ||
                 (uVar25 = local_d2a, uVar24 = local_d2a, puVar30 = local_d18, param_4 = local_d10,
                 iVar26 < 1)) goto joined_r0x0001438d20e9;
              uVar21 = 0xffff;
              uVar20 = 0xffffffff;
              uVar31 = 0;
              fVar38 = -INFINITY;
              do {
                puVar30 = local_ac8;
                if (local_ac8 == (undefined8 *)0x0) {
                  puVar30 = &local_ad8;
                }
                uVar28 = (ulonglong)*(ushort *)((longlong)puVar30 + uVar31 * 2);
                lVar9 = *(longlong *)(puVar27 + 0x20);
                lVar17 = uVar28 * 0x58;
                local_d40 = (ushort *)
                            CONCAT44(local_d40._4_4_,*(undefined4 *)(lVar9 + 0x50 + lVar17));
                local_d48 = (ushort **)
                            CONCAT44(local_d48._4_4_,(uint)*(byte *)(lVar9 + 0x45 + lVar17));
                auVar36._0_8_ =
                     FUN_1438d00c4(param_1,param_2,param_3,*(undefined2 *)(lVar9 + 0x32 + lVar17));
                param_4 = local_d10;
                auVar36._8_8_ = extraout_XMM0_Qb;
                if (fVar38 < (float)auVar36._0_8_) {
                  uVar20 = uVar31 & 0xffffffff;
                  uVar21 = uVar28;
                }
                else {
                  auVar37._4_12_ = auVar36._4_12_;
                  auVar37._0_4_ = fVar38;
                  auVar36._0_8_ = auVar37._0_8_;
                }
                uVar31 = uVar31 + 1;
                fVar38 = (float)auVar36._0_8_;
              } while ((longlong)uVar31 < (longlong)(int)uStack_ac0);
              auVar36._0_8_ = local_d28;
              uVar25 = local_d2a;
              uVar24 = local_d2a;
              puVar30 = local_d18;
              puVar18 = puVar27;
              puVar10 = local_ac8;
              if ((short)uVar21 == -1) goto joined_r0x0001438d20e9;
              local_540 = (ushort *)CONCAT62(local_540._2_6_,(short)uVar21);
              local_c58 = (ushort *)&local_540;
              local_c50 = 1;
              local_d40 = param_6;
              local_d48 = &local_c58;
              local_d38 = (longlong *)0x0;
              auVar36._0_8_ = FUN_1438d048e(param_1,param_2,param_3,local_d10);
              uVar25 = local_d2a;
              if ((char)auVar36._0_8_ != '\0') break;
              iVar26 = ~(uint)uVar20 + (int)uStack_ac0;
              if (iVar26 != 0) {
                if (0 < iVar26) {
                  iVar26 = 1;
                }
                puVar30 = local_ac8;
                if (local_ac8 == (undefined8 *)0x0) {
                  puVar30 = &local_ad8;
                }
                memmove((void *)((longlong)puVar30 + (longlong)(int)(uint)uVar20 * 2),
                        (void *)((longlong)puVar30 + (longlong)((int)uStack_ac0 - iVar26) * 2),
                        (longlong)iVar26 * 2);
              }
              iVar26 = (int)uStack_ac0 + -1;
              uStack_ac0 = CONCAT44(uStack_ac0._4_4_,iVar26);
              uVar5 = local_d2a;
              uVar24 = local_d2a;
              puVar30 = local_d18;
              puVar12 = puVar27;
              puVar27 = local_cb8;
            }
            local_ce8 = CONCAT71((int7)((ulonglong)auVar36._0_8_ >> 8),1);
            auVar36._0_8_ = local_d28;
            uVar24 = local_d2a;
            puVar30 = local_d18;
            puVar10 = local_ac8;
          }
          break;
        case 5:
          if (*(ushort *)(local_d00 + 0x2e) <= *(ushort *)(local_d00 + 0x2c))
          goto switchD_1438d0c51_caseD_1;
          local_a98 = (undefined8 *)0x0;
          local_a90 = 0x800000000;
          uVar19 = *(ushort *)(local_d00 + 0x2c);
          if (uVar19 < *(ushort *)(local_d00 + 0x2e)) {
            lVar9 = *(longlong *)(local_cb8 + 0x20);
            fVar38 = 0.0;
            do {
              lVar17 = (ulonglong)uVar19 * 0x58;
              local_d40 = (ushort *)CONCAT44(local_d40._4_4_,*(undefined4 *)(lVar9 + 0x50 + lVar17))
              ;
              local_d48 = (ushort **)
                          CONCAT44(local_d48._4_4_,(uint)*(byte *)(lVar9 + 0x45 + lVar17));
              fVar35 = (float)FUN_1438d00c4(param_1,param_2,param_3,
                                            *(undefined2 *)(lVar9 + 0x32 + lVar17));
              uVar21 = local_a90;
              lVar9 = (longlong)(int)(uint)local_a90;
              uVar8 = (uint)local_a90 + 1;
              local_a90 = CONCAT44(local_a90._4_4_,uVar8);
              if (local_a90._4_4_ < uVar8) {
                FUN_147fb5c4e(&local_ad8,uVar21 & 0xffffffff);
              }
              puVar30 = local_a98;
              if (local_a98 == (undefined8 *)0x0) {
                puVar30 = &local_ad8;
              }
              *(ushort *)(puVar30 + lVar9) = uVar19;
              *(float *)((longlong)puVar30 + lVar9 * 8 + 4) = fVar35;
              fVar38 = fVar38 + fVar35;
              lVar9 = *(longlong *)(puVar12 + 0x20);
              uVar19 = *(ushort *)(lVar9 + 0x2e + lVar17);
            } while (uVar19 < *(ushort *)(local_d00 + 0x2e));
            auVar36._0_8_ = local_d28;
            uVar8 = (uint)local_a90;
            lVar9 = local_cc0;
            param_4 = local_d10;
          }
          else {
            fVar38 = 0.0;
            uVar8 = 0;
            param_4 = local_d10;
          }
          while (uVar24 = local_d2a, puVar30 = local_d18, puVar18 = param_6, puVar10 = local_a98,
                uVar8 != 0) {
            uVar16 = *(int *)(lVar9 + 0x44) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar9 + 0x44) = uVar16;
            if (0 < (int)uVar8) {
              puVar30 = local_a98;
              if (local_a98 == (undefined8 *)0x0) {
                puVar30 = &local_ad8;
              }
              fVar35 = 0.0;
              uVar21 = 0;
              do {
                fVar1 = *(float *)((longlong)puVar30 + uVar21 * 8 + 4);
                fVar35 = fVar35 + fVar1;
                if ((((float)(uVar16 >> 9 | 0x3f800000) + -1.0) * fVar38 < fVar35) ||
                   (uVar8 - 1 == uVar21)) {
                  if ((fVar1 != 0.0) || (NAN(fVar1))) {
                    local_540 = (ushort *)
                                CONCAT62(local_540._2_6_,*(undefined2 *)(puVar30 + uVar21));
                    local_c68 = (ushort *)&local_540;
                    local_c60 = 1;
                    local_d40 = param_6;
                    local_d48 = &local_c68;
                    local_d38 = (longlong *)0x0;
                    auVar36._0_8_ = FUN_1438d048e(param_1,param_2,param_3,param_4);
                    if ((char)auVar36._0_8_ != '\0') {
                      local_ce8 = CONCAT71((int7)((ulonglong)auVar36._0_8_ >> 8),1);
                      auVar36._0_8_ = local_d28;
                      uVar24 = local_d2a;
                      puVar30 = local_d18;
                      puVar10 = local_a98;
                      goto joined_r0x0001438d20e9;
                    }
                    uVar8 = (uint)local_a90;
                  }
                  if (uVar8 - 1 != (int)uVar21) {
                    iVar26 = (uVar8 - 1) - (int)uVar21;
                    if (0 < iVar26) {
                      iVar26 = 1;
                    }
                    puVar30 = local_a98;
                    if (local_a98 == (undefined8 *)0x0) {
                      puVar30 = &local_ad8;
                    }
                    memmove(puVar30 + uVar21,puVar30 + (int)(uVar8 - iVar26),(longlong)iVar26 << 3);
                    uVar8 = (uint)local_a90;
                  }
                  fVar38 = fVar38 - fVar1;
                  uVar8 = uVar8 - 1;
                  local_a90 = CONCAT44(local_a90._4_4_,uVar8);
                  auVar36._0_8_ = local_d28;
                  break;
                }
                uVar21 = uVar21 + 1;
                auVar36._0_8_ = local_d28;
              } while (uVar8 != uVar21);
            }
            uVar24 = local_d2a;
            puVar30 = local_d18;
            puVar10 = local_a98;
            if ((local_ce8 & 1) != 0) break;
          }
          break;
        case 6:
          bVar7 = *(byte *)(local_d00 + 0x46);
          if (bVar7 != 0) {
            uVar19 = 0;
            uVar22 = 0;
            lVar9 = local_d00;
            do {
              lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
              lVar15 = (longlong)(short)(*(short *)(lVar9 + 0x34) + uVar19) * 0x20;
              if (((((*(byte *)(lVar17 + 0x1c + lVar15) & 1) != 0) &&
                   (puVar23 = (undefined4 *)(lVar17 + lVar15),
                   (byte)uVar22 < *(byte *)((longlong)puVar23 + 0x19))) &&
                  ((*(byte *)(puVar23 + 6) & 3) == 0)) &&
                 ((*(short *)(puVar23 + 5) == 0 && (*(short *)((longlong)puVar23 + 0x16) == 0)))) {
                if (*(byte *)((longlong)param_3 + 0x1a) != 0) {
                  uVar21 = 0;
                  do {
                    if (*(short *)((longlong)param_3 + uVar21 + 10) ==
                        *(short *)((longlong)puVar23 + 0x12)) goto LAB_1438d16ae;
                    uVar21 = uVar21 + 2;
                  } while ((uint)*(byte *)((longlong)param_3 + 0x1a) * 2 != uVar21);
                }
                local_340 = (ushort *)0x0;
                local_338 = 0x4000000000;
                local_d2a = uVar25;
                local_d04 = uVar22;
                local_cf8 = puVar23;
                local_cd8 = param_3;
                local_ca8 = param_2;
                if (*(char *)(puVar23 + 6) == '\x04') {
                  local_540 = (ushort *)0x0;
LAB_1438d1489:
                  local_338 = 0x4000000001;
                  local_ce0 = &local_538;
                  puVar12 = (ushort *)&local_540;
LAB_1438d14b6:
                  do {
                    ppuVar4 = *(ushort ***)puVar12;
                    if (ppuVar4 == (ushort **)0x0) {
                      puVar11 = (ushort *)0x0;
                    }
                    else {
                      puVar11 = *ppuVar4;
                    }
                    *(ushort **)(param_1 + 0xe0) = puVar11;
                    local_d48 = (ushort **)
                                CONCAT44(local_d48._4_4_,(uint)*(byte *)((longlong)local_cf8 + 0x1b)
                                        );
                    cVar6 = FUN_1438cfd70(param_1,param_2,param_3,*(undefined2 *)(local_cf8 + 4));
                    *(undefined8 *)(param_1 + 0xe0) = 0;
                    if (cVar6 != '\0') {
                      local_958 = 0x800000000;
                      local_550 = 0x800000000;
                      local_d40 = (ushort *)
                                  CONCAT71(local_d40._1_7_,
                                           *(undefined1 *)((longlong)local_cf8 + 0x1a));
                      local_d48 = ppuVar4;
                      cVar6 = FUN_1438cae0e(param_1,param_3,
                                            *(undefined2 *)((longlong)local_cf8 + 0x12),&local_ad8);
                      if (cVar6 != '\0') {
                        FUN_147fb3972(param_6,&local_ad8);
                        FUN_147fb39ce(local_c80,local_950);
                        local_d04 = (undefined4)
                                    CONCAT71((int7)((ulonglong)local_cf8 >> 8),
                                             *(undefined1 *)((longlong)local_cf8 + 0x19));
                        FUN_147fa6f11(local_950,local_550 & 0xffffffff);
                        break;
                      }
                      FUN_147fa6f11(local_950,local_550 & 0xffffffff);
                    }
                    puVar12 = puVar12 + 4;
                  } while (puVar12 != local_ce0);
LAB_1438d1673:
                  if (local_340 != (ushort *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (*(char *)(puVar23 + 6) == '\b') {
                  if (puVar27 != (ushort *)0x0) {
                    local_540 = puVar27;
                    goto LAB_1438d1489;
                  }
                  puVar30 = *(undefined8 **)(param_1 + 0x28);
                  if ((puVar30 != (undefined8 *)0x0) && ((longlong)*(int *)(puVar30 + 1) != 0)) {
                    puVar10 = (undefined8 *)*puVar30;
                    lVar9 = (longlong)*(int *)(puVar30 + 1) << 4;
                    do {
                      cVar6 = FUN_147fbacde(local_cf8,*puVar10);
                      uVar21 = local_338;
                      if (cVar6 != '\0') {
                        lVar17 = (longlong)(int)local_338;
                        uVar8 = (int)local_338 + 1;
                        local_338 = CONCAT44(local_338._4_4_,uVar8);
                        if (local_338._4_4_ < uVar8) {
                          FUN_147fb5b48(&local_540,uVar21 & 0xffffffff);
                        }
                        puVar12 = local_340;
                        if (local_340 == (ushort *)0x0) {
                          puVar12 = (ushort *)&local_540;
                        }
                        *(undefined8 **)(puVar12 + lVar17 * 4) = puVar10;
                      }
                      puVar10 = puVar10 + 2;
                      lVar9 = lVar9 + -0x10;
                    } while (lVar9 != 0);
                    puVar12 = local_340;
                    if (local_340 == (ushort *)0x0) {
                      puVar12 = (ushort *)&local_540;
                    }
                    if ((longlong)(int)local_338 != 0) {
                      local_ce0 = puVar12 + (longlong)(int)local_338 * 4;
                      param_2 = local_ca8;
                      param_3 = local_cd8;
                      goto LAB_1438d14b6;
                    }
                  }
                  goto LAB_1438d1673;
                }
                bVar7 = *(byte *)(local_d00 + 0x46);
                param_4 = local_d10;
                param_3 = local_cd8;
                lVar9 = local_d00;
                param_2 = local_ca8;
                uVar25 = local_d2a;
                uVar22 = local_d04;
              }
LAB_1438d16ae:
              uVar19 = uVar19 + 1;
            } while (uVar19 < bVar7);
            puVar30 = local_d18;
            auVar36._0_8_ = local_d28;
            if ((char)uVar22 == '\0') goto LAB_1438d223e;
            goto switchD_1438d0c51_caseD_1;
          }
          goto LAB_1438d223e;
        }
joined_r0x0001438d20e9:
        local_d2a = uVar24;
        if (puVar10 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
joined_r0x0001438d2302:
        if ((local_ce8 & 1) != 0) goto LAB_1438d24d5;
      }
LAB_1438d223e:
      puVar30 = puVar30 + 1;
      if (puVar30 == local_c70) goto LAB_1438d24d5;
      goto LAB_1438d08fc;
    }
    goto LAB_1438d24f5;
  }
  puVar18 = (ushort *)0x0;
  goto LAB_1438d250a;
LAB_1438d24d5:
  puVar18 = (ushort *)CONCAT71((int7)((ulonglong)puVar18 >> 8),1);
  if ((local_ce8 & 1) == 0) {
    *(undefined1 *)((longlong)param_3 + 0x2e) = local_ce9;
    if (*(char *)((longlong)param_3 + 0x1a) != '\0') {
      *(char *)((longlong)param_3 + 0x1a) = *(char *)((longlong)param_3 + 0x1a) + -1;
    }
LAB_1438d24f5:
    puVar18 = (ushort *)0x0;
  }
switchD_1438d0c51_caseD_1:
  if (local_d0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1438d250a:
  *(undefined8 *)(param_1 + 0xe8) = auVar36._0_8_;
  *(undefined2 *)(param_1 + 0xd8) = uVar25;
  *(undefined8 *)(local_bb0[0] + 200) = local_b98;
  *(undefined8 *)(local_bb0[0] + 0xc0) = local_b90;
  *(undefined8 *)(local_bb0[0] + 0xd0) = local_ba0;
LAB_1438d050c:
  if ((local_c0 ^ (ulonglong)auStack_d68) == DAT_14c707940) {
    return (ulonglong)puVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d2984 FUN_1438d2984 body=99 status=ok
// SIG undefined FUN_1438d2984(void)

void FUN_1438d2984(longlong *param_1)

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



// FUNCTION 1438d29e8 FUN_1438d29e8 body=99 status=ok
// SIG undefined FUN_1438d29e8(void)

void FUN_1438d29e8(longlong *param_1)

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



// FUNCTION 1438d2a4c FUN_1438d2a4c body=450 status=ok
// SIG undefined FUN_1438d2a4c(void)

void FUN_1438d2a4c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1438d2b67:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1438d2ba4:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1438d2aa2;
LAB_1438d2a97:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1438d2aa2:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x0001438d2ace;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1438d2b24:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1438d2ba4;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1438d2b67;
code_r0x0001438d2ace:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1438d2b24;
    }
  }
  goto LAB_1438d2a97;
}



// FUNCTION 1438d2c0e FUN_1438d2c0e body=99 status=ok
// SIG undefined FUN_1438d2c0e(void)

void FUN_1438d2c0e(longlong *param_1)

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



// FUNCTION 1438d2c72 FUN_1438d2c72 body=450 status=ok
// SIG undefined FUN_1438d2c72(void)

void FUN_1438d2c72(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1438d2d8d:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1438d2dca:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1438d2cc8;
LAB_1438d2cbd:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1438d2cc8:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x0001438d2cf4;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1438d2d4a:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1438d2dca;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1438d2d8d;
code_r0x0001438d2cf4:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1438d2d4a;
    }
  }
  goto LAB_1438d2cbd;
}



// FUNCTION 1438d2e34 FUN_1438d2e34 body=99 status=ok
// SIG undefined FUN_1438d2e34(void)

void FUN_1438d2e34(longlong *param_1)

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



// FUNCTION 1438d2e98 FUN_1438d2e98 body=450 status=ok
// SIG undefined FUN_1438d2e98(void)

void FUN_1438d2e98(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1438d2fb3:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1438d2ff0:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1438d2eee;
LAB_1438d2ee3:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1438d2eee:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001438d2f1a;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1438d2f70:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1438d2ff0;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1438d2fb3;
code_r0x0001438d2f1a:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1438d2f70;
    }
  }
  goto LAB_1438d2ee3;
}



// FUNCTION 1438d305a FUN_1438d305a body=450 status=ok
// SIG undefined FUN_1438d305a(void)

void FUN_1438d305a(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1438d3175:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1438d31b2:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1438d30b0;
LAB_1438d30a5:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1438d30b0:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x0001438d30dc;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1438d3132:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1438d31b2;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1438d3175;
code_r0x0001438d30dc:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1438d3132;
    }
  }
  goto LAB_1438d30a5;
}



// FUNCTION 1438d321c FUN_1438d321c body=453 status=ok
// SIG undefined FUN_1438d321c(void)

void FUN_1438d321c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x30);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1438d333a:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1438d3377:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x30;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1438d3275;
LAB_1438d326a:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1438d3275:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x554) goto code_r0x0001438d32a1;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0xc + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1438d32f7:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1438d3377;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1438d333a;
code_r0x0001438d32a1:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1438d32f7;
    }
  }
  goto LAB_1438d326a;
}



// FUNCTION 1438d33e2 FUN_1438d33e2 body=524 status=ok
// SIG undefined FUN_1438d33e2(void)

void FUN_1438d33e2(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  void *_Src;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  size_t _Size;
  uint uVar9;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar7 = 4;
    if (4 < uVar3) {
      uVar7 = uVar3;
    }
  }
  else {
    uVar7 = uVar3 + (int)((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + 0x10;
  }
  uVar9 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar7) {
    uVar9 = uVar7;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar9;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar9,2);
  }
  _Src = (void *)*param_1;
  if (uVar9 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1438d353d:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1438d357a:
    *param_1 = _Dst;
    return;
  }
  uVar3 = uVar9 * 2;
  _Size = (size_t)uVar3;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1438d3476;
LAB_1438d346a:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1438d3476:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (uVar9 < 0x7fd3) goto code_r0x0001438d34a3;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(size_t *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1438d34fb:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(uint *)((longlong)_Dst + -4) = uVar3;
  if (_Src == (void *)0x0) goto LAB_1438d357a;
  uVar7 = *(uint *)((longlong)_Src + -4);
  if (uVar7 != 0) {
    if (uVar7 < uVar3) {
      _Size = (size_t)uVar7;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1438d353d;
code_r0x0001438d34a3:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1438d34fb;
    }
  }
  goto LAB_1438d346a;
}



// FUNCTION 1438d35ee FUN_1438d35ee body=490 status=ok
// SIG undefined FUN_1438d35ee(void)

void FUN_1438d35ee(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x68);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x10;
LAB_1438d3611:
    if (*(void **)((longlong)param_1 + 0x60) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0x60),(longlong)param_2 * 6);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)((longlong)param_1 + 0x6c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar7 = lVar4 * 6;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1438d36ba;
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
LAB_1438d36ba:
    uVar7 = uVar7 / 6;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7fffffff;
      uVar7 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0x6c) = uVar6;
      if (uVar6 < 0x11) goto LAB_1438d3611;
    }
    if (*(longlong *)((longlong)param_1 + 0x60) == 0) {
      FUN_1446efa72((longlong)param_1 + 0x60,0,uVar7,6);
      memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 6);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,uVar7,6);
  return;
}



// FUNCTION 1438d37d8 FUN_1438d37d8 body=520 status=ok
// SIG undefined FUN_1438d37d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d37d8(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cb28018 = 0x47efffffe0000000;
  _DAT_14cb28020 = 0x47efffffe0000000;
  _DAT_14cb28028 = 0x47efffffe0000000;
  _DAT_14cb28030 = 0x47efffffe0000000;
  _DAT_14cb28038 = 0x47efffffe0000000;
  _DAT_14cb28040 = 0x47efffffe0000000;
  _DAT_14cb28048 = 0x47efffffe0000000;
  _DAT_14cb28050 = 0x47efffffe0000000;
  _DAT_14cb28058 = 0x47efffffe0000000;
  _DAT_14cb28060 = 0x47efffffe0000000;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 0xc;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14aceba20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acec3c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acecb40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 9;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14aced550);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/StateTreeModule",&PTR_FUN_14acee2a0,1,0);
  local_48 = 0x28e21331;
  uStack_44 = 0x501f4723;
  uStack_40 = 0x8110fa64;
  uStack_3c = 0xea10da1e;
  _DAT_14cb28398 = 0x28e21331;
  uRam000000014cb2839c = 0x501f4723;
  uRam000000014cb283a0 = 0x8110fa64;
  uRam000000014cb283a4 = 0xea10da1e;
  FUN_141005458(&local_48,0x12,L"StateTreeAsset",0);
  atexit((_func_5014 *)&LAB_1438c820a);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acee590);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acee7e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acee970);
  ppuStack_60 = &PTR_FUN_14aceed10;
  uStack_58 = 1;
  local_68 = 3;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14aceed30);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d39f0 FUN_1438d39f0 body=1122 status=ok
// SIG undefined FUN_1438d39f0(void)

void FUN_1438d39f0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  uint local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  wchar_t *local_338;
  code *local_330;
  undefined1 *local_328;
  undefined ***local_320;
  code *local_318;
  code *local_310;
  undefined **local_308 [17];
  undefined8 local_280;
  undefined ***local_278;
  undefined2 local_270;
  undefined **local_268 [5];
  byte local_240;
  longlong *local_210;
  longlong local_1f0;
  undefined ***local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined **local_1c0 [17];
  undefined8 local_138;
  undefined ***local_130;
  undefined2 local_128;
  undefined **local_120 [5];
  byte local_f8;
  longlong *local_c8;
  longlong local_a8;
  undefined ***local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (*(int *)(param_1[2] + 0xd4) < 0) {
    uVar1 = (**(code **)(*(longlong *)param_1[2] + 0x358))();
    local_348 = 0;
    uStack_340 = 0;
    local_358 = 0;
    local_350 = local_350 & 0xffffff00;
    plVar2 = (longlong *)FUN_140584627(param_2,uVar1,0,0);
    local_78[0] = 0;
    local_78[1] = 0;
    memset(local_120,0,0x90);
    FUN_144869430(local_120);
    local_90 = 0;
    local_120[0] = &PTR_FUN_149e1e590;
    local_80 = 0;
    local_f8 = local_f8 | 4;
    local_88 = local_78;
    FUN_1449c2eca(local_120,0);
    local_120[0] = &PTR_FUN_149e1e330;
    FUN_1407134c4(local_1c0,local_120);
    local_138 = local_98;
    local_1c0[0] = &PTR_FUN_149eae6c0;
    local_128 = 1;
    local_130 = local_120;
    local_98 = local_1c0;
    (**(code **)(*param_1 + 0xd8))(param_1);
    memset(local_268,0,0x90);
    FUN_144869430(local_268);
    local_1d8 = 0;
    local_268[0] = &PTR_FUN_149e1e050;
    local_1c8 = 0x7fffffffffffffff;
    local_240 = local_240 | 1;
    local_1d0 = local_78;
    FUN_1449c2eca(local_268,0);
    FUN_1407134c4(local_308,local_268);
    local_280 = local_1e0;
    local_308[0] = &PTR_FUN_149eae6c0;
    local_270 = 1;
    local_278 = local_268;
    local_1e0 = local_308;
    (**(code **)(*plVar2 + 0xd8))(plVar2,local_308);
    FUN_141153d1e();
    if (DAT_14c951858 == 0) {
      local_320 = &local_68;
      local_68 = (undefined **)FUN_1449e2820;
      local_310 = FUN_14081d0ea;
      local_318 = FUN_14081d0ea;
      local_328 = &LAB_1468c5283;
      local_330 = FUN_142809da0;
      local_338 = L"Engine";
      uStack_340 = 0x400000000;
      local_348 = CONCAT44(local_348._4_4_,0x10000000);
      local_350 = 8;
      local_358 = CONCAT44(local_358._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    FUN_14041e0ea(local_308);
    local_268[0] = &PTR__purecall_149e35f70;
    if (local_210 != (longlong *)0x0) {
      if (*local_210 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_210);
    }
    if (local_1f0 != 0) {
      if (*(longlong *)(local_1f0 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_1f0);
    }
    FUN_14041e0ea(local_1c0);
    local_120[0] = &PTR__purecall_149e35f70;
    if (local_c8 != (longlong *)0x0) {
      if (*local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_c8);
    }
    if (local_a8 != 0) {
      if (*(longlong *)(local_a8 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_a8);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_378);
  }
  if (DAT_14c927740 == 0) {
    local_320 = local_120;
    local_120[0] = (undefined **)FUN_1449e2820;
    local_310 = FUN_14081d0ea;
    local_318 = FUN_14081d0ea;
    local_328 = &LAB_146856450;
    local_330 = FUN_1427b121c;
    local_338 = L"Engine";
    uStack_340 = 0;
    local_348 = CONCAT44(local_348._4_4_,0x10000021);
    local_350 = 8;
    local_358 = CONCAT44(local_358._4_4_,0x28);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  if ((local_60 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    FUN_14092e757(DAT_14c927740,param_1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_378);
}



// FUNCTION 1438d3e81 FUN_1438d3e81 body=55 status=ok
// SIG undefined FUN_1438d3e81(void)

void FUN_1438d3e81(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28580 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28580 = FUN_14171c317(FUN_1464532b7,uVar1,L"EStateTreeBindableStructSource");
  }
  return;
}



// FUNCTION 1438d3eb8 FUN_1438d3eb8 body=55 status=ok
// SIG undefined FUN_1438d3eb8(void)

void FUN_1438d3eb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28598 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28598 = FUN_14171c317(FUN_1464532e6,uVar1,L"EStateTreePropertyAccessType");
  }
  return;
}



// FUNCTION 1438d3eef FUN_1438d3eef body=55 status=ok
// SIG undefined FUN_1438d3eef(void)

void FUN_1438d3eef(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb285b0 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb285b0 = FUN_14171c317(FUN_146453315,uVar1,L"EStateTreePropertyCopyType");
  }
  return;
}



// FUNCTION 1438d3f26 FUN_1438d3f26 body=341 status=ok
// SIG undefined FUN_1438d3f26(void)

longlong FUN_1438d3f26(longlong *param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar7 = *param_1;
    lVar8 = 0;
    do {
      uVar3 = uStack_50;
      if (((*(char *)(lVar7 + 0x10 + lVar8) == *param_2) &&
          (*(short *)(lVar7 + 0x12 + lVar8) == *(short *)(param_2 + 2))) &&
         (*(short *)(lVar7 + 0x14 + lVar8) == *(short *)(param_2 + 4))) {
        lVar9 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_147fc0440(&local_58,uVar3 & 0xffffffff);
        }
        lVar5 = local_58;
        lVar1 = *(longlong *)(lVar7 + lVar8);
        *(longlong *)(local_58 + lVar9 * 0x18) = lVar1;
        if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
          FUN_1456cec3c();
        }
        lVar5 = lVar9 * 0x18 + lVar5;
        uVar2 = *(undefined8 *)(lVar7 + 8 + lVar8);
        *(undefined8 *)(lVar5 + 0xf) = *(undefined8 *)(lVar7 + 0xf + lVar8);
        *(undefined8 *)(lVar5 + 8) = uVar2;
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)(int)lVar6 * 0x18 != lVar8);
    if ((longlong)(int)param_1[1] != 0) {
      lVar6 = *param_1;
      lVar7 = (longlong)(int)param_1[1] * 0x18;
      do {
        if (((*(char *)(lVar6 + 0x10) == *param_2) &&
            (*(short *)(lVar6 + 0x12) == *(short *)(param_2 + 2))) &&
           (*(short *)(lVar6 + 0x14) == *(short *)(param_2 + 4))) goto LAB_1438d4042;
        lVar6 = lVar6 + 0x18;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
  }
  lVar6 = 0;
LAB_1438d4042:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d407c FUN_1438d407c body=928 status=ok
// SIG undefined FUN_1438d407c(void)

ulonglong FUN_1438d407c(longlong param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 unaff_R15;
  undefined7 uVar17;
  ulonglong uVar16;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  uint local_ec;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined5 uStack_b0;
  undefined3 local_ab;
  undefined5 uStack_a8;
  undefined8 uStack_a3;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  undefined8 uStack_73;
  undefined4 local_68;
  undefined2 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_147fc0410(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_147fb7044(param_1 + 0x30,*(undefined4 *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0x70) = 1;
  uVar17 = (undefined7)((ulonglong)unaff_R15 >> 8);
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
    uVar16 = CONCAT71(uVar17,1);
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x10);
    local_e0 = plVar8 + (longlong)*(int *)(param_1 + 0x18) * 4;
    uVar16 = CONCAT71(uVar17,1);
    do {
      uVar11 = (ulonglong)*(ushort *)(plVar8 + 3);
      if (*(ushort *)(plVar8 + 3) != *(ushort *)((longlong)plVar8 + 0x1a)) {
        lVar14 = uVar11 * 0x58;
        lVar12 = uVar11 * 0x28 + 0x10;
        local_e8 = plVar8;
        do {
          lVar13 = *(longlong *)(param_1 + 0x20);
          lVar9 = *(longlong *)(param_1 + 0x30);
          uVar2 = *(undefined4 *)(lVar13 + 0x10 + lVar12);
          *(undefined2 *)(lVar9 + 0x50 + lVar14) = *(undefined2 *)(lVar13 + 0x14 + lVar12);
          *(undefined4 *)(lVar9 + 0x4c + lVar14) = uVar2;
          uVar15 = (uint)uVar16;
          if (*(char *)(lVar13 + 0x10 + lVar12) == '\0') {
LAB_1438d424f:
            uVar16 = 0;
            *(undefined1 *)(lVar9 + 0x52 + lVar14) = 0;
            *(undefined1 *)(param_1 + 0x70) = 0;
          }
          else {
            local_64 = *(undefined2 *)(lVar9 + lVar14 + 0x50);
            local_68 = *(undefined4 *)(lVar9 + lVar14 + 0x4c);
            plVar6 = (longlong *)FUN_1438d3f26(param_1,&local_68);
            if (plVar6 == (longlong *)0x0) goto LAB_1438d424f;
            lVar7 = *plVar6;
            lVar3 = *plVar8;
            local_ec = uVar15;
            if (lVar7 == 0 || lVar3 == 0) {
              uVar16 = 0;
              *(undefined1 *)(lVar9 + 0x52 + lVar14) = 0;
              *(undefined1 *)(param_1 + 0x70) = 0;
              plVar8 = local_e8;
            }
            else {
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(lVar7);
              }
              local_d8 = lVar9 + lVar14;
              *(longlong *)(lVar9 + 0x40 + lVar14) = lVar7;
              uStack_78 = 0;
              uStack_73 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              local_7b = 0;
              local_98 = 0;
              uStack_90 = 0;
              uStack_a8 = 0;
              uStack_a3 = 0;
              uStack_b8 = 0;
              uStack_b0 = 0;
              local_ab = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              local_f8 = &local_98;
              cVar4 = FUN_1438d441e(param_1,lVar7,lVar13 + lVar12 + -0x10);
              uVar16 = (ulonglong)local_ec;
              if (cVar4 != '\0') {
                local_f8 = &local_c8;
                cVar4 = FUN_1438d441e(param_1,lVar3,lVar13 + lVar12,lVar9 + lVar14 + 0x18);
                if ((cVar4 != '\0') &&
                   (cVar4 = FUN_147fb70b0(&local_98,&local_c8,local_d8), plVar8 = local_e8,
                   cVar4 != '\0')) goto LAB_1438d426e;
              }
              *(undefined1 *)(lVar9 + 0x52 + lVar14) = 0;
              uVar16 = 0;
              plVar8 = local_e8;
            }
          }
LAB_1438d426e:
          uVar11 = uVar11 + 1;
          lVar14 = lVar14 + 0x58;
          lVar12 = lVar12 + 0x28;
        } while (uVar11 != *(ushort *)((longlong)plVar8 + 0x1a));
      }
      plVar8 = plVar8 + 4;
    } while (plVar8 != local_e0);
  }
  lVar12 = param_1 + 0x50;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_147fc03a0(lVar12,0);
  }
  iVar10 = *(int *)(param_1 + 0x48);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (*(int *)(param_1 + 0x5c) < iVar10) {
    FUN_147fc03a0(lVar12);
    iVar10 = *(int *)(param_1 + 0x48);
  }
  if (iVar10 != 0) {
    lVar14 = *(longlong *)(param_1 + 0x40);
    lVar13 = (longlong)iVar10 * 0x18;
    do {
      lVar7 = FUN_147fb80ae(lVar12);
      uVar1 = *(undefined2 *)(lVar14 + 0x14);
      *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(lVar14 + 0x10);
      *(undefined2 *)(lVar7 + 0x2c) = uVar1;
      local_d0 = *(undefined4 *)(lVar7 + 0x28);
      local_cc = *(undefined2 *)(lVar7 + 0x2c);
      plVar8 = (longlong *)FUN_1438d3f26(param_1,&local_d0);
      lVar9 = *plVar8;
      if (DAT_14c950c29 == '\x01') {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *plVar8;
        }
      }
      *(longlong *)(lVar7 + 0x20) = lVar9;
      uStack_78 = 0;
      uStack_73 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      local_7b = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_f8 = &local_98;
      bVar5 = FUN_1438d441e(param_1,*plVar8,lVar14,lVar7);
      uVar16 = CONCAT71((int7)(uVar16 >> 8),(byte)uVar16 & bVar5);
      *(undefined8 *)(lVar7 + 0x18) = local_98;
      lVar14 = lVar14 + 0x18;
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffff01;
}



// FUNCTION 1438d441e FUN_1438d441e body=1403 status=ok
// SIG undefined FUN_1438d441e(void)

ulonglong FUN_1438d441e(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                       undefined8 *param_5)

{
  short *psVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  undefined2 uVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  undefined *puVar21;
  longlong lVar22;
  ulonglong unaff_RBP;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_238 [32];
  ulonglong local_218;
  undefined8 local_210;
  undefined *local_208;
  code *local_200;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8 [48];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (param_2 == 0) {
    unaff_RBP = 0;
    goto LAB_1438d444a;
  }
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = (longlong *)0x0;
  uStack_1f0 = 0;
  local_1d8[1] = 0;
  local_218 = local_218 & 0xffffffffffffff00;
  local_1d8[0] = param_2;
  cVar12 = FUN_147fb9824(param_3,local_1d8,&local_1f8);
  if (cVar12 == '\0') {
    unaff_RBP = 0;
  }
  else {
    local_58 = (longlong *)0x0;
    local_50 = 0x1000000000;
    if ((longlong)(int)uStack_1f0 == 0) {
LAB_1438d47e5:
      *(undefined2 *)((longlong)param_4 + 2) = 0;
      *(undefined1 *)((longlong)param_4 + 6) = 0;
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = param_2;
      param_5[3] = 0;
      param_5[4] = 0;
      *(undefined8 *)((longlong)param_5 + 0x25) = 0;
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    }
    else {
      plVar15 = local_1f8 + (longlong)(int)uStack_1f0 * 6;
      plVar18 = local_1f8;
      do {
        puVar14 = (undefined2 *)FUN_147fb80ee(local_1d8);
        puVar14[1] = *(undefined2 *)((longlong)plVar18 + 0x24);
        bVar2 = *(byte *)((longlong)plVar18 + 0x2c);
        *(byte *)(puVar14 + 3) = bVar2;
        if (bVar2 - 4 < 2) {
          unaff_RBP = plVar18[3];
          if (unaff_RBP == 0) goto LAB_1438d4947;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(unaff_RBP);
          }
          *(ulonglong *)(puVar14 + 4) = unaff_RBP;
        }
        else if (bVar2 == 6) {
          lVar22 = *plVar18;
          if (lVar22 != 0) {
            puVar21 = *(undefined **)(lVar22 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
            {
              FUN_1446ddbd2();
              local_200 = FUN_140b31576;
              local_208 = &DAT_14c951a38;
              local_210 = 0;
              local_218 = 0x208001;
              FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
              atexit(FUN_14280cbf7);
              _Init_thread_footer(&DAT_14c951ae0);
            }
            if (DAT_14c951a98 == 0) {
              bVar26 = puVar21 != (undefined *)0x0;
              if (puVar21 != &DAT_14c951a90 && bVar26) {
                do {
                  puVar21 = *(undefined **)(puVar21 + 0x30);
                  bVar26 = puVar21 != (undefined *)0x0;
                  if (puVar21 == &DAT_14c951a90) break;
                } while (puVar21 != (undefined *)0x0);
              }
              if (bVar26) goto LAB_1438d45e4;
            }
            else if ((*(ulonglong *)(puVar21 + 0x18) & DAT_14c951a98) != 0) {
LAB_1438d45e4:
              *(longlong *)(puVar14 + 8) = lVar22;
              iVar13 = (int)plVar18[4];
              unaff_RBP = 0;
              iVar17 = 0;
              if (0 < iVar13) {
                iVar17 = iVar13;
              }
              uVar16 = (undefined2)iVar17;
              if (0xfffe < iVar17) {
                uVar16 = 0xffff;
              }
              *puVar14 = uVar16;
              if (iVar13 < 0xffff) goto LAB_1438d4613;
              goto LAB_1438d4949;
            }
          }
LAB_1438d4947:
          unaff_RBP = 0;
          goto LAB_1438d4949;
        }
LAB_1438d4613:
        plVar18 = plVar18 + 6;
      } while (plVar18 != plVar15);
      if ((int)local_50 < 1) goto LAB_1438d47e5;
      iVar17 = 0;
      iVar13 = (int)local_50;
      do {
        plVar18 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar18 = local_1d8;
        }
        iVar20 = iVar17 + 1;
        if (iVar20 < iVar13) {
          plVar15 = plVar18 + (longlong)iVar20 * 3;
          cVar12 = *(char *)((longlong)plVar18 + (longlong)iVar17 * 0x18 + 6);
          cVar3 = *(char *)((longlong)plVar15 + 6);
          if (cVar12 == '\0' && cVar3 == '\0') {
            psVar1 = (short *)((longlong)plVar18 + (longlong)iVar17 * 0x18 + 2);
            *psVar1 = *psVar1 + *(short *)((longlong)plVar15 + 2);
            iVar24 = ((int)local_50 - iVar17) + -2;
            iVar13 = (int)local_50;
            if (iVar24 != 0) {
              plVar15 = local_58;
              if (local_58 == (longlong *)0x0) {
                plVar15 = local_1d8;
              }
              plVar15 = plVar15 + (longlong)iVar20 * 3;
LAB_1438d47b0:
              memmove(plVar15,plVar15 + 3,(longlong)iVar24 * 0x18);
              iVar13 = (int)local_50;
            }
          }
          else {
            sVar4 = *(short *)((longlong)plVar15 + 2);
            if (((((cVar12 != '\x06') || (cVar3 != '\0')) || (sVar4 != 0)) &&
                (((cVar12 != '\x05' || (cVar3 != '\0')) || (sVar4 != 0)))) &&
               (((cVar12 != '\x04' && (cVar12 != '\x01')) || (cVar3 != '\0' || sVar4 != 0))))
            goto LAB_1438d4765;
            iVar24 = (iVar13 - iVar17) + -2;
            if (iVar24 != 0) goto LAB_1438d47b0;
          }
          local_50 = CONCAT44(local_50._4_4_,iVar13 + -1);
          FUN_147fc085a(local_1d8);
          iVar13 = (int)local_50;
          iVar20 = iVar17;
        }
LAB_1438d4765:
        iVar17 = iVar20;
        plVar18 = local_58;
      } while (iVar17 < iVar13);
      lVar19 = (longlong)((int)uStack_1f0 + -1);
      plVar15 = local_1f8 + lVar19 * 6;
      lVar22 = *plVar15;
      uVar5 = *(undefined4 *)((longlong)plVar15 + 4);
      lVar25 = plVar15[1];
      uVar7 = *(undefined4 *)((longlong)plVar15 + 0xc);
      plVar15 = local_1f8 + lVar19 * 6 + 2;
      lVar23 = *plVar15;
      uVar8 = *(undefined4 *)((longlong)plVar15 + 4);
      lVar6 = plVar15[1];
      uVar9 = *(undefined4 *)((longlong)plVar15 + 0xc);
      plVar15 = local_1f8 + lVar19 * 6 + 4;
      uVar10 = *(undefined4 *)((longlong)plVar15 + 4);
      lVar19 = plVar15[1];
      uVar11 = *(undefined4 *)((longlong)plVar15 + 0xc);
      *(int *)(param_5 + 4) = (int)*plVar15;
      *(undefined4 *)((longlong)param_5 + 0x24) = uVar10;
      *(int *)(param_5 + 5) = (int)lVar19;
      *(undefined4 *)((longlong)param_5 + 0x2c) = uVar11;
      *(int *)(param_5 + 2) = (int)lVar23;
      *(undefined4 *)((longlong)param_5 + 0x14) = uVar8;
      *(int *)(param_5 + 3) = (int)lVar6;
      *(undefined4 *)((longlong)param_5 + 0x1c) = uVar9;
      *(int *)param_5 = (int)lVar22;
      *(undefined4 *)((longlong)param_5 + 4) = uVar5;
      *(int *)(param_5 + 1) = (int)lVar25;
      *(undefined4 *)((longlong)param_5 + 0xc) = uVar7;
      plVar15 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar15 = local_1d8;
      }
      lVar22 = *plVar15;
      *(undefined4 *)((longlong)param_4 + 3) = *(undefined4 *)((longlong)plVar15 + 3);
      *param_4 = (int)lVar22;
      lVar22 = plVar15[1];
      if (DAT_14c950c29 == '\x01') {
        if (lVar22 == 0) {
          lVar22 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar22 = plVar15[1];
          iVar13 = (int)local_50;
        }
      }
      *(longlong *)(param_4 + 2) = lVar22;
      if (plVar18 == (longlong *)0x0) {
        plVar18 = local_1d8;
      }
      *(longlong *)(param_4 + 4) = plVar18[2];
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
      if (1 < iVar13) {
        lVar22 = 1;
        lVar25 = 0x28;
        do {
          *(undefined2 *)(param_4 + 1) = *(undefined2 *)(param_1 + 0x68);
          plVar18 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar18 = local_1d8;
          }
          iVar13 = *(int *)(param_1 + 0x68);
          lVar23 = (longlong)iVar13;
          *(uint *)(param_1 + 0x68) = iVar13 + 1U;
          if (*(uint *)(param_1 + 0x6c) < iVar13 + 1U) {
            FUN_147fc0920((longlong *)(param_1 + 0x60),iVar13);
          }
          lVar6 = *(longlong *)(param_1 + 0x60);
          uVar5 = *(undefined4 *)((longlong)plVar18 + lVar25 + -0x10);
          *(undefined4 *)(lVar6 + 3 + lVar23 * 0x18) =
               *(undefined4 *)((longlong)plVar18 + lVar25 + -0xd);
          *(undefined4 *)(lVar6 + lVar23 * 0x18) = uVar5;
          lVar19 = *(longlong *)((longlong)plVar18 + lVar25 + -8);
          *(longlong *)(lVar6 + 8 + lVar23 * 0x18) = lVar19;
          if ((DAT_14c950c29 == '\x01') && (lVar19 != 0)) {
            FUN_1456cec3c();
          }
          param_4 = (undefined4 *)(lVar23 * 0x18 + lVar6);
          *(undefined8 *)(param_4 + 4) = *(undefined8 *)((longlong)plVar18 + lVar25);
          lVar22 = lVar22 + 1;
          lVar25 = lVar25 + 0x18;
        } while (lVar22 < (int)local_50);
      }
    }
LAB_1438d4949:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_1f8 != (longlong *)0x0) {
    FUN_1400020a8(local_1f8);
  }
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
LAB_1438d444a:
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1438d499a FUN_1438d499a body=515 status=ok
// SIG undefined FUN_1438d499a(void)

longlong FUN_1438d499a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  
  puVar3 = (undefined *)param_1[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0,0x1008041,0,&DAT_14c9520b8,FUN_1409f1a5c);
    atexit(FUN_14281201f);
    _Init_thread_footer(&DAT_14c951d78);
  }
  if (DAT_14c951d30 == 0) {
    bVar4 = puVar3 != (undefined *)0x0;
    if (puVar3 != &DAT_14c951d28 && bVar4) {
      do {
        puVar3 = *(undefined **)(puVar3 + 0x30);
        bVar4 = puVar3 != (undefined *)0x0;
        if (puVar3 == &DAT_14c951d28) break;
      } while (puVar3 != (undefined *)0x0);
    }
    if (bVar4) goto LAB_1438d49de;
  }
  else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c951d30) != 0) {
LAB_1438d49de:
                    /* WARNING: Could not recover jumptable at 0x0001438d49ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(*param_1 + 0x1f0))(param_1);
    return lVar1;
  }
  puVar3 = (undefined *)param_1[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    uVar2 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0,0x1000000008001,0,uVar2,
                  FUN_140a4831c);
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  if (DAT_14c949690 == 0) {
    bVar4 = puVar3 != (undefined *)0x0;
    if (puVar3 != &DAT_14c949688 && bVar4) {
      do {
        puVar3 = *(undefined **)(puVar3 + 0x30);
        bVar4 = puVar3 != (undefined *)0x0;
        if (puVar3 == &DAT_14c949688) break;
      } while (puVar3 != (undefined *)0x0);
    }
    if (!bVar4) {
      return 0;
    }
  }
  else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c949690) == 0) {
    return 0;
  }
  return param_1[0xf];
}



// FUNCTION 1438d4b9d FUN_1438d4b9d body=55 status=ok
// SIG undefined FUN_1438d4b9d(void)

void FUN_1438d4b9d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb287c0 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb287c0 = FUN_14171c317(FUN_146453f66,uVar1,L"EStateTreeTransitionType");
  }
  return;
}



// FUNCTION 1438d4bd4 FUN_1438d4bd4 body=55 status=ok
// SIG undefined FUN_1438d4bd4(void)

void FUN_1438d4bd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb287d8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb287d8 = FUN_14171c317(FUN_146453f95,uVar1,L"EStateTreeExpressionOperand");
  }
  return;
}



// FUNCTION 1438d4c0b FUN_1438d4c0b body=55 status=ok
// SIG undefined FUN_1438d4c0b(void)

void FUN_1438d4c0b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb287f0 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb287f0 = FUN_14171c317(FUN_146453fc4,uVar1,L"EStateTreeStateType");
  }
  return;
}



// FUNCTION 1438d4c42 FUN_1438d4c42 body=55 status=ok
// SIG undefined FUN_1438d4c42(void)

void FUN_1438d4c42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28808 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28808 = FUN_14171c317(FUN_146453ff3,uVar1,L"EStateTreeStateSelectionBehavior");
  }
  return;
}



// FUNCTION 1438d4c79 FUN_1438d4c79 body=55 status=ok
// SIG undefined FUN_1438d4c79(void)

void FUN_1438d4c79(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28820 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28820 = FUN_14171c317(FUN_146454022,uVar1,L"EStateTreeTransitionTrigger");
  }
  return;
}



// FUNCTION 1438d4cb0 FUN_1438d4cb0 body=55 status=ok
// SIG undefined FUN_1438d4cb0(void)

void FUN_1438d4cb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28838 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28838 = FUN_14171c317(FUN_146453e6c,uVar1,L"EStateTreeTransitionPriority");
  }
  return;
}



// FUNCTION 1438d4ce7 FUN_1438d4ce7 body=55 status=ok
// SIG undefined FUN_1438d4ce7(void)

void FUN_1438d4ce7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28868 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28868 = FUN_14171c317(FUN_1464540ba,uVar1,L"EStateTreeDataSourceType");
  }
  return;
}



// FUNCTION 1438d4d1e FUN_1438d4d1e body=55 status=ok
// SIG undefined FUN_1438d4d1e(void)

void FUN_1438d4d1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb288b0 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb288b0 = FUN_14171c317(FUN_1464541e8,uVar1,L"EStateTreeSelectionFallback");
  }
  return;
}



// FUNCTION 1438d4d55 FUN_1438d4d55 body=55 status=ok
// SIG undefined FUN_1438d4d55(void)

void FUN_1438d4d55(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28928 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28928 = FUN_14171c317(FUN_146454472,uVar1,L"EStateTreeExternalDataRequirement");
  }
  return;
}



// FUNCTION 1438d4d8c FUN_1438d4d8c body=55 status=ok
// SIG undefined FUN_1438d4d8c(void)

void FUN_1438d4d8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28940 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28940 = FUN_14171c317(FUN_1464544a1,uVar1,L"EStateTreePropertyUsage");
  }
  return;
}



// FUNCTION 1438d4dc4 FUN_1438d4dc4 body=336 status=ok
// SIG undefined FUN_1438d4dc4(void)

ulonglong FUN_1438d4dc4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  longlong *plVar8;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  longlong local_148;
  ulonglong local_38;
  undefined7 uVar7;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar1 = *(longlong **)(param_2 + 0x100);
  if (((*(longlong *)(param_1 + 0x28) != 0) &&
      (plVar2 = *(longlong **)(param_2 + 0x38), plVar2 != (longlong *)0x0)) &&
     ((longlong)(int)plVar2[1] != 0)) {
    plVar8 = (longlong *)(*plVar2 + 8);
    lVar5 = (longlong)(int)plVar2[1] * 0x30;
    do {
      if (plVar8[-1] == *(longlong *)(param_1 + 0x28)) {
        if (plVar8 != (longlong *)0x0) goto LAB_1438d4e33;
        break;
      }
      plVar8 = plVar8 + 6;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
  }
  plVar8 = plVar1;
LAB_1438d4e33:
  lVar5 = *plVar8;
  uVar7 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (lVar5 != 0) {
    if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
      FUN_147fb62e0(plVar1[5],**(longlong **)(param_2 + 0x18) + 0x58);
      lVar5 = *plVar8;
    }
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    plVar1[7] = lVar5;
    FUN_1438c9d48(local_158,param_2,lVar5,plVar1 + 5);
    uVar6 = CONCAT71(uVar7,1);
    if (((0 < *(int *)(local_148 + 0x48)) && (*(char *)(local_148 + 400) == '\x01')) &&
       (*(char *)(local_148 + 0x128) == '\x01')) {
      cVar3 = FUN_147fbaace(plVar8);
      if (cVar3 != '\0') {
        FUN_147fba96c(plVar8);
      }
      uVar4 = FUN_1438c9e70(local_158,plVar8 + 1,0xffffffff);
      uVar6 = (ulonglong)uVar4;
    }
    FUN_147fab72e(local_158);
  }
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1438d5146 FUN_1438d5146 body=2006 status=ok
// SIG undefined FUN_1438d5146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d5146(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cb284a8 = 0xffff0000;
  _DAT_14cb284ac = 0xffff;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acf35c0);
  local_48 = -0x74d9b3cb9f3b0f22;
  uStack_40 = 0xaa937201;
  uStack_3c = 0x5dff09cc;
  _DAT_14cb28510 = 0x60c4f0de;
  uRam000000014cb28514 = 0x8b264c34;
  uRam000000014cb28518 = 0xaa937201;
  uRam000000014cb2851c = 0x5dff09cc;
  FUN_141005458(&local_48,1,L"StateTreeInstanceStorage",0);
  atexit((_func_5014 *)&LAB_1438d39e4);
  local_48 = -0x7ffffffeb530c938;
  local_34 = 0xf;
  uStack_40 = FUN_14577453c();
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  FUN_1464531f6(&local_48);
  _DAT_14cb28528 = 0x47efffffe0000000;
  _DAT_14cb28530 = 0x47efffffe0000000;
  _DAT_14cb28538 = 0x47efffffe0000000;
  _DAT_14cb28540 = 0x47efffffe0000000;
  _DAT_14cb28548 = 0x47efffffe0000000;
  _DAT_14cb28550 = 0x47efffffe0000000;
  _DAT_14cb28558 = 0x47efffffe0000000;
  _DAT_14cb28560 = 0x47efffffe0000000;
  _DAT_14cb28568 = 0x47efffffe0000000;
  _DAT_14cb28570 = 0x47efffffe0000000;
  uStack_58 = 3;
  ppuStack_60 = &PTR_FUN_14acf55e0;
  local_68 = 0xd;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acf5640);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acf5c10);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acf6080);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/StateTreeModule",&PTR_FUN_14acf6440,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acf6670);
  ppuStack_60 = &PTR_FUN_14acf8790;
  uStack_58 = 10;
  local_68 = 0xc;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acf88d0);
  FUN_140056680(&local_48,L"#949494");
  FUN_1415445ba(&DAT_14cb289c8,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_48,L"#DE6659");
  FUN_1415445ba(&DAT_14cb289cc,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_48,L"#E3983F");
  FUN_1415445ba(&DAT_14cb289d0,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_48,L"#EFD964");
  FUN_1415445ba(&DAT_14cb289d4,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_48,L"#8AB75E");
  FUN_1415445ba(&DAT_14cb289d8,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_48,L"#56C3BD");
  FUN_1415445ba(&DAT_14cb289dc,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_48,L"#649ED3");
  FUN_1415445ba(&DAT_14cb289e0,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_48,L"#B397D6");
  FUN_1415445ba(&DAT_14cb289e4,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_48,L"#CE85C7");
  FUN_1415445ba(&DAT_14cb289e8,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb289ec = 0xff8c7853;
  DAT_14cb289f0 = (undefined1)(((DAT_14cb289c8 & 0xff) * 0x99) / 0xff);
  DAT_14cb289f1 = (undefined1)(((DAT_14cb289c8 >> 8 & 0xff) * 0x99) / 0xff);
  DAT_14cb289f2 = (undefined1)(((DAT_14cb289c8 >> 0x10 & 0xff) * 0x99) / 0xff);
  DAT_14cb289f3 = (undefined1)(DAT_14cb289c8 >> 0x18);
  DAT_14cb289f4 = (undefined1)(((DAT_14cb289cc & 0xff) * 0x99) / 0xff);
  DAT_14cb289f5 = (undefined1)(((DAT_14cb289cc >> 8 & 0xff) * 0x99) / 0xff);
  DAT_14cb289f6 = (undefined1)(((DAT_14cb289cc >> 0x10 & 0xff) * 0x99) / 0xff);
  DAT_14cb289f7 = (undefined1)(DAT_14cb289cc >> 0x18);
  DAT_14cb289f8 = (undefined1)(((DAT_14cb289d0 & 0xff) * 0x99) / 0xff);
  DAT_14cb289f9 = (undefined1)(((DAT_14cb289d0 >> 8 & 0xff) * 0x99) / 0xff);
  DAT_14cb289fa = (undefined1)(((DAT_14cb289d0 >> 0x10 & 0xff) * 0x99) / 0xff);
  DAT_14cb289fb = (undefined1)(DAT_14cb289d0 >> 0x18);
  DAT_14cb289fc = (undefined1)(((DAT_14cb289d4 & 0xff) * 0x99) / 0xff);
  DAT_14cb289fd = (undefined1)(((DAT_14cb289d4 >> 8 & 0xff) * 0x99) / 0xff);
  DAT_14cb289fe = (undefined1)(((DAT_14cb289d4 >> 0x10 & 0xff) * 0x99) / 0xff);
  DAT_14cb289ff = (undefined1)(DAT_14cb289d4 >> 0x18);
  DAT_14cb28a00 = (undefined1)(((DAT_14cb289d8 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a01 = (undefined1)(((DAT_14cb289d8 >> 8 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a02 = (undefined1)(((DAT_14cb289d8 >> 0x10 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a03 = (undefined1)(DAT_14cb289d8 >> 0x18);
  DAT_14cb28a04 = (undefined1)(((DAT_14cb289dc & 0xff) * 0x99) / 0xff);
  DAT_14cb28a05 = (undefined1)(((DAT_14cb289dc >> 8 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a06 = (undefined1)(((DAT_14cb289dc >> 0x10 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a07 = (undefined1)(DAT_14cb289dc >> 0x18);
  DAT_14cb28a08 = (undefined1)(((DAT_14cb289e0 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a09 = (undefined1)(((DAT_14cb289e0 >> 8 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a0a = (undefined1)(((DAT_14cb289e0 >> 0x10 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a0b = (undefined1)(DAT_14cb289e0 >> 0x18);
  DAT_14cb28a0c = (undefined1)(((DAT_14cb289e4 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a0d = (undefined1)(((DAT_14cb289e4 >> 8 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a0e = (undefined1)(((DAT_14cb289e4 >> 0x10 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a0f = (undefined1)(DAT_14cb289e4 >> 0x18);
  DAT_14cb28a10 = (undefined1)(((DAT_14cb289e8 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a11 = (undefined1)(((DAT_14cb289e8 >> 8 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a12 = (undefined1)(((DAT_14cb289e8 >> 0x10 & 0xff) * 0x99) / 0xff);
  DAT_14cb28a13 = (undefined1)(DAT_14cb289e8 >> 0x18);
  _DAT_14cb28a14 = 0xff544831;
  DAT_14cb28a84 = 0xfffe;
  DAT_14cb28a82 = 0xfffd;
  DAT_14cb28a18 = 0xfffc;
  DAT_14cb28a80 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acf8e20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/StateTreeModule",0,0,&PTR_FUN_14acf9060);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d5937 FUN_1438d5937 body=55 status=ok
// SIG undefined FUN_1438d5937(void)

void FUN_1438d5937(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28b68 == 0) {
    uVar1 = FUN_141462ba5();
    DAT_14cb28b68 = FUN_14171c317(FUN_146455184,uVar1,L"ETemplateSectionPropertyScaleType");
  }
  return;
}



// FUNCTION 1438d596e FUN_1438d596e body=1293 status=ok
// SIG undefined FUN_1438d596e(void)

longlong *
FUN_1438d596e(short *param_1,longlong *param_2,longlong param_3,undefined8 param_4,longlong param_5,
             longlong *param_6)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_168 [40];
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 *local_108;
  ulonglong local_100;
  undefined8 local_f0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_90;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) &&
     (cVar3 = FUN_147fca940(param_1,param_3), cVar3 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined8 *)0x0;
      local_100 = 0x400000000;
      FUN_147fcc8f4(param_1,param_4,&local_128);
      puVar12 = (undefined8 *)0x0;
      if ((int)local_100 != 0) {
        puVar12 = &local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar6 = (uint *)*puVar1;
      if (puVar6 != (uint *)0x0) goto LAB_1438d5b84;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_1438d709c);
        }
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar5 = *(undefined4 **)(lVar11 + 0x310);
        *(undefined8 *)(lVar11 + 0x310) = 0;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar5 = 0xffffffff;
        *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        FUN_140217a48(puVar1);
        puVar6 = (uint *)*puVar1;
LAB_1438d5b84:
        puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar13 + 0x32);
        uVar8 = puVar6[0x12];
        if (puVar9 <= puVar6 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
          LOCK();
          uVar4 = *puVar6;
          *puVar6 = *puVar6 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar6 = (uint *)*puVar1;
          *puVar6 = 0xffffffff;
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          puVar13 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
          puVar9 = (uint *)(puVar13 + 0x32);
          uVar8 = 0;
          if (puVar9 <= puVar6 + 0x4000) {
            uVar8 = 1;
            goto LAB_1438d5c06;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_1438d5c06:
      *(uint **)(puVar6 + 0x10) = puVar9;
      puVar6[0x12] = uVar8;
      FUN_1447247dc(puVar13,puVar12);
      *puVar13 = &PTR_FUN_14ad04830;
      FUN_147fccc78(puVar13 + 0x15,param_3,param_1,param_6);
      uVar8 = *(uint *)((longlong)puVar13 + 0xb4);
      if (((ulonglong)uVar8 & 0xff) == 0xff) {
        uVar4 = uVar8 >> 10 & 3;
        iVar10 = 0;
        if ((uVar8 >> 9 & 1) == 0 || uVar4 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
          iVar10 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar10 = (uVar8 >> 7 & 2 | uVar8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar8 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
      }
      puVar13[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar13[9] = puVar13;
      puVar13[10] = puVar13;
      lVar11 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar11 == 0) {
        uVar2 = 1;
        if ((char)uVar14 != '\x06') {
          uVar2 = uVar14;
        }
        uVar14 = uVar2;
        uVar7 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
        }
        uVar7 = *(undefined8 *)(lVar11 + 0x30);
      }
      puVar13[0xf] = uVar7;
      puVar13[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar13 + 0x1c) = iVar10;
      *param_2 = (longlong)puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        lVar11 = 0;
      }
      else {
        LOCK();
        *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
        UNLOCK();
        lVar11 = *param_2;
      }
      local_138 = CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(lVar11);
      if (param_5 != 0) {
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        local_138 = lVar11;
        FUN_1432da764(param_5,&local_138);
        local_140 = *param_2;
        if (local_140 != 0) {
          LOCK();
          *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
          UNLOCK();
        }
        FUN_1432da764(param_5,&local_140);
      }
      puVar12 = &local_128;
      if (local_108 != (undefined8 *)0x0) {
        puVar12 = local_108;
      }
      FUN_144717c65(puVar12,local_100 & 0xffffffff);
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1438d59b5;
    }
    local_138 = *param_6;
    local_130 = *(undefined8 *)(*(longlong *)(local_138 + 0x28) + 0x548);
    local_118 = *(undefined4 *)(param_1 + 8);
    local_128 = *(undefined8 *)param_1;
    uStack_120 = *(undefined8 *)(param_1 + 4);
    local_f0 = 0x10000000000;
    local_c8 = 0x10000000000;
    local_90 = 0x10000000000;
    local_c0 = 0;
    uStack_b8 = 0;
    local_68 = 0x10000000000;
    FUN_147fca9ea(&local_128);
    local_58 = *(undefined8 *)(param_3 + 0x248);
    local_60 = param_3;
    FUN_1438d6f48(&local_128,&local_138);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1438d59b5:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d5e7c FUN_1438d5e7c body=1171 status=ok
// SIG undefined FUN_1438d5e7c(void)

undefined8 *
FUN_1438d5e7c(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined1 local_138 [32];
  undefined1 *local_118;
  ulonglong local_110;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((*param_1 != -1) && (param_1[2] != -1)) && (param_1[3] != -1)) &&
     (cVar4 = FUN_147fcb040(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_118 = (undefined1 *)0x0;
      local_110 = 0x400000000;
      FUN_147fccd92(param_1,param_4,local_138);
      puVar11 = (undefined1 *)0x0;
      if ((int)local_110 != 0) {
        puVar11 = local_138;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1438d6040;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1438d709c);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1438d6040:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x34);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x34);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1438d60c2;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1438d60c2:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar11);
      *puVar14 = &PTR_FUN_14ad04840;
      FUN_147fccd02(puVar14 + 0x15,param_3,param_1);
      puVar14[0x33] = *param_6;
      uVar9 = *(uint *)((longlong)puVar14 + 0xcc);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar13 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar12 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar13 = 0;
        }
        else {
          uVar12 = 2;
        }
      }
      else {
        iVar13 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar12 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar12 != '\x06') {
          uVar3 = uVar12;
        }
        uVar12 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar12 == '\x06') {
          uVar12 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar12 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar13;
      *param_2 = puVar14;
      uVar8 = 0;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        uVar8 = *param_2;
      }
      local_140 = CONCAT71(local_140._1_7_,1);
      FUN_1447439e4(uVar8);
      if (param_5 != 0) {
        FUN_147fcd058(param_1,param_2,param_5);
      }
      puVar11 = local_138;
      if (local_118 != (undefined1 *)0x0) {
        puVar11 = local_118;
      }
      FUN_144717c65(puVar11,local_110 & 0xffffffff);
      if (local_118 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1438d5ec2;
    }
    local_140 = *param_6;
    FUN_147fccd02(local_138,param_3,param_1);
    FUN_1438d723c(local_138,&local_140);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1438d5ec2:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d6310 FUN_1438d6310 body=1172 status=ok
// SIG undefined FUN_1438d6310(void)

undefined8 *
FUN_1438d6310(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((*param_1 != -1) && (param_1[2] != -1)) && (param_1[3] != -1)) &&
     ((param_1[5] != -1 && (cVar4 = FUN_147fcc2e0(param_1,param_3), cVar4 != '\0')))) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_147fce010(param_1,param_4,local_120);
      puVar11 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar11 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1438d64d8;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1438d709c);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1438d64d8:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x31);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x31);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1438d655a;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1438d655a:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar11);
      *puVar14 = &PTR_FUN_14ad04850;
      FUN_147fcdf90(puVar14 + 0x15,param_3,param_1);
      puVar14[0x30] = *param_6;
      uVar9 = *(uint *)(puVar14 + 0x17);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar13 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar12 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar13 = 0;
        }
        else {
          uVar12 = 2;
        }
      }
      else {
        iVar13 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar12 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar12 != '\x06') {
          uVar3 = uVar12;
        }
        uVar12 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar12 == '\x06') {
          uVar12 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar12 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar13;
      *param_2 = puVar14;
      uVar8 = 0;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        uVar8 = *param_2;
      }
      local_128 = CONCAT71(local_128._1_7_,1);
      FUN_1447439e4(uVar8);
      if (param_5 != 0) {
        FUN_147fce154(param_1,param_2);
      }
      puVar11 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar11 = local_100;
      }
      FUN_144717c65(puVar11,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1438d635d;
    }
    local_128 = *param_6;
    FUN_147fcdf90(local_120,param_3,param_1);
    FUN_1438d74e8(local_120,&local_128);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1438d635d:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d67a6 FUN_1438d67a6 body=1536 status=ok
// SIG undefined FUN_1438d67a6(void)

int * FUN_1438d67a6(longlong *param_1,int *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong *puVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_198 [32];
  uint local_178;
  uint local_174;
  int *local_170;
  ulonglong local_168;
  int local_15c;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  int local_130;
  longlong local_128;
  int local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined5 uStack_f0;
  undefined3 uStack_eb;
  undefined5 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined8 local_c4;
  byte local_bc;
  undefined1 local_b8;
  uint local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar12 = (**(code **)(*param_1 + 0x2f0))(param_1,param_3);
  if (lVar12 == 0) {
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    FUN_1438d67a6(param_1,&local_78,lVar12);
    if (((local_78._4_4_ == 0 && (int)local_78 == 0) && (int)uStack_70 == 0) && uStack_70._4_4_ == 0
       ) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_1438d681f;
    }
  }
  uVar13 = (**(code **)(*param_3 + 0x180))(param_3);
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0x100;
  local_94 = 0x3f800000;
  local_90 = 0;
  local_88 = 0;
  local_84 = 2;
  lVar14 = FUN_147fc55c2(uVar13,param_1,&local_a8,&local_80);
  local_140 = local_80;
  *(undefined1 *)(local_80 + 0x3f0) = 0;
  local_d8 = (ulonglong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0x100;
  local_c4 = 0x3f800000;
  local_bc = local_bc & 0xc0;
  local_b8 = 0;
  local_b4 = local_b4 & 0xfffffff8 | 2;
  local_150 = uVar13;
  FUN_147fc5798(lVar14,param_1,uVar13);
  local_158 = lVar14 + 0x28;
  FUN_147555d50(lVar14 + 0x38,&DAT_14cb28aa4,param_1);
  local_118 = *(undefined4 *)(param_1[0xd] + 0x10c);
  local_114 = 0;
  local_e0 = 0x1000000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_168 = 0;
  uStack_eb = 0;
  uStack_e8 = 0;
  local_148 = lVar14;
  FUN_146341752(lVar14,&local_118,1);
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  local_174 = 0;
  local_178 = 0;
  iVar11 = 0;
  lVar14 = 0;
  local_170 = param_2;
  do {
    lVar15 = (**(code **)(*param_1 + 0x2e8))(param_1);
    if (*(int *)(lVar15 + 0x88) <= lVar14) {
      uVar9 = local_174 | (uint)local_168 | local_178;
      break;
    }
    lVar15 = (**(code **)(*param_1 + 0x2e8))(param_1);
    FUN_1401abe9c(local_158,&local_d8,*(longlong *)(lVar15 + 0x80) + lVar14 * 0x30,&DAT_14cb28aa4);
    if ((longlong)(int)uStack_d0 != 0) {
      puVar1 = local_d8 + (int)uStack_d0;
      puVar17 = local_d8;
      local_15c = iVar11;
      do {
        uVar5 = *puVar17;
        if ((((uVar5 >> 0x20 != 0) && (uVar9 = (uint)uVar5, -1 < (int)uVar9)) &&
            ((int)uVar9 < DAT_14c9647dc)) &&
           (((plVar16 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0xd & 0x3fff8))),
             plVar16 != (longlong *)0x0 && ((int)plVar16[2] == (int)(uVar5 >> 0x20))) &&
            ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
            lVar15 = *plVar16;
          }
          else {
            lVar15 = 0;
          }
          if (*(longlong *)(lVar15 + 0x10) == param_3[2]) {
            if (lVar12 != 0) {
              if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                lVar15 = *plVar16;
              }
              else {
                lVar15 = 0;
              }
              local_138 = *(longlong *)(lVar15 + 0x18);
              FUN_1400021e4(&local_138,&local_128);
              local_68 = param_3[3];
              FUN_1400021e4(&local_68,&local_138);
              if (local_120 == local_130) {
                bVar19 = true;
                if (1 < local_120) {
                  lVar15 = 0;
                  while( true ) {
                    uVar3 = *(ushort *)(local_128 + lVar15);
                    uVar9 = (uint)uVar3;
                    uVar4 = *(ushort *)(local_138 + lVar15);
                    uVar18 = (uint)uVar4;
                    if (uVar3 != uVar4) {
                      if ((uVar4 | uVar3) < 0x80) {
                        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                        if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1438d6b10;
                      }
                      iVar11 = uVar9 - uVar18;
                      goto LAB_1438d6b52;
                    }
                    if (uVar3 == 0) break;
LAB_1438d6b10:
                    lVar15 = lVar15 + 2;
                  }
                  iVar11 = 0;
LAB_1438d6b52:
                  bVar19 = iVar11 == 0;
                }
              }
              else {
                bVar19 = local_130 + local_120 == 1;
              }
              if (local_138 != 0) {
                FUN_1400020a8();
              }
              if (local_128 != 0) {
                FUN_1400020a8();
              }
              if (!bVar19) goto LAB_1438d6b76;
            }
            lVar15 = (**(code **)(*param_1 + 0x2e8))(param_1);
            piVar2 = (int *)(*(longlong *)(lVar15 + 0x80) + lVar14 * 0x30);
            iVar11 = piVar2[1];
            iVar6 = piVar2[2];
            iVar7 = piVar2[3];
            *local_170 = *piVar2;
            local_170[1] = iVar11;
            local_170[2] = iVar6;
            local_170[3] = iVar7;
            local_178 = local_170[1];
            local_174 = local_170[2];
            local_168 = (ulonglong)(uint)local_170[3];
            param_2 = local_170;
            iVar11 = *local_170;
            break;
          }
        }
LAB_1438d6b76:
        puVar17 = puVar17 + 1;
        param_2 = local_170;
        iVar11 = local_15c;
      } while (puVar17 != puVar1);
    }
    lVar14 = lVar14 + 1;
    uVar9 = local_174 | (uint)local_168 | local_178;
  } while (uVar9 == 0 && iVar11 == 0);
  if (uVar9 == 0 && iVar11 == 0) {
    FUN_147fc592a(local_158,&local_d8,param_3);
    param_2 = local_170;
    if (((local_d8._4_4_ != 0 || (int)local_d8 != 0) || (int)uStack_d0 != 0) || uStack_d0._4_4_ != 0
       ) {
      *local_170 = (int)local_d8;
      local_170[1] = local_d8._4_4_;
      local_170[2] = (int)uStack_d0;
      local_170[3] = uStack_d0._4_4_;
    }
  }
  FUN_140c7df0a(local_148);
  if (local_140 != 0) {
    FUN_1412f3774(local_150,local_140,0,1);
  }
  if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
    lVar14 = param_1[0xd];
    lVar15 = param_3[2];
    local_128 = param_3[3];
    FUN_1400021e4(&local_128,&local_d8);
    FUN_14756d7b2(lVar14,param_2,&local_d8,lVar15);
    if (local_d8 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    iVar11 = (int)local_78;
    iVar6 = local_78._4_4_;
    iVar7 = (int)uStack_70;
    iVar8 = uStack_70._4_4_;
    if (((local_78._4_4_ != 0 || (int)local_78 != 0) || (int)uStack_70 != 0) || uStack_70._4_4_ != 0
       ) {
      lVar14 = param_1[0xd];
      iVar10 = FUN_14031352e(lVar14,local_170);
      if (((iVar10 != -1) &&
          (lVar15 = (longlong)iVar10 * 0x80 + *(longlong *)(lVar14 + 0x70), lVar15 != 0)) &&
         ((*(int *)(lVar15 + 0x58) != iVar11 ||
          (((*(int *)(lVar15 + 0x5c) != iVar6 || (*(int *)(lVar15 + 0x60) != iVar7)) ||
           (*(int *)(lVar15 + 100) != iVar8)))))) {
        *(int *)(lVar15 + 0x58) = (int)local_78;
        *(int *)(lVar15 + 0x5c) = local_78._4_4_;
        *(int *)(lVar15 + 0x60) = (int)uStack_70;
        *(int *)(lVar15 + 100) = uStack_70._4_4_;
        lVar14 = param_1[0xd];
      }
      iVar11 = FUN_140c7f2b4(lVar14,&local_78);
      if ((iVar11 != -1) &&
         (lVar14 = (longlong)iVar11 * 0xf0 + *(longlong *)(lVar14 + 0x60), lVar14 != 0)) {
        FUN_140c608a8(lVar14 + 200,local_170);
      }
    }
    param_2 = local_170;
    (**(code **)(*param_1 + 0x2b0))(param_1,local_170,param_3,lVar12);
  }
LAB_1438d681f:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1438d6de4 FUN_1438d6de4 body=306 status=ok
// SIG undefined FUN_1438d6de4(void)

void FUN_1438d6de4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147fc846a(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d6f18 FUN_1438d6f18 body=48 status=ok
// SIG undefined FUN_1438d6f18(void)

void FUN_1438d6f18(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x48) == *(int *)(lVar1 + 0x74)) {
    return;
  }
  FUN_147fc9c32(lVar1 + 0x40);
  FUN_147fc9d76(lVar1 + 0x40);
  return;
}



// FUNCTION 1438d6f48 FUN_1438d6f48 body=339 status=ok
// SIG undefined FUN_1438d6f48(void)

void FUN_1438d6f48(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  if (*(int *)(lVar3 + 0x48) != *(int *)(lVar3 + 0x74)) {
    FUN_147fc9c32(lVar3 + 0x40);
    FUN_147fc9d76(lVar3 + 0x40);
  }
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147fcc9d0(param_2,lVar3,param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147fcc9d0(param_2,lVar3,param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d70c4 FUN_1438d70c4 body=282 status=ok
// SIG undefined FUN_1438d70c4(void)

undefined8 * FUN_1438d70c4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1438d709c);
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



// FUNCTION 1438d71de FUN_1438d71de body=93 status=ok
// SIG undefined FUN_1438d71de(void)

void FUN_1438d71de(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1438d6f48(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001438d7231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1438d723c FUN_1438d723c body=306 status=ok
// SIG undefined FUN_1438d723c(void)

void FUN_1438d723c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xe0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x30;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147fcd1bc(param_2,&local_70,*(undefined8 *)(param_1 + 0xe8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d7370 FUN_1438d7370 body=282 status=ok
// SIG undefined FUN_1438d7370(void)

undefined8 * FUN_1438d7370(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1438d709c);
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



// FUNCTION 1438d748a FUN_1438d748a body=93 status=ok
// SIG undefined FUN_1438d748a(void)

void FUN_1438d748a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1438d723c(param_1 + 0x15,param_1 + 0x33);
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001438d74dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1438d74e8 FUN_1438d74e8 body=306 status=ok
// SIG undefined FUN_1438d74e8(void)

void FUN_1438d74e8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147fce1d2(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d761c FUN_1438d761c body=282 status=ok
// SIG undefined FUN_1438d761c(void)

undefined8 * FUN_1438d761c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1438d709c);
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



// FUNCTION 1438d7736 FUN_1438d7736 body=93 status=ok
// SIG undefined FUN_1438d7736(void)

void FUN_1438d7736(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1438d74e8(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001438d7789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1438d7793 FUN_1438d7793 body=547 status=ok
// SIG undefined FUN_1438d7793(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438d7793(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cb28aa0 = 0xffffffff;
  DAT_14cb28aa4 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14acfe5e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14acff1c0,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14ad00080,4,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ad008d0;
  local_68 = 1;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14ad00920,1,&PTR_FUN_14ad008f0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14ad00f60,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14ad01a90,3,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14ad020b0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14ad02e70,1,&PTR_FUN_14ad02e40);
  local_48 = 0x800000014ad02f0a;
  local_34 = 0x10;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146455536(&local_48);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14ad03610,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14ad03e00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TemplateSequence",&PTR_FUN_14ad04220,1,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438d79b8 FUN_1438d79b8 body=55 status=ok
// SIG undefined FUN_1438d79b8(void)

void FUN_1438d79b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28d08 == 0) {
    uVar1 = FUN_140d2376e();
    DAT_14cb28d08 = FUN_14171c317(FUN_146455b01,uVar1,L"EBuiltInDoubleCameraVariable");
  }
  return;
}



// FUNCTION 1438d79ef FUN_1438d79ef body=55 status=ok
// SIG undefined FUN_1438d79ef(void)

void FUN_1438d79ef(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28d20 == 0) {
    uVar1 = FUN_140d2376e();
    DAT_14cb28d20 = FUN_14171c317(FUN_146455b30,uVar1,L"EBuiltInVector2dCameraVariable");
  }
  return;
}



// FUNCTION 1438d7a26 FUN_1438d7a26 body=55 status=ok
// SIG undefined FUN_1438d7a26(void)

void FUN_1438d7a26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28d38 == 0) {
    uVar1 = FUN_140d2376e();
    DAT_14cb28d38 = FUN_14171c317(FUN_146455b5f,uVar1,L"EBuiltInRotator3dCameraVariable");
  }
  return;
}



// FUNCTION 1438d7a5d FUN_1438d7a5d body=55 status=ok
// SIG undefined FUN_1438d7a5d(void)

void FUN_1438d7a5d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28d50 == 0) {
    uVar1 = FUN_140d2376e();
    DAT_14cb28d50 = FUN_14171c317(FUN_146455b8e,uVar1,L"ECameraBuildStatus");
  }
  return;
}



// FUNCTION 1438d7a94 FUN_1438d7a94 body=55 status=ok
// SIG undefined FUN_1438d7a94(void)

void FUN_1438d7a94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28db0 == 0) {
    uVar1 = FUN_140d2376e();
    DAT_14cb28db0 = FUN_14171c317(FUN_146455d42,uVar1,L"ECameraNodeOriginPosition");
  }
  return;
}



// FUNCTION 1438d7acb FUN_1438d7acb body=55 status=ok
// SIG undefined FUN_1438d7acb(void)

void FUN_1438d7acb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28dc8 == 0) {
    uVar1 = FUN_140d2376e();
    DAT_14cb28dc8 = FUN_14171c317(FUN_146455d71,uVar1,L"ECameraNodeSpace");
  }
  return;
}



// FUNCTION 1438d7b02 FUN_1438d7b02 body=55 status=ok
// SIG undefined FUN_1438d7b02(void)

void FUN_1438d7b02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb29158 == 0) {
    uVar1 = FUN_140d2376e();
    DAT_14cb29158 = FUN_14171c317(FUN_146457146,uVar1,L"ECameraVariableType");
  }
  return;
}


