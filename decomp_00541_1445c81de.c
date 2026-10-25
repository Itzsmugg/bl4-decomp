// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1445c81de FUN_1445c81de body=1133 status=ok
// SIG undefined FUN_1445c81de(void)

void FUN_1445c81de(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *_Src;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar3,local_58 + 2);
            goto LAB_1445c8373;
          }
        }
        plVar9 = (longlong *)(lVar3 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar9 != local_58 + 2) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_58 + 2,plVar9,(int)plVar8[6]);
          }
          else {
            memcpy(local_58 + 2,plVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = (undefined4)plVar8[6];
        local_68 = 0;
        FUN_1400746b0(plVar8,local_58 + 2,lVar3,1);
      }
      else {
        (*pcVar2)(plVar8,local_58 + 2,lVar3);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445c8373:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_58 + 2);
      goto LAB_1445c8373;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_58 + 2);
      goto LAB_1445c8373;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_58 + 2);
      goto LAB_1445c8373;
    }
    local_58[2] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  plVar9 = local_58 + 2;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = plVar8;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar3,local_58);
            goto LAB_1445c8538;
          }
        }
        _Src = (longlong *)(lVar3 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != local_58) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_58,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(local_58,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = (undefined4)plVar8[6];
        local_68 = 0;
        FUN_1400746b0(plVar8,local_58,lVar3,1);
      }
      else {
        (*pcVar2)(plVar8,local_58,lVar3);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58[0] = *(longlong *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_58);
    }
  }
LAB_1445c8538:
  plVar8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar8 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445ed6e8(param_1,plVar9,plVar8);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c864c FUN_1445c864c body=47 status=ok
// SIG undefined FUN_1445c864c(void)

longlong FUN_1445c864c(void)

{
  if (DAT_14cc23dd0 == 0) {
    FUN_14000fc22(&DAT_14cc23dd0,&PTR_FUN_14be00198);
  }
  return DAT_14cc23dd0;
}



// FUNCTION 1445c867c FUN_1445c867c body=750 status=ok
// SIG undefined FUN_1445c867c(void)

void FUN_1445c867c(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_30;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar8,&local_30);
            goto LAB_1445c884e;
          }
        }
        _Src = (longlong *)(lVar8 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar8,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar8);
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
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_1445c884e:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar8 = local_30 + 0x28;
  if (local_30 == 0) {
    lVar8 = 0;
  }
  Discord_Client_InitWithOptions(param_1 + 0x28,lVar8);
  *(undefined4 *)(param_1 + 0x30) = 1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c8970 FUN_1445c8970 body=47 status=ok
// SIG undefined FUN_1445c8970(void)

longlong FUN_1445c8970(void)

{
  if (DAT_14cc23dd8 == 0) {
    FUN_14000fc22(&DAT_14cc23dd8,&PTR_FUN_14be00230);
  }
  return DAT_14cc23dd8;
}



// FUNCTION 1445c89a0 FUN_1445c89a0 body=41 status=ok
// SIG undefined FUN_1445c89a0(void)

void FUN_1445c89a0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_IsAuthenticated(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445c89c9 FUN_1445c89c9 body=47 status=ok
// SIG undefined FUN_1445c89c9(void)

longlong FUN_1445c89c9(void)

{
  if (DAT_14cc23de0 == 0) {
    FUN_14000fc22(&DAT_14cc23de0,&PTR_FUN_14be002d0);
  }
  return DAT_14cc23de0;
}



// FUNCTION 1445c89f8 FUN_1445c89f8 body=641 status=ok
// SIG undefined FUN_1445c89f8(void)

void FUN_1445c89f8(longlong param_1,longlong param_2)

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
            goto LAB_1445c8bad;
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
LAB_1445c8bad:
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
  Discord_Client_IsDiscordAppInstalled(param_1 + 0x28,FUN_1445f9e7c,&LAB_1445f382e,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c8c7a FUN_1445c8c7a body=47 status=ok
// SIG undefined FUN_1445c8c7a(void)

longlong FUN_1445c8c7a(void)

{
  if (DAT_14cc23de8 == 0) {
    FUN_14000fc22(&DAT_14cc23de8,&PTR_FUN_14be00430);
  }
  return DAT_14cc23de8;
}



// FUNCTION 1445c8caa FUN_1445c8caa body=1832 status=ok
// SIG undefined FUN_1445c8caa(void)

void FUN_1445c8caa(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
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
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_40);
            goto LAB_1445c8e7b;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_40) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_40,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_40,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar3[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_40,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_40,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar8;
        puVar8 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
    }
LAB_1445c8e7b:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
      goto LAB_1445c8e7b;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
      goto LAB_1445c8e7b;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_40);
      goto LAB_1445c8e7b;
    }
    local_40 = *(undefined8 *)(pbVar7 + 1);
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
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_1445c8ff1;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar3[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar8;
        puVar8 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
    }
LAB_1445c8ff1:
    pbVar7 = *(byte **)(param_2 + 0x20);
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
      goto LAB_1445c8ff1;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
      goto LAB_1445c8ff1;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_58);
      goto LAB_1445c8ff1;
    }
    local_58 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    puVar8 = (undefined8 *)0x0;
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
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
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_68);
            goto LAB_1445c91c4;
          }
        }
        puVar9 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &local_68) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_68,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_68,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar3[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_68,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_68,lVar4);
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
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
LAB_1445c91c4:
  puVar9 = &local_58;
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = puVar8;
  }
  puVar8 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = *puVar8;
  local_70 = puVar8[1];
  local_88 = *puVar9;
  local_80 = puVar9[1];
  FUN_1445f3742(param_1,local_40);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c93d3 FUN_1445c93d3 body=47 status=ok
// SIG undefined FUN_1445c93d3(void)

longlong FUN_1445c93d3(void)

{
  if (DAT_14cc23df0 == 0) {
    FUN_14000fc22(&DAT_14cc23df0,&PTR_FUN_14be00510);
  }
  return DAT_14cc23df0;
}



// FUNCTION 1445c9402 FUN_1445c9402 body=1292 status=ok
// SIG undefined FUN_1445c9402(void)

void FUN_1445c9402(longlong param_1,longlong param_2)

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
            goto LAB_1445c95b9;
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
LAB_1445c95b9:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445c95b9;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445c95b9;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445c95b9;
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
            goto LAB_1445c9769;
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
LAB_1445c9769:
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
  Discord_Client_LeaveLobby(param_1 + 0x28,uVar1,FUN_1445f9846,&LAB_1445f37de);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445c990f FUN_1445c990f body=47 status=ok
// SIG undefined FUN_1445c990f(void)

longlong FUN_1445c990f(void)

{
  if (DAT_14cc23df8 == 0) {
    FUN_14000fc22(&DAT_14cc23df8,&PTR_FUN_14be00640);
  }
  return DAT_14cc23df8;
}



// FUNCTION 1445c993e FUN_1445c993e body=1954 status=ok
// SIG undefined FUN_1445c993e(void)

void FUN_1445c993e(longlong param_1,longlong param_2)

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
            goto LAB_1445c9b18;
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
LAB_1445c9b18:
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
            goto LAB_1445c9cac;
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
LAB_1445c9cac:
    pbVar10 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_50);
      goto LAB_1445c9cac;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_50);
      goto LAB_1445c9cac;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_50);
      goto LAB_1445c9cac;
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
            goto LAB_1445c9e5c;
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
LAB_1445c9e5c:
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
  local_88 = &LAB_1445f37e8;
  Discord_Client_LinkChannelToLobby(param_1 + 0x28,uVar8,uVar1,FUN_1445f98f2);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ca0e1 FUN_1445ca0e1 body=47 status=ok
// SIG undefined FUN_1445ca0e1(void)

longlong FUN_1445ca0e1(void)

{
  if (DAT_14cc23e00 == 0) {
    FUN_14000fc22(&DAT_14cc23e00,&PTR_FUN_14be00750);
  }
  return DAT_14cc23e00;
}



// FUNCTION 1445ca110 FUN_1445ca110 body=1248 status=ok
// SIG undefined FUN_1445ca110(void)

void FUN_1445ca110(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  byte *pbVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
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
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,&local_30);
            goto LAB_1445ca2c2;
          }
        }
        puVar8 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_30,puVar8,(int)plVar7[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar7[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_30,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,&local_30,lVar3);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445ca2c2:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_30);
      goto LAB_1445ca2c2;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_30);
      goto LAB_1445ca2c2;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_30);
      goto LAB_1445ca2c2;
    }
    local_30 = *(undefined8 *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
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
            goto LAB_1445ca472;
          }
        }
        _Src = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (_Src != local_48) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_48,_Src,(int)plVar7[6]);
          }
          else {
            memcpy(local_48,_Src,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar7[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,local_48,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_48,lVar3);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
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
      FUN_14002ddda(uVar1,param_2,local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48[0] = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_48);
    }
  }
LAB_1445ca472:
  plVar7 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar7 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445f05de(param_1,local_30,plVar7);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ca5f1 FUN_1445ca5f1 body=47 status=ok
// SIG undefined FUN_1445ca5f1(void)

longlong FUN_1445ca5f1(void)

{
  if (DAT_14cc23e08 == 0) {
    FUN_14000fc22(&DAT_14cc23e08,&PTR_FUN_14be00800);
  }
  return DAT_14cc23e08;
}



// FUNCTION 1445ca620 FUN_1445ca620 body=641 status=ok
// SIG undefined FUN_1445ca620(void)

void FUN_1445ca620(longlong param_1,longlong param_2)

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
            goto LAB_1445ca7d5;
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
LAB_1445ca7d5:
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
  Discord_Client_OpenConnectedGamesSettingsInDiscord
            (param_1 + 0x28,FUN_1445f8a3c,&LAB_1445f2a5e,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ca8a2 FUN_1445ca8a2 body=47 status=ok
// SIG undefined FUN_1445ca8a2(void)

longlong FUN_1445ca8a2(void)

{
  if (DAT_14cc23e10 == 0) {
    FUN_14000fc22(&DAT_14cc23e10,&PTR_FUN_14be00930);
  }
  return DAT_14cc23e10;
}



// FUNCTION 1445ca8d2 FUN_1445ca8d2 body=1832 status=ok
// SIG undefined FUN_1445ca8d2(void)

void FUN_1445ca8d2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
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
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_40);
            goto LAB_1445caaa3;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_40) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_40,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_40,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar3[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_40,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_40,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar8;
        puVar8 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
    }
LAB_1445caaa3:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
      goto LAB_1445caaa3;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
      goto LAB_1445caaa3;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_40);
      goto LAB_1445caaa3;
    }
    local_40 = *(undefined8 *)(pbVar7 + 1);
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
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_1445cac19;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar3[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar8;
        puVar8 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
    }
LAB_1445cac19:
    pbVar7 = *(byte **)(param_2 + 0x20);
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
      goto LAB_1445cac19;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
      goto LAB_1445cac19;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_58);
      goto LAB_1445cac19;
    }
    local_58 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    puVar8 = (undefined8 *)0x0;
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
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
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_68);
            goto LAB_1445cadec;
          }
        }
        puVar9 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &local_68) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_68,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_68,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar3[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_68,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_68,lVar4);
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
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
LAB_1445cadec:
  puVar9 = &local_58;
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = puVar8;
  }
  puVar8 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = *puVar8;
  local_70 = puVar8[1];
  local_88 = *puVar9;
  local_80 = puVar9[1];
  FUN_1445f1ade(param_1,local_40);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cb000 FUN_1445cb000 body=47 status=ok
// SIG undefined FUN_1445cb000(void)

longlong FUN_1445cb000(void)

{
  if (DAT_14cc23e18 == 0) {
    FUN_14000fc22(&DAT_14cc23e18,&PTR_FUN_14be009d8);
  }
  return DAT_14cc23e18;
}



// FUNCTION 1445cb030 FUN_1445cb030 body=737 status=ok
// SIG undefined FUN_1445cb030(void)

void FUN_1445cb030(longlong param_1,longlong param_2)

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
            goto LAB_1445cb201;
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
LAB_1445cb201:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_ProvisionalUserMergeCompleted(param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cb312 FUN_1445cb312 body=47 status=ok
// SIG undefined FUN_1445cb312(void)

longlong FUN_1445cb312(void)

{
  if (DAT_14cc23e20 == 0) {
    FUN_14000fc22(&DAT_14cc23e20,&PTR_FUN_14be00af8);
  }
  return DAT_14cc23e20;
}



// FUNCTION 1445cb342 FUN_1445cb342 body=1785 status=ok
// SIG undefined FUN_1445cb342(void)

void FUN_1445cb342(undefined8 param_1,longlong param_2)

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
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[2] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = 0x108001;
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
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,local_48 + 2);
            goto LAB_1445cb4f9;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_48 + 2) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_48 + 2,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_48 + 2,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,local_48 + 2,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_48 + 2,lVar3);
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
LAB_1445cb4f9:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 2);
      goto LAB_1445cb4f9;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 2);
      goto LAB_1445cb4f9;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48 + 2);
      goto LAB_1445cb4f9;
    }
    local_48[2] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
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
            goto LAB_1445cb66e;
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
LAB_1445cb66e:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445cb66e;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445cb66e;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445cb66e;
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
            goto LAB_1445cb84b;
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
LAB_1445cb84b:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445f0866(param_1,local_48[2],plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cba3c FUN_1445cba3c body=47 status=ok
// SIG undefined FUN_1445cba3c(void)

longlong FUN_1445cba3c(void)

{
  if (DAT_14cc23e28 == 0) {
    FUN_14000fc22(&DAT_14cc23e28,&PTR_FUN_14be00ba8);
  }
  return DAT_14cc23e28;
}



// FUNCTION 1445cba6c FUN_1445cba6c body=641 status=ok
// SIG undefined FUN_1445cba6c(void)

void FUN_1445cba6c(longlong param_1,longlong param_2)

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
            goto LAB_1445cbc21;
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
LAB_1445cbc21:
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
  Discord_Client_RegisterAuthorizeRequestCallback
            (param_1 + 0x28,FUN_1445f6f38,&LAB_1445f0b22,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cbcf3 FUN_1445cbcf3 body=47 status=ok
// SIG undefined FUN_1445cbcf3(void)

longlong FUN_1445cbcf3(void)

{
  if (DAT_14cc23e30 == 0) {
    FUN_14000fc22(&DAT_14cc23e30,&PTR_FUN_14be00ce0);
  }
  return DAT_14cc23e30;
}



// FUNCTION 1445cbd22 FUN_1445cbd22 body=1263 status=ok
// SIG undefined FUN_1445cbd22(void)

void FUN_1445cbd22(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  char cVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[2] = 0;
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
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar9);
          if (cVar6 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar3,local_48 + 2);
            goto LAB_1445cbedc;
          }
        }
        plVar10 = (longlong *)(lVar3 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar10 != local_48 + 2) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48 + 2,plVar10,(int)plVar9[6]);
          }
          else {
            memcpy(local_48 + 2,plVar10,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48 + 2,lVar3,1);
      }
      else {
        (*pcVar2)(plVar9,local_48 + 2,lVar3);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445cbedc:
    pbVar8 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 2);
      goto LAB_1445cbedc;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 2);
      goto LAB_1445cbedc;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48 + 2);
      goto LAB_1445cbedc;
    }
    local_48[2] = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar9);
          if (cVar6 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar3,local_48);
            goto LAB_1445cc08f;
          }
        }
        plVar10 = (longlong *)(lVar3 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar10 != local_48) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48,plVar10,(int)plVar9[6]);
          }
          else {
            memcpy(local_48,plVar10,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48,lVar3,1);
      }
      else {
        (*pcVar2)(plVar9,local_48,lVar3);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48[0] = *(longlong *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_48);
    }
  }
