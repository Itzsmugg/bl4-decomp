// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141739b92 FUN_141739b92 body=49 status=ok
// SIG undefined FUN_141739b92(void)

longlong FUN_141739b92(void)

{
  if (DAT_14c9a41c0 == 0) {
    FUN_14086a14e(&DAT_14c9a41c0,&PTR_FUN_14a185eb0);
  }
  return DAT_14c9a41c0;
}



// FUNCTION 141739bc3 FUN_141739bc3 body=49 status=ok
// SIG undefined FUN_141739bc3(void)

longlong FUN_141739bc3(void)

{
  if (DAT_14c9a4210 == 0) {
    FUN_14086a14e(&DAT_14c9a4210,&PTR_FUN_14a186240);
  }
  return DAT_14c9a4210;
}



// FUNCTION 141739bf4 FUN_141739bf4 body=49 status=ok
// SIG undefined FUN_141739bf4(void)

longlong FUN_141739bf4(void)

{
  if (DAT_14c9a43d0 == 0) {
    FUN_14086a14e(&DAT_14c9a43d0,&PTR_FUN_14a189618);
  }
  return DAT_14c9a43d0;
}



// FUNCTION 141739c25 FUN_141739c25 body=49 status=ok
// SIG undefined FUN_141739c25(void)

longlong FUN_141739c25(void)

{
  if (DAT_14c9a43e8 == 0) {
    FUN_14086a14e(&DAT_14c9a43e8,&PTR_FUN_14a189730);
  }
  return DAT_14c9a43e8;
}



// FUNCTION 141739c56 FUN_141739c56 body=154 status=ok
// SIG undefined FUN_141739c56(void)

void FUN_141739c56(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  longlong lStack_24;
  undefined4 uStack_1c;
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xffffffff;
  lStack_24 = 0;
  uStack_1c = 0xffffffff;
  local_18 = 0;
  local_10 = 0xffffffff;
  if (*param_2 != 0) {
    local_28 = (undefined4)param_2[1];
    local_30 = *param_2;
  }
  if (*param_3 != 0) {
    uStack_1c = (undefined4)param_3[1];
    lStack_24 = *param_3;
  }
  if (*param_4 != 0) {
    local_10 = (undefined4)param_4[1];
    local_18 = *param_4;
  }
  FUN_1447cd2ec(0xffffffff,&local_30);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141739cf1 FUN_141739cf1 body=49 status=ok
// SIG undefined FUN_141739cf1(void)

longlong FUN_141739cf1(void)

{
  if (DAT_14c9a4290 == 0) {
    FUN_14086a14e(&DAT_14c9a4290,&PTR_FUN_14a186c50);
  }
  return DAT_14c9a4290;
}



// FUNCTION 141739d22 FUN_141739d22 body=49 status=ok
// SIG undefined FUN_141739d22(void)

longlong FUN_141739d22(void)

{
  if (DAT_14c9a4390 == 0) {
    FUN_14073dd9a(&DAT_14c9a4390,&PTR_LAB_14a188fc0);
  }
  return DAT_14c9a4390;
}



// FUNCTION 141739d54 FUN_141739d54 body=593 status=ok
// SIG undefined FUN_141739d54(void)

void FUN_141739d54(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
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
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_40;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    puVar5 = *(undefined **)(*(longlong *)(param_2 + 0x30) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (DAT_14c952068 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c952060 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c952060) break;
        } while (puVar5 != (undefined *)0x0);
      }
      if (!bVar6) goto LAB_141739e58;
    }
    else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c952068) == 0) goto LAB_141739e58;
    local_40 = *puVar4;
    local_38 = 0xffffffff;
    puVar4 = &local_40;
  }
LAB_141739e58:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *puVar4;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141739fa6 FUN_141739fa6 body=593 status=ok
// SIG undefined FUN_141739fa6(void)

void FUN_141739fa6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
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
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_40;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    puVar5 = *(undefined **)(*(longlong *)(param_2 + 0x30) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (DAT_14c952068 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c952060 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c952060) break;
        } while (puVar5 != (undefined *)0x0);
      }
      if (!bVar6) goto LAB_14173a0aa;
    }
    else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c952068) == 0) goto LAB_14173a0aa;
    local_40 = *puVar4;
    local_38 = 0xffffffff;
    puVar4 = &local_40;
  }
LAB_14173a0aa:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *puVar4;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14173a1f8 FUN_14173a1f8 body=957 status=ok
// SIG undefined FUN_14173a1f8(void)

void FUN_14173a1f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
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
  local_48 = 0;
  local_40 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
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
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_48;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    puVar6 = *(undefined **)(*(longlong *)(param_2 + 0x30) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (DAT_14c952068 == 0) {
      bVar7 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c952060 && bVar7) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar7 = puVar6 != (undefined *)0x0;
          if (puVar6 == &DAT_14c952060) break;
        } while (puVar6 != (undefined *)0x0);
      }
      if (!bVar7) goto LAB_14173a397;
    }
    else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952068) == 0) goto LAB_14173a397;
    local_48 = *puVar5;
    local_40 = 0xffffffff;
    puVar5 = &local_48;
  }
LAB_14173a397:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_140ebd630(local_38,puVar5);
  *param_3 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14173a5b6 FUN_14173a5b6 body=1477 status=ok
// SIG undefined FUN_14173a5b6(void)

void FUN_14173a5b6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
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
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
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
  local_50 = 0;
  local_48 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
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
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_50;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    puVar6 = *(undefined **)(*(longlong *)(param_2 + 0x30) + 8);
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
    if (DAT_14c952068 == 0) {
      bVar8 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c952060 && bVar8) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar8 = puVar6 != (undefined *)0x0;
          if (puVar6 == &DAT_14c952060) break;
        } while (puVar6 != (undefined *)0x0);
      }
      if (bVar8) goto LAB_14173ab19;
    }
    else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952068) != 0) {
LAB_14173ab19:
      local_50 = *puVar5;
      local_48 = 0xffffffff;
      puVar5 = &local_50;
    }
  }
  local_60 = 0;
  local_58 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
  puVar7 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar7 = &local_60;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    puVar6 = *(undefined **)(*(longlong *)(param_2 + 0x30) + 8);
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
    if (DAT_14c952068 == 0) {
      bVar8 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c952060 && bVar8) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar8 = puVar6 != (undefined *)0x0;
          if (puVar6 == &DAT_14c952060) break;
        } while (puVar6 != (undefined *)0x0);
      }
      if (!bVar8) goto LAB_14173a841;
    }
    else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952068) == 0) goto LAB_14173a841;
    local_60 = *puVar7;
    local_58 = 0xffffffff;
    puVar7 = &local_60;
  }
LAB_14173a841:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1409c2518(local_40,puVar5,puVar7);
  *param_3 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14173ab7c FUN_14173ab7c body=49 status=ok
// SIG undefined FUN_14173ab7c(void)

longlong FUN_14173ab7c(void)

{
  if (DAT_14c9a4520 == 0) {
    FUN_14086a14e(&DAT_14c9a4520,&PTR_FUN_14a18af98);
  }
  return DAT_14c9a4520;
}



// FUNCTION 14173abae FUN_14173abae body=152 status=ok
// SIG undefined FUN_14173abae(void)

undefined8 FUN_14173abae(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  FUN_140045924(DAT_14c947fe0,local_30,param_1 + 0x2f8,1);
  FUN_1446dcdd4(param_2,local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173ac48 FUN_14173ac48 body=154 status=ok
// SIG undefined FUN_14173ac48(void)

undefined8 FUN_14173ac48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    lVar8 = param_2 + 0x10;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(param_3 + lVar9);
      if (*(longlong *)(param_2 + lVar9) != lVar3) {
        *(undefined8 *)(lVar8 + lVar9) = 0;
      }
      lVar1 = param_3 + lVar9;
      puVar2 = (undefined8 *)(lVar8 + lVar9);
      puVar2[-2] = lVar3;
      if (puVar2[-1] != *(longlong *)(lVar1 + 8)) {
        *(undefined8 *)(lVar8 + lVar9) = 0;
      }
      uVar7 = FUN_14477b664();
      uVar7 = FUN_14477b664(uVar7);
      puVar2[-1] = uVar7;
      *puVar2 = *(undefined8 *)(lVar1 + 0x10);
      uVar4 = *(undefined4 *)(lVar1 + 0x1c);
      uVar5 = *(undefined4 *)(lVar1 + 0x20);
      uVar6 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar4;
      *(undefined4 *)(puVar2 + 2) = uVar5;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uVar6;
      lVar9 = lVar9 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14173ace2 FUN_14173ace2 body=109 status=ok
// SIG undefined FUN_14173ace2(void)

int FUN_14173ace2(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173ad50 FUN_14173ad50 body=100 status=ok
// SIG undefined FUN_14173ad50(void)

undefined8 FUN_14173ad50(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  if (*param_2 == 0) {
    local_20 = 0;
  }
  else {
    FUN_1400bc2ec(*param_2,&local_20,&local_28);
  }
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173adb6 FUN_14173adb6 body=104 status=ok
// SIG undefined FUN_14173adb6(void)

void FUN_14173adb6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_14072ffb2(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_2 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14173ae26 FUN_14173ae26 body=60 status=ok
// SIG undefined FUN_14173ae26(void)

void FUN_14173ae26(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a18e890;
  puVar1[7] = 0;
  puVar1[8] = 0xffffffff;
  puVar1[9] = 0xffffffff00000000;
  return;
}



// FUNCTION 14173ae62 FUN_14173ae62 body=49 status=ok
// SIG undefined FUN_14173ae62(void)

longlong FUN_14173ae62(void)

{
  if (DAT_14c9a4618 == 0) {
    FUN_14086a14e(&DAT_14c9a4618,&PTR_FUN_14a18ee80);
  }
  return DAT_14c9a4618;
}



// FUNCTION 14173ae93 FUN_14173ae93 body=75 status=ok
// SIG undefined FUN_14173ae93(void)

void FUN_14173ae93(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a18f180;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 14173aee3 FUN_14173aee3 body=49 status=ok
// SIG undefined FUN_14173aee3(void)

longlong FUN_14173aee3(void)

{
  if (DAT_14c9a48f0 == 0) {
    FUN_14073dd9a(&DAT_14c9a48f0,&PTR_LAB_14a195180);
  }
  return DAT_14c9a48f0;
}



// FUNCTION 14173af14 FUN_14173af14 body=40 status=ok
// SIG undefined FUN_14173af14(void)

undefined8 FUN_14173af14(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14173af3c FUN_14173af3c body=83 status=ok
// SIG undefined FUN_14173af3c(void)

undefined8 * FUN_14173af3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a18f180;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4632(param_1 + 6);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14173af90 FUN_14173af90 body=58 status=ok
// SIG undefined FUN_14173af90(void)

void FUN_14173af90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4632(param_1);
  return;
}



// FUNCTION 14173afca FUN_14173afca body=49 status=ok
// SIG undefined FUN_14173afca(void)

longlong FUN_14173afca(void)

{
  if (DAT_14c9a4900 == 0) {
    FUN_14086a14e(&DAT_14c9a4900,&PTR_FUN_14a196700);
  }
  return DAT_14c9a4900;
}



// FUNCTION 14173affb FUN_14173affb body=49 status=ok
// SIG undefined FUN_14173affb(void)

longlong FUN_14173affb(void)

{
  if (DAT_14c9a4948 == 0) {
    FUN_14086a14e(&DAT_14c9a4948,&PTR_FUN_14a196ad8);
  }
  return DAT_14c9a4948;
}



// FUNCTION 14173b02c FUN_14173b02c body=49 status=ok
// SIG undefined FUN_14173b02c(void)

longlong FUN_14173b02c(void)

{
  if (DAT_14c9a49a8 == 0) {
    FUN_14086a14e(&DAT_14c9a49a8,&PTR_FUN_14a197008);
  }
  return DAT_14c9a49a8;
}



// FUNCTION 14173b05d FUN_14173b05d body=49 status=ok
// SIG undefined FUN_14173b05d(void)

longlong FUN_14173b05d(void)

{
  if (DAT_14c9a4978 == 0) {
    FUN_14086a14e(&DAT_14c9a4978,&PTR_FUN_14a196d48);
  }
  return DAT_14c9a4978;
}



// FUNCTION 14173b08e FUN_14173b08e body=49 status=ok
// SIG undefined FUN_14173b08e(void)

longlong FUN_14173b08e(void)

{
  if (DAT_14c9a4aa8 == 0) {
    FUN_14086a14e(&DAT_14c9a4aa8,&PTR_FUN_14a198190);
  }
  return DAT_14c9a4aa8;
}



// FUNCTION 14173b0bf FUN_14173b0bf body=49 status=ok
// SIG undefined FUN_14173b0bf(void)

longlong FUN_14173b0bf(void)

{
  if (DAT_14c9a4ad8 == 0) {
    FUN_14086a14e(&DAT_14c9a4ad8,&PTR_FUN_14a1982f0);
  }
  return DAT_14c9a4ad8;
}



// FUNCTION 14173b0f0 FUN_14173b0f0 body=49 status=ok
// SIG undefined FUN_14173b0f0(void)

longlong FUN_14173b0f0(void)

{
  if (DAT_14c9a4af0 == 0) {
    FUN_14086a14e(&DAT_14c9a4af0,&PTR_FUN_14a198460);
  }
  return DAT_14c9a4af0;
}



// FUNCTION 14173b121 FUN_14173b121 body=49 status=ok
// SIG undefined FUN_14173b121(void)

longlong FUN_14173b121(void)

{
  if (DAT_14c9a4b38 == 0) {
    FUN_14086a14e(&DAT_14c9a4b38,&PTR_FUN_14a1986f0);
  }
  return DAT_14c9a4b38;
}



// FUNCTION 14173b152 FUN_14173b152 body=49 status=ok
// SIG undefined FUN_14173b152(void)

longlong FUN_14173b152(void)

{
  if (DAT_14c9a4d70 == 0) {
    FUN_14073dd9a(&DAT_14c9a4d70,&PTR_LAB_14a19e300);
  }
  return DAT_14c9a4d70;
}



// FUNCTION 14173b184 FUN_14173b184 body=542 status=ok
// SIG undefined FUN_14173b184(void)

void FUN_14173b184(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  longlong local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  local_2c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
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
      local_34 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x38);
  local_40 = 0;
  local_38 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
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
      local_40 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  plVar4 = &local_34;
  if (plVar5 != (longlong *)0x0) {
    plVar4 = plVar5;
  }
  plVar5 = &local_40;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = *plVar4 == *plVar5;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173b3a4 FUN_14173b3a4 body=1034 status=ok
// SIG undefined FUN_14173b3a4(void)

void FUN_14173b3a4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
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
      local_2c = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  uStack_38 = 0;
  uStack_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_38);
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
  local_3c = 0;
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
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
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
      local_3c = (int)uVar2;
      uStack_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
  puVar6 = &local_2c;
  if (puVar4 != (undefined8 *)0x0) {
    puVar6 = puVar4;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = FUN_1410cdfda(puVar6,CONCAT44(uStack_34,uStack_38),local_3c != 0);
  *param_3 = uVar5;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173b7b0 FUN_14173b7b0 body=104 status=ok
// SIG undefined FUN_14173b7b0(void)

undefined8 FUN_14173b7b0(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1448fdc6e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173b81a FUN_14173b81a body=236 status=ok
// SIG undefined FUN_14173b81a(void)

undefined8 FUN_14173b81a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0x38;
    do {
      *(undefined4 *)(param_2 + -0x38 + lVar5) = *(undefined4 *)(param_3 + -0x38 + lVar5);
      lVar3 = *(longlong *)(param_3 + -0x30 + lVar5);
      if (*(longlong *)(param_2 + -0x30 + lVar5) != lVar3) {
        *(undefined8 *)(param_2 + -0x20 + lVar5) = 0;
      }
      lVar1 = param_3 + lVar5;
      *(longlong *)(param_2 + -0x30 + lVar5) = lVar3;
      if (*(longlong *)(param_2 + -0x28 + lVar5) != *(longlong *)(lVar1 + -0x28)) {
        *(undefined8 *)(param_2 + -0x20 + lVar5) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(param_2 + -0x28 + lVar5) = uVar4;
      *(undefined8 *)(param_2 + -0x20 + lVar5) = *(undefined8 *)(lVar1 + -0x20);
      uVar4 = *(undefined8 *)(lVar1 + -0x10);
      puVar2 = (undefined8 *)(param_2 + -0x18 + lVar5);
      *puVar2 = *(undefined8 *)(lVar1 + -0x18);
      puVar2[1] = uVar4;
      if ((*(longlong *)(param_2 + -8 + lVar5) != *(longlong *)(lVar1 + -8)) ||
         (*(int *)(param_2 + lVar5) != *(int *)(param_3 + lVar5))) {
        *(longlong *)(param_2 + -8 + lVar5) = *(longlong *)(lVar1 + -8);
        *(undefined4 *)(param_2 + lVar5) = *(undefined4 *)(param_3 + lVar5);
        *(undefined8 *)(param_2 + 8 + lVar5) = 0;
      }
      *(undefined4 *)(param_2 + 0x10 + lVar5) = *(undefined4 *)(lVar1 + 0x10);
      lVar5 = lVar5 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14173b906 FUN_14173b906 body=31 status=ok
// SIG undefined FUN_14173b906(void)

undefined1
FUN_14173b906(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1401b48d6(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14173b926 FUN_14173b926 body=118 status=ok
// SIG undefined FUN_14173b926(void)

void FUN_14173b926(undefined8 param_1,longlong param_2)

{
  FUN_140754d76(*(undefined8 *)(param_2 + 0x950),*(undefined4 *)(param_2 + 0x958));
  if (*(longlong *)(param_2 + 0x950) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_2 + 0x938),*(undefined4 *)(param_2 + 0x940));
  if (*(longlong *)(param_2 + 0x938) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x928) != 0) {
    FUN_1400020a8();
  }
  FUN_140754d9e(param_2 + 0x10);
  return;
}



// FUNCTION 14173b99c FUN_14173b99c body=49 status=ok
// SIG undefined FUN_14173b99c(void)

longlong FUN_14173b99c(void)

{
  if (DAT_14c9a4dc8 == 0) {
    FUN_14086a14e(&DAT_14c9a4dc8,&PTR_FUN_14a1a1280);
  }
  return DAT_14c9a4dc8;
}



// FUNCTION 14173b9cd FUN_14173b9cd body=49 status=ok
// SIG undefined FUN_14173b9cd(void)

longlong FUN_14173b9cd(void)

{
  if (DAT_14c9a4f08 == 0) {
    FUN_14086a14e(&DAT_14c9a4f08,&PTR_FUN_14a1a2b50);
  }
  return DAT_14c9a4f08;
}



// FUNCTION 14173b9fe FUN_14173b9fe body=101 status=ok
// SIG undefined FUN_14173b9fe(void)

void FUN_14173b9fe(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar2 = *(byte *)(param_1 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_14173ba3f:
      *(byte *)(param_1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar1 = FUN_1448abda6(param_1);
      if (lVar1 == 0) {
        bVar2 = *(byte *)(param_1 + 0x9d);
        goto LAB_14173ba3f;
      }
    }
  }
  return;
}



// FUNCTION 14173ba64 FUN_14173ba64 body=35 status=ok
// SIG undefined FUN_14173ba64(void)

void FUN_14173ba64(undefined8 param_1,longlong param_2)

{
  FUN_140785382(param_2,1);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x46) = 0;
  *(undefined8 *)(param_2 + 0x4e) = 0;
  return;
}



// FUNCTION 14173ba88 FUN_14173ba88 body=100 status=ok
// SIG undefined FUN_14173ba88(void)

undefined8 FUN_14173ba88(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  if (*param_2 == 0) {
    local_20 = 0;
  }
  else {
    FUN_1400bc2ec(*param_2,&local_20,&local_28);
  }
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173baee FUN_14173baee body=88 status=ok
// SIG undefined FUN_14173baee(void)

longlong * FUN_14173baee(longlong *param_1,longlong *param_2)

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



// FUNCTION 14173bb46 FUN_14173bb46 body=49 status=ok
// SIG undefined FUN_14173bb46(void)

longlong FUN_14173bb46(void)

{
  if (DAT_14c9a55d8 == 0) {
    FUN_14086a14e(&DAT_14c9a55d8,&PTR_FUN_14a1afc70);
  }
  return DAT_14c9a55d8;
}



// FUNCTION 14173bb77 FUN_14173bb77 body=49 status=ok
// SIG undefined FUN_14173bb77(void)

longlong FUN_14173bb77(void)

{
  if (DAT_14c9a54a8 == 0) {
    FUN_14086a14e(&DAT_14c9a54a8,&PTR_FUN_14a1aeb28);
  }
  return DAT_14c9a54a8;
}



// FUNCTION 14173bba8 FUN_14173bba8 body=49 status=ok
// SIG undefined FUN_14173bba8(void)

longlong FUN_14173bba8(void)

{
  if (DAT_14c9a5798 == 0) {
    FUN_14073dd9a(&DAT_14c9a5798,&PTR_LAB_14a1b3cb0);
  }
  return DAT_14c9a5798;
}



// FUNCTION 14173bbda FUN_14173bbda body=1040 status=ok
// SIG undefined FUN_14173bbda(void)

void FUN_14173bbda(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  code *local_110;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_118 = FUN_1446ddbd2();
      local_110 = FUN_1468d96f0;
      local_120 = 0;
      local_128 = 0x4008001;
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
      local_28 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  local_88 = local_88 & 0xffffff00;
  uStack_84 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_60 = DAT_14c846508;
  local_58 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = (undefined4)DAT_14c8464e0;
  uStack_3c = DAT_14c8464e0._4_4_;
  uStack_38 = (undefined4)DAT_14c8464e8;
  uStack_34 = DAT_14c8464e8._4_4_;
  local_30 = DAT_14c8464f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_118 = FUN_1446ddbd2();
      local_110 = FUN_1403a682c;
      local_120 = 0;
      local_128 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
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
      local_88 = (uint)uVar2;
      uStack_84 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_88);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = &local_88;
  puVar6 = local_108;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *(undefined8 *)puVar5;
    puVar5 = puVar5 + 2;
    puVar6 = puVar6 + 1;
  }
  if (local_28 == 0) {
    local_98 = DAT_14c8464f0;
    local_a8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_a0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    FUN_14030a482(local_108,&local_a8,local_28,0);
  }
  *(undefined8 *)(param_3 + 4) = local_98;
  *param_3 = (undefined4)local_a8;
  param_3[1] = local_a8._4_4_;
  param_3[2] = (undefined4)uStack_a0;
  param_3[3] = uStack_a0._4_4_;
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173bfec FUN_14173bfec body=1000 status=ok
// SIG undefined FUN_14173bfec(void)

void FUN_14173bfec(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_a8 = FUN_1446ddbd2();
      local_a0 = FUN_1468d96f0;
      local_b0 = 0;
      local_b8 = 0x4008001;
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
      local_20 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_50 = local_50 & 0xffffffffffff0000;
  uStack_48 = (undefined4)DAT_14c8464f8;
  uStack_44 = DAT_14c8464f8._4_4_;
  uStack_40 = (undefined4)DAT_14c846500;
  uStack_3c = DAT_14c846500._4_4_;
  uStack_38 = DAT_14c846508;
  local_30 = 0;
  uStack_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_a8 = FUN_1446ddbd2();
      local_a0 = FUN_1403a682c;
      local_b0 = 0;
      local_b8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
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
      local_50 = *(ulonglong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_50);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = (undefined4)local_50;
  uStack_94 = local_50._4_4_;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  local_88 = uStack_40;
  uStack_84 = uStack_3c;
  uStack_80 = (undefined4)uStack_38;
  uStack_7c = uStack_38._4_4_;
  local_78 = local_30;
  uStack_74 = (undefined4)uStack_2c;
  uStack_70 = uStack_2c._4_4_;
  uStack_6c = uStack_24;
  if (local_20 == 0) {
    local_58 = DAT_14c846508;
    local_68 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
    uStack_60 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  }
  else {
    FUN_140d0fb16(&local_98,&local_68,local_20,0);
  }
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = (undefined4)local_68;
  param_3[1] = local_68._4_4_;
  param_3[2] = (undefined4)uStack_60;
  param_3[3] = uStack_60._4_4_;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173c3d6 FUN_14173c3d6 body=2122 status=ok
// SIG undefined FUN_14173c3d6(void)

void FUN_14173c3d6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_69;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_69 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_140a4831c;
      local_e8 = 0x1000000008001;
      local_e0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_69);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_69);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_69 = (undefined1)uVar2;
      uStack_68 = (undefined4)((ulonglong)uVar2 >> 8);
      uStack_64._0_3_ = (undefined3)((ulonglong)uVar2 >> 0x28);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_69);
    }
  }
  local_78 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_1409e12a0;
      local_e0 = 0;
      local_e8 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
  uStack_a8 = 0;
  uStack_a0 = (undefined4)DAT_14c8464f8;
  uStack_9c = DAT_14c8464f8._4_4_;
  uStack_98 = (undefined4)DAT_14c846500;
  uStack_94 = DAT_14c846500._4_4_;
  uStack_90 = DAT_14c846508;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_1403a682c;
      local_e0 = 0;
      local_e8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_a8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_a8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_a8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_a8 = (undefined2)uVar2;
      uStack_a6 = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_a4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_a8);
    }
  }
  local_ac = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_d0 = FUN_1408a629c;
      local_d8 = &DAT_14c9520b8;
      local_e0 = 0;
      local_e8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_ac);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_ac);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_ac = (undefined4)uVar2;
      uStack_a8 = (undefined2)((ulonglong)uVar2 >> 0x20);
      uStack_a6 = (undefined2)((ulonglong)uVar2 >> 0x30);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_ac);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_1403a682c;
      local_e0 = 0;
      local_e8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_c8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_c8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_c8 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_c8);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,uStack_a8));
  uStack_40 = CONCAT44(uStack_9c,uStack_a0);
  local_38 = CONCAT44(uStack_94,uStack_98);
  local_28 = CONCAT44(uStack_84,local_88);
  uStack_20 = CONCAT44(uStack_7c,uStack_80);
  uStack_30 = uStack_90;
  uVar4 = uStack_30;
  uStack_64 = (undefined4)local_c8;
  uStack_60 = (undefined4)((ulonglong)local_c8 >> 0x20);
  uStack_5c = uStack_c0;
  uVar2 = uStack_5c;
  local_54 = local_b8;
  *param_3 = local_69;
  *(undefined8 *)(param_3 + 4) = local_78;
  uStack_30._0_4_ = (undefined4)uStack_90;
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  *(undefined4 *)(param_3 + 0xc) = uStack_4c;
  *(uint *)(param_3 + 0x10) = CONCAT22(uStack_a6,uStack_a8);
  *(undefined4 *)(param_3 + 0x14) = uStack_a4;
  *(undefined4 *)(param_3 + 0x18) = uStack_a0;
  *(undefined4 *)(param_3 + 0x1c) = uStack_9c;
  *(undefined4 *)(param_3 + 0x20) = uStack_98;
  *(undefined4 *)(param_3 + 0x24) = uStack_94;
  *(undefined4 *)(param_3 + 0x28) = (undefined4)uStack_30;
  *(undefined4 *)(param_3 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_3 + 0x30) = local_88;
  *(undefined4 *)(param_3 + 0x34) = uStack_84;
  *(undefined4 *)(param_3 + 0x38) = uStack_80;
  *(undefined4 *)(param_3 + 0x3c) = uStack_7c;
  *(undefined4 *)(param_3 + 0x40) = local_ac;
  uStack_5c._0_4_ = (undefined4)uStack_c0;
  *(undefined4 *)(param_3 + 0x44) = uStack_68;
  *(undefined4 *)(param_3 + 0x48) = uStack_64;
  *(undefined4 *)(param_3 + 0x4c) = uStack_60;
  *(undefined4 *)(param_3 + 0x50) = (undefined4)uStack_5c;
  *(undefined8 *)(param_3 + 0x50) = uStack_c0;
  *(undefined8 *)(param_3 + 0x58) = local_b8;
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
  uStack_5c = uVar2;
  uStack_30 = uVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173cc22 FUN_14173cc22 body=1951 status=ok
