// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c4b434 FUN_143c4b434 body=159 status=ok
// SIG undefined FUN_143c4b434(void)

void FUN_143c4b434(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14b0d1d50;
  return;
}



// FUNCTION 143c4b4d4 FUN_143c4b4d4 body=57 status=ok
// SIG undefined FUN_143c4b4d4(void)

void FUN_143c4b4d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aee8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aee8 = FUN_140002ddd(FUN_1464cd3e3,uVar1,L"GbxBrainAspect_UsePerch");
  }
  return;
}



// FUNCTION 143c4b51c FUN_143c4b51c body=57 status=ok
// SIG undefined FUN_143c4b51c(void)

void FUN_143c4b51c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5af00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5af00 = FUN_140002ddd(FUN_1464cd475,uVar1,L"GbxBrainAspectSettings_UseUsable");
  }
  return;
}



// FUNCTION 143c4b580 FUN_143c4b580 body=185 status=ok
// SIG undefined FUN_143c4b580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c4b580(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14b0d3100;
  lVar3 = 0xb99;
  do {
    *(undefined8 *)((longlong)param_1 + lVar3 + -0x69) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x61);
    *puVar1 = 0x2000000000;
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)((longlong)param_1 + lVar3 + -0x51) = 0;
    uVar2 = _DAT_14cb5abe8;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x49);
    *puVar1 = _DAT_14cb5abe0;
    puVar1[1] = uVar2;
    *(undefined8 *)((longlong)param_1 + lVar3 + -0x39) = DAT_14cb5abf0;
    uVar2 = _DAT_14cb5abe8;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x31);
    *puVar1 = _DAT_14cb5abe0;
    puVar1[1] = uVar2;
    *(undefined8 *)((longlong)param_1 + lVar3 + -0x21) = DAT_14cb5abf0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x19);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + -9) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + lVar3 + -1) = 0;
    lVar3 = lVar3 + 0xb70;
  } while (lVar3 != 0x2279);
  *(undefined4 *)(param_1 + 0x2e2) = 0x459c4000;
  param_1[0x2e3] = 0;
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0;
  param_1[0x2e6] = 0;
  param_1[0x2e7] = 0;
  param_1[0x2e8] = 0;
  return;
}



// FUNCTION 143c4b63a FUN_143c4b63a body=57 status=ok
// SIG undefined FUN_143c4b63a(void)

void FUN_143c4b63a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5af78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5af78 = FUN_140002ddd(FUN_1464cd5e9,uVar1,L"GbxBrainService_LocationTracker");
  }
  return;
}



// FUNCTION 143c4b682 FUN_143c4b682 body=57 status=ok
// SIG undefined FUN_143c4b682(void)

void FUN_143c4b682(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5af90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5af90 = FUN_140002ddd(FUN_1464cd67b,uVar1,L"GbxBrainTaskSettings_AOEAttack");
  }
  return;
}



// FUNCTION 143c4b6d8 FUN_143c4b6d8 body=57 status=ok
// SIG undefined FUN_143c4b6d8(void)

void FUN_143c4b6d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aff0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aff0 = FUN_140002ddd(FUN_1464cd7c5,uVar1,L"GbxBrainTaskSettings_LeapAttack");
  }
  return;
}



// FUNCTION 143c4b711 FUN_143c4b711 body=843 status=ok
// SIG undefined FUN_143c4b711(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c4b711(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cb5abc8 = 0x47efffffe0000000;
  _DAT_14cb5abd0 = 0x47efffffe0000000;
  _DAT_14cb5abd8 = 0x47efffffe0000000;
  _DAT_14cb5abe0 = 0x47efffffe0000000;
  _DAT_14cb5abe8 = 0x47efffffe0000000;
  DAT_14cb5abf0 = 0x47efffffe0000000;
  _DAT_14cb5abf8 = 0x47efffffe0000000;
  _DAT_14cb5ac00 = 0x47efffffe0000000;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c9de0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ca050);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ca3c0);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5acb0 = (ulonglong)uVar1;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ca6c0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ca9c0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0cab20);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b0cb170;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0cb190);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0cb480);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b0cbdb0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0cbdd0);
  uStack_58 = 2;
  local_60 = &PTR_FUN_14b0cc6b0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0cc6f0);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b0ccb60;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ccb80);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0cce60);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0cd0a0);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b0cd200;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0cd220);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b0cd370;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0cd390);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0cd900);
  uStack_58 = 2;
  local_60 = &PTR_FUN_14b0ce5f0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ce630);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c4ba60 FUN_143c4ba60 body=55 status=ok
// SIG undefined FUN_143c4ba60(void)

void FUN_143c4ba60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b0c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b0c8 = FUN_14171c317(FUN_1464ce298,uVar1,L"EOrbitRotation");
  }
  return;
}



// FUNCTION 143c4ba97 FUN_143c4ba97 body=55 status=ok
// SIG undefined FUN_143c4ba97(void)

void FUN_143c4ba97(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b110 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b110 = FUN_14171c317(FUN_1464ce3f4,uVar1,L"EPerchRotationMode");
  }
  return;
}



// FUNCTION 143c4bace FUN_143c4bace body=55 status=ok
// SIG undefined FUN_143c4bace(void)

void FUN_143c4bace(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b170 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b170 = FUN_14171c317(FUN_1464ce5e6,uVar1,L"EGbxViewTargetRotationUpdateMethod");
  }
  return;
}



// FUNCTION 143c4bb05 FUN_143c4bb05 body=55 status=ok
// SIG undefined FUN_143c4bb05(void)

void FUN_143c4bb05(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b1d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b1d0 = FUN_14171c317(FUN_1464ce73a,uVar1,L"EGbxCameraShakeOscillatorUnits");
  }
  return;
}



// FUNCTION 143c4bb3c FUN_143c4bb3c body=55 status=ok
// SIG undefined FUN_143c4bb3c(void)

void FUN_143c4bb3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b230 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b230 = FUN_14171c317(FUN_1464ce84d,uVar1,L"EGbxCapitalType");
  }
  return;
}



// FUNCTION 143c4bb73 FUN_143c4bb73 body=55 status=ok
// SIG undefined FUN_143c4bb73(void)

void FUN_143c4bb73(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b248 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b248 = FUN_14171c317(FUN_1464ce87c,uVar1,L"EGbxCapitalSource");
  }
  return;
}



// FUNCTION 143c4bbaa FUN_143c4bbaa body=55 status=ok
// SIG undefined FUN_143c4bbaa(void)

void FUN_143c4bbaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b290 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b290 = FUN_14171c317(FUN_1464ce9a4,uVar1,L"ECharacterDeathType");
  }
  return;
}



// FUNCTION 143c4bbe1 FUN_143c4bbe1 body=55 status=ok
// SIG undefined FUN_143c4bbe1(void)

void FUN_143c4bbe1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b2a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b2a8 = FUN_14171c317(FUN_1464ce9d5,uVar1,L"ERagdollState");
  }
  return;
}



// FUNCTION 143c4bc18 FUN_143c4bc18 body=47 status=ok
// SIG undefined FUN_143c4bc18(void)

longlong FUN_143c4bc18(void)

{
  if (DAT_14cb5b2b8 == 0) {
    FUN_14000fc22(&DAT_14cb5b2b8,&PTR_FUN_14b0d76b0);
  }
  return DAT_14cb5b2b8;
}



// FUNCTION 143c4bc48 FUN_143c4bc48 body=718 status=ok
// SIG undefined FUN_143c4bc48(void)

void FUN_143c4bc48(longlong param_1,longlong param_2)

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
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78 [5];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_48 = 0;
  uStack_44 = 0;
  local_78[4] = 0;
  local_50 = 0;
  local_4c = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_3c = 0xffffffff;
  local_38 = 0;
  local_30 = 0xffffffff;
  local_2c = 0;
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
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_78);
            goto LAB_143c4be28;
          }
        }
        _Src = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != local_78) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_78,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(local_78,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = (undefined4)plVar8[6];
        local_88 = 0;
        FUN_1400746b0(plVar8,local_78,lVar4,1);
      }
      else {
        (*pcVar3)(plVar8,local_78,lVar4);
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
      FUN_14002ddda(uVar2,param_2,local_78);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_78);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_78[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_78);
    }
  }
LAB_143c4be28:
  plVar8 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x32cc) = 1;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = local_78;
  }
  *(bool *)(param_1 + 0x32cd) = (byte)(*(char *)((longlong)plVar8 + 0x4c) - 1U) < 2;
  FUN_1402c741b(local_78[4],local_50);
  if (local_78[4] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c4bf17 FUN_143c4bf17 body=228 status=ok
// SIG undefined FUN_143c4bf17(void)

longlong FUN_143c4bf17(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5b388 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141864c34;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146431698;
    local_38 = &LAB_1486775cb;
    local_40 = &LAB_1464cee35;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x3a20;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5b388;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c4bffc FUN_143c4bffc body=293 status=ok
// SIG undefined FUN_143c4bffc(void)

void FUN_143c4bffc(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = &DAT_14c846480;
  puVar4 = param_1;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = DAT_14c8462c8;
  param_1[0x13] = DAT_14c8462c0;
  param_1[0x14] = uVar1;
  param_1[0x15] = DAT_14c8462d0;
  uVar1 = DAT_14c8464e8;
  param_1[0x16] = DAT_14c8464e0;
  param_1[0x17] = uVar1;
  param_1[0x18] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0x200000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3ff00000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3ff00000;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0x3ff0000000000000;
  param_1[0x3b] = 0x3ff0000000000000;
  param_1[0x3c] = 0x3ff0000000000000;
  param_1[0x3d] = 0;
  return;
}



// FUNCTION 143c4c204 FUN_143c4c204 body=48 status=ok
// SIG undefined FUN_143c4c204(void)

longlong FUN_143c4c204(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c234 FUN_143c4c234 body=48 status=ok
// SIG undefined FUN_143c4c234(void)

longlong FUN_143c4c234(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x748;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c264 FUN_143c4c264 body=48 status=ok
// SIG undefined FUN_143c4c264(void)

longlong FUN_143c4c264(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x750;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c2a4 FUN_143c4c2a4 body=48 status=ok
// SIG undefined FUN_143c4c2a4(void)

longlong FUN_143c4c2a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x878;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c37a FUN_143c4c37a body=48 status=ok
// SIG undefined FUN_143c4c37a(void)

longlong FUN_143c4c37a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1100;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c3ae FUN_143c4c3ae body=48 status=ok
// SIG undefined FUN_143c4c3ae(void)

longlong FUN_143c4c3ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1108;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c3ee FUN_143c4c3ee body=48 status=ok
// SIG undefined FUN_143c4c3ee(void)

longlong FUN_143c4c3ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1118;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c426 FUN_143c4c426 body=48 status=ok
// SIG undefined FUN_143c4c426(void)

longlong FUN_143c4c426(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1120;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c466 FUN_143c4c466 body=48 status=ok
// SIG undefined FUN_143c4c466(void)

longlong FUN_143c4c466(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1128;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c49e FUN_143c4c49e body=48 status=ok
// SIG undefined FUN_143c4c49e(void)

longlong FUN_143c4c49e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1130;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c4d6 FUN_143c4c4d6 body=48 status=ok
// SIG undefined FUN_143c4c4d6(void)

longlong FUN_143c4c4d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1138;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c516 FUN_143c4c516 body=48 status=ok
// SIG undefined FUN_143c4c516(void)

longlong FUN_143c4c516(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1140;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c556 FUN_143c4c556 body=48 status=ok
// SIG undefined FUN_143c4c556(void)

longlong FUN_143c4c556(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1148;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c58e FUN_143c4c58e body=48 status=ok
// SIG undefined FUN_143c4c58e(void)

longlong FUN_143c4c58e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1150;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c5c6 FUN_143c4c5c6 body=48 status=ok
// SIG undefined FUN_143c4c5c6(void)

longlong FUN_143c4c5c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1158;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c60e FUN_143c4c60e body=48 status=ok
// SIG undefined FUN_143c4c60e(void)

longlong FUN_143c4c60e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1160;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c646 FUN_143c4c646 body=48 status=ok
// SIG undefined FUN_143c4c646(void)

longlong FUN_143c4c646(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1168;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c686 FUN_143c4c686 body=48 status=ok
// SIG undefined FUN_143c4c686(void)

longlong FUN_143c4c686(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1170;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c6be FUN_143c4c6be body=48 status=ok
// SIG undefined FUN_143c4c6be(void)

longlong FUN_143c4c6be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1178;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c6fe FUN_143c4c6fe body=48 status=ok
// SIG undefined FUN_143c4c6fe(void)

longlong FUN_143c4c6fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1180;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c73e FUN_143c4c73e body=48 status=ok
// SIG undefined FUN_143c4c73e(void)

longlong FUN_143c4c73e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1188;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c77e FUN_143c4c77e body=48 status=ok
// SIG undefined FUN_143c4c77e(void)

longlong FUN_143c4c77e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1190;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c7be FUN_143c4c7be body=48 status=ok
// SIG undefined FUN_143c4c7be(void)

longlong FUN_143c4c7be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1198;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c7fe FUN_143c4c7fe body=48 status=ok
// SIG undefined FUN_143c4c7fe(void)

longlong FUN_143c4c7fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x11b0;
  FUN_1416a1074(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4c846 FUN_143c4c846 body=57 status=ok
// SIG undefined FUN_143c4c846(void)

void FUN_143c4c846(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b010 = FUN_140002ddd(FUN_1464ce017,uVar1,L"GbxBrainTaskSettings_MeleeAttack");
  }
  return;
}



// FUNCTION 143c4c88e FUN_143c4c88e body=343 status=ok
// SIG undefined FUN_143c4c88e(void)

void FUN_143c4c88e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x238);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x23] = 0;
  *(undefined4 *)((longlong)param_2 + 0x124) = 8;
  *(undefined4 *)((longlong)param_2 + 300) = 0xbf800000;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  param_2[0x42] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  *param_2 = &PTR_FUN_14b0d9600;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 143c4c9e6 FUN_143c4c9e6 body=57 status=ok
// SIG undefined FUN_143c4c9e6(void)

void FUN_143c4c9e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b028 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b028 = FUN_140002ddd(FUN_1464ce076,uVar1,L"GbxBrainTask_MeleeAttack");
  }
  return;
}



// FUNCTION 143c4ca58 FUN_143c4ca58 body=57 status=ok
// SIG undefined FUN_143c4ca58(void)

void FUN_143c4ca58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b0e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b0e0 = FUN_140002ddd(FUN_1464ce2ff,uVar1,L"GbxBrainTaskSettings_Orbit");
  }
  return;
}



// FUNCTION 143c4caa0 FUN_143c4caa0 body=57 status=ok
// SIG undefined FUN_143c4caa0(void)

void FUN_143c4caa0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b0f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b0f8 = FUN_140002ddd(FUN_1464ce395,uVar1,L"GbxBrainTaskSettings_Patrol");
  }
  return;
}



// FUNCTION 143c4caf6 FUN_143c4caf6 body=57 status=ok
// SIG undefined FUN_143c4caf6(void)

void FUN_143c4caf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b140 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b140 = FUN_140002ddd(FUN_1464ce4f1,uVar1,L"GbxBrainTaskSettings_RangedAttack");
  }
  return;
}



// FUNCTION 143c4cb3e FUN_143c4cb3e body=57 status=ok
// SIG undefined FUN_143c4cb3e(void)

void FUN_143c4cb3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b158 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b158 = FUN_140002ddd(FUN_1464ce587,uVar1,L"GbxBrainTaskSettings_Trick");
  }
  return;
}