LAB_1445cc08f:
  plVar9 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar9 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = FUN_1445f3842(param_1,local_48[2],plVar9);
  *param_3 = uVar5;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cc217 FUN_1445cc217 body=47 status=ok
// SIG undefined FUN_1445cc217(void)

longlong FUN_1445cc217(void)

{
  if (DAT_14cc23e38 == 0) {
    FUN_14000fc22(&DAT_14cc23e38,&PTR_FUN_14be00e28);
  }
  return DAT_14cc23e38;
}



// FUNCTION 1445cc246 FUN_1445cc246 body=1407 status=ok
// SIG undefined FUN_1445cc246(void)

void FUN_1445cc246(longlong param_1,longlong param_2,undefined1 *param_3)

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
  undefined4 *puVar10;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_38 = 0;
  uStack_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
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
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_38);
            goto LAB_1445cc420;
          }
        }
        puVar10 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &uStack_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_38,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_38,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_38,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38 = (undefined4)uVar2;
      uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_38);
    }
  }
LAB_1445cc420:
  local_3c = 0;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_3c);
            goto LAB_1445cc5d6;
          }
        }
        puVar10 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_3c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_3c,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_3c,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_3c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_3c,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_3c = (undefined4)uVar2;
      uStack_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
LAB_1445cc5d6:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = Discord_Client_RegisterLaunchSteamApplication
                    (param_1 + 0x28,CONCAT44(uStack_34,uStack_38),local_3c);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cc7c6 FUN_1445cc7c6 body=47 status=ok
// SIG undefined FUN_1445cc7c6(void)

longlong FUN_1445cc7c6(void)

{
  if (DAT_14cc23e40 == 0) {
    FUN_14000fc22(&DAT_14cc23e40,&PTR_FUN_14be00f20);
  }
  return DAT_14cc23e40;
}



// FUNCTION 1445cc7f6 FUN_1445cc7f6 body=1292 status=ok
// SIG undefined FUN_1445cc7f6(void)

void FUN_1445cc7f6(longlong param_1,longlong param_2)

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
            goto LAB_1445cc9ad;
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
LAB_1445cc9ad:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445cc9ad;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445cc9ad;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445cc9ad;
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
            goto LAB_1445ccb5d;
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
LAB_1445ccb5d:
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
  Discord_Client_RejectDiscordFriendRequest(param_1 + 0x28,uVar1,FUN_1445fac06,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ccd03 FUN_1445ccd03 body=47 status=ok
// SIG undefined FUN_1445ccd03(void)

longlong FUN_1445ccd03(void)

{
  if (DAT_14cc23e48 == 0) {
    FUN_14000fc22(&DAT_14cc23e48,&PTR_FUN_14be01008);
  }
  return DAT_14cc23e48;
}



// FUNCTION 1445ccd32 FUN_1445ccd32 body=1292 status=ok
// SIG undefined FUN_1445ccd32(void)

void FUN_1445ccd32(longlong param_1,longlong param_2)

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
            goto LAB_1445ccee9;
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
LAB_1445ccee9:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445ccee9;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445ccee9;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445ccee9;
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
            goto LAB_1445cd099;
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
LAB_1445cd099:
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
  Discord_Client_RejectGameFriendRequest(param_1 + 0x28,uVar1,FUN_1445facb2,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cd23f FUN_1445cd23f body=47 status=ok
// SIG undefined FUN_1445cd23f(void)

longlong FUN_1445cd23f(void)

{
  if (DAT_14cc23e50 == 0) {
    FUN_14000fc22(&DAT_14cc23e50,&PTR_FUN_14be01068);
  }
  return DAT_14cc23e50;
}



// FUNCTION 1445cd287 FUN_1445cd287 body=47 status=ok
// SIG undefined FUN_1445cd287(void)

longlong FUN_1445cd287(void)

{
  if (DAT_14cc23e58 == 0) {
    FUN_14000fc22(&DAT_14cc23e58,&PTR_FUN_14be01160);
  }
  return DAT_14cc23e58;
}



// FUNCTION 1445cd2b6 FUN_1445cd2b6 body=1292 status=ok
// SIG undefined FUN_1445cd2b6(void)

void FUN_1445cd2b6(longlong param_1,longlong param_2)

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
            goto LAB_1445cd46d;
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
LAB_1445cd46d:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445cd46d;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445cd46d;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445cd46d;
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
            goto LAB_1445cd61d;
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
LAB_1445cd61d:
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
  Discord_Client_RemoveDiscordAndGameFriend(param_1 + 0x28,uVar1,FUN_1445fad5e,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cd7c3 FUN_1445cd7c3 body=47 status=ok
// SIG undefined FUN_1445cd7c3(void)

longlong FUN_1445cd7c3(void)

{
  if (DAT_14cc23e60 == 0) {
    FUN_14000fc22(&DAT_14cc23e60,&PTR_FUN_14be01248);
  }
  return DAT_14cc23e60;
}



// FUNCTION 1445cd7f2 FUN_1445cd7f2 body=1292 status=ok
// SIG undefined FUN_1445cd7f2(void)

void FUN_1445cd7f2(longlong param_1,longlong param_2)

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
            goto LAB_1445cd9a9;
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
LAB_1445cd9a9:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445cd9a9;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445cd9a9;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445cd9a9;
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
            goto LAB_1445cdb59;
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
LAB_1445cdb59:
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
  Discord_Client_RemoveGameFriend(param_1 + 0x28,uVar1,FUN_1445fae0a,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cdcff FUN_1445cdcff body=47 status=ok
// SIG undefined FUN_1445cdcff(void)

longlong FUN_1445cdcff(void)

{
  if (DAT_14cc23e68 == 0) {
    FUN_14000fc22(&DAT_14cc23e68,&PTR_FUN_14be01368);
  }
  return DAT_14cc23e68;
}



// FUNCTION 1445cdd2e FUN_1445cdd2e body=1785 status=ok
// SIG undefined FUN_1445cdd2e(void)

void FUN_1445cdd2e(undefined8 param_1,longlong param_2)

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
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[2] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = 0x108001;
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
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,local_48 + 2);
            goto LAB_1445cdee5;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_48 + 2) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_48 + 2,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_48 + 2,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,local_48 + 2,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_48 + 2,lVar3);
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
LAB_1445cdee5:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 2);
      goto LAB_1445cdee5;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 2);
      goto LAB_1445cdee5;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48 + 2);
      goto LAB_1445cdee5;
    }
    local_48[2] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
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
            goto LAB_1445ce05a;
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
LAB_1445ce05a:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445ce05a;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445ce05a;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445ce05a;
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
            goto LAB_1445ce237;
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
LAB_1445ce237:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445f0b2c(param_1,local_48[2],plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ce428 FUN_1445ce428 body=47 status=ok
// SIG undefined FUN_1445ce428(void)

longlong FUN_1445ce428(void)

{
  if (DAT_14cc23e70 == 0) {
    FUN_14000fc22(&DAT_14cc23e70,&PTR_FUN_14be014a0);
  }
  return DAT_14cc23e70;
}



// FUNCTION 1445ce458 FUN_1445ce458 body=688 status=ok
// SIG undefined FUN_1445ce458(void)

void FUN_1445ce458(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *_Src;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_48);
            goto LAB_1445ce610;
          }
        }
        _Src = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != local_48) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_48,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(local_48,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar8[6];
        local_68 = 0;
        FUN_1400746b0(plVar8,local_48,lVar4,1);
      }
      else {
        (*pcVar3)(plVar8,local_48,lVar4);
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
      FUN_14002ddda(uVar2,param_2,local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_48);
    }
  }
LAB_1445ce610:
  plVar8 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445f4044(param_1,&local_58,plVar8);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ce709 FUN_1445ce709 body=47 status=ok
// SIG undefined FUN_1445ce709(void)

longlong FUN_1445ce709(void)

{
  if (DAT_14cc23e78 == 0) {
    FUN_14000fc22(&DAT_14cc23e78,&PTR_FUN_14be015d0);
  }
  return DAT_14cc23e78;
}



// FUNCTION 1445ce738 FUN_1445ce738 body=1785 status=ok
// SIG undefined FUN_1445ce738(void)

void FUN_1445ce738(undefined8 param_1,longlong param_2)

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
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[2] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = 0x108001;
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
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,local_48 + 2);
            goto LAB_1445ce8ef;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_48 + 2) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_48 + 2,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_48 + 2,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,local_48 + 2,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_48 + 2,lVar3);
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
LAB_1445ce8ef:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 2);
      goto LAB_1445ce8ef;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 2);
      goto LAB_1445ce8ef;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48 + 2);
      goto LAB_1445ce8ef;
    }
    local_48[2] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
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
            goto LAB_1445cea64;
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
LAB_1445cea64:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445cea64;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445cea64;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445cea64;
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
            goto LAB_1445cec41;
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
LAB_1445cec41:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445f3ace(param_1,local_48[2],plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cee32 FUN_1445cee32 body=47 status=ok
// SIG undefined FUN_1445cee32(void)

longlong FUN_1445cee32(void)

{
  if (DAT_14cc23e80 == 0) {
    FUN_14000fc22(&DAT_14cc23e80,&PTR_FUN_14be016b8);
  }
  return DAT_14cc23e80;
}



// FUNCTION 1445cee62 FUN_1445cee62 body=1292 status=ok
// SIG undefined FUN_1445cee62(void)

void FUN_1445cee62(longlong param_1,longlong param_2)

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
            goto LAB_1445cf019;
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
LAB_1445cf019:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445cf019;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445cf019;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445cf019;
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
            goto LAB_1445cf1c9;
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
LAB_1445cf1c9:
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
  Discord_Client_SendActivityJoinRequest(param_1 + 0x28,uVar1,FUN_1445fa0ea,&LAB_1445f3d8a);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cf36f FUN_1445cf36f body=47 status=ok
// SIG undefined FUN_1445cf36f(void)

longlong FUN_1445cf36f(void)

{
  if (DAT_14cc23e88 == 0) {
    FUN_14000fc22(&DAT_14cc23e88,&PTR_FUN_14be017b0);
  }
  return DAT_14cc23e88;
}



// FUNCTION 1445cf39e FUN_1445cf39e body=1303 status=ok
// SIG undefined FUN_1445cf39e(void)

void FUN_1445cf39e(longlong param_1,longlong param_2)

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
            goto LAB_1445cf555;
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
LAB_1445cf555:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445cf555;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445cf555;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445cf555;
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
            goto LAB_1445cf705;
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
LAB_1445cf705:
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
  Discord_Client_SendActivityJoinRequestReply(param_1 + 0x28,lVar8,FUN_1445fa196,&LAB_1445f3d8a);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cf8b6 FUN_1445cf8b6 body=47 status=ok
// SIG undefined FUN_1445cf8b6(void)

longlong FUN_1445cf8b6(void)

{
  if (DAT_14cc23e90 == 0) {
    FUN_14000fc22(&DAT_14cc23e90,&PTR_FUN_14be018b0);
  }
  return DAT_14cc23e90;
}



// FUNCTION 1445cf8e6 FUN_1445cf8e6 body=1139 status=ok
// SIG undefined FUN_1445cf8e6(void)

void FUN_1445cf8e6(undefined8 param_1,longlong param_2)

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
            goto LAB_1445cfa7b;
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
LAB_1445cfa7b:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445cfa7b;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445cfa7b;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445cfa7b;
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
            goto LAB_1445cfc40;
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
LAB_1445cfc40:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445f435c(param_1,plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445cfd5a FUN_1445cfd5a body=47 status=ok
// SIG undefined FUN_1445cfd5a(void)

longlong FUN_1445cfd5a(void)

{
  if (DAT_14cc23e98 == 0) {
    FUN_14000fc22(&DAT_14cc23e98,&PTR_FUN_14be019a0);
  }
  return DAT_14cc23e98;
}



// FUNCTION 1445cfd8a FUN_1445cfd8a body=1292 status=ok
// SIG undefined FUN_1445cfd8a(void)

void FUN_1445cfd8a(longlong param_1,longlong param_2)

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
            goto LAB_1445cff41;
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
LAB_1445cff41:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445cff41;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445cff41;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445cff41;
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
            goto LAB_1445d00f1;
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
LAB_1445d00f1:
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
  Discord_Client_SendDiscordFriendRequestById(param_1 + 0x28,uVar1,FUN_1445faf62,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d0297 FUN_1445d0297 body=47 status=ok
// SIG undefined FUN_1445d0297(void)

longlong FUN_1445d0297(void)

{
  if (DAT_14cc23ea0 == 0) {
    FUN_14000fc22(&DAT_14cc23ea0,&PTR_FUN_14be01a88);
  }
  return DAT_14cc23ea0;
}



// FUNCTION 1445d02c6 FUN_1445d02c6 body=1139 status=ok
// SIG undefined FUN_1445d02c6(void)

void FUN_1445d02c6(undefined8 param_1,longlong param_2)

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
            goto LAB_1445d045b;
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
LAB_1445d045b:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445d045b;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445d045b;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445d045b;
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
            goto LAB_1445d0620;
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
LAB_1445d0620:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445f4612(param_1,plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d073a FUN_1445d073a body=47 status=ok
// SIG undefined FUN_1445d073a(void)

longlong FUN_1445d073a(void)

{
  if (DAT_14cc23ea8 == 0) {
    FUN_14000fc22(&DAT_14cc23ea8,&PTR_FUN_14be01b80);
  }
  return DAT_14cc23ea8;
}



// FUNCTION 1445d076a FUN_1445d076a body=1292 status=ok
// SIG undefined FUN_1445d076a(void)

void FUN_1445d076a(longlong param_1,longlong param_2)

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
            goto LAB_1445d0921;
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
LAB_1445d0921:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445d0921;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445d0921;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445d0921;
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
            goto LAB_1445d0ad1;
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
LAB_1445d0ad1:
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
  Discord_Client_SendGameFriendRequestById(param_1 + 0x28,uVar1,FUN_1445fb0ba,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d0c77 FUN_1445d0c77 body=47 status=ok
// SIG undefined FUN_1445d0c77(void)

longlong FUN_1445d0c77(void)

{
  if (DAT_14cc23eb0 == 0) {
    FUN_14000fc22(&DAT_14cc23eb0,&PTR_FUN_14be01cb0);
  }
  return DAT_14cc23eb0;
}



// FUNCTION 1445d0ca6 FUN_1445d0ca6 body=1785 status=ok
// SIG undefined FUN_1445d0ca6(void)

void FUN_1445d0ca6(undefined8 param_1,longlong param_2)

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
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[2] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = 0x108001;
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
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,local_48 + 2);
            goto LAB_1445d0e5d;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_48 + 2) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_48 + 2,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_48 + 2,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,local_48 + 2,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_48 + 2,lVar3);
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
LAB_1445d0e5d:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 2);
      goto LAB_1445d0e5d;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 2);
      goto LAB_1445d0e5d;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48 + 2);
      goto LAB_1445d0e5d;
    }
    local_48[2] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
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
            goto LAB_1445d0fd2;
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
LAB_1445d0fd2:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445d0fd2;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445d0fd2;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445d0fd2;
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
            goto LAB_1445d11af;
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
LAB_1445d11af:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445f1b84(param_1,local_48[2],plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d13a0 FUN_1445d13a0 body=47 status=ok
// SIG undefined FUN_1445d13a0(void)

longlong FUN_1445d13a0(void)

{
  if (DAT_14cc23eb8 == 0) {
    FUN_14000fc22(&DAT_14cc23eb8,&PTR_FUN_14be01ec0);
  }
  return DAT_14cc23eb8;
}



// FUNCTION 1445d13d0 FUN_1445d13d0 body=2442 status=ok
// SIG undefined FUN_1445d13d0(void)

void FUN_1445d13d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  byte *pbVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [3];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_d8 = FUN_1446ddbd2();
      local_d0 = FUN_1403a682c;
      local_e0 = 0;
      local_e8 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar6);
          if (cVar4 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar3,&local_90);
            goto LAB_1445d158c;
          }
        }
        puVar7 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar6 + 0x44));
        if (puVar7 != &local_90) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,&local_90,puVar7,(int)plVar6[6]);
          }
          else {
            memcpy(&local_90,puVar7,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar6[6]);
        local_e8 = (undefined8 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar6,&local_90,lVar3,1);
      }
      else {
        (*pcVar2)(plVar6,&local_90,lVar3);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar7;
        puVar7 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
    }