// SIG undefined FUN_14173cc22(void)

void FUN_14173cc22(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined4 uStack_36;
  undefined2 uStack_32;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_37 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_140a4831c;
      local_88 = 0x1000000008001;
      local_80 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_37);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_37);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_37);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_37 = (undefined1)uVar2;
      uStack_36 = (undefined4)((ulonglong)uVar2 >> 8);
      uStack_32 = (undefined2)((ulonglong)uVar2 >> 0x28);
      local_30 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_37);
    }
  }
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_140a4831c;
      local_88 = 0x1000000008001;
      local_80 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
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
      local_38 = (undefined1)uVar2;
      uStack_37 = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_36 = (undefined4)((ulonglong)uVar2 >> 0x10);
      uStack_32 = (undefined2)((ulonglong)uVar2 >> 0x30);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_50 = (undefined4)uVar2;
      uStack_4c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_50);
    }
  }
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_70 = FUN_1408a629c;
      local_78 = &DAT_14c9520b8;
      local_80 = 0;
      local_88 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_54 = (undefined4)uVar2;
      uStack_50 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_54);
    }
  }
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_1409e12a0;
      local_80 = 0;
      local_88 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = (undefined1)uStack_50;
  uStack_2f = (undefined1)((uint)uStack_50 >> 8);
  uStack_2e = (undefined4)(CONCAT44(uStack_4c,uStack_50) >> 0x10);
  uStack_2a = (undefined2)((uint)uStack_4c >> 0x10);
  uStack_28 = (undefined2)uStack_48;
  uStack_26 = (undefined6)((ulonglong)uStack_48 >> 0x10);
  local_20 = local_40;
  *param_3 = uStack_37;
  param_3[1] = local_38;
  *(undefined4 *)(param_3 + 2) = uStack_36;
  *(uint *)(param_3 + 6) = CONCAT13(uStack_2f,CONCAT12(local_30,uStack_32));
  *(undefined4 *)(param_3 + 10) = uStack_2e;
  *(uint *)(param_3 + 0xe) = CONCAT22(uStack_28,uStack_2a);
  *(undefined8 *)(param_3 + 0x10) = uStack_48;
  *(undefined8 *)(param_3 + 0x18) = local_40;
  *(undefined4 *)(param_3 + 0x20) = local_54;
  *(undefined8 *)(param_3 + 0x24) = local_60;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173d3c2 FUN_14173d3c2 body=70 status=ok
// SIG undefined FUN_14173d3c2(void)

void FUN_14173d3c2(undefined8 param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (param_2[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_2 + 3);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14173d408 FUN_14173d408 body=45 status=ok
// SIG undefined FUN_14173d408(void)

undefined8 FUN_14173d408(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar2 = 0;
  }
  else {
    FUN_1405b406a(param_3,*(undefined8 *)(pbVar1 + 8));
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14173d436 FUN_14173d436 body=38 status=ok
// SIG undefined FUN_14173d436(void)

void FUN_14173d436(undefined8 param_1,longlong param_2)

{
  FUN_14044066a(param_2,3,0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x41) = 0;
  *(undefined8 *)(param_2 + 0x49) = 0;
  return;
}



// FUNCTION 14173d464 FUN_14173d464 body=159 status=ok
// SIG undefined FUN_14173d464(void)

void FUN_14173d464(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a18e458;
  FUN_1401edebb(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ede73(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014173d4ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14173d504 FUN_14173d504 body=29 status=ok
// SIG undefined FUN_14173d504(void)

undefined8 FUN_14173d504(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14173d522 FUN_14173d522 body=91 status=ok
// SIG undefined FUN_14173d522(void)

void FUN_14173d522(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
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



// FUNCTION 14173d57e FUN_14173d57e body=29 status=ok
// SIG undefined FUN_14173d57e(void)

undefined1 FUN_14173d57e(void)

{
  undefined1 *in_R9;
  undefined8 in_stack_00000028;
  
  FUN_14009d19e(in_stack_00000028);
  *in_R9 = 1;
  return 1;
}



// FUNCTION 14173d59c FUN_14173d59c body=54 status=ok
// SIG undefined FUN_14173d59c(void)

undefined1 FUN_14173d59c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 14173d5d2 FUN_14173d5d2 body=49 status=ok
// SIG undefined FUN_14173d5d2(void)

longlong FUN_14173d5d2(void)

{
  if (DAT_14c9a57c0 == 0) {
    FUN_14086a14e(&DAT_14c9a57c0,&PTR_FUN_14a1b7140);
  }
  return DAT_14c9a57c0;
}



// FUNCTION 14173d603 FUN_14173d603 body=49 status=ok
// SIG undefined FUN_14173d603(void)

longlong FUN_14173d603(void)

{
  if (DAT_14c9a5868 == 0) {
    FUN_14086a14e(&DAT_14c9a5868,&PTR_FUN_14a1b7e78);
  }
  return DAT_14c9a5868;
}



// FUNCTION 14173d634 FUN_14173d634 body=49 status=ok
// SIG undefined FUN_14173d634(void)

longlong FUN_14173d634(void)

{
  if (DAT_14c9a58b0 == 0) {
    FUN_14086a14e(&DAT_14c9a58b0,&PTR_FUN_14a1b82c0);
  }
  return DAT_14c9a58b0;
}



// FUNCTION 14173d665 FUN_14173d665 body=49 status=ok
// SIG undefined FUN_14173d665(void)

longlong FUN_14173d665(void)

{
  if (DAT_14c9a59b8 == 0) {
    FUN_14086a14e(&DAT_14c9a59b8,&PTR_FUN_14a1b9c58);
  }
  return DAT_14c9a59b8;
}



// FUNCTION 14173d696 FUN_14173d696 body=49 status=ok
// SIG undefined FUN_14173d696(void)

longlong FUN_14173d696(void)

{
  if (DAT_14c9a5bb8 == 0) {
    FUN_14073dd9a(&DAT_14c9a5bb8,&PTR_LAB_14a1bc4a8);
  }
  return DAT_14c9a5bb8;
}



// FUNCTION 14173d6c7 FUN_14173d6c7 body=49 status=ok
// SIG undefined FUN_14173d6c7(void)

longlong FUN_14173d6c7(void)

{
  if (DAT_14c9a5bd0 == 0) {
    FUN_14073dd9a(&DAT_14c9a5bd0,&PTR_LAB_14a1bc578);
  }
  return DAT_14c9a5bd0;
}



// FUNCTION 14173d6f8 FUN_14173d6f8 body=49 status=ok
// SIG undefined FUN_14173d6f8(void)

longlong FUN_14173d6f8(void)

{
  if (DAT_14c9a5c88 == 0) {
    FUN_14086a14e(&DAT_14c9a5c88,&PTR_FUN_14a1bcce0);
  }
  return DAT_14c9a5c88;
}



// FUNCTION 14173d734 FUN_14173d734 body=196 status=ok
// SIG undefined FUN_14173d734(void)

undefined8 FUN_14173d734(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  
  if (param_4 != 0) {
    lVar21 = param_2 + 0x50;
    lVar22 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar22);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar22);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar22);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x30 + lVar22);
      uVar17 = puVar1[1];
      uVar18 = puVar1[2];
      uVar19 = puVar1[3];
      puVar3 = (undefined4 *)(param_2 + 0x30 + lVar22);
      *puVar3 = *puVar1;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar1 = (undefined4 *)(param_2 + 0x20 + lVar22);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      puVar1[2] = uVar15;
      puVar1[3] = uVar16;
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar22);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar1 = (undefined4 *)(param_2 + lVar22);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar4 = *(longlong *)(param_3 + 0x40 + lVar22);
      if (*(longlong *)(param_2 + 0x40 + lVar22) != lVar4) {
        *(undefined8 *)(lVar21 + lVar22) = 0;
      }
      puVar2 = (undefined8 *)(lVar21 + lVar22);
      puVar2[-2] = lVar4;
      if (puVar2[-1] != *(longlong *)(param_3 + lVar22 + 0x48)) {
        *(undefined8 *)(lVar21 + lVar22) = 0;
      }
      uVar20 = FUN_14477b664();
      uVar20 = FUN_14477b664(uVar20);
      puVar2[-1] = uVar20;
      *puVar2 = *(undefined8 *)(param_3 + lVar22 + 0x50);
      lVar22 = lVar22 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14173d7f8 FUN_14173d7f8 body=118 status=ok
// SIG undefined FUN_14173d7f8(void)

undefined8 FUN_14173d7f8(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14c9a75f8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14c9a75f8,local_38);
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



// FUNCTION 14173d86f FUN_14173d86f body=42 status=ok
// SIG undefined FUN_14173d86f(void)

void FUN_14173d86f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1c4050;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14173d899 FUN_14173d899 body=49 status=ok
// SIG undefined FUN_14173d899(void)

longlong FUN_14173d899(void)

{
  if (DAT_14c9a5e50 == 0) {
    FUN_14086a14e(&DAT_14c9a5e50,&PTR_FUN_14a1c5580);
  }
  return DAT_14c9a5e50;
}



// FUNCTION 14173d8ca FUN_14173d8ca body=2776 status=ok
// SIG undefined FUN_14173d8ca(void)

void FUN_14173d8ca(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined4 local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined5 local_38;
  undefined3 uStack_33;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1408a629c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_40 = (undefined4)uVar2;
      uStack_3c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  uStack_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1408a629c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_44);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_44);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_44);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_44 = (undefined4)uVar2;
      local_40 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_44);
    }
  }
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1408a629c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_48 = (undefined4)uVar2;
      uStack_44 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_60[0] = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_60);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_78 = (undefined4)uVar2;
      uStack_74 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_78);
    }
  }
  iStack_7c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_14067a048;
      local_a0 = 0;
      local_a8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_7c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_7c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_7c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_7c = (int)uVar2;
      local_78 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_7c);
    }
  }
  iVar4 = iStack_7c;
  local_80 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1408a629c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_80);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_80);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_80 = (undefined4)uVar2;
      iStack_7c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_80);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined5)local_60[0];
  uStack_33 = (undefined3)((ulonglong)local_60[0] >> 0x28);
  uStack_30 = (undefined4)local_60[1];
  uStack_2c = (undefined4)((ulonglong)local_60[1] >> 0x20);
  uVar5 = uStack_2c;
  local_28 = local_50;
  uVar2 = local_28;
  uVar6 = local_80;
  if (iVar4 == 0) {
    uVar6 = 0xc4750000;
  }
  *param_3 = local_40;
  *(undefined1 *)(param_3 + 1) = 0;
  param_3[2] = uStack_44;
  param_3[3] = local_48;
  param_3[4] = uVar6;
  *(bool *)(param_3 + 5) = iVar4 != 0;
  uStack_2c._0_1_ = (undefined1)((ulonglong)local_60[1] >> 0x20);
  local_28._0_4_ = (undefined4)local_50;
  local_28._4_4_ = (undefined4)((ulonglong)local_50 >> 0x20);
  *(ulonglong *)((longlong)param_3 + 0x15) = CONCAT53(local_38,uStack_3c._1_3_);
  *(ulonglong *)((longlong)param_3 + 0x1d) =
       CONCAT17((undefined1)uStack_2c,CONCAT43(uStack_30,uStack_33));
  param_3[8] = uStack_30;
  param_3[9] = uVar5;
  param_3[10] = (undefined4)local_28;
  param_3[0xb] = local_28._4_4_;
  param_3[0xc] = local_78;
  param_3[0xd] = uStack_74;
  param_3[0xe] = uStack_70;
  param_3[0xf] = uStack_6c;
  *(undefined8 *)(param_3 + 0x10) = local_68;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
  uStack_2c = uVar5;
  local_28 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173e3a4 FUN_14173e3a4 body=132 status=ok
// SIG undefined FUN_14173e3a4(void)

undefined8 FUN_14173e3a4(longlong param_1,ulonglong *param_2,float param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1448ec59e();
  if ((cVar1 == '\0') || (*(ulonglong *)(param_1 + 0x78) != *param_2)) {
    if ((int)param_2[1] == -1) {
      cVar1 = FUN_1448ec59e(param_1,param_2);
      if (cVar1 == '\0') goto LAB_14173e424;
    }
    uVar2 = *param_2;
    if (*(ulonglong *)(param_1 + 0x78) != uVar2) {
      *(ulonglong *)(param_1 + 0x78) = uVar2;
      uVar2 = (ulonglong)(uint)param_2[1];
      *(uint *)(param_1 + 0x80) = (uint)param_2[1];
    }
    *(uint *)(param_1 + 0x84) =
         ~-(uint)(0.0 <= param_3) & 0xff7fffff | (uint)param_3 & -(uint)(0.0 <= param_3);
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
LAB_14173e424:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14173e428 FUN_14173e428 body=238 status=ok
// SIG undefined FUN_14173e428(void)

undefined8 * FUN_14173e428(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = (int)param_1[1];
  lVar2 = *param_1;
  if (iVar1 == -1) {
    if ((lVar2 == 0) || (DAT_14c87eb08 + 1U <= (uint)lVar2 >> 0x10)) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      FUN_1400021e4(param_1,param_2);
    }
  }
  else {
    if ((lVar2 != 0) && ((uint)lVar2 >> 0x10 < DAT_14c87eb08 + 1U)) {
      FUN_1400021e4(param_1,&local_30);
      puVar3 = local_30;
      if (local_28 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      FUN_140002266(param_2,L"%ls(%d)",puVar3,iVar1);
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_140002266(param_2,L"(%d)",iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14173e550 FUN_14173e550 body=223 status=ok
// SIG undefined FUN_14173e550(void)

void FUN_14173e550(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  
  lVar2 = *param_2;
  if (((lVar2 != 0) && (param_2[1] == 0)) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))
     ) {
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x48);
        if (*plVar4 == lVar2) {
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          if (plVar4 == (longlong *)&DAT_fffffffffffffff8) {
            return;
          }
          if ((char)plVar4[6] == '\x01') {
            lVar2 = plVar4[7];
          }
          else {
            lVar2 = FUN_14018aa1e();
          }
          if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar2);
          }
          param_2[1] = lVar2;
          return;
        }
        iVar3 = (int)plVar4[8];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14173e630 FUN_14173e630 body=555 status=ok
// SIG undefined FUN_14173e630(void)

ulonglong FUN_14173e630(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_1[1] == 0) {
    uVar10 = 0;
  }
  else {
    lVar15 = *param_1;
    lVar1 = lVar15 + (longlong)(int)param_1[1] * 0x28;
    do {
      lVar14 = *param_2;
      if (lVar14 == 0) {
        lVar11 = 0;
        uVar10 = 0;
        lVar9 = 0;
        iVar8 = 0;
      }
      else {
        FUN_1400bbfc4(&local_68,lVar14);
        iVar8 = local_50;
        lVar9 = local_58;
        uVar10 = local_60;
        lVar11 = local_68;
        cVar6 = (*(code *)PTR_FUN_14c758760)();
        uVar7 = *(uint *)(lVar14 + 0xc);
        if (cVar6 != '\0') {
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          if ((*(uint *)(lVar14 + 8) & 0x8400000) != 0) goto LAB_14173e6dc;
        }
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar5 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar5) {
            local_6c = iVar13;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
            iVar13 = local_6c;
          }
          LOCK();
          if (*(int *)(lVar14 + 0x10) == 0) {
            *(int *)(lVar14 + 0x10) = iVar13;
          }
          UNLOCK();
        }
      }
LAB_14173e6dc:
      if ((*(longlong *)(lVar15 + 8) == lVar11) && (*(ulonglong *)(lVar15 + 0x10) == uVar10)) {
        iVar4 = *(int *)(lVar15 + 0x20);
        if (iVar4 == iVar8) {
          uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
          if (iVar4 < 2) goto LAB_14173e6e4;
          lVar14 = 0;
          while( true ) {
            uVar2 = *(ushort *)(*(longlong *)(lVar15 + 0x18) + lVar14);
            uVar7 = (uint)uVar2;
            uVar3 = *(ushort *)(lVar9 + lVar14);
            uVar12 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14173e767;
              }
              iVar8 = uVar7 - uVar12;
              goto LAB_14173e7bd;
            }
            if (uVar2 == 0) break;
LAB_14173e767:
            lVar14 = lVar14 + 2;
          }
          iVar8 = 0;
        }
        else {
          iVar8 = iVar8 + iVar4 + -1;
        }
LAB_14173e7bd:
        uVar10 = CONCAT71((int7)(uVar10 >> 8),iVar8 == 0);
      }
      else {
        uVar10 = 0;
      }
LAB_14173e6e4:
      if (lVar9 != 0) {
        FUN_1400020a8(lVar9);
      }
      lVar15 = lVar15 + 0x28;
    } while ((byte)(lVar15 == lVar1 | (byte)uVar10) != 1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14173e85c FUN_14173e85c body=65 status=ok
// SIG undefined FUN_14173e85c(void)

void FUN_14173e85c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x388))();
  if (param_1[0x7c] != 0) {
    (**(code **)(*param_1 + 0x358))(param_1);
    param_1[0x7c] = 0;
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14173e89e FUN_14173e89e body=676 status=ok
// SIG undefined FUN_14173e89e(void)

void FUN_14173e89e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = param_1[4];
  if (lVar7 != 0) {
    if (DAT_14cad2858 == 0) {
      local_60 = &local_48;
      local_48 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_146395584;
      local_68 = &LAB_147a0ba80;
      local_70 = &LAB_14575ccce;
      local_78 = L"Engine";
      local_80 = 0x40000000000;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar1 != 2) {
          if (iVar1 != 1) goto LAB_14173e933;
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          if (DVar3 != DVar4) goto LAB_14173e933;
        }
      }
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_14173e933:
  lVar7 = param_1[0x7c];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar7;
  }
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    FUN_1408d610e(lVar7,param_2);
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 0xa8))(param_2);
    puVar6 = (undefined8 *)(**(code **)(*param_3 + 0xa8))(param_3);
    FUN_14023ffbe();
    if ((puVar5 != (undefined8 *)0x0) && (puVar6 != (undefined8 *)0x0)) {
      *puVar5 = *puVar6;
      *puVar6 = param_2;
      lVar7 = param_1[0x9f];
      uVar2 = (int)lVar7 + 1;
      *(uint *)(param_1 + 0x9f) = uVar2;
      if (*(uint *)((longlong)param_1 + 0x4fc) < uVar2) {
        FUN_140c4a4dc(param_1 + 0x9e);
      }
      *(longlong **)(param_1[0x9e] + (longlong)(int)lVar7 * 8) = param_2;
    }
    if ((longlong)(int)param_1[0x9f] != 0) {
      lVar7 = 0;
      do {
        if (*(longlong **)(param_1[0x9e] + lVar7) == param_3) goto LAB_14173ea23;
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)param_1[0x9f] * 8 != lVar7);
    }
    iVar1 = (int)param_1[0xa1];
    *(uint *)(param_1 + 0xa1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x50c) < iVar1 + 1U) {
      FUN_140c4a4dc(param_1 + 0xa0,iVar1);
    }
    *(longlong **)(param_1[0xa0] + (longlong)iVar1 * 8) = param_3;
  }
LAB_14173ea23:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173eb44 FUN_14173eb44 body=1050 status=ok
// SIG undefined FUN_14173eb44(void)

