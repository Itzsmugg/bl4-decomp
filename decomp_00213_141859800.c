// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141859800 FUN_141859800 body=57 status=ok
// SIG undefined FUN_141859800(void)

void FUN_141859800(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67108 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67108 =
         FUN_140002ddd(FUN_14651451e,uVar1,L"GbxStatusEffectPresentationGraphNodeSettings_Entry");
  }
  return;
}



// FUNCTION 141859839 FUN_141859839 body=58 status=ok
// SIG undefined FUN_141859839(void)

void FUN_141859839(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14060481e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b296140;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 141859874 FUN_141859874 body=43 status=ok
// SIG undefined FUN_141859874(void)

void FUN_141859874(undefined8 param_1,longlong *param_2)

{
  FUN_140ee7917(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185989f FUN_14185989f body=49 status=ok
// SIG undefined FUN_14185989f(void)

longlong FUN_14185989f(void)

{
  if (DAT_14cb677c0 == 0) {
    FUN_14086a14e(&DAT_14cb677c0,&PTR_FUN_14b2a0220);
  }
  return DAT_14cb677c0;
}



// FUNCTION 1418598d0 FUN_1418598d0 body=595 status=ok
// SIG undefined FUN_1418598d0(void)

void FUN_1418598d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined7 *puVar4;
  undefined7 *puVar5;
  undefined1 auStack_88 [47];
  byte local_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_58 = 0;
  uStack_51 = 0;
  uStack_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_58);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_58);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        uVar1 = *(undefined8 *)(pbVar3 + 1);
        pbVar3 = pbVar3 + 9;
        *(byte **)(param_2 + 0x20) = pbVar3;
        uStack_58 = (undefined7)uVar1;
        uStack_51 = (undefined1)((ulonglong)uVar1 >> 0x38);
        puVar4 = (undefined7 *)0x0;
        goto LAB_14185997c;
      }
      (*pcVar2)(uVar1,param_2,&uStack_58);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  puVar4 = *(undefined7 **)(param_2 + 0x38);
LAB_14185997c:
  puVar5 = &uStack_58;
  if (puVar4 != (undefined7 *)0x0) {
    puVar5 = puVar4;
  }
  local_59 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_59);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_59);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
      local_59 = (byte)uVar1;
      uStack_58 = (undefined7)((ulonglong)uVar1 >> 8);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_59);
    }
  }
  pbVar3 = &local_59;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar3 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1411a0b3a(&local_38,puVar5);
  *pbVar3 = local_30 ^ 1;
  if (local_30 == 0) {
    local_38 = 0;
  }
  *param_3 = local_38;
  FUN_1409ed859(CONCAT17(uStack_51,uStack_58),uStack_50 & 0xffffffff);
  if (CONCAT17(uStack_51,uStack_58) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141859b24 FUN_141859b24 body=792 status=ok
// SIG undefined FUN_141859b24(void)

void FUN_141859b24(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_140903d46(local_20,local_28);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141859e3e FUN_141859e3e body=43 status=ok
// SIG undefined FUN_141859e3e(void)

void FUN_141859e3e(undefined8 param_1,longlong *param_2)

{
  FUN_1409ed859(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141859e6a FUN_141859e6a body=62 status=ok
// SIG undefined FUN_141859e6a(void)

undefined8 FUN_141859e6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1409ed7fc(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 141859ea8 FUN_141859ea8 body=75 status=ok
// SIG undefined FUN_141859ea8(void)

void FUN_141859ea8(undefined8 param_1,longlong param_2)

{
  FUN_1409ed859(*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38));
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141859ef4 FUN_141859ef4 body=487 status=ok
// SIG undefined FUN_141859ef4(void)

undefined8 FUN_141859ef4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0x80;
    do {
      *(undefined4 *)(param_2 + -0x70 + lVar4) = *(undefined4 *)(param_3 + -0x70 + lVar4);
      *(undefined8 *)(param_2 + -0x78 + lVar4) = *(undefined8 *)(param_3 + -0x78 + lVar4);
      lVar1 = *(longlong *)(param_3 + -0x68 + lVar4);
      if (*(longlong *)(param_2 + -0x68 + lVar4) != lVar1) {
        *(undefined8 *)(param_2 + -0x58 + lVar4) = 0;
      }
      *(longlong *)(param_2 + -0x68 + lVar4) = lVar1;
      if (*(longlong *)(param_2 + -0x60 + lVar4) != *(longlong *)(param_3 + -0x60 + lVar4)) {
        *(undefined8 *)(param_2 + -0x58 + lVar4) = 0;
      }
      uVar3 = FUN_14477b664();
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_2 + -0x60 + lVar4) = uVar3;
      *(undefined8 *)(param_2 + -0x58 + lVar4) = *(undefined8 *)(param_3 + -0x58 + lVar4);
      lVar1 = *(longlong *)(param_2 + -0x50 + lVar4);
      if ((lVar1 != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(lVar1 + 0x50));
      }
      bVar2 = DAT_14cb26569;
      lVar1 = *(longlong *)(param_3 + -0x50 + lVar4);
      *(longlong *)(param_2 + -0x50 + lVar4) = lVar1;
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_14036e5a4(*(undefined8 *)(lVar1 + 0x50));
      }
      *(undefined1 *)(param_2 + -0x48 + lVar4) = *(undefined1 *)(param_3 + -0x48 + lVar4);
      *(undefined4 *)(param_2 + -0x38 + lVar4) = *(undefined4 *)(param_3 + -0x38 + lVar4);
      *(undefined8 *)(param_2 + -0x40 + lVar4) = *(undefined8 *)(param_3 + -0x40 + lVar4);
      lVar1 = *(longlong *)(param_3 + -0x30 + lVar4);
      if (*(longlong *)(param_2 + -0x30 + lVar4) != lVar1) {
        *(undefined8 *)(param_2 + -0x20 + lVar4) = 0;
      }
      *(longlong *)(param_2 + -0x30 + lVar4) = lVar1;
      if (*(longlong *)(param_2 + -0x28 + lVar4) != *(longlong *)(param_3 + -0x28 + lVar4)) {
        *(undefined8 *)(param_2 + -0x20 + lVar4) = 0;
      }
      uVar3 = FUN_14477b664();
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_2 + -0x28 + lVar4) = uVar3;
      *(undefined8 *)(param_2 + -0x20 + lVar4) = *(undefined8 *)(param_3 + -0x20 + lVar4);
      lVar1 = *(longlong *)(param_2 + -0x18 + lVar4);
      if ((lVar1 != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(lVar1 + 0x50));
      }
      bVar2 = DAT_14cb26569;
      lVar1 = *(longlong *)(param_3 + -0x18 + lVar4);
      *(longlong *)(param_2 + -0x18 + lVar4) = lVar1;
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_14036e5a4(*(undefined8 *)(lVar1 + 0x50));
      }
      *(undefined8 *)(param_2 + -0x10 + lVar4) = *(undefined8 *)(param_3 + -0x10 + lVar4);
      *(undefined8 *)(param_2 + -8 + lVar4) = *(undefined8 *)(param_3 + -8 + lVar4);
      *(undefined8 *)(param_2 + lVar4) = *(undefined8 *)(param_3 + lVar4);
      lVar4 = lVar4 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185a0e0 FUN_14185a0e0 body=49 status=ok
// SIG undefined FUN_14185a0e0(void)

longlong FUN_14185a0e0(void)

{
  if (DAT_14cb67c60 == 0) {
    FUN_14086a14e(&DAT_14cb67c60,&PTR_FUN_14b2acef0);
  }
  return DAT_14cb67c60;
}



// FUNCTION 14185a111 FUN_14185a111 body=46 status=ok
// SIG undefined FUN_14185a111(void)

void FUN_14185a111(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b2ad0b0;
  *(undefined1 *)((longlong)puVar1 + 0x49) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 14185a13f FUN_14185a13f body=46 status=ok
// SIG undefined FUN_14185a13f(void)

void FUN_14185a13f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140751bbe(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b2ad4a0;
  *(undefined1 *)((longlong)puVar1 + 0x41) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14185a16e FUN_14185a16e body=434 status=ok
// SIG undefined FUN_14185a16e(void)

void FUN_14185a16e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = (**(code **)(*param_1 + 0x20))(param_1,local_28);
  *param_3 = uVar4;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185a322 FUN_14185a322 body=427 status=ok
// SIG undefined FUN_14185a322(void)

void FUN_14185a322(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x28))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185a4ce FUN_14185a4ce body=63 status=ok
// SIG undefined FUN_14185a4ce(void)

undefined8 * FUN_14185a4ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2ad0b0;
  if (*(char *)((longlong)param_1 + 0x49) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x49) = 0;
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185a50e FUN_14185a50e body=63 status=ok
// SIG undefined FUN_14185a50e(void)

undefined8 * FUN_14185a50e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2ad4a0;
  if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185a54e FUN_14185a54e body=40 status=ok
// SIG undefined FUN_14185a54e(void)

undefined8 FUN_14185a54e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185a576 FUN_14185a576 body=40 status=ok
// SIG undefined FUN_14185a576(void)

undefined8 FUN_14185a576(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185a59e FUN_14185a59e body=67 status=ok
// SIG undefined FUN_14185a59e(void)

undefined8 * FUN_14185a59e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2b2350;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185a5e2 FUN_14185a5e2 body=179 status=ok
// SIG undefined FUN_14185a5e2(void)

void FUN_14185a5e2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 0xb0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0xd0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 200)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_2 + 200)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_2 + 0x78);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x98) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x90)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x90) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14185a695 FUN_14185a695 body=49 status=ok
// SIG undefined FUN_14185a695(void)

longlong FUN_14185a695(void)

{
  if (DAT_14cb67fd8 == 0) {
    FUN_14086a14e(&DAT_14cb67fd8,&PTR_FUN_14b2b6030);
  }
  return DAT_14cb67fd8;
}



// FUNCTION 14185a6c6 FUN_14185a6c6 body=49 status=ok
// SIG undefined FUN_14185a6c6(void)

longlong FUN_14185a6c6(void)

{
  if (DAT_14cb68188 == 0) {
    FUN_14073dd9a(&DAT_14cb68188,&PTR_LAB_14b2b8710);
  }
  return DAT_14cb68188;
}



// FUNCTION 14185a6f8 FUN_14185a6f8 body=483 status=ok
// SIG undefined FUN_14185a6f8(void)

void FUN_14185a6f8(longlong param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
    local_48 = FUN_1446ddbd2();
    local_40 = FUN_1409e12a0;
    local_50 = 0;
    local_58 = 0xa001;
    FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
    atexit(FUN_142816ef9);
    _Init_thread_footer(&DAT_14c9520b0);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_30);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_30);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_30;
  lVar3 = *(longlong *)(param_1 + 0x38);
  uVar4 = local_30;
  if (lVar3 != 0) {
    uVar4 = FUN_1408814c2(lVar3,&local_28,0);
  }
  *param_3 = lVar3 != 0 & (byte)uVar4;
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14185a8dc FUN_14185a8dc body=46 status=ok
// SIG undefined FUN_14185a8dc(void)

void FUN_14185a8dc(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14060481e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b2b8750;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14185a90a FUN_14185a90a body=49 status=ok
// SIG undefined FUN_14185a90a(void)

longlong FUN_14185a90a(void)

{
  if (DAT_14cb68250 == 0) {
    FUN_14073dd9a(&DAT_14cb68250,&PTR_LAB_14b2ba110);
  }
  return DAT_14cb68250;
}



// FUNCTION 14185a93b FUN_14185a93b body=49 status=ok
// SIG undefined FUN_14185a93b(void)

longlong FUN_14185a93b(void)

{
  if (DAT_14cb68310 == 0) {
    FUN_14086a14e(&DAT_14cb68310,&PTR_FUN_14b2bb1a0);
  }
  return DAT_14cb68310;
}



// FUNCTION 14185a96c FUN_14185a96c body=148 status=ok
// SIG undefined FUN_14185a96c(void)

void FUN_14185a96c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ffa2(puVar1);
  *puVar1 = &PTR_FUN_14b2bd500;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0xf00000d000000000;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0x1ffffffff;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  puVar1[0x14] = DAT_14cb8ce08;
  *puVar1 = &PTR_FUN_14b2bb360;
  puVar1[6] = &PTR_FUN_14b2bb650;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return;
}



// FUNCTION 14185aa00 FUN_14185aa00 body=64 status=ok
// SIG undefined FUN_14185aa00(void)

void FUN_14185aa00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ffa2(puVar1);
  *puVar1 = &PTR_FUN_14b2bb960;
  puVar1[6] = &PTR_FUN_14b2bbc50;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 14185aa40 FUN_14185aa40 body=84 status=ok
// SIG undefined FUN_14185aa40(void)

void FUN_14185aa40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ffa2(puVar1);
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0x3f800000;
  *(byte *)((longlong)puVar1 + 0xac) = *(byte *)((longlong)puVar1 + 0xac) & 0xf0;
  *puVar1 = &PTR_FUN_14b2bdb20;
  puVar1[6] = &PTR_FUN_14b2bde10;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14185aa94 FUN_14185aa94 body=40 status=ok
// SIG undefined FUN_14185aa94(void)

