// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14585f5fa FUN_14585f5fa body=70 status=ok
// SIG undefined FUN_14585f5fa(void)

void FUN_14585f5fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aea60d0;
  param_1[5] = &PTR_FUN_14aea6370;
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14585f648 FUN_14585f648 body=174 status=ok
// SIG undefined FUN_14585f648(void)

undefined8 * FUN_14585f648(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b7d1970;
  param_1[3] = 0x203dcccccd;
  param_1[4] = 0x3f80000041c80000;
  param_1[5] = 0x3f80000040a00000;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x85) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d) = 0;
  memset(param_1 + 0x13,0,0xe8);
  FUN_14585f6f6(param_1 + 0x30);
  *(undefined4 *)(param_1 + 6) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x34) = 8;
  *(undefined4 *)(param_1 + 0xc) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 100) = 3;
  *(undefined4 *)(param_1 + 0x12) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 14585f6f6 FUN_14585f6f6 body=115 status=ok
// SIG undefined FUN_14585f6f6(void)

void FUN_14585f6f6(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 4;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  *(undefined1 *)(param_1 + 5) = 3;
  *(char *)(param_1 + 6) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 0xb) = 4;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 3;
  *(char *)(param_1 + 0xd) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}



// FUNCTION 14585f76a FUN_14585f76a body=55 status=ok
// SIG undefined FUN_14585f76a(void)

void FUN_14585f76a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99d1f0 == 0) {
    uVar1 = FUN_14125eb1d();
    DAT_14c99d1f0 = FUN_140002ddd(FUN_1462932e0,uVar1,L"ClothCollisionPrim_Sphere");
  }
  return;
}



// FUNCTION 14585f7a2 FUN_14585f7a2 body=55 status=ok
// SIG undefined FUN_14585f7a2(void)

void FUN_14585f7a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8a60 == 0) {
    uVar1 = FUN_14125eb4e();
    DAT_14caa8a60 = FUN_140002ddd(FUN_14632a1fd,uVar1,L"BreakEventCallbackWrapper");
  }
  return;
}



// FUNCTION 14585f7da FUN_14585f7da body=55 status=ok
// SIG undefined FUN_14585f7da(void)

void FUN_14585f7da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabae00 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabae00 = FUN_140002ddd(FUN_146360658,uVar1,L"SwapAudioOutputResult");
  }
  return;
}



// FUNCTION 14585f812 FUN_14585f812 body=55 status=ok
// SIG undefined FUN_14585f812(void)

void FUN_14585f812(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb127f0 == 0) {
    uVar1 = FUN_14125ebb0();
    DAT_14cb127f0 = FUN_140002ddd(FUN_1417fca2f,uVar1,L"ClothConstraintSetup_Legacy");
  }
  return;
}



// FUNCTION 14585f84a FUN_14585f84a body=55 status=ok
// SIG undefined FUN_14585f84a(void)

void FUN_14585f84a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe478 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe478 = FUN_140002ddd(FUN_14667f461,uVar1,L"UsdPrimPathList");
  }
  return;
}



// FUNCTION 14585f882 FUN_14585f882 body=55 status=ok
// SIG undefined FUN_14585f882(void)

void FUN_14585f882(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1dd78 == 0) {
    uVar1 = FUN_14585f8b9();
    DAT_14cc1dd78 = FUN_140002ddd(FUN_14673cf3c,uVar1,L"LiveLinkPingMessage");
  }
  return;
}



// FUNCTION 14585f8b9 FUN_14585f8b9 body=49 status=ok
// SIG undefined FUN_14585f8b9(void)

longlong FUN_14585f8b9(void)

{
  if (DAT_14cc1dd60 == 0) {
    FUN_140f50038(&DAT_14cc1dd60,&PTR_s__Script_LiveLinkMessageBusFramew_14bd25680);
  }
  return DAT_14cc1dd60;
}



// FUNCTION 14585f8ea FUN_14585f8ea body=99 status=ok
// SIG undefined FUN_14585f8ea(void)

undefined8 * FUN_14585f8ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b71f010;
  param_1[0x19f] = &PTR_FUN_14b71f650;
  param_1[0x1a0] = &PTR_FUN_14b71f680;
  if (*(char *)(param_1 + 0x1a2) == '\x01') {
    *(undefined1 *)(param_1 + 0x1a2) = 0;
  }
  FUN_14585f94e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585f94e FUN_14585f94e body=50 status=ok
// SIG undefined FUN_14585f94e(void)

void FUN_14585f94e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5606f0;
  if (param_1[0x197] != 0) {
    FUN_1400020a8();
  }
  FUN_14585f980(param_1);
  return;
}



// FUNCTION 14585f980 FUN_14585f980 body=67 status=ok
// SIG undefined FUN_14585f980(void)

void FUN_14585f980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8011f0;
  if (param_1[0x18e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17d] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14585f9c4 FUN_14585f9c4 body=263 status=ok
// SIG undefined FUN_14585f9c4(void)

void FUN_14585f9c4(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x280) == '\x01') {
    cVar1 = FUN_144729dda(param_1 + 0x30);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x30);
      cVar1 = FUN_144729dda(lVar2 + 0x370);
      if (cVar1 != '\0') {
        lVar2 = FUN_14479d2ce(lVar2 + 0x370);
        if (lVar2 != 0) {
          lVar2 = FUN_1400b6e86(lVar2);
          if (lVar2 != 0) {
            lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x10))(lVar2 + 0x30);
            if (lVar2 != 0) {
              lVar3 = FUN_140dd10c4();
              if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                local_28 = param_3;
                if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(param_3);
                }
                lVar2 = FUN_144a7a2cc(lVar2,&local_28);
                if (lVar2 != 0) {
                  FUN_14585facc(param_1,lVar2);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585facc FUN_14585facc body=449 status=ok
// SIG undefined FUN_14585facc(void)

void FUN_14585facc(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined8 *puVar4;
  undefined1 auStack_218 [32];
  undefined4 *local_1f8;
  char local_1ed;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(char *)(param_1 + 0x280) != '\x01') goto LAB_14585fc11;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (((cVar1 == '\0') || ((*(byte *)(param_1 + 0x8d) & 0x20) != 0)) || (*param_2 == 0))
  goto LAB_14585fc11;
  local_1e8 = *(undefined8 *)(*param_2 + 0x18);
  cVar1 = *(char *)((longlong)param_2 + 0x13);
  local_1ec = (undefined4)param_2[0xb];
  if (cVar1 == '\x02') {
    puVar4 = &DAT_14cb92920;
LAB_14585fc4a:
    FUN_140de1078(param_1,puVar4,0,0);
  }
  else if ((cVar1 == '\x10') || (cVar1 == '\b')) {
    puVar4 = &DAT_14cb92940;
    goto LAB_14585fc4a;
  }
  uVar2 = FUN_14479d2ce(param_1 + 0x30);
  local_1e0 = local_1c0;
  local_1c8 = '\0';
  local_1d0 = local_c0;
  local_1ed = cVar1;
  local_1d8 = local_1e0;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"WidgetSpecificActionTriggerEvent",&local_1e0);
  local_40 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    FUN_1446fe5a4(local_c0,_Str,sVar3 & 0xffffffff,1);
  }
  local_1f8 = &local_1ec;
  FUN_14585fc8e(uVar2,local_38,&local_1e8,&local_1ed);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 == '\x01') {
    FUN_1400020a8(local_1e0);
  }
LAB_14585fc11:
  if ((local_28 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585fc8e FUN_14585fc8e body=493 status=ok
// SIG undefined FUN_14585fc8e(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014585fe71 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14585fc8e(longlong param_1,char *param_2,undefined8 *param_3,undefined1 *param_4,
             undefined4 *param_5)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(&local_1b0,local_88);
  local_1a0 = *param_3;
  uStack_198 = CONCAT31(uStack_198._1_3_,*param_4);
  uStack_194 = *param_5;
  puVar5 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *puVar2 = &PTR_FUN_14b478e10;
  plVar6 = puVar2 + 1;
  *plVar6 = local_1b0;
  local_1b0 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_1a8;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_1a8._4_4_;
  local_1a8 = 0;
  *(undefined4 *)(puVar2 + 3) = (undefined4)local_1a0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = local_1a0._4_4_;
  *(undefined4 *)(puVar2 + 4) = uStack_198;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_194;
  if (plVar6 != (longlong *)0x0) {
    puVar5 = &LAB_146141c6e;
    local_78 = &LAB_146141c6e;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = puVar5;
  puVar3[4] = puVar2;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 8) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar3 + 6) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
  *(undefined4 *)(puVar3 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
  if (plVar6 != (longlong *)0x0) {
    local_78 = (undefined1 *)0x0;
  }
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar2;
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      uVar4 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (local_1b0 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14585fe7c FUN_14585fe7c body=40 status=ok
// SIG undefined FUN_14585fe7c(void)

undefined8 FUN_14585fe7c(undefined8 param_1,int param_2)

{
  FUN_14585fea4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585fea4 FUN_14585fea4 body=39 status=ok
// SIG undefined FUN_14585fea4(void)

void FUN_14585fea4(longlong param_1)

{
  FUN_14585fed2(param_1 + 0x40);
  FUN_14585fed2(param_1 + 0x28);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14585fecc thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14585fed2 FUN_14585fed2 body=80 status=ok
// SIG undefined FUN_14585fed2(void)

void FUN_14585fed2(longlong *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  FUN_1446f8d3c(param_1,0,0,4,4);
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14585ff22 FUN_14585ff22 body=97 status=ok
// SIG undefined FUN_14585ff22(void)

void FUN_14585ff22(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14585ff84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aa4de20;
  puVar1[0x72] = &PTR_FUN_14aa4e470;
  puVar1[0x77] = 0;
  *(undefined8 *)(puVar1[0x73] + 0x640) = 0x4220000042b80000;
  FUN_14126002c(puVar1[0x73],0);
  return;
}



// FUNCTION 14585ff84 FUN_14585ff84 body=571 status=ok
// SIG undefined FUN_14585ff84(void)

undefined8 * FUN_14585ff84(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a9e0c50;
  param_1[0x72] = &PTR_FUN_14a9e12a0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  FUN_1446f470e(&local_20,L"CollisionCapsule",1);
  uVar1 = FUN_1400b5618();
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x73] = lVar2;
  *(undefined4 *)(lVar2 + 0x628) = 0xffff8a05;
  *(byte *)(param_1[0x73] + 0x62c) = *(byte *)(param_1[0x73] + 0x62c) | 1;
  *(undefined8 *)(param_1[0x73] + 0x640) = 0x4248000042480000;
  (**(code **)(*(longlong *)param_1[0x73] + 0x728))((longlong *)param_1[0x73],DAT_14cad0f30,1);
  *(byte *)(param_1[0x73] + 0x62c) = *(byte *)(param_1[0x73] + 0x62c) | 2;
  FUN_14126002c(param_1[0x73],1);
  *(undefined1 *)(param_1[0x73] + 0x1fb) = 0;
  lVar2 = param_1[0x73];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_1[0x73];
    }
  }
  param_1[0x39] = lVar2;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 3;
  FUN_1446f470e(&local_28,L"Sprite",1);
  uVar1 = FUN_141260078();
  lVar2 = FUN_1407194ae(param_1,local_28,uVar1,0);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x74] = lVar2;
  FUN_1446f470e(&local_30,L"Sprite2",1);
  uVar1 = FUN_141260078();
  lVar2 = FUN_1407194ae(param_1,local_30,uVar1,0);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x75] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458601c0 FUN_1458601c0 body=361 status=ok
// SIG undefined FUN_1458601c0(void)

undefined4 *
FUN_1458601c0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)FUN_14586032a(param_4);
  if (plVar6 == (longlong *)0x0) {
LAB_1458602db:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if (lVar7 == 0) goto LAB_1458602db;
    FUN_141260192(lVar7,&local_48,&DAT_14cb8c380);
    lVar7 = local_48;
    if (local_48 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x10);
      if (lVar9 == 0) {
        uVar8 = FUN_145cd97be();
        lVar9 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0x10) = lVar9;
      }
      if (((*(longlong *)(param_1 + 0x18) == 0) && (lVar9 != 0)) &&
         (*(longlong *)(param_1 + 8) != 0)) {
        plVar6 = *(longlong **)(lVar9 + 0xb8);
        if (plVar6 == (longlong *)0x0) {
LAB_145860326:
          uVar8 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar6 + 0x108))(plVar6);
          if (cVar4 == '\0') goto LAB_145860326;
          uVar8 = (**(code **)(*plVar6 + 0x110))(plVar6);
          uVar8 = FUN_144aff482(uVar8,(longlong *)(param_1 + 8));
        }
        *(undefined8 *)(param_1 + 0x18) = uVar8;
      }
      uVar5 = FUN_14126015e(lVar7);
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = uVar5;
      uVar3 = 2;
      goto LAB_14586024e;
    }
  }
  *(undefined2 *)(param_2 + 6) = 0;
  uVar3 = 0;
