// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14184f49c FUN_14184f49c body=2236 status=ok
// SIG undefined FUN_14184f49c(void)

void FUN_14184f49c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
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
            goto LAB_14184f587;
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
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
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
LAB_14184f587:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_14184f654;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_14184f654:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_14184f721;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_14184f721:
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_44);
            goto LAB_14184f7ed;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_44,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_44,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_44,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
LAB_14184f7ed:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(local_68._4_4_,local_44);
  (**(code **)(*param_1 + 0xea8))(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184fd70 FUN_14184fd70 body=496 status=ok
// SIG undefined FUN_14184fd70(void)

void FUN_14184fd70(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined2 local_44 [2];
  undefined4 local_40;
  undefined3 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44[0] = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_44);
            goto LAB_14184fe4a;
          }
        }
        puVar7 = (undefined2 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != local_44) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_44,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(local_44,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = (undefined4)plVar1[6];
        local_58 = 0;
        FUN_1400746b0(plVar1,local_44,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_44,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44);
  }
LAB_14184fe4a:
  puVar7 = local_44;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar7 = *(undefined2 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xd98))(param_1,puVar7);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184ff62 FUN_14184ff62 body=57 status=ok
// SIG undefined FUN_14184ff62(void)

void FUN_14184ff62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bba8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bba8 = FUN_140002ddd(FUN_1464d1518,uVar1,L"JumpGoalCollectionDef");
  }
  return;
}



// FUNCTION 14184ff9b FUN_14184ff9b body=49 status=ok
// SIG undefined FUN_14184ff9b(void)

longlong FUN_14184ff9b(void)

{
  if (DAT_14cb5bbe8 == 0) {
    FUN_14086a14e(&DAT_14cb5bbe8,&PTR_FUN_14b0ed860);
  }
  return DAT_14cb5bbe8;
}



// FUNCTION 14184ffcc FUN_14184ffcc body=118 status=ok
// SIG undefined FUN_14184ffcc(void)

undefined8 FUN_14184ffcc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb857e0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb857e0,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141850044 FUN_141850044 body=430 status=ok
// SIG undefined FUN_141850044(void)

longlong * FUN_141850044(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
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
  *(char *)(param_1 + 2) = (char)param_2[2];
  *(int *)(param_1 + 0x11) = (int)param_2[0x11];
  *(undefined2 *)((longlong)param_1 + 0x8c) = *(undefined2 *)((longlong)param_2 + 0x8c);
  FUN_14093c00e(param_1 + 0x12,param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
  lVar5 = param_2[0x16];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
  *(int *)(param_1 + 0x16) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar4;
  if (param_1 != param_2) {
    iVar1 = (int)param_2[0x18];
    pvVar2 = (void *)param_2[0x17];
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x17,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x17],pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined2 *)((longlong)param_1 + 0x13c) = *(undefined2 *)((longlong)param_2 + 0x13c);
  *(int *)(param_1 + 0x27) = (int)param_2[0x27];
  FUN_14093c00e(param_1 + 0x28,param_2 + 0x28);
  param_1[0x2a] = param_2[0x2a];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x15c);
  lVar5 = param_2[0x2c];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x164);
  *(int *)(param_1 + 0x2b) = (int)param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar3;
  *(int *)(param_1 + 0x2c) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar4;
  if (param_1 != param_2) {
    iVar1 = (int)param_2[0x2e];
    pvVar2 = (void *)param_2[0x2d];
    *(int *)(param_1 + 0x2e) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x174) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x174) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x2d,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x2d],pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  plVar6 = param_2 + 0x30;
  plVar7 = param_1 + 0x30;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar7 = *plVar6;
    plVar6 = plVar6 + 1;
    plVar7 = plVar7 + 1;
  }
  return param_1;
}



// FUNCTION 1418501f2 FUN_1418501f2 body=131 status=ok
// SIG undefined FUN_1418501f2(void)

undefined8 FUN_1418501f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar1 = *(longlong *)(param_3 + 8 + lVar3);
      if (*(longlong *)(param_2 + 8 + lVar3) != lVar1) {
        *(undefined8 *)(param_2 + 0x18 + lVar3) = 0;
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar1;
      if (*(longlong *)(param_2 + 0x10 + lVar3) != *(longlong *)(param_3 + 0x10 + lVar3)) {
        *(undefined8 *)(param_2 + 0x18 + lVar3) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + 0x10 + lVar3) = uVar2;
      *(undefined8 *)(param_2 + 0x18 + lVar3) = *(undefined8 *)(param_3 + 0x18 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141850276 FUN_141850276 body=118 status=ok
// SIG undefined FUN_141850276(void)

undefined8 FUN_141850276(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb75d20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb75d20,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418502ee FUN_1418502ee body=117 status=ok
// SIG undefined FUN_1418502ee(void)

undefined8 * FUN_1418502ee(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 141850364 FUN_141850364 body=71 status=ok
// SIG undefined FUN_141850364(void)

undefined8 * FUN_141850364(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418503ba FUN_1418503ba body=57 status=ok
// SIG undefined FUN_1418503ba(void)

void FUN_1418503ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x74) == '\x01') {
    *(undefined1 *)(param_2 + 0x74) = 0;
  }
  FUN_144801c4e(*(undefined8 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x68));
  if (*(longlong *)(param_2 + 0x60) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418503f4 FUN_1418503f4 body=156 status=ok
// SIG undefined FUN_1418503f4(void)

undefined8 FUN_1418503f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0x74;
    do {
      lVar1 = param_3 + lVar6;
      puVar5 = (undefined8 *)(param_2 + -0x74 + lVar6);
      *(undefined1 *)((longlong)puVar5 + 0x5c) = *(undefined1 *)(lVar1 + -0x18);
      *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)(lVar1 + -0x1c);
      puVar4 = (undefined8 *)(lVar1 + -0x74);
      for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_1400e9962(param_2 + lVar6 + -0x14,param_3 + lVar6 + -0x14);
      if (param_3 != param_2) {
        if (*(char *)(param_3 + lVar6) == '\x01') {
          *(undefined4 *)(param_2 + -4 + lVar6) = *(undefined4 *)(param_3 + -4 + lVar6);
          uVar2 = 1;
        }
        else {
          if (*(char *)(param_2 + lVar6) != '\x01') goto LAB_14185045e;
          uVar2 = 0;
        }
        *(undefined1 *)(param_2 + lVar6) = uVar2;
      }
LAB_14185045e:
      lVar6 = lVar6 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141850490 FUN_141850490 body=57 status=ok
// SIG undefined FUN_141850490(void)

void FUN_141850490(longlong param_1)

{
  if (*(char *)(param_1 + 0x74) == '\x01') {
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  FUN_144801c4e(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418504ca FUN_1418504ca body=57 status=ok
// SIG undefined FUN_1418504ca(void)

undefined8 * FUN_1418504ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b105bb0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141850504 FUN_141850504 body=63 status=ok
// SIG undefined FUN_141850504(void)

undefined1 FUN_141850504(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1409d523a(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 141850544 FUN_141850544 body=251 status=ok
// SIG undefined FUN_141850544(void)

void FUN_141850544(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  memset(param_2,0,0x140);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0x3002;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 2;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)((longlong)param_2 + 0x80) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
  ;
  *(undefined8 *)((longlong)param_2 + 0x88) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xa8) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)((longlong)param_2 + 0x98) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
  ;
  *(undefined8 *)((longlong)param_2 + 0xa0) = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)((longlong)param_2 + 0xb0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
  ;
  *(undefined8 *)((longlong)param_2 + 0xb8) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xc0) = DAT_14c8464f0;
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0x3006;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)((longlong)param_2 + 0xf8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xfc) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x100) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x104) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0x108) = DAT_14c8464f0;
  FUN_1405c5fa2();
  *(undefined **)((longlong)param_2 + 0x120) = &DAT_14cb769e8;
  *(undefined8 *)((longlong)param_2 + 0x128) = 0;
  *(undefined8 *)((longlong)param_2 + 0x130) = 0;
  *(undefined ***)((longlong)param_2 + 0x118) = &PTR_FUN_14b0394b0;
  *(undefined4 *)((longlong)param_2 + 0x138) = 0x3f800000;
  return;
}



// FUNCTION 141850640 FUN_141850640 body=129 status=ok
// SIG undefined FUN_141850640(void)

void FUN_141850640(undefined8 param_1,longlong param_2)

{
  *(undefined2 **)(param_2 + 0x118) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0x130) = 0;
  if (*(int *)(param_2 + 0x134) != 0) {
    FUN_140115c12(param_2 + 0x128,0);
  }
  *(undefined8 *)(param_2 + 0x120) = 0;
  if (*(longlong *)(param_2 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x50) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418506c2 FUN_1418506c2 body=63 status=ok
// SIG undefined FUN_1418506c2(void)

undefined1 FUN_1418506c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14095e2f2(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 141850701 FUN_141850701 body=277 status=ok
// SIG undefined FUN_141850701(void)

void FUN_141850701(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140be449e(puVar1,param_1);
  *(undefined2 *)(puVar1 + 0x1b) = 0;
  *(undefined4 *)(puVar1 + 0x23) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x10d) = 0;
  *puVar1 = &PTR_FUN_14b10ce30;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x129) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x131) = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0x3fc000003f000000;
  puVar1[0x2c] = 0x40a0000041a00000;
  *(undefined1 *)(puVar1 + 0x2d) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x16c) = 0x4120000042c80000;
  *(undefined8 *)((longlong)puVar1 + 0x19c) = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  *(undefined4 *)(puVar1 + 0x38) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
  *(undefined4 *)(puVar1 + 0x39) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0x3ff00000;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3e] = 0x3ff0000000000000;
  puVar1[0x3f] = 0x3ff0000000000000;
  puVar1[0x40] = 0x3ff0000000000000;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x219) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x221) = 0;
  puVar1[0x46] = 0x3fb99999a0000000;
  *(undefined1 *)(puVar1 + 0x48) = 0;
  return;
}



// FUNCTION 141850816 FUN_141850816 body=40 status=ok
// SIG undefined FUN_141850816(void)

undefined8 FUN_141850816(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185083e FUN_14185083e body=316 status=ok
// SIG undefined FUN_14185083e(void)

undefined8 * FUN_14185083e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = &PTR_FUN_14b00bdf8;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[1] = &PTR_FUN_14a176fc0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined2 *)((longlong)param_1 + 0x74) = *(undefined2 *)(param_2 + 0x74);
  param_1[1] = &DAT_14a176f00;
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  pvVar2 = *(void **)(param_2 + 0x78);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_140501c24(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar2,(longlong)iVar1 * 0x1c);
  }
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x13) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0xa8);
  pvVar2 = *(void **)(param_2 + 0xa0);
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1418509a0 FUN_1418509a0 body=107 status=ok
// SIG undefined FUN_1418509a0(void)

void FUN_1418509a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_2 + 8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x28) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x20)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x20) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 141850a0c FUN_141850a0c body=170 status=ok
// SIG undefined FUN_141850a0c(void)

void FUN_141850a0c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  *(undefined1 *)((longlong)param_2 + 8) = 4;
  *(undefined2 *)((longlong)param_2 + 0x30) = 4;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0x41200000;
  *(undefined1 *)((longlong)param_2 + 0x38) = 3;
  *(char *)((longlong)param_2 + 0x40) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)((longlong)param_2 + 0x71) = 0;
  *(undefined8 *)((longlong)param_2 + 0x79) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x88) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined1 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa8) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_2 + 0xac) = 0;
  *(undefined1 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  FUN_14044066a((longlong)param_2 + 200,10,1);
  return;
}



// FUNCTION 141850ab6 FUN_141850ab6 body=186 status=ok
// SIG undefined FUN_141850ab6(void)

void FUN_141850ab6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 0xd0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0xf0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0xe8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_2 + 0xe8)) {
    FUN_1400020a8(*plVar1);
  }
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_2 + 0x18);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x38) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x30)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x30) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 141850b70 FUN_141850b70 body=724 status=ok
// SIG undefined FUN_141850b70(void)

void FUN_141850b70(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  code *local_120;
  longlong local_110;
  longlong local_108 [7];
  byte local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_128 = FUN_1446ddbd2();
      local_120 = FUN_1468d96f0;
      local_130 = 0;
      local_138 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_110);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_110);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_110 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_110);
    }
  }
  lVar4 = local_110;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108[0] = local_110;
  if ((local_110 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_110);
  }
  local_d0 = 1;
  if (local_108 == param_3) {
    uVar11 = 1;
  }
  else {
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    local_c8 = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = (undefined4)uStack_90;
    uStack_4c = uStack_90._4_4_;
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    local_88 = (undefined4)local_c8;
    uStack_84 = local_c8._4_4_;
    uStack_80 = (undefined4)uStack_c0;
    uStack_7c = uStack_c0._4_4_;
    lVar4 = *param_3;
    lVar5 = param_3[1];
    lVar6 = param_3[2];
    lVar7 = param_3[3];
    lVar8 = param_3[4];
    lVar9 = param_3[5];
    lVar10 = param_3[6];
    uVar11 = param_3[7];
    *(undefined4 *)(param_3 + 6) = (undefined4)local_98;
    *(undefined4 *)((longlong)param_3 + 0x34) = local_98._4_4_;
    *(undefined4 *)(param_3 + 7) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_90._4_4_;
    *(undefined4 *)(param_3 + 4) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_3 + 0x24) = local_a8._4_4_;
    *(undefined4 *)(param_3 + 5) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_a0._4_4_;
    *(undefined4 *)(param_3 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_3 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(param_3 + 3) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_b0._4_4_;
    *(undefined4 *)param_3 = (undefined4)local_c8;
    *(undefined4 *)((longlong)param_3 + 4) = local_c8._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_c0._4_4_;
    local_c8 = lVar4;
    uStack_c0 = lVar5;
    local_b8 = lVar6;
    uStack_b0 = lVar7;
    local_a8 = lVar8;
    uStack_a0 = lVar9;
    local_98 = lVar10;
    uStack_90 = uVar11;
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar11 & 0xff])();
    uVar11 = (ulonglong)local_d0;
  }
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar11])(local_108);
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141850e45 FUN_141850e45 body=50 status=ok
// SIG undefined FUN_141850e45(void)

