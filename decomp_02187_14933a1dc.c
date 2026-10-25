// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14933a1dc FUN_14933a1dc body=159 status=ok
// SIG undefined FUN_14933a1dc(void)

undefined4 FUN_14933a1dc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetIESBrightnessScale");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x1c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a27c FUN_14933a27c body=159 status=ok
// SIG undefined FUN_14933a27c(void)

undefined4 FUN_14933a27c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetRotation");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14933a31c(param_1[5],param_1 + 0x1e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a31c FUN_14933a31c body=399 status=ok
// SIG undefined FUN_14933a31c(void)

ulonglong FUN_14933a31c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_14933a34e;
  }
  FUN_14934cb0a(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_14933a461:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x2a))
    goto LAB_14933a461;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_14933a3d1:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_14933a461;
    }
    uVar5 = FUN_14934ccf0(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_14933a3d1;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_14933a34e:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14933a4ac FUN_14933a4ac body=159 status=ok
// SIG undefined FUN_14933a4ac(void)

undefined4 FUN_14933a4ac(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetRotation");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14933a54c(param_1[5],param_1 + 0x1e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a54c FUN_14933a54c body=263 status=ok
// SIG undefined FUN_14933a54c(void)

ulonglong FUN_14933a54c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14934cdc2(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a654 FUN_14933a654 body=32 status=ok
// SIG undefined FUN_14933a654(void)

undefined8 FUN_14933a654(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"PointLightNode");
  return param_2;
}



// FUNCTION 14933a674 FUN_14933a674 body=159 status=ok
// SIG undefined FUN_14933a674(void)

undefined4 FUN_14933a674(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetUseInverseSquaredFalloff");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x20,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a714 FUN_14933a714 body=158 status=ok
// SIG undefined FUN_14933a714(void)

undefined4 FUN_14933a714(longlong *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_21 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetUseInverseSquaredFalloff");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x20,local_38,&local_21);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a7b4 FUN_14933a7b4 body=159 status=ok
// SIG undefined FUN_14933a7b4(void)

undefined4 FUN_14933a7b4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetLightFalloffExponent");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x22,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a854 FUN_14933a854 body=160 status=ok
// SIG undefined FUN_14933a854(void)

undefined4 FUN_14933a854(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetLightFalloffExponent");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x22,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a8f6 FUN_14933a8f6 body=32 status=ok
// SIG undefined FUN_14933a8f6(void)

undefined8 FUN_14933a8f6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SpotLightNode");
  return param_2;
}



// FUNCTION 14933a916 FUN_14933a916 body=159 status=ok
// SIG undefined FUN_14933a916(void)

undefined4 FUN_14933a916(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetInnerConeAngle");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x24,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a9b6 FUN_14933a9b6 body=160 status=ok
// SIG undefined FUN_14933a9b6(void)

undefined4 FUN_14933a9b6(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetInnerConeAngle");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x24,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933aa58 FUN_14933aa58 body=159 status=ok
// SIG undefined FUN_14933aa58(void)

undefined4 FUN_14933aa58(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetOuterConeAngle");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x26,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933aaf8 FUN_14933aaf8 body=160 status=ok
// SIG undefined FUN_14933aaf8(void)

undefined4 FUN_14933aaf8(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetOuterConeAngle");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x26,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ab9a FUN_14933ab9a body=32 status=ok
// SIG undefined FUN_14933ab9a(void)

undefined8 FUN_14933ab9a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"RectLightNode");
  return param_2;
}



// FUNCTION 14933abba FUN_14933abba body=159 status=ok
// SIG undefined FUN_14933abba(void)

undefined4 FUN_14933abba(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSourceWidth");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x20,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ac5a FUN_14933ac5a body=160 status=ok
// SIG undefined FUN_14933ac5a(void)

undefined4 FUN_14933ac5a(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSourceWidth");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x20,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933acfc FUN_14933acfc body=159 status=ok
// SIG undefined FUN_14933acfc(void)

undefined4 FUN_14933acfc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSourceHeight");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x22,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ad9c FUN_14933ad9c body=160 status=ok
// SIG undefined FUN_14933ad9c(void)

undefined4 FUN_14933ad9c(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSourceHeight");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x22,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ae3e FUN_14933ae3e body=32 status=ok
// SIG undefined FUN_14933ae3e(void)

undefined8 FUN_14933ae3e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"DirectionalLightNode");
  return param_2;
}



// FUNCTION 14933ae64 FUN_14933ae64 body=254 status=ok
// SIG undefined FUN_14933ae64(void)

void FUN_14933ae64(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933af64(param_1,local_38,local_3c);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933af64 FUN_14933af64 body=112 status=ok
// SIG undefined FUN_14933af64(void)

undefined4 FUN_14933af64(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = param_3;
  FUN_14933bd24(local_40);
  uVar1 = FUN_1492eda3c(param_1,local_40,&local_2c);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933afe2 FUN_14933afe2 body=257 status=ok
// SIG undefined FUN_14933afe2(void)

void FUN_14933afe2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933b0e4(param_1,local_38,local_3c != 0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b0e4 FUN_14933b0e4 body=111 status=ok
// SIG undefined FUN_14933b0e4(void)

undefined4 FUN_14933b0e4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_29 = param_3;
  FUN_14933bd24(local_40);
  uVar1 = FUN_1492ed6b4(param_1,local_40,&local_29);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b15a FUN_14933b15a body=268 status=ok
// SIG undefined FUN_14933b15a(void)

void FUN_14933b15a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933b268(param_1,local_48 + 2,local_48);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b268 FUN_14933b268 body=106 status=ok
// SIG undefined FUN_14933b268(void)

undefined4 FUN_14933b268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14933bd24(local_38);
  uVar1 = FUN_1492ee142(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b2da FUN_14933b2da body=258 status=ok
// SIG undefined FUN_14933b2da(void)

void FUN_14933b2da(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933b3de(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b3de FUN_14933b3de body=106 status=ok
// SIG undefined FUN_14933b3de(void)

undefined4 FUN_14933b3de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14933bd24(local_38);
  uVar1 = FUN_1492edf7c(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b450 FUN_14933b450 body=189 status=ok
// SIG undefined FUN_14933b450(void)

void FUN_14933b450(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933b50e(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b50e FUN_14933b50e body=156 status=ok
// SIG undefined FUN_14933b50e(void)

undefined4 FUN_14933b50e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetParent");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b5b2 FUN_14933b5b2 body=266 status=ok
// SIG undefined FUN_14933b5b2(void)

void FUN_14933b5b2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933b6be(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b6be FUN_14933b6be body=106 status=ok
// SIG undefined FUN_14933b6be(void)

undefined4 FUN_14933b6be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14933bd24(local_38);
  uVar1 = FUN_1492eeb9c(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b736 FUN_14933b736 body=263 status=ok
// SIG undefined FUN_14933b736(void)

void FUN_14933b736(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
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
  puVar2 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933b83e(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b83e FUN_14933b83e body=106 status=ok
// SIG undefined FUN_14933b83e(void)

undefined4 FUN_14933b83e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14933bd24(local_38);
  uVar1 = FUN_1492ee61c(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b8b0 FUN_14933b8b0 body=279 status=ok
// SIG undefined FUN_14933b8b0(void)

void FUN_14933b8b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933b9c8(param_1,local_48 + 2,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933b9c8 FUN_14933b9c8 body=106 status=ok
// SIG undefined FUN_14933b9c8(void)

undefined4 FUN_14933b9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14933bd24(local_38);
  uVar1 = FUN_1492ef716(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ba3a FUN_14933ba3a body=258 status=ok
// SIG undefined FUN_14933ba3a(void)

void FUN_14933ba3a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933bb3e(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933bb3e FUN_14933bb3e body=106 status=ok
// SIG undefined FUN_14933bb3e(void)

undefined4 FUN_14933bb3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14933bd24(local_38);
  uVar1 = FUN_1492ef232(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933bbb0 FUN_14933bbb0 body=178 status=ok
// SIG undefined FUN_14933bbb0(void)

void FUN_14933bbb0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933bc64(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933bc64 FUN_14933bc64 body=156 status=ok
// SIG undefined FUN_14933bc64(void)

undefined4 FUN_14933bc64(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetParent");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933bd04 FUN_14933bd04 body=32 status=ok
// SIG undefined FUN_14933bd04(void)

undefined8 FUN_14933bd04(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"MaterialInstanceNode");
  return param_2;
}



// FUNCTION 14933bd24 FUN_14933bd24 body=313 status=ok
// SIG undefined FUN_14933bd24(void)

undefined8 FUN_14933bd24(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  wchar_t *local_130;
  ulonglong *local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined2 local_10a [121];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &local_118;
  local_120 = 0;
  local_128 = &local_18;
  local_118 = 0x750070006e0049;
  local_110 = 0x730074;
  local_10c = 0x3a;
  local_130 = local_10a;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(&local_138,*param_2,iVar1);
  pwVar2 = local_130;
  if (local_128 <= local_130 + 1) {
    FUN_140213274(&local_138,1);
    pwVar2 = local_130;
  }
  *pwVar2 = 0x3a;
  local_130 = pwVar2 + 1;
  if (local_128 <= pwVar2 + 6) {
    FUN_140213274(&local_138,5);
  }
  builtin_wcsncpy(local_130,L"Value",6);
  local_130 = local_130 + 5;
  FUN_140056680(param_1,local_138);
  FUN_144724f3c(&local_138);
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933be64 FUN_14933be64 body=172 status=ok
// SIG undefined FUN_14933be64(void)

void FUN_14933be64(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933bf12(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933bf12 FUN_14933bf12 body=156 status=ok
// SIG undefined FUN_14933bf12(void)

undefined4 FUN_14933bf12(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetBoundingBox");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14933f9bb(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933bfba FUN_14933bfba body=172 status=ok
// SIG undefined FUN_14933bfba(void)

void FUN_14933bfba(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933c068(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c068 FUN_14933c068 body=159 status=ok
// SIG undefined FUN_14933c068(void)

undefined4 FUN_14933c068(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetHasSmoothGroup");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x18,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c112 FUN_14933c112 body=172 status=ok
// SIG undefined FUN_14933c112(void)

void FUN_14933c112(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933c1c0(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c1c0 FUN_14933c1c0 body=159 status=ok
// SIG undefined FUN_14933c1c0(void)

undefined4 FUN_14933c1c0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetHasVertexBinormal");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c26a FUN_14933c26a body=172 status=ok
// SIG undefined FUN_14933c26a(void)

void FUN_14933c26a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933c318(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c318 FUN_14933c318 body=159 status=ok
// SIG undefined FUN_14933c318(void)

undefined4 FUN_14933c318(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetHasVertexColor");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x1a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c3c2 FUN_14933c3c2 body=172 status=ok
// SIG undefined FUN_14933c3c2(void)

void FUN_14933c3c2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933c470(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c470 FUN_14933c470 body=159 status=ok
// SIG undefined FUN_14933c470(void)

undefined4 FUN_14933c470(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetHasVertexNormal");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c51a FUN_14933c51a body=172 status=ok
// SIG undefined FUN_14933c51a(void)

void FUN_14933c51a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933c5c8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c5c8 FUN_14933c5c8 body=159 status=ok
// SIG undefined FUN_14933c5c8(void)

undefined4 FUN_14933c5c8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetHasVertexTangent");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c66e FUN_14933c66e body=175 status=ok
// SIG undefined FUN_14933c66e(void)

void FUN_14933c66e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933c71e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c71e FUN_14933c71e body=156 status=ok
// SIG undefined FUN_14933c71e(void)

undefined4 FUN_14933c71e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetPolygonCount");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c7c2 FUN_14933c7c2 body=175 status=ok
// SIG undefined FUN_14933c7c2(void)

void FUN_14933c7c2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933c872(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c872 FUN_14933c872 body=159 status=ok
// SIG undefined FUN_14933c872(void)

undefined4 FUN_14933c872(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetUVCount");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0x1c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c918 FUN_14933c918 body=175 status=ok
// SIG undefined FUN_14933c918(void)

void FUN_14933c918(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933c9c8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933c9c8 FUN_14933c9c8 body=156 status=ok
// SIG undefined FUN_14933c9c8(void)

undefined4 FUN_14933c9c8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetVertexCount");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ca66 FUN_14933ca66 body=44 status=ok
// SIG undefined FUN_14933ca66(void)

void FUN_14933ca66(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0x130);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14933ca92 FUN_14933ca92 body=198 status=ok
// SIG undefined FUN_14933ca92(void)

void FUN_14933ca92(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 0x130,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933cb5a FUN_14933cb5a body=12 status=ok
// SIG undefined FUN_14933cb5a(void)

void FUN_14933cb5a(longlong param_1)

{
  FUN_1492f1448(param_1 + 0x130);
  return;
}



// FUNCTION 14933cb66 FUN_14933cb66 body=261 status=ok
// SIG undefined FUN_14933cb66(void)

void FUN_14933cb66(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f5d18(param_1 + 0x130,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933cc72 FUN_14933cc72 body=189 status=ok
// SIG undefined FUN_14933cc72(void)

void FUN_14933cc72(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933cd30(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933cd30 FUN_14933cd30 body=225 status=ok
// SIG undefined FUN_14933cd30(void)

ulonglong FUN_14933cd30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a7e010(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f230();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0d3b8);
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_14933cd72;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f230();
  FUN_1444be0f2(&local_38,&DAT_14cc0d3b8,uVar1);
  if (local_38 == 0) {
LAB_14933cdf8:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_38,local_30);
    if (cVar2 == '\0') goto LAB_14933cdf8;
    iVar3 = FUN_1419073b0(local_38,local_30);
    if (iVar3 != 0x12) goto LAB_14933cdf8;
    uVar4 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    if (local_38 != 0) {
      FUN_1492ff8ec(local_38,local_30,param_2);
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
LAB_14933cd72:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ce12 FUN_14933ce12 body=261 status=ok
// SIG undefined FUN_14933ce12(void)

void FUN_14933ce12(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f5d18(param_1 + 0x150,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933cf18 FUN_14933cf18 body=198 status=ok
// SIG undefined FUN_14933cf18(void)

void FUN_14933cf18(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 0x150,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933cfe0 FUN_14933cfe0 body=44 status=ok
// SIG undefined FUN_14933cfe0(void)

void FUN_14933cfe0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0x150);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14933d00c FUN_14933d00c body=44 status=ok
// SIG undefined FUN_14933d00c(void)

void FUN_14933d00c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0xf0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14933d038 FUN_14933d038 body=12 status=ok
// SIG undefined FUN_14933d038(void)

void FUN_14933d038(longlong param_1)

{
  FUN_1492f125c(param_1 + 0xf0);
  return;
}



// FUNCTION 14933d044 FUN_14933d044 body=198 status=ok
// SIG undefined FUN_14933d044(void)

void FUN_14933d044(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 0xf0,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933d10c FUN_14933d10c body=261 status=ok
// SIG undefined FUN_14933d10c(void)

void FUN_14933d10c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f5d18(param_1 + 0xf0,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933d212 FUN_14933d212 body=12 status=ok
// SIG undefined FUN_14933d212(void)

void FUN_14933d212(longlong param_1)

{
  FUN_1492f5d18(param_1 + 0xf0);
  return;
}



// FUNCTION 14933d21e FUN_14933d21e body=242 status=ok
// SIG undefined FUN_14933d21e(void)

void FUN_14933d21e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14933d312(param_1,puVar1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933d312 FUN_14933d312 body=115 status=ok
// SIG undefined FUN_14933d312(void)

void FUN_14933d312(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1492f8238(param_1 + 0x170,local_68);
  FUN_146b4993e(param_2,local_68);
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



// FUNCTION 14933d38c FUN_14933d38c body=328 status=ok
// SIG undefined FUN_14933d38c(void)

void FUN_14933d38c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar5 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_14934d8ea(param_1 + 0x170,uVar3,local_48 + 2,plVar5);
  *param_3 = uVar2;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14933d4da FUN_14933d4da body=37 status=ok
// SIG undefined FUN_14933d4da(void)

void FUN_14933d4da(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933d500();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14933d500 FUN_14933d500 body=226 status=ok
// SIG undefined FUN_14933d500(void)

ulonglong FUN_14933d500(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f1b2();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0d3a0);
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_14933d536;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f1b2();
  FUN_1444be324(&local_30,&DAT_14cc0d3a0,uVar1);
  if (local_30 == 0) {
LAB_14933d5b4:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_30,local_28);
    if (cVar2 == '\0') goto LAB_14933d5b4;
    iVar3 = FUN_1419073b0(local_30,local_28);
    if (iVar3 != 1) goto LAB_14933d5b4;
    local_31 = 0;
    if (local_30 == 0) goto LAB_14933d5b4;
    FUN_149302700(local_30,local_28,&local_31);
    uVar4 = CONCAT71((int7)((ulonglong)local_28 >> 8),local_31);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_14933d536:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933d5e8 FUN_14933d5e8 body=37 status=ok
// SIG undefined FUN_14933d5e8(void)

void FUN_14933d5e8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933d60e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14933d60e FUN_14933d60e body=226 status=ok
// SIG undefined FUN_14933d60e(void)

ulonglong FUN_14933d60e(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f134();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0d388);
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_14933d644;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f134();
  FUN_1444be324(&local_30,&DAT_14cc0d388,uVar1);
  if (local_30 == 0) {
LAB_14933d6c2:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_30,local_28);
    if (cVar2 == '\0') goto LAB_14933d6c2;
    iVar3 = FUN_1419073b0(local_30,local_28);
    if (iVar3 != 1) goto LAB_14933d6c2;
    local_31 = 0;
    if (local_30 == 0) goto LAB_14933d6c2;
    FUN_149302700(local_30,local_28,&local_31);
    uVar4 = CONCAT71((int7)((ulonglong)local_28 >> 8),local_31);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_14933d644:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933d6f8 FUN_14933d6f8 body=185 status=ok
// SIG undefined FUN_14933d6f8(void)

void FUN_14933d6f8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 0x130,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933d7b8 FUN_14933d7b8 body=185 status=ok
// SIG undefined FUN_14933d7b8(void)

void FUN_14933d7b8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 0x150,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933d878 FUN_14933d878 body=185 status=ok
// SIG undefined FUN_14933d878(void)

void FUN_14933d878(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 0xf0,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933d938 FUN_14933d938 body=222 status=ok
// SIG undefined FUN_14933d938(void)

void FUN_14933d938(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_149306236(param_1 + 0x170,uVar3,&local_38);
  *param_3 = uVar2;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14933da1e FUN_14933da1e body=172 status=ok
// SIG undefined FUN_14933da1e(void)

void FUN_14933da1e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933dacc(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933dacc FUN_14933dacc body=156 status=ok
// SIG undefined FUN_14933dacc(void)

undefined4 FUN_14933dacc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetBoundingBox");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14933fb4b(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933db74 FUN_14933db74 body=172 status=ok
// SIG undefined FUN_14933db74(void)

void FUN_14933db74(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933dc22(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933dc22 FUN_14933dc22 body=159 status=ok
// SIG undefined FUN_14933dc22(void)

undefined4 FUN_14933dc22(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetHasSmoothGroup");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x18,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933dccc FUN_14933dccc body=172 status=ok
// SIG undefined FUN_14933dccc(void)

void FUN_14933dccc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933dd7a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933dd7a FUN_14933dd7a body=159 status=ok
// SIG undefined FUN_14933dd7a(void)

undefined4 FUN_14933dd7a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetHasVertexBinormal");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933de24 FUN_14933de24 body=172 status=ok
// SIG undefined FUN_14933de24(void)

void FUN_14933de24(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933ded2(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ded2 FUN_14933ded2 body=159 status=ok
// SIG undefined FUN_14933ded2(void)

undefined4 FUN_14933ded2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetHasVertexColor");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x1a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933df7c FUN_14933df7c body=172 status=ok
// SIG undefined FUN_14933df7c(void)

void FUN_14933df7c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933e02a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e02a FUN_14933e02a body=159 status=ok
// SIG undefined FUN_14933e02a(void)

undefined4 FUN_14933e02a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetHasVertexNormal");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e0d4 FUN_14933e0d4 body=172 status=ok
// SIG undefined FUN_14933e0d4(void)

void FUN_14933e0d4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933e182(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e182 FUN_14933e182 body=159 status=ok
// SIG undefined FUN_14933e182(void)

undefined4 FUN_14933e182(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetHasVertexTangent");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e228 FUN_14933e228 body=175 status=ok
// SIG undefined FUN_14933e228(void)

void FUN_14933e228(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933e2d8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e2d8 FUN_14933e2d8 body=156 status=ok
// SIG undefined FUN_14933e2d8(void)

undefined4 FUN_14933e2d8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetPolygonCount");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e37c FUN_14933e37c body=175 status=ok
// SIG undefined FUN_14933e37c(void)

void FUN_14933e37c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933e42c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e42c FUN_14933e42c body=159 status=ok
// SIG undefined FUN_14933e42c(void)

undefined4 FUN_14933e42c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetUVCount");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0x1c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e4d2 FUN_14933e4d2 body=175 status=ok
// SIG undefined FUN_14933e4d2(void)

void FUN_14933e4d2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933e582(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e582 FUN_14933e582 body=156 status=ok
// SIG undefined FUN_14933e582(void)

undefined4 FUN_14933e582(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetVertexCount");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e62a FUN_14933e62a body=165 status=ok
// SIG undefined FUN_14933e62a(void)

void FUN_14933e62a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933e6d0(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e6d0 FUN_14933e6d0 body=205 status=ok
// SIG undefined FUN_14933e6d0(void)

ulonglong FUN_14933e6d0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40 [2];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_29 = param_2;
  FUN_14933f1b2();
  uVar5 = 0;
  uVar4 = FUN_14112c19a(uVar1,&DAT_14cc0d3a0,&local_29,0);
  if ((uVar4 & 1) == 0) goto LAB_14933e716;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f1b2();
  FUN_1444be324(&local_48,&DAT_14cc0d3a0,uVar1);
  if (local_48 == 0) {
LAB_14933e788:
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_48,local_40);
    if (cVar2 == '\0') goto LAB_14933e788;
    iVar3 = FUN_1419073b0(local_48,local_40);
    uVar5 = CONCAT71((int7)((ulonglong)local_40 >> 8),iVar3 == 1);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_14933e716:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e7a4 FUN_14933e7a4 body=185 status=ok
// SIG undefined FUN_14933e7a4(void)

void FUN_14933e7a4(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 0x130,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e85e FUN_14933e85e body=12 status=ok
// SIG undefined FUN_14933e85e(void)

void FUN_14933e85e(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0x130);
  return;
}



// FUNCTION 14933e870 FUN_14933e870 body=178 status=ok
// SIG undefined FUN_14933e870(void)

void FUN_14933e870(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933e924(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e924 FUN_14933e924 body=201 status=ok
// SIG undefined FUN_14933e924(void)

ulonglong FUN_14933e924(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f230();
  uVar5 = 0;
  uVar4 = FUN_1492f0926(uVar1,&DAT_14cc0d3b8,param_2,0);
  if ((uVar4 & 1) == 0) goto LAB_14933e966;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f230();
  FUN_1444be0f2(&local_40,&DAT_14cc0d3b8,uVar1);
  if (local_40 == 0) {
LAB_14933e9d8:
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_40,local_38);
    if (cVar2 == '\0') goto LAB_14933e9d8;
    iVar3 = FUN_1419073b0(local_40,local_38);
    uVar5 = CONCAT71((int7)((ulonglong)local_38 >> 8),iVar3 == 0x12);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_14933e966:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933e9ee FUN_14933e9ee body=274 status=ok
// SIG undefined FUN_14933e9ee(void)

void FUN_14933e9ee(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = &local_29;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2f0))(param_1,local_28,puVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933eb08 FUN_14933eb08 body=185 status=ok
// SIG undefined FUN_14933eb08(void)

void FUN_14933eb08(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 0x150,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ebc8 FUN_14933ebc8 body=185 status=ok
// SIG undefined FUN_14933ebc8(void)

void FUN_14933ebc8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 0xf0,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ec82 FUN_14933ec82 body=12 status=ok
// SIG undefined FUN_14933ec82(void)

void FUN_14933ec82(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0xf0);
  return;
}



// FUNCTION 14933ec98 FUN_14933ec98 body=165 status=ok
// SIG undefined FUN_14933ec98(void)

void FUN_14933ec98(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933ed3e(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ed3e FUN_14933ed3e body=205 status=ok
// SIG undefined FUN_14933ed3e(void)

ulonglong FUN_14933ed3e(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40 [2];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_29 = param_2;
  FUN_14933f134();
  uVar5 = 0;
  uVar4 = FUN_14112c19a(uVar1,&DAT_14cc0d388,&local_29,0);
  if ((uVar4 & 1) == 0) goto LAB_14933ed84;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f134();
  FUN_1444be324(&local_48,&DAT_14cc0d388,uVar1);
  if (local_48 == 0) {
LAB_14933edf6:
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_48,local_40);
    if (cVar2 == '\0') goto LAB_14933edf6;
    iVar3 = FUN_1419073b0(local_48,local_40);
    uVar5 = CONCAT71((int7)((ulonglong)local_40 >> 8),iVar3 == 1);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_14933ed84:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ee12 FUN_14933ee12 body=312 status=ok
// SIG undefined FUN_14933ee12(void)

void FUN_14933ee12(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_149305dea(param_1 + 0x170,uVar3,local_48 + 2,local_48);
  *param_3 = uVar2;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14933ef4c FUN_14933ef4c body=78 status=ok
// SIG undefined FUN_14933ef4c(void)

void FUN_14933ef4c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar4);
  FUN_149305dea(param_1 + 0x170,uVar3,param_2,param_3);
  return;
}



// FUNCTION 14933ef9e FUN_14933ef9e body=107 status=ok
// SIG undefined FUN_14933ef9e(void)

void FUN_14933ef9e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_144aff0e0();
  FUN_1492f069a(param_1,lVar1);
  if (((*(byte *)(lVar1 + 0x28) & 1) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
    FUN_1444bea9a(param_1 + 0x170);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933f00a FUN_14933f00a body=58 status=ok
// SIG undefined FUN_14933f00a(void)

void FUN_14933f00a(longlong param_1,longlong param_2)

{
  FUN_1492f069a();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
    FUN_1444bea9a(param_1 + 0x170);
    return;
  }
  return;
}



// FUNCTION 14933f044 FUN_14933f044 body=120 status=ok
// SIG undefined FUN_14933f044(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14933f044(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d368) {
    FUN_144b3d300(&DAT_14cc0d368);
    if (DAT_14cc0d368 == -1) {
      DAT_14cc0d358 = 0;
      _DAT_14cc0d360 = 0;
      FUN_14020fad6(&DAT_14cc0d358,L"__PayloadKey__");
      atexit((_func_5014 *)&LAB_1444c4ded);
      _Init_thread_footer(&DAT_14cc0d368);
      return;
    }
  }
  return;
}



// FUNCTION 14933f0bc FUN_14933f0bc body=120 status=ok
// SIG undefined FUN_14933f0bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14933f0bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d380) {
    FUN_144b3d300(&DAT_14cc0d380);
    if (DAT_14cc0d380 == -1) {
      DAT_14cc0d370 = 0;
      _DAT_14cc0d378 = 0;
      FUN_14020fad6(&DAT_14cc0d370,L"__PayloadTypeKey__");
      atexit((_func_5014 *)&LAB_1444c4dfe);
      _Init_thread_footer(&DAT_14cc0d380);
      return;
    }
  }
  return;
}



// FUNCTION 14933f134 FUN_14933f134 body=125 status=ok
// SIG undefined FUN_14933f134(void)

undefined8 * FUN_14933f134(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d398) {
    FUN_144b3d300(&DAT_14cc0d398);
    if (DAT_14cc0d398 == -1) {
      DAT_14cc0d388 = 0;
      uRam000000014cc0d390 = 0;
      FUN_14020fad6(&DAT_14cc0d388,L"__IsSkinnedMeshKey__");
      atexit((_func_5014 *)&LAB_1444c4e0f);
      _Init_thread_footer(&DAT_14cc0d398);
    }
  }
  return &DAT_14cc0d388;
}



// FUNCTION 14933f1b2 FUN_14933f1b2 body=125 status=ok
// SIG undefined FUN_14933f1b2(void)

undefined8 * FUN_14933f1b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d3b0) {
    FUN_144b3d300(&DAT_14cc0d3b0);
    if (DAT_14cc0d3b0 == -1) {
      DAT_14cc0d3a0 = 0;
      uRam000000014cc0d3a8 = 0;
      FUN_14020fad6(&DAT_14cc0d3a0,L"__IsMorphTargetKey__");
      atexit((_func_5014 *)&LAB_1444c4e20);
      _Init_thread_footer(&DAT_14cc0d3b0);
    }
  }
  return &DAT_14cc0d3a0;
}



// FUNCTION 14933f230 FUN_14933f230 body=120 status=ok
// SIG undefined FUN_14933f230(void)

void FUN_14933f230(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d3c8) {
    FUN_144b3d300(&DAT_14cc0d3c8);
    if (DAT_14cc0d3c8 == -1) {
      DAT_14cc0d3b8 = 0;
      uRam000000014cc0d3c0 = 0;
      FUN_14020fad6(&DAT_14cc0d3b8,L"__MorphTargetNameKey__");
      atexit((_func_5014 *)&LAB_1444c4e31);
      _Init_thread_footer(&DAT_14cc0d3c8);
      return;
    }
  }
  return;
}



// FUNCTION 14933f2a8 FUN_14933f2a8 body=32 status=ok
// SIG undefined FUN_14933f2a8(void)

undefined8 FUN_14933f2a8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"MeshNode");
  return param_2;
}



// FUNCTION 14933f2c8 FUN_14933f2c8 body=181 status=ok
// SIG undefined FUN_14933f2c8(void)

undefined8 FUN_14933f2c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(&local_28,L"MeshIcon.");
  cVar1 = FUN_14933d60e(param_1);
  if (cVar1 == '\0') {
    pwVar2 = L"Static";
    uVar4 = 6;
  }
  else {
    pwVar2 = L"Skinned";
    uVar4 = 7;
  }
  FUN_1400020e8(&local_28,pwVar2,uVar4);
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_2,puVar3,1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14933f37e FUN_14933f37e body=830 status=ok
// SIG undefined FUN_14933f37e(void)

longlong * FUN_14933f37e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  void **ppvVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined1 local_49;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f044();
  cVar3 = FUN_140c44378(uVar1,&DAT_14cc0d358);
  if (cVar3 == '\0') {
LAB_14933f3cb:
    *(undefined1 *)(param_2 + 3) = 0;
    goto LAB_14933f3cf;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f044();
  FUN_1444be0f2(&local_68,&DAT_14cc0d358,uVar1);
  if (local_68 != (void *)0x0) {
    cVar3 = FUN_140c44378(local_68,&local_60);
    if (cVar3 != '\0') {
      iVar4 = FUN_1419073b0(local_68,&local_60);
      if (iVar4 == 0x12) {
        uVar6 = 0x4000000;
        if (local_68 == (void *)0x0) {
LAB_14933f49b:
          FUN_14933f044();
          pvVar2 = DAT_14cc0d358;
          local_78 = (void *)0x0;
          lVar7 = (longlong)DAT_14cc0d360;
          local_70 = DAT_14cc0d360;
          if (lVar7 == 0) {
            local_6c = 0;
          }
          else {
            FUN_1446dd670(&local_78,DAT_14cc0d360,0);
            memcpy(local_78,pvVar2,lVar7 * 2);
          }
          puVar5 = local_88;
          FUN_140056680(puVar5,L"UInterchangeMeshNode.GetPayLoadKey");
          ppvVar8 = &local_78;
        }
        else {
          uVar6 = FUN_1492ff8ec(local_68,&local_60,&local_48);
          if ((uVar6 & 1) == 0) goto LAB_14933f49b;
          if (CONCAT44(uStack_5c,local_60) != 0) {
            FUN_1400020a8();
          }
          uVar1 = *(undefined8 *)(param_1 + 0x28);
          FUN_14933f0bc();
          cVar3 = FUN_140c44378(uVar1,&DAT_14cc0d370);
          if (cVar3 == '\0') goto LAB_14933f3cb;
          uVar1 = *(undefined8 *)(param_1 + 0x28);
          FUN_14933f0bc();
          FUN_14934d022(&local_68,uVar1);
          if (local_68 == (void *)0x0) goto LAB_14933f458;
          cVar3 = FUN_140c44378(local_68,&local_60);
          if (cVar3 == '\0') goto LAB_14933f458;
          iVar4 = FUN_1419073b0(local_68,&local_60);
          if (iVar4 != 0x15) goto LAB_14933f458;
          uVar6 = 0x4000000;
          if (local_68 != (void *)0x0) {
            uVar6 = FUN_14934d210(local_68,&local_60,&local_49);
            if ((uVar6 & 1) != 0) {
              if (CONCAT44(uStack_5c,local_60) != 0) {
                FUN_1400020a8();
              }
              pvVar2 = local_48;
              local_68 = (void *)0x0;
              lVar7 = (longlong)(int)uStack_40;
              local_60 = (int)uStack_40;
              if (lVar7 == 0) {
                uStack_5c = 0;
                iVar4 = 0;
              }
              else {
                FUN_1446dd670(&local_68,uStack_40 & 0xffffffff,0);
                memcpy(local_68,pvVar2,lVar7 * 2);
                iVar4 = local_60;
              }
              *param_2 = (longlong)local_68;
              *(int *)(param_2 + 1) = iVar4;
              *(undefined4 *)((longlong)param_2 + 0xc) = uStack_5c;
              *(undefined1 *)(param_2 + 2) = local_49;
              *(undefined1 *)(param_2 + 3) = 1;
              goto LAB_14933f3cf;
            }
          }
          FUN_14933f0bc();
          pvVar2 = DAT_14cc0d370;
          local_98 = (void *)0x0;
          lVar7 = (longlong)DAT_14cc0d378;
          local_90 = DAT_14cc0d378;
          if (lVar7 == 0) {
            local_8c = 0;
          }
          else {
            FUN_1446dd670(&local_98,DAT_14cc0d378,0);
            memcpy(local_98,pvVar2,lVar7 * 2);
          }
          puVar5 = local_a8;
          FUN_140056680(puVar5,L"UInterchangeMeshNode.GetPayLoadTypeKey");
          ppvVar8 = &local_98;
        }
        FUN_1444ba954(uVar6,puVar5,ppvVar8);
      }
    }
  }
LAB_14933f458:
  *(undefined1 *)(param_2 + 3) = 0;
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
LAB_14933f3cf:
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933f6be FUN_14933f6be body=378 status=ok
// SIG undefined FUN_14933f6be(void)

void FUN_14933f6be(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  void **ppvVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933f044();
  uVar3 = FUN_1492f0926(uVar1,&DAT_14cc0d358,param_2,0);
  if ((uVar3 & 1) == 0) {
    FUN_14933f044();
    pvVar2 = DAT_14cc0d358;
    local_38 = (void *)0x0;
    lVar4 = (longlong)DAT_14cc0d360;
    local_30 = DAT_14cc0d360;
    if (lVar4 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,DAT_14cc0d360,0);
      memcpy(local_38,pvVar2,lVar4 * 2);
    }
    puVar5 = local_48;
    FUN_140056680(puVar5,L"UInterchangeMeshNode.SetPayLoadKey");
    ppvVar6 = &local_38;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_14933f0bc();
    uVar3 = FUN_14933f83a(uVar1,param_3);
    if ((uVar3 & 1) != 0) goto LAB_14933f77a;
    FUN_14933f0bc();
    pvVar2 = DAT_14cc0d370;
    local_58 = (void *)0x0;
    lVar4 = (longlong)DAT_14cc0d378;
    local_50 = DAT_14cc0d378;
    if (lVar4 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,DAT_14cc0d378,0);
      memcpy(local_58,pvVar2,lVar4 * 2);
    }
    puVar5 = local_68;
    FUN_140056680(puVar5,L"UInterchangeMeshNode.SetPayLoadTypeKey");
    ppvVar6 = &local_58;
  }
  FUN_1444ba954(uVar3,puVar5,ppvVar6);
LAB_14933f77a:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933f83a FUN_14933f83a body=384 status=ok
// SIG undefined FUN_14933f83a(void)

ulonglong FUN_14933f83a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  puVar3 = DAT_14cc0d370;
  if (DAT_14cc0d378 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar2 = DAT_14cc0d378 + -1;
  if (DAT_14cc0d378 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar3);
  iVar2 = FUN_140c4443c(param_1,uVar1,&DAT_14cc0d370);
  if (iVar2 == -1) {
LAB_14933f917:
    local_48 = &DAT_14cc0d370;
    FUN_140c5653a(param_1,&local_3c,&local_48,0);
    lVar4 = *param_1 + (longlong)local_3c * 0x40;
    plVar6 = (longlong *)(lVar4 + 0x10);
    *(undefined4 *)(lVar4 + 0x20) = 0x15;
    *(undefined8 *)(lVar4 + 0x18) = 1;
    lVar4 = param_1[0xb];
    param_1[0xb] = lVar4 + 1;
    if (param_1[0xc] == lVar4) {
      FUN_14112c458(param_1 + 10,lVar4);
    }
    *(undefined1 *)(param_1[10] + lVar4) = 0;
    *plVar6 = lVar4;
  }
  else {
    lVar4 = *param_1 + (longlong)iVar2 * 0x40;
    if (lVar4 == 0) goto LAB_14933f917;
    uVar5 = 0x100000;
    if (*(int *)(lVar4 + 0x20) != 0x15) goto LAB_14933f8e6;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar2 * 0x40 + 0x10);
    uVar5 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_14933f8e6;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar5 = FUN_14934d2d6(param_1,plVar6,param_2);
  if ((uVar5 & 1) == 0) {
    FUN_1492f0b5e(param_1,&DAT_14cc0d370);
  }
LAB_14933f8e6:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14933f9bb FUN_14933f9bb body=399 status=ok
// SIG undefined FUN_14933f9bb(void)

ulonglong FUN_14933f9bb(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_14933f9ed;
  }
  FUN_14934d3a2(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_14933fb00:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x35))
    goto LAB_14933fb00;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_14933fa70:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_14933fb00;
    }
    uVar5 = FUN_14934d588(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_14933fa70;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_14933f9ed:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14933fb4b FUN_14933fb4b body=260 status=ok
// SIG undefined FUN_14933fb4b(void)

ulonglong FUN_14933fb4b(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14934d66c(param_1,param_2,param_4);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933fc5a FUN_14933fc5a body=185 status=ok
// SIG undefined FUN_14933fc5a(void)

void FUN_14933fc5a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 0xd0,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933fd1a FUN_14933fd1a body=189 status=ok
// SIG undefined FUN_14933fd1a(void)

void FUN_14933fd1a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933fdd8(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933fdd8 FUN_14933fdd8 body=159 status=ok
// SIG undefined FUN_14933fdd8(void)

undefined4 FUN_14933fdd8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAnimationAssetUidToPlay");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0x53,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933fe7e FUN_14933fe7e body=189 status=ok
// SIG undefined FUN_14933fe7e(void)

void FUN_14933fe7e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933ff3c(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ff3c FUN_14933ff3c body=159 status=ok
// SIG undefined FUN_14933ff3c(void)

undefined4 FUN_14933ff3c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAssetInstanceUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933ffec FUN_14933ffec body=597 status=ok
// SIG undefined FUN_14933ffec(void)

void FUN_14933ffec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  int local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_11c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_128 = local_11c != 0;
  puVar4 = &local_118;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_b8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = FUN_149340242(param_1,local_58,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340242 FUN_149340242 body=202 status=ok
// SIG undefined FUN_149340242(void)

void FUN_149340242(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0x78);
  lVar1 = (longlong)local_50;
  _Src = *(void **)(param_1 + 0x70);
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  local_68 = param_5;
  local_78 = param_3;
  local_70 = param_4;
  FUN_1493434ae(param_1,&local_58,param_1 + 800,param_2);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340314 FUN_149340314 body=234 status=ok
// SIG undefined FUN_149340314(void)

void FUN_149340314(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149340400(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340400 FUN_149340400 body=156 status=ok
// SIG undefined FUN_149340400(void)

undefined4 FUN_149340400(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetBindPoseLocalTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc768(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493404a4 FUN_1493404a4 body=234 status=ok
// SIG undefined FUN_1493404a4(void)

void FUN_1493404a4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149340590(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340590 FUN_149340590 body=159 status=ok
// SIG undefined FUN_149340590(void)

undefined4 FUN_149340590(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetGeometricTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc768(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340640 FUN_149340640 body=597 status=ok
// SIG undefined FUN_149340640(void)

void FUN_149340640(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  int local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_11c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_128 = local_11c != 0;
  puVar4 = &local_118;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_b8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = FUN_149340896(param_1,local_58,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340896 FUN_149340896 body=202 status=ok
// SIG undefined FUN_149340896(void)

void FUN_149340896(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0x68);
  lVar1 = (longlong)local_50;
  _Src = *(void **)(param_1 + 0x60);
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  local_68 = param_5;
  local_78 = param_3;
  local_70 = param_4;
  FUN_1493434ae(param_1,&local_58,param_1 + 0x2b0,param_2);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934096c FUN_14934096c body=172 status=ok
// SIG undefined FUN_14934096c(void)

void FUN_14934096c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149340a1a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340a1a FUN_149340a1a body=159 status=ok
// SIG undefined FUN_149340a1a(void)

undefined4 FUN_149340a1a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetHasBindPose");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x18,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340ac0 FUN_149340ac0 body=234 status=ok
// SIG undefined FUN_149340ac0(void)

void FUN_149340ac0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149340bac(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340bac FUN_149340bac body=156 status=ok
// SIG undefined FUN_149340bac(void)

undefined4 FUN_149340bac(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetLocalTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc768(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340c50 FUN_149340c50 body=234 status=ok
// SIG undefined FUN_149340c50(void)

void FUN_149340c50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149340d3c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340d3c FUN_149340d3c body=159 status=ok
// SIG undefined FUN_149340d3c(void)

undefined4 FUN_149340d3c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetPivotNodeTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc768(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149340dec FUN_149340dec body=597 status=ok
// SIG undefined FUN_149340dec(void)

void FUN_149340dec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  int local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_11c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_128 = local_11c != 0;
  puVar4 = &local_118;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_b8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = FUN_149341042(param_1,local_58,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149341042 FUN_149341042 body=208 status=ok
// SIG undefined FUN_149341042(void)

void FUN_149341042(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0x88);
  lVar1 = (longlong)local_50;
  _Src = *(void **)(param_1 + 0x80);
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  local_68 = param_5;
  local_78 = param_3;
  local_70 = param_4;
  FUN_1493434ae(param_1,&local_58,param_1 + 0x390,param_2);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934111a FUN_14934111a body=234 status=ok
// SIG undefined FUN_14934111a(void)

void FUN_14934111a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149341206(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149341206 FUN_149341206 body=156 status=ok
// SIG undefined FUN_149341206(void)

undefined4 FUN_149341206(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetTimeZeroLocalTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc768(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493412ac FUN_1493412ac body=321 status=ok
// SIG undefined FUN_1493412ac(void)

void FUN_1493412ac(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = (undefined2 *)0x0;
  uStack_b0 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar5 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_b8;
  if ((int)uStack_b0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_b0 + -1;
  if ((int)uStack_b0 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_14934fcb4(param_1 + 0x1e0,uVar3,&local_b8,puVar5);
  *param_3 = uVar2;
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493413ee FUN_1493413ee body=242 status=ok
// SIG undefined FUN_1493413ee(void)

void FUN_1493413ee(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1493414e2(param_1,puVar1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1459c7d26(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493414e2 FUN_1493414e2 body=115 status=ok
// SIG undefined FUN_1493414e2(void)

void FUN_1493414e2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14934460c(param_1 + 0x168,local_68);
  FUN_1493496f0(param_2,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1459c7d26(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149341556 FUN_149341556 body=242 status=ok
// SIG undefined FUN_149341556(void)

void FUN_149341556(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14934164a(param_1,puVar1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934164a FUN_14934164a body=115 status=ok
// SIG undefined FUN_14934164a(void)

void FUN_14934164a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1492f8238(param_1 + 0xf0,local_68);
  FUN_146b4993e(param_2,local_68);
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



// FUNCTION 1493416c4 FUN_1493416c4 body=328 status=ok
// SIG undefined FUN_1493416c4(void)

void FUN_1493416c4(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar5 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_14934d8ea(param_1 + 0xf0,uVar3,local_48 + 2,plVar5);
  *param_3 = uVar2;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14934180e FUN_14934180e body=261 status=ok
// SIG undefined FUN_14934180e(void)

void FUN_14934180e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f5d18(param_1 + 0xd0,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149341914 FUN_149341914 body=44 status=ok
// SIG undefined FUN_149341914(void)

void FUN_149341914(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0xd0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 149341940 FUN_149341940 body=198 status=ok
// SIG undefined FUN_149341940(void)

void FUN_149341940(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 0xd0,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149341a0e FUN_149341a0e body=178 status=ok
// SIG undefined FUN_149341a0e(void)

void FUN_149341a0e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149341ac2(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149341ac2 FUN_149341ac2 body=215 status=ok
// SIG undefined FUN_149341ac2(void)

ulonglong FUN_149341ac2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  wchar_t *_Str2;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined7 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1492f1448(param_1 + 0xd0,&local_58);
  uVar3 = uStack_50;
  lVar2 = local_58;
  lVar6 = (longlong)(int)uStack_50;
  if (lVar6 != 0) {
    iVar1 = *(int *)(param_2 + 1);
    _Str2 = (wchar_t *)*param_2;
    lVar7 = 0;
    do {
      iVar4 = *(int *)(lVar2 + 8 + lVar7);
      uVar5 = (undefined7)((ulonglong)param_2 >> 8);
      if (iVar4 == iVar1) {
        param_2 = (undefined8 *)CONCAT71(uVar5,1);
        if ((iVar1 < 2) || (iVar4 = wcscmp(*(wchar_t **)(lVar2 + lVar7),_Str2), iVar4 == 0))
        goto LAB_149341b53;
      }
      else if (iVar4 + iVar1 == 1) {
        param_2 = (undefined8 *)CONCAT71(uVar5,1);
        goto LAB_149341b53;
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar6 << 4 != lVar7);
  }
  param_2 = (undefined8 *)0x0;
LAB_149341b53:
  FUN_1447a1747(lVar2,uVar3 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_2 & 0xffffffff;
}



// FUNCTION 149341ba0 FUN_149341ba0 body=222 status=ok
// SIG undefined FUN_149341ba0(void)

void FUN_149341ba0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_149306236(param_1 + 0xf0,uVar3,&local_38);
  *param_3 = uVar2;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149341c86 FUN_149341c86 body=185 status=ok
// SIG undefined FUN_149341c86(void)

void FUN_149341c86(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 0xd0,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149341d46 FUN_149341d46 body=178 status=ok
// SIG undefined FUN_149341d46(void)

void FUN_149341d46(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149341dfa(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149341dfa FUN_149341dfa body=159 status=ok
// SIG undefined FUN_149341dfa(void)

undefined4 FUN_149341dfa(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAnimationAssetUidToPlay");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0x53,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149341ea0 FUN_149341ea0 body=178 status=ok
// SIG undefined FUN_149341ea0(void)

void FUN_149341ea0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149341f54(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149341f54 FUN_149341f54 body=159 status=ok
// SIG undefined FUN_149341f54(void)

undefined4 FUN_149341f54(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAssetInstanceUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149342000 FUN_149342000 body=408 status=ok
// SIG undefined FUN_149342000(void)

void FUN_149342000(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14934219a(param_1,local_30,puVar3,local_9c != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934219a FUN_14934219a body=175 status=ok
// SIG undefined FUN_14934219a(void)

undefined4 FUN_14934219a(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 != '\0') {
    FUN_14934337c(param_2,param_1);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetBindPoseLocalTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc8ec(param_1[5],param_1 + 0xe,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149342250 FUN_149342250 body=234 status=ok
// SIG undefined FUN_149342250(void)

void FUN_149342250(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14934233c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934233c FUN_14934233c body=159 status=ok
// SIG undefined FUN_14934233c(void)

undefined4 FUN_14934233c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetGeometricTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc8ec(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493423e6 FUN_1493423e6 body=172 status=ok
// SIG undefined FUN_1493423e6(void)

void FUN_1493423e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149342494(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149342494 FUN_149342494 body=159 status=ok
// SIG undefined FUN_149342494(void)

undefined4 FUN_149342494(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetHasBindPose");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x18,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149342540 FUN_149342540 body=408 status=ok
// SIG undefined FUN_149342540(void)

void FUN_149342540(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493426da(param_1,local_30,puVar3,local_9c != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493426da FUN_1493426da body=175 status=ok
// SIG undefined FUN_1493426da(void)

undefined4 FUN_1493426da(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 != '\0') {
    FUN_14934337c(param_2,param_1);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetLocalTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc8ec(param_1[5],param_1 + 0xc,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149342790 FUN_149342790 body=234 status=ok
// SIG undefined FUN_149342790(void)

void FUN_149342790(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14934287c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934287c FUN_14934287c body=159 status=ok
// SIG undefined FUN_14934287c(void)

undefined4 FUN_14934287c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetPivotNodeTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc8ec(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149342928 FUN_149342928 body=408 status=ok
// SIG undefined FUN_149342928(void)

void FUN_149342928(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_149342ac2(param_1,local_30,puVar3,local_9c != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149342ac2 FUN_149342ac2 body=175 status=ok
// SIG undefined FUN_149342ac2(void)

undefined4 FUN_149342ac2(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 != '\0') {
    FUN_14934337c(param_2,param_1);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetTimeZeroLocalTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc8ec(param_1[5],param_1 + 0x10,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149342b72 FUN_149342b72 body=242 status=ok
// SIG undefined FUN_149342b72(void)

void FUN_149342b72(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149342c66(param_1,puVar1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14934957e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149342c66 FUN_149342c66 body=336 status=ok
// SIG undefined FUN_149342c66(void)

void FUN_149342c66(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != iVar8) || (uStack_60 != plVar1)) {
    do {
      lVar3 = *local_90;
      lVar5 = (longlong)iStack_74 * 0xa0;
      iVar2 = *(int *)(lVar3 + 8 + lVar5);
      puVar7 = &DAT_149dfb77a;
      if (iVar2 != 0) {
        puVar7 = *(undefined2 **)(lVar3 + lVar5);
      }
      iVar6 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      uVar4 = FUN_144a49b4a(iVar6,puVar7);
      FUN_14934fe38(param_1 + 0x1e0,uVar4,lVar3 + lVar5,lVar3 + lVar5 + 0x10);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149342dbe FUN_149342dbe body=317 status=ok
// SIG undefined FUN_149342dbe(void)

void FUN_149342dbe(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar5 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_14934f5c8(param_1 + 0x168,uVar3,&local_38,puVar5);
  *param_3 = uVar2;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149342efc FUN_149342efc body=78 status=ok
// SIG undefined FUN_149342efc(void)

void FUN_149342efc(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar4);
  FUN_14934f5c8(param_1 + 0x168,uVar3,param_2,param_3);
  return;
}



// FUNCTION 149342f50 FUN_149342f50 body=312 status=ok
// SIG undefined FUN_149342f50(void)

void FUN_149342f50(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_149305dea(param_1 + 0xf0,uVar3,local_48 + 2,local_48);
  *param_3 = uVar2;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14934308c FUN_14934308c body=107 status=ok
// SIG undefined FUN_14934308c(void)

void FUN_14934308c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_144aff0e0();
  FUN_1492f069a(param_1,lVar1);
  if (((*(byte *)(lVar1 + 0x28) & 1) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
    FUN_1444bea9a(param_1 + 0xf0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493430f8 FUN_1493430f8 body=58 status=ok
// SIG undefined FUN_1493430f8(void)

void FUN_1493430f8(longlong param_1,longlong param_2)

{
  FUN_1492f069a();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
    FUN_1444bea9a(param_1 + 0xf0);
    return;
  }
  return;
}



// FUNCTION 149343132 FUN_149343132 body=115 status=ok
// SIG undefined FUN_149343132(void)

undefined8 * FUN_149343132(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d578) {
    FUN_144b3d300(&DAT_14cc0d578);
    if (DAT_14cc0d578 == -1) {
      FUN_140056680(&DAT_14cc0d568,L"Transform");
      atexit((_func_5014 *)&LAB_1444c4e97);
      _Init_thread_footer(&DAT_14cc0d578);
    }
  }
  return &DAT_14cc0d568;
}



// FUNCTION 1493431a6 FUN_1493431a6 body=115 status=ok
// SIG undefined FUN_1493431a6(void)

undefined8 * FUN_1493431a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d590) {
    FUN_144b3d300(&DAT_14cc0d590);
    if (DAT_14cc0d590 == -1) {
      FUN_140056680(&DAT_14cc0d580,L"Joint");
      atexit((_func_5014 *)&LAB_1444c4ea8);
      _Init_thread_footer(&DAT_14cc0d590);
    }
  }
  return &DAT_14cc0d580;
}



// FUNCTION 14934321a FUN_14934321a body=115 status=ok
// SIG undefined FUN_14934321a(void)

undefined8 * FUN_14934321a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d5a8) {
    FUN_144b3d300(&DAT_14cc0d5a8);
    if (DAT_14cc0d5a8 == -1) {
      FUN_140056680(&DAT_14cc0d598,L"LodGroup");
      atexit((_func_5014 *)&LAB_1444c4eb9);
      _Init_thread_footer(&DAT_14cc0d5a8);
    }
  }
  return &DAT_14cc0d598;
}



// FUNCTION 14934328e FUN_14934328e body=32 status=ok
// SIG undefined FUN_14934328e(void)

undefined8 FUN_14934328e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SceneNode");
  return param_2;
}



// FUNCTION 1493432ae FUN_1493432ae body=205 status=ok
// SIG undefined FUN_1493432ae(void)

undefined8 * FUN_1493432ae(longlong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_1492f5d18(param_1 + 0xd0,0,&local_28);
  if ((int)uStack_20 < 2) {
    *param_2 = 0;
  }
  else {
    FUN_140b1283a(&local_38,L"SceneGraphIcon.",&local_28);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_28 = local_38;
    uStack_20 = CONCAT44(local_2c,local_30);
    puVar1 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar1 = local_38;
    }
    FUN_1446f470e(param_2,puVar1,1);
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934337c FUN_14934337c body=305 status=ok
// SIG undefined FUN_14934337c(void)

void FUN_14934337c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar3 = FUN_1459238a6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      if (*(char *)(param_2 + 0x310) == '\x01') {
        *(undefined1 *)(param_2 + 0x310) = 0;
      }
      if (*(char *)(param_2 + 0x380) == '\x01') {
        *(undefined1 *)(param_2 + 0x380) = 0;
      }
      if (*(char *)(param_2 + 0x3f0) == '\x01') {
        *(undefined1 *)(param_2 + 0x3f0) = 0;
      }
    }
  }
  FUN_1492ef9be(param_2,local_40);
  FUN_1492f2f34(param_1,&local_30,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((longlong)local_28 == 0) {
    local_28 = 0;
  }
  else {
    lVar2 = (longlong)local_28 << 4;
    lVar3 = local_30;
    do {
      lVar1 = FUN_1492f2ba8(param_1,lVar3);
      if (lVar1 != 0) {
        FUN_14934337c(param_1,lVar1);
      }
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  FUN_1447a1747(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493434ae FUN_1493434ae body=4369 status=ok
// SIG undefined FUN_1493434ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1493434ae(longlong param_1,longlong *param_2,double *param_3,undefined8 param_4,
                       double *param_5,double *param_6,char param_7)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  void *pvVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  ulonglong uVar18;
  double *pdVar19;
  double *pdVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auStack_3c8 [32];
  double *local_3a8;
  double *local_3a0;
  char local_398;
  void *local_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  longlong local_320;
  longlong local_318 [2];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  void *local_2a8;
  int local_2a0;
  undefined4 local_29c;
  double local_298 [4];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
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
  void *local_178;
  double local_170;
  double local_168;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_2a8 = (void *)0x0;
  local_2a0 = (int)param_2[1];
  lVar17 = (longlong)local_2a0;
  pvVar15 = (void *)*param_2;
  if (lVar17 == 0) {
    local_29c = 0;
  }
  else {
    FUN_1446dd670(&local_2a8,local_2a0,0);
    memcpy(local_2a8,pvVar15,lVar17 * 2);
  }
  cVar7 = FUN_140c44378(*(undefined8 *)(param_1 + 0x28),&local_2a8);
  if (cVar7 == '\0') {
    cVar7 = FUN_140c44378(*(undefined8 *)(param_1 + 0x28),param_1 + 0x60);
    if (cVar7 == '\0') {
      uVar18 = 0;
      goto LAB_1493435db;
    }
    FUN_144a787a6(&local_2a8,param_1 + 0x60);
  }
  if (param_7 == '\0') {
    if (((ulonglong)param_3[0xc] & 1) == 0) goto LAB_1493436d1;
  }
  else {
    if (((ulonglong)param_3[0xc] & 1) != 0) {
      *(undefined1 *)(param_3 + 0xc) = 0;
    }
LAB_1493436d1:
    auVar45 = _DAT_149934d80;
    local_308 = 0.0;
    dStack_300 = 0.0;
    local_2f8 = 0.0;
    dStack_2f0 = 1.0;
    local_2e8 = 0.0;
    dStack_2e0 = 0.0;
    local_2d8 = 0.0;
    dStack_2d0 = 0.0;
    dVar44 = (double)DAT_149934d80;
    dVar24 = DAT_149934d80._8_8_;
    local_2c8 = _DAT_149934d80;
    local_2b8 = 1.0;
    dStack_2b0 = 0.0;
    FUN_1444bed62(&local_320,&local_2a8,*(undefined8 *)(param_1 + 0x28));
    if (local_320 == 0) {
LAB_149343782:
      if (param_3 != (double *)&DAT_14c846480) {
        pdVar19 = (double *)&DAT_14c846480;
        pdVar20 = param_3;
        for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
          *pdVar20 = *pdVar19;
          pdVar19 = pdVar19 + 1;
          pdVar20 = pdVar20 + 1;
        }
        goto LAB_1493437a0;
      }
    }
    else {
      cVar7 = FUN_140c44378(local_320,local_318);
      if ((((cVar7 == '\0') || (iVar8 = FUN_1419073b0(local_320,local_318), iVar8 != 0x2c)) ||
          (local_320 == 0)) || (lVar17 = FUN_1493066f2(local_320,local_318,&local_308), lVar17 != 1)
         ) goto LAB_149343782;
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      uVar11 = FUN_1492f08a8();
      uVar9 = FUN_140c44378(uVar14,uVar11);
      if ((char)uVar9 == '\0') {
        auVar32 = *(undefined1 (*) [16])(param_5 + 8);
        dVar52 = auVar32._0_8_;
        dVar53 = auVar32._8_8_;
        auVar37 = *(undefined1 (*) [16])(param_5 + 10);
        dVar51 = auVar37._0_8_;
        uVar47 = auVar37._0_4_;
        uVar48 = auVar37._4_4_;
        uVar49 = auVar37._8_4_;
        uVar50 = auVar37._12_4_;
        dVar21 = local_2c8._0_8_;
        dVar25 = local_2c8._8_8_;
        auVar36._8_8_ = dStack_2b0;
        auVar36._0_8_ = local_2b8;
        auVar30 = minpd(local_2c8,auVar32);
        auVar36 = minpd(auVar36,auVar37);
        auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
        auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
        iVar8 = movmskpd(uVar9,auVar31);
        auVar30._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
        auVar30._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
        uVar13 = movmskpd((int)uVar14,auVar30);
        if ((uVar13 & 0x3fffffff) != 0 || iVar8 != 0) {
          dVar43 = *param_5;
          dVar5 = param_5[1];
          dVar42 = param_5[2];
          dVar34 = dVar5 + dVar5;
          dVar40 = dVar42 + dVar42;
          dVar35 = dVar43 * (dVar43 + dVar43);
          local_1a8 = (1.0 - (dVar35 + dVar5 * dVar34)) * dVar51;
          dVar39 = param_5[3];
          dVar41 = dVar40 * dVar39;
          dVar29 = (dVar43 + dVar43) * param_5[3];
          dVar39 = dVar34 * dVar39;
          local_1b8 = (dVar39 + *param_5 * dVar40) * dVar51;
          dVar26 = dVar51 * local_2b8;
          dVar28 = auVar37._8_8_ * dStack_2b0;
          local_1f8 = (dVar44 - (dVar42 * dVar40 + dVar5 * dVar34)) * dVar52;
          dVar42 = (dVar24 - (dVar42 * dVar40 + dVar35)) * dVar53;
          dStack_1f0 = (dVar34 * dVar43 + dVar41) * dVar52;
          local_1c8 = (dVar40 * dVar5 + dVar29) * dVar53;
          dStack_1b0 = (dVar40 * dVar5 - dVar29) * dVar51;
          local_1e8 = (*param_5 * dVar40 - dVar39) * dVar52;
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar42,0);
          local_1d8._0_8_ = (dVar34 * dVar43 - dVar41) * dVar53;
          local_1d8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = param_5[4];
          dStack_190 = param_5[5];
          local_188 = param_5[6];
          uStack_180 = 0x3ff0000000000000;
          dVar39 = dStack_300 + dStack_300;
          dVar42 = local_2f8 + local_2f8;
          dVar51 = local_308 * (local_308 + local_308);
          local_228 = (1.0 - (dVar51 + dStack_300 * dVar39)) * local_2b8;
          dVar43 = (local_308 + local_308) * dStack_2f0;
          local_238 = (dVar39 * dStack_2f0 + local_308 * dVar42) * local_2b8;
          local_258 = (dVar39 * local_308 - dVar42 * dStack_2f0) * dVar25;
          dStack_230 = (dVar42 * dStack_300 - dVar43) * local_2b8;
          dVar52 = dVar52 * dVar21;
          dVar53 = dVar53 * dVar25;
          local_278 = (dVar44 - (local_2f8 * dVar42 + dStack_300 * dVar39)) * dVar21;
          dStack_250 = (dVar24 - (local_2f8 * dVar42 + dVar51)) * dVar25;
          dStack_270 = (dVar39 * local_308 + dVar42 * dStack_2f0) * dVar21;
          local_248 = (dVar42 * dStack_300 + dVar43) * dVar25;
          local_268 = (local_308 * dVar42 - dVar39 * dStack_2f0) * dVar21;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = local_2e8;
          dStack_210 = dStack_2e0;
          local_208 = local_2d8;
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_178);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar32._8_8_ = -(ulonglong)(0.0 <= dVar53);
          auVar32._0_8_ = -(ulonglong)(0.0 <= dVar52);
          auVar32 = blendvpd(_DAT_149936790,auVar45,auVar32);
          dVar44 = (double)(~-(ulonglong)(0.0 <= dVar26) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= dVar26) & 0x3ff0000000000000);
          dVar24 = auVar32._0_8_;
          local_168 = local_168 * dVar24;
          local_170 = local_170 * dVar24;
          local_178 = (void *)((double)local_178 * dVar24);
          dVar24 = auVar32._8_8_;
          local_148 = local_148 * dVar24;
          local_150 = local_150 * dVar24;
          local_158 = dVar24 * local_158;
          local_128 = local_128 * dVar44;
          local_130 = local_130 * dVar44;
          local_138 = dVar44 * local_138;
          pdVar19 = &local_388;
          goto LAB_1493442a8;
        }
        dVar5 = *param_5;
        dVar34 = param_5[1];
        dVar40 = param_5[2];
        dVar41 = param_5[3];
        dVar44 = param_5[3];
        dVar24 = param_5[3];
        dVar39 = param_5[1];
        dVar26 = param_5[1];
        dVar28 = param_5[2];
        dVar42 = param_5[2];
        dVar29 = dStack_300 * dVar28 * -1.0 +
                 local_2f8 * dVar39 + dStack_2f0 * *param_5 * 1.0 + local_308 * dVar44;
        dVar35 = local_308 * dVar42 * 1.0 +
                 dStack_2f0 * dVar26 + local_2f8 * *param_5 * -1.0 + dStack_300 * dVar24;
        auVar45._0_8_ =
             dStack_2f0 * dVar28 * 1.0 +
             ((*param_5 * dStack_300 * 1.0 + local_2f8 * dVar44) - local_308 * dVar39);
        auVar45._8_8_ =
             local_2f8 * dVar42 * -1.0 +
             ((*param_5 * local_308 * -1.0 + dStack_2f0 * dVar24) - dStack_300 * dVar26);
        dVar52 = local_2e8 * dVar52;
        dVar53 = dStack_2e0 * dVar53;
        dVar51 = local_2d8 * dVar51;
        dVar42 = dStack_2d0 * auVar37._8_8_;
        dVar39 = dVar53 * dVar5 - dVar34 * dVar52;
        dVar26 = dVar51 * dVar34 - dVar40 * dVar53;
        dVar28 = dVar52 * dVar40 - dVar5 * dVar51;
        dVar43 = dVar42 * dVar41 - dVar41 * dVar42;
        dVar26 = dVar26 + dVar26;
        dVar28 = dVar28 + dVar28;
        dVar39 = dVar39 + dVar39;
        dVar43 = dVar43 + dVar43;
        local_118 = (dVar39 * dVar34 - dVar40 * dVar28) + dVar44 * dVar26 + dVar52 + param_5[4];
        dStack_110 = (dVar26 * dVar40 - dVar39 * dVar5) + dVar24 * dVar28 + dVar53 + param_5[5];
        local_108 = (dVar28 * dVar5 - dVar34 * dVar26) + dVar44 * dVar39 + dVar51 + param_5[6];
        dVar44 = (dVar43 * dVar41 - dVar43 * dVar41) + dVar24 * dVar43 + dVar42 + param_5[7];
LAB_1493444ed:
        dVar52 = dVar21 * auVar32._0_8_;
        dVar53 = dVar25 * auVar32._8_8_;
        dVar26 = local_2b8 * (double)CONCAT44(uVar48,uVar47);
        dVar28 = dStack_2b0 * (double)CONCAT44(uVar50,uVar49);
      }
      else {
        local_388 = 0.0;
        dStack_380 = 0.0;
        local_378 = 0.0;
        dStack_370 = 1.0;
        local_368 = 0.0;
        dStack_360 = 0.0;
        local_358 = 0.0;
        dStack_350 = 0.0;
        local_348 = auVar45;
        local_338 = 1.0;
        dStack_330 = 0.0;
        FUN_1492ef4c6(param_1,&local_178);
        lVar12 = FUN_1492f2ba8(param_4,&local_178);
        lVar17 = 0;
        if (lVar12 == 0) {
LAB_14934385c:
          lVar12 = 0;
        }
        else {
          lVar17 = FUN_1459238a6();
          piVar1 = (int *)(lVar17 + 0x38);
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *piVar1) ||
             (lVar17 = lVar17 + 0x30,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*piVar1 * 8) != lVar17
             )) goto LAB_14934385c;
        }
        iVar8 = (int)lVar17;
        pvVar15 = local_178;
        if (local_178 != (void *)0x0) {
          iVar8 = FUN_1400020a8();
        }
        uVar9 = SUB84(pvVar15,0);
        if (lVar12 == 0) goto LAB_149343edd;
        iVar8 = (int)param_2[1];
        if (iVar8 == *(int *)(param_1 + 0x68)) {
          if (1 < iVar8) {
            pwVar16 = (wchar_t *)*param_2;
            iVar10 = wcscmp(pwVar16,*(wchar_t **)(param_1 + 0x60));
            uVar9 = SUB84(pwVar16,0);
            if (iVar10 != 0) goto LAB_149343e5d;
          }
LAB_1493438a5:
          lVar17 = lVar12 + 0x2b0;
          uVar13 = *(uint *)(lVar12 + 0x68);
          local_390 = *(void **)(lVar12 + 0x60);
LAB_1493438c0:
          local_178 = (void *)0x0;
          local_170 = (double)CONCAT44(local_170._4_4_,uVar13);
          if ((longlong)(int)uVar13 == 0) {
            local_170 = (double)(ulonglong)uVar13;
          }
          else {
            FUN_1446dd670(&local_178,uVar13,0);
            memcpy(local_178,local_390,(longlong)(int)uVar13 * 2);
          }
          local_398 = param_7;
          local_3a0 = &local_388;
          local_3a8 = param_5;
          iVar8 = FUN_1493434ae(lVar12,&local_178,lVar17,param_4);
          uVar9 = (undefined4)lVar12;
        }
        else {
          if (*(int *)(param_1 + 0x68) + iVar8 == 1) goto LAB_1493438a5;
LAB_149343e5d:
          if (iVar8 != *(int *)(param_1 + 0x78)) {
            if (*(int *)(param_1 + 0x78) + iVar8 == 1) goto LAB_149343e7d;
LAB_149343ea3:
            if (iVar8 != *(int *)(param_1 + 0x88)) {
              iVar8 = *(int *)(param_1 + 0x88) + iVar8;
              if (iVar8 == 1) goto LAB_14934459a;
              goto LAB_149343edd;
            }
            if (1 < iVar8) {
              pwVar16 = (wchar_t *)*param_2;
              iVar8 = wcscmp(pwVar16,*(wchar_t **)(param_1 + 0x80));
              uVar9 = SUB84(pwVar16,0);
              if (iVar8 != 0) goto LAB_149343edd;
            }
LAB_14934459a:
            lVar17 = lVar12 + 0x390;
            uVar13 = *(uint *)(lVar12 + 0x88);
            local_390 = *(void **)(lVar12 + 0x80);
            goto LAB_1493438c0;
          }
          if (1 < iVar8) {
            pwVar16 = (wchar_t *)*param_2;
            iVar10 = wcscmp(pwVar16,*(wchar_t **)(param_1 + 0x70));
            uVar9 = SUB84(pwVar16,0);
            if (iVar10 != 0) goto LAB_149343ea3;
          }
LAB_149343e7d:
          local_3a8 = (double *)CONCAT71(local_3a8._1_7_,param_7);
          iVar8 = FUN_149340242(lVar12,param_4,param_5,&local_388);
          uVar9 = (undefined4)lVar12;
        }
LAB_149343edd:
        dVar52 = local_348._0_8_;
        dVar53 = local_348._8_8_;
        auVar37._8_8_ = dStack_330;
        auVar37._0_8_ = local_338;
        uVar47 = SUB84(local_338,0);
        uVar48 = (undefined4)((ulonglong)local_338 >> 0x20);
        uVar49 = SUB84(dStack_330,0);
        uVar50 = (undefined4)((ulonglong)dStack_330 >> 0x20);
        dVar21 = local_2c8._0_8_;
        dVar25 = local_2c8._8_8_;
        auVar6._8_8_ = dStack_2b0;
        auVar6._0_8_ = local_2b8;
        auVar32 = minpd(local_2c8,local_348);
        auVar37 = minpd(auVar6,auVar37);
        auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
        auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
        iVar8 = movmskpd(iVar8,auVar33);
        auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
        auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
        uVar13 = movmskpd(uVar9,auVar38);
        if ((uVar13 & 0x3fffffff) == 0 && iVar8 == 0) {
          dVar29 = dStack_300 * local_378 * -1.0 +
                   local_2f8 * dStack_380 + dStack_2f0 * local_388 * 1.0 + local_308 * dStack_370;
          dVar35 = local_308 * local_378 * 1.0 +
                   dStack_2f0 * dStack_380 + local_2f8 * local_388 * -1.0 + dStack_300 * dStack_370;
          auVar45._0_8_ =
               dStack_2f0 * local_378 * 1.0 +
               ((local_388 * dStack_300 * 1.0 + local_2f8 * dStack_370) - local_308 * dStack_380);
          auVar45._8_8_ =
               local_2f8 * local_378 * -1.0 +
               ((local_388 * local_308 * -1.0 + dStack_2f0 * dStack_370) - dStack_300 * dStack_380);
          dVar52 = local_2e8 * dVar52;
          dVar53 = dStack_2e0 * dVar53;
          dVar39 = local_2d8 * local_338;
          dVar26 = dStack_2d0 * dStack_330;
          dVar44 = dVar53 * local_388 - dStack_380 * dVar52;
          dVar24 = dVar39 * dStack_380 - local_378 * dVar53;
          dVar51 = dVar52 * local_378 - local_388 * dVar39;
          dVar28 = dVar26 * dStack_370 - dStack_370 * dVar26;
          dVar24 = dVar24 + dVar24;
          dVar51 = dVar51 + dVar51;
          dVar44 = dVar44 + dVar44;
          dVar28 = dVar28 + dVar28;
          local_118 = (dVar44 * dStack_380 - local_378 * dVar51) + dStack_370 * dVar24 + dVar52 +
                      local_368;
          dStack_110 = (dVar24 * local_378 - dVar44 * local_388) + dStack_370 * dVar51 + dVar53 +
                       dStack_360;
          local_108 = (dVar51 * local_388 - dStack_380 * dVar24) + dStack_370 * dVar44 + dVar39 +
                      local_358;
          dVar44 = (dVar28 * dStack_370 - dVar28 * dStack_370) + dStack_370 * dVar28 + dVar26 +
                   dStack_350;
          auVar32 = local_348;
          goto LAB_1493444ed;
        }
        dVar39 = dStack_380 + dStack_380;
        dVar42 = local_378 + local_378;
        dVar51 = local_388 * (local_388 + local_388);
        local_1a8 = (1.0 - (dVar51 + dStack_380 * dVar39)) * local_338;
        dVar43 = (local_388 + local_388) * dStack_370;
        local_1b8 = (dVar39 * dStack_370 + local_388 * dVar42) * local_338;
        dVar26 = local_338 * local_2b8;
        dVar28 = dStack_330 * dStack_2b0;
        dStack_1b0 = (dVar42 * dStack_380 - dVar43) * local_338;
        local_1f8 = (dVar44 - (local_378 * dVar42 + dStack_380 * dVar39)) * dVar52;
        dVar51 = (dVar24 - (local_378 * dVar42 + dVar51)) * dVar53;
        dStack_1f0 = (dVar39 * local_388 + dVar42 * dStack_370) * dVar52;
        local_1c8 = (dVar42 * dStack_380 + dVar43) * dVar53;
        local_1e8 = (local_388 * dVar42 - dVar39 * dStack_370) * dVar52;
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar51,0);
        local_1d8._0_8_ = (dVar39 * local_388 - dVar42 * dStack_370) * dVar53;
        local_1d8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_368;
        dStack_190 = dStack_360;
        local_188 = local_358;
        uStack_180 = 0x3ff0000000000000;
        dVar39 = dStack_300 + dStack_300;
        dVar42 = local_2f8 + local_2f8;
        dVar51 = local_308 * (local_308 + local_308);
        local_228 = (1.0 - (dVar51 + dStack_300 * dVar39)) * local_2b8;
        dVar43 = (local_308 + local_308) * dStack_2f0;
        local_238 = (dVar39 * dStack_2f0 + local_308 * dVar42) * local_2b8;
        local_258 = (dVar39 * local_308 - dVar42 * dStack_2f0) * dVar25;
        dStack_230 = (dVar42 * dStack_300 - dVar43) * local_2b8;
        dVar52 = dVar52 * dVar21;
        dVar53 = dVar53 * dVar25;
        local_278 = (dVar44 - (local_2f8 * dVar42 + dStack_300 * dVar39)) * dVar21;
        dStack_250 = (dVar24 - (local_2f8 * dVar42 + dVar51)) * dVar25;
        dStack_270 = (dVar39 * local_308 + dVar42 * dStack_2f0) * dVar21;
        local_248 = (dVar42 * dStack_300 + dVar43) * dVar25;
        local_268 = (local_308 * dVar42 - dVar39 * dStack_2f0) * dVar21;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = local_2e8;
        dStack_210 = dStack_2e0;
        local_208 = local_2d8;
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_178);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar22._8_8_ = -(ulonglong)(0.0 <= dVar53);
        auVar22._0_8_ = -(ulonglong)(0.0 <= dVar52);
        auVar32 = blendvpd(_DAT_149936790,auVar45,auVar22);
        dVar44 = (double)(~-(ulonglong)(0.0 <= dVar26) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= dVar26) & 0x3ff0000000000000);
        dVar24 = auVar32._0_8_;
        local_168 = local_168 * dVar24;
        local_170 = local_170 * dVar24;
        local_178 = (void *)((double)local_178 * dVar24);
        dVar24 = auVar32._8_8_;
        local_148 = local_148 * dVar24;
        local_150 = local_150 * dVar24;
        local_158 = dVar24 * local_158;
        local_128 = local_128 * dVar44;
        local_130 = local_130 * dVar44;
        local_138 = dVar44 * local_138;
        pdVar19 = local_298;
LAB_1493442a8:
        FUN_14481fd10(pdVar19,&local_178);
        dVar44 = *pdVar19;
        dVar24 = pdVar19[1];
        dVar51 = pdVar19[2];
        dVar21 = pdVar19[3];
        dVar25 = dVar51 * dVar51 + dVar44 * dVar44;
        dVar39 = dVar21 * dVar21 + dVar24 * dVar24;
        auVar27._0_8_ = dVar25 + dVar39;
        auVar27._8_8_ = dVar25 + dVar39;
        auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
        auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
        auVar32 = sqrtpd(auVar27,auVar27);
        auVar45 = divpd(auVar45,auVar32);
        auVar46._0_8_ = auVar45._0_8_ * dVar51;
        auVar46._8_8_ = auVar45._8_8_ * dVar21;
        dVar29 = (double)((ulonglong)(dVar44 * auVar45._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
        dVar35 = (double)((ulonglong)(dVar24 * auVar45._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
        auVar45 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar23);
        dVar44 = 0.0;
      }
      *param_3 = dVar29;
      param_3[1] = dVar35;
      *(undefined1 (*) [16])(param_3 + 2) = auVar45;
      auVar2._8_4_ = SUB84(dStack_110,0);
      auVar2._0_8_ = local_118;
      auVar2._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
      *(undefined1 (*) [16])(param_3 + 4) = auVar2;
      param_3[6] = local_108;
      param_3[7] = dVar44;
      auVar4._8_4_ = SUB84(dVar53,0);
      auVar4._0_8_ = dVar52;
      auVar4._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
      *(undefined1 (*) [16])(param_3 + 8) = auVar4;
      auVar3._8_4_ = SUB84(dVar28,0);
      auVar3._0_8_ = dVar26;
      auVar3._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      *(undefined1 (*) [16])(param_3 + 10) = auVar3;
LAB_1493437a0:
      *(undefined1 *)(param_3 + 0xc) = 1;
    }
    if (local_318[0] != 0) {
      FUN_1400020a8();
    }
  }
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *param_6 = *param_3;
    param_3 = param_3 + 1;
    param_6 = param_6 + 1;
  }
  uVar18 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
LAB_1493435db:
  if (local_2a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 1493445c0 FUN_1493445c0 body=75 status=ok
// SIG undefined FUN_1493445c0(void)

void FUN_1493445c0(void)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_18 = FUN_1444c5200;
  FUN_1492f3f94();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934460c FUN_14934460c body=535 status=ok
// SIG undefined FUN_14934460c(void)

undefined8 * FUN_14934460c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_c8 [44];
  undefined1 local_9c [4];
  longlong local_98 [2];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[4] = 0;
  iVar5 = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_14934f9ae(param_2,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar3)) {
      *(int *)(param_2 + 9) = iVar3;
      FUN_1468439c8(param_2);
    }
  }
  plVar1 = param_1 + 2;
  local_60 = (longlong *)&DAT_100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar5 = (int)param_1[5];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_1;
  if ((iStack_4c != iVar5) || (local_58 != plVar1)) {
    do {
      lVar2 = *local_88 + (longlong)iStack_6c * 0x48;
      local_98[0] = 0;
      local_98[1] = 0;
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        FUN_1492ff8ec(*(longlong *)(lVar2 + 0x10),lVar2 + 0x18,local_98);
      }
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FUN_149302adc(*(longlong *)(lVar2 + 0x28),lVar2 + 0x30,local_9c);
      }
      local_60 = local_98;
      local_58 = (longlong *)local_9c;
      FUN_14934fb4c(param_2,local_3c);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_1 || (local_78 != plVar1 || iStack_6c != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149344826 FUN_149344826 body=12 status=ok
// SIG undefined FUN_149344826(void)

void FUN_149344826(longlong param_1)

{
  FUN_1492f1448(param_1 + 600);
  return;
}



// FUNCTION 149344832 FUN_149344832 body=12 status=ok
// SIG undefined FUN_149344832(void)

void FUN_149344832(longlong param_1)

{
  FUN_1492f1448(param_1 + 0x278);
  return;
}



// FUNCTION 149344844 FUN_149344844 body=336 status=ok
// SIG undefined FUN_149344844(void)

void FUN_149344844(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149344996(local_20,local_48 + 2,local_48);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149344996 FUN_149344996 body=106 status=ok
// SIG undefined FUN_149344996(void)

undefined4 FUN_149344996(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_149345d5e(local_38);
  uVar1 = FUN_1492ee142(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149344a08 FUN_149344a08 body=411 status=ok
// SIG undefined FUN_149344a08(void)

void FUN_149344a08(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48 [5];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149344ba4(local_20,local_48 + 2,local_48,local_4c);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149344ba4 FUN_149344ba4 body=494 status=ok
// SIG undefined FUN_149344ba4(void)

undefined4
FUN_149344ba4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 auStack_198 [32];
  longlong local_178 [2];
  longlong local_168;
  undefined8 uStack_160;
  undefined2 *local_150;
  wchar_t *local_148;
  wchar_t *local_140;
  undefined1 local_138;
  undefined2 local_130 [128];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_150 = local_130;
  local_138 = 0;
  local_140 = (wchar_t *)&local_30;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  local_148 = local_150;
  FUN_1449668a2(&local_150,*param_3,iVar1);
  pwVar4 = local_148;
  if (local_140 <= local_148 + 1) {
    FUN_140213274(&local_150,1);
    pwVar4 = local_148;
  }
  *pwVar4 = 0x3a;
  local_148 = pwVar4 + 1;
  if (local_140 <= pwVar4 + 0xc) {
    FUN_140213274(&local_150,0xb);
  }
  builtin_wcsncpy(local_148,L"__ByIndex__",0xb);
  pwVar4 = local_148 + 0xb;
  pwVar3 = local_148 + 0xc;
  local_148 = pwVar4;
  if (local_140 <= pwVar3) {
    FUN_140213274(&local_150,1);
  }
  *local_148 = L':';
  local_148 = local_148 + 1;
  local_168 = 0;
  uStack_160 = 0;
  FUN_144a83b10(&local_168,param_4);
  iVar1 = (int)uStack_160 + -1;
  if ((int)uStack_160 == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(&local_150,local_168,iVar1);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  *local_148 = L'\0';
  FUN_140056680(&local_168,local_150);
  FUN_149345d5e(local_178,param_2);
  uVar2 = FUN_1492ee142(param_1,local_178,&local_168);
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  FUN_144724f3c(&local_150);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149344d9a FUN_149344d9a body=426 status=ok
// SIG undefined FUN_149344d9a(void)

void FUN_149344d9a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [7];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_58[4] = 0;
  local_58[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 4);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149344f46(local_20,local_58 + 4,local_58 + 2,local_58);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149344f46 FUN_149344f46 body=211 status=ok
// SIG undefined FUN_149344f46(void)

undefined4 FUN_149344f46(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_4 + 8) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  FUN_1449b8608(local_50,param_3,&DAT_149e31048);
  FUN_144a7dea0(local_40,local_50,param_4);
  FUN_149345d5e(local_60,param_2);
  uVar1 = FUN_1492ee142(param_1,local_60,local_40);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345034 FUN_149345034 body=259 status=ok
// SIG undefined FUN_149345034(void)

void FUN_149345034(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149345138(local_20,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345138 FUN_149345138 body=466 status=ok
// SIG undefined FUN_149345138(void)

/* WARNING: Removing unreachable block (ram,0x0001493452a2) */

void FUN_149345138(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1492f0b1e(0,&local_58);
  lVar3 = local_58;
  lVar7 = (longlong)(int)uStack_50;
  uVar6 = 0;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      local_68 = (void *)0x0;
      uVar5 = *(uint *)(lVar3 + 8 + lVar8);
      pvVar1 = *(void **)(lVar3 + lVar8);
      local_60 = CONCAT44(local_60._4_4_,uVar5);
      if ((longlong)(int)uVar5 == 0) {
        local_60 = (ulonglong)uVar5;
      }
      else {
        FUN_1446dd670(&local_68,uVar5,0);
        memcpy(local_68,pvVar1,(longlong)(int)uVar5 * 2);
      }
      cVar4 = FUN_149345a42(&local_68);
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (cVar4 != '\0') {
        local_78 = (void *)0x0;
        local_70 = *(int *)(lVar3 + 8 + lVar8);
        lVar9 = (longlong)local_70;
        pvVar1 = *(void **)(lVar3 + lVar8);
        if (lVar9 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,pvVar1,lVar9 * 2);
        }
        FUN_149345f98(&local_68);
        lVar9 = param_2[1];
        uVar5 = (int)lVar9 + 1;
        *(uint *)(param_2 + 1) = uVar5;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
          FUN_1447a1bd6(param_2);
        }
        lVar2 = *param_2;
        lVar9 = (longlong)(int)lVar9 * 0x10;
        *(undefined8 *)(lVar2 + lVar9) = 0;
        *(void **)(lVar2 + lVar9) = local_68;
        *(undefined4 *)(lVar2 + 8 + lVar9) = (undefined4)local_60;
        *(undefined4 *)(lVar2 + 0xc + lVar9) = local_60._4_4_;
        local_60 = 0;
        local_68 = (void *)0x0;
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar7 * 0x10 != lVar8);
    uVar6 = uStack_50 & 0xffffffff;
  }
  FUN_149307011(local_58,uVar6);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149345312 FUN_149345312 body=456 status=ok
// SIG undefined FUN_149345312(void)

void FUN_149345312(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [7];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar2 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493454dc(local_30,local_68 + 4,plVar2,plVar3);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493454dc FUN_1493454dc body=163 status=ok
// SIG undefined FUN_1493454dc(void)

undefined4
FUN_1493454dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_149345d5e(local_38);
  uVar1 = FUN_1492ef716(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((char)uVar1 != '\0') {
    FUN_140056680(local_38,&DAT_149e31048);
    FUN_1407cdba6(param_3,local_38,param_3,param_4);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345586 FUN_149345586 body=244 status=ok
// SIG undefined FUN_149345586(void)

void FUN_149345586(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14934567c(local_20,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934567c FUN_14934567c body=318 status=ok
// SIG undefined FUN_14934567c(void)

ulonglong FUN_14934567c(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong unaff_RBP;
  undefined7 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  FUN_149345138(0,&local_48);
  if ((longlong)(int)uStack_40 == 0) {
    uVar5 = 0;
    unaff_RBP = 0;
  }
  else {
    plVar10 = local_48 + (longlong)(int)uStack_40 * 2;
    plVar7 = local_48;
    do {
      FUN_1400021e4(param_2,&local_58);
      iVar4 = (int)plVar7[1];
      uVar6 = (undefined7)(unaff_RBP >> 8);
      if (iVar4 == local_50) {
        unaff_RBP = CONCAT71(uVar6,1);
        if (1 < iVar4) {
          lVar8 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*plVar7 + lVar8);
            uVar3 = (uint)uVar1;
            uVar2 = *(ushort *)(local_58 + lVar8);
            uVar9 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14934570d;
              }
              iVar4 = uVar3 - uVar9;
              goto LAB_149345767;
            }
            if (uVar1 == 0) break;
LAB_14934570d:
            lVar8 = lVar8 + 2;
          }
          iVar4 = 0;
LAB_149345767:
          unaff_RBP = CONCAT71(uVar6,iVar4 == 0);
        }
      }
      else {
        unaff_RBP = CONCAT71(uVar6,local_50 + iVar4 == 1);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      plVar7 = plVar7 + 2;
    } while ((byte)(plVar7 == plVar10 | (byte)unaff_RBP) != 1);
    uVar5 = uStack_40 & 0xffffffff;
  }
  FUN_1447a1747(local_48,uVar5);
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493457c2 FUN_1493457c2 body=244 status=ok
// SIG undefined FUN_1493457c2(void)

void FUN_1493457c2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493458b8(local_20,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493458b8 FUN_1493458b8 body=215 status=ok
// SIG undefined FUN_1493458b8(void)

undefined4 FUN_1493458b8(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  ulonglong uStack_40;
  void *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,&local_48);
  FUN_149346170(&local_38,&local_48);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_38;
  local_48 = (void *)0x0;
  uStack_40 = (ulonglong)local_30;
  if ((longlong)(int)local_30 != 0) {
    FUN_1446dd670(&local_48,local_30,0);
    memcpy(local_48,_Src,(longlong)(int)local_30 * 2);
  }
  uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,&local_48);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345996 FUN_149345996 body=170 status=ok
// SIG undefined FUN_149345996(void)

void FUN_149345996(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149345a42(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345a42 FUN_149345a42 body=184 status=ok
// SIG undefined FUN_149345a42(void)

undefined4 FUN_149345a42(undefined8 param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined1 auStack_168 [40];
  wchar_t *local_140;
  undefined1 *local_138;
  ulonglong *local_130;
  undefined1 local_128;
  wchar_t local_120 [7];
  undefined1 auStack_112 [242];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_128 = 0;
  local_130 = &local_20;
  local_120[0] = L'I';
  local_120[1] = L'n';
  local_120[2] = L'p';
  local_120[3] = L'u';
  stack0xfffffffffffffee8 = 0x3a00730074;
  local_138 = auStack_112;
  local_140 = local_120;
  if (local_120 == (wchar_t *)0x0) {
    sVar2 = 0;
  }
  else {
    sVar2 = wcslen(local_120);
  }
  uVar1 = FUN_144a791f8(param_1,local_120,sVar2,1);
  FUN_144724f3c(&local_140);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345b02 FUN_149345b02 body=170 status=ok
// SIG undefined FUN_149345b02(void)

void FUN_149345b02(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149345bae(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345bae FUN_149345bae body=189 status=ok
// SIG undefined FUN_149345bae(void)

undefined4 FUN_149345bae(undefined8 param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined1 auStack_168 [40];
  wchar_t *local_140;
  wchar_t *local_138;
  ulonglong *local_130;
  undefined1 local_128;
  wchar_t local_120;
  wchar_t local_11e [127];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_128 = 0;
  local_130 = &local_20;
  local_120 = L':';
  builtin_wcsncpy(local_11e,L"Parameter",10);
  local_138 = local_11e + 9;
  local_140 = &local_120;
  if (&local_120 == (wchar_t *)0x0) {
    sVar2 = 0;
  }
  else {
    sVar2 = wcslen(&local_120);
  }
  uVar1 = FUN_144a38768(param_1,&local_120,sVar2,1);
  FUN_144724f3c(&local_140);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345c6c FUN_149345c6c body=241 status=ok
// SIG undefined FUN_149345c6c(void)

void FUN_149345c6c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149345d5e(&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345d5e FUN_149345d5e body=327 status=ok
// SIG undefined FUN_149345d5e(void)

undefined8 FUN_149345d5e(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 *local_130;
  ulonglong *local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined2 local_10a [121];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &local_118;
  local_120 = 0;
  local_128 = &local_18;
  local_118 = 0x750070006e0049;
  local_110 = 0x730074;
  local_10c = 0x3a;
  local_130 = (undefined8 *)local_10a;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(&local_138,*param_2,iVar1);
  puVar2 = local_130;
  if (local_128 <= (ulonglong *)((longlong)local_130 + 2)) {
    FUN_140213274(&local_138,1);
    puVar2 = local_130;
  }
  *(undefined2 *)puVar2 = 0x3a;
  local_130 = (undefined8 *)((longlong)puVar2 + 2);
  if (local_128 <= (ulonglong *)((longlong)puVar2 + 0x10)) {
    FUN_140213274(&local_138,7);
  }
  *(undefined8 *)((longlong)local_130 + 6) = 0x7400630065006e;
  *local_130 = 0x6e006e006f0043;
  *(undefined2 *)((longlong)local_130 + 0xe) = 0;
  local_130 = (undefined8 *)((longlong)local_130 + 0xe);
  FUN_140056680(param_1,local_138);
  FUN_144724f3c(&local_138);
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345ea6 FUN_149345ea6 body=241 status=ok
// SIG undefined FUN_149345ea6(void)

void FUN_149345ea6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149345f98(&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149345f98 FUN_149345f98 body=228 status=ok
// SIG undefined FUN_149345f98(void)

undefined8 * FUN_149345f98(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48 [2];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140056680(local_48,&DAT_149e31048);
  local_50 = 0;
  local_58 = 1;
  FUN_1407cdbc6(param_2,local_48,local_38,param_1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,&DAT_149e31048);
  local_50 = 0;
  local_58 = 1;
  FUN_1407cdbc6(param_1,local_48,param_1,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934607e FUN_14934607e body=241 status=ok
// SIG undefined FUN_14934607e(void)

void FUN_14934607e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149346170(&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346170 FUN_149346170 body=313 status=ok
// SIG undefined FUN_149346170(void)

undefined8 FUN_149346170(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  wchar_t *local_130;
  ulonglong *local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined2 local_10a [121];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &local_118;
  local_120 = 0;
  local_128 = &local_18;
  local_118 = 0x750070006e0049;
  local_110 = 0x730074;
  local_10c = 0x3a;
  local_130 = local_10a;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(&local_138,*param_2,iVar1);
  pwVar2 = local_130;
  if (local_128 <= local_130 + 1) {
    FUN_140213274(&local_138,1);
    pwVar2 = local_130;
  }
  *pwVar2 = 0x3a;
  local_130 = pwVar2 + 1;
  if (local_128 <= pwVar2 + 10) {
    FUN_140213274(&local_138,9);
  }
  builtin_wcsncpy(local_130,L"Parameter",10);
  local_130 = local_130 + 9;
  FUN_140056680(param_1,local_138);
  FUN_144724f3c(&local_138);
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493462aa FUN_1493462aa body=241 status=ok
// SIG undefined FUN_1493462aa(void)

void FUN_1493462aa(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14933bd24(&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493463ac FUN_1493463ac body=352 status=ok
// SIG undefined FUN_1493463ac(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1493463ac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  int local_40 [2];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 1);
  }
  piVar2 = local_40 + 1;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar2 = *(int **)(param_2 + 0x38);
  }
  local_40[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14934650e(param_1,local_38,piVar2,local_40[0] != 0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934650e FUN_14934650e body=118 status=ok
// SIG undefined FUN_14934650e(void)

undefined4 FUN_14934650e(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == '\0') {
    FUN_14933bd24(local_38);
  }
  else {
    FUN_149346170();
  }
  uVar1 = FUN_1492eda3c(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346592 FUN_149346592 body=344 status=ok
// SIG undefined FUN_149346592(void)

void FUN_149346592(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined1 local_48 [16];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493466ec(param_1,local_38,puVar2,local_4c != 0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493466ec FUN_1493466ec body=118 status=ok
// SIG undefined FUN_1493466ec(void)

undefined4 FUN_1493466ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == '\0') {
    FUN_14933bd24(local_38);
  }
  else {
    FUN_149346170();
  }
  uVar1 = FUN_1492edf7c(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346770 FUN_149346770 body=347 status=ok
// SIG undefined FUN_149346770(void)

void FUN_149346770(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493468cc(param_1,local_48 + 2,local_48,local_4c != 0);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493468cc FUN_1493468cc body=118 status=ok
// SIG undefined FUN_1493468cc(void)

undefined4 FUN_1493468cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == '\0') {
    FUN_14933bd24(local_38);
  }
  else {
    FUN_149346170();
  }
  uVar1 = FUN_1492ee142(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934694a FUN_14934694a body=189 status=ok
// SIG undefined FUN_14934694a(void)

void FUN_14934694a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149346a08(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346a08 FUN_149346a08 body=156 status=ok
// SIG undefined FUN_149346a08(void)

undefined4 FUN_149346a08(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetShaderType");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346aac FUN_149346aac body=178 status=ok
// SIG undefined FUN_149346aac(void)

void FUN_149346aac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149346b60(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346b60 FUN_149346b60 body=156 status=ok
// SIG undefined FUN_149346b60(void)

undefined4 FUN_149346b60(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetShaderType");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346c06 FUN_149346c06 body=189 status=ok
// SIG undefined FUN_149346c06(void)

void FUN_149346c06(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149346cc4(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346cc4 FUN_149346cc4 body=156 status=ok
// SIG undefined FUN_149346cc4(void)

undefined4 FUN_149346cc4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetMaterialFunction");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346d68 FUN_149346d68 body=178 status=ok
// SIG undefined FUN_149346d68(void)

void FUN_149346d68(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149346e1c(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346e1c FUN_149346e1c body=156 status=ok
// SIG undefined FUN_149346e1c(void)

undefined4 FUN_149346e1c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetMaterialFunction");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346ec2 FUN_149346ec2 body=175 status=ok
// SIG undefined FUN_149346ec2(void)

void FUN_149346ec2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149346f72(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149346f72 FUN_149346f72 body=159 status=ok
// SIG undefined FUN_149346f72(void)

undefined4 FUN_149346f72(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetBlendMode");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0x18,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934701c FUN_14934701c body=172 status=ok
// SIG undefined FUN_14934701c(void)

void FUN_14934701c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493470ca(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493470ca FUN_1493470ca body=159 status=ok
// SIG undefined FUN_1493470ca(void)

undefined4 FUN_1493470ca(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetIsAShaderFunction");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347170 FUN_149347170 body=175 status=ok
// SIG undefined FUN_149347170(void)

void FUN_149347170(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149347220(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347220 FUN_149347220 body=159 status=ok
// SIG undefined FUN_149347220(void)

undefined4 FUN_149347220(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetOpacityMaskClipValue");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493472ca FUN_1493472ca body=172 status=ok
// SIG undefined FUN_1493472ca(void)

void FUN_1493472ca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149347378(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347378 FUN_149347378 body=159 status=ok
// SIG undefined FUN_149347378(void)

undefined4 FUN_149347378(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetScreenSpaceReflections");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347422 FUN_149347422 body=172 status=ok
// SIG undefined FUN_149347422(void)

void FUN_149347422(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493474d0(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