LAB_14586024e:
  plVar6 = plStack_40;
  *(undefined1 *)(param_2 + 8) = uVar3;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586032a FUN_14586032a body=47 status=ok
// SIG undefined FUN_14586032a(void)

undefined8 FUN_14586032a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_144a7c80a();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14586035a FUN_14586035a body=45 status=ok
// SIG undefined FUN_14586035a(void)

undefined8 FUN_14586035a(undefined8 param_1,int param_2)

{
  FUN_145860388();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145860388 FUN_145860388 body=97 status=ok
// SIG undefined FUN_145860388(void)

void FUN_145860388(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2498e0;
  plVar3 = (longlong *)param_1[10];
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
  FUN_141260281(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458603ea FUN_1458603ea body=168 status=ok
// SIG undefined FUN_1458603ea(void)

void FUN_1458603ea(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar2 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar2 = *(longlong *)(lVar1 + 0x2c8);
    if (lVar2 == 0) goto LAB_145860449;
  }
  FUN_1412629c6(&local_28,*(undefined8 *)(param_1 + 0x70));
  FUN_141277db8(lVar2,&local_30,local_28);
  if (local_30 == 0) {
    if (*(int *)(param_1 + 0x140) < 1) goto LAB_145860449;
    local_30 = **(longlong **)(param_1 + 0x138);
  }
  *(longlong *)(param_1 + 0x148) = local_30;
LAB_145860449:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145860494 FUN_145860494 body=63 status=ok
// SIG undefined FUN_145860494(void)

undefined1 FUN_145860494(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1458604d4(param_2,param_3);
    param_3 = param_3 + 0x4e8;
    param_2 = param_2 + 0x4e8;
  }
  return 1;
}



// FUNCTION 1458604d4 FUN_1458604d4 body=506 status=ok
// SIG undefined FUN_1458604d4(void)

longlong FUN_1458604d4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  byte bVar12;
  undefined1 uVar13;
  longlong lVar14;
  
  FUN_1458608c8();
  lVar14 = *(longlong *)(param_2 + 0x260);
  if (DAT_14c950c29 == 1) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = *(longlong *)(param_2 + 0x260);
    }
  }
  bVar12 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x260) = lVar14;
  lVar14 = *(longlong *)(param_2 + 0x268);
  if ((bVar12 & 1) != 0) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = *(longlong *)(param_2 + 0x268);
      bVar12 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x268) = lVar14;
  lVar14 = *(longlong *)(param_2 + 0x270);
  if ((bVar12 & 1) != 0) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = *(longlong *)(param_2 + 0x270);
    }
  }
  *(longlong *)(param_1 + 0x270) = lVar14;
  FUN_14586077e(param_1 + 0x278,param_2 + 0x278);
  uVar1 = *(undefined4 *)(param_2 + 0x2cc);
  uVar2 = *(undefined4 *)(param_2 + 0x2d0);
  uVar3 = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2cc) = uVar1;
  *(undefined4 *)(param_1 + 0x2d0) = uVar2;
  *(undefined4 *)(param_1 + 0x2d4) = uVar3;
  FUN_14123bd80(param_1 + 0x2d8,param_2 + 0x2d8);
  uVar1 = *(undefined4 *)(param_2 + 0x324);
  uVar2 = *(undefined4 *)(param_2 + 0x328);
  uVar3 = *(undefined4 *)(param_2 + 0x32c);
  uVar4 = *(undefined4 *)(param_2 + 0x330);
  uVar5 = *(undefined4 *)(param_2 + 0x334);
  uVar6 = *(undefined4 *)(param_2 + 0x338);
  uVar7 = *(undefined4 *)(param_2 + 0x33c);
  uVar8 = *(undefined4 *)(param_2 + 0x340);
  uVar9 = *(undefined4 *)(param_2 + 0x344);
  uVar10 = *(undefined4 *)(param_2 + 0x348);
  uVar11 = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  *(undefined4 *)(param_1 + 0x324) = uVar1;
  *(undefined4 *)(param_1 + 0x328) = uVar2;
  *(undefined4 *)(param_1 + 0x32c) = uVar3;
  *(undefined4 *)(param_1 + 0x330) = uVar4;
  *(undefined4 *)(param_1 + 0x334) = uVar5;
  *(undefined4 *)(param_1 + 0x338) = uVar6;
  *(undefined4 *)(param_1 + 0x33c) = uVar7;
  *(undefined4 *)(param_1 + 0x340) = uVar8;
  *(undefined4 *)(param_1 + 0x344) = uVar9;
  *(undefined4 *)(param_1 + 0x348) = uVar10;
  *(undefined4 *)(param_1 + 0x34c) = uVar11;
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  FUN_141262aba(param_1 + 0x358,param_2 + 0x358);
  FUN_141262aba(param_1 + 0x3a8,param_2 + 0x3a8);
  FUN_141262aba(param_1 + 0x3f8,param_2 + 0x3f8);
  FUN_141262aba(param_1 + 0x448,param_2 + 0x448);
  FUN_145860726(param_1 + 0x498,param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
  FUN_1458606ce(param_1 + 0x4b0,param_2 + 0x4b0);
  *(undefined1 *)(param_1 + 0x4c0) = *(undefined1 *)(param_2 + 0x4c0);
  FUN_1458606ce(param_1 + 0x4c8,param_2 + 0x4c8);
  *(undefined1 *)(param_1 + 0x4d8) = *(undefined1 *)(param_2 + 0x4d8);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x4e4) == '\x01') {
      *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
      uVar13 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x4e4) != '\x01') {
        return param_1;
      }
      uVar13 = 0;
    }
    *(undefined1 *)(param_1 + 0x4e4) = uVar13;
  }
  return param_1;
}



// FUNCTION 1458606ce FUN_1458606ce body=88 status=ok
// SIG undefined FUN_1458606ce(void)