// FUNCTION 143c4cbca FUN_143c4cbca body=57 status=ok
// SIG undefined FUN_143c4cbca(void)

void FUN_143c4cbca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b188 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b188 = FUN_140002ddd(FUN_1464ce615,uVar1,L"CameraModeDef");
  }
  return;
}



// FUNCTION 143c4cc76 FUN_143c4cc76 body=77 status=ok
// SIG undefined FUN_143c4cc76(void)

void FUN_143c4cc76(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143c4ccc3 FUN_143c4ccc3 body=771 status=ok
// SIG undefined FUN_143c4ccc3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c4ccc3(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5b000 = (ulonglong)uVar1;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0d3ee0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0d4320);
  _DAT_14cb5b080 = 0x47efffffe0000000;
  _DAT_14cb5b088 = 0x47efffffe0000000;
  _DAT_14cb5b090 = 0x47efffffe0000000;
  _DAT_14cb5b098 = 0x47efffffe0000000;
  _DAT_14cb5b0a0 = 0x47efffffe0000000;
  _DAT_14cb5b0a8 = 0x47efffffe0000000;
  _DAT_14cb5b0b0 = 0x47efffffe0000000;
  _DAT_14cb5b0b8 = 0x47efffffe0000000;
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b0d4860;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0d4880);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0d4e00);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b0d50a0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0d50c0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0d5b70);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0d5d90);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b0d63c0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0d63e0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0d6630);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b0d7090;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0d70e0,2,&PTR_FUN_14b0d70b0);
  uStack_58 = 2;
  local_60 = &PTR_FUN_14b0d74b0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0d74f0);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&DAT_14cb5b2c8,L"ClientOxygenDepleted",1);
  FUN_1446f470e(&DAT_14cb5b2f8,L"NetMulticast_PlayJumped",1);
  FUN_1446f470e(&DAT_14cb5b308,L"NetMulticast_PlayLanded",1);
  uStack_58 = 2;
  local_60 = &PTR_FUN_14b0d92d0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0d9310,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c4cfc8 FUN_143c4cfc8 body=130 status=ok
// SIG undefined FUN_143c4cfc8(void)

void FUN_143c4cfc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0de370;
  param_1[0xad] = &PTR_LAB_14b0de718;
  param_1[0xc6] = &PTR_LAB_14b0de730;
  if (param_1[0xeb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cbe320(param_1[0xe9],*(undefined4 *)(param_1 + 0xea));
  if (param_1[0xe9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe7] != 0) {
    FUN_1400020a8();
  }
  FUN_140945f4c(param_1);
  return;
}



// FUNCTION 143c4d04a FUN_143c4d04a body=55 status=ok
// SIG undefined FUN_143c4d04a(void)

void FUN_143c4d04a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b530 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b530 = FUN_14171c317(FUN_1464cf82a,uVar1,L"EScriptedClimbingType");
  }
  return;
}



// FUNCTION 143c4d081 FUN_143c4d081 body=55 status=ok
// SIG undefined FUN_143c4d081(void)

void FUN_143c4d081(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b590 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b590 = FUN_14171c317(FUN_1464cfa1e,uVar1,L"EControlledMoveInitiationType");
  }
  return;
}



// FUNCTION 143c4d0b8 FUN_143c4d0b8 body=55 status=ok
// SIG undefined FUN_143c4d0b8(void)

void FUN_143c4d0b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b5d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b5d8 = FUN_14171c317(FUN_1464cfb7c,uVar1,L"ECMStopMoveFlags");
  }
  return;
}



// FUNCTION 143c4d0ef FUN_143c4d0ef body=55 status=ok
// SIG undefined FUN_143c4d0ef(void)

void FUN_143c4d0ef(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b650 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b650 = FUN_14171c317(FUN_1464cfd6e,uVar1,L"EGbxCharacterOverlapsOptimization");
  }
  return;
}



// FUNCTION 143c4d126 FUN_143c4d126 body=55 status=ok
// SIG undefined FUN_143c4d126(void)

void FUN_143c4d126(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b718 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b718 = FUN_14171c317(FUN_1464d012a,uVar1,L"EMantleUpCheckState");
  }
  return;
}



// FUNCTION 143c4d276 FUN_143c4d276 body=35 status=ok
// SIG undefined FUN_143c4d276(void)

void FUN_143c4d276(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1449db362(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143c4d2b8 FUN_143c4d2b8 body=35 status=ok
// SIG undefined FUN_143c4d2b8(void)

void FUN_143c4d2b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1449db362(param_2 + 8);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 143c4d44a FUN_143c4d44a body=673 status=ok
// SIG undefined FUN_143c4d44a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c4d44a(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5b458 = (ulonglong)uVar2;
  _DAT_14cb5b460 = 0x47efffffe0000000;
  _DAT_14cb5b468 = 0x47efffffe0000000;
  _DAT_14cb5b470 = 0x47efffffe0000000;
  _DAT_14cb5b478 = 0x47efffffe0000000;
  _DAT_14cb5b480 = 0x47efffffe0000000;
  _DAT_14cb5b488 = 0x47efffffe0000000;
  _DAT_14cb5b490 = 0x47efffffe0000000;
  _DAT_14cb5b498 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb5b4a0);
  if (cVar1 == '\0') {
    _DAT_14cb5b4a0 = 0;
    uRam000000014cb5b4a8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0de780,1,&PTR_FUN_14b0de750);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0df130,1,&PTR_FUN_14b0df0e0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b0df940;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0df960);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b0e04f0;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0e0530);
  _DAT_14cb5b634 = 0;
  FUN_14052b5e0(&DAT_14cb5b630,"PlayerAwareness",0);
  _DAT_14cb5b640 = "PlayerAwareness";
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b0e1d40;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0e1d60);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0e2540,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0e37d0,1,&PTR_FUN_14b0e3750);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b0e4240;
  local_68 = 10;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0e4260);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c4d6ec FUN_143c4d6ec body=55 status=ok
// SIG undefined FUN_143c4d6ec(void)

void FUN_143c4d6ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b8b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b8b0 = FUN_14171c317(FUN_1464d0c53,uVar1,L"EGrantedMovementType");
  }
  return;
}



// FUNCTION 143c4d723 FUN_143c4d723 body=55 status=ok
// SIG undefined FUN_143c4d723(void)

void FUN_143c4d723(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b8c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b8c8 = FUN_14171c317(FUN_1464d0c84,uVar1,L"EGrantedMovementType_Script");
  }
  return;
}



// FUNCTION 143c4d75a FUN_143c4d75a body=72 status=ok
// SIG undefined FUN_143c4d75a(void)

void FUN_143c4d75a(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xcd8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143c4d78a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xce0))(param_1);
    return;
  }
  FUN_1468998ea(L"Net_ResetSwimmingState_Validate");
  return;
}



// FUNCTION 143c4d7e0 FUN_143c4d7e0 body=289 status=ok
// SIG undefined FUN_143c4d7e0(void)

undefined4 * FUN_143c4d7e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  pvVar2 = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  uVar10 = *(undefined8 *)(param_2 + 8);
  uVar11 = *(undefined8 *)(param_2 + 10);
  uVar3 = param_2[0xc];
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  uVar7 = param_2[0x11];
  uVar8 = param_2[0x12];
  uVar9 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar7;
  param_1[0x12] = uVar8;
  param_1[0x13] = uVar9;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar10;
  *(undefined8 *)(param_1 + 10) = uVar11;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  uVar3 = param_2[0x17];
  uVar4 = param_2[0x18];
  uVar5 = param_2[0x19];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar3;
  param_1[0x18] = uVar4;
  param_1[0x19] = uVar5;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  iVar1 = param_2[0x1c];
  pvVar2 = *(void **)(param_2 + 0x1a);
  param_1[0x1c] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1d] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1a,iVar1,0);
    memcpy(*(void **)(param_1 + 0x1a),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x1e) = 0;
  iVar1 = param_2[0x20];
  pvVar2 = *(void **)(param_2 + 0x1e);
  param_1[0x20] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x21] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0x1e,iVar1,0);
    memcpy(*(void **)(param_1 + 0x1e),pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 143c4d9ef FUN_143c4d9ef body=670 status=ok
// SIG undefined FUN_143c4d9ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c4d9ef(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb5b818);
  if (cVar1 == '\0') {
    _DAT_14cb5b818 = 0;
    uRam000000014cb5b820 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0e77c0);
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0e7c80,1,0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb5b860 = (ulonglong)uVar2;
  _DAT_14cb5b868 = 0x47efffffe0000000;
  _DAT_14cb5b870 = 0x47efffffe0000000;
  _DAT_14cb5b878 = 0x47efffffe0000000;
  _DAT_14cb5b880 = 0x47efffffe0000000;
  _DAT_14cb5b888 = 0x47efffffe0000000;
  _DAT_14cb5b890 = 0x47efffffe0000000;
  _DAT_14cb5b898 = 0x47efffffe0000000;
  _DAT_14cb5b8a0 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cb5b958,L"ClientAdjustControlledMovePosition",1);
  FUN_1446f470e(&DAT_14cb5b9e8,L"Net_ResetSwimmingState",1);
  FUN_1446f470e(&DAT_14cb5ba48,L"ServerAttemptMantle",1);
  FUN_1446f470e(&DAT_14cb5ba58,L"ServerDebugGrantMovementType",1);
  FUN_1446f470e(&DAT_14cb5ba68,L"ServerStartAutonomousControlledMove",1);
  FUN_1446f470e(&DAT_14cb5ba78,L"ServerStartMoveTo",1);
  FUN_1446f470e(&DAT_14cb5ba88,L"ServerStopAutonomousControlledMove",1);
  FUN_1446f470e(&DAT_14cb5ba98,L"ServerStopMoveTo",1);
  ppuStack_50 = &PTR_FUN_14b0ec390;
  uStack_48 = 2;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0ec470,1,&PTR_FUN_14b0ec3d0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ed4f0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ed630);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ed8a0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c4dc90 FUN_143c4dc90 body=55 status=ok