undefined1 *
FUN_14173eb44(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  lVar3 = FUN_1447262c2(param_4);
  if (lVar3 == 0) {
LAB_14173eba7:
    lVar3 = FUN_1447262c2(param_4);
    if (lVar3 != 0) {
      if (DAT_14cad00c8 == 0) {
        local_50 = &local_30;
        local_30 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1479b7a0c;
        local_60 = (code *)&LAB_1463b464e;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000005;
        local_80 = 8;
        local_88 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      }
      if (((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) == DAT_14cad00c8 + 0x30)) &&
         (lVar3 = *(longlong *)(lVar3 + 0xa8), lVar3 != 0)) goto LAB_14173ec58;
    }
    lVar3 = FUN_1447262c2(param_4);
    if (lVar3 != 0) {
      if (DAT_14cac9ca8 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1478c0a72;
        local_60 = (code *)&LAB_1417b2375;
        local_68 = L"Engine";
        local_70 = 0x1000000000;
        local_78 = 0x10000004;
        local_80 = 8;
        local_88 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      lVar2 = DAT_14cac9ca8;
      if (DAT_14c951858 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1468c5283;
        local_60 = FUN_142809da0;
        local_68 = L"Engine";
        local_70 = 0x400000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar4 = *(longlong *)(lVar3 + 0x20);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar2 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
             (lVar3 = lVar4,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
             != lVar2 + 0x30)) {
            lVar3 = 0;
          }
        } while ((lVar3 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
        if (lVar3 != 0) goto LAB_14173ec58;
      }
    }
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = (code *)&LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_14173eba7;
LAB_14173ec58:
    lVar3 = *(longlong *)(lVar3 + 0x1c8);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (lVar3 != 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_1456bb102(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173ef60 FUN_14173ef60 body=1144 status=ok
// SIG undefined FUN_14173ef60(void)

/* WARNING: Removing unreachable block (ram,0x00014173f238) */

undefined1 * FUN_14173ef60(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  char local_f8 [8];
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  char local_d8;
  undefined4 local_d0 [2];
  char local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  int local_a0;
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  undefined1 local_70 [24];
  longlong local_58;
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8[0] = *param_4;
  if (local_f8[0] == '\x01') {
    local_f8[0] = '\x02';
    if (*(longlong *)(param_4 + 8) == 0) {
      local_f0._0_4_ = 0;
      iVar5 = 0;
      uVar2 = (uint)local_f0;
    }
    else {
      uVar2 = *(uint *)(*(longlong *)(param_4 + 8) + 0xc);
      local_f0 = (ulonglong)uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar15 = iVar5 == 0;
        if (bVar15) {
          *(int *)(lVar14 + 0x10) = iVar11;
          iVar5 = 0;
        }
        UNLOCK();
        uVar2 = (uint)local_f0;
        if (bVar15) {
          iVar5 = iVar11;
        }
      }
    }
    local_f0._0_4_ = uVar2;
    local_f0 = CONCAT44(iVar5,(uint)local_f0);
  }
  else if (local_f8[0] == '\x02') {
    local_f0 = *(ulonglong *)(param_4 + 8);
  }
  else if (local_f8[0] == '\x03') {
    local_f0 = *(undefined8 *)(param_4 + 8);
    local_e8 = *(longlong **)(param_4 + 0x10);
    if (local_e8 == (longlong *)0x0) {
      local_e0 = *(undefined8 *)(param_4 + 0x18);
      local_d8 = param_4[0x20];
    }
    else {
      LOCK();
      *(int *)((longlong)local_e8 + 0xc) = *(int *)((longlong)local_e8 + 0xc) + 1;
      UNLOCK();
      local_e0 = *(undefined8 *)(param_4 + 0x18);
      local_d8 = param_4[0x20];
    }
  }
  local_d0[0] = 0;
  if (*(int *)(param_4 + 0x28) != 0) {
    uVar7 = FUN_1448174c4(local_d0);
    FUN_1400e08b0(uVar7,DAT_14c9a3da0 + (longlong)*(int *)(param_4 + 0x28) * 0x10 + -0x10);
  }
  local_c8 = '\0';
  local_a0 = 0;
  lVar14 = *(longlong *)(param_1 + 0x18);
  if (lVar14 == 0) {
    local_98[0] = *(undefined8 ****)(param_1 + 8);
    FUN_1446dcdd4(local_70);
    lVar14 = FUN_1448fdc6e(local_70);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x18) = lVar14;
  }
  FUN_1400606f6(local_70,lVar14,local_f8);
  puVar6 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar6 = local_70;
  }
  puVar12 = &DAT_14c9a40e0;
  if (0 < local_38) {
    puVar12 = puVar6;
  }
  FUN_1400603ec(local_98,lVar14,puVar12);
  puVar6 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar6 = local_70;
  }
  FUN_1446fdf58(puVar6,local_38);
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar14 = FUN_14070d842(local_98);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  if (lVar14 != 0) {
    *(undefined4 *)(param_2 + 0x38) = 1;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_1456bb102(param_2,lVar14);
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar9 = local_98;
    if (0x18 < local_80) {
      ppppuVar9 = (undefined8 ****)local_98[0];
    }
    (*pcVar3)(ppppuVar9);
  }
  if (0x18 < local_80) {
    FUN_1400020a8(local_98[0]);
  }
  lVar14 = DAT_14c9a3da0;
  if ((longlong)local_a0 != 0) {
    lVar10 = (longlong)local_a0 + -1;
    lVar13 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar14 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar14 = DAT_14c9a3da0;
    iVar5 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
    }
    *(undefined4 *)(lVar14 + lVar13) = 0xffffffff;
    iVar11 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar11 = DAT_14c9a3dd0;
    }
    *(int *)(lVar14 + 4 + lVar13) = iVar11;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar11 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar11 = iVar5;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar5;
    *(uint *)(puVar8 + (longlong)(iVar11 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar11 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_a0 = 0;
  }
  if (local_c8 != '\0') {
    if (local_c8 == '\x01') {
      local_c0 = 0;
    }
    else if ((local_c8 == '\x03') && (local_b8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
    local_c8 = '\0';
  }
  FUN_1448173f8(local_d0);
  if ((local_f8[0] == '\x03') && (local_e8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173f3da FUN_14173f3da body=1865 status=ok
// SIG undefined FUN_14173f3da(void)

undefined1 * FUN_14173f3da(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_50;
  code *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (uint *)(param_1 + 8);
  if ((((*(int *)(param_1 + 0xc) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar11 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0xc))) ||
      (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar6 = *plVar11, lVar6 == 0)))))) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar6 = FUN_140007850();
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar6 == 0) || (cVar4 == '\0')) {
        FUN_14485c47a(puVar1,lVar6);
        if (lVar6 == 0) goto LAB_14173fa49;
      }
      else {
        uVar2 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(puVar1,lVar6);
        }
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_14173f46d;
    }
  }
  else {
LAB_14173f46d:
    if (DAT_14c949118 == 0) {
      local_48 = FUN_140631fbe;
      lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar7;
      FUN_1446f470e(&local_40,L"Class",1);
      local_78 = &LAB_146891e90;
      local_80 = &LAB_146273097;
      local_90 = L"Engine";
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,199);
      local_98 = 0x20;
      local_a0 = 0x10000000;
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,8);
      local_70 = &local_48;
      FUN_14574b4b2(lVar7);
      DAT_14c949118 = lVar7;
      uVar9 = FUN_144a7a812();
      lVar7 = DAT_14c949118;
      uVar8 = FUN_1449e2fb2();
      local_a8 = L"Class";
      FUN_14574b446(uVar8,lVar7,uVar9,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
      if (DAT_14cad00c8 == 0) {
        local_70 = &local_40;
        local_40 = FUN_144a7958c;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_1479b7a0c;
        local_80 = &LAB_1463b464e;
        local_88 = L"Engine";
        local_90 = (wchar_t *)0x0;
        local_98 = CONCAT44(local_98._4_4_,0x10000005);
        local_a0 = 8;
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,0x110);
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        if (DAT_14cad00c8 == 0) goto LAB_14173fa49;
      }
      if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar6 + 0x38)) {
        lVar7 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
            DAT_14cad00c8 + 0x30) {
          lVar7 = lVar6;
        }
        lVar5 = lVar7;
        if ((lVar7 == 0) || (DAT_14c950c29 == '\0')) {
joined_r0x00014173fa43:
          if (lVar5 == 0) goto LAB_14173fa49;
        }
        else {
          FUN_1456cec3c(lVar7);
          if (DAT_14cad00c8 == 0) {
            local_70 = &local_40;
            local_40 = FUN_144a7958c;
            local_60 = FUN_14081d0ea;
            local_68 = FUN_14081d0ea;
            local_78 = &LAB_1479b7a0c;
            local_80 = &LAB_1463b464e;
            local_88 = L"Engine";
            local_90 = (wchar_t *)0x0;
            local_98 = CONCAT44(local_98._4_4_,0x10000005);
            local_a0 = 8;
            local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,0x110);
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            lVar5 = DAT_14cad00c8;
            goto joined_r0x00014173fa43;
          }
        }
        if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
            DAT_14cad00c8 + 0x30)) {
          plVar11 = (longlong *)FUN_1447262c2(param_4);
          if (plVar11 == (longlong *)0x0) {
LAB_14173f549:
            lVar5 = FUN_1447262c2(param_4);
            if (lVar5 != 0) {
              if (DAT_14cad00c8 == 0) {
                local_70 = &local_40;
                local_40 = FUN_144a7958c;
                local_60 = FUN_14081d0ea;
                local_68 = FUN_14081d0ea;
                local_78 = &LAB_1479b7a0c;
                local_80 = &LAB_1463b464e;
                local_88 = L"Engine";
                local_90 = (wchar_t *)0x0;
                local_98 = CONCAT44(local_98._4_4_,0x10000005);
                local_a0 = 8;
                local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,0x110);
                FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              }
              if (((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38))
                  && (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) == DAT_14cad00c8 + 0x30)) &&
                 (plVar11 = *(longlong **)(lVar5 + 0xa8), plVar11 != (longlong *)0x0))
              goto LAB_14173f63d;
            }
            lVar5 = FUN_1447262c2(param_4);
            if (lVar5 != 0) {
              uVar9 = FUN_144a6c4d8();
              plVar11 = (longlong *)FUN_144a78ede(lVar5,uVar9);
              if (plVar11 != (longlong *)0x0) goto LAB_14173f63d;
            }
            *(undefined8 *)(param_2 + 0x30) = 0;
            *(undefined8 *)(param_2 + 0x38) = 0x100000000;
          }
          else {
            if (DAT_14cac9ca8 == 0) {
              local_70 = &local_40;
              local_40 = FUN_141030f22;
              local_60 = FUN_14081d0ea;
              local_68 = FUN_14081d0ea;
              local_78 = &LAB_1478c0a72;
              local_80 = &LAB_1417b2375;
              local_88 = L"Engine";
              local_90 = (wchar_t *)0x1000000000;
              local_98 = CONCAT44(local_98._4_4_,0x10000004);
              local_a0 = 8;
              local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,0x390);
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            }
            if ((*(int *)(plVar11[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
                != DAT_14cac9ca8 + 0x30)) goto LAB_14173f549;
LAB_14173f63d:
            local_50 = lVar6;
            if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar6);
            }
            lVar6 = (**(code **)(*plVar11 + 0x598))(plVar11,&local_50);
            *(undefined8 *)(param_2 + 0x30) = 0;
            *(undefined8 *)(param_2 + 0x38) = 0x100000000;
            if (lVar6 != 0) {
              *(undefined4 *)(param_2 + 0x38) = 1;
              *param_2 = 0;
              *(undefined4 *)(param_2 + 0x28) = 0;
              FUN_1456bb102(param_2,lVar6);
            }
          }
          goto LAB_14173f5af;
        }
      }
    }
  }
LAB_14173fa49:
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  cVar4 = FUN_1447f8eee(param_4);
  if (cVar4 == '\0') {
    iVar3 = *(int *)(param_2 + 0x38);
    *(uint *)(param_2 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x3c) < iVar3 + 1U) {
      FUN_1400832a0(param_2,iVar3);
    }
    puVar10 = *(undefined1 **)(param_2 + 0x30);
    if (*(undefined1 **)(param_2 + 0x30) == (undefined1 *)0x0) {
      puVar10 = param_2;
    }
    puVar10[(longlong)iVar3 * 0x30] = 0;
    FUN_1447f8f6a(puVar10 + (longlong)iVar3 * 0x30,param_4);
    FUN_1447f8ea6(puVar10 + (longlong)iVar3 * 0x30 + 0x28,param_4 + 0x28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
  }
LAB_14173f5af:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173fb2a FUN_14173fb2a body=379 status=ok
// SIG undefined FUN_14173fb2a(void)

undefined1 *
FUN_14173fb2a(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1447262c2(param_4);
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      lVar2 = *(longlong *)(lVar1 + 0x1b0);
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      if (lVar2 == 0) {
        lVar2 = lVar1;
      }
      FUN_1456bb102(param_2,lVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14173fca6 FUN_14173fca6 body=584 status=ok
// SIG undefined FUN_14173fca6(void)

undefined1 *
FUN_14173fca6(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1447262c2(param_4);
  if (lVar1 != 0) {
    if (DAT_14c9a51d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1433d5220;
      local_30 = FUN_142b32f24;
      local_38 = &LAB_1462ac436;
      local_48 = &LAB_1470c7d1d;
      local_50 = &LAB_1462ac43b;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000008;
      local_70 = 0x10;
      local_78 = 0x560;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineAnimInstance",&DAT_14c9a51d8,FUN_1462ac40e);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14c9a51d8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c9a51d8 + 0x38) * 8) != DAT_14c9a51d8 + 0x30)) goto LAB_14173fd70;
    lVar1 = *(longlong *)(lVar1 + 0x20);
LAB_14173fd08:
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (lVar1 != 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      goto LAB_14173fd5c;
    }
    goto LAB_14173fd23;
  }
LAB_14173fd70:
  lVar1 = FUN_14003f512(param_4);
  if (lVar1 == 0) {
    lVar1 = FUN_1447262c2(param_4);
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar2 = FUN_144a7cacc();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          lVar1 = *(longlong *)(lVar1 + 0x428);
          goto LAB_14173fd08;
        }
        lVar1 = FUN_140849bbe(lVar1);
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0x100000000;
        if (lVar1 == 0) goto LAB_14173fd23;
        *(undefined4 *)(param_2 + 0x38) = 1;
        goto LAB_14173fdde;
      }
    }
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
LAB_14173fd23:
    if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
LAB_14173fdde:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
LAB_14173fd5c:
  FUN_1456bb102(param_2,lVar1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 14173fef2 FUN_14173fef2 body=67 status=ok
// SIG undefined FUN_14173fef2(void)

undefined8 * FUN_14173fef2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1c4050;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14173ff36 FUN_14173ff36 body=212 status=ok
// SIG undefined FUN_14173ff36(void)

void FUN_14173ff36(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14174000a FUN_14174000a body=335 status=ok
// SIG undefined FUN_14174000a(void)

void FUN_14174000a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x88;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14174007b;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14174007b:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x88)) {
      uVar5 = uVar3 / 0x88 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x88,8);
  }
  return;
}



// FUNCTION 14174015a FUN_14174015a body=337 status=ok
// SIG undefined FUN_14174015a(void)

void FUN_14174015a(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xaaa) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417401c7;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1417401c7:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0xc)) {
      uVar3 = uVar4 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
  }
  return;
}



// FUNCTION 1417402ac FUN_1417402ac body=250 status=ok
// SIG undefined FUN_1417402ac(void)

void FUN_1417402ac(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a1780a0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_1447a08a2((longlong *)(param_1 + 0x128),0);
  }
  *(undefined8 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (0x80 < *(uint *)(param_1 + 0x154)) {
    *(undefined4 *)(param_1 + 0x154) = 0x80;
    FUN_1446efbd8(param_1 + 0x138,0);
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_1401a54c6(param_1 + 0xd8);
  FUN_1401a54fe(param_1 + 0x10);
  return;
}



// FUNCTION 1417403a6 FUN_1417403a6 body=29 status=ok
// SIG undefined FUN_1417403a6(void)

undefined8 FUN_1417403a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417403c4 FUN_1417403c4 body=1611 status=ok
// SIG undefined FUN_1417403c4(void)

uint * FUN_1417403c4(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  byte bVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_90;
  code *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_90 = param_1;
  lVar8 = FUN_14049cbd6(param_4);
  if ((lVar8 == 0) || (lVar8 = *(longlong *)(lVar8 + 0x178), lVar8 == 0)) {
    *(undefined2 *)(param_2 + 6) = 0;
    uVar5 = 0;
    goto LAB_141740653;
  }
  lVar9 = FUN_1447262c2(param_4);
  if (lVar9 == 0) {
LAB_14174046f:
    lVar9 = FUN_1447262c2(param_4);
    if (lVar9 == 0) {
LAB_1417404ae:
      lVar9 = FUN_1447262c2(param_4);
      if (lVar9 != 0) {
        if (DAT_14cac9ca8 == 0) {
          local_b0 = &local_88;
          local_88 = FUN_141030f22;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_14081d0ea;
          local_b8 = &LAB_1478c0a72;
          local_c0 = (code *)&LAB_1417b2375;
          local_c8 = L"Engine";
          local_d0 = 0x1000000000;
          local_d8 = 0x10000004;
          local_e0 = 8;
          local_e8 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        lVar11 = DAT_14cac9ca8;
        if (DAT_14c951858 == 0) {
          local_b0 = &local_88;
          local_88 = FUN_1449e2820;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_14081d0ea;
          local_b8 = &LAB_1468c5283;
          local_c0 = FUN_142809da0;
          local_c8 = L"Engine";
          local_d0 = 0x400000000;
          local_d8 = 0x10000000;
          local_e0 = 8;
          local_e8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar13 = *(longlong *)(lVar9 + 0x20);
        if (lVar13 != 0) {
          iVar1 = *(int *)(lVar11 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar1) ||
               (lVar9 = lVar13,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
               lVar11 + 0x30)) {
              lVar9 = 0;
            }
          } while ((lVar9 == 0) && (lVar13 = *(longlong *)(lVar13 + 0x20), lVar13 != 0));
          goto LAB_14174051b;
        }
      }
    }
    else {
      if (DAT_14cad00c8 == 0) {
        local_b0 = &local_88;
        local_88 = FUN_144a7958c;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_1479b7a0c;
        local_c0 = (code *)&LAB_1463b464e;
        local_c8 = L"Engine";
        local_d0 = 0;
        local_d8 = 0x10000005;
        local_e0 = 8;
        local_e8 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      }
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) != DAT_14cad00c8 + 0x30))
      goto LAB_1417404ae;
      lVar9 = *(longlong *)(lVar9 + 0xa8);
LAB_14174051b:
      if (lVar9 != 0) goto LAB_141740524;
    }
    pdVar10 = (double *)&DAT_14c8464e0;
    uVar19 = SUB84(DAT_14c8464f0,0);
    uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    bVar14 = 0;
    lVar9 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_b0 = &local_88;
      local_88 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1478c0a72;
      local_c0 = (code *)&LAB_1417b2375;
      local_c8 = L"Engine";
      local_d0 = 0x1000000000;
      local_d8 = 0x10000004;
      local_e0 = 8;
      local_e8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_14174046f;
LAB_141740524:
    lVar11 = *(longlong *)(lVar9 + 0x1c8);
    if (lVar11 == 0) {
      pdVar10 = (double *)&DAT_14c8464e0;
      bVar14 = 1;
      uVar19 = SUB84(DAT_14c8464f0,0);
      uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar19 = (undefined4)*(undefined8 *)(lVar11 + 0x270);
      uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x270) >> 0x20);
      pdVar10 = (double *)(lVar11 + 0x260);
      bVar14 = 1;
    }
  }
  iVar1 = *(int *)(lVar8 + 0x3b0);
  if ((longlong)iVar1 == 0) {
    *(undefined2 *)(param_2 + 6) = 8;
    param_2[1] = 0;
LAB_141740701:
    *param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x3a8);
    dVar3 = *pdVar10;
    dVar4 = pdVar10[1];
    fVar21 = 3.4028235e+38;
    lVar13 = 0;
    lVar11 = 0;
    do {
      lVar15 = *(longlong *)(lVar8 + lVar13);
      if ((lVar15 != 0) && (lVar15 = *(longlong *)(lVar15 + 0x408), lVar15 != 0)) {
        if (*(char *)(local_90 + 8) == '\x01') {
          bVar6 = FUN_144a783a6(lVar15);
          if ((bVar14 & bVar6) == 0) {
            if (bVar6 != 0) goto LAB_1417409a7;
            goto LAB_1417405f2;
          }
        }
        else if (bVar14 == 0) {
LAB_1417409a7:
          *(undefined2 *)(param_2 + 6) = 8;
          param_2[0] = 0;
          param_2[1] = 0;
          goto LAB_14174061c;
        }
        if (lVar9 != lVar15) {
          lVar2 = *(longlong *)(lVar15 + 0x1c8);
          if (lVar2 == 0) {
            pdVar10 = (double *)&DAT_14c8464e0;
            dVar18 = DAT_14c8464f0;
          }
          else {
            pdVar10 = (double *)(lVar2 + 0x260);
            dVar18 = *(double *)(lVar2 + 0x270);
          }
          dVar18 = dVar18 - (double)CONCAT44(uVar20,uVar19);
          fVar17 = (float)(dVar18 * dVar18 +
                          (*pdVar10 - dVar3) * (*pdVar10 - dVar3) +
                          (pdVar10[1] - dVar4) * (pdVar10[1] - dVar4));
          if (fVar17 < fVar21) {
            lVar11 = lVar15;
            fVar21 = fVar17;
          }
        }
      }
LAB_1417405f2:
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar1 * 8 != lVar13);
    *(undefined2 *)(param_2 + 6) = 8;
    param_2[0] = 0;
    param_2[1] = 0;
    lVar15 = lVar11;
    if (lVar11 == 0) goto LAB_141740701;
LAB_14174061c:
    uVar7 = *(uint *)(lVar15 + 0xc);
    *param_2 = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar7 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar12);
      }
      LOCK();
      uVar7 = *(uint *)(lVar8 + 0x10);
      bVar16 = uVar7 == 0;
      if (bVar16) {
        *(uint *)(lVar8 + 0x10) = uVar12;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar7 = uVar12;
      }
    }
  }
  param_2[1] = uVar7;
  uVar5 = 7;
LAB_141740653:
  *(undefined1 *)(param_2 + 8) = uVar5;
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141740a10 FUN_141740a10 body=389 status=ok
// SIG undefined FUN_141740a10(void)

undefined8 FUN_141740a10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  int local_70;
  undefined4 uStack_6c;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    pcVar7 = *(char **)(param_1 + 0x10);
    lVar8 = (longlong)*(int *)(param_1 + 0x18) * 0x38;
    do {
      cVar1 = *pcVar7;
      if (cVar1 == '\0') {
        lVar2 = *(longlong *)(pcVar7 + 0x20);
joined_r0x000141740b5c:
        if (lVar2 != 0) {
          FUN_140168de2(pcVar7,&local_98,param_3);
          if (local_78 == 1) {
            bVar9 = local_98 != 0;
            bVar4 = 1;
          }
          else {
            FUN_1400b56fe(&local_70,&local_98,1);
            bVar9 = local_50 != 0;
            bVar10 = local_70 != 0;
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
            if (pcVar3 != (code *)0x0) {
              piVar6 = &local_70;
              if (0x18 < local_58) {
                piVar6 = (int *)CONCAT44(uStack_6c,local_70);
              }
              (*pcVar3)(piVar6);
            }
            if (0x18 < local_58) {
              FUN_1400020a8(CONCAT44(uStack_6c,local_70));
            }
            bVar9 = bVar9 && bVar10;
            bVar4 = local_78;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
          if (pcVar3 != (code *)0x0) {
            piVar6 = &local_98;
            if (0x18 < local_80) {
              piVar6 = (int *)CONCAT44(uStack_94,local_98);
            }
            (*pcVar3)(piVar6);
          }
          if (0x18 < local_80) {
            FUN_1400020a8(CONCAT44(uStack_94,local_98));
          }
          if (!bVar9) {
            uVar5 = 0;
            goto LAB_141740ac2;
          }
        }
      }
      else if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
        lVar2 = *(longlong *)(pcVar7 + 8);
        goto joined_r0x000141740b5c;
      }
      pcVar7 = pcVar7 + 0x38;
      lVar8 = lVar8 + -0x38;
    } while (lVar8 != 0);
  }
  uVar5 = 1;
LAB_141740ac2:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141740b96 FUN_141740b96 body=318 status=ok
// SIG undefined FUN_141740b96(void)