undefined8 FUN_14185aa94(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185aabc FUN_14185aabc body=293 status=ok
// SIG undefined FUN_14185aabc(void)

undefined8 * FUN_14185aabc(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14b2bd810;
  param_1[6] = &PTR_LAB_14b2bdb00;
  pbVar4 = (byte *)(param_1 + 0xb7);
  lVar5 = -0x540;
  do {
    pbVar1 = pbVar4 + -0x20;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*pbVar4 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pbVar3 = pbVar1;
      if (0x18 < *(ushort *)(pbVar4 + -8)) {
        pbVar3 = *(byte **)pbVar1;
      }
      (*pcVar2)(pbVar3);
    }
    if (0x18 < *(ushort *)(pbVar4 + -8)) {
      FUN_1400020a8(*(longlong *)pbVar1);
    }
    pbVar1 = pbVar4 + -0x60;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)pbVar4[-0x40] * 0x120));
    if (pcVar2 != (code *)0x0) {
      pbVar3 = pbVar1;
      if (0x18 < *(ushort *)(pbVar4 + -0x48)) {
        pbVar3 = *(byte **)pbVar1;
      }
      (*pcVar2)(pbVar3);
    }
    if (0x18 < *(ushort *)(pbVar4 + -0x48)) {
      FUN_1400020a8(*(longlong *)pbVar1);
    }
    FUN_14079c534(*(undefined8 *)(pbVar4 + -0xf0),*(undefined4 *)(pbVar4 + -0xe8));
    if (*(longlong *)(pbVar4 + -0xf0) != 0) {
      FUN_1400020a8();
    }
    pbVar4 = pbVar4 + -0x150;
    lVar5 = lVar5 + 0x150;
  } while (lVar5 != 0);
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185abe2 FUN_14185abe2 body=40 status=ok
// SIG undefined FUN_14185abe2(void)

undefined8 FUN_14185abe2(undefined8 param_1,int param_2)

{
  FUN_1408ee338();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185ac0a FUN_14185ac0a body=293 status=ok
// SIG undefined FUN_14185ac0a(void)

undefined8 * FUN_14185ac0a(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14b2bde30;
  param_1[6] = &PTR_LAB_14b2be120;
  pbVar4 = (byte *)(param_1 + 0xb7);
  lVar5 = -0x540;
  do {
    pbVar1 = pbVar4 + -0x20;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*pbVar4 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pbVar3 = pbVar1;
      if (0x18 < *(ushort *)(pbVar4 + -8)) {
        pbVar3 = *(byte **)pbVar1;
      }
      (*pcVar2)(pbVar3);
    }
    if (0x18 < *(ushort *)(pbVar4 + -8)) {
      FUN_1400020a8(*(longlong *)pbVar1);
    }
    pbVar1 = pbVar4 + -0x60;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)pbVar4[-0x40] * 0x120));
    if (pcVar2 != (code *)0x0) {
      pbVar3 = pbVar1;
      if (0x18 < *(ushort *)(pbVar4 + -0x48)) {
        pbVar3 = *(byte **)pbVar1;
      }
      (*pcVar2)(pbVar3);
    }
    if (0x18 < *(ushort *)(pbVar4 + -0x48)) {
      FUN_1400020a8(*(longlong *)pbVar1);
    }
    FUN_14079c534(*(undefined8 *)(pbVar4 + -0xf0),*(undefined4 *)(pbVar4 + -0xe8));
    if (*(longlong *)(pbVar4 + -0xf0) != 0) {
      FUN_1400020a8();
    }
    pbVar4 = pbVar4 + -0x150;
    lVar5 = lVar5 + 0x150;
  } while (lVar5 != 0);
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185ad30 FUN_14185ad30 body=85 status=ok
// SIG undefined FUN_14185ad30(void)

void FUN_14185ad30(undefined8 param_1,void *param_2)

{
  memset(param_2,0,400);
  *(undefined2 *)((longlong)param_2 + 0x20) = 4;
  *(undefined4 *)((longlong)param_2 + 8) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x28) = 3;
  *(char *)((longlong)param_2 + 0x30) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_1406d2124((longlong)param_2 + 0x38);
  *(undefined8 *)((longlong)param_2 + 0x188) = 0;
  return;
}



// FUNCTION 14185ada6 FUN_14185ada6 body=46 status=ok
// SIG undefined FUN_14185ada6(void)

void FUN_14185ada6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14060481e(puVar1,param_1);
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b2bebe0;
  return;
}



// FUNCTION 14185add4 FUN_14185add4 body=43 status=ok
// SIG undefined FUN_14185add4(void)

void FUN_14185add4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f196c2(puVar1);
  *puVar1 = &PTR_FUN_14b2c8a10;
  puVar1[6] = &PTR_FUN_14b2c8d00;
  return;
}



// FUNCTION 14185adff FUN_14185adff body=53 status=ok
// SIG undefined FUN_14185adff(void)

void FUN_14185adff(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ffa2(puVar1);
  *puVar1 = &PTR_FUN_14b2c9970;
  puVar1[6] = &PTR_LAB_14b2c9c60;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return;
}



// FUNCTION 14185ae34 FUN_14185ae34 body=2231 status=ok
// SIG undefined FUN_14185ae34(void)

void FUN_14185ae34(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
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
            goto LAB_14185af1f;
          }
        }
        plVar6 = (longlong *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (plVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,plVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,plVar6,
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
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_14185af1f:
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
            goto LAB_14185afec;
          }
        }
        plVar6 = (longlong *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (plVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,plVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,plVar6,
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
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_14185afec:
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
            goto LAB_14185b0b9;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
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
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_14185b0b9:
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
            goto LAB_14185b185;
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
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
LAB_14185b185:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_1411da736(param_1,local_38,0);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185b6ec FUN_14185b6ec body=168 status=ok
// SIG undefined FUN_14185b6ec(void)

void FUN_14185b6ec(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14480568a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b2c2840;
  puVar1[5] = &PTR_FUN_14b2c3240;
  puVar1[6] = &PTR_LAB_14b2c3280;
  puVar1[0x55] = &PTR_FUN_14b2c32d0;
  puVar1[0x56] = &PTR_FUN_14b2c3350;
  puVar1[0x57] = &PTR_FUN_14b2c3360;
  puVar1[0xc4] = 0;
  puVar1[0xc5] = 0;
  puVar1[0xc6] = 0;
  puVar1[199] = 0;
  *(undefined4 *)(puVar1 + 200) = 0;
  *(undefined1 *)(puVar1 + 0xc9) = 1;
  puVar1[0xca] = 0;
  puVar1[0xcb] = 0;
  puVar1[0xcc] = 0;
  puVar1[0xcd] = 0;
  *(undefined4 *)(puVar1 + 0xce) = 0xc69c4000;
  *(undefined1 *)((longlong)puVar1 + 0x674) = 0;
  *(undefined4 *)(puVar1 + 0xcf) = 0;
  return;
}



// FUNCTION 14185b794 FUN_14185b794 body=49 status=ok
// SIG undefined FUN_14185b794(void)

longlong FUN_14185b794(void)

{
  if (DAT_14cb688e8 == 0) {
    FUN_14086a14e(&DAT_14cb688e8,&PTR_FUN_14b2c62c8);
  }
  return DAT_14cb688e8;
}



// FUNCTION 14185b7c6 FUN_14185b7c6 body=40 status=ok
// SIG undefined FUN_14185b7c6(void)

undefined8 FUN_14185b7c6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185b7ee FUN_14185b7ee body=293 status=ok
// SIG undefined FUN_14185b7ee(void)

undefined8 * FUN_14185b7ee(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14b2c9660;
  param_1[6] = &PTR_LAB_14b2c9950;
  pbVar4 = (byte *)(param_1 + 0xb3);
  lVar5 = -0x540;
  do {
    pbVar1 = pbVar4 + -0x20;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*pbVar4 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pbVar3 = pbVar1;
      if (0x18 < *(ushort *)(pbVar4 + -8)) {
        pbVar3 = *(byte **)pbVar1;
      }
      (*pcVar2)(pbVar3);
    }
    if (0x18 < *(ushort *)(pbVar4 + -8)) {
      FUN_1400020a8(*(longlong *)pbVar1);
    }
    pbVar1 = pbVar4 + -0x60;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)pbVar4[-0x40] * 0x120));
    if (pcVar2 != (code *)0x0) {
      pbVar3 = pbVar1;
      if (0x18 < *(ushort *)(pbVar4 + -0x48)) {
        pbVar3 = *(byte **)pbVar1;
      }
      (*pcVar2)(pbVar3);
    }
    if (0x18 < *(ushort *)(pbVar4 + -0x48)) {
      FUN_1400020a8(*(longlong *)pbVar1);
    }
    FUN_14079c534(*(undefined8 *)(pbVar4 + -0xf0),*(undefined4 *)(pbVar4 + -0xe8));
    if (*(longlong *)(pbVar4 + -0xf0) != 0) {
      FUN_1400020a8();
    }
    pbVar4 = pbVar4 + -0x150;
    lVar5 = lVar5 + 0x150;
  } while (lVar5 != 0);
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185b914 FUN_14185b914 body=81 status=ok
// SIG undefined FUN_14185b914(void)

undefined8 * FUN_14185b914(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2c9970;
  param_1[6] = &PTR_LAB_14b2c9c60;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185b966 FUN_14185b966 body=76 status=ok
// SIG undefined FUN_14185b966(void)

void FUN_14185b966(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x188);
  *(undefined2 *)((longlong)param_2 + 0x20) = 4;
  *(undefined4 *)((longlong)param_2 + 8) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x28) = 3;
  *(char *)((longlong)param_2 + 0x30) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_1406d2124((longlong)param_2 + 0x38);
  return;
}



// FUNCTION 14185b9b2 FUN_14185b9b2 body=76 status=ok
// SIG undefined FUN_14185b9b2(void)

void FUN_14185b9b2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x188);
  *(undefined2 *)((longlong)param_2 + 0x20) = 4;
  *(undefined4 *)((longlong)param_2 + 8) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x28) = 3;
  *(char *)((longlong)param_2 + 0x30) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_1406d2124((longlong)param_2 + 0x38);
  return;
}



// FUNCTION 14185b9fe FUN_14185b9fe body=118 status=ok
// SIG undefined FUN_14185b9fe(void)

undefined8 FUN_14185b9fe(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb8d378 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb8d378,local_38);
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



// FUNCTION 14185ba76 FUN_14185ba76 body=117 status=ok
// SIG undefined FUN_14185ba76(void)

undefined8 * FUN_14185ba76(undefined8 param_1,undefined8 *param_2,longlong param_3)

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



// FUNCTION 14185baec FUN_14185baec body=112 status=ok
// SIG undefined FUN_14185baec(void)

void FUN_14185baec(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_2 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_2 + 0x20);
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
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185bb5c FUN_14185bb5c body=112 status=ok
// SIG undefined FUN_14185bb5c(void)

void FUN_14185bb5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185bbcc FUN_14185bbcc body=49 status=ok
// SIG undefined FUN_14185bbcc(void)

longlong FUN_14185bbcc(void)

{
  if (DAT_14cb689c8 == 0) {
    FUN_14086a14e(&DAT_14cb689c8,&PTR_FUN_14b2cd2d8);
  }
  return DAT_14cb689c8;
}



// FUNCTION 14185bbfe FUN_14185bbfe body=57 status=ok
// SIG undefined FUN_14185bbfe(void)

void FUN_14185bbfe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68af0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68af0 =
         FUN_140002ddd(FUN_14651d144,uVar1,L"GbxUnlockConditionData_NodeProgressPointsSpent");
  }
  return;
}



// FUNCTION 14185bc37 FUN_14185bc37 body=49 status=ok
// SIG undefined FUN_14185bc37(void)

longlong FUN_14185bc37(void)

{
  if (DAT_14cb68c08 == 0) {
    FUN_14086a14e(&DAT_14cb68c08,&PTR_FUN_14b2d0388);
  }
  return DAT_14cb68c08;
}



// FUNCTION 14185bc68 FUN_14185bc68 body=126 status=ok
// SIG undefined FUN_14185bc68(void)

void FUN_14185bc68(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  *puVar1 = &PTR_FUN_14b2d5c60;
  puVar1[6] = &PTR_FUN_14b2d5f18;
  puVar1[7] = &PTR_FUN_14b2d5f30;
  puVar1[9] = &PTR_FUN_14b2d5f50;
  puVar1[10] = &PTR_FUN_14b2d5f80;
  *(undefined1 *)((longlong)puVar1 + 0xa1) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  return;
}



// FUNCTION 14185bce6 FUN_14185bce6 body=118 status=ok
// SIG undefined FUN_14185bce6(void)

undefined8 FUN_14185bce6(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb8df08 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb8df08,local_38);
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



// FUNCTION 14185bd5e FUN_14185bd5e body=79 status=ok
// SIG undefined FUN_14185bd5e(void)

undefined8 * FUN_14185bd5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2e1050;
  param_1[0x72] = &PTR_LAB_14b2e1690;
  FUN_1403d7d90(param_1 + 0x73);
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185bdbc FUN_14185bdbc body=142 status=ok
// SIG undefined FUN_14185bdbc(void)

undefined8 FUN_14185bdbc(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    do {
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_3 + 1);
      puVar2[-2] = *param_3;
      if (puVar2 + -2 != param_3) {
        iVar1 = *(int *)(param_3 + 3);
        _Src = (void *)param_3[2];
        *(int *)(puVar2 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar2 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1447a127e(puVar2,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar2,_Src,(longlong)iVar1);
          }
        }
      }
      param_3 = param_3 + 4;
      puVar2 = puVar2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185be4a FUN_14185be4a body=118 status=ok