// SIG undefined FUN_143c4dc90(void)

void FUN_143c4dc90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bcc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bcc0 = FUN_14171c317(FUN_1464d277e,uVar1,L"EGbxSwimmingStartType");
  }
  return;
}



// FUNCTION 143c4dcc7 FUN_143c4dcc7 body=55 status=ok
// SIG undefined FUN_143c4dcc7(void)

void FUN_143c4dcc7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bcd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bcd8 = FUN_14171c317(FUN_1464d27ad,uVar1,L"EGbxSwimmingStopType");
  }
  return;
}



// FUNCTION 143c4dcfe FUN_143c4dcfe body=47 status=ok
// SIG undefined FUN_143c4dcfe(void)

longlong FUN_143c4dcfe(void)

{
  if (DAT_14cb5be50 == 0) {
    FUN_14000fc22(&DAT_14cb5be50,&PTR_FUN_14b0f4690);
  }
  return DAT_14cb5be50;
}



// FUNCTION 143c4dd2e FUN_143c4dd2e body=1369 status=ok
// SIG undefined FUN_143c4dd2e(void)

void FUN_143c4dd2e(undefined8 param_1,longlong param_2)

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
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_143c4defb;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
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
LAB_143c4defb:
  local_30 = 0;
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
            goto LAB_143c4e0af;
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
LAB_143c4e0af:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143cd98ca(local_28,local_30);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c4e288 FUN_143c4e288 body=55 status=ok
// SIG undefined FUN_143c4e288(void)

void FUN_143c4e288(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bf40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bf40 = FUN_14171c317(FUN_1464d33d4,uVar1,L"EColorBlindMode");
  }
  return;
}



// FUNCTION 143c4e2c0 FUN_143c4e2c0 body=48 status=ok
// SIG undefined FUN_143c4e2c0(void)

longlong FUN_143c4e2c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4e2f0 FUN_143c4e2f0 body=48 status=ok
// SIG undefined FUN_143c4e2f0(void)

longlong FUN_143c4e2f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4e320 FUN_143c4e320 body=48 status=ok
// SIG undefined FUN_143c4e320(void)

longlong FUN_143c4e320(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4e350 FUN_143c4e350 body=48 status=ok
// SIG undefined FUN_143c4e350(void)

longlong FUN_143c4e350(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4e380 FUN_143c4e380 body=48 status=ok
// SIG undefined FUN_143c4e380(void)

longlong FUN_143c4e380(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4e3b0 FUN_143c4e3b0 body=48 status=ok
// SIG undefined FUN_143c4e3b0(void)

longlong FUN_143c4e3b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4e3e0 FUN_143c4e3e0 body=48 status=ok
// SIG undefined FUN_143c4e3e0(void)

longlong FUN_143c4e3e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4e5d8 FUN_143c4e5d8 body=88 status=ok
// SIG undefined FUN_143c4e5d8(void)

void FUN_143c4e5d8(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b0f81d0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0x100;
  param_1[0xb] = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x1010101;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)((longlong)param_1 + 0x81) = 1;
  return;
}



// FUNCTION 143c4e64c FUN_143c4e64c body=272 status=ok
// SIG undefined FUN_143c4e64c(void)

void FUN_143c4e64c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b0f84e0;
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
  param_2[3] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 5) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x2c) = 2;
  return;
}



// FUNCTION 143c4e768 FUN_143c4e768 body=57 status=ok
// SIG undefined FUN_143c4e768(void)

void FUN_143c4e768(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bef8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bef8 = FUN_140002ddd(FUN_1464d3276,uVar1,L"GbxClosedCaptionDef");
  }
  return;
}



// FUNCTION 143c4e884 FUN_143c4e884 body=827 status=ok
// SIG undefined FUN_143c4e884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c4e884(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0efbd0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0f0a70,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5bc80 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0f17e0,1,&PTR_FUN_14b0f17b0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b0f3120;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0f31e0,1,&PTR_FUN_14b0f3160);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f3340);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0f3880,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f3fd0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0f4fb0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f5760);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f5830);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0f5900,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0f59c0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f5b80);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f5c40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f5e70);
  FUN_14098d3d2(FUN_143c4e288,L"/Script/GbxGame",L"EColorBlindMode",&DAT_14cb5bf38);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0f6270,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f6380);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f6540);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f66f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0f6890);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c4ebc0 FUN_143c4ebc0 body=55 status=ok
// SIG undefined FUN_143c4ebc0(void)

void FUN_143c4ebc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c000 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c000 = FUN_14171c317(FUN_1464d3d22,uVar1,L"EGbxConditionHealthPosition");
  }
  return;
}



// FUNCTION 143c4ebf7 FUN_143c4ebf7 body=55 status=ok
// SIG undefined FUN_143c4ebf7(void)

void FUN_143c4ebf7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c2f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c2f8 = FUN_14171c317(FUN_1464d4d02,uVar1,L"EGbxDamageEventType");
  }
  return;
}



// FUNCTION 143c4ec34 FUN_143c4ec34 body=48 status=ok
// SIG undefined FUN_143c4ec34(void)

longlong FUN_143c4ec34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4ec64 FUN_143c4ec64 body=48 status=ok
// SIG undefined FUN_143c4ec64(void)

longlong FUN_143c4ec64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4ecbc FUN_143c4ecbc body=57 status=ok
// SIG undefined FUN_143c4ecbc(void)

void FUN_143c4ecbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bfe8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bfe8 = FUN_140002ddd(FUN_1464d3cc3,uVar1,L"GbxCondition_HasInventoryTag");
  }
  return;
}



// FUNCTION 143c4eec6 FUN_143c4eec6 body=153 status=ok
// SIG undefined FUN_143c4eec6(void)

void FUN_143c4eec6(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0xe0);
  *(undefined4 *)((longlong)param_2 + 8) = 0x3002;
  *(undefined4 *)((longlong)param_2 + 0x54) = 2;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x68) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x70) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x78) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x80) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x88) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x90) = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa8) = 0x3006;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0xc0) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 200) = uVar1;
  return;
}



// FUNCTION 143c4ef8a FUN_143c4ef8a body=1339 status=ok
// SIG undefined FUN_143c4ef8a(void)

longlong FUN_143c4ef8a(longlong param_1,longlong param_2)

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
  
  FUN_140d9addc(param_1 + 8,param_2 + 8);
  FUN_140d9ae3a(param_1 + 0x18,param_2 + 0x18);
  FUN_140d9ae98(param_1 + 0x28,param_2 + 0x28);
  FUN_140d9aef6(param_1 + 0x38,param_2 + 0x38);
  FUN_140d9af54(param_1 + 0x48,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x5c);
  FUN_14020a6cc(param_1 + 0x58,1);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x68);
  FUN_14020a6cc(param_1 + 100,1);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x74);
  FUN_14020a6cc(param_1 + 0x70,1);
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  uVar2 = *(undefined4 *)(param_2 + 0x84);
  uVar3 = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  FUN_140b177d4(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  FUN_140b177d4(param_1 + 0xc0,param_2 + 0xc0);
  if (param_2 == param_1) {
    FUN_140311eb6(param_1 + 0x110,param_2 + 0x110);
  }
  else {
    FUN_148634470(param_1 + 0xe0,param_2 + 0xe0);
    FUN_148634470(param_1 + 0xf8,param_2 + 0xf8);
    FUN_140311eb6(param_1 + 0x110,param_2 + 0x110);
    FUN_148634470(param_1 + 0x120,param_2 + 0x120);
  }
  FUN_140311eb6(param_1 + 0x138,param_2 + 0x138);
  FUN_140311eb6(param_1 + 0x148,param_2 + 0x148);
  if (param_2 == param_1) {
    FUN_140311eb6(param_1 + 0x170,param_2 + 0x170);
    FUN_140311eb6(param_1 + 0x180,param_2 + 0x180);
    FUN_140311eb6(param_1 + 0x1c0,param_2 + 0x1c0);
    FUN_140311eb6(param_1 + 0x1e8,param_2 + 0x1e8);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x22c);
    FUN_140841e14(param_1 + 0x228,1);
  }
  else {
    FUN_148634470(param_1 + 0x158,param_2 + 0x158);
    FUN_140311eb6(param_1 + 0x170,param_2 + 0x170);
    FUN_140311eb6(param_1 + 0x180,param_2 + 0x180);
    FUN_148634470(param_1 + 400,param_2 + 400);
    FUN_148634470(param_1 + 0x1a8,param_2 + 0x1a8);
    FUN_140311eb6(param_1 + 0x1c0,param_2 + 0x1c0);
    FUN_148634470(param_1 + 0x1d0,param_2 + 0x1d0);
    FUN_140311eb6(param_1 + 0x1e8,param_2 + 0x1e8);
    FUN_148634470(param_1 + 0x1f8,param_2 + 0x1f8);
    FUN_148634470(param_1 + 0x210,param_2 + 0x210);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x22c);
    FUN_140841e14(param_1 + 0x228,1);
    FUN_1401b31d8(param_1 + 0x238,param_2 + 0x238);
  }
  lVar9 = *(longlong *)(param_2 + 0x250);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x250);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x250) = lVar9;
  lVar9 = *(longlong *)(param_2 + 600);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 600);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 600) = lVar9;
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  lVar9 = *(longlong *)(param_2 + 0x268);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x268);
    }
  }
  *(longlong *)(param_1 + 0x268) = lVar9;
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  FUN_148688c50(param_1 + 0x278,param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  FUN_148688cca(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_148688ba2(param_1 + 0x2e0,param_2 + 0x2e0);
  FUN_148688ba2(param_1 + 0x2f0,param_2 + 0x2f0);
  lVar9 = *(longlong *)(param_2 + 0x300);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x300);
    }
  }
  *(longlong *)(param_1 + 0x300) = lVar9;
  FUN_14095e2f2(param_1 + 0x308,param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_2 + 0x448);
  *(undefined2 *)(param_1 + 0x470) = *(undefined2 *)(param_2 + 0x470);
  *(undefined1 *)(param_1 + 0x478) = *(undefined1 *)(param_2 + 0x478);
  FUN_140b177d4(param_1 + 0x480,param_2 + 0x480);
  lVar9 = *(longlong *)(param_2 + 0x4a0);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x4a0);
    }
  }
  *(longlong *)(param_1 + 0x4a0) = lVar9;
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4ac);
  FUN_14020a6cc(param_1 + 0x4a8,1);
  *(undefined8 *)(param_1 + 0x4b4) = *(undefined8 *)(param_2 + 0x4b4);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_2 + 0x4c0);
  FUN_14020a6cc(param_1 + 0x4bc,1);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4cc);
  FUN_14020a6cc(param_1 + 0x4c8,1);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_2 + 0x4d8);
  FUN_14020a6cc(param_1 + 0x4d4,1);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e4);
  FUN_140841e14(param_1 + 0x4e0,1);
  *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(param_2 + 0x510);
  uVar1 = *(undefined4 *)(param_2 + 0x4f0);
  uVar2 = *(undefined4 *)(param_2 + 0x4f4);
  uVar3 = *(undefined4 *)(param_2 + 0x4f8);
  uVar4 = *(undefined4 *)(param_2 + 0x4fc);
  uVar5 = *(undefined4 *)(param_2 + 0x504);
  uVar6 = *(undefined4 *)(param_2 + 0x508);
  uVar7 = *(undefined4 *)(param_2 + 0x50c);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
  *(undefined4 *)(param_1 + 0x504) = uVar5;
  *(undefined4 *)(param_1 + 0x508) = uVar6;
  *(undefined4 *)(param_1 + 0x50c) = uVar7;
  *(undefined4 *)(param_1 + 0x4f0) = uVar1;
  *(undefined4 *)(param_1 + 0x4f4) = uVar2;
  *(undefined4 *)(param_1 + 0x4f8) = uVar3;
  *(undefined4 *)(param_1 + 0x4fc) = uVar4;
  FUN_148688c00(param_1 + 0x518,param_2 + 0x518);
  (**(code **)(*(longlong *)(param_1 + 0x528) + 0x20))(param_1 + 0x528,0);
  *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_2 + 0x530);
  FUN_1406022fe(param_1 + 0x538,param_2 + 0x538);
  return param_1;
}