void FUN_141850e45(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b11bcf0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 141850e94 FUN_141850e94 body=108 status=ok
// SIG undefined FUN_141850e94(void)

undefined8 * FUN_141850e94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b11b770;
  param_1[5] = &PTR_LAB_14b11bbf0;
  param_1[6] = &PTR_LAB_14b11bc30;
  param_1[0x22] = &PTR_LAB_14b11bc80;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141850f00 FUN_141850f00 body=67 status=ok
// SIG undefined FUN_141850f00(void)

undefined8 * FUN_141850f00(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b11bcf0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141850f44 FUN_141850f44 body=187 status=ok
// SIG undefined FUN_141850f44(void)

undefined8 * FUN_141850f44(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b117680;
  param_1[5] = &PTR_LAB_14b117920;
  plVar1 = (longlong *)param_1[10];
  if (plVar1 == (longlong *)0x0) goto LAB_141850f9c;
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if ((int)plVar1[0x26] < 1) {
    FUN_1400847bc(plVar1 + 0x17,0);
    if ((int)plVar1[0x21] == 0) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_141850f94;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
LAB_141850f94:
  param_1[10] = 0;
LAB_141850f9c:
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141851000 FUN_141851000 body=68 status=ok
// SIG undefined FUN_141851000(void)

void FUN_141851000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return;
}



// FUNCTION 141851044 FUN_141851044 body=59 status=ok
// SIG undefined FUN_141851044(void)

void FUN_141851044(longlong param_1)

{
  FUN_1400e1cb7(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141851080 FUN_141851080 body=59 status=ok
// SIG undefined FUN_141851080(void)

void FUN_141851080(undefined8 param_1,longlong param_2)

{
  FUN_1400e1cb7(*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x30));
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418510bc FUN_1418510bc body=87 status=ok
// SIG undefined FUN_1418510bc(void)

void FUN_1418510bc(longlong *param_1)

{
  FUN_1400e1c41(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1400e1c6c(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141851114 FUN_141851114 body=87 status=ok
// SIG undefined FUN_141851114(void)

void FUN_141851114(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x98) = 0;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1408e69fe(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408e6a36(param_2);
  return;
}



// FUNCTION 14185116c FUN_14185116c body=174 status=ok
// SIG undefined FUN_14185116c(void)

undefined8 FUN_14185116c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar8 = param_2 + 0x18;
    lVar9 = 0;
    do {
      *(undefined4 *)(param_2 + lVar9) = *(undefined4 *)(param_3 + lVar9);
      lVar3 = *(longlong *)(param_3 + 8 + lVar9);
      if (*(longlong *)(param_2 + 8 + lVar9) != lVar3) {
        *(undefined8 *)(lVar8 + lVar9) = 0;
      }
      lVar1 = param_3 + lVar9;
      puVar2 = (undefined8 *)(lVar8 + lVar9);
      puVar2[-2] = lVar3;
      if (puVar2[-1] != *(longlong *)(lVar1 + 0x10)) {
        *(undefined8 *)(lVar8 + lVar9) = 0;
      }
      uVar7 = FUN_14477b664();
      uVar7 = FUN_14477b664(uVar7);
      puVar2[-1] = uVar7;
      *puVar2 = *(undefined8 *)(lVar1 + 0x18);
      uVar4 = *(undefined4 *)(lVar1 + 0x24);
      uVar5 = *(undefined4 *)(lVar1 + 0x28);
      uVar6 = *(undefined4 *)(lVar1 + 0x2c);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar1 + 0x20);
      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar4;
      *(undefined4 *)(puVar2 + 2) = uVar5;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uVar6;
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(lVar1 + 0x30);
      lVar9 = lVar9 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185121a FUN_14185121a body=191 status=ok
// SIG undefined FUN_14185121a(void)

undefined8 FUN_14185121a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar5 = param_2 + 0x18;
    lVar6 = 0;
    do {
      *(undefined4 *)(param_2 + lVar6) = *(undefined4 *)(param_3 + lVar6);
      lVar3 = *(longlong *)(param_3 + 8 + lVar6);
      if (*(longlong *)(param_2 + 8 + lVar6) != lVar3) {
        *(undefined8 *)(lVar5 + lVar6) = 0;
      }
      lVar1 = param_3 + lVar6;
      puVar2 = (undefined8 *)(lVar5 + lVar6);
      puVar2[-2] = lVar3;
      if (puVar2[-1] != *(longlong *)(lVar1 + 0x10)) {
        *(undefined8 *)(lVar5 + lVar6) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      puVar2[-1] = uVar4;
      *puVar2 = *(undefined8 *)(lVar1 + 0x18);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      puVar2[1] = *(undefined8 *)(lVar1 + 0x20);
      puVar2[2] = uVar4;
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(lVar1 + 0x30);
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar1 + 0x38);
      lVar6 = lVar6 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418512d9 FUN_1418512d9 body=49 status=ok
// SIG undefined FUN_1418512d9(void)

longlong FUN_1418512d9(void)

{
  if (DAT_14cb5d0f0 == 0) {
    FUN_14086a14e(&DAT_14cb5d0f0,&PTR_FUN_14b123418);
  }
  return DAT_14cb5d0f0;
}



// FUNCTION 14185130a FUN_14185130a body=71 status=ok
// SIG undefined FUN_14185130a(void)

undefined8 * FUN_14185130a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141851352 FUN_141851352 body=89 status=ok
// SIG undefined FUN_141851352(void)

undefined8 * FUN_141851352(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x440);
  _Src = *(void **)(param_1 + 0x438);
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



// FUNCTION 1418513b6 FUN_1418513b6 body=81 status=ok
// SIG undefined FUN_1418513b6(void)

undefined8 FUN_1418513b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined4 *)(lVar2 + -8) = puVar1[4];
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_1408d7d42();
      lVar6 = lVar6 + 0x2e8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141851416 FUN_141851416 body=118 status=ok
// SIG undefined FUN_141851416(void)

undefined8 FUN_141851416(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb78540 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb78540,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185148e FUN_14185148e body=117 status=ok
// SIG undefined FUN_14185148e(void)

undefined8 * FUN_14185148e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 141851504 FUN_141851504 body=71 status=ok
// SIG undefined FUN_141851504(void)

undefined8 * FUN_141851504(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14185154c FUN_14185154c body=118 status=ok
// SIG undefined FUN_14185154c(void)

undefined8 FUN_14185154c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb78560 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb78560,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418515c4 FUN_1418515c4 body=57 status=ok
// SIG undefined FUN_1418515c4(void)

void FUN_1418515c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d340 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d340 = FUN_140002ddd(FUN_1464dabfc,uVar1,L"GbxDiscoveryReplicatedLiveActorArrayItem");
  }
  return;
}



// FUNCTION 1418515fd FUN_1418515fd body=49 status=ok
// SIG undefined FUN_1418515fd(void)

longlong FUN_1418515fd(void)

{
  if (DAT_14cb5d790 == 0) {
    FUN_14073dd9a(&DAT_14cb5d790,&PTR_LAB_14b132330);
  }
  return DAT_14cb5d790;
}



// FUNCTION 141851648 FUN_141851648 body=246 status=ok
// SIG undefined FUN_141851648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141851648(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b138220;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001418516fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14185173e FUN_14185173e body=118 status=ok
// SIG undefined FUN_14185173e(void)

undefined8 FUN_14185173e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb78590 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb78590,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418517c4 FUN_1418517c4 body=91 status=ok
// SIG undefined FUN_1418517c4(void)

void FUN_1418517c4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 0x10);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x30) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x28)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x28) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14185181f FUN_14185181f body=49 status=ok
// SIG undefined FUN_14185181f(void)

longlong FUN_14185181f(void)

{
  if (DAT_14cb5da20 == 0) {
    FUN_14073dd9a(&DAT_14cb5da20,&PTR_LAB_14b13a820);
  }
  return DAT_14cb5da20;
}



// FUNCTION 141851850 FUN_141851850 body=40 status=ok
// SIG undefined FUN_141851850(void)

undefined8 FUN_141851850(undefined8 param_1,int param_2)

{
  FUN_140b871ca();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141851878 FUN_141851878 body=40 status=ok
// SIG undefined FUN_141851878(void)

undefined8 FUN_141851878(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418518a0 FUN_1418518a0 body=20 status=ok
// SIG undefined FUN_1418518a0(void)

byte FUN_1418518a0(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_140114204(param_1 + 0x68);
  return bVar1 ^ 1;
}



// FUNCTION 1418518b4 FUN_1418518b4 body=57 status=ok
// SIG undefined FUN_1418518b4(void)

void FUN_1418518b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5dd58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5dd58 = FUN_140002ddd(FUN_1464de961,uVar1,L"GbxFastReplicatedBitArrayItem");
  }
  return;
}



// FUNCTION 1418518ed FUN_1418518ed body=49 status=ok
// SIG undefined FUN_1418518ed(void)

longlong FUN_1418518ed(void)

{
  if (DAT_14cb5df28 == 0) {
    FUN_14086a14e(&DAT_14cb5df28,&PTR_FUN_14b1457f0);
  }
  return DAT_14cb5df28;
}



// FUNCTION 14185191e FUN_14185191e body=618 status=ok
// SIG undefined FUN_14185191e(void)

void FUN_14185191e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
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
            goto LAB_141851a09;
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
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
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
LAB_141851a09:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141851b8a FUN_141851b8a body=2980 status=ok
// SIG undefined FUN_141851b8a(void)

void FUN_141851b8a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  code *local_b0;
  undefined8 local_a0;
  undefined4 local_98;
  int iStack_94;
  undefined4 local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_b8 = (undefined *)FUN_1446ddbd2();
      local_b0 = FUN_1468d96f0;
      local_c0 = 0;
      local_c8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_60);
    }
  }
  local_78 = 0;
  local_70 = 0x7012;
  local_68 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_b8 = (undefined *)FUN_1446ddbd2();
      local_b0 = FUN_14170fd90;
      local_c0 = 0x8000000000000000;
      local_c8 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_78);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_78);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_78 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_78);
    }
  }
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  FUN_140be4ae0();
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_88);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_88);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_88 = (undefined4)uVar2;
      uStack_84 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_88);
    }
  }
  iStack_8c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_b8 = (undefined *)FUN_1446ddbd2();
      local_b0 = FUN_14067a048;
      local_c0 = 0;
      local_c8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_8c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_8c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_8c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_8c = (int)uVar2;
      local_88 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_8c);
    }
  }
  iVar8 = iStack_8c;
  local_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_b0 = FUN_1405ebbb2;
      local_b8 = &DAT_14c9520b8;
      local_c0 = 0;
      local_c8 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_90);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_90);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_90 = (undefined4)uVar2;
      iStack_8c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_90);
    }
  }
  iStack_94 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_b8 = (undefined *)FUN_1446ddbd2();
      local_b0 = FUN_14067a048;
      local_c0 = 0;
      local_c8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_94);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_94);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_94);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_94 = (int)uVar2;
      local_90 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_94);
    }
  }
  iVar6 = iStack_94;
  local_98 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_b0 = FUN_1408a629c;
      local_b8 = &DAT_14c9520b8;
      local_c0 = 0;
      local_c8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_98);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_98);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_98 = (undefined4)uVar2;
      iStack_94 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_98);
    }
  }
  local_a0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_b8 = (undefined *)FUN_1446ddbd2();
      local_b0 = FUN_1468d96f0;
      local_c0 = 0;
      local_c8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_a0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_a0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_a0 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_a0);
    }
  }
  uVar7 = local_90;
  uVar5 = local_98;
  uVar2 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = CONCAT44(uStack_84,local_88);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar4);
  }
  uVar9 = 0;
  if (lVar4 != 0) {
    uVar9 = uStack_80;
  }
  local_58 = local_78;
  local_50 = local_70;
  local_48 = 0;
  local_c0 = CONCAT71(local_c0._1_7_,iVar6 != 0);
  local_b0 = (code *)uVar2;
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar5);
  local_c8 = CONCAT71(local_c8._1_7_,iVar8 != 0);
  FUN_140cab31c(local_60,&local_58,uVar7,uVar9);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185272f FUN_14185272f body=151 status=ok
// SIG undefined FUN_14185272f(void)

void FUN_14185272f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140993da0(puVar1);
  puVar1[0xab] = 0;
  *(undefined1 *)(puVar1 + 0xac) = 0;
  *puVar1 = &PTR_FUN_14b149c90;
  puVar1[0xad] = &PTR_FUN_14b14a030;
  puVar1[0xae] = 0;
  puVar1[0xbf] = 0;
  *(undefined4 *)(puVar1 + 0xc0) = 0;
  puVar1[0xb8] = 0;
  puVar1[0xb9] = 0;
  puVar1[0xba] = 0;
  puVar1[0xbb] = 0;
  puVar1[0xbc] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x604) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x60c) = 0;
  puVar1[0xc3] = 0;
  *(undefined4 *)(puVar1 + 0xc4) = 0;
  *(undefined2 *)(puVar1 + 0xc5) = 0;
  return;
}