LAB_1445d158c:
    pbVar5 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_90);
      goto LAB_1445d158c;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_90);
      goto LAB_1445d158c;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_90);
      goto LAB_1445d158c;
    }
    local_90 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
  }
  puVar7 = (undefined8 *)(param_2 + 0x38);
  local_a8[0] = 0;
  local_a8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar6);
          if (cVar4 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar3,local_a8);
            goto LAB_1445d1735;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar6 + 0x44));
        if (plVar8 != local_a8) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,local_a8,plVar8,(int)plVar6[6]);
          }
          else {
            memcpy(local_a8,plVar8,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar6[6]);
        local_e8 = (undefined8 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar6,local_a8,lVar3,1);
      }
      else {
        (*pcVar2)(plVar6,local_a8,lVar3);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar10;
        puVar10 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar6);
      *puVar7 = puVar9[1];
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_a8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_a8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_a8[0] = *(longlong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_a8);
    }
  }
LAB_1445d1735:
  plVar6 = local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  *puVar7 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar8);
          if (cVar4 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar3,&local_88);
            goto LAB_1445d1909;
          }
        }
        puVar10 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar10 != &local_88) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_88,puVar10,(int)plVar8[6]);
          }
          else {
            memcpy(&local_88,puVar10,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar8[6]);
        local_e8 = (undefined8 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,&local_88,lVar3,1);
      }
      else {
        (*pcVar2)(plVar8,&local_88,lVar3);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar10;
        puVar10 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar8);
      *puVar7 = puVar9[1];
    }
LAB_1445d1909:
    pbVar5 = *(byte **)(param_2 + 0x20);
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_88);
      goto LAB_1445d1909;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_88);
      goto LAB_1445d1909;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_88);
      goto LAB_1445d1909;
    }
    local_88 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    puVar10 = (undefined8 *)0x0;
  }
  puVar9 = &local_88;
  if (puVar10 != (undefined8 *)0x0) {
    puVar9 = puVar10;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  *puVar7 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar8);
          if (cVar4 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar3,&local_b8);
            goto LAB_1445d1ad5;
          }
        }
        puVar7 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar7 != &local_b8) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_b8,puVar7,(int)plVar8[6]);
          }
          else {
            memcpy(&local_b8,puVar7,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar8[6]);
        local_e8 = (undefined8 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,&local_b8,lVar3,1);
      }
      else {
        (*pcVar2)(plVar8,&local_b8,lVar3);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar7;
        puVar7 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_b8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_b8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_b8 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_b8);
    }
  }
LAB_1445d1ad5:
  puVar7 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = *puVar7;
  local_e8 = &local_c8;
  local_c0 = puVar7[1];
  FUN_1445f20d6(param_1,local_90,plVar6,puVar9);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_88);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d1d5b FUN_1445d1d5b body=47 status=ok
// SIG undefined FUN_1445d1d5b(void)

longlong FUN_1445d1d5b(void)

{
  if (DAT_14cc23ec0 == 0) {
    FUN_14000fc22(&DAT_14cc23ec0,&PTR_FUN_14be01fe8);
  }
  return DAT_14cc23ec0;
}



// FUNCTION 1445d1d8a FUN_1445d1d8a body=1785 status=ok
// SIG undefined FUN_1445d1d8a(void)

void FUN_1445d1d8a(undefined8 param_1,longlong param_2)

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
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[2] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = 0x108001;
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
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar3,local_48 + 2);
            goto LAB_1445d1f41;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_48 + 2) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_48 + 2,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_48 + 2,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,local_48 + 2,lVar3,1);
      }
      else {
        (*pcVar2)(plVar7,local_48 + 2,lVar3);
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
LAB_1445d1f41:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 2);
      goto LAB_1445d1f41;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 2);
      goto LAB_1445d1f41;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48 + 2);
      goto LAB_1445d1f41;
    }
    local_48[2] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
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
            goto LAB_1445d20b6;
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
LAB_1445d20b6:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445d20b6;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445d20b6;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445d20b6;
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
            goto LAB_1445d2293;
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
LAB_1445d2293:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445f23f8(param_1,local_48[2],plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d2484 FUN_1445d2484 body=47 status=ok
// SIG undefined FUN_1445d2484(void)

longlong FUN_1445d2484(void)

{
  if (DAT_14cc23ec8 == 0) {
    FUN_14000fc22(&DAT_14cc23ec8,&PTR_FUN_14be021e0);
  }
  return DAT_14cc23ec8;
}



// FUNCTION 1445d24b4 FUN_1445d24b4 body=2442 status=ok
// SIG undefined FUN_1445d24b4(void)

void FUN_1445d24b4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  byte *pbVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [3];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_d8 = FUN_1446ddbd2();
      local_d0 = FUN_1403a682c;
      local_e0 = 0;
      local_e8 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar6);
          if (cVar4 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar3,&local_90);
            goto LAB_1445d2670;
          }
        }
        puVar7 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar6 + 0x44));
        if (puVar7 != &local_90) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,&local_90,puVar7,(int)plVar6[6]);
          }
          else {
            memcpy(&local_90,puVar7,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar6[6]);
        local_e8 = (undefined8 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar6,&local_90,lVar3,1);
      }
      else {
        (*pcVar2)(plVar6,&local_90,lVar3);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar7;
        puVar7 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
    }
LAB_1445d2670:
    pbVar5 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_90);
      goto LAB_1445d2670;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_90);
      goto LAB_1445d2670;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_90);
      goto LAB_1445d2670;
    }
    local_90 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
  }
  puVar7 = (undefined8 *)(param_2 + 0x38);
  local_a8[0] = 0;
  local_a8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar6);
          if (cVar4 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar3,local_a8);
            goto LAB_1445d2819;
          }
        }
        plVar8 = (longlong *)(lVar3 + *(int *)((longlong)plVar6 + 0x44));
        if (plVar8 != local_a8) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,local_a8,plVar8,(int)plVar6[6]);
          }
          else {
            memcpy(local_a8,plVar8,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar6[6]);
        local_e8 = (undefined8 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar6,local_a8,lVar3,1);
      }
      else {
        (*pcVar2)(plVar6,local_a8,lVar3);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar10;
        puVar10 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar6);
      *puVar7 = puVar9[1];
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_a8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_a8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_a8[0] = *(longlong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_a8);
    }
  }
LAB_1445d2819:
  plVar6 = local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  *puVar7 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar8);
          if (cVar4 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar3,&local_88);
            goto LAB_1445d29ed;
          }
        }
        puVar10 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar10 != &local_88) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_88,puVar10,(int)plVar8[6]);
          }
          else {
            memcpy(&local_88,puVar10,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar8[6]);
        local_e8 = (undefined8 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,&local_88,lVar3,1);
      }
      else {
        (*pcVar2)(plVar8,&local_88,lVar3);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar10;
        puVar10 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar8);
      *puVar7 = puVar9[1];
    }
LAB_1445d29ed:
    pbVar5 = *(byte **)(param_2 + 0x20);
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_88);
      goto LAB_1445d29ed;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_88);
      goto LAB_1445d29ed;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_88);
      goto LAB_1445d29ed;
    }
    local_88 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    puVar10 = (undefined8 *)0x0;
  }
  puVar9 = &local_88;
  if (puVar10 != (undefined8 *)0x0) {
    puVar9 = puVar10;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  *puVar7 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar8);
          if (cVar4 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar3,&local_b8);
            goto LAB_1445d2bb9;
          }
        }
        puVar7 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar7 != &local_b8) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_b8,puVar7,(int)plVar8[6]);
          }
          else {
            memcpy(&local_b8,puVar7,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar8[6]);
        local_e8 = (undefined8 *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,&local_b8,lVar3,1);
      }
      else {
        (*pcVar2)(plVar8,&local_b8,lVar3);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar7;
        puVar7 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_b8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_b8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_b8 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_b8);
    }
  }
LAB_1445d2bb9:
  puVar7 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = *puVar7;
  local_e8 = &local_c8;
  local_c0 = puVar7[1];
  FUN_1445f26b4(param_1,local_90,plVar6,puVar9);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_88);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d2e3f FUN_1445d2e3f body=47 status=ok
// SIG undefined FUN_1445d2e3f(void)

longlong FUN_1445d2e3f(void)

{
  if (DAT_14cc23ed0 == 0) {
    FUN_14000fc22(&DAT_14cc23ed0,&PTR_FUN_14be02290);
  }
  return DAT_14cc23ed0;
}



// FUNCTION 1445d2e6e FUN_1445d2e6e body=641 status=ok
// SIG undefined FUN_1445d2e6e(void)