undefined4 FUN_141740b96(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
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
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_1447262c2(param_3);
  if (lVar2 != 0) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      uVar1 = CONCAT31((int3)(*(uint *)(lVar2 + 0x5c8) >> 8),
                       (*(uint *)(lVar2 + 0x5c8) >> (*(uint *)(param_1 + 0x10) & 0x1f) & 1) != 0);
      goto LAB_141740c06;
    }
  }
  uVar1 = 0;
LAB_141740c06:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141740cd6 FUN_141740cd6 body=29 status=ok
// SIG undefined FUN_141740cd6(void)

undefined8 FUN_141740cd6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1448729ea(param_1 + 8,param_2,param_4);
  return param_2;
}



// FUNCTION 141740cf4 FUN_141740cf4 body=29 status=ok
// SIG undefined FUN_141740cf4(void)

undefined8 FUN_141740cf4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140168c66(param_1 + 8,param_2,param_4);
  return param_2;
}



// FUNCTION 141740d12 FUN_141740d12 body=485 status=ok
// SIG undefined FUN_141740d12(void)

undefined8 FUN_141740d12(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
  plVar1 = (longlong *)FUN_1447262c2();
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14c9a4e08 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1470c76a3;
      local_50 = FUN_1462ab034;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,DAT_14c9a4e08);
    if (lVar2 != 0) {
      if (DAT_14c9a4e08 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1470c76a3;
        local_50 = FUN_1462ab034;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      lVar3 = FUN_144718840(lVar2,DAT_14c9a4e08);
      if ((lVar2 != lVar3) && (lVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141740f0c FUN_141740f0c body=554 status=ok
// SIG undefined FUN_141740f0c(void)

undefined1 *
FUN_141740f0c(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
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
  plVar1 = (longlong *)FUN_1447262c2(param_4);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14c9a4e08 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1470c76a3;
      local_50 = FUN_1462ab034;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14c9a4e08);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14c9a4e08 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1470c76a3;
        local_50 = FUN_1462ab034;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14c9a4e08);
      if (plVar1 != plVar2) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0x100000000;
        if (plVar2 != (longlong *)0x0) {
          *(undefined4 *)(param_2 + 0x38) = 1;
          *(undefined4 *)(param_2 + 0x28) = 0;
          *param_2 = 1;
          uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
          *(undefined8 *)(param_2 + 8) = uVar3;
        }
        goto LAB_141740fbc;
      }
    }
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
LAB_141740fbc:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141741138 FUN_141741138 body=125 status=ok
// SIG undefined FUN_141741138(void)

void FUN_141741138(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar1 = (**(code **)(*param_1 + 0xbd0))();
  uVar3 = 6;
  if ((char)(bVar1 - 6) < '\0') {
    uVar3 = (uint)bVar1;
  }
  bVar2 = (byte)uVar3;
  *(byte *)(param_1 + 0xb5) = bVar2;
  if ((0xfffffffd < uVar3 - 3) &&
     (*(byte *)((longlong)param_1 + 0x5aa) = bVar2,
     *(byte *)((longlong)param_1 + 0x291) != bVar2 &&
     0xfffffffd < *(byte *)((longlong)param_1 + 0x291) - 3)) {
    (**(code **)(*param_1 + 0x5d0))(param_1,uVar3,0);
  }
  *(byte *)(param_1 + 0x221) = bVar1;
  FUN_14035bfb4(param_1);
  return;
}



// FUNCTION 1417411b6 FUN_1417411b6 body=22 status=ok
// SIG undefined FUN_1417411b6(void)

undefined8 FUN_1417411b6(int *param_1)

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
  
  plVar4 = DAT_14c9a75f8;
  if (DAT_14c9a75f8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14c9a75f8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14c9a75f8 + 0x154) & 1) == 0) ||
       ((int)DAT_14c9a75f8[0x3a] <= *(int *)((longlong)DAT_14c9a75f8 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14c9a75f8 + 0x300))(DAT_14c9a75f8);
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



// FUNCTION 1417411cc FUN_1417411cc body=857 status=ok
// SIG undefined FUN_1417411cc(void)

undefined8 FUN_1417411cc(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  code *local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined1 local_32;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14016a17c();
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (lVar7 == 0) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      lVar3 = FUN_14000e0c8(param_1 + 0x18);
      lVar7 = *(longlong *)(param_1 + 0x48);
      if (lVar3 == 0) {
        if (lVar7 != 0) {
          if (DAT_14c872a72 == '\0') {
            FUN_140113f48();
          }
          goto LAB_1417413dd;
        }
      }
      else {
        if (lVar7 != lVar3) {
          if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48();
          }
          FUN_1401924dc(lVar3);
LAB_1417413dd:
          *(longlong *)(param_1 + 0x48) = lVar3;
          lVar7 = lVar3;
        }
        if (lVar7 != 0) goto LAB_14174120a;
      }
    }
  }
  else {
LAB_14174120a:
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      lVar3 = *(longlong *)(param_2 + 4);
      uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar6 = (uint)lVar3 & 0xffff;
      lVar5 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x90);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0x98) - 1U &
                               (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar4 != -1) {
        uVar9 = 0;
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x18);
          if (*plVar1 == lVar3) {
            uVar9 = 0;
            if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
              local_68 = 0;
              local_60 = 0;
              uStack_58 = 0;
              local_50 = 0;
              lStack_48 = 0;
              local_40 = 0;
              local_70 = *(undefined8 *)(param_3 + 4);
              local_78 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_a0 = plVar1[1];
              local_98 = 0;
              local_a8 = lVar7;
              FUN_1448275b3(&local_32,&local_70,1);
              lVar7 = local_88;
              uVar9 = 0;
              if (local_31 != '\0') goto LAB_141741361;
              if (local_88 == 0) goto LAB_14174135e;
              puVar8 = *(undefined **)(local_88 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952a58) &&
                 (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
                local_98 = FUN_1446ddbd2();
                local_90 = FUN_1403a682c;
                local_a0 = 0;
                local_a8 = 0x108001;
                FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
                atexit(FUN_142818c9e);
                _Init_thread_footer(&DAT_14c952a58);
              }
              if (DAT_14c952a10 == 0) {
                bVar10 = puVar8 != (undefined *)0x0;
                if (puVar8 == &DAT_14c952a08 || !bVar10) goto LAB_141741499;
                goto LAB_141741485;
              }
              if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952a10) != 0) goto LAB_1417414a1;
              goto LAB_14174135e;
            }
            break;
          }
          iVar4 = (int)plVar1[2];
        } while (iVar4 != -1);
        goto LAB_141741373;
      }
    }
  }
  uVar9 = 0;
  goto LAB_141741373;
  while (puVar8 != (undefined *)0x0) {
LAB_141741485:
    puVar8 = *(undefined **)(puVar8 + 0x30);
    bVar10 = puVar8 != (undefined *)0x0;
    if (puVar8 == &DAT_14c952a08) break;
  }
LAB_141741499:
  if (bVar10) {
LAB_1417414a1:
    uVar9 = 0;
    if (((param_4 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x70), lVar7 != 0)) &&
       ((*(int *)(lVar7 + 0x38) < *(int *)(param_4 + 0x38) ||
        (uVar9 = uStack_80,
        *(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(param_4 + 0x38) * 8) !=
        param_4 + 0x30)))) goto LAB_14174135e;
  }
  else {
LAB_14174135e:
    uVar9 = 0;
  }
LAB_141741361:
  if (lStack_48 != 0) {
    FUN_1400020a8();
  }
LAB_141741373:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 141741526 FUN_141741526 body=828 status=ok
// SIG undefined FUN_141741526(void)

void FUN_141741526(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405f1eac();
  if (*(longlong *)(param_1 + 0x640) != 0) goto LAB_1417416e6;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar2 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14a1c8660;
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
  local_50[2] = lVar4;
  *local_50 = (longlong)&PTR_FUN_14a1c84e0;
  local_50[3] = 0;
  iVar7 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar7 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar5;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar7 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar7;
  plVar2[4] = param_1;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_50 + 0x30))(), uVar1 = DAT_14cb10a28, cVar3 == '\0')) {
    if (local_48 == 0) {
      uVar6 = 0;
      goto LAB_1417416d6;
    }
    if (local_50 != (longlong *)0x0) {
      uVar6 = 0;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1417416c9;
    }
    uVar6 = 0;
  }
  else {
    if ((DAT_14cb10a34 < 1) &&
       (DAT_14cb10a30 = DAT_14cb10a30 + -1, DAT_14cb10a30 <= (int)DAT_14cb10a28)) {
      if (0 < (int)DAT_14cb10a28) {
        iVar7 = 0;
        do {
          if (((*(int *)(DAT_14cb10a20 + 8 + (longlong)iVar7 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(DAT_14cb10a20 + (longlong)iVar7 * 0x10),
              plVar2 == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(&DAT_14cb10a20,iVar7);
            FUN_14005b248(&DAT_14cb10a20);
          }
          else {
            iVar7 = iVar7 + 1;
          }
        } while (iVar7 < (int)DAT_14cb10a28);
      }
      DAT_14cb10a30 = 2;
      if (2 < (int)(DAT_14cb10a28 * 2)) {
        DAT_14cb10a30 = DAT_14cb10a28 * 2;
      }
      if ((DAT_14cb10a30 < (int)uVar1) && (DAT_14cb10a2c != DAT_14cb10a28)) {
        FUN_14045812c();
      }
    }
    uVar6 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar6 = local_40;
    }
    uVar1 = DAT_14cb10a28;
    lVar8 = (longlong)(int)DAT_14cb10a28;
    DAT_14cb10a28 = DAT_14cb10a28 + 1;
    if (DAT_14cb10a2c < DAT_14cb10a28) {
      FUN_1447a71f6(&DAT_14cb10a20,uVar1);
    }
    lVar4 = DAT_14cb10a20;
    lVar8 = lVar8 * 0x10;
    *(undefined8 *)(DAT_14cb10a20 + lVar8) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar8) = 0;
    *(longlong **)(lVar4 + lVar8) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar4 + 8 + lVar8) = local_48;
LAB_1417416c9:
    local_48 = 0;
LAB_1417416d6:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x640) = uVar6;
LAB_1417416e6:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141741876 FUN_141741876 body=305 status=ok
// SIG undefined FUN_141741876(void)

void FUN_141741876(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_141741910;
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
LAB_1417418e9:
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
      goto LAB_1417418e9;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_141741910;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141741910:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417419a8 FUN_1417419a8 body=76 status=ok
// SIG undefined FUN_1417419a8(void)

void FUN_1417419a8(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  return;
}



// FUNCTION 1417419f4 FUN_1417419f4 body=93 status=ok
// SIG undefined FUN_1417419f4(void)

void FUN_1417419f4(longlong *param_1,longlong *param_2)

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
  lVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = lVar2;
  return;
}



// FUNCTION 141741a52 FUN_141741a52 body=275 status=ok
// SIG undefined FUN_141741a52(void)

void FUN_141741a52(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141741b66 FUN_141741b66 body=29 status=ok
// SIG undefined FUN_141741b66(void)

undefined8 FUN_141741b66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141741b84 FUN_141741b84 body=29 status=ok
// SIG undefined FUN_141741b84(void)

undefined8 FUN_141741b84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141741ba2 FUN_141741ba2 body=29 status=ok
// SIG undefined FUN_141741ba2(void)

undefined8 FUN_141741ba2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141741bbf FUN_141741bbf body=54 status=ok
// SIG undefined FUN_141741bbf(void)

void FUN_141741bbf(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140358fe5(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 141741bf5 FUN_141741bf5 body=67 status=ok
// SIG undefined FUN_141741bf5(void)

void FUN_141741bf5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141741c38 FUN_141741c38 body=77 status=ok
// SIG undefined FUN_141741c38(void)

void FUN_141741c38(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 141741c9a FUN_141741c9a body=30 status=ok
// SIG undefined FUN_141741c9a(void)

undefined8 FUN_141741c9a(longlong param_1,undefined8 param_2)

{
  FUN_14053d784(*(longlong *)(param_1 + 8) + 0x68);
  return param_2;
}



// FUNCTION 141741cb8 FUN_141741cb8 body=30 status=ok
// SIG undefined FUN_141741cb8(void)

undefined8 FUN_141741cb8(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(*(longlong *)(param_1 + 0x48) + 0x10);
  return param_2;
}



// FUNCTION 141741cd6 FUN_141741cd6 body=72 status=ok
// SIG undefined FUN_141741cd6(void)

void FUN_141741cd6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1406074a2(param_1 + 8,param_1,&local_10,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141741d20 FUN_141741d20 body=282 status=ok
// SIG undefined FUN_141741d20(void)

void FUN_141741d20(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 ***pppuVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_1[8] != 0) && (lVar3 = param_1[9], lVar3 != 0)) &&
     (iVar1 = *(int *)(lVar3 + 0x30), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x28);
    lVar8 = 0;
    do {
      if ((*(char *)(lVar3 + 8 + lVar8) == '\x04') && (*(longlong *)(lVar3 + lVar8) != 0)) {
        iVar2 = *(int *)(*(longlong *)(lVar3 + lVar8) + 0x18);
        if ((-1 < (longlong)iVar2) &&
           ((iVar2 < *(int *)(param_1[8] + 0x78) &&
            (plVar4 = *(longlong **)(*(longlong *)(param_1[8] + 0x70) + (longlong)iVar2 * 8),
            plVar4 != (longlong *)0x0)))) {
          uVar5 = *(undefined8 *)(lVar3 + 0xc + lVar8);
          (**(code **)(*plVar4 + 0x48))(plVar4,local_68,*(undefined8 *)(lVar3 + 0x14 + lVar8));
          (**(code **)(*param_1 + 0x50))(param_1,local_68,uVar5);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
          if (pcVar6 != (code *)0x0) {
            pppuVar7 = local_68;
            if (0x18 < local_50) {
              pppuVar7 = (undefined8 ***)local_68[0];
            }
            (*pcVar6)(pppuVar7);
          }
          if (0x18 < local_50) {
            FUN_1400020a8(local_68[0]);
          }
        }
      }
      lVar8 = lVar8 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141741e3c FUN_141741e3c body=77 status=ok
// SIG undefined FUN_141741e3c(void)

bool FUN_141741e3c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_140c58ad8(param_2,param_1 + 0x90);
  bVar2 = true;
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      bVar2 = false;
    }
    else {
      lVar1 = FUN_140c58ad8(param_2,*(longlong *)(param_1 + 0x40) + 0x58);
      bVar2 = lVar1 != 0;
    }
  }
  return bVar2;
}



// FUNCTION 141741e8a FUN_141741e8a body=604 status=ok
// SIG undefined FUN_141741e8a(void)

void FUN_141741e8a(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + 0x5f8) == 0) || (*(longlong *)(param_1 + 0x600) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x600) + 8) < 1)) {
    uVar5 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar4 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_58[2] = lVar6;
    *local_58 = &PTR_FUN_14a1ca0b0;
    local_58[3] = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar7;
    puVar4[4] = FUN_1407c8126;
    local_68 = 0;
    FUN_1405f67fc(uVar5,&local_48,&local_58,L"UGbxAssetManager::UpdatePendingRequests");
    *(undefined8 *)(param_1 + 0x5f8) = local_48;
    local_48 = 0;
    plVar3 = *(longlong **)(param_1 + 0x600);
    *(longlong **)(param_1 + 0x600) = local_40;
    local_40 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_141741ec4;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141741ec4:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417420e8 FUN_1417420e8 body=371 status=ok
// SIG undefined FUN_1417420e8(void)

undefined8 FUN_1417420e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    uVar6 = 0;
    uVar3 = 0;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar3 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar7;
      }
    }
  }
  local_30 = CONCAT44(uVar3,uVar6);
  iVar2 = FUN_14069bbac((longlong *)(param_1 + 0x588),uVar3 ^ uVar6);
  if (iVar2 == -1) {
    uVar4 = 1;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x588);
    uVar4 = 1;
    lVar5 = lVar8 + (longlong)iVar2 * 0x70;
    if (((lVar5 != 0) && (lVar8 + (longlong)iVar2 * 0x70 != -8)) &&
       ((longlong)*(int *)(lVar5 + 0x60) != 0)) {
      lVar8 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x58) + lVar8);
        if ((((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 != 0)) &&
            (*(longlong *)(lVar1 + 0x78) != 0)) &&
           (((*(char *)(lVar1 + 0x30) != '\0' || (*(char *)(lVar1 + 0x31) != '\0')) ||
            (*(int *)(lVar1 + 0x6c) != 2)))) {
          uVar4 = 0;
          break;
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)*(int *)(lVar5 + 0x60) * 0x10 != lVar8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14174225c FUN_14174225c body=364 status=ok
// SIG undefined FUN_14174225c(void)

void FUN_14174225c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar3 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar6;
      }
    }
  }
  local_30 = CONCAT44(uVar3,uVar5);
  iVar2 = FUN_14069bbac((longlong *)(param_1 + 0x588),uVar3 ^ uVar5);
  if (iVar2 != -1) {
    lVar7 = *(longlong *)(param_1 + 0x588);
    lVar4 = lVar7 + (longlong)iVar2 * 0x70;
    if (((lVar4 != 0) && (lVar7 + (longlong)iVar2 * 0x70 != -8)) &&
       (iVar2 = *(int *)(lVar4 + 0x60), (longlong)iVar2 != 0)) {
      lVar7 = *(longlong *)(lVar4 + 0x58);
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(lVar7 + lVar4);
        if ((((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 != 0)) &&
            ((*(char *)(lVar1 + 0x30) != '\0' ||
             ((*(char *)(lVar1 + 0x31) != '\0' || (*(int *)(lVar1 + 0x6c) != 2)))))) &&
           (*(longlong *)(lVar1 + 0x78) != 0)) {
          FUN_140bd4428(*(longlong *)(lVar1 + 0x78),0,1);
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417423ca FUN_1417423ca body=292 status=ok
// SIG undefined FUN_1417423ca(void)

void FUN_1417423ca(undefined8 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined1 *)(param_1 + 2) = 1;
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_58 = &DAT_14c872ce8;
    iVar1 = FUN_14105aa76(DAT_14c872ce0,L"GbxManager",L"ActiveManagers",&local_48);
    uVar3 = uStack_40 & 0xffffffff;
    if (iVar1 != 0) {
      if ((int)uStack_40 == 0) {
        uVar3 = 0;
      }
      else {
        puVar7 = local_48 + (longlong)(int)uStack_40 * 2;
        puVar6 = local_48;
        do {
          puVar4 = &DAT_149dfb77a;
          if (*(int *)(puVar6 + 1) != 0) {
            puVar4 = (undefined2 *)*puVar6;
          }
          FUN_1446f470e(&local_50,puVar4,1);
          if ((longlong)*(int *)(param_1 + 1) != 0) {
            puVar2 = (undefined1 *)*param_1;
            lVar5 = (longlong)*(int *)(param_1 + 1) * 0x78;
            do {
              if (*(longlong *)(puVar2 + 4) == local_50) {
                if (puVar2 != (undefined1 *)0x0) {
                  *puVar2 = 1;
                }
                break;
              }
              puVar2 = puVar2 + 0x78;
              lVar5 = lVar5 + -0x78;
            } while (lVar5 != 0);
          }
          puVar6 = puVar6 + 2;
        } while (puVar6 != puVar7);
        uVar3 = uStack_40 & 0xffffffff;
      }
    }
    FUN_1447a1747(local_48,uVar3);
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417424f0 FUN_1417424f0 body=56 status=ok
// SIG undefined FUN_1417424f0(void)

void FUN_1417424f0(longlong *param_1)

{
  char cVar1;
  
  FUN_14114d554();
  cVar1 = (**(code **)(*param_1 + 0x300))(param_1);
  if (cVar1 != '\0') {
    FUN_1410f1faa(param_1 + 100);
    return;
  }
  return;
}



// FUNCTION 141742528 FUN_141742528 body=288 status=ok
// SIG undefined FUN_141742528(void)

void FUN_141742528(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x208);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x208) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x210);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x210) = 0;
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
  FUN_144846d14(param_1);
  return;
}



// FUNCTION 141742666 FUN_141742666 body=40 status=ok
// SIG undefined FUN_141742666(void)

void FUN_141742666(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140595142();
  FUN_14470ec92(uVar1,param_1,param_2,0);
  return;
}



// FUNCTION 14174268e FUN_14174268e body=103 status=ok
// SIG undefined FUN_14174268e(void)

undefined8
FUN_14174268e(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_4;
  uVar2 = *param_3;
  uVar3 = FUN_14050fd64();
  local_28 = 0;
  local_38 = uVar2;
  local_30 = uVar1;
  FUN_14050f74e(uVar3,param_2,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417426f6 FUN_1417426f6 body=272 status=ok
// SIG undefined FUN_1417426f6(void)

void FUN_1417426f6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141742806 FUN_141742806 body=29 status=ok
// SIG undefined FUN_141742806(void)

undefined8 FUN_141742806(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141742824 FUN_141742824 body=330 status=ok
// SIG undefined FUN_141742824(void)

void FUN_141742824(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar5 = (uint)DAT_14c9a8040;
  uVar2 = DAT_14c9a8040;
  do {
    if ((uVar2 & 0x3ffffff) == 0) {
      DAT_14c9a8040 = uVar2;
      return;
    }
    uVar3 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    DAT_14c9a8040 = uVar2;
    if (uVar3 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar4 = (ulonglong)((uVar5 & 0x3ffffff) >> 0xe);
    uVar6 = (ulonglong)((uint)uVar2 & 0x3fff);
    LOCK();
    bVar7 = uVar2 == DAT_14c9a8040;
    uVar2 = uVar3 | *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar4 * 8) + 0x10 + uVar6 * 0x18);
    if (!bVar7) {
      uVar2 = DAT_14c9a8040;
    }
    DAT_14c9a8040 = uVar2;
    UNLOCK();
    if (bVar7) {
      *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar4 * 8) + uVar6 * 0x18 + 0x10) = 0;
      lVar1 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + uVar4 * 8) + 8 + (ulonglong)(uVar5 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar5 & 0x3ffffff);
      if (lVar1 == 0) {
        return;
      }
      FUN_1400020a8(lVar1);
    }
    uVar5 = (uint)DAT_14c9a8040;
    uVar2 = DAT_14c9a8040;
  } while( true );
}



// FUNCTION 14174296e FUN_14174296e body=126 status=ok
// SIG undefined FUN_14174296e(void)

void FUN_14174296e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c9ed0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a1c9e60;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1417429ec FUN_1417429ec body=84 status=ok
// SIG undefined FUN_1417429ec(void)

void FUN_1417429ec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141742a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141742a40 FUN_141742a40 body=29 status=ok
// SIG undefined FUN_141742a40(void)

undefined8 FUN_141742a40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141742a5e FUN_141742a5e body=93 status=ok
// SIG undefined FUN_141742a5e(void)

void FUN_141742a5e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1ca0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 141742abc FUN_141742abc body=66 status=ok
// SIG undefined FUN_141742abc(void)

undefined8 * FUN_141742abc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a1ca190;
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



// FUNCTION 141742afe FUN_141742afe body=29 status=ok
// SIG undefined FUN_141742afe(void)

undefined8 FUN_141742afe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141742b1c FUN_141742b1c body=306 status=ok
// SIG undefined FUN_141742b1c(void)

void FUN_141742b1c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141742b85;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_141742b85:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,4,4);
  }
  return;
}



// FUNCTION 141742c5e FUN_141742c5e body=346 status=ok
// SIG undefined FUN_141742c5e(void)