// FUNCTION 143c4f4f0 FUN_143c4f4f0 body=1117 status=ok
// SIG undefined FUN_143c4f4f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c4f4f0(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fa920);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fab40);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b0fada0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fadc0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0faed0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fb020);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fb110);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fb1e0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fb300);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fb580);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fb6e0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fb890);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fb9e0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fbb80);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fbd30);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0fc420,1,&PTR_FUN_14b0fc3f0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fc4d0);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb5c1b0);
  if (cVar1 == '\0') {
    _DAT_14cb5c1b0 = 0;
    uRam000000014cb5c1b8 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0fd0e0,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fd1d0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0fd690,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0fd9e0,1,0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb5c228 = (ulonglong)uVar2;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0fe040,1,&PTR_FUN_14b0fe010);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0fe150);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0fea10,1,&PTR_FUN_14b0fe9c0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0feaa0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b0ff640;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ff660);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1006b0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b100fc0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b102490,1,&PTR_FUN_14b102460);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c4f950 FUN_143c4f950 body=55 status=ok
// SIG undefined FUN_143c4f950(void)

void FUN_143c4f950(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c5c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c5c0 = FUN_14171c317(FUN_1464d6022,uVar1,L"EGbxCracksStoppingCondition");
  }
  return;
}



// FUNCTION 143c4f987 FUN_143c4f987 body=55 status=ok
// SIG undefined FUN_143c4f987(void)

void FUN_143c4f987(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c5f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c5f0 = FUN_14171c317(FUN_1464d60e8,uVar1,L"EProjectileFeedbackBehavior");
  }
  return;
}



// FUNCTION 143c4f9be FUN_143c4f9be body=55 status=ok
// SIG undefined FUN_143c4f9be(void)

void FUN_143c4f9be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c760 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c760 = FUN_14171c317(FUN_1464d68c2,uVar1,L"EGbxDecoTrigger");
  }
  return;
}



// FUNCTION 143c4f9f5 FUN_143c4f9f5 body=55 status=ok
// SIG undefined FUN_143c4f9f5(void)

void FUN_143c4f9f5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c778 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c778 = FUN_14171c317(FUN_1464d68f1,uVar1,L"EGbxDecoAnimCycle");
  }
  return;
}



// FUNCTION 143c4fa2c FUN_143c4fa2c body=55 status=ok
// SIG undefined FUN_143c4fa2c(void)

void FUN_143c4fa2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c7a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c7a8 = FUN_14171c317(FUN_1464d69b6,uVar1,L"EGbxRotationMode");
  }
  return;
}



// FUNCTION 143c4fa63 FUN_143c4fa63 body=55 status=ok
// SIG undefined FUN_143c4fa63(void)

void FUN_143c4fa63(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c820 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c820 = FUN_14171c317(FUN_1464d6b73,uVar1,L"EDestructionSpawnLocationOption");
  }
  return;
}



// FUNCTION 143c4fa9a FUN_143c4fa9a body=55 status=ok
// SIG undefined FUN_143c4fa9a(void)

void FUN_143c4fa9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c838 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c838 = FUN_14171c317(FUN_1464d6ba2,uVar1,L"EImpactImpulseType");
  }
  return;
}



// FUNCTION 143c4fad2 FUN_143c4fad2 body=48 status=ok
// SIG undefined FUN_143c4fad2(void)

longlong FUN_143c4fad2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fb02 FUN_143c4fb02 body=48 status=ok
// SIG undefined FUN_143c4fb02(void)

longlong FUN_143c4fb02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fb32 FUN_143c4fb32 body=48 status=ok
// SIG undefined FUN_143c4fb32(void)

longlong FUN_143c4fb32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1358;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fb6e FUN_143c4fb6e body=48 status=ok
// SIG undefined FUN_143c4fb6e(void)

longlong FUN_143c4fb6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fb9e FUN_143c4fb9e body=48 status=ok
// SIG undefined FUN_143c4fb9e(void)

longlong FUN_143c4fb9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fbce FUN_143c4fbce body=48 status=ok
// SIG undefined FUN_143c4fbce(void)

longlong FUN_143c4fbce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fbfe FUN_143c4fbfe body=48 status=ok
// SIG undefined FUN_143c4fbfe(void)

longlong FUN_143c4fbfe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fc2e FUN_143c4fc2e body=48 status=ok
// SIG undefined FUN_143c4fc2e(void)

longlong FUN_143c4fc2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fc5e FUN_143c4fc5e body=48 status=ok
// SIG undefined FUN_143c4fc5e(void)

longlong FUN_143c4fc5e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fc8e FUN_143c4fc8e body=48 status=ok
// SIG undefined FUN_143c4fc8e(void)

longlong FUN_143c4fc8e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fcce FUN_143c4fcce body=48 status=ok
// SIG undefined FUN_143c4fcce(void)

longlong FUN_143c4fcce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a80;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fd06 FUN_143c4fd06 body=48 status=ok
// SIG undefined FUN_143c4fd06(void)

longlong FUN_143c4fd06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x718;
  FUN_140acfb7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4fdea FUN_143c4fdea body=57 status=ok
// SIG undefined FUN_143c4fdea(void)

void FUN_143c4fdea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c5d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c5d8 = FUN_140002ddd(FUN_1464d6089,uVar1,L"GbxDangerZoneCracksDef");
  }
  return;
}



// FUNCTION 143c4fe24 FUN_143c4fe24 body=57 status=ok
// SIG undefined FUN_143c4fe24(void)

void FUN_143c4fe24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c638 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c638 = FUN_140002ddd(FUN_1464d5964,uVar1,L"GbxDangerZoneDef");
  }
  return;
}



// FUNCTION 143c4ffd6 FUN_143c4ffd6 body=676 status=ok
// SIG undefined FUN_143c4ffd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c4ffd6(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5c470 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1069d0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b106f20,1,&PTR_FUN_14b106ed0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b107d70,1,&PTR_FUN_14b107d40);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b108920,1,&PTR_FUN_14b1088a0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b108e70;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b108e90);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b109900;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b109920);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b10a3d0,1,&PTR_FUN_14b10a3a0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b10a460);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b10af10,1,&PTR_FUN_14b10aee0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b10b4d0,1,&PTR_FUN_14b10b480);
  local_58 = 3;
  ppuStack_60 = &PTR_FUN_14b10c6a0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b10c700);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b10c920);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b10ca40,1,0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b10d870;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b10d8b0,2,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c5027c FUN_143c5027c body=55 status=ok
// SIG undefined FUN_143c5027c(void)

void FUN_143c5027c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c8e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c8e0 = FUN_14171c317(FUN_1464d72f3,uVar1,L"ECollisionAudioBehavior");
  }
  return;
}



// FUNCTION 143c502b4 FUN_143c502b4 body=2012 status=ok
// SIG undefined FUN_143c502b4(void)

void FUN_143c502b4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_141710108;
      local_a0 = 0x1000000000000000;
      local_a8 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_48);
            goto LAB_143c504a9;
          }
        }
        puVar10 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_48,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar4[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_48,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar11 = (undefined8 *)*puVar10;
        puVar10 = puVar11 + 2;
      } while ((longlong *)*puVar11 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar11[1];
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
LAB_143c504a9:
  local_60 = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 0;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_60);
            goto LAB_143c5064f;
          }
        }
        puVar10 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_60) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_60,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_60,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar4[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_60,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_60,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar11 = (undefined8 *)*puVar10;
        puVar10 = puVar11 + 2;
      } while ((longlong *)*puVar11 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar11[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
LAB_143c5064f:
  puVar10 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_1468d96f0;
      local_a0 = 0;
      local_a8 = 0x4008001;
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
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_68);
            goto LAB_143c50806;
          }
        }
        puVar11 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &local_68) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_68,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&local_68,puVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar4[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_68,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_68,lVar5);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar11;
        puVar11 = puVar6 + 2;
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
LAB_143c50806:
  uVar2 = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_48;
  puVar11 = &local_60;
  if (puVar10 != (undefined8 *)0x0) {
    puVar11 = puVar10;
  }
  uVar9 = FUN_14477b664(uStack_40);
  local_78 = FUN_14477b664(uVar9);
  local_70 = local_38;
  uVar7 = FUN_143d65930(&local_80,puVar11,uVar2);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c50a91 FUN_143c50a91 body=55 status=ok
// SIG undefined FUN_143c50a91(void)

void FUN_143c50a91(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ca80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ca80 = FUN_14171c317(FUN_1464d7c42,uVar1,L"EDialogParameterMappingSourceType");
  }
  return;
}



// FUNCTION 143c50ac8 FUN_143c50ac8 body=129 status=ok
// SIG undefined FUN_143c50ac8(void)

void FUN_143c50ac8(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14b117680;
  puVar1[5] = &PTR_LAB_14b117920;
  puVar1[6] = 0xffffffffffffffff;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 143c50b49 FUN_143c50b49 body=55 status=ok
// SIG undefined FUN_143c50b49(void)

void FUN_143c50b49(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ccb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ccb8 = FUN_14171c317(FUN_1464d882f,uVar1,L"EStartDialogFlags");
  }
  return;
}



// FUNCTION 143c50b80 FUN_143c50b80 body=441 status=ok
// SIG undefined FUN_143c50b80(void)

void FUN_143c50b80(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14b11bfd0;
  puVar1[5] = 0xffffffffffffffff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0xffffffffffffffff;
  puVar1[0x11] = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
  *(undefined2 *)(puVar1 + 0x19) = 0;
  puVar1[0x1b] = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb9) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xcf) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0xffffffffffffffff;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x134) = 0;
  *(undefined2 *)(puVar1 + 0x27) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x194) = 0;
  *(undefined4 *)(puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 0x3b) = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x121) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x129) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x13f) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x13c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x151) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x159) = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined2 *)(puVar1 + 0x31) = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c9) = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  *(undefined1 *)(puVar1 + 0x3e) = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  *(undefined4 *)((longlong)puVar1 + 500) = 0x3f800000;
  puVar1[0x3f] = 0;
  *(undefined2 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x204) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x20c) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x42) = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  return;
}



// FUNCTION 143c50f56 FUN_143c50f56 body=63 status=ok
// SIG undefined FUN_143c50f56(void)

void FUN_143c50f56(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  return;
}



// FUNCTION 143c51013 FUN_143c51013 body=952 status=ok
// SIG undefined FUN_143c51013(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c51013(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&DAT_14cb5c898,L"OnApplyCollision",1);
  FUN_1446f470e(&DAT_14cb5c8a8,L"OnApplyHit",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b112a40,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5c8d0 = (ulonglong)uVar1;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b113260;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b113280);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1135f0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b113720);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b113b50);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b115430,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1156c0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b115ab0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b115ad0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b116520,2,&PTR_FUN_14b1164f0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b116e80);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b117140,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b117210);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1172e0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1173b0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b117960,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b117c40);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b117dd0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b117f30);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b118000);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b118360,1,0);
  FUN_1446f470e(&DAT_14cb5ccf8,L"NetMulticast_StartDialog",1);
  FUN_1446f470e(&DAT_14cb5cd08,L"NetMulticast_StopDialog",1);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b119120;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b119190,1,&PTR_FUN_14b119140);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c513cc FUN_143c513cc body=55 status=ok
// SIG undefined FUN_143c513cc(void)

void FUN_143c513cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d110 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d110 = FUN_14171c317(FUN_1464d9f5a,uVar1,L"EGbxDiscoveryOfflineAreaShapeType");
  }
  return;
}



// FUNCTION 143c514b0 FUN_143c514b0 body=57 status=ok
// SIG undefined FUN_143c514b0(void)

void FUN_143c514b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cf48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cf48 = FUN_140002ddd(FUN_1464d981e,uVar1,L"GbxDiscoveryGeneratorDef");
  }
  return;
}



// FUNCTION 143c515a6 FUN_143c515a6 body=57 status=ok
// SIG undefined FUN_143c515a6(void)

void FUN_143c515a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cfd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cfd8 = FUN_140002ddd(FUN_1464d9b07,uVar1,L"GbxDiscoveryIconSizeDef");
  }
  return;
}



// FUNCTION 143c515ee FUN_143c515ee body=172 status=ok
// SIG undefined FUN_143c515ee(void)

void FUN_143c515ee(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xd0);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b125430;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x41200000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined8 *)((longlong)param_2 + 0x49) = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_2 + 100) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_2 + 0x6c) = 1;
  *(undefined4 *)(param_2 + 0xe) = 1;
  *(undefined2 *)((longlong)param_2 + 0x74) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x76) = 1;
  *(undefined1 *)(param_2 + 0xf) = 1;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = &DAT_3f8000003f800000;
  param_2[0x1a] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_2 + 0x1b) = 0x43480000;
  return;
}



// FUNCTION 143c516b2 FUN_143c516b2 body=57 status=ok
// SIG undefined FUN_143c516b2(void)

void FUN_143c516b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d008 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d008 = FUN_140002ddd(FUN_1464d9b95,uVar1,L"GbxDiscoveryInWorldIndicatorDef");
  }
  return;
}