undefined8 * FUN_1458606ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491c0f28(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 145860726 FUN_145860726 body=88 status=ok
// SIG undefined FUN_145860726(void)

undefined8 * FUN_145860726(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491c0ec6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14586077e FUN_14586077e body=120 status=ok
// SIG undefined FUN_14586077e(void)

longlong FUN_14586077e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1458607f6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1458607f6 FUN_1458607f6 body=209 status=ok
// SIG undefined FUN_1458607f6(void)

undefined8 * FUN_1458607f6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145928bec(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1491c0e6e(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar4 + 4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 6;
        puVar6 = puVar6 + 6;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1458608c8 FUN_1458608c8 body=362 status=ok
// SIG undefined FUN_1458608c8(void)

longlong FUN_1458608c8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_145860c80();
  uVar6 = *(undefined4 *)(param_2 + 100);
  uVar7 = *(undefined4 *)(param_2 + 0x68);
  uVar8 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  *(undefined4 *)(param_1 + 0x6c) = uVar8;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  FUN_140e00d48(param_1 + 0x78,param_2 + 0x78);
  FUN_140e00d48(param_1 + 0x88,param_2 + 0x88);
  FUN_145860b7e(param_1 + 0x98,param_2 + 0x98);
  FUN_140816cc4(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  FUN_145860a32(param_1 + 0x108,param_2 + 0x108);
  FUN_145860a32(param_1 + 0x118,param_2 + 0x118);
  FUN_145860c26(param_1 + 0x128,param_2 + 0x128);
  FUN_145860a8a(param_1 + 0x138,param_2 + 0x138);
  FUN_145860a8a(param_1 + 0x188,param_2 + 0x188);
  FUN_141262aba(param_1 + 0x1d8,param_2 + 0x1d8);
  uVar3 = *(undefined8 *)(param_2 + 0x228);
  lVar4 = *(longlong *)(param_2 + 0x230);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x228) = uVar3;
  *(longlong *)(param_1 + 0x230) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  FUN_145860bce(param_1 + 0x240,param_2 + 0x240);
  uVar3 = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_1 + 600) = uVar3;
  return param_1;
}



// FUNCTION 145860a32 FUN_145860a32 body=88 status=ok
// SIG undefined FUN_145860a32(void)

undefined8 * FUN_145860a32(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1466cc832(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 145860a8a FUN_145860a8a body=120 status=ok
// SIG undefined FUN_145860a8a(void)

longlong FUN_145860a8a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145860b02(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145860b02 FUN_145860b02 body=123 status=ok
// SIG undefined FUN_145860b02(void)

undefined8 * FUN_145860b02(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_141262c48(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 145860b7e FUN_145860b7e body=79 status=ok
// SIG undefined FUN_145860b7e(void)

undefined8 * FUN_145860b7e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491c0ce4(param_1,iVar1);
      FUN_1491c0d46(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145860bce FUN_145860bce body=88 status=ok
// SIG undefined FUN_145860bce(void)

undefined8 * FUN_145860bce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491c0e0c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 145860c26 FUN_145860c26 body=89 status=ok
// SIG undefined FUN_145860c26(void)

undefined8 * FUN_145860c26(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491c0d98(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 145860c80 FUN_145860c80 body=130 status=ok
// SIG undefined FUN_145860c80(void)

longlong FUN_145860c80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_1406fa324(param_1 + 0x18,param_2 + 0x18);
  FUN_1406fa324(param_1 + 0x28,param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  FUN_145860d02(param_1 + 0x40,param_2 + 0x40);
  FUN_145860d02(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 145860d02 FUN_145860d02 body=88 status=ok
// SIG undefined FUN_145860d02(void)

undefined8 * FUN_145860d02(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1476f8c0e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 145860d5a FUN_145860d5a body=156 status=ok
// SIG undefined FUN_145860d5a(void)

longlong FUN_145860d5a(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_145860ede();
  if (lVar1 != 0) {
    lVar2 = FUN_145860df8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      lStack_40 = 0;
      FUN_1487bcb96(param_1,&local_48);
      FUN_14888a0a8(lVar1,&local_48);
      if (lStack_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145860df8 FUN_145860df8 body=228 status=ok
// SIG undefined FUN_145860df8(void)

longlong FUN_145860df8(void)

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
  if (DAT_14cb5f7d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b7c3e;
    local_38 = &LAB_1486b8d73;
    local_40 = &LAB_14600d701;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxInputComponent",&DAT_14cb5f7d0,&DAT_1486b8d72);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5f7d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145860ede FUN_145860ede body=249 status=ok
// SIG undefined FUN_145860ede(void)

void FUN_145860ede(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf6500) && (FUN_144b3d300(&DAT_14caf6500), DAT_14caf6500 == -1)) {
    FUN_1446f470e(&DAT_14caf64f8,L"PawnInputComponent0",1);
    _Init_thread_footer(&DAT_14caf6500);
  }
  lVar1 = *(longlong *)(param_1 + 0x408);
  if ((((lVar1 == 0) || (lVar2 = FUN_141262dda(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (lVar1 = *(longlong *)(param_1 + 0x408), uVar3 = DAT_14caf64f8, lVar1 == 0)))
     ) {
    uVar3 = DAT_14caf64f8;
    lVar1 = FUN_145860fd8();
  }
  FUN_141262cc4(param_1,lVar1,uVar3,0,0,0,0,0);
  return;
}



// FUNCTION 145860fd8 FUN_145860fd8 body=975 status=ok
// SIG undefined FUN_145860fd8(void)

longlong FUN_145860fd8(void)

{
  uint uVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_140389788();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  local_48 = *(undefined8 *)(lVar4 + 0xe8);
  local_40 = *(undefined4 *)(lVar4 + 0xf0);
  uStack_3c = *(undefined4 *)(lVar4 + 0xf4);
  uStack_38 = *(undefined4 *)(lVar4 + 0xf8);
  uStack_34 = *(undefined4 *)(lVar4 + 0xfc);
  local_30 = (void *)0x0;
  local_28 = *(int *)(lVar4 + 0x108);
  lVar6 = (longlong)local_28;
  _Src = *(void **)(lVar4 + 0x100);
  if (lVar6 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar6 * 2);
  }
  lVar4 = FUN_14479d2ce(&local_48);
  if ((lVar4 == 0) && (CONCAT44(uStack_3c,local_40) != 0)) {
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(&local_48,lVar4);
      if (lVar4 == 0) goto LAB_1458610cf;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_48,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
LAB_1458610aa:
      lVar6 = FUN_144a797b2();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        FUN_141262dda();
      }
    }
  }
  else if (lVar4 != 0) goto LAB_1458610aa;
LAB_1458610cf:
  lVar4 = FUN_14479d2ce(&local_48);
  if ((lVar4 == 0) && (CONCAT44(uStack_3c,local_40) != 0)) {
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(&local_48,lVar4);
      if (lVar4 == 0) goto LAB_14586136e;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_48,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
LAB_1458610f6:
      lVar6 = FUN_144a797b2();
      if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
          (lVar6 = FUN_141262dda(), lVar6 != 0)) &&
         ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)))) {
        lVar4 = FUN_14479d2ce(&local_48);
        if ((lVar4 == 0) && (CONCAT44(uStack_3c,local_40) != 0)) {
          lVar4 = FUN_140007850();
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar4 == 0) || (cVar2 == '\0')) {
            FUN_14485c47a(&local_48,lVar4);
            if (lVar4 == 0) goto LAB_1458613a1;
          }
          else {
            uVar1 = *(uint *)(lVar4 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(&local_48,lVar4);
            }
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
LAB_145861172:
            lVar6 = FUN_144a797b2();
            if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
                (lVar6 = FUN_141262dda(), lVar6 != 0)) &&
               (*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38))) {
              lVar5 = 0;
              if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                  == lVar6 + 0x30) {
                lVar5 = lVar4;
              }
              goto LAB_1458611c7;
            }
          }
        }
        else if (lVar4 != 0) goto LAB_145861172;
LAB_1458613a1:
        lVar5 = 0;
        goto LAB_1458611c7;
      }
    }
  }
  else if (lVar4 != 0) goto LAB_1458610f6;
LAB_14586136e:
  lVar5 = FUN_141262dda();
LAB_1458611c7:
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1458613b8 FUN_1458613b8 body=21 status=ok
// SIG undefined FUN_1458613b8(void)

undefined8 FUN_1458613b8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1458613d8 FUN_1458613d8 body=40 status=ok
// SIG undefined FUN_1458613d8(void)

undefined8 FUN_1458613d8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145861400 FUN_145861400 body=40 status=ok
// SIG undefined FUN_145861400(void)

undefined8 FUN_145861400(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145861428 thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14586142e FUN_14586142e body=40 status=ok
// SIG undefined FUN_14586142e(void)

undefined8 FUN_14586142e(undefined8 param_1,int param_2)

{
  thunk_FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145861456 thunk_FUN_140bc97f4 body=5 status=ok
// SIG undefined thunk_FUN_140bc97f4(void)

void thunk_FUN_140bc97f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a648ae0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14586145c FUN_14586145c body=40 status=ok
// SIG undefined FUN_14586145c(void)

undefined8 FUN_14586145c(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145861484 thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14586148a FUN_14586148a body=52 status=ok
// SIG undefined FUN_14586148a(void)

undefined8 FUN_14586148a(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x1518) != 0) {
    plVar1 = (longlong *)FUN_141262ec6();
    if (*plVar1 != 0) {
      uVar2 = FUN_14496c27c(*plVar1 + 0x158);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1458614be FUN_1458614be body=40 status=ok
// SIG undefined FUN_1458614be(void)

undefined8 FUN_1458614be(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458614e6 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458614ec FUN_1458614ec body=65 status=ok
// SIG undefined FUN_1458614ec(void)

void FUN_1458614ec(longlong param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_14586152e(param_1 + 8);
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 14586152e FUN_14586152e body=55 status=ok
// SIG undefined FUN_14586152e(void)

void FUN_14586152e(longlong *param_1)

{
  FUN_14032ca5e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145861574 FUN_145861574 body=31 status=ok
// SIG undefined FUN_145861574(void)

undefined8 FUN_145861574(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458615a2 FUN_1458615a2 body=31 status=ok
// SIG undefined FUN_1458615a2(void)

undefined8 FUN_1458615a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458615ee FUN_1458615ee body=31 status=ok
// SIG undefined FUN_1458615ee(void)

undefined8 FUN_1458615ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586161c FUN_14586161c body=31 status=ok
// SIG undefined FUN_14586161c(void)

undefined8 FUN_14586161c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586164a FUN_14586164a body=31 status=ok
// SIG undefined FUN_14586164a(void)

undefined8 FUN_14586164a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586166a FUN_14586166a body=373 status=ok
// SIG undefined FUN_14586166a(void)

void FUN_14586166a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141262eee();
  FUN_140aeed2c(param_1 + 0x20,3,1);
  FUN_141262ece(*(undefined8 *)(param_1 + 0x20),param_1 + 0x240);
  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) = param_1 + 0x130;
  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) = param_1 + 0x1b8;
  if ((param_3 != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x20) + 0xa8), plVar1 != (longlong *)0x0)) {
    lVar8 = FUN_144a78b9e();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30)) {
      FUN_14485c47a(param_1 + 0x358,plVar1);
      (**(code **)(*plVar1 + 2000))(plVar1,&local_48);
      *(undefined8 *)(param_1 + 0x2d0) = local_38;
      *(undefined8 *)(param_1 + 0x2d8) = uStack_30;
      *(undefined8 *)(param_1 + 0x2c0) = local_48;
      *(undefined8 *)(param_1 + 0x2c8) = uStack_40;
      dVar3 = *(double *)(param_1 + 0x2d8) * 1.0;
      *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x2c0);
      *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2c4) ^ 0x80000000;
      *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x2c8);
      *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2cc) ^ 0x80000000;
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = *(double *)(param_1 + 0x2d0) * -1.0;
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x2f0) = auVar2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
  }
  *(undefined8 *)(param_1 + 0x358) = 0;
  uVar4 = DAT_14c8463d8;
  *(undefined8 *)(param_1 + 0x2c0) = DAT_14c8463d0;
  *(undefined8 *)(param_1 + 0x2c8) = uVar4;
  uVar4 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  *(ulonglong *)(param_1 + 0x2d0) = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  *(undefined8 *)(param_1 + 0x2d8) = uVar4;
  uVar4 = DAT_14c8463d8;
  *(undefined8 *)(param_1 + 0x2e0) = DAT_14c8463d0;
  *(undefined8 *)(param_1 + 0x2e8) = uVar4;
  uVar7 = DAT_14c8463e8._4_4_;
  uVar6 = (undefined4)DAT_14c8463e8;
  uVar5 = DAT_14c8463e0._4_4_;
  *(undefined4 *)(param_1 + 0x2f0) = (undefined4)DAT_14c8463e0;
  *(undefined4 *)(param_1 + 0x2f4) = uVar5;
  *(undefined4 *)(param_1 + 0x2f8) = uVar6;
  *(undefined4 *)(param_1 + 0x2fc) = uVar7;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458617e0 FUN_1458617e0 body=43 status=ok
// SIG undefined FUN_1458617e0(void)

void FUN_1458617e0(longlong param_1)

{
  FUN_14586180c(*(undefined8 *)(param_1 + 0xa8),*(undefined1 *)(param_1 + 0x464),DAT_14cb946a0,1,0);
  return;
}



// FUNCTION 14586180c FUN_14586180c body=103 status=ok
// SIG undefined FUN_14586180c(void)

void FUN_14586180c(longlong param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_141262f1a();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
      FUN_1413e01ba(uVar1,param_2,param_3,0,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 145861882 FUN_145861882 body=31 status=ok
// SIG undefined FUN_145861882(void)

undefined8 FUN_145861882(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458618b0 FUN_1458618b0 body=31 status=ok
// SIG undefined FUN_1458618b0(void)

undefined8 FUN_1458618b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458618de FUN_1458618de body=31 status=ok
// SIG undefined FUN_1458618de(void)

undefined8 FUN_1458618de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586190c FUN_14586190c body=31 status=ok
// SIG undefined FUN_14586190c(void)

undefined8 FUN_14586190c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586193a FUN_14586193a body=31 status=ok
// SIG undefined FUN_14586193a(void)

undefined8 FUN_14586193a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145861968 FUN_145861968 body=31 status=ok
// SIG undefined FUN_145861968(void)

undefined8 FUN_145861968(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458619a6 FUN_1458619a6 body=31 status=ok
// SIG undefined FUN_1458619a6(void)

undefined8 FUN_1458619a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458619d4 FUN_1458619d4 body=31 status=ok
// SIG undefined FUN_1458619d4(void)

undefined8 FUN_1458619d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145861a02 FUN_145861a02 body=31 status=ok
// SIG undefined FUN_145861a02(void)

undefined8 FUN_145861a02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145861a30 FUN_145861a30 body=31 status=ok
// SIG undefined FUN_145861a30(void)

undefined8 FUN_145861a30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145861a5e FUN_145861a5e body=31 status=ok
// SIG undefined FUN_145861a5e(void)

undefined8 FUN_145861a5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145861a7e FUN_145861a7e body=40 status=ok
// SIG undefined FUN_145861a7e(void)

undefined8 FUN_145861a7e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145861aa6 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145861aac FUN_145861aac body=336 status=ok
// SIG undefined FUN_145861aac(void)

longlong * FUN_145861aac(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  lVar6 = *(longlong *)(param_1 + 0x1d8);
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 8);
    do {
      if (iVar5 == 0) {
        param_2[1] = 0;
        goto LAB_145861bf5;
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 8);
      bVar7 = iVar5 == iVar3;
      if (bVar7) {
        *(int *)(lVar6 + 8) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar7);
    if (param_2[1] != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1d0);
      *param_2 = lVar6;
      goto LAB_145861b0e;
    }
  }
LAB_145861bf5:
  lVar6 = *param_2;
LAB_145861b0e:
  if (lVar6 != 0) {
    do {
      if ((((*(byte *)(lVar6 + 0x368) & 2) == 0) && (*(int *)(lVar6 + 0x304) != 4)) &&
         (*(int *)(lVar6 + 0x304) != 2)) break;
      FUN_145861bfe(lVar6,&local_38);
      plVar1 = local_30;
      if (&local_38 == param_2) {
LAB_145861b9b:
        plVar1 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_30 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
      }
      else {
        *param_2 = local_38;
        local_38 = 0;
        plVar4 = (longlong *)param_2[1];
        if (local_30 == plVar4) goto LAB_145861b9b;
        local_30 = (longlong *)0x0;
        param_2[1] = (longlong)plVar1;
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
          goto LAB_145861b9b;
        }
      }
      lVar6 = *param_2;
    } while (lVar6 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145861bfe FUN_145861bfe body=76 status=ok
// SIG undefined FUN_145861bfe(void)

undefined8 * FUN_145861bfe(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  *param_2 = 0;
  lVar2 = *(longlong *)(param_1 + 0x5f8);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar4 = iVar3 == iVar1;
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar4);
    if (param_2[1] != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x5f0);
    }
  }
  return param_2;
}



// FUNCTION 145861c4a FUN_145861c4a body=54 status=ok
// SIG undefined FUN_145861c4a(void)

undefined1 FUN_145861c4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145861c80(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 145861c80 FUN_145861c80 body=99 status=ok
// SIG undefined FUN_145861c80(void)

undefined8 FUN_145861c80(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_28;
  local_20 = FUN_142b51cbc;
  local_28 = param_1;
  FUN_14009c288(param_2,DAT_14c9abbf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145861cea FUN_145861cea body=228 status=ok
// SIG undefined FUN_145861cea(void)

longlong FUN_145861cea(void)

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
  if (DAT_14cb2b8e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b09c6;
    local_38 = &LAB_14802ce0c;
    local_40 = FUN_14582cccf;
    local_48 = L"Camera";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/EngineCameras",L"CameraAnimationCameraModifier",&DAT_14cb2b8e8,
                  FUN_14645d7c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb2b8e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145861dd6 FUN_145861dd6 body=228 status=ok
// SIG undefined FUN_145861dd6(void)

longlong FUN_145861dd6(void)

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
  if (DAT_14cb9a0e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146591bb0;
    local_38 = &LAB_148af40bb;
    local_40 = FUN_146591c1c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingValueDiscreteDynamic_Number",&DAT_14cb9a0e8,
                  &DAT_148af40ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a0e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145861ec6 FUN_145861ec6 body=130 status=ok
// SIG undefined FUN_145861ec6(void)

undefined8 * FUN_145861ec6(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_145861f48();
  *param_1 = &PTR_FUN_14a532ff0;
  param_1[5] = &PTR_FUN_14a533340;
  param_1[0x52] = &PTR_LAB_14a533380;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb74) = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 2;
  lVar1 = FUN_140bcc93a();
  FUN_140f13d9e(param_1 + 0x72,lVar1 + 0x48d0);
  return param_1;
}



// FUNCTION 145861f48 FUN_145861f48 body=336 status=ok
// SIG undefined FUN_145861f48(void)

undefined8 * FUN_145861f48(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_145862098();
  *param_1 = &PTR_FUN_14a5194b0;
  param_1[5] = &PTR_FUN_14a519800;
  param_1[0x52] = &PTR_LAB_14a519840;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 2;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  FUN_141266cde(param_1 + 0x70);
  FUN_1412cd7de(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x152) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xa94) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa96) = 2;
  memset(param_1 + 0x153,0,0xa8);
  lVar1 = FUN_140bcc93a();
  FUN_140f13d9e(param_1 + 0x72,lVar1 + 0x2460);
  lVar1 = FUN_140bcc93a();
  FUN_1412cc8ca(param_1 + 0x88,lVar1 + 0x2740);
  return param_1;
}



// FUNCTION 145862098 FUN_145862098 body=247 status=ok
// SIG undefined FUN_145862098(void)

undefined8 * FUN_145862098(undefined8 *param_1)

{
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a51aa30;
  param_1[5] = &PTR_FUN_14a51ad70;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x41400000;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19d) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x1a1) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_141266eda(param_1 + 0x38,param_1);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) | 1;
  FUN_141266e28(param_1,1);
  return param_1;
}



// FUNCTION 145862190 FUN_145862190 body=125 status=ok
// SIG undefined FUN_145862190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145862190(longlong *param_1,longlong param_2)

{
  char cVar1;
  float fVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xff7fffff;
  *(undefined2 *)(param_1 + 0x3b) = 0x100;
  FUN_14586220e();
  *(undefined1 *)(param_1 + 0x31) = 0;
  FUN_141245f18(param_1,param_2);
  FUN_145862352(param_1,param_2 != 0);
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 == '\0') {
    fVar2 = *(float *)(param_1[6] + 0x30) * _DAT_14c761fec;
  }
  else {
    fVar2 = 3.4028235e+38;
  }
  *(float *)(param_1 + 0xcc) = fVar2;
  return;
}