void FUN_1445d2e6e(longlong param_1,longlong param_2)

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
            goto LAB_1445d3023;
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
LAB_1445d3023:
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
  Discord_Client_SetActivityInviteCreatedCallback
            (param_1 + 0x28,FUN_1445fa342,&LAB_1445f3df4,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d30f0 FUN_1445d30f0 body=47 status=ok
// SIG undefined FUN_1445d30f0(void)

longlong FUN_1445d30f0(void)

{
  if (DAT_14cc23ed8 == 0) {
    FUN_14000fc22(&DAT_14cc23ed8,&PTR_FUN_14be02340);
  }
  return DAT_14cc23ed8;
}



// FUNCTION 1445d3120 FUN_1445d3120 body=641 status=ok
// SIG undefined FUN_1445d3120(void)

void FUN_1445d3120(longlong param_1,longlong param_2)

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
            goto LAB_1445d32d5;
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
LAB_1445d32d5:
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
  Discord_Client_SetActivityInviteUpdatedCallback
            (param_1 + 0x28,FUN_1445fa3ee,&LAB_1445f3df4,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d33a2 FUN_1445d33a2 body=47 status=ok
// SIG undefined FUN_1445d33a2(void)

longlong FUN_1445d33a2(void)

{
  if (DAT_14cc23ee0 == 0) {
    FUN_14000fc22(&DAT_14cc23ee0,&PTR_FUN_14be023e0);
  }
  return DAT_14cc23ee0;
}



// FUNCTION 1445d33d2 FUN_1445d33d2 body=641 status=ok
// SIG undefined FUN_1445d33d2(void)

void FUN_1445d33d2(longlong param_1,longlong param_2)

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
            goto LAB_1445d3587;
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
LAB_1445d3587:
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
  Discord_Client_SetActivityJoinCallback(param_1 + 0x28,FUN_1445fa524,&LAB_1445f3e5e,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d3654 FUN_1445d3654 body=47 status=ok
// SIG undefined FUN_1445d3654(void)

longlong FUN_1445d3654(void)

{
  if (DAT_14cc23ee8 == 0) {
    FUN_14000fc22(&DAT_14cc23ee8,&PTR_FUN_14be02490);
  }
  return DAT_14cc23ee8;
}



// FUNCTION 1445d3684 FUN_1445d3684 body=641 status=ok
// SIG undefined FUN_1445d3684(void)

void FUN_1445d3684(longlong param_1,longlong param_2)

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
            goto LAB_1445d3839;
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
LAB_1445d3839:
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
  Discord_Client_SetActivityJoinWithApplicationCallback
            (param_1 + 0x28,FUN_1445fa636,&LAB_1445f3e68,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d390a FUN_1445d390a body=47 status=ok
// SIG undefined FUN_1445d390a(void)

longlong FUN_1445d390a(void)

{
  if (DAT_14cc23ef0 == 0) {
    FUN_14000fc22(&DAT_14cc23ef0,&PTR_FUN_14be02528);
  }
  return DAT_14cc23ef0;
}



// FUNCTION 1445d393a FUN_1445d393a body=737 status=ok
// SIG undefined FUN_1445d393a(void)

void FUN_1445d393a(longlong param_1,longlong param_2)

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
            goto LAB_1445d3b0b;
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
LAB_1445d3b0b:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetAecDump(param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d3c1c FUN_1445d3c1c body=47 status=ok
// SIG undefined FUN_1445d3c1c(void)

longlong FUN_1445d3c1c(void)

{
  if (DAT_14cc23ef8 == 0) {
    FUN_14000fc22(&DAT_14cc23ef8,&PTR_FUN_14be025b0);
  }
  return DAT_14cc23ef8;
}



// FUNCTION 1445d3c4c FUN_1445d3c4c body=735 status=ok
// SIG undefined FUN_1445d3c4c(void)

void FUN_1445d3c4c(longlong param_1,longlong param_2)

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
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_1445d3e1e;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_1445d3e1e:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetApplicationId(param_1 + 0x28,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d3f2c FUN_1445d3f2c body=47 status=ok
// SIG undefined FUN_1445d3f2c(void)

longlong FUN_1445d3f2c(void)

{
  if (DAT_14cc23f00 == 0) {
    FUN_14000fc22(&DAT_14cc23f00,&PTR_FUN_14be02660);
  }
  return DAT_14cc23f00;
}



// FUNCTION 1445d3f5c FUN_1445d3f5c body=641 status=ok
// SIG undefined FUN_1445d3f5c(void)

void FUN_1445d3f5c(longlong param_1,longlong param_2)

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
            goto LAB_1445d4111;
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
LAB_1445d4111:
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
  Discord_Client_SetAuthorizeDeviceScreenClosedCallback
            (param_1 + 0x28,FUN_1445f7068,&LAB_1445f0df2,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d41e2 FUN_1445d41e2 body=47 status=ok
// SIG undefined FUN_1445d41e2(void)

longlong FUN_1445d41e2(void)

{
  if (DAT_14cc23f08 == 0) {
    FUN_14000fc22(&DAT_14cc23f08,&PTR_FUN_14be02700);
  }
  return DAT_14cc23f08;
}



// FUNCTION 1445d4212 FUN_1445d4212 body=737 status=ok
// SIG undefined FUN_1445d4212(void)

void FUN_1445d4212(longlong param_1,longlong param_2)

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
            goto LAB_1445d43e3;
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
LAB_1445d43e3:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetAutomaticGainControl(param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d44f4 FUN_1445d44f4 body=47 status=ok
// SIG undefined FUN_1445d44f4(void)

longlong FUN_1445d44f4(void)

{
  if (DAT_14cc23f10 == 0) {
    FUN_14000fc22(&DAT_14cc23f10,&PTR_FUN_14be027a0);
  }
  return DAT_14cc23f10;
}



// FUNCTION 1445d4524 FUN_1445d4524 body=641 status=ok
// SIG undefined FUN_1445d4524(void)

void FUN_1445d4524(longlong param_1,longlong param_2)

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
            goto LAB_1445d46d9;
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
LAB_1445d46d9:
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
  Discord_Client_SetDeviceChangeCallback(param_1 + 0x28,FUN_1445f55b0,&LAB_1445ee094,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d47aa FUN_1445d47aa body=47 status=ok
// SIG undefined FUN_1445d47aa(void)

longlong FUN_1445d47aa(void)

{
  if (DAT_14cc23f18 == 0) {
    FUN_14000fc22(&DAT_14cc23f18,&PTR_FUN_14be02840);
  }
  return DAT_14cc23f18;
}



// FUNCTION 1445d47da FUN_1445d47da body=737 status=ok
// SIG undefined FUN_1445d47da(void)

void FUN_1445d47da(longlong param_1,longlong param_2)

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
            goto LAB_1445d49ab;
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
LAB_1445d49ab:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetEchoCancellation(param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d4ac0 FUN_1445d4ac0 body=47 status=ok
// SIG undefined FUN_1445d4ac0(void)

longlong FUN_1445d4ac0(void)

{
  if (DAT_14cc23f20 == 0) {
    FUN_14000fc22(&DAT_14cc23f20,&PTR_FUN_14be028f8);
  }
  return DAT_14cc23f20;
}



// FUNCTION 1445d4af0 FUN_1445d4af0 body=737 status=ok
// SIG undefined FUN_1445d4af0(void)

void FUN_1445d4af0(longlong param_1,longlong param_2)

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
            goto LAB_1445d4cc1;
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
LAB_1445d4cc1:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetEngineManagedAudioSession(param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d4dd2 FUN_1445d4dd2 body=47 status=ok
// SIG undefined FUN_1445d4dd2(void)

longlong FUN_1445d4dd2(void)

{
  if (DAT_14cc23f28 == 0) {
    FUN_14000fc22(&DAT_14cc23f28,&PTR_FUN_14be02998);
  }
  return DAT_14cc23f28;
}



// FUNCTION 1445d4e02 FUN_1445d4e02 body=740 status=ok
// SIG undefined FUN_1445d4e02(void)

void FUN_1445d4e02(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
            goto LAB_1445d4fd3;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_1445d4fd3:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetGameWindowPid(param_1 + 0x28,local_2c);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d50e7 FUN_1445d50e7 body=47 status=ok
// SIG undefined FUN_1445d50e7(void)

longlong FUN_1445d50e7(void)

{
  if (DAT_14cc23f30 == 0) {
    FUN_14000fc22(&DAT_14cc23f30,&PTR_FUN_14be02a50);
  }
  return DAT_14cc23f30;
}



// FUNCTION 1445d5116 FUN_1445d5116 body=740 status=ok
// SIG undefined FUN_1445d5116(void)

void FUN_1445d5116(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
            goto LAB_1445d52e7;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_1445d52e7:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetHttpRequestTimeout(param_1 + 0x28,local_2c);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d53fb FUN_1445d53fb body=47 status=ok
// SIG undefined FUN_1445d53fb(void)

longlong FUN_1445d53fb(void)

{
  if (DAT_14cc23f38 == 0) {
    FUN_14000fc22(&DAT_14cc23f38,&PTR_FUN_14be02b40);
  }
  return DAT_14cc23f38;
}



// FUNCTION 1445d542a FUN_1445d542a body=1139 status=ok
// SIG undefined FUN_1445d542a(void)

void FUN_1445d542a(undefined8 param_1,longlong param_2)

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
            goto LAB_1445d55bf;
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
LAB_1445d55bf:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445d55bf;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445d55bf;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445d55bf;
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
            goto LAB_1445d5784;
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
LAB_1445d5784:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445ee0fe(param_1,plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d589e FUN_1445d589e body=47 status=ok
// SIG undefined FUN_1445d589e(void)

longlong FUN_1445d589e(void)

{
  if (DAT_14cc23f40 == 0) {
    FUN_14000fc22(&DAT_14cc23f40,&PTR_FUN_14be02be0);
  }
  return DAT_14cc23f40;
}



// FUNCTION 1445d58ce FUN_1445d58ce body=742 status=ok
// SIG undefined FUN_1445d58ce(void)

void FUN_1445d58ce(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
            goto LAB_1445d5a9f;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_1445d5a9f:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetInputVolume(param_1 + 0x28,local_2c);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d5bb5 FUN_1445d5bb5 body=47 status=ok
// SIG undefined FUN_1445d5bb5(void)

longlong FUN_1445d5bb5(void)

{
  if (DAT_14cc23f48 == 0) {
    FUN_14000fc22(&DAT_14cc23f48,&PTR_FUN_14be02c80);
  }
  return DAT_14cc23f48;
}



// FUNCTION 1445d5be4 FUN_1445d5be4 body=641 status=ok
// SIG undefined FUN_1445d5be4(void)

void FUN_1445d5be4(longlong param_1,longlong param_2)

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
            goto LAB_1445d5d99;
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
LAB_1445d5d99:
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
  Discord_Client_SetLobbyCreatedCallback(param_1 + 0x28,FUN_1445f99be,&LAB_1445f37f2,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d5e66 FUN_1445d5e66 body=47 status=ok
// SIG undefined FUN_1445d5e66(void)

longlong FUN_1445d5e66(void)

{
  if (DAT_14cc23f50 == 0) {
    FUN_14000fc22(&DAT_14cc23f50,&PTR_FUN_14be02d20);
  }
  return DAT_14cc23f50;
}



// FUNCTION 1445d5e96 FUN_1445d5e96 body=641 status=ok
// SIG undefined FUN_1445d5e96(void)

void FUN_1445d5e96(longlong param_1,longlong param_2)

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
            goto LAB_1445d604b;
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
LAB_1445d604b:
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
  Discord_Client_SetLobbyDeletedCallback(param_1 + 0x28,FUN_1445f9a6a,&LAB_1445f37fc,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d6118 FUN_1445d6118 body=47 status=ok
// SIG undefined FUN_1445d6118(void)

longlong FUN_1445d6118(void)

{
  if (DAT_14cc23f58 == 0) {
    FUN_14000fc22(&DAT_14cc23f58,&PTR_FUN_14be02dc8);
  }
  return DAT_14cc23f58;
}



// FUNCTION 1445d6148 FUN_1445d6148 body=641 status=ok
// SIG undefined FUN_1445d6148(void)

void FUN_1445d6148(longlong param_1,longlong param_2)

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
            goto LAB_1445d62fd;
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
LAB_1445d62fd:
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
  Discord_Client_SetLobbyMemberAddedCallback(param_1 + 0x28,FUN_1445f9b1a,&LAB_1445f3806,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d63ca FUN_1445d63ca body=47 status=ok
// SIG undefined FUN_1445d63ca(void)

longlong FUN_1445d63ca(void)

{
  if (DAT_14cc23f60 == 0) {
    FUN_14000fc22(&DAT_14cc23f60,&PTR_FUN_14be02e70);
  }
  return DAT_14cc23f60;
}



// FUNCTION 1445d63fa FUN_1445d63fa body=641 status=ok
// SIG undefined FUN_1445d63fa(void)

void FUN_1445d63fa(longlong param_1,longlong param_2)

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
            goto LAB_1445d65af;
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
LAB_1445d65af:
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
  Discord_Client_SetLobbyMemberRemovedCallback(param_1 + 0x28,FUN_1445f9bd4,&LAB_1445f3810,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d667c FUN_1445d667c body=47 status=ok
// SIG undefined FUN_1445d667c(void)

longlong FUN_1445d667c(void)

{
  if (DAT_14cc23f68 == 0) {
    FUN_14000fc22(&DAT_14cc23f68,&PTR_FUN_14be02f18);
  }
  return DAT_14cc23f68;
}



// FUNCTION 1445d66ac FUN_1445d66ac body=641 status=ok
// SIG undefined FUN_1445d66ac(void)

void FUN_1445d66ac(longlong param_1,longlong param_2)

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
            goto LAB_1445d6861;
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
LAB_1445d6861:
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
  Discord_Client_SetLobbyMemberUpdatedCallback(param_1 + 0x28,FUN_1445f9c8e,&LAB_1445f381a,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d692e FUN_1445d692e body=47 status=ok
// SIG undefined FUN_1445d692e(void)

longlong FUN_1445d692e(void)

{
  if (DAT_14cc23f70 == 0) {
    FUN_14000fc22(&DAT_14cc23f70,&PTR_FUN_14be02fb8);
  }
  return DAT_14cc23f70;
}



// FUNCTION 1445d695e FUN_1445d695e body=641 status=ok
// SIG undefined FUN_1445d695e(void)

void FUN_1445d695e(longlong param_1,longlong param_2)

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
            goto LAB_1445d6b13;
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
LAB_1445d6b13:
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
  Discord_Client_SetLobbyUpdatedCallback(param_1 + 0x28,FUN_1445f9d44,&LAB_1445f3824,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d6be5 FUN_1445d6be5 body=47 status=ok
// SIG undefined FUN_1445d6be5(void)

longlong FUN_1445d6be5(void)

{
  if (DAT_14cc23f78 == 0) {
    FUN_14000fc22(&DAT_14cc23f78,&PTR_FUN_14be03120);
  }
  return DAT_14cc23f78;
}



// FUNCTION 1445d6c14 FUN_1445d6c14 body=1281 status=ok
// SIG undefined FUN_1445d6c14(void)

void FUN_1445d6c14(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  undefined1 *_Src;
  undefined7 *puVar10;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_48 = 0;
  uStack_41 = 0;
  uStack_40 = 0;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_48);
            goto LAB_1445d6dd2;
          }
        }
        puVar10 = (undefined7 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &uStack_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_48,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_48,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar4[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_48,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&uStack_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_48 = (undefined7)uVar2;
      uStack_41 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_48);
    }
  }
LAB_1445d6dd2:
  puVar10 = &uStack_48;
  if (*(undefined7 **)(param_2 + 0x38) != (undefined7 *)0x0) {
    puVar10 = *(undefined7 **)(param_2 + 0x38);
  }
  local_49 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_140a4831c;
      local_78 = 0x1000000008001;
      local_70 = 0;
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_49);
            goto LAB_1445d6f95;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_49) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_49,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_49,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar4[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_49,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_49,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_49);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_49);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_49 = (undefined1)uVar2;
      uStack_48 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_49);
    }
  }
LAB_1445d6f95:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1445f2a68(param_1,puVar10,local_49);
  *param_3 = uVar7;
  if (CONCAT17(uStack_41,uStack_48) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d7116 FUN_1445d7116 body=47 status=ok
// SIG undefined FUN_1445d7116(void)

longlong FUN_1445d7116(void)

{
  if (DAT_14cc23f80 == 0) {
    FUN_14000fc22(&DAT_14cc23f80,&PTR_FUN_14be031c8);
  }
  return DAT_14cc23f80;
}



// FUNCTION 1445d7146 FUN_1445d7146 body=641 status=ok
// SIG undefined FUN_1445d7146(void)

void FUN_1445d7146(longlong param_1,longlong param_2)

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
            goto LAB_1445d72fb;
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
LAB_1445d72fb:
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
  Discord_Client_SetMessageCreatedCallback(param_1 + 0x28,FUN_1445f8616,&LAB_1445f29d6,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d73c8 FUN_1445d73c8 body=47 status=ok
// SIG undefined FUN_1445d73c8(void)

longlong FUN_1445d73c8(void)

{
  if (DAT_14cc23f88 == 0) {
    FUN_14000fc22(&DAT_14cc23f88,&PTR_FUN_14be03270);
  }
  return DAT_14cc23f88;
}



// FUNCTION 1445d73f8 FUN_1445d73f8 body=641 status=ok
// SIG undefined FUN_1445d73f8(void)

void FUN_1445d73f8(longlong param_1,longlong param_2)

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
            goto LAB_1445d75ad;
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
LAB_1445d75ad:
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
  Discord_Client_SetMessageDeletedCallback(param_1 + 0x28,FUN_1445f86c6,&LAB_1445f2a40,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d767a FUN_1445d767a body=47 status=ok
// SIG undefined FUN_1445d767a(void)

longlong FUN_1445d767a(void)

{
  if (DAT_14cc23f90 == 0) {
    FUN_14000fc22(&DAT_14cc23f90,&PTR_FUN_14be03318);
  }
  return DAT_14cc23f90;
}



// FUNCTION 1445d76aa FUN_1445d76aa body=641 status=ok
// SIG undefined FUN_1445d76aa(void)

void FUN_1445d76aa(longlong param_1,longlong param_2)

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
            goto LAB_1445d785f;
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
LAB_1445d785f:
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
  Discord_Client_SetMessageUpdatedCallback(param_1 + 0x28,FUN_1445f877c,&LAB_1445f2a4a,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d792c FUN_1445d792c body=47 status=ok
// SIG undefined FUN_1445d792c(void)

longlong FUN_1445d792c(void)

{
  if (DAT_14cc23f98 == 0) {
    FUN_14000fc22(&DAT_14cc23f98,&PTR_FUN_14be033b8);
  }
  return DAT_14cc23f98;
}



// FUNCTION 1445d795c FUN_1445d795c body=641 status=ok
// SIG undefined FUN_1445d795c(void)

void FUN_1445d795c(longlong param_1,longlong param_2)

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
            goto LAB_1445d7b11;
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
LAB_1445d7b11:
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
  Discord_Client_SetNoAudioInputCallback(param_1 + 0x28,FUN_1445f592e,&LAB_1445ee414,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d7bde FUN_1445d7bde body=47 status=ok
// SIG undefined FUN_1445d7bde(void)

longlong FUN_1445d7bde(void)

{
  if (DAT_14cc23fa0 == 0) {
    FUN_14000fc22(&DAT_14cc23fa0,&PTR_FUN_14be03468);
  }
  return DAT_14cc23fa0;
}



// FUNCTION 1445d7c0e FUN_1445d7c0e body=742 status=ok
// SIG undefined FUN_1445d7c0e(void)

void FUN_1445d7c0e(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
            goto LAB_1445d7ddf;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_1445d7ddf:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetNoAudioInputThreshold(param_1 + 0x28,local_2c);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d7efa FUN_1445d7efa body=47 status=ok
// SIG undefined FUN_1445d7efa(void)

longlong FUN_1445d7efa(void)

{
  if (DAT_14cc23fa8 == 0) {
    FUN_14000fc22(&DAT_14cc23fa8,&PTR_FUN_14be03508);
  }
  return DAT_14cc23fa8;
}



// FUNCTION 1445d7f2a FUN_1445d7f2a body=737 status=ok
// SIG undefined FUN_1445d7f2a(void)

void FUN_1445d7f2a(longlong param_1,longlong param_2)

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
            goto LAB_1445d80fb;
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
LAB_1445d80fb:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetNoiseSuppression(param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d820c FUN_1445d820c body=47 status=ok
// SIG undefined FUN_1445d820c(void)

longlong FUN_1445d820c(void)

{
  if (DAT_14cc23fb0 == 0) {
    FUN_14000fc22(&DAT_14cc23fb0,&PTR_FUN_14be03638);
  }
  return DAT_14cc23fb0;
}



// FUNCTION 1445d823c FUN_1445d823c body=1294 status=ok
// SIG undefined FUN_1445d823c(void)

void FUN_1445d823c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  char cVar8;
  byte *pbVar9;
  undefined1 *_Src;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  
  uStack_40 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_98);
  uStack_39 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_98) >> 0x38);
  local_41 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_140a4831c;
      local_78 = (undefined8 *)0x1000000008001;
      local_70 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
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
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_41);
            goto LAB_1445d83ef;
          }
        }
        _Src = (undefined1 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src != &local_41) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_41,_Src,(int)plVar3[6]);
          }
          else {
            memcpy(&local_41,_Src,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1400746b0(plVar3,&local_41,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_41,lVar4);
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
LAB_1445d83ef:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_41);
      goto LAB_1445d83ef;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_41);
      goto LAB_1445d83ef;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_41);
      goto LAB_1445d83ef;
    }
    uVar1 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
    local_41 = (undefined1)uVar1;
    uStack_40 = (undefined7)((ulonglong)uVar1 >> 8);
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
            goto LAB_1445d859f;
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
LAB_1445d859f:
  uVar7 = local_41;
  puVar10 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *puVar10;
  uVar6 = puVar10[1];
  local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_78 = uVar1;
  local_78[1] = uVar6;
  Discord_Client_SetOnlineStatus(param_1 + 0x28,uVar7,FUN_1445fa752,&LAB_1445f3e72);
  if ((CONCAT17(uStack_39,uStack_40) ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d8755 FUN_1445d8755 body=47 status=ok
// SIG undefined FUN_1445d8755(void)

longlong FUN_1445d8755(void)

{
  if (DAT_14cc23fb8 == 0) {
    FUN_14000fc22(&DAT_14cc23fb8,&PTR_FUN_14be03738);
  }
  return DAT_14cc23fb8;
}



// FUNCTION 1445d8784 FUN_1445d8784 body=1394 status=ok
// SIG undefined FUN_1445d8784(void)

void FUN_1445d8784(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  char cVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_30 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_2c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  iStack_34 = 0;
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&iStack_34);
            goto LAB_1445d8956;
          }
        }
        piVar10 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (piVar10 != &iStack_34) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&iStack_34,piVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&iStack_34,piVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&iStack_34,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&iStack_34,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&iStack_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_34 = (int)uVar2;
      local_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_34);
    }
  }
LAB_1445d8956:
  iVar7 = iStack_34;
  local_38 = 0;
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_1445d8b0d;
          }
        }
        piVar10 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (piVar10 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,piVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,piVar10,
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_38 = (int)uVar2;
      iStack_34 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1445d8b0d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetOpusHardwareCoding(param_1 + 0x28,iVar7 != 0,local_38 != 0);
  if ((CONCAT44(uStack_2c,local_30) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d8cf7 FUN_1445d8cf7 body=47 status=ok
// SIG undefined FUN_1445d8cf7(void)

longlong FUN_1445d8cf7(void)

{
  if (DAT_14cc23fc0 == 0) {
    FUN_14000fc22(&DAT_14cc23fc0,&PTR_FUN_14be03810);
  }
  return DAT_14cc23fc0;
}



// FUNCTION 1445d8d26 FUN_1445d8d26 body=1139 status=ok
// SIG undefined FUN_1445d8d26(void)

void FUN_1445d8d26(undefined8 param_1,longlong param_2)

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
            goto LAB_1445d8ebb;
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
LAB_1445d8ebb:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445d8ebb;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445d8ebb;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445d8ebb;
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
            goto LAB_1445d9080;
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
LAB_1445d9080:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445ee41e(param_1,plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d919a FUN_1445d919a body=47 status=ok
// SIG undefined FUN_1445d919a(void)

longlong FUN_1445d919a(void)

{
  if (DAT_14cc23fc8 == 0) {
    FUN_14000fc22(&DAT_14cc23fc8,&PTR_FUN_14be038b0);
  }
  return DAT_14cc23fc8;
}



// FUNCTION 1445d91ca FUN_1445d91ca body=742 status=ok
// SIG undefined FUN_1445d91ca(void)

void FUN_1445d91ca(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
            goto LAB_1445d939b;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_1445d939b:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetOutputVolume(param_1 + 0x28,local_2c);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d94b1 FUN_1445d94b1 body=47 status=ok
// SIG undefined FUN_1445d94b1(void)

longlong FUN_1445d94b1(void)

{
  if (DAT_14cc23fd0 == 0) {
    FUN_14000fc22(&DAT_14cc23fd0,&PTR_FUN_14be03958);
  }
  return DAT_14cc23fd0;
}



// FUNCTION 1445d94e0 FUN_1445d94e0 body=641 status=ok
// SIG undefined FUN_1445d94e0(void)

void FUN_1445d94e0(longlong param_1,longlong param_2)

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
            goto LAB_1445d9695;
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
LAB_1445d9695:
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
  Discord_Client_SetRelationshipCreatedCallback(param_1 + 0x28,FUN_1445fb188,&LAB_1445f48be,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d9762 FUN_1445d9762 body=47 status=ok
// SIG undefined FUN_1445d9762(void)

longlong FUN_1445d9762(void)

{
  if (DAT_14cc23fd8 == 0) {
    FUN_14000fc22(&DAT_14cc23fd8,&PTR_FUN_14be03a00);
  }
  return DAT_14cc23fd8;
}



// FUNCTION 1445d9792 FUN_1445d9792 body=641 status=ok
// SIG undefined FUN_1445d9792(void)

void FUN_1445d9792(longlong param_1,longlong param_2)

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
            goto LAB_1445d9947;
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
LAB_1445d9947:
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
  Discord_Client_SetRelationshipDeletedCallback(param_1 + 0x28,FUN_1445fb240,&LAB_1445f48c8,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d9a14 FUN_1445d9a14 body=47 status=ok
// SIG undefined FUN_1445d9a14(void)

longlong FUN_1445d9a14(void)

{
  if (DAT_14cc23fe0 == 0) {
    FUN_14000fc22(&DAT_14cc23fe0,&PTR_FUN_14be03ab0);
  }
  return DAT_14cc23fe0;
}



// FUNCTION 1445d9a44 FUN_1445d9a44 body=641 status=ok
// SIG undefined FUN_1445d9a44(void)

void FUN_1445d9a44(longlong param_1,longlong param_2)

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
            goto LAB_1445d9bf9;
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
LAB_1445d9bf9:
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
  Discord_Client_SetRelationshipGroupsUpdatedCallback
            (param_1 + 0x28,FUN_1445fb460,&LAB_1445f49a0,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d9cca FUN_1445d9cca body=47 status=ok
// SIG undefined FUN_1445d9cca(void)

longlong FUN_1445d9cca(void)

{
  if (DAT_14cc23fe8 == 0) {
    FUN_14000fc22(&DAT_14cc23fe8,&PTR_FUN_14be03b48);
  }
  return DAT_14cc23fe8;
}



// FUNCTION 1445d9cfa FUN_1445d9cfa body=737 status=ok
// SIG undefined FUN_1445d9cfa(void)

void FUN_1445d9cfa(longlong param_1,longlong param_2)

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
            goto LAB_1445d9ecb;
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
LAB_1445d9ecb:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetSelfDeafAll(param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445d9fe0 FUN_1445d9fe0 body=47 status=ok
// SIG undefined FUN_1445d9fe0(void)

longlong FUN_1445d9fe0(void)

{
  if (DAT_14cc23ff0 == 0) {
    FUN_14000fc22(&DAT_14cc23ff0,&PTR_FUN_14be03be0);
  }
  return DAT_14cc23ff0;
}



// FUNCTION 1445da010 FUN_1445da010 body=737 status=ok
// SIG undefined FUN_1445da010(void)

void FUN_1445da010(longlong param_1,longlong param_2)

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
            goto LAB_1445da1e1;
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
LAB_1445da1e1:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetSelfMuteAll(param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445da2f6 FUN_1445da2f6 body=47 status=ok
// SIG undefined FUN_1445da2f6(void)

longlong FUN_1445da2f6(void)

{
  if (DAT_14cc23ff8 == 0) {
    FUN_14000fc22(&DAT_14cc23ff8,&PTR_FUN_14be03c88);
  }
  return DAT_14cc23ff8;
}



// FUNCTION 1445da326 FUN_1445da326 body=737 status=ok
// SIG undefined FUN_1445da326(void)

void FUN_1445da326(longlong param_1,longlong param_2)

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
            goto LAB_1445da4f7;
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
LAB_1445da4f7:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetShowingChat(param_1 + 0x28,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445da611 FUN_1445da611 body=47 status=ok
// SIG undefined FUN_1445da611(void)

longlong FUN_1445da611(void)

{
  if (DAT_14cc24000 == 0) {
    FUN_14000fc22(&DAT_14cc24000,&PTR_FUN_14be03d80);
  }
  return DAT_14cc24000;
}



// FUNCTION 1445da640 FUN_1445da640 body=749 status=ok
// SIG undefined FUN_1445da640(void)

void FUN_1445da640(longlong param_1,longlong param_2,undefined1 *param_3)

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
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_2c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_34 = 0;
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_34);
            goto LAB_1445da819;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_34) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_34,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_34,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_34,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_34,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_34 = (int)uVar2;
      uStack_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
LAB_1445da819:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = Discord_Client_SetSpeakerMode(param_1 + 0x28,local_34 != 0);
  *param_3 = uVar7;
  if ((CONCAT44(uStack_2c,uStack_30) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445da92e FUN_1445da92e body=47 status=ok
// SIG undefined FUN_1445da92e(void)

longlong FUN_1445da92e(void)

{
  if (DAT_14cc24008 == 0) {
    FUN_14000fc22(&DAT_14cc24008,&PTR_FUN_14be03e08);
  }
  return DAT_14cc24008;
}



// FUNCTION 1445da95e FUN_1445da95e body=641 status=ok
// SIG undefined FUN_1445da95e(void)

void FUN_1445da95e(longlong param_1,longlong param_2)

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
            goto LAB_1445dab13;
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
LAB_1445dab13:
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
  Discord_Client_SetStatusChangedCallback(param_1 + 0x28,FUN_1445f8b0e,&LAB_1445f2d54,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445dabe0 FUN_1445dabe0 body=47 status=ok
// SIG undefined FUN_1445dabe0(void)

longlong FUN_1445dabe0(void)

{
  if (DAT_14cc24010 == 0) {
    FUN_14000fc22(&DAT_14cc24010,&PTR_FUN_14be03f40);
  }
  return DAT_14cc24010;
}



// FUNCTION 1445dac10 FUN_1445dac10 body=1392 status=ok
// SIG undefined FUN_1445dac10(void)

void FUN_1445dac10(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  void *_Src;
  undefined4 *_Src_00;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined7 local_28;
  undefined1 uStack_21;
  
  local_28 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_21 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x38);
  uStack_2c = (uint)(uint3)uStack_2c;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,(longlong)&uStack_2c + 3);
            goto LAB_1445dadde;
          }
        }
        _Src = (void *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != (void *)((longlong)&uStack_2c + 3)) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,(longlong)&uStack_2c + 3,_Src,(int)plVar4[6]);
          }
          else {
            memcpy((void *)((longlong)&uStack_2c + 3),_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,(longlong)&uStack_2c + 3,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,(longlong)&uStack_2c + 3,lVar5);
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
      FUN_14002ddda(uVar2,param_2,(longlong)&uStack_2c + 3);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,(longlong)&uStack_2c + 3);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_2c._3_1_ = (undefined1)uVar2;
      local_28 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,(longlong)&uStack_2c + 3);
    }
  }
LAB_1445dadde:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_1445daf91;
          }
        }
        _Src_00 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_30 = (undefined4)uVar2;
      uStack_2c = (uint)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_1445daf91:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  Discord_Client_SetThreadPriority(param_1 + 0x28,uStack_2c._3_1_,local_30);
  if ((CONCAT17(uStack_21,local_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445db181 FUN_1445db181 body=47 status=ok
// SIG undefined FUN_1445db181(void)

longlong FUN_1445db181(void)

{
  if (DAT_14cc24018 == 0) {
    FUN_14000fc22(&DAT_14cc24018,&PTR_FUN_14be03fe8);
  }
  return DAT_14cc24018;
}



// FUNCTION 1445db1b0 FUN_1445db1b0 body=641 status=ok
// SIG undefined FUN_1445db1b0(void)

void FUN_1445db1b0(longlong param_1,longlong param_2)

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
            goto LAB_1445db365;
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
LAB_1445db365:
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
  Discord_Client_SetTokenExpirationCallback(param_1 + 0x28,FUN_1445f70ec,&LAB_1445f0dfc,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445db432 FUN_1445db432 body=47 status=ok
// SIG undefined FUN_1445db432(void)

longlong FUN_1445db432(void)

{
  if (DAT_14cc24020 == 0) {
    FUN_14000fc22(&DAT_14cc24020,&PTR_FUN_14be04088);
  }
  return DAT_14cc24020;
}



// FUNCTION 1445db462 FUN_1445db462 body=641 status=ok
// SIG undefined FUN_1445db462(void)

void FUN_1445db462(longlong param_1,longlong param_2)

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
            goto LAB_1445db617;
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
LAB_1445db617:
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
  Discord_Client_SetUserUpdatedCallback(param_1 + 0x28,FUN_1445fb50c,&LAB_1445f49aa,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445db6e4 FUN_1445db6e4 body=47 status=ok
// SIG undefined FUN_1445db6e4(void)

longlong FUN_1445db6e4(void)

{
  if (DAT_14cc24028 == 0) {
    FUN_14000fc22(&DAT_14cc24028,&PTR_FUN_14be041a8);
  }
  return DAT_14cc24028;
}



// FUNCTION 1445db714 FUN_1445db714 body=1268 status=ok
// SIG undefined FUN_1445db714(void)

void FUN_1445db714(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined7 *puVar9;
  undefined1 *_Src;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_48 = 0;
  uStack_41 = 0;
  uStack_40 = 0;
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
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_48);
            goto LAB_1445db8ca;
          }
        }
        puVar9 = (undefined7 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &uStack_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_48,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_48,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar4[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_48,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&uStack_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_48 = (undefined7)uVar2;
      uStack_41 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_48);
    }
  }
LAB_1445db8ca:
  puVar9 = &uStack_48;
  if (*(undefined7 **)(param_2 + 0x38) != (undefined7 *)0x0) {
    puVar9 = *(undefined7 **)(param_2 + 0x38);
  }
  local_49 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_140a4831c;
      local_78 = 0x1000000008001;
      local_70 = 0;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_49);
            goto LAB_1445dba8c;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_49) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_49,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_49,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar4[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_49,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_49,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_49);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_49);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_49 = (undefined1)uVar2;
      uStack_48 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_49);
    }
  }
LAB_1445dba8c:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445f2d5e(param_1,puVar9,local_49);
  if (CONCAT17(uStack_41,uStack_48) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445dbc09 FUN_1445dbc09 body=47 status=ok
// SIG undefined FUN_1445dbc09(void)

longlong FUN_1445dbc09(void)

{
  if (DAT_14cc24030 == 0) {
    FUN_14000fc22(&DAT_14cc24030,&PTR_FUN_14be04258);
  }
  return DAT_14cc24030;
}



// FUNCTION 1445dbc38 FUN_1445dbc38 body=641 status=ok
// SIG undefined FUN_1445dbc38(void)

void FUN_1445dbc38(longlong param_1,longlong param_2)

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
            goto LAB_1445dbded;
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
LAB_1445dbded:
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
  Discord_Client_SetVoiceParticipantChangedCallback
            (param_1 + 0x28,FUN_1445f5a64,&LAB_1445ee6d4,puVar9);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445dbebe FUN_1445dbebe body=47 status=ok
// SIG undefined FUN_1445dbebe(void)

longlong FUN_1445dbebe(void)

{
  if (DAT_14cc24038 == 0) {
    FUN_14000fc22(&DAT_14cc24038,&PTR_FUN_14be042f8);
  }
  return DAT_14cc24038;
}



// FUNCTION 1445dbeee FUN_1445dbeee body=41 status=ok
// SIG undefined FUN_1445dbeee(void)

void FUN_1445dbeee(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_Client_ShowAudioRoutePicker(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445dbf17 FUN_1445dbf17 body=47 status=ok
// SIG undefined FUN_1445dbf17(void)

longlong FUN_1445dbf17(void)

{
  if (DAT_14cc24040 == 0) {
    FUN_14000fc22(&DAT_14cc24040,&PTR_FUN_14be043e0);
  }
  return DAT_14cc24040;
}



// FUNCTION 1445dbf46 FUN_1445dbf46 body=744 status=ok
// SIG undefined FUN_1445dbf46(void)

void FUN_1445dbf46(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
            goto LAB_1445dc120;
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
LAB_1445dc120:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1445ee6de(param_1,local_38);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445dc22f FUN_1445dc22f body=47 status=ok
// SIG undefined FUN_1445dc22f(void)

longlong FUN_1445dc22f(void)

{
  if (DAT_14cc24048 == 0) {
    FUN_14000fc22(&DAT_14cc24048,&PTR_FUN_14be04580);
  }
  return DAT_14cc24048;
}



// FUNCTION 1445dc25e FUN_1445dc25e body=1851 status=ok
// SIG undefined FUN_1445dc25e(void)

void FUN_1445dc25e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar1 = *(code **)(*plVar2 + 0x120);
      if (pcVar1 == FUN_144afffdc) {
        pcVar1 = *(code **)(*plVar2 + 0x88);
        if (pcVar1 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar1)(plVar2);
          if (cVar5 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,&local_48);
            goto LAB_1445dc437;
          }
        }
        puVar8 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar8 != &local_48) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_48,puVar8,(int)plVar2[6]);
          }
          else {
            memcpy(&local_48,puVar8,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar1 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar2[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_48,lVar3,1);
      }
      else {
        (*pcVar1)(plVar2,&local_48,lVar3);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar8;
        puVar8 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
    }
LAB_1445dc437:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_48);
      goto LAB_1445dc437;
    }
    if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_48);
      goto LAB_1445dc437;
    }
    if (pcVar1 != (code *)&LAB_1428293cc) {
      (*pcVar1)(uVar7,param_2,&local_48);
      goto LAB_1445dc437;
    }
    local_48 = *(undefined8 *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar1 = *(code **)(*plVar2 + 0x120);
      if (pcVar1 == FUN_144afffdc) {
        pcVar1 = *(code **)(*plVar2 + 0x88);
        if (pcVar1 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar1)(plVar2);
          if (cVar5 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,&local_58);
            goto LAB_1445dc5b0;
          }
        }
        puVar8 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar8 != &local_58) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_58,puVar8,(int)plVar2[6]);
          }
          else {
            memcpy(&local_58,puVar8,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar1 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar2[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_58,lVar3,1);
      }
      else {
        (*pcVar1)(plVar2,&local_58,lVar3);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar8;
        puVar8 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
    }
LAB_1445dc5b0:
    pbVar6 = *(byte **)(param_2 + 0x20);
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_58);
      goto LAB_1445dc5b0;
    }
    if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_58);
      goto LAB_1445dc5b0;
    }
    if (pcVar1 != (code *)&LAB_1428293cc) {
      (*pcVar1)(uVar7,param_2,&local_58);
      goto LAB_1445dc5b0;
    }
    local_58 = *(undefined8 *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    puVar8 = (undefined8 *)0x0;
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar1 = *(code **)(*plVar2 + 0x120);
      if (pcVar1 == FUN_144afffdc) {
        pcVar1 = *(code **)(*plVar2 + 0x88);
        if (pcVar1 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar1)(plVar2);
          if (cVar5 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,&local_68);
            goto LAB_1445dc786;
          }
        }
        puVar9 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar9 != &local_68) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_68,puVar9,(int)plVar2[6]);
          }
          else {
            memcpy(&local_68,puVar9,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar1 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar2[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_68,lVar3,1);
      }
      else {
        (*pcVar1)(plVar2,&local_68,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_68);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_68);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar1)(uVar7,param_2,&local_68);
    }
  }