// SIG undefined FUN_14185be4a(void)

undefined8 FUN_14185be4a(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb814f0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb814f0,local_38);
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



// FUNCTION 14185bec2 FUN_14185bec2 body=118 status=ok
// SIG undefined FUN_14185bec2(void)

undefined8 FUN_14185bec2(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb81510 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb81510,local_38);
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



// FUNCTION 14185bf3a FUN_14185bf3a body=438 status=ok
// SIG undefined FUN_14185bf3a(void)

void FUN_14185bf3a(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  memset(param_2 + 1,0,0x228);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *param_2 = &PTR_FUN_14ac67f80;
  param_2[9] = DAT_14c9ab028;
  *(undefined1 *)(param_2 + 10) = 2;
  param_2[8] = &PTR_FUN_14a1a0a60;
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *(undefined8 *)((longlong)param_2 + 0x69) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0x13] = DAT_14c846508;
  uVar4 = DAT_14c846500;
  param_2[0x11] = DAT_14c8464f8;
  param_2[0x12] = uVar4;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0x17) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xbc) = uVar1;
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc4) = uVar3;
  param_2[0x19] = DAT_14c8464f0;
  param_2[0x1c] = 0;
  param_2[0x1b] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x1e) = 0x447a0000;
  *(undefined1 *)(param_2 + 0x20) = 0;
  FUN_14044066a(param_2 + 0x21,10,1);
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_2 + 0x29) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0x100;
  param_2[0x31] = DAT_14c9ab028;
  *(undefined1 *)(param_2 + 0x32) = 2;
  param_2[0x30] = &PTR_FUN_14a1a0a20;
  *(undefined8 *)((longlong)param_2 + 0x1b1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b9) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_14b2de4e0;
  *(undefined4 *)(param_2 + 0x39) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined4 *)(param_2 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1d4) = 0;
  param_2[0x3b] = 0x101010000000000;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined1 *)(param_2 + 0x45) = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  return;
}



// FUNCTION 14185c10c FUN_14185c10c body=40 status=ok
// SIG undefined FUN_14185c10c(void)