void FUN_141742c5e(void)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_144a52528();
  FUN_145bdbd66(&local_80,FUN_140994f74);
  FUN_145a0ed9c(lVar2 + 0x310,&local_88,&local_80);
  FUN_1401cb1ee(&local_80);
  DAT_14c9a8500 = local_88;
  lVar2 = FUN_140d74fbe();
  if (lVar2 != 0) {
    local_80 = *(undefined2 **)(lVar2 + 0x18);
    iVar1 = FUN_140180c78();
    lVar7 = 0x10;
    puVar6 = &DAT_14c9a8628;
    iVar5 = 1;
    do {
      if (iVar5 < *(int *)(lVar2 + 0x48)) {
        local_88 = *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + lVar7);
      }
      else {
        local_88 = 0;
      }
      FUN_1400021e4(&local_88,&local_80);
      iVar4 = local_78 + -1;
      if (local_78 == 0) {
        iVar4 = 0;
      }
      puVar3 = &DAT_149dfb77a;
      if (local_78 != 0) {
        puVar3 = local_80;
      }
      FUN_1446f82e2(&local_88,iVar4 - (iVar1 + 2),puVar3 + (iVar1 + 2),1);
      *puVar6 = local_88;
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x10;
      puVar6 = puVar6 + 0x24;
      iVar5 = iVar5 + 1;
    } while (lVar7 != 0x240);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141742dba FUN_141742dba body=135 status=ok
// SIG undefined FUN_141742dba(void)