LAB_1445dc786:
  puVar9 = &local_58;
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = puVar8;
  }
  puVar8 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = *puVar8;
  local_70 = puVar8[1];
  local_88 = *puVar9;
  local_80 = puVar9[1];
  uVar7 = FUN_1445ee748(param_1,local_48);
  *param_3 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445dc99a FUN_1445dc99a body=47 status=ok
// SIG undefined FUN_1445dc99a(void)

longlong FUN_1445dc99a(void)

{
  if (DAT_14cc24050 == 0) {
    FUN_14000fc22(&DAT_14cc24050,&PTR_FUN_14be04698);
  }
  return DAT_14cc24050;
}



// FUNCTION 1445dc9ca FUN_1445dc9ca body=798 status=ok
// SIG undefined FUN_1445dc9ca(void)

void FUN_1445dc9ca(undefined8 param_1,longlong param_2,longlong *param_3)

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
            goto LAB_1445dcb98;
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
LAB_1445dcb98:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445edd84(&local_40,local_29);
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



// FUNCTION 1445dcce9 FUN_1445dcce9 body=47 status=ok
// SIG undefined FUN_1445dcce9(void)

longlong FUN_1445dcce9(void)

{
  if (DAT_14cc24058 == 0) {
    FUN_14000fc22(&DAT_14cc24058,&PTR_FUN_14be047b8);
  }
  return DAT_14cc24058;
}