// FUNCTION 143c51708 FUN_143c51708 body=42 status=ok
// SIG undefined FUN_143c51708(void)

void FUN_143c51708(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 143c51772 FUN_143c51772 body=57 status=ok
// SIG undefined FUN_143c51772(void)

void FUN_143c51772(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d0c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d0c8 = FUN_140002ddd(FUN_1464d9e6a,uVar1,L"GbxDiscoveryLocationMetaData");
  }
  return;
}



// FUNCTION 143c517de FUN_143c517de body=90 status=ok
// SIG undefined FUN_143c517de(void)

void FUN_143c517de(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0xd] = 0x4040000000000000;
  param_2[0xe] = 0x4040000000000000;
  param_2[0xf] = 0x4040000000000000;
  param_2[0x10] = 0x4230000041b00000;
  *(undefined4 *)(param_2 + 0x11) = 0x41b00000;
  return;
}



// FUNCTION 143c518a4 FUN_143c518a4 body=987 status=ok
// SIG undefined FUN_143c518a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c518a4(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b11ca90,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b11cde0,1,0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb5cde0 = (ulonglong)uVar2;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b11d110);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b11d210);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b11d400,1,&PTR_FUN_14b11d3d0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b11d930,1,&PTR_FUN_14b11d900);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b11dca0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b11e390,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b11e730,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b11ead0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b11f2b0,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b11f440,1,&PTR_FUN_14b11f410);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b120520);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1208f0,1,&PTR_FUN_14b1208c0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b120ea0,1,&PTR_FUN_14b120e70);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb5d018);
  if (cVar1 == '\0') {
    _DAT_14cb5d018 = 0;
    uRam000000014cb5d020 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b121760,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b121bd0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b121f40,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b122a60,1,&PTR_FUN_14b122a10);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b123480,1,&PTR_FUN_14b123450);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b1239d0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1239f0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1241f0,1,&PTR_FUN_14b1241a0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c51c80 FUN_143c51c80 body=55 status=ok
// SIG undefined FUN_143c51c80(void)

void FUN_143c51c80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d1c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d1c0 =
         FUN_14171c317(FUN_1464da715,uVar1,L"EGbxDiscoveryPresentationMapViewerWorldPlacementMode");
  }
  return;
}



// FUNCTION 143c51cc4 FUN_143c51cc4 body=227 status=ok
// SIG undefined FUN_143c51cc4(void)

longlong FUN_143c51cc4(void)

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
  if (DAT_14cb5d200 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145b7a93a;
    local_38 = &LAB_143c51cb9;
    local_40 = &LAB_143c51cbc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryPerCharacterProgressRole_Shared",&DAT_14cb5d200,
                  &DAT_143c51cb8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c51da8 FUN_143c51da8 body=47 status=ok
// SIG undefined FUN_143c51da8(void)

longlong FUN_143c51da8(void)

{
  if (DAT_14cb5d208 == 0) {
    FUN_14073dd9a(&DAT_14cb5d208,&PTR_FUN_14b128a08);
  }
  return DAT_14cb5d208;
}



// FUNCTION 143c51de4 FUN_143c51de4 body=227 status=ok
// SIG undefined FUN_143c51de4(void)

longlong FUN_143c51de4(void)

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
  if (DAT_14cb5d230 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145b7aa24;
    local_38 = &LAB_143c51dd9;
    local_40 = &LAB_143c51ddc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryPerGameProgressRole_Shared",&DAT_14cb5d230,
                  &DAT_143c51dd8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d230;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c51ec8 FUN_143c51ec8 body=47 status=ok
// SIG undefined FUN_143c51ec8(void)

longlong FUN_143c51ec8(void)

{
  if (DAT_14cb5d238 == 0) {
    FUN_14073dd9a(&DAT_14cb5d238,&PTR_FUN_14b128b58);
  }
  return DAT_14cb5d238;
}



// FUNCTION 143c51ef7 FUN_143c51ef7 body=55 status=ok
// SIG undefined FUN_143c51ef7(void)

void FUN_143c51ef7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d3f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d3f0 = FUN_14171c317(FUN_1464daf5f,uVar1,L"EGbxDiscoveryPresentationType");
  }
  return;
}



// FUNCTION 143c51f2e FUN_143c51f2e body=55 status=ok
// SIG undefined FUN_143c51f2e(void)

void FUN_143c51f2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d408 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d408 = FUN_14171c317(FUN_1464daf8e,uVar1,L"EGbxDiscoveryProximity");
  }
  return;
}



// FUNCTION 143c51f65 FUN_143c51f65 body=55 status=ok
// SIG undefined FUN_143c51f65(void)

void FUN_143c51f65(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d420 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d420 = FUN_14171c317(FUN_1464dafbd,uVar1,L"EGbxDiscoveryDiscovererType");
  }
  return;
}



// FUNCTION 143c51f9c FUN_143c51f9c body=55 status=ok
// SIG undefined FUN_143c51f9c(void)

void FUN_143c51f9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d438 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d438 = FUN_14171c317(FUN_1464dafec,uVar1,L"EGbxDiscoveryDiscovererRole");
  }
  return;
}



// FUNCTION 143c51fd3 FUN_143c51fd3 body=55 status=ok
// SIG undefined FUN_143c51fd3(void)

void FUN_143c51fd3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d450 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d450 = FUN_14171c317(FUN_1464db01b,uVar1,L"EGbxDiscoveryAreaManagerUpdateAction");
  }
  return;
}



// FUNCTION 143c5200a FUN_143c5200a body=55 status=ok
// SIG undefined FUN_143c5200a(void)

void FUN_143c5200a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d4b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d4b0 = FUN_14171c317(FUN_1464db210,uVar1,L"EGbxDiscoveryPinType");
  }
  return;
}



// FUNCTION 143c52041 FUN_143c52041 body=55 status=ok
// SIG undefined FUN_143c52041(void)

void FUN_143c52041(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d4c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d4c8 = FUN_14171c317(FUN_1464db23f,uVar1,L"EGbxDiscoveryPinConfigType");
  }
  return;
}



// FUNCTION 143c52078 FUN_143c52078 body=55 status=ok
// SIG undefined FUN_143c52078(void)

void FUN_143c52078(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d4e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d4e0 = FUN_14171c317(FUN_1464db26e,uVar1,L"EGbxDiscoveryMaxPinBehavior");
  }
  return;
}



// FUNCTION 143c520af FUN_143c520af body=55 status=ok
// SIG undefined FUN_143c520af(void)

void FUN_143c520af(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d600 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d600 = FUN_14171c317(FUN_1464db844,uVar1,L"EGbxDiscoveryViewableMapBoundsSource");
  }
  return;
}



// FUNCTION 143c520e6 FUN_143c520e6 body=55 status=ok
// SIG undefined FUN_143c520e6(void)

void FUN_143c520e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d698 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d698 = FUN_14171c317(FUN_1464db9ec,uVar1,L"ELocationTargetType");
  }
  return;
}



// FUNCTION 143c521a6 FUN_143c521a6 body=38 status=ok
// SIG undefined FUN_143c521a6(void)

undefined8 FUN_143c521a6(undefined8 param_1,int param_2)

{
  FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c521cc FUN_143c521cc body=38 status=ok
// SIG undefined FUN_143c521cc(void)

undefined8 FUN_143c521cc(undefined8 param_1,int param_2)

{
  FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5221e FUN_143c5221e body=48 status=ok
// SIG undefined FUN_143c5221e(void)

longlong FUN_143c5221e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14136916c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5224e FUN_143c5224e body=48 status=ok
// SIG undefined FUN_143c5224e(void)

longlong FUN_143c5224e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14136916c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5227e FUN_143c5227e body=48 status=ok
// SIG undefined FUN_143c5227e(void)

longlong FUN_143c5227e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1538;
  FUN_14136916c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c522b6 FUN_143c522b6 body=48 status=ok
// SIG undefined FUN_143c522b6(void)

longlong FUN_143c522b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1540;
  FUN_14136916c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c524da FUN_143c524da body=437 status=ok
// SIG undefined FUN_143c524da(void)

undefined8 * FUN_143c524da(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b138280;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar1 = DAT_14c8463f8;
  param_1[5] = DAT_14c8463f0;
  param_1[6] = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x10] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0x12) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  memset(param_1 + 0x13,0,0xa8);
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  param_1[0x29] = 0xc0b3880000000000;
  param_1[0x2a] = 0xc0b3880000000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x40b3880000000000;
  param_1[0x2d] = 0x40b3880000000000;
  param_1[0x2e] = 0x40b3880000000000;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x30;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 1;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0xc47a0000;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0x55000000469c4000;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0x55000000469c4000;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0x1003f000000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x100;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  return param_1;
}



// FUNCTION 143c5269e FUN_143c5269e body=111 status=ok
// SIG undefined FUN_143c5269e(void)

void FUN_143c5269e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2 + 2,0,0xc0);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b134850;
  param_2[3] = 0;
  param_2[4] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[5] = DAT_14c8464e0;
  param_2[6] = uVar1;
  param_2[7] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[8] = DAT_14c8464e0;
  param_2[9] = uVar1;
  param_2[10] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0xb) = 1;
  *(undefined1 *)(param_2 + 0x19) = 0;
  return;
}



// FUNCTION 143c5271a FUN_143c5271a body=57 status=ok
// SIG undefined FUN_143c5271a(void)

void FUN_143c5271a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d648 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d648 = FUN_140002ddd(FUN_1464db8d3,uVar1,L"GbxDiscoveryViewableMapMetaData");
  }
  return;
}



// FUNCTION 143c52800 FUN_143c52800 body=68 status=ok
// SIG undefined FUN_143c52800(void)

undefined8 FUN_143c52800(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c52844 FUN_143c52844 body=1003 status=ok
// SIG undefined FUN_143c52844(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c52844(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb5d198 = (ulonglong)uVar2;
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b128860;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1288b0,1,&PTR_FUN_14b128880);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b128ba0,4,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b128fb0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1293f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b129890,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b129cf0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12a160,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12a240,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12a5f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12a9b0,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12ad70,1,&PTR_FUN_14b12ad40);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b12b030);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12b570,1,&PTR_FUN_14b12b540);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12b8e0,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12bd10,1,&PTR_FUN_14b12bce0);
  local_48 = 8;
  ppuStack_50 = &PTR_FUN_14b12cf00;
  local_58 = 8;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b12d000);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12d330,1,&PTR_FUN_14b12d300);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b12e5b0;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12e670,1,&PTR_FUN_14b12e5d0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12e990,1,&PTR_FUN_14b12e960);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb5d658);
  if (cVar1 == '\0') {
    _DAT_14cb5d658 = 0;
    uRam000000014cb5d660 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b12ecf0,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b132370;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1323c0,1,&PTR_FUN_14b132390);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c52c30 FUN_143c52c30 body=55 status=ok
// SIG undefined FUN_143c52c30(void)

void FUN_143c52c30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5da38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5da38 = FUN_14171c317(FUN_1464dd357,uVar1,L"EGbxDroneMovementMode");
  }
  return;
}



// FUNCTION 143c52c67 FUN_143c52c67 body=55 status=ok
// SIG undefined FUN_143c52c67(void)

void FUN_143c52c67(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5da50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5da50 = FUN_14171c317(FUN_1464dd388,uVar1,L"EGbxDroneOrientationMode");
  }
  return;
}



// FUNCTION 143c52c9e FUN_143c52c9e body=55 status=ok
// SIG undefined FUN_143c52c9e(void)

void FUN_143c52c9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5da68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5da68 = FUN_14171c317(FUN_1464dd3e8,uVar1,L"EGbxDroneDeactivateMode");
  }
  return;
}



// FUNCTION 143c52cd5 FUN_143c52cd5 body=55 status=ok
// SIG undefined FUN_143c52cd5(void)

void FUN_143c52cd5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5da80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5da80 = FUN_14171c317(FUN_1464dd3b9,uVar1,L"EGbxDroneOrbitDirection");
  }
  return;
}



// FUNCTION 143c52d0c FUN_143c52d0c body=55 status=ok
// SIG undefined FUN_143c52d0c(void)

void FUN_143c52d0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5da98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5da98 = FUN_14171c317(FUN_1464dd817,uVar1,L"EGbxDroneAttributeValueType");
  }
  return;
}



// FUNCTION 143c52d92 FUN_143c52d92 body=162 status=ok
// SIG undefined FUN_143c52d92(void)

void FUN_143c52d92(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1b0);
  *param_2 = &PTR_FUN_14b13f860;
  *(undefined4 *)(param_2 + 4) = 0x4fc71eb4;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0xc0;
  param_2[0x26] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0x3ff0000000000000;
  param_2[0x30] = 0x3ff0000000000000;
  param_2[0x31] = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_2 + 0x194) = 0x3f800000;
  return;
}