// FUNCTION 14586220e FUN_14586220e body=248 status=ok
// SIG undefined FUN_14586220e(void)

void FUN_14586220e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 400);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = FUN_14479d2ce(param_1 + 8);
        (**(code **)(*plVar3 + 0x18))(plVar3,uVar4);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  iVar1 = *(int *)(param_1 + 0x1ac);
  FUN_145862306(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1ac) != 0)) {
    FUN_147e2ac18(param_1 + 0x1a0);
  }
  iVar1 = *(int *)(param_1 + 0x19c);
  FUN_145862306(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x198));
  *(undefined4 *)(param_1 + 0x198) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x19c) != 0)) {
    FUN_147e2ac18(param_1 + 400);
    return;
  }
  return;
}



// FUNCTION 145862306 FUN_145862306 body=75 status=ok
// SIG undefined FUN_145862306(void)

void FUN_145862306(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145862352 FUN_145862352 body=286 status=ok
// SIG undefined FUN_145862352(void)

void FUN_145862352(undefined8 param_1,char param_2)

{
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != '\0') {
    local_70 = &LAB_1457ff100;
    local_68 = 0;
    FUN_14586247c(&local_60,param_1);
    FUN_14126834e(&DAT_14cb10aa8,&local_70,&local_60);
    FUN_1401cb1ee(&local_60);
    local_70 = &LAB_1457ff10a;
    local_68 = 0;
    FUN_14586247c(&local_60,param_1,&local_70);
    FUN_14126834e(&DAT_14cb10ae8,&local_70,&local_60);
    FUN_1401cb1ee(&local_60);
    local_60 = &LAB_145bd7964;
    local_58 = 0;
    FUN_145862550(&local_70,param_1,&local_60);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  FUN_14126849c(&DAT_14cb10aa8,param_1);
  FUN_14126849c(&DAT_14cb10ae8,param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140457ffc(&DAT_14cb10968,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 14586247c FUN_14586247c body=211 status=ok
// SIG undefined FUN_14586247c(void)

LPCRITICAL_SECTION
FUN_14586247c(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 *param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  _LIST_ENTRY *p_Var5;
  
  DVar1 = *(DWORD *)(param_3 + 1);
  uVar2 = *param_3;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var3 = param_1[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var3 = &PTR_FUN_14ab66f20;
  (p_Var3->ProcessLocksList).Blink = param_2;
  p_Var3->EntryCount = (int)uVar2;
  p_Var3->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3->Flags = DVar1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145862550 FUN_145862550 body=232 status=ok
// SIG undefined FUN_145862550(void)

undefined8 FUN_145862550(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_38 = 3;
  *local_40 = &PTR_LAB_14aa6ea50;
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
  local_40[2] = lVar4;
  *local_40 = &PTR_FUN_14ab66f90;
  local_40[3] = param_2;
  local_40[4] = uVar2;
  *(undefined4 *)(local_40 + 5) = uVar1;
  FUN_1412b4546(&DAT_14cb10968,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145862640 FUN_145862640 body=221 status=ok
// SIG undefined FUN_145862640(void)

longlong FUN_145862640(void)

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
  if (DAT_14c9a2c10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470ac037;
    local_40 = &LAB_14595099e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxCore",L"GbxAnalyticsProviderBase",&DAT_14c9a2c10,&DAT_1470ac036);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a2c10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145862724 FUN_145862724 body=221 status=ok
// SIG undefined FUN_145862724(void)

longlong FUN_145862724(void)

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
  if (DAT_14c9a5d78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470d6483;
    local_40 = &LAB_14609bb90;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2b8;
    FUN_14081cfa3(L"/Script/GbxEngine",L"AttributePropertyValueResolverTestContext",&DAT_14c9a5d78,
                  &DAT_1470d6482);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5d78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145862808 FUN_145862808 body=221 status=ok
// SIG undefined FUN_145862808(void)

longlong FUN_145862808(void)

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
  if (DAT_14cab4270 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1475957bb;
    local_40 = FUN_1463443d6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Constraints",L"TransformableHandle",&DAT_14cab4270,&DAT_1475957ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4270;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458628ec FUN_1458628ec body=221 status=ok
// SIG undefined FUN_1458628ec(void)

longlong FUN_1458628ec(void)

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
  if (DAT_14cad6f68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7d2f7;
    local_40 = FUN_1463c5064;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"DynamicBlueprintBinding",&DAT_14cad6f68,&DAT_147a7d2f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad6f68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458629d0 FUN_1458629d0 body=221 status=ok
// SIG undefined FUN_1458629d0(void)

longlong FUN_1458629d0(void)

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
  if (DAT_14cab6da0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1476cb981;
    local_40 = FUN_14634fdd3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/UMG",L"PropertyBinding",&DAT_14cab6da0,&DAT_1476cb980);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6da0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145862ab4 FUN_145862ab4 body=221 status=ok
// SIG undefined FUN_145862ab4(void)

longlong FUN_145862ab4(void)

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
  if (DAT_14cabfea8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147861805;
    local_40 = &LAB_146372858;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/Engine",L"EdGraphNode",&DAT_14cabfea8,&DAT_147861804);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabfea8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145862b98 FUN_145862b98 body=221 status=ok
// SIG undefined FUN_145862b98(void)

longlong FUN_145862b98(void)

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
  if (DAT_14cad6490 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a6496b;
    local_40 = &LAB_145d61465;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/Engine",L"DialogueWave",&DAT_14cad6490,&DAT_147a6496a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad6490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145862c7c FUN_145862c7c body=221 status=ok
// SIG undefined FUN_145862c7c(void)

longlong FUN_145862c7c(void)

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
  if (DAT_14cada4e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a9a7e6;
    local_40 = FUN_1463c8be5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"InputDeviceProperty",&DAT_14cada4e8,FUN_1463c8bbe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cada4e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145862d60 FUN_145862d60 body=221 status=ok
// SIG undefined FUN_145862d60(void)

longlong FUN_145862d60(void)

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
  if (DAT_14cb01818 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147cdc3fb;
    local_40 = FUN_145c26cab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/Engine",L"SubsurfaceProfile",&DAT_14cb01818,&DAT_147cdc3fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb01818;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145862e44 FUN_145862e44 body=221 status=ok
// SIG undefined FUN_145862e44(void)

longlong FUN_145862e44(void)

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
  if (DAT_14cb91818 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f30c1;
    local_40 = &LAB_1459ba8bd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxUIEventDispatcher",&DAT_14cb91818,&DAT_1489f30c0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91818;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145862f28 FUN_145862f28 body=221 status=ok
// SIG undefined FUN_145862f28(void)

longlong FUN_145862f28(void)

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
  if (DAT_14cc1d8a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494e7b79;
    local_40 = &LAB_145cc37f0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusResourceDescription",&DAT_14cc1d8a0,&DAT_1494e7b78
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1d8a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145863006 FUN_145863006 body=63 status=ok
// SIG undefined FUN_145863006(void)

void FUN_145863006(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145863046(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145863046 FUN_145863046 body=83 status=ok
// SIG undefined FUN_145863046(void)

ulonglong FUN_145863046(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14586309a FUN_14586309a body=122 status=ok
// SIG undefined FUN_14586309a(void)

undefined8 FUN_14586309a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == lVar2) {
          FUN_145863114();
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 145863114 FUN_145863114 body=85 status=ok
// SIG undefined FUN_145863114(void)

void FUN_145863114(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14586316a();
  return;
}



// FUNCTION 14586316a FUN_14586316a body=114 status=ok
// SIG undefined FUN_14586316a(void)

void FUN_14586316a(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1458631ea FUN_1458631ea body=77 status=ok
// SIG undefined FUN_1458631ea(void)

undefined8 * FUN_1458631ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5ecae0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_14075380c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 145863238 FUN_145863238 body=70 status=ok
// SIG undefined FUN_145863238(void)

void FUN_145863238(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = -1;
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x20) + uVar2) == param_2) {
        uVar2 = uVar2 >> 4;
        iVar1 = (int)uVar2 * 0x38e38e39;
        break;
      }
      uVar2 = uVar2 + 0x90;
    } while ((longlong)*(int *)(param_1 + 0x28) * 0x90 != uVar2);
  }
  FUN_14586327e(param_1,iVar1,CONCAT71((int7)(uVar2 >> 8),1));
  return;
}



// FUNCTION 14586327e FUN_14586327e body=179 status=ok
// SIG undefined FUN_14586327e(void)

void FUN_14586327e(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x28))) {
    FUN_1458634e8(param_1,*(longlong *)(param_1 + 0x20) + (ulonglong)param_2 * 0x90);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18 + (ulonglong)param_2 * 0x90);
    if (param_3 == '\0') {
      if (lVar1 != 0) {
        return;
      }
    }
    else if ((lVar1 != 0) && (*(int *)(lVar1 + 0x20) != 0)) {
      puVar2 = *(undefined8 **)(lVar1 + 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72((longlong *)(lVar1 + 0x18),0,0,0x10);
        *(undefined4 *)(lVar1 + 0x20) = 0;
      }
    }
    FUN_1458633e0(param_1 + 0x20,param_2);
    FUN_145863332(param_1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 145863332 FUN_145863332 body=62 status=ok
// SIG undefined FUN_145863332(void)

void FUN_145863332(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145863370(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x90,8);
  }
  return;
}



// FUNCTION 145863370 FUN_145863370 body=111 status=ok
// SIG undefined FUN_145863370(void)

ulonglong FUN_145863370(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x90) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x90,8);
      uVar1 = uVar1 / 0x90;
    }
  }
  return uVar1;
}



// FUNCTION 1458633e0 FUN_1458633e0 body=112 status=ok
// SIG undefined FUN_1458633e0(void)

void FUN_1458633e0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((ulonglong)param_2 * 0x90 + lVar1);
  FUN_145863450(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x90),(longlong)iVar3 * 0x90);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145863450 FUN_145863450 body=151 status=ok
// SIG undefined FUN_145863450(void)

void FUN_145863450(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(param_1 + 0x38);
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001458634e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458634e8 FUN_1458634e8 body=169 status=ok
// SIG undefined FUN_1458634e8(void)

void FUN_1458634e8(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar1 = FUN_144729dda();
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
      if ((lVar2 != 0) && (*(char *)(param_2 + 0x88) != '\0')) {
        local_38 = lVar2;
        local_30 = param_2;
        (**(code **)(**(longlong **)(param_2 + 8) + 0x28))(*(longlong **)(param_2 + 8),&local_38);
        local_38 = param_2 + 8;
        FUN_141268e48(param_1 + 0x10,&local_38);
        *(undefined1 *)(param_2 + 0x88) = 0;
        FUN_141268f40(param_1,param_2,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458635a0 FUN_1458635a0 body=63 status=ok
// SIG undefined FUN_1458635a0(void)

void FUN_1458635a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1448332aa(param_2,&DAT_14b40c854);
  if ((iVar1 < 0) && ((*(float *)(param_1 + 0x94) != 0.0 || (NAN(*(float *)(param_1 + 0x94)))))) {
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  return;
}



// FUNCTION 1458635e0 FUN_1458635e0 body=24 status=ok
// SIG undefined FUN_1458635e0(void)

void FUN_1458635e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458635f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1458635f8 FUN_1458635f8 body=52 status=ok
// SIG undefined FUN_1458635f8(void)

IViewListener * FUN_1458635f8(IViewListener *param_1,int param_2)

{
  cohtml::ITextInputHandler::~ITextInputHandler((ITextInputHandler *)(param_1 + 8));
  cohtml::IViewListener::~IViewListener(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586362c FUN_14586362c body=395 status=ok
// SIG undefined FUN_14586362c(void)

int FUN_14586362c(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 local_e0 [8];
  undefined4 local_d8;
  undefined **local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined **local_b0;
  undefined4 local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined **local_90;
  undefined4 local_88;
  undefined **local_80;
  undefined4 local_78;
  undefined **local_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined **local_50;
  undefined4 local_48;
  undefined **local_40;
  undefined4 local_38;
  undefined **local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar2 = (longlong *)FUN_14001cc68(0x348);
  memset(plVar2,0,0x348);
  FUN_145864082(plVar2);
  DAT_14cb99a60 = plVar2;
  memset(local_e0,0,0xc0);
  local_d8 = 1;
  local_c8 = 1;
  local_b8 = 1;
  local_a8 = 1;
  local_98 = 1;
  local_88 = 1;
  local_78 = 1;
  local_68 = 1;
  local_58 = 1;
  local_48 = 1;
  local_38 = 1;
  local_28 = 1;
  local_f8 = 1;
  local_f0 = 0;
  local_d0 = &PTR_FUN_14c763b80;
  local_b0 = &PTR_FUN_14c763b60;
  local_a0 = &PTR_FUN_14c763b88;
  local_90 = &PTR_FUN_14c763b98;
  local_80 = &PTR_FUN_14c763bd8;
  local_70 = &PTR_FUN_14c763be8;
  local_50 = &PTR_FUN_14c763bf0;
  local_40 = &PTR_FUN_14c763c00;
  local_30 = &PTR_FUN_14c763b58;
  local_100 = param_1;
  local_e8 = plVar2;
  iVar1 = DiscordCreate(2,&local_100,plVar2);
  plVar2 = DAT_14cb99a60;
  if ((iVar1 != 0) || (*DAT_14cb99a60 == 0)) {
    if (DAT_14cb99a60 != (longlong *)0x0) {
      FUN_1458637b8(DAT_14cb99a60);
      FUN_1400020a8(plVar2);
    }
    DAT_14cb99a60 = (longlong *)0x0;
  }
  if ((local_20 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 1458637b8 FUN_1458637b8 body=225 status=ok
// SIG undefined FUN_1458637b8(void)

void FUN_1458637b8(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)();
    *param_1 = 0;
  }
  FUN_145863992(param_1 + 0x65);
  FUN_14126a062(param_1 + 0x60);
  FUN_14586389a(param_1 + 0x5b);
  FUN_14586389a(param_1 + 0x57);
  FUN_145863a26(param_1 + 0x51);
  FUN_14126a0f6(param_1 + 0x4c);
  FUN_145863aba(param_1 + 0x48);
  FUN_14586392e(param_1 + 0x26);
  FUN_145863b4e(param_1 + 0x22);
  FUN_14126a062(param_1 + 0x1e);
  FUN_145863be2(param_1 + 0x19);
  FUN_145863c76(param_1 + 0x15);
  FUN_14126a0f6(param_1 + 0x11);
  FUN_14126a0f6(param_1 + 0xd);
  FUN_14126a062(param_1 + 7);
  FUN_145863d0a(param_1 + 2);
  return;
}



// FUNCTION 14586389a FUN_14586389a body=147 status=ok
// SIG undefined FUN_14586389a(void)

void FUN_14586389a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14586392e FUN_14586392e body=100 status=ok
// SIG undefined FUN_14586392e(void)

void FUN_14586392e(longlong param_1)

{
  FUN_145863d9e(param_1 + 0xe8);
  FUN_145863e32(param_1 + 200);
  FUN_145863ec6(param_1 + 0xa8);
  FUN_14126a18a(param_1 + 0x88);
  FUN_14126a18a(param_1 + 0x68);
  FUN_14126a18a(param_1 + 0x48);
  FUN_145863f5a(param_1 + 0x28);
  FUN_145863fee(param_1 + 8);
  return;
}



// FUNCTION 145863992 FUN_145863992 body=147 status=ok
// SIG undefined FUN_145863992(void)

void FUN_145863992(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863a26 FUN_145863a26 body=147 status=ok
// SIG undefined FUN_145863a26(void)

void FUN_145863a26(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863aba FUN_145863aba body=147 status=ok
// SIG undefined FUN_145863aba(void)

void FUN_145863aba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863b4e FUN_145863b4e body=147 status=ok
// SIG undefined FUN_145863b4e(void)

void FUN_145863b4e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863be2 FUN_145863be2 body=147 status=ok
// SIG undefined FUN_145863be2(void)

void FUN_145863be2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863c76 FUN_145863c76 body=147 status=ok
// SIG undefined FUN_145863c76(void)

void FUN_145863c76(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863d0a FUN_145863d0a body=147 status=ok
// SIG undefined FUN_145863d0a(void)

void FUN_145863d0a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863d9e FUN_145863d9e body=147 status=ok
// SIG undefined FUN_145863d9e(void)

void FUN_145863d9e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863e32 FUN_145863e32 body=147 status=ok
// SIG undefined FUN_145863e32(void)

void FUN_145863e32(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863ec6 FUN_145863ec6 body=147 status=ok
// SIG undefined FUN_145863ec6(void)

void FUN_145863ec6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863f5a FUN_145863f5a body=147 status=ok
// SIG undefined FUN_145863f5a(void)

void FUN_145863f5a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145863fee FUN_145863fee body=147 status=ok
// SIG undefined FUN_145863fee(void)

void FUN_145863fee(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145864082 FUN_145864082 body=328 status=ok
// SIG undefined FUN_145864082(void)

longlong FUN_145864082(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  local_48 = 4;
  FUN_145864522(param_1 + 0x10,&local_48);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  local_48 = 4;
  FUN_14126a21e(param_1 + 0x38,&local_48);
  FUN_145864d7e(param_1 + 0x60);
  FUN_1458641cc(param_1 + 0xe8);
  FUN_1458651a2(param_1 + 0x130);
  FUN_14586425a(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  local_48 = 4;
  FUN_145864616(param_1 + 0x288,&local_48);
  FUN_1458642e8(param_1 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  local_48 = 4;
  FUN_14126a21e(param_1 + 0x300,&local_48);
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  local_48 = 4;
  FUN_14586470a(param_1 + 0x328,&local_48);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458641cc FUN_1458641cc body=141 status=ok
// SIG undefined FUN_1458641cc(void)

undefined4 * FUN_1458641cc(undefined4 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  local_48 = 4;
  FUN_14126a21e(param_1 + 2,&local_48);
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  local_48 = 4;
  FUN_1458647fe(param_1 + 10,&local_48);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586425a FUN_14586425a body=141 status=ok
// SIG undefined FUN_14586425a(void)

undefined4 * FUN_14586425a(undefined4 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  local_48 = 4;
  FUN_1458648f2(param_1 + 2,&local_48);
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  local_48 = 4;
  FUN_14126a368(param_1 + 10,&local_48);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458642e8 FUN_1458642e8 body=141 status=ok
// SIG undefined FUN_1458642e8(void)

undefined4 * FUN_1458642e8(undefined4 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  local_48 = 4;
  FUN_145864376(param_1 + 2,&local_48);
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  local_48 = 4;
  FUN_145864376(param_1 + 10,&local_48);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145864376 FUN_145864376 body=160 status=ok
// SIG undefined FUN_145864376(void)

void FUN_145864376(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_145864416(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adfa6a(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_14586446a(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 145864416 FUN_145864416 body=83 status=ok
// SIG undefined FUN_145864416(void)

undefined8 FUN_145864416(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 14586446a FUN_14586446a body=182 status=ok
// SIG undefined FUN_14586446a(void)

void FUN_14586446a(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 145864522 FUN_145864522 body=160 status=ok
// SIG undefined FUN_145864522(void)

void FUN_145864522(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_1458645c2(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_145f96bda(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_1458649e6(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 1458645c2 FUN_1458645c2 body=83 status=ok
// SIG undefined FUN_1458645c2(void)

undefined8 FUN_1458645c2(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 145864616 FUN_145864616 body=160 status=ok
// SIG undefined FUN_145864616(void)

void FUN_145864616(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_1458646b6(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adfa18(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_145864c0e(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 1458646b6 FUN_1458646b6 body=83 status=ok
// SIG undefined FUN_1458646b6(void)

undefined8 FUN_1458646b6(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 14586470a FUN_14586470a body=160 status=ok
// SIG undefined FUN_14586470a(void)

void FUN_14586470a(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_1458647aa(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adfabc(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_145864cc6(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 1458647aa FUN_1458647aa body=83 status=ok
// SIG undefined FUN_1458647aa(void)

undefined8 FUN_1458647aa(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 1458647fe FUN_1458647fe body=160 status=ok
// SIG undefined FUN_1458647fe(void)

void FUN_1458647fe(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_14586489e(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adf788(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_145864a9e(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 14586489e FUN_14586489e body=83 status=ok
// SIG undefined FUN_14586489e(void)

undefined8 FUN_14586489e(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 1458648f2 FUN_1458648f2 body=160 status=ok
// SIG undefined FUN_1458648f2(void)

void FUN_1458648f2(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_145864992(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adf9c6(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_145864b56(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 145864992 FUN_145864992 body=83 status=ok
// SIG undefined FUN_145864992(void)

undefined8 FUN_145864992(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 1458649e6 FUN_1458649e6 body=182 status=ok
// SIG undefined FUN_1458649e6(void)

void FUN_1458649e6(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 145864a9e FUN_145864a9e body=182 status=ok
// SIG undefined FUN_145864a9e(void)

void FUN_145864a9e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 145864b56 FUN_145864b56 body=182 status=ok
// SIG undefined FUN_145864b56(void)

void FUN_145864b56(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 145864c0e FUN_145864c0e body=182 status=ok
// SIG undefined FUN_145864c0e(void)

void FUN_145864c0e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 145864cc6 FUN_145864cc6 body=182 status=ok
// SIG undefined FUN_145864cc6(void)

void FUN_145864cc6(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 145864d7e FUN_145864d7e body=203 status=ok
// SIG undefined FUN_145864d7e(void)

undefined4 * FUN_145864d7e(undefined4 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  local_48 = 4;
  FUN_14126a368(param_1 + 2,&local_48);
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  local_48 = 4;
  FUN_14126a368(param_1 + 10,&local_48);
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  local_48 = 4;
  FUN_145864e4a(param_1 + 0x12,&local_48);
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  local_48 = 4;
  FUN_145864f3e(param_1 + 0x1a,&local_48);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145864e4a FUN_145864e4a body=160 status=ok
// SIG undefined FUN_145864e4a(void)

void FUN_145864e4a(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_145864eea(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adf6e4(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_145865032(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 145864eea FUN_145864eea body=83 status=ok
// SIG undefined FUN_145864eea(void)

undefined8 FUN_145864eea(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 145864f3e FUN_145864f3e body=160 status=ok
// SIG undefined FUN_145864f3e(void)

void FUN_145864f3e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_145864fde(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adf736(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_1458650ea(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 145864fde FUN_145864fde body=83 status=ok
// SIG undefined FUN_145864fde(void)

undefined8 FUN_145864fde(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 145865032 FUN_145865032 body=182 status=ok
// SIG undefined FUN_145865032(void)

void FUN_145865032(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 1458650ea FUN_1458650ea body=182 status=ok
// SIG undefined FUN_1458650ea(void)

void FUN_1458650ea(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 1458651a2 FUN_1458651a2 body=375 status=ok
// SIG undefined FUN_1458651a2(void)

undefined4 * FUN_1458651a2(undefined4 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  local_48 = 4;
  FUN_14586531a(param_1 + 2,&local_48);
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  local_48 = 4;
  FUN_14586540e(param_1 + 10,&local_48);
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  local_48 = 4;
  FUN_14126a514(param_1 + 0x12,&local_48);
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  local_48 = 4;
  FUN_14126a514(param_1 + 0x1a,&local_48);
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  local_48 = 4;
  FUN_14126a514(param_1 + 0x22,&local_48);
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  local_48 = 4;
  FUN_145865502(param_1 + 0x2a,&local_48);
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  local_48 = 4;
  FUN_1458655f6(param_1 + 0x32,&local_48);
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  local_48 = 4;
  FUN_1458656ea(param_1 + 0x3a,&local_48);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586531a FUN_14586531a body=160 status=ok
// SIG undefined FUN_14586531a(void)

void FUN_14586531a(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_1458653ba(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adf7da(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_1458657de(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 1458653ba FUN_1458653ba body=83 status=ok
// SIG undefined FUN_1458653ba(void)

undefined8 FUN_1458653ba(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 14586540e FUN_14586540e body=160 status=ok
// SIG undefined FUN_14586540e(void)

void FUN_14586540e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_1458654ae(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adf82c(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_145865896(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 1458654ae FUN_1458654ae body=83 status=ok
// SIG undefined FUN_1458654ae(void)

undefined8 FUN_1458654ae(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 145865502 FUN_145865502 body=160 status=ok
// SIG undefined FUN_145865502(void)

void FUN_145865502(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_1458655a2(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adf8d0(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_14586594e(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 1458655a2 FUN_1458655a2 body=83 status=ok
// SIG undefined FUN_1458655a2(void)

undefined8 FUN_1458655a2(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 1458655f6 FUN_1458655f6 body=160 status=ok
// SIG undefined FUN_1458655f6(void)

void FUN_1458655f6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_145865696(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adf922(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_145865a06(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 145865696 FUN_145865696 body=83 status=ok
// SIG undefined FUN_145865696(void)

undefined8 FUN_145865696(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 1458656ea FUN_1458656ea body=160 status=ok
// SIG undefined FUN_1458656ea(void)

void FUN_1458656ea(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_14586578a(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_148adf974(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_145865abe(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 14586578a FUN_14586578a body=83 status=ok
// SIG undefined FUN_14586578a(void)

undefined8 FUN_14586578a(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 1458657de FUN_1458657de body=182 status=ok
// SIG undefined FUN_1458657de(void)

void FUN_1458657de(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 145865896 FUN_145865896 body=182 status=ok
// SIG undefined FUN_145865896(void)

void FUN_145865896(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 14586594e FUN_14586594e body=182 status=ok
// SIG undefined FUN_14586594e(void)

void FUN_14586594e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 145865a06 FUN_145865a06 body=182 status=ok
// SIG undefined FUN_145865a06(void)

void FUN_145865a06(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 145865abe FUN_145865abe body=182 status=ok
// SIG undefined FUN_145865abe(void)

void FUN_145865abe(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 145865b76 FUN_145865b76 body=141 status=ok
// SIG undefined FUN_145865b76(void)

void FUN_145865b76(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x308) & 1) == 0)) {
    uVar3 = (**(code **)(*(longlong *)(lVar1 + 0x1188) + 0x10))(lVar1 + 0x1188);
    FUN_1407abeca(local_28,uVar3);
    if (local_20 != 0) {
      cVar2 = FUN_144729dda(local_28);
      if (cVar2 != '\0') {
        FUN_145865c04(*(undefined8 *)(param_1 + 0x20));
        *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145865c04 FUN_145865c04 body=52 status=ok
// SIG undefined FUN_145865c04(void)

void FUN_145865c04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3910);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
    if (lVar1 != 0) {
      FUN_140316e34(lVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 145865c38 FUN_145865c38 body=40 status=ok
// SIG undefined FUN_145865c38(void)

undefined8 FUN_145865c38(undefined8 param_1,int param_2)

{
  FUN_145865c60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145865c60 FUN_145865c60 body=332 status=ok
// SIG undefined FUN_145865c60(void)

void FUN_145865c60(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aef7130;
  param_1[5] = &PTR_FUN_14aef7570;
  param_1[0x13] = &PTR_FUN_14aef7590;
  param_1[0x24] = &PTR_FUN_14aef75c0;
  plVar3 = (longlong *)param_1[0x7b];
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
  if (param_1[0x72] != 0) {
    plVar3 = param_1 + 0x76;
    if ((longlong *)param_1[0x74] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x74];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
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
  plVar3 = (longlong *)param_1[0x6e];
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
  FUN_141082778(param_1 + 0x29);
  FUN_145865e0d(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145865dac(param_1);
  return;
}



// FUNCTION 145865dac FUN_145865dac body=97 status=ok
// SIG undefined FUN_145865dac(void)

void FUN_145865dac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aefa000;
  param_1[5] = &PTR_FUN_14aefa3d0;
  param_1[0x13] = &PTR_FUN_14aefa3f0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x17);
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145865e0d FUN_145865e0d body=91 status=ok
// SIG undefined FUN_145865e0d(void)

void FUN_145865e0d(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x60);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-0xc] != 0) {
        plVar1 = plVar2 + -8;
        if ((longlong *)plVar2[-10] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[-10];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145865e68 FUN_145865e68 body=178 status=ok
// SIG undefined FUN_145865e68(void)

undefined8 * FUN_145865e68(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  FUN_140017f82();
  puVar1[1] = &DAT_14c951fb0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149ea68e0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_145865f1c(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145865f1c FUN_145865f1c body=128 status=ok
// SIG undefined FUN_145865f1c(void)

undefined8 *
FUN_145865f1c(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_145865f9e(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea68e0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145865f9e FUN_145865f9e body=136 status=ok
// SIG undefined FUN_145865f9e(void)

undefined8 *
FUN_145865f9e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_145866028(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9c450;
  param_1[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145866028 FUN_145866028 body=135 status=ok
// SIG undefined FUN_145866028(void)

undefined8 *
FUN_145866028(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1458660b0(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9c660;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458660b0 FUN_1458660b0 body=136 status=ok
// SIG undefined FUN_1458660b0(void)

undefined8 *
FUN_1458660b0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e98f10;
  param_1[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586613a FUN_14586613a body=63 status=ok
// SIG undefined FUN_14586613a(void)

void FUN_14586613a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14586617a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 14586617a FUN_14586617a body=105 status=ok
// SIG undefined FUN_14586617a(void)

ulonglong FUN_14586617a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x18) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,4);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 1458661e4 FUN_1458661e4 body=29 status=ok
// SIG undefined FUN_1458661e4(void)

void FUN_1458661e4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145866202 FUN_145866202 body=59 status=ok
// SIG undefined FUN_145866202(void)

undefined8 * FUN_145866202(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c53b0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586623e FUN_14586623e body=169 status=ok
// SIG undefined FUN_14586623e(void)

bool FUN_14586623e(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1458662e8 FUN_1458662e8 body=52 status=ok
// SIG undefined FUN_1458662e8(void)

void FUN_1458662e8(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
    uVar1 = (**(code **)(*param_2 + 0x6b0))(param_2);
    FUN_14586631c(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 14586631c FUN_14586631c body=285 status=ok
// SIG undefined FUN_14586631c(void)

void FUN_14586631c(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  FUN_14126c3b2(param_1 + 0x3c28);
  lVar4 = FUN_144a7c8f6();
  lVar5 = FUN_1403ca102(param_1);
  lVar6 = FUN_144a7ae82();
  if (((lVar4 == 0) || (lVar5 == 0)) || (lVar6 == 0)) {
    return;
  }
  lVar5 = FUN_144a7c8f0(lVar5);
  iVar1 = *(int *)(lVar5 + 8);
  lVar5 = *(longlong *)(lVar6 + 0x118);
  if (lVar5 == 0) {
    uVar7 = FUN_1407f787c();
    lVar5 = FUN_14477b664(uVar7);
    *(longlong *)(lVar6 + 0x118) = lVar5;
  }
  lVar8 = *(longlong *)(lVar6 + 0x120);
  if (((lVar8 != 0) || (lVar8 = 0, lVar5 == 0)) || (*(longlong *)(lVar6 + 0x110) == 0))
  goto LAB_14586639b;
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145866435:
    lVar8 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_145866435;
    uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar6 + 0x110));
  }
  *(longlong *)(lVar6 + 0x120) = lVar8;
LAB_14586639b:
  FUN_1447eec96(lVar4,lVar8,(float)iVar1,0);
  return;
}



// FUNCTION 14586643a FUN_14586643a body=87 status=ok
// SIG undefined FUN_14586643a(void)

void FUN_14586643a(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x38);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x38);
    FUN_140545fa2(uVar1);
  }
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_145866492(uVar1);
    return;
  }
  return;
}



// FUNCTION 145866492 FUN_145866492 body=47 status=ok
// SIG undefined FUN_145866492(void)

void FUN_145866492(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba8200);
                    /* WARNING: Could not recover jumptable at 0x0001458664be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1458664c2 FUN_1458664c2 body=93 status=ok
// SIG undefined FUN_1458664c2(void)

void FUN_1458664c2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x360);
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b7f1610;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  param_2[0x6b] = 0;
  return;
}



// FUNCTION 145866520 FUN_145866520 body=150 status=ok
// SIG undefined FUN_145866520(void)

longlong FUN_145866520(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x238)) {
    lVar5 = 0;
    do {
      lVar2 = FUN_14479d2ce(*(longlong *)(param_1 + 0x230) + lVar5);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x430) != 0)) {
        lVar3 = FUN_1449db7f2();
        lVar2 = *(longlong *)(lVar2 + 0x430);
        if (((lVar2 != 0) &&
            (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
             (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          return lVar2;
        }
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x238));
  }
  return 0;
}



// FUNCTION 1458665b6 FUN_1458665b6 body=228 status=ok
// SIG undefined FUN_1458665b6(void)

undefined8 FUN_1458665b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14aa9a7d0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b456800;
  local_38[3] = param_3;
  local_38[4] = &LAB_1489dcb90;
  FUN_14586669c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586669c FUN_14586669c body=216 status=ok
// SIG undefined FUN_14586669c(void)

undefined8 * FUN_14586669c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14586677c FUN_14586677c body=41 status=ok
// SIG undefined FUN_14586677c(void)

void FUN_14586677c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 1458667a6 FUN_1458667a6 body=197 status=ok
// SIG undefined FUN_1458667a6(void)

void FUN_1458667a6(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x900))(param_1,local_20);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerAcknowledgePossession_Validate";
  }
  else {
    (**(code **)(*param_1 + 0x908))(param_1,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586686c FUN_14586686c body=201 status=ok
// SIG undefined FUN_14586686c(void)

int FUN_14586686c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  wchar_t *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_1 + 1);
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_1;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  FUN_14126d510(&local_40,&local_50,param_2);
  if (1 < local_38) {
    param_3 = _wtoi(local_40);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145866944 FUN_145866944 body=36 status=ok
// SIG undefined FUN_145866944(void)

undefined8 FUN_145866944(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145866976 FUN_145866976 body=36 status=ok
// SIG undefined FUN_145866976(void)

undefined8 FUN_145866976(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14586699a FUN_14586699a body=63 status=ok
// SIG undefined FUN_14586699a(void)

void FUN_14586699a(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1458669da(param_1);
    FUN_14126e0ae(param_1);
    return;
  }
  FUN_14126e0ae(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1403a21aa(param_1);
  return;
}



// FUNCTION 1458669da FUN_1458669da body=327 status=ok
// SIG undefined FUN_1458669da(void)

void FUN_1458669da(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145866b22 FUN_145866b22 body=1212 status=ok
// SIG undefined FUN_145866b22(void)

void FUN_145866b22(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 **local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_2;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_140b359ca(local_a8);
  FUN_1448729ea(param_1 + 0x60,local_78,local_a8);
  uVar6 = FUN_144a7b41a(local_78,0x3f800000);
  uVar4 = FUN_14126e108();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar2,uVar4,0);
  }
  FUN_1407cace8(lVar1,uVar4,uVar6,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = local_78;
    if (0x18 < local_60) {
      pppuVar5 = (undefined8 ***)local_78[0];
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  lVar1 = *param_2;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_140b359ca(local_a8,param_2);
  FUN_1448729ea(param_1 + 0xb0,local_78,local_a8);
  uVar6 = FUN_144a7b41a(local_78,0x3f800000);
  uVar4 = FUN_14126e108();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar2,uVar4,1);
  }
  FUN_1407cace8(lVar1,uVar4,uVar6,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = local_78;
    if (0x18 < local_60) {
      pppuVar5 = (undefined8 ***)local_78[0];
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  lVar1 = *param_2;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_140b359ca(local_a8,param_2);
  FUN_1448729ea(param_1 + 0x100,local_78,local_a8);
  uVar6 = FUN_144a7b41a(local_78,0);
  uVar4 = FUN_14126e108();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar2,uVar4,2);
  }
  FUN_1407cace8(lVar1,uVar4,uVar6,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = local_78;
    if (0x18 < local_60) {
      pppuVar5 = (undefined8 ***)local_78[0];
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  lVar1 = *param_2;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_140b359ca(local_a8,param_2);
  FUN_1448729ea(param_1 + 0x150,local_78,local_a8);
  uVar6 = FUN_144a7b41a(local_78,0x3f800000);
  uVar4 = FUN_14126e108();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar2,uVar4,3);
  }
  FUN_1407cace8(lVar1,uVar4,uVar6,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = local_78;
    if (0x18 < local_60) {
      pppuVar5 = (undefined8 ***)local_78[0];
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  lVar1 = *param_2;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_140b359ca(local_a8,param_2);
  FUN_1448729ea(param_1 + 0x1a0,local_78,local_a8);
  uVar6 = FUN_144a7b41a(local_78,0);
  uVar4 = FUN_14126e108();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar2,uVar4,4);
  }
  FUN_1407cace8(lVar1,uVar4,uVar6,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = local_78;
    if (0x18 < local_60) {
      pppuVar5 = (undefined8 ***)local_78[0];
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145866fe8 FUN_145866fe8 body=829 status=ok
// SIG undefined FUN_145866fe8(void)

undefined8 * FUN_145866fe8(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar4 = FUN_14007ca06();
  FUN_14064ffa8(param_1,uVar4);
  *param_1 = &PTR_FUN_14b9229a0;
  param_1[0x72] = &PTR_FUN_14b923010;
  param_1[0x73] = &PTR_FUN_14b923030;
  param_1[0x74] = &PTR_FUN_14b923060;
  param_1[0x75] = &PTR_FUN_14b923070;
  param_1[0x76] = &PTR_FUN_14b9230e0;
  param_1[0x77] = &PTR_FUN_14b923110;
  param_1[0x78] = &PTR_FUN_14b923140;
  param_1[0x7f] = &PTR_FUN_14b9231f0;
  param_1[0x80] = &PTR_FUN_14b923260;
  param_1[0x81] = &PTR_FUN_14b9232d0;
  param_1[0x82] = &PTR_FUN_14b923300;
  param_1[0x83] = &PTR_FUN_14b923340;
  param_1[0x84] = &PTR_FUN_14b9233e0;
  param_1[0x85] = &PTR_FUN_14b923400;
  param_1[0x89] = &PTR_FUN_14b923420;
  param_1[0x8a] = &PTR_FUN_14b9234e0;
  param_1[0x8b] = &PTR_FUN_14b923560;
  param_1[0x8c] = &PTR_FUN_14b9235b0;
  param_1[0x8d] = &PTR_FUN_14b9235f0;
  param_1[0x8e] = &PTR_FUN_14b923610;
  param_1[0x8f] = &PTR_FUN_14b923630;
  param_1[0x90] = &PTR_FUN_14b923650;
  param_1[0x91] = &PTR_FUN_14b923670;
  param_1[0x92] = &PTR_FUN_14b923690;
  param_1[0x93] = &PTR_FUN_14b9236b0;
  param_1[0x94] = &PTR_FUN_14b9236d0;
  param_1[0x95] = &PTR_FUN_14b9236f0;
  param_1[0x96] = &PTR_FUN_14b923710;
  param_1[0x34b] = &PTR_FUN_14b923730;
  param_1[0x352] = &PTR_FUN_14b923740;
  param_1[0x353] = &PTR_FUN_14b923780;
  param_1[0x354] = &PTR_FUN_14b9237c0;
  param_1[0x355] = &PTR_FUN_14b923810;
  param_1[0x356] = &PTR_FUN_14b923840;
  param_1[0x359] = &PTR_FUN_14b923880;
  param_1[0x35a] = &PTR_FUN_14b923890;
  param_1[0x35b] = &PTR_FUN_14b9238c0;
  param_1[0x35c] = &PTR_FUN_14b923960;
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2604) = 0x469c4000;
  *(undefined1 *)(param_1 + 0x4c1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x260c) = 0x457a0000;
  *(undefined1 *)(param_1 + 0x4c2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2614) = 0x466a6000;
  *(undefined1 *)(param_1 + 0x4c3) = 0;
  param_1[0x4ca] = 0;
  param_1[0x4cb] = 0;
  param_1[0x4c8] = 0;
  param_1[0x4c9] = 0;
  param_1[0x4c6] = 0;
  param_1[0x4c7] = 0;
  param_1[0x4c4] = 0;
  param_1[0x4c5] = 0;
  param_1[0x4ce] = DAT_14c8464f0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x4cc] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x4cd] = uVar4;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x4cf) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x267c) = uVar1;
  *(undefined4 *)(param_1 + 0x4d0) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2684) = uVar3;
  param_1[0x4d1] = DAT_14c8464f0;
  FUN_14126e142(param_1 + 0x4d2);
  puVar6 = &DAT_14c846480;
  puVar7 = param_1 + 0x4f6;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = &DAT_14c846480;
  puVar7 = param_1 + 0x502;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  *(undefined4 *)(param_1 + 0x510) = 0;
  param_1[0x511] = 0;
  param_1[0x512] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2894) = 0;
  *(undefined8 *)((longlong)param_1 + 0x289c) = 0;
  param_1[0x515] = 0;
  param_1[0x516] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  return param_1;
}



// FUNCTION 145867326 FUN_145867326 body=40 status=ok
// SIG undefined FUN_145867326(void)

undefined8 FUN_145867326(undefined8 param_1,int param_2)

{
  FUN_14586734e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586734e FUN_14586734e body=66 status=ok
// SIG undefined FUN_14586734e(void)

void FUN_14586734e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b53db00;
  FUN_14126e4af(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140d4e91c(param_1);
  return;
}



// FUNCTION 14586739e FUN_14586739e body=63 status=ok
// SIG undefined FUN_14586739e(void)

undefined8 * FUN_14586739e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b69d700;
  FUN_144a2da94(param_1 + 8);
  FUN_144a2da94(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458673de FUN_1458673de body=290 status=ok
// SIG undefined FUN_1458673de(void)

void FUN_1458673de(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14126e4e0();
  if (*(char *)(param_2 + 0x2b30) == '\x01') {
    uVar5 = FUN_1447210f0(param_2);
    FUN_14027ab42(&local_30,uVar5);
    plVar7 = (longlong *)CONCAT44(uStack_24,local_28);
    if (plVar7 != (longlong *)0x0) {
      iVar4 = (int)plVar7[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_24,local_28) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_24,local_28) + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_30 != (code *)0x0 && *(longlong *)(param_1 + 0x2e8) == 0) {
          pcVar6 = local_30 + 0x58;
          local_30 = FUN_14116a6e0;
          local_28 = 0;
          FUN_145867f14(pcVar6,&local_38,param_1);
          *(undefined8 *)(param_1 + 0x2e8) = local_38;
        }
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145867502 FUN_145867502 body=290 status=ok
// SIG undefined FUN_145867502(void)

undefined4 * FUN_145867502(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14586788e(param_1,local_48);
  FUN_145867626(param_3,local_40);
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (uint)((ulonglong)*local_40 >> 0x20) ^ (uint)*local_40;
  cVar2 = FUN_1458677d2(param_1,uVar7,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x5c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145867d52(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145867626 FUN_145867626 body=151 status=ok
// SIG undefined FUN_145867626(void)

undefined8 * FUN_145867626(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  FUN_1458676be(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1411b7a9c(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458676be FUN_1458676be body=125 status=ok
// SIG undefined FUN_1458676be(void)

undefined8 * FUN_1458676be(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14586773c();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14586773c FUN_14586773c body=150 status=ok
// SIG undefined FUN_14586773c(void)

longlong * FUN_14586773c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1458677d2 FUN_1458677d2 body=186 status=ok
// SIG undefined FUN_1458677d2(void)

undefined8 FUN_1458677d2(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar2 = FUN_14088c684();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      lVar4 = (longlong)iVar2 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar4) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar4) != 0) {
        FUN_1400020a8();
      }
      FUN_1411b7a9c(lVar1 + lVar4 + 8);
      memmove((void *)(lVar1 + lVar4),param_3,0x58);
      FUN_145830dbc(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_145867816;
    }
  }
  uVar3 = 0;
LAB_145867816:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586788e FUN_14586788e body=238 status=ok
// SIG undefined FUN_14586788e(void)

int * FUN_14586788e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14586797c FUN_14586797c body=63 status=ok
// SIG undefined FUN_14586797c(void)

void FUN_14586797c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148d2c57a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1458679bc FUN_1458679bc body=616 status=ok
// SIG undefined FUN_1458679bc(void)

void FUN_1458679bc(longlong *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  char *local_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  int local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_b8 = param_2;
    if (*param_2 == '\x01') {
      FUN_1447a97f4(&local_70,param_2 + 0x10);
      if (0 < local_6c) {
        iVar4 = 0;
        do {
          FUN_144a7c8fe(&local_70,local_7c,iVar4,1);
          if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                ((FUN_144a7c8fe(&local_70,local_88,iVar4,1), local_88[0] == DAT_14cb7bec8 &&
                 (local_80 == DAT_14cb7bed0)))) ||
               ((FUN_144a7c8fe(&local_70,local_94,iVar4,1), local_94[0] == DAT_14cb7bee0 &&
                (local_8c == DAT_14cb7bee8)))) ||
              ((FUN_144a7c8fe(&local_70,local_a0,iVar4,1), local_a0[0] == DAT_14cb7bef8 &&
               (local_98 == DAT_14cb7bf00)))) ||
             ((FUN_144a7c8fe(&local_70,local_ac,iVar4,1), local_ac[0] == DAT_14cb7bf10 &&
              (local_a4 == DAT_14cb7bf18)))) {
            FUN_1402b5374(&local_70,iVar4,0);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_6c);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_70 = *(int *)(param_2 + 0x10);
    }
    pcVar1 = local_b8;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)local_70 & (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar5 + uVar8 * 4);
    if (lVar3 != -1) {
      lVar3 = lVar3 * 0xa0 + *param_1;
      cVar2 = FUN_14493b798(lVar3,local_b8);
      if (cVar2 == '\0') {
        do {
          lVar7 = lVar3;
          lVar3 = (longlong)*(int *)(lVar7 + 0x98);
          if (lVar3 == -1) goto LAB_145867bb2;
          lVar3 = lVar3 * 0xa0 + *param_1;
          cVar2 = FUN_14493b798(lVar3,pcVar1);
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar7 + 0x98);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar5 + uVar8 * 4);
      }
      FUN_145867c26(param_1,*puVar6);
    }
  }
LAB_145867bb2:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145867c26 FUN_145867c26 body=103 status=ok
// SIG undefined FUN_145867c26(void)

void FUN_145867c26(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x9c + (longlong)param_2 * 0xa0);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0xa0 + 0x98);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0xa0 + 0x98);
  FUN_145867c8e();
  return;
}



// FUNCTION 145867c8e FUN_145867c8e body=75 status=ok
// SIG undefined FUN_145867c8e(void)

void FUN_145867c8e(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 + (longlong)param_2 * 0xa0;
  FUN_1411b822c(lVar1 + 0x38);
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_145867cda(param_1,param_2);
  return;
}



// FUNCTION 145867cda FUN_145867cda body=120 status=ok
// SIG undefined FUN_145867cda(void)

void FUN_145867cda(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145867d52 FUN_145867d52 body=449 status=ok
// SIG undefined FUN_145867d52(void)

void FUN_145867d52(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145867f14 FUN_145867f14 body=254 status=ok
// SIG undefined FUN_145867f14(void)

undefined8
FUN_145867f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9aba80;
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
  *local_48 = &PTR_FUN_14b9de710;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14126f12c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145868014 FUN_145868014 body=24 status=ok
// SIG undefined FUN_145868014(void)

bool FUN_145868014(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14586802c FUN_14586802c body=1 status=ok
// SIG undefined FUN_14586802c(void)

void FUN_14586802c(void)

{
  return;
}



// FUNCTION 14586802e FUN_14586802e body=214 status=ok
// SIG undefined FUN_14586802e(void)

undefined8 * FUN_14586802e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145868112 FUN_145868112 body=112 status=ok
// SIG undefined FUN_145868112(void)

undefined8 * FUN_145868112(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = *param_3;
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  UNLOCK();
  uVar1 = FUN_14126f4b0(*(undefined8 *)(param_2 + 0x30));
  param_1[1] = uVar1;
  param_1[2] = param_2;
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_145868182(param_1 + 1);
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = param_2;
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_145868182(param_1 + 4);
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 145868182 FUN_145868182 body=63 status=ok
// SIG undefined FUN_145868182(void)

void FUN_145868182(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_14126f4b0(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1458681c2 FUN_1458681c2 body=416 status=ok
// SIG undefined FUN_1458681c2(void)

longlong * FUN_1458681c2(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_145868299:
    *puVar3 = &PTR_LAB_14b96dd20;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b96dcb0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_145868299;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b96dd20;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b96dcb0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 145868368 FUN_145868368 body=80 status=ok
// SIG undefined FUN_145868368(void)

undefined8 FUN_145868368(ushort *param_1)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  bool bVar7;
  
  lVar2 = DAT_14ca97170;
  uVar5 = (ulonglong)*param_1;
  bVar7 = true;
  if (uVar5 != 0) {
    if ((*(byte *)(&DAT_14ca814d8 + uVar5 * 0xf) & 0x80) == 0) {
      bVar7 = ((&DAT_14ca814cd)[uVar5 * 0x3c] & 3) == 0;
    }
  }
  if (((!bVar7) || ((*(uint *)(param_1 + 2) & 0x80000001) != 1)) &&
     (2 < (int)(&DAT_14ca814b8)[uVar5 * 0xf])) {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar5 = (ulonglong)uVar1;
    if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
      uVar6 = 0;
    }
    else if (uVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = CONCAT44(extraout_var,DVar4);
      uVar6 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar6 = 1;
    }
    return CONCAT71((int7)(uVar5 >> 8),0 < *(int *)(lVar2 + uVar6 * 4));
  }
  return 0;
}



// FUNCTION 1458683b8 FUN_1458683b8 body=53 status=ok
// SIG undefined FUN_1458683b8(void)

void FUN_1458683b8(longlong *param_1)

{
  FUN_14126fd2c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458683ee FUN_1458683ee body=221 status=ok
// SIG undefined FUN_1458683ee(void)

void FUN_1458683ee(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14126fd86();
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x1568) == 0) {
    return;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x1568) + 0x6f0) & 2) == 0) {
    return;
  }
  lVar2 = (**(code **)(*param_2 + 0x108))(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_144a2f878();
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        lVar3 + 0x30)) {
      if (*(char *)(lVar2 + 0x73eb) == '\x01') {
        FUN_145da254a(lVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),2));
      }
      goto LAB_145868461;
    }
  }
  lVar2 = 0;
LAB_145868461:
  lVar3 = (**(code **)(*param_2 + 0x120))(param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_144a2f878();
    iVar1 = *(int *)(lVar4 + 0x38);
    if ((((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) && (lVar3 != lVar2)) &&
        (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
         lVar4 + 0x30)) && (*(char *)(lVar3 + 0x73eb) == '\x01')) {
      FUN_145da254a(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),2));
      return;
    }
  }
  return;
}



// FUNCTION 1458684cc FUN_1458684cc body=29 status=ok
// SIG undefined FUN_1458684cc(void)

void FUN_1458684cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14129cc8e();
  FUN_1458684ea(param_1,uVar1);
  return;
}



// FUNCTION 1458684ea FUN_1458684ea body=304 status=ok
// SIG undefined FUN_1458684ea(void)

void FUN_1458684ea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    lVar2 = param_1 + 0x30;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar5 = 0;
    local_50 = lVar2;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1449c0562(&local_58);
      iVar5 = *(int *)(param_1 + 0x48);
    }
    local_68 = local_48;
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar4 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar5) || (local_68 = uVar3, local_50 != lVar2)) {
      do {
        do {
          local_68 = uVar3;
          FUN_148d3b6fc(param_2 + 0x4f48,*(undefined4 *)(*local_80 + (longlong)iVar4 * 0x18),
                        *(undefined8 *)(*local_80 + 8 + (longlong)iVar4 * 0x18));
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
          FUN_1449c0562(&local_78);
          iVar4 = local_68._4_4_;
          uVar3 = local_68;
        } while (local_68._4_4_ != iVar5);
      } while ((local_70 != lVar2) || (local_80 != plVar1));
    }
  }
  FUN_14586861c(param_1 + 0x20);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14586861c FUN_14586861c body=68 status=ok
// SIG undefined FUN_14586861c(void)

void FUN_14586861c(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1458885ba();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145868660 FUN_145868660 body=93 status=ok
// SIG undefined FUN_145868660(void)

void FUN_145868660(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
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



// FUNCTION 1458686be FUN_1458686be body=21 status=ok
// SIG undefined FUN_1458686be(void)

undefined8 FUN_1458686be(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1458686d4 FUN_1458686d4 body=38 status=ok
// SIG undefined FUN_1458686d4(void)

undefined8 FUN_1458686d4(undefined8 param_1,int param_2)

{
  FUN_1458686fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458686fa FUN_1458686fa body=191 status=ok
// SIG undefined FUN_1458686fa(void)

void FUN_1458686fa(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a312a70;
  puVar2 = (undefined8 *)param_1[0x2b];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2a] + 0x38))();
  }
  if ((longlong *)param_1[0x29] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x29] + 0x38))();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1458687ba(param_1 + 2);
  return;
}



// FUNCTION 1458687ba FUN_1458687ba body=53 status=ok
// SIG undefined FUN_1458687ba(void)

void FUN_1458687ba(longlong *param_1)

{
  FUN_1458687f0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