// FUNCTION 1418527c6 FUN_1418527c6 body=40 status=ok
// SIG undefined FUN_1418527c6(void)

undefined8 FUN_1418527c6(undefined8 param_1,int param_2)

{
  FUN_140945f4c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418527ee FUN_1418527ee body=233 status=ok
// SIG undefined FUN_1418527ee(void)

undefined8 FUN_1418527ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      lVar1 = param_3 + lVar8;
      lVar2 = param_2 + 0x78 + lVar8;
      *(undefined2 *)(lVar2 + -4) = *(undefined2 *)(lVar1 + 0x74);
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(lVar1 + 0x70);
      FUN_14093c00e(lVar2,lVar1 + 0x78);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x88);
      uVar4 = *(undefined4 *)(lVar1 + 0x94);
      uVar5 = *(undefined4 *)(lVar1 + 0x98);
      uVar6 = *(undefined4 *)(lVar1 + 0x9c);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x90);
      *(undefined4 *)(lVar2 + 0x1c) = uVar4;
      *(undefined4 *)(lVar2 + 0x20) = uVar5;
      *(undefined4 *)(lVar2 + 0x24) = uVar6;
      if (param_2 != param_3) {
        iVar3 = *(int *)(param_3 + 0xa8 + lVar8);
        _Src = *(void **)(param_3 + 0xa0 + lVar8);
        *(int *)(param_2 + 0xa8 + lVar8) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0xac + lVar8) == 0) {
          *(undefined4 *)(param_2 + 0xac + lVar8) = 0;
        }
        else {
          puVar7 = (undefined8 *)(param_2 + lVar8 + 0xa0);
          FUN_1446dd670(puVar7,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar7,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      lVar8 = lVar8 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418528d8 FUN_1418528d8 body=37 status=ok
// SIG undefined FUN_1418528d8(void)

void FUN_1418528d8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x6b0);
  FUN_140a3ff80(param_2);
  return;
}



// FUNCTION 1418528fe FUN_1418528fe body=38 status=ok
// SIG undefined FUN_1418528fe(void)

undefined8 FUN_1418528fe(undefined8 param_1,int param_2)

{
  FUN_14060f31a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141852924 FUN_141852924 body=43 status=ok
// SIG undefined FUN_141852924(void)

void FUN_141852924(undefined8 param_1,longlong *param_2)

{
  FUN_14060f567(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141852950 FUN_141852950 body=107 status=ok
// SIG undefined FUN_141852950(void)

longlong FUN_141852950(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_14114fb72();
  lVar4 = *(longlong *)(param_2 + 0xad0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = *(longlong *)(param_2 + 0xad0);
    }
  }
  *(longlong *)(param_1 + 0xad0) = lVar4;
  uVar1 = *(undefined4 *)(param_2 + 0xadc);
  uVar2 = *(undefined4 *)(param_2 + 0xae0);
  uVar3 = *(undefined4 *)(param_2 + 0xae4);
  *(undefined4 *)(param_1 + 0xad8) = *(undefined4 *)(param_2 + 0xad8);
  *(undefined4 *)(param_1 + 0xadc) = uVar1;
  *(undefined4 *)(param_1 + 0xae0) = uVar2;
  *(undefined4 *)(param_1 + 0xae4) = uVar3;
  FUN_14114f9e2(param_1 + 0xae8,param_2 + 0xae8);
  return param_1;
}



// FUNCTION 1418529bb FUN_1418529bb body=49 status=ok
// SIG undefined FUN_1418529bb(void)

longlong FUN_1418529bb(void)

{
  if (DAT_14cb5e520 == 0) {
    FUN_14073dd9a(&DAT_14cb5e520,&PTR_LAB_14b155a00);
  }
  return DAT_14cb5e520;
}



// FUNCTION 1418529ec FUN_1418529ec body=49 status=ok
// SIG undefined FUN_1418529ec(void)

longlong FUN_1418529ec(void)

{
  if (DAT_14cb5e978 == 0) {
    FUN_14073dd9a(&DAT_14cb5e978,&PTR_LAB_14b15dc00);
  }
  return DAT_14cb5e978;
}



// FUNCTION 141852a1e FUN_141852a1e body=71 status=ok
// SIG undefined FUN_141852a1e(void)

undefined8 * FUN_141852a1e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141852a65 FUN_141852a65 body=49 status=ok
// SIG undefined FUN_141852a65(void)

longlong FUN_141852a65(void)

{
  if (DAT_14cb5edc8 == 0) {
    FUN_14073dd9a(&DAT_14cb5edc8,&PTR_LAB_14b1699b0);
  }
  return DAT_14cb5edc8;
}



// FUNCTION 141852a96 FUN_141852a96 body=5039 status=ok
// SIG undefined FUN_141852a96(void)

void FUN_141852a96(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong *plVar6;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_c2;
  undefined1 uStack_c1;
  int iStack_c0;
  undefined2 uStack_bc;
  undefined1 uStack_ba;
  undefined1 local_b9;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [4];
  
  local_58[3] = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_58[2] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = (undefined8 *)0x0;
      local_178 = (undefined4 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,local_58 + 2);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,local_58 + 2);
    }
    else {
      if (pcVar1 == (code *)&LAB_1428293cc) {
        local_58[2] = *(longlong *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        goto LAB_141852b67;
      }
      (*pcVar1)(uVar4,param_2,local_58 + 2);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
LAB_141852b67:
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,local_58);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,local_58);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_58[0] = *(longlong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar4,param_2,local_58);
    }
  }
  plVar6 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = (undefined8 *)0x0;
      local_178 = (undefined4 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_60);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_60);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_60);
    }
  }
  local_68 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_1409e12a0;
      local_170 = (undefined8 *)0x0;
      local_178 = (undefined4 *)0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_68);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_68);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_68);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_1403a682c;
      local_170 = (undefined8 *)0x0;
      local_178 = (undefined4 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_80);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_80);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_80 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_80);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_1403a682c;
      local_170 = (undefined8 *)0x0;
      local_178 = (undefined4 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_98);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_98);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_98 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_98);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_1403a682c;
      local_170 = (undefined8 *)0x0;
      local_178 = (undefined4 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_b0);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_b0);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_b0);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      uStack_b0 = (undefined7)uVar4;
      uStack_a9 = (undefined1)((ulonglong)uVar4 >> 0x38);
    }
    else {
      (*pcVar1)(uVar4,param_2,&uStack_b0);
    }
  }
  uStack_b4 = uStack_b4 & 0xffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1409f1a5c;
      local_168 = (undefined8 *)&DAT_14c9520b8;
      local_170 = (undefined8 *)0x0;
      local_178 = (undefined4 *)0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,(longlong)&uStack_b4 + 3);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,(longlong)&uStack_b4 + 3);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,(longlong)&uStack_b4 + 3);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      uStack_b4._3_1_ = (undefined1)uVar4;
      uStack_b0 = (undefined7)((ulonglong)uVar4 >> 8);
    }
    else {
      (*pcVar1)(uVar4,param_2,(longlong)&uStack_b4 + 3);
    }
  }
  iStack_b8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = (undefined8 *)0x0;
      local_178 = (undefined4 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_b8);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&iStack_b8);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&iStack_b8);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      iStack_b8 = (int)uVar4;
      uStack_b4 = (uint)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar1)(uVar4,param_2,&iStack_b8);
    }
  }
  iVar3 = iStack_b8;
  local_b9 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_140a4831c;
      local_178 = (undefined4 *)0x1000000008001;
      local_170 = (undefined8 *)0x0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_b9);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_b9);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_b9 = (undefined1)uVar4;
      iStack_b8 = (int)((ulonglong)uVar4 >> 8);
      uStack_b4._0_3_ = (undefined3)((ulonglong)uVar4 >> 0x28);
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_b9);
    }
  }
  iStack_c0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = (undefined8 *)0x0;
      local_178 = (undefined4 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_c0);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&iStack_c0);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&iStack_c0);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      iStack_c0 = (int)uVar4;
      uStack_bc = (undefined2)((ulonglong)uVar4 >> 0x20);
      uStack_ba = (undefined1)((ulonglong)uVar4 >> 0x30);
      local_b9 = (undefined1)((ulonglong)uVar4 >> 0x38);
    }
    else {
      (*pcVar1)(uVar4,param_2,&iStack_c0);
    }
  }
  iVar2 = iStack_c0;
  uStack_c1 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_140a4831c;
      local_178 = (undefined4 *)0x1000000008001;
      local_170 = (undefined8 *)0x0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_c1);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_c1);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_c1);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      uStack_c1 = (undefined1)uVar4;
      iStack_c0 = (int)((ulonglong)uVar4 >> 8);
      uStack_bc = (undefined2)((ulonglong)uVar4 >> 0x28);
      uStack_ba = (undefined1)((ulonglong)uVar4 >> 0x38);
    }
    else {
      (*pcVar1)(uVar4,param_2,&uStack_c1);
    }
  }
  local_c2 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_168 = (undefined8 *)FUN_1446ddbd2();
      local_160 = FUN_140a4831c;
      local_178 = (undefined4 *)0x1000000008001;
      local_170 = (undefined8 *)0x0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c2);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_c2);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_c2);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_c2 = (undefined1)uVar4;
      uStack_c1 = (undefined1)((ulonglong)uVar4 >> 8);
      iStack_c0 = (int)((ulonglong)uVar4 >> 0x10);
      uStack_bc = (undefined2)((ulonglong)uVar4 >> 0x30);
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_c2);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e8 = CONCAT17(uStack_a9,uStack_b0);
  local_168 = &local_e8;
  uStack_e0 = uStack_a8;
  local_d8 = local_a0;
  local_170 = &local_108;
  local_108 = local_98;
  uStack_100 = uStack_90;
  local_f8 = local_88;
  local_178 = &local_128;
  local_128 = (undefined4)local_80;
  uStack_124 = local_80._4_4_;
  uStack_120 = uStack_78;
  uStack_11c = uStack_74;
  local_118 = local_70;
  local_148 = iVar2 != 0;
  local_158 = iVar3 != 0;
  local_138 = local_c2;
  local_140 = uStack_c1;
  local_150 = local_b9;
  local_160 = (code *)CONCAT44(local_160._4_4_,uStack_b4 >> 0x18);
  uVar4 = FUN_140a44d48(local_58[2],plVar6,local_60,local_68);
  *param_3 = uVar4;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[3] ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141853e46 FUN_141853e46 body=49 status=ok
// SIG undefined FUN_141853e46(void)

longlong FUN_141853e46(void)

{
  if (DAT_14cb5f278 == 0) {
    FUN_14073dd9a(&DAT_14cb5f278,&PTR_LAB_14b174490);
  }
  return DAT_14cb5f278;
}



// FUNCTION 141853e78 FUN_141853e78 body=39 status=ok
// SIG undefined FUN_141853e78(void)

bool FUN_141853e78(longlong param_1)

{
  FUN_1405f85e0(param_1 + 0x408);
  return (byte)(*(char *)(param_1 + 0x509) - 3U) < 2;
}



// FUNCTION 141853ea0 FUN_141853ea0 body=150 status=ok
// SIG undefined FUN_141853ea0(void)

undefined8 * FUN_141853ea0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1761b0;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_14069633f(param_1[0x58],*(undefined4 *)(param_1 + 0x59));
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac914c0;
  FUN_144760d56(param_1 + 0x26);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141853f36 FUN_141853f36 body=71 status=ok
// SIG undefined FUN_141853f36(void)

undefined8 * FUN_141853f36(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141853f7e FUN_141853f7e body=71 status=ok
// SIG undefined FUN_141853f7e(void)

undefined8 * FUN_141853f7e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141853fc6 FUN_141853fc6 body=100 status=ok
// SIG undefined FUN_141853fc6(void)

undefined8 * FUN_141853fc6(undefined8 *param_1,int param_2)

{
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141854032 FUN_141854032 body=487 status=ok
// SIG undefined FUN_141854032(void)

void FUN_141854032(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_1a8 [40];
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined **local_68;
  undefined *local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_170 = 0x3002;
  local_168 = 0;
  local_130 = 0;
  local_128 = 0x200000000;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_f8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_f0 = DAT_14c8464f0;
  local_d8 = DAT_14c8464f0;
  local_c0 = DAT_14c8464f0;
  local_b8 = 0;
  local_b0 = 0x3006;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (undefined4)DAT_14c8464e0;
  uStack_84 = DAT_14c8464e0._4_4_;
  uStack_80 = (undefined4)DAT_14c8464e8;
  uStack_7c = DAT_14c8464e8._4_4_;
  local_78 = DAT_14c8464f0;
  local_70 = 0;
  local_6c = 0;
  local_e8 = local_100;
  uStack_e0 = uStack_f8;
  local_d0 = local_100;
  uStack_c8 = uStack_f8;
  FUN_1405c5fa2();
  local_60 = &DAT_14cb769e8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = &PTR_FUN_14b0394b0;
  local_48 = 0x3f800000;
  FUN_14095e2f2(&local_180,param_2);
  uVar2 = FUN_14477b072(param_1,DAT_14cb5fc08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_180);
  local_68 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_50 >> 0x20;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_58,0);
  }
  local_60 = (undefined *)0x0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185421a FUN_14185421a body=57 status=ok
// SIG undefined FUN_14185421a(void)

void FUN_14185421a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fd50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fd50 = FUN_140002ddd(FUN_1464e9328,uVar1,L"GbxItemContainerSlot");
  }
  return;
}