// FUNCTION 143c52eb0 FUN_143c52eb0 body=57 status=ok
// SIG undefined FUN_143c52eb0(void)

void FUN_143c52eb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5dcb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5dcb0 = FUN_140002ddd(FUN_1464de1dc,uVar1,L"GbxExperienceDef");
  }
  return;
}



// FUNCTION 143c52f52 FUN_143c52f52 body=731 status=ok
// SIG undefined FUN_143c52f52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c52f52(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb5d950 = (ulonglong)uVar2;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  lVar3 = 0;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b139350);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b139410,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b13ab00,1,0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b13ad50 + lVar3),L"/Script/GbxGame",
                  *(undefined8 *)((longlong)&PTR_u_EGbxDroneMovementMode_14b13ad58 + lVar3),
                  *(undefined8 *)((longlong)&PTR_DAT_14b13ad60 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x80);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b13af50;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b13af70);
  _DAT_14cb5dac0 = 0xffffffff;
  _DAT_14cb5dac4 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b13b650,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b13b840);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb5db08);
  if (cVar1 == '\0') {
    _DAT_14cb5db08 = 0;
    uRam000000014cb5db10 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b13d8c0,3,&PTR_FUN_14b13d840);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 5;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b13dd90,1,&PTR_FUN_14b13dcc0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b13e2d0,1,&PTR_FUN_14b13e2a0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b13e480);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b13e810);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b13eac0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b13ed40);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c53230 FUN_143c53230 body=55 status=ok
// SIG undefined FUN_143c53230(void)

void FUN_143c53230(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5dda8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5dda8 = FUN_14171c317(FUN_1464deaee,uVar1,L"EGbxFeedbackType");
  }
  return;
}



// FUNCTION 143c53267 FUN_143c53267 body=55 status=ok
// SIG undefined FUN_143c53267(void)

void FUN_143c53267(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ded8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ded8 = FUN_14171c317(FUN_1464def49,uVar1,L"EGbxFeedbackElements");
  }
  return;
}



// FUNCTION 143c5329e FUN_143c5329e body=55 status=ok
// SIG undefined FUN_143c5329e(void)

void FUN_143c5329e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5dfd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5dfd0 = FUN_14171c317(FUN_1464df34e,uVar1,L"EFoleyImpactType");
  }
  return;
}



// FUNCTION 143c532d5 FUN_143c532d5 body=55 status=ok
// SIG undefined FUN_143c532d5(void)

void FUN_143c532d5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e078 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e078 = FUN_14171c317(FUN_1464df732,uVar1,L"EFoleyLoopInfoType");
  }
  return;
}



// FUNCTION 143c53448 FUN_143c53448 body=57 status=ok
// SIG undefined FUN_143c53448(void)

void FUN_143c53448(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5dfe8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5dfe8 = FUN_140002ddd(FUN_1464df37d,uVar1,L"GbxFoleyAudioProvider");
  }
  return;
}



// FUNCTION 143c53572 FUN_143c53572 body=113 status=ok
// SIG undefined FUN_143c53572(void)

void FUN_143c53572(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0xc0);
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x40a00000;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x55) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_2 + 0x78) = 2;
  uVar1 = DAT_14c8463d8;
  *(undefined8 *)((longlong)param_2 + 0x80) = DAT_14c8463d0;
  *(undefined8 *)((longlong)param_2 + 0x88) = uVar1;
  uVar1 = DAT_14c8463e8;
  *(undefined8 *)((longlong)param_2 + 0x90) = DAT_14c8463e0;
  *(undefined8 *)((longlong)param_2 + 0x98) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 143c53668 FUN_143c53668 body=382 status=ok
// SIG undefined FUN_143c53668(void)

void FUN_143c53668(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x2b8);
  param_2[1] = 0;
  param_2[9] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  param_2[0xd] = 0;
  param_2[0x13] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0xffffffff00000080;
  param_2[0x17] = 0;
  param_2[0x23] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined8 *)((longlong)param_2 + 0x124) = 0xffffffff00000080;
  param_2[0x27] = 0;
  *param_2 = &PTR_FUN_14b14bcb0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0xffffffff00000080;
  param_2[0x35] = 0;
  *(undefined1 *)(param_2 + 0x37) = 0;
  param_2[0x3e] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x43480000;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x42c80000;
  *(undefined8 *)((longlong)param_2 + 0x21c) = 0x4416000000000000;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x49] = 0x461c400041200000;
  *(undefined4 *)(param_2 + 0x4a) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x50) = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  *(undefined8 *)((longlong)param_2 + 0x284) = 0xffffffff00000080;
  param_2[0x53] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x57] = 0x3e4ccccd00000002;
  param_2[0x5b] = 0;
  param_2[0x59] = 0;
  param_2[0x5a] = 0;
  return;
}



// FUNCTION 143c537f2 FUN_143c537f2 body=57 status=ok
// SIG undefined FUN_143c537f2(void)

void FUN_143c537f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e0c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e0c0 = FUN_140002ddd(FUN_1464df869,uVar1,L"GbxFoleyAudioProviderDef");
  }
  return;
}



// FUNCTION 143c5383a FUN_143c5383a body=895 status=ok
// SIG undefined FUN_143c5383a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c5383a(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b141e10);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b141f00);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb5dd98 = (ulonglong)uVar2;
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b142f30;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b142f80,1,&PTR_FUN_14b142f50);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b144190,7,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b144f70,1,0);
  FUN_14098d3d2(FUN_143c53267,L"/Script/GbxGame",L"EGbxFeedbackElements",&DAT_14cb5ded0);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb5dee8);
  if (cVar1 == '\0') {
    _DAT_14cb5dee8 = 0;
    uRam000000014cb5def0 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b145610,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b145700);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b145830);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b146670,2,&PTR_FUN_14b146640);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b146a00,1,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b1473a0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1473c0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b148860;
  local_58 = 8;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b148880);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b149120,1,0);
  _DAT_14cb5e100 = 0x47efffffe0000000;
  _DAT_14cb5e108 = 0x47efffffe0000000;
  _DAT_14cb5e110 = 0x47efffffe0000000;
  _DAT_14cb5e118 = 0x47efffffe0000000;
  _DAT_14cb5e120 = 0x47efffffe0000000;
  _DAT_14cb5e128 = 0x47efffffe0000000;
  _DAT_14cb5e130 = 0x47efffffe0000000;
  _DAT_14cb5e138 = 0x47efffffe0000000;
  local_40 = "bone";
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  FUN_1446f470e(&DAT_14cb5e160,L"NamedParametersChanged",1);
  FUN_1446f470e(&DAT_14cb5e170,L"NamedParametersIngest",1);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b14a070,1,&PTR_FUN_14b14a040);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c53bbc FUN_143c53bbc body=55 status=ok
// SIG undefined FUN_143c53bbc(void)

void FUN_143c53bbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e210 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e210 = FUN_14171c317(FUN_1464e0142,uVar1,L"EBulletByDeterminant");
  }
  return;
}



// FUNCTION 143c53c78 FUN_143c53c78 body=57 status=ok
// SIG undefined FUN_143c53c78(void)

void FUN_143c53c78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e2d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e2d0 = FUN_140002ddd(FUN_1464e0567,uVar1,L"GbxAudioGraphSettings_If");
  }
  return;
}



// FUNCTION 143c53cea FUN_143c53cea body=57 status=ok
// SIG undefined FUN_143c53cea(void)

void FUN_143c53cea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e330 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e330 = FUN_140002ddd(FUN_1464e0789,uVar1,L"GbxAudioGraphSettings_FactChange");
  }
  return;
}



// FUNCTION 143c53dac FUN_143c53dac body=479 status=ok
// SIG undefined FUN_143c53dac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c53dac(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5e198 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b14cfa0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b14d6e0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b14e8c0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b14e910,1,&PTR_FUN_14b14e8e0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b14ee50);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b14f510);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b14f670);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b14fec0,1,0);
  _DAT_14cb5e3a4 = 0;
  FUN_14052b5e0(&DAT_14cb5e3a0,"PlayerAwareness",0);
  _DAT_14cb5e3b0 = "PlayerAwareness";
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1500d0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b155ce0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c53f8c FUN_143c53f8c body=55 status=ok
// SIG undefined FUN_143c53f8c(void)

void FUN_143c53f8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e558 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e558 = FUN_14171c317(FUN_1464e1676,uVar1,L"EGameInstancePhase");
  }
  return;
}



// FUNCTION 143c53fc3 FUN_143c53fc3 body=55 status=ok
// SIG undefined FUN_143c53fc3(void)

void FUN_143c53fc3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e588 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e588 = FUN_14171c317(FUN_1464e1737,uVar1,L"EEffectivePlayerCountSetting");
  }
  return;
}



// FUNCTION 143c53ffa FUN_143c53ffa body=55 status=ok
// SIG undefined FUN_143c53ffa(void)

void FUN_143c53ffa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e7b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e7b8 =
         FUN_14171c317(FUN_1464e2285,uVar1,L"EGbxGameModeModuleConfig_Matchmaking_PartyHandling");
  }
  return;
}



// FUNCTION 143c54031 FUN_143c54031 body=55 status=ok
// SIG undefined FUN_143c54031(void)

void FUN_143c54031(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e7e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e7e8 = FUN_14171c317(FUN_1464e2345,uVar1,L"EGbxGameModeModuleConfig_Timer_Event");
  }
  return;
}



// FUNCTION 143c54068 FUN_143c54068 body=55 status=ok
// SIG undefined FUN_143c54068(void)

void FUN_143c54068(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e878 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e878 = FUN_14171c317(FUN_1464e25bb,uVar1,L"EGbxGameModeModuleHostConduitExecs");
  }
  return;
}



// FUNCTION 143c5409f FUN_143c5409f body=55 status=ok
// SIG undefined FUN_143c5409f(void)

void FUN_143c5409f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5eab0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5eab0 = FUN_14171c317(FUN_1464e2e1d,uVar1,L"EGbxGameModeModuleTarget");
  }
  return;
}



// FUNCTION 143c540d6 FUN_143c540d6 body=55 status=ok
// SIG undefined FUN_143c540d6(void)

void FUN_143c540d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5eac8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5eac8 = FUN_14171c317(FUN_1464e1ead,uVar1,L"EGbxGameModeModuleLifecycle");
  }
  return;
}



// FUNCTION 143c5424a FUN_143c5424a body=1441 status=ok
// SIG undefined FUN_143c5424a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c5424a(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5e530 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1588a0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b158a30;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b158a50);
  FUN_1446f470e(&DAT_14cb5e5b8,L"NotifyModeConfigured",1);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b159060;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1590b0,1,&PTR_FUN_14b159080);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b15a030);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b15a140);
  FUN_1446f470e(&DAT_14cb5e638,L"OnInitBP",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b15a680,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b15a9f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b15ad50,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b15b570,1,&PTR_FUN_14b15b540);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b15bb20);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b15bd30);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b15bfc0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b15c2e0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b15c520;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b15c540);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b15cb20;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b15cb40);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b15cd20,1,&PTR_FUN_14b15ccf0);
  FUN_1446f470e(&DAT_14cb5e8b0,L"OnDisabledBP",1);
  FUN_1446f470e(&DAT_14cb5e8c0,L"OnEnabledBP",1);
  FUN_1446f470e(&DAT_14cb5e8d0,L"OnGameModePhaseChangedBP",1);
  FUN_1446f470e(&DAT_14cb5e8e0,L"OnLogoutBP",1);
  FUN_1446f470e(&DAT_14cb5e8f0,L"OnMatchAbortedBP",1);
  FUN_1446f470e(&DAT_14cb5e900,L"OnMatchEndedBP",1);
  FUN_1446f470e(&DAT_14cb5e910,L"OnMatchStartedBP",1);
  FUN_1446f470e(&DAT_14cb5e920,L"OnPostLoginBP",1);
  FUN_1446f470e(&DAT_14cb5e930,L"OnPostMatchBP",1);
  FUN_1446f470e(&DAT_14cb5e940,L"OnPreMatchBP",1);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b15df40;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b15df60,1,0);
  FUN_1446f470e(&DAT_14cb5e988,L"OnPlayerDeathBP",1);
  FUN_1446f470e(&DAT_14cb5e998,L"OnPlayerRespawnBP",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b15e5d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b15e9a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b15ed70,1,0);
  FUN_1446f470e(&DAT_14cb5e9f0,L"OnTimerCompletedBP",1);
  FUN_1446f470e(&DAT_14cb5ea00,L"OnTimerEventCompletedBP",1);
  FUN_1446f470e(&DAT_14cb5ea10,L"OnTimerPausedBP",1);
  FUN_1446f470e(&DAT_14cb5ea20,L"OnTimerStartedBP",1);
  FUN_1446f470e(&DAT_14cb5ea30,L"OnTimerUnpausedBP",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b15f5d0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b15f680);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b15fa00;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b15fa40);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c547ec FUN_143c547ec body=55 status=ok