// FUNCTION 1445dcd18 FUN_1445dcd18 body=798 status=ok
// SIG undefined FUN_1445dcd18(void)

void FUN_1445dcd18(undefined8 param_1,longlong param_2,longlong *param_3)

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
            goto LAB_1445dcee6;
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
LAB_1445dcee6:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445eddea(&local_40,local_29);
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



// FUNCTION 1445dd037 FUN_1445dd037 body=47 status=ok
// SIG undefined FUN_1445dd037(void)

longlong FUN_1445dd037(void)

{
  if (DAT_14cc24060 == 0) {
    FUN_14000fc22(&DAT_14cc24060,&PTR_FUN_14be048a0);
  }
  return DAT_14cc24060;
}



// FUNCTION 1445dd066 FUN_1445dd066 body=1292 status=ok
// SIG undefined FUN_1445dd066(void)

void FUN_1445dd066(longlong param_1,longlong param_2)

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
            goto LAB_1445dd21d;
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
LAB_1445dd21d:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445dd21d;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445dd21d;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445dd21d;
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
            goto LAB_1445dd3cd;
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
LAB_1445dd3cd:
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
  Discord_Client_UnblockUser(param_1 + 0x28,uVar1,FUN_1445fb2d6,&LAB_1445f3e86);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445dd573 FUN_1445dd573 body=47 status=ok
// SIG undefined FUN_1445dd573(void)

longlong FUN_1445dd573(void)

{
  if (DAT_14cc24068 == 0) {
    FUN_14000fc22(&DAT_14cc24068,&PTR_FUN_14be04988);
  }
  return DAT_14cc24068;
}



// FUNCTION 1445dd5a2 FUN_1445dd5a2 body=1292 status=ok
// SIG undefined FUN_1445dd5a2(void)

void FUN_1445dd5a2(longlong param_1,longlong param_2)

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
            goto LAB_1445dd759;
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
LAB_1445dd759:
    pbVar9 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445dd759;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445dd759;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445dd759;
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
            goto LAB_1445dd909;
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
LAB_1445dd909:
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
  Discord_Client_UnlinkChannelFromLobby(param_1 + 0x28,uVar1,FUN_1445f9dd0,&LAB_1445f37e8);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ddaaf FUN_1445ddaaf body=47 status=ok
// SIG undefined FUN_1445ddaaf(void)

longlong FUN_1445ddaaf(void)

{
  if (DAT_14cc24070 == 0) {
    FUN_14000fc22(&DAT_14cc24070,&PTR_FUN_14be04b48);
  }
  return DAT_14cc24070;
}



// FUNCTION 1445ddade FUN_1445ddade body=2490 status=ok
// SIG undefined FUN_1445ddade(void)

void FUN_1445ddade(undefined8 param_1,longlong param_2)

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
            goto LAB_1445ddcd7;
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
LAB_1445ddcd7:
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
            goto LAB_1445dde67;
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
LAB_1445dde67:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_39);
      goto LAB_1445dde67;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_39);
      goto LAB_1445dde67;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_39);
      goto LAB_1445dde67;
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
            goto LAB_1445ddfdc;
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
LAB_1445ddfdc:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_58);
      goto LAB_1445ddfdc;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_58);
      goto LAB_1445ddfdc;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_58);
      goto LAB_1445ddfdc;
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
            goto LAB_1445de1b9;
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
LAB_1445de1b9:
  puVar9 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = *puVar9;
  local_98 = &local_78;
  local_70 = puVar9[1];
  FUN_1445f0e06(param_1,CONCAT17(uStack_31,uStack_38),local_39,plVar8);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445de499 FUN_1445de499 body=47 status=ok
// SIG undefined FUN_1445de499(void)

longlong FUN_1445de499(void)

{
  if (DAT_14cc24078 == 0) {
    FUN_14000fc22(&DAT_14cc24078,&PTR_FUN_14be04c38);
  }
  return DAT_14cc24078;
}



// FUNCTION 1445de4c8 FUN_1445de4c8 body=1139 status=ok
// SIG undefined FUN_1445de4c8(void)