// FUNCTION 141854254 FUN_141854254 body=45 status=ok
// SIG undefined FUN_141854254(void)

void FUN_141854254(undefined8 param_1,longlong param_2)

{
  FUN_140fea71c(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
  if (*(longlong *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141854282 FUN_141854282 body=49 status=ok
// SIG undefined FUN_141854282(void)

void FUN_141854282(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140368b56(param_2 + 8);
  return;
}



// FUNCTION 1418542b3 FUN_1418542b3 body=373 status=ok
// SIG undefined FUN_1418542b3(void)

void FUN_1418542b3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140aae198(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b196e40;
  puVar1[5] = &PTR_LAB_14b197160;
  puVar1[6] = &PTR_FUN_14b197270;
  puVar1[0x42] = &PTR_FUN_14b197290;
  puVar1[0x94] = &PTR_LAB_14b1972c0;
  puVar1[0xb7] = &PTR_FUN_14b1972e0;
  puVar1[0x110] = &PTR_FUN_14b1972f8;
  puVar1[0x111] = &PTR_LAB_14b197308;
  puVar1[0x112] = 0;
  puVar1[0x113] = 0;
  puVar1[0x114] = 2;
  puVar1[0x115] = 0;
  *(undefined4 *)(puVar1 + 0x116) = 0xc3769d17;
  puVar1[0x117] = 0;
  puVar1[0x118] = 0;
  puVar1[0x119] = 0;
  *(undefined4 *)(puVar1 + 0x11a) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x8d4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8dc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8e4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8ec) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x8f4) = 0;
  *(undefined4 *)(puVar1 + 0x11f) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x903) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8fc) = 0;
  *(undefined4 *)(puVar1 + 0x126) = 0;
  puVar1[0x124] = 0;
  puVar1[0x125] = 0;
  puVar1[0x122] = 0;
  puVar1[0x123] = 0;
  *(undefined4 *)(puVar1 + 299) = 0;
  puVar1[0x129] = 0;
  puVar1[0x12a] = 0;
  puVar1[0x127] = 0;
  puVar1[0x128] = 0;
  puVar1[0x12e] = 0;
  puVar1[0x12f] = 0;
  puVar1[300] = 0;
  puVar1[0x12d] = 0;
  *(undefined4 *)(puVar1 + 0x130) = 2;
  *(undefined4 *)(puVar1 + 0x13d) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x984) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x98b) = 0;
  *(undefined4 *)(puVar1 + 0x137) = 0;
  puVar1[0x135] = 0;
  puVar1[0x136] = 0;
  puVar1[0x133] = 0;
  puVar1[0x134] = 0;
  *(undefined4 *)(puVar1 + 0x13c) = 0;
  puVar1[0x13a] = 0;
  puVar1[0x13b] = 0;
  puVar1[0x138] = 0;
  puVar1[0x139] = 0;
  puVar1[0x13e] = 0;
  puVar1[0x13f] = 0;
  *(undefined1 *)(puVar1 + 0x140) = 0;
  puVar1[0x141] = 0;
  puVar1[0x142] = 0;
  return;
}



// FUNCTION 141854428 FUN_141854428 body=40 status=ok
// SIG undefined FUN_141854428(void)

undefined8 FUN_141854428(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141854450 FUN_141854450 body=88 status=ok
// SIG undefined FUN_141854450(void)

longlong * FUN_141854450(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418544a8 FUN_1418544a8 body=45 status=ok
// SIG undefined FUN_1418544a8(void)

void FUN_1418544a8(undefined8 param_1,longlong param_2)

{
  FUN_140e457df(*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x58));
  if (*(longlong *)(param_2 + 0x50) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418544d6 FUN_1418544d6 body=213 status=ok
// SIG undefined FUN_1418544d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418544d6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b19cd90;
  FUN_1405d7ab2(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_14092228b(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014185458c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1418545ab FUN_1418545ab body=49 status=ok
// SIG undefined FUN_1418545ab(void)

longlong FUN_1418545ab(void)

{
  if (DAT_14cb602c8 == 0) {
    FUN_14086a14e(&DAT_14cb602c8,&PTR_FUN_14b19e210);
  }
  return DAT_14cb602c8;
}



// FUNCTION 1418545fa FUN_1418545fa body=57 status=ok
// SIG undefined FUN_1418545fa(void)

void FUN_1418545fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb605d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb605d0 = FUN_140002ddd(FUN_1464ec9fc,uVar1,L"GbxMaterialParameterInfo");
  }
  return;
}



// FUNCTION 141854633 FUN_141854633 body=42 status=ok
// SIG undefined FUN_141854633(void)

void FUN_141854633(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b1a3020;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14185465e FUN_14185465e body=79 status=ok
// SIG undefined FUN_14185465e(void)

undefined8 * FUN_14185465e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1a3020;
  FUN_140af8ca7(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418546ae FUN_1418546ae body=594 status=ok
// SIG undefined FUN_1418546ae(void)

void FUN_1418546ae(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  memset(param_2 + 2,0,0x1b0);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b1a4590;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0x6000;
  uVar2 = DAT_14c8464e8;
  param_2[0xd] = DAT_14c8464e0;
  param_2[0xe] = uVar2;
  param_2[0xf] = DAT_14c8464f0;
  uVar5 = DAT_14c846500._4_4_;
  uVar4 = (undefined4)DAT_14c846500;
  uVar3 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_2 + 0x10) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_2 + 0x84) = uVar3;
  *(undefined4 *)(param_2 + 0x11) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x8c) = uVar5;
  param_2[0x12] = DAT_14c846508;
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
  param_2[0x13] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = 0x6000;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  FUN_1447a97f4(param_2 + 0x1a,&DAT_14c9485f0);
  param_2[0x1f] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0xf;
  param_2[0x21] = 0;
  FUN_140daf6ae();
  param_2[0x23] = &DAT_14cb84be8;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x22] = &PTR_FUN_14b413550;
  param_2[0x26] = 0;
  *(undefined4 *)(param_2 + 0x27) = 0xf;
  param_2[0x28] = 0;
  FUN_140daf6ae();
  param_2[0x2a] = &DAT_14cb84be8;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x29] = &PTR_FUN_14b413550;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  *(undefined4 *)(param_2 + 0x33) = 0x6000;
  param_2[0x34] = 0;
  *(undefined1 *)(param_2 + 0x35) = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 141854900 FUN_141854900 body=118 status=ok
// SIG undefined FUN_141854900(void)

undefined8 FUN_141854900(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb84ca8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb84ca8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141854978 FUN_141854978 body=144 status=ok
// SIG undefined FUN_141854978(void)

void FUN_141854978(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa0);
  *param_2 = &PTR_FUN_14b1a6608;
  FUN_140c1345a();
  param_2[2] = &DAT_14cb8dda8;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = &PTR_FUN_14b4151c0;
  FUN_1447a97f4(param_2 + 5,&DAT_14c9485f0);
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0x6000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined8 *)((longlong)param_2 + 0x79) = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined2 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 141854a08 FUN_141854a08 body=130 status=ok
// SIG undefined FUN_141854a08(void)

undefined8 * FUN_141854a08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1a6608;
  FUN_140c1345a();
  param_1[2] = &DAT_14cb8dda8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = &PTR_FUN_14b4151c0;
  FUN_1447a97f4(param_1 + 5,&DAT_14c9485f0);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x6000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 141854a8a FUN_141854a8a body=68 status=ok
// SIG undefined FUN_141854a8a(void)

void FUN_141854a8a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b1a7da0;
  puVar1[5] = &PTR_FUN_14b1a8050;
  puVar1[10] = &PTR_FUN_14b1a8080;
  puVar1[0xb] = &PTR_FUN_14b1a8098;
  return;
}



// FUNCTION 141854ad3 FUN_141854ad3 body=49 status=ok
// SIG undefined FUN_141854ad3(void)

longlong FUN_141854ad3(void)

{
  if (DAT_14cb606e0 == 0) {
    FUN_14086a14e(&DAT_14cb606e0,&PTR_FUN_14b1a8b78);
  }
  return DAT_14cb606e0;
}



// FUNCTION 141854b04 FUN_141854b04 body=49 status=ok
// SIG undefined FUN_141854b04(void)

longlong FUN_141854b04(void)

{
  if (DAT_14cb606f8 == 0) {
    FUN_14086a14e(&DAT_14cb606f8,&PTR_FUN_14b1a8bf0);
  }
  return DAT_14cb606f8;
}



// FUNCTION 141854b36 FUN_141854b36 body=40 status=ok
// SIG undefined FUN_141854b36(void)

undefined8 FUN_141854b36(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141854b5e FUN_141854b5e body=547 status=ok
// SIG undefined FUN_141854b5e(void)

longlong * FUN_141854b5e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)FUN_14001cc68(0x128);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b1b50e0;
  memset(plVar5 + 0xb,0,0xd0);
  plVar5[2] = (longlong)&PTR_FUN_14a1b6c40;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  *(undefined4 *)(plVar5 + 0xb) = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = local_48 + 2;
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(plVar5 + 0xf,&local_50);
  plVar2 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x16] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b1b54e0;
  plVar5[0x17] = 0;
  plVar5[0x18] = 0;
  plVar5[0x19] = 0;
  *(undefined4 *)(plVar5 + 0x1a) = 0x2001;
  plVar5[0x1b] = 0;
  *(undefined4 *)(plVar5 + 0x1c) = 1;
  plVar5[0x1d] = 0;
  *(undefined2 *)(plVar5 + 0x21) = 4;
  *(undefined4 *)(plVar5 + 0x1e) = 0x41700000;
  bVar4 = DAT_14c9a8874 & 0x20;
  *(undefined1 *)(plVar5 + 0x22) = 3;
  *(char *)(plVar5 + 0x23) = (bVar4 == 0) * '\x03';
  *(undefined1 *)(plVar5 + 0x24) = 1;
  *param_2 = (longlong)(plVar5 + 2);
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141854da0 FUN_141854da0 body=126 status=ok
// SIG undefined FUN_141854da0(void)

undefined8 * FUN_141854da0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1b5150;
  plVar1 = param_1 + 10;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xe) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141854e1e FUN_141854e1e body=80 status=ok
// SIG undefined FUN_141854e1e(void)

void FUN_141854e1e(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14044066a(param_2 + 4,0x11,7);
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 141854e6e FUN_141854e6e body=426 status=ok
// SIG undefined FUN_141854e6e(void)

undefined8 * FUN_141854e6e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a1b6c40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_1 + 0xd,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_14b1b54e0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x2001;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 4;
  *(undefined4 *)(param_1 + 0x1c) = 0x41700000;
  *(undefined1 *)(param_1 + 0x20) = 3;
  *(char *)(param_1 + 0x21) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x22) = 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185501a FUN_14185501a body=140 status=ok
// SIG undefined FUN_14185501a(void)

void FUN_14185501a(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b1b54e0;
  plVar1 = (longlong *)(param_1 + 0xf0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x110) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x108)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x108)) {
    FUN_1400020a8(*plVar1);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 1418550a6 FUN_1418550a6 body=29 status=ok
// SIG undefined FUN_1418550a6(void)

undefined8 FUN_1418550a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418550c4 FUN_1418550c4 body=157 status=ok
// SIG undefined FUN_1418550c4(void)

undefined8 * FUN_1418550c4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1b54e0;
  plVar1 = param_1 + 0x1c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x20) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1f)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185518c FUN_14185518c body=126 status=ok
// SIG undefined FUN_14185518c(void)

undefined8 * FUN_14185518c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1b5150;
  plVar1 = param_1 + 10;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xe) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185520a FUN_14185520a body=49 status=ok
// SIG undefined FUN_14185520a(void)

longlong FUN_14185520a(void)

{
  if (DAT_14cb615e8 == 0) {
    FUN_14086a14e(&DAT_14cb615e8,&PTR_FUN_14b1ca008);
  }
  return DAT_14cb615e8;
}



// FUNCTION 14185523c FUN_14185523c body=440 status=ok
// SIG undefined FUN_14185523c(void)

void FUN_14185523c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 9,0,0xd0);
  *param_2 = &PTR_FUN_14a1b6c40;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_2 + 0xd,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x14] = 0;
  *param_2 = &PTR_FUN_14b1b54e0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0x2001;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 1;
  param_2[0x1b] = 0;
  *(undefined2 *)(param_2 + 0x1f) = 4;
  *(undefined4 *)(param_2 + 0x1c) = 0x41700000;
  *(undefined1 *)(param_2 + 0x20) = 3;
  *(char *)(param_2 + 0x21) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_2 + 0x22) = 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418553f6 FUN_1418553f6 body=135 status=ok
// SIG undefined FUN_1418553f6(void)

void FUN_1418553f6(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1b54e0;
  plVar1 = param_1 + 0x1c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x20) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1f)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  return;
}



// FUNCTION 14185547e FUN_14185547e body=243 status=ok
// SIG undefined FUN_14185547e(void)

void FUN_14185547e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1cb830;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_14472eb64(param_1 + 0x15,0);
  }
  param_1[0x1b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xd4)) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
    FUN_1446efbd8(param_1 + 0x17,0);
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 141855572 FUN_141855572 body=120 status=ok
// SIG undefined FUN_141855572(void)