// SIG undefined FUN_143c547ec(void)

void FUN_143c547ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ebf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ebf8 = FUN_14171c317(FUN_1464e38a9,uVar1,L"EForwardDynamicsDataGenerationMode");
  }
  return;
}



// FUNCTION 143c54823 FUN_143c54823 body=55 status=ok
// SIG undefined FUN_143c54823(void)

void FUN_143c54823(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ecb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ecb0 = FUN_14171c317(FUN_1464e3b07,uVar1,L"EPlayersOverlappingActorOutput");
  }
  return;
}



// FUNCTION 143c5485a FUN_143c5485a body=55 status=ok
// SIG undefined FUN_143c5485a(void)

void FUN_143c5485a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ecc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ecc8 = FUN_14171c317(FUN_1464e3b38,uVar1,L"EGameplayEffectReplication");
  }
  return;
}



// FUNCTION 143c54891 FUN_143c54891 body=55 status=ok
// SIG undefined FUN_143c54891(void)

void FUN_143c54891(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ece0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ece0 = FUN_14171c317(FUN_1464e3b69,uVar1,L"EGameplayEffectVisibility");
  }
  return;
}



// FUNCTION 143c548c8 FUN_143c548c8 body=55 status=ok
// SIG undefined FUN_143c548c8(void)

void FUN_143c548c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ecf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ecf8 = FUN_14171c317(FUN_1464e3b9a,uVar1,L"EGameplayEffectBodyVisibility");
  }
  return;
}



// FUNCTION 143c548ff FUN_143c548ff body=47 status=ok
// SIG undefined FUN_143c548ff(void)

longlong FUN_143c548ff(void)

{
  if (DAT_14cb5ed60 == 0) {
    FUN_14000fc22(&DAT_14cb5ed60,&PTR_FUN_14b1676a0);
  }
  return DAT_14cb5ed60;
}



// FUNCTION 143c5492e FUN_143c5492e body=3100 status=ok
// SIG undefined FUN_143c5492e(void)

void FUN_143c5492e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *_Src;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong local_88 [7];
  undefined8 local_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_b8 = FUN_1446ddbd2();
      local_b0 = FUN_1468d96f0;
      local_c0 = 0;
      local_c8 = (longlong *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&local_38);
            goto LAB_143c54b24;
          }
        }
        puVar9 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar9 != &local_38) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_38,puVar9,(int)plVar8[6]);
          }
          else {
            memcpy(&local_38,puVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar8[6]);
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,&local_38,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&local_38,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
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
      FUN_14002ddda(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_38);
    }
  }
LAB_143c54b24:
  local_50 = 0xffffffffffffffff;
  uStack_48 = 0;
  lStack_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_b8 = FUN_1446ddbd2();
      local_b0 = FUN_1403a682c;
      local_c0 = 0;
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
            goto LAB_143c54cd8;
          }
        }
        puVar9 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar9 != &local_50) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_50,puVar9,(int)plVar8[6]);
          }
          else {
            memcpy(&local_50,puVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar8[6]);
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,&local_50,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&local_50,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
    }
LAB_143c54cd8:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_50);
      goto LAB_143c54cd8;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_50);
      goto LAB_143c54cd8;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_50);
      goto LAB_143c54cd8;
    }
    local_50 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
  }
  puVar9 = (undefined8 *)(param_2 + 0x38);
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
            goto LAB_143c54e5a;
          }
        }
        plVar10 = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar10 != local_88 + 4) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_88 + 4,plVar10,(int)plVar8[6]);
          }
          else {
            memcpy(local_88 + 4,plVar10,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar8[6]);
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
      *puVar9 = puVar3[1];
    }
LAB_143c54e5a:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_88 + 4);
      goto LAB_143c54e5a;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_88 + 4);
      goto LAB_143c54e5a;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_88 + 4);
      goto LAB_143c54e5a;
    }
    local_88[4] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  plVar10 = local_88 + 4;
  if (plVar8 != (longlong *)0x0) {
    plVar10 = plVar8;
  }
  local_88[2] = 0;
  local_88[3] = 0;
  *puVar9 = 0;
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
            goto LAB_143c54fde;
          }
        }
        plVar11 = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar11 != local_88 + 2) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_88 + 2,plVar11,(int)plVar8[6]);
          }
          else {
            memcpy(local_88 + 2,plVar11,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar8[6]);
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
      *puVar9 = puVar3[1];
    }
LAB_143c54fde:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_88 + 2);
      goto LAB_143c54fde;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_88 + 2);
      goto LAB_143c54fde;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_88 + 2);
      goto LAB_143c54fde;
    }
    local_88[2] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  plVar11 = local_88 + 2;
  if (plVar8 != (longlong *)0x0) {
    plVar11 = plVar8;
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *puVar9 = 0;
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
            goto LAB_143c551de;
          }
        }
        _Src = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != local_88) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_88,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(local_88,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar8[6]);
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar8,local_88,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,local_88,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
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
      FUN_14002ddda(uVar1,param_2,local_88);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_88);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_88[0] = *(longlong *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_88);
    }
  }
LAB_143c551de:
  plVar8 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = (undefined4)local_50;
  uStack_a4 = local_50._4_4_;
  uStack_a0 = (undefined4)uStack_48;
  uStack_9c = uStack_48._4_4_;
  local_98 = lStack_40;
  if ((lStack_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_c8 = plVar8;
  FUN_143d52654(local_38,&local_a8,plVar10,plVar11);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c55584 FUN_143c55584 body=556 status=ok
// SIG undefined FUN_143c55584(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c55584(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb5ead8 = (ulonglong)uVar1;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1631a0,1,&PTR_FUN_14b163170);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b164820,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1648b0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1652b0,1,&PTR_FUN_14b165260);
  FUN_14098d3d2(FUN_143c547ec,L"/Script/GbxGame",L"EForwardDynamicsDataGenerationMode",
                &DAT_14cb5ebf0);
  FUN_1446f470e(&DAT_14cb5ec20,L"ReceiveMissionStatusChanged",1);
  FUN_1446f470e(&DAT_14cb5ec30,L"ReceivePlayerGroupAdded",1);
  FUN_1446f470e(&DAT_14cb5ec40,L"ReceivePlayerGroupPlayerAdded",1);
  FUN_1446f470e(&DAT_14cb5ec50,L"ReceivePlayerGroupPlayerRemoved",1);
  FUN_1446f470e(&DAT_14cb5ec60,L"ReceivePlayerGroupRemoved",1);
  FUN_1446f470e(&DAT_14cb5ec70,L"ReceivePlayerLogout",1);
  FUN_1446f470e(&DAT_14cb5ec80,L"ReceivePlayerPostLogin",1);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b165f70,1,0);
  ppuStack_50 = &PTR_FUN_14b1699f0;
  local_58 = 0;
  uStack_48 = 4;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b169a70,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c557b4 FUN_143c557b4 body=55 status=ok
// SIG undefined FUN_143c557b4(void)

void FUN_143c557b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f128 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f128 = FUN_14171c317(FUN_1464e4e56,uVar1,L"EShowFPSMode");
  }
  return;
}



// FUNCTION 143c557eb FUN_143c557eb body=55 status=ok
// SIG undefined FUN_143c557eb(void)

void FUN_143c557eb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f158 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f158 = FUN_14171c317(FUN_1464e4f1e,uVar1,L"EGbxNvidiaReflexMode");
  }
  return;
}



// FUNCTION 143c55822 FUN_143c55822 body=48 status=ok
// SIG undefined FUN_143c55822(void)

longlong FUN_143c55822(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140b86d4c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55862 FUN_143c55862 body=48 status=ok
// SIG undefined FUN_143c55862(void)

longlong FUN_143c55862(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140b86d4c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c558c2 FUN_143c558c2 body=48 status=ok
// SIG undefined FUN_143c558c2(void)

longlong FUN_143c558c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c558fa FUN_143c558fa body=48 status=ok
// SIG undefined FUN_143c558fa(void)

longlong FUN_143c558fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55932 FUN_143c55932 body=48 status=ok
// SIG undefined FUN_143c55932(void)

longlong FUN_143c55932(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xbf0;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55962 FUN_143c55962 body=48 status=ok
// SIG undefined FUN_143c55962(void)

longlong FUN_143c55962(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc30;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c559a2 FUN_143c559a2 body=48 status=ok
// SIG undefined FUN_143c559a2(void)

longlong FUN_143c559a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc38;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c559f8 FUN_143c559f8 body=48 status=ok
// SIG undefined FUN_143c559f8(void)

longlong FUN_143c559f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55a28 FUN_143c55a28 body=48 status=ok
// SIG undefined FUN_143c55a28(void)

longlong FUN_143c55a28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55a58 FUN_143c55a58 body=48 status=ok
// SIG undefined FUN_143c55a58(void)

longlong FUN_143c55a58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55a96 FUN_143c55a96 body=48 status=ok
// SIG undefined FUN_143c55a96(void)

longlong FUN_143c55a96(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55aee FUN_143c55aee body=48 status=ok
// SIG undefined FUN_143c55aee(void)

longlong FUN_143c55aee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55b1e FUN_143c55b1e body=48 status=ok
// SIG undefined FUN_143c55b1e(void)

longlong FUN_143c55b1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55b4e FUN_143c55b4e body=48 status=ok
// SIG undefined FUN_143c55b4e(void)

longlong FUN_143c55b4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x840;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55b7e FUN_143c55b7e body=48 status=ok
// SIG undefined FUN_143c55b7e(void)

longlong FUN_143c55b7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x848;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55bbe FUN_143c55bbe body=48 status=ok
// SIG undefined FUN_143c55bbe(void)

longlong FUN_143c55bbe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140612a20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55bee FUN_143c55bee body=48 status=ok
// SIG undefined FUN_143c55bee(void)

longlong FUN_143c55bee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_140aee498(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55c1e FUN_143c55c1e body=48 status=ok
// SIG undefined FUN_143c55c1e(void)

longlong FUN_143c55c1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xaf0;
  FUN_140aee498(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c55c5c FUN_143c55c5c body=57 status=ok
// SIG undefined FUN_143c55c5c(void)

void FUN_143c55c5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ee40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ee40 = FUN_140002ddd(FUN_1464e425f,uVar1,L"GbxGameSpawnerBehaviorMod");
  }
  return;
}



// FUNCTION 143c55cce FUN_143c55cce body=1374 status=ok
// SIG undefined FUN_143c55cce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c55cce(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b16b460,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b16be00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b16c8d0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b16c980);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5ee50 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b16db10,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b16dc80);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b16e890,1,0);
  _DAT_14cb5eeb8 = 0x47efffffe0000000;
  _DAT_14cb5eec0 = 0x47efffffe0000000;
  _DAT_14cb5eec8 = 0x47efffffe0000000;
  _DAT_14cb5eed0 = 0x47efffffe0000000;
  _DAT_14cb5eed8 = 0x47efffffe0000000;
  _DAT_14cb5eee0 = 0x47efffffe0000000;
  _DAT_14cb5eee8 = 0x47efffffe0000000;
  _DAT_14cb5eef0 = 0x47efffffe0000000;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b16f7c0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b16f8e0);
  FUN_1446f470e(&DAT_14cb5ef60,L"PlayMusicEvent",1);
  FUN_1446f470e(&DAT_14cb5ef70,L"PlaySoundInWorldMulticast",1);
  FUN_1446f470e(&DAT_14cb5ef80,L"PlaySoundOnActorMulticast",1);
  FUN_1446f470e(&DAT_14cb5ef90,L"PlaySoundOnActorSocketMulticast",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b170de0,1,&PTR_FUN_14b170db0);
  FUN_1446f470e(&DAT_14cb5f010,L"OnGroupAdded",1);
  FUN_1446f470e(&DAT_14cb5f020,L"OnGroupRemoved",1);
  FUN_1446f470e(&DAT_14cb5f030,L"OnPlayerAddedToGroup",1);
  FUN_1446f470e(&DAT_14cb5f040,L"OnPlayerRemovedFromGroup",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b171d70,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1720d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b172240,1,0);
  local_50 = "UpscalingMethod";
  local_48 = 0xf;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5f0f0 = (ulonglong)uVar1;
  local_50 = "FrameGeneration";
  local_48 = 0xf;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5f0f8 = (ulonglong)uVar1;
  local_50 = "Upscaling";
  local_48 = 9;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5f100 = (ulonglong)uVar1;
  local_50 = "AntiAliasingMethod";
  local_48 = 0x12;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5f108 = (ulonglong)uVar1;
  local_50 = "WindowsTextureLODGroups";
  local_48 = 0x17;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5f110 = (ulonglong)uVar1;
  local_50 = "Textures";
  local_48 = 8;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5f118 = (ulonglong)uVar1;
  ppuStack_60 = &PTR_FUN_14b174830;
  local_68 = 1;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1748a0,1,&PTR_FUN_14b174870);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b174f50,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b175750,1,0);
  FUN_1446f470e(&DAT_14cb5f2b8,L"OnApplyCollision",1);
  FUN_1446f470e(&DAT_14cb5f2c8,L"OnApplyHit",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b175db0,1,0);
  FUN_1446f470e(&DAT_14cb5f2f0,L"PainterComponent",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b176800,2,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c56230 FUN_143c56230 body=55 status=ok
// SIG undefined FUN_143c56230(void)

void FUN_143c56230(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f3c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f3c0 = FUN_14171c317(FUN_1464e5d9f,uVar1,L"EDamageSurfaceType");
  }
  return;
}



// FUNCTION 143c56267 FUN_143c56267 body=55 status=ok
// SIG undefined FUN_143c56267(void)

void FUN_143c56267(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f648 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f648 = FUN_14171c317(FUN_1464e6a02,uVar1,L"EHealthPoolType");
  }
  return;
}



// FUNCTION 143c56414 FUN_143c56414 body=122 status=ok
// SIG undefined FUN_143c56414(void)

void FUN_143c56414(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf0);
  *(undefined4 *)((longlong)param_2 + 8) = 0x3001;
  *(undefined4 *)((longlong)param_2 + 0x28) = 10;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x80) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x90) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0xe0) = 0x3f800000;
  return;
}



