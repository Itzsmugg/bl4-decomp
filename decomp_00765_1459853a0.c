// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1459853a0 FUN_1459853a0 body=198 status=ok
// SIG undefined FUN_1459853a0(void)

longlong * FUN_1459853a0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  cVar2 = FUN_14141545c(param_2);
  if (cVar2 == '\0') {
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    *param_1 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
    uStack_30 = 0;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145985468 FUN_145985468 body=88 status=ok
// SIG undefined FUN_145985468(void)

void FUN_145985468(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)(**(code **)(*param_2 + 8))(param_2);
  if (*pcVar1 == '\x02') {
    lVar2 = 0x50;
  }
  else {
    pcVar1 = (char *)(**(code **)(*param_2 + 8))(param_2);
    if (*pcVar1 != '\0') {
      return;
    }
    lVar2 = 0x68;
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_1459854c6(param_1 + lVar2,uVar3);
  return;
}



// FUNCTION 1459854c6 FUN_1459854c6 body=162 status=ok
// SIG undefined FUN_1459854c6(void)

void FUN_1459854c6(longlong *param_1,undefined8 param_2)

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
        goto LAB_145985553;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145985553:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145985568 FUN_145985568 body=75 status=ok
// SIG undefined FUN_145985568(void)

undefined1 FUN_145985568(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1400fce78(param_2 + -0x10,param_3 + -0x10);
      FUN_1459855b4(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1459855b4 FUN_1459855b4 body=114 status=ok
// SIG undefined FUN_1459855b4(void)

undefined8 * FUN_1459855b4(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
  if ((*param_2 != 0) && ((*(byte *)(*param_2 + 0x10) & 1) != 0)) {
    uVar4 = FUN_140d84280(param_1);
    FUN_148844b98(uVar4,*param_2);
  }
  return param_1;
}



// FUNCTION 145985626 FUN_145985626 body=148 status=ok
// SIG undefined FUN_145985626(void)

void FUN_145985626(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0;
  local_38 = 0;
  FUN_1459856fc(&local_40);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_145985779(param_1,&local_78,&local_40);
  FUN_1459856bc(&local_78);
  FUN_1449db362(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459856bc FUN_1459856bc body=64 status=ok
// SIG undefined FUN_1459856bc(void)

void FUN_1459856bc(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459856fc FUN_1459856fc body=124 status=ok
// SIG undefined FUN_1459856fc(void)

void FUN_1459856fc(longlong *param_1,longlong *param_2)

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



// FUNCTION 145985779 FUN_145985779 body=302 status=ok
// SIG undefined FUN_145985779(void)

void FUN_145985779(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_140 [56];
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 local_a0;
  undefined4 local_98;
  code *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  local_158 = param_2;
  FUN_1459858a8(local_140,&local_c8,&local_e8,&local_108);
  local_a0 = *param_3;
  *param_3 = 0;
  local_98 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_60 = FUN_143efb4b4;
  local_58 = &LAB_143efb556;
  local_50 = &LAB_143efb56a;
  local_48 = FUN_143efb594;
  local_150 = 0;
  local_148 = 0;
  bifrost::patches::fetchLatestPatchManifest(*(undefined8 *)(param_1 + 0x2b8),local_140);
  FUN_1449db362(&local_150);
  FUN_1401e7e48(&local_108);
  FUN_1401e7e48(&local_e8);
  FUN_1401e7e48(&local_c8);
  FUN_1449db362(param_3);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459858a8 FUN_1459858a8 body=166 status=ok
// SIG undefined FUN_1459858a8(void)

longlong *
FUN_1459858a8(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  
  FUN_14598594e(param_2,param_5);
  FUN_14598594e(param_3,param_5 + 0x18);
  FUN_14598594e(param_4,param_5 + 0x28);
  FUN_14482e566(param_2);
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x10);
  *param_1 = lVar2;
  param_1[1] = iVar1 + lVar2;
  param_1[2] = *(longlong *)(param_5 + 0x10);
  FUN_14482e566(param_3);
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = *(longlong *)(param_3 + 0x10);
  param_1[3] = lVar2;
  param_1[4] = iVar1 + lVar2;
  FUN_14482e566(param_4);
  iVar1 = *(int *)(param_4 + 0x18);
  lVar2 = *(longlong *)(param_4 + 0x10);
  param_1[5] = lVar2;
  param_1[6] = iVar1 + lVar2;
  return param_1;
}



// FUNCTION 14598594e FUN_14598594e body=53 status=ok
// SIG undefined FUN_14598594e(void)

longlong FUN_14598594e(longlong param_1)

{
  FUN_144a787a6();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



// FUNCTION 14598598a FUN_14598598a body=221 status=ok
// SIG undefined FUN_14598598a(void)

longlong FUN_14598598a(void)

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
  if (DAT_14c949508 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1468996e6;
    local_40 = &LAB_146273886;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/CoreUObject",L"PackageMap",&DAT_14c949508,&DAT_1468996ec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c949508;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145985a6e FUN_145985a6e body=221 status=ok
// SIG undefined FUN_145985a6e(void)

longlong FUN_145985a6e(void)

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
  if (DAT_14c9982a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f03c91;
    local_40 = FUN_14628925c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/IrisCore",L"DataStream",&DAT_14c9982a0,&DAT_146f03c90);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9982a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145985b52 FUN_145985b52 body=221 status=ok
// SIG undefined FUN_145985b52(void)

longlong FUN_145985b52(void)

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
  if (DAT_14c998798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f03cff;
    local_40 = FUN_14628a9bf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectPrioritizerConfig",&DAT_14c998798,&DAT_146f03cfe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145985c36 FUN_145985c36 body=221 status=ok
// SIG undefined FUN_145985c36(void)

longlong FUN_145985c36(void)

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
  if (DAT_14c9985e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f03cbb;
    local_40 = &LAB_145a5eced;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetBlobHandler",&DAT_14c9985e8,&DAT_146f03cba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9985e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145985d1a FUN_145985d1a body=221 status=ok
// SIG undefined FUN_145985d1a(void)

longlong FUN_145985d1a(void)

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
  if (DAT_14c998b28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f07999;
    local_40 = &LAB_14628c582;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/IrisCore",L"ReplicationBridge",&DAT_14c998b28,&DAT_146f07998);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998b28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145985dfe FUN_145985dfe body=221 status=ok
// SIG undefined FUN_145985dfe(void)

longlong FUN_145985dfe(void)

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
  if (DAT_14c99c4d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f7808d;
    local_40 = FUN_14628f1b2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2f0;
    FUN_14081cfa3(L"/Script/MeshDescription",L"MeshDescriptionBase",&DAT_14c99c4d0,FUN_14628f190);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99c4d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145985ee2 FUN_145985ee2 body=221 status=ok
// SIG undefined FUN_145985ee2(void)

longlong FUN_145985ee2(void)

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
  if (DAT_14c99d2d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146fdd885;
    local_40 = FUN_146293758;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ClothingSystemRuntimeInterface",L"ClothConfigBase",&DAT_14c99d2d8,
                  &DAT_146fdd884);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99d2d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145985fc6 FUN_145985fc6 body=221 status=ok
// SIG undefined FUN_145985fc6(void)

longlong FUN_145985fc6(void)

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
  if (DAT_14c99d3e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146fdde55;
    local_40 = &LAB_145ad4128;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/ClothingSystemRuntimeInterface",L"ClothPhysicalMeshDataBase_Legacy",
                  &DAT_14c99d3e8,&DAT_146fdde54);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99d3e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459860aa FUN_1459860aa body=221 status=ok
// SIG undefined FUN_1459860aa(void)

longlong FUN_1459860aa(void)

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
  if (DAT_14c99e958 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147045579;
    local_40 = FUN_146296f42;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"SoundfieldEndpointSettingsBase",&DAT_14c99e958,
                  &DAT_147045578);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e958;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598618e FUN_14598618e body=221 status=ok
// SIG undefined FUN_14598618e(void)

longlong FUN_14598618e(void)

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
  if (DAT_14c9a0700 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147089005;
    local_40 = &LAB_1462a0dd5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusConfigSubType",&DAT_14c9a0700,&DAT_147089004);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0700;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986272 FUN_145986272 body=221 status=ok
// SIG undefined FUN_145986272(void)

longlong FUN_145986272(void)

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
  if (DAT_14c9a0738 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147089009;
    local_40 = &LAB_1461ddeee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x690;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusContentLoader",&DAT_14c9a0738,&DAT_147089008);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0738;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986356 FUN_145986356 body=221 status=ok
// SIG undefined FUN_145986356(void)

longlong FUN_145986356(void)

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
  if (DAT_14caa8c40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14748d58b;
    local_40 = FUN_14632ac9c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"FieldSystem",&DAT_14caa8c40,&DAT_14748d58a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8c40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598643a FUN_14598643a body=221 status=ok
// SIG undefined FUN_14598643a(void)

longlong FUN_14598643a(void)

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
  if (DAT_14caab988 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1475066d4;
    local_40 = &LAB_145c92de5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/AnimGraphRuntime",L"PlayMontageCallbackProxy",&DAT_14caab988,
                  FUN_14633559e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caab988;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598651e FUN_14598651e body=221 status=ok
// SIG undefined FUN_14598651e(void)

longlong FUN_14598651e(void)

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
  if (DAT_14cad8498 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a920b3;
    local_40 = FUN_1463c765d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"EngineCustomTimeStep",&DAT_14cad8498,&DAT_147a920b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad8498;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986602 FUN_145986602 body=221 status=ok
// SIG undefined FUN_145986602(void)

longlong FUN_145986602(void)

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
  if (DAT_14cab6928 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1476c413d;
    local_40 = FUN_14634e971;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/UMG",L"WidgetBlueprintGeneratedClassExtension",&DAT_14cab6928,
                  &DAT_1476c413c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6928;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459866e6 FUN_1459866e6 body=221 status=ok
// SIG undefined FUN_1459866e6(void)

longlong FUN_1459866e6(void)

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
  if (DAT_14cab8190 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1477440f5;
    local_40 = FUN_146355fb9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/UMG",L"SlatePostBufferProcessorUpdater",&DAT_14cab8190,&DAT_1477440f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8190;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459867ca FUN_1459867ca body=221 status=ok
// SIG undefined FUN_1459867ca(void)

longlong FUN_1459867ca(void)

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
  if (DAT_14cabcad0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14781c5ef;
    local_40 = FUN_146367567;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/LevelSequence",L"LevelSequenceBurnInInitSettings",&DAT_14cabcad0,
                  &DAT_14781c5ee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabcad0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459868ae FUN_1459868ae body=221 status=ok
// SIG undefined FUN_1459868ae(void)

longlong FUN_1459868ae(void)

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
  if (DAT_14cabe7f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478561c5;
    local_40 = FUN_14636b978;
    local_48 = L"Mass";
    local_50 = 0;
    local_58 = 0x10000003;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MassEntity",L"MassModuleSettings",&DAT_14cabe7f0,&DAT_1478561c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabe7f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986992 FUN_145986992 body=221 status=ok
// SIG undefined FUN_145986992(void)

longlong FUN_145986992(void)

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
  if (DAT_14cac0e08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14786c4d9;
    local_40 = &LAB_146038931;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/Engine",L"Exporter",&DAT_14cac0e08,FUN_146377384);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac0e08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986a76 FUN_145986a76 body=221 status=ok
// SIG undefined FUN_145986a76(void)

longlong FUN_145986a76(void)

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
  if (DAT_14cacd888 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14795008d;
    local_40 = &LAB_1463ac4e2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x4e0;
    FUN_14081cfa3(L"/Script/Engine",L"AssetManager",&DAT_14cacd888,&DAT_14795008c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacd888;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986b5a FUN_145986b5a body=221 status=ok
// SIG undefined FUN_145986b5a(void)

longlong FUN_145986b5a(void)

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
  if (DAT_14cac90b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478ae1a9;
    local_40 = FUN_14639ad21;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionPropertyOverridePolicy",&DAT_14cac90b8,
                  &DAT_1478ae1a8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac90b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986c3e FUN_145986c3e body=221 status=ok
// SIG undefined FUN_145986c3e(void)

longlong FUN_145986c3e(void)

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
  if (DAT_14cac50f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14788533d;
    local_40 = &LAB_145df40c6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x1c0;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleEmitter",&DAT_14cac50f0,&DAT_14788533c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac50f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986d22 FUN_145986d22 body=221 status=ok
// SIG undefined FUN_145986d22(void)

longlong FUN_145986d22(void)

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
  if (DAT_14cac9100 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478ae209;
    local_40 = &LAB_1458beed3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionRuntimeCellTransformer",&DAT_14cac9100,
                  &DAT_1478ae208);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac9100;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986e06 FUN_145986e06 body=221 status=ok
// SIG undefined FUN_145986e06(void)

longlong FUN_145986e06(void)

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
  if (DAT_14caca478 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478caccd;
    local_40 = FUN_14639ff4c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/Engine",L"NavCollisionBase",&DAT_14caca478,&DAT_1478caccc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caca478;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986eea FUN_145986eea body=221 status=ok
// SIG undefined FUN_145986eea(void)

longlong FUN_145986eea(void)

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
  if (DAT_14cacfe80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1479b566b;
    local_40 = FUN_1463b3a19;
    local_48 = L"Editor";
    local_50 = 0;
    local_58 = 0x1000000d;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/Engine",L"Commandlet",&DAT_14cacfe80,&DAT_1479b566a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacfe80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145986fce FUN_145986fce body=221 status=ok
// SIG undefined FUN_145986fce(void)

longlong FUN_145986fce(void)

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
  if (DAT_14cad6070 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a63a21;
    local_40 = &LAB_145c85392;
    local_48 = L"DeviceProfiles";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x180;
    FUN_14081cfa3(L"/Script/Engine",L"DeviceProfileManager",&DAT_14cad6070,&DAT_147a63a20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad6070;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459870b2 FUN_1459870b2 body=221 status=ok
// SIG undefined FUN_1459870b2(void)

longlong FUN_1459870b2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf2af0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147be716d;
    local_40 = FUN_1463ee0bf;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"OnlineSession",&DAT_14caf2af0,&DAT_147be716c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2af0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145987196 FUN_145987196 body=221 status=ok
// SIG undefined FUN_145987196(void)

longlong FUN_145987196(void)

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
  if (DAT_14cb1fa98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ecddc1;
    local_40 = FUN_14642bf4e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AIModule",L"AIDataProvider",&DAT_14cb1fa98,&DAT_147ecddc0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1fa98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598727a FUN_14598727a body=221 status=ok
// SIG undefined FUN_14598727a(void)

longlong FUN_14598727a(void)

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
  if (DAT_14cb26f08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f90552;
    local_40 = FUN_14644ba80;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"EnhancedInputPlatformData",&DAT_14cb26f08,FUN_14644ba5e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb26f08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598735e FUN_14598735e body=221 status=ok
// SIG undefined FUN_14598735e(void)

longlong FUN_14598735e(void)

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
  if (DAT_14cb28770 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fbac77;
    local_40 = FUN_146453dac;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/StateTreeModule",L"StateTreeSchema",&DAT_14cb28770,&DAT_147fbac76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb28770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145987442 FUN_145987442 body=221 status=ok
// SIG undefined FUN_145987442(void)

longlong FUN_145987442(void)

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
  if (DAT_14cb45930 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148236c71;
    local_40 = FUN_1464827fe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonUIRichTextData",&DAT_14cb45930,&DAT_148236c70);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb45930;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145987526 FUN_145987526 body=221 status=ok
// SIG undefined FUN_145987526(void)

longlong FUN_145987526(void)

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
  if (DAT_14cb4ba18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148457399;
    local_40 = FUN_146490060;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"ToolTargetFactory",&DAT_14cb4ba18,
                  &DAT_148457398);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ba18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598760a FUN_14598760a body=221 status=ok
// SIG undefined FUN_14598760a(void)

longlong FUN_14598760a(void)

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
  if (DAT_14cb5cac0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14868fdd5;
    local_40 = FUN_1464d7d6c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"QuietTimePredicate",&DAT_14cb5cac0,&DAT_14868fdd4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5cac0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459876ee FUN_1459876ee body=221 status=ok
// SIG undefined FUN_1459876ee(void)

longlong FUN_1459876ee(void)

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
  if (DAT_14cb5db80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14869b657;
    local_40 = FUN_1464ddc1a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxEffectsManagerProxy",&DAT_14cb5db80,FUN_1464ddbf8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5db80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459877d2 FUN_1459877d2 body=221 status=ok
// SIG undefined FUN_1459877d2(void)

longlong FUN_1459877d2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5edd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486b0c7f;
    local_40 = &LAB_1464e40f6;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameSingletons",&DAT_14cb5edd8,&DAT_1486b0c7e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5edd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459878bc FUN_1459878bc body=221 status=ok
// SIG undefined FUN_1459878bc(void)

longlong FUN_1459878bc(void)

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
  if (DAT_14cb6ca20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148788777;
    local_40 = FUN_146533396;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxGame",L"MissionSourceStateManager",&DAT_14cb6ca20,&DAT_148788776);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ca20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459879a0 FUN_1459879a0 body=221 status=ok
// SIG undefined FUN_1459879a0(void)

longlong FUN_1459879a0(void)

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
  if (DAT_14cb6ef00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1487a0f11;
    local_40 = &LAB_145da6dac;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x300;
    FUN_14081cfa3(L"/Script/GbxGame",L"RefreshManager",&DAT_14cb6ef00,&DAT_1487a0f10);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ef00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145987a84 FUN_145987a84 body=221 status=ok
// SIG undefined FUN_145987a84(void)

longlong FUN_145987a84(void)

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
  if (DAT_14cb95688 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a33cb3;
    local_40 = FUN_146578ff2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"InAppPurchaseCheckoutCallbackProxy",
                  &DAT_14cb95688,FUN_146578fd0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95688;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145987b68 FUN_145987b68 body=221 status=ok
// SIG undefined FUN_145987b68(void)

longlong FUN_145987b68(void)

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
  if (DAT_14cb956a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a3449d;
    local_40 = FUN_1465790bc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"InAppPurchaseFinalizeProxy",&DAT_14cb956a8,
                  FUN_14657909a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb956a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145987c4c FUN_145987c4c body=221 status=ok
// SIG undefined FUN_145987c4c(void)

longlong FUN_145987c4c(void)

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
  if (DAT_14cb95700 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a34938;
    local_40 = FUN_14657922a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"InAppPurchaseQueryCallbackProxy2",&DAT_14cb95700
                  ,FUN_146579208);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95700;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145987d30 FUN_145987d30 body=221 status=ok
// SIG undefined FUN_145987d30(void)

longlong FUN_145987d30(void)

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
  if (DAT_14cb95778 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a35fa5;
    local_40 = FUN_1465794b0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"InAppPurchaseRestoreCallbackProxy2",
                  &DAT_14cb95778,FUN_14657948e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95778;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145987e14 FUN_145987e14 body=221 status=ok
// SIG undefined FUN_145987e14(void)

longlong FUN_145987e14(void)

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
  if (DAT_14cb95980 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a382d6;
    local_40 = FUN_1465797f0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"LeaderboardFlushCallbackProxy",&DAT_14cb95980,
                  FUN_1465797ce);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95980;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145987ef8 FUN_145987ef8 body=221 status=ok
// SIG undefined FUN_145987ef8(void)

longlong FUN_145987ef8(void)

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
  if (DAT_14cb959a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a38774;
    local_40 = FUN_1465798b0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"LeaderboardQueryCallbackProxy",&DAT_14cb959a8,
                  FUN_14657988e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb959a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145987fdc FUN_145987fdc body=221 status=ok
// SIG undefined FUN_145987fdc(void)

longlong FUN_145987fdc(void)

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
  if (DAT_14cb98218 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148ab744b;
    local_40 = &LAB_146588a3e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/GbxNetGame",L"GbxSparkServer",&DAT_14cb98218,&DAT_148ab744a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb98218;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459880c0 FUN_1459880c0 body=221 status=ok
// SIG undefined FUN_1459880c0(void)

longlong FUN_1459880c0(void)

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
  if (DAT_14cb9cf38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b51def;
    local_40 = FUN_14659cbf8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGTagStateSettings",&DAT_14cb9cf38,&DAT_148b51dee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cf38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459881a4 FUN_1459881a4 body=221 status=ok
// SIG undefined FUN_1459881a4(void)

longlong FUN_1459881a4(void)

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
  if (DAT_14cb9f860 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b82aca;
    local_40 = FUN_1465a55ee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"BlueprintableCameraModeTransition",&DAT_14cb9f860,
                  FUN_1465a55cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9f860;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988288 FUN_145988288 body=221 status=ok
// SIG undefined FUN_145988288(void)

longlong FUN_145988288(void)

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
  if (DAT_14cba05e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b8ff6d;
    local_40 = &LAB_145c1cbe3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/OakGame",L"EchoManager",&DAT_14cba05e8,&DAT_148b8ff6c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba05e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598836c FUN_14598836c body=221 status=ok
// SIG undefined FUN_14598836c(void)

longlong FUN_14598836c(void)

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
  if (DAT_14cba76f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148bf690b;
    local_40 = &LAB_145a1c471;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/OakGame",L"OakBoundaryManager",&DAT_14cba76f0,&DAT_148bf690a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba76f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988450 FUN_145988450 body=221 status=ok
// SIG undefined FUN_145988450(void)

longlong FUN_145988450(void)

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
  if (DAT_14cbaa4d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148c122a3;
    local_40 = FUN_1465d7ba2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakEnhancedInputDebugger",&DAT_14cbaa4d8,&DAT_148c122a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaa4d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988534 FUN_145988534 body=221 status=ok
// SIG undefined FUN_145988534(void)

longlong FUN_145988534(void)

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
  if (DAT_14cbbfbc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148cb040b;
    local_40 = &LAB_145cc48f8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/OakGame",L"PoAActorManager",&DAT_14cbbfbc8,&DAT_148cb040a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbfbc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988618 FUN_145988618 body=221 status=ok
// SIG undefined FUN_145988618(void)

longlong FUN_145988618(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf56b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_145966a82;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148fdc48d;
    local_40 = &LAB_1461abe76;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1c8;
    FUN_14081cfa3(L"/Script/Party",L"SocialManager",&DAT_14cbf56b0,&DAT_148fdc48c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf56b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459886fc FUN_1459886fc body=221 status=ok
// SIG undefined FUN_1459886fc(void)

longlong FUN_1459886fc(void)

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
  if (DAT_14cc07210 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1491af4fd;
    local_40 = &LAB_145bdc652;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/ControlRig",L"ControlRigTestData",&DAT_14cc07210,FUN_1466cb66a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc07210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459887e0 FUN_1459887e0 body=221 status=ok
// SIG undefined FUN_1459887e0(void)

longlong FUN_1459887e0(void)

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
  if (DAT_14cc07258 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1491af945;
    local_40 = FUN_1466cb797;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ControlRig",L"ControlRigValidationPass",&DAT_14cc07258,&DAT_1491af944);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc07258;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459888c4 FUN_1459888c4 body=221 status=ok
// SIG undefined FUN_1459888c4(void)

longlong FUN_1459888c4(void)

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
  if (DAT_14cc0b628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492dc615;
    local_40 = &LAB_145e148e9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/LiveLinkInterface",L"LiveLinkSubjectSettings",&DAT_14cc0b628,
                  &DAT_1492dc614);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0b628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459889a8 FUN_1459889a8 body=221 status=ok
// SIG undefined FUN_1459889a8(void)

longlong FUN_1459889a8(void)

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
  if (DAT_14cc0b450 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492db53d;
    local_40 = FUN_14671a0f7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/LiveLinkInterface",L"LiveLinkSubjectRemapper",&DAT_14cc0b450,
                  &DAT_1492db53c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0b450;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988a8c FUN_145988a8c body=221 status=ok
// SIG undefined FUN_145988a8c(void)

longlong FUN_145988a8c(void)

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
  if (DAT_14cc0bb60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492ea6e9;
    local_40 = FUN_14671c41b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangeWriterBase",&DAT_14cc0bb60,&DAT_1492ea6e8)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0bb60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988b70 FUN_145988b70 body=221 status=ok
// SIG undefined FUN_145988b70(void)

longlong FUN_145988b70(void)

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
  if (DAT_14cc16ce0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14943f933;
    local_40 = &LAB_145e2848a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/InterchangePipelines",L"InterchangePipelineMeshesUtilities",
                  &DAT_14cc16ce0,FUN_14672f1d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc16ce0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988c54 FUN_145988c54 body=221 status=ok
// SIG undefined FUN_145988c54(void)

longlong FUN_145988c54(void)

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
  if (DAT_14cc1e230 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149506aa0;
    local_40 = &LAB_145bf6639;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/LiveLink",L"LiveLinkMessageBusFinder",&DAT_14cc1e230,FUN_14673e39c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1e230;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988d38 FUN_145988d38 body=221 status=ok
// SIG undefined FUN_145988d38(void)

longlong FUN_145988d38(void)

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
  if (DAT_14cc1e2d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14950a330;
    local_40 = FUN_14673ea50;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/LiveLink",L"LiveLinkPreset",&DAT_14cc1e2d0,FUN_14673ea2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1e2d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988e1c FUN_145988e1c body=221 status=ok
// SIG undefined FUN_145988e1c(void)

longlong FUN_145988e1c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc1e340 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14950a395;
    local_40 = &LAB_145ec9f35;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/LiveLink",L"LiveLinkSettings",&DAT_14cc1e340,&DAT_14950a394);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1e340;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988f00 FUN_145988f00 body=221 status=ok
// SIG undefined FUN_145988f00(void)

longlong FUN_145988f00(void)

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
  if (DAT_14cc1f1a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1495dc3fd;
    local_40 = &LAB_145dbe39f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/HoudiniNiagara",L"HoudiniPointCache",&DAT_14cc1f1a0,FUN_1467419a0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1f1a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145988fe4 FUN_145988fe4 body=221 status=ok
// SIG undefined FUN_145988fe4(void)

longlong FUN_145988fe4(void)

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
  if (DAT_14cc2d818 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14986302b;
    local_40 = FUN_146768eaf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/IKRig",L"RetargetOpStack",&DAT_14cc2d818,&DAT_14986302a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2d818;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459890c8 FUN_1459890c8 body=221 status=ok
// SIG undefined FUN_1459890c8(void)

longlong FUN_1459890c8(void)

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
  if (DAT_14cc2da38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149869479;
    local_40 = FUN_1467696b2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/IKRig",L"RetargetRootSettings",&DAT_14cc2da38,&DAT_149869478);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2da38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459891ac FUN_1459891ac body=221 status=ok
// SIG undefined FUN_1459891ac(void)

longlong FUN_1459891ac(void)

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
  if (DAT_14cc2da50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14986950b;
    local_40 = FUN_146769772;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/IKRig",L"IKRetargetGlobalSettings",&DAT_14cc2da50,&DAT_14986950a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2da50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145989290 FUN_145989290 body=221 status=ok
// SIG undefined FUN_145989290(void)

longlong FUN_145989290(void)

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
  if (DAT_14cc2dda8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149882d91;
    local_40 = FUN_14676a656;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/IKRig",L"IKRig_LimbEffector",&DAT_14cc2dda8,&DAT_149882d90);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2dda8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145989374 FUN_145989374 body=221 status=ok
// SIG undefined FUN_145989374(void)

longlong FUN_145989374(void)

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
  if (DAT_14cc2de30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1498843f9;
    local_40 = FUN_14676a84a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/IKRig",L"IKRig_PoleSolverEffector",&DAT_14cc2de30,&DAT_1498843f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2de30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145989458 FUN_145989458 body=221 status=ok
// SIG undefined FUN_145989458(void)

longlong FUN_145989458(void)

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
  if (DAT_14cc2de60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149885263;
    local_40 = FUN_14676a8e7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/IKRig",L"IKRig_SetTransformEffector",&DAT_14cc2de60,&DAT_149885262);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2de60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145989536 FUN_145989536 body=99 status=ok
// SIG undefined FUN_145989536(void)

ulonglong FUN_145989536(longlong param_1)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0xf78) == 0) {
    lVar1 = FUN_14598962b();
    if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0xf78) = lVar1;
      if (lVar1 == 0) {
        uVar2 = 0;
        goto LAB_14598957a;
      }
    }
    else {
      FUN_1456cec3c(lVar1);
      *(longlong *)(param_1 + 0xf78) = lVar1;
    }
    FUN_14598959a(lVar1,param_1);
  }
LAB_14598957a:
  return uVar2 & 0xffffffff;
}



// FUNCTION 14598959a FUN_14598959a body=145 status=ok
// SIG undefined FUN_14598959a(void)

void FUN_14598959a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 == 0) {
    return;
  }
  FUN_14485c47a(param_1 + 0x28,param_2);
  uVar3 = FUN_14479d2ce(param_1 + 0x28);
  plVar4 = (longlong *)FUN_1401b2ade(uVar3);
  if ((plVar4 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar4 + 0x6c8))(plVar4), cVar1 == '\0')
     ) {
    return;
  }
  plVar4 = (longlong *)FUN_14007a5e6(lVar2);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0xe8))(plVar4,param_1 + 5);
  }
  FUN_14127fc36(param_1);
  return;
}



// FUNCTION 14598962b FUN_14598962b body=177 status=ok
// SIG undefined FUN_14598962b(void)

undefined8 FUN_14598962b(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459896de();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459896de FUN_1459896de body=221 status=ok
// SIG undefined FUN_1459896de(void)

longlong FUN_1459896de(void)

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
  if (DAT_14cbac8c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148c2eb63;
    local_40 = &LAB_145a07663;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/OakGame",L"OakLostLootSubsystem",&DAT_14cbac8c0,&DAT_148c2eb62);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbac8c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459897bc FUN_1459897bc body=74 status=ok
// SIG undefined FUN_1459897bc(void)

void FUN_1459897bc(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x3f8) == 0) {
    FUN_145989806(param_1 + 0x430,param_2);
  }
  else if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_2 + 0x60))();
  }
  FUN_1449db362(param_2);
  return;
}



// FUNCTION 145989806 FUN_145989806 body=124 status=ok
// SIG undefined FUN_145989806(void)

void FUN_145989806(longlong *param_1,longlong *param_2)

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



// FUNCTION 145989884 FUN_145989884 body=293 status=ok
// SIG undefined FUN_145989884(void)

void FUN_145989884(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60 [4];
  undefined2 local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = local_60;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1459899aa(puVar2,local_68);
  *param_3 = uVar1;
  FUN_144a2da94(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459899aa FUN_1459899aa body=198 status=ok
// SIG undefined FUN_1459899aa(void)

undefined8 FUN_1459899aa(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_50 = 0;
  FUN_1456bb102(local_78);
  FUN_1447c3578(param_1,local_48,local_78);
  uVar2 = FUN_14030a32e(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_144a5ac3a(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145989a72 FUN_145989a72 body=251 status=ok
// SIG undefined FUN_145989a72(void)

void FUN_145989a72(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + -0x30;
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_1400f6e0c(lVar2);
    if (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0xb0);
      if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar2 == 0) goto LAB_145989b3d;
      }
      else {
        FUN_1456cec3c(lVar2);
      }
      local_50 = FUN_1415614d6;
      local_48 = 0;
      FUN_145989b6e(lVar2 + 0x68,&local_40,lVar1,&local_50);
      *(undefined8 *)(param_1 + 0x18) = local_40;
      local_50 = FUN_145df997e;
      local_48 = 0;
      FUN_145989b6e(lVar2 + 0x80,&local_40,lVar1,&local_50);
      *(undefined8 *)(param_1 + 0x20) = local_40;
    }
  }
LAB_145989b3d:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145989b6e FUN_145989b6e body=254 status=ok
// SIG undefined FUN_145989b6e(void)

undefined8
FUN_145989b6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9adad0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9ada60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145989c6e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145989c6e FUN_145989c6e body=216 status=ok
// SIG undefined FUN_145989c6e(void)

undefined8 * FUN_145989c6e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145989d54 FUN_145989d54 body=24 status=ok
// SIG undefined FUN_145989d54(void)

bool FUN_145989d54(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145989d6c FUN_145989d6c body=62 status=ok
// SIG undefined FUN_145989d6c(void)

void FUN_145989d6c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145989daa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb0,0x10);
  }
  return;
}



// FUNCTION 145989daa FUN_145989daa body=109 status=ok
// SIG undefined FUN_145989daa(void)

ulonglong FUN_145989daa(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xb0) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xb0,0x10);
      uVar1 = uVar1 / 0xb0;
    }
  }
  return uVar1;
}



// FUNCTION 145989e3e FUN_145989e3e body=40 status=ok
// SIG undefined FUN_145989e3e(void)

undefined8 FUN_145989e3e(undefined8 param_1,int param_2)

{
  FUN_145989e66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145989e66 FUN_145989e66 body=74 status=ok
// SIG undefined FUN_145989e66(void)

void FUN_145989e66(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac3c7f0;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145989eb0 FUN_145989eb0 body=24 status=ok
// SIG undefined FUN_145989eb0(void)

void FUN_145989eb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145989ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145989ec8 FUN_145989ec8 body=38 status=ok
// SIG undefined FUN_145989ec8(void)

undefined8 FUN_145989ec8(undefined8 param_1,int param_2)

{
  FUN_145989eee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145989eee FUN_145989eee body=86 status=ok
// SIG undefined FUN_145989eee(void)

void FUN_145989eee(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac84a90;
  param_1[4] = &PTR_LAB_14ac84ab0;
  FUN_145989f44(param_1 + 6);
  FUN_140af926c(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145989f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145989f44 FUN_145989f44 body=103 status=ok
// SIG undefined FUN_145989f44(void)

void FUN_145989f44(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145989fab(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145989fab FUN_145989fab body=53 status=ok
// SIG undefined FUN_145989fab(void)

void FUN_145989fab(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x400);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x82;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145989fe0 FUN_145989fe0 body=40 status=ok
// SIG undefined FUN_145989fe0(void)

undefined8 FUN_145989fe0(undefined8 param_1,int param_2)

{
  FUN_14598a008();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598a008 FUN_14598a008 body=107 status=ok
// SIG undefined FUN_14598a008(void)

void FUN_14598a008(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aea7d90;
  param_1[5] = &PTR_FUN_14aea8030;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14585f5fa(param_1);
  return;
}



// FUNCTION 14598a080 FUN_14598a080 body=31 status=ok
// SIG undefined FUN_14598a080(void)

undefined8 FUN_14598a080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598a0a0 FUN_14598a0a0 body=71 status=ok
// SIG undefined FUN_14598a0a0(void)

byte FUN_14598a0a0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  if (*(longlong *)(param_1 + 0x3d0) == 0) {
    bVar1 = 1;
  }
  else {
    lVar2 = FUN_141416276();
    if (lVar2 == 0) {
      bVar3 = true;
    }
    else {
      bVar3 = *(int *)(lVar2 + 0x9e8) != 1;
    }
    bVar1 = *(char *)(*(longlong *)(param_1 + 0x3d0) + 0x290) != '\x01' & bVar3;
  }
  return bVar1;
}



// FUNCTION 14598a0f6 FUN_14598a0f6 body=62 status=ok
// SIG undefined FUN_14598a0f6(void)

undefined8 * FUN_14598a0f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5c5710;
  FUN_140485912(param_1 + 3);
  FUN_140f4e84a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598a134 FUN_14598a134 body=38 status=ok
// SIG undefined FUN_14598a134(void)

undefined8 FUN_14598a134(undefined8 param_1,int param_2)

{
  FUN_14598a15a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598a15a FUN_14598a15a body=133 status=ok
// SIG undefined FUN_14598a15a(void)

void FUN_14598a15a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b692310;
  param_1[0x5d] = &PTR_FUN_14b692380;
  plVar3 = (longlong *)param_1[0x70];
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
  FUN_1403d7bbc(param_1 + 0x5f);
  param_1[0x5d] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x5d);
  FUN_141420c64(param_1);
  return;
}



// FUNCTION 14598a1e0 FUN_14598a1e0 body=216 status=ok
// SIG undefined FUN_14598a1e0(void)

undefined8 * FUN_14598a1e0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14598a2c6 FUN_14598a2c6 body=40 status=ok
// SIG undefined FUN_14598a2c6(void)

undefined8 FUN_14598a2c6(undefined8 param_1,int param_2)

{
  FUN_14598a2ee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598a2ee FUN_14598a2ee body=424 status=ok
// SIG undefined FUN_14598a2ee(void)

void FUN_14598a2ee(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_149fc76f0;
  param_1[5] = &PTR_FUN_149fc7990;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28a));
  plVar2 = (longlong *)param_1[0x289];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140cb5138(param_1 + 0x27a);
  FUN_14141661e(param_1 + 0x272);
  FUN_14141661e(param_1 + 0x26a);
  FUN_14141661e(param_1 + 0x262);
  FUN_14141661e(param_1 + 0x25a);
  FUN_14141661e(param_1 + 0x252);
  FUN_14141661e(param_1 + 0x24a);
  FUN_14141661e(param_1 + 0x242);
  FUN_14141661e(param_1 + 0x23a);
  lVar3 = 0x1190;
  do {
    FUN_14141661e((longlong)param_1 + lVar3);
    lVar3 = lVar3 + -0x40;
  } while (lVar3 != 0x1090);
  FUN_14141661e(param_1 + 0x212);
  FUN_14141661e(param_1 + 0x20a);
  FUN_14141661e(param_1 + 0x202);
  FUN_14141661e(param_1 + 0x1fa);
  FUN_14141661e(param_1 + 0x1f2);
  FUN_144760e21(param_1[0x1ef],*(undefined4 *)(param_1 + 0x1f0));
  if (param_1[0x1ef] != 0) {
    FUN_1400020a8();
  }
  FUN_14141661e(param_1 + 0x1e7);
  FUN_14141661e(param_1 + 0x1df);
  FUN_14141661e(param_1 + 0x1d7);
  FUN_144760e21(param_1[0x1d4],*(undefined4 *)(param_1 + 0x1d5));
  if (param_1[0x1d4] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1cf));
  FUN_141416652(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14598a496 FUN_14598a496 body=243 status=ok
// SIG undefined FUN_14598a496(void)

void FUN_14598a496(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14598a58a(param_1,iVar1 != 0,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598a58a FUN_14598a58a body=69 status=ok
// SIG undefined FUN_14598a58a(void)

void FUN_14598a58a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_14142ad0e(param_1 + 0x71a8,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598a5d0 FUN_14598a5d0 body=227 status=ok
// SIG undefined FUN_14598a5d0(void)

longlong FUN_14598a5d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_88;
  byte local_86;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1411371f6(local_b8);
  local_88 = 0x101;
  local_86 = local_86 | 4;
  local_a8 = param_3;
  local_a0 = param_4;
  if (param_2 != 0) {
    lVar1 = FUN_141037e38(param_1,param_2,&DAT_14c846480,local_b8);
    if (lVar1 != 0) {
      lVar2 = FUN_141416a8c();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_14598a661;
    }
  }
  lVar1 = 0;
LAB_14598a661:
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598a6b4 FUN_14598a6b4 body=321 status=ok
// SIG undefined FUN_14598a6b4(void)

void FUN_14598a6b4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_14598a7f6(lVar1 + lVar2 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598a7f6 FUN_14598a7f6 body=55 status=ok
// SIG undefined FUN_14598a7f6(void)

void FUN_14598a7f6(longlong *param_1)

{
  FUN_14598a82e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14598a82e FUN_14598a82e body=366 status=ok
// SIG undefined FUN_14598a82e(void)

void FUN_14598a82e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_14116e718(*local_70 + (longlong)iStack_54 * 0x160 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14598a99e(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14598a99e FUN_14598a99e body=112 status=ok
// SIG undefined FUN_14598a99e(void)

void FUN_14598a99e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x160,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x160)) {
      uVar2 = uVar1 / 0x160 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x160,8);
  }
  return;
}



// FUNCTION 14598aa0e FUN_14598aa0e body=169 status=ok
// SIG undefined FUN_14598aa0e(void)

bool FUN_14598aa0e(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 14598aabe FUN_14598aabe body=224 status=ok
// SIG undefined FUN_14598aabe(void)

void FUN_14598aabe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_144729dda(param_1 + 0x48);
  if (cVar4 == '\0') goto LAB_14598ab52;
  lVar5 = FUN_14479d2ce(param_1 + 0x48);
  if (lVar5 == 0) goto LAB_14598ab52;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x2a0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x68));
  *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  cVar4 = FUN_14134ef9a(lVar5);
  if (*(char *)(lVar3 + 0x58) == cVar4) {
    if (*(int *)(lVar3 + 0x5c) == 0) {
      iVar6 = 1;
      goto LAB_14598ab95;
    }
  }
  else {
    iVar6 = *(int *)(lVar3 + 0x5c) + 1;
LAB_14598ab95:
    *(char *)(lVar3 + 0x58) = cVar4;
    *(int *)(lVar3 + 0x5c) = iVar6;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x68));
LAB_14598ab52:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598aba0 FUN_14598aba0 body=52 status=ok
// SIG undefined FUN_14598aba0(void)

void FUN_14598aba0(longlong *param_1)

{
  FUN_141416b72(param_1 + 0x785);
  FUN_145811dca(param_1 + 0x7ad,0);
                    /* WARNING: Could not recover jumptable at 0x00014598abcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14b8))(param_1);
  return;
}



// FUNCTION 14598abd4 FUN_14598abd4 body=49 status=ok
// SIG undefined FUN_14598abd4(void)

void FUN_14598abd4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14598ac22(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014598abe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_14134bfd4(&DAT_14c9a2260);
  FUN_145a0f6f6(uVar2);
  return;
}



// FUNCTION 14598ac06 FUN_14598ac06 body=28 status=ok
// SIG undefined FUN_14598ac06(void)

void FUN_14598ac06(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14134bfd4(&DAT_14c9a2260);
  FUN_145a0f6f6(uVar1);
  return;
}



// FUNCTION 14598ac22 FUN_14598ac22 body=191 status=ok
// SIG undefined FUN_14598ac22(void)

longlong FUN_14598ac22(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14598ace2();
  lVar3 = *param_1;
  if (DAT_14c9a2280 != DAT_14c9a22ac) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14c9a22b0;
    if (DAT_14c9a22b8 != (undefined *)0x0) {
      puVar7 = DAT_14c9a22b8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14c9a22c0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14c9a2278 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14c9a2270;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14598ace2 FUN_14598ace2 body=152 status=ok
// SIG undefined FUN_14598ace2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14598ace2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a22c8) {
    FUN_144b3d300(&DAT_14c9a22c8);
    if (DAT_14c9a22c8 == -1) {
      DAT_14c9a2298 = 0;
      DAT_14c9a22a0 = 0;
      DAT_14c9a2278 = 0;
      _DAT_14c9a2280 = 0;
      _DAT_14c9a22a4 = 0xffffffff00000080;
      DAT_14c9a22ac = 0;
      DAT_14c9a22b8 = 0;
      DAT_14c9a22c0 = 0;
      atexit(FUN_142b2b00d);
      _Init_thread_footer(&DAT_14c9a22c8);
      return;
    }
  }
  return;
}



// FUNCTION 14598ad7a FUN_14598ad7a body=95 status=ok
// SIG undefined FUN_14598ad7a(void)

undefined8 * FUN_14598ad7a(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = param_3;
  FUN_140c4b786();
  if ((param_3 < 0) || (DAT_14c9a7c98 <= param_3)) {
    FUN_14598adda(&DAT_14c9a7c90,param_3 + 1,1);
  }
  lVar1 = DAT_14c9a7c90;
  *(undefined4 *)(DAT_14c9a7c90 + 8 + (longlong)param_3 * 0xc) = *(undefined4 *)(param_1 + 1);
  *(undefined8 *)(lVar1 + (longlong)param_3 * 0xc) = *param_1;
  return param_1;
}



// FUNCTION 14598adda FUN_14598adda body=138 status=ok
// SIG undefined FUN_14598adda(void)

void FUN_14598adda(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_14598ae66(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0xc + *param_1),0,(ulonglong)uVar2 * 0xc);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_1470e9890(param_1);
    return;
  }
  return;
}



// FUNCTION 14598ae66 FUN_14598ae66 body=147 status=ok
// SIG undefined FUN_14598ae66(void)

void FUN_14598ae66(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14598aefa FUN_14598aefa body=52 status=ok
// SIG undefined FUN_14598aefa(void)

void FUN_14598aefa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x310);
  memset(_Dst,0,0x310);
  FUN_14598af2e(_Dst);
  return;
}



// FUNCTION 14598af2e FUN_14598af2e body=139 status=ok
// SIG undefined FUN_14598af2e(void)

undefined8 * FUN_14598af2e(undefined8 *param_1)

{
  FUN_140e8cffc();
  *param_1 = &PTR_FUN_14b9bf790;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_1446f470e(param_1 + 0x61,&DAT_149dfb77a,1);
  return param_1;
}



// FUNCTION 14598afba FUN_14598afba body=40 status=ok
// SIG undefined FUN_14598afba(void)

undefined8 FUN_14598afba(undefined8 param_1,int param_2)

{
  FUN_14598afe2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598afe2 FUN_14598afe2 body=73 status=ok
// SIG undefined FUN_14598afe2(void)

void FUN_14598afe2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd27f80;
  plVar3 = (longlong *)param_1[9];
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
  FUN_14598b02c(param_1);
  return;
}



// FUNCTION 14598b02c FUN_14598b02c body=78 status=ok
// SIG undefined FUN_14598b02c(void)

void FUN_14598b02c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd28390;
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14598b07c FUN_14598b07c body=184 status=ok
// SIG undefined FUN_14598b07c(void)

void FUN_14598b07c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar1 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14598b136(local_50,puVar1);
  FUN_1403719a4(param_3,local_50);
  FUN_144a2da94(local_50);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598b136 FUN_14598b136 body=54 status=ok
// SIG undefined FUN_14598b136(void)

void FUN_14598b136(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[3] = param_2[2];
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0x18;
  *(undefined1 *)(param_1 + 5) = 5;
  *(char *)(param_1 + 6) = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  return;
}



// FUNCTION 14598b178 FUN_14598b178 body=294 status=ok
// SIG undefined FUN_14598b178(void)

undefined8 * FUN_14598b178(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14adc74d0;
  param_1[7] = 0;
  uVar2 = FUN_144830b78(param_1 + 8,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 8) = uVar2;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f80000000000040;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adcb7a0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_48 = FUN_1446f8646();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_48);
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar2 = FUN_144830b78(local_34);
  *(undefined4 *)(param_1 + 8) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598b2aa FUN_14598b2aa body=142 status=ok
// SIG undefined FUN_14598b2aa(void)

undefined8 * FUN_14598b2aa(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b015d00;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x42b40000;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_144894d4c(param_1 + 0x3c);
  *(byte *)((longlong)param_1 + 0x14c) = *(byte *)((longlong)param_1 + 0x14c) | 0x40;
  return param_1;
}



// FUNCTION 14598b338 FUN_14598b338 body=9 status=ok
// SIG undefined FUN_14598b338(void)

void FUN_14598b338(longlong param_1)

{
  FUN_14598b342(param_1 + 0x10);
  return;
}



// FUNCTION 14598b342 FUN_14598b342 body=125 status=ok
// SIG undefined FUN_14598b342(void)

void FUN_14598b342(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b428560;
  param_1[4] = &PTR_FUN_14b4285a0;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b4285b0;
  param_1[4] = &PTR_LAB_14b4285f0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 14598b3c0 FUN_14598b3c0 body=310 status=ok
// SIG undefined FUN_14598b3c0(void)

void FUN_14598b3c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  puVar2 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  uVar1 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar1);
  local_48 = local_28;
  FUN_14598b4f8(param_1,&local_58,puVar2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598b4f8 FUN_14598b4f8 body=120 status=ok
// SIG undefined FUN_14598b4f8(void)

void FUN_14598b4f8(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  local_38 = FUN_14477b664(uVar2);
  local_30 = param_2[2];
  bVar1 = FUN_14598b572(param_1,&local_40);
  *param_3 = bVar1 ^ 1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598b572 FUN_14598b572 body=162 status=ok
// SIG undefined FUN_14598b572(void)

undefined8 FUN_14598b572(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return 0;
  }
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar4 = FUN_140e391b0();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
  }
  lVar5 = param_2[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar6 == 0)) || (*param_2 == 0)) goto LAB_14598b5db;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_14598b5ed:
    lVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_14598b5ed;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_2);
  }
  param_2[2] = lVar5;
LAB_14598b5db:
  uVar4 = FUN_14598b614(lVar1,lVar5);
  return uVar4;
}



// FUNCTION 14598b614 FUN_14598b614 body=409 status=ok
// SIG undefined FUN_14598b614(void)

byte FUN_14598b614(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar9 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar9 = *(undefined4 **)(param_2 + 8);
    }
    uVar4 = FUN_140d2f994(puVar9);
  }
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  uVar5 = FUN_1410b14ea();
  lStack_50 = FUN_14477b664(uVar5);
  lVar6 = FUN_1410b14ea();
  uVar5 = FUN_1410b14ea();
  FUN_1402d1bfa(&local_40,uVar5,uVar4);
  lVar3 = local_40;
  if (local_58 != local_40) {
    local_48 = 0;
  }
  local_58 = local_40;
  lVar7 = FUN_1410b14ea();
  if (lVar6 != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
      goto LAB_14598b6e3;
    }
    if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_14598b6e3;
  }
  lVar7 = lVar6;
LAB_14598b6e3:
  if (lStack_50 != lVar7) {
    local_48 = 0;
  }
  uVar5 = FUN_14477b664(lVar7);
  lStack_50 = FUN_14477b664(uVar5);
  if ((lVar3 != 0) && (lStack_50 != 0)) {
    local_48 = uVar4;
  }
  plVar10 = &local_40;
  FUN_1410b15be(param_1,plVar10,&local_58);
  if (local_40 != 0) {
    uVar8 = FUN_141416bba(local_40,param_2);
    plVar10 = (longlong *)(uVar8 & 0xffffffff);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_40 != 0 & (byte)plVar10;
}



// FUNCTION 14598b7ae FUN_14598b7ae body=35 status=ok
// SIG undefined FUN_14598b7ae(void)

void FUN_14598b7ae(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14598b7d2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc1d550;
  return;
}



// FUNCTION 14598b7d2 FUN_14598b7d2 body=80 status=ok
// SIG undefined FUN_14598b7d2(void)

undefined8 * FUN_14598b7d2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bc1efc0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_14485c47a(param_1 + 9,0);
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 14598b822 FUN_14598b822 body=237 status=ok
// SIG undefined FUN_14598b822(void)

void FUN_14598b822(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14598b910(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598b910 FUN_14598b910 body=165 status=ok
// SIG undefined FUN_14598b910(void)

undefined8 FUN_14598b910(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined7 uVar7;
  longlong lVar8;
  
  if (param_1 != (longlong *)0x0) {
    uVar3 = FUN_1407ca880();
    lVar6 = *param_1;
    plVar4 = (longlong *)(**(code **)(lVar6 + 0x288))(param_1,uVar3);
    param_3 = (byte)lVar6;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      bVar2 = 0;
      uVar7 = 0;
      if (plVar4 != plVar5) {
        if (plVar5 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar5 + 0x50))();
          uVar7 = (undefined7)((ulonglong)lVar6 >> 8);
          bVar2 = 1;
          if ((longlong)*(int *)(lVar6 + 0x48) == 0) {
            param_3 = 0;
          }
          else {
            lVar8 = 0;
            do {
              lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x40) + lVar8);
              if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_2)) {
                bVar2 = 1;
                param_3 = 1;
                break;
              }
              lVar8 = lVar8 + 0x10;
              param_3 = 0;
            } while ((longlong)*(int *)(lVar6 + 0x48) * 0x10 != lVar8);
          }
        }
        goto LAB_14598b99b;
      }
    }
  }
  bVar2 = 0;
  uVar7 = 0;
LAB_14598b99b:
  return CONCAT71(uVar7,bVar2 & param_3);
}



// FUNCTION 14598b9b6 FUN_14598b9b6 body=39 status=ok
// SIG undefined FUN_14598b9b6(void)

void FUN_14598b9b6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14598b9de();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14598b9de FUN_14598b9de body=9 status=ok
// SIG undefined FUN_14598b9de(void)

undefined4 FUN_14598b9de(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x160);
}



// FUNCTION 14598b9e8 FUN_14598b9e8 body=40 status=ok
// SIG undefined FUN_14598b9e8(void)

undefined8 FUN_14598b9e8(undefined8 param_1,int param_2)

{
  FUN_14598ba10();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598ba10 FUN_14598ba10 body=104 status=ok
// SIG undefined FUN_14598ba10(void)

void FUN_14598ba10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b842a00;
  param_1[6] = &PTR_FUN_14b842cc0;
  param_1[7] = &PTR_FUN_14b842d50;
  FUN_1412a9efa(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14598ba78 FUN_14598ba78 body=72 status=ok
// SIG undefined FUN_14598ba78(void)

undefined8 * FUN_14598ba78(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb95200;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14598bac0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598bac0 FUN_14598bac0 body=52 status=ok
// SIG undefined FUN_14598bac0(void)

void FUN_14598bac0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bad9ed0;
  FUN_1449db362(param_1 + 0x11);
  FUN_14598baf4(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14598baf4 FUN_14598baf4 body=68 status=ok
// SIG undefined FUN_14598baf4(void)

void FUN_14598baf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb02a30;
  FUN_1449db362(param_1 + 6);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14598bb38 FUN_14598bb38 body=181 status=ok
// SIG undefined FUN_14598bb38(void)

undefined8 * FUN_14598bb38(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined1 *local_250;
  undefined4 local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined1 local_220 [512];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_240 = local_220;
  local_228 = '\0';
  local_230 = &local_20;
  local_258 = param_2;
  local_238 = local_240;
  FUN_14005eb5c(&local_258,&local_240);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  local_250 = local_240;
  local_248 = (undefined4)((ulonglong)((longlong)local_238 - (longlong)local_240) >> 1);
  FUN_1414176ea(&local_250,param_1);
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598bbee FUN_14598bbee body=26 status=ok
// SIG undefined FUN_14598bbee(void)

void FUN_14598bbee(undefined8 param_1)

{
  thunk_FUN_144a6a822();
  FUN_14598bc0e(param_1);
  return;
}



// FUNCTION 14598bc08 thunk_FUN_144a6a822 body=5 status=ok
// SIG undefined thunk_FUN_144a6a822(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_144a6a822(ulonglong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  longlong *plVar13;
  int *piVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  int *piVar23;
  longlong *plVar24;
  uint uVar25;
  undefined4 uVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  undefined4 *puVar31;
  longlong *plVar32;
  uint *puVar33;
  uint uVar34;
  longlong lVar35;
  longlong lVar36;
  undefined4 *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  bool bVar40;
  undefined1 auStack_278 [32];
  undefined8 *puStack_258;
  ulonglong uStack_248;
  longlong *plStack_240;
  longlong lStack_238;
  longlong *plStack_230;
  ulonglong uStack_228;
  longlong lStack_220;
  undefined4 *puStack_218;
  longlong *plStack_210;
  longlong *plStack_208;
  longlong *plStack_200;
  uint *puStack_1f8;
  undefined8 uStack_1f0;
  longlong *plStack_1e0;
  uint uStack_1d8;
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  longlong lStack_1a8;
  longlong *plStack_1a0;
  undefined8 uStack_198;
  uint uStack_190;
  longlong lStack_188;
  longlong *plStack_180;
  undefined8 uStack_178;
  uint uStack_170;
  undefined8 uStack_168;
  longlong *plStack_160;
  int iStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined8 uStack_148;
  longlong *plStack_140;
  int iStack_138;
  int iStack_134;
  longlong lStack_120;
  undefined8 uStack_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong *plStack_d8;
  longlong alStack_c8 [4];
  longlong lStack_a8;
  longlong *plStack_98;
  longlong alStack_88 [5];
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  puStack_1f8 = (uint *)0x0;
  uStack_1f0 = 0;
  cVar10 = FUN_140d7e770();
  uStack_248 = param_1;
  if (cVar10 != '\0') {
    plVar4 = *(longlong **)(param_1 + 0x40);
    if (plVar4 != (longlong *)0x0) {
      iVar12 = (int)plVar4[1];
      do {
        if (iVar12 == 0) goto LAB_144a6a8b0;
        LOCK();
        iVar29 = (int)plVar4[1];
        bVar40 = iVar12 == iVar29;
        if (bVar40) {
          *(int *)(plVar4 + 1) = iVar12 + 1;
          iVar29 = iVar12;
        }
        iVar12 = iVar29;
        UNLOCK();
      } while (!bVar40);
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_140d7e6a6(&puStack_1f8,*(longlong *)(param_1 + 0x38) + 0x2b8);
      }
      LOCK();
      plVar13 = plVar4 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar23 = (int *)((longlong)plVar4 + 0xc);
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (*piVar23 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
LAB_144a6a8b0:
    if ((longlong)(int)uStack_1f0 != 0) {
      puVar22 = puStack_1f8 + (longlong)(int)uStack_1f0 * 3;
      plVar4 = (longlong *)(param_1 + 0x48);
      lVar35 = param_1 + 0x58;
      lStack_220 = param_1 + 0x80;
      puVar33 = puStack_1f8;
      lStack_238 = lVar35;
      do {
        uVar30 = *puVar33;
        uVar19 = puVar33[2];
        if (uVar19 != 0) {
          uVar30 = uVar19 >> 0xd ^ uVar30 - uVar19;
          uVar25 = uVar30 << 8 ^ (-0x61c88647 - uVar19) - uVar30;
          uVar34 = uVar25 >> 0xd ^ (uVar19 - uVar30) - uVar25;
          uVar30 = uVar34 >> 0xc ^ (uVar30 - uVar25) - uVar34;
          uVar19 = uVar30 << 0x10 ^ (uVar25 - uVar34) - uVar30;
          uVar34 = uVar19 >> 5 ^ (uVar34 - uVar30) - uVar19;
          uVar25 = uVar34 >> 3 ^ (uVar30 - uVar19) - uVar34;
          uVar30 = uVar25 << 10 ^ (uVar19 - uVar34) - uVar25;
          uVar30 = uVar30 >> 0xf ^ uVar34 - (uVar25 + uVar30);
        }
        iVar12 = FUN_140d7e634(plVar4,uVar30,puVar33);
        if (iVar12 == -1) {
          plVar13 = (longlong *)FUN_14001cc68(0x40,0x10);
          plVar13[1] = (longlong)&DAT_100000001;
          *plVar13 = (longlong)&PTR_FUN_14b41b010;
          plVar13[4] = 0;
          plVar13[5] = 0;
          plVar13[6] = 0;
          plVar13[7] = 0;
          plVar15 = plVar13 + 2;
          *plVar15 = 0;
          plVar13[3] = 0;
          if (plVar15 != (longlong *)0x0) {
            if (plVar13 == (longlong *)0x0) {
              _DAT_00000010 = 0x10;
              plVar32 = (longlong *)&DAT_00000018;
              plVar24 = _DAT_00000018;
              if (_DAT_00000018 != (longlong *)0x0) {
LAB_144a6bb90:
                LOCK();
                piVar23 = (int *)((longlong)plVar24 + 0xc);
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if (*piVar23 == 0) {
                  (**(code **)(*plVar24 + 0x10))();
                }
                *plVar32 = (longlong)plVar13;
                param_1 = uStack_248;
                lVar35 = lStack_238;
                if (plVar13 != (longlong *)0x0) goto LAB_144a6aa0a;
              }
            }
            else {
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
              plVar13[2] = (longlong)plVar15;
              if ((longlong *)plVar13[3] != plVar13) {
                LOCK();
                *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
                UNLOCK();
                if ((longlong *)plVar13[3] != (longlong *)0x0) {
                  plVar32 = plVar13 + 3;
                  plVar24 = (longlong *)plVar13[3];
                  goto LAB_144a6bb90;
                }
                plVar13[3] = (longlong)plVar13;
              }
LAB_144a6aa0a:
              LOCK();
              plVar32 = plVar13 + 1;
              *(int *)plVar32 = (int)*plVar32 + -1;
              UNLOCK();
              if ((int)*plVar32 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar23 = (int *)((longlong)plVar13 + 0xc);
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if (*piVar23 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
          }
          if (*(int *)(param_1 + 0x7c) == 0) {
            uVar30 = *(uint *)(param_1 + 0x50);
            plVar32 = (longlong *)(ulonglong)uVar30;
            *(uint *)(param_1 + 0x50) = uVar30 + 1;
            if (*(uint *)(param_1 + 0x54) == uVar30) {
              FUN_140549c28(plVar4,uVar30);
            }
            iVar12 = *(int *)(param_1 + 0x70);
            if (iVar12 == 0) {
              iVar29 = -1;
            }
            else {
              iVar29 = iVar12 + 0x1e;
              if (-1 < iVar12 + -1) {
                iVar29 = iVar12 + -1;
              }
              iVar29 = iVar29 >> 5;
            }
            iVar28 = iVar12 + 1;
            iVar20 = iVar12 + 0x1f;
            if (-1 < iVar12) {
              iVar20 = iVar12;
            }
            if (iVar20 >> 5 == iVar29) {
              *(int *)(param_1 + 0x70) = iVar28;
            }
            else {
              if (*(int *)(param_1 + 0x74) <= iVar12) {
                plStack_240 = plVar32;
                if (iVar12 + 0x20U < 0xa0) {
                  iVar28 = 0x80;
                  iVar29 = iVar12;
                }
                else {
                  uVar30 = iVar12 + 0x20U >> 5;
                  if (*(int *)(param_1 + 0x74) + 0x1fU < 0xa0) {
                    uVar19 = 4;
                    if (4 < uVar30) {
                      uVar19 = uVar30;
                    }
                  }
                  else {
                    uVar19 = (uVar30 * 3 >> 3) + uVar30 + 0x10;
                  }
                  uVar38 = FUN_144a3809e(uVar19 << 2,0);
                  iVar29 = (int)(uVar38 >> 2);
                  iVar28 = -0x20;
                  if ((int)uVar30 <= iVar29) {
                    iVar28 = iVar29 << 5;
                  }
                  iVar29 = *(int *)(uStack_248 + 0x70);
                }
                param_1 = uStack_248;
                *(int *)(uStack_248 + 0x74) = iVar28;
                FUN_1446efbd8(lStack_238,iVar29);
                iVar28 = *(int *)(param_1 + 0x70) + 1;
                plVar32 = plStack_240;
              }
              iVar29 = iVar28 + 0x1f;
              if (-1 < iVar28) {
                iVar29 = iVar28;
              }
              *(int *)(param_1 + 0x70) = iVar28;
              if (iVar28 % 0x20 != 0) {
                lVar35 = *(longlong *)(param_1 + 0x68);
                if (*(longlong *)(param_1 + 0x68) == 0) {
                  lVar35 = lStack_238;
                }
                bVar18 = -(char)(iVar28 % 0x20);
                *(uint *)(lVar35 + (longlong)(iVar29 >> 5) * 4) =
                     (uint)(*(int *)(lVar35 + (longlong)(iVar29 >> 5) * 4) << (bVar18 & 0x1f)) >>
                     (bVar18 & 0x1f);
              }
            }
            lVar27 = (longlong)(int)plVar32;
            lVar35 = *(longlong *)(param_1 + 0x68);
            if (*(longlong *)(param_1 + 0x68) == 0) {
              lVar35 = lStack_238;
            }
            bVar18 = (byte)iVar12 & 0x1f;
            puVar1 = (uint *)(lVar35 + (longlong)(iVar20 >> 5) * 4);
            *puVar1 = *puVar1 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
            lVar35 = lStack_238;
          }
          else {
            plVar32 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x78);
            lVar27 = (longlong)(int)*(uint *)(param_1 + 0x78);
            iVar12 = *(int *)(*(longlong *)(param_1 + 0x48) + 4 + lVar27 * 0x28);
            *(int *)(param_1 + 0x78) = iVar12;
            iVar29 = *(int *)(param_1 + 0x7c) + -1;
            *(int *)(param_1 + 0x7c) = iVar29;
            if (iVar29 != 0) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar12 * 0x28) = 0xffffffff;
            }
          }
          iVar12 = (int)plVar32;
          lVar36 = *(longlong *)(param_1 + 0x68);
          if (*(longlong *)(param_1 + 0x68) == 0) {
            lVar36 = lVar35;
          }
          iVar29 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar29 = iVar12;
          }
          puVar1 = (uint *)(lVar36 + (longlong)(iVar29 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)plVar32 & 0x1f);
          lVar35 = *(longlong *)(param_1 + 0x48);
          *(uint *)(lVar35 + 8 + lVar27 * 0x28) = puVar33[2];
          *(undefined8 *)(lVar35 + lVar27 * 0x28) = *(undefined8 *)puVar33;
          *(longlong **)(lVar35 + 0x10 + lVar27 * 0x28) = plVar15;
          *(longlong **)(lVar35 + 0x18 + lVar27 * 0x28) = plVar13;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          puVar1 = (uint *)(lVar35 + lVar27 * 0x28);
          puVar1[8] = 0xffffffff;
          uVar30 = *puVar1;
          uVar19 = puVar1[2];
          if (uVar19 != 0) {
            uVar30 = uVar19 >> 0xd ^ uVar30 - uVar19;
            uVar25 = uVar30 << 8 ^ (-0x61c88647 - uVar19) - uVar30;
            uVar34 = uVar25 >> 0xd ^ (uVar19 - uVar30) - uVar25;
            uVar30 = uVar34 >> 0xc ^ (uVar30 - uVar25) - uVar34;
            uVar19 = uVar30 << 0x10 ^ (uVar25 - uVar34) - uVar30;
            uVar25 = uVar19 >> 5 ^ (uVar34 - uVar30) - uVar19;
            uVar34 = uVar25 >> 3 ^ (uVar30 - uVar19) - uVar25;
            uVar30 = uVar34 << 10 ^ (uVar19 - uVar25) - uVar34;
            uVar30 = uVar30 >> 0xf ^ uVar25 - (uVar34 + uVar30);
          }
          uVar19 = *(int *)(uStack_248 + 0x50) - *(int *)(uStack_248 + 0x7c);
          iVar12 = 1;
          if (uVar19 == 1) {
LAB_144a6ab5b:
            param_1 = uStack_248;
            iVar29 = (int)plVar32;
            if (((int)uVar19 < 1) || (iVar12 <= *(int *)(uStack_248 + 0x90))) {
              uVar30 = *(int *)(uStack_248 + 0x90) - 1U & uVar30;
              puVar1[9] = uVar30;
              lVar35 = *(longlong *)(uStack_248 + 0x88);
              if (*(longlong *)(uStack_248 + 0x88) == 0) {
                lVar35 = lStack_220;
              }
              puVar1[8] = *(uint *)(lVar35 + ((longlong)*(int *)(uStack_248 + 0x90) - 1U &
                                             (longlong)(int)uVar30) * 4);
              lVar35 = *(longlong *)(uStack_248 + 0x88);
              if (*(longlong *)(uStack_248 + 0x88) == 0) {
                lVar35 = lStack_220;
              }
              *(int *)(lVar35 + ((longlong)*(int *)(uStack_248 + 0x90) - 1U & (longlong)(int)uVar30)
                                * 4) = iVar29;
            }
            else {
              *(int *)(uStack_248 + 0x90) = iVar12;
              FUN_140d81ca8(plVar4);
            }
          }
          else {
            plStack_240 = plVar32;
            iVar29 = FUN_140d7e634(plVar4,uVar30,puVar1);
            if (iVar29 == -1) {
              plVar32 = plStack_240;
              if (3 < uVar19) {
                uVar38 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
                lVar35 = 0x3f;
                if (uVar38 != 0) {
                  for (; uVar38 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                  }
                }
                iVar12 = 1 << ((byte)lVar35 & 0x1f);
              }
              goto LAB_144a6ab5b;
            }
            lVar35 = *plVar4;
            plStack_230 = (longlong *)CONCAT44(plStack_230._4_4_,iVar29);
            plVar15 = *(longlong **)(lVar35 + 0x18 + (longlong)iVar29 * 0x28);
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar32 = plVar15 + 1;
              *(int *)plVar32 = (int)*plVar32 + -1;
              UNLOCK();
              if ((int)*plVar32 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar23 = (int *)((longlong)plVar15 + 0xc);
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if (*piVar23 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
            puVar2 = (uint *)(lVar35 + (longlong)iVar29 * 0x28);
            uVar30 = *puVar1;
            uVar19 = puVar1[1];
            uVar25 = puVar1[2];
            uVar34 = puVar1[3];
            uVar6 = puVar1[5];
            uVar7 = puVar1[6];
            uVar8 = puVar1[7];
            puVar2[4] = puVar1[4];
            puVar2[5] = uVar6;
            puVar2[6] = uVar7;
            puVar2[7] = uVar8;
            *puVar2 = uVar30;
            puVar2[1] = uVar19;
            puVar2[2] = uVar25;
            puVar2[3] = uVar34;
            FUN_140d7e700(plVar4,plStack_240);
            param_1 = uStack_248;
            iVar29 = (int)plStack_230;
          }
          lVar35 = *plVar4;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar13 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar23 = (int *)((longlong)plVar13 + 0xc);
              *piVar23 = *piVar23 + -1;
              UNLOCK();
              if (*piVar23 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          plStack_200 = *(longlong **)(lVar35 + (longlong)iVar29 * 0x28 + 0x10);
          uStack_198 = *(undefined8 *)puVar33;
          uStack_190 = puVar33[2];
          FUN_1448075d0(&uStack_108,&uStack_198);
          lVar27 = FUN_14060eaf6(&uStack_108);
          if (CONCAT44(uStack_ec,uStack_f0) != 0) {
            FUN_1400020a8();
          }
          lVar35 = lStack_238;
          if ((lVar27 != 0) && ((*(char *)(lVar27 + 0x750) != '\x01' || (0 < (int)puVar33[2])))) {
            plVar13 = *(longlong **)(param_1 + 0x40);
            if (plVar13 == (longlong *)0x0) {
LAB_144a6bb56:
              bVar40 = true;
              plVar13 = (longlong *)0x0;
LAB_144a6bb5c:
              lStack_1a8 = 0;
              plStack_1a0 = (longlong *)0x0;
              param_1 = uStack_248;
            }
            else {
              iVar12 = (int)plVar13[1];
              do {
                if (iVar12 == 0) goto LAB_144a6bb56;
                LOCK();
                iVar29 = (int)plVar13[1];
                bVar40 = iVar12 == iVar29;
                if (bVar40) {
                  *(int *)(plVar13 + 1) = iVar12 + 1;
                  iVar29 = iVar12;
                }
                iVar12 = iVar29;
                UNLOCK();
              } while (!bVar40);
              plVar15 = *(longlong **)(param_1 + 0x38);
              if (plVar15 == (longlong *)0x0) {
                bVar40 = false;
                goto LAB_144a6bb5c;
              }
              (**(code **)(*plVar15 + 0x78))(plVar15,&lStack_1a8,puVar33);
              if ((lStack_1a8 != 0) && ((longlong)*(int *)(lVar27 + 0x68) != 0)) {
                puVar37 = *(undefined4 **)(lVar27 + 0x60);
                puVar31 = puVar37 + (longlong)*(int *)(lVar27 + 0x68) * 0x30;
                do {
                  plVar15 = *(longlong **)(puVar37 + 0x1c);
                  plVar32 = *(longlong **)(puVar37 + 0x1e);
                  if (plVar32 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
                    UNLOCK();
                    LOCK();
                    *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
                    UNLOCK();
                    LOCK();
                    plVar24 = plVar32 + 1;
                    *(int *)plVar24 = (int)*plVar24 + -1;
                    UNLOCK();
                    if ((int)*plVar24 == 0) {
                      plStack_210 = plVar15;
                      (**(code **)*plVar32)();
                      LOCK();
                      piVar23 = (int *)((longlong)plVar32 + 0xc);
                      *piVar23 = *piVar23 + -1;
                      UNLOCK();
                      plVar15 = plStack_210;
                      if (*piVar23 == 0) {
                        (**(code **)(*plVar32 + 0x10))(plVar32);
                        plVar15 = plStack_210;
                      }
                    }
                  }
                  if (plVar15 != (longlong *)0x0) {
                    plVar24 = *(longlong **)(puVar37 + 0x1c);
                    plVar5 = *(longlong **)(puVar37 + 0x1e);
                    plStack_240 = plVar13;
                    plStack_230 = plVar32;
                    plStack_210 = plVar15;
                    if (plVar5 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                      UNLOCK();
                      LOCK();
                      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                      UNLOCK();
                      LOCK();
                      plVar13 = plVar5 + 1;
                      *(int *)plVar13 = (int)*plVar13 + -1;
                      UNLOCK();
                      if ((int)*plVar13 == 0) {
                        (**(code **)*plVar5)(plVar5);
                        LOCK();
                        piVar23 = (int *)((longlong)plVar5 + 0xc);
                        *piVar23 = *piVar23 + -1;
                        UNLOCK();
                        if (*piVar23 == 0) {
                          (**(code **)(*plVar5 + 0x10))(plVar5);
                        }
                      }
                    }
                    if (plVar24 != (longlong *)0x0) {
                      (**(code **)(*plVar24 + 0x10))(plVar24,&uStack_1b8);
                    }
                    if (plVar5 != (longlong *)0x0) {
                      LOCK();
                      plVar13 = plVar5 + 1;
                      *(int *)plVar13 = (int)*plVar13 + -1;
                      UNLOCK();
                      if ((int)*plVar13 == 0) {
                        (**(code **)*plVar5)(plVar5);
                        LOCK();
                        piVar23 = (int *)((longlong)plVar5 + 0xc);
                        *piVar23 = *piVar23 + -1;
                        UNLOCK();
                        if (*piVar23 == 0) {
                          (**(code **)(*plVar5 + 0x10))(plVar5);
                        }
                      }
                    }
                    plVar13 = plStack_240;
                    if (plVar24 == (longlong *)0x0) {
                      uStack_1b0 = DAT_14c948620;
                      uStack_1b8 = CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
                    }
                    if (((int)uStack_1b8 != 0) &&
                       (lVar35 = FUN_140ca9be8(lStack_1a8,&uStack_1b8), lVar35 != 0)) {
                      FUN_14096c63a(lVar35 + 0x10,&uStack_148);
                      if ((char)uStack_148 == '\x01') {
                        piVar14 = &DAT_14c948620;
                        piVar23 = (int *)&DAT_14c948618;
                        if (iStack_138 != 0) {
                          piVar14 = &DAT_14c948620;
                          piVar23 = (int *)&DAT_14c948618;
                          if (1 < iStack_134) {
                            piVar14 = &DAT_14c948620;
                            piVar23 = (int *)&DAT_14c948618;
                            if (iStack_138 != DAT_14c948000) {
                              piVar23 = (int *)(lStack_120 + 0xc);
                              piVar14 = (int *)(lStack_120 + 0x14);
                            }
                          }
                        }
                        if ((*piVar23 == *(int *)(param_1 + 0x28)) &&
                           (*piVar14 == *(int *)(param_1 + 0x30))) {
                          puStack_218 = puVar31;
                          uVar11 = (**(code **)(*plStack_210 + 0x18))();
                          FUN_140ac173c(&uStack_108,&uStack_148);
                          plStack_1e0 = uStack_108;
                          uStack_1d8 = uStack_100;
                          uStack_1d4 = CONCAT44(uStack_f8,uStack_fc);
                          uStack_1cc = uStack_f4;
                          uStack_1c8 = CONCAT44(uStack_ec,uStack_f0);
                          uStack_1c0 = (undefined4)lStack_e8;
                          uStack_1bc = uVar11;
                          uVar38 = FUN_140d7f1a8(param_1,&lStack_188,&plStack_1e0);
                          lVar35 = *(longlong *)(puVar37 + 0x1c);
                          plVar15 = *(longlong **)(puVar37 + 0x1e);
                          if (plVar15 != (longlong *)0x0) {
                            LOCK();
                            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                            UNLOCK();
                            LOCK();
                            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                            UNLOCK();
                            LOCK();
                            plVar32 = plVar15 + 1;
                            *(int *)plVar32 = (int)*plVar32 + -1;
                            UNLOCK();
                            if ((int)*plVar32 == 0) {
                              uVar38 = (**(code **)*plVar15)(plVar15);
                              LOCK();
                              piVar23 = (int *)((longlong)plVar15 + 0xc);
                              *piVar23 = *piVar23 + -1;
                              UNLOCK();
                              if (*piVar23 == 0) {
                                uVar38 = (**(code **)(*plVar15 + 0x10))(plVar15);
                              }
                            }
                          }
                          if (lVar35 != 0) {
                            param_1 = (ulonglong)*(uint *)(lVar35 + 8);
                            plVar13 = *(longlong **)(lVar35 + 0xc);
                          }
                          if (plVar15 != (longlong *)0x0) {
                            LOCK();
                            plVar32 = plVar15 + 1;
                            *(int *)plVar32 = (int)*plVar32 + -1;
                            UNLOCK();
                            if ((int)*plVar32 == 0) {
                              uVar38 = (**(code **)*plVar15)(plVar15);
                              LOCK();
                              piVar23 = (int *)((longlong)plVar15 + 0xc);
                              *piVar23 = *piVar23 + -1;
                              UNLOCK();
                              if (*piVar23 == 0) {
                                uVar38 = (**(code **)(*plVar15 + 0x10))(plVar15);
                              }
                            }
                          }
                          iVar12 = (int)param_1;
                          if (lVar35 == 0) {
                            plVar13 = (longlong *)CONCAT44(DAT_14c948620,DAT_14c948618._4_4_);
                            iVar12 = (int)DAT_14c948618;
                          }
                          puVar31 = puStack_218;
                          if (iVar12 == 0) {
LAB_144a6b897:
                            uStack_f8 = (undefined4)DAT_14c8464f0;
                            uStack_f4 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                            uStack_108 = DAT_14c8464e0;
                            uStack_100 = (uint)DAT_14c8464e8;
                            uStack_fc = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
                          }
                          else {
                            uStack_154 = SUB84(plVar13,0);
                            uStack_150 = (uint)((ulonglong)plVar13 >> 0x20);
                            plStack_208 = *(longlong **)(uStack_248 + 0x40);
                            iStack_158 = iVar12;
                            if (plStack_208 == (longlong *)0x0) {
LAB_144a6bdb7:
                              uStack_228._0_4_ = (undefined4)CONCAT71((int7)(uVar38 >> 8),1);
                              plStack_208 = (longlong *)0x0;
LAB_144a6bdc6:
                              uStack_168 = 0;
                              plStack_160 = (longlong *)0x0;
                              bVar40 = true;
                              plVar13 = (longlong *)0x0;
                            }
                            else {
                              uVar38 = (ulonglong)*(uint *)(plStack_208 + 1);
                              do {
                                uVar30 = (uint)uVar38;
                                if (uVar30 == 0) goto LAB_144a6bdb7;
                                LOCK();
                                uVar19 = *(uint *)(plStack_208 + 1);
                                if (uVar30 == uVar19) {
                                  *(uint *)(plStack_208 + 1) = uVar30 + 1;
                                }
                                else {
                                  uVar38 = (ulonglong)uVar19;
                                }
                                UNLOCK();
                              } while (uVar30 != uVar19);
                              plVar13 = *(longlong **)(uStack_248 + 0x38);
                              if (plVar13 == (longlong *)0x0) {
                                uStack_228._0_4_ = 0;
                                goto LAB_144a6bdc6;
                              }
                              (**(code **)(*plVar13 + 0x78))(plVar13,&uStack_168,puVar33);
                              lVar35 = FUN_140ca9be8(uStack_168,&iStack_158);
                              if (lVar35 != 0) {
                                FUN_14096c63a(lVar35 + 0x10,&uStack_108);
                                if ((char)uStack_108 == '\f') {
                                  FUN_144a659ac(&uStack_f8,&uStack_178,1);
                                  uStack_150 = uStack_170;
                                  iStack_158 = (int)uStack_178;
                                  uStack_154 = (undefined4)((ulonglong)uStack_178 >> 0x20);
                                }
                                if (lStack_e0 != 0) {
                                  FUN_1400020a8();
                                }
                              }
                              uStack_228 = uStack_228 & 0xffffffff00000000;
                              bVar40 = false;
                            }
                            bVar9 = true;
                            if (iStack_158 != 0) {
                              uStack_178 = CONCAT44(uStack_154,iStack_158);
                              uStack_170 = uStack_150;
                              FUN_1448075d0(&uStack_108,&uStack_178);
                              lVar35 = FUN_1410002c4(&uStack_108);
                              if (CONCAT44(uStack_ec,uStack_f0) != 0) {
                                FUN_1400020a8();
                              }
                              if (lVar35 != 0) {
                                if ((bVar40) ||
                                   (lVar27 = FUN_140d7e932(plVar13,puVar33), lVar27 == 0)) {
LAB_144a6b859:
                                  puVar16 = (undefined8 *)(lVar35 + 0x60);
                                }
                                else {
                                  if (uStack_150 != 0) {
                                    FUN_144a78877(iStack_158,uStack_150);
                                  }
                                  iVar12 = FUN_14117afc6((longlong *)(lVar27 + 0x138));
                                  if (iVar12 == -1) goto LAB_144a6b859;
                                  lVar36 = *(longlong *)(lVar27 + 0x138);
                                  lVar27 = lVar36 + (longlong)iVar12 * 0x48;
                                  if ((lVar27 == 0) || (lVar36 + (longlong)iVar12 * 0x48 == -0x10))
                                  goto LAB_144a6b859;
                                  puVar16 = (undefined8 *)(lVar27 + 0x28);
                                }
                                uStack_f8 = (undefined4)puVar16[2];
                                uStack_f4 = (undefined4)((ulonglong)puVar16[2] >> 0x20);
                                uStack_108 = (longlong *)*puVar16;
                                uStack_100 = *(uint *)(puVar16 + 1);
                                uStack_fc = *(undefined4 *)((longlong)puVar16 + 0xc);
                                bVar9 = false;
                              }
                            }
                            plVar13 = plStack_160;
                            if (plStack_160 != (longlong *)0x0) {
                              LOCK();
                              plVar15 = plStack_160 + 1;
                              *(int *)plVar15 = (int)*plVar15 + -1;
                              UNLOCK();
                              if ((int)*plVar15 == 0) {
                                (**(code **)*plStack_160)(plStack_160);
                                LOCK();
                                piVar23 = (int *)((longlong)plVar13 + 0xc);
                                *piVar23 = *piVar23 + -1;
                                UNLOCK();
                                if (*piVar23 == 0) {
                                  (**(code **)(*plVar13 + 0x10))(plVar13);
                                }
                              }
                            }
                            plVar13 = plStack_208;
                            puVar31 = puStack_218;
                            if ((char)uStack_228 == '\0') {
                              LOCK();
                              plVar15 = plStack_208 + 1;
                              *(int *)plVar15 = (int)*plVar15 + -1;
                              UNLOCK();
                              if ((int)*plVar15 == 0) {
                                (**(code **)*plStack_208)(plStack_208);
                                LOCK();
                                piVar23 = (int *)((longlong)plVar13 + 0xc);
                                *piVar23 = *piVar23 + -1;
                                UNLOCK();
                                if (*piVar23 == 0) {
                                  (**(code **)(*plVar13 + 0x10))(plVar13);
                                }
                              }
                            }
                            if (bVar9) goto LAB_144a6b897;
                          }
                          *(ulonglong *)(lStack_188 + 0x78) = CONCAT44(uStack_f4,uStack_f8);
                          *(int *)(lStack_188 + 0x68) = (int)uStack_108;
                          *(undefined4 *)(lStack_188 + 0x6c) = uStack_108._4_4_;
                          *(uint *)(lStack_188 + 0x70) = uStack_100;
                          *(undefined4 *)(lStack_188 + 0x74) = uStack_fc;
                          plVar13 = *(longlong **)(puVar37 + 0x1c);
                          plVar15 = *(longlong **)(puVar37 + 0x1e);
                          if (plVar15 != (longlong *)0x0) {
                            LOCK();
                            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                            UNLOCK();
                            LOCK();
                            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                            UNLOCK();
                            LOCK();
                            plVar32 = plVar15 + 1;
                            *(int *)plVar32 = (int)*plVar32 + -1;
                            UNLOCK();
                            if ((int)*plVar32 == 0) {
                              (**(code **)*plVar15)(plVar15);
                              LOCK();
                              piVar23 = (int *)((longlong)plVar15 + 0xc);
                              *piVar23 = *piVar23 + -1;
                              UNLOCK();
                              if (*piVar23 == 0) {
                                (**(code **)(*plVar15 + 0x10))(plVar15);
                              }
                            }
                          }
                          if (plVar13 == (longlong *)0x0) {
LAB_144a6bd8d:
                            plVar13 = (longlong *)0x0;
                          }
                          else {
                            lVar35 = (**(code **)(*plVar13 + 8))(plVar13);
                            lVar27 = FUN_140d7e800();
                            if ((lVar27 == 0) || (*(int *)(lVar35 + 0x38) < *(int *)(lVar27 + 0x38))
                               ) goto LAB_144a6bd8d;
                            if (*(longlong *)
                                 (*(longlong *)(lVar35 + 0x30) +
                                 (longlong)*(int *)(lVar27 + 0x38) * 8) != lVar27 + 0x30) {
                              plVar13 = (longlong *)0x0;
                            }
                          }
                          param_1 = uStack_248;
                          if (plVar15 != (longlong *)0x0) {
                            LOCK();
                            plVar32 = plVar15 + 1;
                            *(int *)plVar32 = (int)*plVar32 + -1;
                            UNLOCK();
                            if ((int)*plVar32 == 0) {
                              (**(code **)*plVar15)(plVar15);
                              LOCK();
                              piVar23 = (int *)((longlong)plVar15 + 0xc);
                              *piVar23 = *piVar23 + -1;
                              UNLOCK();
                              if (*piVar23 == 0) {
                                (**(code **)(*plVar15 + 0x10))(plVar15);
                              }
                            }
                          }
                          lVar35 = lStack_188;
                          if (plVar13 != (longlong *)0x0) {
                            iStack_158 = (int)*(undefined8 *)puVar33;
                            uStack_154 = (undefined4)((ulonglong)*(undefined8 *)puVar33 >> 0x20);
                            uStack_150 = puVar33[2];
                            plVar15 = (longlong *)FUN_140d7e9a0(lStack_188,&iStack_158,*puVar37,1);
                            if (plVar15 != (longlong *)0x0) {
                              *(bool *)(plVar15 + 3) = *(char *)((longlong)plVar13 + 0x14) != '\x01'
                              ;
                              if (((int)plVar13[4] != 0) && (*(char *)(lVar35 + 0x28) != '\x01')) {
                                *(undefined1 *)((longlong)plVar15 + 0x19) = 1;
                                plStack_208 = plVar15;
                                lVar27 = FUN_140d80c3e(param_1);
                                if ((lVar27 == 0) || (iVar12 = FUN_14490d72a(lVar27), iVar12 != 3))
                                {
                                  uStack_228 = param_1 + 0x20;
                                  plStack_d8 = (longlong *)0x0;
                                  lStack_a8 = 0;
                                  plStack_98 = (longlong *)0x0;
                                  uStack_fc = 0;
                                  uStack_f8 = 0;
                                  uStack_f4 = 0;
                                  uStack_f0 = 0;
                                  uStack_ec = 0;
                                  lStack_e8 = 0;
                                  uVar17 = FUN_14479d2ce();
                                  uStack_f0 = (undefined4)uVar17;
                                  uStack_ec = (undefined4)((ulonglong)uVar17 >> 0x20);
                                  uStack_108 = *(longlong **)puVar33;
                                  uStack_100 = puVar33[2];
                                  plVar15 = plStack_208 + 4;
                                  FUN_1457a41d8(&uStack_168,&lStack_188);
                                  uVar17 = FUN_14479d2ce(uStack_228);
                                  puStack_258 = &uStack_168;
                                  FUN_141323de6(plVar15,plVar13 + 3,uVar17,&uStack_108);
                                  FUN_1449db362(&uStack_168);
                                  if (lStack_a8 != 0) {
                                    plVar13 = plStack_98;
                                    if (plStack_98 == (longlong *)0x0) {
                                      plVar13 = alStack_88;
                                    }
                                    (**(code **)(*plVar13 + 0x10))();
                                  }
                                  puVar31 = puStack_218;
                                  lVar35 = lStack_188;
                                  if (lStack_e8 != 0) {
                                    plVar13 = plStack_d8;
                                    if (plStack_d8 == (longlong *)0x0) {
                                      plVar13 = alStack_c8;
                                    }
                                    (**(code **)(*plVar13 + 0x10))();
                                    puVar31 = puStack_218;
                                    lVar35 = lStack_188;
                                  }
                                }
                              }
                              FUN_140fec1fc(lVar35);
                            }
                          }
                          plVar13 = plStack_180;
                          if (plStack_180 != (longlong *)0x0) {
                            LOCK();
                            plVar15 = plStack_180 + 1;
                            *(int *)plVar15 = (int)*plVar15 + -1;
                            UNLOCK();
                            if ((int)*plVar15 == 0) {
                              (**(code **)*plStack_180)(plStack_180);
                              LOCK();
                              piVar23 = (int *)((longlong)plVar13 + 0xc);
                              *piVar23 = *piVar23 + -1;
                              UNLOCK();
                              if (*piVar23 == 0) {
                                (**(code **)(*plVar13 + 0x10))(plVar13);
                              }
                            }
                          }
                          plVar13 = plStack_200 + 2;
                          iVar12 = (int)plStack_200[3];
                          lVar35 = (longlong)iVar12;
                          *(uint *)(plStack_200 + 3) = iVar12 + 1U;
                          if (*(uint *)((longlong)plStack_200 + 0x1c) < iVar12 + 1U) {
                            FUN_140d7edf8(plVar13,iVar12);
                          }
                          lVar27 = *plVar13;
                          *(uint *)(lVar27 + 8 + lVar35 * 0x28) = uStack_1d8;
                          *(longlong **)(lVar27 + lVar35 * 0x28) = plStack_1e0;
                          *(undefined4 *)(lVar27 + 0x14 + lVar35 * 0x28) = uStack_1cc;
                          *(undefined8 *)(lVar27 + 0xc + lVar35 * 0x28) = uStack_1d4;
                          *(undefined8 *)(lVar27 + 0x18 + lVar35 * 0x28) = uStack_1c8;
                          *(undefined4 *)(lVar27 + 0x20 + lVar35 * 0x28) = uStack_1c0;
                          *(undefined1 *)(lVar27 + 0x24 + lVar35 * 0x28) = uStack_1bc;
                          plVar13 = plStack_240;
                        }
                      }
                      if (lStack_120 != 0) {
                        FUN_1400020a8();
                      }
                    }
                    lVar35 = FUN_140d80c3e(param_1);
                    if ((lVar35 == 0) ||
                       (iVar12 = FUN_14490d72a(lVar35), plVar32 = plStack_230, iVar12 != 3)) {
                      (**(code **)(*plStack_210 + 0x38))(plStack_210,&uStack_108);
                      plVar15 = uStack_108;
                      if (uStack_108 != (longlong *)0x0) {
                        plVar13 = *(longlong **)(param_1 + 0x10);
                        puStack_218 = puVar31;
                        if (plVar13 == (longlong *)0x0) {
LAB_144a6bd95:
                          uStack_148 = 0;
                          plStack_140 = (longlong *)0x0;
                          FUN_140d7eca8(uStack_108,puVar33,puVar37);
                        }
                        else {
                          iVar12 = (int)plVar13[1];
                          do {
                            if (iVar12 == 0) goto LAB_144a6bd95;
                            LOCK();
                            iVar29 = (int)plVar13[1];
                            bVar40 = iVar12 == iVar29;
                            if (bVar40) {
                              *(int *)(plVar13 + 1) = iVar12 + 1;
                              iVar29 = iVar12;
                            }
                            iVar12 = iVar29;
                            UNLOCK();
                          } while (!bVar40);
                          uStack_148 = *(undefined8 *)(param_1 + 8);
                          LOCK();
                          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                          UNLOCK();
                          LOCK();
                          plVar32 = plVar13 + 1;
                          *(int *)plVar32 = (int)*plVar32 + -1;
                          UNLOCK();
                          plStack_140 = plVar13;
                          if ((int)*plVar32 == 0) {
                            (**(code **)*plVar13)(plVar13);
                            LOCK();
                            piVar23 = (int *)((longlong)plVar13 + 0xc);
                            *piVar23 = *piVar23 + -1;
                            UNLOCK();
                            if (*piVar23 == 0) {
                              (**(code **)(*plVar13 + 0x10))(plVar13);
                            }
                          }
                          plVar13 = plStack_140;
                          FUN_140d7eca8(plVar15,puVar33,puVar37,&uStack_148);
                          if (plVar13 != (longlong *)0x0) {
                            LOCK();
                            plVar15 = plVar13 + 1;
                            *(int *)plVar15 = (int)*plVar15 + -1;
                            UNLOCK();
                            if ((int)*plVar15 == 0) {
                              (**(code **)*plVar13)(plVar13);
                              LOCK();
                              piVar23 = (int *)((longlong)plVar13 + 0xc);
                              *piVar23 = *piVar23 + -1;
                              UNLOCK();
                              if (*piVar23 == 0) {
                                (**(code **)(*plVar13 + 0x10))(plVar13);
                              }
                            }
                          }
                        }
                        (**(code **)(*uStack_108 + 0x10))();
                        plVar32 = uStack_108;
                        plVar15 = (longlong *)CONCAT44(uStack_fc,uStack_100);
                        if (plVar15 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                          UNLOCK();
                        }
                        plVar24 = plStack_200 + 4;
                        iVar12 = (int)plStack_200[5];
                        *(uint *)(plStack_200 + 5) = iVar12 + 1U;
                        if (*(uint *)((longlong)plStack_200 + 0x2c) < iVar12 + 1U) {
                          FUN_140d7eb90(plVar24,iVar12);
                        }
                        puVar31 = puStack_218;
                        plVar13 = plStack_240;
                        param_1 = uStack_248;
                        lVar35 = *plVar24;
                        *(longlong **)(lVar35 + (longlong)iVar12 * 0x10) = plVar32;
                        *(longlong **)(lVar35 + 8 + (longlong)iVar12 * 0x10) = plVar15;
                        if (plVar15 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                          UNLOCK();
                          LOCK();
                          plVar32 = plVar15 + 1;
                          *(int *)plVar32 = (int)*plVar32 + -1;
                          UNLOCK();
                          if ((int)*plVar32 == 0) {
                            (**(code **)*plVar15)(plVar15);
                            LOCK();
                            piVar23 = (int *)((longlong)plVar15 + 0xc);
                            *piVar23 = *piVar23 + -1;
                            UNLOCK();
                            if (*piVar23 == 0) {
                              (**(code **)(*plVar15 + 0x10))(plVar15);
                            }
                          }
                        }
                      }
                      plVar15 = (longlong *)CONCAT44(uStack_fc,uStack_100);
                      plVar32 = plStack_230;
                      if (plVar15 != (longlong *)0x0) {
                        LOCK();
                        plVar24 = plVar15 + 1;
                        *(int *)plVar24 = (int)*plVar24 + -1;
                        UNLOCK();
                        if ((int)*plVar24 == 0) {
                          (**(code **)*plVar15)(plVar15);
                          LOCK();
                          piVar23 = (int *)((longlong)plVar15 + 0xc);
                          *piVar23 = *piVar23 + -1;
                          UNLOCK();
                          plVar32 = plStack_230;
                          if (*piVar23 == 0) {
                            (**(code **)(*plVar15 + 0x10))(plVar15);
                            plVar32 = plStack_230;
                          }
                        }
                      }
                    }
                  }
                  if (plVar32 != (longlong *)0x0) {
                    LOCK();
                    plVar15 = plVar32 + 1;
                    *(int *)plVar15 = (int)*plVar15 + -1;
                    UNLOCK();
                    if ((int)*plVar15 == 0) {
                      (**(code **)*plVar32)();
                      LOCK();
                      piVar23 = (int *)((longlong)plVar32 + 0xc);
                      *piVar23 = *piVar23 + -1;
                      UNLOCK();
                      if (*piVar23 == 0) {
                        (**(code **)(*plVar32 + 0x10))(plVar32);
                      }
                    }
                  }
                  puVar37 = puVar37 + 0x30;
                } while (puVar37 != puVar31);
              }
              bVar40 = false;
            }
            plVar15 = plStack_1a0;
            if (plStack_1a0 != (longlong *)0x0) {
              LOCK();
              plVar32 = plStack_1a0 + 1;
              *(int *)plVar32 = (int)*plVar32 + -1;
              UNLOCK();
              if ((int)*plVar32 == 0) {
                (**(code **)*plStack_1a0)(plStack_1a0);
                LOCK();
                piVar23 = (int *)((longlong)plVar15 + 0xc);
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if (*piVar23 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
            lVar35 = lStack_238;
            if (!bVar40) {
              LOCK();
              plVar15 = plVar13 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar23 = (int *)((longlong)plVar13 + 0xc);
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                lVar35 = lStack_238;
                if (*piVar23 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                  lVar35 = lStack_238;
                }
              }
            }
          }
        }
        puVar33 = puVar33 + 3;
      } while (puVar33 != puVar22);
    }
  }
  iVar12 = *(int *)(param_1 + 0x70);
  if (iVar12 == 0) {
    uVar39 = 1;
    uVar38 = 0;
    iVar29 = 0;
    iVar28 = 0;
  }
  else {
    puVar22 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar22 = (uint *)(param_1 + 0x58);
    }
    uVar30 = *puVar22;
    if (uVar30 == 0) {
      iVar29 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar29 = iVar12 + -1;
      }
      uVar38 = 0;
      uVar39 = (ulonglong)(uint)(iVar29 >> 5);
      if (iVar29 >> 5 < 1) {
        uVar39 = uVar38;
      }
      iVar28 = 0;
      do {
        if (uVar39 == uVar38) goto LAB_144a6bb0e;
        iVar28 = iVar28 + 0x20;
        uVar30 = puVar22[uVar38 + 1];
        uVar38 = uVar38 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar38 = 0;
      iVar28 = 0;
    }
    uVar39 = (ulonglong)(-uVar30 & uVar30);
    uVar3 = uVar39 * 2 + 1;
    lVar35 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar35 == 0; lVar35 = lVar35 + -1) {
      }
    }
    iVar29 = (iVar28 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar29) {
      iVar29 = iVar12;
    }
  }
  if (iVar29 < iVar12) {
    plVar4 = (longlong *)(uStack_248 + 0x48);
    plStack_240 = (longlong *)(uStack_248 + 0x80);
    uVar30 = 0xffffffff;
    do {
      lVar35 = *plVar4;
      lVar27 = (longlong)iVar29;
      uStack_100 = *(uint *)(lVar35 + 8 + lVar27 * 0x28);
      uStack_108 = *(longlong **)(lVar35 + lVar27 * 0x28);
      if ((longlong)(int)uStack_1f0 != 0) {
        lVar36 = 0;
        do {
          if ((*(int *)((longlong)puStack_1f8 + lVar36) == (int)uStack_108) &&
             (*(uint *)((longlong)puStack_1f8 + lVar36 + 8) == uStack_100)) goto LAB_144a6b609;
          lVar36 = lVar36 + 0xc;
        } while ((longlong)(int)uStack_1f0 * 0xc != lVar36);
      }
      lStack_238 = *(longlong *)(lVar35 + 0x10 + lVar27 * 0x28);
      if ((longlong)*(int *)(lStack_238 + 0x18) != 0) {
        lVar35 = *(longlong *)(lStack_238 + 0x10);
        plVar13 = (longlong *)((longlong)*(int *)(lStack_238 + 0x18) * 0x28);
        do {
          plStack_230 = plVar13;
          lStack_220 = lVar35;
          FUN_1457a4872(uStack_248,&uStack_108,lVar35);
          lVar35 = lStack_220 + 0x28;
          plVar13 = plStack_230 + -5;
        } while (plVar13 != (longlong *)0x0);
      }
      lVar35 = *(longlong *)(lStack_238 + 0x20);
      uVar26 = 0;
      if ((longlong)*(int *)(lStack_238 + 0x28) != 0) {
        plStack_230 = (longlong *)((longlong)*(int *)(lStack_238 + 0x28) << 4);
        plVar13 = (longlong *)0x0;
        lStack_220 = lVar35;
        do {
          plStack_200 = plVar13;
          (**(code **)(**(longlong **)(lStack_220 + (longlong)plVar13) + 0x18))();
          plVar13 = plStack_200 + 2;
        } while (plStack_230 != plVar13);
        uVar26 = *(undefined4 *)(lStack_238 + 0x28);
        lVar35 = *(longlong *)(lStack_238 + 0x20);
      }
      FUN_1411804ff(lVar35,uVar26);
      *(undefined4 *)(lStack_238 + 0x28) = 0;
      if (*(int *)(lStack_238 + 0x2c) != 0) {
        FUN_1457a2fec(lStack_238 + 0x20);
      }
      plVar13 = *(longlong **)(uStack_248 + 0x88);
      if (*(longlong **)(uStack_248 + 0x88) == (longlong *)0x0) {
        plVar13 = plStack_240;
      }
      lVar35 = *(longlong *)(uStack_248 + 0x48);
      lVar36 = (longlong)*(int *)(lVar35 + 0x24 + lVar27 * 0x28);
      iVar12 = *(int *)((longlong)plVar13 + lVar36 * 4);
      if (iVar12 == iVar29) {
        piVar23 = (int *)((longlong)plVar13 + lVar36 * 4);
      }
      else {
        do {
          piVar23 = (int *)(lVar35 + (longlong)iVar12 * 0x28 + 0x20);
          iVar12 = *piVar23;
        } while (iVar12 != iVar29);
      }
      *piVar23 = *(int *)(lVar35 + lVar27 * 0x28 + 0x20);
      plVar13 = *(longlong **)(*plVar4 + 0x18 + lVar27 * 0x28);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar13 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar23 = (int *)((longlong)plVar13 + 0xc);
          *piVar23 = *piVar23 + -1;
          UNLOCK();
          if (*piVar23 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      FUN_140d7e700(plVar4,iVar29);
      iVar12 = *(int *)(uStack_248 + 0x70);
LAB_144a6b609:
      uVar30 = uVar30 & ~(uint)uVar39;
      puVar22 = *(uint **)(uStack_248 + 0x68);
      if (*(uint **)(uStack_248 + 0x68) == (uint *)0x0) {
        puVar22 = (uint *)(param_1 + 0x58);
      }
      iVar29 = (int)uVar38;
      lVar35 = (longlong)iVar29;
      uVar19 = puVar22[lVar35] & uVar30;
      if (uVar19 == 0) {
        iVar20 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar20 = iVar12 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar21 = iVar20;
        if (iVar20 < iVar29) {
          iVar21 = iVar29;
        }
        if (iVar20 <= iVar29) break;
        lVar27 = 0;
        while( true ) {
          iVar28 = iVar28 + 0x20;
          uVar19 = puVar22[lVar35 + lVar27 + 1];
          if (uVar19 != 0) break;
          lVar27 = lVar27 + 1;
          if (iVar21 - lVar35 == lVar27) goto LAB_144a6bb0e;
        }
        uVar38 = (ulonglong)(iVar29 + (int)lVar27 + 1);
        uVar30 = 0xffffffff;
      }
      uVar39 = (ulonglong)(-uVar19 & uVar19);
      uVar3 = uVar39 * 2 + 1;
      lVar35 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      iVar29 = (iVar28 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
    } while (iVar29 < iVar12);
  }
LAB_144a6bb0e:
  if (puStack_1f8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14598bc0e FUN_14598bc0e body=243 status=ok
// SIG undefined FUN_14598bc0e(void)

void FUN_14598bc0e(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_14141775e();
  if (((cVar3 == '\0') && (cVar3 = FUN_140d7e770(param_1), cVar3 != '\0')) &&
     (cVar3 = FUN_14598bd02(param_1), cVar3 == '\0')) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_14598bd48(&local_48);
    lVar2 = local_48;
    lVar5 = (longlong)(int)uStack_40;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar6);
        if ((lVar1 != 0) && (*(char *)(lVar1 + 0xa8) == '\x01')) {
          puVar4 = *(undefined4 **)(lVar1 + 8);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = &DAT_14c9485f0;
          }
          FUN_144a7660c(puVar4,local_54,1);
          FUN_141417784(param_1,local_54,1);
        }
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14598bd02 FUN_14598bd02 body=70 status=ok
// SIG undefined FUN_14598bd02(void)

undefined8 FUN_14598bd02(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_144729dda(param_1 + 0x20);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x20);
    lVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
    if (lVar3 != 0) {
      uVar4 = FUN_1414875dc(lVar3);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14598bd48 FUN_14598bd48 body=150 status=ok
// SIG undefined FUN_14598bd48(void)

void FUN_14598bd48(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14cbcdc38;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbcdc38 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_148d8a8f6(param_1);
    }
    local_38 = &local_48;
    local_30 = &local_40;
    local_40 = FUN_1441aeb52;
    local_20 = &local_30;
    local_28 = FUN_14598c07a;
    local_48 = param_1;
    FUN_14598bde0(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598bde0 FUN_14598bde0 body=664 status=ok
// SIG undefined FUN_14598bde0(void)

void FUN_14598bde0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x54];
    }
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    iStack_6c = iStack_4c;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        lVar5 = *local_88;
        lVar8 = (longlong)iStack_6c;
        lVar6 = *(longlong *)(lVar5 + 0x10 + lVar8 * 0x20);
        if ((lVar6 != 0) &&
           ((cVar4 = FUN_140dddae6(lVar6 + 0x48), cVar4 != '\0' &&
            (plVar3 = *(longlong **)(*(longlong *)(lVar5 + lVar8 * 0x20 + 0x10) + 0x30),
            plVar3 != (longlong *)0x0)))) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_141417e7c();
          if ((lVar6 != 0) &&
             ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)))) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x3e];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        plVar3 = *(longlong **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
        if (plVar3 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_141417e7c();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14598c07a FUN_14598c07a body=67 status=ok
// SIG undefined FUN_14598c07a(void)

void FUN_14598c07a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598c0be FUN_14598c0be body=33 status=ok
// SIG undefined FUN_14598c0be(void)

undefined8 FUN_14598c0be(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598c0e0();
  FUN_140056680(param_1,uVar1);
  return param_1;
}



// FUNCTION 14598c0e0 FUN_14598c0e0 body=44 status=ok
// SIG undefined FUN_14598c0e0(void)

undefined2 * FUN_14598c0e0(void)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  lVar1 = FUN_1401af92e(FUN_1456d6024);
  if (*(int *)(*(longlong *)(lVar1 + 0x68) + 0x40) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(*(longlong *)(lVar1 + 0x68) + 0x38);
  }
  return puVar2;
}



// FUNCTION 14598c10c FUN_14598c10c body=72 status=ok
// SIG undefined FUN_14598c10c(void)

undefined8 * FUN_14598c10c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3d1990;
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598c15e FUN_14598c15e body=68 status=ok
// SIG undefined FUN_14598c15e(void)

void FUN_14598c15e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1474bc740();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14598c1ae FUN_14598c1ae body=66 status=ok
// SIG undefined FUN_14598c1ae(void)

undefined8 * FUN_14598c1ae(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 3;
  *param_1 = &PTR_FUN_14a5dfe70;
  param_1[5] = &PTR_LAB_14a5e0150;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  return param_1;
}



// FUNCTION 14598c1f0 FUN_14598c1f0 body=49 status=ok
// SIG undefined FUN_14598c1f0(void)

void FUN_14598c1f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145875cda(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014598c205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_1458063b4(&DAT_14cbc5538);
  FUN_1458f2ec4(uVar2);
  return;
}



// FUNCTION 14598c222 FUN_14598c222 body=28 status=ok
// SIG undefined FUN_14598c222(void)

void FUN_14598c222(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458063b4(&DAT_14cbc5538);
  FUN_1458f2ec4(uVar1);
  return;
}



// FUNCTION 14598c23e FUN_14598c23e body=40 status=ok
// SIG undefined FUN_14598c23e(void)

undefined8 FUN_14598c23e(undefined8 param_1,int param_2)

{
  FUN_14598c266();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598c266 FUN_14598c266 body=618 status=ok
// SIG undefined FUN_14598c266(void)

void FUN_14598c266(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bd9b760;
  param_1[5] = &PTR_FUN_14bd9bdc0;
  param_1[0x13] = &PTR_FUN_14bd9bde0;
  param_1[0x15] = &PTR_FUN_14bd9be10;
  param_1[0x16] = &PTR_FUN_14bd9be50;
  FUN_14598c4d0(param_1[0x1f9],*(undefined4 *)(param_1 + 0x1fa));
  if (param_1[0x1f9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[499] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ef] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[0x1ee];
  if (lVar1 != 0) {
    FUN_149682c4e(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[0x1ec] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ea] != 0) {
    FUN_1400020a8();
  }
  FUN_145820e5c(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1a6) = 0;
  if (param_1[0x1a5] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x19d);
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (param_1[0x19b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x193);
  if (param_1[0x191] != 0) {
    FUN_1400020a8();
  }
  if (param_1[399] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x189) = 0;
  if (param_1[0x188] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x180);
  if (param_1[0x17f] != 0) {
    FUN_1400020a8();
  }
  FUN_14598c502(param_1);
  return;
}



// FUNCTION 14598c4d0 FUN_14598c4d0 body=49 status=ok
// SIG undefined FUN_14598c4d0(void)

void FUN_14598c4d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14598c502 FUN_14598c502 body=864 status=ok
// SIG undefined FUN_14598c502(void)

void FUN_14598c502(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bdc35c0;
  param_1[5] = &PTR_FUN_14bdc3c10;
  param_1[0x13] = &PTR_FUN_14bdc3c30;
  param_1[0x15] = &PTR_FUN_14bdc3c60;
  param_1[0x16] = &PTR_FUN_14bdc3ca0;
  if (param_1[0x16a] != 0) {
    plVar4 = param_1 + 0x16e;
    if ((longlong *)param_1[0x16c] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x16c];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (param_1[0x162] != 0) {
    plVar4 = param_1 + 0x166;
    if ((longlong *)param_1[0x164] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x164];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (param_1[0x156] != 0) {
    plVar4 = param_1 + 0x15a;
    if ((longlong *)param_1[0x158] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x158];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (param_1[0x14e] != 0) {
    plVar4 = param_1 + 0x152;
    if ((longlong *)param_1[0x150] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x150];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (param_1[300] != 0) {
    plVar4 = param_1 + 0x130;
    if ((longlong *)param_1[0x12e] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x12e];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (param_1[0xfa] != 0) {
    plVar4 = param_1 + 0xfe;
    if ((longlong *)param_1[0xfc] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0xfc];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (param_1[200] != 0) {
    plVar4 = param_1 + 0xcc;
    if ((longlong *)param_1[0xca] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0xca];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_14598c95c(param_1[0x75],*(undefined4 *)(param_1 + 0x76));
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x74];
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
  puVar3 = (undefined8 *)param_1[0x70];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x6e];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined4 *)(param_1 + 0x6d) = 0;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_14598c896(param_1 + 100);
  *(undefined4 *)(param_1 + 99) = 0;
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  FUN_14598c8cc(param_1 + 0x5a);
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_14598c896(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_14598c8cc(param_1 + 0x46);
  FUN_14598c867(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_14598c867(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 14598c862 thunk_FUN_1411412f4 body=5 status=ok
// SIG undefined thunk_FUN_1411412f4(void)

void thunk_FUN_1411412f4(void)

{
  FUN_1411412f4();
  return;
}



// FUNCTION 14598c867 FUN_14598c867 body=46 status=ok
// SIG undefined FUN_14598c867(void)

void FUN_14598c867(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14598c896 FUN_14598c896 body=53 status=ok
// SIG undefined FUN_14598c896(void)

void FUN_14598c896(longlong *param_1)

{
  FUN_14598c99c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14598c8cc FUN_14598c8cc body=53 status=ok
// SIG undefined FUN_14598c8cc(void)

void FUN_14598c8cc(longlong *param_1)

{
  FUN_14598c902();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14598c902 FUN_14598c902 body=90 status=ok
// SIG undefined FUN_14598c902(void)

void FUN_14598c902(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14598c95c FUN_14598c95c body=64 status=ok
// SIG undefined FUN_14598c95c(void)

void FUN_14598c95c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14598c99c FUN_14598c99c body=351 status=ok
// SIG undefined FUN_14598c99c(void)

void FUN_14598c99c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      puVar2 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14598cb04 FUN_14598cb04 body=127 status=ok
// SIG undefined FUN_14598cb04(void)

undefined8 * FUN_14598cb04(undefined8 *param_1)

{
  FUN_140c8816c();
  *param_1 = &PTR_FUN_14b834910;
  param_1[6] = &PTR_LAB_14b834bd0;
  param_1[7] = &PTR_LAB_14b834c60;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_144a7a8f6(param_1 + 0x10);
  FUN_144a63cba(param_1 + 0x12);
  param_1[0x17] = DAT_14c948618;
  *(undefined4 *)(param_1 + 0x18) = DAT_14c948620;
  return param_1;
}



// FUNCTION 14598cb84 FUN_14598cb84 body=54 status=ok
// SIG undefined FUN_14598cb84(void)

undefined1 FUN_14598cb84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14598cbba(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 14598cbba FUN_14598cbba body=139 status=ok
// SIG undefined FUN_14598cbba(void)

undefined8 * FUN_14598cbba(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  
  *param_1 = *param_2;
  FUN_1403ed422(param_1 + 1,param_2 + 1);
  lVar5 = param_2[4];
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = param_2[4];
    }
  }
  bVar4 = DAT_14c950c29;
  param_1[4] = lVar5;
  lVar5 = param_2[5];
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = param_2[5];
    }
  }
  param_1[5] = lVar5;
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 14598cc54 FUN_14598cc54 body=40 status=ok
// SIG undefined FUN_14598cc54(void)

undefined8 FUN_14598cc54(undefined8 param_1,int param_2)

{
  FUN_14598cc7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598cc7c FUN_14598cc7c body=139 status=ok
// SIG undefined FUN_14598cc7c(void)

void FUN_14598cc7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b945c60;
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x6a] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x6a] + 0x50));
  }
  if ((param_1[100] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[100] + 0x50));
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_140cf001e(param_1);
  return;
}



// FUNCTION 14598cd08 FUN_14598cd08 body=26 status=ok
// SIG undefined FUN_14598cd08(void)

void FUN_14598cd08(undefined8 param_1)

{
  FUN_1401cd71c();
  FUN_14598cd22(param_1);
  return;
}



// FUNCTION 14598cd22 FUN_14598cd22 body=166 status=ok
// SIG undefined FUN_14598cd22(void)

void FUN_14598cd22(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_30,"FGbxUIEvent_CSP_WidgetTrigger",1);
    FUN_1401cd85c(lVar1,local_30,param_1 + 0x278);
    FUN_1446ddc76(&local_38,"FGbxUIEvent_CSP_SetWidgetActive",1);
    FUN_1401cd85c(lVar1,local_38,param_1 + 0x270);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598cdca FUN_14598cdca body=457 status=ok
// SIG undefined FUN_14598cdca(void)

void FUN_14598cdca(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)FUN_141535576(*(undefined8 *)(param_1 + 0x10));
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      local_48 = FUN_1457be128;
      local_40 = 0;
      FUN_14598cf94(lVar2 + 0x38,&local_38,param_1);
      *(undefined8 *)(param_1 + 0x88) = local_38;
    }
    if (*(longlong *)(param_1 + 0x90) == 0) {
      local_48 = FUN_1457be128;
      local_40 = 0;
      FUN_14598cf94(lVar3 + 0x38,&local_38,param_1);
      *(undefined8 *)(param_1 + 0x90) = local_38;
    }
    if (*(longlong *)(param_1 + 0x98) == 0) {
      local_48 = FUN_1457be128;
      local_40 = 0;
      FUN_14598cf94(lVar2 + 8,&local_38,param_1);
      *(undefined8 *)(param_1 + 0x98) = local_38;
    }
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      local_48 = FUN_1457be128;
      local_40 = 0;
      FUN_14598cf94(lVar2 + 0x20,&local_38,param_1);
      *(undefined8 *)(param_1 + 0xa8) = local_38;
    }
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      local_48 = FUN_1457be128;
      local_40 = 0;
      FUN_14598cf94(lVar3 + 8,&local_38,param_1);
      *(undefined8 *)(param_1 + 0xa0) = local_38;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      local_48 = FUN_1457be128;
      local_40 = 0;
      FUN_14598cf94(lVar3 + 0x20,&local_38,param_1);
      *(undefined8 *)(param_1 + 0xb0) = local_38;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598cf94 FUN_14598cf94 body=237 status=ok
// SIG undefined FUN_14598cf94(void)

undefined8
FUN_14598cf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14b528a00;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b528990;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_14598d082(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598d082 FUN_14598d082 body=216 status=ok
// SIG undefined FUN_14598d082(void)

undefined8 * FUN_14598d082(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14598d16c FUN_14598d16c body=53 status=ok
// SIG undefined FUN_14598d16c(void)

void FUN_14598d16c(longlong *param_1)

{
  FUN_14598d1a2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14598d1a2 FUN_14598d1a2 body=371 status=ok
// SIG undefined FUN_14598d1a2(void)

void FUN_14598d1a2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x10 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14598d316 FUN_14598d316 body=254 status=ok
// SIG undefined FUN_14598d316(void)

undefined8
FUN_14598d316(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b417790;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9afe70;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14598d416(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598d416 FUN_14598d416 body=216 status=ok
// SIG undefined FUN_14598d416(void)

undefined8 * FUN_14598d416(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14598d4fc FUN_14598d4fc body=55 status=ok
// SIG undefined FUN_14598d4fc(void)

void FUN_14598d4fc(longlong *param_1)

{
  FUN_141417ebc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14598d534 FUN_14598d534 body=68 status=ok
// SIG undefined FUN_14598d534(void)

undefined1 FUN_14598d534(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xb5) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(uint *)(lVar1 + 0x98) < 2) {
    uVar2 = FUN_140343d7a();
    FUN_1414180c0(uVar2,lVar1 + 0x80,param_1 + 0xd8,0);
  }
  return 1;
}



// FUNCTION 14598d578 FUN_14598d578 body=91 status=ok
// SIG undefined FUN_14598d578(void)

undefined8 FUN_14598d578(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140437988();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140437988();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014598d5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14598d5d4 FUN_14598d5d4 body=105 status=ok
// SIG undefined FUN_14598d5d4(void)

undefined8 * FUN_14598d5d4(longlong param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb0);
  memset(_Dst,0,0xb0);
  FUN_14598d63e(_Dst);
  *_Dst = &PTR_FUN_149f75da0;
  if ((*(byte *)((longlong)_Dst + 0x41) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  _Dst[3] = param_1;
  FUN_141300b68(param_1 + 0x70,_Dst);
  return _Dst;
}



// FUNCTION 14598d63e FUN_14598d63e body=166 status=ok
// SIG undefined FUN_14598d63e(void)

undefined8 * FUN_14598d63e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  *param_1 = &PTR_FUN_149f75e70;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xf] = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 14598d6f2 FUN_14598d6f2 body=40 status=ok
// SIG undefined FUN_14598d6f2(void)

undefined8 FUN_14598d6f2(undefined8 param_1,int param_2)

{
  FUN_14598d71a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598d71a FUN_14598d71a body=101 status=ok
// SIG undefined FUN_14598d71a(void)

void FUN_14598d71a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b80e180;
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
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14598d780 FUN_14598d780 body=40 status=ok
// SIG undefined FUN_14598d780(void)

undefined8 FUN_14598d780(undefined8 param_1,int param_2)

{
  FUN_14598d7a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598d7a8 FUN_14598d7a8 body=195 status=ok
// SIG undefined FUN_14598d7a8(void)

void FUN_14598d7a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abdc3a0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_14598d86c(param_1 + 0x28);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a79c4c0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14598d86c FUN_14598d86c body=53 status=ok
// SIG undefined FUN_14598d86c(void)

void FUN_14598d86c(longlong *param_1)

{
  FUN_14598d8a2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14598d8a2 FUN_14598d8a2 body=90 status=ok
// SIG undefined FUN_14598d8a2(void)

void FUN_14598d8a2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 14598d8fc FUN_14598d8fc body=339 status=ok
// SIG undefined FUN_14598d8fc(void)

void FUN_14598d8fc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x30;
  lVar2 = FUN_1400d7050();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        local_40 = (code *)&LAB_14579ce78;
        local_38 = 0;
        FUN_14598da50(lVar2 + 0x3490,&local_30,lVar1);
        *(undefined8 *)(param_1 + 0x18) = local_30;
      }
      if (*(longlong *)(param_1 + 0x20) == 0) {
        local_40 = (code *)&LAB_14579ce82;
        local_38 = 0;
        FUN_14598da50(lVar2 + 0x34a8,&local_30,lVar1);
        *(undefined8 *)(param_1 + 0x20) = local_30;
      }
      if (*(longlong *)(param_1 + 0x28) == 0) {
        local_40 = FUN_140d2a46a;
        local_38 = 0;
        FUN_14598da50(lVar2 + 0x34c0,&local_30,lVar1);
        *(undefined8 *)(param_1 + 0x28) = local_30;
      }
    }
  }
  local_40 = FUN_145d44ea0;
  local_38 = 0;
  FUN_14598dc42(&local_30,lVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598da50 FUN_14598da50 body=254 status=ok
// SIG undefined FUN_14598da50(void)

undefined8
FUN_14598da50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b968270;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b74a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14598db50(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598db50 FUN_14598db50 body=216 status=ok
// SIG undefined FUN_14598db50(void)

undefined8 * FUN_14598db50(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14598dc2a FUN_14598dc2a body=24 status=ok
// SIG undefined FUN_14598dc2a(void)

bool FUN_14598dc2a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14598dc42 FUN_14598dc42 body=248 status=ok
// SIG undefined FUN_14598dc42(void)

undefined8 FUN_14598dc42(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9b7510;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598dd3c FUN_14598dd3c body=157 status=ok
// SIG undefined FUN_14598dd3c(void)

longlong * FUN_14598dd3c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  undefined1 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &DAT_149e02010;
  local_20 = 2;
  FUN_14598ddda(local_38);
  if ((int)param_1[1] == 1) {
    param_1 = (longlong *)*param_1;
    plVar1 = (longlong *)*param_1;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)param_1[1];
  }
  else {
    FUN_14598de80(param_2,local_38,param_1);
  }
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598ddda FUN_14598ddda body=165 status=ok
// SIG undefined FUN_14598ddda(void)

undefined8 * FUN_14598ddda(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_2 + 1) == 0) {
    FUN_140e82300();
    plVar1 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    puVar2 = &DAT_14c844848;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  else {
    FUN_14006620a(&local_28,*param_2);
    local_38 = local_28;
    uStack_34 = uStack_24;
    uStack_30 = uStack_20;
    uStack_2c = uStack_1c;
    FUN_140009cf2(param_1,&local_38);
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_1400020a8();
    }
    puVar2 = (uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = *puVar2 | 2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598de80 FUN_14598de80 body=811 status=ok
// SIG undefined FUN_14598de80(void)

undefined8 * FUN_14598de80(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 *local_b0;
  longlong local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)param_3[1] < 1) {
    FUN_140e82300();
    plVar1 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  }
  else {
    FUN_140e82300();
    local_78 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      (**(code **)(*DAT_14c844840 + 8))();
    }
    local_70 = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    iVar3 = (int)param_3[1];
    uVar7 = (ulonglong)iVar3;
    if ((longlong)uVar7 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3 + 1);
    }
    if (-1 < iVar3) {
      FUN_14598e1ac(local_98 + 2);
    }
    local_68 = 4;
    local_58 = (longlong *)*param_2;
    local_b0 = param_1;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 8))();
    }
    local_50 = (undefined4)param_2[1];
    FUN_140056680(local_a8,L"Delimiter");
    FUN_140233eec(local_98 + 2,local_a8,&local_68);
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (0 < iVar3) {
      lVar6 = 8;
      uVar5 = 0;
      do {
        lVar4 = *param_3;
        local_68 = 4;
        local_58 = *(longlong **)(lVar4 + -8 + lVar6);
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 8))();
        }
        local_50 = *(undefined4 *)(lVar4 + lVar6);
        FUN_140002266(local_a8,&DAT_149e063bc,uVar5 & 0xffffffff);
        FUN_140233eec(local_98 + 2,local_a8,&local_68);
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x10))();
        }
        FUN_140002184(local_98,0x7b);
        FUN_144a83b10(local_98,uVar5 & 0xffffffff);
        FUN_140002184(local_98,0x7d);
        uVar5 = uVar5 + 1;
        if (uVar5 < uVar7) {
          FUN_1400020e8(local_98,L"{Delimiter}",0xb);
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar7 != uVar5);
    }
    FUN_145aa9352(&local_68,local_98);
    FUN_140008f88(&local_78,&local_68);
    if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
    }
    param_1 = local_b0;
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_68,&local_78,1);
    local_b8 = 0;
    FUN_140233db2(param_1,&local_68,local_98 + 2,0);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    FUN_14010f8af(local_98[2],local_98[3] & 0xffffffff);
    if (local_98[2] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598e1ac FUN_14598e1ac body=113 status=ok
// SIG undefined FUN_14598e1ac(void)

void FUN_14598e1ac(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 14598e21e FUN_14598e21e body=149 status=ok
// SIG undefined FUN_14598e21e(void)

longlong FUN_14598e21e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_141418d40();
  if (lVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_14598e2b4((longlong *)(param_1 + 0x30),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = (longlong)iVar1 * 0x80;
    lVar3 = lVar2 + lVar4;
    FUN_140dcef8a(lVar3,param_2);
    *(undefined ***)(lVar2 + lVar4) = &PTR_FUN_14b24d648;
    FUN_1411dcb92(lVar3,param_2 + 0x30);
    if ((*(byte *)(lVar2 + 0x78 + lVar4) & 1) != 0) {
      FUN_145ae3aee(param_1 + 0x40,lVar3);
    }
  }
  return lVar3;
}



// FUNCTION 14598e2b4 FUN_14598e2b4 body=132 status=ok
// SIG undefined FUN_14598e2b4(void)

void FUN_14598e2b4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14598e338 FUN_14598e338 body=243 status=ok
// SIG undefined FUN_14598e338(void)

void FUN_14598e338(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1400d7050();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      param_1 = param_1 + -0x30;
      local_40 = FUN_1411e6624;
      local_38 = 0;
      FUN_14598e62a(lVar1 + 0xdd0,local_30,param_1,&local_40);
      local_40 = FUN_1456e9a5e;
      local_38 = 0;
      FUN_14598e42c(lVar1 + 0xde8,local_30,param_1,&local_40);
      local_40 = FUN_1456e99ac;
      local_38 = 0;
      FUN_14598e42c(lVar1 + 0xe00,local_30,param_1,&local_40);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598e42c FUN_14598e42c body=254 status=ok
// SIG undefined FUN_14598e42c(void)

undefined8
FUN_14598e42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9aeb10;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9aeaa0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14598e52c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598e52c FUN_14598e52c body=216 status=ok
// SIG undefined FUN_14598e52c(void)

undefined8 * FUN_14598e52c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14598e612 FUN_14598e612 body=24 status=ok
// SIG undefined FUN_14598e612(void)

bool FUN_14598e612(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14598e62a FUN_14598e62a body=254 status=ok
// SIG undefined FUN_14598e62a(void)

undefined8
FUN_14598e62a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9aea30;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9ae9c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14598e72a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598e72a FUN_14598e72a body=216 status=ok
// SIG undefined FUN_14598e72a(void)

undefined8 * FUN_14598e72a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14598e810 FUN_14598e810 body=24 status=ok
// SIG undefined FUN_14598e810(void)

bool FUN_14598e810(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14598e828 FUN_14598e828 body=24 status=ok
// SIG undefined FUN_14598e828(void)

bool FUN_14598e828(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14598e840 FUN_14598e840 body=87 status=ok
// SIG undefined FUN_14598e840(void)

void FUN_14598e840(longlong param_1)

{
  FUN_141418d4a();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140872868(param_1 + 0x17e0);
  }
  *(undefined1 *)(param_1 + 0x1d79) = 1;
  FUN_14067171c(param_1 + 0x1d40);
  *(undefined8 *)(param_1 + 0x1d40) = 0;
  FUN_14078a7c0(param_1 + 0x568);
  FUN_140872622(param_1);
  return;
}



// FUNCTION 14598e898 FUN_14598e898 body=39 status=ok
// SIG undefined FUN_14598e898(void)

void FUN_14598e898(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014598e8bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14598e8c0 FUN_14598e8c0 body=106 status=ok
// SIG undefined FUN_14598e8c0(void)

void FUN_14598e8c0(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e76e82();
  local_14 = 0;
  local_28 = DAT_14cbc18c8;
  local_20 = 0xffffffff;
  FUN_141094e00(param_1 + 0x4d8,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598e932 FUN_14598e932 body=228 status=ok
// SIG undefined FUN_14598e932(void)

longlong FUN_14598e932(void)

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
  if (DAT_14c99d7c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_146ff03be;
    local_40 = FUN_146294be0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AssetRegistry",L"AssetRegistry",&DAT_14c99d7c0,FUN_146294bbe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99d7c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598ea1e FUN_14598ea1e body=228 status=ok
// SIG undefined FUN_14598ea1e(void)

longlong FUN_14598ea1e(void)

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
  if (DAT_14c99f570 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147052d20;
    local_40 = FUN_14629b752;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementFramework",L"TestTypedElementInterfaceA",&DAT_14c99f570,
                  FUN_14629b730);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f570;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598eb0a FUN_14598eb0a body=228 status=ok
// SIG undefined FUN_14598eb0a(void)

longlong FUN_14598eb0a(void)

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
  if (DAT_14c99f860 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147060dd9;
    local_40 = FUN_14629cc00;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementRuntime",L"TypedElementPrimitiveCustomDataInterface",
                  &DAT_14c99f860,FUN_14629cbde);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f860;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598ebf6 FUN_14598ebf6 body=228 status=ok
// SIG undefined FUN_14598ebf6(void)

longlong FUN_14598ebf6(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a5820 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1470d1d2b;
    local_40 = FUN_1462aec39;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxPreStreamDataAsset",&DAT_14c9a5820,&DAT_1470d1d2a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5820;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598ece2 FUN_14598ece2 body=228 status=ok
// SIG undefined FUN_14598ece2(void)

longlong FUN_14598ece2(void)

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
  if (DAT_14c9ac410 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_14712ab4b;
    local_40 = &LAB_145c66cb5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x660;
    FUN_14081cfa3(L"/Script/Renderer",L"SparseVolumeTextureViewerComponent",&DAT_14c9ac410,
                  &DAT_14712ab4a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ac410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598edce FUN_14598edce body=228 status=ok
// SIG undefined FUN_14598edce(void)

longlong FUN_14598edce(void)

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
  if (DAT_14caa15c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_14744a809;
    local_40 = FUN_146321e11;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/Foliage",L"ProceduralFoliageComponent",&DAT_14caa15c0,&DAT_14744a808);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa15c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598eeba FUN_14598eeba body=228 status=ok
// SIG undefined FUN_14598eeba(void)

longlong FUN_14598eeba(void)

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
  if (DAT_14caa1b60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432411d6;
    local_38 = &LAB_14745201d;
    local_40 = &LAB_145ad1667;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x790;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeMeshProxyComponent",&DAT_14caa1b60,&DAT_14745201c)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1b60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598efa6 FUN_14598efa6 body=228 status=ok
// SIG undefined FUN_14598efa6(void)

longlong FUN_14598efa6(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8cf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14632afba;
    local_38 = &LAB_1474901a1;
    local_40 = FUN_14632b076;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"FieldSystemMetaDataIteration",&DAT_14caa8cf0,
                  FUN_14632b054);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8cf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f092 FUN_14598f092 body=228 status=ok
// SIG undefined FUN_14598f092(void)

longlong FUN_14598f092(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8d10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14632afba;
    local_38 = &LAB_147490242;
    local_40 = FUN_14632b134;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"FieldSystemMetaDataProcessingResolution",
                  &DAT_14caa8d10,FUN_14632b112);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8d10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f17e FUN_14598f17e body=228 status=ok
// SIG undefined FUN_14598f17e(void)

longlong FUN_14598f17e(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8d30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14632afba;
    local_38 = &LAB_147490393;
    local_40 = FUN_14632b1f2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"FieldSystemMetaDataFilter",&DAT_14caa8d30,
                  FUN_14632b1d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8d30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f26a FUN_14598f26a body=228 status=ok
// SIG undefined FUN_14598f26a(void)

longlong FUN_14598f26a(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8d90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14632b264;
    local_38 = &LAB_1474903a3;
    local_40 = FUN_14632b378;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"FieldNodeVector",&DAT_14caa8d90,&DAT_1474903a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8d90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f356 FUN_14598f356 body=228 status=ok
// SIG undefined FUN_14598f356(void)

longlong FUN_14598f356(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8db0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d4056;
    local_38 = &LAB_147490447;
    local_40 = FUN_14632b468;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"UniformInteger",&DAT_14caa8db0,FUN_14632b446);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8db0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f442 FUN_14598f442 body=228 status=ok
// SIG undefined FUN_14598f442(void)

longlong FUN_14598f442(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8dd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d4056;
    local_38 = &LAB_147490655;
    local_40 = &LAB_145cb3376;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"RadialIntMask",&DAT_14caa8dd0,FUN_14632b514);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8dd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f52e FUN_14598f52e body=228 status=ok
// SIG undefined FUN_14598f52e(void)

longlong FUN_14598f52e(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8df0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587d9c0;
    local_38 = &LAB_1474906fd;
    local_40 = FUN_14632b5bc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"UniformScalar",&DAT_14caa8df0,FUN_14632b59a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8df0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f61a FUN_14598f61a body=228 status=ok
// SIG undefined FUN_14598f61a(void)

longlong FUN_14598f61a(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8e10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587d9c0;
    local_38 = &LAB_1474909b4;
    local_40 = &LAB_145cd596e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"WaveScalar",&DAT_14caa8e10,FUN_14632b668);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8e10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f706 FUN_14598f706 body=228 status=ok
// SIG undefined FUN_14598f706(void)

longlong FUN_14598f706(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8e30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587d9c0;
    local_38 = &LAB_147490c81;
    local_40 = &LAB_145cbc962;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"RadialFalloff",&DAT_14caa8e30,FUN_14632b6ee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8e30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f7f2 FUN_14598f7f2 body=228 status=ok
// SIG undefined FUN_14598f7f2(void)

longlong FUN_14598f7f2(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8e50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587d9c0;
    local_38 = &LAB_147490fb0;
    local_40 = &LAB_145d3132c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"PlaneFalloff",&DAT_14caa8e50,FUN_14632b774);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8e50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f8de FUN_14598f8de body=228 status=ok
// SIG undefined FUN_14598f8de(void)

longlong FUN_14598f8de(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8e70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587d9c0;
    local_38 = &LAB_1474912a0;
    local_40 = &LAB_145c8f619;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 400;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"BoxFalloff",&DAT_14caa8e70,FUN_14632b7fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8e70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598f9ca FUN_14598f9ca body=228 status=ok
// SIG undefined FUN_14598f9ca(void)

longlong FUN_14598f9ca(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8e90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587d9c0;
    local_38 = &LAB_147491468;
    local_40 = &LAB_145d70a6a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x180;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"NoiseField",&DAT_14caa8e90,FUN_14632b880);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8e90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598fab6 FUN_14598fab6 body=228 status=ok
// SIG undefined FUN_14598fab6(void)

longlong FUN_14598fab6(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8eb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14598f264;
    local_38 = &LAB_147491575;
    local_40 = FUN_14632b928;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"UniformVector",&DAT_14caa8eb0,FUN_14632b906);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8eb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598fba2 FUN_14598fba2 body=228 status=ok
// SIG undefined FUN_14598fba2(void)

longlong FUN_14598fba2(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8ed0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14598f264;
    local_38 = &LAB_147491681;
    local_40 = FUN_14632ba0a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"RadialVector",&DAT_14caa8ed0,FUN_14632b9e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8ed0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598fc8e FUN_14598fc8e body=228 status=ok
// SIG undefined FUN_14598fc8e(void)

longlong FUN_14598fc8e(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8ef0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14598f264;
    local_38 = &LAB_147491729;
    local_40 = FUN_14632baec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"RandomVector",&DAT_14caa8ef0,FUN_14632baca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8ef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598fd7a FUN_14598fd7a body=228 status=ok
// SIG undefined FUN_14598fd7a(void)

longlong FUN_14598fd7a(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8f10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14632b264;
    local_38 = &LAB_14749192c;
    local_40 = FUN_14632bbba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"OperatorField",&DAT_14caa8f10,FUN_14632bb98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8f10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598fe66 FUN_14598fe66 body=228 status=ok
// SIG undefined FUN_14598fe66(void)

longlong FUN_14598fe66(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8f30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d4056;
    local_38 = &LAB_1474919ec;
    local_40 = FUN_14632bc98;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"ToIntegerField",&DAT_14caa8f30,FUN_14632bc76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8f30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598ff52 FUN_14598ff52 body=228 status=ok
// SIG undefined FUN_14598ff52(void)

longlong FUN_14598ff52(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8f50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587d9c0;
    local_38 = &LAB_147491aac;
    local_40 = FUN_14632bd66;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"ToFloatField",&DAT_14caa8f50,FUN_14632bd44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8f50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