undefined8 FUN_141855572(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x18;
    do {
      lVar1 = *(longlong *)(param_3 + -0x10 + lVar3);
      if (*(longlong *)(param_2 + -0x10 + lVar3) != lVar1) {
        *(undefined8 *)(param_2 + lVar3) = 0;
      }
      *(longlong *)(param_2 + -0x10 + lVar3) = lVar1;
      if (*(longlong *)(param_2 + -8 + lVar3) != *(longlong *)(param_3 + -8 + lVar3)) {
        *(undefined8 *)(param_2 + lVar3) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + -8 + lVar3) = uVar2;
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418555ea FUN_1418555ea body=35 status=ok
// SIG undefined FUN_1418555ea(void)

void FUN_1418555ea(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e0d752(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b1db640;
  return;
}



// FUNCTION 14185560d FUN_14185560d body=116 status=ok
// SIG undefined FUN_14185560d(void)

void FUN_14185560d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14480568a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b1d16f0;
  puVar1[5] = &PTR_FUN_14b1d20f0;
  puVar1[6] = &PTR_LAB_14b1d2130;
  puVar1[0x55] = &PTR_FUN_14b1d2180;
  puVar1[0x56] = &PTR_FUN_14b1d2200;
  puVar1[0x57] = &PTR_FUN_14b1d2210;
  puVar1[0xc4] = 0;
  puVar1[0xc5] = 0;
  puVar1[0xc6] = 0;
  puVar1[199] = 0;
  return;
}



// FUNCTION 141855681 FUN_141855681 body=49 status=ok
// SIG undefined FUN_141855681(void)

longlong FUN_141855681(void)

{
  if (DAT_14cb61cd8 == 0) {
    FUN_14073dd9a(&DAT_14cb61cd8,&PTR_LAB_14b1d7320);
  }
  return DAT_14cb61cd8;
}



// FUNCTION 1418556b2 FUN_1418556b2 body=40 status=ok
// SIG undefined FUN_1418556b2(void)

undefined8 FUN_1418556b2(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418556da FUN_1418556da body=40 status=ok
// SIG undefined FUN_1418556da(void)

undefined8 FUN_1418556da(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141855702 FUN_141855702 body=172 status=ok
// SIG undefined FUN_141855702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141855702(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b1d7e80;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1407f634a(param_1 + 0x13);
  FUN_140beec42(param_1 + 6);
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
                    /* WARNING: Could not recover jumptable at 0x000141855799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1418557ae FUN_1418557ae body=84 status=ok
// SIG undefined FUN_1418557ae(void)

longlong * FUN_1418557ae(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141855802 FUN_141855802 body=118 status=ok
// SIG undefined FUN_141855802(void)

undefined8 FUN_141855802(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb72748 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb72748,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141855888 FUN_141855888 body=166 status=ok
// SIG undefined FUN_141855888(void)

undefined8 FUN_141855888(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar5 = param_2 + 0x10;
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(param_3 + lVar6);
      if (*(longlong *)(param_2 + lVar6) != lVar3) {
        *(undefined8 *)(lVar5 + lVar6) = 0;
      }
      lVar1 = param_3 + lVar6;
      puVar2 = (undefined8 *)(lVar5 + lVar6);
      puVar2[-2] = lVar3;
      if (puVar2[-1] != *(longlong *)(lVar1 + 8)) {
        *(undefined8 *)(lVar5 + lVar6) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      puVar2[-1] = uVar4;
      *puVar2 = *(undefined8 *)(lVar1 + 0x10);
      FUN_1405b70a4(puVar2 + 1,lVar1 + 0x18);
      puVar2[3] = *(undefined8 *)(lVar1 + 0x28);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141855933 FUN_141855933 body=49 status=ok
// SIG undefined FUN_141855933(void)

longlong FUN_141855933(void)

{
  if (DAT_14cb62070 == 0) {
    FUN_14073dd9a(&DAT_14cb62070,&PTR_LAB_14b1e1568);
  }
  return DAT_14cb62070;
}



// FUNCTION 141855964 FUN_141855964 body=49 status=ok
// SIG undefined FUN_141855964(void)

longlong FUN_141855964(void)

{
  if (DAT_14cb621f8 == 0) {
    FUN_14086a14e(&DAT_14cb621f8,&PTR_FUN_14b1e3430);
  }
  return DAT_14cb621f8;
}



// FUNCTION 141855996 FUN_141855996 body=69 status=ok
// SIG undefined FUN_141855996(void)

undefined8 * FUN_141855996(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1e4280;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418559dc FUN_1418559dc body=153 status=ok
// SIG undefined FUN_1418559dc(void)

undefined8 FUN_1418559dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  if (param_4 != 0) {
    piVar5 = (int *)(param_3 + 0x18);
    puVar4 = (undefined8 *)(param_2 + 0x10);
    do {
      iVar1 = piVar5[-5];
      iVar2 = piVar5[-4];
      iVar3 = piVar5[-3];
      *(int *)(puVar4 + -2) = piVar5[-6];
      *(int *)((longlong)puVar4 + -0xc) = iVar1;
      *(int *)(puVar4 + -1) = iVar2;
      *(int *)((longlong)puVar4 + -4) = iVar3;
      if ((int *)(puVar4 + -2) != piVar5 + -6) {
        iVar1 = *piVar5;
        _Src = *(void **)(piVar5 + -2);
        *(int *)(puVar4 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar4 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar4,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar4,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      puVar4[2] = *(undefined8 *)(piVar5 + 2);
      piVar5 = piVar5 + 10;
      puVar4 = puVar4 + 5;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141855a76 FUN_141855a76 body=117 status=ok
// SIG undefined FUN_141855a76(void)

undefined8 * FUN_141855a76(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 141855aec FUN_141855aec body=71 status=ok
// SIG undefined FUN_141855aec(void)

undefined8 * FUN_141855aec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141855b34 FUN_141855b34 body=117 status=ok
// SIG undefined FUN_141855b34(void)

undefined8 * FUN_141855b34(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 141855ba9 FUN_141855ba9 body=49 status=ok
// SIG undefined FUN_141855ba9(void)

longlong FUN_141855ba9(void)

{
  if (DAT_14cb623f0 == 0) {
    FUN_14073dd9a(&DAT_14cb623f0,&PTR_LAB_14b1ea820);
  }
  return DAT_14cb623f0;
}



// FUNCTION 141855bda FUN_141855bda body=57 status=ok
// SIG undefined FUN_141855bda(void)

void FUN_141855bda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62770 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62770 = FUN_140002ddd(FUN_1464f8992,uVar1,L"GbxRewardData_Currency");
  }
  return;
}



// FUNCTION 141855c14 FUN_141855c14 body=88 status=ok
// SIG undefined FUN_141855c14(void)

longlong * FUN_141855c14(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141855c6c FUN_141855c6c body=118 status=ok
// SIG undefined FUN_141855c6c(void)

undefined8 FUN_141855c6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb89b88 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb89b88,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141855ce4 FUN_141855ce4 body=67 status=ok
// SIG undefined FUN_141855ce4(void)

longlong FUN_141855ce4(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_140d903a8(param_1,param_2);
  }
  FUN_140d902fe(param_1 + 0x18,param_2 + 0x18);
  FUN_14054c6c4(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 141855d28 FUN_141855d28 body=78 status=ok
// SIG undefined FUN_141855d28(void)

void FUN_141855d28(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141855d76 FUN_141855d76 body=118 status=ok
// SIG undefined FUN_141855d76(void)

undefined8 FUN_141855d76(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb72858 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb72858,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141855dee FUN_141855dee body=57 status=ok
// SIG undefined FUN_141855dee(void)

void FUN_141855dee(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447cd778(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141855e28 caseD_2 body=68 status=ok
// SIG undefined caseD_2(void)

void switchD_14400f025::caseD_2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return;
}



// FUNCTION 141855e6c FUN_141855e6c body=413 status=ok
// SIG undefined FUN_141855e6c(void)

undefined8 FUN_141855e6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_3 + 8 + lVar5);
      if (*(longlong *)(param_2 + 8 + lVar5) != lVar3) {
        *(undefined8 *)(param_2 + 0x18 + lVar5) = 0;
      }
      *(longlong *)(param_2 + 8 + lVar5) = lVar3;
      if (*(longlong *)(param_2 + 0x10 + lVar5) != *(longlong *)(param_3 + 0x10 + lVar5)) {
        *(undefined8 *)(param_2 + 0x18 + lVar5) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(param_2 + 0x10 + lVar5) = uVar4;
      *(undefined8 *)(param_2 + 0x18 + lVar5) = *(undefined8 *)(param_3 + 0x18 + lVar5);
      lVar3 = *(longlong *)(param_3 + 0x20 + lVar5);
      if (*(longlong *)(param_2 + 0x20 + lVar5) != lVar3) {
        *(undefined8 *)(param_2 + 0x30 + lVar5) = 0;
      }
      *(longlong *)(param_2 + 0x20 + lVar5) = lVar3;
      if (*(longlong *)(param_2 + 0x28 + lVar5) != *(longlong *)(param_3 + 0x28 + lVar5)) {
        *(undefined8 *)(param_2 + 0x30 + lVar5) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(param_2 + 0x28 + lVar5) = uVar4;
      *(undefined8 *)(param_2 + 0x30 + lVar5) = *(undefined8 *)(param_3 + 0x30 + lVar5);
      *(undefined4 *)(param_2 + 0x38 + lVar5) = *(undefined4 *)(param_3 + 0x38 + lVar5);
      lVar3 = *(longlong *)(param_3 + 0x40 + lVar5);
      if (*(longlong *)(param_2 + 0x40 + lVar5) != lVar3) {
        *(undefined8 *)(param_2 + 0x50 + lVar5) = 0;
      }
      *(longlong *)(param_2 + 0x40 + lVar5) = lVar3;
      if (*(longlong *)(param_2 + 0x48 + lVar5) != *(longlong *)(param_3 + 0x48 + lVar5)) {
        *(undefined8 *)(param_2 + 0x50 + lVar5) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(param_2 + 0x48 + lVar5) = uVar4;
      *(undefined8 *)(param_2 + 0x50 + lVar5) = *(undefined8 *)(param_3 + 0x50 + lVar5);
      puVar1 = (undefined8 *)(param_3 + 0x58 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x58 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar3 = *(longlong *)(param_3 + 0x68 + lVar5);
      if ((*(longlong *)(param_2 + 0x68 + lVar5) != lVar3) ||
         (*(int *)(param_2 + 0x70 + lVar5) != *(int *)(param_3 + 0x70 + lVar5))) {
        *(longlong *)(param_2 + 0x68 + lVar5) = lVar3;
        *(undefined4 *)(param_2 + 0x70 + lVar5) = *(undefined4 *)(param_3 + 0x70 + lVar5);
        *(undefined8 *)(param_2 + 0x78 + lVar5) = 0;
      }
      *(undefined4 *)(param_2 + 0x80 + lVar5) = *(undefined4 *)(param_3 + 0x80 + lVar5);
      lVar5 = lVar5 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185600a FUN_14185600a body=57 status=ok
// SIG undefined FUN_14185600a(void)

void FUN_14185600a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb627f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb627f0 = FUN_140002ddd(FUN_1464f8e58,uVar1,L"GbxRewardData_Package");
  }
  return;
}



// FUNCTION 141856044 FUN_141856044 body=57 status=ok
// SIG undefined FUN_141856044(void)

void FUN_141856044(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62808 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62808 = FUN_140002ddd(FUN_1464f90c5,uVar1,L"GbxRewardData_ProgressPoints");
  }
  return;
}



// FUNCTION 14185607e FUN_14185607e body=57 status=ok
// SIG undefined FUN_14185607e(void)

void FUN_14185607e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62838 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62838 = FUN_140002ddd(FUN_1464f9179,uVar1,L"GbxRewardData_UnlockableLedger");
  }
  return;
}



// FUNCTION 1418560b8 FUN_1418560b8 body=264 status=ok
// SIG undefined FUN_1418560b8(void)

undefined8 FUN_1418560b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      lVar1 = *(longlong *)(param_3 + -0x40);
      if (*(longlong *)(param_2 + -0x40) != lVar1) {
        *(undefined8 *)(param_2 + -0x30) = 0;
      }
      *(longlong *)(param_2 + -0x40) = lVar1;
      if (*(longlong *)(param_2 + -0x38) != *(longlong *)(param_3 + -0x38)) {
        *(undefined8 *)(param_2 + -0x30) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + -0x38) = uVar2;
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30);
      if ((*(longlong *)(param_2 + -0x20) != *(longlong *)(param_3 + -0x20)) ||
         (*(int *)(param_2 + -0x18) != *(int *)(param_3 + -0x18))) {
        *(longlong *)(param_2 + -0x20) = *(longlong *)(param_3 + -0x20);
        *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
        *(undefined8 *)(param_2 + -0x10) = 0;
      }
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      if ((*(longlong *)(param_2 + 0x18) != *(longlong *)(param_3 + 0x18)) ||
         (*(int *)(param_2 + 0x20) != *(int *)(param_3 + 0x20))) {
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_3 + 0x18);
        *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
        *(undefined8 *)(param_2 + 0x28) = 0;
      }
      FUN_140e8ab18(param_2 + 0x30,param_3 + 0x30);
      *(undefined2 *)(param_2 + 0x40) = *(undefined2 *)(param_3 + 0x40);
      param_3 = param_3 + 0x90;
      param_2 = param_2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418561c0 FUN_1418561c0 body=229 status=ok
// SIG undefined FUN_1418561c0(void)

undefined8 FUN_1418561c0(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x20);
    do {
      lVar3 = param_3[1];
      if (puVar5[-3] != lVar3) {
        puVar5[-1] = 0;
      }
      puVar5[-3] = lVar3;
      if (puVar5[-2] != param_3[2]) {
        puVar5[-1] = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      puVar5[-2] = uVar4;
      puVar5[-1] = param_3[3];
      if (puVar5 + -4 != param_3) {
        iVar2 = *(int *)(param_3 + 5);
        _Src = (void *)param_3[4];
        *(int *)(puVar5 + 1) = iVar2;
        if (iVar2 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*puVar5,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      puVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      *(undefined2 *)(puVar5 + 2) = *(undefined2 *)puVar1;
      puVar5 = puVar5 + 7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418562a6 FUN_1418562a6 body=221 status=ok
// SIG undefined FUN_1418562a6(void)

undefined8 FUN_1418562a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x30;
    do {
      lVar1 = *(longlong *)(param_3 + -0x28 + lVar3);
      if (*(longlong *)(param_2 + -0x28 + lVar3) != lVar1) {
        *(undefined8 *)(param_2 + -0x18 + lVar3) = 0;
      }
      *(longlong *)(param_2 + -0x28 + lVar3) = lVar1;
      if (*(longlong *)(param_2 + -0x20 + lVar3) != *(longlong *)(param_3 + -0x20 + lVar3)) {
        *(undefined8 *)(param_2 + -0x18 + lVar3) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + -0x20 + lVar3) = uVar2;
      *(undefined8 *)(param_2 + -0x18 + lVar3) = *(undefined8 *)(param_3 + -0x18 + lVar3);
      lVar1 = *(longlong *)(param_3 + -0x10 + lVar3);
      if (*(longlong *)(param_2 + -0x10 + lVar3) != lVar1) {
        *(undefined8 *)(param_2 + lVar3) = 0;
      }
      *(longlong *)(param_2 + -0x10 + lVar3) = lVar1;
      if (*(longlong *)(param_2 + -8 + lVar3) != *(longlong *)(param_3 + -8 + lVar3)) {
        *(undefined8 *)(param_2 + lVar3) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + -8 + lVar3) = uVar2;
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar3 = lVar3 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141856384 FUN_141856384 body=118 status=ok
// SIG undefined FUN_141856384(void)

undefined8 FUN_141856384(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb8a358 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb8a358,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418563fc FUN_1418563fc body=112 status=ok
// SIG undefined FUN_1418563fc(void)

undefined8 * FUN_1418563fc(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14494321d(0x140);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 14185646c FUN_14185646c body=86 status=ok
// SIG undefined FUN_14185646c(void)

void FUN_14185646c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  FUN_140679ffe(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418564c2 FUN_1418564c2 body=46 status=ok
// SIG undefined FUN_1418564c2(void)

void FUN_1418564c2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b1fd620;
  puVar1[5] = &PTR_FUN_14b1fd8d0;
  return;
}



// FUNCTION 1418564f0 FUN_1418564f0 body=40 status=ok
// SIG undefined FUN_1418564f0(void)

undefined8 FUN_1418564f0(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141856518 FUN_141856518 body=441 status=ok
// SIG undefined FUN_141856518(void)

longlong * FUN_141856518(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_14001cc68(0xb8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b207370;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14a1b6c40;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *(undefined4 *)(plVar4 + 0xb) = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = local_48 + 2;
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(plVar4 + 0xf,&local_50);
  plVar2 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x16] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b204090;
  *param_2 = (longlong)(plVar4 + 2);
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418566d2 FUN_1418566d2 body=40 status=ok
// SIG undefined FUN_1418566d2(void)

undefined8 FUN_1418566d2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418566fa FUN_1418566fa body=370 status=ok
// SIG undefined FUN_1418566fa(void)

undefined8 * FUN_1418566fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b207800;
  param_1[0x1f] = &PTR_FUN_14a4ab3d0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)((longlong)param_1 + 0x1c4) != 0) {
    FUN_14472eb64(param_1 + 0x37,0);
  }
  param_1[0x3d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1e4)) {
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x80;
    FUN_1446efbd8(param_1 + 0x39,0);
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x30);
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1 + 0x1f);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185686c FUN_14185686c body=70 status=ok
// SIG undefined FUN_14185686c(void)

undefined8 * FUN_14185686c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b207b70;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418568b2 FUN_1418568b2 body=342 status=ok
// SIG undefined FUN_1418568b2(void)

void FUN_1418568b2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14a1b6c40;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_2 + 0xd,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x14] = 0;
  *param_2 = &PTR_FUN_14b204090;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141856a26 FUN_141856a26 body=64 status=ok
// SIG undefined FUN_141856a26(void)

undefined1 FUN_141856a26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (*(byte *)(param_2 + 0x40) < 6) {
      *(undefined1 *)(param_2 + 0x40) = 0xff;
    }
    FUN_140219b74(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 141856a66 FUN_141856a66 body=69 status=ok
// SIG undefined FUN_141856a66(void)

undefined1
FUN_141856a66(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  if (*(byte *)(param_3 + 0x40) == 0xff || *(byte *)(param_2 + 0x40) == 0xff) {
    uVar1 = (*(byte *)(param_2 + 0x40) & *(byte *)(param_3 + 0x40)) == 0xff;
  }
  else {
    uVar1 = FUN_1406ec0ac(param_2,param_3);
  }
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 141856aac FUN_141856aac body=124 status=ok
// SIG undefined FUN_141856aac(void)

undefined8 * FUN_141856aac(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)param_1[0xc];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141856b4e FUN_141856b4e body=43 status=ok
// SIG undefined FUN_141856b4e(void)

void FUN_141856b4e(undefined8 param_1,longlong *param_2)

{
  FUN_14051f497(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141856b7a FUN_141856b7a body=9 status=ok
// SIG undefined FUN_141856b7a(void)

void FUN_141856b7a(longlong param_1)

{
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 141856b84 FUN_141856b84 body=29 status=ok
// SIG undefined FUN_141856b84(void)

undefined8 FUN_141856b84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141856ba1 FUN_141856ba1 body=49 status=ok
// SIG undefined FUN_141856ba1(void)

void FUN_141856ba1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b212b60;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 1;
  return;
}



// FUNCTION 141856bd2 FUN_141856bd2 body=45 status=ok
// SIG undefined FUN_141856bd2(void)

void FUN_141856bd2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b20b0a0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  return;
}



// FUNCTION 141856bff FUN_141856bff body=45 status=ok
// SIG undefined FUN_141856bff(void)

void FUN_141856bff(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b216ab0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  return;
}



// FUNCTION 141856c37 FUN_141856c37 body=49 status=ok
// SIG undefined FUN_141856c37(void)

longlong FUN_141856c37(void)

{
  if (DAT_14cb63790 == 0) {
    FUN_14073dd9a(&DAT_14cb63790,&PTR_LAB_14b20fc30);
  }
  return DAT_14cb63790;
}



// FUNCTION 141856c68 FUN_141856c68 body=79 status=ok
// SIG undefined FUN_141856c68(void)

undefined8 * FUN_141856c68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4b8650;
  param_1[0x1f] = &PTR_LAB_14a4b89c0;
  FUN_1404db99a(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141856cb8 FUN_141856cb8 body=70 status=ok
// SIG undefined FUN_141856cb8(void)

undefined8 * FUN_141856cb8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b212b60;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141856cfe FUN_141856cfe body=361 status=ok
// SIG undefined FUN_141856cfe(void)

undefined8 * FUN_141856cfe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2140a0;
  param_1[0x1f] = &PTR_LAB_14b214410;
  param_1[0x20] = &PTR_LAB_14b214440;
  param_1[0x22] = &PTR_FUN_14b214520;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)((longlong)param_1 + 0x1c4) != 0) {
    FUN_14472eb64(param_1 + 0x37,0);
  }
  param_1[0x3d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1e4)) {
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x80;
    FUN_1446efbd8(param_1 + 0x39,0);
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x30);
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1 + 0x22);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141856e68 FUN_141856e68 body=70 status=ok
// SIG undefined FUN_141856e68(void)

undefined8 * FUN_141856e68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b20b0a0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141856eae FUN_141856eae body=361 status=ok
// SIG undefined FUN_141856eae(void)

undefined8 * FUN_141856eae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b215ee0;
  param_1[0x1f] = &PTR_LAB_14b216250;
  param_1[0x20] = &PTR_LAB_14b216280;
  param_1[0x22] = &PTR_FUN_14b1cb830;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)((longlong)param_1 + 0x1c4) != 0) {
    FUN_14472eb64(param_1 + 0x37,0);
  }
  param_1[0x3d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1e4)) {
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x80;
    FUN_1446efbd8(param_1 + 0x39,0);
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x30);
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1 + 0x22);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141857018 FUN_141857018 body=70 status=ok
// SIG undefined FUN_141857018(void)

undefined8 * FUN_141857018(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b216ab0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185705e FUN_14185705e body=40 status=ok
// SIG undefined FUN_14185705e(void)

undefined8 FUN_14185705e(undefined8 param_1,int param_2)

{
  FUN_140a07062();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141857086 FUN_141857086 body=133 status=ok
// SIG undefined FUN_141857086(void)

undefined8 * FUN_141857086(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b217d70;
  param_1[5] = &PTR_LAB_14b218770;
  param_1[6] = &PTR_LAB_14b2187b0;
  param_1[0x55] = &PTR_LAB_14b218800;
  param_1[0x56] = &PTR_LAB_14b218880;
  param_1[0x57] = &PTR_LAB_14b218890;
  if (*(char *)(param_1 + 0xce) == '\x01') {
    *(undefined1 *)(param_1 + 0xce) = 0;
  }
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185710b FUN_14185710b body=49 status=ok
// SIG undefined FUN_14185710b(void)

longlong FUN_14185710b(void)

{
  if (DAT_14cb63838 == 0) {
    FUN_14086a14e(&DAT_14cb63838,&PTR_FUN_14b219b50);
  }
  return DAT_14cb63838;
}



// FUNCTION 14185713c FUN_14185713c body=49 status=ok
// SIG undefined FUN_14185713c(void)

longlong FUN_14185713c(void)

{
  if (DAT_14cb63958 == 0) {
    FUN_14073dd9a(&DAT_14cb63958,&PTR_LAB_14b21c4b0);
  }
  return DAT_14cb63958;
}



// FUNCTION 141857172 FUN_141857172 body=71 status=ok
// SIG undefined FUN_141857172(void)

undefined8 * FUN_141857172(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418571b9 FUN_1418571b9 body=49 status=ok
// SIG undefined FUN_1418571b9(void)

longlong FUN_1418571b9(void)

{
  if (DAT_14cb64228 == 0) {
    FUN_14086a14e(&DAT_14cb64228,&PTR_FUN_14b22a948);
  }
  return DAT_14cb64228;
}



// FUNCTION 1418571ea FUN_1418571ea body=49 status=ok
// SIG undefined FUN_1418571ea(void)

longlong FUN_1418571ea(void)

{
  if (DAT_14cb64470 == 0) {
    FUN_14073dd9a(&DAT_14cb64470,&PTR_LAB_14b231fa0);
  }
  return DAT_14cb64470;
}



// FUNCTION 14185721c FUN_14185721c body=44 status=ok
// SIG undefined FUN_14185721c(void)

void FUN_14185721c(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_2);
  return;
}



// FUNCTION 141857248 FUN_141857248 body=54 status=ok
// SIG undefined FUN_141857248(void)

undefined1 FUN_141857248(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054d9c0(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14185727e FUN_14185727e body=59 status=ok
// SIG undefined FUN_14185727e(void)

void FUN_14185727e(longlong param_1)

{
  FUN_140f217f9(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418572ba FUN_1418572ba body=178 status=ok
// SIG undefined FUN_1418572ba(void)

undefined8 * FUN_1418572ba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b236850;
  plVar3 = (longlong *)param_1[0x14];
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
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b222ae0;
  FUN_140d962ed(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140d962ed(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 141857376 FUN_141857376 body=117 status=ok
// SIG undefined FUN_141857376(void)

undefined8 * FUN_141857376(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418573eb FUN_1418573eb body=136 status=ok
// SIG undefined FUN_1418573eb(void)

void FUN_1418573eb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140edf546(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b242c50;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x14] = 0x3ff0000000000000;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(byte *)(puVar1 + 0x1a) = *(byte *)(puVar1 + 0x1a) & 0xfc;
  *(undefined1 *)((longlong)puVar1 + 0xd1) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[8] = DAT_14cb8b4e8;
  return;
}



// FUNCTION 141857473 FUN_141857473 body=49 status=ok
// SIG undefined FUN_141857473(void)

longlong FUN_141857473(void)

{
  if (DAT_14cb644e0 == 0) {
    FUN_14086a14e(&DAT_14cb644e0,&PTR_FUN_14b237d28);
  }
  return DAT_14cb644e0;
}



// FUNCTION 1418574a4 FUN_1418574a4 body=49 status=ok
// SIG undefined FUN_1418574a4(void)

longlong FUN_1418574a4(void)

{
  if (DAT_14cb64510 == 0) {
    FUN_14086a14e(&DAT_14cb64510,&PTR_FUN_14b2381b8);
  }
  return DAT_14cb64510;
}



// FUNCTION 1418574d5 FUN_1418574d5 body=62 status=ok
// SIG undefined FUN_1418574d5(void)

void FUN_1418574d5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1408d5686(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b242990;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 141857513 FUN_141857513 body=49 status=ok
// SIG undefined FUN_141857513(void)

longlong FUN_141857513(void)

{
  if (DAT_14cb64600 == 0) {
    FUN_14086a14e(&DAT_14cb64600,&PTR_FUN_14b2392e0);
  }
  return DAT_14cb64600;
}



// FUNCTION 141857544 FUN_141857544 body=49 status=ok
// SIG undefined FUN_141857544(void)

longlong FUN_141857544(void)

{
  if (DAT_14cb64878 == 0) {
    FUN_14086a14e(&DAT_14cb64878,&PTR_FUN_14b23be90);
  }
  return DAT_14cb64878;
}



// FUNCTION 141857575 FUN_141857575 body=493 status=ok
// SIG undefined FUN_141857575(void)

void FUN_141857575(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined **local_68;
  undefined *local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_158 = 0x3002;
  local_150 = 0;
  local_118 = 0;
  local_110 = 0x200000000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_e8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_e0 = DAT_14c8464f0;
  local_c8 = DAT_14c8464f0;
  local_c0 = 0;
  local_b8 = 0x3006;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_90 = (undefined4)DAT_14c8464e0;
  uStack_8c = DAT_14c8464e0._4_4_;
  uStack_88 = (undefined4)DAT_14c8464e8;
  uStack_84 = DAT_14c8464e8._4_4_;
  local_80 = DAT_14c8464f0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_d8 = local_f0;
  uStack_d0 = uStack_e8;
  FUN_1405c5fa2();
  local_60 = &DAT_14cb769e8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = &PTR_FUN_14b0394b0;
  local_48 = 0x1000000;
  local_170 = param_2;
  FUN_14095ec78(&local_168,param_3);
  FUN_1447cd2ec(param_1,&local_170);
  local_68 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_50 >> 0x20;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_58,0);
  }
  local_60 = (undefined *)0x0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141857763 FUN_141857763 body=734 status=ok
// SIG undefined FUN_141857763(void)

void FUN_141857763(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  int local_150;
  undefined8 local_148;
  longlong local_140 [6];
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [16];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90 [2];
  undefined **local_80;
  undefined *local_78;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_158 = 0;
  local_150 = 0x3002;
  local_148 = 0;
  local_110 = 0;
  local_108 = 0x200000000;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_f0._0_4_ = 0;
  local_f0._4_8_ = 0;
  local_e0 = (undefined4)DAT_14c8464e0;
  uStack_dc = DAT_14c8464e0._4_4_;
  uStack_d8 = (undefined4)DAT_14c8464e8;
  uStack_d4 = DAT_14c8464e8._4_4_;
  local_d0 = DAT_14c8464f0;
  local_c8 = (undefined4)DAT_14c8464e0;
  uStack_c4 = DAT_14c8464e0._4_4_;
  uStack_c0 = (undefined4)DAT_14c8464e8;
  uStack_bc = DAT_14c8464e8._4_4_;
  local_b8 = DAT_14c8464f0;
  local_b0 = (undefined4)DAT_14c8464e0;
  uStack_ac = DAT_14c8464e0._4_4_;
  uStack_a8 = (undefined4)DAT_14c8464e8;
  uStack_a4 = DAT_14c8464e8._4_4_;
  local_a0 = DAT_14c8464f0;
  local_98 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_168 = param_1;
  FUN_1405c5fa2();
  local_78 = &DAT_14cb769e8;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = &PTR_FUN_14b0394b0;
  if (*param_3 != 0 || (int)param_3[1] != 0x3002) {
    local_148 = 0;
    local_158 = *param_3;
    local_150 = (int)param_3[1];
  }
  local_160 = param_2;
  if (local_140 != param_3 + 3) {
    plVar4 = param_3 + 3;
    if ((longlong *)param_3[9] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[9];
    }
    FUN_1400709d4(local_140,plVar4,(int)param_3[10],2);
  }
  lVar2 = param_3[0xb];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_3[0xb];
    }
  }
  lVar3 = param_3[0xc];
  local_100 = lVar2;
  if ((DAT_14c950c29 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_3[0xc];
    }
  }
  uStack_f8 = (undefined4)lVar3;
  uStack_f4 = (undefined4)((ulonglong)lVar3 >> 0x20);
  plVar4 = param_3 + 0xd;
  plVar5 = (longlong *)local_f0;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar5 = *plVar4;
    plVar4 = plVar4 + 1;
    plVar5 = plVar5 + 1;
  }
  local_98 = (undefined4)param_3[0x18];
  FUN_1403e062e(local_90,param_3 + 0x19);
  (*(code *)local_80[4])(&local_80,0);
  local_78 = (undefined *)param_3[0x1c];
  FUN_1406022fe(&local_70,param_3 + 0x1d);
  FUN_1447cd2ec(local_168,&local_160);
  local_80 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_68 >> 0x20;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_70,0);
  }
  local_78 = (undefined *)0x0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141857a42 FUN_141857a42 body=49 status=ok
// SIG undefined FUN_141857a42(void)

longlong FUN_141857a42(void)

{
  if (DAT_14cb64f20 == 0) {
    FUN_14086a14e(&DAT_14cb64f20,&PTR_FUN_14b248f78);
  }
  return DAT_14cb64f20;
}



// FUNCTION 141857a74 FUN_141857a74 body=118 status=ok
// SIG undefined FUN_141857a74(void)

undefined8 FUN_141857a74(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb8b958 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb8b958,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141857aec FUN_141857aec body=182 status=ok
// SIG undefined FUN_141857aec(void)

void FUN_141857aec(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar7 = (longlong)*(int *)(param_1 + 0x38) << 7;
    iVar6 = 0;
    do {
      cVar2 = FUN_144a76f74(lVar5 + 8,1,0);
      if (cVar2 == '\0') {
        pcVar1 = (code *)*param_2;
        plVar4 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar4 = param_2 + 4;
        }
        local_4c = iVar6;
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar3,lVar5);
      }
      else {
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x80;
      lVar7 = lVar7 + -0x80;
    } while (lVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141857ba4 FUN_141857ba4 body=68 status=ok
// SIG undefined FUN_141857ba4(void)

longlong FUN_141857ba4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar2 = (longlong)*(int *)(param_1 + 0x38) << 7;
    do {
      cVar1 = FUN_140dcee44(lVar3 + 8,param_2);
      if (cVar1 != '\0') {
        return lVar3;
      }
      lVar3 = lVar3 + 0x80;
      lVar2 = lVar2 + -0x80;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 141857be8 FUN_141857be8 body=118 status=ok
// SIG undefined FUN_141857be8(void)

undefined8 FUN_141857be8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb8b8f8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb8b8f8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141857c60 FUN_141857c60 body=117 status=ok
// SIG undefined FUN_141857c60(void)

undefined8 * FUN_141857c60(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 141857cd5 FUN_141857cd5 body=54 status=ok
// SIG undefined FUN_141857cd5(void)

void FUN_141857cd5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *puVar1 = &PTR_FUN_14b2510e0;
  return;
}



// FUNCTION 141857d0b FUN_141857d0b body=67 status=ok
// SIG undefined FUN_141857d0b(void)

void FUN_141857d0b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b251fe0;
  puVar1[6] = 0;
  *(undefined2 *)(puVar1 + 10) = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
  return;
}



// FUNCTION 141857d53 FUN_141857d53 body=49 status=ok
// SIG undefined FUN_141857d53(void)

longlong FUN_141857d53(void)

{
  if (DAT_14cb65428 == 0) {
    FUN_14073dd9a(&DAT_14cb65428,&PTR_LAB_14b254300);
  }
  return DAT_14cb65428;
}



// FUNCTION 141857d84 FUN_141857d84 body=481 status=ok
// SIG undefined FUN_141857d84(void)

void FUN_141857d84(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  local_30 = 0x19101;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14170fd90;
      local_70 = 0x8000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = local_30;
  local_40 = 0;
  uVar4 = FUN_140af1c62(param_1);
  *param_3 = uVar4;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141857f66 FUN_141857f66 body=286 status=ok
// SIG undefined FUN_141857f66(void)

void FUN_141857f66(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_19);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_19);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar4 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_19);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    bVar3 = 1;
  }
  else {
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x248) & 1;
  }
  pbVar4 = &local_19;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar4 = *(byte **)(param_2 + 0x38);
  }
  *pbVar4 = bVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141858086 FUN_141858086 body=701 status=ok
// SIG undefined FUN_141858086(void)

void FUN_141858086(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  byte local_51;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_50 = 0;
  uStack_49 = 0;
  local_48 = 0x19101;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14170fd90;
      local_70 = 0x8000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_50);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_50);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_50);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        uVar1 = *(undefined8 *)(pbVar4 + 1);
        pbVar4 = pbVar4 + 9;
        *(byte **)(param_2 + 0x20) = pbVar4;
        uStack_50 = (undefined7)uVar1;
        uStack_49 = (undefined1)((ulonglong)uVar1 >> 0x38);
        goto LAB_14185814f;
      }
      (*pcVar2)(uVar1,param_2,&uStack_50);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
LAB_14185814f:
  local_51 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_51);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_51);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar4 + 1);
      *(byte **)(param_2 + 0x20) = pbVar4 + 9;
      local_51 = (byte)uVar1;
      uStack_50 = (undefined7)((ulonglong)uVar1 >> 8);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_51);
    }
  }
  pbVar4 = &local_51;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar4 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = CONCAT17(uStack_49,uStack_50);
  local_30 = local_48;
  local_28 = 0;
  bVar3 = FUN_140af1c62(param_1);
  *pbVar4 = bVar3 ^ 1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141858344 FUN_141858344 body=47 status=ok
// SIG undefined FUN_141858344(void)

void FUN_141858344(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb653b0);
                    /* WARNING: Could not recover jumptable at 0x000141858370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 141858373 FUN_141858373 body=74 status=ok
// SIG undefined FUN_141858373(void)

void FUN_141858373(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_14060481e(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14b256e10;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
  *(byte *)((longlong)puVar1 + 0x7c) = *(byte *)((longlong)puVar1 + 0x7c) & 0xfe;
  return;
}



// FUNCTION 1418583be FUN_1418583be body=67 status=ok
// SIG undefined FUN_1418583be(void)

undefined8 * FUN_1418583be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b250db0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141858402 FUN_141858402 body=126 status=ok
// SIG undefined FUN_141858402(void)

undefined8 * FUN_141858402(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b251fe0;
  plVar1 = param_1 + 7;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xb) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 10)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 10)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141858480 FUN_141858480 body=118 status=ok
// SIG undefined FUN_141858480(void)

undefined8 * FUN_141858480(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b254bd0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 1418584f6 FUN_1418584f6 body=79 status=ok
// SIG undefined FUN_1418584f6(void)

void FUN_1418584f6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141858541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141858546 FUN_141858546 body=112 status=ok
// SIG undefined FUN_141858546(void)

undefined8 * FUN_141858546(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_14054d9c0(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 1418585b6 FUN_1418585b6 body=118 status=ok
// SIG undefined FUN_1418585b6(void)

undefined8 FUN_1418585b6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb8b978 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb8b978,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185862e FUN_14185862e body=118 status=ok
// SIG undefined FUN_14185862e(void)

undefined8 FUN_14185862e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb8b998 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb8b998,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418586a5 FUN_1418586a5 body=152 status=ok
// SIG undefined FUN_1418586a5(void)

void FUN_1418586a5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14094d83e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b2625a0;
  puVar1[0x4a] = &PTR_FUN_14b2629a0;
  puVar1[0x80] = 0;
  *(undefined4 *)(puVar1 + 0x81) = 0;
  puVar1[0x76] = 0;
  puVar1[0x77] = 0;
  puVar1[0x78] = 0;
  puVar1[0x79] = 0;
  puVar1[0x7a] = 0;
  puVar1[0x7b] = 0;
  puVar1[0x7c] = 0;
  puVar1[0x7d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x40c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x414) = 0;
  puVar1[0x84] = 0;
  *(undefined4 *)(puVar1 + 0x85) = 0;
  puVar1[0x86] = 0;
  puVar1[0x87] = 0;
  puVar1[0x88] = 0;
  puVar1[0x89] = 0;
  puVar1[0x8a] = 0;
  puVar1[0x8b] = 0;
  return;
}



// FUNCTION 14185873d FUN_14185873d body=49 status=ok
// SIG undefined FUN_14185873d(void)

longlong FUN_14185873d(void)

{
  if (DAT_14cb657d8 == 0) {
    FUN_14086a14e(&DAT_14cb657d8,&PTR_FUN_14b25bf10);
  }
  return DAT_14cb657d8;
}



// FUNCTION 14185876e FUN_14185876e body=49 status=ok
// SIG undefined FUN_14185876e(void)

longlong FUN_14185876e(void)

{
  if (DAT_14cb654f0 == 0) {
    FUN_14086a14e(&DAT_14cb654f0,&PTR_FUN_14b2591e8);
  }
  return DAT_14cb654f0;
}



// FUNCTION 1418587a0 FUN_1418587a0 body=114 status=ok
// SIG undefined FUN_1418587a0(void)

void FUN_1418587a0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 3;
  if ((int)param_1[4] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1418587bb;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1418587bb:
  FUN_140e0eb50(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141858812 FUN_141858812 body=118 status=ok
// SIG undefined FUN_141858812(void)

undefined8 FUN_141858812(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb8b9d8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb8b9d8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185888a FUN_14185888a body=118 status=ok
// SIG undefined FUN_14185888a(void)

undefined8 FUN_14185888a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb8b9b8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb8b9b8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141858901 FUN_141858901 body=49 status=ok
// SIG undefined FUN_141858901(void)

longlong FUN_141858901(void)

{
  if (DAT_14cb65af0 == 0) {
    FUN_14086a14e(&DAT_14cb65af0,&PTR_FUN_14b2644e0);
  }
  return DAT_14cb65af0;
}



// FUNCTION 141858932 FUN_141858932 body=49 status=ok
// SIG undefined FUN_141858932(void)

longlong FUN_141858932(void)

{
  if (DAT_14cb65a90 == 0) {
    FUN_14086a14e(&DAT_14cb65a90,&PTR_FUN_14b263fc0);
  }
  return DAT_14cb65a90;
}



// FUNCTION 141858964 FUN_141858964 body=71 status=ok
// SIG undefined FUN_141858964(void)

undefined8 * FUN_141858964(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418589ab FUN_1418589ab body=49 status=ok
// SIG undefined FUN_1418589ab(void)

longlong FUN_1418589ab(void)

{
  if (DAT_14cb65cc8 == 0) {
    FUN_14086a14e(&DAT_14cb65cc8,&PTR_FUN_14b267090);
  }
  return DAT_14cb65cc8;
}



// FUNCTION 1418589dc FUN_1418589dc body=49 status=ok
// SIG undefined FUN_1418589dc(void)

longlong FUN_1418589dc(void)

{
  if (DAT_14cb65d70 == 0) {
    FUN_14086a14e(&DAT_14cb65d70,&PTR_FUN_14b267f80);
  }
  return DAT_14cb65d70;
}



// FUNCTION 141858a0e FUN_141858a0e body=117 status=ok
// SIG undefined FUN_141858a0e(void)

undefined8 * FUN_141858a0e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 141858a84 FUN_141858a84 body=133 status=ok
// SIG undefined FUN_141858a84(void)

void FUN_141858a84(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140e81e1c(param_2[0xc],(int)param_2[0xd]);
  if (param_2[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_2[10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_2[8];
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
  if (param_2[5] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141858b0a FUN_141858b0a body=76 status=ok
// SIG undefined FUN_141858b0a(void)

undefined8 * FUN_141858b0a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b26aca0;
  FUN_140861e20(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141858b56 FUN_141858b56 body=68 status=ok
// SIG undefined FUN_141858b56(void)

void FUN_141858b56(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b270480;
  puVar1[5] = &PTR_FUN_14b270a60;
  puVar1[6] = &PTR_LAB_14b270aa0;
  puVar1[0x55] = 0;
  return;
}



// FUNCTION 141858b9a FUN_141858b9a body=40 status=ok
// SIG undefined FUN_141858b9a(void)

undefined8 FUN_141858b9a(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141858bc2 FUN_141858bc2 body=40 status=ok
// SIG undefined FUN_141858bc2(void)

undefined8 FUN_141858bc2(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141858bf8 FUN_141858bf8 body=140 status=ok
// SIG undefined FUN_141858bf8(void)

void FUN_141858bf8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (longlong *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x1a8) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_141858c19;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_141858c19:
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141858c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141858c84 FUN_141858c84 body=93 status=ok
// SIG undefined FUN_141858c84(void)

void FUN_141858c84(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140d24ce3(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141858ce1 FUN_141858ce1 body=273 status=ok
// SIG undefined FUN_141858ce1(void)

void FUN_141858ce1(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b27cd40;
  puVar1[5] = &PTR_FUN_14b27d000;
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x79) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x81) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  local_30 = "Default";
  local_28 = 7;
  local_24 = 0;
  uVar2 = FUN_14001a6c0(&local_30,1);
  puVar1[0x22] = (ulonglong)uVar2;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  *(undefined1 *)(puVar1 + 0x29) = 1;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141858df8 FUN_141858df8 body=57 status=ok
// SIG undefined FUN_141858df8(void)

void FUN_141858df8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66730 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66730 = FUN_140002ddd(FUN_14650fcc2,uVar1,L"GbxStatusEffectApplicationDefaults");
  }
  return;
}



// FUNCTION 141858e32 FUN_141858e32 body=91 status=ok
// SIG undefined FUN_141858e32(void)

void FUN_141858e32(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0x940);
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0x42b40000;
  *param_2 = &PTR_FUN_14b280240;
  FUN_144894d4c(param_2 + 0x10);
  return;
}



// FUNCTION 141858e8e FUN_141858e8e body=476 status=ok
// SIG undefined FUN_141858e8e(void)

void FUN_141858e8e(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  memset(param_2 + 2,0,0xc30);
  param_2[1] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *param_2 = &PTR_FUN_14b280d90;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = &PTR_FUN_14b27fdf0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 10;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[8] = &PTR_FUN_14b280800;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0x1a;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_2 + 0x27) = 0;
  *(undefined4 *)((longlong)param_2 + 0x13c) = 0x42b40000;
  param_2[0x18] = &PTR_FUN_14b280240;
  FUN_144894d4c(param_2 + 0x28);
  param_2[0x140] = 0;
  param_2[0x141] = 0;
  param_2[0x142] = 0;
  param_2[0x143] = 0;
  *(undefined1 *)(param_2 + 0x144) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0x148;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x146] = &PTR_FUN_14b2800d0;
  param_2[0x154] = 0;
  *(undefined1 *)(param_2 + 0x155) = 0;
  *(undefined4 *)((longlong)param_2 + 0xaac) = 0x42b40000;
  param_2[0x156] = 0;
  param_2[0x157] = 0;
  *(undefined1 *)(param_2 + 0x158) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0x15c;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x15a] = &PTR_FUN_14b2800d0;
  param_2[0x168] = 0;
  *(undefined1 *)(param_2 + 0x169) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4c) = 0x42b40000;
  param_2[0x16a] = 0;
  param_2[0x16b] = 0;
  param_2[0x16c] = 0;
  param_2[0x16d] = 0;
  param_2[0x16e] = 0;
  uVar1 = *(uint *)((longlong)param_2 + 0xc34);
  *(undefined1 *)(param_2 + 0x16f) = 0;
  *(undefined1 **)((longlong)param_2 + 0xb7c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_2 + 0xb84) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_2 + 0xb8c) = 0;
  *(undefined4 *)(param_2 + 0x172) = 0x3f800000;
  param_2[0x173] = 0;
  param_2[0x174] = 0;
  *(undefined1 *)(param_2 + 0x175) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0x178;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x176] = &PTR_FUN_14b2803b0;
  param_2[0x184] = &DAT_3f8000003f800000;
  param_2[0x185] = 0x3f8000003e99999a;
  *(undefined4 *)(param_2 + 0x186) = 0x447a0000;
  *(uint *)((longlong)param_2 + 0xc34) = uVar1 & 0xfffffffe;
  return;
}



// FUNCTION 141859074 FUN_141859074 body=43 status=ok
// SIG undefined FUN_141859074(void)

void FUN_141859074(undefined8 param_1,longlong *param_2)

{
  FUN_1408c28ac(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418590a0 FUN_1418590a0 body=9 status=ok
// SIG undefined FUN_1418590a0(void)

void FUN_1418590a0(longlong param_1)

{
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 1418590aa FUN_1418590aa body=29 status=ok
// SIG undefined FUN_1418590aa(void)

undefined8 FUN_1418590aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418590c7 FUN_1418590c7 body=43 status=ok
// SIG undefined FUN_1418590c7(void)

void FUN_1418590c7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b288770;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1418590f2 FUN_1418590f2 body=57 status=ok
// SIG undefined FUN_1418590f2(void)

void FUN_1418590f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66e58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66e58 = FUN_140002ddd(FUN_146512812,uVar1,L"GbxStatusEffectPresentationGraphSettings");
  }
  return;
}



// FUNCTION 14185912c FUN_14185912c body=40 status=ok
// SIG undefined FUN_14185912c(void)

undefined8 FUN_14185912c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141859154 FUN_141859154 body=46 status=ok
// SIG undefined FUN_141859154(void)

void FUN_141859154(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(byte *)(param_2 + 0x130) = *(byte *)(param_2 + 0x130) & 0xfc;
  return;
}



// FUNCTION 141859182 FUN_141859182 body=58 status=ok
// SIG undefined FUN_141859182(void)

void FUN_141859182(undefined8 param_1,longlong param_2)

{
  FUN_14099adc2(*(undefined8 *)(param_2 + 0x110),*(undefined4 *)(param_2 + 0x118));
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_2);
  return;
}



// FUNCTION 1418591bc FUN_1418591bc body=372 status=ok
// SIG undefined FUN_1418591bc(void)

undefined8 FUN_1418591bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      lVar1 = param_2 + lVar9;
      FUN_140cae46a(lVar1,param_3 + lVar9);
      lVar8 = param_3 + lVar9;
      lVar2 = param_2 + 0x58 + lVar9;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar8 + 0x50);
      FUN_140cae504(lVar2,lVar8 + 0x58);
      FUN_140cae59e(lVar1 + 0xa8,param_3 + lVar9 + 0xa8);
      uVar5 = *(undefined4 *)(lVar8 + 0xfc);
      uVar6 = *(undefined4 *)(lVar8 + 0x100);
      uVar7 = *(undefined4 *)(lVar8 + 0x104);
      *(undefined4 *)(lVar2 + 0xa0) = *(undefined4 *)(lVar8 + 0xf8);
      *(undefined4 *)(lVar2 + 0xa4) = uVar5;
      *(undefined4 *)(lVar2 + 0xa8) = uVar6;
      *(undefined4 *)(lVar2 + 0xac) = uVar7;
      *(undefined8 *)(lVar2 + 0xad) = *(undefined8 *)(lVar8 + 0x105);
      if (param_2 != param_3) {
        FUN_14099adc2(*(undefined8 *)(param_2 + 0x110 + lVar9),
                      *(undefined4 *)(param_2 + 0x118 + lVar9));
        iVar3 = *(int *)(param_3 + 0x118 + lVar9);
        uVar4 = *(undefined8 *)(param_3 + 0x110 + lVar9);
        *(int *)(param_2 + 0x118 + lVar9) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x11c + lVar9) == 0) {
          *(undefined4 *)(param_2 + 0x11c + lVar9) = 0;
        }
        else {
          puVar10 = (undefined8 *)(param_2 + lVar9 + 0x110);
          FUN_14872eec8(puVar10,iVar3);
          FUN_14872ef37(*puVar10,uVar4,iVar3);
        }
      }
      lVar8 = *(longlong *)(param_3 + 0x120 + lVar9);
      if (DAT_14c950c29 == '\x01') {
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar8 = *(longlong *)(param_3 + 0x120 + lVar9);
        }
      }
      *(longlong *)(lVar1 + 0x120) = lVar8;
      *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(param_3 + 0x128 + lVar9);
      *(undefined1 *)(lVar1 + 0x130) = *(undefined1 *)(param_3 + 0x130 + lVar9);
      lVar9 = lVar9 + 0x138;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141859330 FUN_141859330 body=366 status=ok
// SIG undefined FUN_141859330(void)

void FUN_141859330(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1418593b5;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_1418593b5:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 14185949e FUN_14185949e body=93 status=ok
// SIG undefined FUN_14185949e(void)

undefined8 * FUN_14185949e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140cf8141(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140ea9e16(param_1,iVar1);
      FUN_140ea993a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1418594fc FUN_1418594fc body=93 status=ok
// SIG undefined FUN_1418594fc(void)

undefined8 * FUN_1418594fc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140bb59c9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14872f282(param_1,iVar1);
      FUN_14872f2e4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14185955a FUN_14185955a body=93 status=ok
// SIG undefined FUN_14185955a(void)

undefined8 * FUN_14185955a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140bb5a16(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14872f312(param_1,iVar1);
      FUN_14872f385(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1418595b8 FUN_1418595b8 body=85 status=ok
// SIG undefined FUN_1418595b8(void)

undefined8 * FUN_1418595b8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b28ba10;
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



// FUNCTION 14185962a FUN_14185962a body=40 status=ok
// SIG undefined FUN_14185962a(void)

undefined8 FUN_14185962a(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141859652 FUN_141859652 body=84 status=ok
// SIG undefined FUN_141859652(void)

longlong * FUN_141859652(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418596a6 FUN_1418596a6 body=230 status=ok
// SIG undefined FUN_1418596a6(void)

undefined8 * FUN_1418596a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b290580;
  param_1[3] = &DAT_14a176f00;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = &PTR_FUN_14a177080;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_14472eb64(param_1 + 4,0);
  }
  param_1[10] = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x4c)) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    FUN_1446efbd8(param_1 + 6,0);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185978c FUN_14185978c body=57 status=ok
// SIG undefined FUN_14185978c(void)

void FUN_14185978c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67090 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67090 =
         FUN_140002ddd(FUN_14651429c,uVar1,L"GbxStatusEffectPresentationGraphNodeSettings_Driver");
  }
  return;
}



// FUNCTION 1418597c6 FUN_1418597c6 body=57 status=ok
// SIG undefined FUN_1418597c6(void)

void FUN_1418597c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb670d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb670d8 =
         FUN_140002ddd(FUN_146513d90,uVar1,L"GbxStatusEffectPresentationGraphNodeSettings_Effect");
  }
  return;
}


