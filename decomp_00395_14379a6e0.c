// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14379a6e0 FUN_14379a6e0 body=1926 status=ok
// SIG undefined FUN_14379a6e0(void)

void FUN_14379a6e0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *unaff_RBX;
  ulonglong uVar9;
  undefined8 *puVar10;
  void *_Src;
  int *_Src_00;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  int local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40._0_7_ = 0;
  local_40._7_1_ = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    unaff_RBX = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = unaff_RBX[3];
    if ((*(byte *)((longlong)unaff_RBX + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)unaff_RBX + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*unaff_RBX + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*unaff_RBX + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(unaff_RBX);
          if (cVar6 != '\0') {
            (**(code **)(*unaff_RBX + 0xa0))(unaff_RBX,lVar8,&local_40);
            goto LAB_14379a89b;
          }
        }
        puVar10 = (undefined8 *)(lVar8 + *(int *)((longlong)unaff_RBX + 0x44));
        if (puVar10 != &local_40) {
          if ((*(byte *)((longlong)unaff_RBX + 0x3b) & 0x40) == 0) {
            (**(code **)(*unaff_RBX + 0x100))(unaff_RBX,&local_40,puVar10,(int)unaff_RBX[6]);
          }
          else {
            memcpy(&local_40,puVar10,
                   (longlong)(int)unaff_RBX[6] * (longlong)*(int *)((longlong)unaff_RBX + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)unaff_RBX[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(unaff_RBX,&local_40,lVar8,1);
      }
      else {
        (*pcVar2)(unaff_RBX,&local_40,lVar8);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar10;
        puVar10 = puVar7 + 2;
      } while ((longlong *)*puVar7 != unaff_RBX);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_40);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_40);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_40._0_7_ = (undefined7)uVar3;
      local_40._7_1_ = (undefined1)((ulonglong)uVar3 >> 0x38);
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_40);
    }
  }
LAB_14379a89b:
  puVar10 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  uStack_44 = uStack_44 & 0xffffff;
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
    unaff_RBX = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = unaff_RBX[3];
    if ((*(byte *)((longlong)unaff_RBX + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)unaff_RBX + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*unaff_RBX + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*unaff_RBX + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(unaff_RBX);
          if (cVar6 != '\0') {
            (**(code **)(*unaff_RBX + 0xa0))(unaff_RBX,lVar8,(longlong)&uStack_44 + 3);
            goto LAB_14379aa5a;
          }
        }
        _Src = (void *)(lVar8 + *(int *)((longlong)unaff_RBX + 0x44));
        if (_Src != (void *)((longlong)&uStack_44 + 3)) {
          if ((*(byte *)((longlong)unaff_RBX + 0x3b) & 0x40) == 0) {
            (**(code **)(*unaff_RBX + 0x100))
                      (unaff_RBX,(longlong)&uStack_44 + 3,_Src,(int)unaff_RBX[6]);
          }
          else {
            memcpy((void *)((longlong)&uStack_44 + 3),_Src,
                   (longlong)(int)unaff_RBX[6] * (longlong)*(int *)((longlong)unaff_RBX + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)unaff_RBX[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(unaff_RBX,(longlong)&uStack_44 + 3,lVar8,1);
      }
      else {
        (*pcVar2)(unaff_RBX,(longlong)&uStack_44 + 3,lVar8);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != unaff_RBX);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,(longlong)&uStack_44 + 3);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,(longlong)&uStack_44 + 3);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_44._3_1_ = (undefined1)uVar3;
      local_40._0_7_ = (undefined7)((ulonglong)uVar3 >> 8);
    }
    else {
      (*pcVar2)(uVar3,param_2,(longlong)&uStack_44 + 3);
    }
  }
LAB_14379aa5a:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    unaff_RBX = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = unaff_RBX[3];
    if ((*(byte *)((longlong)unaff_RBX + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)unaff_RBX + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar2 = *(code **)(*unaff_RBX + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*unaff_RBX + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(unaff_RBX);
          if (cVar6 != '\0') {
            (**(code **)(*unaff_RBX + 0xa0))(unaff_RBX,lVar8,&local_48);
            goto LAB_14379ac0d;
          }
        }
        _Src_00 = (int *)(lVar8 + *(int *)((longlong)unaff_RBX + 0x44));
        if (_Src_00 != &local_48) {
          if ((*(byte *)((longlong)unaff_RBX + 0x3b) & 0x40) == 0) {
            (**(code **)(*unaff_RBX + 0x100))(unaff_RBX,&local_48,_Src_00,(int)unaff_RBX[6]);
          }
          else {
            memcpy(&local_48,_Src_00,
                   (longlong)(int)unaff_RBX[6] * (longlong)*(int *)((longlong)unaff_RBX + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)unaff_RBX[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(unaff_RBX,&local_48,lVar8,1);
      }
      else {
        (*pcVar2)(unaff_RBX,&local_48,lVar8);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != unaff_RBX);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_48 = (int)uVar3;
      uStack_44 = (uint)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_48);
    }
  }
LAB_14379ac0d:
  iVar5 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uStack_44._3_1_);
  lVar8 = FUN_147db589a(param_1,*puVar10);
  if (lVar8 != 0) {
    FUN_14379b364(param_1,lVar8,uVar9 & 0xffffffff,iVar5 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379ae68 FUN_14379ae68 body=1275 status=ok
// SIG undefined FUN_14379ae68(void)

void FUN_14379ae68(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *unaff_RBX;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined1 local_39;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_38._0_7_ = 0;
  uStack_38._7_1_ = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    unaff_RBX = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = unaff_RBX[3];
    if ((*(byte *)((longlong)unaff_RBX + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)unaff_RBX + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*unaff_RBX + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*unaff_RBX + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(unaff_RBX);
          if (cVar5 != '\0') {
            (**(code **)(*unaff_RBX + 0xa0))(unaff_RBX,lVar7,&uStack_38);
            goto LAB_14379b022;
          }
        }
        puVar9 = (undefined8 *)(lVar7 + *(int *)((longlong)unaff_RBX + 0x44));
        if (puVar9 != &uStack_38) {
          if ((*(byte *)((longlong)unaff_RBX + 0x3b) & 0x40) == 0) {
            (**(code **)(*unaff_RBX + 0x100))(unaff_RBX,&uStack_38,puVar9,(int)unaff_RBX[6]);
          }
          else {
            memcpy(&uStack_38,puVar9,
                   (longlong)(int)unaff_RBX[6] * (longlong)*(int *)((longlong)unaff_RBX + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)unaff_RBX[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(unaff_RBX,&uStack_38,lVar7,1);
      }
      else {
        (*pcVar2)(unaff_RBX,&uStack_38,lVar7);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != unaff_RBX);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38._0_7_ = (undefined7)uVar3;
      uStack_38._7_1_ = (undefined1)((ulonglong)uVar3 >> 0x38);
    }
    else {
      (*pcVar2)(uVar3,param_2,&uStack_38);
    }
  }
LAB_14379b022:
  puVar9 = &uStack_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  local_39 = 0;
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
    unaff_RBX = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = unaff_RBX[3];
    if ((*(byte *)((longlong)unaff_RBX + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)unaff_RBX + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*unaff_RBX + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*unaff_RBX + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(unaff_RBX);
          if (cVar5 != '\0') {
            (**(code **)(*unaff_RBX + 0xa0))(unaff_RBX,lVar7,&local_39);
            goto LAB_14379b1e1;
          }
        }
        _Src = (undefined1 *)(lVar7 + *(int *)((longlong)unaff_RBX + 0x44));
        if (_Src != &local_39) {
          if ((*(byte *)((longlong)unaff_RBX + 0x3b) & 0x40) == 0) {
            (**(code **)(*unaff_RBX + 0x100))(unaff_RBX,&local_39,_Src,(int)unaff_RBX[6]);
          }
          else {
            memcpy(&local_39,_Src,
                   (longlong)(int)unaff_RBX[6] * (longlong)*(int *)((longlong)unaff_RBX + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)unaff_RBX[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(unaff_RBX,&local_39,lVar7,1);
      }
      else {
        (*pcVar2)(unaff_RBX,&local_39,lVar7);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != unaff_RBX);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_39);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_39);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_39 = (undefined1)uVar3;
      uStack_38._0_7_ = (undefined7)((ulonglong)uVar3 >> 8);
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_39);
    }
  }
LAB_14379b1e1:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_39);
  lVar7 = FUN_147db589a(param_1,*puVar9);
  if (lVar7 != 0) {
    FUN_14379b364(param_1,lVar7,uVar8 & 0xffffffff,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379b364 FUN_14379b364 body=369 status=ok
// SIG undefined FUN_14379b364(void)

void FUN_14379b364(longlong param_1,longlong *param_2)

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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_50 = &local_30;
      local_30 = FUN_140754f84;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147da9a76;
      local_60 = FUN_1409f3105;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_14379b3cb;
  }
  lVar1 = 0;
LAB_14379b3cb:
  lVar1 = FUN_14103c0a0(lVar1);
  if (lVar1 != 0) {
    (**(code **)(*param_2 + 0x2a0))(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379b4fc FUN_14379b4fc body=1887 status=ok
// SIG undefined FUN_14379b4fc(void)

ulonglong FUN_14379b4fc(longlong param_1,code *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14cb10130 == 0) {
    local_60 = &local_48;
    local_48 = FUN_140754f84;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_147da9a76;
    local_70 = FUN_1409f3105;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  lVar5 = DAT_14cb10130;
  if (DAT_14c951858 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1468c5283;
    local_70 = FUN_142809da0;
    local_78 = L"Engine";
    local_80 = 0x400000000;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 == 0) {
    lVar7 = 0;
  }
  else {
    iVar4 = *(int *)(lVar5 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar4) ||
         (lVar7 = lVar8,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
         lVar5 + 0x30)) {
        lVar7 = 0;
      }
    } while ((lVar7 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
  }
  bVar1 = *(byte *)(lVar7 + 0x152);
  if ((bVar1 != 1) &&
     ((uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1), 6 < bVar1 ||
      ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) goto LAB_14379b836;
  lVar5 = FUN_147db6e88(param_1,param_2);
  if (lVar5 == 0) {
LAB_14379b793:
    uVar10 = 0;
  }
  else {
    if (param_2 != (code *)0x0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    local_48 = param_2;
    if ((~DAT_14c950c29 & 1) == 0 && param_2 != (code *)0x0) {
      FUN_1456cec3c(param_2);
    }
    if ((param_2 != (code *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar4 = FUN_147dbd35c((longlong *)(param_1 + 0x30),uVar3 >> 0x10 ^ uVar3,&local_48);
    if ((iVar4 == -1) ||
       (lVar8 = *(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 0x18,
       plVar6 = (longlong *)(lVar8 + 8), plVar6 == (longlong *)0x0 || lVar8 == 0))
    goto LAB_14379b793;
    lVar8 = *plVar6;
    if ((DAT_14c950c29 == 1) && (lVar8 != 0)) {
      FUN_1456cec3c(lVar8);
    }
    else if (lVar8 == 0) goto LAB_14379b793;
    if (DAT_14cb10130 == 0) {
      local_48 = FUN_140754f84;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147da9a76;
      local_70 = FUN_1409f3105;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x990;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar8 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1468c5283;
      local_70 = FUN_142809da0;
      local_78 = L"Engine";
      local_80 = 0x400000000;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x50;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (lVar7 == 0) {
      lVar9 = 0;
    }
    else {
      iVar4 = *(int *)(lVar8 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar4) ||
           (lVar9 = lVar7,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
           lVar8 + 0x30)) {
          lVar9 = 0;
        }
      } while ((lVar9 == 0) && (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 != 0));
    }
    if ((*(longlong *)(lVar9 + 0x30) == 0) ||
       (lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x2b0), lVar8 == 0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x3f0);
    }
    uVar3 = FUN_147dc03a8(lVar8);
    uVar10 = (ulonglong)uVar3;
    lVar8 = *(longlong *)(lVar8 + 0xd0);
    if (DAT_14cb10130 == 0) {
      local_48 = FUN_140754f84;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147da9a76;
      local_70 = FUN_1409f3105;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x990;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar7 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1468c5283;
      local_70 = FUN_142809da0;
      local_78 = L"Engine";
      local_80 = 0x400000000;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x50;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar8 = *(longlong *)(lVar8 + 0x20);
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      iVar4 = *(int *)(lVar7 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar4) ||
           (lVar9 = lVar8,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
           lVar7 + 0x30)) {
          lVar9 = 0;
        }
      } while ((lVar9 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
    }
    if ((*(longlong *)(lVar9 + 0x30) == 0) ||
       ((lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x2b8), lVar8 == 0 ||
        (cVar2 = FUN_147db70d0(lVar8,lVar5), cVar2 == '\0')))) goto LAB_14379b793;
  }
  if (param_2 != (code *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_48 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != (code *)0x0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != (code *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar4 = FUN_147dbd35c(param_1 + 0x30,uVar3 >> 0x10 ^ uVar3,&local_48);
  if (iVar4 != -1) {
    if (DAT_14c950c29 == 1 && param_2 != (code *)0x0) {
      FUN_1456cec3c(param_2);
    }
    local_48 = param_2;
    if ((param_2 != (code *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    FUN_147dbd9e0(param_1 + 0x30,&local_48);
  }
  uVar10 = CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 & iVar4 != -1);
LAB_14379b836:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14379bc5c FUN_14379bc5c body=3031 status=ok
// SIG undefined FUN_14379bc5c(void)

void FUN_14379bc5c(longlong param_1,undefined8 ****param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  undefined8 ***pppuVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  undefined8 ****ppppuVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 ****ppppuVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 ****ppppuVar23;
  uint uVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  undefined8 ***local_110;
  code *local_108;
  code *local_100;
  int local_f4;
  longlong local_f0;
  undefined8 ***local_e8;
  undefined8 uStack_e0;
  undefined8 ***local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  uint local_c0;
  undefined8 **local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined2 *local_88;
  int local_80;
  undefined8 ***local_78;
  undefined8 ***local_70;
  undefined2 **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar12 = FUN_147db6e88();
  if (lVar12 != 0) goto LAB_14379bdaf;
  if (DAT_14cb10130 == 0) {
    local_110 = &local_70;
    local_70 = (undefined8 ***)FUN_140754f84;
    local_100 = FUN_14081d0ea;
    local_108 = FUN_14081d0ea;
    local_118 = &LAB_147da9a76;
    local_120 = FUN_1409f3105;
    local_128 = L"Engine";
    local_130 = 0;
    local_138 = 0x10000000;
    local_140 = 8;
    local_148 = (undefined1 *)CONCAT44(local_148._4_4_,0x990);
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  lVar12 = DAT_14cb10130;
  if (DAT_14c951858 == 0) {
    local_110 = &local_70;
    local_70 = (undefined8 ***)FUN_1449e2820;
    local_100 = FUN_14081d0ea;
    local_108 = FUN_14081d0ea;
    local_118 = &LAB_1468c5283;
    local_120 = FUN_142809da0;
    local_128 = L"Engine";
    local_130 = 0x400000000;
    local_138 = 0x10000000;
    local_140 = 8;
    local_148 = (undefined1 *)CONCAT44(local_148._4_4_,0x50);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar22 = *(longlong *)(param_1 + 0x20);
  if (lVar22 == 0) {
    lVar21 = 0;
  }
  else {
    iVar10 = *(int *)(lVar12 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar10) ||
         (lVar21 = lVar22,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
         lVar12 + 0x30)) {
        lVar21 = 0;
      }
    } while ((lVar21 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
  }
  bVar3 = *(byte *)(lVar21 + 0x152);
  if ((bVar3 != 1) && ((6 < bVar3 || ((0x68U >> (bVar3 & 0x1f) & 1) == 0)))) goto LAB_14379bdaf;
  local_78 = param_2;
  if (param_2 != (undefined8 ****)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_70 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != (undefined8 ****)0x0) {
    FUN_1456cec3c(param_2);
  }
  plVar15 = (longlong *)(param_1 + 0x30);
  if ((param_2 != (undefined8 ****)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar9 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  iVar10 = FUN_147dbd35c(plVar15,uVar9,&local_70);
  if (iVar10 != -1) goto LAB_14379bdaf;
  FUN_147db6d6c(param_1,&local_88,param_2);
  bVar6 = false;
  cVar8 = FUN_14166d522(&local_88,0,1);
  if (cVar8 != '\0') {
    FUN_1401cb262(local_98);
    local_a8 = (undefined8 ***)0x0;
    uStack_a0 = 0;
    local_b8 = (undefined8 ***)0x0;
    uStack_b0 = 0;
    if (DAT_14cb10130 == 0) {
      local_70 = (undefined8 ***)FUN_140754f84;
      local_100 = FUN_14081d0ea;
      local_108 = FUN_14081d0ea;
      local_118 = &LAB_147da9a76;
      local_120 = FUN_1409f3105;
      local_128 = L"Engine";
      local_130 = 0;
      local_138 = 0x10000000;
      local_140 = 8;
      local_148 = (undefined1 *)CONCAT44(local_148._4_4_,0x990);
      local_110 = &local_70;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar12 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_70 = (undefined8 ***)FUN_1449e2820;
      local_100 = FUN_14081d0ea;
      local_108 = FUN_14081d0ea;
      local_118 = &LAB_1468c5283;
      local_120 = FUN_142809da0;
      local_128 = L"Engine";
      local_130 = 0x400000000;
      local_138 = 0x10000000;
      local_140 = 8;
      local_148 = (undefined1 *)CONCAT44(local_148._4_4_,0x50);
      local_110 = &local_70;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar22 = *(longlong *)(param_1 + 0x20);
    if (lVar22 == 0) {
      lVar21 = 0;
    }
    else {
      iVar10 = *(int *)(lVar12 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar10) ||
           (lVar21 = lVar22,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar10 * 8)
           != lVar12 + 0x30)) {
          lVar21 = 0;
        }
      } while ((lVar21 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
    }
    cVar8 = FUN_147da9e3c(lVar21,&local_a8,&local_b8);
    uVar17 = 0;
    uVar26 = 0;
    if (cVar8 != '\0') {
      local_d8 = (undefined8 ****)0x0;
      uStack_d0 = 0;
      local_70 = (undefined8 ***)local_a8;
      uVar11 = (int)uStack_a0 - 1;
      if ((int)uStack_a0 == 0) {
        uVar11 = uVar26;
      }
      local_68._0_4_ = uVar11;
      FUN_1468fe3e4(&local_d8,&local_70);
      local_70 = local_d8;
      FUN_1400021e4(&local_70,&local_c8);
      local_e8 = (undefined8 ****)0x0;
      uStack_e0 = 0;
      local_70 = (undefined8 ***)local_b8;
      iVar10 = (int)uStack_b0 + -1;
      if ((int)uStack_b0 == 0) {
        iVar10 = 0;
      }
      local_68 = (undefined2 **)CONCAT44(local_68._4_4_,iVar10);
      FUN_1468fe3e4(&local_e8,&local_70);
      local_70 = local_e8;
      FUN_1400021e4(&local_70,&local_d8);
      uVar18 = (ulonglong)((int)uStack_d0 - 1);
      if ((int)uStack_d0 == 0) {
        uVar18 = uVar17;
      }
      FUN_1446f82e2(&local_70,uVar18,local_d8,1);
      pppuVar7 = local_70;
      uVar18 = (ulonglong)(local_c0 - 1);
      if (local_c0 == 0) {
        uVar18 = uVar17;
      }
      FUN_1446f82e2(&local_70,uVar18,local_c8,1);
      FUN_1468b6f4e(local_98,local_70,pppuVar7);
      ppppuVar23 = (undefined8 ****)local_d8;
      uVar11 = local_c0 - 1;
      if (local_c0 == 0) {
        uVar11 = uVar26;
      }
      local_f4 = (int)uStack_d0;
      uVar24 = (int)uStack_d0 - 1;
      if ((int)uStack_d0 == 0) {
        uVar24 = uVar26;
      }
      if (uVar11 == 1) {
        local_70 = local_d8;
        local_68 = (undefined2 **)CONCAT44(local_68._4_4_,uVar24);
        iVar10 = FUN_144aff2e5(&local_70,*local_c8,1);
LAB_14379c275:
        uVar17 = 0;
        if (iVar10 != -1) {
          if (local_f4 == 0) {
            ppppuVar23 = (undefined8 ****)&DAT_149dfb77a;
          }
          uVar26 = iVar10 + uVar11;
          if ((int)uVar24 <= (int)(iVar10 + uVar11)) {
            uVar26 = uVar24;
          }
          if (0 < (int)uVar26) {
            uVar17 = (ulonglong)uVar26;
          }
          FUN_14006620a(&local_70,(undefined2 *)((longlong)ppppuVar23 + uVar17 * 2),
                        uVar24 - (int)uVar17);
          FUN_140474144(&local_e8,&local_88,&local_70);
          ppppuVar23 = (undefined8 ****)&DAT_149dfb77a;
          if ((int)uStack_e0 != 0) {
            ppppuVar23 = (undefined8 ****)local_e8;
          }
          uVar17 = FUN_14099f58f(ppppuVar23);
          if ((undefined8 ****)local_e8 != (undefined8 ****)0x0) {
            FUN_1400020a8();
          }
          ppppuVar23 = (undefined8 ****)local_d8;
          if ((undefined8 ****)local_70 != (undefined8 ****)0x0) {
            FUN_1400020a8();
            ppppuVar23 = (undefined8 ****)local_d8;
          }
        }
      }
      else {
        if ((int)uVar11 <= (int)uVar24) {
          lVar12 = (longlong)(int)uVar11;
          ppppuVar19 = (undefined8 ****)
                       ((longlong)local_d8 + lVar12 * -2 + (longlong)(int)uVar24 * 2);
          if (local_d8 <= ppppuVar19) {
            ppppuVar16 = (undefined8 ****)local_d8;
            if (1 < local_c0) {
LAB_14379c207:
              lVar21 = 0;
              lVar22 = lVar12;
              do {
                uVar4 = *(ushort *)((longlong)ppppuVar16 + lVar21);
                uVar5 = *(ushort *)((longlong)local_c8 + lVar21);
                local_f0 = lVar12;
                if (uVar4 == uVar5) {
                  if (uVar4 == 0) break;
                }
                else {
                  if (0x7f < (uVar5 | uVar4)) {
                    iVar10 = (uint)uVar4 - (uint)uVar5;
                    goto LAB_14379c252;
                  }
                  if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[(uint)uVar5])
                  goto code_r0x00014379c24f;
                }
                lVar22 = lVar22 + -1;
                if (lVar22 == 0) break;
                lVar21 = lVar21 + 2;
              } while( true );
            }
LAB_14379c26f:
            iVar10 = (int)((ulonglong)((longlong)ppppuVar16 - (longlong)local_d8) >> 1);
            goto LAB_14379c275;
          }
        }
LAB_14379c460:
        uVar17 = 0;
      }
      if (ppppuVar23 != (undefined8 ****)0x0) {
        FUN_1400020a8(ppppuVar23);
      }
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    local_148 = local_98;
    puVar14 = local_88;
    if (local_80 == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    bVar6 = false;
    lVar12 = FUN_1402791b4(uVar17,puVar14,0x2002,0);
    if (lVar12 != 0) {
      uVar13 = FUN_1412d87bc();
      bVar6 = false;
      puVar14 = (undefined2 *)FUN_1402ab8a4(lVar12,uVar13,0);
      if (puVar14 != (undefined2 *)0x0) {
        lVar12 = FUN_1412d87bc();
        if ((*(int *)(*(longlong *)(puVar14 + 8) + 0x38) < *(int *)(lVar12 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(puVar14 + 8) + 0x30) +
             (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) {
          bVar6 = false;
        }
        else {
          local_68 = &local_c8;
          local_70 = &local_78;
          local_c8 = puVar14;
          FUN_147dbd42c(plVar15,&local_d8);
          bVar6 = true;
        }
      }
    }
    if ((undefined8 ***)local_b8 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
    if ((undefined8 ***)local_a8 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar6) {
    if (DAT_14c950c29 == 1 && param_2 != (undefined8 ****)0x0) {
      FUN_1456cec3c(param_2);
    }
    local_70 = param_2;
    if ((~DAT_14c950c29 & 1) == 0 && param_2 != (undefined8 ****)0x0) {
      FUN_1456cec3c(param_2);
    }
    if ((param_2 != (undefined8 ****)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    iVar10 = FUN_147dbd35c(plVar15,uVar9,&local_70);
    if ((iVar10 != -1) &&
       (lVar12 = *plVar15 + (longlong)iVar10 * 0x18, plVar15 = (longlong *)(lVar12 + 8),
       plVar15 != (longlong *)0x0 && lVar12 != 0)) {
      lVar12 = *plVar15;
      if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
        FUN_1456cec3c(lVar12);
      }
      else if (lVar12 == 0) goto LAB_14379bdaf;
      uVar13 = *(undefined8 *)(lVar12 + 0x1b8);
      if (DAT_14cb10130 == 0) {
        local_70 = (undefined8 ***)FUN_140754f84;
        local_100 = FUN_14081d0ea;
        local_108 = FUN_14081d0ea;
        local_118 = &LAB_147da9a76;
        local_120 = FUN_1409f3105;
        local_128 = L"Engine";
        local_130 = 0;
        local_138 = 0x10000000;
        local_140 = 8;
        local_148 = (undefined1 *)CONCAT44(local_148._4_4_,0x990);
        local_110 = &local_70;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      lVar22 = DAT_14cb10130;
      if (DAT_14c951858 == 0) {
        local_70 = (undefined8 ***)FUN_1449e2820;
        local_100 = FUN_14081d0ea;
        local_108 = FUN_14081d0ea;
        local_118 = &LAB_1468c5283;
        local_120 = FUN_142809da0;
        local_128 = L"Engine";
        local_130 = 0x400000000;
        local_138 = 0x10000000;
        local_140 = 8;
        local_148 = (undefined1 *)CONCAT44(local_148._4_4_,0x50);
        local_110 = &local_70;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar21 = *(longlong *)(param_1 + 0x20);
      if (lVar21 == 0) {
        lVar20 = 0;
      }
      else {
        iVar10 = *(int *)(lVar22 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < iVar10) ||
             (lVar20 = lVar21,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
             lVar22 + 0x30)) {
            lVar20 = 0;
          }
        } while ((lVar20 == 0) && (lVar21 = *(longlong *)(lVar21 + 0x20), lVar21 != 0));
      }
      FUN_147dcce30(lVar12,lVar20);
      lVar22 = *(longlong *)(lVar20 + 0x30);
      if (lVar22 != 0) {
        if (*(longlong *)(lVar22 + 0x2b0) == 0) {
          uVar25 = 0;
        }
        else {
          uVar25 = *(undefined8 *)(*(longlong *)(lVar22 + 0x2b0) + 0x3f0);
        }
        lVar22 = *(longlong *)(lVar22 + 0x2b8);
        if (((lVar22 != 0) && (cVar8 = FUN_147db6ee4(lVar22,uVar13), cVar8 != '\0')) &&
           (cVar8 = FUN_147dc0220(uVar25,lVar12), cVar8 == '\0')) {
          FUN_147db70d0(lVar22,uVar13);
        }
      }
    }
  }
LAB_14379bdaf:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014379c24f:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
LAB_14379c252:
  if (iVar10 == 0) goto LAB_14379c26f;
  ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + 2);
  if (ppppuVar19 < ppppuVar16) goto LAB_14379c460;
  goto LAB_14379c207;
}



// FUNCTION 14379c834 FUN_14379c834 body=1127 status=ok
// SIG undefined FUN_14379c834(void)

void FUN_14379c834(longlong *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined *puVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_98 [35];
  char local_75;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_74 = FUN_14487fd02();
  cVar4 = (**(code **)(*param_2 + 0x2b8))(param_2);
  cVar5 = (**(code **)(*param_2 + 0x2c0))(param_2);
  (**(code **)(*param_2 + 0x310))(param_2,&local_68);
  plVar13 = local_68;
  bVar6 = FUN_143797fc8(param_1,local_68);
  plVar14 = (longlong *)param_2[6];
  if (bVar6 != 0 && plVar14 != (longlong *)0x0) {
    do {
      cVar7 = (**(code **)(*plVar14 + 0x2b0))(plVar14);
      bVar8 = bVar6;
      if (cVar7 != '\0') {
        (**(code **)(*plVar14 + 0x310))(plVar14,&local_70);
        bVar8 = FUN_143797fc8(param_1,local_70);
        if (bVar6 < bVar8) {
          bVar8 = bVar6;
        }
      }
      bVar6 = bVar8;
      plVar14 = (longlong *)plVar14[6];
      plVar13 = local_68;
    } while ((plVar14 != (longlong *)0x0) && (bVar6 != 0));
  }
  plVar14 = param_1 + 0xe4;
  local_60 = plVar13;
  bVar8 = FUN_1411bbe3a(plVar14,plVar13);
  if (bVar8 != bVar6) {
    plVar3 = param_1 + 0x102;
    plVar16 = param_1 + 0xf8;
    if (cVar4 == '\0' && cVar5 == '\0') {
      plVar16 = plVar14;
      plVar3 = param_1 + 0xee;
    }
    local_75 = param_3;
    FUN_144a8b5fe(plVar3,plVar13);
    FUN_144a8b5fe(plVar16,plVar13);
    cVar7 = local_75;
    if (bVar6 == 2) {
      FUN_144a13f80(plVar16,local_4c,&local_60,0);
      cVar7 = local_75;
    }
    else if (bVar6 == 1) {
      FUN_144a13f80(plVar3,local_4c,&local_60,0);
    }
    *(int *)(param_1 + 0x10c) = (int)param_1[0x10c] + 1;
    if (0xfffffffd < local_74 - 3U && (cVar4 == '\0' && cVar5 == '\0')) {
      FUN_14103d96c();
      uVar1 = param_1[5];
      if (uVar1 < 0xffffffff00000000) {
        plVar13 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar13 = (longlong *)0x0;
        }
        (**(code **)(*plVar13 + 0x58))(plVar13,param_1,uVar1,0xd);
      }
      else {
        uVar15 = (uint)uVar1;
        if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c998088)) {
          puVar11 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar11 = DAT_14c998080;
          }
          if ((*(uint *)(puVar11 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar15 & 0x1f) & 1) != 0) {
            lVar10 = DAT_14c998060 + (ulonglong)(uVar15 & 0x7fffffff) * 0x68;
            puVar12 = *(uint **)(lVar10 + 0x18);
            if (*(uint **)(lVar10 + 0x18) == (uint *)0x0) {
              puVar12 = (uint *)(lVar10 + 8);
            }
            *puVar12 = *puVar12 | 0x2000;
            *(byte *)(lVar10 + 0x60) = *(byte *)(lVar10 + 0x60) | 1;
          }
        }
      }
      FUN_144aa2048(plVar14,&local_60);
      if ((longlong **)(param_1 + 0xe0) == &local_60) {
        if (local_60 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[0xe0] != 0) {
          FUN_1400020a8();
        }
        param_1[0xe0] = (longlong)local_60;
        local_60 = (longlong *)0x0;
        *(undefined4 *)(param_1 + 0xe1) = local_58;
        *(undefined4 *)((longlong)param_1 + 0x70c) = local_54;
      }
      uVar1 = param_1[5];
      if (uVar1 < 0xffffffff00000000) {
        plVar14 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar14 = (longlong *)0x0;
        }
        (**(code **)(*plVar14 + 0x58))(plVar14,param_1,uVar1,0xe);
      }
      else {
        uVar15 = (uint)uVar1;
        if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c998088)) {
          puVar11 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar11 = DAT_14c998080;
          }
          if ((*(uint *)(puVar11 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar15 & 0x1f) & 1) != 0) {
            lVar10 = DAT_14c998060 + (ulonglong)(uVar15 & 0x7fffffff) * 0x68;
            puVar12 = *(uint **)(lVar10 + 0x18);
            if (*(uint **)(lVar10 + 0x18) == (uint *)0x0) {
              puVar12 = (uint *)(lVar10 + 8);
            }
            *puVar12 = *puVar12 | 0x4000;
            *(byte *)(lVar10 + 0x60) = *(byte *)(lVar10 + 0x60) | 1;
          }
        }
      }
      FUN_144aa2048(param_1 + 0xee,&local_60);
      cVar7 = local_75;
      if ((longlong **)(param_1 + 0xe2) == &local_60) {
        if (local_60 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[0xe2] != 0) {
          FUN_1400020a8();
        }
        param_1[0xe2] = (longlong)local_60;
        local_60 = (longlong *)0x0;
        *(undefined4 *)(param_1 + 0xe3) = local_58;
        *(undefined4 *)((longlong)param_1 + 0x71c) = local_54;
      }
    }
    *(int *)(param_1 + 0x122) = (int)param_1[0x122] + 1;
    if (cVar7 != '\0') {
      local_58 = CONCAT31(local_58._1_3_,bVar6);
      local_60 = param_2;
      uVar9 = FUN_14477b072(param_1,DAT_14cb111d8);
      (**(code **)(*param_1 + 0x248))(param_1,uVar9,&local_60);
    }
    lVar10 = param_2[8];
    if ((longlong)(int)lVar10 != 0) {
      lVar2 = param_2[7];
      lVar17 = 0;
      do {
        FUN_14379c834(param_1,*(undefined8 *)(lVar2 + lVar17),1);
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar10 * 8 != lVar17);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379ccad FUN_14379ccad body=181 status=ok
// SIG undefined FUN_14379ccad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14379ccad(void)

{
  longlong *plVar1;
  undefined *puVar2;
  
  plVar1 = (longlong *)FUN_147db8766();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014379ccc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined *)(**(code **)(*plVar1 + 0x18))(plVar1);
    return puVar2;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb114d0) {
    FUN_144b3d300(&DAT_14cb114d0);
    if (DAT_14cb114d0 == -1) {
      _DAT_14cb114a0 = 0;
      _DAT_14cb114a8 = 0;
      _DAT_14cb11480 = 0;
      uRam000000014cb11488 = 0;
      _DAT_14cb114ac = 0xffffffff00000080;
      _DAT_14cb114b4 = 0;
      DAT_14cb114c0 = 0;
      _DAT_14cb114c8 = 0;
      atexit(FUN_14379e81c);
      _Init_thread_footer(&DAT_14cb114d0);
    }
  }
  return &DAT_14cb11480;
}



// FUNCTION 14379cd62 FUN_14379cd62 body=2632 status=ok
// SIG undefined FUN_14379cd62(void)

void FUN_14379cd62(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x398);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x310))(param_2,&local_50);
    FUN_147dbdcee(plVar1,local_50);
  }
  else {
    (**(code **)(*param_2 + 0x310))(param_2,&local_68);
    if (*(int *)(param_1 + 0x3cc) == 0) {
      iVar27 = *(int *)(param_1 + 0x3a0);
      *(int *)(param_1 + 0x3a0) = iVar27 + 1;
      if (*(int *)(param_1 + 0x3a4) == iVar27) {
        FUN_14482b872(plVar1,iVar27);
      }
      iVar21 = *(int *)(param_1 + 0x3c0);
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
      lVar22 = param_1 + 0x3a8;
      iVar18 = iVar21 + 1;
      iVar19 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar19 = iVar21;
      }
      if (iVar19 >> 5 == iVar11) {
        *(int *)(param_1 + 0x3c0) = iVar18;
      }
      else {
        if (*(int *)(param_1 + 0x3c4) <= iVar21) {
          iVar11 = iVar21;
          if (iVar21 + 0x20U < 0xa0) {
            iVar18 = 0x80;
          }
          else {
            uVar24 = iVar21 + 0x20U >> 5;
            if (*(int *)(param_1 + 0x3c4) + 0x1fU < 0xa0) {
              uVar26 = 4;
              if (4 < uVar24) {
                uVar26 = uVar24;
              }
            }
            else {
              uVar26 = uVar24 + (uVar24 * 3 >> 3) + 0x10;
            }
            uVar20 = (ulonglong)(uVar26 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar12 = (uint)(uVar20 + 0xf);
                if (uVar26 < 0x1ffd) {
                  uVar20 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar12 >> 4]];
                }
                else {
                  uVar16 = uVar20 + 0xf & 0xfffffffffffffff0;
                  if (uVar16 < 0x7ff1) {
                    bVar17 = (&DAT_14c841e00)[uVar12 >> 4];
                    uVar23 = 0x32;
                    if (0x32 < bVar17) {
                      uVar23 = (ulonglong)bVar17;
                    }
                    uVar25 = 0x32 - (ulonglong)bVar17;
                    do {
                      uVar20 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_14379d474;
                      lVar14 = uVar23 + 1 + uVar25;
                      uVar25 = uVar25 - 1;
                    } while (lVar14 != 0x33);
                  }
                  uVar20 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar20 = (ulonglong)DAT_14c841df8;
                  }
                  uVar20 = -uVar20 & (uVar16 + uVar20) - 1;
                }
              }
              else {
                local_70 = (ulonglong)uVar24;
                uVar20 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar20,0);
                uVar24 = (uint)local_70;
                iVar11 = *(int *)(param_1 + 0x3c0);
              }
            }
LAB_14379d474:
            iVar13 = (int)(uVar20 >> 2);
            iVar18 = -0x20;
            if ((int)uVar24 <= iVar13) {
              iVar18 = iVar13 << 5;
            }
          }
          *(int *)(param_1 + 0x3c4) = iVar18;
          FUN_1446efbd8(lVar22,iVar11);
          iVar18 = *(int *)(param_1 + 0x3c0) + 1;
        }
        iVar11 = iVar18 + 0x1f;
        if (-1 < iVar18) {
          iVar11 = iVar18;
        }
        *(int *)(param_1 + 0x3c0) = iVar18;
        if (iVar18 % 0x20 != 0) {
          lVar14 = *(longlong *)(param_1 + 0x3b8);
          if (*(longlong *)(param_1 + 0x3b8) == 0) {
            lVar14 = lVar22;
          }
          bVar17 = -(char)(iVar18 % 0x20);
          *(uint *)(lVar14 + (longlong)(iVar11 >> 5) * 4) =
               (uint)(*(int *)(lVar14 + (longlong)(iVar11 >> 5) * 4) << (bVar17 & 0x1f)) >>
               (bVar17 & 0x1f);
        }
      }
      lVar14 = (longlong)iVar27;
      if (*(longlong *)(param_1 + 0x3b8) != 0) {
        lVar22 = *(longlong *)(param_1 + 0x3b8);
      }
      bVar17 = (byte)iVar21 & 0x1f;
      puVar6 = (uint *)(lVar22 + (longlong)(iVar19 >> 5) * 4);
      *puVar6 = *puVar6 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
    }
    else {
      iVar27 = *(int *)(param_1 + 0x3c8);
      lVar14 = (longlong)iVar27;
      iVar21 = *(int *)(*(longlong *)(param_1 + 0x398) + 4 + lVar14 * 0x18);
      *(int *)(param_1 + 0x3c8) = iVar21;
      iVar11 = *(int *)(param_1 + 0x3cc) + -1;
      *(int *)(param_1 + 0x3cc) = iVar11;
      if (iVar11 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x398) + (longlong)iVar21 * 0x18) = 0xffffffff;
      }
    }
    lVar22 = param_1 + 0x3a8;
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
      lVar22 = *(longlong *)(param_1 + 0x3b8);
    }
    iVar21 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar21 = iVar27;
    }
    puVar6 = (uint *)(lVar22 + (longlong)(iVar21 >> 5) * 4);
    *puVar6 = *puVar6 | 1 << ((byte)iVar27 & 0x1f);
    iVar21 = 1;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x398) + lVar14 * 0x18);
    *plVar2 = local_68;
    plVar2[1] = (longlong)param_2;
    *(undefined4 *)(plVar2 + 2) = 0xffffffff;
    uVar24 = (uint)((ulonglong)local_68 >> 0x10);
    uVar26 = (uint)local_68 & 0xffff;
    uVar24 = ((uint)local_68 << 0x10 | uVar26) + (int)((ulonglong)local_68 >> 0x20) +
             (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar26 >> 4);
    uVar26 = *(int *)(param_1 + 0x3a0) - *(int *)(param_1 + 0x3cc);
    if ((uVar26 != 0) && (uVar26 != 1)) {
      lVar14 = param_1 + 0x3d0;
      if (*(longlong *)(param_1 + 0x3d8) != 0) {
        lVar14 = *(longlong *)(param_1 + 0x3d8);
      }
      iVar11 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x3e0) - 1U & uVar24) * 4);
      if (iVar11 != -1) {
        do {
          plVar3 = (longlong *)(*plVar1 + (longlong)iVar11 * 0x18);
          if (*plVar3 == local_68) {
            uVar7 = *(undefined4 *)((longlong)plVar2 + 4);
            lVar14 = plVar2[1];
            uVar8 = *(undefined4 *)((longlong)plVar2 + 0xc);
            *(int *)plVar3 = (int)*plVar2;
            *(undefined4 *)((longlong)plVar3 + 4) = uVar7;
            *(int *)(plVar3 + 1) = (int)lVar14;
            *(undefined4 *)((longlong)plVar3 + 0xc) = uVar8;
            FUN_147dbdc7c(plVar1,iVar27);
            goto LAB_14379cfbc;
          }
          iVar11 = (int)plVar3[2];
        } while (iVar11 != -1);
      }
    }
    if (3 < uVar26) {
      uVar20 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar21 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar26 < 1) || (iVar21 <= *(int *)(param_1 + 0x3e0))) {
      uVar24 = *(int *)(param_1 + 0x3e0) - 1U & uVar24;
      *(uint *)((longlong)plVar2 + 0x14) = uVar24;
      lVar14 = *(longlong *)(param_1 + 0x3d8);
      if (*(longlong *)(param_1 + 0x3d8) == 0) {
        lVar14 = param_1 + 0x3d0;
      }
      *(undefined4 *)(plVar2 + 2) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x3e0) - 1U & (longlong)(int)uVar24) * 4);
      lVar14 = *(longlong *)(param_1 + 0x3d8);
      if (*(longlong *)(param_1 + 0x3d8) == 0) {
        lVar14 = param_1 + 0x3d0;
      }
      *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x3e0) - 1U & (longlong)(int)uVar24) * 4) =
           iVar27;
    }
    else {
      *(int *)(param_1 + 0x3e0) = iVar21;
      FUN_1417fb386(plVar1);
    }
  }
LAB_14379cfbc:
  if (param_2 == (longlong *)0x0) goto LAB_14379cfe5;
  lVar14 = FUN_1414831ac();
  if (((*(int *)(param_2[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
      (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
       lVar14 + 0x30)) || (lVar14 = (**(code **)(*param_2 + 0x308))(param_2), lVar14 == 0))
  goto LAB_14379cfe5;
  plVar1 = (longlong *)(param_1 + 1000);
  if (param_3 == '\0') {
    local_68 = 0;
    uStack_60 = 0;
    FUN_1401031ac(lVar14,0,&local_68);
    FUN_147dbde3c(plVar1,&local_68);
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    FUN_1401031ac(lVar14,0);
    if (*(int *)(param_1 + 0x41c) == 0) {
      iVar27 = *(int *)(param_1 + 0x3f0);
      *(int *)(param_1 + 0x3f0) = iVar27 + 1;
      if (*(int *)(param_1 + 0x3f4) == iVar27) {
        FUN_1447711aa(plVar1,iVar27);
      }
      iVar21 = *(int *)(param_1 + 0x410);
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
      lVar22 = param_1 + 0x3f8;
      iVar19 = iVar21 + 1;
      iVar18 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar18 = iVar21;
      }
      if (iVar18 >> 5 == iVar11) {
        *(int *)(param_1 + 0x410) = iVar19;
      }
      else {
        if (*(int *)(param_1 + 0x414) <= iVar21) {
          iVar11 = iVar21;
          if (iVar21 + 0x20U < 0xa0) {
            iVar19 = 0x80;
          }
          else {
            uVar24 = iVar21 + 0x20U >> 5;
            if (*(int *)(param_1 + 0x414) + 0x1fU < 0xa0) {
              uVar26 = 4;
              if (4 < uVar24) {
                uVar26 = uVar24;
              }
            }
            else {
              uVar26 = uVar24 + (uVar24 * 3 >> 3) + 0x10;
            }
            uVar20 = (ulonglong)(uVar26 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar12 = (uint)(uVar20 + 0xf);
                if (uVar26 < 0x1ffd) {
                  uVar20 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar12 >> 4]];
                }
                else {
                  uVar16 = uVar20 + 0xf & 0xfffffffffffffff0;
                  if (uVar16 < 0x7ff1) {
                    bVar17 = (&DAT_14c841e00)[uVar12 >> 4];
                    uVar23 = 0x32;
                    if (0x32 < bVar17) {
                      uVar23 = (ulonglong)bVar17;
                    }
                    uVar25 = 0x32 - (ulonglong)bVar17;
                    do {
                      uVar20 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_14379d54d;
                      lVar14 = uVar23 + 1 + uVar25;
                      uVar25 = uVar25 - 1;
                    } while (lVar14 != 0x33);
                  }
                  uVar20 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar20 = (ulonglong)DAT_14c841df8;
                  }
                  uVar20 = -uVar20 & (uVar16 + uVar20) - 1;
                }
              }
              else {
                uVar20 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar20,0);
                iVar11 = *(int *)(param_1 + 0x410);
              }
            }
LAB_14379d54d:
            iVar13 = (int)(uVar20 >> 2);
            iVar19 = -0x20;
            if ((int)uVar24 <= iVar13) {
              iVar19 = iVar13 << 5;
            }
          }
          *(int *)(param_1 + 0x414) = iVar19;
          FUN_1446efbd8(lVar22,iVar11);
          iVar19 = *(int *)(param_1 + 0x410) + 1;
        }
        iVar11 = iVar19 + 0x1f;
        if (-1 < iVar19) {
          iVar11 = iVar19;
        }
        *(int *)(param_1 + 0x410) = iVar19;
        if (iVar19 % 0x20 != 0) {
          lVar14 = *(longlong *)(param_1 + 0x408);
          if (*(longlong *)(param_1 + 0x408) == 0) {
            lVar14 = lVar22;
          }
          bVar17 = -(char)(iVar19 % 0x20);
          *(uint *)(lVar14 + (longlong)(iVar11 >> 5) * 4) =
               (uint)(*(int *)(lVar14 + (longlong)(iVar11 >> 5) * 4) << (bVar17 & 0x1f)) >>
               (bVar17 & 0x1f);
        }
      }
      lVar14 = (longlong)iVar27;
      if (*(longlong *)(param_1 + 0x408) != 0) {
        lVar22 = *(longlong *)(param_1 + 0x408);
      }
      bVar17 = (byte)iVar21 & 0x1f;
      puVar6 = (uint *)(lVar22 + (longlong)(iVar18 >> 5) * 4);
      *puVar6 = *puVar6 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
    }
    else {
      iVar27 = *(int *)(param_1 + 0x418);
      lVar14 = (longlong)iVar27;
      iVar21 = *(int *)(*(longlong *)(param_1 + 1000) + 4 + lVar14 * 0x20);
      *(int *)(param_1 + 0x418) = iVar21;
      iVar11 = *(int *)(param_1 + 0x41c) + -1;
      *(int *)(param_1 + 0x41c) = iVar11;
      if (iVar11 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 1000) + (longlong)iVar21 * 0x20) = 0xffffffff;
      }
    }
    iVar21 = 1;
    lVar22 = param_1 + 0x3f8;
    if (*(longlong *)(param_1 + 0x408) != 0) {
      lVar22 = *(longlong *)(param_1 + 0x408);
    }
    iVar11 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar11 = iVar27;
    }
    puVar6 = (uint *)(lVar22 + (longlong)(iVar11 >> 5) * 4);
    *puVar6 = *puVar6 | 1 << ((byte)iVar27 & 0x1f);
    lVar22 = *(longlong *)(param_1 + 1000);
    lVar14 = lVar14 * 0x20;
    puVar4 = (undefined8 *)(lVar22 + lVar14);
    *(longlong *)(lVar22 + lVar14) = local_68;
    uVar20 = 0;
    local_68 = 0;
    *(undefined4 *)(lVar22 + 8 + lVar14) = (undefined4)uStack_60;
    *(undefined4 *)(lVar22 + 0xc + lVar14) = uStack_60._4_4_;
    uStack_60 = 0;
    *(longlong **)(lVar22 + 0x10 + lVar14) = param_2;
    *(undefined4 *)(lVar22 + 0x18 + lVar14) = 0xffffffff;
    iVar11 = *(int *)(lVar22 + 8 + lVar14);
    iVar19 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar19 = 0;
    }
    if (0 < iVar19) {
      if (iVar11 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      else {
        puVar15 = (undefined2 *)*puVar4;
      }
      lVar14 = 0;
      uVar20 = 0;
      do {
        uVar24 = ((uint)(0x19 < (ushort)puVar15[lVar14] - 0x61) * 0x20 +
                 (uint)(ushort)puVar15[lVar14]) - 0x20;
        uVar26 = (uint)(uVar20 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar20 ^ uVar24) & 0xff) * 4);
        uVar20 = (ulonglong)
                 (uVar26 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar26 & 0xff ^ uVar24 >> 8 & 0xff) * 4));
        lVar14 = lVar14 + 1;
      } while (iVar19 != (int)lVar14);
    }
    uVar24 = *(int *)(param_1 + 0x3f0) - *(int *)(param_1 + 0x41c);
    if (uVar24 != 1) {
      iVar11 = FUN_1411ac920(plVar1,uVar20,puVar4);
      if (iVar11 != -1) {
        puVar5 = (undefined4 *)(*plVar1 + (longlong)iVar11 * 0x20);
        if (*(longlong *)(*plVar1 + (longlong)iVar11 * 0x20) != 0) {
          FUN_1400020a8();
        }
        uVar7 = *(undefined4 *)puVar4;
        uVar8 = *(undefined4 *)((longlong)puVar4 + 4);
        uVar9 = *(undefined4 *)(puVar4 + 1);
        uVar10 = *(undefined4 *)((longlong)puVar4 + 0xc);
        *(undefined8 *)(puVar5 + 4) = puVar4[2];
        *puVar5 = uVar7;
        puVar5[1] = uVar8;
        puVar5[2] = uVar9;
        puVar5[3] = uVar10;
        FUN_147dbddca(plVar1,iVar27);
        goto LAB_14379d32c;
      }
      if (3 < uVar24) {
        uVar16 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
        lVar14 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar14 & 0x1f);
      }
    }
    if (((int)uVar24 < 1) || (iVar21 <= *(int *)(param_1 + 0x430))) {
      uVar24 = *(int *)(param_1 + 0x430) - 1U & (uint)uVar20;
      *(uint *)((longlong)puVar4 + 0x1c) = uVar24;
      lVar14 = *(longlong *)(param_1 + 0x428);
      if (*(longlong *)(param_1 + 0x428) == 0) {
        lVar14 = param_1 + 0x420;
      }
      *(undefined4 *)(puVar4 + 3) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x430) - 1U & (longlong)(int)uVar24) * 4);
      lVar14 = *(longlong *)(param_1 + 0x428);
      if (*(longlong *)(param_1 + 0x428) == 0) {
        lVar14 = param_1 + 0x420;
      }
      *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x430) - 1U & (longlong)(int)uVar24) * 4) =
           iVar27;
    }
    else {
      *(int *)(param_1 + 0x430) = iVar21;
      FUN_1417fb5da(plVar1);
    }
  }
LAB_14379d32c:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_14379cfe5:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14379d7ac FUN_14379d7ac body=550 status=ok
// SIG undefined FUN_14379d7ac(void)

void FUN_14379d7ac(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_1;
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    local_60 = *param_1;
    FUN_140047918(param_1[1],L" - %s Data Layers:",param_2);
    iVar2 = (int)param_3[5];
    if (iVar2 == 0) {
      uVar12 = 1;
      uVar17 = 0;
      iVar16 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_3 + 2);
      }
      uVar11 = *puVar6;
      if (uVar11 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar12 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar12 = uVar17;
        }
        iVar16 = 0;
        do {
          if (uVar12 == uVar17) goto LAB_14379d885;
          iVar16 = iVar16 + 0x20;
          uVar11 = puVar6[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar17 = 0;
        iVar16 = 0;
      }
      uVar12 = (ulonglong)(-uVar11 & uVar11);
      uVar1 = uVar12 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar5 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 != iVar2) {
      uVar11 = 0xffffffff;
      do {
        plVar7 = (longlong *)FUN_1414a418c(local_60,(longlong)iVar5 * 0x10 + *param_3);
        if (plVar7 != (longlong *)0x0) {
          uVar4 = local_68[1];
          (**(code **)(*plVar7 + 0x2d0))(plVar7,&local_58);
          puVar13 = &DAT_149dfb77a;
          if (local_50 != 0) {
            puVar13 = local_58;
          }
          FUN_140047918(uVar4,L"    - %s",puVar13);
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        uVar11 = uVar11 & ~(uint)uVar12;
        puVar6 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar6 = (uint *)(param_3 + 2);
        }
        iVar3 = (int)param_3[5];
        iVar5 = (int)uVar17;
        lVar14 = (longlong)iVar5;
        uVar10 = puVar6[lVar14] & uVar11;
        if (uVar10 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar5) {
            iVar9 = iVar5;
          }
          if (iVar5 < iVar8) {
            lVar15 = 0;
            do {
              uVar10 = puVar6[lVar14 + lVar15 + 1];
              if (uVar10 != 0) {
                uVar17 = (ulonglong)(iVar5 + (int)lVar15 + 1);
                uVar11 = 0xffffffff;
                goto LAB_14379d98c;
              }
              iVar16 = iVar16 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar9 - lVar14 != lVar15);
            uVar11 = 0xffffffff;
            iVar5 = iVar9;
          }
          uVar17 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar3;
        }
        else {
LAB_14379d98c:
          uVar12 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar12 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar5 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar5) {
            iVar5 = iVar3;
          }
        }
      } while (iVar5 != iVar2);
    }
  }
LAB_14379d885:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14379d9d4 FUN_14379d9d4 body=531 status=ok
// SIG undefined FUN_14379d9d4(void)

void FUN_14379d9d4(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  uVar5 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(ulonglong *)(param_1 + 0x120) = param_2;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x2b0);
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_14487fd02();
  }
  *(bool *)(param_1 + 0x149) = iVar3 != 1;
  bVar8 = iVar3 - 1U < 2;
  *(bool *)(param_1 + 0x148) = bVar8;
  if (bVar8) {
    uVar7 = *(uint *)(param_1 + 0x14c);
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar7);
    }
    if (*(int *)(param_1 + 0x11c) < (int)uVar7) {
      uVar5 = (ulonglong)uVar7;
      FUN_147dbdfc8(param_1 + 0x110);
      uVar7 = *(uint *)(param_1 + 0x14c);
    }
    plVar1 = (longlong *)(param_1 + 0x128);
    iVar3 = *(int *)(param_1 + 0x130);
    if (iVar3 < (int)uVar7) {
      *(uint *)(param_1 + 0x130) = uVar7;
      if ((uint)(*(int *)(param_1 + 0x134) - iVar3) < uVar7 - iVar3) {
        FUN_1446f48e2(plVar1);
      }
      uVar5 = 0;
      memset((void *)((longlong)iVar3 * 4 + *plVar1),0,(longlong)(int)(uVar7 - iVar3) << 2);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar7);
      }
      if ((int)uVar7 < iVar3) {
        *(uint *)(param_1 + 0x130) = uVar7;
        FUN_14479f406(plVar1);
      }
    }
    if ((longlong)*(int *)(param_1 + 0x130) != 0) {
      memset((void *)*plVar1,(int)CONCAT71((int7)(uVar5 >> 8),0xff),
             (longlong)*(int *)(param_1 + 0x130) << 2);
    }
  }
  if (*(char *)(param_1 + 0x149) == '\x01') {
    uVar5 = (ulonglong)(*(int *)(param_1 + 0x14c) + -1 + (uint)(*(int *)(param_1 + 0x14c) == 0)) * 2
            + 1;
    lVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar5 = (ulonglong)(uint)(1 << ((byte)lVar4 & 0x1f));
    FUN_140393c76(param_1 + 0x138,uVar5,1);
    memset(*(void **)(param_1 + 0x138),(int)CONCAT71((int7)(uVar5 >> 8),0xff),
           (longlong)*(int *)(param_1 + 0x140));
    iVar3 = *(int *)(param_1 + 0x118);
    if (iVar3 != 0) {
      if (0 < iVar3) {
        lVar4 = 0x10;
        lVar6 = 0;
        do {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x110) + -4 + lVar4);
          if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x140))) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2) =
                 *(undefined1 *)(*(longlong *)(param_1 + 0x110) + lVar4);
            iVar3 = *(int *)(param_1 + 0x118);
          }
          lVar6 = lVar6 + 1;
          lVar4 = lVar4 + 0x14;
        } while (lVar6 < iVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00014379db48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x120) + 0x5e8))();
      return;
    }
  }
  return;
}



// FUNCTION 14379dbe8 FUN_14379dbe8 body=291 status=ok
// SIG undefined FUN_14379dbe8(void)

void FUN_14379dbe8(longlong param_1,uint param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x14c))) {
    uVar4 = (ulonglong)param_2;
    if (*(char *)(param_1 + 0x148) == '\x01') {
      lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x128) + uVar4 * 4);
      if (lVar5 == -1) {
        FUN_14103d96c(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0xa8));
        iVar1 = *(int *)(param_1 + 0x118);
        lVar5 = (longlong)iVar1;
        *(int *)(*(longlong *)(param_1 + 0x128) + uVar4 * 4) = iVar1;
        *(uint *)(param_1 + 0x118) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x11c) < iVar1 + 1U) {
          FUN_147db8f3c((longlong *)(param_1 + 0x110),iVar1);
        }
        lVar2 = *(longlong *)(param_1 + 0x110);
        *(undefined8 *)(lVar2 + lVar5 * 0x14) = 0xffffffffffffffff;
        *(undefined4 *)(lVar2 + 8 + lVar5 * 0x14) = 0xffffffff;
        *(uint *)(lVar2 + 0xc + lVar5 * 0x14) = param_2;
        *(undefined1 *)(lVar2 + 0x10 + lVar5 * 0x14) = 0xff;
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      lVar5 = *(longlong *)(param_1 + 0x110) + lVar5 * 0x14;
      if (*(char *)(lVar5 + 0x10) != param_3) {
        if (!bVar3) {
          FUN_14103d96c(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0xa8));
          bVar3 = true;
        }
        *(char *)(lVar5 + 0x10) = param_3;
      }
      if (bVar3) {
        FUN_140705884(param_1,lVar5);
      }
    }
    if (*(char *)(param_1 + 0x149) == '\x01') {
      *(char *)(*(longlong *)(param_1 + 0x138) + uVar4) = param_3;
    }
  }
  return;
}



// FUNCTION 14379dd0c FUN_14379dd0c body=127 status=ok
// SIG undefined FUN_14379dd0c(void)

void FUN_14379dd0c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x120);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_2;
      lVar5 = 0;
      do {
        lVar6 = (longlong)*(int *)(lVar2 + lVar5);
        if ((-1 < lVar6) && (*(int *)(lVar2 + lVar5) < *(int *)(param_1 + 0x118))) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x110) + 0xc + lVar6 * 0x14);
          if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x140))) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1) =
                 *(undefined1 *)(*(longlong *)(param_1 + 0x110) + lVar6 * 0x14 + 0x10);
          }
        }
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar5);
      plVar4 = *(longlong **)(param_1 + 0x120);
    }
                    /* WARNING: Could not recover jumptable at 0x00014379dd83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x5e8))(plVar4);
    return;
  }
  return;
}



// FUNCTION 14379dd8c FUN_14379dd8c body=1756 status=ok
// SIG undefined FUN_14379dd8c(void)

void FUN_14379dd8c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *_Src;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  longlong local_80;
  void *local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x409) != '\x01') goto LAB_14379ddff;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar4 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14379ddff;
    bVar4 = DAT_14c8442b8 & 1;
  }
  if ((bVar4 != 0) || (FUN_147db7a24(param_1), *(longlong *)(param_1 + 0x418) == 0))
  goto LAB_14379ddff;
  lVar9 = FUN_1447b4020();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if ((((DAT_14c872bf0 == '\x01') && (DAT_14c872bf1 != '\x01')) || (lVar9 == 0)) ||
     (DAT_14c8442b8 != 0)) goto LAB_14379ddff;
  local_78 = (void *)0x0;
  uVar13 = *(uint *)(param_1 + 0x400);
  _Src = *(void **)(param_1 + 0x3f8);
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar13);
  local_80 = lVar9;
  if ((longlong)(int)uVar13 == 0) {
    uStack_70 = (ulonglong)uVar13;
  }
  else {
    FUN_1447a127e(&local_78,uVar13,0);
    memcpy(local_78,_Src,(longlong)(int)uVar13);
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14379def8;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14379defd;
      goto LAB_14379df2a;
    }
LAB_14379defd:
    FUN_14379e46a(local_80,&local_78);
  }
  else {
LAB_14379def8:
    if (iVar6 == 0x10) goto LAB_14379defd;
LAB_14379df2a:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
      goto LAB_14379defd;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_14379defd;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_14379e08f;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1437a331f);
        }
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar9 + 0x310);
        *(undefined8 *)(lVar9 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_14379e08f:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x18);
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
          puVar15 = (uint *)(puVar17 + 0x18);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_14379e10f;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_14379e10f:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ab18d50;
      puVar17[0x15] = local_80;
      puVar17[0x16] = local_78;
      local_78 = (void *)0x0;
      *(undefined4 *)(puVar17 + 0x17) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puVar17 + 0xbc) = uStack_70._4_4_;
      uStack_70 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
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
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar9 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar9 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar6;
      if (puVar17 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
      local_88 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14ab18cf0;
      local_40 = local_80;
      local_38 = local_78;
      uStack_30 = uStack_70;
      local_78 = (void *)0x0;
      uStack_70 = 0;
      local_68[0] = &LAB_1437a32c0;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateHLODVisibilityTexture",&DAT_14cb114d4);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14379ddff:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14379e46a FUN_14379e46a body=323 status=ok
// SIG undefined FUN_14379e46a(void)

void FUN_14379e46a(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Dst;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  uint local_68;
  uint *local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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
  local_60 = &local_34;
  local_34 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_68 = 1;
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,lVar4,0);
  uVar2 = local_34;
  if (*(uint *)(param_2 + 1) < local_34) {
    uVar2 = *(uint *)(param_2 + 1);
  }
  memcpy(_Dst,(void *)*param_2,(ulonglong)uVar2);
  local_60 = (uint *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_68 = local_68 & 0xffffff00;
  (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,lVar4,0);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14379e5ae FUN_14379e5ae body=69 status=ok
// SIG undefined FUN_14379e5ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379e5ae(void)

{
  _DAT_14cb11308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014379e5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11310,1);
  return;
}



// FUNCTION 14379e5f3 FUN_14379e5f3 body=69 status=ok
// SIG undefined FUN_14379e5f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379e5f3(void)

{
  _DAT_14cb11320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014379e635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11328,1);
  return;
}



// FUNCTION 14379e638 FUN_14379e638 body=69 status=ok
// SIG undefined FUN_14379e638(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379e638(void)

{
  _DAT_14cb11338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014379e67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11340,1);
  return;
}



// FUNCTION 14379e67e FUN_14379e67e body=48 status=ok
// SIG undefined FUN_14379e67e(void)

longlong FUN_14379e67e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145acb902(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14379e6bc FUN_14379e6bc body=169 status=ok
// SIG undefined FUN_14379e6bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379e6bc(void)

{
  _DAT_14cb11418 = 0;
  if (DAT_14cb11410 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb113d8 = 0;
  if (DAT_14cb113dc != 0) {
    FUN_14472eb64(&DAT_14cb113d0,0);
  }
  _DAT_14cb11400 = 0xffffffff;
  _DAT_14cb113f8 = 0;
  if (0x80 < DAT_14cb113fc) {
    DAT_14cb113fc = 0x80;
    FUN_1446efbd8(&DAT_14cb113e0,0);
  }
  if (DAT_14cb113f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb113d0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14379e765 FUN_14379e765 body=169 status=ok
// SIG undefined FUN_14379e765(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379e765(void)

{
  _DAT_14cb11470 = 0;
  if (DAT_14cb11468 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb11430 = 0;
  if (DAT_14cb11434 != 0) {
    FUN_14472eb64(&DAT_14cb11428,0);
  }
  _DAT_14cb11458 = 0xffffffff;
  _DAT_14cb11450 = 0;
  if (0x80 < DAT_14cb11454) {
    DAT_14cb11454 = 0x80;
    FUN_1446efbd8(&DAT_14cb11438,0);
  }
  if (DAT_14cb11448 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb11428 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14379e81c FUN_14379e81c body=47 status=ok
// SIG undefined FUN_14379e81c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379e81c(void)

{
  _DAT_14cb114c8 = 0;
  if (DAT_14cb114c0 != 0) {
    FUN_1400020a8();
  }
  FUN_145acbb96(&DAT_14cb11480);
  return;
}



// FUNCTION 14379e860 FUN_14379e860 body=1282 status=ok
// SIG undefined FUN_14379e860(void)

void FUN_14379e860(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 unaff_RBP;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  uint local_ac;
  ulonglong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = (uint *)param_6[2];
  uVar2 = *(ushort *)(*param_6 + 0x86);
  local_50 = uVar2 + 0x1f >> 5;
  local_4c = (uint)uVar2;
  if (uVar2 == 0) {
    local_58 = &local_4c;
  }
  puVar3 = *(ushort **)(*param_6 + 8);
  local_ac = (uint)*puVar3;
  uVar2 = puVar3[1];
  uVar17 = *local_58;
  FUN_14379ed64(param_1,param_2,0);
  local_b8 = param_4;
  FUN_14379ed64(param_3,param_4,
                (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(char)uVar17) & 0xffffff01);
  local_68 = 0;
  uStack_60 = 0;
  uVar15 = (ulonglong)*(uint *)(param_2 + 1);
  if (-1 < (int)*(uint *)(param_2 + 1)) {
    if (uVar15 != 0) {
      FUN_14481578e(&local_68);
      uVar17 = *(uint *)(param_2 + 1);
      if ((ulonglong)uVar17 != 0) {
        lVar13 = *param_2;
        local_a0 = param_3 + 7;
        uVar15 = 0;
        do {
          uVar16 = uStack_60;
          uVar6 = *(uint *)(lVar13 + uVar15 * 0x14);
          if (uVar6 != 0xffffffff) {
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar7 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar7 = local_a0;
              }
              iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_3[9] - 1U & uVar6) * 4);
              if (iVar8 != -1) {
                do {
                  if (*(uint *)(*param_3 + (longlong)iVar8 * 0x10) == uVar6) goto LAB_14379e9c5;
                  iVar8 = *(int *)((longlong)iVar8 * 0x10 + *param_3 + 8);
                } while (iVar8 != -1);
              }
            }
            lVar12 = (longlong)(int)uStack_60;
            uVar6 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar6);
            if (uStack_60._4_4_ < uVar6) {
              FUN_1446f48e2(&local_68,uVar16 & 0xffffffff);
            }
            *(int *)(local_68 + lVar12 * 4) = (int)uVar15;
          }
LAB_14379e9c5:
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar17);
      }
    }
    puVar11 = local_b8;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uVar15 = (ulonglong)*(uint *)(local_b8 + 1);
    if (-1 < (int)*(uint *)(local_b8 + 1)) {
      if (uVar15 != 0) {
        FUN_14481578e(&local_78);
        uVar17 = *(uint *)(puVar11 + 1);
        uVar15 = (ulonglong)uVar17;
        if ((int)uVar17 < 0) goto LAB_14379ed5b;
        if ((int)uStack_80._4_4_ < (int)uVar17) {
          FUN_14481578e(&local_88);
          uVar15 = (ulonglong)*(uint *)(puVar11 + 1);
        }
        if ((int)uVar15 != 0) {
          local_ac = local_ac + 1;
          uVar17 = uVar2 - 1;
          puVar11 = (undefined8 *)*puVar11;
          local_a0 = param_1 + 7;
          uVar16 = 0;
          local_b8 = puVar11;
          local_a8 = uVar15;
          do {
            if ((uVar17 == 0) ||
               (uVar6 = (int)((uVar16 & 0xffffffff) % (ulonglong)uVar17) + local_ac,
               (local_58[uVar6 >> 5] >> (uVar6 & 0x1f) & 1) != 0)) {
              puVar1 = (uint *)((longlong)puVar11 + uVar16 * 0x14);
              uVar6 = *puVar1;
              if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
                plVar7 = (longlong *)param_1[8];
                if ((longlong *)param_1[8] == (longlong *)0x0) {
                  plVar7 = local_a0;
                }
                iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar6) * 4);
                if (iVar8 != -1) {
                  do {
                    lVar13 = *param_1 + (longlong)iVar8 * 0x10;
                    if (*(uint *)(*param_1 + (longlong)iVar8 * 0x10) == uVar6) {
                      piVar9 = (int *)(lVar13 + 4);
                      if (piVar9 != (int *)0x0 && lVar13 != 0) {
                        cVar5 = FUN_146f0a5c9(param_5,(longlong)*piVar9 * 0x14 + *param_2,puVar1);
                        uVar4 = uStack_80;
                        puVar11 = local_b8;
                        uVar15 = local_a8;
                        if (cVar5 != '\0') goto LAB_14379eb76;
                        lVar13 = (longlong)(int)uStack_80;
                        uVar6 = (int)uStack_80 + 1;
                        uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
                        if (uStack_80._4_4_ < uVar6) {
                          FUN_1446f48e2(&local_88,uVar4 & 0xffffffff);
                        }
                        iVar8 = *piVar9;
                        *(int *)(local_88 + lVar13 * 4) = iVar8;
                        lVar13 = (longlong)iVar8 * 0x14 + *param_2;
                        FUN_146f0a74d(param_5,lVar13,puVar1);
                        puVar11 = local_b8;
                        uVar15 = local_a8;
                        goto LAB_14379eb64;
                      }
                      break;
                    }
                    iVar8 = *(int *)(lVar13 + 8);
                  } while (iVar8 != -1);
                }
              }
              if (uVar6 != 0) {
                iVar8 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                  FUN_147db8f3c(param_2);
                  puVar11 = local_b8;
                  uVar15 = local_a8;
                }
                lVar13 = *param_2;
                lVar12 = (longlong)iVar8 * 0x14;
                *(undefined8 *)(lVar13 + lVar12) = 0xffffffffffffffff;
                *(undefined4 *)(lVar13 + 8 + lVar12) = 0xffffffff;
                *(uint *)(lVar13 + 0xc + lVar12) = puVar1[3];
                *(char *)(lVar13 + 0x10 + lVar12) = (char)puVar1[4];
                lVar13 = *param_2;
                *(uint *)(lVar13 + lVar12) = *puVar1;
                lVar14 = (longlong)(int)uStack_70;
                uVar6 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
                if (uStack_70._4_4_ < uVar6) {
                  FUN_1446f48e2(&local_78);
                  puVar11 = local_b8;
                  uVar15 = local_a8;
                }
                lVar13 = lVar13 + lVar12;
                *(int *)(local_78 + lVar14 * 4) = iVar8;
LAB_14379eb64:
                if (lVar13 != 0) {
                  *(undefined4 *)(lVar13 + 8) = *(undefined4 *)((longlong)param_1 + 0x54);
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                }
              }
            }
LAB_14379eb76:
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar15);
        }
      }
      FUN_140705914(param_1);
      local_98 = local_78;
      local_90 = (int)uStack_70;
      FUN_14379dd0c(param_1,&local_98);
      local_98 = local_88;
      local_90 = (int)uStack_80;
      FUN_14379dd0c(param_1,&local_98);
      if (0 < (int)uStack_60) {
        FUN_144958a06(local_68);
        if (0 < (longlong)(int)uStack_60) {
          uVar15 = (longlong)(int)uStack_60 + 1;
          do {
            uVar17 = *(uint *)(local_68 + -8 + uVar15 * 4);
            if ((-1 < (longlong)(int)uVar17) && (iVar8 = (int)param_2[1], (int)uVar17 < iVar8)) {
              iVar10 = ~uVar17 + iVar8;
              if (iVar10 != 0) {
                if (0 < iVar10) {
                  iVar10 = 1;
                }
                memmove((void *)(*param_2 + (longlong)(int)uVar17 * 0x14),
                        (void *)(*param_2 + (ulonglong)(uint)(iVar8 - iVar10) * 0x14),
                        (longlong)iVar10 * 0x14);
                iVar8 = (int)param_2[1];
              }
              *(int *)(param_2 + 1) = iVar8 + -1;
            }
            uVar15 = uVar15 - 1;
          } while (1 < uVar15);
        }
        FUN_14010afec(param_1,0);
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_14379ed5b:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar15);
}



// FUNCTION 14379ed64 FUN_14379ed64 body=186 status=ok
// SIG undefined FUN_14379ed64(void)

void FUN_14379ed64(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [36];
  int local_54;
  longlong local_50;
  int *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 != '\0') || (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) != (int)param_2[1])) {
    FUN_1407058ce(param_1);
    lVar1 = *param_2;
    local_54 = 0;
    lVar2 = param_2[1];
    if ((int)lVar2 != 0) {
      do {
        if (*(int *)(lVar1 + (longlong)local_54 * 0x14) != -1) {
          local_50 = lVar1 + (longlong)local_54 * 0x14;
          local_48 = &local_54;
          FUN_140263e2a(param_1,local_3c,&local_50,0);
        }
        local_54 = local_54 + 1;
      } while (local_54 != (int)lVar2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379ee20 FUN_14379ee20 body=612 status=ok
// SIG undefined FUN_14379ee20(void)

uint FUN_14379ee20(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [46];
  byte local_6a;
  char local_69;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar16 = *(undefined8 **)(param_1 + 0x10);
  lVar9 = *(longlong *)(param_1 + 0x18);
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (ulonglong)*(uint *)*puVar16 + *(longlong *)(lVar9 + 8);
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  lVar12 = (longlong)*(int *)(*(longlong *)puVar16[7] + 0x44) + *(longlong *)(param_1 + 0x20);
  if ((param_2 == '\0') && (*(int *)(lVar12 + 0x54) == *(int *)(lVar10 + 0x54))) {
    lVar9 = *(longlong *)(lVar9 + 8);
    if ((*(byte *)((longlong)puVar16 + 0xb9) & 8) != 0) {
      uVar5 = *(uint *)(puVar16 + 0x11);
LAB_14379ee94:
      lVar10 = (ulonglong)uVar5 - 4;
      goto LAB_14379ee98;
    }
  }
  else {
    puVar1 = (undefined8 *)(lVar10 + lVar6);
    uVar5 = *(uint *)(lVar12 + 8 + lVar6);
    local_6a = *(uint *)(puVar1 + 1) != uVar5;
    local_69 = param_2;
    if ((bool)local_6a) {
      FUN_147db907e(puVar1,uVar5);
      puVar16 = *(undefined8 **)(param_1 + 0x10);
      lVar9 = *(longlong *)(param_1 + 0x18);
    }
    local_60 = FUN_146f18364(param_1);
    local_58 = (uint *)((ulonglong)*(uint *)(puVar16 + 0x11) + *(longlong *)(lVar9 + 8));
    local_50 = *(ushort *)((longlong)puVar16 + 0x86) + 0x1f >> 5;
    local_4c = (uint)*(ushort *)((longlong)puVar16 + 0x86);
    if (local_4c == 0) {
      local_58 = &local_4c;
    }
    uVar3 = *(ushort *)puVar16[1];
    uVar4 = ((ushort *)puVar16[1])[1];
    piVar13 = (int *)*puVar1;
    piVar14 = *(int **)(lVar12 + lVar6);
    local_68 = *(undefined4 *)(lVar12 + 0x100);
    *(undefined4 *)(lVar12 + 0x100) = 0xffffffff;
    if (0 < (int)uVar5) {
      local_64 = uVar3 + 1;
      uVar15 = uVar4 - 1;
      uVar11 = 0;
      do {
        if (*piVar14 == -1) {
          FUN_140705884(lVar12,piVar14);
        }
        if ((piVar14[1] == piVar13[1]) && (*piVar14 == *piVar13)) {
          if (local_69 != '\0') {
            cVar7 = FUN_146f0a5c9(local_60,piVar13,piVar14);
            if (cVar7 == '\0') goto LAB_14379efb0;
          }
        }
        else {
LAB_14379efb0:
          FUN_146f0ae97(local_60,piVar13,piVar14);
          piVar13[1] = piVar14[1];
          local_6a = 1;
          if (uVar15 != 0) {
            uVar8 = (int)((uVar11 & 0xffffffff) % (ulonglong)uVar15) + local_64;
            local_58[uVar8 >> 5] = local_58[uVar8 >> 5] | 1 << ((byte)uVar8 & 0x1f);
          }
        }
        uVar11 = uVar11 + 1;
        piVar13 = piVar13 + 5;
        piVar14 = piVar14 + 5;
      } while (uVar5 != uVar11);
    }
    *(undefined4 *)(lVar12 + 0x100) = local_68;
    *(undefined4 *)(lVar10 + 0x54) = *(undefined4 *)(lVar12 + 0x54);
    lVar9 = *(longlong *)(param_1 + 0x18);
    if ((local_6a & 1) != 0) {
      cVar7 = FUN_146f11244(lVar9,0);
      if (cVar7 != '\0') {
        *local_58 = *local_58 | 1;
        if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xb9) & 8) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x88) - 4;
        }
        pbVar2 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 3 + lVar9);
        *pbVar2 = *pbVar2 | 0x80;
        lVar9 = *(longlong *)(param_1 + 0x18);
      }
    }
    lVar9 = *(longlong *)(lVar9 + 8);
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xb9) & 8) != 0) {
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x88);
      goto LAB_14379ee94;
    }
  }
  lVar10 = 0;
LAB_14379ee98:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return *(uint *)(lVar9 + lVar10) >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379f094 FUN_14379f094 body=6913 status=ok
// SIG undefined FUN_14379f094(void)

uint * FUN_14379f094(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined4 uVar4;
  int *piVar5;
  char cVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong *puVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong *puVar33;
  longlong *plVar34;
  ulonglong uVar35;
  longlong lVar36;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  uint *local_238;
  longlong *local_230;
  uint *local_228;
  longlong *local_220;
  longlong *local_218;
  uint *local_210;
  uint *local_208;
  ulonglong local_200;
  longlong local_1f8;
  longlong *local_1f0;
  uint local_1e4;
  longlong *local_1e0;
  longlong local_1d8;
  uint local_1cc;
  uint *local_1c8;
  longlong *local_1c0;
  uint local_1b8;
  undefined1 local_1b4 [4];
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  undefined1 local_18c [4];
  undefined **local_188;
  uint *local_180;
  undefined4 local_178 [8];
  undefined **local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138 [16];
  undefined **local_128;
  undefined8 local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  undefined *local_f8 [4];
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_14379f642:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_268);
  }
  if (DAT_14cb11298 == 0) {
    uVar7 = FUN_140002dac();
    DAT_14cb11298 =
         FUN_140002ddd(FUN_1464108c7,uVar7,L"WorldPartitionDestructibleHLODDamagedActorState");
  }
  lVar29 = DAT_14cb11298;
  local_1b0 = DAT_14cb11298;
  local_1a8 = param_1;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_1437a1420();
  local_230 = param_2;
  local_218 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar29;
    if ((longlong *)param_2[0xf] != (longlong *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar9 = (uint *)(param_3 + 0xd);
      iVar22 = (int)param_3[0x10];
      if (iVar22 == 0) {
        uVar32 = 1;
        uVar35 = 0;
        iVar31 = 0;
        iVar26 = 0;
      }
      else {
        puVar28 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar28 = puVar9;
        }
        uVar24 = *puVar28;
        if (uVar24 == 0) {
          iVar31 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar31 = iVar22 + -1;
          }
          uVar35 = 0;
          uVar32 = (ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            uVar32 = uVar35;
          }
          iVar31 = 0;
          do {
            if (uVar32 == uVar35) goto LAB_14379f465;
            iVar31 = iVar31 + 0x20;
            uVar24 = puVar28[uVar35 + 1];
            uVar35 = uVar35 + 1;
          } while (uVar24 == 0);
        }
        else {
          uVar35 = 0;
          iVar31 = 0;
        }
        uVar32 = (ulonglong)(-uVar24 & uVar24);
        uVar2 = uVar32 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar26 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar26) {
          iVar26 = iVar22;
        }
      }
      if (iVar26 == iVar22) {
LAB_14379f465:
        local_238 = (uint *)0x0;
        puVar28 = local_238;
      }
      else {
        uVar24 = 0xffffffff;
        local_238 = (uint *)0x0;
        iVar15 = iVar22;
        do {
          lVar29 = param_3[0xb];
          lVar23 = (longlong)iVar26 * 200;
          if (*(int *)(lVar29 + 0x60 + lVar23) != *(int *)(lVar29 + 0x8c + lVar23)) {
            lVar36 = lVar29 + lVar23;
            lVar30 = lVar36 + 0x90;
            if (*(longlong *)(lVar36 + 0x98) != 0) {
              lVar30 = *(longlong *)(lVar36 + 0x98);
            }
            iVar26 = *(int *)(lVar30 + (ulonglong)
                                       (*(int *)(lVar36 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar26 != -1) {
              local_230 = (longlong *)CONCAT44(local_230._4_4_,iVar31);
              plVar17 = (longlong *)(lVar23 + lVar29 + 0x58);
              lVar29 = *plVar17;
              do {
                if (*(undefined ***)(lVar29 + (longlong)iVar26 * 0x10) == local_108) {
                  lVar36 = lVar36 + 8;
                  FUN_140326250(plVar17,&local_108);
                  FUN_140325a06(lVar36,&local_148,&local_108,0);
                  iVar15 = (int)param_3[0x10];
                  local_238 = (uint *)CONCAT71((int7)((ulonglong)lVar36 >> 8),1);
                  break;
                }
                iVar26 = *(int *)((longlong)iVar26 * 0x10 + lVar29 + 8);
              } while (iVar26 != -1);
              iVar31 = (int)local_230;
            }
          }
          uVar24 = uVar24 & ~(uint)uVar32;
          puVar28 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar28 = puVar9;
          }
          iVar26 = (int)uVar35;
          lVar29 = (longlong)iVar26;
          uVar19 = puVar28[lVar29] & uVar24;
          if (uVar19 == 0) {
            iVar13 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar13 = iVar15 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar31 = iVar31 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar26) {
              iVar14 = iVar26;
            }
            if (iVar26 < iVar13) {
              lVar23 = 0;
              do {
                uVar19 = puVar28[lVar29 + lVar23 + 1];
                if (uVar19 != 0) {
                  uVar35 = (ulonglong)(iVar26 + (int)lVar23 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_14379f5d9;
                }
                iVar31 = iVar31 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar14 - lVar29 != lVar23);
              uVar24 = 0xffffffff;
              iVar26 = iVar14;
            }
            uVar35 = (ulonglong)(iVar26 + 1);
            param_3 = local_218;
            iVar26 = iVar15;
          }
          else {
LAB_14379f5d9:
            uVar32 = (ulonglong)(-uVar19 & uVar19);
            uVar2 = uVar32 * 2 + 1;
            lVar29 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            iVar26 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
            if (iVar15 <= iVar26) {
              iVar26 = iVar15;
            }
          }
          puVar28 = local_238;
        } while (iVar26 != iVar22);
      }
      goto LAB_1437a0b87;
    }
    local_1e0 = param_1;
    if ((char)param_2[9] == '\x01') {
      local_128 = (undefined **)0x0;
      local_120 = 0x800000000;
      puVar9 = (uint *)(param_3 + 0xd);
      iVar22 = (int)param_3[0x10];
      if (iVar22 == 0) {
        uVar32 = 1;
        puVar28 = (uint *)0x0;
        iVar31 = 0;
        iVar26 = 0;
      }
      else {
        puVar16 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar16 = puVar9;
        }
        uVar24 = *puVar16;
        if (uVar24 == 0) {
          iVar31 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar31 = iVar22 + -1;
          }
          puVar28 = (uint *)0x0;
          puVar20 = (uint *)(ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            puVar20 = puVar28;
          }
          iVar31 = 0;
          do {
            if (puVar20 == puVar28) goto LAB_14379fc84;
            iVar31 = iVar31 + 0x20;
            uVar24 = puVar16[(longlong)puVar28 + 1];
            puVar28 = (uint *)((longlong)puVar28 + 1);
          } while (uVar24 == 0);
        }
        else {
          puVar28 = (uint *)0x0;
          iVar31 = 0;
        }
        uVar32 = (ulonglong)(-uVar24 & uVar24);
        uVar35 = uVar32 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar26 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar26) {
          iVar26 = iVar22;
        }
      }
      if (iVar26 < iVar22) {
        local_220 = param_3 + 0xb;
        local_1c0 = param_3 + 7;
        uVar24 = 0xffffffff;
        local_1c8 = puVar9;
LAB_14379f6f8:
        local_208 = (uint *)CONCAT44(local_208._4_4_,iVar26);
        puVar16 = (uint *)(*local_220 + (longlong)iVar26 * 200);
        puVar20 = puVar16 + 2;
        uVar19 = *puVar16;
        if (((puVar16[4] != puVar16[0xf]) || (puVar16[0x18] != puVar16[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar17 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar17 = local_1c0;
          }
          iVar22 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_3[9] - 1U & uVar19) * 4);
          if (iVar22 != -1) {
            do {
              lVar29 = *param_3 + (longlong)iVar22 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar22 * 0x10) == uVar19) {
                if ((lVar29 != 0) && (lVar29 != -4)) {
                  uVar25 = puVar16[0xc];
                  local_1f8 = CONCAT44(local_1f8._4_4_,iVar31);
                  local_228 = puVar28;
                  local_200 = uVar32;
                  local_1cc = uVar19;
                  if (uVar25 == 0) {
                    uVar32 = 1;
                    uVar35 = 0;
                    iVar22 = 0;
                    uVar19 = 0;
                    goto LAB_14379f83b;
                  }
                  puVar28 = *(uint **)(puVar16 + 10);
                  if (*(uint **)(puVar16 + 10) == (uint *)0x0) {
                    puVar28 = puVar16 + 6;
                  }
                  uVar19 = *puVar28;
                  if (uVar19 != 0) {
                    uVar35 = 0;
                    iVar22 = 0;
                    goto LAB_14379f805;
                  }
                  iVar22 = uVar25 + 0x1e;
                  if (-1 < (int)(uVar25 - 1)) {
                    iVar22 = uVar25 - 1;
                  }
                  uVar35 = 0;
                  uVar32 = (ulonglong)(uint)(iVar22 >> 5);
                  if (iVar22 >> 5 < 1) {
                    uVar32 = uVar35;
                  }
                  iVar22 = 0;
                  goto LAB_14379f7ec;
                }
                break;
              }
              iVar22 = *(int *)(lVar29 + 8);
            } while (iVar22 != -1);
          }
        }
        goto LAB_14379fb74;
      }
LAB_14379fc84:
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)local_230 + 0x4b) = 1;
      }
      ppuVar8 = local_128;
      if (*(char *)((longlong)local_230 + 0x49) == '\x01') {
        local_108 = local_128;
        if (local_128 == (undefined **)0x0) {
          local_108 = (undefined **)&local_148;
        }
        local_100 = (int)local_120;
        FUN_14379dd0c(param_3);
        ppuVar8 = local_128;
      }
    }
    else {
      bVar3 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar3 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar3 | 1, (bVar3 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar3 | 5;
        goto LAB_14379f642;
      }
      plVar17 = (longlong *)*param_2;
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)param_2[1];
        local_d8 = (undefined **)0x0;
        local_d0 = 0x800000000;
        cVar6 = FUN_1437a1efa(&local_1b0);
        if (cVar6 == '\0') {
LAB_1437a08b5:
          if (local_d8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
LAB_1437a08c7:
          puVar28 = (uint *)0x0;
          goto LAB_1437a0b87;
        }
        iVar22 = 0;
        local_128 = (undefined **)0x0;
        local_120 = 0x800000000;
        local_158 = (undefined **)0x0;
        local_150 = 0x800000000;
        plVar11 = local_230;
        if (0 < local_100) {
          plVar34 = param_3 + 7;
          local_1f0 = param_3 + 0xb;
          do {
            plVar11 = local_1e0;
            local_1b4 = (undefined1  [4])0x0;
            puVar33 = (ulonglong *)plVar17[1];
            puVar9 = (uint *)*puVar33 + 1;
            if ((uint *)puVar33[1] < puVar9) {
              if ((*(byte *)((longlong)plVar17 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar17 + 0x170))(plVar17,local_1b4,4);
              }
              else {
                FUN_14572512c(plVar17,local_1b4);
              }
            }
            else {
              local_1b4 = *(undefined1 (*) [4])*puVar33;
              *puVar33 = (ulonglong)puVar9;
            }
            uVar32 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar18 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar18 = plVar34;
              }
              iVar31 = *(int *)((longlong)plVar18 +
                               (ulonglong)((int)param_3[9] - 1U & (uint)local_1b4) * 4);
              if (iVar31 != -1) {
                do {
                  lVar29 = *param_3 + (longlong)iVar31 * 0x10;
                  if ((undefined1  [4])*(uint *)(*param_3 + (longlong)iVar31 * 0x10) == local_1b4) {
                    if ((lVar29 != 0) && ((uint *)(lVar29 + 4) != (uint *)0x0)) {
                      local_1b8 = *(uint *)(lVar29 + 4);
                      puVar9 = (uint *)((longlong)(int)local_1b8 * 0x14 + *plVar11);
                      lVar29 = (longlong)(int)local_120;
                      uVar24 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar24);
                      if (local_120._4_4_ < uVar24) {
                        FUN_1400cc390(&local_148,uVar32 & 0xffffffff);
                      }
                      ppuVar8 = local_128;
                      if (local_128 == (undefined **)0x0) {
                        ppuVar8 = (undefined **)&local_148;
                      }
                      *(uint *)((longlong)ppuVar8 + lVar29 * 4) = local_1b8;
                      goto LAB_14379ff3b;
                    }
                    break;
                  }
                  iVar31 = *(int *)(lVar29 + 8);
                } while (iVar31 != -1);
              }
            }
            local_1b8 = 0;
            puVar9 = (uint *)FUN_147db92e6(plVar11);
            *puVar9 = (uint)local_1b4;
            local_1b8 = (int)plVar11[1] - 1;
            local_188 = (undefined **)local_1b4;
            local_180 = &local_1b8;
            FUN_140263e2a(param_3,local_18c,&local_188);
            uVar32 = local_150;
            lVar29 = (longlong)(int)local_150;
            uVar24 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar24);
            if (local_150._4_4_ < uVar24) {
              FUN_1400cc390(local_178,uVar32 & 0xffffffff);
            }
            ppuVar8 = local_158;
            if (local_158 == (undefined **)0x0) {
              ppuVar8 = (undefined **)local_178;
            }
            *(uint *)((longlong)ppuVar8 + lVar29 * 4) = local_1b8;
LAB_14379ff3b:
            plVar11 = local_230;
            puVar9[2] = (uint)local_108;
            puVar9[1] = puVar9[1] + 1;
            lVar29 = local_230[4];
            FUN_144958770(lVar29 + 0x30,0);
            FUN_144958770(lVar29 + 0x80,0);
            *(undefined1 *)(lVar29 + 0x28) = 1;
            ppuVar8 = (undefined **)plVar17[0x15];
            plVar11[7] = local_1d8;
            plVar11[6] = (longlong)puVar9;
            local_188 = ppuVar8;
            (**(code **)(*(longlong *)plVar11[8] + 8))((longlong *)plVar11[8],plVar11);
            if ((*(byte *)((longlong)plVar17 + 0x29) & 2) == 0) {
              lVar29 = plVar11[4];
              if ((*(int *)(lVar29 + 0x38) == *(int *)(lVar29 + 100)) &&
                 (*(int *)(lVar29 + 0x88) == *(int *)(lVar29 + 0xb4))) {
                FUN_1456fd588(local_1f0,local_1b4);
                plVar11 = local_230;
              }
              else {
                local_210 = (uint *)(lVar29 + 0x30);
                puVar9 = (uint *)FUN_1456fd5f6(local_1f0,local_1b4);
                local_238 = puVar9;
                if (puVar9[2] - puVar9[0xd] == *(int *)(lVar29 + 0x38) - *(int *)(lVar29 + 100)) {
                  local_228 = puVar9 + 4;
                  uVar24 = puVar9[10];
                  if (uVar24 == 0) {
                    uVar35 = 1;
                    uVar32 = 0;
                    iVar31 = 0;
                    uVar19 = 0;
                  }
                  else {
                    puVar28 = *(uint **)(puVar9 + 8);
                    if (*(uint **)(puVar9 + 8) == (uint *)0x0) {
                      puVar28 = local_228;
                    }
                    uVar19 = *puVar28;
                    if (uVar19 == 0) {
                      iVar31 = uVar24 + 0x1e;
                      if (-1 < (int)(uVar24 - 1)) {
                        iVar31 = uVar24 - 1;
                      }
                      uVar32 = 0;
                      uVar35 = (ulonglong)(uint)(iVar31 >> 5);
                      if (iVar31 >> 5 < 1) {
                        uVar35 = uVar32;
                      }
                      iVar31 = 0;
                      do {
                        if (uVar35 == uVar32) goto LAB_1437a0160;
                        iVar31 = iVar31 + 0x20;
                        uVar19 = puVar28[uVar32 + 1];
                        uVar32 = uVar32 + 1;
                      } while (uVar19 == 0);
                    }
                    else {
                      uVar32 = 0;
                      iVar31 = 0;
                    }
                    uVar35 = (ulonglong)(-uVar19 & uVar19);
                    uVar2 = uVar35 * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar2 != 0) {
                      for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar19 = (iVar31 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    if ((int)uVar24 <= (int)uVar19) {
                      uVar19 = uVar24;
                    }
                  }
                  if (uVar19 != uVar24) {
                    if (*(uint **)(puVar9 + 8) != (uint *)0x0) {
                      local_228 = *(uint **)(puVar9 + 8);
                    }
                    iVar26 = uVar24 + 0x1e;
                    if (-1 < (int)(uVar24 - 1)) {
                      iVar26 = uVar24 - 1;
                    }
                    if (*(int *)(lVar29 + 0x38) == *(int *)(lVar29 + 100)) goto LAB_1437a0148;
                    local_1f8 = *(longlong *)puVar9;
                    iVar26 = iVar26 >> 5;
                    local_200 = lVar29 + 0x68;
                    if (*(ulonglong *)(lVar29 + 0x70) != 0) {
                      local_200 = *(ulonglong *)(lVar29 + 0x70);
                    }
                    uVar25 = *(int *)(lVar29 + 0x78) - 1;
                    local_220 = (longlong *)CONCAT44(local_220._4_4_,uVar25);
                    local_208 = local_228 + 1;
                    uVar27 = 0xffffffff;
                    do {
                      lVar23 = *(longlong *)(local_1f8 + (longlong)(int)uVar19 * 0x10);
                      iVar15 = *(int *)(local_200 +
                                       (ulonglong)
                                       ((int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17 &
                                       uVar25) * 4);
                      if (iVar15 == -1) goto LAB_1437a0148;
                      while (*(longlong *)(*(longlong *)local_210 + (longlong)iVar15 * 0x10) !=
                             lVar23) {
                        iVar15 = *(int *)((longlong)iVar15 * 0x10 + *(longlong *)local_210 + 8);
                        if (iVar15 == -1) goto LAB_1437a0148;
                      }
                      uVar27 = uVar27 & ~(uint)uVar35;
                      iVar15 = (int)uVar32;
                      lVar23 = (longlong)iVar15;
                      uVar19 = local_228[lVar23] & uVar27;
                      if (uVar19 == 0) {
                        iVar13 = iVar26;
                        if (iVar26 < iVar15) {
                          iVar13 = iVar15;
                        }
                        if (iVar26 <= iVar15) break;
                        lVar36 = 0;
                        while( true ) {
                          iVar31 = iVar31 + 0x20;
                          uVar19 = local_208[lVar23 + lVar36];
                          if (uVar19 != 0) break;
                          lVar36 = lVar36 + 1;
                          if (iVar13 - lVar23 == lVar36) goto LAB_1437a0160;
                        }
                        uVar32 = (ulonglong)(iVar15 + (int)lVar36 + 1);
                        uVar27 = 0xffffffff;
                      }
                      uVar35 = (ulonglong)(-uVar19 & uVar19);
                      uVar2 = uVar35 * 2 + 1;
                      lVar23 = 0x3f;
                      if (uVar2 != 0) {
                        for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      uVar19 = (iVar31 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar19 < (int)uVar24);
                  }
                }
                else {
LAB_1437a0148:
                  FUN_140492002(puVar9,local_210);
                  *(undefined1 *)((longlong)local_230 + 0x4c) = 1;
                }
LAB_1437a0160:
                local_210 = (uint *)(lVar29 + 0x80);
                if (local_238[0x16] - local_238[0x21] ==
                    *(int *)(lVar29 + 0x88) - *(int *)(lVar29 + 0xb4)) {
                  local_228 = puVar9 + 0x18;
                  uVar24 = local_238[0x1e];
                  if (uVar24 == 0) {
                    uVar35 = 1;
                    uVar32 = 0;
                    iVar31 = 0;
                    uVar19 = 0;
                  }
                  else {
                    puVar28 = *(uint **)(local_238 + 0x1c);
                    if (*(uint **)(local_238 + 0x1c) == (uint *)0x0) {
                      puVar28 = local_228;
                    }
                    uVar19 = *puVar28;
                    if (uVar19 == 0) {
                      iVar31 = uVar24 + 0x1e;
                      if (-1 < (int)(uVar24 - 1)) {
                        iVar31 = uVar24 - 1;
                      }
                      uVar32 = 0;
                      uVar35 = (ulonglong)(uint)(iVar31 >> 5);
                      if (iVar31 >> 5 < 1) {
                        uVar35 = uVar32;
                      }
                      iVar31 = 0;
                      do {
                        if (uVar35 == uVar32) goto LAB_1437a0278;
                        iVar31 = iVar31 + 0x20;
                        uVar19 = puVar28[uVar32 + 1];
                        uVar32 = uVar32 + 1;
                      } while (uVar19 == 0);
                    }
                    else {
                      uVar32 = 0;
                      iVar31 = 0;
                    }
                    uVar35 = (ulonglong)(-uVar19 & uVar19);
                    uVar2 = uVar35 * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar2 != 0) {
                      for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar19 = (iVar31 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    if ((int)uVar24 <= (int)uVar19) {
                      uVar19 = uVar24;
                    }
                  }
                  if (uVar19 != uVar24) {
                    if (*(uint **)(local_238 + 0x1c) != (uint *)0x0) {
                      local_228 = *(uint **)(local_238 + 0x1c);
                    }
                    iVar26 = uVar24 + 0x1e;
                    if (-1 < (int)(uVar24 - 1)) {
                      iVar26 = uVar24 - 1;
                    }
                    if (*(int *)(lVar29 + 0x88) == *(int *)(lVar29 + 0xb4)) goto LAB_1437a0261;
                    iVar26 = iVar26 >> 5;
                    local_1f8 = lVar29 + 0xb8;
                    if (*(longlong *)(lVar29 + 0xc0) != 0) {
                      local_1f8 = *(longlong *)(lVar29 + 0xc0);
                    }
                    uVar25 = *(int *)(lVar29 + 200) - 1;
                    local_200 = CONCAT44(local_200._4_4_,uVar25);
                    local_208 = local_228 + 1;
                    local_220 = (longlong *)CONCAT44(local_220._4_4_,0xffffffff);
                    do {
                      lVar23 = *(longlong *)
                                (*(longlong *)(local_238 + 0x14) + (longlong)(int)uVar19 * 0x10);
                      iVar15 = *(int *)(local_1f8 +
                                       (ulonglong)
                                       ((int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17 &
                                       uVar25) * 4);
                      if (iVar15 == -1) goto LAB_1437a0261;
                      while (*(longlong *)(*(longlong *)local_210 + (longlong)iVar15 * 0x10) !=
                             lVar23) {
                        iVar15 = *(int *)((longlong)iVar15 * 0x10 + *(longlong *)local_210 + 8);
                        if (iVar15 == -1) goto LAB_1437a0261;
                      }
                      uVar27 = (uint)local_220 & ~(uint)uVar35;
                      iVar15 = (int)uVar32;
                      lVar23 = (longlong)iVar15;
                      uVar19 = local_228[lVar23] & uVar27;
                      if (uVar19 == 0) {
                        iVar13 = iVar26;
                        if (iVar26 < iVar15) {
                          iVar13 = iVar15;
                        }
                        if (iVar26 <= iVar15) break;
                        lVar36 = 0;
                        while( true ) {
                          iVar31 = iVar31 + 0x20;
                          uVar19 = local_208[lVar23 + lVar36];
                          if (uVar19 != 0) break;
                          lVar36 = lVar36 + 1;
                          if (iVar13 - lVar23 == lVar36) goto LAB_1437a0278;
                        }
                        uVar32 = (ulonglong)(iVar15 + (int)lVar36 + 1);
                        local_220 = (longlong *)CONCAT44(local_220._4_4_,0xffffffff);
                      }
                      else {
                        local_220 = (longlong *)CONCAT44(local_220._4_4_,uVar27);
                      }
                      uVar35 = (ulonglong)(-uVar19 & uVar19);
                      uVar2 = uVar35 * 2 + 1;
                      lVar23 = 0x3f;
                      if (uVar2 != 0) {
                        for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      uVar19 = (iVar31 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar19 < (int)uVar24);
                  }
                }
                else {
LAB_1437a0261:
                  FUN_140492002(puVar9 + 0x14,local_210);
                  *(undefined1 *)((longlong)local_230 + 0x4c) = 1;
                }
LAB_1437a0278:
                puVar28 = local_238;
                local_238[0x2a] = 0;
                if (local_238[0x2b] != 0) {
                  FUN_144893a1c(puVar9 + 0x28,0);
                }
                puVar28[0x2c] = (int)plVar17[0x15] - (int)ppuVar8;
                FUN_14049209c(&local_188,plVar17,puVar9 + 0x28);
                plVar11 = local_230;
                if (*(int *)(lVar29 + 0x38) != *(int *)(lVar29 + 100)) {
                  *(undefined1 *)((longlong)local_230 + 0x4b) = 1;
                }
              }
            }
            lVar29 = plVar11[4];
            FUN_144958770(lVar29 + 0x30,0);
            FUN_144958770(lVar29 + 0x80,0);
            *(undefined1 *)(lVar29 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar17 + 0x29) & 2) != 0) {
              if (local_158 != (undefined **)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (undefined **)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1437a08b5;
            }
            iVar22 = iVar22 + 1;
            param_3 = local_218;
            plVar11 = local_198;
          } while (iVar22 < local_100);
        }
        plVar17 = local_1a8;
        if (((char)plVar11[10] == '\0') && (iVar22 = (int)local_1a8[1], 0 < iVar22)) {
          uVar32 = 0;
          do {
            uVar35 = local_d0;
            iVar31 = *(int *)(*plVar17 + 8 + uVar32 * 0x14);
            if ((iVar31 < (int)(uint)local_108) && (local_108._4_4_ < iVar31)) {
              ppuVar8 = local_d8;
              if (local_d8 == (undefined **)0x0) {
                ppuVar8 = local_f8;
              }
              lVar29 = (longlong)(int)local_d0;
              if (lVar29 != 0) {
                lVar23 = 0;
                do {
                  if (uVar32 == *(uint *)((longlong)ppuVar8 + lVar23)) goto LAB_1437a098d;
                  lVar23 = lVar23 + 4;
                } while (lVar29 * 4 - lVar23 != 0);
              }
              uVar24 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar24);
              if (local_d0._4_4_ < uVar24) {
                FUN_1400cc390(local_f8,uVar35 & 0xffffffff);
              }
              ppuVar8 = local_d8;
              if (local_d8 == (undefined **)0x0) {
                ppuVar8 = local_f8;
              }
              *(int *)((longlong)ppuVar8 + lVar29 * 4) = (int)uVar32;
              iVar22 = (int)plVar17[1];
            }
LAB_1437a098d:
            uVar32 = uVar32 + 1;
          } while ((longlong)uVar32 < (longlong)iVar22);
        }
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar17 = local_1a8;
        ppuVar8 = local_d8;
        if (local_d8 == (undefined **)0x0) {
          ppuVar8 = local_f8;
        }
        if ((int)local_d0 != 0) {
          local_218 = local_218 + 0xb;
          lVar29 = (longlong)(int)local_d0;
          lVar23 = 0;
          do {
            iVar22 = *(int *)((longlong)ppuVar8 + lVar23);
            if (((-1 < (longlong)iVar22) && (iVar22 < (int)plVar17[1])) &&
               (iVar22 = FUN_1456fd588(local_218,*(undefined4 *)(*plVar17 + (longlong)iVar22 * 0x14)
                                      ), 0 < iVar22)) {
              *(undefined1 *)((longlong)plVar11 + 0x4c) = 1;
            }
            lVar23 = lVar23 + 4;
          } while (lVar29 * 4 != lVar23);
        }
        plVar17 = local_1a0;
        local_188 = local_158;
        if (local_158 == (undefined **)0x0) {
          local_188 = (undefined **)local_178;
        }
        local_180._0_4_ = (int)local_150;
        FUN_14379dd0c(local_1a0,&local_188);
        local_188 = local_128;
        if (local_128 == (undefined **)0x0) {
          local_188 = (undefined **)&local_148;
        }
        local_180 = (uint *)CONCAT44(local_180._4_4_,(int)local_120);
        FUN_14379dd0c(plVar17,&local_188);
        if (0 < (int)local_d0) {
          ppuVar8 = local_d8;
          if (local_d8 == (undefined **)0x0) {
            ppuVar8 = local_f8;
          }
          FUN_144958a06(ppuVar8);
          plVar11 = local_1a8;
          if (0 < (longlong)(int)local_d0) {
            uVar32 = (longlong)(int)local_d0 + 1;
            do {
              ppuVar8 = local_d8;
              if (local_d8 == (undefined **)0x0) {
                ppuVar8 = local_f8;
              }
              uVar24 = *(uint *)((longlong)ppuVar8 + (uVar32 - 2) * 4);
              if ((-1 < (longlong)(int)uVar24) && (iVar22 = (int)plVar11[1], (int)uVar24 < iVar22))
              {
                iVar31 = ~uVar24 + iVar22;
                if (iVar31 != 0) {
                  if (0 < iVar31) {
                    iVar31 = 1;
                  }
                  memmove((void *)(*plVar11 + (longlong)(int)uVar24 * 0x14),
                          (void *)(*plVar11 + (ulonglong)(uint)(iVar22 - iVar31) * 0x14),
                          (longlong)iVar31 * 0x14);
                  iVar22 = (int)plVar11[1];
                }
                *(int *)(plVar11 + 1) = iVar22 + -1;
              }
              uVar32 = uVar32 - 1;
            } while (1 < uVar32);
          }
          FUN_14010afec(plVar17,0);
        }
        if (local_158 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        ppuVar8 = local_d8;
        if (local_128 != (undefined **)0x0) {
          FUN_1400020a8();
          ppuVar8 = local_d8;
        }
        goto LAB_1437a0b7b;
      }
      lVar29 = param_2[3];
      if (lVar29 == 0) {
        local_238 = (uint *)CONCAT44(local_238._4_4_,0xffffffff);
        lVar29 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(lVar29 + 0x70);
        cVar6 = FUN_1437a1504(&local_1b0,uVar4);
        if (cVar6 == '\0') goto LAB_1437a08c7;
        local_238 = (uint *)CONCAT44(local_238._4_4_,uVar4);
        lVar29 = lVar29 + 0x20;
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = &PTR_FUN_14ab190a0;
      puVar10[8] = 0;
      *(undefined4 *)(puVar10 + 9) = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar10 + 0x54) = 0;
      puVar10[0xc] = 0;
      *(undefined4 *)(puVar10 + 0xd) = 0;
      *(undefined4 *)(puVar10 + 0xe) = 0xffffffff;
      puVar12 = (undefined8 *)param_2[2];
      plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14ab190c0;
      plVar11[2] = (longlong)puVar10;
      if (puVar10 == (undefined8 *)0x0) {
LAB_1437a0668:
        *puVar12 = puVar10;
        plVar34 = (longlong *)puVar12[1];
        if (plVar11 == plVar34) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar34 = plVar11 + 1;
            *(int *)plVar34 = (int)*plVar34 + -1;
            UNLOCK();
            if ((int)*plVar34 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar5 = (int *)((longlong)plVar11 + 0xc);
              *piVar5 = *piVar5 + -1;
              iVar22 = *piVar5;
              UNLOCK();
              plVar34 = plVar11;
              goto joined_r0x0001437a06a3;
            }
          }
        }
        else {
          puVar12[1] = plVar11;
          if (plVar34 != (longlong *)0x0) goto LAB_1437a06bf;
        }
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          puVar10[1] = puVar10;
          if ((longlong *)puVar10[2] != plVar11) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar34 = (longlong *)puVar10[2];
            if (plVar34 != (longlong *)0x0) {
              LOCK();
              piVar5 = (int *)((longlong)plVar34 + 0xc);
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (*piVar5 == 0) {
                (**(code **)(*plVar34 + 0x10))();
              }
            }
            puVar10[2] = plVar11;
          }
          LOCK();
          plVar34 = plVar11 + 1;
          *(int *)plVar34 = (int)*plVar34 + -1;
          UNLOCK();
          if ((int)*plVar34 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar5 = (int *)((longlong)plVar11 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          goto LAB_1437a0668;
        }
        puVar10[1] = puVar10;
        *puVar12 = puVar10;
        plVar34 = (longlong *)puVar12[1];
        if (plVar34 != (longlong *)0x0) {
          puVar12[1] = 0;
LAB_1437a06bf:
          LOCK();
          plVar11 = plVar34 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar34)(plVar34);
            LOCK();
            piVar5 = (int *)((longlong)plVar34 + 0xc);
            *piVar5 = *piVar5 + -1;
            iVar22 = *piVar5;
            UNLOCK();
joined_r0x0001437a06a3:
            if (iVar22 == 0) {
              (**(code **)(*plVar34 + 0x10))(plVar34);
            }
          }
        }
      }
      plVar11 = local_230;
      local_148._0_4_ = *(undefined4 *)((longlong)param_3 + 0x54);
      *(undefined4 *)(puVar10 + 0xe) = (undefined4)local_148;
      local_148._4_4_ = local_238._0_4_;
      local_140 = 0;
      local_118 = (undefined **)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_230 + 0x4e) == '\x01') {
        FUN_1437a17f2(&local_1b0,puVar10 + 4,&local_108);
      }
      else {
        local_248 = local_138;
        FUN_1437a18da(&local_1b0,puVar10 + 4,lVar29,&local_108);
        *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      local_140 = (int)local_c0;
      FUN_1437a1d08(&local_1b0);
      if (0 < (int)local_c0) {
        lVar29 = 0;
        do {
          puVar12 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar12 = &local_108;
          }
          iVar22 = *(int *)(puVar12 + lVar29);
          lVar23 = *local_1e0;
          local_178[0] = *(undefined4 *)((longlong)puVar12 + lVar29 * 8 + 4);
          puVar33 = (ulonglong *)plVar17[1];
          puVar1 = (undefined4 *)*puVar33 + 1;
          if ((undefined4 *)puVar33[1] < puVar1) {
            if ((*(byte *)((longlong)plVar17 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar17 + 0x170))(plVar17,local_178,4);
            }
            else {
              FUN_14572512c(plVar17,local_178);
            }
          }
          else {
            local_178[0] = *(undefined4 *)*puVar33;
            *puVar33 = (ulonglong)puVar1;
          }
          plVar11[7] = local_1d8;
          plVar11[6] = (longlong)iVar22 * 0x14 + lVar23;
          (**(code **)(*(longlong *)plVar11[8] + 8))((longlong *)plVar11[8],plVar11);
          lVar29 = lVar29 + 1;
        } while ((int)lVar29 < (int)local_c0);
      }
      ppuVar8 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        ppuVar8 = local_118;
      }
    }
LAB_1437a0b7b:
    if (ppuVar8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar22 = (int)param_3[0x10];
    if (iVar22 == 0) {
      uVar32 = 1;
      iVar26 = 0;
      uVar35 = 0;
      iVar31 = 0;
    }
    else {
      puVar9 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar9 = (uint *)(param_3 + 0xd);
      }
      uVar24 = *puVar9;
      if (uVar24 == 0) {
        iVar31 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar31 = iVar22 + -1;
        }
        uVar35 = 0;
        uVar32 = (ulonglong)(uint)(iVar31 >> 5);
        if (iVar31 >> 5 < 1) {
          uVar32 = uVar35;
        }
        iVar26 = 0;
        do {
          if (uVar32 == uVar35) goto LAB_1437a0b85;
          iVar26 = iVar26 + 0x20;
          uVar24 = puVar9[uVar35 + 1];
          uVar35 = uVar35 + 1;
        } while (uVar24 == 0);
      }
      else {
        iVar26 = 0;
        uVar35 = 0;
      }
      uVar32 = (ulonglong)(-uVar24 & uVar24);
      uVar2 = uVar32 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      iVar31 = (iVar26 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar31) {
        iVar31 = iVar22;
      }
    }
    puVar28 = (uint *)0x1;
    if (iVar31 == iVar22) goto LAB_1437a0b87;
    uVar24 = 0xffffffff;
    local_238 = (uint *)(param_3 + 0xd);
    do {
      lVar29 = local_218[0xb];
      lVar23 = (longlong)iVar31 * 200;
      FUN_1403257c8(param_2[0xd],lVar23 + lVar29 + 8);
      FUN_1403257c8(param_2[0xd],lVar23 + lVar29 + 0x58);
      piVar5 = (int *)param_2[0xe];
      if (piVar5 != (int *)0x0) {
        *piVar5 = *piVar5 + *(int *)(lVar29 + lVar23 + 0xb0);
      }
      uVar24 = uVar24 & ~(uint)uVar32;
      puVar9 = (uint *)local_218[0xf];
      if ((uint *)local_218[0xf] == (uint *)0x0) {
        puVar9 = local_238;
      }
      iVar15 = (int)local_218[0x10];
      iVar31 = (int)uVar35;
      lVar29 = (longlong)iVar31;
      uVar19 = puVar9[lVar29] & uVar24;
      if (uVar19 == 0) {
        iVar13 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar13 = iVar15 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar26 = iVar26 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar31) {
          iVar14 = iVar31;
        }
        if (iVar31 < iVar13) {
          lVar23 = 0;
          do {
            uVar19 = puVar9[lVar29 + lVar23 + 1];
            if (uVar19 != 0) {
              uVar35 = (ulonglong)(iVar31 + (int)lVar23 + 1);
              uVar24 = 0xffffffff;
              goto LAB_14379f351;
            }
            iVar26 = iVar26 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar14 - lVar29 != lVar23);
          uVar24 = 0xffffffff;
          iVar31 = iVar14;
        }
        uVar35 = (ulonglong)(iVar31 + 1);
        iVar31 = iVar15;
      }
      else {
LAB_14379f351:
        uVar32 = (ulonglong)(-uVar19 & uVar19);
        uVar2 = uVar32 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar31 = (iVar26 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar31) {
          iVar31 = iVar15;
        }
      }
    } while (iVar31 != iVar22);
  }
LAB_1437a0b85:
  puVar28 = (uint *)0x1;
LAB_1437a0b87:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar28;
  while( true ) {
    iVar22 = iVar22 + 0x20;
    uVar19 = puVar28[uVar35 + 1];
    uVar35 = uVar35 + 1;
    if (uVar19 != 0) break;
LAB_14379f7ec:
    if (uVar32 == uVar35) goto LAB_14379fb4a;
  }
LAB_14379f805:
  uVar32 = (ulonglong)(-uVar19 & uVar19);
  uVar2 = uVar32 * 2 + 1;
  lVar29 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
    }
  }
  uVar19 = (iVar22 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
  if ((int)uVar25 <= (int)uVar19) {
    uVar19 = uVar25;
  }
LAB_14379f83b:
  if ((int)uVar19 < (int)uVar25) {
    local_210 = puVar16 + 0x16;
    uVar25 = 0xffffffff;
    local_1f0 = (longlong *)((ulonglong)local_1f0 & 0xffffffff00000000);
    local_238 = puVar20;
    local_1e4 = uVar24;
    do {
      plVar17 = local_230;
      puVar33 = (ulonglong *)((longlong)(int)uVar19 * 0x10 + *(longlong *)puVar20);
      cVar6 = (**(code **)(*(longlong *)local_230[4] + 0x330))((longlong *)local_230[4],puVar33,0);
      if (cVar6 == '\0') {
        puVar21 = puVar33;
        lVar29 = (**(code **)(*(longlong *)plVar17[4] + 800))((longlong *)plVar17[4],puVar33);
        puVar20 = local_238;
        if (lVar29 != 0) {
          local_1f0 = (longlong *)
                      CONCAT44(local_1f0._4_4_,(int)CONCAT71((int7)((ulonglong)puVar21 >> 8),1));
          if ((*puVar33 & 1) == 0 && *puVar33 != 0) {
            FUN_140325a06(local_210,&local_108,puVar33,0);
          }
          goto LAB_14379f8e2;
        }
      }
      else {
LAB_14379f8e2:
        puVar20 = local_238;
        FUN_140646052(local_238,uVar19);
      }
      plVar17 = local_230;
      uVar25 = uVar25 & ~(uint)uVar32;
      puVar9 = *(uint **)(puVar20 + 8);
      if (*(uint **)(puVar20 + 8) == (uint *)0x0) {
        puVar9 = puVar16 + 6;
      }
      uVar24 = puVar20[10];
      iVar31 = (int)uVar35;
      lVar29 = (longlong)iVar31;
      uVar19 = puVar9[lVar29] & uVar25;
      if (uVar19 == 0) {
        iVar26 = uVar24 + 0x1e;
        if (-1 < (int)(uVar24 - 1)) {
          iVar26 = uVar24 - 1;
        }
        iVar26 = iVar26 >> 5;
        iVar15 = iVar26;
        if (iVar26 < iVar31) {
          iVar15 = iVar31;
        }
        if (iVar26 <= iVar31) break;
        lVar23 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar19 = puVar9[lVar29 + lVar23 + 1];
          if (uVar19 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar15 - lVar29 == lVar23) goto LAB_14379f98a;
        }
        uVar35 = (ulonglong)(iVar31 + (int)lVar23 + 1);
        uVar25 = 0xffffffff;
      }
      uVar32 = (ulonglong)(-uVar19 & uVar19);
      uVar2 = uVar32 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      uVar19 = (iVar22 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    } while ((int)uVar19 < (int)uVar24);
LAB_14379f98a:
    puVar9 = local_1c8;
    uVar24 = local_1e4;
    if (((ulonglong)local_1f0 & 1) != 0) {
      *(undefined1 *)((longlong)local_230 + 0x49) = 1;
      if (*(char *)((longlong)local_230 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_230[0xb] + 0x210))();
        *(undefined1 *)((longlong)plVar17 + 0x4a) = 1;
        puVar20 = local_238;
      }
      uVar32 = local_120;
      if ((int)local_218[1] != *(int *)((longlong)local_218 + 0x34)) {
        plVar11 = (longlong *)local_218[8];
        if ((longlong *)local_218[8] == (longlong *)0x0) {
          plVar11 = local_1c0;
        }
        iVar22 = *(int *)((longlong)plVar11 + (ulonglong)((int)local_218[9] - 1U & local_1cc) * 4);
        if (iVar22 != -1) {
          do {
            lVar29 = *local_218 + (longlong)iVar22 * 0x10;
            if (*(uint *)(*local_218 + (longlong)iVar22 * 0x10) == local_1cc) goto LAB_14379fa1d;
            iVar22 = *(int *)(lVar29 + 8);
          } while (iVar22 != -1);
        }
      }
      lVar29 = 0;
LAB_14379fa1d:
      iVar22 = *(int *)(lVar29 + 4);
      lVar29 = *local_1e0;
      lVar23 = (longlong)(int)local_120;
      uVar24 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar24);
      if (local_120._4_4_ < uVar24) {
        FUN_1400cc390(&local_148,uVar32 & 0xffffffff);
        puVar20 = local_238;
      }
      ppuVar8 = local_128;
      if (local_128 == (undefined **)0x0) {
        ppuVar8 = (undefined **)&local_148;
      }
      *(int *)((longlong)ppuVar8 + lVar23 * 4) = iVar22;
      FUN_1448fcc30(&local_108,plVar17[4],*(undefined8 *)(puVar20 + 0x28),
                    (longlong)(int)puVar20[0x2c]);
      plVar17[7] = local_1d8;
      plVar17[6] = (longlong)iVar22 * 0x14 + lVar29;
      plVar17[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)plVar17[8] + 8))((longlong *)plVar17[8],plVar17);
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      puVar9 = local_1c8;
      local_108 = &PTR_FUN_149e37220;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar17 = local_b0;
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar17);
      }
      lVar29 = local_90;
      puVar20 = local_238;
      uVar24 = local_1e4;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar29);
        puVar20 = local_238;
        uVar24 = local_1e4;
      }
    }
  }
LAB_14379fb4a:
  uVar19 = (uint)local_200;
  param_3 = local_218;
  puVar28 = local_228;
  iVar31 = (int)local_1f8;
  if ((puVar20[2] == puVar20[0xd]) && (uVar32 = local_200, puVar20[0x16] == puVar20[0x21])) {
LAB_14379fb74:
    uVar19 = (uint)uVar32;
    FUN_1456fd4bc(local_220,(ulonglong)local_208 & 0xffffffff);
  }
  uVar24 = uVar24 & ~uVar19;
  puVar16 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar16 = puVar9;
  }
  iVar22 = (int)param_3[0x10];
  iVar26 = (int)puVar28;
  lVar29 = (longlong)iVar26;
  uVar19 = puVar16[lVar29] & uVar24;
  if (uVar19 == 0) {
    iVar15 = iVar22 + 0x1e;
    if (-1 < iVar22 + -1) {
      iVar15 = iVar22 + -1;
    }
    iVar15 = iVar15 >> 5;
    iVar13 = iVar15;
    if (iVar15 < iVar26) {
      iVar13 = iVar26;
    }
    if (iVar15 <= iVar26) goto LAB_14379fc84;
    lVar23 = 0;
    while( true ) {
      iVar31 = iVar31 + 0x20;
      uVar19 = puVar16[lVar29 + lVar23 + 1];
      if (uVar19 != 0) break;
      lVar23 = lVar23 + 1;
      if (iVar13 - lVar29 == lVar23) goto LAB_14379fc84;
    }
    puVar28 = (uint *)(ulonglong)(iVar26 + (int)lVar23 + 1);
    uVar24 = 0xffffffff;
  }
  uVar32 = (ulonglong)(-uVar19 & uVar19);
  uVar35 = uVar32 * 2 + 1;
  lVar29 = 0x3f;
  if (uVar35 != 0) {
    for (; uVar35 >> lVar29 == 0; lVar29 = lVar29 + -1) {
    }
  }
  iVar26 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
  if (iVar22 <= iVar26) goto LAB_14379fc84;
  goto LAB_14379f6f8;
}



// FUNCTION 1437a1420 FUN_1437a1420 body=226 status=ok
// SIG undefined FUN_1437a1420(void)

void FUN_1437a1420(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x14) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x14;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a1504 FUN_1437a1504 body=749 status=ok
// SIG undefined FUN_1437a1504(void)

bool FUN_1437a1504(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar11 + 0x54);
  if (iVar3 != param_2) goto LAB_1437a17dd;
  iVar10 = *(int *)(lVar11 + 0x104);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar10 != iVar9 || iVar10 == -1) || (iVar9 = iVar10, *(int *)(lVar11 + 0x108) == -1)) {
    *(int *)(lVar11 + 0x104) = iVar9;
    lVar11 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar11 == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = 0;
      iVar10 = 0;
      do {
        iVar10 = iVar10 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x14;
      } while (lVar11 * 0x14 != lVar12);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar10;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar11 + 0x18);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_1437a16f7:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar7[1];
      do {
        if (iVar10 == 0) goto LAB_1437a16f7;
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar14 = iVar10 == iVar9;
        if (bVar14) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar14);
      uVar8 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar8;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x0001437a1746;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
joined_r0x0001437a1746:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    goto LAB_1437a17dd;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14ab190a0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar11 + 0x10);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ab190c0;
  plVar7[2] = (longlong)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_1437a16d0:
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x0001437a1795;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_1437a17b4;
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar6[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_1437a16d0;
    }
    puVar6[1] = puVar6;
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_1437a17b4:
      LOCK();
      plVar7 = plVar13 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar10 = *piVar2;
        UNLOCK();
joined_r0x0001437a1795:
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_1437a17dd:
  return iVar3 != param_2;
}



// FUNCTION 1437a17f2 FUN_1437a17f2 body=231 status=ok
// SIG undefined FUN_1437a17f2(void)

void FUN_1437a17f2(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x14;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437a18da FUN_1437a18da body=1068 status=ok
// SIG undefined FUN_1437a18da(void)

void FUN_1437a18da(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 8);
  iVar4 = (int)plVar3[1];
  iVar12 = 0;
  iVar10 = 0;
  if ((longlong)iVar4 != 0) {
    lVar14 = 0;
    iVar10 = 0;
    do {
      iVar10 = iVar10 + (uint)(byte)(*(int *)(*plVar3 + lVar14) != -1 |
                                    *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar14 = lVar14 + 0x14;
    } while ((longlong)iVar4 * 0x14 != lVar14);
  }
  if (param_3 != (longlong *)0x0) {
    iVar12 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar12 = iVar12 - iVar10;
  local_80 = param_2;
  if (0 < iVar4) {
    local_78 = param_3 + 7;
    lVar14 = 0;
    do {
      iVar4 = *(int *)(*plVar3 + lVar14 * 0x14);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar4 != -1)) {
        puVar1 = (uint *)(*plVar3 + lVar14 * 0x14);
        if (iVar4 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar1);
        }
        local_60 = puVar1;
        local_58 = puVar1 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar13 = *puVar1;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar3 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar3 = local_78;
          }
          iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_3[9] - 1U & uVar13) * 4);
          if (iVar4 != -1) {
            do {
              lVar11 = *param_3 + (longlong)iVar4 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar4 * 0x10) == uVar13) {
                if ((uint *)(lVar11 + 4) != (uint *)0x0 && lVar11 != 0) {
                  if (*(uint *)(lVar11 + 4) != puVar1[1]) {
                    iVar4 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar4 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar4 + 1U) {
                      FUN_14593fc44(param_4,iVar4);
                    }
                    lVar11 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar11 = param_4;
                    }
                    *(ulonglong *)(lVar11 + (longlong)iVar4 * 8) =
                         ((ulonglong)uVar13 << 0x20) + lVar14;
                  }
                  goto LAB_1437a1a52;
                }
                break;
              }
              iVar4 = *(int *)(lVar11 + 8);
            } while (iVar4 != -1);
          }
        }
        iVar4 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar4 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar4 + 1U) {
          FUN_14593fc44(param_4,iVar4);
        }
        lVar11 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar11 = param_4;
        }
        *(ulonglong *)(lVar11 + (longlong)iVar4 * 8) = ((ulonglong)uVar13 << 0x20) + lVar14;
        iVar12 = iVar12 + 1;
      }
LAB_1437a1a52:
      lVar14 = lVar14 + 1;
      plVar3 = *(longlong **)(param_1 + 8);
    } while (lVar14 < (int)plVar3[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar12)) {
    puVar1 = (uint *)(param_3 + 2);
    iVar4 = (int)param_3[5];
    if (iVar4 == 0) {
      uVar16 = 1;
      uVar15 = 0;
      iVar10 = 0;
      iVar5 = 0;
    }
    else {
      puVar9 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar13 = *puVar9;
      if (uVar13 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar10 = 0;
        do {
          if (uVar16 == uVar15) goto LAB_1437a1cd5;
          iVar10 = iVar10 + 0x20;
          uVar13 = puVar9[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar15 = 0;
        iVar10 = 0;
      }
      uVar16 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    if (iVar5 < iVar4) {
      local_68 = local_80 + 7;
      uVar13 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar14 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar6 = *(uint *)(lVar14 + (longlong)iVar5 * 0x10);
          plVar3 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar3 = local_68;
          }
          iVar7 = *(int *)((longlong)plVar3 + (ulonglong)((int)local_80[9] - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar7 * 0x10) == uVar6) goto LAB_1437a1c40;
              iVar7 = *(int *)((longlong)iVar7 * 0x10 + *local_80 + 8);
            } while (iVar7 != -1);
          }
        }
        iVar4 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar4 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar4 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar10);
          FUN_1400cc390(param_5,iVar4);
          param_3 = local_70;
          iVar10 = (int)local_78;
        }
        lVar11 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar11 = param_5;
        }
        *(undefined4 *)(lVar11 + (longlong)iVar4 * 4) =
             *(undefined4 *)(lVar14 + (longlong)iVar5 * 0x10);
        if (iVar12 < 2) break;
        iVar12 = iVar12 + -1;
        iVar4 = (int)param_3[5];
LAB_1437a1c40:
        uVar13 = uVar13 & ~(uint)uVar16;
        puVar9 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar9 = puVar1;
        }
        iVar5 = (int)uVar15;
        lVar14 = (longlong)iVar5;
        uVar6 = puVar9[lVar14] & uVar13;
        if (uVar6 == 0) {
          iVar7 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar7 = iVar4 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar6 = puVar9[lVar14 + lVar11 + 1];
            if (uVar6 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar8 - lVar14 == lVar11) goto LAB_1437a1cd5;
          }
          uVar15 = (ulonglong)(iVar5 + (int)lVar11 + 1);
          uVar13 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar4);
    }
  }
LAB_1437a1cd5:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a1d08 FUN_1437a1d08 body=496 status=ok
// SIG undefined FUN_1437a1d08(void)

void FUN_1437a1d08(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437a1efa FUN_1437a1efa body=723 status=ok
// SIG undefined FUN_1437a1efa(void)

undefined8 FUN_1437a1efa(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_1437a215b;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_1437a215b:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1437a2214 FUN_1437a2214 body=42 status=ok
// SIG undefined FUN_1437a2214(void)

void FUN_1437a2214(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if ((*(uint *)(param_1 + 5) | 2) == 3) {
    FUN_143797730(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a223a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// FUNCTION 1437a223e FUN_1437a223e body=328 status=ok
// SIG undefined FUN_1437a223e(void)

void FUN_1437a223e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  cVar5 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar5 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = param_2[4];
    uVar4 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
    uVar6 = FUN_1447addd0(lVar3 + 0x3c,0x10);
    FUN_140002266(&local_70,&DAT_14a392fd8,uVar6);
    puVar8 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar8 = local_70;
    }
    puVar7 = &DAT_149dfb77a;
    if (*(int *)(param_2[4] + 0x30) != 0) {
      puVar7 = *(undefined2 **)(param_2[4] + 0x28);
    }
    FUN_140002266(&local_60,L"%s [%s]",puVar7,puVar8);
    puVar8 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar8 = local_60;
    }
    FUN_140056680(local_50,puVar8);
    local_88 = &DAT_149e1e2cc;
    local_80 = uVar1;
    local_78 = uVar2;
    FUN_147dc11d0(**(undefined8 **)(param_1 + 8),local_50,uVar4,lVar3 + 0x38);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a2388 FUN_1437a2388 body=63 status=ok
// SIG undefined FUN_1437a2388(void)

undefined8 FUN_1437a2388(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  piVar1 = (int *)param_1[1];
  lVar2 = *(longlong *)(*param_2 + 0x20);
  bVar3 = *(int *)(lVar2 + 0x48) != piVar1[3];
  bVar4 = *(int *)(lVar2 + 0x44) != piVar1[2];
  bVar5 = *(int *)(lVar2 + 0x40) != piVar1[1];
  bVar6 = *(int *)(lVar2 + 0x3c) != *piVar1;
  if (!bVar3 && (!bVar4 && (!bVar5 && !bVar6))) {
    *(longlong *)*param_1 = *param_2;
  }
  return CONCAT71((int7)((ulonglong)piVar1 >> 8),bVar3 || (bVar4 || (bVar5 || bVar6)));
}



// FUNCTION 1437a23c8 FUN_1437a23c8 body=29 status=ok
// SIG undefined FUN_1437a23c8(void)

undefined8 FUN_1437a23c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437a23fa FUN_1437a23fa body=85 status=ok
// SIG undefined FUN_1437a23fa(void)

void FUN_1437a23fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18ac0;
  return;
}



// FUNCTION 1437a2450 FUN_1437a2450 body=85 status=ok
// SIG undefined FUN_1437a2450(void)

void FUN_1437a2450(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18ac0;
  return;
}



// FUNCTION 1437a24a6 FUN_1437a24a6 body=118 status=ok
// SIG undefined FUN_1437a24a6(void)

void FUN_1437a24a6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e35db0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab18ac0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437a250d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437a2524 FUN_1437a2524 body=19 status=ok
// SIG undefined FUN_1437a2524(void)

undefined1 FUN_1437a2524(undefined8 param_1,undefined8 param_2)

{
  FUN_1437a2538(param_2);
  return 1;
}



// FUNCTION 1437a2538 FUN_1437a2538 body=184 status=ok
// SIG undefined FUN_1437a2538(void)

void FUN_1437a2538(undefined8 param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    plVar6 = *(longlong **)(DAT_14cb0d2b0 + 0x1148);
    plVar1 = plVar6 + *(int *)(DAT_14cb0d2b0 + 0x1150);
    do {
      if (((*(longlong *)(*plVar6 + 0x360) != 0) &&
          (((bVar2 = *(byte *)(*(longlong *)(*plVar6 + 0x360) + 0x152), bVar2 == 1 ||
            ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) &&
           (lVar5 = FUN_14011c706(), lVar5 != 0)))) &&
         (iVar3 = *(int *)(lVar5 + 0x50), (longlong)iVar3 != 0)) {
        lVar5 = *(longlong *)(lVar5 + 0x48);
        lVar7 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar5 + lVar7) + 0xd0);
          if (lVar4 != 0) {
            FUN_147db4b40(lVar4,param_1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar3 * 8 != lVar7);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return;
}



// FUNCTION 1437a25f0 FUN_1437a25f0 body=29 status=ok
// SIG undefined FUN_1437a25f0(void)

undefined8 FUN_1437a25f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437a2622 FUN_1437a2622 body=85 status=ok
// SIG undefined FUN_1437a2622(void)

void FUN_1437a2622(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18b30;
  return;
}



// FUNCTION 1437a2678 FUN_1437a2678 body=85 status=ok
// SIG undefined FUN_1437a2678(void)

void FUN_1437a2678(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18b30;
  return;
}



// FUNCTION 1437a26ce FUN_1437a26ce body=118 status=ok
// SIG undefined FUN_1437a26ce(void)

void FUN_1437a26ce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab18b30;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437a2735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437a274c FUN_1437a274c body=19 status=ok
// SIG undefined FUN_1437a274c(void)

undefined1 FUN_1437a274c(undefined8 param_1,undefined8 param_2)

{
  FUN_1437a2760(param_2);
  return 1;
}



// FUNCTION 1437a2760 FUN_1437a2760 body=405 status=ok
// SIG undefined FUN_1437a2760(void)

void FUN_1437a2760(undefined8 param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong unaff_RBP;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    plVar11 = *(longlong **)(DAT_14cb0d2b0 + 0x1148);
    plVar10 = plVar11 + *(int *)(DAT_14cb0d2b0 + 0x1150);
    local_68 = plVar10;
    do {
      if (((*(longlong *)(*plVar11 + 0x360) != 0) &&
          (((bVar1 = *(byte *)(*(longlong *)(*plVar11 + 0x360) + 0x152), bVar1 == 1 ||
            ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
           (lVar3 = FUN_14011c706(), lVar3 != 0)))) && ((longlong)*(int *)(lVar3 + 0x50) != 0)) {
        plVar9 = *(longlong **)(lVar3 + 0x48);
        plVar7 = plVar9 + *(int *)(lVar3 + 0x50);
        do {
          if (*(longlong *)(*plVar9 + 0xd0) != 0) {
            FUN_147db4d70(*(longlong *)(*plVar9 + 0xd0),&local_58,local_60);
            lVar3 = local_58;
            lVar6 = (longlong)local_50;
            if (lVar6 != 0) {
              lVar8 = 0;
              do {
                plVar10 = *(longlong **)(lVar3 + lVar8);
                cVar2 = FUN_14379838e();
                if (plVar10 != (longlong *)0x0) {
                  lVar4 = (**(code **)(*plVar10 + 0x2a0))(plVar10);
                  if (*(longlong *)(lVar4 + 0x30) == 0) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 0x2b8);
                  }
                  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),(cVar2 != '\x02') * '\x02');
                  FUN_1411ada6c(uVar5,plVar10,unaff_RBP & 0xffffffff,0);
                }
                lVar8 = lVar8 + 8;
                plVar10 = local_68;
              } while (lVar6 * 8 != lVar8);
            }
            if (local_58 != 0) {
              FUN_1400020a8(local_58);
            }
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar7);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437a28f6 FUN_1437a28f6 body=29 status=ok
// SIG undefined FUN_1437a28f6(void)

undefined8 FUN_1437a28f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437a2928 FUN_1437a2928 body=85 status=ok
// SIG undefined FUN_1437a2928(void)

void FUN_1437a2928(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18ba0;
  return;
}



// FUNCTION 1437a297e FUN_1437a297e body=85 status=ok
// SIG undefined FUN_1437a297e(void)

void FUN_1437a297e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab18ba0;
  return;
}



// FUNCTION 1437a29d4 FUN_1437a29d4 body=118 status=ok
// SIG undefined FUN_1437a29d4(void)

void FUN_1437a29d4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab18ba0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437a2a3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437a2a52 FUN_1437a2a52 body=19 status=ok
// SIG undefined FUN_1437a2a52(void)

undefined1 FUN_1437a2a52(undefined8 param_1,undefined8 param_2)

{
  FUN_1437a2a66(param_2);
  return 1;
}



// FUNCTION 1437a2a66 FUN_1437a2a66 body=537 status=ok
// SIG undefined FUN_1437a2a66(void)

void FUN_1437a2a66(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined1 local_79;
  longlong local_78 [3];
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = *(int *)(param_1 + 1);
  if (1 < iVar2) {
    local_78[2] = 0;
    uVar3 = *param_1;
    local_60 = iVar2;
    FUN_140b856de(local_78 + 2,iVar2,0);
    FUN_140b8566a(local_78[2],uVar3,iVar2);
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_147dbc54e(local_78 + 2,local_78);
    cVar4 = FUN_147dbc319(local_78,&local_79);
    if ((cVar4 != '\0') && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
      plVar11 = *(longlong **)(DAT_14cb0d2b0 + 0x1148);
      plVar13 = plVar11 + *(int *)(DAT_14cb0d2b0 + 0x1150);
      local_88 = plVar13;
      do {
        if (((*(longlong *)(*plVar11 + 0x360) != 0) &&
            (((bVar1 = *(byte *)(*(longlong *)(*plVar11 + 0x360) + 0x152), bVar1 == 1 ||
              ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
             (lVar5 = FUN_14011c706(), lVar5 != 0)))) && ((longlong)*(int *)(lVar5 + 0x50) != 0)) {
          plVar8 = *(longlong **)(lVar5 + 0x48);
          plVar9 = plVar8 + *(int *)(lVar5 + 0x50);
          do {
            if (*(longlong *)(*plVar8 + 0xd0) != 0) {
              FUN_147db4d70(*(longlong *)(*plVar8 + 0xd0),&local_58,local_78 + 2);
              lVar5 = local_58;
              lVar10 = (longlong)local_50;
              if (lVar10 != 0) {
                lVar12 = 0;
                do {
                  plVar13 = *(longlong **)(lVar5 + lVar12);
                  if (plVar13 != (longlong *)0x0) {
                    lVar6 = (**(code **)(*plVar13 + 0x2a0))(plVar13);
                    if (*(longlong *)(lVar6 + 0x30) == 0) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x2b8);
                    }
                    FUN_1411ada6c(uVar7,plVar13,
                                  CONCAT71((int7)((ulonglong)uVar3 >> 8),local_79) & 0xffffffff,0);
                  }
                  lVar12 = lVar12 + 8;
                  plVar13 = local_88;
                } while (lVar10 * 8 != lVar12);
              }
              if (local_58 != 0) {
                FUN_1400020a8(local_58);
              }
            }
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar9);
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar13);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_78[2],local_60);
    if (local_78[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437a2c80 FUN_1437a2c80 body=57 status=ok
// SIG undefined FUN_1437a2c80(void)

undefined8 FUN_1437a2c80(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145c15c22(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1437a2cba FUN_1437a2cba body=368 status=ok
// SIG undefined FUN_1437a2cba(void)

undefined8 FUN_1437a2cba(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_2;
  cVar3 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
  if (cVar3 != '\0') {
    (**(code **)(*plVar1 + 0x310))(plVar1,&local_28);
    plVar1 = (longlong *)*param_1;
    uVar4 = (uint)local_28;
    iVar6 = (int)((ulonglong)local_28 >> 0x20);
    uVar2 = (uint)((ulonglong)local_28 >> 0x10);
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar7 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar1[8];
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)plVar1[9] - 1U &
                      iVar6 + (uVar4 << 0x10 | uVar4 & 0xffff) + (uVar2 << 0x13 | uVar2 & 0xffff) +
                      ((uVar4 & 0xffff) >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar5 * 0x10) == local_28) goto LAB_1437a2e0a;
          iVar5 = *(int *)((longlong)iVar5 * 0x10 + *plVar1 + 8);
        } while (iVar5 != -1);
      }
    }
    plVar1 = (longlong *)param_1[1];
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar7 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar1[8];
      }
      iVar6 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)plVar1[9] - 1U &
                      iVar6 + (uVar4 << 0x10 | uVar4 & 0xffff) + (uVar2 << 0x13 | uVar2 & 0xffff) +
                      ((uVar4 & 0xffff) >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar6 * 0x10) == local_28) goto LAB_1437a2e0a;
          iVar6 = *(int *)((longlong)iVar6 * 0x10 + *plVar1 + 8);
        } while (iVar6 != -1);
      }
    }
    FUN_144a13f80(param_1[2],local_2c,&local_28,0);
  }
LAB_1437a2e0a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a2e2c FUN_1437a2e2c body=387 status=ok
// SIG undefined FUN_1437a2e2c(void)

ulonglong FUN_1437a2e2c(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined2 *local_38;
  int local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)*param_2;
  local_28 = plVar3;
  (**(code **)(*plVar3 + 0x2d0))(plVar3,&local_38);
  puVar7 = &DAT_149dfb77a;
  if (*(int *)((undefined8 *)param_1[1] + 1) != 0) {
    puVar7 = *(undefined2 **)param_1[1];
  }
  puVar5 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar5 = local_38;
  }
  lVar11 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar5 + lVar11);
    uVar8 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar7 + lVar11);
    uVar12 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1437a2ea1;
      }
      iVar4 = uVar8 - uVar12;
      goto LAB_1437a2ecc;
    }
    if (uVar1 == 0) break;
LAB_1437a2ea1:
    lVar11 = lVar11 + 2;
  }
  iVar4 = 0;
LAB_1437a2ecc:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar10 = (undefined7)((ulonglong)plVar3 >> 8);
  if (iVar4 == 0) {
    if (*(char *)param_1[2] == '\0') {
      FUN_145c15ca6(*param_1,&local_38,&local_28,0);
      *(undefined1 *)param_1[2] = 1;
      uVar9 = CONCAT71(uVar10,1);
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_38);
    iVar4 = *(int *)((undefined8 *)param_1[1] + 1);
    iVar6 = 0;
    if (iVar4 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = *(undefined2 **)param_1[1];
      iVar6 = iVar4 + -1;
    }
    local_40 = 0xffffffff;
    local_48 = 0;
    iVar4 = FUN_1447ee042(&local_38,puVar7,iVar6,1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar9 = CONCAT71(uVar10,1);
    if (iVar4 == 0) {
      uVar9 = 0;
      FUN_145c15ca6(*param_1,&local_38,&local_28,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1437a2fb0 FUN_1437a2fb0 body=80 status=ok
// SIG undefined FUN_1437a2fb0(void)

undefined8 FUN_1437a2fb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uVar1 = (*(code *)*param_1)(param_1[1]);
  *(undefined1 *)param_1[2] = uVar1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_1[2] >> 8),*(undefined1 *)param_1[2]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a3002 FUN_1437a3002 body=332 status=ok
// SIG undefined FUN_1437a3002(void)

undefined8 FUN_1437a3002(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  lVar3 = *param_1;
  cVar5 = FUN_140aece94(lVar3,param_2,0);
  if (cVar5 == '\0') goto LAB_1437a311f;
  cVar5 = (**(code **)(*param_2 + 0x2b8))(param_2);
  cVar6 = (**(code **)(*param_2 + 0x2c0))(param_2);
  lVar1 = lVar3 + 0x6b0;
  lVar7 = lVar3 + 0x660;
  if (cVar6 == '\0' && cVar5 == '\0') {
    lVar7 = lVar3 + 0x5c0;
    lVar1 = lVar3 + 0x610;
  }
  cVar5 = (**(code **)(*param_2 + 0x2b0))(param_2);
  if (cVar5 == '\0') goto LAB_1437a311f;
  cVar5 = (**(code **)(*param_2 + 0x2b0))(param_2);
  if ((cVar5 == '\0') || ((char)param_2[5] != '\x01')) {
    cVar5 = (**(code **)(*param_2 + 0x2b0))(param_2);
    if ((cVar5 != '\0') && ((char)param_2[5] == '\x02')) {
      (**(code **)(*param_2 + 0x310))(param_2,local_38);
      goto LAB_1437a30fd;
    }
  }
  else {
    (**(code **)(*param_2 + 0x310))(param_2,local_38);
    lVar7 = lVar1;
LAB_1437a30fd:
    FUN_144869592(lVar7,local_3c,local_38,0);
  }
  plVar4 = (longlong *)param_1[1];
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_145c15c22(plVar4,iVar2);
  }
  *(longlong **)(*plVar4 + (longlong)iVar2 * 8) = param_2;
LAB_1437a311f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a3150 FUN_1437a3150 body=114 status=ok
// SIG undefined FUN_1437a3150(void)

undefined8 FUN_1437a3150(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    FUN_140056680(local_38,&DAT_149dfb77a);
    FUN_147db750e(uVar2,lVar1,local_38,uVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a31c4 FUN_1437a31c4 body=25 status=ok
// SIG undefined FUN_1437a31c4(void)

undefined1 FUN_1437a31c4(undefined8 *param_1,undefined8 *param_2)

{
  FUN_14379cd62(*param_1,*param_2,1);
  return 1;
}



// FUNCTION 1437a31de FUN_1437a31de body=225 status=ok
// SIG undefined FUN_1437a31de(void)

ulonglong FUN_1437a31de(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)*param_2;
  (**(code **)(*plVar3 + 0x2d0))(plVar3,&local_30);
  iVar5 = (int)((longlong *)*param_1)[1];
  if (local_28 == iVar5) {
    bVar8 = true;
    if (1 < local_28) {
      lVar6 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_30 + lVar6);
        uVar4 = (uint)uVar1;
        uVar2 = *(ushort *)(*(longlong *)*param_1 + lVar6);
        uVar7 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1437a3248;
          }
          iVar5 = uVar4 - uVar7;
          goto LAB_1437a3282;
        }
        if (uVar1 == 0) break;
LAB_1437a3248:
        lVar6 = lVar6 + 2;
      }
      iVar5 = 0;
LAB_1437a3282:
      bVar8 = iVar5 == 0;
    }
  }
  else {
    bVar8 = iVar5 + local_28 == 1;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (bVar8) {
    *(longlong **)param_1[1] = plVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (CONCAT71((int7)((ulonglong)&local_30 >> 8),bVar8) ^ 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a32da FUN_1437a32da body=12 status=ok
// SIG undefined FUN_1437a32da(void)

void FUN_1437a32da(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437a32e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437a32e6 FUN_1437a32e6 body=57 status=ok
// SIG undefined FUN_1437a32e6(void)

undefined8 * FUN_1437a32e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ab18cf0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437a3346 FUN_1437a3346 body=282 status=ok
// SIG undefined FUN_1437a3346(void)

undefined8 * FUN_1437a3346(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437a331f);
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



// FUNCTION 1437a3460 FUN_1437a3460 body=99 status=ok
// SIG undefined FUN_1437a3460(void)

void FUN_1437a3460(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14379e46a(param_1[0x15],param_1 + 0x16);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437a34b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1437a34c3 FUN_1437a34c3 body=2201 status=ok
// SIG undefined FUN_1437a34c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a34c3(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb10b28 = (ulonglong)uVar3;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0a580,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0b8d0,1,&PTR_FUN_14ab0b8a0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0bc20,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0bf80,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0c310,1,0);
  FUN_14640ef5a();
  atexit((_func_5014 *)&LAB_143797560);
  FUN_14640efee();
  atexit((_func_5014 *)&LAB_14379756c);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0c840,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0cbb0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0d010,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0d6c0,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0da90,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ab0e9a0;
  local_68 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0e9c0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ab0f340;
  local_68 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab0f360,1,0);
  ppuStack_60 = &PTR_FUN_14ab10220;
  local_68 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab10260,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab106e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab10a60,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab10e90,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab111f0,1,0);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e35db0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14ab18ac0;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14170bbaa(&DAT_14cb10ff0,L"wp.Runtime.DumpDataLayers",L"Dumps data layers to the log",
                &local_50);
  if (local_48 == 0) {
LAB_1437a3871:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1437a3871;
  }
  atexit(FUN_14379829d);
  FUN_140056680(&DAT_14cb11000,L"wp.Runtime.ToggleDataLayerActivation");
  atexit((_func_5014 *)&LAB_1437982e2);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14ab18b30;
  puVar5 = DAT_14cb11000;
  if (DAT_14cb11008 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb11010,puVar5,L"Toggles DataLayers active state. Args [DataLayerNames]",
                &local_50);
  if (local_48 == 0) {
LAB_1437a3983:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1437a3983;
  }
  atexit(FUN_1437982f3);
  FUN_140056680(&DAT_14cb11020,L"wp.Runtime.SetDataLayerRuntimeState");
  atexit((_func_5014 *)&LAB_143798338);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14ab18ba0;
  puVar5 = DAT_14cb11020;
  if (DAT_14cb11028 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb11030,puVar5,
                L"Sets Runtime DataLayers state. Args [State = Unloaded, Loaded, Activated] [DataLayerNames]"
                ,&local_50);
  if (local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_1437a3a9c;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1437a3a9c:
  atexit(FUN_143798349);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab13270,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab137e0,1,0);
  FUN_1446f470e(&DAT_14cb111d8,L"OnDataLayerRuntimeStateChanged",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab14d10,1,&PTR_FUN_14ab14ce0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14cb11264);
  if (cVar2 == '\0') {
    _DAT_14cb11264 = 0;
    uRam000000014cb1126c = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab162c0,2,&PTR_FUN_14ab16270);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab16ae0,1,0);
  local_50 = "SMInstance";
  local_48 = 10;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb11300 = (ulonglong)uVar3;
  local_68._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb11308,L"wp.Runtime.HLOD.ForceDisableShadows",&DAT_14cb11318,
                L"Force disable CastShadow flag on World Partition HLOD actors");
  atexit(FUN_14379e5ae);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb11320,L"wp.gbx.Runtime.HLOD.DiscardInstancesLowerThan",&local_50,
                L"Do not load HLODInstancedStaticMeshComponent if Instances are lower than this number."
               );
  atexit(FUN_14379e5f3);
  local_68 = CONCAT44(local_68._4_4_,0x40);
  FUN_14153156c(&DAT_14cb11338,L"wp.gbx.Runtime.HLOD.ApplyGlobalDistanceCulling",&DAT_14cb11348,
                L"If true, apply Global Cull Distance Pairs to HLOD ISMs. Requires level re-load when changed."
               );
  atexit(FUN_14379e638);
  FUN_145d0cfec(&DAT_14cb11350,&DAT_14ab16dea,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab17ad0,3,&PTR_FUN_14ab17a80);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437a3d60 FUN_1437a3d60 body=1425 status=ok
// SIG undefined FUN_1437a3d60(void)

longlong * FUN_1437a3d60(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong *local_88;
  uint *local_80;
  int local_74;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_147dbe0be();
  if ((*param_1 != 0) && ((int)param_1[1] != -1)) {
    if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
  if (DAT_14cae8b20 == 0) {
    local_a0 = &local_50;
    local_50 = (code *)&LAB_14355090c;
    local_90 = FUN_14081d0ea;
    local_98 = FUN_14081d0ea;
    local_a8 = &LAB_147b8e16d;
    local_b0 = (code *)&LAB_140810a38;
    local_b8 = L"Engine";
    local_c0 = 0x800000000;
    local_c8 = 0x10000000;
    local_d0 = 8;
    local_d8 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar5 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_a0 = &local_50;
    local_50 = FUN_1449e2820;
    local_90 = FUN_14081d0ea;
    local_98 = FUN_14081d0ea;
    local_a8 = &LAB_1468c5283;
    local_b0 = FUN_142809da0;
    local_b8 = L"Engine";
    local_c0 = 0x400000000;
    local_c8 = 0x10000000;
    local_d0 = 8;
    local_d8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar6 = *(longlong *)(param_2 + 0x20);
  if (lVar6 == 0) {
    lVar17 = 0;
  }
  else {
    iVar12 = *(int *)(lVar5 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar12) ||
         (lVar17 = lVar6,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar12 * 8) !=
         lVar5 + 0x30)) {
        lVar17 = 0;
      }
    } while ((lVar17 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
  }
  plVar4 = (longlong *)FUN_1405d1c86(lVar17);
  iVar12 = -1;
  if ((plVar4 != (longlong *)0x0) &&
     ((plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2a0))(plVar4), plVar4 != (longlong *)0x0 &&
      (lVar5 = (**(code **)(*plVar4 + 8))(plVar4), lVar5 != 0)))) {
    lVar6 = FUN_14019a59a();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      local_58 = *(longlong *)(param_2 + 0x18);
      uVar7 = FUN_1447210f0(param_2);
      uVar7 = FUN_1448a6d9c(uVar7);
      plVar4 = (longlong *)FUN_147dbe988(uVar7,lVar5);
      if ((longlong)(int)plVar4[1] != 0) {
        plVar14 = (longlong *)*plVar4;
        local_60 = plVar14 + (int)plVar4[1];
        iVar12 = -1;
        lVar5 = 0;
        local_70 = param_2;
        local_68 = param_1;
        do {
          lVar6 = *plVar14;
          iVar2 = *(int *)(lVar6 + 0x268);
          puVar19 = (uint *)(lVar6 + 0x250);
          local_88 = plVar14;
          if (iVar2 == 0) {
            uVar15 = 1;
            uVar16 = 0;
            iVar3 = 0;
            iVar21 = 0;
          }
          else {
            puVar8 = *(uint **)(lVar6 + 0x260);
            if (*(uint **)(lVar6 + 0x260) == (uint *)0x0) {
              puVar8 = puVar19;
            }
            uVar20 = *puVar8;
            if (uVar20 == 0) {
              iVar3 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar3 = iVar2 + -1;
              }
              uVar16 = 0;
              uVar15 = (ulonglong)(uint)(iVar3 >> 5);
              if (iVar3 >> 5 < 1) {
                uVar15 = uVar16;
              }
              iVar21 = 0;
              do {
                if (uVar15 == uVar16) goto LAB_1437a410d;
                iVar21 = iVar21 + 0x20;
                uVar20 = puVar8[uVar16 + 1];
                uVar16 = uVar16 + 1;
              } while (uVar20 == 0);
            }
            else {
              uVar16 = 0;
              iVar21 = 0;
            }
            uVar15 = (ulonglong)(-uVar20 & uVar20);
            uVar1 = uVar15 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar3 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar3) {
              iVar3 = iVar2;
            }
          }
          if (iVar3 != iVar2) {
            uVar20 = 0xffffffff;
            local_80 = puVar19;
            local_74 = iVar12;
            do {
              lVar17 = *(longlong *)(*(longlong *)(lVar6 + 0x240) + (longlong)iVar3 * 0x10);
              if (lVar17 != 0) {
                lVar18 = FUN_145921d12();
                plVar14 = local_88;
                puVar19 = local_80;
                if (((*(int *)(lVar18 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar18 + 0x38) * 8) == lVar18 + 0x30)) &&
                   ((longlong)*(int *)(lVar17 + 0x2b0) != 0)) {
                  lVar18 = (longlong)*(int *)(lVar17 + 0x2b0) << 3;
                  lVar13 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar17 + 0x2a8) + lVar13 * 8) == local_58) {
                      iVar12 = (int)lVar13;
                      if (iVar12 != -1) {
                        lVar5 = lVar17;
                        if (DAT_14c950c29 != '\0') {
                          FUN_1456cec3c(lVar17);
                        }
                        goto LAB_1437a410d;
                      }
                      break;
                    }
                    lVar13 = lVar13 + 1;
                    lVar18 = lVar18 + -8;
                  } while (lVar18 != 0);
                }
              }
              uVar20 = uVar20 & ~(uint)uVar15;
              puVar8 = *(uint **)(lVar6 + 0x260);
              if (*(uint **)(lVar6 + 0x260) == (uint *)0x0) {
                puVar8 = puVar19;
              }
              iVar12 = *(int *)(lVar6 + 0x268);
              iVar3 = (int)uVar16;
              lVar17 = (longlong)iVar3;
              uVar11 = puVar8[lVar17] & uVar20;
              if (uVar11 == 0) {
                iVar9 = iVar12 + 0x1e;
                if (-1 < iVar12 + -1) {
                  iVar9 = iVar12 + -1;
                }
                iVar9 = iVar9 >> 5;
                iVar21 = iVar21 + 0x20;
                iVar10 = iVar9;
                if (iVar9 < iVar3) {
                  iVar10 = iVar3;
                }
                puVar19 = local_80;
                if (iVar3 < iVar9) {
                  lVar18 = 0;
                  do {
                    uVar11 = puVar8[lVar17 + lVar18 + 1];
                    if (uVar11 != 0) {
                      uVar16 = (ulonglong)(iVar3 + (int)lVar18 + 1);
                      uVar20 = 0xffffffff;
                      goto LAB_1437a4045;
                    }
                    iVar21 = iVar21 + 0x20;
                    lVar18 = lVar18 + 1;
                  } while (iVar10 - lVar17 != lVar18);
                  uVar20 = 0xffffffff;
                  iVar3 = iVar10;
                }
                uVar16 = (ulonglong)(iVar3 + 1);
                iVar3 = iVar12;
              }
              else {
LAB_1437a4045:
                uVar15 = (ulonglong)(-uVar11 & uVar11);
                uVar1 = uVar15 * 2 + 1;
                lVar17 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                iVar3 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                if (iVar12 <= iVar3) {
                  iVar3 = iVar12;
                }
              }
              plVar14 = local_88;
              iVar12 = local_74;
            } while (iVar3 != iVar2);
          }
LAB_1437a410d:
          param_1 = local_68;
          param_2 = local_70;
        } while ((lVar5 == 0 || iVar12 == -1) && (plVar14 = plVar14 + 1, plVar14 != local_60));
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
        goto LAB_1437a3eab;
      }
    }
  }
  lVar5 = 0;
LAB_1437a3eab:
  *param_1 = lVar5;
  *(int *)(param_1 + 1) = iVar12;
  FUN_147dbe23c(param_2,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1437a42f7 FUN_1437a42f7 body=55 status=ok
// SIG undefined FUN_1437a42f7(void)

void FUN_1437a42f7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11570 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11570 = FUN_14171c317(FUN_1464113f1,uVar1,L"EHLODLayerType");
  }
  return;
}



// FUNCTION 1437a432e FUN_1437a432e body=69 status=ok
// SIG undefined FUN_1437a432e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a432e(void)

{
  _DAT_14cb115e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a4370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb115e8,1);
  return;
}



// FUNCTION 1437a4373 FUN_1437a4373 body=69 status=ok
// SIG undefined FUN_1437a4373(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a4373(void)

{
  _DAT_14cb115f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a43b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11600,1);
  return;
}



// FUNCTION 1437a43b8 FUN_1437a43b8 body=69 status=ok
// SIG undefined FUN_1437a43b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a43b8(void)

{
  _DAT_14cb11610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a43fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11618,1);
  return;
}



// FUNCTION 1437a43fd FUN_1437a43fd body=69 status=ok
// SIG undefined FUN_1437a43fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a43fd(void)

{
  _DAT_14cb11628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a443f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11630,1);
  return;
}



// FUNCTION 1437a4442 FUN_1437a4442 body=69 status=ok
// SIG undefined FUN_1437a4442(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a4442(void)

{
  _DAT_14cb11640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a4484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11648,1);
  return;
}



// FUNCTION 1437a4487 FUN_1437a4487 body=69 status=ok
// SIG undefined FUN_1437a4487(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a4487(void)

{
  _DAT_14cb11658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a44c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11660,1);
  return;
}



// FUNCTION 1437a44cc FUN_1437a44cc body=69 status=ok
// SIG undefined FUN_1437a44cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a44cc(void)

{
  _DAT_14cb11670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a450e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11678,1);
  return;
}



// FUNCTION 1437a4511 FUN_1437a4511 body=292 status=ok
// SIG undefined FUN_1437a4511(void)

void FUN_1437a4511(void)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  int local_40;
  void *local_38;
  int local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14133d72e(&local_38,0x30,1,0x200000);
  _Src = local_38;
  local_50 = (void *)0x0;
  lVar2 = (longlong)local_30;
  local_48 = local_30;
  if (lVar2 == 0) {
    local_44 = 0;
    iVar3 = 0;
    local_40 = local_28;
  }
  else {
    FUN_14010590e(&local_50,local_30,0);
    memcpy(local_50,_Src,lVar2 << 3);
    local_40 = local_28;
    iVar3 = local_30;
  }
  do {
    if (local_40 == iVar3) {
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (((*(byte *)(*(longlong *)((longlong)local_50 + (longlong)local_40 * 8) + 0x152) | 2) == 3)
       && (lVar2 = FUN_1448a6d9c(), lVar2 != 0)) {
      uVar1 = FUN_141332984(lVar2);
      *(undefined1 *)(lVar2 + 0xd0) = uVar1;
    }
    lVar2 = (longlong)local_40;
    do {
      lVar2 = lVar2 + 1;
      local_40 = (int)lVar2;
      if (local_48 <= lVar2) break;
    } while (*(longlong *)((longlong)local_50 + lVar2 * 8) == 0);
  } while( true );
}



// FUNCTION 1437a4636 FUN_1437a4636 body=69 status=ok
// SIG undefined FUN_1437a4636(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a4636(void)

{
  _DAT_14cb116a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a4678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb116a8,1);
  return;
}



// FUNCTION 1437a468c FUN_1437a468c body=3122 status=ok
// SIG undefined FUN_1437a468c(void)

ulonglong FUN_1437a468c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  void *_Src;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined1 uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  longlong lVar23;
  double *pdVar24;
  ulonglong uVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  ulonglong uVar37;
  int iVar38;
  int iVar39;
  ulonglong uVar40;
  int iVar41;
  longlong lVar42;
  bool bVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  ulonglong local_100;
  int local_f4;
  longlong local_f0;
  code *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar40 = 0;
  if (*(char *)(param_3 + 0x394) == '\x01') {
    uVar35 = 0;
    if (param_3 != 0) {
      uVar35 = *(uint *)(param_3 + 0xc);
      if ((int)uVar35 < DAT_14c9647dc) {
        lVar42 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8);
      }
      else {
        lVar42 = 0;
      }
      uVar40 = (ulonglong)*(uint *)(lVar42 + 0x10);
      if (*(uint *)(lVar42 + 0x10) == 0) {
        LOCK();
        iVar20 = DAT_14c964868 + 1;
        UNLOCK();
        uVar19 = DAT_14c964868 + 1;
        bVar43 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar20;
        if (bVar43) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar19);
        }
        LOCK();
        uVar27 = *(uint *)(lVar42 + 0x10);
        bVar43 = uVar27 == 0;
        if (bVar43) {
          *(uint *)(lVar42 + 0x10) = uVar19;
          uVar27 = 0;
        }
        UNLOCK();
        if (bVar43) {
          uVar27 = uVar19;
        }
        uVar40 = (ulonglong)uVar27;
      }
    }
    plVar1 = (longlong *)(param_1 + 0x80);
    iVar39 = (int)uVar40;
    uVar19 = (uint)(uVar40 >> 0xd) ^ uVar35 - iVar39;
    uVar27 = uVar19 << 8 ^ (-0x61c88647 - iVar39) - uVar19;
    uVar30 = uVar27 >> 0xd ^ (iVar39 - uVar19) - uVar27;
    uVar36 = uVar30 >> 0xc ^ (uVar19 - uVar27) - uVar30;
    uVar19 = uVar36 << 0x10 ^ (uVar27 - uVar30) - uVar36;
    uVar27 = uVar19 >> 5 ^ (uVar30 - uVar36) - uVar19;
    uVar30 = uVar27 >> 3 ^ (uVar36 - uVar19) - uVar27;
    uVar19 = uVar30 << 10 ^ (uVar19 - uVar27) - uVar30;
    uVar19 = uVar19 >> 0xf ^ uVar27 - (uVar30 + uVar19);
    iVar41 = *(int *)(param_1 + 0x88);
    iVar20 = *(int *)(param_1 + 0xb4);
    if (iVar41 != iVar20) {
      lVar42 = param_1 + 0xb8;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar42 = *(longlong *)(param_1 + 0xc0);
      }
      iVar21 = *(int *)(lVar42 + (ulonglong)(*(int *)(param_1 + 200) - 1U & uVar19) * 4);
      if (iVar21 != -1) {
        lVar42 = *plVar1;
        do {
          lVar31 = (longlong)iVar21 * 0x50;
          lVar33 = lVar42 + lVar31;
          if ((*(uint *)(lVar42 + lVar31) == uVar35) && (*(int *)(lVar42 + 4 + lVar31) == iVar39)) {
            if (lVar33 != 0) goto LAB_1437a4863;
            break;
          }
          iVar21 = *(int *)(lVar33 + 0x48);
        } while (iVar21 != -1);
      }
    }
    if (iVar20 == 0) {
      *(int *)(param_1 + 0x88) = iVar41 + 1;
      if (*(int *)(param_1 + 0x8c) == iVar41) {
        FUN_1406fba42(plVar1,iVar41);
      }
      iVar20 = *(int *)(param_1 + 0xa8);
      if (iVar20 == 0) {
        iVar21 = -1;
      }
      else {
        iVar21 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar21 = iVar20 + -1;
        }
        iVar21 = iVar21 >> 5;
      }
      lVar42 = param_1 + 0x90;
      iVar28 = iVar20 + 1;
      iVar38 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar38 = iVar20;
      }
      iVar38 = iVar38 >> 5;
      if (iVar38 == iVar21) {
        *(int *)(param_1 + 0xa8) = iVar28;
      }
      else {
        if (*(int *)(param_1 + 0xac) <= iVar20) {
          uVar27 = iVar20 + 0x20;
          local_100 = (ulonglong)uVar27;
          iVar21 = iVar20;
          local_f4 = iVar38;
          local_f0 = lVar42;
          if (uVar27 < 0xa0) {
            iVar28 = 0x80;
          }
          else {
            uVar27 = uVar27 >> 5;
            local_100 = (ulonglong)uVar27;
            if (*(int *)(param_1 + 0xac) + 0x1fU < 0xa0) {
              uVar30 = 4;
              if (4 < uVar27) {
                uVar30 = uVar27;
              }
            }
            else {
              uVar30 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
            }
            uVar25 = (ulonglong)(uVar30 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar27 = (uint)(uVar25 + 0xf);
                if (uVar30 < 0x1ffd) {
                  uVar25 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar25 + 0xf >> 4]];
                }
                else {
                  uVar29 = (ulonglong)(uVar27 & 0xfffffff0);
                  if (uVar29 < 0x7ff1) {
                    bVar26 = (&DAT_14c841e00)[uVar27 >> 4];
                    uVar34 = 0x32;
                    if (0x32 < bVar26) {
                      uVar34 = (ulonglong)bVar26;
                    }
                    uVar37 = 0x32 - (ulonglong)bVar26;
                    do {
                      uVar25 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar37 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar37 & 0xffffffff] & 0xf) == 0) goto LAB_1437a502d;
                      lVar42 = uVar34 + 1 + uVar37;
                      uVar37 = uVar37 - 1;
                    } while (lVar42 != 0x33);
                  }
                  uVar25 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar25 = (ulonglong)DAT_14c841df8;
                  }
                  uVar25 = -uVar25 & (uVar29 + uVar25) - 1;
                }
              }
              else {
                uVar25 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar25,0);
                iVar21 = *(int *)(param_1 + 0xa8);
              }
            }
LAB_1437a502d:
            iVar38 = (int)(uVar25 >> 2);
            iVar28 = -0x20;
            if ((int)local_100 <= iVar38) {
              iVar28 = iVar38 << 5;
            }
          }
          *(int *)(param_1 + 0xac) = iVar28;
          FUN_1446efbd8(local_f0,iVar21);
          iVar28 = *(int *)(param_1 + 0xa8) + 1;
          lVar42 = local_f0;
          iVar38 = local_f4;
        }
        iVar21 = iVar28 + 0x1f;
        if (-1 < iVar28) {
          iVar21 = iVar28;
        }
        *(int *)(param_1 + 0xa8) = iVar28;
        if (iVar28 % 0x20 != 0) {
          lVar33 = *(longlong *)(param_1 + 0xa0);
          if (*(longlong *)(param_1 + 0xa0) == 0) {
            lVar33 = lVar42;
          }
          bVar26 = -(char)(iVar28 % 0x20);
          *(uint *)(lVar33 + (longlong)(iVar21 >> 5) * 4) =
               (uint)(*(int *)(lVar33 + (longlong)(iVar21 >> 5) * 4) << (bVar26 & 0x1f)) >>
               (bVar26 & 0x1f);
        }
      }
      lVar33 = (longlong)iVar41;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar42 = *(longlong *)(param_1 + 0xa0);
      }
      bVar26 = (byte)iVar20 & 0x1f;
      puVar2 = (uint *)(lVar42 + (longlong)iVar38 * 4);
      *puVar2 = *puVar2 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
    }
    else {
      iVar41 = *(int *)(param_1 + 0xb0);
      lVar33 = (longlong)iVar41;
      iVar21 = *(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar33 * 0x50);
      *(int *)(param_1 + 0xb0) = iVar21;
      *(int *)(param_1 + 0xb4) = iVar20 + -1;
      if (iVar20 + -1 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar21 * 0x50) = 0xffffffff;
      }
    }
    lVar42 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar42 = *(longlong *)(param_1 + 0xa0);
    }
    iVar20 = iVar41 + 0x1f;
    if (-1 < iVar41) {
      iVar20 = iVar41;
    }
    puVar2 = (uint *)(lVar42 + (longlong)(iVar20 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar41 & 0x1f);
    iVar20 = 1;
    lVar42 = *(longlong *)(param_1 + 0x80);
    lVar33 = lVar33 * 0x50;
    _Src = (void *)(lVar42 + lVar33);
    *(ulonglong *)(lVar42 + lVar33) = (ulonglong)uVar35 | uVar40 << 0x20;
    *(undefined8 *)(lVar42 + 8 + lVar33) = 0xffffffffffffffff;
    puVar22 = (undefined8 *)(lVar42 + 0x10 + lVar33);
    *puVar22 = 0;
    puVar22[1] = 0;
    puVar22 = (undefined8 *)(lVar42 + 0x20 + lVar33);
    *puVar22 = 0;
    puVar22[1] = 0;
    puVar22 = (undefined8 *)(lVar42 + 0x30 + lVar33);
    *puVar22 = 0;
    puVar22[1] = 0;
    *(undefined8 *)(lVar42 + 0x40 + lVar33) = 0;
    *(undefined4 *)(lVar42 + 0x48 + lVar33) = 0xffffffff;
    uVar27 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4);
    if ((uVar27 != 0) && (uVar27 != 1)) {
      lVar42 = param_1 + 0xb8;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar42 = *(longlong *)(param_1 + 0xc0);
      }
      iVar21 = *(int *)(lVar42 + (ulonglong)(*(int *)(param_1 + 200) - 1U & uVar19) * 4);
      if (iVar21 != -1) {
        lVar42 = *plVar1;
        do {
          lVar33 = (longlong)iVar21 * 0x50;
          if ((*(uint *)(lVar42 + lVar33) == uVar35) && (*(int *)(lVar42 + 4 + lVar33) == iVar39)) {
            memmove((void *)(lVar42 + lVar33),_Src,0x48);
            FUN_147dc3298(plVar1);
            goto LAB_1437a4e3a;
          }
          iVar21 = *(int *)(lVar42 + lVar33 + 0x48);
        } while (iVar21 != -1);
      }
    }
    if (3 < uVar27) {
      uVar25 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
      lVar42 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar42 == 0; lVar42 = lVar42 + -1) {
        }
      }
      iVar20 = 1 << ((byte)lVar42 & 0x1f);
    }
    if (((int)uVar27 < 1) || (iVar20 <= *(int *)(param_1 + 200))) {
      uVar19 = *(int *)(param_1 + 200) - 1U & uVar19;
      *(uint *)((longlong)_Src + 0x4c) = uVar19;
      lVar42 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar42 = param_1 + 0xb8;
      }
      *(undefined4 *)((longlong)_Src + 0x48) =
           *(undefined4 *)
            (lVar42 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)(int)uVar19) * 4);
      lVar42 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar42 = param_1 + 0xb8;
      }
      *(int *)(lVar42 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)(int)uVar19) * 4) =
           iVar41;
    }
    else {
      *(int *)(param_1 + 200) = iVar20;
      FUN_1417fbb3a(plVar1);
    }
LAB_1437a4e3a:
    lVar33 = *plVar1 + (longlong)iVar41 * 0x50;
LAB_1437a4863:
    uVar35 = *(uint *)(lVar33 + 8);
    if ((uVar35 == 0xffffffff) || (uVar35 + 1 < DAT_14c75b13c)) {
      *(undefined4 *)(lVar33 + 0xc) = *DAT_14cb11638;
      puVar22 = (undefined8 *)(**(code **)(*(longlong *)(param_2 + 0x28) + 0x50))(param_2 + 0x28);
      uVar11 = puVar22[1];
      uVar12 = puVar22[2];
      uVar13 = puVar22[3];
      uVar14 = puVar22[4];
      uVar15 = puVar22[5];
      *(undefined8 *)(lVar33 + 0x10) = *puVar22;
      *(undefined8 *)(lVar33 + 0x18) = uVar11;
      *(undefined8 *)(lVar33 + 0x20) = uVar12;
      *(undefined8 *)(lVar33 + 0x28) = uVar13;
      *(undefined8 *)(lVar33 + 0x30) = uVar14;
      *(undefined8 *)(lVar33 + 0x38) = uVar15;
      *(undefined8 *)(lVar33 + 0x40) = puVar22[6];
      lVar42 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x78))(param_2 + 0x28);
      if ((*(longlong *)(lVar42 + 0x30) != 0) &&
         ((lVar42 = *(longlong *)(*(longlong *)(lVar42 + 0x30) + 0x2b0), lVar42 != 0 &&
          (lVar42 = *(longlong *)(lVar42 + 0x3f0), lVar42 != 0)))) {
        if (DAT_14cb10130 == 0) {
          local_120 = &local_e8;
          local_e8 = FUN_140754f84;
          local_110 = FUN_14081d0ea;
          local_118 = FUN_14081d0ea;
          local_128 = &LAB_147da9a76;
          local_130 = FUN_1409f3105;
          local_138 = L"Engine";
          local_140 = 0;
          local_148 = 0x10000000;
          local_150 = 8;
          local_158 = 0x990;
          FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
        }
        lVar31 = DAT_14cb10130;
        if (DAT_14c951858 == 0) {
          local_120 = &local_e8;
          local_e8 = FUN_1449e2820;
          local_110 = FUN_14081d0ea;
          local_118 = FUN_14081d0ea;
          local_128 = &LAB_1468c5283;
          local_130 = FUN_142809da0;
          local_138 = L"Engine";
          local_140 = 0x400000000;
          local_148 = 0x10000000;
          local_150 = 8;
          local_158 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar23 = *(longlong *)(lVar42 + 0x20);
        if (lVar23 == 0) {
          lVar32 = 0;
        }
        else {
          iVar20 = *(int *)(lVar31 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < iVar20) ||
               (lVar32 = lVar23,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)iVar20 * 8) !=
               lVar31 + 0x30)) {
              lVar32 = 0;
            }
          } while ((lVar32 == 0) && (lVar23 = *(longlong *)(lVar23 + 0x20), lVar23 != 0));
        }
        if (*(longlong *)(lVar42 + 0x40) != lVar32) {
          if (*(char *)(lVar33 + 0x40) == '\0') {
            dVar47 = 0.0;
            dVar44 = 0.0;
            dVar46 = 0.0;
            uVar18 = 0;
            dVar4 = 0.0;
            dVar52 = 0.0;
            dVar54 = 0.0;
          }
          else {
            pdVar24 = (double *)&DAT_14c846480;
            if (*(char *)(lVar42 + 0xb0) != '\0') {
              pdVar24 = (double *)(lVar42 + 0x50);
            }
            dVar16 = *pdVar24;
            dVar17 = pdVar24[1];
            dVar46 = pdVar24[2];
            dVar49 = pdVar24[8];
            dVar56 = pdVar24[9];
            dVar5 = pdVar24[10];
            dVar54 = dVar46 + dVar46;
            dVar50 = dVar16 + dVar16;
            dVar51 = dVar17 + dVar17;
            dVar44 = pdVar24[3];
            dVar47 = pdVar24[3];
            dVar52 = dVar51 * dVar44;
            auVar53._0_8_ = (dVar52 + *pdVar24 * dVar54) * dVar5;
            auVar53._8_8_ = (dVar50 * dVar47 + *pdVar24 * dVar50) * pdVar24[0xb];
            dVar44 = dVar54 * dVar44;
            dVar47 = dVar50 * dVar47;
            dVar4 = (1.0 - (dVar54 * dVar46 + dVar51 * dVar17)) * dVar49;
            dVar46 = (1.0 - (dVar54 * dVar46 + dVar50 * dVar16)) * dVar56;
            dVar45 = (dVar44 + dVar51 * dVar16) * dVar49;
            dVar48 = (dVar47 + dVar54 * dVar17) * dVar56;
            dVar49 = (*pdVar24 * dVar54 - dVar52) * dVar49;
            auVar57._0_8_ = dVar56 * (dVar51 * dVar16 - dVar44);
            auVar57._8_8_ = dVar5 * (dVar54 * dVar17 - dVar47);
            auVar53 = blendpd(auVar53,auVar57,2);
            auVar58._8_4_ = SUB84(dVar46,0);
            auVar58._0_8_ = dVar4;
            auVar58._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            auVar58 = blendpd(auVar57,auVar58,2);
            dVar56 = (*(double *)(lVar33 + 0x10) + *(double *)(lVar33 + 0x28)) * 0.5;
            dVar6 = (*(double *)(lVar33 + 0x18) + *(double *)(lVar33 + 0x30)) * 0.5;
            dVar55 = (*(double *)(lVar33 + 0x20) + *(double *)(lVar33 + 0x38)) * 0.5;
            dVar7 = (*(double *)(lVar33 + 0x28) - *(double *)(lVar33 + 0x10)) * 0.5;
            dVar8 = (*(double *)(lVar33 + 0x30) - *(double *)(lVar33 + 0x18)) * 0.5;
            dVar46 = (*(double *)(lVar33 + 0x38) - *(double *)(lVar33 + 0x20)) * 0.5;
            dVar9 = dVar55 * auVar53._0_8_ + dVar6 * auVar58._0_8_ + dVar56 * dVar4 + pdVar24[4];
            dVar10 = dVar55 * auVar53._8_8_ + dVar6 * auVar58._8_8_ + dVar56 * dVar45 + pdVar24[5];
            dVar47 = ABS(dVar46 * auVar53._0_8_) + ABS(auVar58._0_8_ * dVar8) + ABS(dVar7 * dVar4);
            dVar44 = ABS(dVar46 * auVar53._8_8_) + ABS(auVar58._8_8_ * dVar8) + ABS(dVar7 * dVar45);
            dVar52 = dVar9 - dVar47;
            dVar54 = dVar10 - dVar44;
            dVar47 = dVar47 + dVar9;
            dVar44 = dVar44 + dVar10;
            dVar5 = (1.0 - (dVar50 * dVar16 + dVar51 * dVar17)) * dVar5;
            dVar56 = dVar55 * dVar5 + dVar6 * dVar48 + dVar56 * dVar49 + pdVar24[6];
            dVar4 = ABS(dVar5 * dVar46) + ABS(dVar48 * dVar8) + ABS(dVar49 * dVar7);
            dVar46 = dVar56 - dVar4;
            dVar4 = dVar4 + dVar56;
            uVar18 = 1;
          }
          *(double *)(lVar33 + 0x10) = dVar52;
          *(double *)(lVar33 + 0x18) = dVar54;
          *(double *)(lVar33 + 0x20) = dVar46;
          auVar3._8_4_ = SUB84(dVar44,0);
          auVar3._0_8_ = dVar47;
          auVar3._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
          *(undefined1 (*) [16])(lVar33 + 0x28) = auVar3;
          *(double *)(lVar33 + 0x38) = dVar4;
          *(undefined1 *)(lVar33 + 0x40) = uVar18;
        }
      }
    }
    else if (*(int *)(lVar33 + 0xc) != 0) {
      *(int *)(lVar33 + 0xc) = *(int *)(lVar33 + 0xc) + -1;
    }
    uVar40 = CONCAT71((int7)(uVar40 >> 8),*(int *)(lVar33 + 0xc) != 0);
    *(uint *)(lVar33 + 8) = DAT_14c75b13c;
  }
  if ((local_e0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar40;
}



// FUNCTION 1437a52c0 FUN_1437a52c0 body=2223 status=ok
// SIG undefined FUN_1437a52c0(void)

void FUN_1437a52c0(void *param_1,ulonglong *param_2,undefined8 *param_3,byte *param_4)

{
  code **ppcVar1;
  ulonglong uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  code **ppcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  void *pvVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  code *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  longlong *local_130;
  void *local_128;
  byte *local_120;
  uint local_114;
  undefined8 *local_110;
  uint *local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong local_f0;
  void *local_e8;
  ulonglong local_e0;
  longlong local_d8;
  byte *local_d0;
  undefined8 *local_c8;
  code *local_c0;
  void **local_b8;
  byte local_b0 [8];
  undefined8 local_a8;
  undefined4 local_a0;
  code *local_98 [8];
  code **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_110 = param_3;
  if (*param_4 == 0) {
    local_120 = param_4;
    if (DAT_14cb10130 == 0) {
      local_150 = local_98;
      local_98[0] = FUN_140754f84;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_14081d0ea;
      local_158 = &LAB_147da9a76;
      local_160 = FUN_1409f3105;
      local_168 = L"Engine";
      local_170 = 0;
      local_178 = 0x10000000;
      local_180 = 8;
      local_188 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar14 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_150 = local_98;
      local_98[0] = FUN_1449e2820;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_14081d0ea;
      local_158 = &LAB_1468c5283;
      local_160 = FUN_142809da0;
      local_168 = L"Engine";
      local_170 = 0x400000000;
      local_178 = 0x10000000;
      local_180 = 8;
      local_188 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar22 = *(longlong *)((longlong)param_1 + 0x20);
    if (lVar22 == 0) {
      lVar24 = 0;
    }
    else {
      iVar12 = *(int *)(lVar14 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar12) ||
           (lVar24 = lVar22,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar12 * 8)
           != lVar14 + 0x30)) {
          lVar24 = 0;
        }
      } while ((lVar24 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
    }
    FUN_14005bb20(local_b0,lVar24);
    if ((*local_120 & 1) == 0) {
      local_120 = local_b0;
    }
  }
  else {
    local_b0[0] = 0;
    local_b0[1] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_120 = param_4;
  }
  local_128 = param_1;
  if ((longlong)*(int *)((longlong)param_1 + 0x140) != 0) {
    plVar16 = *(longlong **)((longlong)param_1 + 0x138);
    plVar20 = plVar16 + *(int *)((longlong)param_1 + 0x140);
    do {
      lVar14 = (longlong)*(int *)(*plVar16 + 0x28);
      if (lVar14 != 0) {
        lVar22 = *(longlong *)(*plVar16 + 0x20);
        lVar24 = 0;
        do {
          pcVar3 = *(code **)(lVar22 + lVar24);
          cVar4 = FUN_147dcc338(pcVar3,local_120);
          if (cVar4 != '\0') {
            local_e8 = (void *)CONCAT71(local_e8._1_7_,cVar4 != '\x01');
            local_98[0] = pcVar3;
            (*(code *)*local_110)(local_110[1],local_98,&local_e8);
          }
          lVar24 = lVar24 + 8;
        } while (lVar14 * 8 != lVar24);
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar20);
  }
  if ((longlong)(int)param_2[1] != 0) {
    uVar23 = *param_2;
    local_100 = (longlong)(int)param_2[1] * 0x160 + uVar23;
    plVar20 = (longlong *)((longlong)local_128 + 0xe8);
    local_108 = (uint *)((longlong)local_128 + 0xf8);
    local_f0 = (longlong)local_128 + 0x120;
    pvVar15 = local_128;
    local_130 = plVar20;
    do {
      local_58 = (code **)0x0;
      local_50 = 0x800000000;
      if (*(char *)(uVar23 + 0x60) == '\x01') {
        iVar12 = *(int *)((longlong)pvVar15 + 0x110);
        if (iVar12 == 0) {
          uVar17 = 1;
          uVar21 = 0;
          iVar13 = 0;
          iVar9 = 0;
        }
        else {
          puVar7 = *(uint **)((longlong)pvVar15 + 0x108);
          if (*(uint **)((longlong)pvVar15 + 0x108) == (uint *)0x0) {
            puVar7 = local_108;
          }
          uVar19 = *puVar7;
          if (uVar19 == 0) {
            iVar9 = iVar12 + 0x1e;
            if (-1 < iVar12 + -1) {
              iVar9 = iVar12 + -1;
            }
            uVar21 = 0;
            uVar17 = (ulonglong)(uint)(iVar9 >> 5);
            if (iVar9 >> 5 < 1) {
              uVar17 = uVar21;
            }
            iVar13 = 0;
            do {
              if (uVar17 == uVar21) goto LAB_1437a55db;
              iVar13 = iVar13 + 0x20;
              uVar19 = puVar7[uVar21 + 1];
              uVar21 = uVar21 + 1;
            } while (uVar19 == 0);
          }
          else {
            uVar21 = 0;
            iVar13 = 0;
          }
          uVar17 = (ulonglong)(-uVar19 & uVar19);
          uVar2 = uVar17 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar9) {
            iVar9 = iVar12;
          }
        }
        if (iVar9 != iVar12) {
          local_f8 = uVar23 + 0xa0;
          uVar19 = 0xffffffff;
          iVar5 = iVar12;
          do {
            uVar2 = local_50;
            lVar14 = *plVar20;
            if (*(int *)(uVar23 + 0x70) != *(int *)(uVar23 + 0x9c)) {
              lVar22 = *(longlong *)(lVar14 + (longlong)iVar9 * 0x20);
              uVar6 = (uint)((ulonglong)lVar22 >> 0x10);
              uVar18 = (uint)lVar22 & 0xffff;
              lVar24 = *(longlong *)(uVar23 + 0xa8);
              if (*(longlong *)(uVar23 + 0xa8) == 0) {
                lVar24 = local_f8;
              }
              iVar10 = *(int *)(lVar24 + (ulonglong)
                                         (*(int *)(uVar23 + 0xb0) - 1U &
                                         (int)((ulonglong)lVar22 >> 0x20) +
                                         ((uint)lVar22 << 0x10 | uVar18) +
                                         (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar18 >> 4)) * 4);
              if (iVar10 != -1) {
                do {
                  if (*(longlong *)(*(longlong *)(uVar23 + 0x68) + (longlong)iVar10 * 0x10) ==
                      lVar22) goto LAB_1437a58a2;
                  iVar10 = *(int *)((longlong)iVar10 * 0x10 + *(longlong *)(uVar23 + 0x68) + 8);
                } while (iVar10 != -1);
              }
            }
            lVar22 = (longlong)(int)local_50;
            uVar6 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar6);
            if (local_50._4_4_ < uVar6) {
              local_114 = uVar19;
              FUN_146276acc(local_98,uVar2 & 0xffffffff);
              plVar20 = local_130;
              uVar19 = local_114;
            }
            ppcVar8 = local_58;
            if (local_58 == (code **)0x0) {
              ppcVar8 = local_98;
            }
            ppcVar8[lVar22] = *(code **)(lVar14 + (longlong)iVar9 * 0x20);
            iVar5 = *(int *)((longlong)local_128 + 0x110);
LAB_1437a58a2:
            uVar19 = uVar19 & ~(uint)uVar17;
            puVar7 = *(uint **)((longlong)local_128 + 0x108);
            if (*(uint **)((longlong)local_128 + 0x108) == (uint *)0x0) {
              puVar7 = local_108;
            }
            iVar9 = (int)uVar21;
            lVar14 = (longlong)iVar9;
            uVar6 = puVar7[lVar14] & uVar19;
            if (uVar6 == 0) {
              iVar10 = iVar5 + 0x1e;
              if (-1 < iVar5 + -1) {
                iVar10 = iVar5 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar13 = iVar13 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar9) {
                iVar11 = iVar9;
              }
              if (iVar9 < iVar10) {
                lVar22 = 0;
                do {
                  uVar6 = puVar7[lVar14 + lVar22 + 1];
                  if (uVar6 != 0) {
                    uVar21 = (ulonglong)(iVar9 + (int)lVar22 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_1437a5922;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar22 = lVar22 + 1;
                } while (iVar11 - lVar14 != lVar22);
                uVar19 = 0xffffffff;
                iVar9 = iVar11;
              }
              uVar21 = (ulonglong)(iVar9 + 1);
              plVar20 = local_130;
              iVar9 = iVar5;
            }
            else {
LAB_1437a5922:
              uVar17 = (ulonglong)(-uVar6 & uVar6);
              uVar2 = uVar17 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
              if (iVar5 <= iVar9) {
                iVar9 = iVar5;
              }
            }
            pvVar15 = local_128;
          } while (iVar9 != iVar12);
        }
LAB_1437a55db:
        ppcVar8 = local_58;
        if (local_58 == (code **)0x0) {
          ppcVar8 = local_98;
        }
        if ((longlong)(int)local_50 != 0) {
          ppcVar1 = ppcVar8 + (int)local_50;
          do {
            if (*(int *)((longlong)pvVar15 + 0xf0) != *(int *)((longlong)pvVar15 + 0x11c)) {
              pcVar3 = *ppcVar8;
              uVar19 = (uint)((ulonglong)pcVar3 >> 0x10);
              uVar6 = (uint)pcVar3 & 0xffff;
              lVar14 = *(longlong *)((longlong)pvVar15 + 0x128);
              if (*(longlong *)((longlong)pvVar15 + 0x128) == 0) {
                lVar14 = local_f0;
              }
              iVar12 = *(int *)(lVar14 + (ulonglong)
                                         (*(int *)((longlong)pvVar15 + 0x130) - 1U &
                                         (int)((ulonglong)pcVar3 >> 0x20) +
                                         ((uint)pcVar3 << 0x10 | uVar6) +
                                         (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar6 >> 4)) * 4);
              if (iVar12 != -1) {
                do {
                  lVar14 = *plVar20 + (longlong)iVar12 * 0x20;
                  if (*(code **)(*plVar20 + (longlong)iVar12 * 0x20) == pcVar3) {
                    if (((lVar14 + 8U & 0xfffffffffffffff7) != 0) &&
                       (iVar12 = *(int *)(lVar14 + 0x10), (longlong)iVar12 != 0)) {
                      lVar14 = *(longlong *)(lVar14 + 8);
                      lVar22 = 0;
                      do {
                        local_d8 = *(longlong *)(lVar14 + lVar22);
                        local_d0 = local_120;
                        local_c8 = local_110;
                        local_b8 = &local_e8;
                        local_c0 = FUN_1437ae064;
                        local_e8 = pvVar15;
                        local_e0 = uVar23;
                        FUN_147dbfd3c(uVar23,(float)*(int *)(local_d8 + 8),&local_c0);
                        lVar22 = lVar22 + 8;
                        plVar20 = local_130;
                      } while ((longlong)iVar12 * 8 != lVar22);
                    }
                    break;
                  }
                  iVar12 = *(int *)(lVar14 + 0x18);
                } while (iVar12 != -1);
              }
            }
            ppcVar8 = ppcVar8 + 1;
          } while (ppcVar8 != ppcVar1);
        }
        if (local_58 != (code **)0x0) {
          FUN_1400020a8();
          plVar20 = local_130;
        }
      }
      else if (*(char *)(uVar23 + 0x60) == '\0') {
        if (*(int *)(uVar23 + 0x70) == *(int *)(uVar23 + 0x9c)) {
          FUN_147dbfbf6(plVar20,local_98);
          plVar20 = local_130;
        }
        else {
          FUN_144aa2048(uVar23 + 0x68,&local_e8);
          pvVar15 = local_e8;
          iVar12 = (int)local_e0;
          lVar14 = (longlong)(int)local_e0;
          local_50 = CONCAT44(local_50._4_4_,(int)local_e0);
          if ((int)local_e0 == 0 && local_50._4_4_ == 0) {
            local_50 = CONCAT44(8,(int)local_e0);
          }
          else {
            FUN_147dc7942(local_98,local_e0 & 0xffffffff);
            if (iVar12 != 0) {
              ppcVar8 = local_58;
              if (local_58 == (code **)0x0) {
                ppcVar8 = local_98;
              }
              memcpy(ppcVar8,pvVar15,lVar14 << 3);
            }
          }
          pvVar15 = local_128;
          plVar20 = local_130;
          if (local_e8 != (void *)0x0) {
            FUN_1400020a8();
            pvVar15 = local_128;
            plVar20 = local_130;
          }
        }
        goto LAB_1437a55db;
      }
      uVar23 = uVar23 + 0x160;
    } while (uVar23 != local_100);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437a5b70 FUN_1437a5b70 body=2671 status=ok
// SIG undefined FUN_1437a5b70(void)

undefined8 * FUN_1437a5b70(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong *plVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined2 *puVar19;
  uint uVar20;
  bool bVar21;
  undefined *puVar22;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  wchar_t *local_298;
  code *local_290;
  undefined1 *local_288;
  undefined ***local_280;
  code *local_278;
  code *local_270;
  undefined1 local_262;
  undefined1 local_261;
  longlong local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  longlong local_248;
  longlong local_240;
  ulonglong local_238;
  longlong *local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  undefined8 *local_210;
  longlong local_208;
  longlong local_200;
  undefined2 *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  longlong local_178;
  undefined **local_170;
  longlong *local_168;
  longlong *local_118;
  longlong local_f8;
  undefined1 local_e0 [88];
  undefined1 local_88;
  undefined7 uStack_87;
  int iStack_80;
  undefined5 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if ((((*(longlong *)(param_3 + 8) != 0) && (*(longlong *)(param_3 + 0x28) != 0)) &&
      (((*(int *)(param_3 + 100) != 0 || *(int *)(param_3 + 0x60) != 0) ||
       *(int *)(param_3 + 0x68) != 0) || *(int *)(param_3 + 0x6c) != 0)) &&
     (*(char *)(param_3 + 0x100) != '\0')) {
    ppuVar1 = (undefined **)(param_3 + 0x60);
    uVar11 = FUN_1447addd0(ppuVar1,0x10);
    iVar12 = FUN_147dc79a6(param_1 + 0x98,uVar11,ppuVar1);
    if ((iVar12 == -1) &&
       (lVar13 = FUN_147dbf664(param_1,*(undefined8 *)(param_3 + 0x28)), lVar13 != 0)) {
      local_220 = lVar13;
      if ((*(longlong *)(param_3 + 0x38) == 0) || (*(longlong *)(param_3 + 0x58) == 0)) {
        local_240 = 0;
      }
      else {
        local_240 = FUN_147dbf664(param_1);
        if (local_240 == 0) goto LAB_1437a5bd5;
      }
      if (DAT_14cb10130 == 0) {
        local_280 = &local_170;
        local_170 = (undefined **)FUN_140754f84;
        local_270 = FUN_14081d0ea;
        local_278 = FUN_14081d0ea;
        local_288 = &LAB_147da9a76;
        local_290 = FUN_1409f3105;
        local_298 = L"Engine";
        local_2a0 = 0;
        local_2a8 = 0x10000000;
        local_2b0 = CONCAT44(local_2b0._4_4_,8);
        local_2b8 = CONCAT44(local_2b8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      lVar13 = DAT_14cb10130;
      if (DAT_14c951858 == 0) {
        local_280 = &local_170;
        local_170 = (undefined **)FUN_1449e2820;
        local_270 = FUN_14081d0ea;
        local_278 = FUN_14081d0ea;
        local_288 = &LAB_1468c5283;
        local_290 = FUN_142809da0;
        local_298 = L"Engine";
        local_2a0 = 0x400000000;
        local_2a8 = 0x10000000;
        local_2b0 = CONCAT44(local_2b0._4_4_,8);
        local_2b8 = CONCAT44(local_2b8._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar15 = *(longlong *)(param_1 + 0x20);
      if (lVar15 == 0) {
        lVar17 = 0;
      }
      else {
        iVar12 = *(int *)(lVar13 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < iVar12) ||
             (lVar17 = lVar15,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar12 * 8) !=
             lVar13 + 0x30)) {
            lVar17 = 0;
          }
        } while ((lVar17 == 0) && (lVar15 = *(longlong *)(lVar15 + 0x20), lVar15 != 0));
      }
      local_178 = FUN_1459e906c();
      if ((local_178 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_178);
      }
      lVar13 = FUN_147dcd31e(&local_178,param_1,lVar17);
      if (lVar13 == 0) {
        puVar22 = (undefined *)0x0;
        uVar14 = 0;
      }
      else {
        local_208 = param_3 + 0x30;
        local_228 = param_3 + 0x110;
        local_210 = (undefined8 *)(param_3 + 0xd0);
        local_218 = param_3 + 0x70;
        local_230 = (longlong *)(lVar13 + 0x1c0);
        bVar21 = false;
        bVar6 = false;
        local_24c = 0;
        local_250 = 0;
        local_254 = 0;
        local_258 = 0;
        lVar15 = local_220;
        lVar17 = local_240;
        local_248 = lVar13;
        do {
          lVar13 = lVar15;
          if (bVar6) {
            lVar13 = lVar17;
          }
          if (lVar13 != 0) {
            local_261 = *(undefined1 *)(lVar13 + 0x30);
            local_262 = *(undefined1 *)(lVar13 + 0x31);
            local_190 = 0;
            uStack_188 = 0;
            local_1a0 = 0;
            uStack_198 = 0;
            local_1b0 = 0;
            uStack_1a8 = 0;
            local_180 = 0;
            local_1c8 = *(longlong *)(lVar13 + 0x28);
            local_1b8 = *(undefined4 *)(lVar13 + 0x3c);
            local_1d8 = *ppuVar1;
            uStack_1d0 = *(undefined8 *)(param_3 + 0x68);
            local_1c0 = local_1c8;
            FUN_147454cd2(&local_170);
            uVar14 = FUN_147454d28(&local_170,&local_1c8);
            FUN_1402ac1b3(uVar14,&local_1d8);
            FUN_1414fe9a8(local_e0,&uStack_87);
            local_200 = local_208;
            if (bVar6 == false) {
              local_1e8._0_4_ = (undefined4)uStack_87;
              local_258 = (undefined4)local_1e8;
              local_1e8._4_4_ = (undefined4)(CONCAT17((undefined1)iStack_80,uStack_87) >> 0x20);
              local_254 = local_1e8._4_4_;
              uStack_1e0._0_4_ = (undefined4)CONCAT53(uStack_7c,iStack_80._1_3_);
              local_250 = (undefined4)uStack_1e0;
              uStack_1e0._4_4_ = (undefined4)((uint5)uStack_7c >> 8);
              local_24c = uStack_1e0._4_4_;
              local_200 = param_3;
            }
            local_1f8 = (undefined2 *)0x0;
            uStack_1f0 = 0;
            local_1e8 = CONCAT17((undefined1)iStack_80,uStack_87);
            uStack_1e0 = CONCAT53(uStack_7c,iStack_80._1_3_);
            FUN_1407c869a(&local_1e8,&local_1f8,0);
            puVar19 = &DAT_149dfb77a;
            if ((int)uStack_1f0 != 0) {
              puVar19 = local_1f8;
            }
            FUN_140002266(&local_88,L"InjectedCell_%s",puVar19);
            if (local_1f8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_238 = FUN_145b53634();
            uVar14 = FUN_140c71830();
            local_2b0 = local_248;
            local_2b8 = local_228;
            lVar15 = FUN_147dccefc(param_1,uVar14,local_238,&local_88);
            if (lVar15 == 0) {
LAB_1437a6359:
              *param_2 = 0;
              param_2[1] = 0;
              bVar6 = false;
            }
            else {
              local_260 = lVar15;
              lVar15 = FUN_140c71830();
              if ((*(int *)(*(longlong *)(local_260 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(local_260 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar15 + 0x38) * 8) != lVar15 + 0x30)) goto LAB_1437a6359;
              *(undefined1 *)(local_260 + 0x58) = local_262;
              *(undefined1 *)(local_260 + 0x5a) = local_261;
              *(bool *)(local_260 + 0x59) = bVar6;
              *(undefined8 *)(local_260 + 0x7c) = local_1e8;
              *(undefined8 *)(local_260 + 0x84) = uStack_1e0;
              uVar20 = 0;
              uVar18 = iStack_80 - 1;
              if (iStack_80 == 0) {
                uVar18 = 0;
              }
              if (0 < (int)uVar18) {
                puVar19 = &DAT_149dfb77a;
                if (iStack_80 != 0) {
                  puVar19 = (undefined2 *)CONCAT71(uStack_87,local_88);
                }
                local_238 = (ulonglong)uVar18;
                lVar15 = 0;
                uVar20 = 0;
                do {
                  uVar16 = ((uint)(ushort)puVar19[lVar15] +
                           (uint)(0x19 < (ushort)puVar19[lVar15] - 0x61) * 0x20) - 0x20;
                  uVar20 = uVar20 >> 8 ^
                           *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar20 ^ uVar16) & 0xff) * 4);
                  uVar20 = uVar20 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar20 & 0xff ^ uVar16 >> 8 & 0xff) * 4);
                  lVar15 = lVar15 + 1;
                } while (uVar18 != (uint)lVar15);
              }
              *(float *)(local_260 + 0x6c) =
                   (float)(uVar20 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0;
              *(float *)(local_260 + 0x70) =
                   (float)(uVar20 * -0x4b9b4d07 + 0x9d6f2492 >> 9 | 0x3f800000) + -1.0;
              *(float *)(local_260 + 0x74) =
                   (float)(uVar20 * 0x1c3c718d + 0xf50d3da5 >> 9 | 0x3f800000) + -1.0;
              *(undefined4 *)(local_260 + 0x78) = 0x3f800000;
              if (bVar6 != false) {
                *(undefined4 *)(local_260 + 0x8c) = local_258;
                *(undefined4 *)(local_260 + 0x90) = local_254;
                *(undefined4 *)(local_260 + 0x94) = local_250;
                *(undefined4 *)(local_260 + 0x98) = local_24c;
              }
              lVar15 = *(longlong *)(local_260 + 0xa8);
              FUN_140474144(&local_1f8,&local_88,local_228);
              if (local_1f8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_210 != (undefined8 *)(lVar15 + 0x88)) {
                *(undefined8 *)(lVar15 + 0xb8) = local_210[6];
                uVar14 = *local_210;
                uVar2 = local_210[1];
                uVar3 = local_210[2];
                uVar4 = local_210[3];
                uVar5 = local_210[5];
                *(undefined8 *)(lVar15 + 0xa8) = local_210[4];
                *(undefined8 *)(lVar15 + 0xb0) = uVar5;
                *(undefined8 *)(lVar15 + 0x98) = uVar3;
                *(undefined8 *)(lVar15 + 0xa0) = uVar4;
                *(undefined8 *)(lVar15 + 0x88) = uVar14;
                *(undefined8 *)(lVar15 + 0x90) = uVar2;
                *(undefined1 *)(lVar15 + 0xc0) = 1;
              }
              *(undefined8 *)(lVar15 + 0x80) = local_210[6];
              uVar14 = *local_210;
              uVar2 = local_210[1];
              uVar3 = local_210[2];
              uVar4 = local_210[3];
              uVar5 = local_210[5];
              *(undefined8 *)(lVar15 + 0x70) = local_210[4];
              *(undefined8 *)(lVar15 + 0x78) = uVar5;
              *(undefined8 *)(lVar15 + 0x60) = uVar3;
              *(undefined8 *)(lVar15 + 0x68) = uVar4;
              *(undefined8 *)(lVar15 + 0x50) = uVar14;
              *(undefined8 *)(lVar15 + 0x58) = uVar2;
              *(undefined4 *)(lVar15 + 0xd4) = 0x7fffffff;
              *(undefined4 *)(lVar15 + 0xd0) = *(undefined4 *)(param_3 + 0x108);
              *(undefined8 *)(lVar15 + 200) = *(undefined8 *)(lVar13 + 0x28);
              *(undefined1 *)(lVar15 + 0xe0) = 0;
              cVar10 = FUN_1437b1b2e(local_260,local_200);
              if (cVar10 == '\0') goto LAB_1437a6359;
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(local_260);
              }
              uVar8 = uStack_1a8;
              lVar13 = (longlong)(int)uStack_1a8;
              uVar20 = (int)uStack_1a8 + 1;
              uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar20);
              if (uStack_1a8._4_4_ < uVar20) {
                FUN_147dc641c(&local_1b0,uVar8 & 0xffffffff);
              }
              *(longlong *)(local_1b0 + lVar13 * 8) = local_260;
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(local_260);
              }
              iVar12 = *(int *)(local_248 + 0x1c8);
              lVar13 = (longlong)iVar12;
              *(uint *)(local_248 + 0x1c8) = iVar12 + 1U;
              if (*(uint *)(local_248 + 0x1cc) < iVar12 + 1U) {
                FUN_147dc7a1a(local_230,iVar12);
              }
              lVar15 = *local_230;
              *(undefined4 *)(lVar15 + 8 + lVar13 * 0x48) = local_1b8;
              *(longlong *)(lVar15 + lVar13 * 0x48) = local_1c0;
              *(undefined8 *)(lVar15 + 0x10 + lVar13 * 0x48) = 0;
              *(longlong *)(lVar15 + 0x10 + lVar13 * 0x48) = local_1b0;
              local_1b0 = 0;
              *(int *)(lVar15 + 0x18 + lVar13 * 0x48) = (int)uStack_1a8;
              *(uint *)(lVar15 + 0x1c + lVar13 * 0x48) = uStack_1a8._4_4_;
              uStack_1a8 = 0;
              *(undefined8 *)(lVar15 + 0x20 + lVar13 * 0x48) = 0;
              *(undefined8 *)(lVar15 + 0x20 + lVar13 * 0x48) = local_1a0;
              local_1a0 = 0;
              *(undefined4 *)(lVar15 + 0x28 + lVar13 * 0x48) = (undefined4)uStack_198;
              *(undefined4 *)(lVar15 + 0x2c + lVar13 * 0x48) = uStack_198._4_4_;
              uStack_198 = 0;
              *(undefined8 *)(lVar15 + 0x30 + lVar13 * 0x48) = local_190;
              local_190 = 0;
              *(undefined8 *)(lVar15 + 0x38 + lVar13 * 0x48) = uStack_188;
              uStack_188 = 0;
              *(undefined8 *)(lVar15 + 0x40 + lVar13 * 0x48) = local_180;
              local_180 = 0;
              bVar6 = true;
            }
            if (CONCAT71(uStack_87,local_88) != 0) {
              FUN_1400020a8();
            }
            plVar9 = local_118;
            local_170 = &PTR__purecall_149e35f70;
            if (local_118 != (longlong *)0x0) {
              if (*local_118 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(plVar9);
            }
            lVar13 = local_f8;
            if (local_f8 != 0) {
              if (*(longlong *)(local_f8 + 0x40) != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(lVar13);
            }
            FUN_1478b003e(&local_1c0);
            lVar15 = local_220;
            lVar17 = local_240;
            if (!bVar6) goto LAB_1437a6488;
          }
          lVar13 = local_248;
          bVar6 = true;
          bVar7 = !bVar21;
          bVar21 = true;
        } while (bVar7);
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          uVar14 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar14 = 0;
        }
        FUN_147dc0220(uVar14,local_248);
        local_1c0 = lVar13;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(local_248);
        }
        local_168 = &local_1c0;
        local_170 = ppuVar1;
        FUN_147dc7aae(param_1 + 0x98,&local_88);
        puVar22 = *ppuVar1;
        uVar14 = *(undefined8 *)(param_3 + 0x68);
      }
      *param_2 = puVar22;
      param_2[1] = uVar14;
LAB_1437a6488:
      if ((local_70 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_1437a5bd5:
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_2d8);
}



// FUNCTION 1437a65e0 FUN_1437a65e0 body=69 status=ok
// SIG undefined FUN_1437a65e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a65e0(void)

{
  _DAT_14cb11788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a6622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11790,1);
  return;
}



// FUNCTION 1437a6625 FUN_1437a6625 body=69 status=ok
// SIG undefined FUN_1437a6625(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a6625(void)

{
  _DAT_14cb117a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a6667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb117a8,1);
  return;
}



// FUNCTION 1437a666a FUN_1437a666a body=69 status=ok
// SIG undefined FUN_1437a666a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a666a(void)

{
  _DAT_14cb117b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a66ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb117b8,1);
  return;
}



// FUNCTION 1437a66b0 FUN_1437a66b0 body=8900 status=ok
// SIG undefined FUN_1437a66b0(void)

/* WARNING: Removing unreachable block (ram,0x0001437a8536) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1437a66b0(double param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  double dVar3;
  byte bVar4;
  code **ppcVar5;
  double dVar6;
  code ***pppcVar7;
  code **ppcVar8;
  char *pcVar9;
  code *pcVar10;
  code *****pppppcVar11;
  char cVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  int *piVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  longlong *plVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *plVar28;
  code ***pppcVar29;
  double *pdVar30;
  ulonglong uVar31;
  longlong lVar32;
  code ****ppppcVar33;
  code ****ppppcVar34;
  bool bVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  code ***pppcVar42;
  double dVar43;
  double dVar44;
  code ***pppcVar45;
  double dVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auStack_538 [32];
  code ****local_518;
  code ****local_510;
  undefined8 *local_508;
  undefined4 local_500;
  int local_4ec;
  uint local_4e8;
  undefined4 local_4e4;
  code ***local_4e0;
  double local_4d8;
  double local_4d0;
  code ***local_4c8;
  code ***local_4c0;
  int local_4b4;
  ulonglong local_4b0;
  ulonglong local_4a8;
  ulonglong local_4a0;
  undefined8 *local_498;
  char *local_490;
  int local_484;
  longlong *local_480;
  ulonglong local_478;
  double local_470;
  double local_468;
  longlong *local_460;
  double local_458;
  undefined8 *local_450;
  longlong local_448;
  ulonglong local_440;
  longlong local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  longlong *local_408;
  longlong local_400;
  longlong *local_3f8;
  longlong *local_3f0;
  code ***local_3e8;
  code ***local_3e0;
  float **local_3d8;
  float *local_3d0;
  double *local_3c8;
  double *local_3c0;
  double *local_3b8;
  code ***local_3b0;
  double local_3a8;
  code ***local_3a0;
  double local_398;
  undefined1 local_390;
  undefined4 local_38f;
  undefined3 uStack_38b;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  code ***local_358;
  undefined8 *local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  char local_318;
  code *local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8;
  double *local_2d8;
  uint uStack_2d0;
  uint uStack_2cc;
  code *local_2c8;
  undefined8 *local_2c0;
  code ***local_2b8;
  undefined4 local_2b0;
  float local_2ac;
  undefined8 local_2a8;
  double local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  code ***local_288;
  double dStack_280;
  double local_278;
  double local_270;
  code ****local_268;
  undefined8 uStack_260;
  code ****local_258;
  char *local_250;
  double local_248;
  code *local_230;
  code ****local_228;
  undefined8 local_220;
  double local_218;
  double local_210;
  undefined8 local_208;
  undefined1 local_200;
  code ***local_1f8;
  undefined8 uStack_1f0;
  code ****local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  code ****local_1c8;
  code ****local_1c0;
  undefined4 local_1b8;
  undefined3 uStack_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  double local_198;
  undefined8 uStack_190;
  uint local_188 [4];
  uint *local_178;
  uint local_170;
  undefined8 local_16c;
  int local_164;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_538;
  if ((*(uint *)((longlong)param_1 + 8) & 0x10) == 0) {
    lVar32 = *(longlong *)((longlong)param_1 + 0x20);
  }
  else {
    lVar32 = 0;
  }
  plVar14 = (longlong *)FUN_147dc04d2(lVar32);
  uVar18 = 0;
  if ((int)plVar14[1] == 0) goto LAB_1437a675a;
  local_148 = (code ***)&local_198;
  local_178 = (uint *)0x0;
  local_170 = 0;
  local_198 = 0.0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_2c0 = &local_148;
  local_2c8 = FUN_1437ae680;
  FUN_147dbf406(param_1);
  uVar18 = (ulonglong)((int)uStack_190 != local_164);
  if ((int)uStack_190 != local_164) {
    puVar22 = &DAT_14c846480;
    if (*(char *)(lVar32 + 0xb0) != '\0') {
      puVar22 = (undefined8 *)(lVar32 + 0x50);
    }
    fVar54 = (float)(double)puVar22[5];
    local_148 = (code ***)*puVar22;
    uStack_140 = puVar22[1];
    dVar3 = (double)puVar22[4];
    local_138 = puVar22[2];
    uStack_130 = puVar22[3];
    local_460 = plVar14;
    FUN_1448052ee(&local_148,&local_230);
    dVar40 = (double)local_228 * 0.017453292519943295;
    fVar36 = sinf((float)dVar40);
    local_1b0 = cosf((float)dVar40);
    local_1a8 = -fVar36;
    fVar52 = 1.0 / (local_1b0 * local_1b0 + fVar36 * fVar36);
    fVar49 = local_1b0 * fVar52;
    fVar48 = fVar36 * fVar52;
    fVar52 = fVar52 * local_1a8;
    fVar50 = -(float)dVar3;
    fVar53 = fVar50 * fVar52 - fVar49 * fVar54;
    fVar51 = fVar50 * fVar49 - fVar54 * fVar48;
    dVar40 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x38);
    fVar50 = (float)*(double *)(param_2 + 0x38);
    fVar39 = (float)*(double *)(param_2 + 0x30);
    dVar41 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x30);
    local_2d8 = (double *)0x0;
    uStack_2d0 = 1;
    uStack_2cc = 0;
    local_1ac = fVar36;
    local_1a4 = local_1b0;
    local_1a0 = (float)dVar3;
    local_19c = fVar54;
    FUN_14489624a(&local_2d8,0);
    uVar13 = uStack_2d0;
    *local_2d8 = (double)(fVar39 * fVar49 + fVar50 * fVar48 + fVar51);
    local_2d8[1] = (double)(fVar39 * fVar52 + fVar49 * fVar50 + fVar53);
    dVar3 = *(double *)(param_2 + 0x38);
    fVar36 = (float)(*(double *)(param_2 + 0x30) + dVar41);
    lVar27 = (longlong)(int)uStack_2d0;
    uStack_2d0 = uStack_2d0 + 1;
    if (uStack_2cc < uStack_2d0) {
      FUN_14489624a(&local_2d8,uVar13);
    }
    uVar13 = uStack_2d0;
    local_2d8[lVar27 * 2] = (double)(fVar36 * fVar49 + (float)(dVar3 + 0.0) * fVar48 + fVar51);
    local_2d8[lVar27 * 2 + 1] = (double)(fVar36 * fVar52 + fVar49 * (float)(dVar3 + 0.0) + fVar53);
    fVar36 = (float)(*(double *)(param_2 + 0x38) + dVar40);
    fVar50 = (float)(dVar41 + *(double *)(param_2 + 0x30));
    lVar27 = (longlong)(int)uStack_2d0;
    uStack_2d0 = uStack_2d0 + 1;
    if (uStack_2cc < uStack_2d0) {
      FUN_14489624a(&local_2d8,uVar13);
    }
    uVar13 = uStack_2d0;
    local_2d8[lVar27 * 2] = (double)(fVar50 * fVar49 + fVar36 * fVar48 + fVar51);
    local_2d8[lVar27 * 2 + 1] = (double)(fVar50 * fVar52 + fVar49 * fVar36 + fVar53);
    dVar3 = *(double *)(param_2 + 0x30);
    fVar36 = (float)(dVar40 + *(double *)(param_2 + 0x38));
    lVar27 = (longlong)(int)uStack_2d0;
    uStack_2d0 = uStack_2d0 + 1;
    if (uStack_2cc < uStack_2d0) {
      FUN_14489624a(&local_2d8,uVar13);
    }
    local_2d8[lVar27 * 2] = (double)(fVar51 + (float)(dVar3 + 0.0) * fVar49 + fVar48 * fVar36);
    local_2d8[lVar27 * 2 + 1] = (double)(fVar53 + fVar52 * (float)(dVar3 + 0.0) + fVar49 * fVar36);
    local_2f8 = 0.0;
    dStack_2f0 = 0.0;
    local_308 = (code *)0x0;
    dStack_300 = 0.0;
    local_2e8 = 0;
    if ((longlong)(int)uStack_2d0 != 0) {
      lVar27 = 0;
      local_2e8 = 0;
      bVar35 = false;
      do {
        if (bVar35) {
          dVar3 = *(double *)((longlong)local_2d8 + lVar27);
          uVar37 = SUB84(local_308,0);
          uVar38 = (undefined4)((ulonglong)local_308 >> 0x20);
          if (dVar3 <= (double)local_308) {
            uVar37 = SUB84(dVar3,0);
            uVar38 = (undefined4)((ulonglong)dVar3 >> 0x20);
          }
          local_308 = (code *)CONCAT44(uVar38,uVar37);
          dVar40 = *(double *)((longlong)(local_2d8 + 1) + lVar27);
          if (dVar40 <= dStack_300) {
            dStack_300 = dVar40;
          }
          if (local_2f8 <= dVar3) {
            local_2f8 = dVar3;
          }
          uVar37 = SUB84(dStack_2f0,0);
          uVar38 = (int)((ulonglong)dStack_2f0 >> 0x20);
          if (dStack_2f0 <= dVar40) {
            uVar37 = SUB84(dVar40,0);
            uVar38 = (int)((ulonglong)dVar40 >> 0x20);
          }
          dStack_2f0 = (double)CONCAT44(uVar38,uVar37);
        }
        else {
          pdVar30 = (double *)((longlong)local_2d8 + lVar27);
          local_2f8 = *pdVar30;
          dStack_2f0 = pdVar30[1];
          local_308 = (code *)*pdVar30;
          dStack_300 = pdVar30[1];
          local_2e8 = 1;
        }
        lVar27 = lVar27 + 0x10;
        bVar35 = true;
      } while ((longlong)(int)uStack_2d0 * 0x10 != lVar27);
    }
    iVar19 = (int)uStack_190 - local_164;
    local_4a0 = 1;
    if (param_2[2] == '\0') {
      iVar19 = 1;
    }
    if (iVar19 < 2) {
      fVar36 = 0.0;
    }
    else {
      fVar36 = 20.0;
    }
    local_470 = *(double *)(param_2 + 8);
    local_328 = 0.0;
    dStack_320 = 0.0;
    local_338 = 0.0;
    dStack_330 = 0.0;
    local_348 = 0.0;
    dStack_340 = 0.0;
    local_318 = '\0';
    uVar31 = 0;
    local_4ec = 0;
    uVar13 = 0;
    if (local_170 != 0) {
      puVar15 = local_178;
      if (local_178 == (uint *)0x0) {
        puVar15 = local_188;
      }
      uVar13 = *puVar15;
      if (uVar13 == 0) {
        iVar20 = local_170 + 0x1e;
        if (-1 < (int)(local_170 - 1)) {
          iVar20 = local_170 - 1;
        }
        uVar31 = 0;
        uVar26 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar26 = uVar31;
        }
        local_4ec = 0;
        do {
          if (uVar26 == uVar31) goto LAB_1437a6dcd;
          local_4ec = local_4ec + 0x20;
          uVar13 = puVar15[uVar31 + 1];
          uVar31 = uVar31 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar31 = 0;
        local_4ec = 0;
      }
      local_4a0 = (ulonglong)(-uVar13 & uVar13);
      uVar26 = local_4a0 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      uVar13 = (local_4ec - ((uint)lVar27 ^ 0x3f)) + 0x3e;
      if ((int)local_170 <= (int)uVar13) {
        uVar13 = local_170;
      }
    }
    if (uVar13 != local_170) {
      dVar3 = *(double *)(param_2 + 0x20) - *(double *)(param_2 + 0x10);
      local_418 = (double)((float)(*(double *)(param_2 + 0x18) - local_470) / (float)iVar19);
      dVar40 = local_418;
      if (dVar3 <= local_418) {
        dVar40 = dVar3;
      }
      local_468 = (double)(float)(dVar40 - (double)fVar36) * 0.5;
      local_420 = (double)(fVar36 * 0.5);
      local_410 = *(double *)(param_2 + 0x10) + 0.0 + local_468 + local_420;
      local_428 = local_468 + local_410;
      local_430 = local_410 - local_468;
      local_480 = (longlong *)(param_2 + 200);
      local_4e8 = 0xffffffff;
      local_4b4 = 0;
      local_4b0 = 0;
      local_4d0 = DAT_14c8463f8;
      local_4d8 = DAT_14c8463f8;
      local_4c8 = DAT_14c8463f0;
      local_4e0 = DAT_14c8463f0;
      local_4a8 = uVar31;
      local_490 = param_2;
      local_478 = (ulonglong)local_170;
      local_458 = param_1;
      local_440 = uVar18;
      local_438 = lVar32;
LAB_1437a6f4b:
      local_498 = (undefined8 *)((longlong)(int)uVar13 * 0x20 + (longlong)local_198);
      if ((longlong)(int)local_460[1] != 0) {
        lVar32 = *local_460;
        lVar27 = (longlong)(int)local_460[1] * 0x160;
        do {
          local_358 = (code ***)FUN_1437ae70c;
          local_518 = &local_358;
          local_350 = &local_148;
          local_148 = (code ***)&local_348;
          FUN_144b2c65a(lVar32,(float)*(int *)(*(longlong *)local_498[1] + 8),*local_498,1);
          lVar32 = lVar32 + 0x160;
          lVar27 = lVar27 + -0x160;
        } while (lVar27 != 0);
      }
      if (param_2[2] == '\0') {
        dVar40 = *(double *)(param_2 + 0x38) + *(double *)(param_2 + 0x48);
        dVar41 = *(double *)(param_2 + 0x30) + *(double *)(param_2 + 0x40);
        dVar46 = (*(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x38)) * 0.5;
        dVar3 = (*(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x30)) * 0.5;
        if (dVar3 <= dVar46) {
          dVar3 = dVar46;
        }
      }
      else {
        dVar40 = dStack_340 + local_328;
        dVar41 = local_348 + dStack_330;
        dVar3 = (dStack_320 - local_338) * 0.5 * 0.10000000149011612;
        dVar46 = (local_328 - dStack_340) * 0.5 * 0.10000000149011612;
        dVar44 = (dStack_330 - local_348) * 0.5 * 0.10000000149011612;
        dVar43 = ((dStack_320 + dVar3) - (local_338 - dVar3)) * 0.5;
        dVar46 = ((local_328 + dVar46) - (dStack_340 - dVar46)) * 0.5;
        dVar3 = ((dStack_330 + dVar44) - (local_348 - dVar44)) * 0.5;
        if (dVar3 <= dVar46) {
          dVar3 = dVar46;
        }
        if (dVar3 <= dVar43) {
          dVar3 = dVar43;
        }
      }
      local_368 = dVar41 * 0.5;
      local_360 = dVar40 * 0.5;
      local_378 = (double)local_4b4 * local_418 + local_470 + local_468 + local_420;
      local_370 = local_410;
      local_388 = local_468 / dVar3;
      local_380 = local_468 / dVar3;
      local_3b0 = (code ***)(local_378 - local_468);
      local_3a8 = local_430;
      local_3a0 = (code ***)(local_468 + local_378);
      local_398 = local_428;
      local_390 = 1;
      local_3d0 = &local_1b0;
      local_3c8 = &local_388;
      local_3c0 = &local_368;
      local_3b8 = &local_378;
      iVar19 = *(int *)(local_498 + 2);
      if ((longlong)iVar19 == 0) {
        uVar18 = CONCAT71((int7)(int3)((uint)iVar19 >> 8),1);
      }
      else {
        plVar14 = (longlong *)local_498[1];
        local_408 = plVar14 + iVar19;
        do {
          puVar22 = (undefined8 *)*plVar14;
          local_3d8 = &local_3d0;
          local_3e0 = (code ***)FUN_1437ae7de;
          if ((*(uint *)((longlong)local_458 + 8) & 0x10) == 0) {
            lVar32 = *(longlong *)((longlong)local_458 + 0x20);
          }
          else {
            lVar32 = 0;
          }
          local_3f0 = plVar14;
          local_3f8 = (longlong *)FUN_147dc04d2(lVar32);
          dVar41 = dStack_2f0;
          dVar40 = local_2f8;
          dVar3 = dStack_300;
          pcVar10 = local_308;
          lVar27 = *(longlong *)(lVar32 + 0x40);
          if (lVar27 == 0) {
            lVar27 = FUN_14475ec7e(lVar32);
          }
          local_4e4 = 0;
          local_484 = DAT_14cb11aac;
          bVar35 = DAT_14cb11aac == 0;
          local_448 = *(longlong *)(lVar27 + 0x750);
          local_128 = 0;
          local_120 = 0;
          local_148 = (code ***)0x0;
          uStack_140 = 0;
          local_11c = 0xffffffff00000080;
          local_114 = 0;
          local_108 = (undefined1 *)0x0;
          local_100 = 0;
          local_400 = lVar27;
          if (*(longlong *)(lVar32 + 0xd0) != 0) {
            local_230 = FUN_1437ab11c;
            local_228 = (code ****)&local_268;
            local_268 = (code ****)&local_148;
            FUN_140bc66fe(*(longlong *)(lVar32 + 0xd0),&local_230);
          }
          local_1e0 = &local_3e0;
          local_1f8 = (code ***)0x0;
          uStack_1f0 = 0;
          local_230 = pcVar10;
          local_228 = (code ****)dVar3;
          local_220 = 0xc290000000000000;
          local_218 = dVar40;
          local_210 = dVar41;
          local_208 = 0x4290000000000000;
          local_200 = 1;
          ppppcVar33 = (code ****)puVar22[6];
          if (ppppcVar33 != (code ****)0x0) {
            local_1c8 = (code ****)CONCAT71(local_1c8._1_7_,1);
            local_1c0 = &local_1f8;
            uStack_1d0 = &local_1c8;
            local_268 = (code ****)&LAB_1437aa982;
            uStack_260 = (code *****)&local_1d8;
            local_1d8 = ppppcVar33;
            FUN_147dc1d8c(ppppcVar33 + 3,ppppcVar33 + 4,&local_230,&local_268);
          }
          ppppcVar33 = (code ****)puVar22[8];
          if (ppppcVar33 != (code ****)0x0) {
            local_1c8 = (code ****)CONCAT71(local_1c8._1_7_,1);
            local_1c0 = &local_1f8;
            uStack_1d0 = &local_1c8;
            local_268 = (code ****)&LAB_1437aaa00;
            uStack_260 = (code *****)&local_1d8;
            local_1d8 = ppppcVar33;
            FUN_147dc1f30(ppppcVar33 + 3,ppppcVar33 + 4,&local_308,&local_268);
          }
          local_450 = puVar22;
          if ((longlong)(int)uStack_1f0 != 0) {
            local_4e4 = CONCAT31((int3)((uint)local_4e4 >> 8),bVar35);
            local_3e8 = local_1f8 + (int)uStack_1f0;
            pppcVar29 = local_1f8;
            do {
              ppcVar5 = *pppcVar29;
              ppcVar8 = ppcVar5 + 5;
              local_4c0 = pppcVar29;
              (**(code **)(ppcVar5[5] + 0x58))(ppcVar8,&local_268);
              local_1c0 = (code ****)(local_248 - (double)uStack_260);
              local_1c8 = (code ****)((double)local_250 - (double)local_268);
              (**(code **)(ppcVar5[5] + 0x58))(ppcVar8,&local_268);
              pcVar9 = local_490;
              local_1d8 = local_268;
              uStack_1d0 = uStack_260;
              local_268 = (code ****)0x3f0000003f000000;
              uStack_260 = (code *****)0x3d4ccccd3f000000;
              local_510 = local_1e0;
              local_518 = (code ****)&local_268;
              FUN_1437aa672(local_490,&local_3b0,&local_1d8,&local_1c8);
              local_268 = (code ****)0x0;
              uStack_260 = (code *****)0x3d4ccccd00000000;
              local_510 = local_1e0;
              local_518 = (code ****)&local_268;
              FUN_1437aa7f6(pcVar9,&local_3b0,&local_1d8,&local_1c8);
              (**(code **)(*(longlong *)ppcVar5[0x15] + 0x2e0))(ppcVar5[0x15],&local_268);
              dVar40 = local_248 - (double)uStack_260;
              dVar3 = (double)local_250 - (double)local_268;
              local_278 = dVar3;
              local_270 = dVar40;
              (**(code **)(*(longlong *)ppcVar5[0x15] + 0x2e0))(ppcVar5[0x15],&local_268);
              local_288 = (code ***)local_268;
              dStack_280 = (double)uStack_260;
              local_268 = (code ****)0x0;
              uStack_260 = (code *****)0x0;
              pppcVar29 = local_4c0;
              if (DAT_14cb117c0 == 2) {
                if (local_448 != 0) {
                  piVar16 = (int *)(**(code **)(*ppcVar5 + 0x300))(ppcVar5);
                  pppcVar29 = local_4c0;
                  fVar36 = 0.0;
                  if (((piVar16[1] != 0 || *piVar16 != 0) || piVar16[2] != 0) || piVar16[3] != 0) {
                    uVar17 = (**(code **)(*ppcVar5 + 0x300))(ppcVar5);
                    lVar32 = FUN_147db3d60(local_448,local_400,uVar17);
                    pppppcVar11 = uStack_260;
                    if (lVar32 != 0) {
                      lVar32 = *(longlong *)(lVar32 + 0x20);
                      uVar37 = (&DAT_14c758c60)[*(byte *)(lVar32 + 0x3a)];
                      uVar38 = (&DAT_14c758c60)[*(byte *)(lVar32 + 0x39)];
                      bVar4 = *(byte *)(lVar32 + 0x3b);
                      uVar2 = (&DAT_14c758c60)[*(byte *)(lVar32 + 0x38)];
                      lVar32 = (longlong)(int)uStack_260;
                      uVar13 = (int)uStack_260 + 1;
                      uStack_260 = (code *****)CONCAT44(uStack_260._4_4_,uVar13);
                      if (uStack_260._4_4_ < uVar13) {
                        FUN_1467ff840(&local_268,(ulonglong)pppppcVar11 & 0xffffffff);
                      }
                      *(undefined4 *)(local_268 + lVar32 * 2) = uVar37;
                      *(undefined4 *)((longlong)local_268 + lVar32 * 0x10 + 4) = uVar38;
                      *(undefined4 *)(local_268 + lVar32 * 2 + 1) = uVar2;
                      *(float *)((longlong)local_268 + lVar32 * 0x10 + 0xc) =
                           (float)bVar4 * 0.003921569;
                      goto LAB_1437a777d;
                    }
                  }
                  goto LAB_1437a7938;
                }
LAB_1437a7ab8:
                uStack_260 = (code *****)&DAT_00000001;
LAB_1437a7ad8:
                FUN_1467ff840(&local_268,0);
LAB_1437a7982:
                *(undefined4 *)local_268 = 0x3f800000;
                *(undefined4 *)((longlong)local_268 + 4) = 0x3f800000;
                *(undefined4 *)(local_268 + 1) = 0x3f800000;
                *(undefined4 *)((longlong)local_268 + 0xc) = 0x3f800000;
                if ((longlong)(int)uStack_260 != 0) {
                  ppppcVar33 = local_268 + (longlong)(int)uStack_260 * 2;
                  fVar36 = 0.1;
                  goto LAB_1437a79bb;
                }
              }
              else {
                if (DAT_14cb117c0 == 1) {
                  fVar36 = 0.0;
                  if (((int)uStack_140 != local_114) &&
                     (lVar32 = (**(code **)(*ppcVar8 + 0x38))(ppcVar8), pppcVar29 = local_4c0,
                     *(int *)(lVar32 + 8) != 0)) {
                    plVar14 = (longlong *)(**(code **)(*ppcVar8 + 0x38))(ppcVar8);
                    fVar36 = 0.67;
                    if ((longlong)(int)plVar14[1] != 0) {
                      plVar28 = (longlong *)*plVar14;
                      plVar14 = plVar28 + (int)plVar14[1];
                      do {
                        pppppcVar11 = uStack_260;
                        if ((int)uStack_140 != local_114) {
                          lVar32 = *plVar28;
                          uVar13 = (uint)((ulonglong)lVar32 >> 0x10);
                          uVar25 = (uint)lVar32 & 0xffff;
                          puVar23 = local_108;
                          if (local_108 == (undefined1 *)0x0) {
                            puVar23 = local_110;
                          }
                          iVar19 = *(int *)(puVar23 +
                                           (ulonglong)
                                           (local_100 - 1U &
                                           (int)((ulonglong)lVar32 >> 0x20) +
                                           ((uint)lVar32 << 0x10 | uVar25) +
                                           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar25 >> 4)) * 4);
                          while (iVar19 != -1) {
                            plVar24 = (longlong *)((longlong)local_148 + (longlong)iVar19 * 0x14);
                            if (*plVar24 == lVar32) goto LAB_1437a7894;
                            iVar19 = *(int *)((longlong)plVar24 + 0xc);
                          }
                        }
                        plVar24 = (longlong *)0x0;
LAB_1437a7894:
                        uVar37 = (&DAT_14c758c60)[*(byte *)((longlong)plVar24 + 10)];
                        uVar38 = (&DAT_14c758c60)[*(byte *)((longlong)plVar24 + 9)];
                        bVar4 = *(byte *)((longlong)plVar24 + 0xb);
                        uVar2 = (&DAT_14c758c60)[*(byte *)(plVar24 + 1)];
                        lVar32 = (longlong)(int)uStack_260;
                        uVar13 = (int)uStack_260 + 1;
                        uStack_260 = (code *****)CONCAT44(uStack_260._4_4_,uVar13);
                        if (uStack_260._4_4_ < uVar13) {
                          FUN_1467ff840(&local_268,(ulonglong)pppppcVar11 & 0xffffffff);
                        }
                        *(undefined4 *)(local_268 + lVar32 * 2) = uVar37;
                        *(undefined4 *)((longlong)local_268 + lVar32 * 0x10 + 4) = uVar38;
                        *(undefined4 *)(local_268 + lVar32 * 2 + 1) = uVar2;
                        *(float *)((longlong)local_268 + lVar32 * 0x10 + 0xc) =
                             (float)bVar4 * 0.003921569;
                        plVar28 = plVar28 + 1;
                      } while (plVar28 != plVar14);
LAB_1437a777d:
                      fVar36 = 0.67;
                    }
                  }
                }
                else {
                  if (DAT_14cb117c0 != 0) goto LAB_1437a7ab8;
                  (**(code **)(*ppcVar5 + 0x2d8))(ppcVar5,&local_298,local_4e4);
                  pppppcVar11 = uStack_260;
                  pppcVar29 = local_4c0;
                  lVar32 = (longlong)(int)uStack_260;
                  uVar13 = (int)uStack_260 + 1;
                  uStack_260 = (code *****)CONCAT44(uStack_260._4_4_,uVar13);
                  if (uStack_260._4_4_ < uVar13) {
                    FUN_1467ff840(&local_268,(ulonglong)pppppcVar11 & 0xffffffff);
                  }
                  ppppcVar33 = local_268 + lVar32 * 2;
                  *(undefined4 *)ppppcVar33 = (undefined4)local_298;
                  *(undefined4 *)((longlong)ppppcVar33 + 4) = local_298._4_4_;
                  *(undefined4 *)(ppppcVar33 + 1) = (undefined4)uStack_290;
                  *(undefined4 *)((longlong)ppppcVar33 + 0xc) = uStack_290._4_4_;
                  fVar36 = 0.75;
                  if (local_484 == 0) {
                    fVar36 = (float)_DAT_14c761ed4;
                    if (fVar36 <= 1.0) {
                      fVar36 = 1.0;
                    }
                    fVar36 = 0.25 / fVar36;
                  }
                }
LAB_1437a7938:
                if ((longlong)(int)uStack_260 == 0) {
                  uStack_260 = (code *****)CONCAT44(uStack_260._4_4_,1);
                  if (uStack_260._4_4_ == 0) goto LAB_1437a7ad8;
                  goto LAB_1437a7982;
                }
                ppppcVar33 = local_268 + (longlong)(int)uStack_260 * 2;
LAB_1437a79bb:
                ppcVar8 = (code **)(dVar3 / (double)(int)uStack_260);
                dVar3 = 0.0;
                ppppcVar34 = local_268;
                do {
                  local_298 = (double)local_288 + dVar3;
                  uStack_290 = dStack_280;
                  local_2b0 = *(undefined4 *)(ppppcVar34 + 1);
                  local_2b8 = *ppppcVar34;
                  local_510 = local_1e0;
                  local_518 = &local_2b8;
                  local_2ac = fVar36;
                  local_2a8 = ppcVar8;
                  local_2a0 = dVar40;
                  FUN_1437aa672(pcVar9,&local_3b0,&local_298,&local_2a8);
                  dVar3 = dVar3 + (double)ppcVar8;
                  ppppcVar34 = ppppcVar34 + 2;
                } while (ppppcVar34 != ppppcVar33);
              }
              local_510 = local_1e0;
              local_518 = (code ****)&DAT_149e1e308;
              FUN_1437aa7f6(pcVar9,&local_3b0,&local_288,&local_278);
              if (local_268 != (code ****)0x0) {
                FUN_1400020a8();
              }
              pppcVar29 = pppcVar29 + 1;
            } while (pppcVar29 != local_3e8);
          }
          param_2 = local_490;
          if (local_490[1] == '\x01') {
            local_1c8 = (code ****)0x4139000000000000;
            local_1c0 = (code ****)0x0;
            local_1d8 = (code ****)((ulonglong)local_1d8 & 0xffffffffffffff00);
            (*(code *)*local_1e0)(&local_268,local_1e0[1],&local_1c8,&local_1d8);
            local_278 = -1638400.0;
            local_270 = 0.0;
            local_288 = (code ***)((ulonglong)local_288 & 0xffffffffffffff00);
            (*(code *)*local_1e0)(&local_1d8,local_1e0[1],&local_278,&local_288);
            local_510._0_4_ = 0x40400000;
            local_518 = (code ****)&DAT_149e1dd34;
            FUN_147dc1aba(param_2,&local_3b0,&local_1d8,&local_268);
            local_1c8 = (code ****)0x0;
            local_1c0 = (code ****)0x4139000000000000;
            local_1d8 = (code ****)((ulonglong)local_1d8 & 0xffffffffffffff00);
            (*(code *)*local_1e0)(&local_268,local_1e0[1],&local_1c8,&local_1d8);
            local_278 = 0.0;
            local_270 = -1638400.0;
            local_288 = (code ***)((ulonglong)local_288 & 0xffffffffffffff00);
            (*(code *)*local_1e0)(&local_1d8,local_1e0[1],&local_278,&local_288);
            local_510 = (code ****)CONCAT44(local_510._4_4_,0x40400000);
            local_518 = (code ****)&DAT_149e1dd14;
            FUN_147dc1aba(param_2,&local_3b0,&local_1d8,&local_268);
          }
          if (*param_2 == '\x01') {
            local_250 = (char *)(local_398 + 10.0);
            local_258 = (code ****)((double)local_3a0 + 10.0);
            uStack_260 = (code *****)(local_3a8 + -10.0);
            local_1d8 = (code ****)(((double)local_3a0 - (double)local_3b0) + (double)local_3b0);
            local_268 = (code ****)((double)local_3b0 + -10.0);
            local_248 = (double)CONCAT71(local_248._1_7_,1);
            local_1c0 = (code ****)((local_398 - local_3a8) + local_3a8);
            local_1c8 = (code ****)((double)local_3b0 + 0.0);
            uStack_1d0 = (code *****)(local_3a8 + 0.0);
            local_508 = &DAT_149e1e2f8;
            local_510 = (code ****)&local_1c8;
            local_518 = &local_3a0;
            local_500 = 0x3f800000;
            FUN_147dc1c1c(param_2,&local_268,&local_3b0,&local_1d8);
          }
          if ((longlong)(int)local_3f8[1] != 0) {
            lVar32 = *local_3f8;
            lVar27 = (longlong)(int)local_3f8[1] * 0x160 + lVar32;
            do {
              FUN_147dc1cd8(lVar32,&local_2a8);
              uStack_260 = &local_1e0;
              local_250 = param_2;
              local_248 = local_458;
              local_1c0 = (code ****)&local_268;
              local_1c8 = (code ****)FUN_1437aaa22;
              local_518 = (code ****)&local_1c8;
              local_268 = (code ****)&local_2a8;
              local_258 = &local_3b0;
              FUN_144b2c65a(lVar32,(float)*(int *)(local_450 + 1),*local_450,1);
              dVar3 = *(double *)(lVar32 + 0x40);
              dVar40 = *(double *)(lVar32 + 0x48);
              if ((9.999999747378752e-05 < ABS(dVar3)) || (9.999999747378752e-05 < ABS(dVar40))) {
                local_268 = *(code *****)(lVar32 + 8);
                uStack_260 = *(code ******)(lVar32 + 0x10);
                local_1d8 = (code ****)
                            CONCAT44((&DAT_14c758c60)[(ulonglong)local_2a8 >> 8 & 0xff],
                                     (&DAT_14c758c60)[(ulonglong)local_2a8 >> 0x10 & 0xff]);
                dVar41 = dVar3 * dVar3 + dVar40 * dVar40;
                uStack_1d0 = (code *****)
                             CONCAT44((float)local_2a8._3_1_ * 0.003921569,
                                      (&DAT_14c758c60)[(ulonglong)local_2a8 & 0xff]);
                if (9.99999993922529e-09 < dVar41) {
                  dVar40 = dVar40 * (1.0 / SQRT(dVar41));
                }
                else {
                  dVar40 = 0.0;
                }
                dStack_280 = (double)uStack_260 + dVar40 * (double)*(int *)(local_450 + 1) * 0.5;
                local_288 = (code ***)
                            ((double)local_268 +
                            (double)(-(ulonglong)(9.99999993922529e-09 < dVar41) &
                                    (ulonglong)(dVar3 * (1.0 / SQRT(dVar41)))) *
                            (double)*(int *)(local_450 + 1) * 0.5);
                local_298 = (double)CONCAT71(local_298._1_7_,1);
                (*(code *)*local_1e0)(&local_278,local_1e0[1],&local_288,&local_298);
                local_2b8 = (code ***)CONCAT71(local_2b8._1_7_,1);
                (*(code *)*local_1e0)(&local_298,local_1e0[1],&local_268,&local_2b8);
                local_518 = (code ****)&local_1d8;
                local_510 = (code ****)CONCAT44(local_510._4_4_,0x3f800000);
                FUN_147dc1aba(param_2,&local_3b0,&local_298,&local_278);
              }
              lVar32 = lVar32 + 0x160;
            } while (lVar32 != lVar27);
          }
          if (local_1f8 != (code ***)0x0) {
            FUN_1400020a8();
          }
          local_100 = 0;
          if (local_108 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          uVar17 = FUN_140e90ef8(&local_148);
          plVar14 = local_3f0 + 1;
        } while (plVar14 != local_408);
        uVar18 = CONCAT71((int7)((ulonglong)uVar17 >> 8),local_390);
      }
      if ((local_4b0 & 1) == 0) {
        if ((uVar18 & 1) != 0) {
          local_4c8 = local_3b0;
          local_4d0 = local_3a8;
          local_4e0 = local_3a0;
          local_4d8 = local_398;
          local_1b8 = local_38f;
          uStack_1b4 = uStack_38b;
          local_4b0 = uVar18 & 0xffffffff;
        }
      }
      else if ((uVar18 & 1) != 0) {
        uVar37 = SUB84(local_4c8,0);
        uVar38 = (undefined4)((ulonglong)local_4c8 >> 0x20);
        if ((double)local_3b0 <= (double)local_4c8) {
          uVar37 = SUB84(local_3b0,0);
          uVar38 = (undefined4)((ulonglong)local_3b0 >> 0x20);
        }
        local_4c8 = (code ***)CONCAT44(uVar38,uVar37);
        uVar37 = SUB84(local_4d0,0);
        uVar38 = (undefined4)((ulonglong)local_4d0 >> 0x20);
        if (local_3a8 <= local_4d0) {
          uVar37 = SUB84(local_3a8,0);
          uVar38 = (undefined4)((ulonglong)local_3a8 >> 0x20);
        }
        local_4d0 = (double)CONCAT44(uVar38,uVar37);
        uVar37 = SUB84(local_4e0,0);
        uVar38 = (undefined4)((ulonglong)local_4e0 >> 0x20);
        if ((double)local_4e0 <= (double)local_3a0) {
          uVar37 = SUB84(local_3a0,0);
          uVar38 = (undefined4)((ulonglong)local_3a0 >> 0x20);
        }
        local_4e0 = (code ***)CONCAT44(uVar38,uVar37);
        uVar37 = SUB84(local_4d8,0);
        uVar38 = (undefined4)((ulonglong)local_4d8 >> 0x20);
        if (local_4d8 <= local_398) {
          uVar37 = SUB84(local_398,0);
          uVar38 = (undefined4)((ulonglong)local_398 >> 0x20);
        }
        local_4d8 = (double)CONCAT44(uVar38,uVar37);
      }
      if (param_2[2] != '\0') {
        local_228 = (code ****)(local_370 - local_468);
        local_230 = (code *)(local_378 - local_468);
        local_268 = (code ****)0x0;
        uStack_260 = (code *****)0x0;
        lVar32 = local_438;
LAB_1437a8441:
        lVar27 = lVar32;
        lVar32 = lVar27;
        if (*(longlong *)(lVar27 + 0x20) != 0) goto code_r0x0001437a8450;
        goto LAB_1437a8462;
      }
      goto LAB_1437a829f;
    }
LAB_1437a6dcd:
    cVar12 = '\0';
    uVar31 = 0;
    pppcVar42 = DAT_14c8463f0;
    pppcVar45 = DAT_14c8463f0;
    dVar40 = DAT_14c8463f8;
    dVar41 = DAT_14c8463f8;
    pppcVar7 = DAT_14c8463f0;
    dVar46 = DAT_14c8463f8;
    dVar3 = DAT_14c8463f8;
    pppcVar29 = DAT_14c8463f0;
    goto LAB_1437a88b9;
  }
  goto LAB_1437a8936;
code_r0x0001437a8450:
  lVar32 = *(longlong *)(lVar27 + 0x20);
  if ((*(uint *)(lVar27 + 8) >> 0x1c & 1) == 0) goto LAB_1437a8441;
  lVar32 = FUN_142840154(lVar27);
LAB_1437a8462:
  if (lVar32 == 0) {
    lVar32 = *(longlong *)(lVar27 + 0x20);
    goto LAB_1437a8441;
  }
  local_148 = *(code ****)(lVar32 + 0x18);
  FUN_1400021e4(&local_148,&local_1d8);
  FUN_1449fb060(&local_1c8,&local_1d8,1);
  FUN_14094a6a4(&local_148,&local_1c8,0);
  lVar32 = (longlong)(int)uStack_260;
  uVar13 = (int)uStack_260 + 1;
  uStack_260 = (code *****)CONCAT44(uStack_260._4_4_,uVar13);
  if (uStack_260._4_4_ < uVar13) {
    FUN_147dc898c(&local_268);
  }
  local_268[lVar32 * 4] = (code ***)0x0;
  local_268[lVar32 * 4] = local_148;
  *(int *)(local_268 + lVar32 * 4 + 1) = (int)uStack_140;
  *(undefined4 *)((longlong)local_268 + lVar32 * 0x20 + 0xc) = uStack_140._4_4_;
  ppppcVar33 = local_268 + lVar32 * 4 + 2;
  *(undefined4 *)ppppcVar33 = 0x3f800000;
  *(undefined4 *)((longlong)ppppcVar33 + 4) = 0x3f800000;
  *(undefined4 *)(ppppcVar33 + 1) = 0x3f800000;
  *(undefined4 *)((longlong)ppppcVar33 + 0xc) = 0x3f800000;
  uStack_140 = 0;
  local_148 = (code ***)0x0;
  if (local_1c8 != (code ****)0x0) {
    FUN_1400020a8();
  }
  if (local_1d8 != (code ****)0x0) {
    FUN_1400020a8();
  }
  iVar19 = *(int *)(*(longlong *)local_498[1] + 8);
  FUN_1400021e4(local_498,&local_148);
  pdVar30 = (double *)&DAT_149dfb77a;
  if ((int)uStack_140 != 0) {
    pdVar30 = (double *)local_148;
  }
  FUN_140002266(&local_1c8,L"%s | %d m",pdVar30,(int)((float)iVar19 * 0.01));
  if (local_148 != (code ***)0x0) {
    FUN_1400020a8();
  }
  uVar18 = (ulonglong)uStack_260;
  lVar32 = (longlong)(int)uStack_260;
  uVar13 = (int)uStack_260 + 1;
  uStack_260 = (code *****)CONCAT44(uStack_260._4_4_,uVar13);
  if (uStack_260._4_4_ < uVar13) {
    FUN_147dc898c(&local_268,uVar18 & 0xffffffff);
  }
  ppppcVar34 = local_1c8;
  ppppcVar33 = local_268 + lVar32 * 4;
  local_268[lVar32 * 4] = (code ***)0x0;
  lVar27 = (longlong)(int)local_1c0;
  *(int *)(local_268 + lVar32 * 4 + 1) = (int)local_1c0;
  if (lVar27 == 0) {
    *(undefined4 *)((longlong)ppppcVar33 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(ppppcVar33,(ulonglong)local_1c0 & 0xffffffff,0);
    memcpy(*ppppcVar33,ppppcVar34,lVar27 * 2);
  }
  *(undefined4 *)(ppppcVar33 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)ppppcVar33 + 0x14) = 0x3f800000;
  *(undefined4 *)(ppppcVar33 + 3) = 0;
  *(undefined4 *)((longlong)ppppcVar33 + 0x1c) = 0x3f800000;
  FUN_147dc0586(&local_148,&local_230,&local_268);
  iVar19 = *(int *)(param_2 + 0xd0);
  uVar13 = iVar19 + 1;
  *(uint *)(param_2 + 0xd0) = uVar13;
  if (*(uint *)(param_2 + 0xd4) < uVar13) {
    FUN_147dc256a(local_480);
  }
  lVar32 = *local_480;
  lVar27 = (longlong)iVar19 * 0x20;
  puVar1 = (undefined4 *)(lVar32 + lVar27);
  *puVar1 = (undefined4)local_148;
  puVar1[1] = local_148._4_4_;
  puVar1[2] = (int)uStack_140;
  puVar1[3] = uStack_140._4_4_;
  *(undefined8 *)(lVar32 + 0x10 + lVar27) = 0;
  *(longlong *)(lVar32 + 0x10 + lVar27) = local_138;
  local_138 = 0;
  *(undefined4 *)(lVar32 + 0x18 + lVar27) = (undefined4)uStack_130;
  *(undefined4 *)(lVar32 + 0x1c + lVar27) = uStack_130._4_4_;
  uStack_130 = 0;
  FUN_147dc8960(0,0);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (code ****)0x0) {
    FUN_1400020a8();
  }
  FUN_147dc8960(local_268,(ulonglong)uStack_260 & 0xffffffff);
  if (local_268 != (code ****)0x0) {
    FUN_1400020a8();
  }
LAB_1437a829f:
  local_4e8 = local_4e8 & ~(uint)local_4a0;
  puVar15 = local_178;
  if (local_178 == (uint *)0x0) {
    puVar15 = local_188;
  }
  iVar19 = (int)local_4a8;
  lVar32 = (longlong)iVar19;
  uVar25 = puVar15[lVar32] & local_4e8;
  uVar13 = local_170;
  if (uVar25 == 0) {
    iVar20 = local_170 + 0x1e;
    if (-1 < (int)(local_170 - 1)) {
      iVar20 = local_170 - 1;
    }
    iVar20 = iVar20 >> 5;
    local_4ec = local_4ec + 0x20;
    iVar21 = iVar20;
    if (iVar20 < iVar19) {
      iVar21 = iVar19;
    }
    if (iVar19 < iVar20) {
      local_4a8 = (longlong)iVar21 + 1;
      lVar27 = 0;
      do {
        uVar25 = puVar15[lVar32 + lVar27 + 1];
        if (uVar25 != 0) {
          local_4a8 = (ulonglong)(iVar19 + (int)lVar27 + 1);
          local_4e8 = 0xffffffff;
          goto LAB_1437a8358;
        }
        local_4ec = local_4ec + 0x20;
        lVar27 = lVar27 + 1;
      } while (iVar21 - lVar32 != lVar27);
      local_4e8 = 0xffffffff;
      param_2 = local_490;
    }
    else {
      local_4a8 = lVar32 + 1;
      param_2 = local_490;
    }
  }
  else {
LAB_1437a8358:
    local_4a0 = (ulonglong)(-uVar25 & uVar25);
    uVar18 = local_4a0 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    uVar13 = (local_4ec - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if ((int)local_170 <= (int)uVar13) {
      uVar13 = local_170;
    }
  }
  local_4b4 = local_4b4 + 1;
  if (uVar13 == (uint)local_478) goto LAB_1437a8764;
  goto LAB_1437a6f4b;
LAB_1437a8764:
  uVar31 = local_4b0;
  uVar18 = local_440;
  pppcVar45 = local_4c8;
  dVar40 = local_4d0;
  dVar3 = local_4d8;
  pppcVar29 = local_4e0;
  if (local_318 == '\0') {
    cVar12 = '\0';
    pppcVar42 = DAT_14c8463f0;
    dVar41 = DAT_14c8463f8;
    pppcVar7 = DAT_14c8463f0;
    dVar46 = DAT_14c8463f8;
  }
  else {
    fVar36 = (float)((local_328 + dStack_340) * 0.5);
    fVar50 = (float)((dStack_330 + local_348) * 0.5);
    dVar46 = (double)(local_1ac * fVar50 + local_1a4 * fVar36 + local_19c);
    dVar43 = (double)(fVar50 * local_1b0 + fVar36 * local_1a8 + local_1a0);
    dVar41 = (local_328 - dStack_340) * 0.5;
    dVar44 = (dStack_330 - local_348) * 0.5;
    if (dVar44 <= dVar41) {
      dVar44 = dVar41;
    }
    dVar41 = dVar44 + dVar46;
    dVar6 = dVar44 + dVar43;
    dVar46 = dVar46 - dVar44;
    dVar43 = dVar43 - dVar44;
    dVar44 = (dVar41 - dVar46) * 0.5 * 0.10000000149011612;
    dVar47 = (dVar6 - dVar43) * 0.5 * 0.10000000149011612;
    dVar41 = dVar41 + dVar44;
    pppcVar7 = (code ***)(dVar6 + dVar47);
    dVar46 = dVar46 - dVar44;
    pppcVar42 = (code ***)(dVar43 - dVar47);
    cVar12 = '\x01';
  }
LAB_1437a88b9:
  *(code ****)(param_2 + 0x80) = pppcVar42;
  *(double *)(param_2 + 0x88) = dVar46;
  *(code ****)(param_2 + 0x90) = pppcVar7;
  *(double *)(param_2 + 0x98) = dVar41;
  param_2[0xa0] = cVar12;
  uVar37 = (undefined4)local_148;
  *(undefined4 *)(param_2 + 0xa1) = uVar37;
  *(undefined4 *)(param_2 + 0xa4) = local_148._3_4_;
  *(code ****)(param_2 + 0x58) = pppcVar45;
  *(double *)(param_2 + 0x60) = dVar40;
  *(code ****)(param_2 + 0x68) = pppcVar29;
  *(double *)(param_2 + 0x70) = dVar3;
  param_2[0x78] = (char)uVar31;
  *(uint *)(param_2 + 0x7c) = CONCAT31(uStack_1b4,local_1b8._3_1_);
  *(undefined4 *)(param_2 + 0x79) = local_1b8;
  if (local_2d8 != (double *)0x0) {
    FUN_1400020a8();
  }
LAB_1437a8936:
  local_150 = 0;
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  FUN_145d24786(&local_198);
LAB_1437a675a:
  if ((local_f0 ^ (ulonglong)auStack_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 1437a8976 FUN_1437a8976 body=406 status=ok
// SIG undefined FUN_1437a8976(void)

void FUN_1437a8976(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_178 [40];
  code *local_150;
  undefined8 **local_148;
  uint local_140;
  undefined8 *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 *local_120;
  code *local_118;
  code **local_110;
  undefined8 local_108 [13];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar5 = 0;
  }
  puVar3 = &DAT_14c846480;
  if (*(char *)(lVar5 + 0xb0) != '\0') {
    puVar3 = (undefined8 *)(lVar5 + 0x50);
  }
  puVar4 = local_108;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_128 = *(longlong *)(lVar5 + 0x40);
  if (local_128 == 0) {
    local_128 = FUN_14475ec7e(lVar5);
  }
  uVar1 = *(undefined8 *)(local_128 + 0x750);
  bVar6 = DAT_14cb11aac == 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (*(longlong *)(lVar5 + 0xd0) != 0) {
    local_a0 = &local_98;
    local_148 = &local_a0;
    local_150 = FUN_1437ab11c;
    FUN_140bc66fe();
  }
  local_110 = &local_150;
  local_140 = (uint)bVar6;
  local_138 = &local_98;
  local_118 = FUN_1437ae86c;
  local_150 = param_1;
  local_148 = (undefined8 **)param_2;
  local_130 = uVar1;
  local_120 = local_108;
  FUN_147dbf406(param_1);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ef8(&local_98);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a8b0d FUN_1437a8b0d body=55 status=ok
// SIG undefined FUN_1437a8b0d(void)

void FUN_1437a8b0d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb117d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb117d0 = FUN_14171c317(FUN_146411599,uVar1,L"EWorldPartitionServerStreamingMode");
  }
  return;
}



// FUNCTION 1437a8b44 FUN_1437a8b44 body=55 status=ok
// SIG undefined FUN_1437a8b44(void)

void FUN_1437a8b44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb117e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb117e8 = FUN_14171c317(FUN_1464115c8,uVar1,L"EWorldPartitionServerStreamingOutMode");
  }
  return;
}



// FUNCTION 1437a8b7b FUN_1437a8b7b body=55 status=ok
// SIG undefined FUN_1437a8b7b(void)

void FUN_1437a8b7b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11800 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11800 = FUN_14171c317(FUN_1464115f7,uVar1,L"EWorldPartitionDataLayersLogicOperator");
  }
  return;
}



// FUNCTION 1437a8bb3 FUN_1437a8bb3 body=69 status=ok
// SIG undefined FUN_1437a8bb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a8bb3(void)

{
  _DAT_14cb11848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a8bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11850,1);
  return;
}



// FUNCTION 1437a8bf8 FUN_1437a8bf8 body=69 status=ok
// SIG undefined FUN_1437a8bf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a8bf8(void)

{
  _DAT_14cb11860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a8c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11868,1);
  return;
}



// FUNCTION 1437a8c3d FUN_1437a8c3d body=69 status=ok
// SIG undefined FUN_1437a8c3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a8c3d(void)

{
  _DAT_14cb11878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a8c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11880,1);
  return;
}



// FUNCTION 1437a8c82 FUN_1437a8c82 body=69 status=ok
// SIG undefined FUN_1437a8c82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a8c82(void)

{
  _DAT_14cb11890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a8cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11898,1);
  return;
}



// FUNCTION 1437a8cc8 FUN_1437a8cc8 body=1589 status=ok
// SIG undefined FUN_1437a8cc8(void)

void FUN_1437a8cc8(longlong param_1,longlong param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined8 local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x48) == 2) goto LAB_1437a9026;
  uVar14 = 0;
  uVar9 = local_50;
  for (lVar18 = param_1; lVar18 != 0; lVar18 = *(longlong *)(lVar18 + 0x20)) {
    uVar14 = *(uint *)(lVar18 + 8);
    if ((uVar14 & 0x30) != 0) goto LAB_1437a9026;
    uVar9 = 0;
  }
  uVar10 = (undefined4)uVar9;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    lVar18 = param_2;
    uVar10 = FUN_1456cec3c();
    uVar14 = (uint)lVar18;
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[5] - DAT_14c8464a8));
  auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[4] - DAT_14c8464a0));
  iVar11 = movmskpd(uVar10,auVar5);
  auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[7] - DAT_14c8464b8));
  auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[6] - DAT_14c8464b0));
  uVar14 = movmskpd(uVar14,auVar3);
  if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
    lVar18 = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[1] - DAT_14c846488));
    auVar8._8_4_ = (int)lVar18;
    auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*param_3 - DAT_14c846480));
    auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    uVar14 = movmskpd(iVar11,auVar8);
    lVar18 = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[3] - DAT_14c846498));
    auVar7._8_4_ = (int)lVar18;
    auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[2] - DAT_14c846490));
    auVar7._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar11 = movmskpd(0,auVar7);
    uVar15 = iVar11 << 2 | uVar14;
    if (uVar15 != 0) {
      auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[1] + DAT_14c846488));
      auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*param_3 + DAT_14c846480));
      uVar14 = movmskpd(uVar14,auVar6);
      auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[3] + DAT_14c846498));
      auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[2] + DAT_14c846490));
      uVar15 = movmskpd(uVar15,auVar4);
      if ((uVar15 & 0x3fffffff) != 0 || uVar14 != 0) goto LAB_1437a8e66;
    }
    auVar2._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[9] - DAT_14c8464c8));
    auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[8] - DAT_14c8464c0));
    iVar11 = movmskpd(uVar14,auVar2);
    auVar1._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[0xb] - dRam000000014c8464d8));
    auVar1._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_3[10] - DAT_14c8464d0));
    uVar14 = movmskpd(0,auVar1);
    if ((uVar14 & 0x3fffffff) != 0 || iVar11 != 0) goto LAB_1437a8e66;
  }
  else {
LAB_1437a8e66:
    if ((double *)(param_1 + 0x50) != param_3) {
      pdVar17 = (double *)(param_1 + 0x50);
      for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
        *pdVar17 = *param_3;
        param_3 = param_3 + 1;
        pdVar17 = pdVar17 + 1;
      }
      *(undefined1 *)(param_1 + 0xb0) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 1;
  if (DAT_14cb10130 == 0) {
    local_80 = &local_58;
    local_58 = FUN_140754f84;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_147da9a76;
    local_90 = FUN_1409f3105;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  if (DAT_14c951858 == 0) {
    local_80 = &local_58;
    local_58 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_1468c5283;
    local_90 = FUN_142809da0;
    local_98 = L"Engine";
    local_a0 = 0x400000000;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  FUN_145c36bbe(param_1);
  if (DAT_14cb10130 == 0) {
    local_80 = &local_58;
    local_58 = FUN_140754f84;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_147da9a76;
    local_90 = FUN_1409f3105;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  lVar18 = DAT_14cb10130;
  if (DAT_14c951858 == 0) {
    local_80 = &local_58;
    local_58 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_1468c5283;
    local_90 = FUN_142809da0;
    local_98 = L"Engine";
    local_a0 = 0x400000000;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar12 = *(longlong *)(param_1 + 0x20);
  if (lVar12 == 0) {
    lVar16 = 0;
  }
  else {
    iVar11 = *(int *)(lVar18 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar11) ||
         (lVar16 = lVar12,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar11 * 8) !=
         lVar18 + 0x30)) {
        lVar16 = 0;
      }
    } while ((lVar16 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
  }
  if (*(longlong *)(param_1 + 0x40) == lVar16) {
    FUN_145af93c0();
  }
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    FUN_1446f470e(&local_58,L"DataLayerManager",1);
    lVar18 = *(longlong *)(param_1 + 0xf8);
    if ((((lVar18 == 0) || (lVar12 = FUN_14588a3fa(), lVar12 == 0)) ||
        (*(int *)(lVar18 + 0x38) < *(int *)(lVar12 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
         lVar12 + 0x30 || (lVar18 = *(longlong *)(param_1 + 0xf8), lVar18 == 0)))) {
      uVar13 = FUN_14588a3fa();
    }
    else {
      lVar12 = FUN_14588a3fa();
      if (((lVar12 == 0) || (*(int *)(lVar18 + 0x38) < *(int *)(lVar12 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
          lVar12 + 0x30)) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(param_1 + 0xf8);
      }
    }
    lVar18 = FUN_146411d3f(param_1,uVar13,local_58);
    if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar18);
    }
    *(longlong *)(param_1 + 0xd0) = lVar18;
    FUN_14620e2c4(lVar18);
  }
  lVar18 = *(longlong *)(param_1 + 0xd8);
  if (lVar18 == 0) {
    FUN_1446f470e(&local_60,L"ExternalDataLayerManager",1);
    lVar18 = FUN_146411825(param_1,local_60);
    if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar18);
    }
    *(longlong *)(param_1 + 0xd8) = lVar18;
  }
  FUN_145a3dbe2(lVar18);
  *(undefined4 *)(param_1 + 0x48) = 2;
  FUN_145a16c20(*(longlong *)(param_1 + 0x40) + 0x570,param_1);
LAB_1437a9026:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a9306 FUN_1437a9306 body=49 status=ok
// SIG undefined FUN_1437a9306(void)

void FUN_1437a9306(void)

{
  FUN_14482129f(DAT_14cb118a0,DAT_14cb118a8);
  if (DAT_14cb118a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437a9338 FUN_1437a9338 body=516 status=ok
// SIG undefined FUN_1437a9338(void)

uint FUN_1437a9338(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb10130 == 0) {
    local_40 = &local_20;
    local_20 = FUN_140754f84;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_147da9a76;
    local_50 = FUN_1409f3105;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  lVar2 = DAT_14cb10130;
  if (DAT_14c951858 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1468c5283;
    local_50 = FUN_142809da0;
    local_58 = L"Engine";
    local_60 = 0x400000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar3) ||
         (lVar5 = lVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
         lVar2 + 0x30)) {
        lVar5 = 0;
      }
    } while ((lVar5 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
  }
  iVar3 = -0x61c88647;
  if ((*(longlong *)(lVar5 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x2b8), lVar2 != 0)) {
    iVar3 = *(int *)(lVar2 + 0x910) + -0x61c88647;
  }
  uVar1 = *(uint *)(param_1 + 0xe8);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return (uVar1 >> 2) + uVar1 * 0x40 + iVar3 ^ uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a953d FUN_1437a953d body=69 status=ok
// SIG undefined FUN_1437a953d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a953d(void)

{
  _DAT_14cb118d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a957f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb118d8,1);
  return;
}



// FUNCTION 1437a9582 FUN_1437a9582 body=169 status=ok
// SIG undefined FUN_1437a9582(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a9582(void)

{
  DAT_14cb11928 = 0;
  if (DAT_14cb11920 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb118e8 = 0;
  if (DAT_14cb118ec != 0) {
    FUN_14472eb64(&DAT_14cb118e0,0);
  }
  _DAT_14cb11910 = 0xffffffff;
  _DAT_14cb11908 = 0;
  if (0x80 < DAT_14cb1190c) {
    DAT_14cb1190c = 0x80;
    FUN_1446efbd8(&DAT_14cb118f0,0);
  }
  if (DAT_14cb11900 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb118e0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1437a962b FUN_1437a962b body=69 status=ok
// SIG undefined FUN_1437a962b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a962b(void)

{
  _DAT_14cb11930 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a966d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11938,1);
  return;
}



// FUNCTION 1437a9670 FUN_1437a9670 body=169 status=ok
// SIG undefined FUN_1437a9670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a9670(void)

{
  DAT_14cb11988 = 0;
  if (DAT_14cb11980 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb11948 = 0;
  if (DAT_14cb1194c != 0) {
    FUN_14472eb64(&DAT_14cb11940,0);
  }
  _DAT_14cb11970 = 0xffffffff;
  _DAT_14cb11968 = 0;
  if (0x80 < DAT_14cb1196c) {
    DAT_14cb1196c = 0x80;
    FUN_1446efbd8(&DAT_14cb11950,0);
  }
  if (DAT_14cb11960 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb11940 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1437a9719 FUN_1437a9719 body=69 status=ok
// SIG undefined FUN_1437a9719(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a9719(void)

{
  _DAT_14cb11990 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a975b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11998,1);
  return;
}



// FUNCTION 1437a975e FUN_1437a975e body=41 status=ok
// SIG undefined FUN_1437a975e(void)

void FUN_1437a975e(void)

{
  DAT_14cb119e8 = 0;
  if (DAT_14cb119e0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d7132e();
  return;
}



// FUNCTION 1437a9787 FUN_1437a9787 body=69 status=ok
// SIG undefined FUN_1437a9787(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a9787(void)

{
  _DAT_14cb119f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a97c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb119f8,1);
  return;
}



// FUNCTION 1437a97cc FUN_1437a97cc body=49 status=ok
// SIG undefined FUN_1437a97cc(void)

void FUN_1437a97cc(void)

{
  FUN_1447a1747(DAT_14cb11a00,DAT_14cb11a08);
  if (DAT_14cb11a00 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437a97fd FUN_1437a97fd body=69 status=ok
// SIG undefined FUN_1437a97fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a97fd(void)

{
  _DAT_14cb11a10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a983f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11a18,1);
  return;
}



// FUNCTION 1437a9842 FUN_1437a9842 body=69 status=ok
// SIG undefined FUN_1437a9842(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a9842(void)

{
  _DAT_14cb11a38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a9884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11a40,1);
  return;
}



// FUNCTION 1437a9888 FUN_1437a9888 body=1604 status=ok
// SIG undefined FUN_1437a9888(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a9888(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 *local_130;
  undefined4 local_124;
  longlong local_120;
  longlong *local_118;
  ulonglong local_110;
  longlong local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar16 = *(longlong *)(*(longlong *)(*param_1 + 0x2e0) + 0x68);
  if (lVar16 == 0) {
    local_124 = 0xffffffff;
  }
  else {
    local_124 = *(undefined4 *)(lVar16 + 0x18);
  }
  local_118 = param_2;
  if ((longlong)(int)param_2[3] != 0) {
    lVar16 = param_2[2];
    local_108 = (longlong)(int)param_2[3] * 0x50;
    lVar15 = 0;
    do {
      dVar1 = *(double *)(lVar16 + 0x18 + lVar15);
      dVar2 = *(double *)(lVar16 + 0x10 + lVar15);
      lVar14 = param_1[2];
      iVar3 = *(int *)(lVar14 + 0x290);
      uVar19 = (ulonglong)iVar3;
      *(uint *)(lVar14 + 0x290) = iVar3 + 1U;
      if (*(uint *)(lVar14 + 0x294) < iVar3 + 1U) {
        FUN_14021e72e(lVar14 + 0x180,iVar3);
      }
      puVar21 = (undefined8 *)(lVar16 + lVar15);
      lVar18 = lVar14 + 0x180;
      if (*(longlong *)(lVar14 + 0x280) != 0) {
        lVar18 = *(longlong *)(lVar14 + 0x280);
      }
      lVar14 = uVar19 * 0x40;
      *(float *)(lVar18 + lVar14) = (float)dVar2;
      *(float *)(lVar18 + 4 + lVar14) = (float)dVar1;
      *(undefined8 *)(lVar18 + 8 + lVar14) = 0x3f80000000000000;
      puVar17 = (undefined8 *)(lVar18 + 0x10 + lVar14);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)(lVar18 + 0x20 + lVar14) = DAT_14c84635c;
      uVar9 = puVar21[1];
      puVar17 = (undefined8 *)(lVar18 + 0x28 + lVar14);
      *puVar17 = *puVar21;
      puVar17[1] = uVar9;
      *(undefined4 *)(lVar18 + 0x38 + lVar14) = local_124;
      dVar1 = *(double *)(lVar16 + 0x28 + lVar15);
      dVar2 = *(double *)(lVar16 + 0x20 + lVar15);
      lVar14 = param_1[2];
      iVar3 = *(int *)(lVar14 + 0x290);
      lVar18 = (longlong)iVar3;
      *(uint *)(lVar14 + 0x290) = iVar3 + 1U;
      if (*(uint *)(lVar14 + 0x294) < iVar3 + 1U) {
        FUN_14021e72e(lVar14 + 0x180,iVar3);
      }
      lVar20 = lVar14 + 0x180;
      if (*(longlong *)(lVar14 + 0x280) != 0) {
        lVar20 = *(longlong *)(lVar14 + 0x280);
      }
      lVar14 = lVar18 * 0x40;
      *(float *)(lVar20 + lVar14) = (float)dVar2;
      *(float *)(lVar20 + 4 + lVar14) = (float)dVar1;
      *(undefined8 *)(lVar20 + 8 + lVar14) = 0x3f80000000000000;
      puVar17 = (undefined8 *)(lVar20 + 0x10 + lVar14);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)(lVar20 + 0x20 + lVar14) = DAT_14c84635c;
      uVar9 = puVar21[1];
      puVar17 = (undefined8 *)(lVar20 + 0x28 + lVar14);
      *puVar17 = *puVar21;
      puVar17[1] = uVar9;
      *(undefined4 *)(lVar20 + 0x38 + lVar14) = local_124;
      dVar1 = *(double *)(lVar16 + 0x38 + lVar15);
      dVar2 = *(double *)(lVar16 + 0x30 + lVar15);
      lVar14 = param_1[2];
      iVar3 = *(int *)(lVar14 + 0x290);
      *(uint *)(lVar14 + 0x290) = iVar3 + 1U;
      if (*(uint *)(lVar14 + 0x294) < iVar3 + 1U) {
        local_120 = lVar18;
        FUN_14021e72e(lVar14 + 0x180,iVar3);
        lVar18 = local_120;
      }
      lVar20 = lVar14 + 0x180;
      if (*(longlong *)(lVar14 + 0x280) != 0) {
        lVar20 = *(longlong *)(lVar14 + 0x280);
      }
      lVar14 = (longlong)iVar3 * 0x40;
      *(float *)(lVar20 + lVar14) = (float)dVar2;
      *(float *)(lVar20 + 4 + lVar14) = (float)dVar1;
      *(undefined8 *)(lVar20 + 8 + lVar14) = 0x3f80000000000000;
      puVar17 = (undefined8 *)(lVar20 + 0x10 + lVar14);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)(lVar20 + 0x20 + lVar14) = DAT_14c84635c;
      uVar9 = puVar21[1];
      puVar17 = (undefined8 *)(lVar20 + 0x28 + lVar14);
      *puVar17 = *puVar21;
      puVar17[1] = uVar9;
      *(undefined4 *)(lVar20 + 0x38 + lVar14) = local_124;
      dVar1 = *(double *)(lVar16 + 0x48 + lVar15);
      dVar2 = *(double *)(lVar16 + 0x40 + lVar15);
      lVar14 = param_1[2];
      iVar4 = *(int *)(lVar14 + 0x290);
      *(uint *)(lVar14 + 0x290) = iVar4 + 1U;
      if (*(uint *)(lVar14 + 0x294) < iVar4 + 1U) {
        local_120 = lVar18;
        local_110 = uVar19;
        FUN_14021e72e(lVar14 + 0x180,iVar4);
        lVar18 = local_120;
        uVar19 = local_110;
      }
      lVar20 = lVar14 + 0x180;
      if (*(longlong *)(lVar14 + 0x280) != 0) {
        lVar20 = *(longlong *)(lVar14 + 0x280);
      }
      lVar14 = (longlong)iVar4 * 0x40;
      *(float *)(lVar20 + lVar14) = (float)dVar2;
      *(float *)(lVar20 + 4 + lVar14) = (float)dVar1;
      *(undefined8 *)(lVar20 + 8 + lVar14) = 0x3f80000000000000;
      puVar17 = (undefined8 *)(lVar20 + 0x10 + lVar14);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)(lVar20 + 0x20 + lVar14) = DAT_14c84635c;
      uVar9 = puVar21[1];
      puVar17 = (undefined8 *)(lVar20 + 0x28 + lVar14);
      *puVar17 = *puVar21;
      puVar17[1] = uVar9;
      *(undefined4 *)(lVar20 + 0x38 + lVar14) = local_124;
      local_e8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_130 = &local_f8;
      local_138 = 2;
      local_140 = DAT_14ca94e18;
      local_148 = (undefined8 *)0x0;
      FUN_14002b732(param_1[2],uVar19 & 0xffffffff,lVar18,iVar3);
      local_e8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_130 = &local_f8;
      local_138 = 2;
      local_140 = DAT_14ca94e18;
      local_148 = (undefined8 *)0x0;
      FUN_14002b732(param_1[2],iVar3,iVar4,uVar19 & 0xffffffff);
      lVar15 = lVar15 + 0x50;
    } while (local_108 != lVar15);
  }
  plVar13 = local_118;
  if ((longlong)(int)local_118[1] != 0) {
    lVar16 = (longlong)(int)local_118[1] * 0x48;
    lVar15 = *local_118 + 0x28;
    do {
      local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(lVar15 + 0x18));
      local_148 = (undefined8 *)CONCAT44(local_148._4_4_,local_124);
      local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffffffffff00);
      local_138 = 0;
      FUN_14095857a(param_1[1],lVar15 + -0x18,lVar15,lVar15 + -0x28);
      lVar15 = lVar15 + 0x48;
      lVar16 = lVar16 + -0x48;
    } while (lVar16 != 0);
  }
  auVar12 = _DAT_149e1a210;
  auVar11 = _DAT_149e1a200;
  auVar10 = _DAT_1499378f0;
  lVar16 = (longlong)(int)plVar13[5];
  if (lVar16 != 0) {
    puVar21 = (undefined8 *)plVar13[4];
    puVar17 = puVar21 + lVar16 * 4;
    auVar29 = pmovzxbd(unaff_XMM9,0xffffffff);
    do {
      local_f8 = *puVar21;
      uStack_f0 = puVar21[1];
      if ((longlong)*(int *)(puVar21 + 3) != 0) {
        lVar16 = puVar21[2];
        lVar15 = (longlong)*(int *)(puVar21 + 3) << 5;
        do {
          auVar23 = maxps(*(undefined1 (*) [16])(lVar16 + 0x10),auVar11);
          auVar23 = minps(auVar23,auVar12);
          fVar22 = auVar23._0_4_;
          fVar25 = auVar23._4_4_;
          fVar27 = auVar23._8_4_;
          auVar28._4_4_ =
               *(undefined4 *)
                (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar25 + -0x39000000) >> 0x14) * 4
                );
          auVar28._0_4_ =
               *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar22 + 0xc7000000U >> 0x14) * 4);
          auVar28._8_4_ =
               *(undefined4 *)
                (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar27 + -0x39000000) >> 0x14) * 4
                );
          auVar28._12_4_ = 0;
          auVar26._0_4_ = (uint)fVar22 >> 0xc;
          auVar26._4_4_ = (uint)fVar25 >> 0xc;
          auVar26._8_4_ = (uint)fVar27 >> 0xc;
          auVar26._12_4_ = (uint)auVar23._12_4_ >> 0xc;
          auVar26 = pmaddwd(auVar26 & auVar29 | auVar10,auVar28);
          auVar24._4_4_ = (int)(fVar25 * 0.0 + 0.5) | auVar26._4_4_ >> 0x10;
          auVar24._12_4_ = (int)(auVar23._12_4_ * 255.0 + 0.5) | auVar26._12_4_ >> 0x10;
          auVar24._0_4_ = (int)(fVar27 * 0.0 + 0.5) | auVar26._8_4_ >> 0x10;
          auVar24._8_4_ = (int)(fVar22 * 0.0 + 0.5) | auVar26._0_4_ >> 0x10;
          auVar23 = packssdw(auVar24,auVar24);
          sVar5 = auVar23._0_2_;
          sVar6 = auVar23._2_2_;
          sVar7 = auVar23._4_2_;
          sVar8 = auVar23._6_2_;
          local_fc = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar23[6] - (0xff < sVar8),
                              CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar23[4] - (0xff < sVar7),
                                       CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar23[2] -
                                                (0xff < sVar6),
                                                (0 < sVar5) * (sVar5 < 0x100) * auVar23[0] -
                                                (0xff < sVar5))));
          local_140 = 0;
          local_148 = &local_f8;
          FUN_147dc1086(*param_1,lVar16,*(undefined8 *)(DAT_14cb0d2b0 + 0x58),&local_fc);
          lVar16 = lVar16 + 0x20;
          lVar15 = lVar15 + -0x20;
        } while (lVar15 != 0);
      }
      puVar21 = puVar21 + 4;
    } while (puVar21 != puVar17);
  }
  if ((local_c0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437a9ecd FUN_1437a9ecd body=165 status=ok
// SIG undefined FUN_1437a9ecd(void)

void FUN_1437a9ecd(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_28 = 0;
  local_50 = *param_3;
  uStack_48 = param_3[1];
  local_40 = 0;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = 0;
  local_80 = *param_1;
  uStack_7c = param_1[1];
  uStack_78 = param_1[2];
  uStack_74 = param_1[3];
  local_70 = 0;
  local_88 = &local_20;
  cVar1 = FUN_1467f832a();
  if (cVar1 != '\0') {
    *param_5 = local_20;
    param_5[1] = uStack_1c;
    param_5[2] = uStack_18;
    param_5[3] = uStack_14;
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437a9f92 FUN_1437a9f92 body=29 status=ok
// SIG undefined FUN_1437a9f92(void)

void FUN_1437a9f92(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1437a9fb0 FUN_1437a9fb0 body=121 status=ok
// SIG undefined FUN_1437a9fb0(void)

undefined8 * FUN_1437a9fb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ab1edf0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14019648a(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140196500(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437aa050 FUN_1437aa050 body=282 status=ok
// SIG undefined FUN_1437aa050(void)

undefined8 * FUN_1437aa050(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437aa029);
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



// FUNCTION 1437aa16a FUN_1437aa16a body=161 status=ok
// SIG undefined FUN_1437aa16a(void)

void FUN_1437aa16a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_140197a96(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_14019648a(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140196500(param_1 + 0x15);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437aa1ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1437aa20c FUN_1437aa20c body=665 status=ok
// SIG undefined FUN_1437aa20c(void)

undefined1 (*) [16] FUN_1437aa20c(double *param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [32];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar2;
  
  dVar18 = *param_3;
  dVar19 = param_3[1];
  dVar20 = param_3[2];
  dVar3 = param_3[8];
  dVar4 = param_3[9];
  dVar17 = param_3[10];
  dVar7 = param_1[4] * dVar3;
  dVar8 = param_1[5] * dVar4;
  dVar22 = param_1[6] * dVar17;
  dVar1 = param_3[3];
  dVar2 = param_3[3];
  dVar21 = dVar8 * dVar18 - dVar7 * dVar19;
  dVar10 = dVar22 * dVar19 - dVar8 * dVar20;
  dVar6 = dVar7 * dVar20 - dVar22 * dVar18;
  dVar10 = dVar10 + dVar10;
  dVar6 = dVar6 + dVar6;
  dVar21 = dVar21 + dVar21;
  dVar11 = *param_1 * dVar3;
  dVar12 = param_1[1] * dVar4;
  dVar9 = param_1[2] * dVar17;
  dVar13 = dVar12 * dVar18 - dVar19 * dVar11;
  dVar14 = dVar9 * dVar19 - dVar20 * dVar12;
  dVar16 = dVar11 * dVar20 - dVar18 * dVar9;
  dVar14 = dVar14 + dVar14;
  dVar16 = dVar16 + dVar16;
  dVar13 = dVar13 + dVar13;
  auVar23._0_8_ = ABS(dVar3);
  auVar23._8_8_ = ABS(dVar4);
  auVar5._24_8_ = ABS(param_3[0xb]);
  auVar5._16_8_ = ABS(dVar17);
  auVar5._0_16_ = auVar23;
  auVar24 = maxpd(auVar23,auVar5._8_16_);
  auVar25._8_8_ = auVar23._0_8_;
  auVar25._0_8_ = ABS(dVar17);
  auVar25 = maxpd(auVar24,auVar25);
  dVar3 = param_1[3];
  dVar4 = param_1[7];
  dVar17 = (dVar20 * dVar14 - dVar18 * dVar13) + dVar2 * dVar16 + dVar12 + param_3[5];
  dVar12 = param_3[6];
  dVar2 = (dVar20 * dVar10 - dVar18 * dVar21) + dVar2 * dVar6 + dVar8;
  auVar15._8_4_ = SUB84(dVar17,0);
  auVar15._0_8_ = (dVar13 * dVar19 - dVar16 * dVar20) + dVar1 * dVar14 + dVar11 + param_3[4];
  auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *param_2 = auVar15;
  *(double *)param_2[1] = dVar13 * dVar1 + dVar9 + (dVar16 * dVar18 - dVar14 * dVar19) + dVar12;
  *(double *)(param_2[1] + 8) = (double)(float)auVar25._0_8_ * dVar3;
  auVar24._8_4_ = SUB84(dVar2,0);
  auVar24._0_8_ = (dVar21 * dVar19 - dVar6 * dVar20) + dVar1 * dVar10 + dVar7;
  auVar24._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  param_2[2] = auVar24;
  *(double *)param_2[3] = dVar21 * dVar1 + dVar22 + (dVar6 * dVar18 - dVar10 * dVar19);
  *(double *)(param_2[3] + 8) = dVar4;
  return param_2;
}



// FUNCTION 1437aa4a6 FUN_1437aa4a6 body=191 status=ok
// SIG undefined FUN_1437aa4a6(void)

void FUN_1437aa4a6(longlong *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 *local_38;
  int local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_48 = 0;
  FUN_140af9fb2(local_28,param_1[4],param_1[2],DAT_14c892f58);
  FUN_1400021e4(local_28,&local_38);
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  (**(code **)(*param_1 + 0x170))(param_1,puVar1,0,0x34);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437aa566 FUN_1437aa566 body=266 status=ok
// SIG undefined FUN_1437aa566(void)

void FUN_1437aa566(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 *local_38;
  int local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar2 = FUN_140c71830();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       (plVar1 = *(longlong **)(param_2 + 0xc0), plVar1 != (longlong *)0x0)) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      local_48 = 0;
      FUN_140af9fb2(local_28,plVar1[4],plVar1[2],DAT_14c892f58);
      FUN_1400021e4(local_28,&local_38);
      puVar3 = local_38;
      if (local_30 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      (**(code **)(*plVar1 + 0x170))(plVar1,puVar3,0,0x34);
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140d7233c(plVar1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437aa672 FUN_1437aa672 body=387 status=ok
// SIG undefined FUN_1437aa672(void)

void FUN_1437aa672(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_108 [32];
  double *local_e8;
  double *local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [23];
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88[0] = 1;
  local_c8 = param_1;
  local_c0 = param_2;
  (*(code *)*param_6)(local_78,param_6[1]);
  local_90 = param_3[1] + 0.0;
  local_98 = *param_4 + *param_3;
  local_a8 = (double)CONCAT71(local_a8._1_7_,1);
  (*(code *)*param_6)(local_88,param_6[1],&local_98,&local_a8);
  local_a0 = param_3[1] + param_4[1];
  local_a8 = *param_3 + *param_4;
  local_b8 = (double)CONCAT71(local_b8._1_7_,1);
  (*(code *)*param_6)(&local_98,param_6[1],&local_a8,&local_b8);
  local_b0 = param_4[1] + param_3[1];
  local_b8 = *param_3 + 0.0;
  local_61 = 1;
  (*(code *)*param_6)(&local_a8,param_6[1],&local_b8);
  local_d8 = param_5;
  local_e8 = &local_98;
  local_e0 = &local_a8;
  FUN_147dc2098(local_c8,local_c0,local_78,local_88);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437aa7f6 FUN_1437aa7f6 body=395 status=ok
// SIG undefined FUN_1437aa7f6(void)

void FUN_1437aa7f6(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_108 [32];
  double *local_e8;
  double *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [23];
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88[0] = 1;
  local_c8 = param_1;
  local_c0 = param_2;
  (*(code *)*param_6)(local_78,param_6[1]);
  local_90 = param_3[1] + 0.0;
  local_98 = *param_4 + *param_3;
  local_a8 = (double)CONCAT71(local_a8._1_7_,1);
  (*(code *)*param_6)(local_88,param_6[1],&local_98,&local_a8);
  local_a0 = param_3[1] + param_4[1];
  local_a8 = *param_3 + *param_4;
  local_b8 = (double)CONCAT71(local_b8._1_7_,1);
  (*(code *)*param_6)(&local_98,param_6[1],&local_a8,&local_b8);
  local_b0 = param_4[1] + param_3[1];
  local_b8 = *param_3 + 0.0;
  local_61 = 1;
  (*(code *)*param_6)(&local_a8,param_6[1],&local_b8);
  local_d8 = param_5;
  local_d0 = 0x3f800000;
  local_e8 = &local_98;
  local_e0 = &local_a8;
  FUN_147dc1c1c(local_c8,local_c0,local_78,local_88);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437aa9a0 FUN_1437aa9a0 body=96 status=ok
// SIG undefined FUN_1437aa9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1437aa9a0(undefined1 *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  lVar3 = *param_2;
  uVar1 = *(uint *)(*(longlong *)(lVar3 + 0xa8) + 0xd4);
  uVar5 = (ulonglong)uVar1;
  if ((DAT_14cb11798 <= (int)uVar1) && ((int)uVar1 < DAT_14cb11798 + _DAT_14c761ed4)) {
    puVar4 = *(ulonglong **)(param_1 + 8);
    iVar2 = (int)puVar4[1];
    *(uint *)(puVar4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)puVar4 + 0xc) < iVar2 + 1U) {
      FUN_1405c1a44(puVar4,iVar2);
    }
    uVar5 = *puVar4;
    *(longlong *)(uVar5 + (longlong)iVar2 * 8) = lVar3;
  }
  return CONCAT71((int7)(uVar5 >> 8),*param_1);
}



// FUNCTION 1437aaa22 FUN_1437aaa22 body=1784 status=ok
// SIG undefined FUN_1437aaa22(void)

void FUN_1437aaa22(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  byte *pbVar6;
  bool bVar7;
  double *pdVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined4 local_190;
  ulonglong local_180;
  double *local_178;
  double local_170;
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  double local_108 [2];
  double local_f8;
  double local_f0;
  undefined1 local_e1;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[7];
  dVar16 = (dVar3 * 64.0) / 360.0;
  lVar10 = -((longlong)ROUND(-0.5 - (dVar16 + dVar16)) >> 1);
  lVar15 = 4;
  if (4 < lVar10) {
    lVar15 = lVar10;
  }
  dVar16 = param_2[4];
  dVar4 = param_2[5];
  local_120 = dVar3 * -0.5;
  local_128 = 0.0;
  local_118 = 0;
  local_140 = param_2[3];
  local_130 = param_2[6] * local_140;
  local_138 = dVar4 * local_140;
  local_140 = local_140 * dVar16;
  local_f8 = dVar1;
  local_f0 = dVar2;
  FUN_1401c9a0e(&local_128,&local_110);
  uVar17 = SUB84(local_110,0);
  uVar19 = (undefined4)((ulonglong)local_110 >> 0x20);
  uVar21 = SUB84(local_108[0],0);
  uVar23 = (undefined4)((ulonglong)local_108[0] >> 0x20);
  local_178 = param_2;
  if (1e-08 < ABS(param_2[7] + -360.0)) {
    uVar5 = param_1[3];
    pbVar6 = (byte *)*param_1;
    local_128 = (double)CONCAT44((&DAT_14c758c60)[pbVar6[1]],(&DAT_14c758c60)[pbVar6[2]]);
    local_120 = (double)CONCAT44((float)pbVar6[3] * 0.003921569,(&DAT_14c758c60)[*pbVar6]);
    local_148 = dVar2 + local_108[0];
    local_150 = dVar1 + local_110;
    local_160[0] = 1;
    (*(code *)**(undefined8 **)param_1[1])(&local_140,(*(undefined8 **)param_1[1])[1]);
    local_170 = (double)CONCAT71(local_170._1_7_,1);
    (*(code *)**(undefined8 **)param_1[1])(local_160,(*(undefined8 **)param_1[1])[1],&local_f8);
    local_190 = 0x40000000;
    local_198 = &local_128;
    FUN_147dc1aba(uVar5,param_1[2],local_160,&local_140);
  }
  iVar14 = (int)lVar15;
  if (0 < iVar14) {
    local_180 = (ulonglong)(uint)-iVar14;
    iVar11 = 1;
    uVar18 = uVar17;
    uVar20 = uVar19;
    uVar22 = uVar21;
    uVar24 = uVar23;
    do {
      local_138 = (double)((float)iVar11 * (float)(dVar3 / (double)iVar14));
      local_140 = 0.0;
      local_130 = 0.0;
      FUN_1401c9a0e(&local_140,&local_128,&local_110);
      local_148 = local_120;
      local_150 = local_128;
      uVar17 = SUB84(local_128,0);
      uVar19 = (undefined4)((ulonglong)local_128 >> 0x20);
      uVar21 = SUB84(local_120,0);
      uVar23 = (undefined4)((ulonglong)local_120 >> 0x20);
      uVar5 = param_1[3];
      pbVar6 = (byte *)*param_1;
      local_128 = (double)CONCAT44((&DAT_14c758c60)[pbVar6[1]],(&DAT_14c758c60)[pbVar6[2]]);
      local_120 = (double)CONCAT44((float)pbVar6[3] * 0.003921569,(&DAT_14c758c60)[*pbVar6]);
      local_148 = local_f0 + local_148;
      local_150 = local_f8 + local_150;
      local_160[0] = 1;
      (*(code *)**(undefined8 **)param_1[1])
                (&local_140,(*(undefined8 **)param_1[1])[1],&local_150,local_160);
      local_168 = (double)CONCAT44(uVar24,uVar22) + local_f0;
      local_170 = (double)CONCAT44(uVar20,uVar18) + local_f8;
      local_e1 = 1;
      (*(code *)**(undefined8 **)param_1[1])
                (local_160,(*(undefined8 **)param_1[1])[1],&local_170,&local_e1);
      local_190 = 0x40000000;
      local_198 = &local_128;
      FUN_147dc1aba(uVar5,param_1[2],local_160,&local_140);
      iVar9 = (int)local_180 + iVar11;
      iVar11 = iVar11 + 1;
      uVar18 = uVar17;
      uVar20 = uVar19;
      uVar22 = uVar21;
      uVar24 = uVar23;
    } while (iVar9 != 0);
  }
  pdVar8 = local_178;
  local_180 = param_1[3];
  pbVar6 = (byte *)*param_1;
  local_128 = (double)CONCAT44((&DAT_14c758c60)[pbVar6[1]],(&DAT_14c758c60)[pbVar6[2]]);
  local_120 = (double)CONCAT44((float)pbVar6[3] * 0.003921569,(&DAT_14c758c60)[*pbVar6]);
  bVar7 = ABS(local_178[7] + -360.0) <= 1e-08;
  pdVar13 = (double *)&DAT_14c8463f8;
  if (bVar7) {
    pdVar13 = local_108;
  }
  pdVar12 = (double *)&DAT_14c8463f0;
  if (bVar7) {
    pdVar12 = &local_110;
  }
  local_148 = *pdVar13 + local_f0;
  local_150 = *pdVar12 + local_f8;
  local_160[0] = 1;
  (*(code *)**(undefined8 **)param_1[1])(&local_140,(*(undefined8 **)param_1[1])[1],&local_150);
  local_168 = (double)CONCAT44(uVar23,uVar21) + local_f0;
  local_170 = (double)CONCAT44(uVar19,uVar17) + local_f8;
  local_e1 = 1;
  (*(code *)**(undefined8 **)param_1[1])(local_160,(*(undefined8 **)param_1[1])[1],&local_170);
  local_190 = 0x40000000;
  local_198 = &local_128;
  FUN_147dc1aba(local_180,param_1[2],local_160,&local_140);
  local_180 = param_1[3];
  pbVar6 = (byte *)*param_1;
  local_128 = (double)CONCAT44((&DAT_14c758c60)[pbVar6[1]],(&DAT_14c758c60)[pbVar6[2]]);
  local_120 = (double)CONCAT44((float)pbVar6[3] * 0.003921569,(&DAT_14c758c60)[*pbVar6]);
  local_148 = dVar4 * pdVar8[3] + local_f0;
  local_150 = dVar16 * pdVar8[3] + local_f8;
  local_160[0] = 1;
  (*(code *)**(undefined8 **)param_1[1])
            (&local_140,(*(undefined8 **)param_1[1])[1],&local_150,local_160);
  local_170 = (double)CONCAT71(local_170._1_7_,1);
  (*(code *)**(undefined8 **)param_1[1])
            (local_160,(*(undefined8 **)param_1[1])[1],&local_f8,&local_170);
  local_190 = 0x40800000;
  local_198 = &local_128;
  FUN_147dc1aba(local_180,param_1[2],local_160,&local_140);
  if ((local_e0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437ab11c FUN_1437ab11c body=132 status=ok
// SIG undefined FUN_1437ab11c(void)

undefined8 FUN_1437ab11c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [44];
  undefined1 local_4c [8];
  undefined1 local_44 [4];
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)*param_2;
  uVar2 = *param_1;
  (**(code **)(*plVar1 + 0x2c8))(plVar1,local_44);
  (**(code **)(*plVar1 + 0x310))(plVar1,local_4c);
  local_40 = local_4c;
  local_38 = local_44;
  FUN_147dc25f0(uVar2,local_2c,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ab1a2 FUN_1437ab1a2 body=768 status=ok
// SIG undefined FUN_1437ab1a2(void)

ulonglong FUN_1437ab1a2(double *param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar14 = (double)(longlong)param_1[2];
  dVar1 = param_1[3];
  dVar16 = (double)(longlong)dVar1 * 0.5;
  dVar19 = (param_2[1] - param_1[1]) / dVar14 + dVar16;
  uVar13 = (longlong)ROUND(dVar19 + dVar19 + -0.5) >> 1;
  uVar11 = 0;
  if ((longlong)uVar13 < (longlong)dVar1) {
    dVar19 = (*param_2 - *param_1) / dVar14 + dVar16;
    local_a0 = (longlong)ROUND(dVar19 + dVar19 + -0.5) >> 1;
    if (local_a0 < (longlong)dVar1) {
      dVar19 = (param_2[4] - param_1[1]) / dVar14 + dVar16;
      uVar7 = (ulonglong)ROUND(dVar19 + dVar19 + -0.5);
      dVar16 = (param_2[3] - *param_1) / dVar14 + dVar16;
      uVar9 = (ulonglong)ROUND(dVar16 + dVar16 + -0.5);
      lVar8 = (longlong)uVar7 >> 1;
      lVar10 = (longlong)uVar9 >> 1;
      if (-1 < (longlong)(uVar9 | uVar7) >> 1) {
        lVar12 = (longlong)dVar1 + -1;
        uVar11 = 0;
        local_90 = 0;
        if (0 < local_a0) {
          local_90 = local_a0;
        }
        if (lVar12 <= lVar10) {
          lVar10 = lVar12;
        }
        if (lVar8 < lVar12) {
          lVar12 = lVar8;
        }
        lVar8 = 0;
        if (0 < lVar12) {
          lVar8 = lVar12;
        }
        if ((longlong)uVar13 <= lVar8) {
          uVar11 = 0;
          local_98 = 0;
          if (0 < lVar10) {
            local_98 = lVar10;
          }
          local_88 = lVar12;
          if ((longlong)uVar13 < 1) {
            uVar13 = uVar11;
          }
          do {
            lVar8 = local_90;
            if (local_a0 <= local_98) {
              do {
                local_80 = lVar8;
                local_78 = uVar13;
                if ((lVar8 < (longlong)param_1[3]) && ((longlong)uVar13 < (longlong)param_1[3])) {
                  puVar2 = (undefined8 *)param_3[1];
                  if ((code *)*param_3 == FUN_147dc2bc0) {
                    puVar3 = (undefined8 *)puVar2[1];
                    if ((code *)*puVar2 == FUN_147dc2cac) {
                      pdVar4 = (double *)*puVar3;
                      dVar1 = pdVar4[2];
                      dVar14 = (double)((longlong)pdVar4[3] * (longlong)dVar1) * 0.5;
                      dVar18 = (double)(longlong)((longlong)dVar1 * uVar13) + (pdVar4[1] - dVar14);
                      dVar19 = (double)((longlong)dVar1 * lVar8) + (*pdVar4 - dVar14);
                      dVar15 = dVar18 + (double)(longlong)dVar1;
                      dVar17 = (double)(longlong)dVar1 + dVar19;
                      dVar1 = *(double *)puVar3[2];
                      dVar14 = ((double *)puVar3[2])[1];
                      dVar16 = dVar14;
                      if (dVar15 <= dVar14) {
                        dVar16 = dVar15;
                      }
                      dVar15 = dVar1;
                      if (dVar17 <= dVar1) {
                        dVar15 = dVar17;
                      }
                      if (dVar18 <= dVar16) {
                        dVar18 = dVar16;
                      }
                      if (dVar19 <= dVar15) {
                        dVar19 = dVar15;
                      }
                      if ((dVar1 - dVar19) * (dVar1 - dVar19) +
                          (dVar14 - dVar18) * (dVar14 - dVar18) < (double)puVar3[1]) {
                        (**(code **)puVar3[3])(((undefined8 *)puVar3[3])[1],&local_80);
                        *(int *)puVar3[4] = *(int *)puVar3[4] + 1;
                      }
                    }
                    else {
                      (*(code *)*puVar2)(puVar3,&local_80);
                    }
                  }
                  else {
                    cVar6 = (*(code *)*param_3)(puVar2,&local_80);
                    if (cVar6 == '\0') goto LAB_1437ab453;
                  }
                  uVar11 = (ulonglong)((int)uVar11 + 1);
                }
                bVar5 = lVar8 < lVar10;
                lVar8 = lVar8 + 1;
              } while (bVar5);
            }
            bVar5 = (longlong)uVar13 < local_88;
            uVar13 = uVar13 + 1;
          } while (bVar5);
        }
      }
    }
  }
LAB_1437ab453:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1437ab4c0 FUN_1437ab4c0 body=29 status=ok
// SIG undefined FUN_1437ab4c0(void)

undefined8 FUN_1437ab4c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437ab4f2 FUN_1437ab4f2 body=85 status=ok
// SIG undefined FUN_1437ab4f2(void)

void FUN_1437ab4f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1f400;
  return;
}



// FUNCTION 1437ab548 FUN_1437ab548 body=85 status=ok
// SIG undefined FUN_1437ab548(void)

void FUN_1437ab548(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1f400;
  return;
}



// FUNCTION 1437ab59e FUN_1437ab59e body=118 status=ok
// SIG undefined FUN_1437ab59e(void)

void FUN_1437ab59e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab1f400;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437ab605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437ab61c FUN_1437ab61c body=19 status=ok
// SIG undefined FUN_1437ab61c(void)

undefined1 FUN_1437ab61c(undefined8 param_1,undefined8 param_2)

{
  FUN_1437ab630(param_2);
  return 1;
}



// FUNCTION 1437ab630 FUN_1437ab630 body=1226 status=ok
// SIG undefined FUN_1437ab630(void)

void FUN_1437ab630(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  
  DAT_14c761ed0 = true;
  if (*(int *)(param_1 + 1) == 1) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)*param_1;
    }
    lVar16 = 0;
    while( true ) {
      uVar4 = *(ushort *)((longlong)puVar6 + lVar16);
      uVar23 = (uint)uVar4;
      uVar5 = *(ushort *)((longlong)&DAT_149e25dfc + lVar16);
      uVar28 = (uint)uVar5;
      if (uVar4 != uVar5) {
        if ((uVar5 | uVar4) < 0x80) {
          uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_1437ab680;
        }
        iVar8 = uVar23 - uVar28;
        goto LAB_1437ab6ab;
      }
      if (uVar4 == 0) break;
LAB_1437ab680:
      lVar16 = lVar16 + 2;
    }
    iVar8 = 0;
LAB_1437ab6ab:
    DAT_14c761ed0 = iVar8 != 0;
  }
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    plVar7 = *(longlong **)(DAT_14cb0d2b0 + 0x1148);
    plVar1 = plVar7 + *(int *)(DAT_14cb0d2b0 + 0x1150);
    do {
      if ((*(longlong *)(*plVar7 + 0x360) != 0) &&
         (((bVar3 = *(byte *)(*(longlong *)(*plVar7 + 0x360) + 0x152), bVar3 == 1 ||
           ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))) &&
          (lVar16 = FUN_1448a6d9c(), lVar16 != 0)))) {
        iVar8 = *(int *)(lVar16 + 0x58);
        if (iVar8 == 0) {
          uVar25 = 1;
          uVar29 = 0;
          uVar19 = 0;
          iVar9 = 0;
        }
        else {
          puVar18 = *(uint **)(lVar16 + 0x50);
          if (*(uint **)(lVar16 + 0x50) == (uint *)0x0) {
            puVar18 = (uint *)(lVar16 + 0x40);
          }
          uVar23 = *puVar18;
          if (uVar23 == 0) {
            iVar9 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar9 = iVar8 + -1;
            }
            uVar29 = 0;
            uVar25 = (ulonglong)(uint)(iVar9 >> 5);
            if (iVar9 >> 5 < 1) {
              uVar25 = uVar29;
            }
            uVar19 = 0;
            do {
              if (uVar25 == uVar29) goto LAB_1437ab79b;
              uVar19 = (ulonglong)((int)uVar19 + 0x20);
              uVar23 = puVar18[uVar29 + 1];
              uVar29 = uVar29 + 1;
            } while (uVar23 == 0);
          }
          else {
            uVar29 = 0;
            uVar19 = 0;
          }
          uVar25 = (ulonglong)(-uVar23 & uVar23);
          uVar21 = uVar25 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar9 = ((int)uVar19 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar9) {
            iVar9 = iVar8;
          }
        }
        if (iVar9 != iVar8) {
          uVar23 = 0xffffffff;
          iVar24 = iVar8;
          do {
            lVar22 = *(longlong *)(lVar16 + 0x30) + (longlong)iVar9 * 0x60;
            lVar17 = *(longlong *)(lVar16 + 0x30) + (longlong)iVar9 * 0x60;
            puVar18 = (uint *)(lVar17 + 0x18);
            iVar9 = *(int *)(lVar17 + 0x30);
            if (iVar9 == 0) {
              uVar21 = 1;
              uVar30 = 0;
              iVar27 = 0;
              iVar10 = 0;
            }
            else {
              puVar14 = *(uint **)(lVar22 + 0x28);
              if (*(uint **)(lVar22 + 0x28) == (uint *)0x0) {
                puVar14 = puVar18;
              }
              uVar28 = *puVar14;
              if (uVar28 == 0) {
                iVar10 = iVar9 + 0x1e;
                if (-1 < iVar9 + -1) {
                  iVar10 = iVar9 + -1;
                }
                uVar30 = 0;
                uVar21 = (ulonglong)(uint)(iVar10 >> 5);
                if (iVar10 >> 5 < 1) {
                  uVar21 = uVar30;
                }
                iVar27 = 0;
                do {
                  if (uVar21 == uVar30) goto LAB_1437ab9f6;
                  iVar27 = iVar27 + 0x20;
                  uVar28 = puVar14[uVar30 + 1];
                  uVar30 = uVar30 + 1;
                } while (uVar28 == 0);
              }
              else {
                uVar30 = 0;
                iVar27 = 0;
              }
              uVar21 = (ulonglong)(-uVar28 & uVar28);
              uVar20 = uVar21 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar10 = (iVar27 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (iVar9 <= iVar10) {
                iVar10 = iVar9;
              }
            }
            if (iVar10 != iVar9) {
              uVar28 = 0xffffffff;
              uVar20 = uVar19;
              iVar24 = iVar9;
              do {
                lVar17 = *(longlong *)(lVar22 + 8);
                lVar15 = (longlong)iVar10 * 0x30;
                lVar26 = (longlong)*(int *)(lVar17 + 0x20 + lVar15);
                if (lVar26 != 0) {
                  uVar20 = CONCAT71((int7)(uVar20 >> 8),
                                    (*(byte *)(lVar17 + 0x10 + lVar15) ^ 1) & DAT_14c761ed0);
                  lVar17 = *(longlong *)(lVar17 + 0x18 + lVar15);
                  lVar15 = 0;
                  do {
                    FUN_140455b10(*(undefined8 *)(lVar17 + lVar15),uVar20);
                    lVar15 = lVar15 + 8;
                  } while (lVar26 * 8 != lVar15);
                  iVar24 = *(int *)(lVar22 + 0x30);
                }
                uVar28 = uVar28 & ~(uint)uVar21;
                puVar14 = *(uint **)(lVar22 + 0x28);
                if (*(uint **)(lVar22 + 0x28) == (uint *)0x0) {
                  puVar14 = puVar18;
                }
                iVar10 = (int)uVar30;
                lVar17 = (longlong)iVar10;
                uVar11 = puVar14[lVar17] & uVar28;
                if (uVar11 == 0) {
                  iVar12 = iVar24 + 0x1e;
                  if (-1 < iVar24 + -1) {
                    iVar12 = iVar24 + -1;
                  }
                  iVar12 = iVar12 >> 5;
                  iVar27 = iVar27 + 0x20;
                  iVar13 = iVar12;
                  if (iVar12 < iVar10) {
                    iVar13 = iVar10;
                  }
                  if (iVar10 < iVar12) {
                    lVar15 = 0;
                    do {
                      uVar11 = puVar14[lVar17 + lVar15 + 1];
                      if (uVar11 != 0) {
                        uVar30 = (ulonglong)(iVar10 + (int)lVar15 + 1);
                        uVar28 = 0xffffffff;
                        goto LAB_1437ab98d;
                      }
                      iVar27 = iVar27 + 0x20;
                      lVar15 = lVar15 + 1;
                    } while (iVar13 - lVar17 != lVar15);
                    uVar28 = 0xffffffff;
                    iVar10 = iVar13;
                  }
                  uVar30 = (ulonglong)(iVar10 + 1);
                  iVar10 = iVar24;
                }
                else {
LAB_1437ab98d:
                  uVar21 = (ulonglong)(-uVar11 & uVar11);
                  uVar2 = uVar21 * 2 + 1;
                  lVar17 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                    }
                  }
                  iVar10 = (iVar27 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                  if (iVar24 <= iVar10) {
                    iVar10 = iVar24;
                  }
                }
              } while (iVar10 != iVar9);
              iVar24 = *(int *)(lVar16 + 0x58);
            }
LAB_1437ab9f6:
            uVar23 = uVar23 & ~(uint)uVar25;
            puVar18 = *(uint **)(lVar16 + 0x50);
            if (*(uint **)(lVar16 + 0x50) == (uint *)0x0) {
              puVar18 = (uint *)(lVar16 + 0x40);
            }
            iVar9 = (int)uVar29;
            lVar22 = (longlong)iVar9;
            uVar28 = puVar18[lVar22] & uVar23;
            if (uVar28 == 0) {
              iVar10 = iVar24 + 0x1e;
              if (-1 < iVar24 + -1) {
                iVar10 = iVar24 + -1;
              }
              iVar10 = iVar10 >> 5;
              uVar19 = (ulonglong)((int)uVar19 + 0x20);
              iVar27 = iVar10;
              if (iVar10 < iVar9) {
                iVar27 = iVar9;
              }
              if (iVar9 < iVar10) {
                lVar17 = 0;
                do {
                  uVar28 = puVar18[lVar22 + lVar17 + 1];
                  if (uVar28 != 0) {
                    uVar29 = (ulonglong)(iVar9 + (int)lVar17 + 1);
                    uVar23 = 0xffffffff;
                    goto LAB_1437aba72;
                  }
                  uVar19 = (ulonglong)((int)uVar19 + 0x20);
                  lVar17 = lVar17 + 1;
                } while (iVar27 - lVar22 != lVar17);
                uVar23 = 0xffffffff;
                iVar9 = iVar27;
              }
              uVar29 = (ulonglong)(iVar9 + 1);
              iVar9 = iVar24;
            }
            else {
LAB_1437aba72:
              uVar25 = (ulonglong)(-uVar28 & uVar28);
              uVar21 = uVar25 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              iVar9 = ((int)uVar19 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
              if (iVar24 <= iVar9) {
                iVar9 = iVar24;
              }
            }
          } while (iVar9 != iVar8);
        }
      }
LAB_1437ab79b:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  return;
}



// FUNCTION 1437abafe FUN_1437abafe body=76 status=ok
// SIG undefined FUN_1437abafe(void)

undefined8 FUN_1437abafe(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2 + 0x7c;
  FUN_1414f056c(*param_1,local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437abb4c FUN_1437abb4c body=71 status=ok
// SIG undefined FUN_1437abb4c(void)

void FUN_1437abb4c(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2 + 0x7c;
  FUN_1414f056c(*param_1,local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437abba0 FUN_1437abba0 body=162 status=ok
// SIG undefined FUN_1437abba0(void)

void FUN_1437abba0(longlong *param_1,undefined8 param_2)

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
        goto LAB_1437abc2d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1437abc2d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1437abc42 FUN_1437abc42 body=218 status=ok
// SIG undefined FUN_1437abc42(void)

int FUN_1437abc42(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar4 = 0;
    bVar11 = *plVar1 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      lVar3 = (longlong)iVar8;
      iVar10 = iVar8;
      lVar7 = lVar3;
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar5) {
        iVar2 = iVar5;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar2;
        if (lVar6 <= lVar7) break;
        iVar10 = iVar10 + 1;
        iVar9 = iVar10;
      } while (bVar11 == (plVar1[lVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (iVar4 != iVar8) {
          memmove(plVar1 + iVar4,plVar1 + lVar3,(longlong)(iVar9 - iVar8) << 3);
        }
        iVar4 = iVar4 + (iVar9 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < lVar6);
    *(int *)(param_1 + 1) = iVar4;
    iVar5 = iVar5 - iVar4;
  }
  return iVar5;
}



// FUNCTION 1437abd1c FUN_1437abd1c body=706 status=ok
// SIG undefined FUN_1437abd1c(void)

undefined8 FUN_1437abd1c(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1 = (longlong *)*param_1;
  plVar2 = *(longlong **)(param_2 + 0x10);
  plVar7 = plVar2;
  if ((longlong)*(int *)(param_2 + 0x18) != 0) {
    plVar6 = plVar2;
    plVar7 = plVar2 + *(int *)(param_2 + 0x18);
    do {
      while (*(char *)(*plVar6 + 0x58) == '\x01') {
        lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        bVar1 = *(byte *)(lVar5 + 0x152);
        if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) break;
        iVar4 = FUN_14490d72a(lVar5);
        plVar8 = plVar7;
        if (iVar4 != 2) {
          if (iVar4 == 1) goto LAB_1437abe11;
          break;
        }
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          lVar5 = param_1[4];
        }
        else {
          lVar5 = 0;
        }
        cVar3 = FUN_1400900b4(lVar5);
        if (cVar3 != '\0') break;
LAB_1437abe11:
        while( true ) {
          plVar8 = plVar8 + -1;
          lVar5 = *plVar8;
          if (*(char *)(lVar5 + 0x58) != '\x01') break;
          lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
          bVar1 = *(byte *)(lVar5 + 0x152);
          if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
LAB_1437abe7b:
            lVar5 = *plVar8;
            break;
          }
          iVar4 = FUN_14490d72a(lVar5);
          if (iVar4 == 2) {
            if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
              lVar5 = param_1[4];
            }
            else {
              lVar5 = 0;
            }
            cVar3 = FUN_1400900b4(lVar5);
            if (cVar3 != '\0') goto LAB_1437abe7b;
          }
          else if (iVar4 != 1) goto LAB_1437abe7b;
          plVar7 = plVar6;
          if (plVar8 == plVar6) goto LAB_1437abd44;
        }
        if (DAT_14c950c29 == '\x01') {
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar5 = *plVar8;
          }
        }
        *plVar6 = lVar5;
        plVar6 = plVar6 + 1;
        plVar7 = plVar8;
        if (plVar8 == plVar6) goto LAB_1437abd44;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar7);
  }
LAB_1437abd44:
  FUN_147dc63a4(param_2 + 0x10,(ulonglong)((longlong)plVar7 - (longlong)plVar2) >> 3 & 0xffffffff);
  plVar2 = *(longlong **)(param_2 + 0x20);
  plVar7 = plVar2;
  if ((longlong)*(int *)(param_2 + 0x28) != 0) {
    plVar6 = plVar2;
    plVar7 = plVar2 + *(int *)(param_2 + 0x28);
    do {
      while (*(char *)(*plVar6 + 0x58) == '\x01') {
        lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        bVar1 = *(byte *)(lVar5 + 0x152);
        if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) break;
        iVar4 = FUN_14490d72a(lVar5);
        plVar8 = plVar7;
        if (iVar4 != 2) {
          if (iVar4 == 1) goto LAB_1437abf2d;
          break;
        }
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          lVar5 = param_1[4];
        }
        else {
          lVar5 = 0;
        }
        cVar3 = FUN_1400900b4(lVar5);
        if (cVar3 != '\0') break;
LAB_1437abf2d:
        while( true ) {
          plVar8 = plVar8 + -1;
          lVar5 = *plVar8;
          if (*(char *)(lVar5 + 0x58) != '\x01') break;
          lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
          bVar1 = *(byte *)(lVar5 + 0x152);
          if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
LAB_1437abf94:
            lVar5 = *plVar8;
            break;
          }
          iVar4 = FUN_14490d72a(lVar5);
          if (iVar4 == 2) {
            if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
              lVar5 = param_1[4];
            }
            else {
              lVar5 = 0;
            }
            cVar3 = FUN_1400900b4(lVar5);
            if (cVar3 != '\0') goto LAB_1437abf94;
          }
          else if (iVar4 != 1) goto LAB_1437abf94;
          plVar7 = plVar6;
          if (plVar8 == plVar6) goto LAB_1437abd6e;
        }
        if (DAT_14c950c29 == '\x01') {
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar5 = *plVar8;
          }
        }
        *plVar6 = lVar5;
        plVar6 = plVar6 + 1;
        plVar7 = plVar8;
        if (plVar8 == plVar6) goto LAB_1437abd6e;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar7);
  }
LAB_1437abd6e:
  FUN_147dc63a4(param_2 + 0x20,(ulonglong)((longlong)plVar7 - (longlong)plVar2) >> 3 & 0xffffffff);
  FUN_147dbebd4(param_2);
  return 1;
}



// FUNCTION 1437abfde FUN_1437abfde body=218 status=ok
// SIG undefined FUN_1437abfde(void)

undefined8 FUN_1437abfde(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_2 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      local_48 = *(undefined8 *)(lVar2 + lVar6);
      cVar4 = (*(code *)**(undefined8 **)(lVar3 + 8))((*(undefined8 **)(lVar3 + 8))[1],&local_48);
      if (cVar4 == '\0') {
        uVar5 = 0;
        goto LAB_1437ac092;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if ((longlong)iVar1 == 0) {
    uVar5 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x20);
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      local_48 = *(undefined8 *)(lVar2 + lVar6);
      uVar5 = (*(code *)**(undefined8 **)(lVar3 + 8))((*(undefined8 **)(lVar3 + 8))[1],&local_48);
      if ((char)uVar5 == '\0') break;
      bVar7 = (longlong)iVar1 * 8 + -8 != lVar6;
      lVar6 = lVar6 + 8;
    } while (bVar7);
  }
LAB_1437ac092:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1437ac0ba FUN_1437ac0ba body=5905 status=ok
// SIG undefined FUN_1437ac0ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1437ac0ba(longlong param_1,double *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  double *pdVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong extraout_RAX;
  longlong lVar8;
  ulonglong extraout_RAX_00;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  double *pdVar13;
  float *pfVar14;
  float *pfVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  ulonglong uVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  undefined1 auStack_1f8 [36];
  float local_1d4;
  double local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  double *local_148;
  undefined8 local_140;
  undefined1 local_138 [12];
  undefined4 uStack_12c;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  auVar63 = _DAT_1499387d0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar54 = *param_2;
  dVar44 = param_2[6];
  if (dVar44 != 0.0) {
    local_1d4 = (float)*(int *)(param_2 + 1);
    puVar2 = *(undefined8 **)(param_1 + 8);
    pdVar3 = (double *)puVar2[2];
    local_158 = puVar2[1];
    local_150 = *puVar2;
    local_140 = puVar2[3];
    local_160 = dVar44;
    local_148 = pdVar3;
    if (*(char *)((longlong)pdVar3 + 0x31) == '\x01') {
      uVar5 = SUB84(dVar54,0);
      iVar7 = (int)((ulonglong)dVar54 >> 0x20);
      uVar6 = (uint)((ulonglong)dVar54 >> 0x10);
      if (*(char *)(pdVar3 + 10) == '\x01') {
        pdVar13 = (double *)(ulonglong)*(uint *)(pdVar3 + 0xc);
        if (*(uint *)(pdVar3 + 0xc) != *(uint *)((longlong)pdVar3 + 0x8c)) {
          pdVar13 = pdVar3 + 0x12;
          if ((double *)pdVar3[0x13] != (double *)0x0) {
            pdVar13 = (double *)pdVar3[0x13];
          }
          iVar7 = *(int *)((longlong)pdVar13 +
                          (ulonglong)
                          (*(int *)(pdVar3 + 0x14) - 1U &
                          iVar7 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                          (uVar6 << 0x13 | uVar6 & 0xffff) + ((uVar5 & 0xffff) >> 4)) * 4);
          if (iVar7 != -1) {
            pdVar13 = (double *)pdVar3[0xb];
            do {
              if (pdVar13[(longlong)iVar7 * 2] == dVar54) goto LAB_1437acb70;
              iVar7 = *(int *)(pdVar13 + (longlong)iVar7 * 2 + 1);
            } while (iVar7 != -1);
          }
        }
LAB_1437ac2c4:
        fVar64 = local_1d4;
        if (*(char *)((longlong)pdVar3 + 0x1c) == '\0') {
          fVar64 = *(float *)(pdVar3 + 3);
        }
        auVar62 = *(undefined1 (*) [16])(pdVar3 + 7);
        dVar54 = (double)DAT_1499387d0;
        dVar44 = DAT_1499387d0._8_8_;
        auVar31 = divpd(auVar62,_DAT_1499387d0);
        auVar40._8_8_ = 0;
        auVar40._0_8_ = pdVar3[9];
        auVar40 = divpd(auVar40,_DAT_1499387d0);
        auVar31 = roundpd(auVar31,auVar31,3);
        auVar40 = roundpd(auVar40,auVar40,3);
        dVar24 = (auVar62._0_8_ - auVar31._0_8_ * dVar54) * 0.008726646259971648;
        dVar22 = (auVar62._8_8_ - auVar31._8_8_ * dVar44) * 0.008726646259971648;
        dVar23 = (pdVar3[9] - auVar40._0_8_ * dVar54) * 0.008726646259971648;
        dVar25 = (0.0 - auVar40._8_8_ * dVar44) * 0.008726646259971648;
        dVar16 = sin(dVar24);
        dVar17 = sin(dVar22);
        dVar18 = sin(dVar23);
        sin(dVar25);
        dVar19 = cos(dVar24);
        dVar20 = cos(dVar22);
        dVar21 = cos(dVar23);
        cos(dVar25);
        dVar24 = -(dVar20 * dVar16 * dVar18) + dVar17 * dVar19 * dVar21;
        dVar22 = dVar17 * dVar16 * dVar18 + dVar20 * dVar19 * dVar21;
        dVar23 = dVar16 * dVar17 * dVar21 - dVar19 * dVar20 * dVar18;
        dVar25 = -(dVar16 * dVar20 * dVar21) - dVar19 * dVar17 * dVar18;
        local_1d0 = pdVar3[2];
        local_1b8 = *pdVar3;
        dStack_1b0 = pdVar3[1];
        lVar8 = (longlong)*(int *)(pdVar3 + 0x20);
        local_1a8._8_4_ = SUB84(dVar25,0);
        local_1a8._0_8_ = dVar23;
        local_1a8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        local_1c8._8_4_ = SUB84(dVar22,0);
        local_1c8._0_8_ = dVar24;
        local_1c8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        if (lVar8 == 0) {
          if (0.0 < fVar64) {
            dVar22 = DAT_14c8462e8 * 1.0;
            dVar54 = DAT_14c8462e0 * dVar23 - (double)local_1a8._8_8_ * DAT_14c8462d8;
            dVar25 = dVar22 * (double)local_1a8._8_8_ - dVar24 * DAT_14c8462e0;
            dVar44 = DAT_14c8462d8 * dVar24 - dVar23 * dVar22;
            dVar25 = dVar25 + dVar25;
            dVar44 = dVar44 + dVar44;
            dVar54 = dVar54 + dVar54;
            local_108 = dVar54 * (double)local_1c8._8_8_ + dVar22 +
                        (dVar44 * dVar23 - dVar25 * (double)local_1a8._8_8_);
            local_118 = (dVar54 * (double)local_1a8._8_8_ - dVar44 * dVar24) +
                        (double)local_1c8._8_8_ * dVar25 + DAT_14c8462d8;
            dStack_110 = (dVar24 * dVar25 - dVar23 * dVar54) +
                         (double)local_1c8._8_8_ * dVar44 + DAT_14c8462e0;
            auVar63 = maxpd(_DAT_149934d80,_DAT_149934d80);
            auVar63 = maxpd(auVar63,_DAT_149934d80);
            local_120 = (double)(float)auVar63._0_8_ * (double)fVar64;
            dVar25 = DAT_14c8464f0 * 1.0;
            dVar54 = DAT_14c8464e8 * dVar23 - (double)local_1a8._8_8_ * DAT_14c8464e0;
            dVar44 = dVar25 * (double)local_1a8._8_8_ - dVar24 * DAT_14c8464e8;
            dVar22 = DAT_14c8464e0 * dVar24 - dVar23 * dVar25;
            dVar44 = dVar44 + dVar44;
            dVar22 = dVar22 + dVar22;
            dVar54 = dVar54 + dVar54;
            local_128 = local_1d0 +
                        dVar54 * (double)local_1c8._8_8_ + dVar25 +
                        (dVar22 * dVar23 - dVar44 * (double)local_1a8._8_8_);
            stack0xfffffffffffffed0 =
                 dStack_1b0 +
                 (dVar24 * dVar44 - dVar23 * dVar54) +
                 (double)local_1c8._8_8_ * dVar22 + DAT_14c8464e8;
            local_138._0_8_ =
                 local_1b8 +
                 (dVar54 * (double)local_1a8._8_8_ - dVar22 * dVar24) +
                 (double)local_1c8._8_8_ * dVar44 + DAT_14c8464e0;
            local_100 = 360.0;
            FUN_1437ad7cc(&local_160);
          }
        }
        else {
          dVar16 = pdVar3[0x1f];
          uVar9 = lVar8 * 9;
          local_198._8_4_ = SUB84(dVar24,0);
          local_198._0_8_ = dVar25;
          local_198._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          pfVar15 = (float *)((longlong)dVar16 + 0x10);
          auVar62 = _DAT_149931180;
          local_188 = dVar23;
          dStack_180 = dVar22;
          local_178 = dVar22;
          dStack_170 = dVar22;
          do {
            if (*(char *)(pfVar15 + -4) == '\x01') {
              fVar64 = pfVar15[-3] * local_1d4;
            }
            else {
              fVar64 = pfVar15[-2];
            }
            fVar61 = 360.0;
            if ((*(char *)(pfVar15 + -1) == '\x01') && (fVar61 = *pfVar15 + 0.0, 360.0 <= fVar61)) {
              fVar61 = 360.0;
            }
            auVar31 = *(undefined1 (*) [16])(pfVar15 + 8);
            auVar40 = divpd(auVar31,auVar63);
            auVar38._8_8_ = 0;
            auVar38._0_8_ = *(double *)(pfVar15 + 0xc);
            auVar42 = divpd(auVar38,auVar63);
            auVar40 = roundpd(auVar40,auVar40,3);
            auVar42 = roundpd(auVar42,auVar42,3);
            auVar55._0_8_ = auVar31._0_8_ - auVar40._0_8_ * dVar54;
            auVar55._8_8_ = auVar31._8_8_ - auVar40._8_8_ * dVar44;
            auVar49._0_8_ = *(double *)(pfVar15 + 0xc) - auVar42._0_8_ * dVar54;
            auVar49._8_8_ = 0.0 - auVar42._8_8_ * dVar44;
            auVar47._0_8_ = auVar55._0_8_ + dVar54;
            auVar47._8_8_ = auVar55._8_8_ + dVar44;
            auVar45._0_8_ = auVar49._0_8_ + dVar54;
            auVar45._8_8_ = auVar49._8_8_ + dVar44;
            auVar42._8_8_ = -(ulonglong)(0.0 <= auVar55._8_8_);
            auVar42._0_8_ = -(ulonglong)(0.0 <= auVar55._0_8_);
            auVar42 = blendvpd(auVar47,auVar55,auVar42);
            auVar26._8_8_ = -(ulonglong)(0.0 <= auVar49._8_8_);
            auVar26._0_8_ = -(ulonglong)(0.0 <= auVar49._0_8_);
            auVar40 = blendvpd(auVar45,auVar49,auVar26);
            auVar50._0_8_ = auVar42._0_8_ + -360.0;
            auVar50._8_8_ = auVar42._8_8_ + -360.0;
            auVar56._0_8_ = auVar40._0_8_ + -360.0;
            auVar56._8_8_ = auVar40._8_8_ + -360.0;
            auVar27._8_8_ = -(ulonglong)(180.0 < auVar42._8_8_);
            auVar27._0_8_ = -(ulonglong)(180.0 < auVar42._0_8_);
            auVar42 = blendvpd(auVar42,auVar50,auVar27);
            auVar28._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
            auVar28._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
            auVar40 = blendvpd(auVar40,auVar56,auVar28);
            auVar29._8_8_ =
                 -(ulonglong)(9.999999747378752e-05 < (double)(auVar42._8_8_ & auVar62._8_8_));
            auVar29._0_8_ =
                 -(ulonglong)(9.999999747378752e-05 < (double)(auVar42._0_8_ & auVar62._0_8_));
            uVar6 = movmskpd((int)uVar9,auVar29);
            uVar9 = (ulonglong)uVar6;
            auVar30._8_8_ =
                 -(ulonglong)(9.999999747378752e-05 < (double)(auVar40._8_8_ & auVar62._8_8_));
            auVar30._0_8_ =
                 -(ulonglong)(9.999999747378752e-05 < (double)(auVar40._0_8_ & auVar62._0_8_));
            iVar7 = movmskpd((int)pdVar13,auVar30);
            uVar6 = iVar7 << 2 | uVar6;
            pdVar13 = (double *)(ulonglong)uVar6;
            dVar24 = DAT_14c8462e8;
            dVar22 = DAT_14c8462d8;
            dVar23 = DAT_14c8462e0;
            if (uVar6 != 0) {
              dVar22 = (double)FUN_144719204(auVar31._0_8_,0x4076800000000000);
              dVar23 = (double)FUN_144719204(auVar31._8_8_,0x4076800000000000);
              dVar24 = sin(dVar22 * 0.017453292519943295);
              dVar25 = cos(dVar22 * 0.017453292519943295);
              dVar17 = sin(dVar23 * 0.017453292519943295);
              dVar22 = cos(dVar23 * 0.017453292519943295);
              uVar9 = extraout_RAX;
              auVar62 = _DAT_149931180;
              dVar22 = dVar22 * dVar25;
              dVar23 = dVar17 * dVar25;
            }
            auVar31 = _DAT_149931180;
            dVar25 = (double)(fVar64 + 0.0);
            if (1e-08 < (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & auVar62._4_4_,
                                         SUB84(dVar25,0) & auVar62._0_4_)) {
              uVar43 = -(ulonglong)
                        (9.999999747378752e-05 < ABS(dVar22) || 9.999999747378752e-05 < ABS(dVar23))
              ;
              uVar9 = uVar43 & 0xffffffff;
              pdVar13 = (double *)
                        CONCAT71((int7)((ulonglong)pdVar13 >> 8),
                                 9.999999747378752e-05 < ABS(dVar24) | (byte)uVar43);
              if ((9.999999747378752e-05 < ABS(dVar24) || (uVar43 & 1) != 0) &&
                 (1e-08 < ABS((double)fVar61))) {
                auVar62._8_8_ = 0;
                auVar62._0_8_ = *(ulonglong *)(pfVar15 + 2);
                dVar17 = dVar23 * (double)local_1a8._0_8_ - (double)local_198._0_8_ * dVar22;
                dVar18 = dVar24 * (double)local_1a8._8_8_ - (double)local_198._8_8_ * dVar23;
                dVar19 = dVar22 * (double)local_1c8._0_8_ - dVar24 * local_188;
                dVar18 = dVar18 + dVar18;
                dVar19 = dVar19 + dVar19;
                dVar17 = dVar17 + dVar17;
                dVar20 = *(double *)(pfVar15 + 4);
                local_108 = dVar17 * local_178 + dVar24 +
                            (dVar19 * (double)local_1a8._0_8_ - dVar18 * (double)local_198._0_8_);
                auVar40 = maxpd(_DAT_149934d80,_DAT_149934d80);
                auVar40 = maxpd(auVar40,_DAT_149934d80);
                local_118 = (dVar17 * (double)local_1a8._8_8_ - dVar19 * (double)local_198._8_8_) +
                            local_178 * dVar18 + dVar22;
                dStack_110 = ((double)local_1c8._0_8_ * dVar18 - local_188 * dVar17) +
                             dStack_170 * dVar19 + dVar23;
                local_120 = dVar25 * (double)(float)auVar40._0_8_;
                auVar57._0_8_ = *(double *)(pfVar15 + 6) * 1.0;
                auVar57._8_8_ = 0;
                auVar62 = blendpd(auVar62,auVar57,2);
                dVar23 = dVar20 * (double)local_1a8._0_8_ -
                         (double)local_198._0_8_ * *(double *)(pfVar15 + 2);
                dVar25 = auVar57._0_8_ * (double)local_1a8._8_8_ - (double)local_198._8_8_ * dVar20;
                dVar22 = auVar62._0_8_ * (double)local_1c8._0_8_ - local_188 * auVar57._0_8_;
                dVar25 = dVar25 + dVar25;
                dVar22 = dVar22 + dVar22;
                dVar23 = dVar23 + dVar23;
                dVar24 = ((double)local_1c8._0_8_ * dVar25 - local_188 * dVar23) +
                         dStack_170 * dVar22 + dVar20 + dStack_1b0;
                local_138._8_4_ = SUB84(dVar24,0);
                local_138._0_8_ =
                     (dVar23 * (double)local_1a8._8_8_ - dVar22 * (double)local_198._8_8_) +
                     local_178 * dVar25 + *(double *)(pfVar15 + 2) + local_1b8;
                uStack_12c = (int)((ulonglong)dVar24 >> 0x20);
                local_128 = dVar23 * local_178 + auVar57._0_8_ +
                            (dVar22 * (double)local_1a8._0_8_ - dVar25 * (double)local_198._0_8_) +
                            local_1d0;
                pdVar13 = &local_160;
                local_100 = (double)fVar61;
                uVar9 = FUN_1437ad7cc(&local_160,local_138);
                auVar62 = auVar31;
              }
            }
            pfVar14 = pfVar15 + 0xe;
            pfVar15 = pfVar15 + 0x12;
          } while (pfVar14 != (float *)((longlong)dVar16 + lVar8 * 0x48));
        }
      }
      else if (*(char *)(pdVar3 + 10) == '\0') {
        pdVar13 = (double *)(ulonglong)*(uint *)(pdVar3 + 0xc);
        if (*(uint *)(pdVar3 + 0xc) == *(uint *)((longlong)pdVar3 + 0x8c)) goto LAB_1437ac2c4;
        pdVar13 = pdVar3 + 0x12;
        if ((double *)pdVar3[0x13] != (double *)0x0) {
          pdVar13 = (double *)pdVar3[0x13];
        }
        iVar7 = *(int *)((longlong)pdVar13 +
                        (ulonglong)
                        (*(int *)(pdVar3 + 0x14) - 1U &
                        iVar7 + (uVar5 << 0x10 | uVar5 & 0xffff) + (uVar6 << 0x13 | uVar6 & 0xffff)
                        + ((uVar5 & 0xffff) >> 4)) * 4);
        if (iVar7 != -1) {
          pdVar13 = (double *)pdVar3[0xb];
          do {
            if (pdVar13[(longlong)iVar7 * 2] == dVar54) goto LAB_1437ac2c4;
            iVar7 = *(int *)(pdVar13 + (longlong)iVar7 * 2 + 1);
          } while (iVar7 != -1);
        }
      }
    }
LAB_1437acb70:
    dVar54 = *param_2;
  }
  auVar63 = _DAT_1499387d0;
  dVar44 = param_2[8];
  if (dVar44 != 0.0) {
    local_1d4 = (float)*(int *)(param_2 + 1);
    puVar2 = *(undefined8 **)(param_1 + 8);
    pdVar3 = (double *)puVar2[2];
    local_158 = puVar2[1];
    local_150 = *puVar2;
    local_140 = puVar2[3];
    local_160 = dVar44;
    local_148 = pdVar3;
    if (*(char *)((longlong)pdVar3 + 0x31) == '\x01') {
      uVar5 = SUB84(dVar54,0);
      iVar7 = (int)((ulonglong)dVar54 >> 0x20);
      uVar6 = (uint)((ulonglong)dVar54 >> 0x10);
      if (*(char *)(pdVar3 + 10) == '\x01') {
        pdVar13 = (double *)(ulonglong)*(uint *)(pdVar3 + 0xc);
        if (*(uint *)(pdVar3 + 0xc) != *(uint *)((longlong)pdVar3 + 0x8c)) {
          pdVar13 = pdVar3 + 0x12;
          if ((double *)pdVar3[0x13] != (double *)0x0) {
            pdVar13 = (double *)pdVar3[0x13];
          }
          iVar7 = *(int *)((longlong)pdVar13 +
                          (ulonglong)
                          (*(int *)(pdVar3 + 0x14) - 1U &
                          iVar7 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                          (uVar6 << 0x13 | uVar6 & 0xffff) + ((uVar5 & 0xffff) >> 4)) * 4);
          if (iVar7 != -1) {
            pdVar13 = (double *)pdVar3[0xb];
            do {
              if (pdVar13[(longlong)iVar7 * 2] == dVar54) goto LAB_1437ad59f;
              iVar7 = *(int *)(pdVar13 + (longlong)iVar7 * 2 + 1);
            } while (iVar7 != -1);
          }
        }
      }
      else {
        if (*(char *)(pdVar3 + 10) != '\0') goto LAB_1437ad59f;
        pdVar13 = (double *)(ulonglong)*(uint *)(pdVar3 + 0xc);
        if (*(uint *)(pdVar3 + 0xc) != *(uint *)((longlong)pdVar3 + 0x8c)) {
          pdVar13 = pdVar3 + 0x12;
          if ((double *)pdVar3[0x13] != (double *)0x0) {
            pdVar13 = (double *)pdVar3[0x13];
          }
          iVar7 = *(int *)((longlong)pdVar13 +
                          (ulonglong)
                          (*(int *)(pdVar3 + 0x14) - 1U &
                          iVar7 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                          (uVar6 << 0x13 | uVar6 & 0xffff) + ((uVar5 & 0xffff) >> 4)) * 4);
          if (iVar7 != -1) {
            pdVar13 = (double *)pdVar3[0xb];
            do {
              if (pdVar13[(longlong)iVar7 * 2] == dVar54) goto LAB_1437accf3;
              iVar7 = *(int *)(pdVar13 + (longlong)iVar7 * 2 + 1);
            } while (iVar7 != -1);
          }
          goto LAB_1437ad59f;
        }
      }
LAB_1437accf3:
      fVar64 = local_1d4;
      if (*(char *)((longlong)pdVar3 + 0x1c) == '\0') {
        fVar64 = *(float *)(pdVar3 + 3);
      }
      auVar62 = *(undefined1 (*) [16])(pdVar3 + 7);
      dVar54 = (double)DAT_1499387d0;
      dVar44 = DAT_1499387d0._8_8_;
      auVar31 = divpd(auVar62,_DAT_1499387d0);
      auVar39._8_8_ = 0;
      auVar39._0_8_ = pdVar3[9];
      auVar40 = divpd(auVar39,_DAT_1499387d0);
      auVar31 = roundpd(auVar31,auVar31,3);
      auVar40 = roundpd(auVar40,auVar40,3);
      dVar24 = (auVar62._0_8_ - auVar31._0_8_ * dVar54) * 0.008726646259971648;
      dVar22 = (auVar62._8_8_ - auVar31._8_8_ * dVar44) * 0.008726646259971648;
      dVar23 = (pdVar3[9] - auVar40._0_8_ * dVar54) * 0.008726646259971648;
      dVar25 = (0.0 - auVar40._8_8_ * dVar44) * 0.008726646259971648;
      dVar16 = sin(dVar24);
      dVar17 = sin(dVar22);
      dVar18 = sin(dVar23);
      sin(dVar25);
      dVar19 = cos(dVar24);
      dVar20 = cos(dVar22);
      dVar21 = cos(dVar23);
      cos(dVar25);
      dVar24 = -(dVar20 * dVar16 * dVar18) + dVar17 * dVar19 * dVar21;
      dVar22 = dVar17 * dVar16 * dVar18 + dVar20 * dVar19 * dVar21;
      dVar23 = dVar16 * dVar17 * dVar21 - dVar19 * dVar20 * dVar18;
      dVar25 = -(dVar16 * dVar20 * dVar21) - dVar19 * dVar17 * dVar18;
      local_1d0 = pdVar3[2];
      local_1b8 = *pdVar3;
      dStack_1b0 = pdVar3[1];
      lVar8 = (longlong)*(int *)(pdVar3 + 0x20);
      local_1a8._8_4_ = SUB84(dVar25,0);
      local_1a8._0_8_ = dVar23;
      local_1a8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      local_1c8._8_4_ = SUB84(dVar22,0);
      local_1c8._0_8_ = dVar24;
      local_1c8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      if (lVar8 == 0) {
        if (0.0 < fVar64) {
          dVar22 = DAT_14c8462e8 * 1.0;
          dVar54 = DAT_14c8462e0 * dVar23 - (double)local_1a8._8_8_ * DAT_14c8462d8;
          dVar25 = dVar22 * (double)local_1a8._8_8_ - dVar24 * DAT_14c8462e0;
          dVar44 = DAT_14c8462d8 * dVar24 - dVar23 * dVar22;
          dVar25 = dVar25 + dVar25;
          dVar44 = dVar44 + dVar44;
          dVar54 = dVar54 + dVar54;
          local_108 = dVar54 * (double)local_1c8._8_8_ + dVar22 +
                      (dVar44 * dVar23 - dVar25 * (double)local_1a8._8_8_);
          local_118 = (dVar54 * (double)local_1a8._8_8_ - dVar44 * dVar24) +
                      (double)local_1c8._8_8_ * dVar25 + DAT_14c8462d8;
          dStack_110 = (dVar24 * dVar25 - dVar23 * dVar54) +
                       (double)local_1c8._8_8_ * dVar44 + DAT_14c8462e0;
          auVar63 = maxpd(_DAT_149934d80,_DAT_149934d80);
          auVar63 = maxpd(auVar63,_DAT_149934d80);
          local_120 = (double)(float)auVar63._0_8_ * (double)fVar64;
          dVar25 = DAT_14c8464f0 * 1.0;
          dVar54 = DAT_14c8464e8 * dVar23 - (double)local_1a8._8_8_ * DAT_14c8464e0;
          dVar44 = dVar25 * (double)local_1a8._8_8_ - dVar24 * DAT_14c8464e8;
          dVar22 = DAT_14c8464e0 * dVar24 - dVar23 * dVar25;
          dVar44 = dVar44 + dVar44;
          dVar22 = dVar22 + dVar22;
          dVar54 = dVar54 + dVar54;
          local_128 = local_1d0 +
                      dVar54 * (double)local_1c8._8_8_ + dVar25 +
                      (dVar22 * dVar23 - dVar44 * (double)local_1a8._8_8_);
          stack0xfffffffffffffed0 =
               dStack_1b0 +
               (dVar24 * dVar44 - dVar23 * dVar54) +
               (double)local_1c8._8_8_ * dVar22 + DAT_14c8464e8;
          local_138._0_8_ =
               local_1b8 +
               (dVar54 * (double)local_1a8._8_8_ - dVar22 * dVar24) +
               (double)local_1c8._8_8_ * dVar44 + DAT_14c8464e0;
          local_100 = 360.0;
          FUN_1437adc18(&local_160);
        }
      }
      else {
        dVar16 = pdVar3[0x1f];
        uVar9 = lVar8 * 9;
        local_198._8_4_ = SUB84(dVar24,0);
        local_198._0_8_ = dVar25;
        local_198._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        pfVar15 = (float *)((longlong)dVar16 + 0x10);
        auVar62 = _DAT_149931180;
        local_188 = dVar23;
        dStack_180 = dVar22;
        local_178 = dVar22;
        dStack_170 = dVar22;
        do {
          if (*(char *)(pfVar15 + -4) == '\x01') {
            fVar64 = pfVar15[-3] * local_1d4;
          }
          else {
            fVar64 = pfVar15[-2];
          }
          fVar61 = 360.0;
          if ((*(char *)(pfVar15 + -1) == '\x01') && (fVar61 = *pfVar15 + 0.0, 360.0 <= fVar61)) {
            fVar61 = 360.0;
          }
          auVar31 = *(undefined1 (*) [16])(pfVar15 + 8);
          auVar40 = divpd(auVar31,auVar63);
          auVar41._8_8_ = 0;
          auVar41._0_8_ = *(double *)(pfVar15 + 0xc);
          auVar42 = divpd(auVar41,auVar63);
          auVar40 = roundpd(auVar40,auVar40,3);
          auVar42 = roundpd(auVar42,auVar42,3);
          auVar58._0_8_ = auVar31._0_8_ - auVar40._0_8_ * dVar54;
          auVar58._8_8_ = auVar31._8_8_ - auVar40._8_8_ * dVar44;
          auVar51._0_8_ = *(double *)(pfVar15 + 0xc) - auVar42._0_8_ * dVar54;
          auVar51._8_8_ = 0.0 - auVar42._8_8_ * dVar44;
          auVar48._0_8_ = auVar58._0_8_ + dVar54;
          auVar48._8_8_ = auVar58._8_8_ + dVar44;
          auVar46._0_8_ = auVar51._0_8_ + dVar54;
          auVar46._8_8_ = auVar51._8_8_ + dVar44;
          auVar32._8_8_ = -(ulonglong)(0.0 <= auVar58._8_8_);
          auVar32._0_8_ = -(ulonglong)(0.0 <= auVar58._0_8_);
          auVar42 = blendvpd(auVar48,auVar58,auVar32);
          auVar33._8_8_ = -(ulonglong)(0.0 <= auVar51._8_8_);
          auVar33._0_8_ = -(ulonglong)(0.0 <= auVar51._0_8_);
          auVar40 = blendvpd(auVar46,auVar51,auVar33);
          auVar52._0_8_ = auVar42._0_8_ + -360.0;
          auVar52._8_8_ = auVar42._8_8_ + -360.0;
          auVar59._0_8_ = auVar40._0_8_ + -360.0;
          auVar59._8_8_ = auVar40._8_8_ + -360.0;
          auVar34._8_8_ = -(ulonglong)(180.0 < auVar42._8_8_);
          auVar34._0_8_ = -(ulonglong)(180.0 < auVar42._0_8_);
          auVar42 = blendvpd(auVar42,auVar52,auVar34);
          auVar35._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
          auVar35._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
          auVar40 = blendvpd(auVar40,auVar59,auVar35);
          auVar36._8_8_ =
               -(ulonglong)(9.999999747378752e-05 < (double)(auVar42._8_8_ & auVar62._8_8_));
          auVar36._0_8_ =
               -(ulonglong)(9.999999747378752e-05 < (double)(auVar42._0_8_ & auVar62._0_8_));
          uVar6 = movmskpd((int)uVar9,auVar36);
          uVar9 = (ulonglong)uVar6;
          auVar37._8_8_ =
               -(ulonglong)(9.999999747378752e-05 < (double)(auVar40._8_8_ & auVar62._8_8_));
          auVar37._0_8_ =
               -(ulonglong)(9.999999747378752e-05 < (double)(auVar40._0_8_ & auVar62._0_8_));
          iVar7 = movmskpd((int)pdVar13,auVar37);
          uVar6 = iVar7 << 2 | uVar6;
          pdVar13 = (double *)(ulonglong)uVar6;
          dVar24 = DAT_14c8462e8;
          dVar22 = DAT_14c8462d8;
          dVar23 = DAT_14c8462e0;
          if (uVar6 != 0) {
            dVar22 = (double)FUN_144719204(auVar31._0_8_,0x4076800000000000);
            dVar23 = (double)FUN_144719204(auVar31._8_8_,0x4076800000000000);
            dVar24 = sin(dVar22 * 0.017453292519943295);
            dVar25 = cos(dVar22 * 0.017453292519943295);
            dVar17 = sin(dVar23 * 0.017453292519943295);
            dVar22 = cos(dVar23 * 0.017453292519943295);
            uVar9 = extraout_RAX_00;
            auVar62 = _DAT_149931180;
            dVar22 = dVar22 * dVar25;
            dVar23 = dVar17 * dVar25;
          }
          auVar31 = _DAT_149931180;
          dVar25 = (double)(fVar64 + 0.0);
          if (1e-08 < (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & auVar62._4_4_,
                                       SUB84(dVar25,0) & auVar62._0_4_)) {
            uVar43 = -(ulonglong)
                      (9.999999747378752e-05 < ABS(dVar22) || 9.999999747378752e-05 < ABS(dVar23));
            uVar9 = uVar43 & 0xffffffff;
            pdVar13 = (double *)
                      CONCAT71((int7)((ulonglong)pdVar13 >> 8),
                               9.999999747378752e-05 < ABS(dVar24) | (byte)uVar43);
            if ((9.999999747378752e-05 < ABS(dVar24) || (uVar43 & 1) != 0) &&
               (1e-08 < ABS((double)fVar61))) {
              auVar53._8_8_ = 0;
              auVar53._0_8_ = *(ulonglong *)(pfVar15 + 2);
              dVar17 = dVar23 * (double)local_1a8._0_8_ - (double)local_198._0_8_ * dVar22;
              dVar18 = dVar24 * (double)local_1a8._8_8_ - (double)local_198._8_8_ * dVar23;
              dVar19 = dVar22 * (double)local_1c8._0_8_ - dVar24 * local_188;
              dVar18 = dVar18 + dVar18;
              dVar19 = dVar19 + dVar19;
              dVar17 = dVar17 + dVar17;
              dVar20 = *(double *)(pfVar15 + 4);
              local_108 = dVar17 * local_178 + dVar24 +
                          (dVar19 * (double)local_1a8._0_8_ - dVar18 * (double)local_198._0_8_);
              auVar62 = maxpd(_DAT_149934d80,_DAT_149934d80);
              auVar62 = maxpd(auVar62,_DAT_149934d80);
              local_118 = (dVar17 * (double)local_1a8._8_8_ - dVar19 * (double)local_198._8_8_) +
                          local_178 * dVar18 + dVar22;
              dStack_110 = ((double)local_1c8._0_8_ * dVar18 - local_188 * dVar17) +
                           dStack_170 * dVar19 + dVar23;
              local_120 = dVar25 * (double)(float)auVar62._0_8_;
              auVar60._0_8_ = *(double *)(pfVar15 + 6) * 1.0;
              auVar60._8_8_ = 0;
              auVar62 = blendpd(auVar53,auVar60,2);
              dVar23 = dVar20 * (double)local_1a8._0_8_ -
                       (double)local_198._0_8_ * *(double *)(pfVar15 + 2);
              dVar25 = auVar60._0_8_ * (double)local_1a8._8_8_ - (double)local_198._8_8_ * dVar20;
              dVar22 = auVar62._0_8_ * (double)local_1c8._0_8_ - local_188 * auVar60._0_8_;
              dVar25 = dVar25 + dVar25;
              dVar22 = dVar22 + dVar22;
              dVar23 = dVar23 + dVar23;
              dVar24 = ((double)local_1c8._0_8_ * dVar25 - local_188 * dVar23) +
                       dStack_170 * dVar22 + dVar20 + dStack_1b0;
              local_138._8_4_ = SUB84(dVar24,0);
              local_138._0_8_ =
                   (dVar23 * (double)local_1a8._8_8_ - dVar22 * (double)local_198._8_8_) +
                   local_178 * dVar25 + *(double *)(pfVar15 + 2) + local_1b8;
              uStack_12c = (int)((ulonglong)dVar24 >> 0x20);
              local_128 = dVar23 * local_178 + auVar60._0_8_ +
                          (dVar22 * (double)local_1a8._0_8_ - dVar25 * (double)local_198._0_8_) +
                          local_1d0;
              pdVar13 = &local_160;
              local_100 = (double)fVar61;
              uVar9 = FUN_1437adc18(&local_160,local_138);
              auVar62 = auVar31;
            }
          }
          pfVar14 = pfVar15 + 0xe;
          pfVar15 = pfVar15 + 0x12;
        } while (pfVar14 != (float *)((longlong)dVar16 + lVar8 * 0x48));
      }
    }
  }
LAB_1437ad59f:
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  iVar7 = *(int *)(param_2 + 5);
  dVar54 = param_2[4];
  auVar63._4_4_ = uStack_12c;
  auVar63._0_4_ = iVar7;
  auVar63._8_8_ = 0;
  _local_138 = auVar63 << 0x40;
  uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (iVar7 != 0) {
    FUN_147dc789c(local_138,iVar7);
    FUN_147dc78f5(local_138._0_8_,dVar54,iVar7);
    if ((longlong)(int)local_138._8_4_ == 0) {
      uVar9 = CONCAT71((int7)((ulonglong)local_138 >> 8),1);
    }
    else {
      pdVar3 = (double *)(local_138._0_8_ + (longlong)(int)local_138._8_4_ * 8);
      pdVar13 = (double *)local_138._0_8_;
      do {
        dVar54 = *pdVar13;
        lVar8 = puVar2[1];
        if (*(char *)((longlong)dVar54 + 0x58) == '\x01') {
          plVar11 = *(longlong **)*puVar2;
          lVar10 = (**(code **)(*plVar11 + 0x180))(plVar11);
          bVar1 = *(byte *)(lVar10 + 0x152);
          if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0))))
          goto LAB_1437ad6f5;
          iVar7 = FUN_14490d72a(lVar10);
          if (iVar7 == 2) {
            if ((*(uint *)(plVar11 + 1) & 0x10) == 0) {
              lVar10 = plVar11[4];
            }
            else {
              lVar10 = 0;
            }
            cVar4 = FUN_1400900b4(lVar10);
            if (cVar4 != '\0') goto LAB_1437ad6f5;
          }
          else if (iVar7 != 1) goto LAB_1437ad6f5;
        }
        else {
LAB_1437ad6f5:
          if (*(int *)((longlong)dVar54 + 0x50) == 0) {
            if (*(char *)(lVar8 + 0x30) == '\0') {
LAB_1437ad75c:
              local_160 = dVar54;
              cVar4 = (**(code **)puVar2[2])(((undefined8 *)puVar2[2])[1],&local_160);
              if (cVar4 == '\0') {
                uVar9 = 0;
                goto LAB_1437ad7ae;
              }
            }
          }
          else {
            plVar11 = (longlong *)
                      (**(code **)(*(longlong *)((longlong)dVar54 + 0x28) + 0x38))
                                ((longlong)dVar54 + 0x28);
            if ((longlong)(int)plVar11[1] != 0) {
              plVar12 = (longlong *)*plVar11;
              plVar11 = plVar12 + (int)plVar11[1];
              do {
                if (*(int *)(lVar8 + 0x28) != 0) {
                  lVar10 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0x20) + lVar10) == *plVar12) {
                      if (plVar12 == (longlong *)0x0) goto LAB_1437ad775;
                      goto LAB_1437ad75c;
                    }
                    lVar10 = lVar10 + 8;
                  } while ((longlong)*(int *)(lVar8 + 0x28) << 3 != lVar10);
                }
                plVar12 = plVar12 + 1;
              } while (plVar12 != plVar11);
            }
          }
        }
LAB_1437ad775:
        pdVar13 = pdVar13 + 1;
      } while (pdVar13 != pdVar3);
      uVar9 = CONCAT71((int7)((ulonglong)&local_160 >> 8),1);
LAB_1437ad7ae:
    }
    if ((double *)local_138._0_8_ != (double *)0x0) {
      FUN_1400020a8(local_138._0_8_);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1437ad7cc FUN_1437ad7cc body=379 status=ok
// SIG undefined FUN_1437ad7cc(void)

void FUN_1437ad7cc(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong lStack_a0;
  longlong local_98;
  undefined8 *local_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  double local_70;
  longlong local_68;
  undefined8 *local_60;
  code *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = *param_1;
  lStack_a0 = param_1[1];
  local_98 = param_1[2];
  local_88 = param_1[3];
  lStack_80 = param_1[4];
  if (ABS((double)param_2[7] + -360.0) <= 1e-08) {
    local_38 = param_2[2];
    local_48 = *param_2;
    lStack_40 = param_2[1];
    local_60 = (undefined8 *)&local_a8;
    local_a8 = CONCAT31(local_a8._1_3_,1);
    local_50 = &local_68;
    local_b8 = &local_58;
    local_58 = FUN_1437ad948;
    local_90 = param_2;
    FUN_147dc6544(local_68 + 0x18,local_68 + 0x20,&local_48,(double)param_2[3] * (double)param_2[3])
    ;
  }
  else {
    local_90 = (undefined8 *)param_2[3];
    local_78 = param_2[6];
    local_a8 = *(undefined4 *)param_2;
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
    local_60 = &local_48;
    local_48 = CONCAT71(local_48._1_7_,1);
    local_50 = &local_68;
    local_58 = FUN_1437adab0;
    lStack_40 = lStack_a0;
    lStack_a0 = param_2[1];
    local_38 = local_98;
    local_98 = param_2[2];
    local_28 = local_88;
    local_88 = param_2[4];
    local_20 = lStack_80;
    lStack_80 = param_2[5];
    local_70 = (double)param_2[7];
    local_30 = param_2;
    FUN_147dc675e(local_68 + 0x18,&local_a8);
  }
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ad948 FUN_1437ad948 body=358 status=ok
// SIG undefined FUN_1437ad948(void)

ulonglong FUN_1437ad948(longlong *param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong unaff_RBX;
  undefined7 uVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_1[1];
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x38 + (longlong)*param_2 * 0x40);
  if (*(longlong *)(lVar2 + 8) != 0) {
    FUN_1407b9e3c(*(longlong *)(lVar2 + 8),lVar3,*(undefined8 *)(lVar2 + 0x18));
  }
  lVar4 = *(longlong *)(lVar2 + 0x20);
  if (*(char *)(lVar3 + 0x58) == '\x01') {
    plVar9 = (longlong *)**(longlong **)(lVar2 + 0x10);
    lVar8 = (**(code **)(*plVar9 + 0x180))(plVar9);
    bVar1 = *(byte *)(lVar8 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      iVar6 = FUN_14490d72a(lVar8);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      if (iVar6 == 2) {
        if ((*(uint *)(plVar9 + 1) & 0x10) == 0) {
          lVar8 = plVar9[4];
        }
        else {
          lVar8 = 0;
        }
        cVar5 = FUN_1400900b4(lVar8);
        if (cVar5 == '\0') goto LAB_1437ada67;
      }
      else if (iVar6 == 1) goto LAB_1437ada67;
    }
  }
  uVar11 = (undefined7)(unaff_RBX >> 8);
  if (*(int *)(lVar3 + 0x50) == 0) {
    unaff_RBX = CONCAT71(uVar11,1);
    if (*(char *)(lVar4 + 0x30) == '\0') {
LAB_1437ada53:
      local_38 = lVar3;
      uVar7 = (*(code *)**(undefined8 **)(lVar2 + 0x28))((*(undefined8 **)(lVar2 + 0x28))[1]);
      unaff_RBX = (ulonglong)uVar7;
    }
  }
  else {
    plVar9 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x38))(lVar3 + 0x28);
    unaff_RBX = CONCAT71(uVar11,1);
    if ((longlong)(int)plVar9[1] != 0) {
      plVar10 = (longlong *)*plVar9;
      plVar9 = plVar10 + (int)plVar9[1];
      do {
        if (*(int *)(lVar4 + 0x28) != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x20) + lVar8) == *plVar10) {
              if (plVar10 == (longlong *)0x0) goto LAB_1437ada67;
              goto LAB_1437ada53;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(lVar4 + 0x28) << 3 != lVar8);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
  }
LAB_1437ada67:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1437adab0 FUN_1437adab0 body=358 status=ok
// SIG undefined FUN_1437adab0(void)

ulonglong FUN_1437adab0(longlong *param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong unaff_RBX;
  undefined7 uVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_1[1];
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x38 + (longlong)*param_2 * 0x40);
  if (*(longlong *)(lVar2 + 8) != 0) {
    FUN_1407b9e3c(*(longlong *)(lVar2 + 8),lVar3,*(undefined8 *)(lVar2 + 0x18));
  }
  lVar4 = *(longlong *)(lVar2 + 0x20);
  if (*(char *)(lVar3 + 0x58) == '\x01') {
    plVar9 = (longlong *)**(longlong **)(lVar2 + 0x10);
    lVar8 = (**(code **)(*plVar9 + 0x180))(plVar9);
    bVar1 = *(byte *)(lVar8 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      iVar6 = FUN_14490d72a(lVar8);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      if (iVar6 == 2) {
        if ((*(uint *)(plVar9 + 1) & 0x10) == 0) {
          lVar8 = plVar9[4];
        }
        else {
          lVar8 = 0;
        }
        cVar5 = FUN_1400900b4(lVar8);
        if (cVar5 == '\0') goto LAB_1437adbcf;
      }
      else if (iVar6 == 1) goto LAB_1437adbcf;
    }
  }
  uVar11 = (undefined7)(unaff_RBX >> 8);
  if (*(int *)(lVar3 + 0x50) == 0) {
    unaff_RBX = CONCAT71(uVar11,1);
    if (*(char *)(lVar4 + 0x30) == '\0') {
LAB_1437adbbb:
      local_38 = lVar3;
      uVar7 = (*(code *)**(undefined8 **)(lVar2 + 0x28))((*(undefined8 **)(lVar2 + 0x28))[1]);
      unaff_RBX = (ulonglong)uVar7;
    }
  }
  else {
    plVar9 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x38))(lVar3 + 0x28);
    unaff_RBX = CONCAT71(uVar11,1);
    if ((longlong)(int)plVar9[1] != 0) {
      plVar10 = (longlong *)*plVar9;
      plVar9 = plVar10 + (int)plVar9[1];
      do {
        if (*(int *)(lVar4 + 0x28) != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x20) + lVar8) == *plVar10) {
              if (plVar10 == (longlong *)0x0) goto LAB_1437adbcf;
              goto LAB_1437adbbb;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(lVar4 + 0x28) << 3 != lVar8);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
  }
LAB_1437adbcf:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1437adc18 FUN_1437adc18 body=370 status=ok
// SIG undefined FUN_1437adc18(void)

void FUN_1437adc18(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  longlong local_98;
  undefined8 *local_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  double local_70;
  longlong local_60;
  code **local_58;
  code *local_50;
  longlong *plStack_48;
  code *local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 *local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_60 = *param_1;
  plStack_a0 = (longlong *)param_1[1];
  local_98 = param_1[2];
  local_88 = param_1[3];
  lStack_80 = param_1[4];
  if (ABS((double)param_2[7] + -360.0) <= 1e-08) {
    local_50 = (code *)*param_2;
    plStack_48 = (longlong *)param_2[1];
    local_58 = (code **)&local_a8;
    local_a8 = CONCAT31(local_a8._1_3_,1);
    local_38 = &local_60;
    local_b8 = &local_40;
    local_40 = FUN_1437add8c;
    local_90 = param_2;
    FUN_147dc6e62(local_60 + 0x18,local_60 + 0x20,&local_50,(double)param_2[3] * (double)param_2[3])
    ;
  }
  else {
    local_90 = (undefined8 *)param_2[3];
    local_78 = param_2[6];
    local_a8 = *(undefined4 *)param_2;
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
    local_58 = &local_40;
    local_40 = (code *)CONCAT71(local_40._1_7_,1);
    plStack_48 = &local_60;
    local_50 = FUN_1437adef8;
    local_38 = plStack_a0;
    plStack_a0 = (longlong *)param_2[1];
    local_30 = local_98;
    local_98 = param_2[2];
    local_20 = local_88;
    local_88 = param_2[4];
    local_18 = lStack_80;
    lStack_80 = param_2[5];
    local_70 = (double)param_2[7];
    local_28 = param_2;
    FUN_147dc701c(local_60 + 0x18,&local_a8);
  }
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437add8c FUN_1437add8c body=362 status=ok
// SIG undefined FUN_1437add8c(void)

ulonglong FUN_1437add8c(longlong *param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong unaff_RBX;
  undefined7 uVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_1[1];
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x28 + (longlong)*param_2 * 0x30);
  if (*(longlong *)(lVar2 + 8) != 0) {
    FUN_1407b9e3c(*(longlong *)(lVar2 + 8),lVar3,*(undefined8 *)(lVar2 + 0x18));
  }
  lVar4 = *(longlong *)(lVar2 + 0x20);
  if (*(char *)(lVar3 + 0x58) == '\x01') {
    plVar9 = (longlong *)**(longlong **)(lVar2 + 0x10);
    lVar8 = (**(code **)(*plVar9 + 0x180))(plVar9);
    bVar1 = *(byte *)(lVar8 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      iVar6 = FUN_14490d72a(lVar8);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      if (iVar6 == 2) {
        if ((*(uint *)(plVar9 + 1) & 0x10) == 0) {
          lVar8 = plVar9[4];
        }
        else {
          lVar8 = 0;
        }
        cVar5 = FUN_1400900b4(lVar8);
        if (cVar5 == '\0') goto LAB_1437adeaf;
      }
      else if (iVar6 == 1) goto LAB_1437adeaf;
    }
  }
  uVar11 = (undefined7)(unaff_RBX >> 8);
  if (*(int *)(lVar3 + 0x50) == 0) {
    unaff_RBX = CONCAT71(uVar11,1);
    if (*(char *)(lVar4 + 0x30) == '\0') {
LAB_1437ade9b:
      local_38 = lVar3;
      uVar7 = (*(code *)**(undefined8 **)(lVar2 + 0x28))((*(undefined8 **)(lVar2 + 0x28))[1]);
      unaff_RBX = (ulonglong)uVar7;
    }
  }
  else {
    plVar9 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x38))(lVar3 + 0x28);
    unaff_RBX = CONCAT71(uVar11,1);
    if ((longlong)(int)plVar9[1] != 0) {
      plVar10 = (longlong *)*plVar9;
      plVar9 = plVar10 + (int)plVar9[1];
      do {
        if (*(int *)(lVar4 + 0x28) != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x20) + lVar8) == *plVar10) {
              if (plVar10 == (longlong *)0x0) goto LAB_1437adeaf;
              goto LAB_1437ade9b;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(lVar4 + 0x28) << 3 != lVar8);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
  }
LAB_1437adeaf:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1437adef8 FUN_1437adef8 body=362 status=ok
// SIG undefined FUN_1437adef8(void)

ulonglong FUN_1437adef8(longlong *param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong unaff_RBX;
  undefined7 uVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_1[1];
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x28 + (longlong)*param_2 * 0x30);
  if (*(longlong *)(lVar2 + 8) != 0) {
    FUN_1407b9e3c(*(longlong *)(lVar2 + 8),lVar3,*(undefined8 *)(lVar2 + 0x18));
  }
  lVar4 = *(longlong *)(lVar2 + 0x20);
  if (*(char *)(lVar3 + 0x58) == '\x01') {
    plVar9 = (longlong *)**(longlong **)(lVar2 + 0x10);
    lVar8 = (**(code **)(*plVar9 + 0x180))(plVar9);
    bVar1 = *(byte *)(lVar8 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      iVar6 = FUN_14490d72a(lVar8);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      if (iVar6 == 2) {
        if ((*(uint *)(plVar9 + 1) & 0x10) == 0) {
          lVar8 = plVar9[4];
        }
        else {
          lVar8 = 0;
        }
        cVar5 = FUN_1400900b4(lVar8);
        if (cVar5 == '\0') goto LAB_1437ae01b;
      }
      else if (iVar6 == 1) goto LAB_1437ae01b;
    }
  }
  uVar11 = (undefined7)(unaff_RBX >> 8);
  if (*(int *)(lVar3 + 0x50) == 0) {
    unaff_RBX = CONCAT71(uVar11,1);
    if (*(char *)(lVar4 + 0x30) == '\0') {
LAB_1437ae007:
      local_38 = lVar3;
      uVar7 = (*(code *)**(undefined8 **)(lVar2 + 0x28))((*(undefined8 **)(lVar2 + 0x28))[1]);
      unaff_RBX = (ulonglong)uVar7;
    }
  }
  else {
    plVar9 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x38))(lVar3 + 0x28);
    unaff_RBX = CONCAT71(uVar11,1);
    if ((longlong)(int)plVar9[1] != 0) {
      plVar10 = (longlong *)*plVar9;
      plVar9 = plVar10 + (int)plVar9[1];
      do {
        if (*(int *)(lVar4 + 0x28) != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x20) + lVar8) == *plVar10) {
              if (plVar10 == (longlong *)0x0) goto LAB_1437ae01b;
              goto LAB_1437ae007;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(lVar4 + 0x28) << 3 != lVar8);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
  }
LAB_1437ae01b:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1437ae064 FUN_1437ae064 body=960 status=ok
// SIG undefined FUN_1437ae064(void)

void FUN_1437ae064(longlong *param_1,undefined8 *param_2)

{
  double dVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  undefined1 **local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  longlong local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  double local_d0;
  longlong local_c0;
  undefined1 **local_b8;
  undefined1 *local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  lVar6 = param_1[3];
  dVar1 = (double)param_2[7];
  lVar7 = param_1[4];
  if (ABS(dVar1 + -360.0) <= 1e-08) {
    dVar1 = (double)param_2[3];
    puVar2 = (undefined1 *)*param_2;
    plVar3 = (longlong *)param_2[1];
    lVar8 = *(longlong *)(param_1[2] + 0x30);
    if (lVar8 != 0) {
      if (*(char *)(lVar5 + 0x11a) == '\x01') {
        local_c0 = *(longlong *)(param_1[2] + 0x38);
        local_b8 = (undefined1 **)&local_108;
        local_108 = CONCAT31(local_108._1_3_,1);
        local_98 = &local_c0;
        local_118 = &local_a0;
        local_a0 = &LAB_1437ae426;
        plStack_100 = plVar4;
        local_f8 = lVar5;
        local_f0 = param_2;
        local_e8 = lVar6;
        lStack_e0 = lVar7;
        local_b0 = puVar2;
        local_a8 = plVar3;
        FUN_147dc6e62(local_c0 + 0x18,local_c0 + 0x20,&local_b0,dVar1 * dVar1);
      }
      else {
        local_90 = param_2[2];
        local_b8 = (undefined1 **)&local_108;
        local_108 = CONCAT31(local_108._1_3_,1);
        local_a8 = &local_c0;
        local_118 = &local_b0;
        local_b0 = &LAB_1437ae524;
        plStack_100 = plVar4;
        local_f8 = lVar5;
        local_f0 = param_2;
        local_e8 = lVar6;
        lStack_e0 = lVar7;
        local_c0 = lVar8;
        local_a0 = puVar2;
        local_98 = plVar3;
        FUN_147dc6544(lVar8 + 0x18,lVar8 + 0x20,&local_a0,dVar1 * dVar1);
      }
    }
    lVar8 = *(longlong *)(param_1[2] + 0x40);
    if (lVar8 != 0) {
      local_b8 = (undefined1 **)&local_108;
      local_108 = CONCAT31(local_108._1_3_,1);
      local_98 = &local_c0;
      local_118 = &local_a0;
      local_a0 = &LAB_1437ae426;
      plStack_100 = plVar4;
      local_f8 = lVar5;
      local_f0 = param_2;
      local_e8 = lVar6;
      lStack_e0 = lVar7;
      local_c0 = lVar8;
      local_b0 = puVar2;
      local_a8 = plVar3;
      FUN_147dc6e62(lVar8 + 0x18,lVar8 + 0x20,&local_b0,dVar1 * dVar1);
    }
  }
  else {
    local_f0 = (undefined8 *)param_2[3];
    local_d8 = param_2[6];
    local_e8 = param_2[4];
    lStack_e0 = param_2[5];
    local_f8 = param_2[2];
    local_108 = *(undefined4 *)param_2;
    uStack_104 = *(undefined4 *)((longlong)param_2 + 4);
    plStack_100 = (longlong *)param_2[1];
    lVar8 = *(longlong *)(param_1[2] + 0x30);
    local_d0 = dVar1;
    if (lVar8 != 0) {
      if (*(char *)(lVar5 + 0x11a) == '\x01') {
        local_c0 = *(longlong *)(param_1[2] + 0x38);
        local_b8 = &local_a0;
        local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,1);
        local_a8 = &local_c0;
        local_b0 = &LAB_1437ae542;
        local_98 = plVar4;
        local_90 = lVar5;
        local_88 = param_2;
        local_80 = lVar6;
        local_78 = lVar7;
        FUN_147dc701c(local_c0 + 0x18,&local_108);
      }
      else {
        local_b8 = &local_a0;
        local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,1);
        local_a8 = &local_c0;
        local_b0 = &LAB_1437ae564;
        local_c0 = lVar8;
        local_98 = plVar4;
        local_90 = lVar5;
        local_88 = param_2;
        local_80 = lVar6;
        local_78 = lVar7;
        FUN_147dc675e(lVar8 + 0x18,&local_108);
      }
    }
    lVar8 = *(longlong *)(param_1[2] + 0x40);
    if (lVar8 != 0) {
      local_b8 = &local_a0;
      local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,1);
      local_a8 = &local_c0;
      local_b0 = &LAB_1437ae542;
      local_c0 = lVar8;
      local_98 = plVar4;
      local_90 = lVar5;
      local_88 = param_2;
      local_80 = lVar6;
      local_78 = lVar7;
      FUN_147dc701c(lVar8 + 0x18,&local_108);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ae448 FUN_1437ae448 body=218 status=ok
// SIG undefined FUN_1437ae448(void)

undefined1 FUN_1437ae448(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  cVar5 = FUN_147dcc338(lVar1,*(undefined8 *)(param_1 + 0x20));
  if (cVar5 == '\0') goto LAB_1437ae502;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xba) == '\x01') {
    cVar6 = '\0';
    if (*(char *)(lVar1 + 0xb9) != '\0') {
      cVar6 = *(char *)(lVar3 + 0x119);
    }
LAB_1437ae4b7:
    *(char *)(lVar1 + 0xb9) = cVar6;
    *(undefined1 *)(lVar1 + 0xba) = 1;
  }
  else if ((char *)(lVar3 + 0x119) != (char *)(lVar1 + 0xb9)) {
    cVar6 = *(char *)(lVar3 + 0x119);
    goto LAB_1437ae4b7;
  }
  (**(code **)(**(longlong **)(lVar1 + 0xa8) + 0x2b8))
            (*(longlong **)(lVar1 + 0xa8),lVar3,uVar4,uVar2);
  if (cVar5 == '\x01') {
    local_21 = false;
  }
  else {
    local_21 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x38) != '\0';
  }
  local_30 = lVar1;
  (*(code *)**(undefined8 **)(param_1 + 0x28))((*(undefined8 **)(param_1 + 0x28))[1]);
LAB_1437ae502:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *param_1;
}



// FUNCTION 1437ae582 FUN_1437ae582 body=55 status=ok
// SIG undefined FUN_1437ae582(void)

void FUN_1437ae582(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147dc3456(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 1437ae5ba FUN_1437ae5ba body=197 status=ok
// SIG undefined FUN_1437ae5ba(void)

undefined8 FUN_1437ae5ba(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  
  lVar2 = *param_1;
  if (*(int *)(param_2 + 3) != 0) {
    uVar3 = *param_2;
    uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
    uVar6 = (uint)uVar3 & 0xffff;
    plVar5 = (longlong *)
             FUN_147dc82c2(lVar2 + 0xe8,
                           ((uint)uVar3 << 0x10 | uVar6) + (int)((ulonglong)uVar3 >> 0x20) +
                           (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4),param_2);
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_147dc8866(plVar5,iVar1);
    }
    *(undefined8 **)(*plVar5 + (longlong)iVar1 * 8) = param_2;
  }
  if (*(int *)(param_2 + 5) != 0) {
    iVar1 = *(int *)(lVar2 + 0x140);
    *(uint *)(lVar2 + 0x140) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x144) < iVar1 + 1U) {
      FUN_147dc8866((longlong *)(lVar2 + 0x138),iVar1);
    }
    *(undefined8 **)(*(longlong *)(lVar2 + 0x138) + (longlong)iVar1 * 8) = param_2;
  }
  return 1;
}



// FUNCTION 1437ae680 FUN_1437ae680 body=140 status=ok
// SIG undefined FUN_1437ae680(void)

undefined8 FUN_1437ae680(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  
  if (*(int *)(param_2 + 3) != 0) {
    uVar2 = *param_2;
    cVar4 = FUN_147dc0de4(uVar2);
    if (cVar4 != '\0') {
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar6 = (uint)uVar2 & 0xffff;
      plVar5 = (longlong *)
               FUN_147dc82c2(*param_1,((uint)uVar2 << 0x10 | uVar6) +
                                      (int)((ulonglong)uVar2 >> 0x20) +
                                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4),param_2);
      iVar1 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
        FUN_147dc8866(plVar5,iVar1);
      }
      *(undefined8 **)(*plVar5 + (longlong)iVar1 * 8) = param_2;
    }
  }
  return 1;
}



// FUNCTION 1437ae70c FUN_1437ae70c body=209 status=ok
// SIG undefined FUN_1437ae70c(void)

void FUN_1437ae70c(undefined8 *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = param_2[3];
  dVar3 = dVar8 + param_2[2];
  dVar4 = dVar8 + param_2[1];
  dVar6 = dVar8 + *param_2;
  dVar5 = param_2[2] - dVar8;
  dVar7 = param_2[1] - dVar8;
  dVar8 = *param_2 - dVar8;
  pdVar1 = (double *)*param_1;
  if (*(char *)(pdVar1 + 6) == '\0') {
    *pdVar1 = dVar8;
    pdVar1[1] = dVar7;
    pdVar1[2] = dVar5;
    pdVar1[3] = dVar6;
    pdVar1[4] = dVar4;
    pdVar1[5] = dVar3;
    *(undefined1 *)(pdVar1 + 6) = 1;
  }
  else {
    dVar2 = *pdVar1;
    if (dVar8 <= *pdVar1) {
      dVar2 = dVar8;
    }
    *pdVar1 = dVar2;
    dVar8 = pdVar1[1];
    if (dVar7 <= pdVar1[1]) {
      dVar8 = dVar7;
    }
    pdVar1[1] = dVar8;
    dVar8 = pdVar1[2];
    if (dVar5 <= pdVar1[2]) {
      dVar8 = dVar5;
    }
    pdVar1[2] = dVar8;
    dVar8 = pdVar1[3];
    if (pdVar1[3] <= dVar6) {
      dVar8 = dVar6;
    }
    pdVar1[3] = dVar8;
    dVar8 = pdVar1[4];
    if (pdVar1[4] <= dVar4) {
      dVar8 = dVar4;
    }
    pdVar1[4] = dVar8;
    dVar8 = pdVar1[5];
    if (pdVar1[5] <= dVar3) {
      dVar8 = dVar3;
    }
    pdVar1[5] = dVar8;
  }
  return;
}



// FUNCTION 1437ae7de FUN_1437ae7de body=141 status=ok
// SIG undefined FUN_1437ae7de(void)

void FUN_1437ae7de(double *param_1,undefined8 *param_2,double *param_3,char *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = param_3[1];
  if (*param_4 == '\x01') {
    fVar5 = (float)dVar6;
    pfVar4 = (float *)*param_2;
    dVar6 = (double)(pfVar4[1] * (float)*param_3 + pfVar4[3] * fVar5 + pfVar4[5]);
    dVar7 = (double)((float)*param_3 * *pfVar4 + fVar5 * pfVar4[2] + pfVar4[4]);
  }
  else {
    dVar7 = *param_3;
  }
  dVar1 = ((double *)param_2[2])[1];
  dVar2 = ((double *)param_2[1])[1];
  dVar3 = ((double *)param_2[3])[1];
  *param_1 = (dVar7 - *(double *)param_2[2]) * *(double *)param_2[1] + *(double *)param_2[3];
  param_1[1] = (dVar6 - dVar1) * dVar2 + dVar3;
  return;
}



// FUNCTION 1437ae86c FUN_1437ae86c body=242 status=ok
// SIG undefined FUN_1437ae86c(void)

undefined8 FUN_1437ae86c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2[6] != 0) {
    lVar2 = (longlong)(int)((longlong *)param_1[1])[1];
    if (lVar2 != 0) {
      uVar1 = *param_1;
      lVar3 = *(longlong *)param_1[1];
      lVar2 = lVar2 * 0x160;
      do {
        local_80 = *(undefined4 *)(param_1 + 2);
        local_78 = param_1[3];
        local_70 = param_1[4];
        local_68 = param_1[5];
        local_60 = param_1[6];
        local_58 = FUN_1437ae960;
        local_98 = &local_58;
        local_90 = uVar1;
        local_88 = param_2;
        local_50 = &local_90;
        FUN_144b2c65a(lVar3,(float)*(int *)(param_2 + 1),*param_2,0);
        lVar3 = lVar3 + 0x160;
        lVar2 = lVar2 + -0x160;
      } while (lVar2 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ae960 FUN_1437ae960 body=386 status=ok
// SIG undefined FUN_1437ae960(void)

void FUN_1437ae960(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_70;
  longlong local_68;
  undefined8 *local_60;
  code *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uStack_a0 = *param_1;
  local_90 = param_1[3];
  local_78 = param_1[6];
  if (ABS((double)param_2[7] + -360.0) <= 1e-08) {
    local_38 = param_2[2];
    local_48 = *param_2;
    uStack_40 = param_2[1];
    local_68 = *(longlong *)(param_1[1] + 0x30);
    local_88 = param_1[4];
    uStack_80 = param_1[5];
    local_60 = (undefined8 *)&local_a8;
    local_a8 = CONCAT31(local_a8._1_3_,1);
    local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(param_1 + 2));
    local_50 = &local_68;
    local_b8 = &local_58;
    local_58 = FUN_1437aeae4;
    FUN_147dc6544(local_68 + 0x18,local_68 + 0x20,&local_48,(double)param_2[3] * (double)param_2[3])
    ;
  }
  else {
    local_88 = param_2[4];
    uStack_80 = param_2[5];
    local_98 = param_2[2];
    local_a8 = *(undefined4 *)param_2;
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
    local_68 = *(longlong *)(param_1[1] + 0x30);
    local_28 = *(undefined4 *)(param_1 + 4);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_20 = *(undefined4 *)(param_1 + 5);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_60 = &local_48;
    local_48 = CONCAT71(local_48._1_7_,1);
    local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 2));
    local_50 = &local_68;
    local_58 = FUN_1437aeed8;
    uStack_40 = uStack_a0;
    uStack_a0 = param_2[1];
    local_30 = local_90;
    local_90 = param_2[3];
    local_18 = local_78;
    local_78 = param_2[6];
    local_70 = (double)param_2[7];
    FUN_147dc675e(local_68 + 0x18,&local_a8);
  }
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437aeae4 FUN_1437aeae4 body=1010 status=ok
// SIG undefined FUN_1437aeae4(void)

undefined1 FUN_1437aeae4(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar6 = (undefined1 *)param_1[1];
  plVar7 = *(longlong **)(*(longlong *)(*param_1 + 8) + 0x38 + (longlong)*param_2 * 0x40);
  (**(code **)(*(longlong *)plVar7[0x15] + 0x2e0))((longlong *)plVar7[0x15],&local_c8);
  (**(code **)(*(longlong *)plVar7[0x15] + 0x2e0))((longlong *)plVar7[0x15],&local_c8);
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  if (DAT_14cb117c0 == 0) {
    (**(code **)(*plVar7 + 0x2d8))(plVar7,&local_c8,*(undefined4 *)(puVar6 + 0x10));
    uVar10 = uStack_d0;
    lVar14 = (longlong)(int)uStack_d0;
    uVar11 = (int)uStack_d0 + 1;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar11);
    if (uStack_d0._4_4_ < uVar11) {
      FUN_1467ff840(&local_d8,uVar10 & 0xffffffff);
    }
    puVar1 = local_d8 + lVar14 * 4;
    *puVar1 = local_c8;
    puVar1[1] = uStack_c4;
    puVar1[2] = uStack_c0;
    puVar1[3] = uStack_bc;
LAB_1437aedfa:
    if ((int)uStack_d0 != 0) goto LAB_1437aee23;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,1);
    if (uStack_d0._4_4_ == 0) goto LAB_1437aeea4;
  }
  else {
    if (DAT_14cb117c0 == 1) {
      if (*(int *)(*(longlong *)(puVar6 + 0x18) + 8) !=
          *(int *)(*(longlong *)(puVar6 + 0x18) + 0x34)) {
        plVar15 = plVar7 + 5;
        lVar14 = (**(code **)(plVar7[5] + 0x38))(plVar15);
        if (*(int *)(lVar14 + 8) != 0) {
          plVar15 = (longlong *)(**(code **)(*plVar15 + 0x38))(plVar15);
          if ((longlong)(int)plVar15[1] != 0) {
            plVar19 = (longlong *)*plVar15;
            plVar15 = plVar19 + (int)plVar15[1];
            do {
              uVar10 = uStack_d0;
              plVar9 = *(longlong **)(puVar6 + 0x18);
              if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
                lVar14 = *plVar19;
                uVar11 = (uint)((ulonglong)lVar14 >> 0x10);
                uVar17 = (uint)lVar14 & 0xffff;
                plVar16 = plVar9 + 7;
                if ((longlong *)plVar9[8] != (longlong *)0x0) {
                  plVar16 = (longlong *)plVar9[8];
                }
                iVar18 = *(int *)((longlong)plVar16 +
                                 (ulonglong)
                                 ((int)plVar9[9] - 1U &
                                 (int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar17)
                                 + (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar17 >> 4)) * 4);
                if (iVar18 != -1) {
                  do {
                    plVar16 = (longlong *)(*plVar9 + (longlong)iVar18 * 0x14);
                    if (*plVar16 == lVar14) goto LAB_1437aed77;
                    iVar18 = *(int *)((longlong)plVar16 + 0xc);
                  } while (iVar18 != -1);
                }
              }
              plVar16 = (longlong *)0x0;
LAB_1437aed77:
              uVar2 = (&DAT_14c758c60)[*(byte *)((longlong)plVar16 + 10)];
              uVar3 = (&DAT_14c758c60)[*(byte *)((longlong)plVar16 + 9)];
              bVar5 = *(byte *)((longlong)plVar16 + 0xb);
              uVar4 = (&DAT_14c758c60)[*(byte *)(plVar16 + 1)];
              lVar14 = (longlong)(int)uStack_d0;
              uVar11 = (int)uStack_d0 + 1;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar11);
              if (uStack_d0._4_4_ < uVar11) {
                FUN_1467ff840(&local_d8,uVar10 & 0xffffffff);
              }
              local_d8[lVar14 * 4] = uVar2;
              local_d8[lVar14 * 4 + 1] = uVar3;
              local_d8[lVar14 * 4 + 2] = uVar4;
              local_d8[lVar14 * 4 + 3] = (float)bVar5 * 0.003921569;
              plVar19 = plVar19 + 1;
            } while (plVar19 != plVar15);
          }
        }
      }
      goto LAB_1437aedfa;
    }
    if (DAT_14cb117c0 == 2) {
      if ((*(longlong *)(puVar6 + 0x20) != 0) &&
         (piVar12 = (int *)(**(code **)(*plVar7 + 0x300))(plVar7),
         ((piVar12[1] != 0 || *piVar12 != 0) || piVar12[2] != 0) || piVar12[3] != 0)) {
        uVar8 = *(undefined8 *)(puVar6 + 0x20);
        uVar13 = (**(code **)(*plVar7 + 0x300))(plVar7);
        lVar14 = FUN_147db3d60(uVar8,*(undefined8 *)(puVar6 + 0x28),uVar13);
        uVar10 = uStack_d0;
        if (lVar14 != 0) {
          lVar14 = *(longlong *)(lVar14 + 0x20);
          uVar2 = (&DAT_14c758c60)[*(byte *)(lVar14 + 0x3a)];
          uVar3 = (&DAT_14c758c60)[*(byte *)(lVar14 + 0x39)];
          bVar5 = *(byte *)(lVar14 + 0x3b);
          uVar4 = (&DAT_14c758c60)[*(byte *)(lVar14 + 0x38)];
          lVar14 = (longlong)(int)uStack_d0;
          uVar11 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar11);
          if (uStack_d0._4_4_ < uVar11) {
            FUN_1467ff840(&local_d8,uVar10 & 0xffffffff);
          }
          local_d8[lVar14 * 4] = uVar2;
          local_d8[lVar14 * 4 + 1] = uVar3;
          local_d8[lVar14 * 4 + 2] = uVar4;
          local_d8[lVar14 * 4 + 3] = (float)bVar5 * 0.003921569;
        }
      }
      goto LAB_1437aedfa;
    }
    uStack_d0 = 1;
LAB_1437aeea4:
    FUN_1467ff840(&local_d8,0);
  }
  *local_d8 = 0x3f800000;
  local_d8[1] = 0x3f800000;
  local_d8[2] = 0x3f800000;
  local_d8[3] = 0x3f800000;
LAB_1437aee23:
  (**(code **)(*(longlong *)plVar7[0x15] + 0x2e0))((longlong *)plVar7[0x15],&local_c8);
  if (local_d8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *puVar6;
}



// FUNCTION 1437aeed8 FUN_1437aeed8 body=1010 status=ok
// SIG undefined FUN_1437aeed8(void)

undefined1 FUN_1437aeed8(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar6 = (undefined1 *)param_1[1];
  plVar7 = *(longlong **)(*(longlong *)(*param_1 + 8) + 0x38 + (longlong)*param_2 * 0x40);
  (**(code **)(*(longlong *)plVar7[0x15] + 0x2e0))((longlong *)plVar7[0x15],&local_c8);
  (**(code **)(*(longlong *)plVar7[0x15] + 0x2e0))((longlong *)plVar7[0x15],&local_c8);
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  if (DAT_14cb117c0 == 0) {
    (**(code **)(*plVar7 + 0x2d8))(plVar7,&local_c8,*(undefined4 *)(puVar6 + 0x10));
    uVar10 = uStack_d0;
    lVar14 = (longlong)(int)uStack_d0;
    uVar11 = (int)uStack_d0 + 1;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar11);
    if (uStack_d0._4_4_ < uVar11) {
      FUN_1467ff840(&local_d8,uVar10 & 0xffffffff);
    }
    puVar1 = local_d8 + lVar14 * 4;
    *puVar1 = local_c8;
    puVar1[1] = uStack_c4;
    puVar1[2] = uStack_c0;
    puVar1[3] = uStack_bc;
LAB_1437af1ee:
    if ((int)uStack_d0 != 0) goto LAB_1437af217;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,1);
    if (uStack_d0._4_4_ == 0) goto LAB_1437af298;
  }
  else {
    if (DAT_14cb117c0 == 1) {
      if (*(int *)(*(longlong *)(puVar6 + 0x18) + 8) !=
          *(int *)(*(longlong *)(puVar6 + 0x18) + 0x34)) {
        plVar15 = plVar7 + 5;
        lVar14 = (**(code **)(plVar7[5] + 0x38))(plVar15);
        if (*(int *)(lVar14 + 8) != 0) {
          plVar15 = (longlong *)(**(code **)(*plVar15 + 0x38))(plVar15);
          if ((longlong)(int)plVar15[1] != 0) {
            plVar19 = (longlong *)*plVar15;
            plVar15 = plVar19 + (int)plVar15[1];
            do {
              uVar10 = uStack_d0;
              plVar9 = *(longlong **)(puVar6 + 0x18);
              if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
                lVar14 = *plVar19;
                uVar11 = (uint)((ulonglong)lVar14 >> 0x10);
                uVar17 = (uint)lVar14 & 0xffff;
                plVar16 = plVar9 + 7;
                if ((longlong *)plVar9[8] != (longlong *)0x0) {
                  plVar16 = (longlong *)plVar9[8];
                }
                iVar18 = *(int *)((longlong)plVar16 +
                                 (ulonglong)
                                 ((int)plVar9[9] - 1U &
                                 (int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar17)
                                 + (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar17 >> 4)) * 4);
                if (iVar18 != -1) {
                  do {
                    plVar16 = (longlong *)(*plVar9 + (longlong)iVar18 * 0x14);
                    if (*plVar16 == lVar14) goto LAB_1437af16b;
                    iVar18 = *(int *)((longlong)plVar16 + 0xc);
                  } while (iVar18 != -1);
                }
              }
              plVar16 = (longlong *)0x0;
LAB_1437af16b:
              uVar2 = (&DAT_14c758c60)[*(byte *)((longlong)plVar16 + 10)];
              uVar3 = (&DAT_14c758c60)[*(byte *)((longlong)plVar16 + 9)];
              bVar5 = *(byte *)((longlong)plVar16 + 0xb);
              uVar4 = (&DAT_14c758c60)[*(byte *)(plVar16 + 1)];
              lVar14 = (longlong)(int)uStack_d0;
              uVar11 = (int)uStack_d0 + 1;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar11);
              if (uStack_d0._4_4_ < uVar11) {
                FUN_1467ff840(&local_d8,uVar10 & 0xffffffff);
              }
              local_d8[lVar14 * 4] = uVar2;
              local_d8[lVar14 * 4 + 1] = uVar3;
              local_d8[lVar14 * 4 + 2] = uVar4;
              local_d8[lVar14 * 4 + 3] = (float)bVar5 * 0.003921569;
              plVar19 = plVar19 + 1;
            } while (plVar19 != plVar15);
          }
        }
      }
      goto LAB_1437af1ee;
    }
    if (DAT_14cb117c0 == 2) {
      if ((*(longlong *)(puVar6 + 0x20) != 0) &&
         (piVar12 = (int *)(**(code **)(*plVar7 + 0x300))(plVar7),
         ((piVar12[1] != 0 || *piVar12 != 0) || piVar12[2] != 0) || piVar12[3] != 0)) {
        uVar8 = *(undefined8 *)(puVar6 + 0x20);
        uVar13 = (**(code **)(*plVar7 + 0x300))(plVar7);
        lVar14 = FUN_147db3d60(uVar8,*(undefined8 *)(puVar6 + 0x28),uVar13);
        uVar10 = uStack_d0;
        if (lVar14 != 0) {
          lVar14 = *(longlong *)(lVar14 + 0x20);
          uVar2 = (&DAT_14c758c60)[*(byte *)(lVar14 + 0x3a)];
          uVar3 = (&DAT_14c758c60)[*(byte *)(lVar14 + 0x39)];
          bVar5 = *(byte *)(lVar14 + 0x3b);
          uVar4 = (&DAT_14c758c60)[*(byte *)(lVar14 + 0x38)];
          lVar14 = (longlong)(int)uStack_d0;
          uVar11 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar11);
          if (uStack_d0._4_4_ < uVar11) {
            FUN_1467ff840(&local_d8,uVar10 & 0xffffffff);
          }
          local_d8[lVar14 * 4] = uVar2;
          local_d8[lVar14 * 4 + 1] = uVar3;
          local_d8[lVar14 * 4 + 2] = uVar4;
          local_d8[lVar14 * 4 + 3] = (float)bVar5 * 0.003921569;
        }
      }
      goto LAB_1437af1ee;
    }
    uStack_d0 = 1;
LAB_1437af298:
    FUN_1467ff840(&local_d8,0);
  }
  *local_d8 = 0x3f800000;
  local_d8[1] = 0x3f800000;
  local_d8[2] = 0x3f800000;
  local_d8[3] = 0x3f800000;
LAB_1437af217:
  (**(code **)(*(longlong *)plVar7[0x15] + 0x2e0))((longlong *)plVar7[0x15],&local_c8);
  if (local_d8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *puVar6;
}



// FUNCTION 1437af2cc FUN_1437af2cc body=75 status=ok
// SIG undefined FUN_1437af2cc(void)

void FUN_1437af2cc(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = (longlong)*(int *)(param_1 + 0x38);
  local_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437af318 FUN_1437af318 body=74 status=ok
// SIG undefined FUN_1437af318(void)

void FUN_1437af318(int *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = (longlong)*param_1;
  local_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 4));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437af364 FUN_1437af364 body=29 status=ok
// SIG undefined FUN_1437af364(void)

undefined8 FUN_1437af364(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437af396 FUN_1437af396 body=85 status=ok
// SIG undefined FUN_1437af396(void)

void FUN_1437af396(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1f9e0;
  return;
}



// FUNCTION 1437af3ec FUN_1437af3ec body=85 status=ok
// SIG undefined FUN_1437af3ec(void)

void FUN_1437af3ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1f9e0;
  return;
}



// FUNCTION 1437af442 FUN_1437af442 body=118 status=ok
// SIG undefined FUN_1437af442(void)

void FUN_1437af442(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab1f9e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437af4a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437af4c0 FUN_1437af4c0 body=19 status=ok
// SIG undefined FUN_1437af4c0(void)

undefined1 FUN_1437af4c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1437af4d4(param_2);
  return 1;
}



// FUNCTION 1437af4d4 FUN_1437af4d4 body=371 status=ok
// SIG undefined FUN_1437af4d4(void)

void FUN_1437af4d4(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_1;
  FUN_1449ad616(&DAT_14cb118e0);
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    plVar6 = *(longlong **)(DAT_14cb0d2b0 + 0x1148);
    local_60 = plVar6 + *(int *)(DAT_14cb0d2b0 + 0x1150);
    do {
      lVar2 = *(longlong *)(*plVar6 + 0x360);
      if (((lVar2 != 0) &&
          (((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
            ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
           (*(longlong *)(lVar2 + 0x30) != 0)))) &&
         (((lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0), lVar2 != 0 &&
           (lVar2 = *(longlong *)(lVar2 + 0x3f0), lVar2 != 0)) &&
          ((longlong)*(int *)(local_68 + 1) != 0)))) {
        puVar8 = (undefined8 *)*local_68;
        lVar7 = (longlong)*(int *)(local_68 + 1) << 4;
        do {
          plVar3 = *(longlong **)(lVar2 + 0x30);
          if ((plVar3 != (longlong *)0x0) &&
             (cVar4 = (**(code **)(*plVar3 + 0x2f0))(plVar3,puVar8), cVar4 != '\0')) {
            iVar5 = *(int *)(puVar8 + 1) + -1;
            if (*(int *)(puVar8 + 1) == 0) {
              iVar5 = 0;
            }
            FUN_1446f82e2(&local_50,iVar5,*puVar8,1);
            local_58 = local_50;
            FUN_144869592(&DAT_14cb118e0,&local_50,&local_58,0);
          }
          puVar8 = puVar8 + 2;
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != 0);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437af648 FUN_1437af648 body=29 status=ok
// SIG undefined FUN_1437af648(void)

undefined8 FUN_1437af648(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437af67a FUN_1437af67a body=85 status=ok
// SIG undefined FUN_1437af67a(void)

void FUN_1437af67a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1fa50;
  return;
}



// FUNCTION 1437af6d0 FUN_1437af6d0 body=85 status=ok
// SIG undefined FUN_1437af6d0(void)

void FUN_1437af6d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1fa50;
  return;
}



// FUNCTION 1437af726 FUN_1437af726 body=118 status=ok
// SIG undefined FUN_1437af726(void)

void FUN_1437af726(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab1fa50;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437af78d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437af7a4 FUN_1437af7a4 body=19 status=ok
// SIG undefined FUN_1437af7a4(void)

undefined1 FUN_1437af7a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1437af7b8(param_2);
  return 1;
}



// FUNCTION 1437af7b8 FUN_1437af7b8 body=510 status=ok
// SIG undefined FUN_1437af7b8(void)

void FUN_1437af7b8(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  undefined1 local_60 [8];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1449ad616(&DAT_14cb11940);
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0x1148);
    local_80 = plVar2 + *(int *)(DAT_14cb0d2b0 + 0x1150);
    do {
      local_78 = plVar2;
      if (((*(longlong *)(*plVar2 + 0x360) != 0) &&
          (((bVar1 = *(byte *)(*(longlong *)(*plVar2 + 0x360) + 0x152), bVar1 == 1 ||
            ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
           (lVar3 = FUN_14011c706(), lVar3 != 0)))) && ((longlong)*(int *)(lVar3 + 0x50) != 0)) {
        plVar2 = *(longlong **)(lVar3 + 0x48);
        plVar7 = plVar2 + *(int *)(lVar3 + 0x50);
        local_70 = plVar7;
        do {
          if (*(longlong *)(*plVar2 + 0xd0) != 0) {
            FUN_147db4d70(*(longlong *)(*plVar2 + 0xd0),&local_58,param_1);
            lVar3 = local_58;
            lVar6 = (longlong)local_50;
            if (lVar6 != 0) {
              lVar9 = 0;
              do {
                (**(code **)(**(longlong **)(lVar3 + lVar9) + 0x310))
                          (*(longlong **)(lVar3 + lVar9),local_60);
                FUN_144869592(&DAT_14cb11940,local_64,local_60,0);
                lVar9 = lVar9 + 8;
                plVar7 = local_70;
              } while (lVar6 * 8 != lVar9);
            }
            if (local_58 != 0) {
              FUN_1400020a8(local_58);
            }
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar7);
      }
      plVar2 = local_78 + 1;
    } while (plVar2 != local_80);
  }
  if ((longlong)(int)param_1[1] != 0) {
    puVar5 = (undefined8 *)*param_1;
    puVar8 = puVar5 + (longlong)(int)param_1[1] * 2;
    do {
      iVar4 = *(int *)(puVar5 + 1) + -1;
      if (*(int *)(puVar5 + 1) == 0) {
        iVar4 = 0;
      }
      FUN_1446f82e2(&local_58,iVar4,*puVar5,1);
      if (local_58 == 0) {
        local_58 = 0;
        FUN_144869592(&DAT_14cb11940,local_60,&local_58,0);
        break;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437af9b8 FUN_1437af9b8 body=29 status=ok
// SIG undefined FUN_1437af9b8(void)

undefined8 FUN_1437af9b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437af9ea FUN_1437af9ea body=85 status=ok
// SIG undefined FUN_1437af9ea(void)

void FUN_1437af9ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1fac0;
  return;
}



// FUNCTION 1437afa40 FUN_1437afa40 body=85 status=ok
// SIG undefined FUN_1437afa40(void)

void FUN_1437afa40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1fac0;
  return;
}



// FUNCTION 1437afa96 FUN_1437afa96 body=118 status=ok
// SIG undefined FUN_1437afa96(void)

void FUN_1437afa96(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab1fac0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437afafd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437afb14 FUN_1437afb14 body=19 status=ok
// SIG undefined FUN_1437afb14(void)

undefined1 FUN_1437afb14(undefined8 param_1,undefined8 param_2)

{
  FUN_1437afb28(param_2);
  return 1;
}



// FUNCTION 1437afb28 FUN_1437afb28 body=170 status=ok
// SIG undefined FUN_1437afb28(void)

void FUN_1437afb28(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  wchar_t *_Str;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147dc8caa();
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      _Str = L"";
      if (*(int *)(lVar1 + 8 + lVar4) != 0) {
        _Str = *(wchar_t **)(lVar1 + lVar4);
      }
      uVar3 = _wtoi(_Str);
      if (uVar3 < 9) {
        local_44 = uVar3;
        FUN_147dc8e6e(local_48,&local_44);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437afbd4 FUN_1437afbd4 body=29 status=ok
// SIG undefined FUN_1437afbd4(void)

undefined8 FUN_1437afbd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437afc06 FUN_1437afc06 body=85 status=ok
// SIG undefined FUN_1437afc06(void)

void FUN_1437afc06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1fb30;
  return;
}



// FUNCTION 1437afc5c FUN_1437afc5c body=85 status=ok
// SIG undefined FUN_1437afc5c(void)

void FUN_1437afc5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab1fb30;
  return;
}



// FUNCTION 1437afcb2 FUN_1437afcb2 body=118 status=ok
// SIG undefined FUN_1437afcb2(void)

void FUN_1437afcb2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab1fb30;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437afd19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437afd30 FUN_1437afd30 body=19 status=ok
// SIG undefined FUN_1437afd30(void)

undefined1 FUN_1437afd30(undefined8 param_1,undefined8 param_2)

{
  FUN_1437afd44(param_2);
  return 1;
}



// FUNCTION 1437afd44 FUN_1437afd44 body=225 status=ok
// SIG undefined FUN_1437afd44(void)

void FUN_1437afd44(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  local_78 = *param_1;
  local_70 = *(undefined4 *)(param_1 + 1);
  FUN_14282d1cc(&local_68);
  FUN_140e83cb0(&local_68,&local_88);
  FUN_1410e5bda(&DAT_14cb11a00,&local_88);
  FUN_1447a1747(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_68);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437afe26 FUN_1437afe26 body=3721 status=ok
// SIG undefined FUN_1437afe26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437afe26(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  int local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446f470e(&DAT_14cb114f0,L"GetHLODDestructionTag",1);
  FUN_1446f470e(&DAT_14cb11500,L"SetHLODDestructionTag",1);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab19d00,2,&PTR_FUN_14ab19cd0);
  local_60 = "SMInstance";
  local_58 = 10;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb11550 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_60,&DAT_14cb11558);
  if (cVar2 == '\0') {
    _DAT_14cb11558 = 0;
    uRam000000014cb11560 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14ab1a440;
  local_78 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab1a460,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab1a7e0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab1ab40,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab1aef0,1,0);
  local_60._0_4_ = 1;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb115e0,L"wp.Runtime.HLOD.WarmupEnabled",&local_60,
                L"Enable HLOD assets warmup. Will delay unloading of cells & transition to HLODs for wp.Runtime.HLOD.WarmupNumFrames frames."
               );
  atexit(FUN_1437a432e);
  local_60._0_4_ = 1;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb115f8,L"wp.Runtime.HLOD.WarmupVT",&local_60,
                L"Enable virtual texture warmup for HLOD assets. Requires wp.Runtime.HLOD.WarmupEnabled to be 1."
               );
  atexit(FUN_1437a4373);
  local_60._0_4_ = 1;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb11610,L"wp.Runtime.HLOD.WarmupNanite",&local_60,
                L"Enable Nanite warmup for HLOD assets. Requires wp.Runtime.HLOD.WarmupEnabled to be 1."
               );
  atexit(FUN_1437a43b8);
  local_60._0_4_ = 5;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb11628,L"wp.Runtime.HLOD.WarmupNumFrames",&local_60,
                L"Delay unloading of a cell for this amount of frames to ensure HLOD assets are ready to be shown at the proper resolution. Set to 0 to force disable warmup."
               );
  atexit(FUN_1437a43fd);
  local_60._0_4_ = 0;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb11640,L"wp.Runtime.HLOD.WarmupDebugDraw",&local_60,
                L"Draw debug display for the warmup requests");
  atexit(FUN_1437a4442);
  local_60._0_4_ = 0x40000000;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cb11658,L"wp.Runtime.HLOD.WarmupVTScaleFactor",&local_60,
                L"Scale the VT size we ask to prefetch by this factor.");
  atexit(FUN_1437a4487);
  local_60 = (char *)CONCAT44(local_60._4_4_,0x800);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb11670,L"wp.Runtime.HLOD.WarmupVTSizeClamp",&local_60,
                L"Clamp VT warmup requests for safety.");
  atexit(FUN_1437a44cc);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_149e062c0;
  *(code **)(local_60 + 0x18) = FUN_1437a4511;
  FUN_141253d16(&DAT_14cb11688,&local_60);
  if (local_58 == 0) {
LAB_1437b01e4:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_1437b01e4;
  }
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14ab1f400;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb116a0,L"wp.Runtime.HLOD",
                L"Turn on/off loading & rendering of world partition HLODs.",&local_60);
  if (local_58 == 0) {
LAB_1437b02b9:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_1437b02b9;
  }
  atexit(FUN_1437a4636);
  FUN_1446f470e(&DAT_14cb116c4,L"InputActorCount",1);
  FUN_1446f470e(&DAT_14cb116cc,L"InputTriangleCount",1);
  FUN_1446f470e(&DAT_14cb116d4,L"InputVertexCount",1);
  FUN_1446f470e(&DAT_14cb116dc,L"MeshInstanceCount",1);
  FUN_1446f470e(&DAT_14cb116e4,L"MeshNaniteTriangleCount",1);
  FUN_1446f470e(&DAT_14cb116ec,L"MeshNaniteVertexCount",1);
  FUN_1446f470e(&DAT_14cb116f4,L"MeshTriangleCount",1);
  FUN_1446f470e(&DAT_14cb116fc,L"MeshVertexCount",1);
  FUN_1446f470e(&DAT_14cb11704,L"MeshUVChannelCount",1);
  FUN_1446f470e(&DAT_14cb1170c,L"MaterialBaseColorTextureSize",1);
  FUN_1446f470e(&DAT_14cb11714,L"MaterialNormalTextureSize",1);
  FUN_1446f470e(&DAT_14cb1171c,L"MaterialEmissiveTextureSize",1);
  FUN_1446f470e(&DAT_14cb11724,L"MaterialMetallicTextureSize",1);
  FUN_1446f470e(&DAT_14cb1172c,L"MaterialRoughnessTextureSize",1);
  FUN_1446f470e(&DAT_14cb11734,L"MaterialSpecularTextureSize",1);
  FUN_1446f470e(&DAT_14cb1173c,L"MemoryMeshResourceSizeBytes",1);
  FUN_1446f470e(&DAT_14cb11744,L"MemoryTexturesResourceSizeBytes",1);
  FUN_1446f470e(&DAT_14cb1174c,L"MemoryDiskSizeBytes",1);
  FUN_1446f470e(&DAT_14cb11754,L"BuildTimeLoadMilliseconds",1);
  FUN_1446f470e(&DAT_14cb1175c,L"BuildTimeBuildMilliseconds",1);
  FUN_1446f470e(&DAT_14cb11764,L"BuildTimeTotalMilliseconds",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab1c1b0,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb11788,L"wp.Runtime.HashSet.ShowDebugDisplayLevel",&DAT_14cb11798,
                L"Used to choose which level to display when showing runtime partitions.");
  atexit(FUN_1437a65e0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb117a0,L"wp.Runtime.HashSet.ShowDebugDisplayLevelCount",&DAT_14c761ed4,
                L"Used to choose how many levels to display when showing runtime partitions.");
  atexit(FUN_1437a6625);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb117b0,L"wp.Runtime.HashSet.ShowDebugDisplayMode",&DAT_14cb117c0,
                L"Used to choose what mode to display when showing runtime partitions (0=Level Streaming State, 1=Data Layers, 2=Content Bundles)."
               );
  atexit(FUN_1437a666a);
  ppuStack_70 = &PTR_FUN_14ab1cf40;
  local_78 = 1;
  uStack_68 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab1cfd0,1,&PTR_FUN_14ab1cfa0);
  local_78._0_4_ = 4;
  FUN_141471170(&DAT_14cb11848,L"wp.Runtime.EnableServerStreaming",&DAT_14cb11840,
                L"Set to 1 to enable server streaming, set to 2 to only enable it in PIE.\nChanging the value while the game is running won\'t be considered."
               );
  atexit(FUN_1437a8bb3);
  local_78._0_4_ = 4;
  FUN_14153156c(&DAT_14cb11860,L"wp.Runtime.EnableServerStreamingOut",&DAT_14cb11858,
                L"Turn on/off to allow or not the server to stream out levels (only relevant when server streaming is enabled)\nChanging the value while the game is running won\'t be considered."
               );
  atexit(FUN_1437a8bf8);
  local_78._0_4_ = 4;
  FUN_14153156c(&DAT_14cb11878,L"wp.Runtime.UseMakingVisibleTransactionRequests",&DAT_14cb11870,
                L"Whether the client should wait for the server to acknowledge visibility update before making partitioned world streaming levels visible.\nChanging the value while the game is running won\'t be considered."
               );
  atexit(FUN_1437a8c3d);
  local_78 = CONCAT44(local_78._4_4_,4);
  FUN_14153156c(&DAT_14cb11890,L"wp.Runtime.UseMakingInvisibleTransactionRequests",&DAT_14cb11888,
                L"Whether the client should wait for the server to acknowledge visibility update before making partitioned world streaming levels invisible.\nChanging the value while the game is running won\'t be considered."
               );
  atexit(FUN_1437a8c82);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab1da30,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb118d0,L"wp.Runtime.DrawContentBundles",&DAT_14c761ed8,
                L"Enable to draw debug display of content bundle.");
  atexit(FUN_1437a953d);
  DAT_14cb11900 = 0;
  _DAT_14cb11908 = 0;
  DAT_14cb118e0 = 0;
  _DAT_14cb118e8 = 0;
  _DAT_14cb1190c = 0xffffffff00000080;
  DAT_14cb11914 = 0;
  DAT_14cb11920 = 0;
  DAT_14cb11928 = 0;
  atexit(FUN_1437a9582);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14ab1f9e0;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb11930,L"wp.Runtime.DebugFilterByRuntimeHashGridName",
                L"Filter debug diplay of world partition streaming by grid name. Args [grid names]",
                &local_60);
  if (local_58 == 0) {
LAB_1437b07f8:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_1437b07f8;
  }
  atexit(FUN_1437a962b);
  DAT_14cb11960 = 0;
  _DAT_14cb11968 = 0;
  DAT_14cb11940 = 0;
  _DAT_14cb11948 = 0;
  _DAT_14cb1196c = 0xffffffff00000080;
  DAT_14cb11974 = 0;
  DAT_14cb11980 = 0;
  DAT_14cb11988 = 0;
  atexit(FUN_1437a9670);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14ab1fa50;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb11990,L"wp.Runtime.DebugFilterByDataLayer",
                L"Filter debug diplay of world partition streaming by data layer. Args [datalayer labels]"
                ,&local_60);
  if (local_58 == 0) {
LAB_1437b0909:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_1437b0909;
  }
  atexit(FUN_1437a9719);
  DAT_14cb119c0 = 0;
  DAT_14cb119c8 = 0;
  DAT_14cb119a0 = 0;
  _DAT_14cb119a8 = 0;
  _DAT_14cb119cc = 0xffffffff00000080;
  DAT_14cb119d4 = 0;
  DAT_14cb119e0 = 0;
  DAT_14cb119e8 = 0;
  atexit(FUN_1437a975e);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14ab1fac0;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb119f0,L"wp.Runtime.DebugFilterByStreamingStatus",
                L"Filter debug diplay of world partition streaming by streaming status. Args [streaming status]"
                ,&local_60);
  if (local_58 == 0) {
LAB_1437b0a1a:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_1437b0a1a;
  }
  atexit(FUN_1437a9787);
  DAT_14cb11a00 = 0;
  _DAT_14cb11a08 = 0;
  atexit(FUN_1437a97cc);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14ab1fb30;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb11a10,L"wp.Runtime.DebugFilterByCellName",
                L"Filter debug diplay of world partition streaming by full or partial cell name. Args [cell name]"
                ,&local_60);
  if (local_58 != 0) {
    if (local_60 == (char *)0x0) goto LAB_1437b0b18;
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1437b0b18:
  atexit(FUN_1437a97fd);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb11a38,L"wp.Runtime.ShowRuntimeSpatialHashCellStreamingPriority",
                &DAT_14cb11aac,
                L"Enable to show a heatmap of the runtime spatial hash grid cells based on their priority (0=disabled, 1=heatmap, 2=grayscale."
               );
  atexit(FUN_1437a9842);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab1e390,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab1e800,1,&PTR_FUN_14ab1e7d0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab1eb70,1,0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437b0cb0 FUN_1437b0cb0 body=636 status=ok
// SIG undefined FUN_1437b0cb0(void)

undefined8 FUN_1437b0cb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_80;
  code *local_78 [2];
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_48[0] = 0;
  local_48[1] = 0;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_140056680(&local_68);
  FUN_140056680(local_78,&DAT_149e0635c);
  local_d0 = 0;
  local_d8 = 1;
  cVar1 = FUN_1407cdbc6(&local_68,local_78,&local_58,local_48);
  if (local_78[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    FUN_14020fad6(&local_58,param_2);
  }
  puVar4 = local_58;
  if ((int)uStack_50 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(local_78,puVar4);
  FUN_14094a6a4(&local_68,local_78,0);
  if (local_78[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = local_68;
  if (local_60 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_80,puVar4,1);
  lVar2 = FUN_140c715a8(param_1,local_80);
  if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0xc0) == 0)) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xc0) + 0x178), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    if (DAT_14c927740 == 0) {
      local_78[0] = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_146856450;
      local_b0 = FUN_1427b121c;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000021;
      local_d0 = 8;
      local_d8 = 0x28;
      local_a0 = local_78;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    uVar3 = FUN_140277b32(DAT_14c927740,lVar2,param_2,0);
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1437b0f2e FUN_1437b0f2e body=1327 status=ok
// SIG undefined FUN_1437b0f2e(void)

void FUN_1437b0f2e(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_1d8 [32];
  longlong **local_1b8;
  float *local_1b0;
  double *local_1a0;
  undefined2 *local_198;
  int local_190;
  undefined2 *local_188;
  int local_180;
  undefined4 local_174;
  undefined2 *local_170;
  int local_168;
  longlong local_160 [2];
  float local_14c;
  longlong *local_148;
  double dStack_140;
  code *local_138;
  longlong **local_130;
  longlong local_128;
  longlong alStack_120 [18];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40) == 0) {
    FUN_14475ec7e();
  }
  uVar12 = 0;
  memset(&local_128,0,0x90);
  local_138 = FUN_1437bf6d4;
  local_148 = &local_128;
  local_130 = &local_148;
  FUN_147dc9564(param_1);
  local_148 = (longlong *)*param_3;
  dStack_140 = param_3[1];
  fVar13 = (float)dStack_140;
  local_14c = 0.0;
  dVar4 = (double)(float)param_3[1];
  local_1a0 = param_3;
  do {
    if (0 < (int)alStack_120[uVar12 * 2]) {
      pwVar10 = L"Unknown";
      if (uVar12 < 9) {
        pwVar10 = (wchar_t *)(&PTR_u_Unloaded_14ab2df90)[uVar12];
      }
      FUN_140002266(&local_170,L"%s (%d)",pwVar10);
      puVar7 = &DAT_149dfb77a;
      if (local_168 != 0) {
        puVar7 = local_170;
      }
      FUN_140056680(local_160,puVar7);
      if (local_170 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_1b0 = &local_14c;
      local_1b8 = &local_148;
      FUN_147dc1086(param_2,local_160,*(undefined8 *)(DAT_14cb0d2b0 + 0x58),&DAT_149e1e2d4);
      if ((double)fVar13 <= dStack_140) {
        fVar13 = (float)dStack_140;
      }
      if ((double)*(float *)(param_2 + 0x34) < dStack_140 + 30.0) {
        local_148 = (longlong *)((double)(local_14c + 5.0) + (double)local_148);
        local_14c = 0.0;
        dStack_140 = dVar4;
      }
      puVar5 = &DAT_149e1e2cc;
      if (uVar12 < 9) {
        puVar5 = (undefined4 *)(&PTR_DAT_14ab2dfd8)[uVar12];
      }
      local_174 = *puVar5;
      if ((longlong)(int)alStack_120[uVar12 * 2] != 0) {
        plVar8 = (longlong *)alStack_120[uVar12 * 2 + -1];
        plVar1 = plVar8 + (int)alStack_120[uVar12 * 2];
        do {
          plVar2 = (longlong *)*plVar8;
          if (((uint)uVar12 < 9) && ((0x138U >> ((uint)uVar12 & 0x1f) & 1) != 0)) {
            lVar9 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
            if (lVar9 != 0) {
              lVar9 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
LAB_1437b125b:
              lVar6 = lVar9;
              lVar9 = lVar6;
              if (*(longlong *)(lVar6 + 0x20) != 0) goto code_r0x0001437b126a;
              goto LAB_1437b1280;
            }
LAB_1437b1285:
            uVar3 = *(undefined8 *)(DAT_14cb0d2b0 + 0x30);
            FUN_140002266(&local_188,L"%d us",0);
            puVar7 = &DAT_149dfb77a;
            if (local_180 != 0) {
              puVar7 = local_188;
            }
            (**(code **)(plVar2[5] + 0x68))(plVar2 + 5,&local_198);
            puVar11 = &DAT_149dfb77a;
            if (local_190 != 0) {
              puVar11 = local_198;
            }
            FUN_140002266(&local_170,L"%s (%s)",puVar11,puVar7);
            local_1b0 = &local_14c;
            local_1b8 = &local_148;
            FUN_147dc1086(param_2,&local_170,uVar3,&local_174);
            if ((double)fVar13 <= dStack_140) {
              fVar13 = (float)dStack_140;
            }
            if ((double)*(float *)(param_2 + 0x34) < dStack_140 + 30.0) {
              local_148 = (longlong *)((double)(local_14c + 5.0) + (double)local_148);
              local_14c = 0.0;
              dStack_140 = dVar4;
            }
            if (local_170 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            puVar7 = local_188;
            if (local_198 != (undefined2 *)0x0) {
              FUN_1400020a8();
              puVar7 = local_188;
            }
          }
          else {
            uVar3 = *(undefined8 *)(DAT_14cb0d2b0 + 0x30);
            (**(code **)(plVar2[5] + 0x68))(plVar2 + 5,&local_170);
            local_1b0 = &local_14c;
            local_1b8 = &local_148;
            FUN_147dc1086(param_2,&local_170,uVar3,&local_174);
            if ((double)fVar13 <= dStack_140) {
              fVar13 = (float)dStack_140;
            }
            puVar7 = local_170;
            if ((double)*(float *)(param_2 + 0x34) < dStack_140 + 30.0) {
              local_148 = (longlong *)((double)(local_14c + 5.0) + (double)local_148);
              local_14c = 0.0;
              dStack_140 = dVar4;
            }
          }
          if (puVar7 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar1);
      }
      param_3 = local_1a0;
      if (local_160[0] != 0) {
        FUN_1400020a8();
        param_3 = local_1a0;
      }
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 9) {
      param_3[1] = (double)fVar13;
      lVar9 = 0x90;
      do {
        if (*(longlong *)((longlong)&local_138 + lVar9) != 0) {
          FUN_1400020a8();
        }
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      if ((local_90 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
code_r0x0001437b126a:
  lVar9 = *(longlong *)(lVar6 + 0x20);
  if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) != 0) {
    lVar9 = FUN_142840154(lVar6);
LAB_1437b1280:
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(lVar6 + 0x20);
      goto LAB_1437b125b;
    }
    goto LAB_1437b1285;
  }
  goto LAB_1437b125b;
}



// FUNCTION 1437b145e FUN_1437b145e body=69 status=ok
// SIG undefined FUN_1437b145e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b145e(void)

{
  _DAT_14cb11b38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b14a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11b40,1);
  return;
}



// FUNCTION 1437b14a3 FUN_1437b14a3 body=69 status=ok
// SIG undefined FUN_1437b14a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b14a3(void)

{
  _DAT_14cb11b48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b14e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11b50,1);
  return;
}



// FUNCTION 1437b14e8 FUN_1437b14e8 body=92 status=ok
// SIG undefined FUN_1437b14e8(void)

undefined8 FUN_1437b14e8(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((((DAT_14c761edc != 0) && (*(longlong *)(param_1 + 0x108) != 0)) &&
      (cVar2 = FUN_147a5faf8(), cVar2 != '\0')) &&
     (((*(longlong *)(param_1 + 0x30) != 0 &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar1 != 0)) &&
      (lVar1 = *(longlong *)(lVar1 + 0x3f0), lVar1 != 0)))) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0xf0) != 0);
  }
  return 0;
}



// FUNCTION 1437b1544 FUN_1437b1544 body=55 status=ok
// SIG undefined FUN_1437b1544(void)

void FUN_1437b1544(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11b90 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11b90 = FUN_14171c317(FUN_146412130,uVar1,L"EWorldPartitionRuntimeCellState");
  }
  return;
}



// FUNCTION 1437b157c FUN_1437b157c body=138 status=ok
// SIG undefined FUN_1437b157c(void)

void FUN_1437b157c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined8 uStack_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  uStack_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  local_1a8 = (undefined **)0x0;
  uStack_1a0 = 0;
  FUN_14021219d(param_2,&local_1a8);
  if (local_1a8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437b1608 FUN_1437b1608 body=101 status=ok
// SIG undefined FUN_1437b1608(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b1608(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb12280) {
    FUN_144b3d300(&DAT_14cb12280);
    if (DAT_14cb12280 == -1) {
      DAT_14cb12270 = 0;
      _DAT_14cb12278 = 0;
      atexit((_func_5014 *)&LAB_1437bdf00);
      _Init_thread_footer(&DAT_14cb12280);
      return;
    }
  }
  return;
}



// FUNCTION 1437b166d FUN_1437b166d body=223 status=ok
// SIG undefined FUN_1437b166d(void)

void FUN_1437b166d(longlong *param_1)

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
  *(undefined2 *)(puVar1 + 5) = 0xff;
  puVar1[6] = 0x7fefffffffffffff;
  *(undefined4 *)(puVar1 + 7) = 0x7f7fffff;
  puVar1[8] = 0x7fefffffffffffff;
  *(undefined4 *)(puVar1 + 9) = 0x80000000;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *puVar1 = &PTR_FUN_14ab233a0;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  puVar1[0x20] = 0x7fefffffffffffff;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0x7fefffffffffffff;
  puVar1[0x29] = 0x7fefffffffffffff;
  return;
}



// FUNCTION 1437b174c FUN_1437b174c body=69 status=ok
// SIG undefined FUN_1437b174c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b174c(void)

{
  _DAT_14cb11bf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b178e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11c00,1);
  return;
}



// FUNCTION 1437b1791 FUN_1437b1791 body=69 status=ok
// SIG undefined FUN_1437b1791(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b1791(void)

{
  _DAT_14cb11c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b17d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11c10,1);
  return;
}



// FUNCTION 1437b17d6 FUN_1437b17d6 body=69 status=ok
// SIG undefined FUN_1437b17d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b17d6(void)

{
  _DAT_14cb11c18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b1818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11c20,1);
  return;
}



// FUNCTION 1437b181b FUN_1437b181b body=55 status=ok
// SIG undefined FUN_1437b181b(void)

void FUN_1437b181b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11c50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11c50 = FUN_14171c317(FUN_1464122ab,uVar1,L"EWorldPartitionStreamingPerformance");
  }
  return;
}



// FUNCTION 1437b1852 FUN_1437b1852 body=69 status=ok
// SIG undefined FUN_1437b1852(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b1852(void)

{
  _DAT_14cb11ca8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b1894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11cb0,1);
  return;
}



// FUNCTION 1437b1897 FUN_1437b1897 body=69 status=ok
// SIG undefined FUN_1437b1897(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b1897(void)

{
  _DAT_14cb11cb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b18d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11cc0,1);
  return;
}



// FUNCTION 1437b18dc FUN_1437b18dc body=232 status=ok
// SIG undefined FUN_1437b18dc(void)

ulonglong FUN_1437b18dc(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  uint local_2c;
  int local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    local_21 = 0;
    local_28 = 0;
    local_2c = *(uint *)(param_2 + 0xc);
    if ((int)local_2c < DAT_14c9647dc) {
      lVar4 = (ulonglong)((local_2c & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_2c >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar1 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar1 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar1 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar1 = iVar5;
      }
    }
    local_28 = iVar1;
    uVar2 = FUN_147dd59a4(param_1 + 0x28,local_30,&local_2c,&local_21);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),local_21) ^ 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1437b19c6 FUN_1437b19c6 body=168 status=ok
// SIG undefined FUN_1437b19c6(void)

undefined8 FUN_1437b19c6(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
    uVar3 = FUN_147dcd64e(param_1 + 0x28,CONCAT44(iVar2,uVar1));
  }
  return uVar3;
}



// FUNCTION 1437b1a6e FUN_1437b1a6e body=191 status=ok
// SIG undefined FUN_1437b1a6e(void)

void FUN_1437b1a6e(longlong *param_1)

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
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xba) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x94) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x9c) = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0x7fffffff;
  *puVar1 = &PTR_FUN_14ab25040;
  puVar1[5] = &PTR_FUN_14ab25390;
  puVar1[6] = &PTR_FUN_14ab25410;
  puVar1[0x18] = 0;
  return;
}



// FUNCTION 1437b1b2e FUN_1437b1b2e body=3866 status=ok
// SIG undefined FUN_1437b1b2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1437b1b2e(longlong param_1,longlong param_2,double *param_3)

{
  wchar_t *pwVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  double *pdVar15;
  longlong lVar16;
  double *pdVar17;
  int iVar18;
  uint uVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auStack_778 [32];
  double *local_758;
  undefined8 uStack_750;
  double local_748;
  double local_740;
  double local_738;
  double dStack_730;
  double local_728;
  double dStack_720;
  double local_718;
  double dStack_710;
  void *local_708;
  uint local_700;
  void *local_6f8;
  uint local_6f0;
  void *local_6e8;
  uint local_6e0;
  longlong local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c0;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  double dStack_6a0;
  undefined2 *local_698;
  wchar_t *local_690;
  double *local_688;
  char local_680;
  undefined2 local_678 [512];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined2 *local_178;
  double local_170;
  double dStack_168;
  void *local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_778;
  uVar11 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x70))(param_1 + 0x28);
  local_698 = *(undefined2 **)(param_1 + 0x18);
  FUN_1400021e4(&local_698,&local_178);
  puVar20 = &DAT_149dfb77a;
  if (local_170._0_4_ != 0) {
    puVar20 = local_178;
  }
  FUN_140002266(&local_698,L"WorldPartitionLevelStreaming_%s",puVar20);
  puVar20 = &DAT_149dfb77a;
  if ((int)local_690 != 0) {
    puVar20 = local_698;
  }
  FUN_1446f470e(&local_6c0,puVar20,1);
  if (local_698 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&local_6c0,&local_698);
  puVar20 = local_698;
  if ((int)local_690 == 0) {
    puVar20 = &DAT_149dfb77a;
  }
  uVar12 = FUN_14048957e();
  lVar13 = FUN_140277b32(uVar12,uVar11,puVar20,0);
  if (local_698 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar13 == 0) {
    uVar12 = FUN_14048957e();
    lVar14 = FUN_147dcdd53(uVar11,uVar12,local_6c0);
    if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar14);
    }
    *(longlong *)(param_1 + 0xc0) = lVar14;
    local_698 = *(undefined2 **)(param_2 + 8);
    if (local_698 == (undefined2 *)0x0) {
      local_6d8 = 0;
      uStack_6d0 = 0;
    }
    else {
      FUN_1400021e4(&local_698,&local_6d8);
    }
    FUN_140d2be42(&local_6e8,&local_6d8);
    FUN_140d2bdd2(&local_6f8,&local_6d8);
    pvVar10 = local_6e8;
    local_698 = local_678;
    local_680 = '\0';
    local_688 = &local_278;
    iVar18 = local_6e0 - 1;
    if (local_6e0 == 0) {
      iVar18 = 0;
    }
    lVar14 = (longlong)iVar18;
    local_690 = local_698;
    if (0x1ff < iVar18) {
      FUN_140213274(&local_698,lVar14);
    }
    pwVar1 = local_690;
    if (1 < local_6e0) {
      memcpy(local_690,pvVar10,lVar14 * 2);
      local_690 = pwVar1 + lVar14;
    }
    local_758 = param_3;
    if (local_688 <= local_690 + 1) {
      FUN_140213274(&local_698,1);
    }
    uVar19 = local_6f0;
    pvVar10 = local_6f8;
    *local_690 = 0x2f;
    pwVar1 = local_690 + 1;
    iVar18 = local_6f0 - 1;
    if (local_6f0 == 0) {
      iVar18 = 0;
    }
    lVar14 = (longlong)iVar18;
    pdVar15 = (double *)(local_690 + lVar14 + 1);
    local_690 = pwVar1;
    if (local_688 <= pdVar15) {
      FUN_140213274(&local_698,lVar14);
    }
    pwVar1 = local_690;
    if (1 < uVar19) {
      memcpy(local_690,pvVar10,lVar14 * 2);
      local_690 = pwVar1 + lVar14;
    }
    if (local_688 <= local_690 + 0xf) {
      FUN_140213274(&local_698,0xf);
    }
    builtin_wcsncpy(local_690,L"_LevelInstance_",0xf);
    local_690 = local_690 + 0xf;
    local_1f8 = *(double *)(param_1 + 0x18);
    FUN_1400021e4(&local_1f8,&local_178);
    puVar20 = local_178;
    iVar18 = local_170._0_4_ - 1;
    if (local_170._0_4_ == 0) {
      iVar18 = 0;
    }
    lVar14 = (longlong)iVar18;
    if (local_688 <= local_690 + lVar14) {
      FUN_140213274(&local_698,lVar14);
    }
    pwVar1 = local_690;
    if (1 < local_170._0_4_) {
      memcpy(local_690,puVar20,lVar14 * 2);
      local_690 = pwVar1 + lVar14;
    }
    if (local_178 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_688 <= local_690 + 1) {
      FUN_140213274(&local_698,1);
    }
    pvVar10 = local_6f8;
    *local_690 = L'.';
    pwVar1 = local_690 + 1;
    iVar18 = local_6f0 - 1;
    if (local_6f0 == 0) {
      iVar18 = 0;
    }
    lVar14 = (longlong)iVar18;
    pdVar15 = (double *)(local_690 + lVar14 + 1);
    local_690 = pwVar1;
    if (local_688 <= pdVar15) {
      FUN_140213274(&local_698,lVar14);
    }
    pwVar1 = local_690;
    if (1 < local_6f0) {
      memcpy(local_690,pvVar10,lVar14 * 2);
      local_690 = pwVar1 + lVar14;
    }
    pdVar15 = local_758;
    plVar2 = *(longlong **)(param_1 + 0xc0);
    *local_690 = L'\0';
    FUN_1411e4208(&local_718,local_698);
    pvVar10 = local_708;
    local_178 = (undefined2 *)0x0;
    local_170 = local_718;
    dStack_168 = dStack_710;
    local_160 = (void *)0x0;
    local_158 = (double)CONCAT44(local_158._4_4_,local_700);
    if ((longlong)(int)local_700 == 0) {
      local_158 = (double)(ulonglong)local_700;
    }
    else {
      FUN_1446dd670(&local_160,local_700,0);
      memcpy(local_160,pvVar10,(longlong)(int)local_700 * 2);
    }
    if (local_708 != (void *)0x0) {
      FUN_1400020a8(local_708);
    }
    (**(code **)(*plVar2 + 0x2c8))(plVar2,&local_178);
    if (local_160 != (void *)0x0) {
      FUN_1400020a8();
    }
    lVar14 = *(longlong *)(param_1 + 0xc0);
    lVar16 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x78))();
    if ((*(longlong *)(lVar16 + 0x30) == 0) ||
       (lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x30) + 0x2b0), lVar16 == 0)) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(longlong *)(lVar16 + 0x3f0);
    }
    pdVar17 = (double *)&DAT_14c846480;
    if (*(char *)(lVar16 + 0xb0) != '\0') {
      pdVar17 = (double *)(lVar16 + 0x50);
    }
    auVar31 = *(undefined1 (*) [16])(pdVar17 + 8);
    dVar27 = auVar31._0_8_;
    dVar47 = auVar31._8_8_;
    auVar32 = *(undefined1 (*) [16])(pdVar17 + 10);
    dVar35 = auVar32._0_8_;
    dVar29 = auVar32._8_8_;
    auVar36 = *(undefined1 (*) [16])(pdVar15 + 8);
    dVar22 = auVar36._0_8_;
    dVar25 = auVar36._8_8_;
    auVar23 = *(undefined1 (*) [16])(pdVar15 + 10);
    dVar26 = auVar23._0_8_;
    auVar31 = minpd(auVar36,auVar31);
    auVar36 = minpd(auVar23,auVar32);
    auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
    iVar18 = movmskpd((int)lVar16,auVar32);
    auVar31._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
    auVar31._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
    uVar19 = movmskpd((int)(double *)(lVar16 + 0x50),auVar31);
    if ((uVar19 & 0x3fffffff) == 0 && iVar18 == 0) {
      dVar42 = *pdVar15;
      dVar43 = pdVar15[1];
      dVar44 = pdVar15[2];
      dVar45 = pdVar15[3];
      dVar6 = *pdVar17;
      dVar7 = pdVar17[1];
      dVar8 = pdVar17[2];
      dVar9 = pdVar17[3];
      dVar40 = pdVar17[3];
      dVar38 = pdVar17[3];
      dVar34 = pdVar17[1];
      dVar39 = pdVar17[1];
      dVar46 = pdVar17[2];
      dVar48 = pdVar17[2];
      dVar30 = dVar43 * dVar46 * -1.0 + dVar44 * dVar34 + dVar45 * *pdVar17 * 1.0 + dVar42 * dVar40;
      dVar33 = dVar42 * dVar48 * 1.0 + dVar45 * dVar39 + dVar44 * *pdVar17 * -1.0 + dVar43 * dVar38;
      auVar41._0_8_ =
           dVar45 * dVar46 * 1.0 + ((*pdVar17 * dVar43 * 1.0 + dVar44 * dVar40) - dVar42 * dVar34);
      auVar41._8_8_ =
           dVar44 * dVar48 * -1.0 + ((*pdVar17 * dVar42 * -1.0 + dVar45 * dVar38) - dVar43 * dVar39)
      ;
      dVar42 = pdVar15[4] * dVar27;
      dVar43 = pdVar15[5] * dVar47;
      dVar44 = pdVar15[6] * dVar35;
      dVar45 = pdVar15[7] * dVar29;
      dVar34 = dVar43 * dVar6 - dVar7 * dVar42;
      dVar39 = dVar44 * dVar7 - dVar8 * dVar43;
      dVar46 = dVar42 * dVar8 - dVar6 * dVar44;
      dVar48 = dVar45 * dVar9 - dVar9 * dVar45;
      dVar39 = dVar39 + dVar39;
      dVar46 = dVar46 + dVar46;
      dVar34 = dVar34 + dVar34;
      dVar48 = dVar48 + dVar48;
      local_118 = (dVar34 * dVar7 - dVar8 * dVar46) + dVar40 * dVar39 + dVar42 + pdVar17[4];
      dStack_110 = (dVar39 * dVar8 - dVar34 * dVar6) + dVar38 * dVar46 + dVar43 + pdVar17[5];
      local_108 = (dVar46 * dVar6 - dVar7 * dVar39) + dVar40 * dVar34 + dVar44 + pdVar17[6];
      dVar40 = (dVar48 * dVar9 - dVar48 * dVar9) + dVar38 * dVar48 + dVar45 + pdVar17[7];
      dVar22 = dVar22 * dVar27;
      dVar25 = dVar25 * dVar47;
      dVar26 = dVar26 * dVar35;
      dVar29 = auVar23._8_8_ * dVar29;
    }
    else {
      dVar33 = *pdVar17;
      dVar40 = pdVar17[1];
      dVar38 = pdVar17[2];
      dVar34 = dVar40 + dVar40;
      dVar39 = dVar38 + dVar38;
      dVar42 = dVar33 * (dVar33 + dVar33);
      local_1a8 = (1.0 - (dVar42 + dVar40 * dVar34)) * dVar35;
      dVar30 = pdVar17[3];
      dVar46 = dVar39 * dVar30;
      dVar48 = (dVar33 + dVar33) * pdVar17[3];
      dVar30 = dVar34 * dVar30;
      local_1b8 = (dVar30 + *pdVar17 * dVar39) * dVar35;
      local_728 = dVar35 * dVar26;
      dStack_720 = dVar29 * auVar23._8_8_;
      local_1f8 = (1.0 - (dVar38 * dVar39 + dVar40 * dVar34)) * dVar27;
      dVar29 = (1.0 - (dVar38 * dVar39 + dVar42)) * dVar47;
      dStack_1f0 = (dVar34 * dVar33 + dVar46) * dVar27;
      local_1c8 = (dVar39 * dVar40 + dVar48) * dVar47;
      dStack_1b0 = (dVar39 * dVar40 - dVar48) * dVar35;
      local_1e8 = (*pdVar17 * dVar39 - dVar30) * dVar27;
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar29,0);
      local_1d8._0_8_ = (dVar34 * dVar33 - dVar46) * dVar47;
      local_1d8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = pdVar17[4];
      dStack_190 = pdVar17[5];
      local_188 = pdVar17[6];
      uStack_180 = 0x3ff0000000000000;
      dVar30 = *pdVar15;
      dVar33 = pdVar15[1];
      dVar40 = pdVar15[2];
      dVar38 = dVar33 + dVar33;
      dVar34 = dVar40 + dVar40;
      dVar29 = dVar30 * (dVar30 + dVar30);
      local_228 = (1.0 - (dVar29 + dVar33 * dVar38)) * dVar26;
      dVar35 = pdVar15[3];
      dVar39 = dVar34 * dVar35;
      dVar46 = (dVar30 + dVar30) * pdVar15[3];
      dVar35 = dVar38 * dVar35;
      local_238 = (dVar35 + *pdVar15 * dVar34) * dVar26;
      dStack_230 = (dVar34 * dVar33 - dVar46) * dVar26;
      local_738 = dVar27 * dVar22;
      dStack_730 = dVar47 * dVar25;
      local_278 = (1.0 - (dVar40 * dVar34 + dVar33 * dVar38)) * dVar22;
      dVar27 = (1.0 - (dVar40 * dVar34 + dVar29)) * dVar25;
      dStack_270 = (dVar38 * dVar30 + dVar39) * dVar22;
      local_248 = (dVar34 * dVar33 + dVar46) * dVar25;
      local_268 = (*pdVar15 * dVar34 - dVar35) * dVar22;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar27,0);
      local_258._0_8_ = (dVar38 * dVar30 - dVar39) * dVar25;
      local_258._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = pdVar15[4];
      dStack_210 = pdVar15[5];
      local_208 = pdVar15[6];
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178);
      dVar29 = dStack_720;
      dVar26 = local_728;
      dVar25 = dStack_730;
      dVar22 = local_738;
      local_740 = dStack_168;
      dVar35 = dStack_168 * dStack_168 +
               (double)local_178 * (double)local_178 + local_170 * local_170;
      local_748 = local_148;
      dVar47 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      dVar27 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar21 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
      dVar35 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar35)) & uVar21);
      uVar21 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
      dVar47 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar47)) & uVar21);
      local_758 = (double *)0x0;
      uStack_750 = 0;
      uVar21 = -(ulonglong)(0.0 <= dVar27 + -9.99999993922529e-09);
      dVar30 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar27)) & uVar21);
      auVar23._8_8_ = -(ulonglong)(0.0 <= dStack_730);
      auVar23._0_8_ = -(ulonglong)(0.0 <= local_738);
      auVar31 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar23);
      dVar27 = (double)(~-(ulonglong)(0.0 <= local_728) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= local_728) & 0x3ff0000000000000);
      dVar33 = auVar31._0_8_;
      local_178 = (undefined2 *)((double)local_178 * dVar35 * dVar33);
      local_170 = local_170 * dVar35 * dVar33;
      dStack_168 = dVar35 * dStack_168 * dVar33;
      dVar35 = auVar31._8_8_;
      local_148 = dVar47 * local_148 * dVar35;
      local_150 = local_150 * dVar47 * dVar35;
      local_158 = dVar35 * local_158 * dVar47;
      local_128 = dVar30 * local_128 * dVar27;
      local_130 = local_130 * dVar30 * dVar27;
      local_138 = dVar27 * local_138 * dVar30;
      FUN_14481fd10(&local_6b8,&local_178);
      dVar27 = local_6a8 * local_6a8 + local_6b8 * local_6b8;
      dVar35 = dStack_6a0 * dStack_6a0 + dStack_6b0 * dStack_6b0;
      auVar28._0_8_ = dVar27 + dVar35;
      auVar28._8_8_ = dVar27 + dVar35;
      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
      auVar31 = sqrtpd(auVar28,auVar28);
      auVar31 = divpd(_DAT_149934d80,auVar31);
      auVar37._0_8_ = auVar31._0_8_ * local_6a8;
      auVar37._8_8_ = auVar31._8_8_ * dStack_6a0;
      dVar30 = (double)((ulonglong)(local_6b8 * auVar31._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
      dVar33 = (double)((ulonglong)(dStack_6b0 * auVar31._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
      uStack_750 = 0x3ff0000000000000;
      auVar36._8_8_ = 0x3ff0000000000000;
      auVar36._0_8_ = local_758;
      auVar41 = blendvpd(auVar36,auVar37,auVar24);
      dVar40 = 0.0;
    }
    if (*(char *)(lVar14 + 0x1c1) == '\0') {
      *(double *)(lVar14 + 0x80) = dVar30;
      *(double *)(lVar14 + 0x88) = dVar33;
      *(undefined1 (*) [16])(lVar14 + 0x90) = auVar41;
      auVar3._8_4_ = SUB84(dStack_110,0);
      auVar3._0_8_ = local_118;
      auVar3._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
      *(undefined1 (*) [16])(lVar14 + 0xa0) = auVar3;
      *(double *)(lVar14 + 0xb0) = local_108;
      *(double *)(lVar14 + 0xb8) = dVar40;
      auVar4._8_4_ = SUB84(dVar25,0);
      auVar4._0_8_ = dVar22;
      auVar4._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      *(undefined1 (*) [16])(lVar14 + 0xc0) = auVar4;
      auVar5._8_4_ = SUB84(dVar29,0);
      auVar5._0_8_ = dVar26;
      auVar5._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      *(undefined1 (*) [16])(lVar14 + 0xd0) = auVar5;
      *(undefined1 *)(lVar14 + 0x1c1) = 1;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0xe0) = *(undefined1 *)(param_1 + 0x58);
    FUN_147dc937e(*(undefined8 *)(param_1 + 0xc0),param_1);
    iVar18 = (int)uStack_6d0 + -1;
    if ((int)uStack_6d0 == 0) {
      iVar18 = 0;
    }
    FUN_1446f82e2(&local_178,iVar18,local_6d8,1);
    *(undefined2 **)(*(longlong *)(param_1 + 0xc0) + 0x54) = local_178;
    if (local_680 == '\x01') {
      FUN_1400020a8(local_698);
    }
    if (local_6f8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_6e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_6d8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_778) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar13 == 0;
}



// FUNCTION 1437b2a4a FUN_1437b2a4a body=22 status=ok
// SIG undefined FUN_1437b2a4a(void)

undefined8 FUN_1437b2a4a(undefined8 param_1,undefined8 param_2)

{
  FUN_147dcde30();
  return param_2;
}



// FUNCTION 1437b2a64 FUN_1437b2a64 body=63 status=ok
// SIG undefined FUN_1437b2a64(void)

void FUN_1437b2a64(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c0))(plVar1,0);
    FUN_14039914a(plVar1,0);
    FUN_140d7233c(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1437b2aa3 FUN_1437b2aa3 body=55 status=ok
// SIG undefined FUN_1437b2aa3(void)

void FUN_1437b2aa3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11cf8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11cf8 = FUN_14171c317(FUN_1464124d8,uVar1,L"EWorldPartitionCVarProjectDefaultOverride");
  }
  return;
}



// FUNCTION 1437b2ada FUN_1437b2ada body=69 status=ok
// SIG undefined FUN_1437b2ada(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b2ada(void)

{
  _DAT_14cb11dc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b2b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11dd0,1);
  return;
}



// FUNCTION 1437b2b1f FUN_1437b2b1f body=69 status=ok
// SIG undefined FUN_1437b2b1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b2b1f(void)

{
  _DAT_14cb11de0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b2b61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11de8,1);
  return;
}



// FUNCTION 1437b2b64 FUN_1437b2b64 body=69 status=ok
// SIG undefined FUN_1437b2b64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b2b64(void)

{
  _DAT_14cb11df0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b2ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11df8,1);
  return;
}



// FUNCTION 1437b2bba FUN_1437b2bba body=47 status=ok
// SIG undefined FUN_1437b2bba(void)

void FUN_1437b2bba(void)

{
  DAT_14cb11e60 = 0;
  if (DAT_14cb11e58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407b1382(&DAT_14cb11e18);
  return;
}



// FUNCTION 1437b2be9 FUN_1437b2be9 body=69 status=ok
// SIG undefined FUN_1437b2be9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b2be9(void)

{
  _DAT_14cb11e68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b2c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11e70,1);
  return;
}



// FUNCTION 1437b2c2e FUN_1437b2c2e body=274 status=ok
// SIG undefined FUN_1437b2c2e(void)

void FUN_1437b2c2e(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined1 local_54 [4];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    plVar8 = (longlong *)*param_2;
    local_60 = plVar8 + (longlong)(int)param_2[1] * 2;
    do {
      lVar4 = plVar8[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = *plVar8;
        lVar7 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          local_50 = lVar3;
          if (*(int *)(lVar3 + 0x50) == 0) {
            *(undefined1 *)(lVar3 + 0x9c) = 2;
LAB_1437b2cee:
            uVar6 = *param_1;
LAB_1437b2cf1:
            FUN_1456bc98a(uVar6,local_54,&local_50,0);
          }
          else {
            iVar1 = *(int *)(*(longlong *)(param_1[2] + 8) + 0x140);
            if (*(int *)(lVar3 + 0xa0) == iVar1) {
              cVar5 = *(char *)(lVar3 + 0x9c);
            }
            else {
              cVar5 = FUN_147dcc38e(param_1[2],lVar3 + 0x40);
              *(char *)(lVar3 + 0x9c) = cVar5;
              *(int *)(lVar3 + 0xa0) = iVar1;
            }
            if (cVar5 == '\x02') goto LAB_1437b2cee;
            if (cVar5 == '\x01') {
              uVar6 = param_1[1];
              goto LAB_1437b2cf1;
            }
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar7);
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437b2d42 FUN_1437b2d42 body=1783 status=ok
// SIG undefined FUN_1437b2d42(void)

void FUN_1437b2d42(uint *param_1,longlong param_2,longlong *param_3,uint *param_4)

{
  undefined8 uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_2e8 [32];
  code ***local_2c8;
  uint local_2c0;
  uint local_2bc;
  ulonglong local_2b8;
  uint *local_2b0;
  uint *local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  code *local_288;
  code ***local_280;
  code **local_278;
  double **local_270;
  uint *local_268;
  code **local_260;
  uint *local_258;
  code **local_250;
  uint *local_248;
  code **local_240;
  undefined8 *local_238;
  uint local_22c;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  char local_1f8;
  double *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d0;
  uint local_1c4;
  code *local_1c0;
  code *local_1b8;
  code ***local_1b0;
  double *local_1a8;
  code **local_1a0;
  code *local_198;
  code ***pppcStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  longlong local_158;
  undefined4 local_150;
  code *local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
    lVar10 = *(longlong *)(param_2 + 0x20);
  }
  else {
    lVar10 = 0;
  }
  local_1c0 = *(code **)(lVar10 + 0x40);
  if (local_1c0 == (code *)0x0) {
    local_1c0 = (code *)FUN_14475ec7e();
  }
  local_1c4 = (uint)(DAT_14cb11aac == 0);
  local_1d0 = *(undefined8 *)(local_1c0 + 0x750);
  local_128 = 0;
  local_120 = 0;
  local_148 = (code *)0x0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  if (*(longlong *)(lVar10 + 0xd0) != 0) {
    local_278 = &local_148;
    pppcStack_190 = &local_278;
    local_198 = FUN_1437be8a6;
    FUN_140bc66fe();
  }
  lVar10 = *(longlong *)(param_1 + 0x26);
  if (lVar10 == 0) {
    lVar10 = FUN_14001cc68(0x68,0x10);
    local_2c8 = (code ***)CONCAT71(local_2c8._1_7_,(char)param_1[0x24]);
    FUN_1412be19e(lVar10,param_1 + 0x14,param_1 + 2,(longlong)(int)param_1[8]);
    *(longlong *)(param_1 + 0x26) = lVar10;
  }
  uVar12 = param_1[0x12] - 1;
  local_2c0 = DAT_14cb11dd8;
  if ((int)uVar12 <= (int)DAT_14cb11dd8) {
    local_2c0 = uVar12;
  }
  local_2b8 = 0;
  if (0 < (int)local_2c0) {
    local_2b8 = (ulonglong)local_2c0;
  }
  uVar8 = (DAT_14c761ef4 + (int)local_2b8) - 1;
  if ((int)uVar8 < (int)uVar12) {
    uVar12 = uVar8;
  }
  if ((int)uVar12 < 1) {
    uVar12 = 0;
  }
  uVar13 = FUN_14004708a(param_1);
  local_1e8 = (double *)0x0;
  uStack_1e0 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198 = (code *)0x0;
  pppcStack_190 = (code ***)0x0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  if ((longlong)(int)param_3[1] != 0) {
    dVar4 = (double)((float)(int)param_1[8] * 5.0);
    lVar11 = *param_3;
    local_298 = (longlong)(int)param_3[1] * 0x160 + lVar11;
    local_2bc = uVar12;
    local_2b0 = param_1;
    local_2a8 = param_4;
    local_2a0 = lVar10;
    do {
      local_228 = 0.0;
      dStack_220 = 0.0;
      local_218 = 0.0;
      dStack_210 = 0.0;
      local_208 = 0.0;
      dStack_200 = 0.0;
      local_1f8 = '\0';
      local_2c8 = &local_278;
      local_278 = (code **)&LAB_147dd371a;
      local_290 = lVar11;
      local_270 = &local_1a8;
      local_1a8 = &local_228;
      FUN_144b2c65a(lVar11,uVar13,*(undefined8 *)param_1,0);
      lVar10 = local_2a0;
      uVar18 = SUB84(local_208,0);
      uVar19 = (undefined4)((ulonglong)local_208 >> 0x20);
      uVar20 = SUB84(dStack_210,0);
      uVar21 = (undefined4)((ulonglong)dStack_210 >> 0x20);
      dVar3 = (local_218 + dStack_200) * 0.5;
      dVar14 = (dStack_220 + local_208) * 0.5;
      dVar17 = (local_228 + dStack_210) * 0.5;
      dVar16 = dVar3 + dVar4;
      dVar5 = dVar14 + dVar4;
      dVar6 = dVar17 + dVar4;
      dVar3 = dVar3 - dVar4;
      dVar14 = dVar14 - dVar4;
      dVar17 = dVar17 - dVar4;
      if (local_1f8 == '\0') {
        local_1f8 = '\x01';
        dStack_200 = dVar16;
        local_218 = dVar3;
      }
      else {
        if (dVar17 <= local_228) {
          local_228 = dVar17;
        }
        dVar17 = local_228;
        if (dVar14 <= dStack_220) {
          dStack_220 = dVar14;
        }
        dVar14 = dStack_220;
        if (dVar3 <= local_218) {
          local_218 = dVar3;
        }
        if (dStack_210 <= dVar6) {
          uVar20 = SUB84(dVar6,0);
          uVar21 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        dVar6 = (double)CONCAT44(uVar21,uVar20);
        if (local_208 <= dVar5) {
          uVar18 = SUB84(dVar5,0);
          uVar19 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = (double)CONCAT44(uVar19,uVar18);
        if (dStack_200 <= dVar16) {
          dStack_200 = dVar16;
        }
      }
      local_22c = (uint)local_2b8;
      uVar9 = local_2b8;
      local_228 = dVar17;
      dStack_220 = dVar14;
      dStack_210 = dVar6;
      local_208 = dVar5;
      if ((int)local_2c0 <= (int)uVar12) {
        do {
          local_1a0 = &local_1b8;
          local_268 = local_2b0;
          local_250 = &local_1c0;
          local_248 = local_2a8;
          local_240 = &local_148;
          local_238 = &local_1d0;
          local_1b8 = FUN_1437c0642;
          local_1a8 = (double *)FUN_147dc2bc0;
          local_278 = (code **)&local_22c;
          local_270 = &local_1e8;
          local_260 = &local_198;
          local_258 = &local_1c4;
          local_1b0 = &local_278;
          FUN_1437ab1a2((longlong)(int)uVar9 * 0x88 + *(longlong *)(lVar10 + 0x58),&local_228,
                        &local_1a8);
          uVar8 = local_22c + 1;
          bVar2 = (int)local_22c < (int)local_2bc;
          uVar9 = (ulonglong)uVar8;
          uVar12 = local_2bc;
          local_22c = uVar8;
        } while (bVar2);
      }
      lVar11 = local_290;
      puVar7 = local_2a8;
      param_1 = local_2b0;
      local_1a8 = *(double **)(local_290 + 0x18);
      FUN_147dc1cd8(local_290);
      local_268 = puVar7;
      local_260 = &local_1c0;
      local_258 = param_1;
      local_288 = FUN_1437c0830;
      uVar1 = *(undefined8 *)param_1;
      local_280 = &local_278;
      local_278 = &local_1b8;
      local_270 = &local_1a8;
      uVar15 = FUN_14004708a(param_1);
      local_2c8 = (code ***)&local_288;
      FUN_144b2c65a(lVar11,uVar15,uVar1,1);
      lVar11 = lVar11 + 0x160;
    } while (lVar11 != local_298);
    local_150 = 0;
    if (local_158 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14005bbf2(&local_198);
  if (local_1e8 != (double *)0x0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ef8(&local_148);
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437b343a FUN_1437b343a body=395 status=ok
// SIG undefined FUN_1437b343a(void)

void FUN_1437b343a(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_108 [32];
  double *local_e8;
  double *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [23];
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88[0] = 1;
  local_c8 = param_1;
  local_c0 = param_2;
  (*(code *)*param_6)(local_78,param_6[1]);
  local_90 = param_3[1] + 0.0;
  local_98 = *param_4 + *param_3;
  local_a8 = (double)CONCAT71(local_a8._1_7_,1);
  (*(code *)*param_6)(local_88,param_6[1],&local_98,&local_a8);
  local_a0 = param_3[1] + param_4[1];
  local_a8 = *param_3 + *param_4;
  local_b8 = (double)CONCAT71(local_b8._1_7_,1);
  (*(code *)*param_6)(&local_98,param_6[1],&local_a8,&local_b8);
  local_b0 = param_4[1] + param_3[1];
  local_b8 = *param_3 + 0.0;
  local_61 = 1;
  (*(code *)*param_6)(&local_a8,param_6[1],&local_b8);
  local_d8 = param_5;
  local_d0 = 0x3f800000;
  local_e8 = &local_98;
  local_e0 = &local_a8;
  FUN_147dc1c1c(local_c8,local_c0,local_78,local_88);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437b35c6 FUN_1437b35c6 body=127 status=ok
// SIG undefined FUN_1437b35c6(void)

void FUN_1437b35c6(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1437b365a FUN_1437b365a body=204 status=ok
// SIG undefined FUN_1437b365a(void)

undefined8 FUN_1437b365a(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  cVar1 = FUN_1437b18dc();
  if (cVar1 == '\0') {
LAB_1437b371a:
    uVar3 = 0;
  }
  else {
    if ((longlong)*(int *)(param_2 + 0x1c8) != 0) {
      puVar4 = *(undefined8 **)(param_2 + 0x1c0);
      puVar5 = puVar4 + (longlong)*(int *)(param_2 + 0x1c8) * 0x18;
      do {
        lVar2 = FUN_147dd01cc(param_1,*puVar4);
        if (lVar2 == 0) goto LAB_1437b371a;
        if (*(char *)(lVar2 + 0x90) != *(char *)(puVar4 + 0x12)) {
          return 0;
        }
        if (*(char *)(lVar2 + 0x91) != *(char *)((longlong)puVar4 + 0x91)) {
          return 0;
        }
        puVar4 = puVar4 + 0x18;
      } while (puVar4 != puVar5);
      if ((longlong)*(int *)(param_2 + 0x1c8) != 0) {
        puVar4 = *(undefined8 **)(param_2 + 0x1c0);
        lVar2 = (longlong)*(int *)(param_2 + 0x1c8) * 0xc0;
        do {
          uVar3 = FUN_147dd01cc(param_1,*puVar4);
          FUN_147dce184(uVar3,puVar4);
          puVar4 = puVar4 + 0x18;
          lVar2 = lVar2 + -0xc0;
        } while (lVar2 != 0);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1437b3726 FUN_1437b3726 body=3209 status=ok
// SIG undefined FUN_1437b3726(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1437b3726(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  longlong *plVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined2 *puVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  undefined *puVar28;
  undefined1 auVar29 [16];
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338;
  undefined8 local_330;
  wchar_t *local_328;
  code *local_320;
  undefined1 *local_318;
  undefined8 *local_310;
  code *local_308;
  code *local_300;
  undefined8 *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  longlong *local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  undefined8 *local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong **pplStack_280;
  longlong local_278;
  longlong local_268 [2];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  longlong *local_230;
  longlong local_228 [10];
  longlong local_1d8;
  longlong local_1d0;
  int local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  double local_1a0;
  undefined8 local_188;
  longlong *plStack_180;
  longlong *local_130;
  longlong local_110;
  undefined1 local_f8 [88];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if ((((*(longlong *)(param_3 + 8) != 0) && (*(longlong *)(param_3 + 0x28) != 0)) &&
      (((*(int *)(param_3 + 100) != 0 || *(int *)(param_3 + 0x60) != 0) ||
       *(int *)(param_3 + 0x68) != 0) || *(int *)(param_3 + 0x6c) != 0)) &&
     (*(char *)(param_3 + 0x100) != '\0')) {
    ppuVar1 = (undefined **)(param_3 + 0x60);
    lVar14 = param_1 + 0xe8;
    uVar12 = FUN_1447addd0(ppuVar1,0x10);
    iVar13 = FUN_147dd7498(lVar14,uVar12,ppuVar1);
    if ((iVar13 == -1) &&
       (local_2b8 = (undefined8 *)FUN_147dd01cc(param_1,*(undefined8 *)(param_3 + 0x28)),
       local_2b8 != (undefined8 *)0x0)) {
      local_298 = lVar14;
      if ((*(longlong *)(param_3 + 0x38) == 0) || (*(longlong *)(param_3 + 0x58) == 0)) {
        local_2f8 = (undefined8 *)0x0;
      }
      else {
        local_2f8 = (undefined8 *)FUN_147dd01cc(param_1);
      }
      if (DAT_14cb10130 == 0) {
        local_310 = &local_188;
        local_188 = (undefined **)FUN_140754f84;
        local_300 = FUN_14081d0ea;
        local_308 = FUN_14081d0ea;
        local_318 = &LAB_147da9a76;
        local_320 = FUN_1409f3105;
        local_328 = L"Engine";
        local_330 = 0;
        local_338 = 0x10000000;
        local_340 = CONCAT44(local_340._4_4_,8);
        local_348 = CONCAT44(local_348._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      lVar14 = DAT_14cb10130;
      if (DAT_14c951858 == 0) {
        local_310 = &local_188;
        local_188 = (undefined **)FUN_1449e2820;
        local_300 = FUN_14081d0ea;
        local_308 = FUN_14081d0ea;
        local_318 = &LAB_1468c5283;
        local_320 = FUN_142809da0;
        local_328 = L"Engine";
        local_330 = 0x400000000;
        local_338 = 0x10000000;
        local_340 = CONCAT44(local_340._4_4_,8);
        local_348 = CONCAT44(local_348._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar23 = *(longlong *)(param_1 + 0x20);
      if (lVar23 == 0) {
        lVar21 = 0;
      }
      else {
        iVar13 = *(int *)(lVar14 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < iVar13) ||
             (lVar21 = lVar23,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
             lVar14 + 0x30)) {
            lVar21 = 0;
          }
        } while ((lVar21 == 0) && (lVar23 = *(longlong *)(lVar23 + 0x20), lVar23 != 0));
      }
      local_1c0 = FUN_1459ea5b2();
      if ((local_1c0 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_1c0);
      }
      lVar14 = FUN_147dcd31e(&local_1c0,param_1,lVar21);
      if (lVar14 == 0) {
        puVar28 = (undefined *)0x0;
        uVar16 = 0;
      }
      else {
        local_2a0 = param_3 + 0x30;
        local_290 = lVar14 + 0x1c0;
        local_2c8 = (undefined8 *)(param_3 + 0xd0);
        local_2b0 = param_3 + 0x110;
        local_2a8 = param_3 + 0x70;
        bVar25 = false;
        bVar8 = false;
        local_2e4 = 0;
        local_2e8 = 0;
        local_2ec = 0;
        local_2f0 = 0;
        puVar15 = local_2b8;
        puVar20 = local_2f8;
        local_2d0 = lVar14;
        do {
          puVar22 = puVar15;
          if (bVar8) {
            puVar22 = puVar20;
          }
          if (puVar22 != (undefined8 *)0x0) {
            local_348 = CONCAT71(local_348._1_7_,*(undefined1 *)(puVar22 + 0x12));
            FUN_1412be19e(local_228,puVar22 + 10,puVar22 + 1,(longlong)*(int *)(puVar22 + 4));
            puVar15 = (undefined8 *)FUN_147dd0548(local_290);
            *(undefined2 *)(puVar15 + 0x12) = *(undefined2 *)(puVar22 + 0x12);
            *puVar15 = *puVar22;
            puVar15[3] = puVar22[3];
            uVar16 = puVar22[2];
            puVar15[1] = puVar22[1];
            puVar15[2] = uVar16;
            *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(puVar22 + 4);
            uVar16 = puVar22[0xb];
            puVar15[10] = puVar22[10];
            puVar15[0xb] = uVar16;
            uVar16 = puVar22[0xd];
            uVar12 = *(undefined4 *)(puVar22 + 0xe);
            uVar2 = *(undefined4 *)((longlong)puVar22 + 0x74);
            uVar3 = *(undefined4 *)(puVar22 + 0xf);
            uVar4 = *(undefined4 *)((longlong)puVar22 + 0x7c);
            puVar15[0xc] = puVar22[0xc];
            puVar15[0xd] = uVar16;
            *(undefined4 *)(puVar15 + 0xe) = uVar12;
            *(undefined4 *)((longlong)puVar15 + 0x74) = uVar2;
            *(undefined4 *)(puVar15 + 0xf) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0x7c) = uVar4;
            puVar15[0x10] = puVar22[0x10];
            *(undefined4 *)((longlong)puVar15 + 0x24) = *(undefined4 *)((longlong)puVar22 + 0x24);
            *(undefined1 *)(puVar15 + 5) = *(undefined1 *)(puVar22 + 5);
            FUN_140def630(&local_188);
            uVar12 = (&DAT_14c758c60)[(ulonglong)local_188 >> 8 & 0xff];
            uVar2 = (&DAT_14c758c60)[(ulonglong)local_188 & 0xff];
            *(undefined4 *)((longlong)puVar15 + 0x2c) =
                 (&DAT_14c758c60)[(ulonglong)local_188 >> 0x10 & 0xff];
            *(undefined4 *)(puVar15 + 6) = uVar12;
            *(undefined4 *)((longlong)puVar15 + 0x34) = uVar2;
            *(float *)(puVar15 + 7) = (float)local_188._3_1_ * 0.003921569;
            *(undefined1 *)(puVar15 + 0x11) = *(undefined1 *)(puVar22 + 0x11);
            local_2c0 = puVar15;
            FUN_147dd0588(puVar15 + 8,local_1c8);
            lVar14 = local_1d0;
            if ((bVar8 == false) || (iVar13 = 3, *(longlong *)(param_3 + 0x38) != 0)) {
              local_230 = (longlong *)0x0;
              if (*(char *)(param_3 + 0x120) == '\x01') {
                dVar27 = *(double *)(param_3 + 0xf0) - *(double *)(param_3 + 0xd8);
                dVar26 = *(double *)(param_3 + 0xe8) - *(double *)(param_3 + 0xd0);
                if (dVar26 <= dVar27) {
                  dVar26 = dVar27;
                }
                dVar27 = log(dVar26 / (double)local_1d8);
                auVar29._0_8_ = dVar27 * 1.4426950408889634;
                auVar29._8_8_ = 0;
                auVar29 = roundpd(auVar29,auVar29,2);
                dVar27 = auVar29._0_8_;
                if (dVar27 <= 0.0) {
                  dVar27 = 0.0;
                }
                iVar13 = (int)dVar27;
                if (iVar13 < local_1c8) {
                  lVar14 = (longlong)iVar13 * 0x88 + local_1d0;
                  lVar23 = (longlong)local_1c8 - (longlong)iVar13;
                  do {
                    iVar13 = FUN_147dd0604(lVar14,local_2c8);
                    if (iVar13 == 1) {
                      pplStack_280 = &local_230;
                      local_1b8._0_1_ = 0xbe;
                      local_1b8._1_7_ = 0x1437c10;
                      uStack_1b0 = &local_288;
                      plStack_180 = &local_1b8;
                      local_188 = (undefined **)FUN_147dc2bc0;
                      local_288 = lVar14;
                      FUN_1437ab1a2(lVar14,local_2c8,&local_188);
                      break;
                    }
                    lVar14 = lVar14 + 0x88;
                    lVar23 = lVar23 + -1;
                  } while (lVar23 != 0);
                }
              }
              else {
                uStack_1b0 = (longlong *)
                             ((*(double *)(param_3 + 0xf0) + *(double *)(param_3 + 0xd8)) * 0.5);
                dVar27 = (*(double *)(param_3 + 0xe8) + *(double *)(param_3 + 0xd0)) * 0.5;
                local_1b8._0_1_ = SUB81(dVar27,0);
                local_1b8._1_7_ = (undefined7)((ulonglong)dVar27 >> 8);
                cVar11 = FUN_147dce542(local_1d0,&local_1b8,&local_188);
                if (cVar11 != '\0') {
                  local_230 = (longlong *)FUN_1412be5da(lVar14,&local_188);
                }
              }
              if (local_230 == (longlong *)0x0) {
                local_188 = (undefined **)0x0;
                plStack_180 = (longlong *)0x0;
                local_230 = (longlong *)
                            FUN_1412be5da((longlong)(local_1c8 + -1) * 0x88 + local_1d0,&local_188);
              }
              puVar15 = (undefined8 *)(param_3 + 0x28);
              if (bVar8 != false) {
                puVar15 = (undefined8 *)(param_3 + 0x58);
              }
              local_238 = *puVar15;
              local_248 = *ppuVar1;
              uStack_240 = *(undefined8 *)(param_3 + 0x68);
              FUN_147454cd2(&local_188);
              uVar16 = FUN_147454d28(&local_188,&local_238);
              FUN_1402ac1b3(uVar16,&local_248);
              FUN_1414fe9a8(local_f8,(undefined1 *)((longlong)&local_1b8 + 1));
              uVar16 = CONCAT17((undefined1)uStack_1b0,local_1b8._1_7_);
              uVar17 = CONCAT17(uStack_1a8,(int7)((ulonglong)uStack_1b0 >> 8));
              lVar14 = local_2a0;
              if (bVar8 == false) {
                local_258._0_4_ = (undefined4)local_1b8._1_7_;
                local_2f0 = (undefined4)local_258;
                local_258._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
                local_2ec = local_258._4_4_;
                uStack_250._0_4_ = (undefined4)((ulonglong)uStack_1b0 >> 8);
                local_2e8 = (undefined4)uStack_250;
                uStack_250._4_4_ = (undefined4)((ulonglong)uVar17 >> 0x20);
                local_2e4 = uStack_250._4_4_;
                lVar14 = param_3;
              }
              local_1b8._0_1_ = 0;
              local_1b8._1_7_ = 0;
              uStack_1b0._0_4_ = 0;
              uStack_1b0._4_4_ = 0;
              local_258 = uVar16;
              uStack_250 = uVar17;
              FUN_1407c869a(&local_258,&local_1b8,0);
              puVar24 = &DAT_149dfb77a;
              if ((int)uStack_1b0 != 0) {
                puVar24 = (undefined2 *)CONCAT71(local_1b8._1_7_,(undefined1)local_1b8);
              }
              FUN_140002266(local_268,L"InjectedCell_%s",puVar24);
              if (CONCAT71(local_1b8._1_7_,(undefined1)local_1b8) != 0) {
                FUN_1400020a8();
              }
              uVar16 = FUN_145bb5e5e();
              uVar17 = FUN_140c71830();
              local_340 = local_2d0;
              local_348 = local_2b0;
              plVar18 = (longlong *)FUN_147dccefc(param_1,uVar17,uVar16,local_268);
              if (plVar18 == (longlong *)0x0) {
LAB_1437b3ede:
                *param_2 = 0;
                param_2[1] = 0;
                iVar13 = 1;
              }
              else {
                lVar23 = FUN_140c71830();
                if ((*(int *)(plVar18[2] + 0x38) < *(int *)(lVar23 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(lVar23 + 0x38) * 8) !=
                    lVar23 + 0x30)) goto LAB_1437b3ede;
                lVar23 = plVar18[0x15];
                local_288 = *local_230;
                pplStack_280 = (longlong **)local_230[1];
                local_2d8 = (longlong)(int)local_230[2];
                local_2e0 = plVar18;
                FUN_1456beae2(local_2d8 * 0x88 + local_1d0,&local_288,&local_1b8,1);
                *(int *)(lVar23 + 0xd4) = (int)local_2d8;
                *(double *)(lVar23 + 0xe0) =
                     ((double)CONCAT71(uStack_1a7,uStack_1a8) +
                     (double)CONCAT71(local_1b8._1_7_,(undefined1)local_1b8)) * 0.5;
                *(double *)(lVar23 + 0xe8) =
                     ((double)CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0) + local_1a0) * 0.5;
                *(undefined8 *)(lVar23 + 0xf0) = 0;
                *(float *)(lVar23 + 0xf8) =
                     (float)(((double)CONCAT71(uStack_1a7,uStack_1a8) -
                             (double)CONCAT71(local_1b8._1_7_,(undefined1)local_1b8)) * 0.5);
                *(undefined8 *)(lVar23 + 200) = *local_2c0;
                local_2d8 = lVar23;
                FUN_140474144(&local_288,local_268,local_2b0);
                if (local_288 != 0) {
                  FUN_1400020a8();
                }
                plVar10 = local_230;
                *(undefined8 *)(local_2d8 + 0x80) = local_2c8[6];
                uVar16 = *local_2c8;
                uVar17 = local_2c8[1];
                uVar12 = *(undefined4 *)(local_2c8 + 2);
                uVar2 = *(undefined4 *)((longlong)local_2c8 + 0x14);
                uVar3 = *(undefined4 *)(local_2c8 + 3);
                uVar4 = *(undefined4 *)((longlong)local_2c8 + 0x1c);
                uVar5 = *(undefined4 *)((longlong)local_2c8 + 0x24);
                uVar6 = *(undefined4 *)(local_2c8 + 5);
                uVar7 = *(undefined4 *)((longlong)local_2c8 + 0x2c);
                *(undefined4 *)(local_2d8 + 0x70) = *(undefined4 *)(local_2c8 + 4);
                *(undefined4 *)(local_2d8 + 0x74) = uVar5;
                *(undefined4 *)(local_2d8 + 0x78) = uVar6;
                *(undefined4 *)(local_2d8 + 0x7c) = uVar7;
                *(undefined4 *)(local_2d8 + 0x60) = uVar12;
                *(undefined4 *)(local_2d8 + 100) = uVar2;
                *(undefined4 *)(local_2d8 + 0x68) = uVar3;
                *(undefined4 *)(local_2d8 + 0x6c) = uVar4;
                *(undefined8 *)(local_2d8 + 0x50) = uVar16;
                *(undefined8 *)(local_2d8 + 0x58) = uVar17;
                *(undefined4 *)(local_2d8 + 0xd0) = *(undefined4 *)(param_3 + 0x108);
                local_288 = 0;
                pplStack_280 = (longlong **)0x0;
                plVar19 = (longlong *)
                          FUN_1412be5da((longlong)(local_1c8 + -1) * 0x88 + local_1d0,&local_288);
                plVar18 = local_2e0;
                (**(code **)(*local_2e0 + 0x2e8))(local_2e0,plVar10 == plVar19);
                *(undefined1 *)(plVar18 + 0xb) = *(undefined1 *)(local_2c0 + 0x11);
                *(undefined1 *)((longlong)plVar18 + 0x5a) = *(undefined1 *)(local_2c0 + 5);
                *(bool *)((longlong)plVar18 + 0x59) = bVar8;
                *(undefined8 *)((longlong)plVar18 + 0x7c) = local_258;
                *(undefined8 *)((longlong)plVar18 + 0x84) = uStack_250;
                if (bVar8 != false) {
                  *(undefined4 *)((longlong)local_2e0 + 0x8c) = local_2f0;
                  *(undefined4 *)(local_2e0 + 0x12) = local_2ec;
                  *(undefined4 *)((longlong)local_2e0 + 0x94) = local_2e8;
                  *(undefined4 *)(local_2e0 + 0x13) = local_2e4;
                }
                cVar11 = FUN_1437b1b2e(local_2e0,lVar14,local_2a8);
                if (cVar11 == '\0') goto LAB_1437b3ede;
                local_288 = *local_230;
                pplStack_280 = (longlong **)local_230[1];
                local_278 = local_230[2];
                FUN_147dcdf94(local_2c0,local_2e0,&local_288);
                iVar13 = 0;
              }
              if (local_268[0] != 0) {
                FUN_1400020a8();
              }
              plVar18 = local_130;
              local_188 = &PTR__purecall_149e35f70;
              if (local_130 != (longlong *)0x0) {
                if (*local_130 != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(plVar18);
              }
              lVar14 = local_110;
              if (local_110 != 0) {
                if (*(longlong *)(local_110 + 0x40) != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(lVar14);
              }
            }
            FUN_140ebe994(local_1d0,local_1c8);
            if (local_1d0 != 0) {
              FUN_1400020a8();
            }
            puVar15 = local_2b8;
            puVar20 = local_2f8;
            if ((iVar13 != 3) && (iVar13 != 0)) goto LAB_1437b4258;
          }
          lVar14 = local_2d0;
          bVar8 = true;
          bVar9 = !bVar25;
          bVar25 = true;
        } while (bVar9);
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          uVar16 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar16 = 0;
        }
        FUN_147dc0220(uVar16,local_2d0);
        local_228[0] = lVar14;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(local_2d0);
        }
        plStack_180 = local_228;
        local_188 = ppuVar1;
        FUN_147dd7638(local_298,&local_1b8);
        puVar28 = *ppuVar1;
        uVar16 = *(undefined8 *)(param_3 + 0x68);
      }
      *param_2 = puVar28;
      param_2[1] = uVar16;
LAB_1437b4258:
      if ((local_a0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_368);
}



// FUNCTION 1437b43b0 FUN_1437b43b0 body=6883 status=ok
// SIG undefined FUN_1437b43b0(void)

/* WARNING: Removing unreachable block (ram,0x0001437b59c0) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1437b43b0(longlong param_1,char *param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  char *pcVar3;
  double dVar4;
  double dVar5;
  double ***pppdVar6;
  double ***pppdVar7;
  code ****_Src;
  longlong *plVar8;
  char cVar9;
  longlong *plVar10;
  undefined8 uVar11;
  code *****pppppcVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  char *pcVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  ulonglong uVar23;
  code **ppcVar24;
  int iVar25;
  longlong *plVar26;
  longlong *plVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  longlong *plVar32;
  longlong *plVar33;
  code *pcVar34;
  longlong *plVar35;
  double **ppdVar36;
  bool bVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  double dVar44;
  double ***pppdVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  float fVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auStack_6e8 [32];
  double ****local_6c8;
  double ****local_6c0;
  char *local_6b8;
  undefined4 local_6b0;
  double local_6a8;
  double ***local_6a0;
  int local_694;
  longlong *local_690;
  double ***local_688;
  code *local_680;
  char *local_678;
  longlong *local_670;
  longlong local_668;
  double local_660;
  double local_658;
  char *local_650;
  char *local_648;
  undefined8 local_640;
  undefined8 local_638;
  double local_630;
  code *local_628;
  double local_620;
  double local_618;
  longlong local_610;
  ulonglong local_608;
  double ***local_600;
  float **local_5f8;
  float *local_5f0;
  double *local_5e8;
  double *local_5e0;
  double *local_5d8;
  double ***local_5d0;
  double local_5c8;
  double ***local_5c0;
  double local_5b8;
  byte local_5b0;
  undefined4 local_5af;
  undefined3 uStack_5ab;
  double local_5a8;
  double local_5a0;
  double local_598;
  double local_590;
  double local_588;
  double local_580;
  double ***local_578;
  code **local_570;
  code *local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  char local_538;
  double *local_528;
  uint uStack_520;
  uint uStack_51c;
  code *local_518;
  uint local_510;
  code *local_508;
  undefined8 local_500;
  code ***local_4f8;
  undefined8 uStack_4f0;
  double ****local_4e8;
  undefined8 local_4e0;
  uint local_4d4;
  longlong local_4d0;
  longlong local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined1 local_498;
  code *local_490;
  code **local_488;
  code ****local_480;
  code **local_478;
  undefined1 local_469;
  undefined4 local_468;
  undefined3 uStack_464;
  float local_460;
  float local_45c;
  float local_458;
  float local_454;
  float local_450;
  float local_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  code ****local_438;
  undefined8 uStack_430;
  char *local_428;
  code ****local_420;
  uint *local_418;
  code *****local_410;
  double ***local_408;
  undefined8 *local_400;
  longlong *local_3f8;
  code ***local_148;
  double dStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6e8;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar16 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar16 = 0;
  }
  local_678 = param_2;
  plVar10 = (longlong *)FUN_147dc04d2(lVar16);
  FUN_147dd0828(param_1);
  uVar31 = local_510;
  pcVar34 = local_518;
  uVar20 = (ulonglong)local_510;
  if ((uVar20 == 0) || ((int)plVar10[1] == 0)) {
    uVar20 = 0;
    goto LAB_1437b5dfa;
  }
  local_690 = plVar10;
  local_668 = lVar16;
  if (1 < (int)local_510) {
    memset(&local_438,0,0x2f0);
    local_448 = pcVar34;
    uStack_440 = (code *****)(pcVar34 + (uVar20 - 1) * 8);
    fVar38 = logf((float)(int)uVar31);
    local_438 = (code ****)CONCAT44(local_438._4_4_,(int)(longlong)(fVar38 + fVar38));
    plVar10 = &local_448;
    do {
      plVar14 = (longlong *)*plVar10;
      plVar15 = (longlong *)plVar10[1];
      iVar28 = (int)plVar10[2];
      iVar22 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar14) >> 3);
      uVar20 = (ulonglong)(iVar22 + 1);
      plVar26 = plVar15;
      plVar35 = plVar14;
      if (iVar28 != 0) {
LAB_1437b450e:
        plVar21 = plVar14;
        if (8 < (int)(uint)uVar20) {
          uVar31 = (uint)uVar20 >> 1;
          lVar16 = plVar21[uVar31];
          plVar21[uVar31] = *plVar21;
          *plVar21 = lVar16;
          plVar32 = plVar26 + 1;
          plVar14 = plVar21;
          do {
            plVar8 = plVar14 + 1;
            plVar27 = plVar14 + 1;
            do {
              plVar14 = plVar27;
              plVar17 = plVar8;
              if (plVar26 < plVar14) break;
              plVar8 = plVar17 + 1;
              plVar27 = plVar14 + 1;
            } while (*(float *)(*plVar14 + 0x24) < *(float *)(*plVar21 + 0x24) ||
                     *(float *)(*plVar14 + 0x24) == *(float *)(*plVar21 + 0x24));
            plVar8 = plVar32 + -2;
            do {
              plVar27 = plVar32;
              plVar33 = plVar8;
              plVar32 = plVar27 + -1;
              if (plVar32 <= plVar21) break;
              plVar8 = plVar33 + -1;
            } while (*(float *)(*plVar21 + 0x24) < *(float *)(*plVar32 + 0x24) ||
                     *(float *)(*plVar21 + 0x24) == *(float *)(*plVar32 + 0x24));
            if (plVar32 < plVar14) goto LAB_1437b45a3;
            lVar16 = *plVar14;
            *plVar14 = *plVar32;
            *plVar32 = lVar16;
          } while( true );
        }
        if (plVar21 < plVar26) {
          do {
            plVar14 = plVar21;
            if (plVar21 + 1 <= plVar26) {
              lVar16 = *plVar21;
              plVar15 = plVar21 + 1;
              do {
                fVar38 = *(float *)(*plVar15 + 0x24);
                lVar18 = *plVar15;
                plVar35 = plVar15;
                if (fVar38 < *(float *)(lVar16 + 0x24) || fVar38 == *(float *)(lVar16 + 0x24)) {
                  lVar18 = lVar16;
                  plVar35 = plVar14;
                }
                plVar14 = plVar35;
                plVar15 = plVar15 + 1;
                lVar16 = lVar18;
              } while (plVar15 <= plVar26);
            }
            lVar16 = *plVar14;
            *plVar14 = *plVar26;
            *plVar26 = lVar16;
            plVar26 = plVar26 + -1;
          } while (plVar21 < plVar26);
        }
        goto LAB_1437b47db;
      }
LAB_1437b4637:
      iVar28 = (int)uVar20;
      if (iVar28 != 0) {
        iVar22 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
        iVar30 = iVar22;
joined_r0x0001437b465e:
        do {
          iVar25 = iVar22 * 2 + 1;
          if (iVar25 < iVar28) {
            iVar29 = iVar22 * 2 + 2;
            if ((iVar29 < iVar28) &&
               (*(float *)(plVar14[iVar25] + 0x24) < *(float *)(plVar14[iVar29] + 0x24) ||
                *(float *)(plVar14[iVar25] + 0x24) == *(float *)(plVar14[iVar29] + 0x24))) {
              iVar25 = iVar29;
            }
            lVar16 = plVar14[iVar22];
            fVar38 = *(float *)(plVar14[iVar25] + 0x24);
            pfVar1 = (float *)(lVar16 + 0x24);
            if (*pfVar1 <= fVar38 && fVar38 != *pfVar1) {
              plVar14[iVar22] = plVar14[iVar25];
              plVar14[iVar25] = lVar16;
              iVar22 = iVar25;
              goto joined_r0x0001437b465e;
            }
          }
          bVar37 = iVar30 != 0;
          iVar22 = iVar30 + -1;
          iVar30 = iVar22;
        } while (bVar37);
        if (1 < iVar28) {
          lVar16 = *plVar14;
          *plVar14 = plVar14[uVar20 - 1];
          plVar14[uVar20 - 1] = lVar16;
          if (iVar28 != 2) {
            do {
              uVar23 = uVar20 - 1;
              iVar28 = 0;
              iVar30 = 1;
              iVar22 = 0;
              do {
                iVar28 = iVar28 + 2;
                iVar25 = iVar30;
                if (((longlong)iVar28 < (longlong)uVar23) &&
                   (*(float *)(plVar14[iVar30] + 0x24) < *(float *)(plVar14[iVar28] + 0x24) ||
                    *(float *)(plVar14[iVar30] + 0x24) == *(float *)(plVar14[iVar28] + 0x24))) {
                  iVar25 = iVar28;
                }
                lVar16 = plVar14[iVar22];
                fVar38 = *(float *)(plVar14[iVar25] + 0x24);
                pfVar1 = (float *)(lVar16 + 0x24);
                if (fVar38 < *pfVar1 || fVar38 == *pfVar1) break;
                plVar14[iVar22] = plVar14[iVar25];
                plVar14[iVar25] = lVar16;
                iVar28 = iVar25 * 2;
                iVar30 = iVar25 * 2 + 1;
                iVar22 = iVar25;
              } while ((longlong)iVar30 < (longlong)uVar23);
              lVar16 = *plVar14;
              *plVar14 = plVar14[uVar20 - 2];
              plVar14[uVar20 - 2] = lVar16;
              uVar20 = uVar23;
            } while (2 < uVar23);
          }
        }
      }
LAB_1437b47db:
      plVar10 = plVar10 + -3;
    } while (&local_448 <= plVar10);
  }
  puVar13 = &DAT_14c846480;
  if (*(char *)(local_668 + 0xb0) != '\0') {
    puVar13 = (undefined8 *)(local_668 + 0x50);
  }
  fVar52 = (float)(double)puVar13[5];
  local_448 = (code *)*puVar13;
  uStack_440 = (code *****)puVar13[1];
  dVar48 = (double)puVar13[4];
  local_438 = (code ****)puVar13[2];
  uStack_430 = (char *)puVar13[3];
  FUN_1448052ee(&local_448);
  dVar4 = dStack_140 * 0.017453292519943295;
  fVar38 = sinf((float)dVar4);
  local_460 = cosf((float)dVar4);
  pcVar19 = local_678;
  local_458 = -fVar38;
  fVar57 = 1.0 / (local_460 * local_460 + fVar38 * fVar38);
  fVar51 = local_460 * fVar57;
  fVar50 = fVar38 * fVar57;
  fVar57 = fVar57 * local_458;
  fVar55 = -(float)dVar48;
  fVar60 = fVar55 * fVar57 - fVar51 * fVar52;
  fVar56 = fVar55 * fVar51 - fVar52 * fVar50;
  dVar46 = *(double *)(local_678 + 0x48) - *(double *)(local_678 + 0x38);
  dVar4 = *(double *)(local_678 + 0x40) - *(double *)(local_678 + 0x30);
  fVar43 = (float)*(double *)(local_678 + 0x38);
  fVar55 = (float)*(double *)(local_678 + 0x30);
  local_528 = (double *)0x0;
  uStack_520 = 1;
  uStack_51c = 0;
  local_45c = fVar38;
  local_454 = local_460;
  local_450 = (float)dVar48;
  local_44c = fVar52;
  FUN_14489624a(&local_528);
  *local_528 = (double)(fVar55 * fVar51 + fVar43 * fVar50 + fVar56);
  local_528[1] = (double)(fVar55 * fVar57 + fVar51 * fVar43 + fVar60);
  dVar48 = *(double *)(pcVar19 + 0x38);
  fVar38 = (float)(*(double *)(pcVar19 + 0x30) + dVar4);
  lVar16 = (longlong)(int)uStack_520;
  uStack_520 = uStack_520 + 1;
  if (uStack_51c < uStack_520) {
    FUN_14489624a(&local_528);
  }
  local_528[lVar16 * 2] = (double)(fVar38 * fVar51 + (float)(dVar48 + 0.0) * fVar50 + fVar56);
  local_528[lVar16 * 2 + 1] = (double)(fVar38 * fVar57 + fVar51 * (float)(dVar48 + 0.0) + fVar60);
  fVar38 = (float)(*(double *)(pcVar19 + 0x38) + dVar46);
  fVar55 = (float)(dVar4 + *(double *)(pcVar19 + 0x30));
  lVar16 = (longlong)(int)uStack_520;
  uStack_520 = uStack_520 + 1;
  if (uStack_51c < uStack_520) {
    FUN_14489624a(&local_528);
  }
  local_528[lVar16 * 2] = (double)(fVar55 * fVar51 + fVar38 * fVar50 + fVar56);
  local_528[lVar16 * 2 + 1] = (double)(fVar55 * fVar57 + fVar51 * fVar38 + fVar60);
  uVar63 = 0;
  uVar64 = 0;
  dVar48 = *(double *)(pcVar19 + 0x30);
  fVar38 = (float)(dVar46 + *(double *)(pcVar19 + 0x38));
  lVar16 = (longlong)(int)uStack_520;
  uStack_520 = uStack_520 + 1;
  if (uStack_51c < uStack_520) {
    FUN_14489624a(&local_528);
  }
  local_528[lVar16 * 2] = (double)(fVar56 + (float)(dVar48 + 0.0) * fVar51 + fVar50 * fVar38);
  local_528[lVar16 * 2 + 1] = (double)(fVar60 + fVar57 * (float)(dVar48 + 0.0) + fVar51 * fVar38);
  uVar39 = 0;
  uVar41 = 0;
  uVar58 = 0;
  uVar59 = 0;
  uVar61 = 0;
  uVar62 = 0;
  if ((longlong)(int)uStack_520 != 0) {
    uVar63 = 0;
    uVar64 = 0;
    lVar16 = 0;
    uVar39 = 0;
    uVar41 = 0;
    bVar37 = false;
    do {
      dVar48 = *(double *)((longlong)local_528 + lVar16);
      uVar53 = SUB84(dVar48,0);
      uVar54 = (undefined4)((ulonglong)dVar48 >> 0x20);
      if (bVar37) {
        if (dVar48 <= (double)CONCAT44(uVar62,uVar61)) {
          uVar61 = uVar53;
          uVar62 = uVar54;
        }
        dVar4 = *(double *)((longlong)local_528 + lVar16 + 8);
        uVar40 = (undefined4)((ulonglong)dVar4 >> 0x20);
        if (dVar4 <= (double)CONCAT44(uVar64,uVar63)) {
          uVar63 = SUB84(dVar4,0);
          uVar64 = uVar40;
        }
        if ((double)CONCAT44(uVar41,uVar39) <= dVar48) {
          uVar39 = uVar53;
          uVar41 = uVar54;
        }
        if ((double)CONCAT44(uVar59,uVar58) <= dVar4) {
          uVar58 = SUB84(dVar4,0);
          uVar59 = uVar40;
        }
      }
      else {
        uVar11 = *(undefined8 *)((longlong)local_528 + lVar16 + 8);
        uVar63 = (undefined4)uVar11;
        uVar64 = (undefined4)((ulonglong)uVar11 >> 0x20);
        uVar58 = uVar63;
        uVar59 = uVar64;
        uVar61 = uVar53;
        uVar62 = uVar54;
        uVar39 = uVar53;
        uVar41 = uVar54;
      }
      lVar16 = lVar16 + 0x10;
      bVar37 = true;
    } while ((longlong)(int)uStack_520 * 0x10 != lVar16);
  }
  uVar31 = 1;
  if (pcVar19[2] != '\0') {
    uVar31 = local_510;
  }
  if ((int)uVar31 < 2) {
    fVar38 = 0.0;
  }
  else {
    fVar38 = 20.0;
  }
  dVar48 = *(double *)(pcVar19 + 8);
  uVar53 = SUB84(dVar48,0);
  uVar54 = (undefined4)((ulonglong)dVar48 >> 0x20);
  local_548 = 0.0;
  dStack_540 = 0.0;
  local_558 = 0.0;
  dStack_550 = 0.0;
  local_568 = (code *)0x0;
  dStack_560 = 0.0;
  local_538 = '\0';
  pppdVar7 = DAT_14c8463f0;
  dVar4 = DAT_14c8463f8;
  if ((longlong)(int)local_510 != 0) {
    dVar46 = *(double *)(pcVar19 + 0x20) - *(double *)(pcVar19 + 0x10);
    local_620 = (double)((float)(*(double *)(pcVar19 + 0x18) - dVar48) / (float)(int)uVar31);
    dVar47 = local_620;
    if (dVar46 <= local_620) {
      dVar47 = dVar46;
    }
    local_658 = (double)(float)(dVar47 - (double)fVar38) * 0.5;
    local_628 = local_518 + (longlong)(int)local_510 * 8;
    local_630 = (double)(fVar38 * 0.5);
    local_670 = (longlong *)(pcVar19 + 200);
    local_6a8 = DAT_14c8463f8;
    local_6a0 = DAT_14c8463f0;
    local_694 = 0;
    uVar20 = 0;
    local_638 = CONCAT44(uVar62,uVar61);
    local_640 = CONCAT44(uVar59,uVar58);
    pcVar34 = local_518;
    local_660 = dVar48;
    local_618 = *(double *)(pcVar19 + 0x10);
    local_610 = param_1;
LAB_1437b4d3d:
    pcVar3 = *(char **)pcVar34;
    local_680 = pcVar34;
    local_608 = uVar20;
    if ((longlong)(int)local_690[1] != 0) {
      lVar16 = *local_690;
      lVar18 = (longlong)(int)local_690[1] * 0x160;
      do {
        local_578 = (double ***)FUN_1437c1114;
        uVar11 = *(undefined8 *)pcVar3;
        local_570 = (code **)&local_448;
        local_448 = (code *)&local_568;
        uVar40 = FUN_14004708a(pcVar3);
        local_6c8 = &local_578;
        FUN_144b2c65a(lVar16,uVar40,uVar11,1);
        lVar16 = lVar16 + 0x160;
        lVar18 = lVar18 + -0x160;
      } while (lVar18 != 0);
    }
    pcVar19 = local_678;
    if (local_678[2] == '\0') {
      local_580 = *(double *)(local_678 + 0x38) + *(double *)(local_678 + 0x48);
      local_588 = *(double *)(local_678 + 0x30) + *(double *)(local_678 + 0x40);
      dVar48 = (*(double *)(local_678 + 0x48) - *(double *)(local_678 + 0x38)) * 0.5;
      local_5a8 = (*(double *)(local_678 + 0x40) - *(double *)(local_678 + 0x30)) * 0.5;
      if (local_5a8 <= dVar48) {
        local_5a8 = dVar48;
      }
    }
    else {
      local_580 = dStack_560 + local_548;
      local_588 = (double)local_568 + dStack_550;
      dVar46 = (dStack_540 - local_558) * 0.5 * 0.10000000149011612;
      dVar48 = (local_548 - dStack_560) * 0.5 * 0.10000000149011612;
      dVar47 = (dStack_550 - (double)local_568) * 0.5 * 0.10000000149011612;
      uVar58 = (undefined4)local_640;
      uVar59 = (undefined4)((ulonglong)local_640 >> 0x20);
      uVar61 = (undefined4)local_638;
      uVar62 = (undefined4)((ulonglong)local_638 >> 0x20);
      dVar46 = ((dStack_540 + dVar46) - (local_558 - dVar46)) * 0.5;
      dVar48 = ((local_548 + dVar48) - (dStack_560 - dVar48)) * 0.5;
      local_5a8 = ((dStack_550 + dVar47) - ((double)local_568 - dVar47)) * 0.5;
      if (local_5a8 <= dVar48) {
        local_5a8 = dVar48;
      }
      if (local_5a8 <= dVar46) {
        local_5a8 = dVar46;
      }
      uVar53 = SUB84(local_660,0);
      uVar54 = (undefined4)((ulonglong)local_660 >> 0x20);
      local_688 = pppdVar7;
    }
    local_580 = local_580 * 0.5;
    local_588 = local_588 * 0.5;
    local_590 = (double)((ulonglong)(double)local_694 & 0x8000000000000000) + local_618 + local_658
                + local_630;
    local_598 = local_620 * (double)local_694 + (double)CONCAT44(uVar54,uVar53) + local_658 +
                local_630;
    local_5a8 = local_658 / local_5a8;
    local_5b8 = local_658 + local_590;
    local_5c0 = (double ***)(local_658 + local_598);
    local_5c8 = local_590 - local_658;
    local_5d0 = (double ***)(local_598 - local_658);
    local_5b0 = 1;
    local_5f0 = &local_460;
    local_5e8 = &local_5a8;
    local_5e0 = &local_588;
    local_5d8 = &local_598;
    local_5f8 = &local_5f0;
    local_600 = (double ***)FUN_1437c11e6;
    if ((*(uint *)(local_610 + 8) & 0x10) == 0) {
      lVar16 = *(longlong *)(local_610 + 0x20);
    }
    else {
      lVar16 = 0;
    }
    local_5a0 = local_5a8;
    local_688 = (double ***)FUN_147dc04d2(lVar16);
    local_4c8 = CONCAT44(uVar62,uVar61);
    uStack_4c0 = CONCAT44(uVar64,uVar63);
    local_4b8 = 0;
    local_4b0 = CONCAT44(uVar41,uVar39);
    local_4a8 = CONCAT44(uVar59,uVar58);
    local_4a0 = 0;
    local_498 = 1;
    lVar18 = *(longlong *)(lVar16 + 0x40);
    if (lVar18 == 0) {
      lVar18 = FUN_14475ec7e(lVar16);
    }
    local_4d4 = (uint)(DAT_14cb11aac == 0);
    local_4e0 = *(undefined8 *)(lVar18 + 0x750);
    local_128 = 0;
    local_120 = 0;
    local_148 = (code ***)0x0;
    dStack_140 = 0.0;
    local_11c = 0xffffffff00000080;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    local_4d0 = lVar18;
    if (*(longlong *)(lVar16 + 0xd0) != 0) {
      local_480 = &local_148;
      local_448 = FUN_1437be8a6;
      uStack_440 = &local_480;
      FUN_140bc66fe(*(longlong *)(lVar16 + 0xd0),&local_448);
    }
    iVar22 = *(int *)(pcVar3 + 0x48) + -1;
    iVar28 = DAT_14cb11dd8;
    if (iVar22 <= DAT_14cb11dd8) {
      iVar28 = iVar22;
    }
    iVar30 = 0;
    if (0 < iVar28) {
      iVar30 = iVar28;
    }
    iVar25 = DAT_14c761ef4 + iVar30 + -1;
    if (iVar25 < iVar22) {
      iVar22 = iVar25;
    }
    if (iVar22 < 1) {
      iVar22 = 0;
    }
    local_4e8 = &local_600;
    local_4f8 = (code ***)0x0;
    uStack_4f0 = 0;
    local_508 = (code *)CONCAT44(local_508._4_4_,iVar30);
    if (iVar28 <= iVar22) {
      local_648 = pcVar3 + 8;
      local_650 = pcVar3 + 0x50;
      do {
        pppppcVar12 = *(code ******)(pcVar3 + 0x98);
        if (pppppcVar12 == (code *****)0x0) {
          pppppcVar12 = (code *****)FUN_14001cc68(0x68,0x10);
          local_6c8 = (double ****)CONCAT71(local_6c8._1_7_,pcVar3[0x90]);
          FUN_1412be19e(pppppcVar12,local_650,local_648,(longlong)*(int *)(pcVar3 + 0x20));
          *(code ******)(pcVar3 + 0x98) = pppppcVar12;
          iVar30 = (int)local_508;
        }
        local_438 = &local_4f8;
        local_428 = pcVar19;
        local_420 = (code ****)&local_5d0;
        local_418 = &local_4d4;
        local_410 = (code *****)&local_4e8;
        local_408 = (double ***)&local_148;
        local_400 = &local_4e0;
        local_3f8 = &local_4d0;
        local_490 = FUN_1437c08a2;
        local_478 = &local_490;
        local_480 = (code ****)FUN_147dc2bc0;
        local_488 = (code **)&local_448;
        local_448 = (code *)&local_508;
        uStack_440 = pppppcVar12;
        uStack_430 = pcVar3;
        FUN_1437ab1a2(pppppcVar12[0xb] + (longlong)iVar30 * 0x11,&local_4c8);
        iVar28 = (int)local_508;
        iVar30 = (int)local_508 + 1;
        local_508 = (code *)CONCAT44(local_508._4_4_,iVar30);
      } while (iVar28 < iVar22);
    }
    if (pcVar19[1] != '\0') {
      local_480 = (code ****)0x4139000000000000;
      local_478 = (code **)0x0;
      local_490 = (code *)((ulonglong)local_490 & 0xffffffffffffff00);
      (*(code *)*local_4e8)(&local_448,local_4e8[1],&local_480,&local_490);
      local_508 = (code *)0xc139000000000000;
      local_500 = 0;
      local_469 = 0;
      (*(code *)*local_4e8)(&local_490,local_4e8[1],&local_508,&local_469);
      local_6c0._0_4_ = 0x40400000;
      local_6c8 = (double ****)&DAT_149e1dd34;
      FUN_147dc1aba(pcVar19,&local_5d0,&local_490,&local_448);
      local_480 = (code ****)0x0;
      local_478 = (code **)0x4139000000000000;
      local_490 = (code *)((ulonglong)local_490 & 0xffffffffffffff00);
      (*(code *)*local_4e8)(&local_448,local_4e8[1],&local_480,&local_490);
      local_508 = (code *)0x0;
      local_500 = 0xc139000000000000;
      local_469 = 0;
      (*(code *)*local_4e8)(&local_490,local_4e8[1],&local_508,&local_469);
      local_6c0 = (double ****)CONCAT44(local_6c0._4_4_,0x40400000);
      local_6c8 = (double ****)&DAT_149e1dd14;
      FUN_147dc1aba(pcVar19,&local_5d0,&local_490,&local_448);
    }
    if (*pcVar19 == '\x01') {
      uStack_430 = (char *)(local_5b8 + 10.0);
      local_438 = (code ****)((double)local_5c0 + 10.0);
      uStack_440 = (code *****)(local_5c8 + -10.0);
      local_490 = (code *)(((double)local_5c0 - (double)local_5d0) + (double)local_5d0);
      local_448 = (code *)((double)local_5d0 + -10.0);
      local_428 = (char *)CONCAT71(local_428._1_7_,1);
      local_6b8 = pcVar3 + 0x2c;
      local_478 = (code **)((local_5b8 - local_5c8) + local_5c8);
      local_480 = (code ****)((double)local_5d0 + 0.0);
      uVar53 = SUB84(local_660,0);
      uVar54 = (undefined4)((ulonglong)local_660 >> 0x20);
      local_488 = (code **)(local_5c8 + 0.0);
      local_6c0 = (double ****)&local_480;
      local_6c8 = &local_5c0;
      local_6b0 = 0x3f800000;
      FUN_147dc1c1c(pcVar19,&local_448,&local_5d0,&local_490);
    }
    if (pcVar19[2] == '\x01') {
      local_480 = *(code *****)(pcVar3 + 0x50);
      local_478 = *(code ***)(pcVar3 + 0x58);
      uStack_440 = (code *****)(*(double *)(pcVar3 + 0x70) - (double)local_478);
      local_448 = (code *)(*(double *)(pcVar3 + 0x68) - (double)local_480);
      local_6c0 = local_4e8;
      local_6c8 = (double ****)&DAT_149e1dd24;
      FUN_1437b343a(pcVar19,&local_5d0,&local_480,&local_448);
    }
    uVar40 = FUN_14004708a(pcVar3);
    if ((longlong)*(int *)(local_688 + 1) != 0) {
      ppdVar36 = *local_688;
      lVar16 = (longlong)*(int *)(local_688 + 1) * 0x160;
      do {
        FUN_147dc1cd8(ppdVar36,&local_490);
        uStack_440 = (code *****)&local_4e8;
        local_438 = (code ****)&local_5d0;
        uStack_430 = pcVar19;
        local_480 = (code ****)FUN_1437c1018;
        local_6c8 = (double ****)&local_480;
        local_478 = (code **)&local_448;
        local_448 = (code *)&local_490;
        local_428 = pcVar3;
        FUN_144b2c65a(ppdVar36,uVar40,*(undefined8 *)pcVar3,1);
        ppdVar36 = ppdVar36 + 0x2c;
        lVar16 = lVar16 + -0x160;
      } while (lVar16 != 0);
    }
    if (local_4f8 != (code ***)0x0) {
      FUN_1400020a8();
    }
    uVar20 = local_608;
    local_100 = 0;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    uVar11 = FUN_140e90ef8(&local_148);
    if ((uVar20 & 1) == 0) {
      if ((local_5b0 & 1) != 0) {
        local_6a0 = local_5c0;
        local_6a8 = local_5b8;
        local_468 = local_5af;
        uStack_464 = uStack_5ab;
        uVar20 = CONCAT71((int7)((ulonglong)uVar11 >> 8),local_5b0) & 0xffffffff;
        dVar4 = local_5c8;
        pppdVar7 = local_5d0;
      }
    }
    else if ((local_5b0 & 1) != 0) {
      if ((double)local_5d0 <= (double)pppdVar7) {
        pppdVar7 = local_5d0;
      }
      if (local_5c8 <= dVar4) {
        dVar4 = local_5c8;
      }
      uVar40 = SUB84(local_6a0,0);
      uVar42 = (undefined4)((ulonglong)local_6a0 >> 0x20);
      if ((double)local_6a0 <= (double)local_5c0) {
        uVar40 = SUB84(local_5c0,0);
        uVar42 = (undefined4)((ulonglong)local_5c0 >> 0x20);
      }
      local_6a0 = (double ***)CONCAT44(uVar42,uVar40);
      uVar40 = SUB84(local_6a8,0);
      uVar42 = (undefined4)((ulonglong)local_6a8 >> 0x20);
      if (local_6a8 <= local_5b8) {
        uVar40 = SUB84(local_5b8,0);
        uVar42 = (undefined4)((ulonglong)local_5b8 >> 0x20);
      }
      local_6a8 = (double)CONCAT44(uVar42,uVar40);
    }
    pcVar34 = local_680;
    if (pcVar19[2] == '\x01') {
      dStack_140 = local_590 - local_658;
      local_148 = (code ***)(local_598 - local_658);
      local_4c8 = 0;
      uStack_4c0 = 0;
      lVar16 = local_668;
LAB_1437b58cb:
      lVar18 = lVar16;
      lVar16 = lVar18;
      if (*(longlong *)(lVar18 + 0x20) != 0) goto code_r0x0001437b58da;
      goto LAB_1437b58ec;
    }
    goto LAB_1437b55cc;
  }
  uVar20 = 0;
  local_6a8 = DAT_14c8463f8;
  local_6a0 = DAT_14c8463f0;
  cVar9 = '\0';
  pppdVar45 = DAT_14c8463f0;
  dVar48 = DAT_14c8463f8;
  pppdVar6 = DAT_14c8463f0;
  dVar46 = DAT_14c8463f8;
  goto LAB_1437b5d6b;
LAB_1437b45a3:
  lVar16 = *plVar21;
  *plVar21 = *plVar32;
  *plVar32 = lVar16;
  iVar28 = iVar28 + -1;
  plVar27 = plVar27 + -2;
  if ((longlong)plVar33 - (longlong)plVar35 < (longlong)plVar15 - (longlong)plVar17) {
    if (plVar14 < plVar26) {
      *plVar10 = (longlong)plVar14;
      plVar10[1] = (longlong)plVar26;
      *(int *)(plVar10 + 2) = iVar28;
      plVar10 = plVar10 + 3;
    }
    plVar14 = plVar21;
    plVar15 = plVar33;
    if (plVar32 <= plVar21 + 1) goto LAB_1437b47db;
  }
  else {
    if (plVar21 + 1 < plVar32) {
      *plVar10 = (longlong)plVar21;
      plVar10[1] = (longlong)plVar27;
      *(int *)(plVar10 + 2) = iVar28;
      plVar10 = plVar10 + 3;
    }
    plVar21 = plVar17;
    plVar27 = plVar26;
    plVar15 = plVar26;
    if (plVar26 <= plVar14) goto LAB_1437b47db;
  }
  iVar22 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar21) >> 3);
  uVar20 = (ulonglong)(iVar22 + 1);
  plVar26 = plVar27;
  plVar35 = plVar21;
  if (iVar28 == 0) goto LAB_1437b4637;
  goto LAB_1437b450e;
code_r0x0001437b58da:
  lVar16 = *(longlong *)(lVar18 + 0x20);
  if ((*(uint *)(lVar18 + 8) >> 0x1c & 1) == 0) goto LAB_1437b58cb;
  lVar16 = FUN_142840154(lVar18);
LAB_1437b58ec:
  if (lVar16 == 0) {
    lVar16 = *(longlong *)(lVar18 + 0x20);
    goto LAB_1437b58cb;
  }
  local_448 = *(code **)(lVar16 + 0x18);
  FUN_1400021e4(&local_448,&local_490);
  FUN_1449fb060(&local_480,&local_490,1);
  FUN_14094a6a4(&local_448,&local_480,0);
  lVar16 = (longlong)(int)uStack_4c0;
  uVar31 = (int)uStack_4c0 + 1;
  uStack_4c0 = CONCAT44(uStack_4c0._4_4_,uVar31);
  if (uStack_4c0._4_4_ < uVar31) {
    FUN_147dc898c(&local_4c8);
  }
  pcVar19 = local_678;
  lVar16 = lVar16 * 0x20;
  *(undefined8 *)(local_4c8 + lVar16) = 0;
  *(code **)(local_4c8 + lVar16) = local_448;
  *(int *)(local_4c8 + 8 + lVar16) = (int)uStack_440;
  *(undefined4 *)(local_4c8 + 0xc + lVar16) = uStack_440._4_4_;
  puVar2 = (undefined4 *)(local_4c8 + 0x10 + lVar16);
  *puVar2 = 0x3f800000;
  puVar2[1] = 0x3f800000;
  puVar2[2] = 0x3f800000;
  puVar2[3] = 0x3f800000;
  uStack_440 = (code *****)0x0;
  local_448 = (code *)0x0;
  if (local_480 != (code ****)0x0) {
    FUN_1400020a8();
  }
  if (local_490 != (code *)0x0) {
    FUN_1400020a8();
  }
  fVar38 = (float)FUN_14004708a(pcVar3);
  FUN_1400021e4(pcVar3,&local_448);
  ppcVar24 = (code **)&DAT_149dfb77a;
  if ((int)uStack_440 != 0) {
    ppcVar24 = (code **)local_448;
  }
  FUN_140002266(&local_480,L"%s | %d m",ppcVar24,(int)(fVar38 * 0.01));
  if ((code **)local_448 != (code **)0x0) {
    FUN_1400020a8();
  }
  if (pcVar3[0x88] == '\x01') {
    FUN_1400020e8(&local_480,L" | Client Only",0xe);
  }
  uVar23 = uStack_4c0;
  lVar16 = (longlong)(int)uStack_4c0;
  uVar31 = (int)uStack_4c0 + 1;
  uStack_4c0 = CONCAT44(uStack_4c0._4_4_,uVar31);
  if (uStack_4c0._4_4_ < uVar31) {
    FUN_147dc898c(&local_4c8,uVar23 & 0xffffffff);
  }
  _Src = local_480;
  lVar16 = lVar16 * 0x20;
  puVar13 = (undefined8 *)(local_4c8 + lVar16);
  *(undefined8 *)(local_4c8 + lVar16) = 0;
  lVar18 = (longlong)(int)local_478;
  *(int *)(local_4c8 + 8 + lVar16) = (int)local_478;
  if (lVar18 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar13,(ulonglong)local_478 & 0xffffffff,0);
    memcpy((void *)*puVar13,_Src,lVar18 * 2);
  }
  pcVar34 = local_680;
  *(undefined4 *)(puVar13 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)puVar13 + 0x14) = 0x3f800000;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = 0x3f800000;
  FUN_147dc0586(&local_448);
  iVar28 = *(int *)(pcVar19 + 0xd0);
  uVar31 = iVar28 + 1;
  *(uint *)(pcVar19 + 0xd0) = uVar31;
  if (*(uint *)(pcVar19 + 0xd4) < uVar31) {
    FUN_147dc256a(local_670);
  }
  lVar16 = *local_670;
  lVar18 = (longlong)iVar28 * 0x20;
  puVar2 = (undefined4 *)(lVar16 + lVar18);
  *puVar2 = (undefined4)local_448;
  puVar2[1] = local_448._4_4_;
  puVar2[2] = (int)uStack_440;
  puVar2[3] = uStack_440._4_4_;
  *(undefined8 *)(lVar16 + 0x10 + lVar18) = 0;
  *(code *****)(lVar16 + 0x10 + lVar18) = local_438;
  local_438 = (code ****)0x0;
  *(undefined4 *)(lVar16 + 0x18 + lVar18) = (undefined4)uStack_430;
  *(undefined4 *)(lVar16 + 0x1c + lVar18) = uStack_430._4_4_;
  uStack_430 = (char *)0x0;
  FUN_147dc8960(0,0);
  if (local_438 != (code ****)0x0) {
    FUN_1400020a8();
  }
  if (local_480 != (code ****)0x0) {
    FUN_1400020a8();
  }
  FUN_147dc8960(local_4c8,uStack_4c0 & 0xffffffff);
  if (local_4c8 != 0) {
    FUN_1400020a8();
  }
  local_694 = local_694 + 1;
LAB_1437b55cc:
  pcVar34 = pcVar34 + 8;
  if (pcVar34 == local_628) goto LAB_1437b5c14;
  goto LAB_1437b4d3d;
LAB_1437b5c14:
  if (local_538 == '\0') {
    cVar9 = '\0';
    pppdVar45 = DAT_14c8463f0;
    dVar48 = DAT_14c8463f8;
    pppdVar6 = DAT_14c8463f0;
    dVar46 = DAT_14c8463f8;
  }
  else {
    fVar38 = (float)((local_548 + dStack_560) * 0.5);
    fVar55 = (float)((dStack_550 + (double)local_568) * 0.5);
    dVar46 = (double)(local_45c * fVar55 + local_454 * fVar38 + local_44c);
    dVar44 = (double)(fVar55 * local_460 + fVar38 * local_458 + local_450);
    dVar48 = (local_548 - dStack_560) * 0.5;
    dVar47 = (dStack_550 - (double)local_568) * 0.5;
    if (dVar47 <= dVar48) {
      dVar47 = dVar48;
    }
    dVar48 = dVar47 + dVar46;
    dVar5 = dVar47 + dVar44;
    dVar46 = dVar46 - dVar47;
    dVar44 = dVar44 - dVar47;
    dVar47 = (dVar48 - dVar46) * 0.5 * 0.10000000149011612;
    dVar49 = (dVar5 - dVar44) * 0.5 * 0.10000000149011612;
    cVar9 = '\x01';
    pppdVar45 = (double ***)(dVar44 - dVar49);
    dVar48 = dVar48 + dVar47;
    pppdVar6 = (double ***)(dVar5 + dVar49);
    dVar46 = dVar46 - dVar47;
  }
LAB_1437b5d6b:
  *(double ****)(pcVar19 + 0x80) = pppdVar45;
  *(double *)(pcVar19 + 0x88) = dVar46;
  *(double ****)(pcVar19 + 0x90) = pppdVar6;
  *(double *)(pcVar19 + 0x98) = dVar48;
  pcVar19[0xa0] = cVar9;
  uVar63 = (undefined4)local_448;
  *(undefined4 *)(pcVar19 + 0xa1) = uVar63;
  *(undefined4 *)(pcVar19 + 0xa4) = local_448._3_4_;
  *(double ****)(pcVar19 + 0x58) = pppdVar7;
  *(double *)(pcVar19 + 0x60) = dVar4;
  *(double ****)(pcVar19 + 0x68) = local_6a0;
  *(double *)(pcVar19 + 0x70) = local_6a8;
  pcVar19[0x78] = (char)uVar20;
  *(uint *)(pcVar19 + 0x7c) = CONCAT31(uStack_464,local_468._3_1_);
  *(undefined4 *)(pcVar19 + 0x79) = local_468;
  if (local_528 != (double *)0x0) {
    FUN_1400020a8();
  }
  uVar20 = CONCAT71((int7)((ulonglong)pcVar19 >> 8),1);
LAB_1437b5dfa:
  if (local_518 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_6e8) == DAT_14c707940) {
    return uVar20 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437b5eaf FUN_1437b5eaf body=69 status=ok
// SIG undefined FUN_1437b5eaf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b5eaf(void)

{
  _DAT_14cb11f00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b5ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11f08,1);
  return;
}



// FUNCTION 1437b5f05 FUN_1437b5f05 body=69 status=ok
// SIG undefined FUN_1437b5f05(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b5f05(void)

{
  _DAT_14cb11f20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b5f47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11f28,1);
  return;
}



// FUNCTION 1437b5f4a FUN_1437b5f4a body=69 status=ok
// SIG undefined FUN_1437b5f4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b5f4a(void)

{
  _DAT_14cb11f30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b5f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11f38,1);
  return;
}



// FUNCTION 1437b5f8f FUN_1437b5f8f body=69 status=ok
// SIG undefined FUN_1437b5f8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b5f8f(void)

{
  _DAT_14cb11f48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b5fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11f50,1);
  return;
}



// FUNCTION 1437b5fd4 FUN_1437b5fd4 body=69 status=ok
// SIG undefined FUN_1437b5fd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b5fd4(void)

{
  _DAT_14cb11f58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b6016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11f60,1);
  return;
}



// FUNCTION 1437b6019 FUN_1437b6019 body=69 status=ok
// SIG undefined FUN_1437b6019(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b6019(void)

{
  _DAT_14cb11f68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b605b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11f70,1);
  return;
}



// FUNCTION 1437b605e FUN_1437b605e body=69 status=ok
// SIG undefined FUN_1437b605e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b605e(void)

{
  _DAT_14cb11f88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b60a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11f90,1);
  return;
}



// FUNCTION 1437b60a3 FUN_1437b60a3 body=106 status=ok
// SIG undefined FUN_1437b60a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b60a3(void)

{
  _DAT_14cb11fb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11fc0,1);
  if (DAT_14cb11fa8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb11f98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437b610e FUN_1437b610e body=1321 status=ok
// SIG undefined FUN_1437b610e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b610e(longlong *param_1,char param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  undefined8 uVar12;
  longlong lVar13;
  double *pdVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auStack_148 [40];
  longlong *local_120;
  code *local_118;
  longlong **local_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar11 = FUN_140183ea4(param_1[5]);
  if (cVar11 == '\0') {
    iVar15 = *(int *)((longlong)param_1 + 0x3c);
    FUN_14482129f(param_1[6],(int)param_1[7]);
    *(undefined4 *)(param_1 + 7) = 0;
    if ((iVar15 < 0) && (*(int *)((longlong)param_1 + 0x3c) != 0)) {
      FUN_147dd7cc6(param_1 + 6);
    }
    *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  }
  else {
    uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar13 = FUN_14011c706(uVar12);
    iVar15 = *(int *)(lVar13 + 0x1d0);
    if ((param_2 == '\0') || (*(int *)((longlong)param_1 + 0x2e4) != iVar15)) {
      iVar3 = *(int *)((longlong)param_1 + 0x3c);
      FUN_14482129f(param_1[6],(int)param_1[7]);
      *(undefined4 *)(param_1 + 7) = 0;
      if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x3c) != 0)) {
        FUN_147dd7cc6(param_1 + 6);
      }
      FUN_1401773fa(lVar13,param_1[5],param_1 + 6);
      *(int *)((longlong)param_1 + 0x2e4) = iVar15;
      (**(code **)(*param_1 + 0x180))(param_1);
      lVar13 = FUN_14011c706();
      local_e8 = 0;
      local_e0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_dc = 0x80;
      uStack_d8 = 0xffffffff;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      if (lVar13 != 0) {
        local_120 = &local_108;
        local_110 = &local_120;
        local_118 = FUN_1437c16f2;
        FUN_14054179e(lVar13);
        if (((int)uStack_100 != local_d4) && (lVar13 = param_1[7], (longlong)(int)lVar13 != 0)) {
          lVar18 = param_1[6];
          lVar17 = 0;
          do {
            if (*(char *)(lVar18 + 0x119 + lVar17) == '\x01') {
              FUN_144881636(lVar18 + 0x68 + lVar17,&local_108);
              *(undefined1 *)(lVar18 + 0x60 + lVar17) = 1;
            }
            lVar17 = lVar17 + 0x160;
          } while ((longlong)(int)lVar13 * 0x160 - lVar17 != 0);
        }
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
      }
      uVar4 = uStack_100 >> 0x20;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      if ((int)uVar4 != 0) {
        FUN_14472eb64(&local_108,0);
      }
      uStack_d8 = 0xffffffff;
      local_d4 = 0;
      local_e0 = 0;
      if (0x80 < local_dc) {
        local_dc = 0x80;
        FUN_1446efbd8(local_f8,0);
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_108 = 0;
      uStack_100 = 0;
      FUN_1401773fa(lVar13,param_1[5]);
      lVar13 = param_1[5];
      pdVar14 = &DAT_14c846480;
      if (*(char *)(lVar13 + 0xb0) != '\0') {
        pdVar14 = (double *)(lVar13 + 0x50);
      }
      auVar1 = *(undefined1 (*) [16])(pdVar14 + 8);
      auVar2 = *(undefined1 (*) [16])(pdVar14 + 10);
      lVar18 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
      auVar28._8_4_ = (int)lVar18;
      auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
      auVar28._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      iVar15 = movmskpd((int)lVar13,auVar28);
      lVar18 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
      auVar30._8_4_ = (int)lVar18;
      auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
      auVar30._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar16 = movmskpd((int)(double *)(lVar13 + 0x50),auVar30);
      uVar19 = (undefined4)DAT_14c8464c0;
      uVar20 = DAT_14c8464c0._4_4_;
      uVar21 = (undefined4)DAT_14c8464c8;
      uVar22 = DAT_14c8464c8._4_4_;
      dVar23 = DAT_14c846480;
      dVar24 = DAT_14c846488;
      dVar25 = DAT_14c846490;
      dVar26 = DAT_14c846498;
      dVar27 = DAT_14c8464d0;
      if ((uVar16 & 0x3fffffff) != 0 || iVar15 != 0) {
        auVar30 = divpd(_DAT_149934d80,auVar1);
        auVar28 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
        uVar4 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar30._0_8_;
        uVar5 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar30._8_8_;
        uVar19 = (int)uVar4;
        uVar20 = (int)(uVar4 >> 0x20);
        uVar21 = (int)uVar5;
        uVar22 = (int)(uVar5 >> 0x20);
        dVar23 = -*pdVar14;
        dVar24 = -pdVar14[1];
        dVar25 = pdVar14[2] * -1.0;
        dVar26 = pdVar14[3] * 1.0;
        dVar27 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar28._0_8_);
      }
      if (0 < (int)uStack_100) {
        lVar13 = 0x50;
        lVar18 = 0;
        do {
          pdVar14 = (double *)(local_108 + -0x10 + lVar13);
          dVar8 = *pdVar14 * (double)CONCAT44(uVar20,uVar19);
          dVar9 = pdVar14[1] * (double)CONCAT44(uVar22,uVar21);
          dVar29 = *(double *)(local_108 + lVar13) * dVar27;
          dVar6 = dVar9 * dVar23 - dVar24 * dVar8;
          dVar7 = dVar29 * dVar24 - dVar25 * dVar9;
          dVar10 = dVar8 * dVar25 - dVar23 * dVar29;
          dVar7 = dVar7 + dVar7;
          dVar10 = dVar10 + dVar10;
          dVar6 = dVar6 + dVar6;
          dVar9 = (dVar25 * dVar7 - dVar23 * dVar6) + dVar26 * dVar10 + dVar9;
          lVar17 = param_1[6];
          auVar1._8_4_ = SUB84(dVar9,0);
          auVar1._0_8_ = (dVar6 * dVar24 - dVar10 * dVar25) + dVar26 * dVar7 + dVar8;
          auVar1._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          *(undefined1 (*) [16])(lVar17 + -0x10 + lVar13) = auVar1;
          *(double *)(lVar17 + lVar13) =
               dVar6 * dVar26 + dVar29 + (dVar10 * dVar23 - dVar7 * dVar24);
          lVar18 = lVar18 + 1;
          lVar13 = lVar13 + 0x160;
        } while (lVar18 < (int)uStack_100);
      }
      FUN_14482129f(local_108);
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437b6638 FUN_1437b6638 body=2112 status=ok
// SIG undefined FUN_1437b6638(void)

void FUN_1437b6638(longlong *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  ulonglong unaff_RBX;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_328 [40];
  int local_300;
  int local_2fc;
  longlong *local_2f8;
  longlong local_2f0;
  undefined1 local_2e8 [168];
  undefined1 local_240 [496];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  *(int *)(param_1 + 0x5d) = (int)param_1[0x5d] + 1;
  lVar12 = (**(code **)(*param_1 + 0x180))();
  local_300 = (int)param_1[0x5a] + *(int *)((longlong)param_1 + 0x2d4);
  local_2f8 = param_1 + 0x27;
  local_2fc = (int)param_1[0x28] + (int)param_1[0x2a];
  param_1[0x5a] = 0;
  FUN_1437b6e7a();
  if (param_1[0x5f] != 0) {
    local_2f0 = lVar12;
    FUN_140082318();
    lVar12 = param_1[0x53];
    if ((longlong)(int)lVar12 != 0) {
      unaff_RBX = param_1[0x52];
      lVar16 = 0;
      do {
        lVar3 = *(longlong *)(unaff_RBX + lVar16);
        cVar6 = FUN_144b2d9b0(param_1 + 0x12,lVar3);
        if (cVar6 == '\0') {
          if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar3);
          }
          iVar9 = (int)param_1[0x2a];
          *(uint *)(param_1 + 0x2a) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0x154) < iVar9 + 1U) {
            FUN_1417fc588(param_1 + 0x29,iVar9);
          }
          *(longlong *)(param_1[0x29] + (longlong)iVar9 * 8) = lVar3;
          if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar3);
          }
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)(int)lVar12 * 8 != lVar16);
    }
    if ((longlong)(int)param_1[0x51] != 0) {
      puVar17 = (ulonglong *)param_1[0x50];
      puVar2 = puVar17 + (int)param_1[0x51];
      bVar7 = DAT_14c950c29;
      do {
        uVar15 = *puVar17;
        if ((uVar15 != 0) && ((bVar7 & 1) != 0)) {
          FUN_1456cec3c(uVar15);
          bVar7 = DAT_14c950c29;
        }
        if ((uVar15 != 0) && ((bVar7 & 1) != 0)) {
          FUN_1456cec3c(uVar15);
        }
        bVar7 = DAT_14c950c29;
        if ((int)param_1[9] != *(int *)((longlong)param_1 + 0x74)) {
          uVar8 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          plVar13 = (longlong *)param_1[0x10];
          if ((longlong *)param_1[0x10] == (longlong *)0x0) {
            plVar13 = param_1 + 0xf;
          }
          for (iVar9 = *(int *)((longlong)plVar13 +
                               (ulonglong)((int)param_1[0x11] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
              iVar9 != -1; iVar9 = *(int *)(param_1[8] + 8 + (longlong)iVar9 * 0x10)) {
            if ((uVar15 != 0) && ((bVar7 & 1) != 0)) {
              FUN_1456cec3c(uVar15);
              bVar7 = DAT_14c950c29;
            }
            uVar4 = *(ulonglong *)(param_1[8] + (longlong)iVar9 * 0x10);
            if (((bVar7 & 1) != 0) && (uVar4 != 0)) {
              FUN_1456cec3c(uVar4);
              bVar7 = DAT_14c950c29;
            }
            if ((uVar15 != 0) && ((bVar7 & 1) != 0)) {
              FUN_1456cec3c(uVar15);
              bVar7 = DAT_14c950c29;
            }
            if (uVar4 == uVar15) goto LAB_1437b68f0;
          }
        }
        if ((uVar15 != 0) && ((bVar7 & 1) != 0)) {
          FUN_1456cec3c(uVar15);
        }
        iVar9 = (int)param_1[0x28];
        *(uint *)(param_1 + 0x28) = iVar9 + 1U;
        if (*(uint *)((longlong)param_1 + 0x144) < iVar9 + 1U) {
          FUN_1417fc588(local_2f8,iVar9);
        }
        *(ulonglong *)(*local_2f8 + (longlong)iVar9 * 8) = uVar15;
        bVar7 = DAT_14c950c29;
        if (DAT_14c950c29 == 1 && uVar15 != 0) {
          FUN_1456cec3c(uVar15);
          bVar7 = DAT_14c950c29;
        }
LAB_1437b68f0:
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar2);
    }
    *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
    puVar5 = (undefined8 *)param_1[0x5e];
    if (puVar5 != (undefined8 *)0x0) {
      param_1[0x5e] = 0;
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    lVar12 = local_2f0;
    puVar5 = (undefined8 *)param_1[0x5f];
    if (puVar5 != (undefined8 *)0x0) {
      param_1[0x5f] = 0;
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    iVar9 = *(int *)((longlong)param_1 + 0x18c);
    FUN_14482129f(param_1[0x30]);
    *(undefined4 *)(param_1 + 0x31) = 0;
    if ((iVar9 < 0) && (*(int *)((longlong)param_1 + 0x18c) != 0)) {
      FUN_147dd7cc6(param_1 + 0x30);
    }
    FUN_144b2dae4(param_1 + 0x32);
    FUN_144b2dae4(param_1 + 0x3c);
    FUN_144b2dcfe(param_1 + 0x46);
    FUN_1437b6e7a(param_1 + 0x50);
  }
  if ((*(char *)((longlong)param_1 + 0x2c9) == '\x01') &&
     (lVar16 = (**(code **)(*param_1 + 0x180))(param_1), *(int *)(lVar16 + 0x15c) != 0)) {
    *(undefined1 *)((longlong)param_1 + 0x2c9) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2cc) = *(undefined4 *)(lVar12 + 0x160);
  }
  lVar16 = *(longlong *)(param_1[5] + 0x40);
  if ((lVar16 == 0) && (lVar16 = FUN_14475ec7e(param_1[5]), lVar16 == 0)) {
    bVar18 = false;
  }
  else {
    iVar9 = FUN_14490d72a(lVar16);
    unaff_RBX = (ulonglong)(iVar9 - 1U < 2);
    bVar18 = true;
  }
  bVar7 = FUN_140183ea4(param_1[5]);
  if ((((bVar18) && ((unaff_RBX & 1) != 0)) && ((bVar7 ^ 1) == 0)) &&
     ((local_300 == local_2fc && (cVar6 = FUN_1400900b4(param_1[5]), cVar6 == '\0')))) {
    uVar8 = *(uint *)((longlong)param_1 + 0x2dc);
    lVar16 = *(longlong *)(param_1[5] + 0x40);
    if (lVar16 == 0) {
      lVar16 = FUN_14475ec7e(param_1[5]);
      uVar10 = 0x80000000;
      if (lVar16 != 0) goto LAB_1437b6a76;
    }
    else {
LAB_1437b6a76:
      iVar9 = FUN_14490d72a(lVar16);
      uVar10 = 0x80000000;
      if (iVar9 - 1U < 2) {
        uVar10 = FUN_1400900b4(param_1[5]);
        uVar10 = uVar10 & 0xff;
      }
    }
    if ((uVar8 == uVar10) &&
       (lVar16 = param_1[0x5b], iVar9 = FUN_1437a9338(param_1[5]), (int)lVar16 == iVar9))
    goto LAB_1437b6dae;
  }
  if ((int)DAT_14cb11f40 < 1) {
    bVar18 = false;
  }
  else {
    bVar18 = *(uint *)(param_1 + 0x5d) % DAT_14cb11f40 == 0;
  }
  bVar19 = false;
  if ((*(longlong *)(param_1[5] + 0x30) != 0 && (bVar7 ^ 1) == 0) && (!bVar18)) {
    if (DAT_14c761f00 == '\x01') {
      if (DAT_14c761f04 < 1) {
        bVar19 = false;
        if ((DAT_14c761f08 < 1) || (local_300 != local_2fc)) goto LAB_1437b6b33;
      }
      else if (local_300 != local_2fc) goto LAB_1437b6b30;
      lVar16 = (**(code **)(*param_1 + 0x180))(param_1);
      if (*(int *)(lVar16 + 0x15c) == 0) {
        bVar19 = (int)param_1[0x1d] == *(int *)((longlong)param_1 + 0x114);
        goto LAB_1437b6b33;
      }
    }
LAB_1437b6b30:
    bVar19 = false;
  }
LAB_1437b6b33:
  (**(code **)(*param_1 + 0x348))(param_1,bVar19);
  iVar9 = FUN_14490d72a(lVar12);
  if (((bVar7 & iVar9 != 1 & DAT_14cb11f80) == 1) && (*(int *)(param_1[5] + 0x48) == 2)) {
    lVar12 = (**(code **)(*param_1 + 0x180))(param_1);
    bVar18 = *(int *)(lVar12 + 0x15c) == 0;
  }
  else {
    bVar18 = false;
  }
  if (bVar19 == false) {
LAB_1437b6d3c:
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar8 = 0;
  }
  else {
    lVar12 = param_1[5];
    plVar13 = *(longlong **)(lVar12 + 0x30);
    uVar8 = 0xffffffff;
    if (plVar13 == (longlong *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar13 + 0x2f8))(plVar13);
      uVar15 = (ulonglong)uVar10;
      lVar12 = param_1[5];
      plVar13 = *(longlong **)(lVar12 + 0x30);
      if (plVar13 != (longlong *)0x0) {
        iVar9 = (**(code **)(*plVar13 + 0x2c0))(plVar13);
        uVar8 = 0x21c88687 - iVar9;
        lVar12 = param_1[5];
      }
    }
    lVar12 = *(longlong *)(lVar12 + 0x40);
    if (lVar12 == 0) {
      lVar12 = FUN_14475ec7e();
      iVar9 = 0x1e3779b9;
      if (lVar12 != 0) goto LAB_1437b6be2;
    }
    else {
LAB_1437b6be2:
      iVar11 = FUN_14490d72a(lVar12);
      iVar9 = 0x1e3779b9;
      if (iVar11 - 1U < 2) {
        bVar7 = FUN_1400900b4(param_1[5]);
        iVar9 = bVar7 + 0x9e3779b9;
      }
    }
    uVar8 = (uVar8 >> 2) + uVar8 * 0x40 + iVar9 ^ uVar8;
    iVar9 = FUN_1437a9338(param_1[5]);
    uVar8 = (uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + iVar9 ^ uVar8;
    uVar8 = (uVar8 >> 2) + 0x9e3779b9 + (uVar8 << 6 | (uint)(uVar15 & 0xff)) ^ uVar8;
    if ((longlong)(int)param_1[7] != 0) {
      lVar12 = 0;
      do {
        uVar8 = *(int *)(param_1[6] + (uVar15 & 0xff) * 4 + 0x11c + lVar12) +
                (uVar8 >> 2) + uVar8 * 0x40 + 0x9e3779b9 ^ uVar8;
        lVar12 = lVar12 + 0x160;
      } while ((longlong)(int)param_1[7] * 0x160 - lVar12 != 0);
    }
    lVar12 = *(longlong *)(param_1[5] + 0x40);
    if (((lVar12 != 0) || (lVar12 = FUN_14475ec7e(param_1[5]), lVar12 != 0)) &&
       (iVar9 = FUN_14490d72a(lVar12), iVar9 - 1U < 2)) {
      uVar14 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar12 = FUN_14011c706(uVar14);
      uVar8 = uVar8 ^ *(int *)(lVar12 + 0x228) + (uVar8 >> 2) + uVar8 * 0x40 + 0x9e3779b9;
    }
    if (uVar8 == 0xffffffff) goto LAB_1437b6d3c;
    uVar8 = ~uVar8;
    iVar9 = 0;
    if (*(uint *)(param_1 + 0x5c) == uVar8 && !(bool)(bVar18 ^ 1U)) {
      iVar9 = (int)param_1[0x60] + 1;
    }
    *(int *)(param_1 + 0x60) = iVar9;
    if ((*(uint *)(param_1 + 0x5c) == uVar8) && ((bool)(bVar18 ^ 1U) || 1 < iVar9))
    goto LAB_1437b6dae;
  }
  plVar13 = local_2f8;
  *(uint *)(param_1 + 0x5c) = uVar8;
  if (bVar18) {
    *(undefined4 *)((longlong)param_1 + 0x2ec) = 1;
  }
  else {
    FUN_1437b6e7a(local_2f8);
    FUN_1406cbb9a(local_2e8,param_1,param_1 + 6);
    FUN_1437b6f00(local_2e8,plVar13);
    if (local_50 == '\x01') {
      FUN_1414a4ff0(local_240);
    }
    FUN_1437b84dc(param_1,local_2f8);
  }
LAB_1437b6dae:
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437b6e7a FUN_1437b6e7a body=134 status=ok
// SIG undefined FUN_1437b6e7a(void)

void FUN_1437b6e7a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_147dd7d7c(param_1);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_147dd7d7c(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_147dd7d7c(param_1 + 0x20);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_147dd7d7c(param_1 + 0x30);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1437b6f00 FUN_1437b6f00 body=5594 status=ok
// SIG undefined FUN_1437b6f00(void)

void FUN_1437b6f00(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 **ppuVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  undefined1 auStack_148 [40];
  uint *local_120;
  undefined8 *local_118;
  uint *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 **local_d8;
  code *local_d0;
  undefined8 ***local_c8;
  code *local_c0;
  undefined8 **local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  uint local_70;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined1 *)((longlong)param_2 + 0x41) = 0;
  local_a0 = *(undefined4 *)(param_1 + 3);
  if (*(char *)(param_1 + 0x53) == '\0') {
    local_a8 = (undefined8 *)param_1[0x14];
  }
  else {
    local_a8 = param_1 + 0x15;
  }
  local_af = *(undefined1 *)((longlong)param_1 + 0x1c);
  local_b0 = 1;
  puVar26 = param_1;
  local_118 = param_1;
  local_108 = param_2;
  if (*(char *)(param_1 + 2) == '\x01') {
    if ((((*(char *)((longlong)param_1 + 0x11) != '\x01') ||
         (*(char *)((longlong)param_1 + 0x13) != '\0')) ||
        (cVar6 = FUN_1437b14e8(*param_1), cVar6 != '\0')) &&
       (plVar2 = (longlong *)param_1[1], plVar2 != (longlong *)0x0)) {
      local_b8 = &local_98;
      local_c0 = FUN_1437c143c;
      local_98 = param_1;
      (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1[0x10],&local_c0,&local_b0);
    }
    if (*(char *)((longlong)param_1 + 0x11) == '\x01') {
      cVar6 = *(char *)((longlong)param_1 + 0x14);
      *(undefined1 *)((longlong)param_2 + 0x41) = 1;
      uStack_90 = (longlong *)&local_b0;
      puVar26 = local_118;
      local_88 = param_1;
      if (*(char *)((longlong)param_1 + 0x13) == '\0') {
        local_98 = param_1;
        if ((longlong *)param_1[1] != (longlong *)0x0) {
          local_d8 = &local_98;
          local_c8 = &local_d8;
          local_d0 = FUN_1437c14aa;
          (**(code **)(*(longlong *)param_1[1] + 0x2a8))();
          puVar26 = local_118;
        }
      }
      else {
        local_98 = param_1;
        if (cVar6 == '\0') {
          lVar25 = local_118[0x10];
          iVar19 = *(int *)(lVar25 + 0x88);
          if (iVar19 == 0) {
            uVar21 = 1;
            iVar18 = 0;
            uVar27 = 0;
            iVar8 = 0;
          }
          else {
            puVar9 = *(uint **)(lVar25 + 0x80);
            if (*(uint **)(lVar25 + 0x80) == (uint *)0x0) {
              puVar9 = (uint *)(lVar25 + 0x70);
            }
            uVar12 = *puVar9;
            if (uVar12 == 0) {
              iVar8 = iVar19 + 0x1e;
              if (-1 < iVar19 + -1) {
                iVar8 = iVar19 + -1;
              }
              uVar27 = 0;
              uVar21 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar21 = uVar27;
              }
              iVar18 = 0;
              do {
                if (uVar21 == uVar27) goto LAB_1437b7210;
                iVar18 = iVar18 + 0x20;
                uVar12 = puVar9[uVar27 + 1];
                uVar27 = uVar27 + 1;
              } while (uVar12 == 0);
            }
            else {
              iVar18 = 0;
              uVar27 = 0;
            }
            uVar21 = (ulonglong)(-uVar12 & uVar12);
            uVar1 = uVar21 * 2 + 1;
            lVar23 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            iVar8 = (iVar18 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
            if (iVar19 <= iVar8) {
              iVar8 = iVar19;
            }
          }
          if (iVar8 != iVar19) {
            uVar12 = 0xffffffff;
            do {
              FUN_1437b88ee(&local_98,
                            *(undefined8 *)(*(longlong *)(lVar25 + 0x60) + (longlong)iVar8 * 0x10));
              uVar12 = ~(uint)uVar21 & uVar12;
              puVar9 = *(uint **)(lVar25 + 0x80);
              if (*(uint **)(lVar25 + 0x80) == (uint *)0x0) {
                puVar9 = (uint *)(lVar25 + 0x70);
              }
              iVar13 = *(int *)(lVar25 + 0x88);
              iVar8 = (int)uVar27;
              lVar23 = (longlong)iVar8;
              uVar22 = puVar9[lVar23] & uVar12;
              if (uVar22 == 0) {
                iVar16 = iVar13 + 0x1e;
                if (-1 < iVar13 + -1) {
                  iVar16 = iVar13 + -1;
                }
                iVar16 = iVar16 >> 5;
                iVar18 = iVar18 + 0x20;
                iVar17 = iVar16;
                if (iVar16 < iVar8) {
                  iVar17 = iVar8;
                }
                if (iVar8 < iVar16) {
                  lVar24 = 0;
                  do {
                    uVar22 = puVar9[lVar23 + lVar24 + 1];
                    if (uVar22 != 0) {
                      uVar27 = (ulonglong)(iVar8 + (int)lVar24 + 1);
                      uVar12 = 0xffffffff;
                      goto LAB_1437b71bc;
                    }
                    iVar18 = iVar18 + 0x20;
                    lVar24 = lVar24 + 1;
                  } while (iVar17 - lVar23 != lVar24);
                  uVar12 = 0xffffffff;
                  lVar23 = (longlong)iVar17;
                }
                uVar27 = lVar23 + 1U & 0xffffffff;
                iVar8 = iVar13;
              }
              else {
LAB_1437b71bc:
                uVar21 = (ulonglong)(-uVar22 & uVar22);
                uVar1 = uVar21 * 2 + 1;
                lVar23 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                  }
                }
                iVar8 = (iVar18 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                if (iVar13 <= iVar8) {
                  iVar8 = iVar13;
                }
              }
            } while (iVar8 != iVar19);
            lVar25 = local_118[0x10];
          }
LAB_1437b7210:
          iVar19 = *(int *)(lVar25 + 0x38);
          puVar26 = local_118;
          if (iVar19 == 0) {
            uVar21 = 1;
            uVar27 = 0;
            iVar18 = 0;
            iVar8 = 0;
          }
          else {
            puVar9 = *(uint **)(lVar25 + 0x30);
            if (*(uint **)(lVar25 + 0x30) == (uint *)0x0) {
              puVar9 = (uint *)(lVar25 + 0x20);
            }
            uVar12 = *puVar9;
            if (uVar12 == 0) {
              iVar8 = iVar19 + 0x1e;
              if (-1 < iVar19 + -1) {
                iVar8 = iVar19 + -1;
              }
              uVar27 = 0;
              uVar21 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar21 = uVar27;
              }
              iVar18 = 0;
              do {
                if (uVar21 == uVar27) goto LAB_1437b72a4;
                iVar18 = iVar18 + 0x20;
                uVar12 = puVar9[uVar27 + 1];
                uVar27 = uVar27 + 1;
              } while (uVar12 == 0);
            }
            else {
              uVar27 = 0;
              iVar18 = 0;
            }
            uVar21 = (ulonglong)(-uVar12 & uVar12);
            uVar1 = uVar21 * 2 + 1;
            lVar23 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            iVar8 = (iVar18 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
            if (iVar19 <= iVar8) {
              iVar8 = iVar19;
            }
          }
          if (iVar8 != iVar19) {
            uVar12 = 0xffffffff;
            do {
              FUN_1437b88ee(&local_98,
                            *(undefined8 *)(*(longlong *)(lVar25 + 0x10) + (longlong)iVar8 * 0x10));
              uVar12 = ~(uint)uVar21 & uVar12;
              puVar9 = *(uint **)(lVar25 + 0x30);
              if (*(uint **)(lVar25 + 0x30) == (uint *)0x0) {
                puVar9 = (uint *)(lVar25 + 0x20);
              }
              iVar13 = *(int *)(lVar25 + 0x38);
              iVar8 = (int)uVar27;
              lVar23 = (longlong)iVar8;
              uVar22 = puVar9[lVar23] & uVar12;
              if (uVar22 == 0) {
                iVar16 = iVar13 + 0x1e;
                if (-1 < iVar13 + -1) {
                  iVar16 = iVar13 + -1;
                }
                iVar16 = iVar16 >> 5;
                iVar18 = iVar18 + 0x20;
                iVar17 = iVar16;
                if (iVar16 < iVar8) {
                  iVar17 = iVar8;
                }
                if (iVar8 < iVar16) {
                  lVar24 = 0;
                  do {
                    uVar22 = puVar9[lVar23 + lVar24 + 1];
                    if (uVar22 != 0) {
                      uVar27 = (ulonglong)(iVar8 + (int)lVar24 + 1);
                      uVar12 = 0xffffffff;
                      goto LAB_1437b83a1;
                    }
                    iVar18 = iVar18 + 0x20;
                    lVar24 = lVar24 + 1;
                  } while (iVar17 - lVar23 != lVar24);
                  uVar12 = 0xffffffff;
                  lVar23 = (longlong)iVar17;
                }
                uVar27 = lVar23 + 1U & 0xffffffff;
                iVar8 = iVar13;
              }
              else {
LAB_1437b83a1:
                uVar21 = (ulonglong)(-uVar22 & uVar22);
                uVar1 = uVar21 * 2 + 1;
                lVar23 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                  }
                }
                iVar8 = (iVar18 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                if (iVar13 <= iVar8) {
                  iVar8 = iVar13;
                }
              }
              puVar26 = local_118;
            } while (iVar8 != iVar19);
          }
        }
      }
    }
  }
LAB_1437b72a4:
  local_f8 = FUN_14011c706(*puVar26);
  plVar2 = (longlong *)puVar26[0x13];
  if (((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) &&
     (plVar3 = (longlong *)puVar26[0x12], (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
    local_78 = (longlong *)0x0;
    local_70 = 0;
    local_98 = (undefined8 *)0x0;
    uStack_90 = (longlong *)0x0;
    uStack_6c = 0x80;
    iStack_68 = -1;
    iStack_64 = 0;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    uVar12 = (int)plVar2[1] - *(int *)((longlong)plVar2 + 0x34);
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar12);
    }
    FUN_14474875a(&local_98);
    iVar19 = (int)uStack_90;
    lVar25 = (longlong)(int)uStack_90;
    uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,(int)uStack_90 + uVar12);
    if ((uint)(uStack_90._4_4_ - iVar19) < uVar12) {
      FUN_1446efaca(&local_98);
    }
    if (iVar19 < (int)uVar12) {
      uVar21 = (ulonglong)uVar12;
      piVar14 = (int *)((longlong)local_98 + uVar21 * 0x10 + -0xc);
      do {
        iVar19 = (int)uVar21;
        if (iStack_64 != 0) {
          *(int *)(local_98 + (longlong)iStack_68 * 2) = iVar19 + -1;
        }
        piVar14[-1] = -1;
        iVar8 = -1;
        if (0 < iStack_64) {
          iVar8 = iStack_68;
        }
        uVar21 = uVar21 - 1;
        *piVar14 = iVar8;
        iStack_68 = iVar19 + -1;
        iStack_64 = iStack_64 + 1;
        piVar14 = piVar14 + -4;
      } while (lVar25 < (longlong)uVar21);
    }
    uVar22 = uVar12 + 0x1f >> 5;
    local_70 = uVar12;
    if (uStack_6c + 0x1f >> 5 < uVar22) {
      if (local_78 != (longlong *)0x0 || 0x80 < uVar12) {
        uVar20 = 0;
        if (0x80 < uVar12) {
          uVar20 = uVar22;
        }
        FUN_1446efa72(&local_78,0,uVar20,4);
      }
      uStack_6c = uVar12 + 0x1f & 0xffffffe0;
    }
    plVar15 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar15 = &local_88;
    }
    if (uVar12 < 0x101) {
      uVar22 = uVar22 + (uVar22 == 0);
    }
    memset(plVar15,0,(ulonglong)(uVar22 << 2));
    uVar22 = local_70 + 0x1f;
    if (-1 < (int)local_70) {
      uVar22 = local_70;
    }
    if ((int)local_70 % 0x20 != 0) {
      plVar15 = &local_88;
      if (local_78 != (longlong *)0x0) {
        plVar15 = local_78;
      }
      bVar11 = -(char)((int)local_70 % 0x20);
      *(uint *)((longlong)plVar15 + (longlong)((int)uVar22 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar15 + (longlong)((int)uVar22 >> 5) * 4) << (bVar11 & 0x1f))
           >> (bVar11 & 0x1f);
    }
    iVar19 = 1;
    if (3 < uVar12) {
      uVar12 = (uVar12 | 1) + 0xe;
      iVar19 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      iVar19 = 1 << ((byte)iVar19 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar19)) {
      local_50 = iVar19;
      FUN_147dd5ed6();
    }
    iVar19 = (int)plVar2[5];
    if (iVar19 == 0) {
      uVar27 = 1;
      uVar21 = 0;
      iVar8 = 0;
      iVar18 = 0;
    }
    else {
      puVar9 = (uint *)plVar2[4];
      if ((uint *)plVar2[4] == (uint *)0x0) {
        puVar9 = (uint *)(plVar2 + 2);
      }
      uVar12 = *puVar9;
      if (uVar12 == 0) {
        iVar8 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar8 = iVar19 + -1;
        }
        uVar21 = 0;
        uVar27 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar27 = uVar21;
        }
        iVar18 = 0;
        do {
          if (uVar27 == uVar21) goto LAB_1437b7668;
          iVar18 = iVar18 + 0x20;
          uVar12 = puVar9[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar21 = 0;
        iVar18 = 0;
      }
      uVar27 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar27 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar8 = (iVar18 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar8) {
        iVar8 = iVar19;
      }
    }
    if (iVar8 < iVar19) {
      uVar12 = 0xffffffff;
      do {
        if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
          uVar1 = *(ulonglong *)(*plVar2 + (longlong)iVar8 * 0x10);
          uVar22 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
          plVar15 = (longlong *)plVar3[8];
          if ((longlong *)plVar3[8] == (longlong *)0x0) {
            plVar15 = plVar3 + 7;
          }
          iVar13 = *(int *)((longlong)plVar15 +
                           (ulonglong)((int)plVar3[9] - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4);
          if (iVar13 != -1) {
            do {
              if (*(ulonglong *)(*plVar3 + (longlong)iVar13 * 0x10) == uVar1) goto LAB_1437b75d7;
              iVar13 = *(int *)((longlong)iVar13 * 0x10 + *plVar3 + 8);
            } while (iVar13 != -1);
          }
        }
        FUN_1456bc98a(&local_98,&local_d8,*plVar2 + (longlong)iVar8 * 0x10,0);
        iVar19 = (int)plVar2[5];
LAB_1437b75d7:
        uVar12 = uVar12 & ~(uint)uVar27;
        puVar9 = (uint *)plVar2[4];
        if ((uint *)plVar2[4] == (uint *)0x0) {
          puVar9 = (uint *)(plVar2 + 2);
        }
        iVar8 = (int)uVar21;
        lVar25 = (longlong)iVar8;
        uVar22 = puVar9[lVar25] & uVar12;
        if (uVar22 == 0) {
          iVar13 = iVar19 + 0x1e;
          if (-1 < iVar19 + -1) {
            iVar13 = iVar19 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar16 = iVar13;
          if (iVar13 < iVar8) {
            iVar16 = iVar8;
          }
          if (iVar13 <= iVar8) break;
          lVar23 = 0;
          while( true ) {
            iVar18 = iVar18 + 0x20;
            uVar22 = puVar9[lVar25 + lVar23 + 1];
            if (uVar22 != 0) break;
            lVar23 = lVar23 + 1;
            if (iVar16 - lVar25 == lVar23) goto LAB_1437b7668;
          }
          uVar21 = (ulonglong)(iVar8 + (int)lVar23 + 1);
          uVar12 = 0xffffffff;
        }
        uVar27 = (ulonglong)(-uVar22 & uVar22);
        uVar1 = uVar27 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar8 = (iVar18 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar19);
    }
LAB_1437b7668:
    puVar26 = local_118;
    ppuVar4 = (undefined8 **)local_118[0x13];
    if (ppuVar4 == &local_98) {
      local_50 = 0;
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppuVar4 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      *ppuVar4 = local_98;
      local_98 = (undefined8 *)0x0;
      *(int *)(ppuVar4 + 1) = (int)uStack_90;
      *(int *)((longlong)ppuVar4 + 0xc) = uStack_90._4_4_;
      uStack_90 = (longlong *)0x0;
      if (local_78 == (longlong *)0x0) {
        *(undefined4 *)(ppuVar4 + 2) = (undefined4)local_88;
        *(undefined4 *)((longlong)ppuVar4 + 0x14) = local_88._4_4_;
        *(undefined4 *)(ppuVar4 + 3) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)ppuVar4 + 0x1c) = uStack_80._4_4_;
      }
      if (ppuVar4[4] != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      ppuVar4[4] = local_78;
      local_78 = (longlong *)0x0;
      *(uint *)(ppuVar4 + 5) = local_70;
      *(uint *)((longlong)ppuVar4 + 0x2c) = uStack_6c;
      local_70 = 0;
      uStack_6c = 0;
      *(int *)(ppuVar4 + 6) = iStack_68;
      *(int *)((longlong)ppuVar4 + 0x34) = iStack_64;
      iStack_68 = -1;
      iStack_64 = 0;
      if (local_58 == (undefined8 *)0x0) {
        *(undefined4 *)(ppuVar4 + 7) = local_60;
      }
      if (ppuVar4[8] != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      ppuVar4[8] = local_58;
      local_58 = (undefined8 *)0x0;
      *(int *)(ppuVar4 + 9) = local_50;
      local_50 = 0;
    }
    FUN_14005bbf2(&local_98);
  }
  bVar11 = *(byte *)(puVar26 + 2);
  if (bVar11 == 1) {
    plVar2 = (longlong *)puVar26[0x12];
    uVar12 = *(uint *)(plVar2 + 5);
    if (uVar12 == 0) {
      uVar21 = 1;
      uVar27 = 0;
      iVar19 = 0;
      uVar22 = 0;
    }
    else {
      puVar9 = (uint *)plVar2[4];
      if ((uint *)plVar2[4] == (uint *)0x0) {
        puVar9 = (uint *)(plVar2 + 2);
      }
      uVar22 = *puVar9;
      if (uVar22 == 0) {
        iVar19 = uVar12 + 0x1e;
        if (-1 < (int)(uVar12 - 1)) {
          iVar19 = uVar12 - 1;
        }
        uVar27 = 0;
        uVar21 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar21 = uVar27;
        }
        iVar19 = 0;
        do {
          if (uVar21 == uVar27) goto LAB_1437b7aad;
          iVar19 = iVar19 + 0x20;
          uVar22 = puVar9[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar22 == 0);
      }
      else {
        uVar27 = 0;
        iVar19 = 0;
      }
      uVar21 = (ulonglong)(-uVar22 & uVar22);
      uVar1 = uVar21 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      uVar22 = (iVar19 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if ((int)uVar12 <= (int)uVar22) {
        uVar22 = uVar12;
      }
    }
    if (uVar22 != uVar12) {
      local_110 = (uint *)(local_108 + 2);
      uVar20 = 0xffffffff;
      local_100 = (longlong *)(ulonglong)uVar12;
      do {
        uVar1 = *(ulonglong *)(*plVar2 + (longlong)(int)uVar22 * 0x10);
        cVar6 = FUN_144b2d9b0(puVar26[0x10] + 0x60,uVar1);
        if (cVar6 == '\0') {
          if ((((*(char *)((longlong)puVar26 + 0x11) != '\0') ||
               (*(char *)((longlong)puVar26 + 0x15) != '\x01')) ||
              (*(char *)(uVar1 + 0x5a) == '\x01')) &&
             ((*(char *)(uVar1 + 0x59) != '\x01' || (DAT_14c761ed0 == '\x01')))) {
            if (*(char *)((longlong)puVar26 + 0x16) == '\x01') {
              (**(code **)(**(longlong **)(uVar1 + 0xa8) + 0x2c0))();
            }
            if ((uVar1 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(uVar1);
            }
            iVar8 = (int)local_108[3];
            *(uint *)(local_108 + 3) = iVar8 + 1U;
            if (*(uint *)((longlong)local_108 + 0x1c) < iVar8 + 1U) {
              FUN_1417fc588(local_110,iVar8);
            }
            puVar26 = local_118;
            *(ulonglong *)(*(longlong *)local_110 + (longlong)iVar8 * 8) = uVar1;
            if ((uVar1 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(uVar1);
            }
          }
        }
        else if ((*(char *)((longlong)puVar26 + 0x16) == '\x01') &&
                (lVar25 = puVar26[0x10], *(int *)(lVar25 + 0xb8) != *(int *)(lVar25 + 0xe4))) {
          uVar12 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          lVar23 = lVar25 + 0xe8;
          if (*(longlong *)(lVar25 + 0xf0) != 0) {
            lVar23 = *(longlong *)(lVar25 + 0xf0);
          }
          iVar8 = *(int *)(lVar23 + (ulonglong)
                                    (*(int *)(lVar25 + 0xf8) - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
          if (iVar8 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)(lVar25 + 0xb0) + (longlong)iVar8 * 0x10) == uVar1) {
                (**(code **)(**(longlong **)(uVar1 + 0xa8) + 0x2c0))();
                break;
              }
              iVar8 = *(int *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar25 + 0xb0) + 8);
            } while (iVar8 != -1);
          }
        }
        uVar20 = uVar20 & ~(uint)uVar21;
        puVar9 = (uint *)plVar2[4];
        if ((uint *)plVar2[4] == (uint *)0x0) {
          puVar9 = (uint *)(plVar2 + 2);
        }
        uVar12 = *(uint *)(plVar2 + 5);
        iVar8 = (int)uVar27;
        lVar25 = (longlong)iVar8;
        uVar22 = puVar9[lVar25] & uVar20;
        if (uVar22 == 0) {
          iVar18 = uVar12 + 0x1e;
          if (-1 < (int)(uVar12 - 1)) {
            iVar18 = uVar12 - 1;
          }
          iVar18 = iVar18 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar13 = iVar18;
          if (iVar18 < iVar8) {
            iVar13 = iVar8;
          }
          if (iVar8 < iVar18) {
            lVar23 = 0;
            do {
              uVar22 = puVar9[lVar25 + lVar23 + 1];
              if (uVar22 != 0) {
                uVar27 = (ulonglong)(iVar8 + (int)lVar23 + 1);
                uVar20 = 0xffffffff;
                goto LAB_1437b7a55;
              }
              iVar19 = iVar19 + 0x20;
              lVar23 = lVar23 + 1;
            } while (iVar13 - lVar25 != lVar23);
            uVar20 = 0xffffffff;
            iVar8 = iVar13;
          }
          uVar27 = (ulonglong)(iVar8 + 1);
          puVar26 = local_118;
          uVar22 = uVar12;
        }
        else {
LAB_1437b7a55:
          uVar21 = (ulonglong)(-uVar22 & uVar22);
          uVar1 = uVar21 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          uVar22 = (iVar19 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if ((int)uVar12 <= (int)uVar22) {
            uVar22 = uVar12;
          }
        }
      } while (uVar22 != (uint)local_100);
      bVar11 = *(byte *)(puVar26 + 2);
    }
  }
LAB_1437b7aad:
  local_e8 = (longlong *)(local_f8 + 0x1d8);
  if ((bVar11 & 1) != 0) {
    plVar2 = (longlong *)puVar26[0x13];
    puVar9 = (uint *)(plVar2 + 2);
    uVar12 = *(uint *)(plVar2 + 5);
    if (uVar12 == 0) {
      uVar27 = 1;
      uVar21 = 0;
      iVar19 = 0;
      uVar22 = 0;
    }
    else {
      puVar10 = (uint *)plVar2[4];
      if ((uint *)plVar2[4] == (uint *)0x0) {
        puVar10 = puVar9;
      }
      uVar22 = *puVar10;
      if (uVar22 == 0) {
        iVar19 = uVar12 + 0x1e;
        if (-1 < (int)(uVar12 - 1)) {
          iVar19 = uVar12 - 1;
        }
        uVar21 = 0;
        uVar27 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar27 = uVar21;
        }
        iVar19 = 0;
        do {
          if (uVar27 == uVar21) goto LAB_1437b7b56;
          iVar19 = iVar19 + 0x20;
          uVar22 = puVar10[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar22 == 0);
      }
      else {
        uVar21 = 0;
        iVar19 = 0;
      }
      uVar27 = (ulonglong)(-uVar22 & uVar22);
      uVar1 = uVar27 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      uVar22 = (iVar19 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if ((int)uVar12 <= (int)uVar22) {
        uVar22 = uVar12;
      }
    }
    if (uVar22 != uVar12) {
      local_e0 = local_f8 + 0x210;
      local_f0 = local_108 + 4;
      uVar20 = 0xffffffff;
      local_120 = puVar9;
      local_110 = (uint *)(ulonglong)uVar12;
LAB_1437b7dda:
      local_100 = (longlong *)CONCAT44(local_100._4_4_,iVar19);
      plVar3 = *(longlong **)(*plVar2 + (longlong)(int)uVar22 * 0x10);
      lVar25 = puVar26[0x10];
      if (plVar3 != (longlong *)0x0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(plVar3);
        puVar9 = local_120;
      }
      if ((plVar3 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(plVar3);
        puVar9 = local_120;
      }
      if (*(int *)(lVar25 + 0x18) != *(int *)(lVar25 + 0x44)) {
        uVar12 = ((uint)((ulonglong)plVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar3 >> 4)) *
                 -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        lVar23 = lVar25 + 0x48;
        if (*(longlong *)(lVar25 + 0x50) != 0) {
          lVar23 = *(longlong *)(lVar25 + 0x50);
        }
        bVar11 = DAT_14c950c29;
        for (iVar19 = *(int *)(lVar23 + (ulonglong)
                                        (*(int *)(lVar25 + 0x58) - 1U & (uVar12 >> 0x10 ^ uVar12)) *
                                        4); iVar19 != -1;
            iVar19 = *(int *)(*(longlong *)(lVar25 + 0x10) + 8 + (longlong)iVar19 * 0x10)) {
          if ((plVar3 != (longlong *)0x0) && ((bVar11 & 1) != 0)) {
            FUN_1456cec3c(plVar3);
            puVar9 = local_120;
            bVar11 = DAT_14c950c29;
          }
          plVar15 = *(longlong **)(*(longlong *)(lVar25 + 0x10) + (longlong)iVar19 * 0x10);
          if (((bVar11 & 1) != 0) && (plVar15 != (longlong *)0x0)) {
            FUN_1456cec3c(plVar15);
            puVar9 = local_120;
            bVar11 = DAT_14c950c29;
          }
          if ((plVar3 != (longlong *)0x0) && ((bVar11 & 1) != 0)) {
            FUN_1456cec3c(plVar3);
            puVar9 = local_120;
            bVar11 = DAT_14c950c29;
          }
          puVar26 = local_118;
          if (plVar15 == plVar3) {
            if ((*(char *)((longlong)local_118 + 0x16) == '\x01') &&
               (lVar25 = (**(code **)(*plVar3 + 0x2c8))(plVar3), puVar9 = local_120, lVar25 == 0)) {
              (**(code **)(*(longlong *)plVar3[0x15] + 0x2c0))();
              puVar9 = local_120;
            }
            goto LAB_1437b7f33;
          }
        }
      }
      puVar26 = local_118;
      if ((((*(char *)((longlong)local_118 + 0x11) != '\0') ||
           (*(char *)((longlong)local_118 + 0x15) != '\x01')) ||
          (*(char *)((longlong)plVar3 + 0x5a) == '\x01')) &&
         ((*(char *)((longlong)plVar3 + 0x59) != '\x01' || (DAT_14c761ed0 == '\x01')))) {
        if ((*(char *)((longlong)local_118 + 0x11) != '\0') &&
           (cVar6 = FUN_144b2d9b0(local_118[0x10] + 0x60,plVar3), puVar9 = local_120, cVar6 != '\0')
           ) {
          cVar6 = (**(code **)(*plVar3 + 0x328))(plVar3);
          puVar9 = local_120;
          if ((cVar6 != '\0') &&
             (lVar25 = (**(code **)(*plVar3 + 0x2c8))(plVar3), puVar9 = local_120, lVar25 != 0)) {
LAB_1437b813c:
            lVar23 = lVar25;
            lVar25 = lVar23;
            if (*(longlong *)(lVar23 + 0x20) != 0) goto code_r0x0001437b814b;
            goto LAB_1437b8166;
          }
          goto LAB_1437b81ff;
        }
        if (*(char *)((longlong)puVar26 + 0x16) == '\x01') {
          (**(code **)(*(longlong *)plVar3[0x15] + 0x2c0))();
          puVar9 = local_120;
        }
        if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(plVar3);
          puVar9 = local_120;
        }
        plVar15 = local_108;
        iVar19 = (int)local_108[1];
        *(uint *)(local_108 + 1) = iVar19 + 1U;
        if (*(uint *)((longlong)local_108 + 0xc) < iVar19 + 1U) {
          FUN_1417fc588(local_108,iVar19);
          puVar9 = local_120;
        }
        lVar25 = *plVar15;
        goto LAB_1437b823d;
      }
      goto LAB_1437b7f33;
    }
  }
LAB_1437b7b56:
  uStack_90 = local_108;
  uStack_80 = local_108;
  local_78 = local_e8;
  local_98 = puVar26;
  local_88 = puVar26;
  FUN_1437b8b58(&local_98,puVar26[0x10] + 0x60);
  FUN_1437b8b58(&local_98,puVar26[0x10] + 0x10);
  plVar2 = (longlong *)puVar26[1];
  if (plVar2 == (longlong *)0x0) goto LAB_1437b82b2;
  plVar3 = (longlong *)puVar26[0x12];
  if ((int)plVar3[1] == *(int *)((longlong)plVar3 + 0x34)) {
LAB_1437b82a3:
    bVar11 = 0;
  }
  else {
    lVar25 = (**(code **)(*plVar2 + 0x180))();
    uVar21 = 0;
    if ((*(byte *)(lVar25 + 0x155) & 2) == 0) goto LAB_1437b82a3;
    (**(code **)(*plVar2 + 0x180))();
    puVar9 = (uint *)(plVar3 + 2);
    iVar19 = (int)plVar3[5];
    local_100 = plVar2;
    if (iVar19 == 0) {
      uVar27 = 1;
      iVar8 = 0;
      iVar18 = 0;
    }
    else {
      puVar10 = (uint *)plVar3[4];
      if ((uint *)plVar3[4] == (uint *)0x0) {
        puVar10 = puVar9;
      }
      uVar12 = *puVar10;
      if (uVar12 == 0) {
        iVar8 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar8 = iVar19 + -1;
        }
        uVar21 = 0;
        uVar27 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar27 = uVar21;
        }
        iVar18 = 0;
        do {
          if (uVar27 == uVar21) goto LAB_1437b82a3;
          iVar18 = iVar18 + 0x20;
          uVar12 = puVar10[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar21 = 0;
        iVar18 = 0;
      }
      uVar27 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar27 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar8 = (iVar18 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar8) {
        iVar8 = iVar19;
      }
    }
    if (iVar8 == iVar19) goto LAB_1437b82a3;
    uVar12 = 0xffffffff;
    bVar11 = 0;
    do {
      plVar2 = *(longlong **)(*plVar3 + (longlong)iVar8 * 0x10);
      bVar5 = bVar11;
      if ((((*(char *)((longlong)plVar2 + 0x5a) == '\x01') &&
           (local_110 = puVar9, cVar6 = (**(code **)(*plVar2 + 0x2e0))(plVar2), puVar9 = local_110,
           cVar6 == '\0')) &&
          (iVar8 = (**(code **)(*plVar2 + 0x2f8))(plVar2), puVar9 = local_110, iVar8 != 5)) &&
         ((bVar7 = (**(code **)(*local_100 + 0x308))(local_100,plVar2), puVar9 = local_110,
          bVar11 < bVar7 && (bVar11 = 2, bVar5 = bVar7, bVar7 == 2)))) break;
      bVar11 = bVar5;
      uVar12 = uVar12 & ~(uint)uVar27;
      puVar10 = (uint *)plVar3[4];
      if ((uint *)plVar3[4] == (uint *)0x0) {
        puVar10 = puVar9;
      }
      iVar13 = (int)plVar3[5];
      iVar8 = (int)uVar21;
      lVar25 = (longlong)iVar8;
      uVar22 = puVar10[lVar25] & uVar12;
      if (uVar22 == 0) {
        iVar16 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar16 = iVar13 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar17 = iVar16;
        if (iVar16 < iVar8) {
          iVar17 = iVar8;
        }
        if (iVar8 < iVar16) {
          lVar23 = 0;
          do {
            uVar22 = puVar10[lVar25 + lVar23 + 1];
            if (uVar22 != 0) {
              uVar21 = (ulonglong)(iVar8 + (int)lVar23 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1437b7d0d;
            }
            iVar18 = iVar18 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar17 - lVar25 != lVar23);
          uVar12 = 0xffffffff;
          iVar8 = iVar17;
        }
        uVar21 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar13;
      }
      else {
LAB_1437b7d0d:
        uVar27 = (ulonglong)(-uVar22 & uVar22);
        uVar1 = uVar27 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar8 = (iVar18 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar8) {
          iVar8 = iVar13;
        }
      }
    } while (iVar8 != iVar19);
  }
  *(byte *)(local_108 + 8) = bVar11;
  puVar26 = local_118;
LAB_1437b82b2:
  FUN_144b2dcfe(puVar26[0x12]);
  FUN_144b2dcfe(puVar26[0x13]);
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001437b814b:
  lVar25 = *(longlong *)(lVar23 + 0x20);
  if ((*(uint *)(lVar23 + 8) >> 0x1c & 1) == 0) goto LAB_1437b813c;
  lVar25 = FUN_142840154(lVar23);
  puVar9 = local_120;
LAB_1437b8166:
  if (lVar25 == 0) {
    lVar25 = *(longlong *)(lVar23 + 0x20);
    goto LAB_1437b813c;
  }
  if (*(int *)(local_f8 + 0x1e0) != *(int *)(local_f8 + 0x20c)) {
    lVar25 = *(longlong *)(lVar25 + 0x18);
    uVar12 = (uint)((ulonglong)lVar25 >> 0x10);
    uVar22 = (uint)lVar25 & 0xffff;
    lVar23 = *(longlong *)(local_f8 + 0x218);
    if (*(longlong *)(local_f8 + 0x218) == 0) {
      lVar23 = local_e0;
    }
    iVar19 = *(int *)(lVar23 + (ulonglong)
                               (*(int *)(local_f8 + 0x220) - 1U &
                               (int)((ulonglong)lVar25 >> 0x20) + ((uint)lVar25 << 0x10 | uVar22) +
                               (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar22 >> 4)) * 4);
    if (iVar19 != -1) {
      do {
        if (*(longlong *)(*local_e8 + (longlong)iVar19 * 0x10) == lVar25) {
          *(undefined1 *)((longlong)local_108 + 0x41) = 0;
          puVar26 = local_118;
          goto LAB_1437b7f33;
        }
        iVar19 = *(int *)((longlong)iVar19 * 0x10 + *local_e8 + 8);
      } while (iVar19 != -1);
    }
  }
LAB_1437b81ff:
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar3);
    puVar9 = local_120;
  }
  iVar19 = (int)local_108[5];
  *(uint *)(local_108 + 5) = iVar19 + 1U;
  if (*(uint *)((longlong)local_108 + 0x2c) < iVar19 + 1U) {
    FUN_1417fc588(local_f0,iVar19);
    puVar9 = local_120;
  }
  lVar25 = *local_f0;
LAB_1437b823d:
  puVar26 = local_118;
  *(longlong **)(lVar25 + (longlong)iVar19 * 8) = plVar3;
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar3);
    puVar9 = local_120;
  }
LAB_1437b7f33:
  uVar20 = uVar20 & ~(uint)uVar27;
  puVar10 = (uint *)plVar2[4];
  if ((uint *)plVar2[4] == (uint *)0x0) {
    puVar10 = puVar9;
  }
  uVar12 = *(uint *)(plVar2 + 5);
  iVar8 = (int)uVar21;
  lVar25 = (longlong)iVar8;
  uVar22 = puVar10[lVar25] & uVar20;
  iVar19 = (int)local_100;
  if (uVar22 == 0) {
    iVar18 = uVar12 + 0x1e;
    if (-1 < (int)(uVar12 - 1)) {
      iVar18 = uVar12 - 1;
    }
    iVar18 = iVar18 >> 5;
    iVar19 = (int)local_100 + 0x20;
    iVar13 = iVar18;
    if (iVar18 < iVar8) {
      iVar13 = iVar8;
    }
    if (iVar8 < iVar18) {
      lVar23 = 0;
      do {
        uVar22 = puVar10[lVar25 + lVar23 + 1];
        if (uVar22 != 0) {
          uVar21 = (ulonglong)(iVar8 + (int)lVar23 + 1);
          uVar20 = 0xffffffff;
          goto LAB_1437b7fbb;
        }
        iVar19 = iVar19 + 0x20;
        lVar23 = lVar23 + 1;
      } while (iVar13 - lVar25 != lVar23);
      uVar20 = 0xffffffff;
      iVar8 = iVar13;
    }
    uVar21 = (ulonglong)(iVar8 + 1);
    puVar9 = local_120;
    puVar26 = local_118;
    uVar22 = uVar12;
  }
  else {
LAB_1437b7fbb:
    uVar27 = (ulonglong)(-uVar22 & uVar22);
    uVar1 = uVar27 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar22 = (iVar19 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    if ((int)uVar12 <= (int)uVar22) {
      uVar22 = uVar12;
    }
  }
  if (uVar22 == (uint)local_110) goto LAB_1437b7b56;
  goto LAB_1437b7dda;
}



// FUNCTION 1437b84dc FUN_1437b84dc body=1040 status=ok
// SIG undefined FUN_1437b84dc(void)

void FUN_1437b84dc(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  char cVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 0x38) != 0) {
    (**(code **)(*param_1 + 0x330))(param_1,param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x38) = 0;
    if (*(int *)(param_2 + 0x3c) < 0) {
      FUN_147dd7d7c(param_2 + 0x30);
    }
  }
  lVar6 = *(longlong *)(param_1[5] + 0x40);
  if (((lVar6 != 0) || (lVar6 = FUN_14475ec7e(param_1[5]), lVar6 != 0)) &&
     (iVar4 = FUN_14490d72a(lVar6), iVar4 - 1U < 2)) {
    iVar4 = *(int *)(param_2 + 0x28);
    if ((longlong)iVar4 != 0) {
      lVar6 = *(longlong *)(param_2 + 0x20);
      lVar19 = 0;
      do {
        local_4c = 0;
        (**(code **)(*param_1 + 800))(param_1,*(undefined8 *)(lVar6 + lVar19),&local_4c);
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar4 * 8 != lVar19);
      *(undefined4 *)(param_2 + 0x28) = 0;
      if (*(int *)(param_2 + 0x2c) < 0) {
        FUN_147dd7d7c((longlong *)(param_2 + 0x20));
      }
    }
    if (*(char *)(param_2 + 0x41) == '\x01') {
      uVar5 = FUN_1437a9338(param_1[5]);
      *(undefined4 *)(param_1 + 0x5b) = uVar5;
      lVar6 = *(longlong *)(param_1[5] + 0x40);
      if (lVar6 == 0) {
        lVar6 = FUN_14475ec7e(param_1[5]);
        uVar18 = 0x80000000;
        if (lVar6 != 0) goto LAB_1437b85c3;
      }
      else {
LAB_1437b85c3:
        iVar4 = FUN_14490d72a(lVar6);
        uVar18 = 0x80000000;
        if (iVar4 - 1U < 2) {
          bVar2 = FUN_1400900b4(param_1[5]);
          uVar18 = (uint)bVar2;
        }
      }
      *(uint *)((longlong)param_1 + 0x2dc) = uVar18;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  if (((param_1[5] != 0) && (*(char *)(param_1[5] + 0x38) == '\x01')) &&
     (iVar4 = (int)param_1[0x70], iVar4 != 0)) {
    puVar7 = (uint *)param_1[0x6f];
    puVar12 = puVar7;
    if (puVar7 == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 0x6d);
    }
    uVar18 = *puVar12;
    if (uVar18 == 0) {
      iVar16 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar16 = iVar4 + -1;
      }
      uVar20 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar20;
      }
      iVar16 = 0;
      do {
        if (uVar14 == uVar20) goto LAB_1437b860f;
        iVar16 = iVar16 + 0x20;
        uVar18 = puVar12[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar20 = 0;
      iVar16 = 0;
    }
    uVar17 = (ulonglong)(-uVar18 & uVar18);
    uVar14 = uVar17 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar8 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar8 < iVar4) {
      uVar18 = 0xffffffff;
      iVar13 = iVar4;
      do {
        lVar6 = *(longlong *)(param_1[0x6b] + (longlong)iVar8 * 0x10);
        if (((lVar6 != 0) && ((DAT_14cb11bdc != 0 || (*(char *)(lVar6 + 0xb8) == '\x01')))) &&
           (*(char *)(lVar6 + 0x59) == '\0')) {
          FUN_147dcc93c();
          puVar7 = (uint *)param_1[0x6f];
          iVar13 = (int)param_1[0x70];
        }
        uVar18 = uVar18 & ~(uint)uVar17;
        puVar12 = puVar7;
        if (puVar7 == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x6d);
        }
        iVar8 = (int)uVar20;
        lVar6 = (longlong)iVar8;
        uVar9 = puVar12[lVar6] & uVar18;
        if (uVar9 == 0) {
          iVar10 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar10 = iVar13 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar8) {
            iVar11 = iVar8;
          }
          if (iVar8 < iVar10) {
            lVar19 = 0;
            do {
              uVar9 = puVar12[lVar6 + lVar19 + 1];
              if (uVar9 != 0) {
                uVar20 = (ulonglong)(iVar8 + (int)lVar19 + 1);
                uVar18 = 0xffffffff;
                goto LAB_1437b8859;
              }
              iVar16 = iVar16 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar11 - lVar6 != lVar19);
            uVar18 = 0xffffffff;
            iVar8 = iVar11;
          }
          uVar20 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar13;
        }
        else {
LAB_1437b8859:
          uVar17 = (ulonglong)(-uVar9 & uVar9);
          uVar14 = uVar17 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar8 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar13 <= iVar8) {
            iVar8 = iVar13;
          }
        }
      } while (iVar8 != iVar4);
    }
  }
LAB_1437b860f:
  cVar1 = *(char *)(param_2 + 0x40);
  lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  cVar15 = (char)param_1[0x26];
  if (cVar15 == '\x02') {
    lVar19 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(int *)(lVar19 + 0x15c) != 0) goto LAB_1437b86c8;
    cVar15 = (char)param_1[0x26];
  }
  if ((*(longlong *)(param_1[5] + 0x30) != 0) && (bVar21 = cVar15 != cVar1, cVar15 = cVar1, bVar21))
  {
    *(char *)(param_1 + 0x26) = cVar1;
  }
  if (cVar15 == '\x02') {
    lVar19 = *(longlong *)(param_1[5] + 0x40);
    if ((lVar19 == 0) && (lVar19 = FUN_14475ec7e(), lVar19 == 0)) {
      bVar2 = 0;
      bVar21 = false;
    }
    else {
      iVar4 = FUN_14490d72a(lVar19);
      bVar21 = iVar4 - 1U < 2;
      bVar2 = 1;
    }
    bVar3 = FUN_1400900b4(param_1[5]);
    if ((((byte)(bVar2 & bVar21 ^ 1 | bVar3) == 1) && (DAT_14c761efc != 0)) &&
       (lVar19 = (**(code **)(*param_1 + 0x180))(param_1), *(int *)(lVar19 + 0x15c) == 0)) {
      *(byte *)(lVar6 + 0x154) = *(byte *)(lVar6 + 0x154) | 0x40;
      *(undefined1 *)((longlong)param_1 + 0x2c9) = 1;
    }
  }
LAB_1437b86c8:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437b88ee FUN_1437b88ee body=617 status=ok
// SIG undefined FUN_1437b88ee(void)

void FUN_1437b88ee(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if (*(int *)(param_2 + 0x50) == 0) {
LAB_1437b8ac4:
    *(undefined1 *)(param_2 + 0x9c) = 2;
LAB_1437b8acb:
    uVar8 = *(undefined8 *)(*param_1 + 0x90);
  }
  else {
    cVar4 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x48))
                      (param_2 + 0x28,*(undefined8 *)(param_1[2] + 0x88));
    if (cVar4 != '\0') {
      cVar4 = FUN_144b2d9b0(*(longlong *)(*param_1 + 0x80) + 0x60,param_2);
      if (cVar4 == '\0') {
        if (*(int *)(param_2 + 0x50) == 0) {
          bVar9 = false;
        }
        else {
          iVar1 = *(int *)(*(longlong *)(param_1[1] + 8) + 0x140);
          if (*(int *)(param_2 + 0xa0) == iVar1) {
            cVar4 = *(char *)(param_2 + 0x9c);
          }
          else {
            cVar4 = FUN_147dcc38e(param_1[1],param_2 + 0x40);
            *(char *)(param_2 + 0x9c) = cVar4;
            *(int *)(param_2 + 0xa0) = iVar1;
          }
          bVar9 = cVar4 == '\x02';
        }
        lVar2 = *(longlong *)(*param_1 + 0x80);
        if (param_2 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_2);
        }
        if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(param_2);
        }
        if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
          uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          lVar7 = lVar2 + 0x48;
          if (*(longlong *)(lVar2 + 0x50) != 0) {
            lVar7 = *(longlong *)(lVar2 + 0x50);
          }
          bVar5 = DAT_14c950c29;
          for (iVar1 = *(int *)(lVar7 + (ulonglong)
                                        (*(int *)(lVar2 + 0x58) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4)
              ; iVar1 != -1;
              iVar1 = *(int *)(*(longlong *)(lVar2 + 0x10) + 8 + (longlong)iVar1 * 0x10)) {
            if ((param_2 != 0) && ((bVar5 & 1) != 0)) {
              FUN_1456cec3c(param_2);
              bVar5 = DAT_14c950c29;
            }
            uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar1 * 0x10);
            if (((bVar5 & 1) != 0) && (uVar3 != 0)) {
              FUN_1456cec3c(uVar3);
              bVar5 = DAT_14c950c29;
            }
            if ((param_2 != 0) && ((bVar5 & 1) != 0)) {
              FUN_1456cec3c(param_2);
              bVar5 = DAT_14c950c29;
            }
            if (uVar3 == param_2) {
              if (!bVar9) goto LAB_1437b8b2c;
              break;
            }
          }
        }
        goto LAB_1437b8aa0;
      }
      goto LAB_1437b8acb;
    }
LAB_1437b8aa0:
    if (*(int *)(param_2 + 0x50) == 0) goto LAB_1437b8ac4;
    iVar1 = *(int *)(*(longlong *)(param_1[1] + 8) + 0x140);
    if (*(int *)(param_2 + 0xa0) == iVar1) {
      cVar4 = *(char *)(param_2 + 0x9c);
    }
    else {
      cVar4 = FUN_147dcc38e(param_1[1],param_2 + 0x40);
      *(char *)(param_2 + 0x9c) = cVar4;
      *(int *)(param_2 + 0xa0) = iVar1;
    }
    if (cVar4 == '\x02') goto LAB_1437b8acb;
    if (cVar4 != '\x01') goto LAB_1437b8ae7;
LAB_1437b8b2c:
    uVar8 = *(undefined8 *)(*param_1 + 0x98);
  }
  FUN_1456bc98a(uVar8,local_44,&local_40,0);
LAB_1437b8ae7:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437b8b58 FUN_1437b8b58 body=1114 status=ok
// SIG undefined FUN_1437b8b58(void)

void FUN_1437b8b58(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar18 = 1;
    uVar17 = 0;
    iVar19 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_2 + 2);
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar18 = uVar17;
      }
      iVar19 = 0;
      do {
        if (uVar18 == uVar17) {
          return;
        }
        iVar19 = iVar19 + 0x20;
        uVar15 = puVar8[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar17 = 0;
      iVar19 = 0;
    }
    uVar18 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar18 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (iVar19 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 == iVar2) {
    return;
  }
  uVar15 = 0xffffffff;
LAB_1437b8c22:
  plVar4 = *(longlong **)(*param_2 + (longlong)iVar7 * 0x10);
  lVar9 = *param_1;
  plVar5 = *(longlong **)(lVar9 + 0x90);
  if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
    uVar13 = ((uint)((ulonglong)plVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar4 >> 4)) *
             -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    plVar12 = plVar5 + 7;
    if ((longlong *)plVar5[8] != (longlong *)0x0) {
      plVar12 = (longlong *)plVar5[8];
    }
    iVar7 = *(int *)((longlong)plVar12 +
                    (ulonglong)((int)plVar5[9] - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong **)(*plVar5 + (longlong)iVar7 * 0x10) == plVar4) goto LAB_1437b8e9d;
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *plVar5 + 8);
      } while (iVar7 != -1);
    }
  }
  plVar5 = *(longlong **)(lVar9 + 0x98);
  if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
    uVar13 = ((uint)((ulonglong)plVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar4 >> 4)) *
             -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    plVar12 = plVar5 + 7;
    if ((longlong *)plVar5[8] != (longlong *)0x0) {
      plVar12 = (longlong *)plVar5[8];
    }
    iVar7 = *(int *)((longlong)plVar12 +
                    (ulonglong)((int)plVar5[9] - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong **)(*plVar5 + (longlong)iVar7 * 0x10) == plVar4) goto LAB_1437b8e9d;
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *plVar5 + 8);
      } while (iVar7 != -1);
    }
  }
  if ((((*(char *)(lVar9 + 0x10) == '\x01') && (*(char *)(lVar9 + 0x11) == '\x01')) &&
      (cVar6 = (**(code **)(*plVar4 + 0x328))(plVar4), cVar6 != '\0')) &&
     (lVar9 = (**(code **)(*plVar4 + 0x2c8))(plVar4), lVar9 != 0)) {
    plVar5 = (longlong *)param_1[4];
LAB_1437b8d91:
    lVar16 = lVar9;
    lVar9 = lVar16;
    if (*(longlong *)(lVar16 + 0x20) != 0) goto code_r0x0001437b8da0;
    goto LAB_1437b8dba;
  }
  goto LAB_1437b8e38;
code_r0x0001437b8da0:
  lVar9 = *(longlong *)(lVar16 + 0x20);
  if ((*(uint *)(lVar16 + 8) >> 0x1c & 1) == 0) goto LAB_1437b8d91;
  lVar9 = FUN_142840154(lVar16);
LAB_1437b8dba:
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(lVar16 + 0x20);
    goto LAB_1437b8d91;
  }
  if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
    lVar9 = *(longlong *)(lVar9 + 0x18);
    uVar13 = (uint)((ulonglong)lVar9 >> 0x10);
    uVar14 = (uint)lVar9 & 0xffff;
    plVar12 = plVar5 + 7;
    if ((longlong *)plVar5[8] != (longlong *)0x0) {
      plVar12 = (longlong *)plVar5[8];
    }
    iVar7 = *(int *)((longlong)plVar12 +
                    (ulonglong)
                    ((int)plVar5[9] - 1U &
                    (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar14) +
                    (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar14 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*plVar5 + (longlong)iVar7 * 0x10) == lVar9) {
          *(undefined1 *)(param_1[3] + 0x41) = 0;
          goto LAB_1437b8e9d;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *plVar5 + 8);
      } while (iVar7 != -1);
    }
  }
LAB_1437b8e38:
  lVar9 = param_1[1];
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar4);
  }
  iVar7 = *(int *)(lVar9 + 0x38);
  *(uint *)(lVar9 + 0x38) = iVar7 + 1U;
  if (*(uint *)(lVar9 + 0x3c) < iVar7 + 1U) {
    FUN_1417fc588((longlong *)(lVar9 + 0x30),iVar7);
  }
  *(longlong **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) = plVar4;
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar4);
  }
LAB_1437b8e9d:
  uVar15 = uVar15 & ~(uint)uVar18;
  puVar8 = (uint *)param_2[4];
  if ((uint *)param_2[4] == (uint *)0x0) {
    puVar8 = (uint *)(param_2 + 2);
  }
  iVar3 = (int)param_2[5];
  iVar7 = (int)uVar17;
  lVar9 = (longlong)iVar7;
  uVar13 = puVar8[lVar9] & uVar15;
  if (uVar13 == 0) {
    iVar10 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar10 = iVar3 + -1;
    }
    iVar10 = iVar10 >> 5;
    iVar19 = iVar19 + 0x20;
    iVar11 = iVar10;
    if (iVar10 < iVar7) {
      iVar11 = iVar7;
    }
    if (iVar7 < iVar10) {
      lVar16 = 0;
      do {
        uVar13 = puVar8[lVar9 + lVar16 + 1];
        if (uVar13 != 0) {
          uVar17 = (ulonglong)(iVar7 + (int)lVar16 + 1);
          uVar15 = 0xffffffff;
          goto LAB_1437b8f1a;
        }
        iVar19 = iVar19 + 0x20;
        lVar16 = lVar16 + 1;
      } while (iVar11 - lVar9 != lVar16);
      uVar15 = 0xffffffff;
      iVar7 = iVar11;
    }
    uVar17 = (ulonglong)(iVar7 + 1);
    iVar7 = iVar3;
  }
  else {
LAB_1437b8f1a:
    uVar18 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar18 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (iVar19 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 == iVar2) {
    return;
  }
  goto LAB_1437b8c22;
}



// FUNCTION 1437b8fb2 FUN_1437b8fb2 body=17 status=ok
// SIG undefined FUN_1437b8fb2(void)

void FUN_1437b8fb2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER LStack_38;
  undefined8 uStack_30;
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  if (lVar1 == 0) {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(lVar1 + 0xa0) & 1) == 0) {
    QueryPerformanceCounter(&LStack_28);
    uStack_20 = 0xffffffffffffffff;
    FUN_14002f804(lVar1,&LStack_28,0);
    if ((*(byte *)(lVar1 + 0xa0) & 1) == 0) {
      cVar2 = FUN_1427918bc(lVar1);
      if (cVar2 == '\0') {
        QueryPerformanceCounter(&LStack_38);
        uStack_30 = 0xffffffffffffffff;
        FUN_140056092(lVar1,&LStack_38);
      }
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437b8fc4 FUN_1437b8fc4 body=214 status=ok
// SIG undefined FUN_1437b8fc4(void)

void FUN_1437b8fc4(longlong param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144b2d9b0(param_1 + 0x90);
  if (cVar1 == '\0') {
    cVar1 = FUN_1406cc15a(*(undefined8 *)(param_1 + 0x28));
    if ((cVar1 == '\0') || (*param_3 < 1)) goto LAB_1437b903e;
    (**(code **)(*param_2 + 0x2a0))(param_2);
    cVar1 = (**(code **)(*param_2 + 0x2e0))(param_2);
    if (cVar1 == '\0') {
      *param_3 = *param_3 + -1;
    }
  }
  else {
    (**(code **)(*param_2 + 0x2c0))(param_2);
    FUN_14066209e(param_1 + 0x90,param_2);
  }
  local_30 = param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_1416b43c0(param_1 + 0x40,local_34,&local_30);
  *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + 1;
LAB_1437b903e:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437b909c FUN_1437b909c body=577 status=ok
// SIG undefined FUN_1437b909c(void)

void FUN_1437b909c(longlong param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined1 local_54 [4];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = FUN_1406cc15a(*(undefined8 *)(param_1 + 0x28));
  if (cVar3 != '\0') {
    if (param_2 != (longlong *)0x0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((param_2 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      uVar5 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      lVar6 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x80);
      }
      iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & (uVar5 >> 0x10 ^ uVar5))
                               * 4);
      if (iVar7 != -1) {
        plVar1 = (longlong *)(param_1 + 0x40);
        bVar4 = DAT_14c950c29;
        do {
          if ((param_2 != (longlong *)0x0) && ((bVar4 & 1) != 0)) {
            FUN_1456cec3c(param_2);
            bVar4 = DAT_14c950c29;
          }
          plVar2 = *(longlong **)(*plVar1 + (longlong)iVar7 * 0x10);
          if (((bVar4 & 1) != 0) && (plVar2 != (longlong *)0x0)) {
            FUN_1456cec3c(plVar2);
            bVar4 = DAT_14c950c29;
          }
          if ((param_2 != (longlong *)0x0) && ((bVar4 & 1) != 0)) {
            FUN_1456cec3c(param_2);
            bVar4 = DAT_14c950c29;
          }
          if (plVar2 == param_2) {
            local_60 = param_2;
            if ((param_2 != (longlong *)0x0) && ((bVar4 & 1) != 0)) {
              FUN_1456cec3c(param_2);
            }
            FUN_140662272(plVar1,&local_60);
            goto LAB_1437b91ee;
          }
          iVar7 = *(int *)(*plVar1 + 8 + (longlong)iVar7 * 0x10);
        } while (iVar7 != -1);
      }
    }
    if (0 < *param_3) {
      cVar3 = (**(code **)(*param_2 + 0x2e0))(param_2);
      if (cVar3 == '\0') {
        *param_3 = *param_3 + -1;
      }
LAB_1437b91ee:
      local_50 = param_2;
      local_48 = param_2;
      if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(param_2);
      }
      FUN_1416b43c0(param_1 + 0x90,local_54,&local_50);
      cVar3 = (**(code **)(*param_2 + 0x2e0))(param_2);
      if (cVar3 == '\0') {
        FUN_1456bc98a(param_1 + 0xe0,&local_50,&local_48,0);
      }
      (**(code **)(*param_2 + 0x2b8))(param_2);
      *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + 1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437b92de FUN_1437b92de body=200 status=ok
// SIG undefined FUN_1437b92de(void)

void FUN_1437b92de(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      cVar4 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
      if (cVar4 != '\0') {
        (**(code **)(*plVar2 + 0x2a8))(plVar2);
        FUN_14066209e(param_1 + 0x90,plVar2);
        local_48 = plVar2;
        if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar2);
        }
        FUN_140662272(param_1 + 0x40,&local_48);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437b93a8 FUN_1437b93a8 body=118 status=ok
// SIG undefined FUN_1437b93a8(void)

undefined1 FUN_1437b93a8(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1[5] + 0x40);
  if (((lVar3 != 0) || (lVar3 = FUN_14475ec7e(param_1[5]), lVar3 != 0)) &&
     (iVar2 = FUN_14490d72a(lVar3), iVar2 - 1U < 2)) {
    return 1;
  }
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  uVar1 = 1;
  if (((*(int *)(lVar3 + 0x15c) != 0) && ((char)param_1[0x26] != '\0')) &&
     (*(int *)((longlong)param_1 + 0x2cc) == *(int *)(lVar3 + 0x160))) {
    uVar1 = *(undefined1 *)(param_2 + 0x5a);
  }
  return uVar1;
}



// FUNCTION 1437b941e FUN_1437b941e body=55 status=ok
// SIG undefined FUN_1437b941e(void)

void FUN_1437b941e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11ff8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11ff8 = FUN_14171c317(FUN_146412c58,uVar1,L"EStreamingSourceTargetBehavior");
  }
  return;
}



// FUNCTION 1437b9455 FUN_1437b9455 body=55 status=ok
// SIG undefined FUN_1437b9455(void)

void FUN_1437b9455(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12010 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb12010 = FUN_14171c317(FUN_146412c87,uVar1,L"EStreamingSourceTargetState");
  }
  return;
}



// FUNCTION 1437b948c FUN_1437b948c body=55 status=ok
// SIG undefined FUN_1437b948c(void)

void FUN_1437b948c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12040 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb12040 = FUN_14171c317(FUN_146412d4c,uVar1,L"EStreamingSourcePriority");
  }
  return;
}



// FUNCTION 1437b94c3 FUN_1437b94c3 body=69 status=ok
// SIG undefined FUN_1437b94c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b94c3(void)

{
  _DAT_14cb12050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b9505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12058,1);
  return;
}



// FUNCTION 1437b9508 FUN_1437b9508 body=69 status=ok
// SIG undefined FUN_1437b9508(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b9508(void)

{
  _DAT_14cb12060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b954a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12068,1);
  return;
}



// FUNCTION 1437b954d FUN_1437b954d body=69 status=ok
// SIG undefined FUN_1437b954d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b954d(void)

{
  _DAT_14cb120a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b958f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb120a8,1);
  return;
}



// FUNCTION 1437b9592 FUN_1437b9592 body=69 status=ok
// SIG undefined FUN_1437b9592(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b9592(void)

{
  _DAT_14cb120b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b95d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb120b8,1);
  return;
}



// FUNCTION 1437b95d7 FUN_1437b95d7 body=69 status=ok
// SIG undefined FUN_1437b95d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b95d7(void)

{
  _DAT_14cb120c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b9619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb120c8,1);
  return;
}



// FUNCTION 1437b961c FUN_1437b961c body=69 status=ok
// SIG undefined FUN_1437b961c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b961c(void)

{
  _DAT_14cb120d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b965e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb120d8,1);
  return;
}



// FUNCTION 1437b9661 FUN_1437b9661 body=69 status=ok
// SIG undefined FUN_1437b9661(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b9661(void)

{
  _DAT_14cb120e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b96a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb120e8,1);
  return;
}



// FUNCTION 1437b96a6 FUN_1437b96a6 body=69 status=ok
// SIG undefined FUN_1437b96a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b96a6(void)

{
  _DAT_14cb120f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b96e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb120f8,1);
  return;
}



// FUNCTION 1437b96eb FUN_1437b96eb body=69 status=ok
// SIG undefined FUN_1437b96eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b96eb(void)

{
  _DAT_14cb12100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b972d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12108,1);
  return;
}



// FUNCTION 1437b9730 FUN_1437b9730 body=69 status=ok
// SIG undefined FUN_1437b9730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b9730(void)

{
  _DAT_14cb12110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b9772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12118,1);
  return;
}



// FUNCTION 1437b9775 FUN_1437b9775 body=69 status=ok
// SIG undefined FUN_1437b9775(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b9775(void)

{
  _DAT_14cb12120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b97b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12128,1);
  return;
}



// FUNCTION 1437b97ba FUN_1437b97ba body=69 status=ok
// SIG undefined FUN_1437b97ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b97ba(void)

{
  _DAT_14cb12130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b97fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12138,1);
  return;
}



// FUNCTION 1437b97ff FUN_1437b97ff body=69 status=ok
// SIG undefined FUN_1437b97ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b97ff(void)

{
  _DAT_14cb12140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b9841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12148,1);
  return;
}



// FUNCTION 1437b9844 FUN_1437b9844 body=69 status=ok
// SIG undefined FUN_1437b9844(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b9844(void)

{
  _DAT_14cb12150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b9886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12158,1);
  return;
}



// FUNCTION 1437b9889 FUN_1437b9889 body=69 status=ok
// SIG undefined FUN_1437b9889(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b9889(void)

{
  _DAT_14cb12160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b98cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12168,1);
  return;
}



// FUNCTION 1437b98ce FUN_1437b98ce body=69 status=ok
// SIG undefined FUN_1437b98ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b98ce(void)

{
  _DAT_14cb12170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b9910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12178,1);
  return;
}



// FUNCTION 1437b9913 FUN_1437b9913 body=69 status=ok
// SIG undefined FUN_1437b9913(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b9913(void)

{
  _DAT_14cb12180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b9955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12188,1);
  return;
}