void FUN_1445de4c8(undefined8 param_1,longlong param_2)

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
            goto LAB_1445de65d;
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
LAB_1445de65d:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445de65d;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445de65d;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445de65d;
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
            goto LAB_1445de822;
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
LAB_1445de822:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445f10e6(param_1,plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445de93c FUN_1445de93c body=47 status=ok
// SIG undefined FUN_1445de93c(void)

longlong FUN_1445de93c(void)

{
  if (DAT_14cc24080 == 0) {
    FUN_14000fc22(&DAT_14cc24080,&PTR_FUN_14be04d28);
  }
  return DAT_14cc24080;
}



// FUNCTION 1445de96c FUN_1445de96c body=1303 status=ok
// SIG undefined FUN_1445de96c(void)

void FUN_1445de96c(longlong param_1,longlong param_2)

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
            goto LAB_1445deb23;
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
LAB_1445deb23:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_1445deb23;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_1445deb23;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_1445deb23;
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
            goto LAB_1445decd3;
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
LAB_1445decd3:
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
  Discord_Client_UpdateRichPresence(param_1 + 0x28,lVar8,FUN_1445fa7fe,&LAB_1445f3e7c);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445dee84 FUN_1445dee84 body=47 status=ok
// SIG undefined FUN_1445dee84(void)

longlong FUN_1445dee84(void)

{
  if (DAT_14cc24088 == 0) {
    FUN_14000fc22(&DAT_14cc24088,&PTR_FUN_14be04e90);
  }
  return DAT_14cc24088;
}



// FUNCTION 1445deeb4 FUN_1445deeb4 body=1787 status=ok
// SIG undefined FUN_1445deeb4(void)

void FUN_1445deeb4(undefined8 param_1,longlong param_2)

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
            goto LAB_1445df067;
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
LAB_1445df067:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_31);
      goto LAB_1445df067;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_31);
      goto LAB_1445df067;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_31);
      goto LAB_1445df067;
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
            goto LAB_1445df1dc;
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
LAB_1445df1dc:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_1445df1dc;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_1445df1dc;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_1445df1dc;
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
            goto LAB_1445df3b9;
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
LAB_1445df3b9:
  puVar9 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = *puVar9;
  local_60 = puVar9[1];
  FUN_1445f139c(param_1,local_31,plVar8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((CONCAT17(uStack_29,uStack_30) ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445df5b0 FUN_1445df5b0 body=34 status=ok
// SIG undefined FUN_1445df5b0(void)

void FUN_1445df5b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1445df5d8();
  FUN_14069c8d6(uVar1,&PTR_s_AbortAuthorize_14be04ed0,0x9d);
  return;
}



// FUNCTION 1445df5d8 FUN_1445df5d8 body=220 status=ok
// SIG undefined FUN_1445df5d8(void)

longlong FUN_1445df5d8(void)

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
  if (DAT_14cc24090 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1445df6b5;
    local_40 = FUN_1445df6b8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/DiscordPartnerSDK",L"DiscordClient",&DAT_14cc24090,FUN_1445df5b0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc24090;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445df6b8 FUN_1445df6b8 body=98 status=ok
// SIG undefined FUN_1445df6b8(void)

void FUN_1445df6b8(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14be0dc50;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1445df71a FUN_1445df71a body=47 status=ok
// SIG undefined FUN_1445df71a(void)

longlong FUN_1445df71a(void)

{
  if (DAT_14cc240d8 == 0) {
    FUN_14073dd9a(&DAT_14cc240d8,&PTR_LAB_14be066d0);
  }
  return DAT_14cc240d8;
}



// FUNCTION 1445df749 FUN_1445df749 body=47 status=ok
// SIG undefined FUN_1445df749(void)

longlong FUN_1445df749(void)

{
  if (DAT_14cc240a8 == 0) {
    FUN_14000fc22(&DAT_14cc240a8,&PTR_FUN_14be06338);
  }
  return DAT_14cc240a8;
}



// FUNCTION 1445df778 FUN_1445df778 body=42 status=ok
// SIG undefined FUN_1445df778(void)

void FUN_1445df778(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_CallInfoHandle_ChannelId(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445df7a2 FUN_1445df7a2 body=47 status=ok
// SIG undefined FUN_1445df7a2(void)

longlong FUN_1445df7a2(void)

{
  if (DAT_14cc240b0 == 0) {
    FUN_14000fc22(&DAT_14cc240b0,&PTR_FUN_14be06378);
  }
  return DAT_14cc240b0;
}



// FUNCTION 1445df7d2 FUN_1445df7d2 body=52 status=ok
// SIG undefined FUN_1445df7d2(void)

void FUN_1445df7d2(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x30) == 1) {
    Discord_CallInfoHandle_Drop(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1445df806 FUN_1445df806 body=47 status=ok
// SIG undefined FUN_1445df806(void)

longlong FUN_1445df806(void)

{
  if (DAT_14cc240b8 == 0) {
    FUN_14000fc22(&DAT_14cc240b8,&PTR_FUN_14be06440);
  }
  return DAT_14cc240b8;
}



// FUNCTION 1445df836 FUN_1445df836 body=139 status=ok
// SIG undefined FUN_1445df836(void)

void FUN_1445df836(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445f49ea(param_1,&local_28);
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



// FUNCTION 1445df8c2 FUN_1445df8c2 body=47 status=ok
// SIG undefined FUN_1445df8c2(void)

longlong FUN_1445df8c2(void)

{
  if (DAT_14cc240c0 == 0) {
    FUN_14000fc22(&DAT_14cc240c0,&PTR_FUN_14be06510);
  }
  return DAT_14cc240c0;
}



// FUNCTION 1445df8f2 FUN_1445df8f2 body=744 status=ok
// SIG undefined FUN_1445df8f2(void)

void FUN_1445df8f2(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
            goto LAB_1445dfacc;
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
LAB_1445dfacc:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1445f4aa4(param_1,local_38);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445dfbdb FUN_1445dfbdb body=47 status=ok
// SIG undefined FUN_1445dfbdb(void)

longlong FUN_1445dfbdb(void)

{
  if (DAT_14cc240c8 == 0) {
    FUN_14000fc22(&DAT_14cc240c8,&PTR_FUN_14be06598);
  }
  return DAT_14cc240c8;
}



// FUNCTION 1445dfc0a FUN_1445dfc0a body=42 status=ok
// SIG undefined FUN_1445dfc0a(void)

void FUN_1445dfc0a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = Discord_CallInfoHandle_GuildId(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1445dfc34 FUN_1445dfc34 body=34 status=ok
// SIG undefined FUN_1445dfc34(void)

void FUN_1445dfc34(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1445dfc5c();
  FUN_14069c8d6(uVar1,&PTR_s_ChannelId_14be065e0,5);
  return;
}



// FUNCTION 1445dfc5c FUN_1445dfc5c body=220 status=ok
// SIG undefined FUN_1445dfc5c(void)

longlong FUN_1445dfc5c(void)

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
  if (DAT_14cc240d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1445dfd39;
    local_40 = FUN_1445dfd3c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/DiscordPartnerSDK",L"DiscordCallInfoHandle",&DAT_14cc240d0,FUN_1445dfc34
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc240d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445dfd3c FUN_1445dfd3c body=98 status=ok
// SIG undefined FUN_1445dfd3c(void)

void FUN_1445dfd3c(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14be0def0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1445dfd9e FUN_1445dfd9e body=403 status=ok
// SIG undefined FUN_1445dfd9e(void)

undefined8 * FUN_1445dfd9e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bde1520;
  plVar2 = (longlong *)param_1[0x2a];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar2 = param_1 + 0xd;
  if (*(int *)(param_1 + 0xe) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1445dfee1;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_1445dfee1:
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445dff32 FUN_1445dff32 body=65 status=ok
// SIG undefined FUN_1445dff32(void)

undefined8 * FUN_1445dff32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be08ad0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445dff74 FUN_1445dff74 body=38 status=ok
// SIG undefined FUN_1445dff74(void)

undefined8 FUN_1445dff74(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445dff9a FUN_1445dff9a body=38 status=ok
// SIG undefined FUN_1445dff9a(void)

undefined8 FUN_1445dff9a(undefined8 param_1,int param_2)

{
  FUN_1445e4006();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445dffc0 FUN_1445dffc0 body=38 status=ok
// SIG undefined FUN_1445dffc0(void)

undefined8 FUN_1445dffc0(undefined8 param_1,int param_2)

{
  FUN_1445e4668();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445dffe6 FUN_1445dffe6 body=38 status=ok
// SIG undefined FUN_1445dffe6(void)

undefined8 FUN_1445dffe6(undefined8 param_1,int param_2)

{
  FUN_1445e5c70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e000c FUN_1445e000c body=38 status=ok
// SIG undefined FUN_1445e000c(void)

undefined8 FUN_1445e000c(undefined8 param_1,int param_2)

{
  FUN_1445e5ca6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0032 FUN_1445e0032 body=38 status=ok
// SIG undefined FUN_1445e0032(void)

undefined8 FUN_1445e0032(undefined8 param_1,int param_2)

{
  FUN_1445e5ff2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0058 FUN_1445e0058 body=38 status=ok
// SIG undefined FUN_1445e0058(void)

undefined8 FUN_1445e0058(undefined8 param_1,int param_2)

{
  FUN_1445e633e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e007e FUN_1445e007e body=38 status=ok
// SIG undefined FUN_1445e007e(void)

undefined8 FUN_1445e007e(undefined8 param_1,int param_2)

{
  FUN_1445e69a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e00a4 FUN_1445e00a4 body=38 status=ok
// SIG undefined FUN_1445e00a4(void)

undefined8 FUN_1445e00a4(undefined8 param_1,int param_2)

{
  FUN_1445e7f34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e00ca FUN_1445e00ca body=38 status=ok
// SIG undefined FUN_1445e00ca(void)

undefined8 FUN_1445e00ca(undefined8 param_1,int param_2)

{
  FUN_1445e85fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e00f0 FUN_1445e00f0 body=38 status=ok
// SIG undefined FUN_1445e00f0(void)

undefined8 FUN_1445e00f0(undefined8 param_1,int param_2)

{
  FUN_1445e894a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0116 FUN_1445e0116 body=38 status=ok
// SIG undefined FUN_1445e0116(void)

undefined8 FUN_1445e0116(undefined8 param_1,int param_2)

{
  FUN_1445e8d52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e013c FUN_1445e013c body=38 status=ok
// SIG undefined FUN_1445e013c(void)

undefined8 FUN_1445e013c(undefined8 param_1,int param_2)

{
  FUN_1445e9a5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0162 FUN_1445e0162 body=38 status=ok
// SIG undefined FUN_1445e0162(void)

undefined8 FUN_1445e0162(undefined8 param_1,int param_2)

{
  FUN_1445e9da6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0188 FUN_1445e0188 body=38 status=ok
// SIG undefined FUN_1445e0188(void)

undefined8 FUN_1445e0188(undefined8 param_1,int param_2)

{
  FUN_1445e9ddc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e01ae FUN_1445e01ae body=38 status=ok
// SIG undefined FUN_1445e01ae(void)

undefined8 FUN_1445e01ae(undefined8 param_1,int param_2)

{
  FUN_1445e9e12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e01d4 FUN_1445e01d4 body=38 status=ok
// SIG undefined FUN_1445e01d4(void)

undefined8 FUN_1445e01d4(undefined8 param_1,int param_2)

{
  FUN_1445ea278();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e01fa FUN_1445e01fa body=38 status=ok
// SIG undefined FUN_1445e01fa(void)

undefined8 FUN_1445e01fa(undefined8 param_1,int param_2)

{
  FUN_1445ea3d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0220 FUN_1445e0220 body=38 status=ok
// SIG undefined FUN_1445e0220(void)

undefined8 FUN_1445e0220(undefined8 param_1,int param_2)

{
  FUN_1445ea71c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0246 FUN_1445e0246 body=38 status=ok
// SIG undefined FUN_1445e0246(void)

undefined8 FUN_1445e0246(undefined8 param_1,int param_2)

{
  FUN_1445eab7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e026c FUN_1445e026c body=38 status=ok
// SIG undefined FUN_1445e026c(void)

undefined8 FUN_1445e026c(undefined8 param_1,int param_2)

{
  FUN_1445eabb0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0292 FUN_1445e0292 body=38 status=ok
// SIG undefined FUN_1445e0292(void)

undefined8 FUN_1445e0292(undefined8 param_1,int param_2)

{
  FUN_1445eaefc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e02b8 FUN_1445e02b8 body=38 status=ok
// SIG undefined FUN_1445e02b8(void)

undefined8 FUN_1445e02b8(undefined8 param_1,int param_2)

{
  FUN_1445eb044();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e02de FUN_1445e02de body=38 status=ok
// SIG undefined FUN_1445e02de(void)

undefined8 FUN_1445e02de(undefined8 param_1,int param_2)

{
  FUN_1445eb28a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0304 FUN_1445e0304 body=38 status=ok
// SIG undefined FUN_1445e0304(void)

undefined8 FUN_1445e0304(undefined8 param_1,int param_2)

{
  FUN_1445eb892();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e032a FUN_1445e032a body=38 status=ok
// SIG undefined FUN_1445e032a(void)

undefined8 FUN_1445e032a(undefined8 param_1,int param_2)

{
  FUN_1445ebab6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0350 FUN_1445e0350 body=38 status=ok
// SIG undefined FUN_1445e0350(void)

undefined8 FUN_1445e0350(undefined8 param_1,int param_2)

{
  FUN_1445ec022();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0376 FUN_1445e0376 body=38 status=ok
// SIG undefined FUN_1445e0376(void)

undefined8 FUN_1445e0376(undefined8 param_1,int param_2)

{
  FUN_1445ec3dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e039c FUN_1445e039c body=38 status=ok
// SIG undefined FUN_1445e039c(void)

undefined8 FUN_1445e039c(undefined8 param_1,int param_2)

{
  FUN_1445ec9b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e03c2 FUN_1445e03c2 body=38 status=ok
// SIG undefined FUN_1445e03c2(void)

undefined8 FUN_1445e03c2(undefined8 param_1,int param_2)

{
  FUN_1445ed01a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e03e8 FUN_1445e03e8 body=38 status=ok
// SIG undefined FUN_1445e03e8(void)

undefined8 FUN_1445e03e8(undefined8 param_1,int param_2)

{
  FUN_1445ed050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e040e FUN_1445e040e body=38 status=ok
// SIG undefined FUN_1445e040e(void)

undefined8 FUN_1445e040e(undefined8 param_1,int param_2)

{
  FUN_1445ed6b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e0434 FUN_1445e0434 body=38 status=ok
// SIG undefined FUN_1445e0434(void)

undefined8 FUN_1445e0434(undefined8 param_1,int param_2)

{
  FUN_1445f49b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e045a FUN_1445e045a body=29 status=ok
// SIG undefined FUN_1445e045a(void)

undefined8 FUN_1445e045a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445e04f8 FUN_1445e04f8 body=82 status=ok
// SIG undefined FUN_1445e04f8(void)

int FUN_1445e04f8(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e05b2 FUN_1445e05b2 body=310 status=ok
// SIG undefined FUN_1445e05b2(void)

void FUN_1445e05b2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445e061c;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1445e061c:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1445e06e8 FUN_1445e06e8 body=310 status=ok
// SIG undefined FUN_1445e06e8(void)

void FUN_1445e06e8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445e0752;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1445e0752:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1445e081e FUN_1445e081e body=310 status=ok
// SIG undefined FUN_1445e081e(void)

void FUN_1445e081e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445e0888;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1445e0888:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1445e0954 FUN_1445e0954 body=310 status=ok
// SIG undefined FUN_1445e0954(void)

void FUN_1445e0954(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445e09be;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1445e09be:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1445e0a8a FUN_1445e0a8a body=310 status=ok
// SIG undefined FUN_1445e0a8a(void)

void FUN_1445e0a8a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445e0af4;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1445e0af4:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1445e0bc0 FUN_1445e0bc0 body=195 status=ok
// SIG undefined FUN_1445e0bc0(void)

void FUN_1445e0bc0(void)

{
  FUN_14282b410(L"/Script/DiscordPartnerSDK",&PTR_FUN_14bde17e0,1,0,0,0,0);
  FUN_14282b410(L"/Script/DiscordPartnerSDK",&PTR_FUN_14bde2030,1,0,0,0,0);
  FUN_14282b410(L"/Script/DiscordPartnerSDK",&PTR_FUN_14bde29a0,1,&PTR_FUN_14bde2970,1,0,0);
  FUN_14282b410(L"/Script/DiscordPartnerSDK",&PTR_FUN_14be06a70,0x20,0,0,&PTR_FUN_14be06710,0x1b);
  return;
}



// FUNCTION 1445e0c84 FUN_1445e0c84 body=49 status=ok
// SIG undefined FUN_1445e0c84(void)

void FUN_1445e0c84(void)

{
  FUN_144760e21(DAT_14cc240e8,DAT_14cc240f0);
  if (DAT_14cc240e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1445e0cb6 FUN_1445e0cb6 body=9722 status=ok
// SIG undefined FUN_1445e0cb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445e0cb6(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 *local_e8;
  int local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  uVar8 = DAT_14c951640;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14058b40c(DAT_14c951640,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_d8 = (undefined8 *)FUN_1445df5d8();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_d0 = (longlong *)uVar8;
  lVar5 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar9 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar9 = local_78;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  *(longlong *)(param_1 + 0x30) = lVar5;
  Discord_Client_Init(lVar5 + 0x28);
  *(undefined4 *)(lVar5 + 0x30) = 1;
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e4b0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0e440;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_1446016e2(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_1446016e2(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e0eb2:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e0eb2;
  }
  Discord_Client_SetStatusChangedCallback(lVar5 + 0x28,&LAB_1445f8ae8,FUN_1445f2cf4,puVar6);
  if (local_e0 == 0) {
LAB_1445e0f14:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e0f14;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e590;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0e520;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_14460180a(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_14460180a(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e1055:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e1055;
  }
  Discord_Client_SetActivityInviteCreatedCallback(lVar5 + 0x28,FUN_1445fa242,FUN_1445f3d94,puVar6);
  if (local_e0 == 0) {
LAB_1445e10b7:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e10b7;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14a9b20d0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0e600;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_148a63114(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_148a63114(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e11f8:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e11f8;
  }
  Discord_Client_SetActivityJoinCallback(lVar5 + 0x28,FUN_1445fa49a,FUN_1445f3dfe,puVar6);
  if (local_e0 == 0) {
LAB_1445e125a:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e125a;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e6e0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0e670;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_144600a98(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_144600a98(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e139c:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e139c;
  }
  Discord_Client_SetLobbyCreatedCallback(lVar5 + 0x28,&LAB_1445f999e,FUN_1445ea12a,puVar6);
  if (local_e0 == 0) {
LAB_1445e13fe:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e13fe;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e6e0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0e750;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_144600a98(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_144600a98(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e1539:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e1539;
  }
  Discord_Client_SetLobbyUpdatedCallback(lVar5 + 0x28,&LAB_1445f9d24,FUN_1445ea12a,puVar6);
  if (local_e0 == 0) {
LAB_1445e159b:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e159b;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e6e0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0e7c0;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_144600a98(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_144600a98(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e16d6:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e16d6;
  }
  Discord_Client_SetLobbyDeletedCallback(lVar5 + 0x28,&LAB_1445f9a4a,FUN_1445ea12a,puVar6);
  if (local_e0 == 0) {
LAB_1445e1738:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e1738;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e8a0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0e830;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_1446015ba(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_1446015ba(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e1879:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e1879;
  }
  Discord_Client_SetLobbyMemberAddedCallback(lVar5 + 0x28,&LAB_1445f9af6,FUN_1445f29e0,puVar6);
  if (local_e0 == 0) {
LAB_1445e18db:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e18db;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e8a0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0e910;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_1446015ba(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_1446015ba(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e1a15:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e1a15;
  }
  Discord_Client_SetLobbyMemberUpdatedCallback(lVar5 + 0x28,&LAB_1445f9c6a,FUN_1445f29e0,puVar6);
  if (local_e0 == 0) {
LAB_1445e1a77:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e1a77;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e8a0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0e980;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_1446015ba(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_1446015ba(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e1bb1:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e1bb1;
  }
  Discord_Client_SetLobbyMemberRemovedCallback(lVar5 + 0x28,&LAB_1445f9bb0,FUN_1445f29e0,puVar6);
  if (local_e0 == 0) {
LAB_1445e1c13:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e1c13;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e6e0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0e9f0;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_144600a98(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_144600a98(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e1d4d:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e1d4d;
  }
  Discord_Client_SetMessageCreatedCallback(lVar5 + 0x28,&LAB_1445f85f6,FUN_1445ea12a,puVar6);
  if (local_e0 == 0) {
LAB_1445e1daf:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e1daf;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e8a0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0ea60;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_1446015ba(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_1446015ba(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e1eea:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e1eea;
  }
  Discord_Client_SetMessageDeletedCallback(lVar5 + 0x28,&LAB_1445f86a2,FUN_1445f29e0,puVar6);
  if (local_e0 == 0) {
LAB_1445e1f4c:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e1f4c;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e6e0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0ead0;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_144600a98(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_144600a98(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e2087:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e2087;
  }
  Discord_Client_SetMessageUpdatedCallback(lVar5 + 0x28,&LAB_1445f875c,FUN_1445ea12a,puVar6);
  if (local_e0 == 0) {
LAB_1445e20e9:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e20e9;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0eb40;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_14114e6dc(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_14114e6dc(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e222b:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e222b;
  }
  Discord_Client_SetNoAudioInputCallback(lVar5 + 0x28,&LAB_1445f5910,FUN_1445ee3b4,puVar6);
  if (local_e0 == 0) {
LAB_1445e228d:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e228d;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0ec20;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0ebb0;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_144600bc0(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_144600bc0(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e23ce:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e23ce;
  }
  Discord_Client_SetRelationshipCreatedCallback(lVar5 + 0x28,&LAB_1445fb166,FUN_1445ea194,puVar6);
  if (local_e0 == 0) {
LAB_1445e2430:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e2430;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0ec20;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0ec90;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_144600bc0(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_144600bc0(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e256b:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e256b;
  }
  Discord_Client_SetRelationshipDeletedCallback(lVar5 + 0x28,&LAB_1445fb21e,FUN_1445ea194,puVar6);
  if (local_e0 == 0) {
LAB_1445e25cd:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e25cd;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14be0e6e0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14be0ed00;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_d8 = (undefined8 *)0x0;
  local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
  FUN_144600a98(&local_d8,&local_e8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_144600a98(puVar6,&local_d8);
  if ((int)local_d0 == 0) {
LAB_1445e2707:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
    goto LAB_1445e2707;
  }
  Discord_Client_SetUserUpdatedCallback(lVar5 + 0x28,&LAB_1445fb4ec,FUN_1445ea12a,puVar6);
  if (local_e0 == 0) {
LAB_1445e2769:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1445e2769;
  }
  uVar7 = FUN_145d2af38();
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar6 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_e8[2] = lVar14;
  *local_e8 = &PTR_FUN_14be0ed70;
  local_e8[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar11 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar5 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar5 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar11;
  puVar6[4] = FUN_1445e32b2;
  local_f8 = 0;
  FUN_1405f67fc(uVar7,&local_d8,&local_e8,L"UDiscordLocalPlayerSubsystem");
  *(undefined8 **)(param_1 + 0x148) = local_d8;
  local_d8 = (undefined8 *)0x0;
  plVar9 = *(longlong **)(param_1 + 0x150);
  *(longlong **)(param_1 + 0x150) = local_d0;
  local_d0 = (longlong *)0x0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
  }
  if (local_e0 != 0) {
    if (local_e8 == (undefined8 *)0x0) goto LAB_1445e28f3;
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1445e28f3:
  uVar8 = (ulonglong)DAT_14cc240f0;
  if (0 < (longlong)uVar8) {
    bVar15 = false;
    DAT_14cc240fc = DAT_14cc240fc + 1;
    do {
      lVar5 = uVar8 * 0x10 + -8;
      uVar12 = uVar8;
      while (((*(int *)(DAT_14cc240e8 + lVar5) != 0 &&
              (plVar9 = *(longlong **)(DAT_14cc240e8 + -8 + lVar5), plVar9 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar9 + 0x60))(), cVar4 != '\0'))) {
        lVar5 = lVar5 + -0x10;
        bVar3 = uVar12 < 2;
        uVar12 = uVar12 - 1;
        if (bVar3) {
          DAT_14cc240fc = DAT_14cc240fc + -1;
          if (bVar15) goto LAB_1445e2975;
          goto LAB_1445e29f5;
        }
      }
      uVar8 = uVar12 - 1;
      bVar15 = true;
    } while (1 < uVar12);
    DAT_14cc240fc = DAT_14cc240fc + -1;
LAB_1445e2975:
    iVar11 = DAT_14cc240f0;
    if (DAT_14cc240fc < 1) {
      if (0 < DAT_14cc240f0) {
        iVar13 = 0;
        do {
          if (((*(int *)(DAT_14cc240e8 + 8 + (longlong)iVar13 * 0x10) == 0) ||
              (plVar9 = *(longlong **)(DAT_14cc240e8 + (longlong)iVar13 * 0x10),
              plVar9 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar9 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14cc240e8,iVar13);
            FUN_14005b248(&DAT_14cc240e8);
          }
          else {
            iVar13 = iVar13 + 1;
          }
        } while (iVar13 < DAT_14cc240f0);
      }
      _DAT_14cc240f8 = 2;
      if (2 < DAT_14cc240f0 * 2) {
        _DAT_14cc240f8 = DAT_14cc240f0 * 2;
      }
      if ((_DAT_14cc240f8 < iVar11) && (DAT_14cc240f4 != DAT_14cc240f0)) {
        FUN_14045812c(&DAT_14cc240e8);
      }
    }
  }
LAB_1445e29f5:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e32b2 FUN_1445e32b2 body=16 status=ok
// SIG undefined FUN_1445e32b2(void)

undefined1 FUN_1445e32b2(void)

{
  Discord_RunCallbacks();
  return 1;
}



// FUNCTION 1445e32c2 FUN_1445e32c2 body=178 status=ok
// SIG undefined FUN_1445e32c2(void)

void FUN_1445e32c2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x148) != 0) && (*(longlong *)(param_1 + 0x150) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x150) + 8))) {
    FUN_145d2af38();
    local_20 = *(undefined8 *)(param_1 + 0x148);
    local_18 = *(longlong *)(param_1 + 0x150);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar2 = *(longlong **)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    Discord_Client_Disconnect(*(longlong *)(param_1 + 0x30) + 0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1445e337a FUN_1445e337a body=467 status=ok
// SIG undefined FUN_1445e337a(void)

void FUN_1445e337a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  Discord_Client_Disconnect(*(longlong *)(param_1 + 0x30) + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14be0ee50;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_50[2] = lVar4;
  *local_50 = &PTR_FUN_14be0ede0;
  local_50[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar5;
  puVar3[4] = param_1;
  FUN_1445e354e(uVar2,1,param_2,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1445e34bc;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1445e34bc:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e354e FUN_1445e354e body=810 status=ok
// SIG undefined FUN_1445e354e(void)

void FUN_1445e354e(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4)

{
  wchar_t wVar1;
  undefined1 *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  char cVar5;
  size_t sVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *_Str;
  int iVar12;
  undefined1 auStack_148 [32];
  code *local_128;
  undefined8 *local_120;
  undefined1 local_111;
  undefined1 *local_110;
  longlong local_108;
  undefined8 *local_100;
  int local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar11 = 0;
  }
  else {
    local_111 = param_2;
    sVar6 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar9 = sVar6 & 0xffffffff;
    pwVar10 = _Str;
    do {
      iVar12 = (int)uVar9;
      if (iVar12 < 1) {
LAB_1445e3684:
        local_50 = local_e4;
        uVar8 = local_e4 + 1;
        if (uVar8 < 0x81) goto LAB_1445e369d;
        FUN_1446efa72(&local_60,0,uVar8,1);
        local_f0 = local_60;
        goto LAB_1445e369f;
      }
      wVar1 = *pwVar10;
      uVar8 = (uint)(ushort)wVar1;
      pwVar3 = pwVar10 + 1;
      uVar9 = (ulonglong)(iVar12 - 1);
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar12 == 1) {
          cVar5 = FUN_140024707(uVar8,&local_e4,&local_f0);
          if (cVar5 != '\0') goto LAB_1445e3684;
          break;
        }
        if (((ushort)*pwVar3 & 0xfc00) == 0xdc00) {
          uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar3 + 0xfca02400;
          uVar9 = (ulonglong)(iVar12 - 2);
          pwVar3 = pwVar10 + 2;
        }
      }
      pwVar10 = pwVar3;
      cVar5 = FUN_140024707(uVar8,&local_e4,&local_f0);
    } while (cVar5 != '\0');
    local_50 = 0xffffffff;
    uVar8 = 0;
LAB_1445e369d:
    local_f0 = (undefined1 *)0x0;
LAB_1445e369f:
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
      pwVar10 = _Str + 1;
      iVar4 = iVar12 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar12 == 1) {
          FUN_1400247af(uVar8,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
          uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
          pwVar10 = _Str + 2;
          iVar4 = iVar12 + -2;
        }
      }
      iVar12 = iVar4;
      cVar5 = FUN_1400247af(uVar8,&local_f0,&local_e4);
      _Str = pwVar10;
    } while (cVar5 != '\0');
    lVar11 = (longlong)(int)local_50;
    param_2 = local_111;
  }
  puVar2 = local_58;
  puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  local_100 = (undefined8 *)0x0;
  local_f8 = 0;
  FUN_144601492(&local_100,param_4);
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 1) = 0;
  FUN_144601492(puVar7,&local_100);
  if (local_f8 != 0) {
    if (local_100 == (undefined8 *)0x0) goto LAB_1445e37fe;
    (**(code **)*local_100)(local_100,0);
    FUN_1446efa72(&local_100,0,0,0x10);
    local_f8 = 0;
  }
  if (local_100 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1445e37fe:
  local_128 = FUN_1445ee09e;
  local_120 = puVar7;
  local_110 = puVar2;
  local_108 = lVar11;
  Discord_Client_UpdateToken(param_1 + 0x28,param_2,&local_110,FUN_1445f72c8);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e387a FUN_1445e387a body=622 status=ok
// SIG undefined FUN_1445e387a(void)

void FUN_1445e387a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  size_t sVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
    FUN_1413288e0(&DAT_14c926ca8);
    atexit(FUN_1427ac032);
    _Init_thread_footer(&DAT_14c926f30);
  }
  (**(code **)(DAT_14c926ca8 + 0x68))(&DAT_14c926ca8,&local_48,"DiscordPartnerSDK");
  (**(code **)(*(longlong *)local_48 + 0x20))(local_48,&local_58);
  plVar2 = (longlong *)CONCAT44(uStack_3c,local_40);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  local_48 = local_58;
  if (local_50 == 0) {
    local_48 = L"";
  }
  if (local_48 == (wchar_t *)0x0) {
    local_40 = 0;
  }
  else {
    sVar3 = wcslen(local_48);
    local_40 = (int)sVar3;
  }
  local_38 = L"Binaries/ThirdParty/DiscordPartnerSDKLibrary/Win64/Release/discord_partner_sdk.dll";
  local_30 = 0x52;
  FUN_140bee87a(&local_68,&local_48,2);
  plVar2 = local_68;
  if (local_60 < 2) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar4 = FUN_14155261e(local_68);
    *(longlong *)(param_1 + 8) = lVar4;
    if (lVar4 == 0) {
      local_48 = L"ThirdPartyLibraryError";
      local_40 = 0x16;
      FUN_1446e940c(local_6c,&local_48);
      local_48 = L"FDiscordPartnerSDKModule";
      local_40 = 0x18;
      FUN_1446e940c(local_70,&local_48);
      local_48 = L"Failed to load Discord Partner SDK third party library";
      local_40 = 0x36;
      FUN_140208c1e(&local_68,local_70,local_6c,&local_48);
      FUN_1427863e0();
      FUN_1427864dc(0,0,&local_68,&DAT_14c873210);
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  plVar5 = (longlong *)FUN_144593c24();
  lVar4 = plVar5[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar4 = plVar5[0x22];
    if (lVar4 == 0) goto LAB_1445e3a6a;
  }
  FUN_1445e3ba6(&local_48,lVar4 + 0x38,&local_68);
LAB_1445e3a6a:
  if (plVar2 != (longlong *)0x0) {
    FUN_1400020a8(plVar2);
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e3aea FUN_1445e3aea body=37 status=ok
// SIG undefined FUN_1445e3aea(void)

void FUN_1445e3aea(longlong param_1)

{
  if (*(HMODULE *)(param_1 + 8) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1445e3b10 FUN_1445e3b10 body=66 status=ok
// SIG undefined FUN_1445e3b10(void)

undefined8 * FUN_1445e3b10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14be08ad0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_14020fad6(param_1 + 7,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 1445e3b52 FUN_1445e3b52 body=83 status=ok
// SIG undefined FUN_1445e3b52(void)

undefined8 * FUN_1445e3b52(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
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



// FUNCTION 1445e3ba6 FUN_1445e3ba6 body=742 status=ok
// SIG undefined FUN_1445e3ba6(void)

ulonglong * FUN_1445e3ba6(ulonglong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  wchar_t wVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  size_t sVar6;
  uint uVar7;
  ulonglong uVar8;
  wchar_t *_Str;
  wchar_t *pwVar9;
  bool bVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_118 [40];
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
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
    uVar8 = sVar6 & 0xffffffff;
    pwVar11 = _Str;
    do {
      iVar14 = (int)uVar8;
      if (iVar14 < 1) {
LAB_1445e3cd3:
        local_50 = local_e4;
        uVar7 = local_e4 + 1;
        if (uVar7 < 0x81) goto LAB_1445e3cf0;
        FUN_1446efa72(&local_60,0,uVar7,1);
        local_f0 = local_60;
        goto LAB_1445e3cf2;
      }
      wVar1 = *pwVar11;
      uVar7 = (uint)(ushort)wVar1;
      pwVar9 = pwVar11 + 1;
      uVar16 = iVar14 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          cVar4 = FUN_140024707(uVar7,&local_e4);
          if (cVar4 != '\0') goto LAB_1445e3cd3;
          break;
        }
        if (((ushort)*pwVar9 & 0xfc00) == 0xdc00) {
          uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar9 + 0xfca02400;
          pwVar9 = pwVar11 + 2;
          uVar16 = iVar14 - 2;
        }
      }
      cVar4 = FUN_140024707(uVar7,&local_e4,&local_f0);
      uVar8 = (ulonglong)uVar16;
      pwVar11 = pwVar9;
    } while (cVar4 != '\0');
    local_50 = 0xffffffff;
    uVar7 = 0;
LAB_1445e3cf0:
    local_f0 = (undefined1 *)0x0;
LAB_1445e3cf2:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar14 = (int)sVar6 + 1;
    local_e4 = uVar7;
    local_58 = local_f0;
    do {
      if (iVar14 < 1) break;
      wVar1 = *_Str;
      uVar7 = (uint)(ushort)wVar1;
      pwVar11 = _Str + 1;
      iVar3 = iVar14 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          FUN_1400247af(uVar7,&local_f0);
          break;
        }
        if (((ushort)*pwVar11 & 0xfc00) == 0xdc00) {
          uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar11 + 0xfca02400;
          pwVar11 = _Str + 2;
          iVar3 = iVar14 + -2;
        }
      }
      iVar14 = iVar3;
      _Str = pwVar11;
      cVar4 = FUN_1400247af(uVar7,&local_f0);
    } while (cVar4 != '\0');
    lVar12 = (longlong)(int)local_50;
    if (lVar12 != 0) {
      lVar13 = 0;
      bVar10 = false;
      uVar8 = 0;
      do {
        uVar15 = (ulonglong)(byte)local_58[lVar13];
        lVar2 = lVar13;
        if (9 < uVar15 - 0x30) break;
        if ((uVar8 < 0x1999999999999999) ||
           ((uVar8 == 0x1999999999999999 && (0xfffffffffffffff9 < uVar15 - 0x36)))) {
          uVar8 = (ulonglong)(byte)(&DAT_14be0e340)[uVar15] + uVar8 * 10;
        }
        else {
          bVar10 = true;
        }
        lVar13 = lVar13 + 1;
        lVar2 = lVar12;
      } while (lVar12 != lVar13);
      if (local_58 + lVar2 != local_58 && !bVar10) {
        *param_1 = uVar8;
        uVar5 = 1;
        goto LAB_1445e3e41;
      }
    }
  }
  uVar5 = 0;
LAB_1445e3e41:
  *param_3 = uVar5;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1445e3e8e FUN_1445e3e8e body=38 status=ok
// SIG undefined FUN_1445e3e8e(void)

undefined8 FUN_1445e3e8e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Plugins",1);
  return param_2;
}



// FUNCTION 1445e3eb4 FUN_1445e3eb4 body=38 status=ok
// SIG undefined FUN_1445e3eb4(void)

undefined8 FUN_1445e3eb4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Discord Social SDK",1);
  return param_2;
}



// FUNCTION 1445e3eda FUN_1445e3eda body=298 status=ok
// SIG undefined FUN_1445e3eda(void)

undefined8 FUN_1445e3eda(ulonglong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  size_t sVar3;
  ulonglong uVar4;
  char ****_Str;
  longlong lVar5;
  undefined1 auStack_178 [32];
  char ***local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong uStack_140;
  undefined1 local_138 [20];
  byte abStack_124 [236];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar4 = *param_1;
  lVar2 = 0;
  do {
    lVar5 = lVar2;
    abStack_124[lVar5] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
    bVar1 = 9 < uVar4;
    uVar4 = uVar4 / 10;
    lVar2 = lVar5 + -1;
  } while (bVar1);
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (char ***)0x0;
  uStack_150 = 0;
  FUN_14829865e(&local_158,abStack_124 + lVar5,-(lVar5 + -1));
  _Str = &local_158;
  if (0xf < uStack_140) {
    _Str = (char ****)local_158;
  }
  local_38 = 0;
  if (_Str == (char ****)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar3 = strlen((char *)_Str);
    FUN_1446e6fe8(local_138,_Str,sVar3 & 0xffffffff,1);
  }
  FUN_140056680(param_2,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1401d9a90(&local_158);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