// FUNCTION 143c565b2 FUN_143c565b2 body=869 status=ok
// SIG undefined FUN_143c565b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c565b2(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5f338 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b178a50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b178e00);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1791a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1792f0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b17a8f0;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b17a910);
  _DAT_14cb5f44c = 0;
  FUN_14052b5e0(&DAT_14cb5f448,"PlayerAwareness",0);
  _DAT_14cb5f458 = "PlayerAwareness";
  _DAT_14cb5f460 = 0x47efffffe0000000;
  _DAT_14cb5f468 = 0x47efffffe0000000;
  _DAT_14cb5f470 = 0x47efffffe0000000;
  _DAT_14cb5f478 = 0x47efffffe0000000;
  _DAT_14cb5f480 = 0x47efffffe0000000;
  _DAT_14cb5f488 = 0x47efffffe0000000;
  _DAT_14cb5f490 = 0x47efffffe0000000;
  _DAT_14cb5f498 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb5f4a0);
  if (cVar1 == '\0') {
    _DAT_14cb5f4a0 = 0;
    uRam000000014cb5f4a8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b17ca60);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b17cb90);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b17cea0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b17dc20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b17df50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b17e2b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b17e420);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b17e6f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b17f090,1,&PTR_FUN_14b17f040);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b17f6b0,1,0);
  FUN_14098d3d2(FUN_143c56267,L"/Script/GbxGame",L"EHealthPoolType",&DAT_14cb5f640);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b180040);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c56918 FUN_143c56918 body=55 status=ok
// SIG undefined FUN_143c56918(void)

void FUN_143c56918(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f6b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f6b0 = FUN_14171c317(FUN_1464e726e,uVar1,L"EGbxHealthStateResolverValue");
  }
  return;
}



// FUNCTION 143c5694f FUN_143c5694f body=55 status=ok
// SIG undefined FUN_143c5694f(void)

void FUN_143c5694f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f808 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f808 = FUN_14171c317(FUN_1464e78d1,uVar1,L"EGbxButtonEvent");
  }
  return;
}



// FUNCTION 143c56986 FUN_143c56986 body=55 status=ok
// SIG undefined FUN_143c56986(void)

void FUN_143c56986(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fc90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fc90 = FUN_14171c317(FUN_1464e8ff7,uVar1,L"EGbxTransactionType");
  }
  return;
}



// FUNCTION 143c569bd FUN_143c569bd body=55 status=ok
// SIG undefined FUN_143c569bd(void)

void FUN_143c569bd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fcc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fcc0 = FUN_14171c317(FUN_1464e90b9,uVar1,L"EUpdateCustomizationOperation");
  }
  return;
}



// FUNCTION 143c56a64 FUN_143c56a64 body=57 status=ok
// SIG undefined FUN_143c56a64(void)

void FUN_143c56a64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f748 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f748 = FUN_140002ddd(FUN_1464e750f,uVar1,L"GbxInputActionDef");
  }
  return;
}



// FUNCTION 143c56c8c FUN_143c56c8c body=57 status=ok
// SIG undefined FUN_143c56c8c(void)

void FUN_143c56c8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fad8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fad8 = FUN_140002ddd(FUN_1464e8953,uVar1,L"GbxInputKeyRebindDef");
  }
  return;
}



// FUNCTION 143c56d8c FUN_143c56d8c body=111 status=ok
// SIG undefined FUN_143c56d8c(void)

void FUN_143c56d8c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe0);
  *(undefined4 *)((longlong)param_2 + 0x74) = 0x80;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0xf;
  *(undefined1 *)((longlong)param_2 + 200) = 1;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  return;
}



// FUNCTION 143c56e42 FUN_143c56e42 body=1626 status=ok
// SIG undefined FUN_143c56e42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c56e42(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b182bb0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b182bd0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5f6d8 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b183000,1,&PTR_FUN_14b182fb0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b183130);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b183220);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1832e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b183390);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1835b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b183700);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b183ce0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b183d80);
  FUN_14098d3d2(FUN_143c5694f,L"/Script/GbxGame",L"EGbxButtonEvent",&DAT_14cb5f800);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1841d0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b184260);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1843b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1845d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b184790);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1849c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b184c80);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b184e30);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b185020);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b185220);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1853c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b185560);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b185620);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b185770);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b185eb0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b185fd0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b186060);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b186100);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1864a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1869b0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b186d70,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b186eb0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b187390);
  FUN_1446f470e(&DAT_14cb5fbd8,L"OnInventoryAugmentCausedDamageConditionMet",1);
  FUN_1446f470e(&DAT_14cb5fbe8,L"OnInventoryAugmentConditionMet",1);
  FUN_1446f470e(&DAT_14cb5fbf8,L"OnInventoryAugmentEquipped",1);
  FUN_1446f470e(&DAT_14cb5fc08,L"OnInventoryAugmentReceivedDamageConditionMet",1);
  FUN_1446f470e(&DAT_14cb5fc18,L"OnInventoryAugmentRemovalConditionMet",1);
  FUN_1446f470e(&DAT_14cb5fc28,L"OnInventoryAugmentUnequipped",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b187a80,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b187b40,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b187fc0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b188330;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b188350);
  FUN_14098d3d2(FUN_143c569bd,L"/Script/GbxGame",L"EUpdateCustomizationOperation",&DAT_14cb5fcb8);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1886e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b188940,1,&PTR_FUN_14b188910);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b188e10);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c574a0 FUN_143c574a0 body=55 status=ok
// SIG undefined FUN_143c574a0(void)

void FUN_143c574a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fe68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fe68 = FUN_14171c317(FUN_1464ea29c,uVar1,L"EGbxLevelRoadAreaShape");
  }
  return;
}



// FUNCTION 143c574d7 FUN_143c574d7 body=55 status=ok
// SIG undefined FUN_143c574d7(void)

void FUN_143c574d7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fff0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fff0 = FUN_14171c317(FUN_1464ea9fe,uVar1,L"EGbxLevelSequenceReductionMode");
  }
  return;
}



// FUNCTION 143c575a0 FUN_143c575a0 body=55 status=ok
// SIG undefined FUN_143c575a0(void)

void FUN_143c575a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb600c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb600c0 = FUN_14171c317(FUN_1464eae14,uVar1,L"EGbxSequenceActorDataSpawnType");
  }
  return;
}



// FUNCTION 143c575d8 FUN_143c575d8 body=52 status=ok
// SIG undefined FUN_143c575d8(void)

void FUN_143c575d8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14b4239ac);
  FUN_140e216ca(param_1,plVar1);
  return;
}



// FUNCTION 143c5760c FUN_143c5760c body=234 status=ok
// SIG undefined FUN_143c5760c(void)

void FUN_143c5760c(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14a5a49e0;
  puVar1[5] = &PTR_FUN_14a5a4c80;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3ff00000;
  puVar1[6] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = puVar1 + 8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *puVar1 = &PTR_FUN_14b1959b0;
  puVar1[5] = &PTR_FUN_14b195c50;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
  puVar1[0x1c] = 0;
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  return;
}



// FUNCTION 143c576fc FUN_143c576fc body=48 status=ok
// SIG undefined FUN_143c576fc(void)

longlong FUN_143c576fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5772c FUN_143c5772c body=48 status=ok
// SIG undefined FUN_143c5772c(void)

longlong FUN_143c5772c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5775c FUN_143c5775c body=48 status=ok
// SIG undefined FUN_143c5775c(void)

longlong FUN_143c5775c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5778c FUN_143c5778c body=48 status=ok
// SIG undefined FUN_143c5778c(void)

longlong FUN_143c5778c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c577bc FUN_143c577bc body=48 status=ok
// SIG undefined FUN_143c577bc(void)

longlong FUN_143c577bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c577ec FUN_143c577ec body=48 status=ok
// SIG undefined FUN_143c577ec(void)

longlong FUN_143c577ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5781c FUN_143c5781c body=48 status=ok
// SIG undefined FUN_143c5781c(void)

longlong FUN_143c5781c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5784c FUN_143c5784c body=48 status=ok
// SIG undefined FUN_143c5784c(void)

longlong FUN_143c5784c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c57884 FUN_143c57884 body=48 status=ok
// SIG undefined FUN_143c57884(void)

longlong FUN_143c57884(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140e4561e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c578b4 FUN_143c578b4 body=48 status=ok
// SIG undefined FUN_143c578b4(void)

longlong FUN_143c578b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140e4561e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c578e4 FUN_143c578e4 body=48 status=ok
// SIG undefined FUN_143c578e4(void)

longlong FUN_143c578e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_140e4561e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c57914 FUN_143c57914 body=48 status=ok
// SIG undefined FUN_143c57914(void)

longlong FUN_143c57914(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x440;
  FUN_140e4561e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c579b6 FUN_143c579b6 body=57 status=ok
// SIG undefined FUN_143c579b6(void)

void FUN_143c579b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5feb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5feb0 = FUN_140002ddd(FUN_1464ea333,uVar1,L"GbxLevelRoadConnectorDef");
  }
  return;
}



// FUNCTION 143c57b70 FUN_143c57b70 body=57 status=ok
// SIG undefined FUN_143c57b70(void)

void FUN_143c57b70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ff70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ff70 = FUN_140002ddd(FUN_1464ea79a,uVar1,L"GbxLevelRoadDef");
  }
  return;
}



// FUNCTION 143c57bf8 FUN_143c57bf8 body=110 status=ok
// SIG undefined FUN_143c57bf8(void)

void FUN_143c57bf8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd0);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  return;
}



// FUNCTION 143c57da0 FUN_143c57da0 body=57 status=ok
// SIG undefined FUN_143c57da0(void)

void FUN_143c57da0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60090 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60090 = FUN_140002ddd(FUN_1464ead62,uVar1,L"GbxLevelSequenceActorDef");
  }
  return;
}



// FUNCTION 143c57e22 FUN_143c57e22 body=957 status=ok
// SIG undefined FUN_143c57e22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c57e22(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b18ff30,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5fdc0 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1903a0,1,&PTR_FUN_14b190370);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b190600);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b191540,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1919f0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b191f80;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b191fd0,1,&PTR_FUN_14b191fa0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b192630,2,&PTR_FUN_14b192600);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 8;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1931b0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b193660,1,0);
  _DAT_14cb5ffb0 = 0xffffffff;
  _DAT_14cb5ffb4 = 0;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1940b0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b194120,1,&PTR_FUN_14b1940d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b194ba0,1,&PTR_FUN_14b194b50);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1952c0,1,&PTR_FUN_14b195290);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b195680;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1956d0,1,&PTR_FUN_14b1956a0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b195ca0,1,&PTR_FUN_14b195c70);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b196230,1,&PTR_FUN_14b196200);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1965a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b196930);
  FUN_1446f470e(&DAT_14cb601f0,L"Multicast_StartLoadingAssets",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b197310,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b197710,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1977e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b197bc0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