undefined8 * FUN_141742dba(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40 [3];
  ushort local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = 0;
  local_20 = 0;
  local_48 = 0;
  FUN_140180e44(0,param_2,0,0);
  if (DAT_14c9a85d0 != (code *)0x0) {
    (*DAT_14c9a85d0)(local_40);
    if (0x18 < local_28) {
      FUN_1400020a8(local_40[0]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141742e48 FUN_141742e48 body=40 status=ok
// SIG undefined FUN_141742e48(void)

void FUN_141742e48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14016b782();
  FUN_14470ec92(uVar1,param_1,param_2,0);
  return;
}



// FUNCTION 141742e70 FUN_141742e70 body=42 status=ok
// SIG undefined FUN_141742e70(void)

void FUN_141742e70(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  return;
}



// FUNCTION 141742ea0 FUN_141742ea0 body=66 status=ok
// SIG undefined FUN_141742ea0(void)

void FUN_141742ea0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  return;
}



// FUNCTION 141742ee2 FUN_141742ee2 body=40 status=ok
// SIG undefined FUN_141742ee2(void)

void FUN_141742ee2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1403f613c();
  FUN_14470ec92(uVar1,param_1,param_2,0);
  return;
}



// FUNCTION 141742f10 FUN_141742f10 body=108 status=ok
// SIG undefined FUN_141742f10(void)

void FUN_141742f10(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 3,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141742f7c FUN_141742f7c body=68 status=ok
// SIG undefined FUN_141742f7c(void)

void FUN_141742f7c(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 141742fc0 FUN_141742fc0 body=83 status=ok
// SIG undefined FUN_141742fc0(void)

void FUN_141742fc0(longlong *param_1,longlong *param_2)

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
  return;
}



// FUNCTION 141743014 FUN_141743014 body=146 status=ok
// SIG undefined FUN_141743014(void)

undefined8 FUN_141743014(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(char *)((longlong)param_1 + 0x1fb) == '\0') ||
     (((((lVar1 = param_1[0x16], lVar1 == 0 && (lVar1 = FUN_1448abda6(param_1), lVar1 == 0)) ||
        (*(longlong *)(lVar1 + 0x30) == 0)) ||
       ((lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 == 0 ||
        ((*(byte *)(lVar1 + 0x39e) & 0x10) == 0)))) &&
      (*(char *)((longlong)param_1 + 0x2cf) == '\x01')))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x808);
    uVar2 = 0x1448ac701;
    if (UNRECOVERED_JUMPTABLE != (code *)&LAB_1401a122a &&
        UNRECOVERED_JUMPTABLE != (code *)&LAB_1448ac798) {
                    /* WARNING: Could not recover jumptable at 0x0001417430a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar2;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1417430a6 FUN_1417430a6 body=81 status=ok
// SIG undefined FUN_1417430a6(void)

undefined8 * FUN_1417430a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1ce4d0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417430f8 FUN_1417430f8 body=181 status=ok
// SIG undefined FUN_1417430f8(void)

undefined8 * FUN_1417430f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1cf370;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_144727cd0(param_1 + 6,0);
  }
  param_1[0xc] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x5c)) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80;
    FUN_1446efbd8(param_1 + 8,0);
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417431ae FUN_1417431ae body=527 status=ok
// SIG undefined FUN_1417431ae(void)

void FUN_1417431ae(undefined8 param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ab76c) && (FUN_144b3d300(&DAT_14c9ab76c), DAT_14c9ab76c == -1)) {
    FUN_1446f470e(&DAT_14c9ab764,L"Animated Death",1);
    _Init_thread_footer(&DAT_14c9ab76c);
  }
  if (*(longlong *)(param_2 + 0x30) != DAT_14c9ab764) {
    iVar1 = *(int *)(param_3 + 0x28);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9ab76c) && (FUN_144b3d300(&DAT_14c9ab76c), DAT_14c9ab76c == -1)) {
      FUN_1446f470e(&DAT_14c9ab764,L"Animated Death",1);
      _Init_thread_footer(&DAT_14c9ab76c);
    }
    if (iVar1 == -1) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_3 + 0x28);
    }
    if (lVar2 != DAT_14c9ab764) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9ab760) && (FUN_144b3d300(&DAT_14c9ab760), DAT_14c9ab760 == -1))
      {
        FUN_1446f470e(&DAT_14c9ab758,L"Animated",1);
        _Init_thread_footer(&DAT_14c9ab760);
      }
      if (*(longlong *)(param_2 + 0x30) != DAT_14c9ab758) {
        iVar1 = *(int *)(param_3 + 0x28);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9ab760) &&
           (FUN_144b3d300(&DAT_14c9ab760), DAT_14c9ab760 == -1)) {
          FUN_1446f470e(&DAT_14c9ab758,L"Animated",1);
          _Init_thread_footer(&DAT_14c9ab760);
        }
        if (iVar1 == -1) {
          lVar2 = 0;
        }
        else {
          lVar2 = *(longlong *)(param_3 + 0x28);
        }
        if (lVar2 != DAT_14c9ab758) {
          return;
        }
      }
    }
  }
  *param_4 = 1;
  return;
}



// FUNCTION 1417433c6 FUN_1417433c6 body=132 status=ok
// SIG undefined FUN_1417433c6(void)

void FUN_1417433c6(longlong *param_1)

{
  int *piVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)param_1[1]);
  *(int *)param_1[2] = *(int *)param_1[2] + -1;
  piVar1 = (int *)param_1[2];
  if (*piVar1 == 0) {
    if (*param_1 != 0) {
      FUN_1400020a8(*param_1);
      piVar1 = (int *)param_1[2];
    }
    *param_1 = 0;
    if (piVar1 != (int *)0x0) {
      FUN_1400020a8();
    }
    param_1[2] = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141743443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
  return;
}



// FUNCTION 14174344a FUN_14174344a body=599 status=ok
// SIG undefined FUN_14174344a(void)

longlong * FUN_14174344a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined1 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  if (param_1 != param_2) {
    iVar1 = (int)param_2[4];
    _Src = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      FUN_1447c510a(param_1 + 3,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[3],_Src,(longlong)iVar1 << 2);
      }
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_1[6] = param_2[6];
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)((longlong)param_2 + 0x3c);
  if (param_1 == param_2) goto LAB_141743508;
  if (*(char *)((longlong)param_2 + 0x45) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x44);
    uVar2 = 1;
LAB_14174363b:
    *(undefined1 *)((longlong)param_1 + 0x45) = uVar2;
  }
  else if (*(char *)((longlong)param_1 + 0x45) == '\x01') {
    uVar2 = 0;
    goto LAB_14174363b;
  }
  if ((char)param_2[0x16] == '\x01') {
    plVar5 = param_2 + 10;
    plVar6 = param_1 + 10;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar6 = *plVar5;
      plVar5 = plVar5 + 1;
      plVar6 = plVar6 + 1;
    }
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  else if ((char)param_1[0x16] == '\x01') {
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
LAB_141743508:
  param_1[0x18] = 0;
  if (param_1[0x1b] != param_2[0x1b]) {
    if ((PSRWLOCK)param_2[0x1c] != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)param_2[0x1c]);
    }
    if ((PSRWLOCK)param_1[0x1c] != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)param_1[0x1c]);
    }
    if (param_1[0x1b] != 0) {
      *(int *)param_1[0x1d] = *(int *)param_1[0x1d] + -1;
      piVar4 = (int *)param_1[0x1d];
      if (*piVar4 == 0) {
        if (param_1[0x1b] != 0) {
          FUN_1400020a8(param_1[0x1b]);
          piVar4 = (int *)param_1[0x1d];
        }
        param_1[0x1b] = 0;
        if (piVar4 != (int *)0x0) {
          FUN_1400020a8();
        }
        ReleaseSRWLockExclusive((PSRWLOCK)param_1[0x1c]);
        if (param_1[0x1c] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)param_1[0x1c]);
      }
    }
    lVar3 = param_2[0x1b];
    param_1[0x1b] = lVar3;
    param_1[0x1c] = param_2[0x1c];
    piVar4 = (int *)param_2[0x1d];
    param_1[0x1d] = (longlong)piVar4;
    if (lVar3 != 0) {
      *piVar4 = *piVar4 + 1;
      ReleaseSRWLockExclusive((PSRWLOCK)param_1[0x1c]);
    }
  }
  return param_1;
}



// FUNCTION 1417436a2 FUN_1417436a2 body=76 status=ok
// SIG undefined FUN_1417436a2(void)

void FUN_1417436a2(undefined8 param_1,longlong *param_2)

{
  FUN_1402c741b(param_2[4],(int)param_2[5]);
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417436ee FUN_1417436ee body=214 status=ok
// SIG undefined FUN_1417436ee(void)

undefined8 FUN_1417436ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      if (param_2 != param_3) {
        iVar3 = *(int *)(param_3 + 8 + lVar11);
        _Src = *(void **)(param_3 + lVar11);
        *(int *)(param_2 + 8 + lVar11) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0xc + lVar11) == 0) {
          *(undefined4 *)(param_2 + 0xc + lVar11) = 0;
        }
        else {
          FUN_1447c510a((undefined8 *)(param_2 + lVar11),iVar3);
          if (iVar3 != 0) {
            memcpy(*(void **)(param_2 + lVar11),_Src,(longlong)iVar3 << 2);
          }
        }
      }
      FUN_1402c757e(param_2 + lVar11 + 0x10,param_3 + lVar11 + 0x10);
      lVar1 = param_2 + lVar11;
      lVar2 = param_3 + lVar11;
      FUN_1402c73be(lVar1 + 0x20,lVar2 + 0x20);
      uVar4 = *(undefined4 *)(lVar2 + 0x34);
      uVar5 = *(undefined4 *)(lVar2 + 0x38);
      uVar6 = *(undefined4 *)(lVar2 + 0x3c);
      uVar7 = *(undefined4 *)(lVar2 + 0x3d);
      uVar8 = *(undefined4 *)(lVar2 + 0x41);
      uVar9 = *(undefined4 *)(lVar2 + 0x45);
      uVar10 = *(undefined4 *)(lVar2 + 0x49);
      *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
      *(undefined4 *)(lVar1 + 0x34) = uVar4;
      *(undefined4 *)(lVar1 + 0x38) = uVar5;
      *(undefined4 *)(lVar1 + 0x3c) = uVar6;
      *(undefined4 *)(lVar1 + 0x3d) = uVar7;
      *(undefined4 *)(lVar1 + 0x41) = uVar8;
      *(undefined4 *)(lVar1 + 0x45) = uVar9;
      *(undefined4 *)(lVar1 + 0x49) = uVar10;
      lVar11 = lVar11 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1417437c4 FUN_1417437c4 body=76 status=ok
// SIG undefined FUN_1417437c4(void)

void FUN_1417437c4(longlong *param_1)

{
  FUN_1402c741b(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141743810 FUN_141743810 body=65 status=ok
// SIG undefined FUN_141743810(void)

void FUN_141743810(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_140320438(param_1 + 0x2a8);
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x2cc) = uVar1;
  *(char *)(param_1 + 0x225) = *(char *)(param_1 + 0x1d8) * '\x02';
  return;
}



// FUNCTION 141743852 FUN_141743852 body=130 status=ok
// SIG undefined FUN_141743852(void)

void FUN_141743852(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_140896ad0(param_1 + 0xc0);
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1470fb70e(param_1 + 0xd8);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (*(char *)(param_1 + 0x45) == '\x01') {
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417438d4 FUN_1417438d4 body=38 status=ok
// SIG undefined FUN_1417438d4(void)

undefined8 FUN_1417438d4(undefined8 param_1,int param_2)

{
  FUN_140896c30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417438fa FUN_1417438fa body=29 status=ok
// SIG undefined FUN_1417438fa(void)

undefined8 FUN_1417438fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141743918 FUN_141743918 body=353 status=ok
// SIG undefined FUN_141743918(void)

void FUN_141743918(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14174399f;
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
LAB_14174399f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141743a7a FUN_141743a7a body=275 status=ok
// SIG undefined FUN_141743a7a(void)

void FUN_141743a7a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141743b8e FUN_141743b8e body=309 status=ok
// SIG undefined FUN_141743b8e(void)

void FUN_141743b8e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  plVar1 = param_2 + 4;
  puVar6 = &DAT_14c846480;
  if ((-1 < *(int *)(param_1 + 0x438)) && (*(int *)(param_1 + 0x43c) != -1)) {
    uVar2 = *(int *)(param_1 + 0x438) * 2 >> 1;
    iVar5 = -1;
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_2[6] + 0x88))) {
      iVar5 = *(int *)(*(longlong *)(param_2[6] + 0x80) + (ulonglong)uVar2 * 4);
    }
    if (*(char *)(param_2[7] + (longlong)iVar5) == '\0') {
      FUN_1447d5d8e(plVar1);
    }
    puVar6 = (undefined8 *)((longlong)iVar5 * 0x60 + *plVar1);
  }
  puVar7 = (undefined8 *)(param_1 + 0xb0);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = &DAT_14c846480;
  puVar7 = (undefined8 *)(param_1 + 0x110);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((((*param_2 != 0) && (lVar3 = *(longlong *)(param_1 + 0x3f0), lVar3 != 0)) &&
      (0 < *(int *)(lVar3 + 0x10))) && (**(longlong **)(lVar3 + 8) != 0)) {
    iVar5 = *(int *)(**(longlong **)(lVar3 + 8) + 0x340);
    if ((-1 < (longlong)iVar5) &&
       (lVar3 = *(longlong *)(*param_2 + 0x6a0), iVar5 < *(int *)(lVar3 + 0x88))) {
      iVar5 = *(int *)(*(longlong *)(lVar3 + 0x80) + (longlong)iVar5 * 4);
      lVar3 = (longlong)iVar5;
      if ((-1 < lVar3) && (iVar5 < (int)param_2[5])) {
        if (*(char *)(param_2[7] + lVar3) == '\0') {
          FUN_1447d5d8e(plVar1,iVar5);
        }
        puVar6 = (undefined8 *)(lVar3 * 0x60 + *plVar1);
        puVar7 = (undefined8 *)(param_1 + 0x110);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 141743cc4 FUN_141743cc4 body=1780 status=ok
// SIG undefined FUN_141743cc4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_141743cc4(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  longlong *aplStack_100 [2];
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  undefined1 local_58 [24];
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_58;
  plVar10 = &local_d8;
  uVar9 = local_a0;
  if (((*(longlong *)(param_1 + 0x3a8) != 0) &&
      (plVar10 = &local_d8, *(longlong *)(param_1 + 0x3f0) != 0)) &&
     (plVar10 = &local_d8, *(longlong *)(param_1 + 0x3f8) != 0)) {
    fVar18 = 1.0 / *(float *)(param_1 + 0x14);
    if (0 < *(int *)(param_1 + 0x4c8)) {
      lVar17 = 0;
      local_c0 = (longlong *)(param_1 + 0x4d0);
      do {
        lVar8 = *(longlong *)(param_1 + 0x4c0);
        plVar10 = (longlong *)(lVar8 + lVar17 * 0x1d0);
        if ((*(int *)(lVar8 + 0x104 + lVar17 * 0x1d0) == 2) ||
           (*(char *)(param_1 + 0x4b8) == '\x01')) {
          if (*(int *)(param_1 + 0x4d8) != *(int *)(param_1 + 0x504)) {
            uVar16 = *(uint *)(plVar10 + 0x20);
            lVar8 = *(longlong *)(param_1 + 0x510);
            if (*(longlong *)(param_1 + 0x510) == 0) {
              lVar8 = param_1 + 0x508;
            }
            iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x518) - 1U & uVar16) * 4);
            if (iVar6 != -1) {
              do {
                lVar8 = *(longlong *)(param_1 + 0x4d0) + (longlong)iVar6 * 0x1f0;
                if (*(uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)iVar6 * 0x1f0) == uVar16) {
                  if ((lVar8 + 0x10U & 0xffffffffffffffef) != 0) {
                    if (*(longlong *)(lVar8 + 0x108) != 0) {
                      aplStack_100[0] = (longlong *)0x14174439c;
                      FUN_14711a74c(*(undefined8 *)(param_1 + 0x3a8),lVar8 + 0x108);
                      uVar16 = *(uint *)(plVar10 + 0x20);
                    }
                    aplStack_100[0] = (longlong *)0x1417443b4;
                    FUN_1471033f6(local_c0,uVar16);
                  }
                  break;
                }
                iVar6 = *(int *)(lVar8 + 0x1e0);
              } while (iVar6 != -1);
            }
          }
        }
        else {
          if (*plVar10 != 0) {
            lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
            if (lVar8 != 0) {
              lVar11 = 0;
              do {
                lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8) + lVar11);
                if (*(longlong *)(lVar13 + 0x1f0) == *plVar10) goto LAB_141743ea2;
                lVar11 = lVar11 + 8;
              } while (lVar8 << 3 != lVar11);
            }
          }
          lVar13 = 0;
LAB_141743ea2:
          lVar8 = plVar10[0xf];
          if (lVar8 != 0) {
            lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
            if (lVar11 != 0) {
              lVar12 = 0;
              do {
                lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8) + lVar12);
                if (*(longlong *)(lVar15 + 0x1f0) == lVar8) goto LAB_141743eb2;
                lVar12 = lVar12 + 8;
              } while (lVar11 << 3 != lVar12);
            }
          }
          lVar15 = 0;
LAB_141743eb2:
          if ((lVar13 != 0) && (lVar8 == 0 || lVar15 != 0)) {
            aplStack_100[0] = (longlong *)0x141743eea;
            local_c8 = (undefined1 *)FUN_147103552(local_c0,(int)plVar10[0x20],plVar10 + 0x20);
            local_e8 = *(longlong *)(local_c8 + 0xf8);
            local_f0 = plVar10[0x1e];
            aplStack_100[1] = plVar10 + 0x10;
            local_d8 = local_e8;
            lVar8 = FUN_140b8baac((int)plVar10[0x1d],lVar13,lVar15,plVar10 + 2);
            puVar4 = local_c8;
            plVar10[0x1f] = lVar8;
            *(longlong *)(lVar8 + 0x230) = plVar10[0xe];
            *(longlong *)(plVar10[0x1f] + 0x238) = plVar10[0x1c];
            aplStack_100[0] = (longlong *)0x141743f81;
            memcpy(local_c8,plVar10,0x108);
            local_d0 = puVar4 + 0x110;
            aplStack_100[0] = (longlong *)0x141743f9f;
            FUN_1470f79ae(local_d0,plVar10 + 0x22);
            aplStack_100[0] = (longlong *)0x141743fbc;
            FUN_1470f7ad2(puVar4 + 0x150,plVar10 + 0x2a);
            aplStack_100[0] = (longlong *)0x141743fd8;
            FUN_1470f7bf6(puVar4 + 400,plVar10 + 0x32);
            lVar8 = plVar10[0x1f];
            if (local_d8 == 0) {
              aplStack_100[0] = (longlong *)0x141743ffa;
              FUN_140b8b62e(*(undefined8 *)(param_1 + 0x3a8));
              lVar8 = plVar10[0x1f];
              *(longlong *)(local_c8 + 0xf8) = lVar8;
            }
            aplStack_100[0] = (longlong *)0x141744026;
            FUN_1470f7ad2(lVar8 + 0x290,puVar4 + 0x150);
            aplStack_100[0] = (longlong *)0x141744046;
            FUN_1470f79ae(plVar10[0x1f] + 0x250,local_d0);
            *(undefined4 *)(local_c8 + 0x104) = 1;
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_1 + 0x4c8));
    }
    iVar6 = *(int *)(param_1 + 0x4cc);
    aplStack_100[0] = (longlong *)0x141743d4d;
    FUN_14499ee64(*(undefined8 *)(param_1 + 0x4c0));
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    if ((iVar6 < 0) && (*(int *)(param_1 + 0x4cc) != 0)) {
      aplStack_100[0] = (longlong *)0x141744076;
      FUN_147103c7e((longlong *)(param_1 + 0x4c0));
    }
    iVar6 = *(int *)(param_1 + 0x4d8) - *(int *)(param_1 + 0x504);
    plVar10 = &local_d8;
    uVar9 = local_a0;
    if (iVar6 != 0) {
      local_c0 = (longlong *)(param_1 + 0x4d0);
      uStack_e0 = 0x14174409d;
      lVar8 = -((longlong)iVar6 * 4 + 0x1eU & 0xfffffffffffffff0);
      local_c8 = (undefined1 *)((longlong)&local_d8 + lVar8);
      lVar17 = param_1 + 0x4e0;
      local_90 = 0x100000000;
      local_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_88 = lVar17;
      if (*(int *)(param_1 + 0x4f8) == 0) {
        iVar6 = 0;
        local_c8 = (undefined1 *)((longlong)&local_d8 + lVar8);
      }
      else {
        *(undefined8 *)((longlong)aplStack_100 + lVar8) = 0x1417440e7;
        FUN_1449c0562(&local_90);
        iVar6 = *(int *)(param_1 + 0x4f8);
      }
      local_b0 = (undefined4)local_90;
      uStack_ac = local_90._4_4_;
      uStack_a8 = (undefined4)uStack_88;
      uStack_a4 = uStack_88._4_4_;
      uStack_98 = CONCAT44(uStack_74,uStack_78);
      local_a0 = local_80;
      uVar9 = local_a0;
      local_b8 = local_c0;
      local_a0._4_4_ = (int)((ulonglong)local_80 >> 0x20);
      if ((local_a0._4_4_ != iVar6) ||
         (plVar10 = (longlong *)((longlong)&local_d8 + lVar8), uStack_88 != lVar17)) {
        uVar16 = 0;
        iVar7 = local_a0._4_4_;
        local_a0 = uVar9;
        do {
          puVar1 = (undefined4 *)(*local_b8 + (longlong)iVar7 * 0x1f0);
          pcVar2 = *(code **)(*local_b8 + 0x1a0 + (longlong)iVar7 * 0x1f0);
          if (pcVar2 == (code *)0x0) {
LAB_14174418e:
            lVar11 = *(longlong *)(puVar1 + 0x42);
            if ((lVar11 == 0) || (*(char *)(param_1 + 0x4b8) != '\0')) goto LAB_1417441a3;
            if (*(char *)(puVar1 + 0x3f) == '\x01') {
              *(undefined8 *)(lVar11 + 0x1d0) = 0;
              uVar9 = *(undefined8 *)(puVar1 + 0x42);
              *(undefined8 *)((longlong)aplStack_100 + lVar8) = 0x14174421f;
              uVar9 = FUN_14711f596(uVar9,SUB84((double)(float)(-(uint)(1e-08 < fVar18) &
                                                               (uint)(1.0 / fVar18)),0),1);
              *(undefined8 *)(*(longlong *)(puVar1 + 0x42) + 0x220) = uVar9;
            }
            else {
              *(undefined8 *)(lVar11 + 0x1d0) = *(undefined8 *)(puVar1 + 0x40);
              *(undefined8 *)(*(longlong *)(puVar1 + 0x42) + 0x220) = 0;
            }
          }
          else {
            plVar10 = (longlong *)(puVar1 + 0x70);
            if (*(longlong **)(puVar1 + 0x6c) != (longlong *)0x0) {
              plVar10 = *(longlong **)(puVar1 + 0x6c);
            }
            pcVar3 = *(code **)(*plVar10 + 8);
            *(undefined8 *)((longlong)aplStack_100 + lVar8) = 0x14174417e;
            uVar9 = (*pcVar3)();
            *(undefined8 *)((longlong)aplStack_100 + lVar8) = 0x141744186;
            cVar5 = (*pcVar2)(uVar9,puVar1 + 4);
            if (cVar5 != '\0') goto LAB_14174418e;
LAB_1417441a3:
            lVar11 = (longlong)(int)uVar16;
            uVar16 = uVar16 + 1;
            *(undefined4 *)(local_c8 + lVar11 * 4) = *puVar1;
          }
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
          *(undefined8 *)((longlong)aplStack_100 + lVar8) = 0x1417441c7;
          FUN_1449c0562(&local_b0);
          iVar7 = local_a0._4_4_;
        } while (local_b8 != local_c0 ||
                 (CONCAT44(uStack_a4,uStack_a8) != lVar17 || local_a0._4_4_ != iVar6));
        plVar10 = (longlong *)((longlong)&local_d8 + lVar8);
        uVar9 = local_a0;
        if (0 < (int)uVar16) {
          uVar14 = 0;
          do {
            if (*(int *)(param_1 + 0x4d8) != *(int *)(param_1 + 0x504)) {
              lVar17 = *(longlong *)(param_1 + 0x510);
              if (*(longlong *)(param_1 + 0x510) == 0) {
                lVar17 = param_1 + 0x508;
              }
              iVar6 = *(int *)(lVar17 + (ulonglong)
                                        (*(int *)(param_1 + 0x518) - 1U &
                                        *(uint *)(local_c8 + uVar14 * 4)) * 4);
              if (iVar6 != -1) {
                do {
                  lVar17 = *local_c0 + (longlong)iVar6 * 0x1f0;
                  if (*(uint *)(*local_c0 + (longlong)iVar6 * 0x1f0) ==
                      *(uint *)(local_c8 + uVar14 * 4)) goto LAB_1417442ac;
                  iVar6 = *(int *)(lVar17 + 0x1e0);
                } while (iVar6 != -1);
              }
            }
            lVar17 = 0;
LAB_1417442ac:
            if (*(longlong *)(lVar17 + 0x108) != 0) {
              uVar9 = *(undefined8 *)(param_1 + 0x3a8);
              *(undefined8 *)((longlong)aplStack_100 + lVar8) = 0x1417442cd;
              FUN_14711a74c(uVar9,lVar17 + 0x108);
            }
            plVar10 = local_c0;
            *(undefined8 *)((longlong)aplStack_100 + lVar8) = 0x1417442e0;
            FUN_1471033f6(plVar10);
            uVar14 = uVar14 + 1;
            plVar10 = (longlong *)((longlong)&local_d8 + lVar8);
            uVar9 = local_a0;
          } while (uVar14 != uVar16);
        }
      }
    }
  }
  local_a0 = uVar9;
  if ((local_70 ^ (ulonglong)local_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)plVar10 + -0x28) = &UNK_141743da7;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417443be FUN_1417443be body=306 status=ok
// SIG undefined FUN_1417443be(void)

void FUN_1417443be(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(double *)(param_1 + 0xc0) = *param_2 + *(double *)(param_1 + 0xc0);
  *(double *)(param_1 + 200) = param_2[1] + *(double *)(param_1 + 200);
  dVar6 = param_2[2] + *(double *)(param_1 + 0xd0);
  *(double *)(param_1 + 0xd0) = dVar6;
  FUN_144941734(dVar6,local_a8);
  dVar6 = param_3[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  *(double *)(param_1 + 0xa8) =
       ((dVar2 - local_80) * dVar5 - (dVar6 - local_78) * dVar4) + *(double *)(param_1 + 0xa8);
  *(double *)(param_1 + 0xb0) =
       ((dVar6 - local_78) * dVar3 - (dVar1 - local_88) * dVar5) + *(double *)(param_1 + 0xb0);
  *(double *)(param_1 + 0xb8) =
       ((dVar1 - local_88) * dVar4 - dVar3 * (dVar2 - local_80)) + *(double *)(param_1 + 0xb8);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417444f2 FUN_1417444f2 body=26 status=ok
// SIG undefined FUN_1417444f2(void)

void FUN_1417444f2(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    FUN_140bc9c7c();
    return;
  }
  return;
}



// FUNCTION 14174450c FUN_14174450c body=272 status=ok
// SIG undefined FUN_14174450c(void)

void FUN_14174450c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141744636 FUN_141744636 body=272 status=ok
// SIG undefined FUN_141744636(void)

void FUN_141744636(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141744746 FUN_141744746 body=29 status=ok
// SIG undefined FUN_141744746(void)

undefined8 FUN_141744746(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141744764 FUN_141744764 body=274 status=ok
// SIG undefined FUN_141744764(void)

void FUN_141744764(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0xd0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141744878 FUN_141744878 body=153 status=ok
// SIG undefined FUN_141744878(void)

void FUN_141744878(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x60)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x60,8);
      uVar3 = uVar3 / 0x60;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x60,8);
    }
  }
  return;
}



// FUNCTION 141744912 FUN_141744912 body=231 status=ok
// SIG undefined FUN_141744912(void)

void FUN_141744912(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 1417449fa FUN_1417449fa body=93 status=ok
// SIG undefined FUN_1417449fa(void)

void FUN_1417449fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1e19d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 141744a58 FUN_141744a58 body=334 status=ok
// SIG undefined FUN_141744a58(void)

void FUN_141744a58(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141744aca;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_141744aca:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141744ba6 FUN_141744ba6 body=492 status=ok
// SIG undefined FUN_141744ba6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_141744ba6(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  undefined1 auStack_148 [8];
  undefined1 *local_140;
  code *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  code *local_f8 [2];
  undefined ***local_e8;
  undefined **local_d8;
  undefined1 **local_d0;
  code **local_c8;
  longlong local_c0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&local_c8;
  puVar6 = auStack_148;
  if (((longlong)*(int *)(param_1 + 0x10) == -1) ||
     (puVar6 = auStack_148,
     *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + (longlong)*(int *)(param_1 + 0x10) * 0x50) == -1
     )) goto LAB_141744bd6;
  if ((longlong)*(int *)(param_1 + 0x30) == 0) {
    local_140 = (undefined1 *)0x0;
    puVar6 = auStack_148;
  }
  else {
    lVar2 = -((longlong)*(int *)(param_1 + 0x30) + 0x1eU & 0xfffffffffffffff0);
    local_140 = auStack_148 + lVar2;
    puVar6 = auStack_148 + lVar2;
  }
  local_d0 = &local_140;
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)0x0;
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_LAB_14a1e3910;
  local_f8[0] = FUN_142b6fc00;
  local_138 = (code *)0x0;
  local_c8 = &local_b8;
  local_c0 = param_1;
  *(undefined8 *)(puVar6 + -0x28) = 0x141744c92;
  plVar3 = (longlong *)FUN_14001cc68(0x28,8);
  local_128 = local_a8;
  pcVar1 = local_b8;
  *plVar3 = (longlong)&PTR_FUN_14a1e3930;
  plVar3[1] = param_1;
  plVar3[2] = param_2;
  plVar3[3] = (longlong)local_f8;
  plVar3[4] = (longlong)&local_b8;
  if (plVar3 + 1 != (longlong *)0x0) {
    local_138 = FUN_142b6fcfc;
  }
  local_b8 = local_138;
  local_a8 = plVar3;
  local_138 = pcVar1;
  uStack_130 = uStack_b0;
  uStack_12c = uStack_ac;
  uStack_120 = uStack_a0;
  uStack_11c = uStack_9c;
  local_118 = local_98;
  uStack_114 = uStack_94;
  uStack_110 = uStack_90;
  uStack_10c = uStack_8c;
  local_108 = local_88;
  uStack_104 = uStack_84;
  uStack_100 = uStack_80;
  uStack_fc = uStack_7c;
  if (pcVar1 == (code *)0x0) {
    pppuVar4 = (undefined ***)0x0;
LAB_141744d20:
    pppuVar5 = &local_d8;
    if (pppuVar4 != (undefined ***)0x0) {
      pppuVar5 = pppuVar4;
    }
    pcVar1 = (code *)(*pppuVar5)[2];
    *(undefined8 *)(puVar6 + -0x28) = 0x141744d35;
    (*pcVar1)();
  }
  else {
    plVar3 = local_128;
    if (local_128 == (longlong *)0x0) {
      plVar3 = (longlong *)&local_118;
    }
    pcVar1 = *(code **)(*plVar3 + 0x10);
    *(undefined8 *)(puVar6 + -0x28) = 0x141744d86;
    (*pcVar1)();
    pppuVar4 = local_e8;
    if (local_f8[0] != (code *)0x0) goto LAB_141744d20;
  }
  if (local_b8 != (code *)0x0) {
    plVar3 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar3 = (longlong *)&local_98;
    }
    pcVar1 = *(code **)(*plVar3 + 0x10);
    *(undefined8 *)(puVar6 + -0x28) = 0x141744d5d;
    (*pcVar1)();
  }
LAB_141744bd6:
  if ((local_30 ^ (ulonglong)&local_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -0x28) = &UNK_141744c00;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141744d98 FUN_141744d98 body=2109 status=ok
// SIG undefined FUN_141744d98(void)

uint * FUN_141744d98(uint *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  PSRWLOCK pRVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[0] = 0;
  param_1[1] = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar3 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      uVar3 = *(uint *)(lVar11 + 0x10);
      bVar15 = uVar3 == 0;
      if (bVar15) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar15) {
        uVar3 = uVar10;
      }
    }
  }
  param_1[1] = uVar3;
  puVar4 = param_3;
  puVar12 = param_1;
  for (lVar11 = 9; puVar12 = puVar12 + 2, lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined8 *)puVar12 = *puVar4;
    puVar4 = puVar4 + 1;
  }
  param_1[0x14] = 0;
  uVar7 = DAT_14c8464e8;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x16) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  *(undefined8 *)(param_1 + 0x1a) = DAT_14c8464f0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)(param_1 + 0x26) = param_3[2];
  *(undefined8 *)(param_1 + 0x28) = param_3[3];
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x39] = 0x80;
  param_1[0x3a] = 0xffffffff;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x47] = 0x80;
  param_1[0x48] = 0xffffffff;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  FUN_1446f470e(local_88,L"FDScene::StaticTreeInstance",1);
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(puVar4 + 2) = 0xffffffff;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  *(undefined8 **)(param_1 + 0x58) = puVar4;
  pRVar5 = (PSRWLOCK)FUN_14001cc68(8,0x10);
  InitializeSRWLock(pRVar5);
  *(PSRWLOCK *)(param_1 + 0x5a) = pRVar5;
  puVar6 = (undefined4 *)FUN_14001cc68(4,0x10);
  *puVar6 = 1;
  *(undefined4 **)(param_1 + 0x5c) = puVar6;
  FUN_1446f470e(local_90,L"FDScene::DynamicTree",1);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined ***)(param_1 + 0x5e) = &PTR_LAB_14a1e3a20;
  param_1[0x62] = 0xffffffff;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x80;
  *(undefined4 *)(puVar4 + 6) = 0xffffffff;
  *(undefined8 **)(param_1 + 0x6c) = puVar4;
  pRVar5 = (PSRWLOCK)FUN_14001cc68(8,0x10);
  InitializeSRWLock(pRVar5);
  *(PSRWLOCK *)(param_1 + 0x6e) = pRVar5;
  puVar6 = (undefined4 *)FUN_14001cc68(4,0x10);
  *puVar6 = 1;
  *(undefined4 **)(param_1 + 0x70) = puVar6;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x8d] = 0x80;
  param_1[0x8e] = 0xffffffff;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  *(undefined8 **)(param_1 + 0x9a) = puVar4;
  *(undefined8 **)(param_1 + 0x98) = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  *(undefined8 **)(param_1 + 0x9e) = puVar4;
  *(undefined8 **)(param_1 + 0x9c) = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *puVar4 = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x3ff00000;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0x3ff0000000000000;
  puVar4[0xd] = 0x3ff0000000000000;
  puVar4[0xe] = 0x3ff0000000000000;
  puVar4[0xf] = 0;
  *(undefined8 **)(param_1 + 0xa2) = puVar4;
  *(undefined8 **)(param_1 + 0xa0) = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *puVar4 = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x3ff00000;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0x3ff0000000000000;
  puVar4[0xd] = 0x3ff0000000000000;
  puVar4[0xe] = 0x3ff0000000000000;
  puVar4[0xf] = 0;
  *(undefined8 **)(param_1 + 0xa6) = puVar4;
  *(undefined8 **)(param_1 + 0xa4) = puVar4;
  param_1[0xa8] = 0x80;
  param_1[0xa9] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x16810,0x10);
  *puVar4 = 0x80;
  lVar11 = 0x2b0;
  do {
    *(undefined1 *)((longlong)puVar4 + lVar11 + -0x298) = 0;
    *(undefined8 *)((longlong)puVar4 + lVar11 + -0x290) = 0;
    *(undefined ***)((longlong)puVar4 + lVar11 + -0x2a0) = &PTR_LAB_14a1e1990;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0x200);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0x1f0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0x1e0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0x1d0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0x1c0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0x1b0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0x130);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar6 = (undefined4 *)((longlong)puVar4 + lVar11 + -0x120);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0x3ff00000;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0x110);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0x100);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0xf0);
    *puVar1 = 0x3ff0000000000000;
    puVar1[1] = 0x3ff0000000000000;
    puVar1 = (undefined8 *)((longlong)puVar4 + lVar11 + -0xe0);
    *puVar1 = 0x3ff0000000000000;
    puVar1[1] = 0;
    *(undefined1 *)((longlong)puVar4 + lVar11 + -0xa0) = 0;
    *(undefined8 *)((longlong)puVar4 + lVar11 + -0x50) = 0;
    *(undefined8 *)((longlong)puVar4 + lVar11 + -0x40) = 0;
    *(undefined8 *)((longlong)puVar4 + lVar11 + -0x10) = 0;
    *(undefined8 *)((longlong)puVar4 + lVar11) = 0;
    lVar11 = lVar11 + 0x2d0;
  } while (lVar11 != 0x16ab0);
  *(undefined8 **)(param_1 + 0xaa) = puVar4 + 2;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0x80;
  param_1[0xb1] = 0;
  uVar7 = FUN_14001cc68(0x200,0x10);
  *(undefined8 *)(param_1 + 0xb2) = uVar7;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0x80;
  param_1[0xb9] = 0;
  uVar7 = FUN_14001cc68(0x400,0x10);
  *(undefined8 *)(param_1 + 0xba) = uVar7;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0x80;
  param_1[0xc1] = 0;
  pvVar8 = (void *)FUN_14001cc68(0x1800);
  lVar14 = 0;
  memset(pvVar8,0,0x1800);
  *(void **)(param_1 + 0xc2) = pvVar8;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0x80;
  param_1[0xc9] = 0;
  pvVar8 = (void *)FUN_14001cc68(0x1800);
  memset(pvVar8,0,0x1800);
  *(void **)(param_1 + 0xca) = pvVar8;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0x80;
  param_1[0xd1] = 0;
  uVar7 = FUN_14001cc68(0x400,0x10);
  *(undefined8 *)(param_1 + 0xd2) = uVar7;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0x80;
  param_1[0xd9] = 0;
  lVar11 = FUN_14001cc68(0x1000,0x10);
  do {
    *(undefined ***)(lVar11 + lVar14) = &PTR_LAB_14a1e3a30;
    lVar14 = lVar14 + 0x20;
  } while (lVar14 != 0x1000);
  *(longlong *)(param_1 + 0xda) = lVar11;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0x80;
  param_1[0xe1] = 0;
  lVar11 = FUN_14001cc68(0x1000,0x10);
  lVar14 = 0;
  do {
    *(undefined ***)(lVar11 + lVar14) = &PTR_LAB_14a1e3a60;
    lVar14 = lVar14 + 0x20;
  } while (lVar14 != 0x1000);
  *(longlong *)(param_1 + 0xe2) = lVar11;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0x80;
  param_1[0xe9] = 0;
  lVar11 = FUN_14001cc68(0x3000,0x10);
  lVar14 = 0;
  do {
    *(undefined ***)(lVar11 + lVar14) = &PTR_LAB_14a1e1ab0;
    lVar14 = lVar14 + 0x60;
  } while (lVar14 != 0x3000);
  *(longlong *)(param_1 + 0xea) = lVar11;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0x80;
  param_1[0xf1] = 0;
  uVar7 = FUN_14001cc68(0x400,0x10);
  *(undefined8 *)(param_1 + 0xf2) = uVar7;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0x80;
  param_1[0xf9] = 0;
  lVar14 = FUN_14001cc68(0x15000,0x10);
  lVar9 = 0;
  lVar11 = lVar14;
  do {
    lVar13 = 0;
    do {
      *(undefined8 *)(lVar11 + lVar13) = 0;
      ((undefined8 *)(lVar11 + lVar13))[1] = 0;
      puVar6 = (undefined4 *)(lVar11 + 0x10 + lVar13);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0x3ff00000;
      puVar4 = (undefined8 *)(lVar11 + 0x20 + lVar13);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(lVar11 + 0x30 + lVar13);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(lVar11 + 0x40 + lVar13);
      *puVar4 = 0x3ff0000000000000;
      puVar4[1] = 0x3ff0000000000000;
      puVar4 = (undefined8 *)(lVar11 + 0x50 + lVar13);
      *puVar4 = 0x3ff0000000000000;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(lVar11 + 0x88 + lVar13);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(lVar11 + 0x98 + lVar13);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(lVar11 + 0xa8 + lVar13);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(lVar11 + 0xb8 + lVar13);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)(lVar11 + 200 + lVar13) = 0;
      lVar13 = lVar13 + 0xd0;
    } while (lVar13 != 0x1a0);
    *(undefined4 *)(lVar14 + 0x288 + lVar9) = 0xffffffff;
    lVar9 = lVar9 + 0x2a0;
    lVar11 = lVar11 + 0x2a0;
  } while (lVar9 != 0x15000);
  *(longlong *)(param_1 + 0xfa) = lVar14;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0x80;
  param_1[0x101] = 0;
  uVar7 = FUN_14001cc68(0x1400,0x10);
  *(undefined8 *)(param_1 + 0x102) = uVar7;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0x80;
  param_1[0x109] = 0;
  uVar7 = FUN_14001cc68(0x400,0x10);
  *(undefined8 *)(param_1 + 0x10a) = uVar7;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1417455d6 FUN_1417455d6 body=169 status=ok
// SIG undefined FUN_1417455d6(void)

undefined8 * FUN_1417455d6(undefined8 *param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *_Dst;
  longlong lVar7;
  void *_Src;
  
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_LAB_14a1e27b0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)*(int *)(param_2 + 0x18);
  lVar6 = SUB168(auVar2 * ZEXT816(0x18),0);
  lVar7 = -1;
  if (SUB168(auVar2 * ZEXT816(0x18),8) == 0) {
    lVar7 = lVar6 + (ulonglong)(lVar6 == 0);
  }
  _Dst = (void *)FUN_14001cc68(lVar7,0x10);
  param_1[2] = _Dst;
  iVar1 = *(int *)(param_2 + 0x18);
  *(int *)(param_1 + 3) = iVar1;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  if (param_3 == '\0') {
    _Src = *(void **)(param_2 + 0x10);
  }
  else {
    _Src = (void *)(*(int *)(param_2 + 0x10) + param_2);
  }
  memcpy(_Dst,_Src,(longlong)iVar1 * 0x18);
  return param_1;
}



// FUNCTION 141745680 FUN_141745680 body=82 status=ok
// SIG undefined FUN_141745680(void)

longlong FUN_141745680(longlong param_1,longlong param_2)

{
  FUN_140aca9e8();
  FUN_140acaa38(param_1 + 0x10,param_2 + 0x10);
  FUN_140acaa88(param_1 + 0x20,param_2 + 0x20);
  FUN_140acab28(param_1 + 0x30,param_2 + 0x30);
  FUN_140acaad8(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1417456d2 FUN_1417456d2 body=274 status=ok
// SIG undefined FUN_1417456d2(void)

void FUN_1417456d2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x110;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1417457e6 FUN_1417457e6 body=370 status=ok
// SIG undefined FUN_1417457e6(void)

void FUN_1417457e6(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14174586f;
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
LAB_14174586f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 141745958 FUN_141745958 body=369 status=ok
// SIG undefined FUN_141745958(void)

void FUN_141745958(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1417459dd;
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
LAB_1417459dd:
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



// FUNCTION 141745aca FUN_141745aca body=373 status=ok
// SIG undefined FUN_141745aca(void)

void FUN_141745aca(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141745b53;
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
LAB_141745b53:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 141745c40 FUN_141745c40 body=136 status=ok
// SIG undefined FUN_141745c40(void)

bool FUN_141745c40(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x10);
    for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined4 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x34) = 0;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(undefined4 *)(lVar1 + 0x3c) = 0x3ff00000;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined4 *)(lVar1 + 0x60) = 0;
    *(undefined4 *)(lVar1 + 100) = 0x3ff00000;
    *(undefined4 *)(lVar1 + 0x68) = 0;
    *(undefined4 *)(lVar1 + 0x6c) = 0x3ff00000;
    *(undefined8 *)(lVar1 + 0x70) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    if (lVar2 != 0) {
      FUN_1400020a8();
    }
  }
  return lVar1 != 0;
}



// FUNCTION 141745cc8 FUN_141745cc8 body=48 status=ok
// SIG undefined FUN_141745cc8(void)

void FUN_141745cc8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 141745cf8 FUN_141745cf8 body=48 status=ok
// SIG undefined FUN_141745cf8(void)

void FUN_141745cf8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 141745d28 FUN_141745d28 body=227 status=ok
// SIG undefined FUN_141745d28(void)

void FUN_141745d28(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x520;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x19) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x520)) {
      uVar2 = uVar1 / 0x520 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x520,8);
  }
  return;
}



// FUNCTION 141745e0c FUN_141745e0c body=274 status=ok
// SIG undefined FUN_141745e0c(void)

void FUN_141745e0c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x520;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x520)) {
      uVar5 = uVar4 / 0x520 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x520,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141745f20 FUN_141745f20 body=366 status=ok
// SIG undefined FUN_141745f20(void)

void FUN_141745f20(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_141745fa5;
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
LAB_141745fa5:
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



// FUNCTION 14174608e FUN_14174608e body=321 status=ok
// SIG undefined FUN_14174608e(void)

undefined8 FUN_14174608e(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  longlong lVar5;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
LAB_1417461cc:
    uVar4 = 0;
  }
  else {
    local_68 = *param_2;
    uStack_60 = param_2[1];
    local_58 = *(undefined4 *)(param_2 + 2);
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_50 = *(undefined4 *)(param_2 + 3);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    cVar1 = *(char *)((longlong)param_1 + 0x11);
    lVar5 = 0;
    if (cVar1 == '\x02') {
      FUN_1449413b4(&local_68,&local_80);
      local_78 = local_78 * -0.017453292519943295;
      local_70 = local_70 * 0.017453292519943295;
      *(double *)*param_1 = local_80 * -0.017453292519943295;
      *(double *)(*param_1 + 8) = local_78;
      *(double *)(*param_1 + 0x10) = local_70;
      *(undefined8 *)(*param_1 + 0x18) = uVar2;
      *(undefined8 *)(*param_1 + 0x20) = uVar3;
      lVar5 = *param_1;
      *(undefined8 *)(lVar5 + 0x28) = uVar4;
    }
    else {
      if (cVar1 == '\0') goto LAB_1417461cc;
      if (cVar1 == '\x01') {
        *(undefined8 *)*param_1 = local_68;
        *(undefined8 *)(*param_1 + 8) = uStack_60;
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x10) = local_58;
        *(undefined4 *)(lVar5 + 0x14) = uStack_54;
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x18) = uStack_50;
        *(undefined4 *)(lVar5 + 0x1c) = uStack_4c;
        *(undefined8 *)(*param_1 + 0x20) = uVar2;
        *(undefined8 *)(*param_1 + 0x28) = uVar3;
        lVar5 = *param_1;
        *(undefined8 *)(lVar5 + 0x30) = uVar4;
      }
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417461d0 FUN_1417461d0 body=353 status=ok
// SIG undefined FUN_1417461d0(void)

void FUN_1417461d0(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141746257;
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
LAB_141746257:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141746332 FUN_141746332 body=353 status=ok
// SIG undefined FUN_141746332(void)

void FUN_141746332(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417463b7;
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
LAB_1417463b7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14174649a FUN_14174649a body=354 status=ok
// SIG undefined FUN_14174649a(void)

undefined8 FUN_14174649a(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b8de8) {
    FUN_144b3d300();
    if (DAT_14c9b8de8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14c9b8de0 = 0;
      }
      else {
        DAT_14c9b8de0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer();
    }
  }
  lVar2 = DAT_14c9b8de0;
  if (DAT_14c9b8de0 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar8 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar8 * 4) != 0;
  }
  bVar7 = false;
  if (((param_1[10] & 1) == 0) && (bVar7 = false, 1 < *(uint *)(param_1 + 0xc))) {
    bVar7 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf];
  }
  if ((bool)(bVar9 | bVar7)) {
    uVar5 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1417465fc FUN_1417465fc body=931 status=ok
// SIG undefined FUN_1417465fc(void)

undefined8 FUN_1417465fc(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9050) && (FUN_144b3d300(&DAT_14c9b9050), DAT_14c9b9050 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9b9048 = 0;
    }
    else {
      DAT_14c9b9048 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9b9050);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9060) && (FUN_144b3d300(&DAT_14c9b9060), DAT_14c9b9060 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9b9058 = 0;
    }
    else {
      DAT_14c9b9058 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9b9060);
  }
  lVar4 = DAT_14c9b9058;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9b9058 == 0) {
    bVar10 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    bVar10 = *(int *)(lVar4 + uVar8 * 4) != 0;
  }
  lVar4 = DAT_14c9b9048;
  if (DAT_14c9b9048 == 0) {
    bVar10 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    bVar10 = (bool)(*(int *)(lVar4 + uVar8 * 4) != 0 | bVar10);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar4 + uVar8 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar10) {
      uVar1 = *param_1;
      puVar9 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar9 = DAT_14ca96af8;
      }
      if (((uint)puVar9[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                  1 < *(uint *)(param_1 + 0xc) && (param_1[10] & 1) == 0);
}



// FUNCTION 1417469a0 FUN_1417469a0 body=705 status=ok
// SIG undefined FUN_1417469a0(void)

undefined8 FUN_1417469a0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b90a0) && (FUN_144b3d300(&DAT_14c9b90a0), DAT_14c9b90a0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9b9098 = 0;
    }
    else {
      DAT_14c9b9098 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9b90a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b90b0) && (FUN_144b3d300(&DAT_14c9b90b0), DAT_14c9b90b0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9b90a8 = 0;
    }
    else {
      DAT_14c9b90a8 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9b90b0);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9b90a8 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9b9098 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar4 + uVar8 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                  1 < *(uint *)(param_1 + 0xc) && (param_1[10] & 1) == 0);
}



// FUNCTION 141746c62 FUN_141746c62 body=976 status=ok
// SIG undefined FUN_141746c62(void)

uint FUN_141746c62(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b90f0) && (FUN_144b3d300(&DAT_14c9b90f0), DAT_14c9b90f0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b90e8 = 0;
    }
    else {
      DAT_14c9b90e8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b90f0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9100) && (FUN_144b3d300(&DAT_14c9b9100), DAT_14c9b9100 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b90f8 = 0;
    }
    else {
      DAT_14c9b90f8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9100);
  }
  lVar4 = DAT_14c9b90f8;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9b90f8 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9b90e8;
  if (DAT_14c9b90e8 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    cVar5 = FUN_140052d29();
    if (((cVar5 == '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 141747032 FUN_141747032 body=759 status=ok
// SIG undefined FUN_141747032(void)

uint FUN_141747032(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9140) && (FUN_144b3d300(&DAT_14c9b9140), DAT_14c9b9140 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9138 = 0;
    }
    else {
      DAT_14c9b9138 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9140);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9150) && (FUN_144b3d300(&DAT_14c9b9150), DAT_14c9b9150 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9148 = 0;
    }
    else {
      DAT_14c9b9148 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9150);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9b9148 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9b9138 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    cVar5 = FUN_140052d29();
    if (((cVar5 == '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174732a FUN_14174732a body=956 status=ok
// SIG undefined FUN_14174732a(void)

undefined8 FUN_14174732a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9190) && (FUN_144b3d300(&DAT_14c9b9190), DAT_14c9b9190 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9188 = 0;
    }
    else {
      DAT_14c9b9188 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9190);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b91a0) && (FUN_144b3d300(&DAT_14c9b91a0), DAT_14c9b91a0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9198 = 0;
    }
    else {
      DAT_14c9b9198 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b91a0);
  }
  lVar4 = DAT_14c9b9198;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9b9198 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9b9188;
  if (DAT_14c9b9188 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                  1 < *(uint *)(param_1 + 0xc) && (param_1[10] & 1) == 0);
}



// FUNCTION 1417476e6 FUN_1417476e6 body=728 status=ok
// SIG undefined FUN_1417476e6(void)

undefined8 FUN_1417476e6(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b91e0) && (FUN_144b3d300(&DAT_14c9b91e0), DAT_14c9b91e0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b91d8 = 0;
    }
    else {
      DAT_14c9b91d8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b91e0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b91f0) && (FUN_144b3d300(&DAT_14c9b91f0), DAT_14c9b91f0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b91e8 = 0;
    }
    else {
      DAT_14c9b91e8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b91f0);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9b91e8 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9b91d8 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                  1 < *(uint *)(param_1 + 0xc) && (param_1[10] & 1) == 0);
}



// FUNCTION 1417479be FUN_1417479be body=1002 status=ok
// SIG undefined FUN_1417479be(void)

uint FUN_1417479be(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9230) && (FUN_144b3d300(&DAT_14c9b9230), DAT_14c9b9230 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9228 = 0;
    }
    else {
      DAT_14c9b9228 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9230);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9240) && (FUN_144b3d300(&DAT_14c9b9240), DAT_14c9b9240 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9238 = 0;
    }
    else {
      DAT_14c9b9238 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9240);
  }
  lVar4 = DAT_14c9b9238;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9b9238 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9b9228;
  if (DAT_14c9b9228 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    cVar5 = FUN_140052d29();
    if (((cVar5 == '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 141747da8 FUN_141747da8 body=782 status=ok
// SIG undefined FUN_141747da8(void)

uint FUN_141747da8(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9280) && (FUN_144b3d300(&DAT_14c9b9280), DAT_14c9b9280 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9278 = 0;
    }
    else {
      DAT_14c9b9278 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9280);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9290) && (FUN_144b3d300(&DAT_14c9b9290), DAT_14c9b9290 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9288 = 0;
    }
    else {
      DAT_14c9b9288 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9290);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9b9288 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9b9278 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    cVar5 = FUN_140052d29();
    if (((cVar5 == '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 1417480b6 FUN_1417480b6 body=790 status=ok
// SIG undefined FUN_1417480b6(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1417480b6(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9738) && (FUN_144b3d300(&DAT_14c9b9738), DAT_14c9b9738 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9730 = 0;
    }
    else {
      DAT_14c9b9730 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9738);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9748) && (FUN_144b3d300(&DAT_14c9b9748), DAT_14c9b9748 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9740 = 0;
    }
    else {
      DAT_14c9b9740 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9748);
  }
  lVar5 = DAT_14c9b9740;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9b9740 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar5 + uVar9 * 4) != 0;
  }
  lVar5 = DAT_14c9b9730;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9b9730 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_1417481d3;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_1417481d3;
    if (*(int *)(lVar5 + uVar9 * 4) == 0 && !bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_1417481d3:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x24) >> 8),
                    1 < *(uint *)(param_1 + 0xc) && (param_1[10] & 1) == 0);
  }
  return 0;
}



// FUNCTION 1417483cc FUN_1417483cc body=529 status=ok
// SIG undefined FUN_1417483cc(void)

undefined8 FUN_1417483cc(ushort *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b9788) {
    FUN_144b3d300(&DAT_14c9b9788);
    if (DAT_14c9b9788 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9b9780 = 0;
      }
      else {
        DAT_14c9b9780 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9b9788);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b9798) {
    FUN_144b3d300(&DAT_14c9b9798);
    if (DAT_14c9b9798 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9b9790 = 0;
      }
      else {
        DAT_14c9b9790 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9b9798);
    }
  }
  if (DAT_14c9b9790 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9b9780 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x24) >> 8),
                     1 < *(uint *)(param_1 + 0xc) && (param_1[10] & 1) == 0);
  }
  return uVar2;
}



// FUNCTION 1417485de FUN_1417485de body=801 status=ok
// SIG undefined FUN_1417485de(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1417485de(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b97d8) && (FUN_144b3d300(&DAT_14c9b97d8), DAT_14c9b97d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b97d0 = 0;
    }
    else {
      DAT_14c9b97d0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b97d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b97e8) && (FUN_144b3d300(&DAT_14c9b97e8), DAT_14c9b97e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b97e0 = 0;
    }
    else {
      DAT_14c9b97e0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b97e8);
  }
  lVar5 = DAT_14c9b97e0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9b97e0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar5 + uVar9 * 4) != 0;
  }
  lVar5 = DAT_14c9b97d0;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9b97d0 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_1417486ff;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_1417486ff;
    if (*(int *)(lVar5 + uVar9 * 4) == 0 && !bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_1417486ff:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x24) >> 8),
                    1 < *(uint *)(param_1 + 0xc) && (param_1[10] & 1) == 0);
  }
  return 0;
}



// FUNCTION 141748900 FUN_141748900 body=543 status=ok
// SIG undefined FUN_141748900(void)

undefined8 FUN_141748900(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b9828) {
    FUN_144b3d300(&DAT_14c9b9828);
    if (DAT_14c9b9828 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9b9820 = 0;
      }
      else {
        DAT_14c9b9820 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9b9828);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b9838) {
    FUN_144b3d300(&DAT_14c9b9838);
    if (DAT_14c9b9838 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9b9830 = 0;
      }
      else {
        DAT_14c9b9830 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9b9838);
    }
  }
  if (DAT_14c9b9830 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9b9820 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x24) >> 8),
                     1 < *(uint *)(param_1 + 0xc) && (param_1[10] & 1) == 0);
  }
  return uVar3;
}



// FUNCTION 141748b20 FUN_141748b20 body=397 status=ok
// SIG undefined FUN_141748b20(void)

undefined8 FUN_141748b20(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b9a08) {
    FUN_144b3d300();
    if (DAT_14c9b9a08 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar5 == (longlong *)0x0) {
        DAT_14c9b9a00 = 0;
      }
      else {
        DAT_14c9b9a00 = (**(code **)(*plVar5 + 0x68))(plVar5);
      }
      _Init_thread_footer();
    }
  }
  lVar2 = DAT_14c9b9a00;
  if (DAT_14c9b9a00 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar8 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar8 * 4) != 0;
  }
  bVar7 = false;
  if (((param_1[10] & 1) == 0) && (1 < *(uint *)(param_1 + 0xc))) {
    if (DAT_14c760e18 == '\x01') {
      bVar7 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf];
    }
    else {
      bVar7 = false;
    }
  }
  if ((bool)(bVar9 | bVar7)) {
    uVar6 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 141748cae FUN_141748cae body=948 status=ok
// SIG undefined FUN_141748cae(void)

undefined8 FUN_141748cae(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9ca0) && (FUN_144b3d300(&DAT_14c9b9ca0), DAT_14c9b9ca0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9b9c98 = 0;
    }
    else {
      DAT_14c9b9c98 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9b9ca0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9cb0) && (FUN_144b3d300(&DAT_14c9b9cb0), DAT_14c9b9cb0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9b9ca8 = 0;
    }
    else {
      DAT_14c9b9ca8 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9b9cb0);
  }
  lVar4 = DAT_14c9b9ca8;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9b9ca8 == 0) {
    bVar10 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    bVar10 = *(int *)(lVar4 + uVar8 * 4) != 0;
  }
  lVar4 = DAT_14c9b9c98;
  if (DAT_14c9b9c98 == 0) {
    bVar10 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    bVar10 = (bool)(*(int *)(lVar4 + uVar8 * 4) != 0 | bVar10);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar4 + uVar8 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar10) {
      uVar1 = *param_1;
      puVar9 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar9 = DAT_14ca96af8;
      }
      if (((uint)puVar9[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141749062 FUN_141749062 body=726 status=ok
// SIG undefined FUN_141749062(void)

undefined8 FUN_141749062(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9cf0) && (FUN_144b3d300(&DAT_14c9b9cf0), DAT_14c9b9cf0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9b9ce8 = 0;
    }
    else {
      DAT_14c9b9ce8 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9b9cf0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9d00) && (FUN_144b3d300(&DAT_14c9b9d00), DAT_14c9b9d00 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9b9cf8 = 0;
    }
    else {
      DAT_14c9b9cf8 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9b9d00);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9b9cf8 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9b9ce8 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar4 + uVar8 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141749338 FUN_141749338 body=985 status=ok
// SIG undefined FUN_141749338(void)

uint FUN_141749338(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9d40) && (FUN_144b3d300(&DAT_14c9b9d40), DAT_14c9b9d40 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9d38 = 0;
    }
    else {
      DAT_14c9b9d38 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9d40);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9d50) && (FUN_144b3d300(&DAT_14c9b9d50), DAT_14c9b9d50 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9d48 = 0;
    }
    else {
      DAT_14c9b9d48 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9d50);
  }
  lVar4 = DAT_14c9b9d48;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9b9d48 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9b9d38;
  if (DAT_14c9b9d38 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (((DAT_14c760e18 == '\x01') && (cVar5 = FUN_140052d29(), cVar5 == '\0')) &&
       (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
        ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 141749712 FUN_141749712 body=772 status=ok
// SIG undefined FUN_141749712(void)

uint FUN_141749712(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9d90) && (FUN_144b3d300(&DAT_14c9b9d90), DAT_14c9b9d90 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9d88 = 0;
    }
    else {
      DAT_14c9b9d88 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9d90);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9da0) && (FUN_144b3d300(&DAT_14c9b9da0), DAT_14c9b9da0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9d98 = 0;
    }
    else {
      DAT_14c9b9d98 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9da0);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9b9d98 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9b9d88 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if ((((DAT_14c760e18 == '\x01') && (cVar5 = FUN_140052d29(), cVar5 == '\0')) &&
        ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 141749a16 FUN_141749a16 body=965 status=ok
// SIG undefined FUN_141749a16(void)

undefined8 FUN_141749a16(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9de0) && (FUN_144b3d300(&DAT_14c9b9de0), DAT_14c9b9de0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9dd8 = 0;
    }
    else {
      DAT_14c9b9dd8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9de0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9df0) && (FUN_144b3d300(&DAT_14c9b9df0), DAT_14c9b9df0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9de8 = 0;
    }
    else {
      DAT_14c9b9de8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9df0);
  }
  lVar4 = DAT_14c9b9de8;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9b9de8 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9b9dd8;
  if (DAT_14c9b9dd8 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141749ddc FUN_141749ddc body=749 status=ok
// SIG undefined FUN_141749ddc(void)

undefined8 FUN_141749ddc(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9e30) && (FUN_144b3d300(&DAT_14c9b9e30), DAT_14c9b9e30 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9e28 = 0;
    }
    else {
      DAT_14c9b9e28 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9e30);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9e40) && (FUN_144b3d300(&DAT_14c9b9e40), DAT_14c9b9e40 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9e38 = 0;
    }
    else {
      DAT_14c9b9e38 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9e40);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9b9e38 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9b9e28 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174a0ca FUN_14174a0ca body=1014 status=ok
// SIG undefined FUN_14174a0ca(void)

uint FUN_14174a0ca(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9e80) && (FUN_144b3d300(&DAT_14c9b9e80), DAT_14c9b9e80 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9e78 = 0;
    }
    else {
      DAT_14c9b9e78 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9e80);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9e90) && (FUN_144b3d300(&DAT_14c9b9e90), DAT_14c9b9e90 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9e88 = 0;
    }
    else {
      DAT_14c9b9e88 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9e90);
  }
  lVar4 = DAT_14c9b9e88;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9b9e88 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9b9e78;
  if (DAT_14c9b9e78 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (((DAT_14c760e18 == '\x01') && (cVar5 = FUN_140052d29(), cVar5 == '\0')) &&
       (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
        ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174a4c0 FUN_14174a4c0 body=795 status=ok
// SIG undefined FUN_14174a4c0(void)

uint FUN_14174a4c0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9ed0) && (FUN_144b3d300(&DAT_14c9b9ed0), DAT_14c9b9ed0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9ec8 = 0;
    }
    else {
      DAT_14c9b9ec8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9ed0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b9ee0) && (FUN_144b3d300(&DAT_14c9b9ee0), DAT_14c9b9ee0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9b9ed8 = 0;
    }
    else {
      DAT_14c9b9ed8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9b9ee0);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9b9ed8 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9b9ec8 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if ((((DAT_14c760e18 == '\x01') && (cVar5 = FUN_140052d29(), cVar5 == '\0')) &&
        ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174a7dc FUN_14174a7dc body=799 status=ok
// SIG undefined FUN_14174a7dc(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14174a7dc(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba3b8) && (FUN_144b3d300(&DAT_14c9ba3b8), DAT_14c9ba3b8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9ba3b0 = 0;
    }
    else {
      DAT_14c9ba3b0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9ba3b8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba3c8) && (FUN_144b3d300(&DAT_14c9ba3c8), DAT_14c9ba3c8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9ba3c0 = 0;
    }
    else {
      DAT_14c9ba3c0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9ba3c8);
  }
  lVar5 = DAT_14c9ba3c0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9ba3c0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar5 + uVar9 * 4) != 0;
  }
  lVar5 = DAT_14c9ba3b0;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9ba3b0 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174a8f9;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174a8f9;
    if (*(int *)(lVar5 + uVar9 * 4) == 0 && !bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14174a8f9:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174aafc FUN_14174aafc body=538 status=ok
// SIG undefined FUN_14174aafc(void)

undefined8 FUN_14174aafc(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba408) && (FUN_144b3d300(&DAT_14c9ba408), DAT_14c9ba408 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14c9ba400 = 0;
    }
    else {
      DAT_14c9ba400 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14c9ba408);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba418) && (FUN_144b3d300(&DAT_14c9ba418), DAT_14c9ba418 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14c9ba410 = 0;
    }
    else {
      DAT_14c9ba410 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14c9ba418);
  }
  if ((((DAT_14c9ba410 != 0) &&
       (iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar1 != 0x40000002)) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9ba400 != 0) &&
      (iVar1 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar1 != 0x40000002)) && ((iVar1 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174ad16 FUN_14174ad16 body=822 status=ok
// SIG undefined FUN_14174ad16(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14174ad16(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba458) && (FUN_144b3d300(&DAT_14c9ba458), DAT_14c9ba458 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9ba450 = 0;
    }
    else {
      DAT_14c9ba450 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9ba458);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba468) && (FUN_144b3d300(&DAT_14c9ba468), DAT_14c9ba468 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9ba460 = 0;
    }
    else {
      DAT_14c9ba460 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9ba468);
  }
  lVar5 = DAT_14c9ba460;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9ba460 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar5 + uVar9 * 4) != 0;
  }
  lVar5 = DAT_14c9ba450;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9ba450 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174ae37;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174ae37;
    if (*(int *)(lVar5 + uVar9 * 4) == 0 && !bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14174ae37:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174b04c FUN_14174b04c body=571 status=ok
// SIG undefined FUN_14174b04c(void)

undefined8 FUN_14174b04c(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba4a8) && (FUN_144b3d300(&DAT_14c9ba4a8), DAT_14c9ba4a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14c9ba4a0 = 0;
    }
    else {
      DAT_14c9ba4a0 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14c9ba4a8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba4b8) && (FUN_144b3d300(&DAT_14c9ba4b8), DAT_14c9ba4b8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14c9ba4b0 = 0;
    }
    else {
      DAT_14c9ba4b0 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14c9ba4b8);
  }
  if ((((DAT_14c9ba4b0 != 0) &&
       (iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar1 != 0x40000002)) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9ba4a0 != 0) &&
      (iVar1 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar1 != 0x40000002)) && ((iVar1 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174b288 FUN_14174b288 body=397 status=ok
// SIG undefined FUN_14174b288(void)

undefined8 FUN_14174b288(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ba688) {
    FUN_144b3d300();
    if (DAT_14c9ba688 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar5 == (longlong *)0x0) {
        DAT_14c9ba680 = 0;
      }
      else {
        DAT_14c9ba680 = (**(code **)(*plVar5 + 0x68))(plVar5);
      }
      _Init_thread_footer();
    }
  }
  lVar2 = DAT_14c9ba680;
  if (DAT_14c9ba680 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar8 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar8 * 4) != 0;
  }
  bVar7 = false;
  if (((param_1[10] & 1) == 0) && (1 < *(uint *)(param_1 + 0xc))) {
    if (DAT_14c760e18 == '\x01') {
      bVar7 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf];
    }
    else {
      bVar7 = false;
    }
  }
  if ((bool)(bVar9 | bVar7)) {
    uVar6 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 14174b416 FUN_14174b416 body=948 status=ok
// SIG undefined FUN_14174b416(void)

undefined8 FUN_14174b416(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba920) && (FUN_144b3d300(&DAT_14c9ba920), DAT_14c9ba920 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9ba918 = 0;
    }
    else {
      DAT_14c9ba918 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9ba920);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba930) && (FUN_144b3d300(&DAT_14c9ba930), DAT_14c9ba930 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9ba928 = 0;
    }
    else {
      DAT_14c9ba928 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9ba930);
  }
  lVar4 = DAT_14c9ba928;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9ba928 == 0) {
    bVar10 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    bVar10 = *(int *)(lVar4 + uVar8 * 4) != 0;
  }
  lVar4 = DAT_14c9ba918;
  if (DAT_14c9ba918 == 0) {
    bVar10 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    bVar10 = (bool)(*(int *)(lVar4 + uVar8 * 4) != 0 | bVar10);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar4 + uVar8 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar10) {
      uVar1 = *param_1;
      puVar9 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar9 = DAT_14ca96af8;
      }
      if (((uint)puVar9[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174b7ca FUN_14174b7ca body=726 status=ok
// SIG undefined FUN_14174b7ca(void)

undefined8 FUN_14174b7ca(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba970) && (FUN_144b3d300(&DAT_14c9ba970), DAT_14c9ba970 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9ba968 = 0;
    }
    else {
      DAT_14c9ba968 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9ba970);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba980) && (FUN_144b3d300(&DAT_14c9ba980), DAT_14c9ba980 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9ba978 = 0;
    }
    else {
      DAT_14c9ba978 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9ba980);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9ba978 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9ba968 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar8 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar4 + uVar8 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174baa0 FUN_14174baa0 body=985 status=ok
// SIG undefined FUN_14174baa0(void)

uint FUN_14174baa0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba9c0) && (FUN_144b3d300(&DAT_14c9ba9c0), DAT_14c9ba9c0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9ba9b8 = 0;
    }
    else {
      DAT_14c9ba9b8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9ba9c0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ba9d0) && (FUN_144b3d300(&DAT_14c9ba9d0), DAT_14c9ba9d0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9ba9c8 = 0;
    }
    else {
      DAT_14c9ba9c8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9ba9d0);
  }
  lVar4 = DAT_14c9ba9c8;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9ba9c8 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9ba9b8;
  if (DAT_14c9ba9b8 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (((DAT_14c760e18 == '\x01') && (cVar5 = FUN_140052d29(), cVar5 == '\0')) &&
       (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
        ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174be7a FUN_14174be7a body=772 status=ok
// SIG undefined FUN_14174be7a(void)

uint FUN_14174be7a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9baa10) && (FUN_144b3d300(&DAT_14c9baa10), DAT_14c9baa10 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9baa08 = 0;
    }
    else {
      DAT_14c9baa08 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9baa10);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9baa20) && (FUN_144b3d300(&DAT_14c9baa20), DAT_14c9baa20 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9baa18 = 0;
    }
    else {
      DAT_14c9baa18 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9baa20);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9baa18 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9baa08 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if ((((DAT_14c760e18 == '\x01') && (cVar5 = FUN_140052d29(), cVar5 == '\0')) &&
        ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174c17e FUN_14174c17e body=965 status=ok
// SIG undefined FUN_14174c17e(void)

undefined8 FUN_14174c17e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9baa60) && (FUN_144b3d300(&DAT_14c9baa60), DAT_14c9baa60 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9baa58 = 0;
    }
    else {
      DAT_14c9baa58 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9baa60);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9baa70) && (FUN_144b3d300(&DAT_14c9baa70), DAT_14c9baa70 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9baa68 = 0;
    }
    else {
      DAT_14c9baa68 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9baa70);
  }
  lVar4 = DAT_14c9baa68;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9baa68 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9baa58;
  if (DAT_14c9baa58 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174c544 FUN_14174c544 body=749 status=ok
// SIG undefined FUN_14174c544(void)

undefined8 FUN_14174c544(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9baab0) && (FUN_144b3d300(&DAT_14c9baab0), DAT_14c9baab0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9baaa8 = 0;
    }
    else {
      DAT_14c9baaa8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9baab0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9baac0) && (FUN_144b3d300(&DAT_14c9baac0), DAT_14c9baac0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9baab8 = 0;
    }
    else {
      DAT_14c9baab8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9baac0);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9baab8 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9baaa8 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174c832 FUN_14174c832 body=1014 status=ok
// SIG undefined FUN_14174c832(void)

uint FUN_14174c832(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bab00) && (FUN_144b3d300(&DAT_14c9bab00), DAT_14c9bab00 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9baaf8 = 0;
    }
    else {
      DAT_14c9baaf8 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bab00);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bab10) && (FUN_144b3d300(&DAT_14c9bab10), DAT_14c9bab10 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bab08 = 0;
    }
    else {
      DAT_14c9bab08 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bab10);
  }
  lVar4 = DAT_14c9bab08;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bab08 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9baaf8;
  if (DAT_14c9baaf8 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (((DAT_14c760e18 == '\x01') && (cVar5 = FUN_140052d29(), cVar5 == '\0')) &&
       (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
        ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174cc28 FUN_14174cc28 body=795 status=ok
// SIG undefined FUN_14174cc28(void)

uint FUN_14174cc28(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bab50) && (FUN_144b3d300(&DAT_14c9bab50), DAT_14c9bab50 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bab48 = 0;
    }
    else {
      DAT_14c9bab48 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bab50);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bab60) && (FUN_144b3d300(&DAT_14c9bab60), DAT_14c9bab60 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bab58 = 0;
    }
    else {
      DAT_14c9bab58 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bab60);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bab58 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bab48 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if ((((DAT_14c760e18 == '\x01') && (cVar5 = FUN_140052d29(), cVar5 == '\0')) &&
        ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174cf44 FUN_14174cf44 body=799 status=ok
// SIG undefined FUN_14174cf44(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14174cf44(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb038) && (FUN_144b3d300(&DAT_14c9bb038), DAT_14c9bb038 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb030 = 0;
    }
    else {
      DAT_14c9bb030 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb038);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb048) && (FUN_144b3d300(&DAT_14c9bb048), DAT_14c9bb048 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb040 = 0;
    }
    else {
      DAT_14c9bb040 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb048);
  }
  lVar5 = DAT_14c9bb040;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bb040 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar5 + uVar9 * 4) != 0;
  }
  lVar5 = DAT_14c9bb030;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bb030 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174d061;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174d061;
    if (*(int *)(lVar5 + uVar9 * 4) == 0 && !bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14174d061:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174d264 FUN_14174d264 body=538 status=ok
// SIG undefined FUN_14174d264(void)

undefined8 FUN_14174d264(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb088) && (FUN_144b3d300(&DAT_14c9bb088), DAT_14c9bb088 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14c9bb080 = 0;
    }
    else {
      DAT_14c9bb080 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14c9bb088);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb098) && (FUN_144b3d300(&DAT_14c9bb098), DAT_14c9bb098 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14c9bb090 = 0;
    }
    else {
      DAT_14c9bb090 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14c9bb098);
  }
  if ((((DAT_14c9bb090 != 0) &&
       (iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar1 != 0x40000002)) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bb080 != 0) &&
      (iVar1 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar1 != 0x40000002)) && ((iVar1 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174d47e FUN_14174d47e body=822 status=ok
// SIG undefined FUN_14174d47e(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14174d47e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb0d8) && (FUN_144b3d300(&DAT_14c9bb0d8), DAT_14c9bb0d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb0d0 = 0;
    }
    else {
      DAT_14c9bb0d0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb0d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb0e8) && (FUN_144b3d300(&DAT_14c9bb0e8), DAT_14c9bb0e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb0e0 = 0;
    }
    else {
      DAT_14c9bb0e0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb0e8);
  }
  lVar5 = DAT_14c9bb0e0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bb0e0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar5 + uVar9 * 4) != 0;
  }
  lVar5 = DAT_14c9bb0d0;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bb0d0 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174d59f;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174d59f;
    if (*(int *)(lVar5 + uVar9 * 4) == 0 && !bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14174d59f:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174d7b4 FUN_14174d7b4 body=571 status=ok
// SIG undefined FUN_14174d7b4(void)

undefined8 FUN_14174d7b4(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb128) && (FUN_144b3d300(&DAT_14c9bb128), DAT_14c9bb128 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14c9bb120 = 0;
    }
    else {
      DAT_14c9bb120 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14c9bb128);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb138) && (FUN_144b3d300(&DAT_14c9bb138), DAT_14c9bb138 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14c9bb130 = 0;
    }
    else {
      DAT_14c9bb130 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14c9bb138);
  }
  if ((((DAT_14c9bb130 != 0) &&
       (iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar1 != 0x40000002)) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bb120 != 0) &&
      (iVar1 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar1 != 0x40000002)) && ((iVar1 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
    if (DAT_14c760e18 == '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14174d9f0 FUN_14174d9f0 body=935 status=ok
// SIG undefined FUN_14174d9f0(void)

undefined8 FUN_14174d9f0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb4d8) && (FUN_144b3d300(&DAT_14c9bb4d8), DAT_14c9bb4d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb4d0 = 0;
    }
    else {
      DAT_14c9bb4d0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb4d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb4e8) && (FUN_144b3d300(&DAT_14c9bb4e8), DAT_14c9bb4e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb4e0 = 0;
    }
    else {
      DAT_14c9bb4e0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb4e8);
  }
  lVar4 = DAT_14c9bb4e0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bb4e0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bb4d0;
  if (DAT_14c9bb4d0 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar7 = FUN_14027015e(0,param_1);
  return uVar7;
}



// FUNCTION 14174dd98 FUN_14174dd98 body=703 status=ok
// SIG undefined FUN_14174dd98(void)

undefined8 FUN_14174dd98(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb528) && (FUN_144b3d300(&DAT_14c9bb528), DAT_14c9bb528 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bb520 = 0;
    }
    else {
      DAT_14c9bb520 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bb528);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb538) && (FUN_144b3d300(&DAT_14c9bb538), DAT_14c9bb538 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bb530 = 0;
    }
    else {
      DAT_14c9bb530 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bb538);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bb530 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bb520 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(0,param_1);
  return uVar8;
}



// FUNCTION 14174e058 FUN_14174e058 body=987 status=ok
// SIG undefined FUN_14174e058(void)

uint FUN_14174e058(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb578) && (FUN_144b3d300(&DAT_14c9bb578), DAT_14c9bb578 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb570 = 0;
    }
    else {
      DAT_14c9bb570 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb578);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb588) && (FUN_144b3d300(&DAT_14c9bb588), DAT_14c9bb588 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb580 = 0;
    }
    else {
      DAT_14c9bb580 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb588);
  }
  lVar4 = DAT_14c9bb580;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bb580 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bb570;
  if (DAT_14c9bb570 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    cVar5 = FUN_14027015e(0,param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    cVar5 = FUN_140052d29(*param_1);
    if (((cVar5 == '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174e434 FUN_14174e434 body=746 status=ok
// SIG undefined FUN_14174e434(void)

uint FUN_14174e434(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb5c8) && (FUN_144b3d300(&DAT_14c9bb5c8), DAT_14c9bb5c8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb5c0 = 0;
    }
    else {
      DAT_14c9bb5c0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb5c8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb5d8) && (FUN_144b3d300(&DAT_14c9bb5d8), DAT_14c9bb5d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb5d0 = 0;
    }
    else {
      DAT_14c9bb5d0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb5d8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bb5d0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bb5c0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    cVar5 = FUN_14027015e(0,param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    cVar5 = FUN_140052d29(*param_1);
    if (((cVar5 == '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174e71e FUN_14174e71e body=960 status=ok
// SIG undefined FUN_14174e71e(void)

undefined8 FUN_14174e71e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb618) && (FUN_144b3d300(&DAT_14c9bb618), DAT_14c9bb618 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bb610 = 0;
    }
    else {
      DAT_14c9bb610 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bb618);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb628) && (FUN_144b3d300(&DAT_14c9bb628), DAT_14c9bb628 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bb620 = 0;
    }
    else {
      DAT_14c9bb620 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bb628);
  }
  lVar4 = DAT_14c9bb620;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bb620 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar4 + uVar10 * 4) != 0;
  }
  lVar4 = DAT_14c9bb610;
  if (DAT_14c9bb610 == 0) {
    bVar12 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = (bool)(*(int *)(lVar4 + uVar10 * 4) != 0 | bVar12);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(0,param_1);
  return uVar8;
}



// FUNCTION 14174eade FUN_14174eade body=726 status=ok
// SIG undefined FUN_14174eade(void)

undefined8 FUN_14174eade(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb668) && (FUN_144b3d300(&DAT_14c9bb668), DAT_14c9bb668 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb660 = 0;
    }
    else {
      DAT_14c9bb660 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb668);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb678) && (FUN_144b3d300(&DAT_14c9bb678), DAT_14c9bb678 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb670 = 0;
    }
    else {
      DAT_14c9bb670 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb678);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bb670 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bb660 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar9 = FUN_14027015e(0,param_1);
  return uVar9;
}



// FUNCTION 14174edb4 FUN_14174edb4 body=1015 status=ok
// SIG undefined FUN_14174edb4(void)

uint FUN_14174edb4(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb6b8) && (FUN_144b3d300(&DAT_14c9bb6b8), DAT_14c9bb6b8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb6b0 = 0;
    }
    else {
      DAT_14c9bb6b0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb6b8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb6c8) && (FUN_144b3d300(&DAT_14c9bb6c8), DAT_14c9bb6c8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb6c0 = 0;
    }
    else {
      DAT_14c9bb6c0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb6c8);
  }
  lVar4 = DAT_14c9bb6c0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bb6c0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bb6b0;
  if (DAT_14c9bb6b0 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    cVar5 = FUN_14027015e(0,param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    cVar5 = FUN_140052d29(*param_1);
    if (((cVar5 == '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174f1ac FUN_14174f1ac body=771 status=ok
// SIG undefined FUN_14174f1ac(void)

uint FUN_14174f1ac(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb708) && (FUN_144b3d300(&DAT_14c9bb708), DAT_14c9bb708 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb700 = 0;
    }
    else {
      DAT_14c9bb700 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb708);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bb718) && (FUN_144b3d300(&DAT_14c9bb718), DAT_14c9bb718 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bb710 = 0;
    }
    else {
      DAT_14c9bb710 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bb718);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bb710 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bb700 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    cVar5 = FUN_14027015e(0,param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    cVar5 = FUN_140052d29(*param_1);
    if (((cVar5 == '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0)) &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)) {
      return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
    }
  }
  return 0;
}



// FUNCTION 14174f4b0 FUN_14174f4b0 body=794 status=ok
// SIG undefined FUN_14174f4b0(void)

undefined8 FUN_14174f4b0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bbb28) && (FUN_144b3d300(&DAT_14c9bbb28), DAT_14c9bbb28 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bbb20 = 0;
    }
    else {
      DAT_14c9bbb20 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bbb28);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bbb38) && (FUN_144b3d300(&DAT_14c9bbb38), DAT_14c9bbb38 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bbb30 = 0;
    }
    else {
      DAT_14c9bbb30 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bbb38);
  }
  lVar5 = DAT_14c9bbb30;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bbb30 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bbb20;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bbb20 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174f5cd;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174f5cd;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14174f5cd:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar8 = FUN_14027015e(0,param_1);
    return uVar8;
  }
  return 0;
}



// FUNCTION 14174f7ca FUN_14174f7ca body=526 status=ok
// SIG undefined FUN_14174f7ca(void)

undefined8 FUN_14174f7ca(ushort *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bbb78) {
    FUN_144b3d300(&DAT_14c9bbb78);
    if (DAT_14c9bbb78 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bbb70 = 0;
      }
      else {
        DAT_14c9bbb70 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bbb78);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bbb88) {
    FUN_144b3d300(&DAT_14c9bbb88);
    if (DAT_14c9bbb88 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bbb80 = 0;
      }
      else {
        DAT_14c9bbb80 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bbb88);
    }
  }
  if (DAT_14c9bbb80 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bbb70 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar2 = FUN_14027015e(0,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14174f9d8 FUN_14174f9d8 body=802 status=ok
// SIG undefined FUN_14174f9d8(void)

undefined8 FUN_14174f9d8(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bbbc8) && (FUN_144b3d300(&DAT_14c9bbbc8), DAT_14c9bbbc8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bbbc0 = 0;
    }
    else {
      DAT_14c9bbbc0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bbbc8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bbbd8) && (FUN_144b3d300(&DAT_14c9bbbd8), DAT_14c9bbbd8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bbbd0 = 0;
    }
    else {
      DAT_14c9bbbd0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bbbd8);
  }
  lVar5 = DAT_14c9bbbd0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bbbd0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bbbc0;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bbbc0 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174faf9;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14174faf9;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14174faf9:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar9 = FUN_14027015e(0,param_1);
    return uVar9;
  }
  return 0;
}



// FUNCTION 14174fcfa FUN_14174fcfa body=537 status=ok
// SIG undefined FUN_14174fcfa(void)

undefined8 FUN_14174fcfa(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bbc18) {
    FUN_144b3d300(&DAT_14c9bbc18);
    if (DAT_14c9bbc18 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bbc10 = 0;
      }
      else {
        DAT_14c9bbc10 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bbc18);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bbc28) {
    FUN_144b3d300(&DAT_14c9bbc28);
    if (DAT_14c9bbc28 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bbc20 = 0;
      }
      else {
        DAT_14c9bbc20 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bbc28);
    }
  }
  if (DAT_14c9bbc20 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bbc10 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar3 = FUN_14027015e(0,param_1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14174ff14 FUN_14174ff14 body=337 status=ok
// SIG undefined FUN_14174ff14(void)

undefined8 FUN_14174ff14(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bbdf8) {
    FUN_144b3d300(&DAT_14c9bbdf8);
    if (DAT_14c9bbdf8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14c9bbdf0 = 0;
      }
      else {
        DAT_14c9bbdf0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14c9bbdf8);
    }
  }
  lVar2 = DAT_14c9bbdf0;
  if (DAT_14c9bbdf0 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar8 * 4) != 0;
  }
  cVar3 = FUN_14027015e(1,param_1);
  if ((bVar9) || (cVar3 != '\0')) {
    uVar7 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 141750066 FUN_141750066 body=942 status=ok
// SIG undefined FUN_141750066(void)

undefined8 FUN_141750066(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bbfc8) && (FUN_144b3d300(&DAT_14c9bbfc8), DAT_14c9bbfc8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bbfc0 = 0;
    }
    else {
      DAT_14c9bbfc0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bbfc8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bbfd8) && (FUN_144b3d300(&DAT_14c9bbfd8), DAT_14c9bbfd8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bbfd0 = 0;
    }
    else {
      DAT_14c9bbfd0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bbfd8);
  }
  lVar4 = DAT_14c9bbfd0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bbfd0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bbfc0;
  if (DAT_14c9bbfc0 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar7 = FUN_14027015e(1,param_1);
  return uVar7;
}



// FUNCTION 141750414 FUN_141750414 body=706 status=ok
// SIG undefined FUN_141750414(void)

undefined8 FUN_141750414(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc018) && (FUN_144b3d300(&DAT_14c9bc018), DAT_14c9bc018 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bc010 = 0;
    }
    else {
      DAT_14c9bc010 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bc018);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc028) && (FUN_144b3d300(&DAT_14c9bc028), DAT_14c9bc028 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bc020 = 0;
    }
    else {
      DAT_14c9bc020 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bc028);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bc020 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bc010 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(1,param_1);
  return uVar8;
}



// FUNCTION 1417506d6 FUN_1417506d6 body=994 status=ok
// SIG undefined FUN_1417506d6(void)

uint FUN_1417506d6(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc068) && (FUN_144b3d300(&DAT_14c9bc068), DAT_14c9bc068 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc060 = 0;
    }
    else {
      DAT_14c9bc060 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc068);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc078) && (FUN_144b3d300(&DAT_14c9bc078), DAT_14c9bc078 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc070 = 0;
    }
    else {
      DAT_14c9bc070 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc078);
  }
  lVar4 = DAT_14c9bc070;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bc070 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bc060;
  if (DAT_14c9bc060 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(1,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141750ab8 FUN_141750ab8 body=749 status=ok
// SIG undefined FUN_141750ab8(void)

uint FUN_141750ab8(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc0b8) && (FUN_144b3d300(&DAT_14c9bc0b8), DAT_14c9bc0b8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc0b0 = 0;
    }
    else {
      DAT_14c9bc0b0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc0b8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc0c8) && (FUN_144b3d300(&DAT_14c9bc0c8), DAT_14c9bc0c8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc0c0 = 0;
    }
    else {
      DAT_14c9bc0c0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc0c8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bc0c0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bc0b0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(1,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141750da6 FUN_141750da6 body=963 status=ok
// SIG undefined FUN_141750da6(void)

undefined8 FUN_141750da6(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc108) && (FUN_144b3d300(&DAT_14c9bc108), DAT_14c9bc108 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bc100 = 0;
    }
    else {
      DAT_14c9bc100 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bc108);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc118) && (FUN_144b3d300(&DAT_14c9bc118), DAT_14c9bc118 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bc110 = 0;
    }
    else {
      DAT_14c9bc110 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bc118);
  }
  lVar4 = DAT_14c9bc110;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bc110 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar4 + uVar10 * 4) != 0;
  }
  lVar4 = DAT_14c9bc100;
  if (DAT_14c9bc100 == 0) {
    bVar12 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = (bool)(*(int *)(lVar4 + uVar10 * 4) != 0 | bVar12);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(1,param_1);
  return uVar8;
}



// FUNCTION 14175116a FUN_14175116a body=729 status=ok
// SIG undefined FUN_14175116a(void)

undefined8 FUN_14175116a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc158) && (FUN_144b3d300(&DAT_14c9bc158), DAT_14c9bc158 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc150 = 0;
    }
    else {
      DAT_14c9bc150 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc158);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc168) && (FUN_144b3d300(&DAT_14c9bc168), DAT_14c9bc168 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc160 = 0;
    }
    else {
      DAT_14c9bc160 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc168);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bc160 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bc150 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar9 = FUN_14027015e(1,param_1);
  return uVar9;
}



// FUNCTION 141751444 FUN_141751444 body=1016 status=ok
// SIG undefined FUN_141751444(void)

uint FUN_141751444(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc1a8) && (FUN_144b3d300(&DAT_14c9bc1a8), DAT_14c9bc1a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc1a0 = 0;
    }
    else {
      DAT_14c9bc1a0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc1a8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc1b8) && (FUN_144b3d300(&DAT_14c9bc1b8), DAT_14c9bc1b8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc1b0 = 0;
    }
    else {
      DAT_14c9bc1b0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc1b8);
  }
  lVar4 = DAT_14c9bc1b0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bc1b0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bc1a0;
  if (DAT_14c9bc1a0 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
      (cVar5 = FUN_14027015e(1,param_1), cVar5 != '\0')) &&
     ((cVar5 = FUN_140052d29(*param_1), cVar5 == '\0' &&
      (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175183c FUN_14175183c body=776 status=ok
// SIG undefined FUN_14175183c(void)

uint FUN_14175183c(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc1f8) && (FUN_144b3d300(&DAT_14c9bc1f8), DAT_14c9bc1f8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc1f0 = 0;
    }
    else {
      DAT_14c9bc1f0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc1f8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc208) && (FUN_144b3d300(&DAT_14c9bc208), DAT_14c9bc208 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc200 = 0;
    }
    else {
      DAT_14c9bc200 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc208);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bc200 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bc1f0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(1,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141751b44 FUN_141751b44 body=797 status=ok
// SIG undefined FUN_141751b44(void)

undefined8 FUN_141751b44(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc618) && (FUN_144b3d300(&DAT_14c9bc618), DAT_14c9bc618 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bc610 = 0;
    }
    else {
      DAT_14c9bc610 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bc618);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc628) && (FUN_144b3d300(&DAT_14c9bc628), DAT_14c9bc628 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bc620 = 0;
    }
    else {
      DAT_14c9bc620 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bc628);
  }
  lVar5 = DAT_14c9bc620;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bc620 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bc610;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bc610 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141751c61;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141751c61;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_141751c61:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar8 = FUN_14027015e(1,param_1);
    return uVar8;
  }
  return 0;
}



// FUNCTION 141751e62 FUN_141751e62 body=529 status=ok
// SIG undefined FUN_141751e62(void)

undefined8 FUN_141751e62(ushort *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bc668) {
    FUN_144b3d300(&DAT_14c9bc668);
    if (DAT_14c9bc668 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bc660 = 0;
      }
      else {
        DAT_14c9bc660 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bc668);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bc678) {
    FUN_144b3d300(&DAT_14c9bc678);
    if (DAT_14c9bc678 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bc670 = 0;
      }
      else {
        DAT_14c9bc670 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bc678);
    }
  }
  if (DAT_14c9bc670 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bc660 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar2 = FUN_14027015e(1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141752074 FUN_141752074 body=805 status=ok
// SIG undefined FUN_141752074(void)

undefined8 FUN_141752074(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc6b8) && (FUN_144b3d300(&DAT_14c9bc6b8), DAT_14c9bc6b8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc6b0 = 0;
    }
    else {
      DAT_14c9bc6b0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc6b8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bc6c8) && (FUN_144b3d300(&DAT_14c9bc6c8), DAT_14c9bc6c8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bc6c0 = 0;
    }
    else {
      DAT_14c9bc6c0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bc6c8);
  }
  lVar5 = DAT_14c9bc6c0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bc6c0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bc6b0;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bc6b0 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141752195;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141752195;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_141752195:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar9 = FUN_14027015e(1,param_1);
    return uVar9;
  }
  return 0;
}



// FUNCTION 14175239a FUN_14175239a body=540 status=ok
// SIG undefined FUN_14175239a(void)

undefined8 FUN_14175239a(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bc708) {
    FUN_144b3d300(&DAT_14c9bc708);
    if (DAT_14c9bc708 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bc700 = 0;
      }
      else {
        DAT_14c9bc700 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bc708);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bc718) {
    FUN_144b3d300(&DAT_14c9bc718);
    if (DAT_14c9bc718 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bc710 = 0;
      }
      else {
        DAT_14c9bc710 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bc718);
    }
  }
  if (DAT_14c9bc710 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bc700 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar3 = FUN_14027015e(1,param_1);
    return uVar3;
  }
  return 0;
}