undefined8 FUN_14185c10c(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185c134 FUN_14185c134 body=72 status=ok
// SIG undefined FUN_14185c134(void)

undefined8 * FUN_14185c134(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2e0210;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185c17c FUN_14185c17c body=110 status=ok
// SIG undefined FUN_14185c17c(void)

void FUN_14185c17c(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0x678bcdb;
  local_18 = 0;
  if ((*param_2 != 0) || ((int)param_2[1] != 0x678bcdb)) {
    local_28 = *param_2;
    local_20 = (int)param_2[1];
  }
  local_10 = param_3;
  FUN_1447cd2ec();
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14185c1ec FUN_14185c1ec body=79 status=ok
// SIG undefined FUN_14185c1ec(void)

undefined8 * FUN_14185c1ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2edbe0;
  param_1[0x7b] = &PTR_LAB_14b2ee270;
  FUN_14028f4a8(param_1 + 0x7d);
  FUN_1402d9b92(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185c23c FUN_14185c23c body=101 status=ok
// SIG undefined FUN_14185c23c(void)

undefined8 * FUN_14185c23c(undefined8 *param_1,int param_2)

{
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



// FUNCTION 14185c2a2 FUN_14185c2a2 body=101 status=ok
// SIG undefined FUN_14185c2a2(void)

undefined8 * FUN_14185c2a2(undefined8 *param_1,int param_2)

{
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



// FUNCTION 14185c308 FUN_14185c308 body=49 status=ok
// SIG undefined FUN_14185c308(void)

void FUN_14185c308(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185c33a FUN_14185c33a body=214 status=ok
// SIG undefined FUN_14185c33a(void)

undefined8
FUN_14185c33a(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             longlong param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_14075f7c0(param_2,param_5);
  FUN_14075f7c0(param_2,param_5 + 0x28);
  FUN_14480c34d(param_2,param_5 + 0x50);
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_5 + 0x68),2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_5 + 0x68) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar2 = (undefined2 *)(param_5 + 0x6a);
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,2);
    }
    else {
      thunk_FUN_1457251a8(param_2,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 14185c410 FUN_14185c410 body=99 status=ok
// SIG undefined FUN_14185c410(void)

undefined8 FUN_14185c410(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447715ec(param_2,param_3);
    FUN_1447715ec(param_2 + 0x28,param_3 + 0x28);
    uVar1 = *(undefined4 *)(param_3 + 0x54);
    uVar2 = *(undefined4 *)(param_3 + 0x58);
    uVar3 = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
    *(undefined2 *)(param_2 + 0x68) = *(undefined2 *)(param_3 + 0x68);
    *(undefined2 *)(param_2 + 0x6a) = *(undefined2 *)(param_3 + 0x6a);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 14185c474 FUN_14185c474 body=144 status=ok
// SIG undefined FUN_14185c474(void)

void FUN_14185c474(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x308);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar4 = 8;
  if (8 < uVar1) {
    lVar2 = (longlong)(int)uVar1;
    if (8 < *(uint *)(param_1 + 0x30c)) {
      lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar2 * 0x60,0);
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 / 0x60)) {
      uVar4 = uVar3 / 0x60 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x30c) = (int)uVar4;
  FUN_1405fe9a8(param_1,param_2,uVar4,0x60);
  return;
}



// FUNCTION 14185c509 FUN_14185c509 body=49 status=ok
// SIG undefined FUN_14185c509(void)

longlong FUN_14185c509(void)

{
  if (DAT_14cb69998 == 0) {
    FUN_14086a14e(&DAT_14cb69998,&PTR_FUN_14b2f3258);
  }
  return DAT_14cb69998;
}



// FUNCTION 14185c53a FUN_14185c53a body=49 status=ok
// SIG undefined FUN_14185c53a(void)

longlong FUN_14185c53a(void)

{
  if (DAT_14cb699b0 == 0) {
    FUN_14086a14e(&DAT_14cb699b0,&PTR_FUN_14b2f3408);
  }
  return DAT_14cb699b0;
}



// FUNCTION 14185c56c FUN_14185c56c body=57 status=ok
// SIG undefined FUN_14185c56c(void)

void FUN_14185c56c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69b60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69b60 = FUN_140002ddd(FUN_146522bae,uVar1,L"InteractiveObjectDef");
  }
  return;
}



// FUNCTION 14185c5a5 FUN_14185c5a5 body=49 status=ok
// SIG undefined FUN_14185c5a5(void)

longlong FUN_14185c5a5(void)

{
  if (DAT_14cb69ba0 == 0) {
    FUN_14086a14e(&DAT_14cb69ba0,&PTR_FUN_14b2f6cd8);
  }
  return DAT_14cb69ba0;
}



// FUNCTION 14185c5d6 FUN_14185c5d6 body=74 status=ok
// SIG undefined FUN_14185c5d6(void)

void FUN_14185c5d6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x30);
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
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185c620 FUN_14185c620 body=118 status=ok
// SIG undefined FUN_14185c620(void)

undefined8 FUN_14185c620(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb78ff0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb78ff0,local_38);
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



// FUNCTION 14185c698 FUN_14185c698 body=117 status=ok
// SIG undefined FUN_14185c698(void)

undefined8 * FUN_14185c698(undefined8 param_1,undefined8 *param_2,longlong param_3)

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



// FUNCTION 14185c70e FUN_14185c70e body=48 status=ok
// SIG undefined FUN_14185c70e(void)

void FUN_14185c70e(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_140cd6866(param_2 + 0x20);
  return;
}



// FUNCTION 14185c73e FUN_14185c73e body=68 status=ok
// SIG undefined FUN_14185c73e(void)

void FUN_14185c73e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b2fa1e0;
  puVar1[5] = &PTR_FUN_14b2fa490;
  puVar1[10] = &PTR_FUN_14b2fa4c0;
  puVar1[0xb] = &PTR_FUN_14b2fa4f0;
  return;
}



// FUNCTION 14185c782 FUN_14185c782 body=40 status=ok
// SIG undefined FUN_14185c782(void)

undefined8 FUN_14185c782(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185c7aa FUN_14185c7aa body=141 status=ok
// SIG undefined FUN_14185c7aa(void)

longlong * FUN_14185c7aa(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b302ea0;
  uVar4 = FUN_140126fc0();
  FUN_140aed452(plVar3 + 2,uVar4);
  plVar3[2] = (longlong)&PTR_FUN_14b410dc0;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14185c838 FUN_14185c838 body=40 status=ok
// SIG undefined FUN_14185c838(void)

void FUN_14185c838(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140126fc0();
  FUN_140aed452(param_2,uVar1);
  *param_2 = &PTR_FUN_14b410dc0;
  return;
}



// FUNCTION 14185c860 FUN_14185c860 body=68 status=ok
// SIG undefined FUN_14185c860(void)

undefined8 * FUN_14185c860(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b302f70;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_1403d7c6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185c8ac FUN_14185c8ac body=73 status=ok
// SIG undefined FUN_14185c8ac(void)

undefined8 * FUN_14185c8ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3039d0;
  FUN_140485972(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185c8f6 FUN_14185c8f6 body=139 status=ok
// SIG undefined FUN_14185c8f6(void)

void FUN_14185c8f6(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 14185c982 FUN_14185c982 body=29 status=ok
// SIG undefined FUN_14185c982(void)

undefined8 FUN_14185c982(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185c99f FUN_14185c99f body=49 status=ok
// SIG undefined FUN_14185c99f(void)

longlong FUN_14185c99f(void)

{
  if (DAT_14cb6a128 == 0) {
    FUN_14086a14e(&DAT_14cb6a128,&PTR_FUN_14b3078f0);
  }
  return DAT_14cb6a128;
}



// FUNCTION 14185c9d0 FUN_14185c9d0 body=49 status=ok
// SIG undefined FUN_14185c9d0(void)

longlong FUN_14185c9d0(void)

{
  if (DAT_14cb6a1d0 == 0) {
    FUN_14086a14e(&DAT_14cb6a1d0,&PTR_FUN_14b3083b8);
  }
  return DAT_14cb6a1d0;
}



// FUNCTION 14185ca01 FUN_14185ca01 body=49 status=ok
// SIG undefined FUN_14185ca01(void)

longlong FUN_14185ca01(void)

{
  if (DAT_14cb6a1e8 == 0) {
    FUN_14086a14e(&DAT_14cb6a1e8,&PTR_FUN_14b3084e0);
  }
  return DAT_14cb6a1e8;
}



// FUNCTION 14185ca32 FUN_14185ca32 body=42 status=ok
// SIG undefined FUN_14185ca32(void)

void FUN_14185ca32(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3099e0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14185ca5c FUN_14185ca5c body=84 status=ok
// SIG undefined FUN_14185ca5c(void)

longlong * FUN_14185ca5c(longlong *param_1,longlong *param_2)

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



// FUNCTION 14185cab0 FUN_14185cab0 body=118 status=ok
// SIG undefined FUN_14185cab0(void)

undefined8 FUN_14185cab0(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb84960 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb84960,local_38);
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



// FUNCTION 14185cb28 FUN_14185cb28 body=118 status=ok
// SIG undefined FUN_14185cb28(void)

undefined8 FUN_14185cb28(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb84980 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb84980,local_38);
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



// FUNCTION 14185cba0 FUN_14185cba0 body=84 status=ok
// SIG undefined FUN_14185cba0(void)

longlong * FUN_14185cba0(longlong *param_1,longlong *param_2)

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



// FUNCTION 14185cbf4 FUN_14185cbf4 body=88 status=ok
// SIG undefined FUN_14185cbf4(void)

longlong * FUN_14185cbf4(longlong *param_1,longlong *param_2)

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



// FUNCTION 14185cc4c FUN_14185cc4c body=88 status=ok
// SIG undefined FUN_14185cc4c(void)

longlong * FUN_14185cc4c(longlong *param_1,longlong *param_2)

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



// FUNCTION 14185cca4 FUN_14185cca4 body=84 status=ok
// SIG undefined FUN_14185cca4(void)

longlong * FUN_14185cca4(longlong *param_1,longlong *param_2)

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



// FUNCTION 14185ccf8 FUN_14185ccf8 body=88 status=ok
// SIG undefined FUN_14185ccf8(void)

longlong * FUN_14185ccf8(longlong *param_1,longlong *param_2)

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



// FUNCTION 14185cd50 FUN_14185cd50 body=104 status=ok
// SIG undefined FUN_14185cd50(void)

undefined8 FUN_14185cd50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_140cde312(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185cdba FUN_14185cdba body=58 status=ok
// SIG undefined FUN_14185cdba(void)

void FUN_14185cdba(undefined8 param_1,undefined8 *param_2)

{
  FUN_140265f12();
  param_2[1] = &DAT_14cb83310;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b1828b0;
  *(undefined4 *)(param_2 + 4) = 1;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 14185cdf4 FUN_14185cdf4 body=93 status=ok
// SIG undefined FUN_14185cdf4(void)

void FUN_14185cdf4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2[5] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 3) = 0;
  if (*(int *)((longlong)param_2 + 0x1c) != 0) {
    FUN_140115c12(param_2 + 2,0);
  }
  param_2[1] = 0;
  if (param_2[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185ce52 FUN_14185ce52 body=104 status=ok
// SIG undefined FUN_14185ce52(void)

undefined8 FUN_14185ce52(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_14005f05e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185cec4 FUN_14185cec4 body=63 status=ok
// SIG undefined FUN_14185cec4(void)

undefined1 FUN_14185cec4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1407b25f0(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 14185cf04 FUN_14185cf04 body=31 status=ok
// SIG undefined FUN_14185cf04(void)

undefined1
FUN_14185cf04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_140991644(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14185cf24 FUN_14185cf24 body=213 status=ok
// SIG undefined FUN_14185cf24(void)

undefined8 FUN_14185cf24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((*(longlong *)(param_2 + 8 + lVar3) != lVar2) ||
         (*(int *)(param_2 + 0x10 + lVar3) != *(int *)(param_3 + 0x10 + lVar3))) {
        *(longlong *)(param_2 + 8 + lVar3) = lVar2;
        *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
        *(undefined8 *)(param_2 + 0x18 + lVar3) = 0;
      }
      lVar2 = param_3 + lVar3;
      lVar1 = param_2 + 0x28 + lVar3;
      *(undefined2 *)(lVar1 + -8) = *(undefined2 *)(lVar2 + 0x20);
      FUN_1401f3db8(lVar1,lVar2 + 0x28);
      if ((*(longlong *)(lVar1 + 0x18) != *(longlong *)(lVar2 + 0x40)) ||
         (*(int *)(param_2 + 0x48 + lVar3) != *(int *)(param_3 + 0x48 + lVar3))) {
        *(longlong *)(param_2 + 0x40 + lVar3) = *(longlong *)(lVar2 + 0x40);
        *(undefined4 *)(param_2 + 0x48 + lVar3) = *(undefined4 *)(param_3 + 0x48 + lVar3);
        *(undefined8 *)(param_2 + 0x50 + lVar3) = 0;
      }
      FUN_140e8ab18(param_2 + lVar3 + 0x58,param_3 + lVar3 + 0x58);
      lVar3 = lVar3 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185cff9 FUN_14185cff9 body=42 status=ok
// SIG undefined FUN_14185cff9(void)

void FUN_14185cff9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b30cd50;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14185d023 FUN_14185d023 body=49 status=ok
// SIG undefined FUN_14185d023(void)

longlong FUN_14185d023(void)

{
  if (DAT_14cb6a678 == 0) {
    FUN_14086a14e(&DAT_14cb6a678,&PTR_FUN_14b311070);
  }
  return DAT_14cb6a678;
}



// FUNCTION 14185d054 FUN_14185d054 body=67 status=ok
// SIG undefined FUN_14185d054(void)

undefined8 * FUN_14185d054(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b30cd50;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185d098 FUN_14185d098 body=118 status=ok
// SIG undefined FUN_14185d098(void)

undefined8 FUN_14185d098(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb849a0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb849a0,local_38);
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



// FUNCTION 14185d110 FUN_14185d110 body=118 status=ok
// SIG undefined FUN_14185d110(void)

undefined8 FUN_14185d110(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb849c0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb849c0,local_38);
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



// FUNCTION 14185d188 FUN_14185d188 body=166 status=ok
// SIG undefined FUN_14185d188(void)

void FUN_14185d188(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0xd8) = 0;
  if (*(longlong *)(param_2 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_140485a1a(param_2 + 0x90);
  *(undefined4 *)(param_2 + 0x88) = 0;
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_140485a1a(param_2 + 0x40);
  *(undefined2 **)(param_2 + 0x20) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0x38) = 0;
  if (*(int *)(param_2 + 0x3c) != 0) {
    FUN_140115c12(param_2 + 0x30,0);
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  if (*(longlong *)(param_2 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185d22e FUN_14185d22e body=166 status=ok
// SIG undefined FUN_14185d22e(void)

void FUN_14185d22e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_140485a1a(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_140485a1a(param_1 + 0x40);
  *(undefined2 **)(param_1 + 0x20) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_140115c12(param_1 + 0x30,0);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185d2d4 FUN_14185d2d4 body=45 status=ok
// SIG undefined FUN_14185d2d4(void)

void FUN_14185d2d4(undefined8 param_1,longlong param_2)

{
  FUN_140485972(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185d312 FUN_14185d312 body=76 status=ok
// SIG undefined FUN_14185d312(void)

void FUN_14185d312(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1408c99be();
  param_2[3] = &DAT_14cb83290;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = &PTR_FUN_14b3186a0;
  return;
}



// FUNCTION 14185d35e FUN_14185d35e body=78 status=ok
// SIG undefined FUN_14185d35e(void)

void FUN_14185d35e(undefined8 param_1,longlong param_2)

{
  *(undefined2 **)(param_2 + 0x10) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (*(int *)(param_2 + 0x2c) != 0) {
    FUN_140115c12(param_2 + 0x20,0);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185d3ac FUN_14185d3ac body=118 status=ok
// SIG undefined FUN_14185d3ac(void)

undefined8 FUN_14185d3ac(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb849e0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb849e0,local_38);
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



// FUNCTION 14185d424 FUN_14185d424 body=47 status=ok
// SIG undefined FUN_14185d424(void)

void FUN_14185d424(undefined8 param_1,undefined8 *param_2)

{
  FUN_140265f12();
  param_2[1] = &DAT_14cb83310;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b1828b0;
  return;
}



// FUNCTION 14185d462 FUN_14185d462 body=72 status=ok
// SIG undefined FUN_14185d462(void)

void FUN_14185d462(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b318620;
  *(undefined4 *)(param_1 + 0xde) = 0;
  if (param_1[0xdd] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f136(param_1 + 0xd5);
  FUN_14060f31a(param_1);
  return;
}



// FUNCTION 14185d4aa FUN_14185d4aa body=59 status=ok
// SIG undefined FUN_14185d4aa(void)

void FUN_14185d4aa(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_140485912(param_2);
  return;
}



// FUNCTION 14185d4f7 FUN_14185d4f7 body=49 status=ok
// SIG undefined FUN_14185d4f7(void)

longlong FUN_14185d4f7(void)

{
  if (DAT_14cb6a998 == 0) {
    FUN_14086a14e(&DAT_14cb6a998,&PTR_FUN_14b31ad70);
  }
  return DAT_14cb6a998;
}



// FUNCTION 14185d528 FUN_14185d528 body=49 status=ok
// SIG undefined FUN_14185d528(void)

longlong FUN_14185d528(void)

{
  if (DAT_14cb6aba0 == 0) {
    FUN_14073dd9a(&DAT_14cb6aba0,&PTR_LAB_14b31e4b0);
  }
  return DAT_14cb6aba0;
}



// FUNCTION 14185d559 FUN_14185d559 body=49 status=ok
// SIG undefined FUN_14185d559(void)

longlong FUN_14185d559(void)

{
  if (DAT_14cb6add8 == 0) {
    FUN_14086a14e(&DAT_14cb6add8,&PTR_FUN_14b324868);
  }
  return DAT_14cb6add8;
}



// FUNCTION 14185d58a FUN_14185d58a body=49 status=ok
// SIG undefined FUN_14185d58a(void)

longlong FUN_14185d58a(void)

{
  if (DAT_14cb6b028 == 0) {
    FUN_14073dd9a(&DAT_14cb6b028,&PTR_LAB_14b3295c0);
  }
  return DAT_14cb6b028;
}



// FUNCTION 14185d5bc FUN_14185d5bc body=711 status=ok
// SIG undefined FUN_14185d5bc(void)

undefined8 FUN_14185d5bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
    do {
      *(undefined1 *)(param_2 + -0xe8) = *(undefined1 *)(param_3 + -0xe8);
      if ((*(longlong *)(param_2 + -0xe0) != *(longlong *)(param_3 + -0xe0)) ||
         (*(int *)(param_2 + -0xd8) != *(int *)(param_3 + -0xd8))) {
        *(longlong *)(param_2 + -0xe0) = *(longlong *)(param_3 + -0xe0);
        *(undefined4 *)(param_2 + -0xd8) = *(undefined4 *)(param_3 + -0xd8);
        *(undefined8 *)(param_2 + -0xd0) = 0;
      }
      puVar10 = (undefined8 *)(param_3 + -200);
      puVar11 = (undefined8 *)(param_2 + -200);
      for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      lVar9 = *(longlong *)(param_3 + -0x80);
      if (DAT_14c950c29 == 1) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *(longlong *)(param_3 + -0x80);
        }
      }
      bVar8 = DAT_14c950c29;
      *(longlong *)(param_2 + -0x80) = lVar9;
      lVar9 = *(longlong *)(param_3 + -0x78);
      if ((bVar8 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *(longlong *)(param_3 + -0x78);
          bVar8 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -0x78) = lVar9;
      lVar9 = *(longlong *)(param_3 + -0x70);
      if ((bVar8 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *(longlong *)(param_3 + -0x70);
          bVar8 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -0x70) = lVar9;
      lVar9 = *(longlong *)(param_3 + -0x68);
      if ((bVar8 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *(longlong *)(param_3 + -0x68);
          bVar8 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -0x68) = lVar9;
      *(undefined1 *)(param_2 + -0x40) = *(undefined1 *)(param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0x60);
      uVar2 = *(undefined4 *)(param_3 + -0x5c);
      uVar3 = *(undefined4 *)(param_3 + -0x58);
      uVar4 = *(undefined4 *)(param_3 + -0x54);
      uVar5 = *(undefined4 *)(param_3 + -0x4c);
      uVar6 = *(undefined4 *)(param_3 + -0x48);
      uVar7 = *(undefined4 *)(param_3 + -0x44);
      *(undefined4 *)(param_2 + -0x50) = *(undefined4 *)(param_3 + -0x50);
      *(undefined4 *)(param_2 + -0x4c) = uVar5;
      *(undefined4 *)(param_2 + -0x48) = uVar6;
      *(undefined4 *)(param_2 + -0x44) = uVar7;
      *(undefined4 *)(param_2 + -0x60) = uVar1;
      *(undefined4 *)(param_2 + -0x5c) = uVar2;
      *(undefined4 *)(param_2 + -0x58) = uVar3;
      *(undefined4 *)(param_2 + -0x54) = uVar4;
      lVar9 = *(longlong *)(param_3 + -0x38);
      if ((bVar8 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *(longlong *)(param_3 + -0x38);
        }
      }
      *(longlong *)(param_2 + -0x38) = lVar9;
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0x2c);
      uVar2 = *(undefined4 *)(param_3 + -0x28);
      uVar3 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar1;
      *(undefined4 *)(param_2 + -0x28) = uVar2;
      *(undefined4 *)(param_2 + -0x24) = uVar3;
      if ((*(longlong *)(param_2 + -0x18) != *(longlong *)(param_3 + -0x18)) ||
         (*(int *)(param_2 + -0x10) != *(int *)(param_3 + -0x10))) {
        *(longlong *)(param_2 + -0x18) = *(longlong *)(param_3 + -0x18);
        *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
        *(undefined8 *)(param_2 + -8) = 0;
      }
      if (param_2 + -0xe8 != param_3 + -0xe8) {
        lVar9 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar9 = param_3;
        }
        FUN_1400709d4(param_2,lVar9,*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_2 + 0x3c))
        ;
      }
      uVar1 = *(undefined4 *)(param_3 + 0x44);
      uVar2 = *(undefined4 *)(param_3 + 0x48);
      uVar3 = *(undefined4 *)(param_3 + 0x4c);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
      *(undefined4 *)(param_2 + 0x44) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
      if ((*(longlong *)(param_2 + 0x50) != *(longlong *)(param_3 + 0x50)) ||
         (*(int *)(param_2 + 0x58) != *(int *)(param_3 + 0x58))) {
        *(longlong *)(param_2 + 0x50) = *(longlong *)(param_3 + 0x50);
        *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
        *(undefined8 *)(param_2 + 0x60) = 0;
      }
      lVar9 = *(longlong *)(param_3 + 0x68);
      if (DAT_14c950c29 == 1) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *(longlong *)(param_3 + 0x68);
        }
      }
      *(longlong *)(param_2 + 0x68) = lVar9;
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
      *(undefined2 *)(param_2 + 0x74) = *(undefined2 *)(param_3 + 0x74);
      param_3 = param_3 + 0x160;
      param_2 = param_2 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185d883 FUN_14185d883 body=49 status=ok
// SIG undefined FUN_14185d883(void)

longlong FUN_14185d883(void)

{
  if (DAT_14cb6b308 == 0) {
    FUN_14086a14e(&DAT_14cb6b308,&PTR_FUN_14b330d18);
  }
  return DAT_14cb6b308;
}



// FUNCTION 14185d8b4 FUN_14185d8b4 body=49 status=ok
// SIG undefined FUN_14185d8b4(void)

longlong FUN_14185d8b4(void)

{
  if (DAT_14cb6b3d0 == 0) {
    FUN_14073dd9a(&DAT_14cb6b3d0,&PTR_LAB_14b332be0);
  }
  return DAT_14cb6b3d0;
}



// FUNCTION 14185d8e6 FUN_14185d8e6 body=489 status=ok
// SIG undefined FUN_14185d8e6(void)

undefined8 * FUN_14185d8e6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *param_1 = &PTR_FUN_14b32b680;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = 0;
  puVar8 = (undefined8 *)(param_2 + 0x20);
  puVar9 = param_1 + 4;
  for (lVar7 = 0xd; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  param_1[0x13] = 0;
  param_1[0x1a] = 0;
  lVar7 = param_2 + 0xa0;
  if (*(longlong *)(param_2 + 0xd0) != 0) {
    lVar7 = *(longlong *)(param_2 + 0xd0);
  }
  FUN_1400709d4(param_1 + 0x14,lVar7,*(undefined4 *)(param_2 + 0xd8),0);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  param_1[0x1d] = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0xf0);
  param_1[0x1f] = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x100);
  param_1[0x21] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  uVar3 = *(undefined4 *)(param_2 + 0x120);
  uVar4 = *(undefined4 *)(param_2 + 0x124);
  uVar5 = *(undefined4 *)(param_2 + 0x128);
  uVar6 = *(undefined4 *)(param_2 + 300);
  param_1[0x22] = *(undefined8 *)(param_2 + 0x110);
  param_1[0x23] = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar4;
  *(undefined4 *)(param_1 + 0x25) = uVar5;
  *(undefined4 *)((longlong)param_1 + 300) = uVar6;
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x138);
  param_1[0x28] = 0;
  puVar8 = (undefined8 *)(param_2 + 0x148);
  puVar9 = param_1 + 0x29;
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  param_1[0x32] = &DAT_14a171d50;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = *(undefined8 *)(param_2 + 0x198);
  FUN_1406022fe(param_1 + 0x34,param_2 + 0x1a0);
  param_1[0x32] = &PTR_FUN_14b0394b0;
  param_1[0x36] = 0;
  iVar1 = *(int *)(param_2 + 0x1b8);
  uVar2 = *(undefined8 *)(param_2 + 0x1b0);
  *(int *)(param_1 + 0x37) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  }
  else {
    FUN_1403e11c4(param_1 + 0x36,iVar1,0);
    FUN_1403e103e(param_1[0x36],uVar2,iVar1);
  }
  param_1[0x38] = *(undefined8 *)(param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 14185dad0 FUN_14185dad0 body=32 status=ok
// SIG undefined FUN_14185dad0(void)

undefined8 FUN_14185dad0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Proj");
  return param_2;
}



// FUNCTION 14185daf0 FUN_14185daf0 body=88 status=ok
// SIG undefined FUN_14185daf0(void)

void FUN_14185daf0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 1) = 3;
  *(undefined4 *)(param_2 + 3) = 0x34001;
  FUN_1405c5fa2();
  param_2[7] = &DAT_14cb769e8;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 14185db48 FUN_14185db48 body=78 status=ok
// SIG undefined FUN_14185db48(void)

void FUN_14185db48(undefined8 param_1,longlong param_2)

{
  *(undefined2 **)(param_2 + 0x30) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(int *)(param_2 + 0x4c) != 0) {
    FUN_140115c12(param_2 + 0x40,0);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185db96 FUN_14185db96 body=174 status=ok
// SIG undefined FUN_14185db96(void)

undefined8 FUN_14185db96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    plVar2 = (longlong *)(param_2 + 0x30);
    do {
      lVar1 = *(longlong *)(param_3 + -0x40);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + -0x40);
        }
      }
      plVar2[-6] = lVar1;
      *(undefined1 *)(plVar2 + -5) = *(undefined1 *)(param_3 + -0x38);
      if ((plVar2[-4] != *(longlong *)(param_3 + -0x30)) ||
         ((int)plVar2[-3] != *(int *)(param_3 + -0x28))) {
        plVar2[-4] = *(longlong *)(param_3 + -0x30);
        *(undefined4 *)(plVar2 + -3) = *(undefined4 *)(param_3 + -0x28);
        plVar2[-2] = 0;
      }
      plVar2[-1] = *(longlong *)(param_3 + -0x18);
      (**(code **)(*plVar2 + 0x20))(plVar2,0);
      plVar2[1] = *(longlong *)(param_3 + -8);
      FUN_1406022fe(plVar2 + 2);
      param_3 = param_3 + 0x50;
      plVar2 = plVar2 + 10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185dc44 FUN_14185dc44 body=63 status=ok
// SIG undefined FUN_14185dc44(void)

undefined1 FUN_14185dc44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bcaa4a(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 14185dc8e FUN_14185dc8e body=111 status=ok
// SIG undefined FUN_14185dc8e(void)

undefined8 FUN_14185dc8e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_144837462(DAT_14cb84a00,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185dcfe FUN_14185dcfe body=49 status=ok
// SIG undefined FUN_14185dcfe(void)

longlong FUN_14185dcfe(void)

{
  if (DAT_14cb6b970 == 0) {
    FUN_14086a14e(&DAT_14cb6b970,&PTR_FUN_14b340738);
  }
  return DAT_14cb6b970;
}



// FUNCTION 14185dd2f FUN_14185dd2f body=49 status=ok
// SIG undefined FUN_14185dd2f(void)

longlong FUN_14185dd2f(void)

{
  if (DAT_14cb6bb88 == 0) {
    FUN_14086a14e(&DAT_14cb6bb88,&PTR_FUN_14b342588);
  }
  return DAT_14cb6bb88;
}



// FUNCTION 14185dd60 FUN_14185dd60 body=49 status=ok
// SIG undefined FUN_14185dd60(void)

longlong FUN_14185dd60(void)

{
  if (DAT_14cb6b940 == 0) {
    FUN_14086a14e(&DAT_14cb6b940,&PTR_FUN_14b3404e0);
  }
  return DAT_14cb6b940;
}



// FUNCTION 14185dd92 FUN_14185dd92 body=57 status=ok
// SIG undefined FUN_14185dd92(void)

void FUN_14185dd92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bd10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bd10 = FUN_140002ddd(FUN_14652e91a,uVar1,L"MissionBinderTarget_RegistryActor");
  }
  return;
}



// FUNCTION 14185ddcc FUN_14185ddcc body=40 status=ok
// SIG undefined FUN_14185ddcc(void)

undefined8 FUN_14185ddcc(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185ddf4 FUN_14185ddf4 body=74 status=ok
// SIG undefined FUN_14185ddf4(void)

undefined1 FUN_14185ddf4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_140427308(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185de3e FUN_14185de3e body=68 status=ok
// SIG undefined FUN_14185de3e(void)

undefined1 FUN_14185de3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1400fce78(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185de8a FUN_14185de8a body=111 status=ok
// SIG undefined FUN_14185de8a(void)

undefined8 FUN_14185de8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x28 + lVar1) = *(undefined4 *)(param_3 + 0x28 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185defa FUN_14185defa body=111 status=ok
// SIG undefined FUN_14185defa(void)

undefined8 FUN_14185defa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x28 + lVar1) = *(undefined4 *)(param_3 + 0x28 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185df78 FUN_14185df78 body=197 status=ok
// SIG undefined FUN_14185df78(void)

undefined8 FUN_14185df78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      FUN_140427308(param_2 + lVar3 + 8,param_3 + lVar3 + 8);
      *(undefined8 *)(param_2 + lVar3 + 0x18) = *(undefined8 *)(param_3 + lVar3 + 0x18);
      if (param_2 != param_3) {
        iVar1 = *(int *)(param_3 + 0x28 + lVar3);
        _Src = *(void **)(param_3 + 0x20 + lVar3);
        *(int *)(param_2 + 0x28 + lVar3) = iVar1;
        if (iVar1 == 0 && *(int *)(param_2 + 0x2c + lVar3) == 0) {
          *(undefined4 *)(param_2 + 0x2c + lVar3) = 0;
        }
        else {
          puVar2 = (undefined8 *)(param_2 + lVar3 + 0x20);
          FUN_1446dd670(puVar2,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      *(undefined8 *)(param_2 + 0x30 + lVar3) = *(undefined8 *)(param_3 + 0x30 + lVar3);
      lVar3 = lVar3 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185e03e FUN_14185e03e body=39 status=ok
// SIG undefined FUN_14185e03e(void)

undefined8
FUN_14185e03e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14185e074 FUN_14185e074 body=99 status=ok
// SIG undefined FUN_14185e074(void)

undefined8 FUN_14185e074(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185e0d8 FUN_14185e0d8 body=39 status=ok
// SIG undefined FUN_14185e0d8(void)

undefined8
FUN_14185e0d8(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14185e10e FUN_14185e10e body=111 status=ok
// SIG undefined FUN_14185e10e(void)

undefined8 FUN_14185e10e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x28 + lVar1) = *(undefined4 *)(param_3 + 0x28 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185e17e FUN_14185e17e body=73 status=ok
// SIG undefined FUN_14185e17e(void)

undefined8 * FUN_14185e17e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185e1c8 FUN_14185e1c8 body=215 status=ok
// SIG undefined FUN_14185e1c8(void)

undefined8 FUN_14185e1c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_2 + lVar8;
      lVar2 = param_3 + lVar8;
      FUN_140427308(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined4 *)(lVar2 + 0x2c);
      uVar5 = *(undefined4 *)(lVar2 + 0x30);
      uVar6 = *(undefined4 *)(lVar2 + 0x34);
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar2 + 0x28);
      *(undefined4 *)(lVar1 + 0x2c) = uVar4;
      *(undefined4 *)(lVar1 + 0x30) = uVar5;
      *(undefined4 *)(lVar1 + 0x34) = uVar6;
      if (param_2 != param_3) {
        iVar3 = *(int *)(param_3 + 0x40 + lVar8);
        _Src = *(void **)(param_3 + 0x38 + lVar8);
        *(int *)(param_2 + 0x40 + lVar8) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x44 + lVar8) == 0) {
          *(undefined4 *)(param_2 + 0x44 + lVar8) = 0;
        }
        else {
          puVar7 = (undefined8 *)(param_2 + lVar8 + 0x38);
          FUN_1446dd670(puVar7,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar7,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x48 + lVar8) = *(undefined1 *)(param_3 + 0x48 + lVar8);
      lVar8 = lVar8 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185e2a0 FUN_14185e2a0 body=39 status=ok
// SIG undefined FUN_14185e2a0(void)

undefined8
FUN_14185e2a0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14185e2e4 FUN_14185e2e4 body=111 status=ok
// SIG undefined FUN_14185e2e4(void)

undefined8 FUN_14185e2e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      *(undefined8 *)(param_2 + 0x18 + lVar2) = *(undefined8 *)(param_3 + 0x18 + lVar2);
      uVar1 = *(undefined8 *)(param_3 + 0x20 + lVar2);
      *(undefined8 *)(param_2 + 0x25 + lVar2) = *(undefined8 *)(param_3 + 0x25 + lVar2);
      *(undefined8 *)(param_2 + 0x20 + lVar2) = uVar1;
      lVar2 = lVar2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185e354 FUN_14185e354 body=39 status=ok
// SIG undefined FUN_14185e354(void)

undefined8
FUN_14185e354(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14185e38a FUN_14185e38a body=117 status=ok
// SIG undefined FUN_14185e38a(void)

void FUN_14185e38a(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  FUN_14029e95e(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x30) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x28)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 0x28) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14185e400 FUN_14185e400 body=339 status=ok
// SIG undefined FUN_14185e400(void)

undefined8 * FUN_14185e400(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *_Src;
  longlong *_Dst;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  _Dst = param_1 + 2;
  _Src = param_2 + 2;
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == *(byte *)(param_2 + 6)) {
    if (0x18 < *(ushort *)(param_2 + 5)) {
      _Src = (undefined8 *)param_2[2];
    }
    if (0x18 < *(ushort *)(param_1 + 5)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar5 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar5);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar4 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 5)) {
        plVar4 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar4);
    }
    if (0x18 < *(ushort *)(param_1 + 5)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 6);
    uVar2 = *(ushort *)(param_2 + 5);
    *(ushort *)(param_1 + 5) = uVar2;
    plVar4 = _Dst;
    if (0x18 < uVar2) {
      plVar4 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar4;
      _Src = (undefined8 *)*_Src;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar4,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*pcVar3)(plVar4,_Src);
    }
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  FUN_1409c4df0(param_1 + 7,param_2 + 7);
  return param_1;
}



// FUNCTION 14185e553 FUN_14185e553 body=49 status=ok
// SIG undefined FUN_14185e553(void)

longlong FUN_14185e553(void)

{
  if (DAT_14cb6beb0 == 0) {
    FUN_14086a14e(&DAT_14cb6beb0,&PTR_FUN_14b34be40);
  }
  return DAT_14cb6beb0;
}



// FUNCTION 14185e584 FUN_14185e584 body=104 status=ok
// SIG undefined FUN_14185e584(void)

undefined8 FUN_14185e584(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_14060eaf6(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185e5ee FUN_14185e5ee body=160 status=ok
// SIG undefined FUN_14185e5ee(void)

void FUN_14185e5ee(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x78);
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
  *(undefined ***)(param_2 + 0x48) = &PTR_FUN_14b00be10;
  FUN_14487da0a(*(undefined8 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x68));
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x58));
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014185e656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14185e68e FUN_14185e68e body=243 status=ok
// SIG undefined FUN_14185e68e(void)

undefined4 * FUN_14185e68e(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  plVar1 = *(longlong **)(param_2 + 4);
  plVar2 = *(longlong **)(param_1 + 4);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 4) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  plVar1 = *(longlong **)(param_2 + 10);
  plVar2 = *(longlong **)(param_1 + 10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0xc] = param_2[0xc];
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  FUN_1406b39e6(param_1 + 0x14,param_2 + 0x14);
  FUN_1406b3a44(param_1 + 0x18,param_2 + 0x18);
  FUN_1401f3db8(param_1 + 0x1c,param_2 + 0x1c);
  uVar6 = *(undefined8 *)(param_2 + 0x24);
  uVar7 = *(undefined8 *)(param_2 + 0x26);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  uVar9 = *(undefined8 *)(param_2 + 0x2a);
  uVar10 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = uVar6;
  *(undefined8 *)(param_1 + 0x26) = uVar7;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined8 *)(param_1 + 0x2a) = uVar9;
  *(undefined8 *)(param_1 + 0x2c) = uVar10;
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  return param_1;
}



// FUNCTION 14185e782 FUN_14185e782 body=140 status=ok
// SIG undefined FUN_14185e782(void)

void FUN_14185e782(longlong param_1)

{
  FUN_140741dda(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14b00be10;
  FUN_14487da0a(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_140741e11(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185e80e FUN_14185e80e body=49 status=ok
// SIG undefined FUN_14185e80e(void)

longlong FUN_14185e80e(void)

{
  if (DAT_14cb6c2a0 == 0) {
    FUN_14086a14e(&DAT_14cb6c2a0,&PTR_FUN_14b352620);
  }
  return DAT_14cb6c2a0;
}



// FUNCTION 14185e83f FUN_14185e83f body=49 status=ok
// SIG undefined FUN_14185e83f(void)

longlong FUN_14185e83f(void)

{
  if (DAT_14cb6c5a0 == 0) {
    FUN_14086a14e(&DAT_14cb6c5a0,&PTR_FUN_14b355040);
  }
  return DAT_14cb6c5a0;
}



// FUNCTION 14185e870 FUN_14185e870 body=49 status=ok
// SIG undefined FUN_14185e870(void)

longlong FUN_14185e870(void)

{
  if (DAT_14cb6c5b8 == 0) {
    FUN_14086a14e(&DAT_14cb6c5b8,&PTR_FUN_14b355148);
  }
  return DAT_14cb6c5b8;
}



// FUNCTION 14185e90a FUN_14185e90a body=169 status=ok
// SIG undefined FUN_14185e90a(void)

void FUN_14185e90a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 3,0,0x440);
  *param_2 = &PTR_FUN_14b366bf0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = DAT_14cb86b60;
  *param_2 = &PTR_FUN_14b365c10;
  *(undefined1 *)(param_2 + 6) = 1;
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  FUN_140901aaa(param_2 + 0xe);
  *(undefined1 *)(param_2 + 0x15) = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  FUN_140803772(param_2 + 0x1c);
  return;
}



// FUNCTION 14185e9c6 FUN_14185e9c6 body=79 status=ok
// SIG undefined FUN_14185e9c6(void)

void FUN_14185e9c6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406ed334(puVar1,param_1);
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 1;
  *(undefined2 *)(puVar1 + 0xb) = 0x201;
  *puVar1 = &PTR_FUN_14b3679a0;
  puVar1[0x1f] = &PTR_FUN_14b367d10;
  return;
}



// FUNCTION 14185ea15 FUN_14185ea15 body=134 status=ok
// SIG undefined FUN_14185ea15(void)

void FUN_14185ea15(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 1;
  *(byte *)(puVar1 + 0xd) = *(byte *)(puVar1 + 0xd) | 0xb;
  *puVar1 = &PTR_FUN_14b378f60;
  puVar1[0x22] = &PTR_FUN_14b3792b0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(undefined4 *)(puVar1 + 0x25) = 1;
  puVar1[0x26] = 0;
  *(undefined4 *)(puVar1 + 0x27) = 0x7393099c;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  return;
}



// FUNCTION 14185ea9b FUN_14185ea9b body=92 status=ok
// SIG undefined FUN_14185ea9b(void)

void FUN_14185ea9b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3796a0;
  puVar1[0x1f] = &PTR_LAB_14b3799f0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(undefined4 *)(puVar1 + 0x25) = 0x7393099c;
  puVar1[0x26] = 0;
  return;
}



// FUNCTION 14185eaf7 FUN_14185eaf7 body=66 status=ok
// SIG undefined FUN_14185eaf7(void)

void FUN_14185eaf7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b379de0;
  puVar1[0x1f] = &PTR_LAB_14b37a130;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  return;
}



// FUNCTION 14185eb3a FUN_14185eb3a body=84 status=ok
// SIG undefined FUN_14185eb3a(void)

undefined8 * FUN_14185eb3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3796a0;
  param_1[0x1f] = &PTR_LAB_14b3799f0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185eb8e FUN_14185eb8e body=72 status=ok
// SIG undefined FUN_14185eb8e(void)

undefined8 * FUN_14185eb8e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b379a20;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185ebd6 FUN_14185ebd6 body=84 status=ok
// SIG undefined FUN_14185ebd6(void)

undefined8 * FUN_14185ebd6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b379de0;
  param_1[0x1f] = &PTR_LAB_14b37a130;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185ec2a FUN_14185ec2a body=32 status=ok
// SIG undefined FUN_14185ec2a(void)

undefined8 FUN_14185ec2a(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x2d0);
  return param_2;
}



// FUNCTION 14185ec4a FUN_14185ec4a body=102 status=ok
// SIG undefined FUN_14185ec4a(void)

undefined8 * FUN_14185ec4a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b378f10;
  FUN_140aeec64(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140aeec37(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185ecb0 FUN_14185ecb0 body=64 status=ok
// SIG undefined FUN_14185ecb0(void)

undefined8 * FUN_14185ecb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b379d90;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185ecf0 FUN_14185ecf0 body=32 status=ok
// SIG undefined FUN_14185ecf0(void)

undefined8 FUN_14185ecf0(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x2d0);
  return param_2;
}



// FUNCTION 14185ed10 FUN_14185ed10 body=32 status=ok
// SIG undefined FUN_14185ed10(void)

undefined8 FUN_14185ed10(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x2d0);
  return param_2;
}



// FUNCTION 14185ed30 FUN_14185ed30 body=32 status=ok
// SIG undefined FUN_14185ed30(void)

undefined8 FUN_14185ed30(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x390);
  return param_2;
}



// FUNCTION 14185ed50 FUN_14185ed50 body=94 status=ok
// SIG undefined FUN_14185ed50(void)

void FUN_14185ed50(undefined8 param_1,longlong param_2)

{
  *(undefined2 **)(param_2 + 0x38) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(int *)(param_2 + 0x54) != 0) {
    FUN_140115c12(param_2 + 0x48,0);
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185edae FUN_14185edae body=57 status=ok
// SIG undefined FUN_14185edae(void)

void FUN_14185edae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6db90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6db90 = FUN_140002ddd(FUN_146537e4e,uVar1,L"ObjectiveGraphNodeRuntimeData");
  }
  return;
}



// FUNCTION 14185ede7 FUN_14185ede7 body=49 status=ok
// SIG undefined FUN_14185ede7(void)

longlong FUN_14185ede7(void)

{
  if (DAT_14cb6dc48 == 0) {
    FUN_14086a14e(&DAT_14cb6dc48,&PTR_FUN_14b395710);
  }
  return DAT_14cb6dc48;
}



// FUNCTION 14185ee18 FUN_14185ee18 body=63 status=ok
// SIG undefined FUN_14185ee18(void)

undefined1 FUN_14185ee18(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14070e538(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 14185ee58 FUN_14185ee58 body=45 status=ok
// SIG undefined FUN_14185ee58(void)

void FUN_14185ee58(undefined8 param_1,longlong param_2)

{
  FUN_1447cd778(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185ee86 FUN_14185ee86 body=93 status=ok
// SIG undefined FUN_14185ee86(void)

undefined8 * FUN_14185ee86(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403d9976(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148790d30(param_1,iVar1);
      FUN_148790da3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14185eee4 FUN_14185eee4 body=38 status=ok
// SIG undefined FUN_14185eee4(void)

undefined8 FUN_14185eee4(undefined8 param_1,int param_2)

{
  FUN_1403da20a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185ef18 FUN_14185ef18 body=84 status=ok
// SIG undefined FUN_14185ef18(void)

void FUN_14185ef18(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 8) = &PTR_FUN_14b00be10;
  FUN_14487da0a(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185ef88 FUN_14185ef88 body=109 status=ok
// SIG undefined FUN_14185ef88(void)

void FUN_14185ef88(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39b820;
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_14afff080;
  FUN_1403d9eef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14185eff6 FUN_14185eff6 body=180 status=ok
// SIG undefined FUN_14185eff6(void)

void FUN_14185eff6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39b8f0;
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
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x00014185f0a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14185f0aa FUN_14185f0aa body=327 status=ok
// SIG undefined FUN_14185f0aa(void)

undefined8 * FUN_14185f0aa(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0x101;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x600000000000;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14b39b950;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa9) = 1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xf00000d0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_140901aaa(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_140803772(param_1 + 0x34);
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0x45fa0000;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0x457a0000;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  return param_1;
}



// FUNCTION 14185f200 FUN_14185f200 body=224 status=ok
// SIG undefined FUN_14185f200(void)

void FUN_14185f200(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39b9b0;
  FUN_1447cd778(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10];
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
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x00014185f2d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14185f2ee FUN_14185f2ee body=71 status=ok
// SIG undefined FUN_14185f2ee(void)

void FUN_14185f2ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3a4ae0;
  param_1[0x72] = &PTR_LAB_14b3a5120;
  param_1[0x73] = &PTR_LAB_14b3a5140;
  FUN_14028f4a8(param_1 + 0x74);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14185f344 FUN_14185f344 body=56 status=ok
// SIG undefined FUN_14185f344(void)

void FUN_14185f344(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3a4a00;
  FUN_1447cd778(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14185f37c FUN_14185f37c body=352 status=ok
// SIG undefined FUN_14185f37c(void)

undefined8 FUN_14185f37c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      lVar11 = param_2 + lVar9 + 0x18;
      lVar10 = param_3 + lVar9 + 0x18;
      if (param_2 == param_3) {
        FUN_140311eb6(lVar11,lVar10);
      }
      else {
        FUN_1401b31d8(param_2 + lVar9,param_3 + lVar9);
        FUN_140311eb6(lVar11,lVar10);
        FUN_1401b31d8(param_2 + lVar9 + 0x28,param_3 + lVar9 + 0x28);
      }
      lVar10 = param_2 + lVar9;
      lVar11 = param_3 + lVar9;
      FUN_140311eb6(lVar10 + 0x40,lVar11 + 0x40);
      uVar1 = *(undefined4 *)(lVar11 + 0x54);
      uVar2 = *(undefined4 *)(lVar11 + 0x58);
      uVar3 = *(undefined4 *)(lVar11 + 0x5c);
      uVar4 = *(undefined4 *)(lVar11 + 0x60);
      uVar5 = *(undefined4 *)(lVar11 + 100);
      uVar6 = *(undefined4 *)(lVar11 + 0x68);
      uVar7 = *(undefined4 *)(lVar11 + 0x6c);
      *(undefined4 *)(lVar10 + 0x50) = *(undefined4 *)(lVar11 + 0x50);
      *(undefined4 *)(lVar10 + 0x54) = uVar1;
      *(undefined4 *)(lVar10 + 0x58) = uVar2;
      *(undefined4 *)(lVar10 + 0x5c) = uVar3;
      *(undefined4 *)(lVar10 + 0x60) = uVar4;
      *(undefined4 *)(lVar10 + 100) = uVar5;
      *(undefined4 *)(lVar10 + 0x68) = uVar6;
      *(undefined4 *)(lVar10 + 0x6c) = uVar7;
      lVar11 = param_2 + 0x70 + lVar9;
      lVar10 = param_3 + lVar9;
      FUN_140d188f2(lVar11,lVar10 + 0x70);
      FUN_140d188f2(param_2 + lVar9 + 0xc0,param_3 + lVar9 + 0xc0);
      uVar8 = *(undefined8 *)(lVar10 + 0x118);
      uVar1 = *(undefined4 *)(lVar10 + 0x120);
      uVar2 = *(undefined4 *)(lVar10 + 0x124);
      uVar3 = *(undefined4 *)(lVar10 + 0x128);
      uVar4 = *(undefined4 *)(lVar10 + 300);
      *(undefined8 *)(lVar11 + 0xa0) = *(undefined8 *)(lVar10 + 0x110);
      *(undefined8 *)(lVar11 + 0xa8) = uVar8;
      *(undefined4 *)(lVar11 + 0xb0) = uVar1;
      *(undefined4 *)(lVar11 + 0xb4) = uVar2;
      *(undefined4 *)(lVar11 + 0xb8) = uVar3;
      *(undefined4 *)(lVar11 + 0xbc) = uVar4;
      lVar11 = param_2 + 0x130 + lVar9;
      *(undefined4 *)(lVar11 + 8) = *(undefined4 *)(lVar10 + 0x134);
      FUN_14020a6cc(lVar11,1);
      *(undefined4 *)(param_2 + lVar9 + 0x144) = *(undefined4 *)(lVar10 + 0x140);
      FUN_14020a6cc(param_2 + lVar9 + 0x13c,1);
      lVar9 = lVar9 + 0x148;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14185f4dc FUN_14185f4dc body=49 status=ok
// SIG undefined FUN_14185f4dc(void)

longlong FUN_14185f4dc(void)

{
  if (DAT_14cb6e530 == 0) {
    FUN_14000fc22(&DAT_14cb6e530,&PTR_FUN_14b3a93a0);
  }
  return DAT_14cb6e530;
}



// FUNCTION 14185f50d FUN_14185f50d body=49 status=ok
// SIG undefined FUN_14185f50d(void)

longlong FUN_14185f50d(void)

{
  if (DAT_14cb6e758 == 0) {
    FUN_14073dd9a(&DAT_14cb6e758,&PTR_LAB_14b3add40);
  }
  return DAT_14cb6e758;
}



// FUNCTION 14185f53e FUN_14185f53e body=467 status=ok
// SIG undefined FUN_14185f53e(void)

void FUN_14185f53e(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  uStack_18 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_11 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x38);
  local_19 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1409f1a5c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_19);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_19);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_19 = (undefined1)uVar2;
      uStack_18 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_19);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((((char)param_1[0x2f] == '\x03') || ((*(byte *)(param_1 + 0xc) & 1) != 0)) ||
     ((*(byte *)((longlong)param_1 + 0x61) & 1) != 0)) {
    *(undefined1 *)((longlong)param_1 + 0x1152) = local_19;
    (**(code **)(*param_1 + 0x6c0))(param_1);
  }
  if ((CONCAT17(uStack_11,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185f75a FUN_14185f75a body=486 status=ok
// SIG undefined FUN_14185f75a(void)

void FUN_14185f75a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_1c);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_1c);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_1c = (int)uVar3;
      uStack_18 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar5 = *(longlong *)(param_1 + 0xe38);
  if (lVar5 != 0) {
    if (local_1c != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x1014);
      *(undefined4 *)(lVar5 + 0x428) = uVar1;
      *(undefined4 *)(lVar5 + 0x42c) = uVar1;
      lVar5 = *(longlong *)(param_1 + 0xe38);
    }
    if (*(char *)(lVar5 + 0x420) != '\0') {
      *(bool *)(lVar5 + 0x421) = local_1c != 0;
    }
  }
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185f942 FUN_14185f942 body=276 status=ok
// SIG undefined FUN_14185f942(void)

void FUN_14185f942(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30[0] = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_30);
    }
  }
  puVar4 = local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140b3d268(param_1,puVar4);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14185fa5c FUN_14185fa5c body=118 status=ok
// SIG undefined FUN_14185fa5c(void)

undefined8 FUN_14185fa5c(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb88fb8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb88fb8,local_38);
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



// FUNCTION 14185fad4 FUN_14185fad4 body=112 status=ok
// SIG undefined FUN_14185fad4(void)

void FUN_14185fad4(longlong param_1)

{
  *(undefined2 **)(param_1 + 0xd8) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_140115c12(param_1 + 0xe8,0);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14185fb44 FUN_14185fb44 body=97 status=ok
// SIG undefined FUN_14185fb44(void)

undefined8
FUN_14185fb44(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_5,1);
  }
  else {
    *param_5 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_14480c34d(param_2,param_5 + 8);
  *param_4 = 1;
  return 1;
}



// FUNCTION 14185fbab FUN_14185fbab body=68 status=ok
// SIG undefined FUN_14185fbab(void)

void FUN_14185fbab(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3b2030;
  puVar1[5] = &PTR_FUN_14b3b22e0;
  puVar1[10] = &PTR_FUN_14b3b2310;
  puVar1[0xb] = &PTR_FUN_14b3b2340;
  return;
}



// FUNCTION 14185fbef FUN_14185fbef body=49 status=ok
// SIG undefined FUN_14185fbef(void)

longlong FUN_14185fbef(void)

{
  if (DAT_14cb6e9c8 == 0) {
    FUN_14086a14e(&DAT_14cb6e9c8,&PTR_FUN_14b3b63c8);
  }
  return DAT_14cb6e9c8;
}



// FUNCTION 14185fc20 FUN_14185fc20 body=40 status=ok
// SIG undefined FUN_14185fc20(void)

undefined8 FUN_14185fc20(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185fc48 FUN_14185fc48 body=162 status=ok
// SIG undefined FUN_14185fc48(void)

longlong * FUN_14185fc48(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x250,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b3b9920;
  uVar4 = FUN_140d12354();
  FUN_140aed452(plVar3 + 2,uVar4);
  plVar3[2] = (longlong)&PTR_FUN_14b421900;
  plVar3[0x47] = 0;
  plVar3[0x48] = 0;
  plVar3[0x49] = 0;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14185fcea FUN_14185fcea body=61 status=ok
// SIG undefined FUN_14185fcea(void)

void FUN_14185fcea(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d12354();
  FUN_140aed452(param_2,uVar1);
  *param_2 = &PTR_FUN_14b421900;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  return;
}



// FUNCTION 14185fd30 FUN_14185fd30 body=69 status=ok
// SIG undefined FUN_14185fd30(void)

void FUN_14185fd30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14082b712(param_1 + 0x50,1);
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
                    /* WARNING: Could not recover jumptable at 0x00014185fd71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14185fd76 FUN_14185fd76 body=139 status=ok
// SIG undefined FUN_14185fd76(void)

void FUN_14185fd76(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 14185fe02 FUN_14185fe02 body=29 status=ok
// SIG undefined FUN_14185fe02(void)

undefined8 FUN_14185fe02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14185fe1f FUN_14185fe1f body=49 status=ok
// SIG undefined FUN_14185fe1f(void)

longlong FUN_14185fe1f(void)

{
  if (DAT_14cb6eb68 == 0) {
    FUN_14086a14e(&DAT_14cb6eb68,&PTR_FUN_14b3b9f28);
  }
  return DAT_14cb6eb68;
}



// FUNCTION 14185fe50 FUN_14185fe50 body=49 status=ok
// SIG undefined FUN_14185fe50(void)

longlong FUN_14185fe50(void)

{
  if (DAT_14cb6eb80 == 0) {
    FUN_14086a14e(&DAT_14cb6eb80,&PTR_FUN_14b3ba160);
  }
  return DAT_14cb6eb80;
}



// FUNCTION 14185fe81 FUN_14185fe81 body=49 status=ok
// SIG undefined FUN_14185fe81(void)

longlong FUN_14185fe81(void)

{
  if (DAT_14cb6ec28 == 0) {
    FUN_14073dd9a(&DAT_14cb6ec28,&PTR_LAB_14b3bd560);
  }
  return DAT_14cb6ec28;
}



// FUNCTION 14185feb2 FUN_14185feb2 body=5181 status=ok
// SIG undefined FUN_14185feb2(void)

void FUN_14185feb2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  code *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8 [12];
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  int iStack_12c;
  undefined4 local_128;
  int iStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  int local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [6];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_1e8 = (undefined *)FUN_1446ddbd2();
      local_1e0 = FUN_1468d96f0;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
      local_90 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_90);
    }
  }
  local_98 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_1e8 = (undefined *)FUN_1446ddbd2();
      local_1e0 = FUN_1468d96f0;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
      local_98 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_98);
    }
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_1e8 = (undefined *)FUN_1446ddbd2();
      local_1e0 = FUN_1403a682c;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_f8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_f8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_f8[0] = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_f8);
    }
  }
  local_110 = 0;
  uStack_10c = 0;
  local_108 = 0x9bf48485;
  local_100 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_1e8 = (undefined *)FUN_1446ddbd2();
      local_1e0 = FUN_14170fd90;
      local_1f0 = 0x8000000000000000;
      local_1f8 = (undefined8 *)0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_110 = (undefined4)uVar2;
      uStack_10c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_110);
    }
  }
  local_58 = 0;
  local_50 = 0x200000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_88);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_88);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_88[0] = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_88);
    }
  }
  puVar12 = local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(param_2 + 0x38);
  }
  iStack_114 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_1e8 = (undefined *)FUN_1446ddbd2();
      local_1e0 = FUN_14067a048;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_114);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_114);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_114);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_114 = (int)uVar2;
      local_110 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_114);
    }
  }
  iVar7 = iStack_114;
  local_118 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_1e8 = (undefined *)FUN_1446ddbd2();
      local_1e0 = FUN_14067a048;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_118);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_118);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_118 = (int)uVar2;
      iStack_114 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_118);
    }
  }
  iVar6 = local_118;
  uStack_11c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_1e0 = FUN_1408a629c;
      local_1e8 = &DAT_14c9520b8;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_11c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_11c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_11c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_11c = (undefined4)uVar2;
      local_118 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_11c);
    }
  }
  local_120 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_1e0 = FUN_1408a629c;
      local_1e8 = &DAT_14c9520b8;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_120);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_120);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_120 = (undefined4)uVar2;
      uStack_11c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_120);
    }
  }
  iStack_124 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_1e8 = (undefined *)FUN_1446ddbd2();
      local_1e0 = FUN_14067a048;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_124);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_124);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_124);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_124 = (int)uVar2;
      local_120 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_124);
    }
  }
  iVar5 = iStack_124;
  local_128 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_1e0 = FUN_1408a629c;
      local_1e8 = &DAT_14c9520b8;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_128);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_128);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_128 = (undefined4)uVar2;
      iStack_124 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_128);
    }
  }
  iStack_12c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_1e8 = (undefined *)FUN_1446ddbd2();
      local_1e0 = FUN_14067a048;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_12c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_12c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_12c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_12c = (int)uVar2;
      local_128 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_12c);
    }
  }
  iVar4 = iStack_12c;
  local_130 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_1e0 = FUN_1408a629c;
      local_1e8 = &DAT_14c9520b8;
      local_1f0 = 0;
      local_1f8 = (undefined8 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_130);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_130);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_130 = (undefined4)uVar2;
      iStack_12c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_130);
    }
  }
  uVar8 = uStack_11c;
  local_1d8 = local_120;
  local_1c8 = local_128;
  local_1b8 = local_130;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_148 = CONCAT44(uStack_10c,local_110);
  local_140 = local_108;
  local_138 = 0;
  puVar10 = local_f8;
  puVar11 = local_1a8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_1d0 = iVar5 != 0;
  local_1e8 = (undefined *)CONCAT71(local_1e8._1_7_,iVar6 != 0);
  local_1c0 = iVar4 != 0;
  local_1e0 = (code *)CONCAT44(local_1e0._4_4_,uVar8);
  local_1f0 = CONCAT71(local_1f0._1_7_,iVar7 != 0);
  local_1f8 = puVar12;
  uVar8 = FUN_14074d1e6(local_90,local_98);
  *param_3 = uVar8;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418612f0 FUN_1418612f0 body=139 status=ok
// SIG undefined FUN_1418612f0(void)

void FUN_1418612f0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd0);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0x3002;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 2;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x80) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  FUN_1405c5fa2();
  *(undefined **)((longlong)param_2 + 0xb8) = &DAT_14cb769e8;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined ***)((longlong)param_2 + 0xb0) = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 14186137c FUN_14186137c body=112 status=ok
// SIG undefined FUN_14186137c(void)

void FUN_14186137c(undefined8 param_1,longlong param_2)

{
  *(undefined2 **)(param_2 + 0xb0) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) != 0) {
    FUN_140115c12(param_2 + 0xc0,0);
  }
  *(undefined8 *)(param_2 + 0xb8) = 0;
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x50) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418613ec FUN_1418613ec body=386 status=ok
// SIG undefined FUN_1418613ec(void)

undefined8 FUN_1418613ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    do {
      *(undefined4 *)(param_2 + lVar12) = *(undefined4 *)(param_3 + lVar12);
      lVar3 = *(longlong *)(param_3 + 8 + lVar12);
      if ((*(longlong *)(param_2 + 8 + lVar12) != lVar3) ||
         (*(int *)(param_2 + 0x10 + lVar12) != *(int *)(param_3 + 0x10 + lVar12))) {
        *(longlong *)(param_2 + 8 + lVar12) = lVar3;
        *(undefined4 *)(param_2 + 0x10 + lVar12) = *(undefined4 *)(param_3 + 0x10 + lVar12);
        *(undefined8 *)(param_2 + 0x18 + lVar12) = 0;
      }
      lVar3 = param_3 + lVar12;
      if (param_2 + lVar12 != lVar3) {
        lVar1 = param_3 + lVar12;
        lVar2 = param_2 + 0x20 + lVar12;
        lVar11 = *(longlong *)(lVar1 + 0x50);
        if (*(longlong *)(lVar1 + 0x50) == 0) {
          lVar11 = lVar1 + 0x20;
        }
        FUN_1400709d4(lVar2,lVar11,*(undefined4 *)(lVar1 + 0x58),*(undefined4 *)(lVar2 + 0x3c));
      }
      *(undefined4 *)(param_2 + 0x60 + lVar12) = *(undefined4 *)(lVar3 + 0x60);
      *(undefined4 *)(param_2 + 0x70 + lVar12) = *(undefined4 *)(lVar3 + 0x70);
      *(undefined8 *)(param_2 + 0x68 + lVar12) = *(undefined8 *)(lVar3 + 0x68);
      if ((*(longlong *)(param_2 + 0x78 + lVar12) != *(longlong *)(lVar3 + 0x78)) ||
         (*(int *)(param_2 + 0x80 + lVar12) != *(int *)(param_3 + 0x80 + lVar12))) {
        *(longlong *)(param_2 + 0x78 + lVar12) = *(longlong *)(lVar3 + 0x78);
        *(undefined4 *)(param_2 + 0x80 + lVar12) = *(undefined4 *)(param_3 + 0x80 + lVar12);
        *(undefined8 *)(param_2 + 0x88 + lVar12) = 0;
      }
      uVar4 = *(undefined4 *)(lVar3 + 0x90);
      uVar5 = *(undefined4 *)(lVar3 + 0x94);
      uVar6 = *(undefined4 *)(lVar3 + 0x98);
      uVar7 = *(undefined4 *)(lVar3 + 0x9c);
      uVar8 = *(undefined4 *)(lVar3 + 0xa4);
      uVar9 = *(undefined4 *)(lVar3 + 0xa8);
      uVar10 = *(undefined4 *)(lVar3 + 0xac);
      lVar1 = param_2 + lVar12;
      *(undefined4 *)(lVar1 + 0xa0) = *(undefined4 *)(lVar3 + 0xa0);
      *(undefined4 *)(lVar1 + 0xa4) = uVar8;
      *(undefined4 *)(lVar1 + 0xa8) = uVar9;
      *(undefined4 *)(lVar1 + 0xac) = uVar10;
      *(undefined4 *)(lVar1 + 0x90) = uVar4;
      *(undefined4 *)(lVar1 + 0x94) = uVar5;
      *(undefined4 *)(lVar1 + 0x98) = uVar6;
      *(undefined4 *)(lVar1 + 0x9c) = uVar7;
      (**(code **)(*(longlong *)(lVar1 + 0xb0) + 0x20))((longlong *)(lVar1 + 0xb0),0);
      *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(lVar3 + 0xb8);
      FUN_1406022fe(param_2 + lVar12 + 0xc0);
      lVar12 = lVar12 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14186156e FUN_14186156e body=57 status=ok
// SIG undefined FUN_14186156e(void)

void FUN_14186156e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ede0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ede0 = FUN_140002ddd(FUN_14653e6c4,uVar1,L"PuddleHazardDef");
  }
  return;
}



// FUNCTION 1418615a7 FUN_1418615a7 body=68 status=ok
// SIG undefined FUN_1418615a7(void)

void FUN_1418615a7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3c2e20;
  puVar1[5] = &PTR_FUN_14b3c30d0;
  puVar1[10] = &PTR_FUN_14b3c3100;
  puVar1[0xb] = &PTR_FUN_14b3c3130;
  return;
}



// FUNCTION 1418615eb FUN_1418615eb body=97 status=ok
// SIG undefined FUN_1418615eb(void)

void FUN_1418615eb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bf6e12(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3cc9b0;
  puVar1[5] = &PTR_FUN_14b3ccf30;
  puVar1[6] = &PTR_LAB_14b3ccf70;
  *(undefined2 *)(puVar1 + 0x2f) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x17a) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x17c) = 0x4348000042c80000;
  *(undefined8 *)((longlong)puVar1 + 0x184) = 0x43fa0000;
  *(undefined4 *)((longlong)puVar1 + 0x18c) = 0;
  return;
}



// FUNCTION 14186164c FUN_14186164c body=49 status=ok
// SIG undefined FUN_14186164c(void)

longlong FUN_14186164c(void)

{
  if (DAT_14cb6f1b8 == 0) {
    FUN_14086a14e(&DAT_14cb6f1b8,&PTR_FUN_14b3c68f8);
  }
  return DAT_14cb6f1b8;
}



// FUNCTION 14186167e FUN_14186167e body=114 status=ok
// SIG undefined FUN_14186167e(void)

void FUN_14186167e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_5;
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  uVar1 = FUN_14477b072(param_5,DAT_14cb6f218);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418616f2 FUN_1418616f2 body=1883 status=ok
// SIG undefined FUN_1418616f2(void)

void FUN_1418616f2(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
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
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
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
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  local_30 = 0;
  uStack_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
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
      uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
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
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_34);
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
  iVar4 = iStack_34;
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_38 = (int)uVar2;
      iStack_34 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = CONCAT71(local_58._1_7_,local_38 != 0);
  FUN_1405832a8(local_20,local_28,CONCAT44(uStack_2c,local_30),iVar4 != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141861e4e FUN_141861e4e body=40 status=ok
// SIG undefined FUN_141861e4e(void)

undefined8 FUN_141861e4e(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141861e76 FUN_141861e76 body=141 status=ok
// SIG undefined FUN_141861e76(void)

longlong * FUN_141861e76(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b3cc1a0;
  uVar4 = FUN_1401726e6();
  FUN_140aed452(plVar3 + 2,uVar4);
  plVar3[2] = (longlong)&PTR_FUN_14b3f7c00;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 141861f04 FUN_141861f04 body=40 status=ok
// SIG undefined FUN_141861f04(void)

undefined8 FUN_141861f04(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141861f2c FUN_141861f2c body=40 status=ok
// SIG undefined FUN_141861f2c(void)

void FUN_141861f2c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1401726e6();
  FUN_140aed452(param_2,uVar1);
  *param_2 = &PTR_FUN_14b3f7c00;
  return;
}



// FUNCTION 141861f54 FUN_141861f54 body=123 status=ok
// SIG undefined FUN_141861f54(void)

void FUN_141861f54(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 7) = 1;
  param_2[8] = &DAT_4030000000000000;
  param_2[9] = 0x4022000000000000;
  *(undefined4 *)(param_2 + 10) = 0x42c80000;
  *(undefined2 *)((longlong)param_2 + 0x54) = 0x104;
  *(undefined1 *)((longlong)param_2 + 0x56) = 1;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x62) = 0x101;
  uVar1 = FUN_140691b73();
  *(undefined1 *)((longlong)param_2 + 100) = uVar1;
  uVar1 = FUN_140691bc1();
  *(undefined1 *)((longlong)param_2 + 0x65) = uVar1;
  return;
}



// FUNCTION 141861fd0 FUN_141861fd0 body=145 status=ok
// SIG undefined FUN_141861fd0(void)

void FUN_141861fd0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 7) = 1;
  param_2[8] = &DAT_4030000000000000;
  param_2[9] = 0x4022000000000000;
  *(undefined4 *)(param_2 + 10) = 0x42c80000;
  *(undefined2 *)((longlong)param_2 + 0x54) = 0x104;
  *(undefined1 *)((longlong)param_2 + 0x56) = 1;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x62) = 0x101;
  uVar1 = FUN_140691b73();
  *(undefined1 *)((longlong)param_2 + 100) = uVar1;
  uVar1 = FUN_140691bc1();
  *(undefined1 *)((longlong)param_2 + 0x65) = uVar1;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



// FUNCTION 141862062 FUN_141862062 body=139 status=ok
// SIG undefined FUN_141862062(void)

void FUN_141862062(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 1418620ee FUN_1418620ee body=29 status=ok
// SIG undefined FUN_1418620ee(void)

undefined8 FUN_1418620ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186210b FUN_14186210b body=35 status=ok
// SIG undefined FUN_14186210b(void)

void FUN_14186210b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140db2388(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3cddd0;
  return;
}



// FUNCTION 14186212e FUN_14186212e body=119 status=ok
// SIG undefined FUN_14186212e(void)

void FUN_14186212e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140db2388(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3ce200;
  *(undefined1 *)(puVar1 + 5) = 1;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x49) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x51) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f000000;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0xf00000d0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  return;
}



// FUNCTION 1418621a5 FUN_1418621a5 body=43 status=ok
// SIG undefined FUN_1418621a5(void)

void FUN_1418621a5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c7f224(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3cf040;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1418621d0 FUN_1418621d0 body=57 status=ok
// SIG undefined FUN_1418621d0(void)

void FUN_1418621d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f418 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f418 = FUN_140002ddd(FUN_1465403da,uVar1,L"SpawnPatternDef");
  }
  return;
}



// FUNCTION 14186220a FUN_14186220a body=40 status=ok
// SIG undefined FUN_14186220a(void)

undefined8 FUN_14186220a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141862232 FUN_141862232 body=40 status=ok
// SIG undefined FUN_141862232(void)

undefined8 FUN_141862232(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186225a FUN_14186225a body=67 status=ok
// SIG undefined FUN_14186225a(void)

undefined8 * FUN_14186225a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3ce850;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186229e FUN_14186229e body=85 status=ok
// SIG undefined FUN_14186229e(void)

undefined8 * FUN_14186229e(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b3cec70;
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    FUN_144a2da94(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418622f4 FUN_1418622f4 body=40 status=ok
// SIG undefined FUN_1418622f4(void)

undefined8 FUN_1418622f4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186231c FUN_14186231c body=450 status=ok
// SIG undefined FUN_14186231c(void)

undefined8
FUN_14186231c(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             longlong *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_38 = *param_5;
    (**(code **)(*param_2 + 0x160))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0x160))(param_2,&local_38);
    if (*param_5 != local_38) {
      param_5[2] = 0;
    }
    *param_5 = local_38;
  }
  FUN_14041e882(param_5,param_2);
  plVar3 = param_5 + 3;
  local_38 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_38 = *plVar3;
    (**(code **)(*param_2 + 0x160))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0x160))(param_2,&local_38);
    if (*plVar3 != local_38) {
      param_5[5] = 0;
    }
    *plVar3 = local_38;
  }
  FUN_14041e882(plVar3,param_2);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_5 + 6,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_5 + 6) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_38 = CONCAT44(local_38._4_4_,(uint)*(byte *)((longlong)param_5 + 0x34));
    (**(code **)(*param_2 + 0x170))(param_2,&local_38,4);
    if (1 < (uint)local_38) {
      FUN_14572541c(param_2);
    }
    plVar3 = (longlong *)(ulonglong)(uint)local_38;
    *(bool *)((longlong)param_5 + 0x34) = (uint)local_38 != 0;
  }
  else {
    *(bool *)((longlong)param_5 + 0x34) = *piVar2 != 0;
    plVar3 = (longlong *)param_2[1];
    *plVar3 = *plVar3 + 4;
  }
  *param_4 = 1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418624e0 FUN_1418624e0 body=393 status=ok
// SIG undefined FUN_1418624e0(void)

undefined8 * FUN_1418624e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ab51200;
  param_1[3] = 0x4461000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
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
  FUN_1404e256a(param_1 + 5,&local_40);
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
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_1 + 0x4b) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_14b3d6370;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xaaad1010;
  param_1[0x1b] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186266a FUN_14186266a body=85 status=ok
// SIG undefined FUN_14186266a(void)

void FUN_14186266a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3d6370;
  FUN_140753a84(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 1418626c0 FUN_1418626c0 body=167 status=ok
// SIG undefined FUN_1418626c0(void)

undefined8 FUN_1418626c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *param_4;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  FUN_140b405f6(param_1,param_2,param_3,local_68);
  if (*param_4 != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141862768 FUN_141862768 body=118 status=ok
// SIG undefined FUN_141862768(void)

undefined8 FUN_141862768(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb8d3c0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1407d7c9c(DAT_14cb8d3c0,local_38);
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



// FUNCTION 1418627e0 FUN_1418627e0 body=70 status=ok
// SIG undefined FUN_1418627e0(void)

void FUN_1418627e0(undefined8 param_1,longlong param_2)

{
  FUN_1447cd778(*(undefined8 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90));
  if (*(longlong *)(param_2 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x78) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141862826 FUN_141862826 body=47 status=ok
// SIG undefined FUN_141862826(void)

undefined8 FUN_141862826(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_3 + 8))(param_3);
  FUN_1402057ac(param_2,param_3,uVar1,0);
  return 1;
}



// FUNCTION 141862856 FUN_141862856 body=118 status=ok
// SIG undefined FUN_141862856(void)

undefined8 FUN_141862856(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb8d760 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb8d760,local_38);
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



// FUNCTION 1418628ce FUN_1418628ce body=130 status=ok
// SIG undefined FUN_1418628ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418628ce(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(undefined ***)(param_2 + 0xe0) = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_2 + 0xf0) != '\0') &&
     (plVar1 = *(longlong **)(param_2 + 0xe8), plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  FUN_14063a91c(param_2 + 0x20);
  return;
}



// FUNCTION 141862950 FUN_141862950 body=57 status=ok
// SIG undefined FUN_141862950(void)

void FUN_141862950(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f8b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f8b0 = FUN_140002ddd(FUN_146541b86,uVar1,L"UsabilityPromptDef");
  }
  return;
}



// FUNCTION 141862989 FUN_141862989 body=57 status=ok
// SIG undefined FUN_141862989(void)

void FUN_141862989(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3de550;
  puVar1[5] = &PTR_FUN_14b3deb30;
  puVar1[6] = &PTR_LAB_14b3deb70;
  return;
}



// FUNCTION 1418629c2 FUN_1418629c2 body=76 status=ok
// SIG undefined FUN_1418629c2(void)

undefined8 FUN_1418629c2(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140df9088(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000141862a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 141862a0e FUN_141862a0e body=22 status=ok
// SIG undefined FUN_141862a0e(void)

ulonglong FUN_141862a0e(uint *param_1)

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
  
  plVar3 = DAT_14cb6fec8;
  if (DAT_14cb6fec8 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cb6fec8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb6fec8 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cb6fec8 + 0x1fc) < (int)DAT_14cb6fec8[0x3a])) goto LAB_144815de0;
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
    cVar4 = (**(code **)(*DAT_14cb6fec8 + 0x300))(DAT_14cb6fec8);
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


